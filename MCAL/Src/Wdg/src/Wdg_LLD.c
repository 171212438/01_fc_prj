/**
 *   @file    Wdg_LLD.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Wdg - Software Watchdog Timer (WDOG) low level functions
 *   @details Contains WDG low level functions
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
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by
user without hardware timer and optimization code
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Wdg_LLD_Types.h"
#include "Wdg_LLD.h"
#include "Wdg_Reg.h"
#include "Mcal.h"
#include "StdRegMacros.h"
#include "SchM_Wdg.h"
#include "Wdg_Version.h"
#include "Wdg_RegOps.h"

#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif

/*==================================================================================================
*                                       VERSION CHECKS
==================================================================================================*/
#ifndef WDG_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (WDG_AR_RELEASE_MAJOR_VERSION != WDG_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef WDG_AR_RELEASE_MINOR_VERSION
#error "Autosar release minor version is not defined. "
#elif (WDG_AR_RELEASE_MINOR_VERSION != WDG_CFG_AR_RELEASE_MINOR_VERSION)
#error "Autosar release minor version is not matched. "
#endif

#ifndef WDG_AR_RELEASE_REVISION_VERSION
#error "Autosar release revision version is not defined. "
#elif (WDG_AR_RELEASE_REVISION_VERSION != WDG_CFG_AR_RELEASE_REVISION_VERSION)
#error "Autosar release revision version is not matched. "
#endif

#ifndef WDG_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (WDG_SW_MAJOR_VERSION != WDG_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef WDG_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (WDG_SW_MINOR_VERSION != WDG_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef WDG_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (WDG_SW_PATCH_VERSION != WDG_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define WDOG_UNLOCK_CMD           (uint32)(0x08181982U)
#define WDOG_REFRESH_CMD          (uint32)(0x20CFFC20U)
#define WDG_PRESCALER_SHIFT_VALUE (uint16)(8U)
#if (WDG_FAST_CONFIGURATION_ENABLED == STD_ON)
#define WDOG_FASTCFG_CMD (uint32)(0xFC200408U)
#endif
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define WDG_START_SEC_VAR_INIT_32
#include "Wdg_MemMap.h"
#if (WDG_FAST_CONFIGURATION_ENABLED == STD_OFF)
/**
 * @brief  Variable that indicates the number of executions of the loop waiting for the unlock or
 * reconfigure flag within the wdg driver
 */
WDG_DATA_SECTION static uint32 s_WdgunlockAndReconfigLoopTimes[WDG_NO_OF_INSTANCES] =
    WDG_FLAG_LOOP_TIMES;
#endif /* WDG_FAST_CONFIGURATION_ENABLED == STD_OFF */
#define WDG_STOP_SEC_VAR_INIT_32
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

#define WDG_START_SEC_CONST_UNSPECIFIED
#include "Wdg_MemMap.h"
/* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
 * object and an integer type Reason: A conversions should not be performed between a pointer to
 * object and an integer type. Unavoidable when addressing memory mapped registers.*/
/* PRQA S 3408 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an object or
 * function with external linkage is defined*/
/* Reason: The defined array 'g_WDOG_aBASE_ADDR32' is only used in Wdg_LLD.c and Wdg_Irq.c files,
 * and has already been externally declared in Wdg_Irq.c. Placing it in a common header carries
 * hidden risks. */
/* PRQA S 1504 ++ #Misra-C:2012 Rule-8.7 Functions and objects should not be defined with external
 * linkage if they are referenced in only one translation unit Reason: The object
 * "g_WDOG_aBASE_ADDR32" is also used in the Wdg_Irq. c file, but it is hidden by the macro  */
WDG_DATA_SECTION WDOG_Type *const g_WDOG_aBASE_ADDR32[] = WDOG_BASE_PTRS;
/* PRQA S 1504 -- */
/* PRQA S 3408 -- */
/* PRQA S 0306 -- */
#define WDG_STOP_SEC_CONST_UNSPECIFIED
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
/* [SWS_Wdg_00168] [SWDESG_WDG_003] */
#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"
#if (WDG_FAST_CONFIGURATION_ENABLED == STD_OFF)
LOCAL_INLINE void Wdg_LLD_Unlock(const Wdg_HWL_InstanceType eInstance);
#endif

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

#if (WDG_FAST_CONFIGURATION_ENABLED == STD_OFF)
/* [SWDESG_WDG_076] */
LOCAL_INLINE void Wdg_LLD_Unlock(const Wdg_HWL_InstanceType eInstance)
{
    WDOG_HWA_SetCounter(g_WDOG_aBASE_ADDR32[eInstance], WDOG_UNLOCK_CMD);
}
#endif
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
/**
 *   @brief Initialize the hardware of WDG module. [SWS_Wdg_00101] [SWDESG_WDG_073]
 *
 *   @param pWdgLLDConfigPtr Pointer to configuration set.
 *   @param eInstance Hardware WDG instance.
 *   @param pUnlockFailed Whether to unlock WDOG failed.
 *   @param pReconfigFailed Whether to WDOG reconfiguration failed.
 *
 *   @return uint32 The value in ticks that need to be set up for the timer
 *
 */
