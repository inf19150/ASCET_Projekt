/********************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED
 * DESCRIPTION:
 *   Model initialization code
 ********************************************************************************/
#pragma once

#include "a_basdef.h"
#include "protocol\l1\p_sysdef.h"

/* Initialize L1 instance tree */

/* Definition of the class structure */
typedef struct
{
    ASDObjectHeader objectHeader;
    struct L1_StopRollGoAPP_PC_Obj* ASCET_TOP_Ptr;
} ROOT_StopRollGoAPP_PC_Class;

/* Definition of the class instance structure */
struct ROOT_StopRollGoAPP_PC_Obj
{
    ASDObjectHeader objectHeader;
};

extern ASDObject *initializeRoot_StopRollGoAPP_PC(void);
/* main initialize L1 model function */
extern ASDObject *initializeModel (void);
