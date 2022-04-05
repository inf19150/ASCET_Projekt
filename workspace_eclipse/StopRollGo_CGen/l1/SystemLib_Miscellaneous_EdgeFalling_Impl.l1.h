#ifndef ESDL_L1_SYSTEMLIB_MISCELLANEOUS_EDGEFALLING_IMPL
#define ESDL_L1_SYSTEMLIB_MISCELLANEOUS_EDGEFALLING_IMPL
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "SystemLib_Miscellaneous_EdgeFalling_Impl.h"

/* local variables object structure */
struct L1_SystemLib_Miscellaneous_EdgeFalling_Impl_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* buffer;
	scalarWrapper_Obj* oldSignal;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_SystemLib_Miscellaneous_EdgeFalling_Impl_Class;

extern L1_SystemLib_Miscellaneous_EdgeFalling_Impl_Class L1_SystemLib_Miscellaneous_EdgeFalling_Impl_ClassObj;

/* public L1 init function of this component */
extern struct L1_SystemLib_Miscellaneous_EdgeFalling_Impl_Obj* initInstance_L1_SystemLib_Miscellaneous_EdgeFalling_Impl(const struct SystemLib_Miscellaneous_EdgeFalling_Impl* self);

#endif /* ESDL_L1_SYSTEMLIB_MISCELLANEOUS_EDGEFALLING_IMPL */
