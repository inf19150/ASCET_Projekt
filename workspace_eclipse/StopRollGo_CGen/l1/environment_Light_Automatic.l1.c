/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "environment_Light_Automatic.l1.h"
#include "environment_Light_Automatic_private.h"
#include "environment_Light_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_environment_Light_Automatic_Obj* L1_environment_Light_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_environment_Light_Automatic_ClassHeader = {
	0, 0, 2, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_environment_Light_Automatic_Class L1_environment_Light_Automatic_ClassObj = {{1, {&L1_environment_Light_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_environment_Light_Automatic_Obj* initInstance_L1_environment_Light_Automatic(void)
{
	struct L1_environment_Light_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_environment_Light_Automatic);
	L1_Instance->TrafficLightSM_instance = initInstance_L1_environment_LightSM_Automatic(&(TrafficLightSM_instance_VAL));
	L1_Instance->elapsedTime = initInstance_scalarWrapper((uint32)&(elapsedTime_VAL), sizeof(float32), ASD_VARIABLE);
	L1_environment_Light_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
