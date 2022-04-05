#ifndef ESDL_L1_RESOURCES_TRAFFICLIGHTMESSAGES_AUTOMATIC
#define ESDL_L1_RESOURCES_TRAFFICLIGHTMESSAGES_AUTOMATIC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "resources_TrafficLightMessages_Automatic.h"

/* local variables object structure */
struct L1_resources_TrafficLightMessages_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* flashed;
	scalarWrapper_Obj* green;
	scalarWrapper_Obj* red;
	scalarWrapper_Obj* visibleProximity;
	scalarWrapper_Obj* yellow;
} L1_resources_TrafficLightMessages_Automatic_Class;

extern L1_resources_TrafficLightMessages_Automatic_Class L1_resources_TrafficLightMessages_Automatic_ClassObj;

/* public L1 init function of this component */
extern struct L1_resources_TrafficLightMessages_Automatic_Obj* initInstance_L1_resources_TrafficLightMessages_Automatic(void);

#endif /* ESDL_L1_RESOURCES_TRAFFICLIGHTMESSAGES_AUTOMATIC */
