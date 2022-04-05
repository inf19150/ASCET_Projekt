// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_driver_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
	#include "ESDL_Linear_Interpolation.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_driver_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_driver_Automatic_SubClass, UnitTests_UnitTest_driver_Automatic_testDriverCruising) {
		/* user defined local variables */
		boolean testCruising;
		float32 testProximity;
		float32 testV;

		testCruising = true;
		testProximity = 0.0F;
		testV = 30.0F;
		_cov_statement_(126U);
		UnitTests_UnitTest_driver_Automatic_reset();
		_cov_statement_(127U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.power, 0.0, 0.001);
		_cov_statement_(128U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.brake, 0.0, 0.001);
		_cov_statement_(129U);
		UnitTests_UnitTest_driver_Automatic_testCalc(testV, testProximity, testCruising);
		_cov_statement_(130U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.power, 100.0, 0.001);
		_cov_statement_(131U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.brake, 0.0, 0.001);
		_cov_statement_(132U);
		testV = 70.0F;
		_cov_statement_(133U);
		UnitTests_UnitTest_driver_Automatic_testCalc(testV, testProximity, testCruising);
		_cov_statement_(134U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.power, 0.0, 0.001);
		_cov_statement_(135U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.brake, 70.0, 0.001);
	}

	TEST_F(UnitTests_UnitTest_driver_Automatic_SubClass, UnitTests_UnitTest_driver_Automatic_testDriverNotCruising) {
		/* user defined local variables */
		boolean testCruising;
		float32 testProximity;
		float32 testV;

		testCruising = false;
		testProximity = 70.0F;
		testV = 50.0F;
		_cov_statement_(136U);
		UnitTests_UnitTest_driver_Automatic_reset();
		_cov_statement_(137U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.power, 0.0, 0.001);
		_cov_statement_(138U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.brake, 0.0, 0.001);
		_cov_statement_(139U);
		UnitTests_UnitTest_driver_Automatic_testCalc(testV, testProximity, testCruising);
		_cov_statement_(140U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.power, 0.0, 0.001);
		_cov_statement_(141U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.brake, 45.0, 2.0);
	}

	TEST_F(UnitTests_UnitTest_driver_Automatic_SubClass, UnitTests_UnitTest_driver_Automatic_testDriverNotCruisingClose) {
		/* user defined local variables */
		boolean testCruising;
		float32 testProximity;
		float32 testV;

		testCruising = false;
		testProximity = 40.0F;
		testV = 50.0F;
		_cov_statement_(142U);
		UnitTests_UnitTest_driver_Automatic_reset();
		_cov_statement_(143U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.power, 0.0, 0.001);
		_cov_statement_(144U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.brake, 0.0, 0.001);
		_cov_statement_(145U);
		UnitTests_UnitTest_driver_Automatic_testCalc(testV, testProximity, testCruising);
		_cov_statement_(146U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.power, 0.0, 0.001);
		_cov_statement_(147U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_driver_RAM.brake, 60.0, 2.0);
	}

}