WDG_TEXT_SECTION uint32 Wdg_LLD_Init(const Wdg_LLDConfigType   *pWdgLLDConfigPtr,
                                     const Wdg_HWL_InstanceType eInstance,
                                     boolean                   *pUnlockFailed,
                                     boolean                   *pReconfigFailed)
{
    uint32 u32WdgTimeout, u32WdgTimeoutOrigal, u32Windowtime, u32WindowtimeOrigal, u32Config;
    uint32 u32gptPeriodWdgTicks = 0x00UL;
    *pUnlockFailed              = (boolean)FALSE;
    *pReconfigFailed            = (boolean)FALSE;
#if (WDG_FAST_CONFIGURATION_ENABLED == STD_OFF)
    volatile uint32 u32Timeout;
    uint8           u8Times    = (uint8)128U;
    uint32          u32First   = 1U;
    uint32          u32TempRec = 0x00UL;
    u32Timeout                 = s_WdgunlockAndReconfigLoopTimes[eInstance];
#endif
    WDOG_Type *pWdgAddressPtr = g_WDOG_aBASE_ADDR32[eInstance];

    u32WindowtimeOrigal = pWdgLLDConfigPtr->u32WdgLLDWindow;
    u32WdgTimeoutOrigal = pWdgLLDConfigPtr->u32WdgLLDTimeout;

    /* calculate timeout and window period in ticks */
    if (pWdgLLDConfigPtr->bWdgLLDPrescalerEn == (boolean)TRUE)
    {
        u32Windowtime = u32WindowtimeOrigal >> WDG_PRESCALER_SHIFT_VALUE;
        u32WdgTimeout = u32WdgTimeoutOrigal >> WDG_PRESCALER_SHIFT_VALUE;
    }
    else
    {
        u32Windowtime = u32WindowtimeOrigal;
        u32WdgTimeout = u32WdgTimeoutOrigal;
    }
    u32Config = pWdgLLDConfigPtr->u32WdgLLDConfig;

    /* [SWS_Wdg_00040] [FMR_WDG_0003] [SWDESG_WDG_005] */
    SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_01();
#if (WDG_FAST_CONFIGURATION_ENABLED == STD_ON)
    /* Enter the Fast Configuration State */
    WDOG_HWA_SetFastCfgState(pWdgAddressPtr, WDOG_FASTCFG_CMD);

    /* Set Timer-out register */
    WDOG_HWA_SetTimeout(pWdgAddressPtr, u32WdgTimeout);

    /* Set Window register */
    WDOG_HWA_SetWindow(pWdgAddressPtr, u32Windowtime);

    /* Set CS register */
    WDOG_HWA_SetCs(pWdgAddressPtr, u32Config);

    /* Exit the Fast Configuration State */
    WDOG_HWA_SetFastCfgState(pWdgAddressPtr, (uint32)(0x1U));

    u32gptPeriodWdgTicks = (uint32)(u32Windowtime + (uint32)((u32WdgTimeout - u32Windowtime) >> 1));
#else
    while (u8Times != 0U)
    {
        u32TempRec = WDOG_HWA_GetCs(pWdgAddressPtr) & WDOG_CS_ULK_STAT_MASK;
        if (u32TempRec != WDOG_CS_ULK_STAT_MASK)
        {
            /* As long as there is 0 once, it means wdog is not the first time configuration */
            u32First = 0U;
            break;
        }
        u8Times = (uint8)(u8Times - 1U);
    }
    if (u32First == 0U)
    {
        /* Wait until RECFG_STAT set, make sure the RECFG_STAT is */
        u32TempRec = WDOG_HWA_GetCs(pWdgAddressPtr) & WDOG_CS_RECFG_STAT_MASK;
        while ((u32Timeout > 0UL) && (u32TempRec != WDOG_CS_RECFG_STAT_MASK))
        {
            u32Timeout = u32Timeout - 1U;
            u32TempRec = WDOG_HWA_GetCs(pWdgAddressPtr) & WDOG_CS_RECFG_STAT_MASK;
        }
        if (u32Timeout == 0U)
        {
            *pReconfigFailed = (boolean)TRUE;
        }
        else
        {
            u32Timeout = s_WdgunlockAndReconfigLoopTimes[eInstance];
            /* Unlock the possible soft lock condition */
            Wdg_LLD_Unlock(eInstance);

            /* Waiting for unclock status */
            do
            {
                u32TempRec = WDOG_HWA_GetCs(pWdgAddressPtr) & WDOG_CS_ULK_STAT_MASK;
                if (u32TempRec == WDOG_CS_ULK_STAT_MASK)
                {
                    /* Set Timer-out register */
                    WDOG_HWA_SetTimeout(pWdgAddressPtr, u32WdgTimeout);

                    /* Set Window register */
                    WDOG_HWA_SetWindow(pWdgAddressPtr, u32Windowtime);

                    /* Set CS register */
                    WDOG_HWA_SetCs(pWdgAddressPtr, u32Config);

                    break;
                }
                u32Timeout = u32Timeout - 1U;
            }
            while (u32Timeout > 0U);

            if (u32Timeout == 0U)
            {
                *pUnlockFailed = (boolean)TRUE;
            }
        }
    }
    else
    {
        /* Set Timer-out register */
        WDOG_HWA_SetTimeout(pWdgAddressPtr, u32WdgTimeout);

        /* Set Window register */
        WDOG_HWA_SetWindow(pWdgAddressPtr, u32Windowtime);

        /* Set CS register */
        WDOG_HWA_SetCs(pWdgAddressPtr, u32Config);
    }

    if ((*pReconfigFailed == (boolean)FALSE) && (*pUnlockFailed == (boolean)FALSE))
    {
        u32Timeout = s_WdgunlockAndReconfigLoopTimes[eInstance];

        /* Check if reconfiguration was done in the timeout */
        u32TempRec = WDOG_HWA_GetCs(pWdgAddressPtr) & WDOG_CS_RECFG_STAT_MASK;
        while ((u32Timeout > 0UL) && (u32TempRec != WDOG_CS_RECFG_STAT_MASK))
        {
            u32Timeout = u32Timeout - 1U;
            u32TempRec = WDOG_HWA_GetCs(pWdgAddressPtr) & WDOG_CS_RECFG_STAT_MASK;
        }
        if (u32Timeout == 0U)
        {
            *pReconfigFailed = (boolean)TRUE;
        }
        else
        {
            u32gptPeriodWdgTicks = (uint32)(u32WindowtimeOrigal +
                                            (uint32)((u32WdgTimeoutOrigal - u32WindowtimeOrigal) >>
                                                     1));
        }
    }
#endif
    SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_01();

    return u32gptPeriodWdgTicks;
}
/* PRQA S 3006 -- */

