/* This is an automatically generated file */
/* DO NOT EDIT THIS FILE */
/* File generated for project "conf" */
/* Last edited 'unknown' */
/* File generated 'Tue Apr 05 12:50:36 2022' */
/* Target variant 'MinGW' */

/* The file must be included for general-purpose code for a library, not tasks and ISRs */

#define OS_LIBRARY_SETTINGS
#include "osekcomn.h"
#include "osgen.h"

#define osek_idle_task_default_profile (0)
#define etasConfigTask_default_profile (0)
#define etasL1Task_default_profile (0)
#define Task0_default_profile (0)
#define etasTimerIsr_default_profile (0)
#define etasL1Isr_default_profile (0)
#define etasStopOsIsr_default_profile (0)
#define alarm_Task0 (0)
#define alarm_Task0_response1 (0)

DeclareResource(RES_SCHEDULER);
#define OSDEFAULTAPPMODE ((AppModeType)(1))
#define etasStartup ((AppModeType)(2))
#define etasInactive ((AppModeType)(3))
#define UserAppMode ((AppModeType)(4))
#define GetResource_RES_SCHEDULER() GetResource(RES_SCHEDULER)
#define ReleaseResource_RES_SCHEDULER() ReleaseResource(RES_SCHEDULER)
#define ActivateTask_etasConfigTask() ActivateTask(etasConfigTask)
#define ChainTask_etasConfigTask() ChainTask(etasConfigTask)
#define ActivateTask_etasL1Task() ActivateTask(etasL1Task)
#define ChainTask_etasL1Task() ChainTask(etasL1Task)
#define ActivateTask_Task0() ActivateTask(Task0)
#define ChainTask_Task0() ChainTask(Task0)

/* End of oseklib.h */
