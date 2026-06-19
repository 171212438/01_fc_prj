/**
*   @file    EcuM.c
*   @version 1.5.1

*   @brief   AUTOSAR EcuM - driver API
*   @details This file contains functions of the AUTOSAR EcuM.
*            This file contains sample code only. It is not part of the production code deliverables
*
*   @addtogroup EcuM
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EcuM
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "EcuM_version.h"
#include "EcuM.h"

#ifdef TEST_CAN
    #include "CanIf.h"
#endif
#ifdef TEST_GPT
    #include "Gpt.h"
    #include "Gpt_Test.h"
#endif
#ifdef TEST_LIN
    #include "LinIf.h"
#endif
#ifdef TEST_ICU
    #include "Icu.h"
    #include "Icu_test_ext_common.h"
#endif

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#if (defined TEST_CAN)
    #ifndef CANIF_AR_RELEASE_MAJOR_VERSION
        #error "Autosar release major version is not defined. "
    #elif (CANIF_AR_RELEASE_MAJOR_VERSION != ECUM_AR_RELEASE_MAJOR_VERSION)
        #error "Autosar release major version is not matched. "
    #endif
#endif

#if (defined TEST_GPT)
    #ifndef GPT_AR_RELEASE_MAJOR_VERSION
        #error "Autosar release major version is not defined. "
    #elif (GPT_AR_RELEASE_MAJOR_VERSION != ECUM_AR_RELEASE_MAJOR_VERSION)
        #error "Autosar release major version is not matched. "
    #endif
#endif

#if (defined TEST_LIN)
    #ifndef LIN_AR_RELEASE_MAJOR_VERSION
        #error "Autosar release major version is not defined. "
    #elif (LIN_AR_RELEASE_MAJOR_VERSION != ECUM_AR_RELEASE_MAJOR_VERSION)
        #error "Autosar release major version is not matched. "
    #endif
#endif

#if (defined TEST_ICU)
    #ifndef ICU_AR_RELEASE_MAJOR_VERSION
        #error "Autosar release major version is not defined. "
    #elif (ICU_AR_RELEASE_MAJOR_VERSION != ECUM_AR_RELEASE_MAJOR_VERSION)
        #error "Autosar release major version is not matched. "
    #endif
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
EcuM_WakeupSourceType EcuMLastWakeupEvent; /**< @brief last wakeup event to EcuM (source ID)*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
void EcuM_SetWakeupEvent(EcuM_WakeupSourceType events)
{
    EcuMLastWakeupEvent = events;
}

void EcuM_ValidateWakeupEvent(EcuM_WakeupSourceType events)
{
    (void)events;
}

void EcuM_CheckWakeup(EcuM_WakeupSourceType wakeupSource)
{
#ifdef TEST_CAN
    #if (CANIF_WAKEUP_SUPPORT == STD_ON)
    CanIf_CheckWakeup(wakeupSource);
    #endif
#endif
#ifdef TEST_GPT
    Gpt_Cbk_CheckWakeup(wakeupSource);
#endif
#ifdef TEST_LIN
    LinIf_Cbk_CheckWakeup(wakeupSource);
#endif
#ifdef TEST_ICU
    Icu_TE_Cbk_CheckWakeup(wakeupSource);
#endif
    (void)wakeupSource;
}

#ifdef __cplusplus
}
#endif

/* End of file */
