/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................UnitTests.UnitTest_TrafficLight_testYellow
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_UNITTESTS_UNITTEST_TRAFFICLIGHT_TESTYELLOW_AUTOMATIC_H_
#define _ASD_UNITTESTS_UNITTEST_TRAFFICLIGHT_TESTYELLOW_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"
#include "environment_TrafficLight_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'UnitTests_UnitTest_TrafficLight_testYellow_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct UnitTests_UnitTest_TrafficLight_testYellow_Automatic_RAM_SUBSTRUCT {
   struct environment_TrafficLight_Automatic_RAM_SUBSTRUCT TrafficLight_testInstance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'UnitTests_UnitTest_TrafficLight_testYellow_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'UnitTests_UnitTest_TrafficLight_testYellow_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct UnitTests_UnitTest_TrafficLight_testYellow_Automatic {
   struct environment_TrafficLight_Automatic TrafficLight_testInstance;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'UnitTests_UnitTest_TrafficLight_testYellow_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: UnitTests_UnitTest_TrafficLight_testYellow_Automatic */
#define _UnitTests_UnitTest_TrafficLight_testYellow_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'UnitTests_UnitTest_TrafficLight_testYellow_RAM' */
/* containing 'RAM' memory class tree */
extern struct UnitTests_UnitTest_TrafficLight_testYellow_Automatic_RAM_SUBSTRUCT UnitTests_UnitTest_TrafficLight_testYellow_RAM;

/* forward declaration of component variable 'UnitTests_UnitTest_TrafficLight_testYellow' */
/* containing 'ROM' memory class tree */
extern const struct UnitTests_UnitTest_TrafficLight_testYellow_Automatic UnitTests_UnitTest_TrafficLight_testYellow;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module UnitTests_UnitTest_TrafficLight_testYellow_Automatic
 ******************************************************************************/
extern void UnitTests_UnitTest_TrafficLight_testYellow_Automatic_testYellow (void);



#endif /* _ASD_UNITTESTS_UNITTEST_TRAFFICLIGHT_TESTYELLOW_AUTOMATIC_H_ */
