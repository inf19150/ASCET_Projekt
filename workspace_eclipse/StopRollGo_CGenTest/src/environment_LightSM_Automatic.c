/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................environment.LightSM
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "environment_LightSM_Automatic.h"
#include "coverageLib_CoverageInstrumentation_Automatic.h"
#include "StopRollGo_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/




/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define greenState 1U
#define redState 2U
#define yellowRedState 3U
#define yellowState 0U



/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'environment_LightSM_Automatic_esdl_getState'
 * ----------------------------------------------------------------------------
 * model name:...................................'esdl_getState'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

uint8 environment_LightSM_Automatic_esdl_getState ( const struct environment_LightSM_Automatic * self)
{
   return self->environment_LightSM_Automatic_RAM->sm;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'environment_LightSM_Automatic_esdl_getState'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'environment_LightSM_Automatic_trafficLightSMStatemachineTrigger'
 * ----------------------------------------------------------------------------
 * model name:...................................'trafficLightSMStatemachineTrigger'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void environment_LightSM_Automatic_trafficLightSMStatemachineTrigger ( const struct environment_LightSM_Automatic * self)
{
   switch (self->environment_LightSM_Automatic_RAM->sm)
   {
      case greenState:
         if (_cov_binary_branch_(4U, (self->environment_LightSM_Automatic_RAM->elapsedTime >= 0.0F)
            && (self->environment_LightSM_Automatic_RAM->elapsedTime <= 44.0F)))
         {
            _cov_statement_(204U);
            self->environment_LightSM_Automatic_RAM->sm = yellowState;
            break;
         } /* end if */
         _cov_statement_(195U);
         self->environment_LightSM_Automatic_RAM->red = false;
         _cov_statement_(196U);
         self->environment_LightSM_Automatic_RAM->yellow = false;
         _cov_statement_(197U);
         self->environment_LightSM_Automatic_RAM->green = true;
         break;
      case redState:
         if (_cov_binary_branch_(5U, self->environment_LightSM_Automatic_RAM->elapsedTime >= 42.0F))
         {
            _cov_statement_(207U);
            self->environment_LightSM_Automatic_RAM->sm = yellowRedState;
            break;
         } /* end if */
         _cov_statement_(198U);
         self->environment_LightSM_Automatic_RAM->red = true;
         _cov_statement_(199U);
         self->environment_LightSM_Automatic_RAM->yellow = false;
         _cov_statement_(200U);
         self->environment_LightSM_Automatic_RAM->green = false;
         break;
      case yellowRedState:
         if (_cov_binary_branch_(6U, self->environment_LightSM_Automatic_RAM->elapsedTime >= 44.0F))
         {
            _cov_statement_(205U);
            self->environment_LightSM_Automatic_RAM->sm = greenState;
            break;
         } /* end if */
         _cov_statement_(201U);
         self->environment_LightSM_Automatic_RAM->red = true;
         _cov_statement_(202U);
         self->environment_LightSM_Automatic_RAM->yellow = true;
         _cov_statement_(203U);
         self->environment_LightSM_Automatic_RAM->green = false;
         break;
      case yellowState:
      default:
         if (_cov_binary_branch_(3U, self->environment_LightSM_Automatic_RAM->elapsedTime >= 3.0F))
         {
            _cov_statement_(204U);
            _cov_statement_(206U);
            self->environment_LightSM_Automatic_RAM->sm = redState;
            break;
         } /* end if */
         _cov_statement_(204U);
         _cov_statement_(192U);
         self->environment_LightSM_Automatic_RAM->red = false;
         _cov_statement_(193U);
         self->environment_LightSM_Automatic_RAM->yellow = true;
         _cov_statement_(194U);
         self->environment_LightSM_Automatic_RAM->green = false;
         break;
   } /* end switch */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'environment_LightSM_Automatic_trafficLightSMStatemachineTrigger'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



