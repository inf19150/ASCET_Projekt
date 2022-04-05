// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_TrafficLight_testGreen_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_TrafficLight_testGreen_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_TrafficLight_testGreen_Automatic_SubClass, UnitTests_UnitTest_TrafficLight_testGreen_Automatic_testGreen) {
		_cov_statement_(58U);
		ASSERT_FALSE(environment_TrafficLight_Automatic_getGreen(&(UnitTests_UnitTest_TrafficLight_testGreen.TrafficLight_testInstance)));
		_cov_statement_(59U);
		environment_TrafficLight_Automatic_setGreen(&(UnitTests_UnitTest_TrafficLight_testGreen.TrafficLight_testInstance), true);
		_cov_statement_(60U);
		ASSERT_TRUE(environment_TrafficLight_Automatic_getGreen(&(UnitTests_UnitTest_TrafficLight_testGreen.TrafficLight_testInstance)));
		_cov_statement_(61U);
		environment_TrafficLight_Automatic_setGreen(&(UnitTests_UnitTest_TrafficLight_testGreen.TrafficLight_testInstance), false);
		_cov_statement_(62U);
		ASSERT_FALSE(environment_TrafficLight_Automatic_getGreen(&(UnitTests_UnitTest_TrafficLight_testGreen.TrafficLight_testInstance)));
	}

}