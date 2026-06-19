/**
 *   @file    CDD_Sdadc_PBCfg.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Sdadc - CDD_SDADC precompile configuration parameters.
 *   @details This file contains the Sdadc precompile configuration parameters.
 *
 *   @addtogroup Sdadc
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SDADC
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
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.8.0       20/8/2024     QXW0084       N/A          SDADC Initial Version
==================================================================================================*/
#include "Mcal.h"
#include "CDD_Sdadc_PBCfg.h"
#include "CDD_Sdadc.h"
#ifdef __cplusplus
extern "C"{
#endif


#define CDD_SDADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Sdadc_MemMap.h"


CDD_SDADC_DATA_SECTION const Sdadc_ChannelCalibInfoType tSdadc_Ins0Ch0CalibCfg={
    /** Configuration for SDADC CBR register */
    0x00000000U,
    /** Configuration for SDADC CGNR register */
    0x00000000U,
};

CDD_SDADC_DATA_SECTION const Sdadc_ChannelConfigType tSdadc_Ins0Channel0Cfg={
    /** Hardware channel identifier */
    0U,
    /** Access Mode */
    SDADC_SINGLE_READ,
    /** Configuration for Coversion interrupt */
    0U,
    /** Global Timestamp */
    0U,
    /** Configuration for SDADC CCR register */
    0x30014006U,
    /** Configuration for SDADC CDR register */
    0x501f587fU,
    /** Configuration for SDADC CFR register */
    0x20501000U,
    /** Configuration for SDADC CPR register */
    0xefe10801U,
    /** Configuration for SDADC CLLMT register */
    0x00000000U,
    /** Configuration for SDADC CHLMT register */
    0x00000000U,
    /** Configuration for SDADC CRTCSR register */
    0x00008000U,
    /** Configuration for SDADC CSDR register */
    0x02010000U,
    /** Configuration for SDADC CICFR register */
    0x3f00000eU,
    /** Configuration for SDADC CMACSR register */
    0xa8800d00U,
    /** Configuration for SDADC CTSCNTR register */
    0x202b0000U,
    /** Configuration for Calibration */
    &taSdadc_CalibInfoPtr[0][0],
    /** BufferFullNotification */
    NULL_PTR,
    /** ConversionCompleteNotification */
    SDADC0_CH0_COC_Notification,
    /** FifoOverFlowNotification */
    NULL_PTR,
    /** ZerocrossNotification */
    NULL_PTR,
    /** HighLimitNotification */
    NULL_PTR,
    /** LowLimitNotification */
    NULL_PTR,
    /** WindowLimitNotification */
    NULL_PTR,
    /** ShortCircuitNotification */
    NULL_PTR,
    /** SaturationNotification */
    NULL_PTR,
    /** ClockAbsenceNotification */
    NULL_PTR,
    /** TimestampValidNotification */
    SDADC0_CH0_TimeStamp_Notification,
    /** TsignP2NNotification */
    NULL_PTR,
};


CDD_SDADC_DATA_SECTION const Sdadc_ChannelCalibInfoType tSdadc_Ins0Ch1CalibCfg={
    /** Configuration for SDADC CBR register */
    0x00000000U,
    /** Configuration for SDADC CGNR register */
    0x00000000U,
};

CDD_SDADC_DATA_SECTION const Sdadc_ChannelConfigType tSdadc_Ins0Channel1Cfg={
    /** Hardware channel identifier */
    1U,
    /** Access Mode */
    SDADC_STREAM_LINEAR_BUFFER,
    /** Configuration for Coversion interrupt */
    0U,
    /** Global Timestamp */
    0U,
    /** Configuration for SDADC CCR register */
    0x30014006U,
    /** Configuration for SDADC CDR register */
    0x501f587fU,
    /** Configuration for SDADC CFR register */
    0x20501000U,
    /** Configuration for SDADC CPR register */
    0xefe10801U,
    /** Configuration for SDADC CLLMT register */
    0x00000000U,
    /** Configuration for SDADC CHLMT register */
    0x00000000U,
    /** Configuration for SDADC CRTCSR register */
    0x00008000U,
    /** Configuration for SDADC CSDR register */
    0x02010000U,
    /** Configuration for SDADC CICFR register */
    0x3f00000eU,
    /** Configuration for SDADC CMACSR register */
    0xa8800d00U,
    /** Configuration for SDADC CTSCNTR register */
    0x202b0000U,
    /** Configuration for Calibration */
    &taSdadc_CalibInfoPtr[0][1],
    /** BufferFullNotification */
    SDADC0_CH1_BF_Notification,
    /** ConversionCompleteNotification */
    SDADC0_CH1_COC_Notification,
    /** FifoOverFlowNotification */
    NULL_PTR,
    /** ZerocrossNotification */
    NULL_PTR,
    /** HighLimitNotification */
    NULL_PTR,
    /** LowLimitNotification */
    NULL_PTR,
    /** WindowLimitNotification */
    NULL_PTR,
    /** ShortCircuitNotification */
    NULL_PTR,
    /** SaturationNotification */
    NULL_PTR,
    /** ClockAbsenceNotification */
    NULL_PTR,
    /** TimestampValidNotification */
    NULL_PTR,
    /** TsignP2NNotification */
    NULL_PTR,
};


CDD_SDADC_DATA_SECTION const Sdadc_ChannelCalibInfoType tSdadc_Ins0Ch2CalibCfg={
    /** Configuration for SDADC CBR register */
    0x00000000U,
    /** Configuration for SDADC CGNR register */
    0x00000000U,
};

CDD_SDADC_DATA_SECTION const Sdadc_ChannelConfigType tSdadc_Ins0Channel2Cfg={
    /** Hardware channel identifier */
    2U,
    /** Access Mode */
    SDADC_CIRCULAR_BUFFER,
    /** Configuration for Coversion interrupt */
    0U,
    /** Global Timestamp */
    0U,
    /** Configuration for SDADC CCR register */
    0x30014006U,
    /** Configuration for SDADC CDR register */
    0x501f587fU,
    /** Configuration for SDADC CFR register */
    0x20501000U,
    /** Configuration for SDADC CPR register */
    0xefe10801U,
    /** Configuration for SDADC CLLMT register */
    0x00000000U,
    /** Configuration for SDADC CHLMT register */
    0x00000000U,
    /** Configuration for SDADC CRTCSR register */
    0x00008000U,
    /** Configuration for SDADC CSDR register */
    0x02010000U,
    /** Configuration for SDADC CICFR register */
    0x3f00000eU,
    /** Configuration for SDADC CMACSR register */
    0xa8800d00U,
    /** Configuration for SDADC CTSCNTR register */
    0x202b0000U,
    /** Configuration for Calibration */
    &taSdadc_CalibInfoPtr[0][2],
    /** BufferFullNotification */
    SDADC0_CH2_BF_Notification,
    /** ConversionCompleteNotification */
    SDADC0_CH2_COC_Notification,
    /** FifoOverFlowNotification */
    NULL_PTR,
    /** ZerocrossNotification */
    NULL_PTR,
    /** HighLimitNotification */
    NULL_PTR,
    /** LowLimitNotification */
    NULL_PTR,
    /** WindowLimitNotification */
    NULL_PTR,
    /** ShortCircuitNotification */
    NULL_PTR,
    /** SaturationNotification */
    NULL_PTR,
    /** ClockAbsenceNotification */
    NULL_PTR,
    /** TimestampValidNotification */
    NULL_PTR,
    /** TsignP2NNotification */
    NULL_PTR,
};


CDD_SDADC_DATA_SECTION const Sdadc_ChannelConfigTypeConstPtr aSdadc_Ins0ChannelCfgs[SDADC_MAX_CHANNEL_CNT] = {
  &tSdadc_Ins0Channel0Cfg,
  &tSdadc_Ins0Channel1Cfg,
  &tSdadc_Ins0Channel2Cfg,
};

CDD_SDADC_DATA_SECTION const Sdadc_ChannelCalibInfoType tSdadc_Ins1Ch0CalibCfg={
    /** Configuration for SDADC CBR register */
    0x00000000U,
    /** Configuration for SDADC CGNR register */
    0x00000000U,
};

CDD_SDADC_DATA_SECTION const Sdadc_ChannelConfigType tSdadc_Ins1Channel0Cfg={
    /** Hardware channel identifier */
    0U,
    /** Access Mode */
    SDADC_SINGLE_READ,
    /** Configuration for Coversion interrupt */
    0U,
    /** Global Timestamp */
    0U,
    /** Configuration for SDADC CCR register */
    0x30000006U,
    /** Configuration for SDADC CDR register */
    0x501f187fU,
    /** Configuration for SDADC CFR register */
    0x20501000U,
    /** Configuration for SDADC CPR register */
    0xefe10801U,
    /** Configuration for SDADC CLLMT register */
    0x00000000U,
    /** Configuration for SDADC CHLMT register */
    0x00000000U,
    /** Configuration for SDADC CRTCSR register */
    0x00018000U,
    /** Configuration for SDADC CSDR register */
    0x03020000U,
    /** Configuration for SDADC CICFR register */
    0x00000000U,
    /** Configuration for SDADC CMACSR register */
    0xa8800d00U,
    /** Configuration for SDADC CTSCNTR register */
    0x212b0000U,
    /** Configuration for Calibration */
    &taSdadc_CalibInfoPtr[1][0],
    /** BufferFullNotification */
    NULL_PTR,
    /** ConversionCompleteNotification */
    SDADC1_CH0_COC_Notification,
    /** FifoOverFlowNotification */
    NULL_PTR,
    /** ZerocrossNotification */
    NULL_PTR,
    /** HighLimitNotification */
    NULL_PTR,
    /** LowLimitNotification */
    NULL_PTR,
    /** WindowLimitNotification */
    NULL_PTR,
    /** ShortCircuitNotification */
    NULL_PTR,
    /** SaturationNotification */
    NULL_PTR,
    /** ClockAbsenceNotification */
    NULL_PTR,
    /** TimestampValidNotification */
    SDADC1_CH0_TimeStamp_Notification,
    /** TsignP2NNotification */
    NULL_PTR,
};


CDD_SDADC_DATA_SECTION const Sdadc_ChannelCalibInfoType tSdadc_Ins1Ch1CalibCfg={
    /** Configuration for SDADC CBR register */
    0x00000000U,
    /** Configuration for SDADC CGNR register */
    0x00000000U,
};

CDD_SDADC_DATA_SECTION const Sdadc_ChannelConfigType tSdadc_Ins1Channel1Cfg={
    /** Hardware channel identifier */
    1U,
    /** Access Mode */
    SDADC_STREAM_LINEAR_BUFFER,
    /** Configuration for Coversion interrupt */
    0U,
    /** Global Timestamp */
    0U,
    /** Configuration for SDADC CCR register */
    0x30000006U,
    /** Configuration for SDADC CDR register */
    0x501f187fU,
    /** Configuration for SDADC CFR register */
    0x20501000U,
    /** Configuration for SDADC CPR register */
    0xefe10801U,
    /** Configuration for SDADC CLLMT register */
    0x00000000U,
    /** Configuration for SDADC CHLMT register */
    0x00000000U,
    /** Configuration for SDADC CRTCSR register */
    0x00008000U,
    /** Configuration for SDADC CSDR register */
    0x02010000U,
    /** Configuration for SDADC CICFR register */
    0x00000000U,
    /** Configuration for SDADC CMACSR register */
    0xa8800d00U,
    /** Configuration for SDADC CTSCNTR register */
    0x212b0000U,
    /** Configuration for Calibration */
    &taSdadc_CalibInfoPtr[1][1],
    /** BufferFullNotification */
    SDADC1_CH1_BF_Notification,
    /** ConversionCompleteNotification */
    SDADC1_CH1_COC_Notification,
    /** FifoOverFlowNotification */
    NULL_PTR,
    /** ZerocrossNotification */
    NULL_PTR,
    /** HighLimitNotification */
    NULL_PTR,
    /** LowLimitNotification */
    NULL_PTR,
    /** WindowLimitNotification */
    NULL_PTR,
    /** ShortCircuitNotification */
    NULL_PTR,
    /** SaturationNotification */
    NULL_PTR,
    /** ClockAbsenceNotification */
    NULL_PTR,
    /** TimestampValidNotification */
    SDADC1_CH1_TimeStamp_Notification,
    /** TsignP2NNotification */
    NULL_PTR,
};


CDD_SDADC_DATA_SECTION const Sdadc_ChannelCalibInfoType tSdadc_Ins1Ch2CalibCfg={
    /** Configuration for SDADC CBR register */
    0x00000000U,
    /** Configuration for SDADC CGNR register */
    0x00000000U,
};

CDD_SDADC_DATA_SECTION const Sdadc_ChannelConfigType tSdadc_Ins1Channel2Cfg={
    /** Hardware channel identifier */
    2U,
    /** Access Mode */
    SDADC_CIRCULAR_BUFFER,
    /** Configuration for Coversion interrupt */
    0U,
    /** Global Timestamp */
    0U,
    /** Configuration for SDADC CCR register */
    0x30000006U,
    /** Configuration for SDADC CDR register */
    0x501f187fU,
    /** Configuration for SDADC CFR register */
    0x20501000U,
    /** Configuration for SDADC CPR register */
    0xefe10801U,
    /** Configuration for SDADC CLLMT register */
    0x00000000U,
    /** Configuration for SDADC CHLMT register */
    0x00000000U,
    /** Configuration for SDADC CRTCSR register */
    0x00048000U,
    /** Configuration for SDADC CSDR register */
    0x15050000U,
    /** Configuration for SDADC CICFR register */
    0x00000000U,
    /** Configuration for SDADC CMACSR register */
    0xa8800d00U,
    /** Configuration for SDADC CTSCNTR register */
    0x212b0000U,
    /** Configuration for Calibration */
    &taSdadc_CalibInfoPtr[1][2],
    /** BufferFullNotification */
    SDADC1_CH2_BF_Notification,
    /** ConversionCompleteNotification */
    SDADC1_CH2_COC_Notification,
    /** FifoOverFlowNotification */
    NULL_PTR,
    /** ZerocrossNotification */
    NULL_PTR,
    /** HighLimitNotification */
    NULL_PTR,
    /** LowLimitNotification */
    NULL_PTR,
    /** WindowLimitNotification */
    NULL_PTR,
    /** ShortCircuitNotification */
    NULL_PTR,
    /** SaturationNotification */
    NULL_PTR,
    /** ClockAbsenceNotification */
    NULL_PTR,
    /** TimestampValidNotification */
    SDADC1_CH2_TimeStamp_Notification,
    /** TsignP2NNotification */
    NULL_PTR,
};


CDD_SDADC_DATA_SECTION const Sdadc_ChannelConfigTypeConstPtr aSdadc_Ins1ChannelCfgs[SDADC_MAX_CHANNEL_CNT] = {
  &tSdadc_Ins1Channel0Cfg,
  &tSdadc_Ins1Channel1Cfg,
  &tSdadc_Ins1Channel2Cfg,
};

CDD_SDADC_DATA_SECTION const Sdadc_HwConfigType tSdadc_Ins0HwCfg_EcucPartition_0={
    /* Partition core id of Instance */
    SDADC_ECUCPARTITION_0_CORE_ID,
    /* hw id of Instance */
    0U,
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
    /**< @brief Whether the SDADC unit has a valid DMA channel */
    0U,
    /**< @brief DMA instance associated with the SDADC instance */
    0U,
    /**< @brief DMA channel associated with the SDADC instance */
    0U,
#else
    0U,
    0U,
    0U,
#endif
    /* Delay Factor */
    2U,
    /* Function Clock */
    150000000U,
    /** Configuration for Ctrl register */
    0x38040000U,
    /** Configuration for Nier register */
    0x00000000U,
    /** Configuration for Abnier0 register */
    0x00000000U,
    /** Configuration for Abnier1 register */
    0x00000000U,
    /** Configuration for PwmGen register */
    0x00000048U,
    /** Configuration for SDADC BACSR register */
    0x001f4071U,
    /** Configuration for Extie register */
    0x00000000U,
    /** Configuration for TimeStamp lock source register */
    0x00000006U,
    /** Configuration for TimeStamp source Selection register */
    0x00000000U,
    /** Configuration for Channels */
    aSdadc_Ins0ChannelCfgs,
};
CDD_SDADC_DATA_SECTION const Sdadc_HwConfigType tSdadc_Ins1HwCfg_EcucPartition_1={
    /* Partition core id of Instance */
    SDADC_ECUCPARTITION_1_CORE_ID,
    /* hw id of Instance */
    1U,
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
    /**< @brief Whether the SDADC unit has a valid DMA channel */
    0U,
    /**< @brief DMA instance associated with the SDADC instance */
    0U,
    /**< @brief DMA channel associated with the SDADC instance */
    0U,
#else
    0U,
    0U,
    0U,
#endif
    /* Delay Factor */
    2U,
    /* Function Clock */
    150000000U,
    /** Configuration for Ctrl register */
    0x38040000U,
    /** Configuration for Nier register */
    0x00000000U,
    /** Configuration for Abnier0 register */
    0x00000000U,
    /** Configuration for Abnier1 register */
    0x00000000U,
    /** Configuration for PwmGen register */
    0x00000048U,
    /** Configuration for SDADC BACSR register */
    0x001f4071U,
    /** Configuration for Extie register */
    0x00000000U,
    /** Configuration for TimeStamp lock source register */
    0x00000006U,
    /** Configuration for TimeStamp source Selection register */
    0x00000000U,
    /** Configuration for Channels */
    aSdadc_Ins1ChannelCfgs,
};


CDD_SDADC_DATA_SECTION const Sdadc_ConfigType Sdadc_Config_EcucPartition_0 =
{
    SDADC_ECUCPARTITION_0_CORE_ID,            /** Core Id */
    SDADC_INSTANCE_CNT,
    {
        /**
        * @brief   Configuration for Sdadc Instance 0.
        */
        &tSdadc_Ins0HwCfg_EcucPartition_0,
        /**
        * @brief   Configuration for Sdadc Instance 1.
        */
        &tSdadc_Ins1HwCfg_EcucPartition_1,
    }
};

CDD_SDADC_DATA_SECTION const Sdadc_ConfigType Sdadc_Config_EcucPartition_1 =
{
    SDADC_ECUCPARTITION_1_CORE_ID,            /** Core Id */
    SDADC_INSTANCE_CNT,
    {
        /**
        * @brief   Configuration for Sdadc Instance 0.
        */
        &tSdadc_Ins0HwCfg_EcucPartition_0,
        /**
        * @brief   Configuration for Sdadc Instance 1.
        */
        &tSdadc_Ins1HwCfg_EcucPartition_1,
    }
};


CDD_SDADC_DATA_SECTION const Sdadc_ConfigType * const Sdadc_ConfigPredefine[SDADC_MAX_CORES] =
{
    &Sdadc_Config_EcucPartition_0,
    &Sdadc_Config_EcucPartition_1,
    NULL_PTR,
};

#define CDD_SDADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

CDD_SDADC_DATA_SECTION Sdadc_ChannelCalibInfoTypeConstPtr taSdadc_CalibInfoPtr[SDADC_INSTANCE_CNT][SDADC_MAX_CHANNEL_CNT]={
  {
    &tSdadc_Ins0Ch0CalibCfg,
    &tSdadc_Ins0Ch1CalibCfg,
    &tSdadc_Ins0Ch2CalibCfg,
  },
  {
    &tSdadc_Ins1Ch0CalibCfg,
    &tSdadc_Ins1Ch1CalibCfg,
    &tSdadc_Ins1Ch2CalibCfg,
  },
};

#define CDD_SDADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
