// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_LightSM_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_LightSM_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_LightSM_Automatic_SubClass, UnitTests_UnitTest_LightSM_Automatic_testLightSM) {
		_cov_statement_(0U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.red);
		_cov_statement_(1U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.yellow);
		_cov_statement_(2U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.green);
		_cov_statement_(3U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(4U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.red);
		_cov_statement_(5U);
		ASSERT_TRUE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.yellow);
		_cov_statement_(6U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.green);
		_cov_statement_(7U);
		UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.elapsedTime = 5.0F;
		_cov_statement_(8U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(9U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(10U);
		ASSERT_TRUE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.red);
		_cov_statement_(11U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.yellow);
		_cov_statement_(12U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.green);
		_cov_statement_(13U);
		UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.elapsedTime = 42.0F;
		_cov_statement_(14U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(15U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(16U);
		ASSERT_TRUE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.red);
		_cov_statement_(17U);
		ASSERT_TRUE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.yellow);
		_cov_statement_(18U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.green);
		_cov_statement_(19U);
		UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.elapsedTime = 45.0F;
		_cov_statement_(20U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(21U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(22U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.red);
		_cov_statement_(23U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.yellow);
		_cov_statement_(24U);
		ASSERT_TRUE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.green);
		_cov_statement_(25U);
		UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.elapsedTime = 59.0F;
		_cov_statement_(26U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(27U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(28U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.red);
		_cov_statement_(29U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.yellow);
		_cov_statement_(30U);
		ASSERT_TRUE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.green);
		_cov_statement_(31U);
		UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.elapsedTime = 1.0F;
		_cov_statement_(32U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(33U);
		environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(&(UnitTests_UnitTest_LightSM.LightSM_testInstance));
		_cov_statement_(34U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.red);
		_cov_statement_(35U);
		ASSERT_TRUE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.yellow);
		_cov_statement_(36U);
		ASSERT_FALSE(UnitTests_UnitTest_LightSM_RAM.LightSM_testInstance.green);
	}

}