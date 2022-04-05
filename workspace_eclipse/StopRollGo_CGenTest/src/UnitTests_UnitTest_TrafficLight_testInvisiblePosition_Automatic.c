/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................UnitTests.UnitTest_TrafficLight_testInvisiblePosition
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic.h"
#include "assertLib_Assert_Impl.h"
#include "coverageLib_CoverageInstrumentation_Automatic.h"
#include "StopRollGo_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'UnitTests_UnitTest_TrafficLight_testInvisiblePosition'
 * data set:.....................................'UNITTESTS_UNITTEST_TRAFFICLIGHT_TESTINVISIBLEPOSITION_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic_RAM_SUBSTRUCT UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM = {
   /* substruct: UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM.TrafficLight_testInstance (modeled as:'TrafficLight_testInstance.UnitTests_UnitTest_TrafficLight_testInvisiblePosition') */
   {
      /* struct element:'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM.TrafficLight_testInstance.position' (modeled as:'position.TrafficLight_testInstance.UnitTests_UnitTest_TrafficLight_testInvisiblePosition') */
      0.0F,
      /* struct element:'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM.TrafficLight_testInstance.proximity' (modeled as:'proximity.TrafficLight_testInstance.UnitTests_UnitTest_TrafficLight_testInvisiblePosition') */
      0.0F,
      /* struct element:'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM.TrafficLight_testInstance.green' (modeled as:'green.TrafficLight_testInstance.UnitTests_UnitTest_TrafficLight_testInvisiblePosition') */
      false,
      /* struct element:'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM.TrafficLight_testInstance.isVisible' (modeled as:'isVisible.TrafficLight_testInstance.UnitTests_UnitTest_TrafficLight_testInvisiblePosition') */
      false,
      /* struct element:'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM.TrafficLight_testInstance.red' (modeled as:'red.TrafficLight_testInstance.UnitTests_UnitTest_TrafficLight_testInvisiblePosition') */
      false,
      /* struct element:'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM.TrafficLight_testInstance.yellow' (modeled as:'yellow.TrafficLight_testInstance.UnitTests_UnitTest_TrafficLight_testInvisiblePosition') */
      false
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'UnitTests_UnitTest_TrafficLight_testInvisiblePosition'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'UnitTests_UnitTest_TrafficLight_testInvisiblePosition'
 * data set:.....................................'UNITTESTS_UNITTEST_TRAFFICLIGHT_TESTINVISIBLEPOSITION_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic UnitTests_UnitTest_TrafficLight_testInvisiblePosition = {
   /* substruct: UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance (modeled as:'TrafficLight_testInstance.UnitTests_UnitTest_TrafficLight_testInvisiblePosition') */
   {
      /* type descriptor pointer 'environment_TrafficLight_Automatic_RAM' for memory class substruct for 'RAM' */
      &UnitTests_UnitTest_TrafficLight_testInvisiblePosition_RAM.TrafficLight_testInstance
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'UnitTests_UnitTest_TrafficLight_testInvisiblePosition'
 ******************************************************************************/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic_testInvisiblePosition'
 * ----------------------------------------------------------------------------
 * model name:...................................'testInvisiblePosition'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic_testInvisiblePosition (void)
{
   _cov_statement_(37U);
   environment_TrafficLight_Automatic_setPosition(&(UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance), 500.0F);
   _cov_statement_(38U);
   ASSERT_NEAR(500.0, (float64)environment_TrafficLight_Automatic_getProximity(&(UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance)), 0.001);
   _cov_statement_(39U);
   ASSERT_NEAR(500.0, (float64)environment_TrafficLight_Automatic_getPosition(&(UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance)), 0.001);
   _cov_statement_(40U);
   ASSERT_FALSE(environment_TrafficLight_Automatic_getVisible(&(UnitTests_UnitTest_TrafficLight_testInvisiblePosition.TrafficLight_testInstance)));
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'UnitTests_UnitTest_TrafficLight_testInvisiblePosition_Automatic_testInvisiblePosition'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



