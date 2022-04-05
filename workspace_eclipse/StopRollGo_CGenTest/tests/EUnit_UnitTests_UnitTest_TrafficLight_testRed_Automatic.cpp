// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_TrafficLight_testRed_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_TrafficLight_testRed_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_TrafficLight_testRed_Automatic_SubClass, UnitTests_UnitTest_TrafficLight_testRed_Automatic_testRed) {
		_cov_statement_(53U);
		ASSERT_FALSE(environment_TrafficLight_Automatic_getRed(&(UnitTests_UnitTest_TrafficLight_testRed.TrafficLight_testInstance)));
		_cov_statement_(54U);
		environment_TrafficLight_Automatic_setRed(&(UnitTests_UnitTest_TrafficLight_testRed.TrafficLight_testInstance), true);
		_cov_statement_(55U);
		ASSERT_TRUE(environment_TrafficLight_Automatic_getRed(&(UnitTests_UnitTest_TrafficLight_testRed.TrafficLight_testInstance)));
		_cov_statement_(56U);
		environment_TrafficLight_Automatic_setRed(&(UnitTests_UnitTest_TrafficLight_testRed.TrafficLight_testInstance), false);
		_cov_statement_(57U);
		ASSERT_FALSE(environment_TrafficLight_Automatic_getRed(&(UnitTests_UnitTest_TrafficLight_testRed.TrafficLight_testInstance)));
	}

}