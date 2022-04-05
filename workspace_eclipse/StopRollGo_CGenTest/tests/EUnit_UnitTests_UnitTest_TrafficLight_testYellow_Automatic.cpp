// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_TrafficLight_testYellow_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_TrafficLight_testYellow_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_TrafficLight_testYellow_Automatic_SubClass, UnitTests_UnitTest_TrafficLight_testYellow_Automatic_testYellow) {
		_cov_statement_(63U);
		ASSERT_FALSE(environment_TrafficLight_Automatic_getYellow(&(UnitTests_UnitTest_TrafficLight_testYellow.TrafficLight_testInstance)));
		_cov_statement_(64U);
		environment_TrafficLight_Automatic_setYellow(&(UnitTests_UnitTest_TrafficLight_testYellow.TrafficLight_testInstance), true);
		_cov_statement_(65U);
		ASSERT_TRUE(environment_TrafficLight_Automatic_getYellow(&(UnitTests_UnitTest_TrafficLight_testYellow.TrafficLight_testInstance)));
		_cov_statement_(66U);
		environment_TrafficLight_Automatic_setYellow(&(UnitTests_UnitTest_TrafficLight_testYellow.TrafficLight_testInstance), false);
		_cov_statement_(67U);
		ASSERT_FALSE(environment_TrafficLight_Automatic_getYellow(&(UnitTests_UnitTest_TrafficLight_testYellow.TrafficLight_testInstance)));
	}

}