// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic_SubClass, UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_Automatic_testDrivingSMVisibleLess40) {
		/* user defined local variables */
		boolean testGreen;
		float32 testProximity;

		testProximity = 30.0F;
		testGreen = false;
		_cov_statement_(170U);
		ASSERT_TRUE(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_RAM.DrivingSM_testInstance.cruising);
		_cov_statement_(171U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_RAM.DrivingSM_testInstance.proximity = testProximity;
		_cov_statement_(172U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_RAM.DrivingSM_testInstance.green = testGreen;
		_cov_statement_(173U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40.DrivingSM_testInstance));
		_cov_statement_(174U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40.DrivingSM_testInstance));
		_cov_statement_(175U);
		ASSERT_TRUE(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_RAM.DrivingSM_testInstance.cruising);
		_cov_statement_(176U);
		testGreen = true;
		_cov_statement_(177U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_RAM.DrivingSM_testInstance.green = testGreen;
		_cov_statement_(178U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40.DrivingSM_testInstance));
		_cov_statement_(179U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40.DrivingSM_testInstance));
		_cov_statement_(180U);
		ASSERT_TRUE(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleLess40_RAM.DrivingSM_testInstance.cruising);
	}

}