/**
*   @file    CDD_Sdadc_PBCfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR SDADC - hardware specific type definition
*   @details This file contains the SDADC AUTOSAR hardware specific type definition
*
*   @addtogroup SDADC
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Sdadc
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
*   0.8.0       20/8/2024     QXW0084       N/A          SDADC Initial Version
==================================================================================================*/
#ifndef SDADC_PBCFG_H
#define SDADC_PBCFG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Mcal.h"
#include "CDD_Sdadc_Cfg.h"


#define SDADC_0_CHANNEL_CNT 3
#define SDADC_1_CHANNEL_CNT 3

/* Symbolic names of configured SDADC Channels */
#define SdadcConf_SdadcInstance_0     0U
#define SdadcConf_SdadcInstance_1     1U

#define SdadcConf_Ins0_SdadcChannel_0     0U
#define SdadcConf_Ins0_SdadcChannel_1     1U
#define SdadcConf_Ins0_SdadcChannel_2     2U
#define SdadcConf_Ins1_SdadcChannel_0     0U
#define SdadcConf_Ins1_SdadcChannel_1     1U
#define SdadcConf_Ins1_SdadcChannel_2     2U

#define SDADC_CFG_PTR_INIT_ARRAY  {NULL_PTR, NULL_PTR, NULL_PTR}
#define SDADC_UNINIT_ARRAY  {SDADC_UNINIT, SDADC_UNINIT, SDADC_UNINIT}

#define SDADC_INSTANCE_CNT 2

/**
 * @brief          SDADC driver configuration type structure.
 * @details        This is the type of the pointer to the external data
 *                 Sdadc instances.
 *                 A pointer of such a structure is provided to the SDADC driver
 *                 initialization routine for configuration of the SDADC hardware
 *                 Instance.
 * @api
 */
typedef struct
{
    /**!< @brief Partition core id is assigned for this configuration */
    uint16 u16PartionCoreId;
    uint16 u16InstanceCnt;
    /**
     * @brief     Hardware Instance.
     * @details   Constant pointer of the constant external data
     *            structure containing the overall initialization data
     *            for all the SDADC Instances.
     */
    const Sdadc_HwConfigType *apSdadcInstanceCfg[SDADC_INSTANCE_CNT];
} Sdadc_ConfigType;


#define CDD_SDADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Sdadc_MemMap.h"
/**
 * @brief          Sdadc Configuration data for Sdadc_Config.
 */
CDD_SDADC_DATA_SECTION extern const Sdadc_ConfigType *const Sdadc_ConfigPredefine[SDADC_MAX_CORES];

#define CDD_SDADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

CDD_SDADC_DATA_SECTION extern const Sdadc_ChannelCalibInfoType *taSdadc_CalibInfoPtr[SDADC_INSTANCE_CNT][SDADC_MAX_CHANNEL_CNT];

#define CDD_SDADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"
#ifdef __cplusplus
}
#endif

#endif /* SDADC_PBCFG_H */

/** @} */
