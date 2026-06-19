/**
 *   @file    CDD_Sdadc_LLD.h
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
#ifndef SDADC_LLD_H
#define SDADC_LLD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "CDD_Sdadc.h"
#include "CDD_Sdadc_Regs.h"

#define SDADC_ALL_HW_CHANNEL       0xFFU
#define SDADC_HW_INSTANCE0         0x0U
#define SDADC_HW_INSTANCE1         0x1U
#define SDADC_MAX_FIFO_WATERMARK   0x6U
#define LN2VALUE                   0.69314718056F
#define COMPUTATIONAL_ACCURACY_POS (1e-5f)
#define COMPUTATIONAL_ACCURACY_NEG (-1e-5f)
#define SDADC_MFSHIFT_LEFT         0x10U
#define SDADC_MFSHIFT_RIGHT        0x0U
#define SDADC_MFSHIFT_DATALENGTH   24U

typedef uint8 Sdadc_FifoEvtType;
#define SDADC_FIFO_EVT_READY 0x01U
#define SDADC_FIFO_EVT_OVF   0x02U
#define SDADC_FIFO_EVT_UDF   0x03U

#define SDADC_RDM_DEFAULT    0x00U
#define SDADC_RDM_DIRECT     0x01U
#define SDADC_RDM_FIFOGATING 0x02U

typedef struct
{
    uint16 u16DataTrunc;
    uint16 u16TimeStamp;
} Sdadc_LLD_TimestampType;

typedef struct
{
    Sdadc_ChannelStatusType Sdadc_ChannelStatus;
    uint8                   Sdadc_ChannelBufferFull;
    Sdadc_SizeType          Sdadc_ChannelBufferSize;
    Sdadc_ResultPtrType     Sdadc_ChannelBufferWPtr;
    Sdadc_ResultPtrType     Sdadc_ChannelBufferRPtr;
    Sdadc_ResultPtrType     Sdadc_ChannelBufferPtr;
} Sdadc_ChannelMDataType;

typedef struct
{
    Sdadc_SignDelayCapStatusType Sdadc_ChannelStatus;
    Sdadc_SDCapResultPtrType     Sdadc_ChannelBufferPtr;
    Sdadc_SizeType               Sdadc_ChannelBufferSize;
    Sdadc_SizeType               Sdadc_ChannelBufferCnt;
} Sdadc_ChannelSDCAPDataType;

typedef struct
{
    sint32 s32Offset;
    uint32 u32Gain;
} Sdadc_LLD_CalibDataType;

typedef struct
{
    sint64                      s64CalibDataSum;
    uint16                      u16CalibDataCnt;
    Sdadc_CalibrationStatusType Sdadc_CalibrationStatus;
    Sdadc_LLD_CalibDataType     tResult;
} Sdadc_LLD_CalibSMType;

#define CDD_SDADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

/**
 * @brief          Global configuration pointer.
 * @details        Pointer to the configuration structure.
 */
CDD_SDADC_DATA_SECTION extern const Sdadc_ConfigType *Sdadc_CfgPtr[SDADC_MAX_CORES];

#define CDD_SDADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_CONST_32
#include "Sdadc_MemMap.h"

CDD_SDADC_DATA_SECTION extern SDADC_Type *const s_apSdadc_HwInstances[SDADC_HW_INSTANCE_COUNT];

#define CDD_SDADC_STOP_SEC_CONST_32
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

CDD_SDADC_DATA_SECTION extern Sdadc_ChannelMDataType Sdadc_ChannelMData[SDADC_INSTANCE_CNT][SDADC_MAX_CHANNEL_CNT];

CDD_SDADC_DATA_SECTION extern Sdadc_ChannelSDCAPDataType Sdadc_ChannelSDCAPData[SDADC_INSTANCE_CNT][SDADC_MAX_CHANNEL_CNT];

#if (SDADC_CALIBRATION_FEATURE == STD_ON)
CDD_SDADC_DATA_SECTION extern Sdadc_LLD_CalibSMType Sdadc_CalibrationSMStatus[SDADC_HW_INSTANCE_COUNT][SDADC_MAX_CHANNEL_CNT];
#endif

#define CDD_SDADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_NO_INIT_8
#include "Sdadc_MemMap.h"

CDD_SDADC_DATA_SECTION extern uint8 Sdadc_ChannelNotificationEnable[SDADC_HW_INSTANCE_COUNT][SDADC_MAX_CHANNEL_CNT];
#if (SDADC_TS_POLLING == STD_OFF)
CDD_SDADC_DATA_SECTION extern uint8 Sdadc_ChannelTsValid[SDADC_HW_INSTANCE_COUNT][SDADC_MAX_CHANNEL_CNT];
#endif

#define CDD_SDADC_STOP_SEC_VAR_NO_INIT_8
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_CODE
#include "Sdadc_MemMap.h"

CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_SetCarrierSignal(const Sdadc_HwConfigType *pHwConfig, uint32 u32Mode);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_InitInstance(const Sdadc_HwConfigType *HwConfig);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_DeInitInstance(const Sdadc_HwConfigType *HwConfig);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_SwReset(uint8 InstanceId, uint32 DelayCnt);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_StartModulation(const Sdadc_HwConfigType *pHwConfig);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_StopModulation(const Sdadc_HwConfigType *pHwConfig);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_SetChannelSWTrigger(uint8 u8HwInstanceId, uint8 u8HwChannelId, uint8 u8Value);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_SetIntgSWTrigger(uint8 u8HwInstanceId, uint8 u8HwChannelId, uint8 u8Value);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_EnableAllChannel(const Sdadc_HwConfigType *pHwConfig, uint8 u8Enable, uint8 u8ConfigReload);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_EnableChannel(const Sdadc_HwConfigType *pHwConfig, uint8 u8HwChannelId, uint8 u8Enable, uint8 u8AccessMode, uint8 u8ConfigReload);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_EnableChannelNotification(const uint8 u8HwinstaneId, const uint8 u8HwChannelId, uint8 u8Enable);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_ClearChannelIntFlags(const uint8 u8HwinstaneId, uint8 u8HwChannelId);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_ClearAllIntFlags(const uint8 u8HwinstaneId);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_LinearBufferWrite(Sdadc_ChannelMDataType *pChannelMData, Sdadc_ResultType tResultData);
CDD_SDADC_TEXT_SECTION uint32         Sdadc_LLD_LinearBufferCnt(Sdadc_ChannelMDataType *pChannelMData);
CDD_SDADC_TEXT_SECTION void           Sdadc_LLD_RingBufferWrite(Sdadc_ChannelMDataType *pChannelMData, Sdadc_ResultType tResultData);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_RingBufferRead(Sdadc_ChannelMDataType *pChannelMData, Sdadc_ResultType *ptResultData);
CDD_SDADC_TEXT_SECTION uint32         Sdadc_LLD_RingBufferCnt(Sdadc_ChannelMDataType *pChannelMData);
CDD_SDADC_TEXT_SECTION Sdadc_ChannelConfigType  *Sdadc_LLD_GetChannelCfgByHwId(const Sdadc_HwConfigType *pHwConfig, const uint8 u8HwChannelId);
CDD_SDADC_TEXT_SECTION uint8                     Sdadc_LLD_GetChannelIdByHwId(const Sdadc_HwConfigType *pHwConfig, const uint8 u8HwChannelId);
CDD_SDADC_TEXT_SECTION uint8                     Sdadc_LLD_GetInstacneIdByHwId(const uint8 u8HwinstaneId);
CDD_SDADC_TEXT_SECTION const Sdadc_HwConfigType *Sdadc_LLD_GetConfigById(const uint8 u8HwinstaneId);
CDD_SDADC_TEXT_SECTION Std_ReturnType            Sdadc_LLD_SingleRead(const Sdadc_HwConfigType *pHwConfig, uint8 u8HwChannelId, Sdadc_ResultType *ptResultData);
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_GetTimestamp(const Sdadc_HwConfigType *pHwConfig, uint8 u8HwChannelId, Sdadc_TimestampInfoType *pTimestampInfo);
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_GetGlobalTimestamp(const Sdadc_HwConfigType *pHwConfig, Sdadc_GlobalTimestampInfoType *pTimestampInfo);
#endif
#if (SDADC_CALIBRATION_FEATURE == STD_ON)
CDD_SDADC_TEXT_SECTION Std_ReturnType              Sdadc_LLD_StartCalibration(const Sdadc_HwConfigType *pHwConfig, const Sdadc_ChannelConfigType *pChannelCfg, uint8 u8SingleEnd);
CDD_SDADC_TEXT_SECTION Std_ReturnType              Sdadc_LLD_GetCalibrationData(const uint8 u8HwinstaneId, uint8 u8HwChannelId, Sdadc_ChannelCalibInfoType *pCalibInfo);
CDD_SDADC_TEXT_SECTION void                        Sdadc_LLD_SetCalibrationStatus(const uint8 u8HwinstaneId, const uint8 u8HwChannelId, Sdadc_CalibrationStatusType u8Status);
CDD_SDADC_TEXT_SECTION Sdadc_CalibrationStatusType Sdadc_LLD_GetCalibrationStatus(const uint8 u8HwinstaneId, const uint8 u8HwChannelId);
CDD_SDADC_TEXT_SECTION void  Sdadc_LLD_StartCalibrationGainCfg(const Sdadc_HwConfigType *pHwConfig, const Sdadc_ChannelConfigType *pChannelCfg, sint32 s32Offset);
#endif
CDD_SDADC_TEXT_SECTION void  Sdadc_LLD_InitChannel(const Sdadc_HwConfigType *HwConfig, const Sdadc_ChannelConfigType *pChannelCfg, uint8 u8HwChannelId);
CDD_SDADC_TEXT_SECTION void  Sdadc_LLD_SetPwmNegTriggerOutputEnable(uint8 u8HwInstanceId, uint8 u8EnableValue);
CDD_SDADC_TEXT_SECTION void  Sdadc_LLD_SetTSignTriggerOutputEnable(uint8 u8HwInstanceId, uint8 u8HwChannelId, uint8 u8EnableValue);
CDD_SDADC_TEXT_SECTION void  Sdadc_LLD_StartSignDelayCapture(const Sdadc_HwConfigType *pHwConfig, uint8 u8HwChannelId);
CDD_SDADC_TEXT_SECTION void  Sdadc_LLD_StopSignDelayCapture(const Sdadc_HwConfigType *pHwConfig, uint8 u8HwChannelId);
CDD_SDADC_TEXT_SECTION uint8 Sdadc_LLD_COCCheckAndClear(const Sdadc_HwConfigType *pHwConfig, uint8 u8HwChannelId);

#define CDD_SDADC_STOP_SEC_CODE
#include "Sdadc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* SDADC_HW_H */

/** @} */
