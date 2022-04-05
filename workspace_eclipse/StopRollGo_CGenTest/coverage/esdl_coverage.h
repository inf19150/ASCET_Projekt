/**
 * Copyright ETAS GmbH, Stuttgart, Germany. All rights reserved.
 * 
 * Contains API functions to record the coverage data of ESDL models.
 *
 * THIS IS A GENERATED FILE => DO NOT EDIT!
 */

#include "esdl_types.h"

#define COV_DATA_FILE "C:/Users/Nick/AppData/Local/Temp/ascet-coverage/7591/mapping.covDat"
#define COV_DATA_SIGNAL_FILE "C:/Users/Nick/AppData/Local/Temp/ascet-coverage/7591/coverageFinished"
#define COV_STATEMENT_NUMBER (212)
#define COV_BRANCH_NUMBER (12)
#define COV_DECISION_NUMBER (0)

extern void _initialize_coverage(void);
extern void _finalize_coverage(void);

extern void _cov_statement_(/* IN */ const uint32 statementId);
extern void _cov_branch_(/* IN */ const uint32 branchId, /* IN */ const uint32 branchIndex);
extern boolean _cov_binary_branch_(/* IN */ const uint32 branchId, /* IN */ const boolean value);
extern boolean _cov_condition_(/* IN */ const uint32 decisionId, /* IN */ const uint32 conditionId, /* IN */ const boolean value);
extern boolean _cov_decision_(/* IN */ const uint32 decisionId, /* IN */ const uint32 conditionNumber, /* IN */ const boolean value);