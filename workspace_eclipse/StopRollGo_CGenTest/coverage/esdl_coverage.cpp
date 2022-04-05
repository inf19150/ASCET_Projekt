/**
 * Copyright ETAS GmbH, Stuttgart, Germany. All rights reserved.
 * 
 * Contains code to record the coverage data of ESDL models.
 * For debug logging DebugView (https://docs.microsoft.com/en-us/sysinternals/downloads/debugview) can be used
 * Define the filter: "ESDL coverage:*" there
 */

#include <windows.h>
#include <set>
#include <vector>
#include <map>
#include <fstream>

extern "C" {
	#include "esdl_coverage.h"
}

// Global variables related to handling of multi-threading
#ifdef MULTI_THREAD_COVERAGE
	CRITICAL_SECTION criticalSection;
	HANDLE threadDataPersist;
	DWORD  threadDataPersistId;

	// This delta time is defined in seconds and is used, to define the coverage data write cycle.
	#define FILE_REFRESH_DELTA (3)
#endif

// Macros to enter and leave critical sections (multi-threading)
#ifdef MULTI_THREAD_COVERAGE
	#define ENTER_CRITICAL_SECTION EnterCriticalSection(&criticalSection);
	#define LEAVE_CRITICAL_SECTION LeaveCriticalSection(&criticalSection);
#else
	#define ENTER_CRITICAL_SECTION
	#define LEAVE_CRITICAL_SECTION
#endif

// Convenience debug logging macro
#ifdef DEBUG_LOGGING
	#define LOG_INSERTION(container, index, logCommand) if ((container).find((index)) == (container).end()) { (logCommand); }
#else
	#define LOG_INSERTION(container, index, logCommand)
#endif

// Log information
static void loginfo(const char *fmt, ...) {
	#ifdef DEBUG_LOGGING
		va_list args;
		va_start(args, fmt);

		char * buffer = new char[100]; /* default size guess */
		size_t bufferSize = sizeof(buffer);

		size_t n = vsnprintf(buffer, bufferSize, fmt, args);
		std::string formattedString;
		if (n >= bufferSize) {
			size_t requiredBufferSize = n + 1;
			char * bigBuffer = new char[requiredBufferSize];
			vsnprintf(bigBuffer, requiredBufferSize, fmt, args);
			formattedString = bigBuffer;
			delete bigBuffer;
		} else {
			formattedString = buffer;
		}
		OutputDebugString((LPCSTR)("esdl/coverage: " + formattedString).c_str());
		va_end(args);
		delete buffer;
	#endif
}

class StatementData {
	std::set<uint32> statements;

public:
	inline void setAsCovered(const uint32 id) {
		LOG_INSERTION(statements, id, loginfo("S%d", id));
		statements.insert(id);
	}
		
	void dump(std::ofstream& outFile) {
		for (auto statement : statements) {
			outFile << "S" << statement << std::endl;
		}
	}
};

class BranchData {
	std::vector< std::set<uint32> > branches;

public:
	BranchData() : branches(COV_BRANCH_NUMBER) {}

	inline void setAsCovered(const uint32 id, const uint32 branchIndex) {
		LOG_INSERTION(branches[id], branchIndex, loginfo("B%d %d", id, branchIndex));
		branches[id].insert(branchIndex);
	}

	void dump(std::ofstream& outFile) {
		for (uint32 branchId = 0; branchId < COV_BRANCH_NUMBER; branchId++) {
			for (const auto branchNumber : branches[branchId]) {
				outFile << "B" << branchId << " " << branchNumber << std::endl;
			}
		}
	}
};

class Decision {
	std::map<uint32, boolean> currentConditions;
	std::map<std::string, boolean> conditionCombinations;
	uint32 totalConditionNumber;

	std::string getConditionVector() {
		std::string result;
		for (uint32 i = 0; i < totalConditionNumber; i++) {
			if (currentConditions.find(i) != currentConditions.end()) {
				result += mapBooleanToToken(currentConditions[i]);
			} else {
				result += "x";
			}
		}
		return result;
	}

	inline std::string mapBooleanToToken(const boolean b) {
		return b ? "T" : "F";
	}

public:
	inline void setAsCovered(const uint32 conditionIndex, const boolean value) {
		currentConditions[conditionIndex] = value;
	}

	void setDecisionResult(const boolean decisionValue, const uint32 totalConditionNumber) {
		this->totalConditionNumber = totalConditionNumber;
		conditionCombinations[getConditionVector()] = decisionValue;
		currentConditions.clear();
	}

	void dump(std::ofstream& outFile, const uint32 id) {
		if (conditionCombinations.empty()) {
			return;
		}
		for (const auto condition : conditionCombinations) {
			outFile << "M" << id << " " << mapBooleanToToken(condition.second) << " " << condition.first << std::endl;
		}
	}
};

