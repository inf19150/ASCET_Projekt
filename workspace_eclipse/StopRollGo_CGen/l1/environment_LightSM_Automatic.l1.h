#ifndef ESDL_L1_ENVIRONMENT_LIGHTSM_AUTOMATIC
#define ESDL_L1_ENVIRONMENT_LIGHTSM_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "environment_LightSM_Automatic.h"

/* local variables object structure */
struct L1_environment_LightSM_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* elapsedTime;
	scalarWrapper_Obj* green;
	scalarWrapper_Obj* red;
	scalarWrapper_Obj* sm;
	scalarWrapper_Obj* yellow;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_environment_LightSM_Automatic_Class;

extern L1_environment_LightSM_Automatic_Class L1_environment_LightSM_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_environment_LightSM_Automatic_Obj* initInstance_L1_environment_LightSM_Automatic(const struct environment_LightSM_Automatic* self);

#endif /* ESDL_L1_ENVIRONMENT_LIGHTSM_AUTOMATIC */
