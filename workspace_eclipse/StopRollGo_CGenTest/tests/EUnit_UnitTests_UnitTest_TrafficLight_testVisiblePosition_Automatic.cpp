// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic_SubClass, UnitTests_UnitTest_TrafficLight_testVisiblePosition_Automatic_testVisiblePosition) {
		_cov_statement_(41U);
		environment_TrafficLight_Automatic_setPosition(&(UnitTests_UnitTest_TrafficLight_testVisiblePosition.TrafficLight_testInstance), 50.0F);
		_cov_statement_(42U);
		ASSERT_NEAR(50.0, (float64)environment_TrafficLight_Automatic_getProximity(&(UnitTests_UnitTest_TrafficLight_testVisiblePosition.TrafficLight_testInstance)), 0.001);
		_cov_statement_(43U);
		ASSERT_NEAR(50.0, (float64)environment_TrafficLight_Automatic_getPosition(&(UnitTests_UnitTest_TrafficLight_testVisiblePosition.TrafficLight_testInstance)), 0.001);
		_cov_statement_(44U);
		ASSERT_TRUE(environment_TrafficLight_Automatic_getVisible(&(UnitTests_UnitTest_TrafficLight_testVisiblePosition.TrafficLight_testInstance)));
	}

}