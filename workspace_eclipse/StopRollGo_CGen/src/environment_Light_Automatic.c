/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................environment.Light
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/


/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define __ASD_REQUIRES_OS_INFACE

/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "environment_Light_Automatic.h"
#include "resources_TrafficLightMessages_Automatic.h"
#include "StopRollGoAPP_PC_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF SUBSTRUCT VARIABLE 'environment_Light_RAM'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * model name:...................................'environment_Light'
 * data set:.....................................'ENVIRONMENT_LIGHT_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
struct environment_Light_Automatic_RAM_SUBSTRUCT environment_Light_RAM = {
   /* struct element:'environment_Light_RAM.elapsedTime' (modeled as:'elapsedTime.environment_Light') */
   0.0F,
   /* substruct: environment_Light_RAM.TrafficLightSM_instance (modeled as:'TrafficLightSM_instance.environment_Light') */
   {
      /* struct element:'environment_Light_RAM.TrafficLightSM_instance.elapsedTime' (modeled as:'elapsedTime.TrafficLightSM_instance.environment_Light') */
      0.0F,
      /* struct element:'environment_Light_RAM.TrafficLightSM_instance.green' (modeled as:'green.TrafficLightSM_instance.environment_Light') */
      false,
      /* struct element:'environment_Light_RAM.TrafficLightSM_instance.red' (modeled as:'red.TrafficLightSM_instance.environment_Light') */
      false,
      /* struct element:'environment_Light_RAM.TrafficLightSM_instance.sm' (modeled as:'sm.TrafficLightSM_instance.environment_Light') */
      0U,
      /* struct element:'environment_Light_RAM.TrafficLightSM_instance.yellow' (modeled as:'yellow.TrafficLightSM_instance.environment_Light') */
      false
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF SUBSTRUCT VARIABLE 'environment_Light_RAM'
 ******************************************************************************/

/******************************************************************************
 * BEGIN: DEFINITION OF COMPONENT VARIABLE 'environment_Light'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'environment_Light'
 * data set:.....................................'ENVIRONMENT_LIGHT_AUTOMATIC_esdl_Data_Default'
 * ---------------------------------------------------------------------------*/
const struct environment_Light_Automatic environment_Light = {
   /* substruct: environment_Light.TrafficLightSM_instance (modeled as:'TrafficLightSM_instance.environment_Light') */
   {
      /* type descriptor pointer 'environment_LightSM_Automatic_RAM' for memory class substruct for 'RAM' */
      &environment_Light_RAM.TrafficLightSM_instance
   }
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF COMPONENT VARIABLE 'environment_Light'
 ******************************************************************************/





#define dT_VAL (ASD_DT_SCALED)
#define elapsedTime_VAL (environment_Light_RAM.elapsedTime)
#define TrafficLightSM_instance_REF (&(environment_Light.TrafficLightSM_instance))


/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF PROCESS 'environment_Light_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/
/* messages used by this process */


void environment_Light_Automatic_calc (void)
{
   /* define local message copies */
   boolean resources_TrafficLightMessages_green__environment_Light_Automatic_calc;
   boolean resources_TrafficLightMessages_red__environment_Light_Automatic_calc;
   boolean resources_TrafficLightMessages_yellow__environment_Light_Automatic_calc;
   /* receive messages implicitly */
   {
      DisableAllInterrupts();
      resources_TrafficLightMessages_green__environment_Light_Automatic_calc = resources_TrafficLightMessages_green;
      resources_TrafficLightMessages_red__environment_Light_Automatic_calc = resources_TrafficLightMessages_red;
      resources_TrafficLightMessages_yellow__environment_Light_Automatic_calc = resources_TrafficLightMessages_yellow;
      EnableAllInterrupts();
   }
   elapsedTime_VAL = dT_VAL + elapsedTime_VAL;
   environment_LightSM_Automatic_trafficLightSMStatemachineTrigger(TrafficLightSM_instance_REF);
   environment_Light_RAM.TrafficLightSM_instance.elapsedTime = elapsedTime_VAL;
   if (elapsedTime_VAL >= 60.0F)
   {
      elapsedTime_VAL = 0.0F;
   } /* end if */
   resources_TrafficLightMessages_red__environment_Light_Automatic_calc = environment_Light_RAM.TrafficLightSM_instance.red;
   resources_TrafficLightMessages_yellow__environment_Light_Automatic_calc = environment_Light_RAM.TrafficLightSM_instance.yellow;
   resources_TrafficLightMessages_green__environment_Light_Automatic_calc = environment_Light_RAM.TrafficLightSM_instance.green;
   /* send messages implicitly */
   {
      DisableAllInterrupts();
      resources_TrafficLightMessages_green = resources_TrafficLightMessages_green__environment_Light_Automatic_calc;
      resources_TrafficLightMessages_red = resources_TrafficLightMessages_red__environment_Light_Automatic_calc;
      resources_TrafficLightMessages_yellow = resources_TrafficLightMessages_yellow__environment_Light_Automatic_calc;
      EnableAllInterrupts();
   }
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF PROCESS 'environment_Light_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



