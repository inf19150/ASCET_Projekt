/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.7.0
 * CODE GENERATOR:..............V7.7.0
 * COMPONENT:...................SystemLib.Miscellaneous.EdgeFalling
 * REPRESENTATION:..............Impl
 * DESCRIPTION:
 *    EdgeFalling detects a falling edge of the logical input signal.
 ******************************************************************************/
#ifndef _ASD_SYSTEMLIB_MISCELLANEOUS_EDGEFALLING_IMPL_H_
#define _ASD_SYSTEMLIB_MISCELLANEOUS_EDGEFALLING_IMPL_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 5))
# error NOT COMPLIANT (< compliance level 5) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'SystemLib_Miscellaneous_EdgeFalling_Impl'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct SystemLib_Miscellaneous_EdgeFalling_Impl_RAM_SUBSTRUCT {
   uint8 buffer;
   uint8 oldSignal;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'SystemLib_Miscellaneous_EdgeFalling_Impl'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'SystemLib_Miscellaneous_EdgeFalling_Impl'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct SystemLib_Miscellaneous_EdgeFalling_Impl {
   struct SystemLib_Miscellaneous_EdgeFalling_Impl_RAM_SUBSTRUCT * SystemLib_Miscellaneous_EdgeFalling_Impl_RAM;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'SystemLib_Miscellaneous_EdgeFalling_Impl'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ...SystemLib_Miscellaneous_EdgeFalling_Impl */
#define _SystemLib_Miscellaneous_EdgeFalling_Impl_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class SystemLib_Miscellaneous_EdgeFalling_Impl
 ******************************************************************************/
extern void SystemLib_Miscellaneous_EdgeFalling_Impl_compute (
               const struct SystemLib_Miscellaneous_EdgeFalling_Impl * self,
   /* IN    */ const uint8                                             signal
   );
extern uint8 SystemLib_Miscellaneous_EdgeFalling_Impl_value ( const struct SystemLib_Miscellaneous_EdgeFalling_Impl * self);



#endif /* _ASD_SYSTEMLIB_MISCELLANEOUS_EDGEFALLING_IMPL_H_ */
