/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................UnitTests.UnitTest_DrivingSM
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_UNITTESTS_UNITTEST_DRIVINGSM_AUTOMATIC_H_
#define _ASD_UNITTESTS_UNITTEST_DRIVINGSM_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"
#include "driver_DrivingSM_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'UnitTests_UnitTest_DrivingSM_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct UnitTests_UnitTest_DrivingSM_Automatic_RAM_SUBSTRUCT {
   struct driver_DrivingSM_Automatic_RAM_SUBSTRUCT DrivingSM_testInstance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'UnitTests_UnitTest_DrivingSM_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'UnitTests_UnitTest_DrivingSM_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct UnitTests_UnitTest_DrivingSM_Automatic {
   struct driver_DrivingSM_Automatic DrivingSM_testInstance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'UnitTests_UnitTest_DrivingSM_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: .....UnitTests_UnitTest_DrivingSM_Automatic */
#define _UnitTests_UnitTest_DrivingSM_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'UnitTests_UnitTest_DrivingSM_RAM' */
/* containing 'RAM' memory class tree */
extern struct UnitTests_UnitTest_DrivingSM_Automatic_RAM_SUBSTRUCT UnitTests_UnitTest_DrivingSM_RAM;

/* forward declaration of component variable 'UnitTests_UnitTest_DrivingSM' */
/* containing 'ROM' memory class tree */
extern const struct UnitTests_UnitTest_DrivingSM_Automatic UnitTests_UnitTest_DrivingSM;


#endif /* _ASD_UNITTESTS_UNITTEST_DRIVINGSM_AUTOMATIC_H_ */
