#ifndef ESDL_L1_ENVIRONMENT_TRAFFICLIGHTCONTROLLER_AUTOMATIC
#define ESDL_L1_ENVIRONMENT_TRAFFICLIGHTCONTROLLER_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "environment_TrafficLightController_Automatic.h"
#include "environment_TrafficLight_Automatic.l1.h"

/* local variables object structure */
struct L1_environment_TrafficLightController_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_environment_TrafficLight_Automatic_Obj* TrafficLight_instance;
	struct L1_environment_TrafficLight_Automatic_Obj* TrafficLight_instance_2;
	struct L1_environment_TrafficLight_Automatic_Obj* TrafficLight_instance_3;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
} L1_environment_TrafficLightController_Automatic_Class;

extern L1_environment_TrafficLightController_Automatic_Class L1_environment_TrafficLightController_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_environment_TrafficLightController_Automatic_Obj* initInstance_L1_environment_TrafficLightController_Automatic(void);

#endif /* ESDL_L1_ENVIRONMENT_TRAFFICLIGHTCONTROLLER_AUTOMATIC */
