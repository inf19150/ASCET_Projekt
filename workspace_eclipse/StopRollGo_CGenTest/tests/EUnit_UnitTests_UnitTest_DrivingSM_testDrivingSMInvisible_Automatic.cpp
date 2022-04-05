// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic_SubClass, UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_Automatic_testDrivingSMInvisible) {
		/* user defined local variables */
		boolean testGreen;
		float32 testProximity;

		testProximity = 110.0F;
		testGreen = false;
		_cov_statement_(181U);
		ASSERT_TRUE(UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_RAM.DrivingSM_testInstance.cruising);
		_cov_statement_(182U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_RAM.DrivingSM_testInstance.proximity = testProximity;
		_cov_statement_(183U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_RAM.DrivingSM_testInstance.green = testGreen;
		_cov_statement_(184U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible.DrivingSM_testInstance));
		_cov_statement_(185U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible.DrivingSM_testInstance));
		_cov_statement_(186U);
		ASSERT_TRUE(UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_RAM.DrivingSM_testInstance.cruising);
		_cov_statement_(187U);
		testGreen = true;
		_cov_statement_(188U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_RAM.DrivingSM_testInstance.green = testGreen;
		_cov_statement_(189U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible.DrivingSM_testInstance));
		_cov_statement_(190U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible.DrivingSM_testInstance));
		_cov_statement_(191U);
		ASSERT_TRUE(UnitTests_UnitTest_DrivingSM_testDrivingSMInvisible_RAM.DrivingSM_testInstance.cruising);
	}

}