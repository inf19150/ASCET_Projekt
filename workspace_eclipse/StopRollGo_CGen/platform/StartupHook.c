/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   implementation of StartupHook
 ********************************************************************************/

/* BEGIN process declarations */
extern void environment_TrafficLightController_Automatic_init(void);
/* END process declarations */

/******************************************************************************
 * BEGIN: DEFINITION OF TASK 'StartupHook'
 * ----------------------------------------------------------------------------
 * model name:...................................'StartupHook'
 * memory class:.................................'CODE'
 * priority:.....................................'-'
 * period(ms):...................................'-'
 * scheduling:...................................'-'
 * ---------------------------------------------------------------------------*/
void StartupTask()
{
	/* BEGIN process execution */
	environment_TrafficLightController_Automatic_init();
	/* END process execution */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF TASK 'StartupHook'
 ******************************************************************************/
