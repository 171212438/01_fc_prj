/**
*   @file    Wdg_174_Instance3.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Wdg - Software Watchdog Timer (WDOG) functions
*   @details This file contains the WDG Autosar driver API.
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

#ifndef Wdg_174_INSTANCE3_H
#define Wdg_174_INSTANCE3_H

/* [SWS_Wdg_00170] [SWDESG_WDG_002] */
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Wdg_HLD.h"

#if (WDG_INSTANCE3 == STD_ON)
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

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

#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else 
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

/**
* @brief WDG initialization.
*
* @param ConfigPtr Pointer to configuration set.
*
*/
WDG_TEXT_SECTION void Wdg_174_Instance3_Init(const Wdg_ConfigType* ConfigPtr);

/**
* @brief Switch the watchdog mode according to the input parameter Mode.
*
* @param Mode Mode to be configured
*
* @return Std_ReturnType.
*
*/
WDG_TEXT_SECTION Std_ReturnType Wdg_174_Instance3_SetMode(WdgIf_ModeType Mode);

/**
* @brief Reset the watchdog timeout counter according to the parameter timeout.
*
* @param timeout value (milliseconds) for setting the trigger counter.
*
*/
WDG_TEXT_SECTION void Wdg_174_Instance3_SetTriggerCondition(uint16 timeout);

#if (WDG_DIRECT_SERVICE == STD_ON)
WDG_TEXT_SECTION void Wdg_174_Instance3_Service(void);
#endif /* WDG_DIRECT_SERVICE == STD_ON */

#if (WDG_VERSION_INFO_API == STD_ON)
/**
* @brief Get WDG module version information.
*
* @param versioninfo Pointer to version structure
*
*/
WDG_TEXT_SECTION void Wdg_174_Instance3_GetVersionInfo(Std_VersionInfoType* versioninfo);
#endif /* WDG_VERSION_INFO_API == STD_ON */
#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else 
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#endif /*#if (WDG_INSTANCE3 == STD_ON)*/
#ifdef __cplusplus
}
#endif

#endif /* Wdg_INSTANCE3_H*/
/** @} */
