#ifndef ESDL_L1_ENVIRONMENT_LIGHT_AUTOMATIC
#define ESDL_L1_ENVIRONMENT_LIGHT_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "environment_Light_Automatic.h"
#include "environment_LightSM_Automatic.l1.h"

/* local variables object structure */
struct L1_environment_Light_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_environment_LightSM_Automatic_Obj* TrafficLightSM_instance;
	scalarWrapper_Obj* elapsedTime;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_environment_Light_Automatic_Class;

extern L1_environment_Light_Automatic_Class L1_environment_Light_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_environment_Light_Automatic_Obj* initInstance_L1_environment_Light_Automatic(void);

#endif /* ESDL_L1_ENVIRONMENT_LIGHT_AUTOMATIC */
