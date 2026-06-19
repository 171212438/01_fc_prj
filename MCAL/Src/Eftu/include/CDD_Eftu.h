/**
*   @file    CDD_Eftu.h
*   @version 1.5.1

*   @brief   CDD_Eftu - driver API and development errors definition.
*   @details This file contains the EFTU global driver API and development errors definition.
*
*   @addtogroup Eftu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EFTU
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
*   1.0.0       14/11/2024    QXW0070       N/A          EFTU Global Initial Version
==================================================================================================*/

#ifndef CDD_EFTU_H
#define CDD_EFTU_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Mcal.h"
#include "CDD_Eftu_Types.h"
#include "CDD_Eftu_Cfg.h"
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief   API service used without Eftu module initialization
 */
#define EFTU_E_UNINIT              ((uint8)0x0AU)
/**
 * @brief   The Eftu module is already initilized
 */
#define EFTU_E_ALREADY_INITIALIZED ((uint8)0x0BU)
/**
 * @brief   The Eftu module is not properly configured
 */
#define EFTU_E_PARAM_CONFIG        ((uint8)0x0CU)
/**
 * @brief API Eftu_GetVersionInfo is called and the parameter versioninfo
 *        is is invalid ( e.g. NULL )
 *
 */
#define EFTU_E_PARAM_VINFO         ((uint8)0x19U)
/**
 * @brief API service ID for EftuGLobal_Init function
 * @details Parameters used when raising an error/exception
 * */
#define EFTU_INIT_ID               0x00U
/**
 * @brief API service ID for Eftu_DeInit function
 * @details Parameters used when raising an error/exception
 * */
#define EFTU_DEINIT_ID             0x01U
/**
 * @brief API service ID for Eftu_GetVersionInfo function
 * @details Parameters used when raising an error/exception
 * */
#define EFTU_GETVERSIONINFO_ID     0x02U
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define EFTU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Eftu_MemMap.h"
#ifndef EFTU_PRECOMPILE_SUPPORT
extern const Eftu_ConfigType Eftu_Config;
#endif
#define EFTU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Eftu_MemMap.h"
/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define EFTU_START_SEC_CODE
#include "Eftu_MemMap.h"
/**
 * @brief Initialize the Eftu module
 *
 * This function initializes the Eftu module based on the provided configuration pointer.
 * Before initialization, it performs error checks to ensure the module has not been initialized
 * already, and that the provided configuration pointer is valid.
 *
 * @param ConfigPtr Pointer to the Eftu configuration structure
 */
EFTU_TEXT_SECTION void Eftu_Init(const Eftu_ConfigType *ConfigPtr);
#if (EFTU_DEINIT_API == STD_ON)
/**
 * @brief Deinitialize the Eftu module.
 *
 * This function deinitializes the Eftu module, including hardware deinitialization and resetting
 * the configuration pointer. If development error detection is enabled, it checks if the
 * configuration pointer is NULL.
 */
EFTU_TEXT_SECTION void Eftu_DeInit(void);
#endif
#if (EFTU_GET_VERSION_INFO_API == STD_ON)
/**
 * @brief Get the module version information.
 *
 * This function fills the version information structure with the vendor ID, module ID,
 * software major version, minor version, and patch version.
 * If the development error detection is enabled and the provided pointer is NULL,
 * an error will be reported using Det_ReportError.
 *
 * @param versioninfo Pointer to the version information structure to be filled.
 */
EFTU_TEXT_SECTION void Eftu_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif /* (EFTU_GET_VERSION_INFO_API == STD_ON) */
#define EFTU_STOP_SEC_CODE
#include "Eftu_MemMap.h"
#ifdef __cplusplus
}
#endif

#endif /* CDD_EFTU_H */
/** @} */
