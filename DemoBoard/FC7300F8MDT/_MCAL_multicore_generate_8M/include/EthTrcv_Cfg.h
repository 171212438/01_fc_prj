/**
*   @file    EthTrcv_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR EthTrcv - PreCompile configuration EthTrcv include file.
*   @details PreCompile configuration EthTrcv include file for EthTrcv driver.
*
*   @addtogroup ETHTRCV
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EthTrcv
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.2.0       27/09/2023    QXW0085       N/A          EthTrcv Initial Version
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of EthTrcv Driver
*   0.4.0       17/11/2023    QXW0085       N/A          Update version
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix
*   0.6.0       21/03/2024    QXW0085       N/A          Update version
==================================================================================================*/

#ifndef ETHTRCV_CFG_H
#define ETHTRCV_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthTrcv_Types.h"

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define ETHTRCV_CFG_AR_RELEASE_MAJOR_VERSION            4
#define ETHTRCV_CFG_AR_RELEASE_MINOR_VERSION            6
#define ETHTRCV_CFG_AR_RELEASE_REVISION_VERSION         0
#define ETHTRCV_CFG_SW_MAJOR_VERSION                    1
#define ETHTRCV_CFG_SW_MINOR_VERSION                    5
#define ETHTRCV_CFG_SW_PATCH_VERSION                    1
#define ETHTRCV_CFG_VENDOR_ID                           174
#define ETHTRCV_CFG_MODULE_ID                           73

/*==================================================================================================
*                                      Global VARIABLES
==================================================================================================*/

extern const EthTrcv_ConfigType EthTrcv_Config;

#ifdef __cplusplus
}
#endif

#endif /* ETHTRCV_CFG_H */

/** @} */
