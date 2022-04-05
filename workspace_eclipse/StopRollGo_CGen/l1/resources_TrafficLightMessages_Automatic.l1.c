/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "resources_TrafficLightMessages_Automatic.l1.h"
#include "resources_TrafficLightMessages_Automatic_private.h"
#include "resources_TrafficLightMessages_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_resources_TrafficLightMessages_Automatic_Obj* L1_resources_TrafficLightMessages_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_resources_TrafficLightMessages_Automatic_ClassHeader = {
	0, 0, 0, 5, &_ObjectMethodList, &_ClassMethodList
};
L1_resources_TrafficLightMessages_Automatic_Class L1_resources_TrafficLightMessages_Automatic_ClassObj = {{1, {&L1_resources_TrafficLightMessages_Automatic_ClassHeader}, {0}}};

/* internal flag to remember if static initialization is already executed */
static bool initialized_resources_TrafficLightMessages_Automatic = false;

/* private method */
/* Initializes static fields of this L1 component */
static void initClass_L1_resources_TrafficLightMessages_Automatic (L1_resources_TrafficLightMessages_Automatic_Class* _ASCET_class)
{
	_ASCET_class->flashed = initInstance_scalarWrapper((uint32)&(resources_TrafficLightMessages_flashed_VAL), sizeof(boolean), ASD_VARIABLE);
	_ASCET_class->green = initInstance_scalarWrapper((uint32)&(resources_TrafficLightMessages_green_VAL), sizeof(boolean), ASD_VARIABLE);
	_ASCET_class->red = initInstance_scalarWrapper((uint32)&(resources_TrafficLightMessages_red_VAL), sizeof(boolean), ASD_VARIABLE);
	_ASCET_class->visibleProximity = initInstance_scalarWrapper((uint32)&(resources_TrafficLightMessages_visibleProximity_VAL), sizeof(float32), ASD_VARIABLE);
	_ASCET_class->yellow = initInstance_scalarWrapper((uint32)&(resources_TrafficLightMessages_yellow_VAL), sizeof(boolean), ASD_VARIABLE);
}

/* public method */
/* Initializes an instance of this L1 component */
struct L1_resources_TrafficLightMessages_Automatic_Obj* initInstance_L1_resources_TrafficLightMessages_Automatic(void)
{
	struct L1_resources_TrafficLightMessages_Automatic_Obj* L1_Instance = NULL;
	/* for first time also static fields shall be initialized */
	if (!initialized_resources_TrafficLightMessages_Automatic) {
		initialized_resources_TrafficLightMessages_Automatic = true;
		initClass_L1_resources_TrafficLightMessages_Automatic(&(L1_resources_TrafficLightMessages_Automatic_ClassObj));
	}

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_resources_TrafficLightMessages_Automatic);
	L1_resources_TrafficLightMessages_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
