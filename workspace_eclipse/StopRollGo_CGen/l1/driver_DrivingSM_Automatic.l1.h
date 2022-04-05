#ifndef ESDL_L1_DRIVER_DRIVINGSM_AUTOMATIC
#define ESDL_L1_DRIVER_DRIVINGSM_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "driver_DrivingSM_Automatic.h"

/* local variables object structure */
struct L1_driver_DrivingSM_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* cruising;
	scalarWrapper_Obj* green;
	scalarWrapper_Obj* proximity;
	scalarWrapper_Obj* sm;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_driver_DrivingSM_Automatic_Class;

extern L1_driver_DrivingSM_Automatic_Class L1_driver_DrivingSM_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_driver_DrivingSM_Automatic_Obj* initInstance_L1_driver_DrivingSM_Automatic(const struct driver_DrivingSM_Automatic* self);

#endif /* ESDL_L1_DRIVER_DRIVINGSM_AUTOMATIC */
