/**
*   @file    CDD_Eftu_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Eftu - Module configuration interface for EFTU global driver.
*   @details Contains the module configuration interface for EFTU global driver.
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
*   1.0.0       19/11/2024    QXW0070       N/A          Mailbox Initial Version
==================================================================================================*/
#ifndef CDD_EFTU_CFG_H
#define CDD_EFTU_CFG_H
#ifdef __cplusplus
extern "C" {
#endif
#include "Mcal.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EFTU_CFG_VENDOR_ID                       174
#define EFTU_CFG_AR_RELEASE_MAJOR_VERSION        4
#define EFTU_CFG_AR_RELEASE_MINOR_VERSION        6
#define EFTU_CFG_AR_RELEASE_REVISION_VERSION     0
#define EFTU_CFG_SW_MAJOR_VERSION                1
#define EFTU_CFG_SW_MINOR_VERSION                5
#define EFTU_CFG_SW_PATCH_VERSION                1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

#define EFTU_DEV_ERROR_DETECT (STD_ON)

#define EFTU_DEINIT_API (STD_ON)

#define EFTU_GET_VERSION_INFO_API (STD_ON)

#define EFTU_CCM_USED




#define EFTU_TOM_USED

/* EFTU Reg features*/
#define EFTU_CCM_DMA_REQ_COUNT              (6u)
#define EFTU_CCM_DMA_REQ_REG_COUNT          (3u)
#define EFTU_CCM_CNT_OUTPUT_SUPPORT         (STD_OFF)
#define EFTU_CCM_RESn_LOCK_COUNT            (0u)
#define EFTU_CCM_HRPWM_MUX_SUPPORT          (STD_ON)

#ifdef __cplusplus
}
#endif
#endif /* CDD_EFTU_CFG_H */
/** @} */
