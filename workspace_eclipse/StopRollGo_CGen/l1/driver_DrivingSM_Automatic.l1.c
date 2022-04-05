/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "driver_DrivingSM_Automatic.l1.h"
#include "driver_DrivingSM_Automatic_private.h"
#include "driver_driver_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_driver_DrivingSM_Automatic_Obj* L1_driver_DrivingSM_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_driver_DrivingSM_Automatic_ClassHeader = {
	0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_driver_DrivingSM_Automatic_Class L1_driver_DrivingSM_Automatic_ClassObj = {{1, {&L1_driver_DrivingSM_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_driver_DrivingSM_Automatic_Obj* initInstance_L1_driver_DrivingSM_Automatic(const struct driver_DrivingSM_Automatic* self)
{
	struct L1_driver_DrivingSM_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_driver_DrivingSM_Automatic);
	L1_Instance->cruising = initInstance_scalarWrapper((uint32)&(cruising_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->green = initInstance_scalarWrapper((uint32)&(green_VAL), sizeof(boolean), ASD_VARIABLE);
	L1_Instance->proximity = initInstance_scalarWrapper((uint32)&(proximity_VAL), sizeof(float32), ASD_VARIABLE);
	L1_Instance->sm = initInstance_scalarWrapper((uint32)&(sm_VAL), sizeof(uint8), ASD_VARIABLE);
	L1_driver_DrivingSM_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