class DecisionData {
	std::vector<Decision> decisions;

public:
	DecisionData() : decisions(COV_DECISION_NUMBER) {}

	inline void setAsCoveredCondition(const uint32 id, const uint32 conditionIndex, const boolean value) {
		loginfo("D%d %d C%d", id, value, conditionIndex);
		decisions[id].setAsCovered(conditionIndex, value);
	}

	inline void setAsCoveredDecision(const uint32 id, const uint32 totalConditionNumber, const boolean value) {
		loginfo("D%d %d", id, value);
		decisions[id].setDecisionResult(value, totalConditionNumber);
	}

	void dump(std::ofstream& outFile) {
		for (uint32 id = 0; id < COV_DECISION_NUMBER; id++) {
			decisions[id].dump(outFile, id);
		}
	}
};

/**
 * Global variables
 */
static boolean isInitialized = false;
static boolean isStopped = false;

static StatementData* statements;
static BranchData* branches;
static DecisionData* decisions;

/*****************************
 * functions
 *****************************/
/**
 * write all recorded data to a file
 */
static void writeCoverageData() {
	std::ofstream coverageDataFile(COV_DATA_FILE);
	loginfo("open data file %s for writing", COV_DATA_FILE);
	if (coverageDataFile.is_open()) {
		ENTER_CRITICAL_SECTION
		statements->dump(coverageDataFile);
		branches->dump(coverageDataFile);
		decisions->dump(coverageDataFile);
		LEAVE_CRITICAL_SECTION
		coverageDataFile.close();
	} else {
		loginfo("data file %s cannot be opened", COV_DATA_FILE);
	}
}

/**
 * initialize coverage data on demand
 */
static void lazy_init(void) {
	if (!isInitialized) {
		isInitialized = true;
		/* lazily open the file handle */
		_initialize_coverage();
	}
}

/**
 * check if between last flush and current request 2 seconds are elapsed.
 * if yes => perform write data
 * if not => do nothing
 */
#ifdef MULTI_THREAD_COVERAGE
DWORD WINAPI trigger_flush(LPVOID lpParam) {
	while(!isStopped) {
		writeCoverageData();
		Sleep(FILE_REFRESH_DELTA*1000);
	}
	return 0;
}
#endif

/**
 * API functions
 */
void _initialize_coverage() {
	loginfo("initialize coverage");
	statements = new StatementData();
	branches = new BranchData();
	decisions = new DecisionData();

	#ifdef MULTI_THREAD_COVERAGE
		InitializeCriticalSectionAndSpinCount(&criticalSection, 500);

		threadDataPersist = CreateThread( 
				NULL,									/* default security attributes */
				0,										/* use default stack size */
				(LPTHREAD_START_ROUTINE) trigger_flush,	/* thread function name */
				NULL,									/* argument to thread function */
				0,										/* use default creation flags */
				&threadDataPersistId);					/* returns the thread identifier */
		if (threadDataPersist == NULL) {
			loginfo("cannot create thread");
		} else {
			loginfo("thread created %d", threadDataPersistId);
			SetThreadPriority(threadDataPersist, THREAD_PRIORITY_IDLE);
		}
	#endif
}

extern "C" {
	void _cov_statement_(const uint32 statementId) {
		lazy_init();
		ENTER_CRITICAL_SECTION
		statements->setAsCovered(statementId);
		LEAVE_CRITICAL_SECTION
	}

	boolean _cov_binary_branch_(const uint32 branchId, const boolean value) {
		_cov_branch_(branchId, (uint32) value); // Type cast is safe here.
		return value;
	}

	void _cov_branch_(const uint32 branchId, const uint32 branchIndex) {
		lazy_init();
		ENTER_CRITICAL_SECTION
		branches->setAsCovered(branchId, branchIndex);
		LEAVE_CRITICAL_SECTION
	}

	boolean _cov_condition_(const uint32 decisionId, const uint32 conditionId, const boolean value) {
		lazy_init();
		ENTER_CRITICAL_SECTION
		decisions->setAsCoveredCondition(decisionId, conditionId, value);
		LEAVE_CRITICAL_SECTION
		return value;
	}
	
	boolean _cov_decision_(const uint32 decisionId, const uint32 totalConditionNumber, const boolean value) {
		lazy_init();
		ENTER_CRITICAL_SECTION
		decisions->setAsCoveredDecision(decisionId, totalConditionNumber, value);
		LEAVE_CRITICAL_SECTION
		return value;
	}
}

void _finalize_coverage() {
	loginfo("finalized recording");
	isStopped = true;
	#ifndef MULTI_THREAD_COVERAGE
		writeCoverageData();
	#endif
	std::ofstream coverageDataFile;
	coverageDataFile.open(COV_DATA_SIGNAL_FILE);
	coverageDataFile.close();
	delete statements;
	delete branches;
	delete decisions;
	isInitialized = false;
}
