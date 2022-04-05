/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................driver.driver
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_DRIVER_DRIVER_AUTOMATIC_H_
#define _ASD_DRIVER_DRIVER_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"
#include "driver_DrivingSM_Automatic.h"
#include "SystemLib_Miscellaneous_EdgeFalling_Impl.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'driver_driver_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct driver_driver_Automatic_CAL_MEM_SUBSTRUCT {
   struct CharTable1_real32_5_real32_TYPE InverseBrakeMomentum;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'driver_driver_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'driver_driver_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct driver_driver_Automatic_RAM_SUBSTRUCT {
   float32 requiredBrakeMomentum;
   struct driver_DrivingSM_Automatic_RAM_SUBSTRUCT DrivingSM_instance;
   struct SystemLib_Miscellaneous_EdgeFalling_Impl_RAM_SUBSTRUCT EdgeFalling_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'driver_driver_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'driver_driver_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct driver_driver_Automatic {
   struct driver_DrivingSM_Automatic DrivingSM_instance;
   struct SystemLib_Miscellaneous_EdgeFalling_Impl EdgeFalling_instance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'driver_driver_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ....................driver_driver_Automatic */
#define _driver_driver_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'driver_driver_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern struct driver_driver_Automatic_CAL_MEM_SUBSTRUCT driver_driver_CAL_MEM;

/* forward declaration of substruct variable 'driver_driver_RAM' */
/* containing 'RAM' memory class tree */
extern struct driver_driver_Automatic_RAM_SUBSTRUCT driver_driver_RAM;

/* forward declaration of component variable 'driver_driver' */
/* containing 'ROM' memory class tree */
extern const struct driver_driver_Automatic driver_driver;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module driver_driver_Automatic
 ******************************************************************************/
extern void driver_driver_Automatic_calc (void);



#endif /* _ASD_DRIVER_DRIVER_AUTOMATIC_H_ */
