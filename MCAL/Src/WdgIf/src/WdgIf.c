/**
 *   @file       WdgIf.c
 *   @implements Wdg_HLD_unit
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR WdgIf high level code.
*            This file contains sample code only. It is not part of the production code deliverables.
 *
 *   @addtogroup WDG_MODULE
 *   @{
 */
/*=================================================================================================
*   PERIPHERAL           : WDG
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
=================================================================================================*/
/*=================================================================================================
=================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/

#include "WdgIf.h"

#ifdef WDG_INSTANCE0
#if (WDG_INSTANCE0 == STD_ON)
    #include "Wdg_174_Instance0.h"
#endif
#endif

#ifdef WDG_INSTANCE1
#if (WDG_INSTANCE1 == STD_ON)
    #include "Wdg_174_Instance1.h"
#endif
#endif

#ifdef WDG_INSTANCE2
#if (WDG_INSTANCE2 == STD_ON)
    #include "Wdg_174_Instance2.h"
#endif
#endif

#ifdef WDG_INSTANCE3
#if (WDG_INSTANCE3 == STD_ON)
    #include "Wdg_174_Instance3.h"
#endif
#endif


/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
const WdgIf_SetModeFctPtrType WdgIf_SetModeFctPtr[WDGIF_NUMBER_OF_DEVICES] =
    {
    #if(WDG_INSTANCE0 == STD_ON)
            Wdg_174_Instance0_SetMode
            #else
            NULL_PTR
        #endif
    #if (WDGIF_NUMBER_OF_DEVICES>1)
        #ifdef WDG_INSTANCE1
            #if(WDG_INSTANCE1 == STD_ON)
            ,Wdg_174_Instance1_SetMode
            #else
            ,NULL_PTR
            #endif
        #endif
    #endif
    #if (WDGIF_NUMBER_OF_DEVICES>2)
        #ifdef WDG_INSTANCE2
            #if(WDG_INSTANCE2 == STD_ON)
            ,Wdg_174_Instance2_SetMode
            #else
            ,NULL_PTR
            #endif
        #endif
    #endif
    #if (WDGIF_NUMBER_OF_DEVICES>3)
        #ifdef WDG_INSTANCE3
            #if(WDG_INSTANCE3 == STD_ON)
            ,Wdg_174_Instance3_SetMode
            #else
            ,NULL_PTR
            #endif
        #endif
    #endif
    };


const WdgIf_SetTriggerFctPtrType WdgIf_SetTriggerConditionFctPtr[WDGIF_NUMBER_OF_DEVICES] =
    {
    #if(WDG_INSTANCE0 == STD_ON)
            Wdg_174_Instance0_SetTriggerCondition
            #else
            NULL_PTR
        #endif
    #if (WDGIF_NUMBER_OF_DEVICES>1)
        #ifdef WDG_INSTANCE1
            #if(WDG_INSTANCE1 == STD_ON)
            ,Wdg_174_Instance1_SetTriggerCondition
            #else
            ,NULL_PTR
            #endif
        #endif
    #endif
    #if (WDGIF_NUMBER_OF_DEVICES>2)
        #ifdef WDG_INSTANCE2
            #if(WDG_INSTANCE2 == STD_ON)
            ,Wdg_174_Instance2_SetTriggerCondition
            #else
            ,NULL_PTR
            #endif
        #endif
    #endif
    #if (WDGIF_NUMBER_OF_DEVICES>3)
        #ifdef WDG_INSTANCE3
            #if(WDG_INSTANCE3 == STD_ON)
            ,Wdg_174_Instance3_SetTriggerCondition
            #else
            ,NULL_PTR
            #endif
        #endif
    #endif
    };
/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
