/**
*   @file    Ocu_Version.h
*   @version 1.5.1

*   @brief   AUTOSAR Ocu - Version definition.
*   @details This file contains the OCU version definition.
*
*   @addtogroup OCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU, TPU, EFTU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.3.0       20/10/2023    QXW0119       N/A          Release version
*   0.4.0       15/12/2023    QXW0119       N/A          Fix AMDC problems
*   0.6.0       18/03/2024    QXW0119       N/A          Add FC7240 support
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add 
                                                         Tpu support(only available on FC7240)
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/

#ifndef OCU_VERSION_H
#define OCU_VERSION_H
#ifdef __cplusplus
extern "C"{
#endif

#define OCU_AR_RELEASE_MAJOR_VERSION        4
#define OCU_AR_RELEASE_MINOR_VERSION        6
#define OCU_AR_RELEASE_REVISION_VERSION     0
#define OCU_SW_MAJOR_VERSION                1
#define OCU_SW_MINOR_VERSION                5
#define OCU_SW_PATCH_VERSION                1
#define OCU_VENDOR_ID                       174
#define OCU_MODULE_ID                       125

#ifdef __cplusplus
}
#endif

#endif /* OCU_VERSION_H */

/** @} */
