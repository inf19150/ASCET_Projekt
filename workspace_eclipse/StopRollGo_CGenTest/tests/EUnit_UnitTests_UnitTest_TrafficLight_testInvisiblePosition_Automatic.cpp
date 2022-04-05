// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic_SubClass, UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic_testInvisiblePosition) {
		_cov_statement_(37U);
		environment_TrafficLight_Automatic_setPosition(&(UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance), 500.0F);
		_cov_statement_(38U);
		ASSERT_NEAR(500.0, (float64)environment_TrafficLight_Automatic_getProximity(&(UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance)), 0.001);
		_cov_statement_(39U);
		ASSERT_NEAR(500.0, (float64)environment_TrafficLight_Automatic_getPosition(&(UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance)), 0.001);
		_cov_statement_(40U);
		ASSERT_FALSE(environment_TrafficLight_Automatic_getVisible(&(UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance)));
	}

}