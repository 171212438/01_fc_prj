/**
*   @file    WdgIf.h
*   @version 1.5.1
*
*   @brief   AUTOSAR WdgIf - Interface header file.
*   @details Contains information about Interface header file.
*            This file contains sample code only. It is not part of the production code deliverables.
*
*   @addtogroup Wdg
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
==================================================================================================*/

#ifndef WDGIF_H
#define WDGIF_H

#ifdef __cplusplus
extern "C" {
#endif



/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Std_Types.h"
#include "WdgIf_Cfg.h"
#include "WdgIf_Types.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define WDGIF_VENDOR_ID                    174
#define WDGIF_MODULE_ID                    43
#define WDGIF_AR_RELEASE_MAJOR_VERSION     4
#define WDGIF_AR_RELEASE_MINOR_VERSION     6
#define WDGIF_AR_RELEASE_REVISION_VERSION  0
#define WDGIF_SW_MAJOR_VERSION             1
#define WDGIF_SW_MINOR_VERSION             5
#define WDGIF_SW_PATCH_VERSION             1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

extern const WdgIf_SetModeFctPtrType WdgIf_SetModeFctPtr[];
extern const WdgIf_SetTriggerFctPtrType WdgIf_SetTriggerConditionFctPtr[];

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
*   @brief  This define indicates the error detectable by the Watchdog Driver Interface
*/
#define WDGIF_E_PARAM_DEVICE    (uint8)0x01

/**
*    @brief  Service id for the setmode function
*/
#define WDGIF_SETMODE_ID   (uint8)0x01

/**
*   @brief  Service id for the trigger function
*/
#define WDGIF_TRIGGER_ID   (uint8)0x02

/**
*   @brief  Define the setmode function
*/
#define WdgIf_SetMode(DeviceIndex, WdgMode)    WdgIf_SetModeFctPtr[DeviceIndex](WdgMode)

/**
*   @brief  Define the setmode function
*/
#define WdgIf_SetTriggerCondition(DeviceIndex, Timeout) WdgIf_SetTriggerConditionFctPtr[DeviceIndex](Timeout)

#if (WDGIF_VERSION_INFO_API==STD_ON)

/**
*   @brief  Service id for the trigger function
*/
#define WDGIF_VERSION_ID   (uint8)0x03

/**
*   @brief  WdgIf_GetVersionInfo function
*/
#define WdgIf_GetVersionInfo(versioninfo) { (versioninfo)->vendorID = WDGIF_VENDOR_ID; \
                                            (versioninfo)->moduleID = WDGIF_MODULE_ID; \
                                            (versioninfo)->sw_major_version = WDGIF_SW_MAJOR_VERSION; \
                                            (versioninfo)->sw_minor_version = WDGIF_SW_MINOR_VERSION; \
                                            (versioninfo)->sw_patch_version = WDGIF_SW_PATCH_VERSION; \
                                          }
#endif /* WDGIF_VERSION_INFO_API==STD_ON */
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*WDGIF_H*/
