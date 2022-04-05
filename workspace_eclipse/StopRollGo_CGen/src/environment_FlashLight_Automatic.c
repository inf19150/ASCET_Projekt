/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................environment.FlashLight
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "environment_FlashLight_Automatic.h"


/******************************************************************************
 * DEFINITION OF COMPONENT VARIABLE OMITTED
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * model name:...................................'environment_FlashLight'
 * reason:.......................................no local elements
 * ---------------------------------------------------------------------------*/







/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'environment_FlashLight_Automatic_calc'
 * ----------------------------------------------------------------------------
 * model name:...................................'calc'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

boolean environment_FlashLight_Automatic_calc (
   /* IN    */ const float32 proximity1,
   /* IN    */ const float32 proximity2,
   /* IN    */ const float32 proximity3,
   /* IN    */ const boolean isRed
   )
{
   return isRed && (((proximity1 >= -2.0F) && (proximity1 <= 0.0F)) || ((proximity2 >= -2.0F) && (proximity2 <= 0.0F)) || ((proximity3 >= -2.0F) && (proximity3 <= 0.0F)));
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'environment_FlashLight_Automatic_calc'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



