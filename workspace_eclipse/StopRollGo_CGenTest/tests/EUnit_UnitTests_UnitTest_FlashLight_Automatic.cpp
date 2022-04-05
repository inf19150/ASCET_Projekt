// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_FlashLight_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "environment_FlashLight_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_FlashLight_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_FlashLight_Automatic_SubClass, UnitTests_UnitTest_FlashLight_Automatic_testFlashing) {
		/* user defined local variables */
		float32 proximity1;
		float32 proximity2;
		float32 proximity3;
		boolean red;

		red = true;
		proximity1 = 0.0F;
		proximity2 = 200.0F;
		proximity3 = 600.0F;
		_cov_statement_(101U);
		UnitTests_UnitTest_FlashLight_RAM.flashed
			= environment_FlashLight_Automatic_calc(proximity1, proximity2, proximity3, red);
		_cov_statement_(102U);
		ASSERT_TRUE(UnitTests_UnitTest_FlashLight_RAM.flashed);
		_cov_statement_(103U);
		proximity1 = -200.0F;
		_cov_statement_(104U);
		proximity2 = 0.0F;
		_cov_statement_(105U);
		proximity3 = 400.0F;
		_cov_statement_(106U);
		UnitTests_UnitTest_FlashLight_RAM.flashed
			= environment_FlashLight_Automatic_calc(proximity1, proximity2, proximity3, red);
		_cov_statement_(107U);
		ASSERT_TRUE(UnitTests_UnitTest_FlashLight_RAM.flashed);
		_cov_statement_(108U);
		proximity1 = -600.0F;
		_cov_statement_(109U);
		proximity2 = -400.0F;
		_cov_statement_(110U);
		proximity3 = 0.0F;
		_cov_statement_(111U);
		UnitTests_UnitTest_FlashLight_RAM.flashed
			= environment_FlashLight_Automatic_calc(proximity1, proximity2, proximity3, red);
		_cov_statement_(112U);
		ASSERT_TRUE(UnitTests_UnitTest_FlashLight_RAM.flashed);
	}

	TEST_F(UnitTests_UnitTest_FlashLight_Automatic_SubClass, UnitTests_UnitTest_FlashLight_Automatic_testNotFlashing) {
		/* user defined local variables */
		float32 proximity1;
		float32 proximity2;
		float32 proximity3;
		boolean red;

		red = false;
		proximity1 = 0.0F;
		proximity2 = 200.0F;
		proximity3 = 600.0F;
		_cov_statement_(113U);
		UnitTests_UnitTest_FlashLight_RAM.flashed
			= environment_FlashLight_Automatic_calc(proximity1, proximity2, proximity3, red);
		_cov_statement_(114U);
		ASSERT_FALSE(UnitTests_UnitTest_FlashLight_RAM.flashed);
		_cov_statement_(115U);
		proximity1 = -200.0F;
		_cov_statement_(116U);
		proximity2 = 0.0F;
		_cov_statement_(117U);
		proximity3 = 400.0F;
		_cov_statement_(118U);
		UnitTests_UnitTest_FlashLight_RAM.flashed
			= environment_FlashLight_Automatic_calc(proximity1, proximity2, proximity3, red);
		_cov_statement_(119U);
		ASSERT_FALSE(UnitTests_UnitTest_FlashLight_RAM.flashed);
		_cov_statement_(120U);
		proximity1 = -600.0F;
		_cov_statement_(121U);
		proximity2 = -400.0F;
		_cov_statement_(122U);
		proximity3 = 0.0F;
		_cov_statement_(123U);
		UnitTests_UnitTest_FlashLight_RAM.flashed
			= environment_FlashLight_Automatic_calc(proximity1, proximity2, proximity3, red);
		_cov_statement_(124U);
		ASSERT_FALSE(UnitTests_UnitTest_FlashLight_RAM.flashed);
	}

}