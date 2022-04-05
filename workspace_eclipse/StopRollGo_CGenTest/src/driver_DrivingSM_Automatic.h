/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................driver.DrivingSM
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_DRIVER_DRIVINGSM_AUTOMATIC_H_
#define _ASD_DRIVER_DRIVINGSM_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'driver_DrivingSM_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct driver_DrivingSM_Automatic_RAM_SUBSTRUCT {
   float32 proximity;
   boolean cruising;
   boolean green;
   uint8 sm;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'driver_DrivingSM_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'driver_DrivingSM_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct driver_DrivingSM_Automatic {
   struct driver_DrivingSM_Automatic_RAM_SUBSTRUCT * driver_DrivingSM_Automatic_RAM;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'driver_DrivingSM_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: .................driver_DrivingSM_Automatic */
#define _driver_DrivingSM_Automatic_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class driver_DrivingSM_Automatic
 ******************************************************************************/
extern void driver_DrivingSM_Automatic_drivingSMStatemachineTrigger ( const struct driver_DrivingSM_Automatic * self);
uint8 driver_DrivingSM_Automatic_esdl_getState ( const struct driver_DrivingSM_Automatic * self);



#endif /* _ASD_DRIVER_DRIVINGSM_AUTOMATIC_H_ */
