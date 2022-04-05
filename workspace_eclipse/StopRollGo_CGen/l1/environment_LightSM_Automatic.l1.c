/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "environment_LightSM_Automatic.l1.h"
#include "environment_LightSM_Automatic_private.h"
#include "environment_Light_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_environment_LightSM_Automatic_Obj* L1_environment_LightSM_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_environment_LightSM_Automatic_ClassHeader = {
	0, 0, 5, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_environment_LightSM_Automatic_Class L1_environment_LightSM_Automatic_ClassObj = {{1, {&L1_environment_LightSM_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_environment_LightSM_Automatic_Obj* initInstance_L1_environment_LightSM_Automatic(const struct environment_LightSM_Automatic* self)
{
	struct L1_environment_LightSM_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_environment_LightSM_Automatic);
	L1_Instance->elapsedTime = initInstance_scalarWrapper((uint32)&(elapsedTime_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->green = initInstance_scalarWrapper((uint32)&(green_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->red = initInstance_scalarWrapper((uint32)&(red_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->sm = initInstance_scalarWrapper((uint32)&(sm_VAL), sizeof(uint8), ASD_VARIABLE);
	L1_Instance->yellow = initInstance_scalarWrapper((uint32)&(yellow_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_environment_LightSM_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
