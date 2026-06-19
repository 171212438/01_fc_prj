/**
 *   @file    CDD_Msc_PBCfg.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Msc - High level header of MSC driver.
 *   @details This file contains declarations of the functions defined by AutoSAR.
 *
 *   @addtogroup MSC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : MSC
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifndef CDD_MSC_PBCFG_H
#define CDD_MSC_PBCFG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Platform_Types.h"
#include "CDD_Msc_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/


/**
 * @brief   Switches the Development Error Detection and Notification ON or OFF.
 */
#define MSC_DEV_ERROR_DETECT (STD_ON)

/**
 * @brief   Switches the Development Error Detection and Notification ON or OFF.
 */
#define MSC_MULTICORE_SUPPORT (STD_OFF)

/**
 * @brief          Support for version info API.
 * @details        Switches the Msc_GetVersionInfo() API ON or OFF.
 */
#define MSC_VERSION_INFO_API (STD_ON)

/**
 * @brief
 * @details
 */
#define MSC_DISABLE_DEM_REPORT_ERROR_STATUS (STD_ON)
/**
 * @brief   Number of loops before returning MSC_E_TIMEOUT.
 */
#define MSC_TIMEOUT_LOOPS 10000U

#if (MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#endif /* MSC_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */

#define MSC_POLLING_USED (STD_OFF)
#define MSC_0_ISR_USED


#if (STD_ON == MSC_MULTICORE_SUPPORT)
#define MSC_GetCoreID()                 GET_CPU_ID()
#else
#define MSC_GetCoreID()                 0
#endif

#define CDD_MSC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Msc_MemMap.h"
/**
 * @brief          Msc Configuration data for Msc_Config.
 */
extern CDD_MSC_DATA_SECTION const Msc_ConfigType *const Msc_ConfigPredefine[MSC_MAX_PARTITIONS];

#define CDD_MSC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Msc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* CDD_MSC_PBCFG_H */
