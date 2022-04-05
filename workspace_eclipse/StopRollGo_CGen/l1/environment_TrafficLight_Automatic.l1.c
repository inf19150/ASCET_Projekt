/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "environment_TrafficLight_Automatic.l1.h"
#include "environment_TrafficLight_Automatic_private.h"
#include "environment_TrafficLightController_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* L1 class descriptor */
static ASDClassHeader L1_environment_TrafficLight_Automatic_ClassHeader = {
	0, 0, 6, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_environment_TrafficLight_Automatic_Class L1_environment_TrafficLight_Automatic_ClassObj = {{1, {&L1_environment_TrafficLight_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_environment_TrafficLight_Automatic_Obj* initInstance_L1_environment_TrafficLight_Automatic(const struct environment_TrafficLight_Automatic* self)
{
	struct L1_environment_TrafficLight_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_environment_TrafficLight_Automatic);
	L1_Instance->green = initInstance_scalarWrapper((uint32)&(green_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->isVisible = initInstance_scalarWrapper((uint32)&(isVisible_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->position = initInstance_scalarWrapper((uint32)&(position_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->proximity = initInstance_scalarWrapper((uint32)&(proximity_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->red = initInstance_scalarWrapper((uint32)&(red_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->yellow = initInstance_scalarWrapper((uint32)&(yellow_VAL), sizeof(boolean), ASD_VARIABLE);
	return L1_Instance;
}
