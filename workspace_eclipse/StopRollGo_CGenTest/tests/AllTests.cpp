// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>
#include "Etas_Ascet_Assertion.h"
#include "EUnit_UnitTests_UnitTest_LightSM_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_Light_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_FlashLight_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_driver_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_TrafficLight_testGreen_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_TrafficLight_testRed_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_TrafficLight_testYellow_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic.cpp"
#include "EUnit_UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic.cpp"
extern "C" {
	#include "esdl_coverage.h"
}

int main(int argc, char **argv) {
	int _result;
	
	// set up actions
	_initialize_coverage();
	
	::testing::InitGoogleTest(&argc, argv);
	_result = RUN_ALL_TESTS();
	
	// tear down actions
	_finalize_coverage();

	return _result;
}