/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
/**
 *   @brief This function triggers the watchdog hardware. [SWDESG_WDG_074]
 *   @details Writes the trigger sequence on the hardware
 *
 *   @param eInstance Hardware WDG instance.
 *
 *   @return void
 */
WDG_TEXT_SECTION void Wdg_LLD_Trigger(const Wdg_HWL_InstanceType eInstance)
{
    WDOG_HWA_SetCounter(g_WDOG_aBASE_ADDR32[eInstance], WDOG_REFRESH_CMD);
}
/* PRQA S 3006 -- */

/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
/**
 *   @brief The function checks if the WDG configuration update is allowed by hardware [SWDESG_WDG_075]
 *
 *   @param eInstance Hardware WDG instance.
 *
 *   @return Std_ReturnType
 *   @retval E_OK The config update is allowed by hardware
 *
 */
WDG_TEXT_SECTION Std_ReturnType Wdg_LLD_ValidateConfigUpdate(const Wdg_HWL_InstanceType eInstance)
{
    Std_ReturnType response = (Std_ReturnType)E_OK;

    /* Returns error if the WDG configuration update is not allowed by hardware */
    if (WDOG_CS_UPDATE_MASK != (WDOG_HWA_GetCs(g_WDOG_aBASE_ADDR32[eInstance]) & WDOG_CS_UPDATE_MASK))
    {
        response = (Std_ReturnType)E_NOT_OK;
    }

    return response;
}
/* PRQA S 3006 -- */
#if (WDG_DIRECT_SERVICE == STD_ON)
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
/**
 *   @brief The function checks if triggers the watchdog hardware is allowed by hardware
 *
 *   @param eInstance Hardware WDG instance.
 *
 *   @return Std_ReturnType
 *   @retval E_OK The config update is allowed by hardware
 *
 */
WDG_TEXT_SECTION Std_ReturnType Wdg_LLD_ValidateTrigger(const Wdg_HWL_InstanceType eInstance)
{
    Std_ReturnType response = (Std_ReturnType)E_OK;

    /* Returns error if the WDG is disable */
    if (WDOG_CS_ENABLE_MASK != (WDOG_HWA_GetCs(g_WDOG_aBASE_ADDR32[eInstance]) & WDOG_CS_ENABLE_MASK))
    {
        response = (Std_ReturnType)E_NOT_OK;
    }

    return response;
}
/* PRQA S 3006 -- */
#endif

#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
