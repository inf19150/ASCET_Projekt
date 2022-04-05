#ifndef ESDL_L1_DRIVER_DRIVER_AUTOMATIC
#define ESDL_L1_DRIVER_DRIVER_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "driver_driver_Automatic.h"
#include "driver_DrivingSM_Automatic.l1.h"
#include "SystemLib_Miscellaneous_EdgeFalling_Impl.l1.h"

/* local variables object structure */
struct L1_driver_driver_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_driver_DrivingSM_Automatic_Obj* DrivingSM_instance;
	struct L1_SystemLib_Miscellaneous_EdgeFalling_Impl_Obj* EdgeFalling_instance;
	charTable1Wrapper_Obj* InverseBrakeMomentum;
	scalarWrapper_Obj* requiredBrakeMomentum;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_driver_driver_Automatic_Class;

extern L1_driver_driver_Automatic_Class L1_driver_driver_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_driver_driver_Automatic_Obj* initInstance_L1_driver_driver_Automatic(void);

#endif /* ESDL_L1_DRIVER_DRIVER_AUTOMATIC */
