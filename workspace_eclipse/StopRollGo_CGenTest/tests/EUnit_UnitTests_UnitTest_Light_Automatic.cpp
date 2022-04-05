// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_Light_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_Light_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_Light_Automatic_SubClass, UnitTests_UnitTest_Light_Automatic_testTimer) {
		_cov_statement_(83U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_Light_RAM.elapsedTime, 0.0, 0.001);
		_cov_statement_(84U);
		UnitTests_UnitTest_Light_Automatic_calc(5.0F);
		_cov_statement_(85U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_Light_RAM.elapsedTime, 5.0, 0.001);
		_cov_statement_(86U);
		UnitTests_UnitTest_Light_Automatic_calc(30.0F);
		_cov_statement_(87U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_Light_RAM.elapsedTime, 35.0, 0.001);
		_cov_statement_(88U);
		UnitTests_UnitTest_Light_Automatic_calc(20.0F);
		_cov_statement_(89U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_Light_RAM.elapsedTime, 55.0, 0.001);
		_cov_statement_(90U);
		UnitTests_UnitTest_Light_Automatic_calc(4.0F);
		_cov_statement_(91U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_Light_RAM.elapsedTime, 59.0, 0.001);
		_cov_statement_(92U);
		UnitTests_UnitTest_Light_Automatic_calc(1.0F);
		_cov_statement_(93U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_Light_RAM.elapsedTime, 0.0, 0.001);
		_cov_statement_(94U);
		UnitTests_UnitTest_Light_Automatic_calc(60.0F);
		_cov_statement_(95U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_Light_RAM.elapsedTime, 0.0, 0.001);
		_cov_statement_(96U);
		UnitTests_UnitTest_Light_Automatic_calc(45.0F);
		_cov_statement_(97U);
		ASSERT_NEAR((float64)UnitTests_UnitTest_Light_RAM.elapsedTime, 45.0, 0.001);
	}

}