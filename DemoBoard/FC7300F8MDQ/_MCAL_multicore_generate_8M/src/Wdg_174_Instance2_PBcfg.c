/**
*   @file    Wdg_Instance2_PBcfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Wdg - contains the data exported by the watchodg module
*   @details Contains the information that will be exported by the module, as requested by Autosar.
*
*   @addtogroup WDG
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : WDG
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       07/14/2023    QXW0074       N/A          WDG Initial Version
*   0.2.0       09/27/2023    QXW0074       N/A          Add multicore support
*   0.3.0       10/20/2023    QXW0074       N/A          Optimization code
*   0.4.0       11/17/2023    QXW0074       N/A          Optimization Plugins
*   0.5.0       03/16/2024    QXW0074       N/A          Fix some compilation issues and
*                                                        Changed some functions to inline
*   0.6.0       03/22/2024    QXW0074       N/A          Add FC7240 platform support
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by user without hardware timer and optimization code
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

#include "Wdg_Reg.h"
#include "Wdg_LLD.h"
#include "Wdg_HLD.h"
#include "Wdg_174_Instance2.h"

#if (WDG_INSTANCE2 == STD_ON)

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/



#define WDG_START_SEC_CODE

#include "Wdg_MemMap.h"



#define WDG_STOP_SEC_CODE

#include "Wdg_MemMap.h"

#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"

/** @brief The static configuration of watchdog driver's off mode */
WDG_DATA_SECTION static const Wdg_LLDConfigType Wdg_Wdog_OffModeSettings_Instance2=
{
    (uint32)WDOG_CS_UPDATE_MASK, /* WDG Control and configuration */
    (uint32)0x00000100, /* Timeout config */
    (uint32)0x00000000,  /* Window config */
    (boolean)FALSE,
    (uint32) 0x00000001 /* Internalwdgclocksource */
};

/** @brief The static configuration of watchdog driver's slow mode */
WDG_DATA_SECTION static const Wdg_LLDConfigType Wdg_Wdog_SlowModeSettings_2=
{
    (uint32)( WDOG_CS_ENABLE_MASK | WDOG_CS_DLY_CNT_MSB(WDOG_REACTION_INT_128_CYCLE) | WDOG_CS_CLK_SEL(WDOG_FOSC_CLK) | WDOG_CS_TST(WDOG_TST_DISABLED) | WDOG_CS_PRESCALER_MASK | WDOG_CS_UPDATE_MASK ), /* WDG Control and configuration */
    (uint32)0x00249f00,  /* Time-out config */
    (uint32)0x00000000, /* Window config */
    (boolean)TRUE,
    (uint32)24000 /* Internalwdgclocksource */
};


/** @brief The static configuration of watchdog driver's fast mode */
WDG_DATA_SECTION static const Wdg_LLDConfigType Wdg_Wdog_FastModeSettings_2=
{
    (uint32)( WDOG_CS_ENABLE_MASK | WDOG_CS_DLY_CNT_MSB(WDOG_REACTION_INT_128_CYCLE) | WDOG_CS_CLK_SEL(WDOG_FOSC_CLK) | WDOG_CS_TST(WDOG_TST_DISABLED) | WDOG_CS_PRESCALER_MASK | WDOG_CS_UPDATE_MASK ), /* WDG Control and configuration */
    (uint32)0x0003a980,  /* Time-out config */
    (uint32)0x00000000, /* Window config */
    (boolean)TRUE,
    (uint32)24000 /* Internalwdgclocksource */
};

/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or function with external linkage is defined*/
/* Reason: The object 'Wdg_Config_WDOG2' will be referenced in other modules and declared where it is used */
WDG_DATA_SECTION const Wdg_ConfigType Wdg_Config_WDOG2 =
{
    WDGIF_SLOW_MODE,
    WDG_HWL_INSTANCE2,
#if (WDG_DIRECT_SERVICE == STD_OFF)
    (Gpt_ChannelType)GptConf_GptChannelConfiguration_GptChannel_WDGInstance2,
    (uint32)30000000,
#endif
    { &Wdg_Wdog_OffModeSettings_Instance2, &Wdg_Wdog_SlowModeSettings_2, &Wdg_Wdog_FastModeSettings_2},
NULL_PTR/* WdgCallbackNotification */
};
/* PRQA S 3408 -- */
#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"


#endif /* #if WDG_INSTANCE0 == STD_ON*/
#ifdef __cplusplus
}
#endif
