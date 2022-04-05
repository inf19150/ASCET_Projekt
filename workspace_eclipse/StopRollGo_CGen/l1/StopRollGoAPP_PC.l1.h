#ifndef ESDL_L1_STOPROLLGOAPP_PC
#define ESDL_L1_STOPROLLGOAPP_PC
/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Defines API to initialize L1 instance tree
 ********************************************************************************/
#include "a_basdef.h"
#include "myCar_myCar_Automatic.l1.h"
#include "resources_CarMessages_Automatic.l1.h"
#include "environment_TrafficLightController_Automatic.l1.h"
#include "resources_TrafficLightMessages_Automatic.l1.h"
#include "environment_Light_Automatic.l1.h"
#include "driver_driver_Automatic.l1.h"

/* local variables object structure */
struct L1_StopRollGoAPP_PC_Obj {
	ASDObjectHeader objectHeader;
};

/* static variables object structure */
typedef struct {
	ASDObjectHeader objectHeader;
	struct L1_resources_CarMessages_Automatic_Obj* resources_CarMessages_Automatic;
	struct L1_environment_Light_Automatic_Obj* environment_Light_Automatic;
	struct L1_environment_TrafficLightController_Automatic_Obj* environment_TrafficLightController_Automatic;
	struct L1_resources_TrafficLightMessages_Automatic_Obj* resources_TrafficLightMessages_Automatic;
	struct L1_driver_driver_Automatic_Obj* driver_driver_Automatic;
	struct L1_myCar_myCar_Automatic_Obj* myCar_myCar_Automatic;
} L1_StopRollGoAPP_PC_Class;

extern L1_StopRollGoAPP_PC_Class L1_StopRollGoAPP_PC_ClassObj;

/* public L1 init function of this component */
extern struct L1_StopRollGoAPP_PC_Obj* initInstance_L1_StopRollGoAPP_PC(void);

#endif /* ESDL_L1_STOPROLLGOAPP_PC */
