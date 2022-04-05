# THIS IS A GENERATED FILE => DO NOT EDIT
# Objective: compile and link a unit test exectable
# Remark: contains hard dependencies to google test framework

OUTPUT_CONFIG=Debug
TEST_BASE_NAME=UnitTests
TEST_EXE=$(OUTPUT_CONFIG)/$(TEST_BASE_NAME).exe
MKDIR_CMD=mkdir -p

# Compiler options
COMMON_FLAGS=-O0 -g3 -Wall -c -fmessage-length=0 -DESDL_PLATFORM_INTERNAL_BUILD -DOSENV_SINGLE_THREADED 
CFLAGS=$(COMMON_FLAGS) -Wno-unused -std=c17
CXXFLAGS=$(COMMON_FLAGS) -std=gnu++0x

INC=-Iinclude\
    -Isrc\
    -Itests\
    -Icoverage\
    -IC:/ETAS/ASCET-DEVELOPER7.7/configuration/org.eclipse.osgi/82/0/.cp/platform

# Google test config
GOOGLE_TEST_OBJECTS=$(OUTPUT_CONFIG)/tests/AllTests.o
OBJECTS=$(GOOGLE_TEST_OBJECTS)\
  $(OUTPUT_CONFIG)/src/StopRollGo_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_LightSM_Automatic.o\
  $(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o\
  $(OUTPUT_CONFIG)/src/environment_LightSM_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_Automatic.o\
  $(OUTPUT_CONFIG)/src/environment_TrafficLight_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_Light_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_FlashLight_Automatic.o\
  $(OUTPUT_CONFIG)/src/environment_FlashLight_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_driver_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_DrivingSM_Automatic.o\
  $(OUTPUT_CONFIG)/src/driver_DrivingSM_Automatic.o\
  $(OUTPUT_CONFIG)/src/coverageLib_CoverageInstrumentation_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testGreen_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testRed_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testYellow_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic.o\
  $(OUTPUT_CONFIG)/src/UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic.o\
  $(OUTPUT_CONFIG)/coverage/esdl_coverage.o\

LIB_PATHS_OPTIONS=\
  -L$(pathcnv SN, C:/Users/Nick/Documents/GitHub/ASCET_Projekt/workspace_eclipse/StopRollGo_CGenTest/lib)\
  -L$(pathcnv SN, C:/Users/Nick/Documents/GitHub/ASCET_Projekt/workspace_eclipse/StopRollGo)\

LIB_FILES_OPTIONS=-lgtest -lESDL_Linear_Interpolation_x86 


# Google test: compile rules google test entry component AllTests.cpp
$(OUTPUT_CONFIG)/tests/AllTests.o: tests/AllTests.cpp | $(OUTPUT_CONFIG)
	g++ $(INC) $(CXXFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/StopRollGo_Automatic.o: src/StopRollGo_Automatic.c src/StopRollGo_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_LightSM_Automatic.o: src/UnitTests_UnitTest_LightSM_Automatic.c src/UnitTests_UnitTest_LightSM_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/assertLib_Assert_Impl.o: src/assertLib_Assert_Impl.c src/assertLib_Assert_Impl.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/environment_LightSM_Automatic.o: src/environment_LightSM_Automatic.c src/environment_LightSM_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_Automatic.o: src/UnitTests_UnitTest_TrafficLight_Automatic.c src/UnitTests_UnitTest_TrafficLight_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/environment_TrafficLight_Automatic.o: src/environment_TrafficLight_Automatic.c src/environment_TrafficLight_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_Light_Automatic.o: src/UnitTests_UnitTest_Light_Automatic.c src/UnitTests_UnitTest_Light_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_FlashLight_Automatic.o: src/UnitTests_UnitTest_FlashLight_Automatic.c src/UnitTests_UnitTest_FlashLight_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/environment_FlashLight_Automatic.o: src/environment_FlashLight_Automatic.c src/environment_FlashLight_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_driver_Automatic.o: src/UnitTests_UnitTest_driver_Automatic.c src/UnitTests_UnitTest_driver_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_DrivingSM_Automatic.o: src/UnitTests_UnitTest_DrivingSM_Automatic.c src/UnitTests_UnitTest_DrivingSM_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/driver_DrivingSM_Automatic.o: src/driver_DrivingSM_Automatic.c src/driver_DrivingSM_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/coverageLib_CoverageInstrumentation_Automatic.o: src/coverageLib_CoverageInstrumentation_Automatic.c src/coverageLib_CoverageInstrumentation_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic.o: src/UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic.c src/UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic.o: src/UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic.c src/UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic.o: src/UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic.c src/UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testGreen_Automatic.o: src/UnitTests_UnitTest_TrafficLight_testGreen_Automatic.c src/UnitTests_UnitTest_TrafficLight_testGreen_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testRed_Automatic.o: src/UnitTests_UnitTest_TrafficLight_testRed_Automatic.c src/UnitTests_UnitTest_TrafficLight_testRed_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_TrafficLight_testYellow_Automatic.o: src/UnitTests_UnitTest_TrafficLight_testYellow_Automatic.c src/UnitTests_UnitTest_TrafficLight_testYellow_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic.o: src/UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic.c src/UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic.o: src/UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic.c src/UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/src/UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic.o: src/UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic.c src/UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic.h | $(OUTPUT_CONFIG)
	gcc $(INC) $(CFLAGS) -o $@ $<

$(OUTPUT_CONFIG)/coverage/esdl_coverage.o: coverage/esdl_coverage.cpp coverage/esdl_coverage.h | $(OUTPUT_CONFIG)
	g++ $(INC) $(CXXFLAGS) -o $@ $<

all:: $(TEST_EXE)

clean::
	rm -rf $(OUTPUT_CONFIG)

.PHONY: $(OUTPUT_CONFIG)
$(OUTPUT_CONFIG):
	$(MKDIR_CMD) $@/src
	$(MKDIR_CMD) $@/tests
	$(MKDIR_CMD) $@/coverage

$(TEST_EXE): $(OBJECTS)
	g++ -o $@ -static $(OBJECTS) $(LIB_PATHS_OPTIONS) $(LIB_FILES_OPTIONS)
