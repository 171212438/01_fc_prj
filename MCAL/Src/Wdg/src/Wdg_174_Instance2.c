/**
*   @file    Wdg_Instance2.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Wdg - Software Watchdog Timer (WDOG) functions
*   @details Contains functions for accessing WDOG from the WDG driver perspective
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

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/* [SWS_Wdg_00169] [SWDESG_WDG_002] [SWDESG_WDG_001] */
#include "Wdg_174_Instance2.h"
#include "Wdg_HLD.h"
#include "Wdg_Version.h"
#include "Wdg_174_Instance2_Cbk.h"

#if (WDG_INSTANCE2 == STD_ON)
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
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/* [SWS_Wdg_00168] [SWS_Wdg_00172] [SWDESG_WDG_003] */
#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else 
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/**
* @brief WDG initialization. [SWS_Wdg_00106] [SWDESG_WDG_028]
*
* @param ConfigPtr Pointer to configuration set.
*
*/
WDG_TEXT_SECTION void Wdg_174_Instance2_Init(const Wdg_ConfigType* ConfigPtr)
{
    Wdg_HLD_Init(ConfigPtr, WDG_HWL_INSTANCE2);
}
/* PRQA S 1503 -- */

/**
* @brief Switch the watchdog mode according to the input parameter Mode. [SWS_Wdg_00107] [SWDESG_WDG_030]
*
* @param Mode Mode to be configured.
*
* @return Std_ReturnType.
*
*/
WDG_TEXT_SECTION Std_ReturnType Wdg_174_Instance2_SetMode(WdgIf_ModeType Mode)
{
    return Wdg_HLD_SetMode(Mode, WDG_HWL_INSTANCE2);
}


/**
* @brief Reset the watchdog timeout counter according to the parameter timeout. [SWS_Wdg_00155] [SWDESG_WDG_032]
*
* @param timeout value (milliseconds) for setting the trigger counter.
*
*/
WDG_TEXT_SECTION void Wdg_174_Instance2_SetTriggerCondition(uint16 timeout)
{
#if (WDG_DIRECT_SERVICE == STD_OFF)
    Wdg_HLD_SetTriggerCondition(timeout, WDG_HWL_INSTANCE2);
#else
    (void)timeout;
#endif /* WDG_DIRECT_SERVICE == STD_OFF */
}


#if (WDG_DIRECT_SERVICE == STD_ON)
/**
* @brief Service the Watchdog directly without using an hardware timer. [FUNC_WDG_0027] [SWDESG_WDG_036]
*
*/
WDG_TEXT_SECTION void Wdg_174_Instance2_Service(void)
{
    Wdg_HLD_Service(WDG_HWL_INSTANCE2);
}
#endif /* WDG_DIRECT_SERVICE == STD_ON */

/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
#if (WDG_VERSION_INFO_API == STD_ON)
/**
* @brief Get WDG module version information. [SWS_Wdg_00109] [SWDESG_WDG_034]
*
* @param versioninfo Pointer to version structure
*
*/
WDG_TEXT_SECTION void Wdg_174_Instance2_GetVersionInfo(Std_VersionInfoType* versioninfo)
{
    Wdg_HLD_GetVersionInfo(versioninfo, WDG_HWL_INSTANCE2);
}
#endif /* WDG_VERSION_INFO_API == STD_ON */
/* PRQA S 1503 -- */
#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else 
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#endif
#ifdef __cplusplus
}
#endif

/** @} */
