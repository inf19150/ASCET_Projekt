/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   L1 protocol specific instance tree creation and initialization
 ********************************************************************************/
#include "driver_driver_Automatic.l1.h"
#include "driver_driver_Automatic_private.h"
#include "driver_driver_Automatic.h"


static MethodList _ObjectMethodList = {
	((void *)0)
};

static MethodList _ClassMethodList = {
	((void *)0)
};

/* for singleton components create an L1 instance here */
static struct L1_driver_driver_Automatic_Obj* L1_driver_driver_AutomaticInstance = NULL;

/* L1 class descriptor */
static ASDClassHeader L1_driver_driver_Automatic_ClassHeader = {
	0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};
L1_driver_driver_Automatic_Class L1_driver_driver_Automatic_ClassObj = {{1, {&L1_driver_driver_Automatic_ClassHeader}, {0}}};



/* public method */
/* Initializes an instance of this L1 component */
struct L1_driver_driver_Automatic_Obj* initInstance_L1_driver_driver_Automatic(void)
{
	struct L1_driver_driver_Automatic_Obj* L1_Instance = NULL;

	/* create L1 object and initialize it */
	CREATE_OBJECT (L1_Instance, L1_driver_driver_Automatic);
	L1_Instance->DrivingSM_instance = initInstance_L1_driver_DrivingSM_Automatic(&(DrivingSM_instance_VAL));
	L1_Instance->EdgeFalling_instance = initInstance_L1_SystemLib_Miscellaneous_EdgeFalling_Impl(&(EdgeFalling_instance_VAL));
	L1_Instance->InverseBrakeMomentum = initInstance_charTable1Wrapper((uint32)&(InverseBrakeMomentum_VAL.xDist), sizeof(float32), (uint32)&(InverseBrakeMomentum_VAL.values), sizeof(float32), /* dim */5, /* interpol kind */1, /* extrapol kind */0, ASD_PARAMETER);
	L1_Instance->requiredBrakeMomentum = initInstance_scalarWrapper((uint32)&(requiredBrakeMomentum_VAL), sizeof(float32), ASD_VARIABLE);
	L1_driver_driver_AutomaticInstance = L1_Instance;
	return L1_Instance;
}
