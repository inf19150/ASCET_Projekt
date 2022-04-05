// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic_SubClass, UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_Automatic_testDrivingSMVisibleGreater40) {
		/* user defined local variables */
		boolean testGreen;
		float32 testProximity;

		testProximity = 70.0F;
		testGreen = false;
		_cov_statement_(159U);
		ASSERT_TRUE(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_RAM.DrivingSM_testInstance.cruising);
		_cov_statement_(160U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_RAM.DrivingSM_testInstance.proximity = testProximity;
		_cov_statement_(161U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_RAM.DrivingSM_testInstance.green = testGreen;
		_cov_statement_(162U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40.DrivingSM_testInstance));
		_cov_statement_(163U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40.DrivingSM_testInstance));
		_cov_statement_(164U);
		ASSERT_FALSE(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_RAM.DrivingSM_testInstance.cruising);
		_cov_statement_(165U);
		testGreen = true;
		_cov_statement_(166U);
		UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_RAM.DrivingSM_testInstance.green = testGreen;
		_cov_statement_(167U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40.DrivingSM_testInstance));
		_cov_statement_(168U);
		driver_DrivingSM_Automatic_drivingSMStatemachineTrigger(&(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40.DrivingSM_testInstance));
		_cov_statement_(169U);
		ASSERT_TRUE(UnitTests_UnitTest_DrivingSM_testDrivingSMVisibleGreater40_RAM.DrivingSM_testInstance.cruising);
	}

}