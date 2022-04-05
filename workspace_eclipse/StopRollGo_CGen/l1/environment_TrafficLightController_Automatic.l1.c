/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "environment_TrafficLightController_Automatic.l1.h"
#include "environment_TrafficLightController_Automatic_private.h"
#include "environment_TrafficLightController_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_environment_TrafficLightController_Automatic_Obj* L1_environment_TrafficLightController_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_environment_TrafficLightController_Automatic_ClassHeader = {
	0, 0, 3, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_environment_TrafficLightController_Automatic_Class L1_environment_TrafficLightController_Automatic_ClassObj = {{1, {&L1_environment_TrafficLightController_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_environment_TrafficLightController_Automatic_Obj* initInstance_L1_environment_TrafficLightController_Automatic(void)
{
	struct L1_environment_TrafficLightController_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_environment_TrafficLightController_Automatic);
	L1_Instance->TrafficLight_instance = initInstance_L1_environment_TrafficLight_Automatic(&(TrafficLight_instance_VAL));
	L1_Instance->TrafficLight_instance_2 = initInstance_L1_environment_TrafficLight_Automatic(&(TrafficLight_instance_2_VAL));
	L1_Instance->TrafficLight_instance_3 = initInstance_L1_environment_TrafficLight_Automatic(&(TrafficLight_instance_3_VAL));
	L1_environment_TrafficLightController_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
