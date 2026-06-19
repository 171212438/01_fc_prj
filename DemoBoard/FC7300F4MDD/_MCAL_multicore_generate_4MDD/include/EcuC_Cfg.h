/**
*   @file    EcuC_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR EcuC configuration - API
*   @details This file contains the EcuC configurations
*
*   @addtogroup EcuC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EcuC
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifndef ECUC_CFG_H
#define ECUC_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                  FILE VERSION INFORMATION
==================================================================================================*/

#define ECUC_VENDOR_ID_CFG         174
#define ECUC_AR_REL_MAJ_VER_CFG    4
#define ECUC_AR_REL_MIN_VER_CFG    6
#define ECUC_AR_REL_REV_VER_CFG    0
#define ECUC_SW_MAJ_VER_CFG        1
#define ECUC_SW_MIN_VER_CFG        0
#define ECUC_SW_PAT_VER_CFG        3

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
/*
 * IMPORTANT NOTE : these defines are stub only and do not correspond to any AUTOSAR requirement.
 * Please redefine a similar constant in drivers in case of need, to avoid any issue at integration time.
 */
#define ECUC_PARTITIONS_NB (2UL)

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/*
 * IMPORTANT NOTE : these defines are stub only and do not correspond to any AUTOSAR requirement.
 * Please don't use these symbolic names inside MCAL drivers, to avoid any issue at integration time.
 */
#define EcucConf_EcucPartition_EcucPartition_0   0UL
#define EcucConf_EcucPartition_EcucPartition_1   1UL

#ifdef __cplusplus
}
#endif

#endif /* ECUC_CFG_H */


/** @} */
