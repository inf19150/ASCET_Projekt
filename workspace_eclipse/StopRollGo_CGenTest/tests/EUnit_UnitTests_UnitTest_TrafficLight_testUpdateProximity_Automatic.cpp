// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic.h"
	#include "assertLib_Assert_Impl.h"
	#include "coverageLib_CoverageInstrumentation_Automatic.h"
	#include "StopRollGo_Automatic.h"
}

namespace {
	// test fixture class
	class UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic_SubClass: public ::testing::Test {
		protected:
		void SetUp() override {
			// no Before method provided
		}
		void TearDown() override {
			// no After method provided
		}
	};

	TEST_F(UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic_SubClass, UnitTests_UnitTest_TrafficLight_testUpdateProximity_Automatic_testUpdateProximity) {
		_cov_statement_(45U);
		environment_TrafficLight_Automatic_setPosition(&(UnitTests_UnitTest_TrafficLight_testUpdateProximity.TrafficLight_testInstance), 500.0F);
		_cov_statement_(46U);
		ASSERT_NEAR(500.0, (float64)environment_TrafficLight_Automatic_getProximity(&(UnitTests_UnitTest_TrafficLight_testUpdateProximity.TrafficLight_testInstance)), 0.001);
		_cov_statement_(47U);
		ASSERT_NEAR(500.0, (float64)environment_TrafficLight_Automatic_getPosition(&(UnitTests_UnitTest_TrafficLight_testUpdateProximity.TrafficLight_testInstance)), 0.001);
		_cov_statement_(48U);
		ASSERT_FALSE(environment_TrafficLight_Automatic_getVisible(&(UnitTests_UnitTest_TrafficLight_testUpdateProximity.TrafficLight_testInstance)));
		_cov_statement_(49U);
		environment_TrafficLight_Automatic_updateProximity(&(UnitTests_UnitTest_TrafficLight_testUpdateProximity.TrafficLight_testInstance), 450.0F);
		_cov_statement_(50U);
		ASSERT_NEAR(50.0, (float64)environment_TrafficLight_Automatic_getProximity(&(UnitTests_UnitTest_TrafficLight_testUpdateProximity.TrafficLight_testInstance)), 0.001);
		_cov_statement_(51U);
		ASSERT_NEAR(500.0, (float64)environment_TrafficLight_Automatic_getPosition(&(UnitTests_UnitTest_TrafficLight_testUpdateProximity.TrafficLight_testInstance)), 0.001);
		_cov_statement_(52U);
		ASSERT_TRUE(environment_TrafficLight_Automatic_getVisible(&(UnitTests_UnitTest_TrafficLight_testUpdateProximity.TrafficLight_testInstance)));
	}

}