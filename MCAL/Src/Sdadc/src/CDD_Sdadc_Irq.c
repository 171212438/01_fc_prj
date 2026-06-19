/**
 *   @file    CDD_Sdadc_Irq.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Sdadc - SDADC Interrupt source file.
 *   @details  Autosar Sdadc Interrupt source file.
 *
 *   @addtogroup SDADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : SDADC
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.8.0       11/14/2024    QXW0084       N/A          SDADC Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_Sdadc_Hw.h"
#include "CDD_Sdadc_LLD.h"
#include "Mcal.h"
#include "SchM_Sdadc.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

#define SDADC_OFFSET_CALIBRATION_CNT 16U
#define SDADC_GAIN_CALIBRATION_CNT   16U
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#define CDD_SDADC_START_SEC_CODE
#include "Sdadc_MemMap.h"

#ifdef SDADC_UNIT_0_CH_0_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc0_Ch0_ISR_Handler);
#endif

#ifdef SDADC_UNIT_0_CH_1_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc0_Ch1_ISR_Handler);
#endif

#ifdef SDADC_UNIT_0_CH_2_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc0_Ch2_ISR_Handler);
#endif

#ifdef SDADC_UNIT_1_CH_0_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc1_Ch0_ISR_Handler);
#endif

#ifdef SDADC_UNIT_1_CH_1_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc1_Ch1_ISR_Handler);
#endif

#ifdef SDADC_UNIT_1_CH_2_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc1_Ch2_ISR_Handler);
#endif

#if defined(SDADC_UNIT_0_CH_0_ISR_USED) || defined(SDADC_UNIT_1_CH_0_ISR_USED) || \
    defined(SDADC_UNIT_0_CH_1_ISR_USED) || defined(SDADC_UNIT_1_CH_1_ISR_USED) || \
    defined(SDADC_UNIT_0_CH_2_ISR_USED) || defined(SDADC_UNIT_1_CH_2_ISR_USED)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_MainHander(const uint8 u8HwInstaneId,
                                                     const uint8 u8HwChannelId);
#endif
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_SigleReadCOCHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_CircularBufferCOCHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_LinearBufferCOCHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_COCHandler(const Sdadc_HwConfigType      *pHwConfig,
                                                     const Sdadc_ChannelConfigType *pChannelConfig);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_SigleReadFifoHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint8                          u8Watermark);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_LinearBufferFifoHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint8                          u8Watermark);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_CirCularBufferFifoHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint8                          u8Watermark);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_FifoHandler(const Sdadc_HwConfigType      *pHwConfig,
                                                      const Sdadc_ChannelConfigType *pChannelConfig,
                                                      Sdadc_FifoEvtType              u8Event);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleFifoReadyNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleConversionCompleteNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleZerocrossNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_NormalIntHander(const Sdadc_HwConfigType *pHwConfig,
                                                          const Sdadc_ChannelConfigType *pChannelConfig,
                                                          uint32 u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleShortCircuitNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleWindowLimitNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleHighLimitNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleLowLimitNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_Abnormal0IntHander(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleClockAbsenceNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleSaturationNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleFifoOverflow(const Sdadc_HwConfigType *pHwConfig,
                                                         const Sdadc_ChannelConfigType *pChannelConfig,
                                                         uint32 u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleFifoUnderflow(const Sdadc_HwConfigType *pHwConfig,
                                                          const Sdadc_ChannelConfigType *pChannelConfig,
                                                          uint32 u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_Abnormal1IntHander(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleCaptureValidNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleTsignP2NNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
#if (SDADC_TS_POLLING == STD_OFF)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleTimestampValid(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags);
#endif
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_ExtIntHander(const Sdadc_HwConfigType *pHwConfig,
                                                       const Sdadc_ChannelConfigType *pChannelConfig,
                                                       uint32 u32Flags);
#if (SDADC_CALIBRATION_FEATURE == STD_ON)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_OffsetCalibHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_GainCalibHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig);
#endif
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                          SDADC HW UNIT 0
==================================================================================================*/
/**
 * @brief          This function handles the ISR for the conversion done of
 *                 the SDADC Hardware Unit 0.
 * @details        The function handles the ISR for the SDADC Hardware Unit 0.
 *
 * @return         void
 *
 * @isr
 */
#ifdef SDADC_UNIT_0_CH_0_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc0_Ch0_ISR_Handler)
{
    Sdadc_LLD_ISR_MainHander(SDADC_HW_INSTANCE0, 0);

    EXIT_INTERRUPT();
}
#endif

#ifdef SDADC_UNIT_0_CH_1_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc0_Ch1_ISR_Handler)
{
    Sdadc_LLD_ISR_MainHander(SDADC_HW_INSTANCE0, 1);

    EXIT_INTERRUPT();
}
#endif

#ifdef SDADC_UNIT_0_CH_2_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc0_Ch2_ISR_Handler)
{
    Sdadc_LLD_ISR_MainHander(SDADC_HW_INSTANCE0, 2);

    EXIT_INTERRUPT();
}
#endif

/*==================================================================================================
                                          SDADC HW UNIT 1
==================================================================================================*/
/**
 * @brief          This function handles the ISR for the conversion done of
 *                 the SDADC Hardware Unit 1
 * @details        The function handles the ISR for the SDADC Hardware Unit 1.
 *
 * @return         void
 *
 * @isr
 */
#ifdef SDADC_UNIT_1_CH_0_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc1_Ch0_ISR_Handler)
{
    Sdadc_LLD_ISR_MainHander(SDADC_HW_INSTANCE1, 0);

    EXIT_INTERRUPT();
}
#endif

#ifdef SDADC_UNIT_1_CH_1_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc1_Ch1_ISR_Handler)
{
    Sdadc_LLD_ISR_MainHander(SDADC_HW_INSTANCE1, 1);

    EXIT_INTERRUPT();
}
#endif

#ifdef SDADC_UNIT_1_CH_2_ISR_USED
CDD_SDADC_TEXT_SECTION ISR(Sdadc1_Ch2_ISR_Handler)
{
    Sdadc_LLD_ISR_MainHander(SDADC_HW_INSTANCE1, 2);

    EXIT_INTERRUPT();
}
#endif

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_SigleReadCOCHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig)
{
    uint8 u8ChannelId = Sdadc_LLD_GetChannelIdByHwId(pHwConfig, pChannelConfig->u8HwChannelId);
    Sdadc_ChannelMDataType *pChannelMData;
    SDADC_Type *const       pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];

    pChannelMData =
        &Sdadc_ChannelMData[Sdadc_LLD_GetInstacneIdByHwId(pHwConfig->HWInstanceId)][u8ChannelId];

    if (SDADC_HWA_GetTSRDM(pSdadc, pChannelConfig->u8HwChannelId) != SDADC_RDM_FIFOGATING)
    {
        if (pChannelMData->Sdadc_ChannelStatus == SDADC_CHANNEL_ACTIVCE)
        {
            pChannelMData->Sdadc_ChannelStatus = SDADC_CHANNEL_RESULT_READY;
        }
    }
    else
    {
        /*SDADC_RDM_FIFOGATING*/
        if (pChannelMData->Sdadc_ChannelStatus == SDADC_CHANNEL_ACTIVCE)
        {
            if ((SDADC_HWA_GetFIFO_EMPTY(pSdadc) & (1u << (pChannelConfig->u8HwChannelId))) == 0u)
            {
                pChannelMData->Sdadc_ChannelStatus = SDADC_CHANNEL_RESULT_READY;
            }
        }
    }
    if (pChannelMData->Sdadc_ChannelStatus == SDADC_CHANNEL_RESULT_READY)
    {
        if ((Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
             0u) &&
            (pChannelConfig->ConversionCompleteNotification != NULL_PTR))
        {
            pChannelConfig->ConversionCompleteNotification();
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_CircularBufferCOCHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig)
{
    uint8 u8ChannelId = Sdadc_LLD_GetChannelIdByHwId(pHwConfig, pChannelConfig->u8HwChannelId);
    Sdadc_ChannelMDataType *pChannelMData;
    SDADC_Type *const       pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];

    pChannelMData =
        &Sdadc_ChannelMData[Sdadc_LLD_GetInstacneIdByHwId(pHwConfig->HWInstanceId)][u8ChannelId];

    if (SDADC_HWA_GetTSRDM(pSdadc, pChannelConfig->u8HwChannelId) == SDADC_RDM_DIRECT)
    {
        /* (u8AccessMode == SDADC_SINGLE_READ) || (SDADC_HWA_GetTSRDM(pSdadc, u8HwChannelId) ==
         * SDADC_RDM_DIRECT) using COC isr*/
        if (pChannelMData->Sdadc_ChannelStatus == SDADC_CHANNEL_ACTIVCE)
        {
            pChannelMData->Sdadc_ChannelStatus = SDADC_CHANNEL_RESULT_READY;
        }
        if (pChannelMData->Sdadc_ChannelStatus != SDADC_CHANNEL_IDLE)
        {
            Sdadc_LLD_RingBufferWrite(pChannelMData,
                                      SDADC_HWA_GetRDATA(pSdadc, pChannelConfig->u8HwChannelId));

            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                if (pChannelConfig->ConversionCompleteNotification != NULL_PTR)
                {
                    pChannelConfig->ConversionCompleteNotification();
                }
                if (pChannelMData->Sdadc_ChannelBufferFull != 0u)
                {
                    if (pChannelConfig->BufferFullNotification != NULL_PTR)
                    {
                        pChannelConfig->BufferFullNotification();
                    }
                }
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_LinearBufferCOCHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig)
{
    uint8 u8ChannelId = Sdadc_LLD_GetChannelIdByHwId(pHwConfig, pChannelConfig->u8HwChannelId);
    Sdadc_ChannelMDataType *pChannelMData;
    SDADC_Type *const       pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];

    pChannelMData =
        &Sdadc_ChannelMData[Sdadc_LLD_GetInstacneIdByHwId(pHwConfig->HWInstanceId)][u8ChannelId];

    if (SDADC_HWA_GetTSRDM(pSdadc, pChannelConfig->u8HwChannelId) == SDADC_RDM_DIRECT)
    {
        /* (u8AccessMode == SDADC_SINGLE_READ) || (SDADC_HWA_GetTSRDM(pSdadc, u8HwChannelId) ==
         * SDADC_RDM_DIRECT) using COC isr*/
        if (pChannelMData->Sdadc_ChannelStatus == SDADC_CHANNEL_ACTIVCE)
        {
            pChannelMData->Sdadc_ChannelStatus = SDADC_CHANNEL_BUSY;
        }
        if (pChannelMData->Sdadc_ChannelStatus != SDADC_CHANNEL_IDLE)
        {
            Sdadc_LLD_LinearBufferWrite(pChannelMData,
                                        SDADC_HWA_GetRDATA(pSdadc, pChannelConfig->u8HwChannelId));

            if (pChannelMData->Sdadc_ChannelBufferFull != 0u)
            {
                pChannelMData->Sdadc_ChannelStatus = SDADC_CHANNEL_RESULT_READY;
                if ((Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId]
                                                    [pChannelConfig->u8HwChannelId] != 0u) &&
                    (pChannelConfig->BufferFullNotification != NULL_PTR))
                {
                    pChannelConfig->BufferFullNotification();
                }
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_COCHandler(const Sdadc_HwConfigType      *pHwConfig,
                                                     const Sdadc_ChannelConfigType *pChannelConfig)
{
    if (pChannelConfig->u8AccessMode == SDADC_SINGLE_READ)
    {
        Sdadc_LLD_ISR_SigleReadCOCHandler(pHwConfig, pChannelConfig);
    }
    else if (pChannelConfig->u8AccessMode == SDADC_CIRCULAR_BUFFER)
    {
        Sdadc_LLD_ISR_CircularBufferCOCHandler(pHwConfig, pChannelConfig);
    }
    else
    {
        Sdadc_LLD_ISR_LinearBufferCOCHandler(pHwConfig, pChannelConfig);
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_SigleReadFifoHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint8                          u8Watermark)
{
    uint8             u8WatermarkCnt = u8Watermark;
    SDADC_Type *const pSdadc         = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    while (u8WatermarkCnt != 0u)
    {
        SDADC_HWA_GetRDATA(pSdadc, pChannelConfig->u8HwChannelId);
        u8WatermarkCnt--;
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_LinearBufferFifoHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint8                          u8Watermark)
{
    uint8 u8ChannelId = Sdadc_LLD_GetChannelIdByHwId(pHwConfig, pChannelConfig->u8HwChannelId);
    Sdadc_ChannelMDataType *pChannelMData =
        &Sdadc_ChannelMData[Sdadc_LLD_GetInstacneIdByHwId(pHwConfig->HWInstanceId)][u8ChannelId];
    SDADC_Type *const pSdadc         = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint8             u8WatermarkCnt = u8Watermark;

    if (pChannelMData->Sdadc_ChannelStatus == SDADC_CHANNEL_ACTIVCE)
    {
        pChannelMData->Sdadc_ChannelStatus = SDADC_CHANNEL_BUSY;
    }
    if (pChannelMData->Sdadc_ChannelStatus != SDADC_CHANNEL_IDLE)
    {
        while (u8WatermarkCnt != 0u)
        {
            if (pChannelMData->Sdadc_ChannelBufferFull != 0u)
            {
                break;
            }

            Sdadc_LLD_LinearBufferWrite(pChannelMData,
                                        SDADC_HWA_GetRDATA(pSdadc, pChannelConfig->u8HwChannelId));
            u8WatermarkCnt--;
        }
        if (pChannelMData->Sdadc_ChannelBufferFull != 0u)
        {
            pChannelMData->Sdadc_ChannelStatus = SDADC_CHANNEL_RESULT_READY;
            if ((Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                 0u) &&
                (pChannelConfig->BufferFullNotification != NULL_PTR))
            {
                pChannelConfig->BufferFullNotification();
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_CirCularBufferFifoHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint8                          u8Watermark)
{
    uint8 u8ChannelId = Sdadc_LLD_GetChannelIdByHwId(pHwConfig, pChannelConfig->u8HwChannelId);
    Sdadc_ChannelMDataType *pChannelMData =
        &Sdadc_ChannelMData[Sdadc_LLD_GetInstacneIdByHwId(pHwConfig->HWInstanceId)][u8ChannelId];
    SDADC_Type *const pSdadc          = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint8             u8WatermarkTemp = u8Watermark;
    if (pChannelMData->Sdadc_ChannelStatus == SDADC_CHANNEL_ACTIVCE)
    {
        pChannelMData->Sdadc_ChannelStatus = SDADC_CHANNEL_RESULT_READY;
    }
    if (pChannelMData->Sdadc_ChannelStatus != SDADC_CHANNEL_IDLE)
    {
        while (u8WatermarkTemp != 0u)
        {
            Sdadc_LLD_RingBufferWrite(pChannelMData,
                                      SDADC_HWA_GetRDATA(pSdadc, pChannelConfig->u8HwChannelId));
            u8WatermarkTemp--;
        }
        if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
            0u)
        {
            if (pChannelConfig->ConversionCompleteNotification != NULL_PTR)
            {
                pChannelConfig->ConversionCompleteNotification();
            }
            if (pChannelMData->Sdadc_ChannelBufferFull != 0u)
            {
                if (pChannelConfig->BufferFullNotification != NULL_PTR)
                {
                    pChannelConfig->BufferFullNotification();
                }
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_FifoHandler(const Sdadc_HwConfigType      *pHwConfig,
                                                      const Sdadc_ChannelConfigType *pChannelConfig,
                                                      Sdadc_FifoEvtType              u8Event)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint8             u8Watermark;

    if (u8Event != SDADC_FIFO_EVT_UDF)
    {
        if (u8Event == SDADC_FIFO_EVT_READY)
        {
            u8Watermark = (uint8)(SDADC_HWA_GetFWMK(pSdadc, pChannelConfig->u8HwChannelId) + 1u);
        }
        else
        {
            /*SDADC_FIFO_EVT_OVF*/
            u8Watermark = (uint8)8U;
        }

        if (pChannelConfig->u8AccessMode == SDADC_SINGLE_READ)
        {
            u8Watermark = (uint8)(u8Watermark - 1U);
            Sdadc_LLD_ISR_SigleReadFifoHandler(pHwConfig, pChannelConfig, u8Watermark);
        }
        else if (pChannelConfig->u8AccessMode == SDADC_CIRCULAR_BUFFER)
        {
            Sdadc_LLD_ISR_CirCularBufferFifoHandler(pHwConfig, pChannelConfig, u8Watermark);
        }
        else
        {
            Sdadc_LLD_ISR_LinearBufferFifoHandler(pHwConfig, pChannelConfig, u8Watermark);
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleFifoReadyNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_NISR_FRDY0_MASK << (pChannelConfig->u8HwChannelId))) != 0u)
    {
        Sdadc_LLD_ISR_FifoHandler(pHwConfig, pChannelConfig, SDADC_FIFO_EVT_READY);
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleConversionCompleteNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_NISR_COC0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        Sdadc_LLD_ISR_COCHandler(pHwConfig, pChannelConfig);
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleZerocrossNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_NISR_ZCD0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        if (pChannelConfig->ZerocrossNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->ZerocrossNotification();
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_NormalIntHander(const Sdadc_HwConfigType *pHwConfig,
                                                          const Sdadc_ChannelConfigType *pChannelConfig,
                                                          uint32 u32Flags)
{
    Sdadc_LLD_HandleFifoReadyNotification(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleConversionCompleteNotification(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleZerocrossNotification(pHwConfig, pChannelConfig, u32Flags);
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleShortCircuitNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_ABNISR0_SCD0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        if (pChannelConfig->ShortCircuitNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->ShortCircuitNotification();
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleWindowLimitNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_ABNISR0_WLMT0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        if (pChannelConfig->WindowLimitNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->WindowLimitNotification();
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleHighLimitNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_ABNISR0_HLMT0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        if (pChannelConfig->HighLimitNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->HighLimitNotification();
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleLowLimitNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_ABNISR0_LLMT0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        if (pChannelConfig->LowLimitNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->LowLimitNotification();
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_Abnormal0IntHander(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    Sdadc_LLD_HandleShortCircuitNotification(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleWindowLimitNotification(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleHighLimitNotification(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleLowLimitNotification(pHwConfig, pChannelConfig, u32Flags);
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleClockAbsenceNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_ABNISR1_CAD0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        if (pChannelConfig->ClockAbsenceNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->ClockAbsenceNotification();
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleSaturationNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_ABNISR1_SAT0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        if (pChannelConfig->SaturationNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->SaturationNotification();
            }
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleFifoOverflow(const Sdadc_HwConfigType *pHwConfig,
                                                         const Sdadc_ChannelConfigType *pChannelConfig,
                                                         uint32 u32Flags)
{
    if ((u32Flags & (SDADC_ABNISR1_FOVF0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        Sdadc_LLD_ISR_FifoHandler(pHwConfig, pChannelConfig, SDADC_FIFO_EVT_OVF);
        if ((Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
             0u) &&
            (pChannelConfig->FifoOverFlowNotification != NULL_PTR))
        {
            pChannelConfig->FifoOverFlowNotification();
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleFifoUnderflow(const Sdadc_HwConfigType *pHwConfig,
                                                          const Sdadc_ChannelConfigType *pChannelConfig,
                                                          uint32 u32Flags)
{
    if ((u32Flags & (SDADC_ABNISR1_FUNF0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        Sdadc_LLD_ISR_FifoHandler(pHwConfig, pChannelConfig, SDADC_FIFO_EVT_UDF);
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_Abnormal1IntHander(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    Sdadc_LLD_HandleClockAbsenceNotification(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleSaturationNotification(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleFifoOverflow(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleFifoUnderflow(pHwConfig, pChannelConfig, u32Flags);
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleCaptureValidNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    uint8                       u8ChannelId;
    Sdadc_ChannelSDCAPDataType *pChannelSDData;
    SDADC_Type *const           pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];

    if ((u32Flags & (SDADC_EXTIS_SD_CAPVLD0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        u8ChannelId = Sdadc_LLD_GetChannelIdByHwId(pHwConfig, pChannelConfig->u8HwChannelId);
        pChannelSDData =
            &Sdadc_ChannelSDCAPData[Sdadc_LLD_GetInstacneIdByHwId(pHwConfig->HWInstanceId)][u8ChannelId];
        SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_20();
        if (pChannelSDData->Sdadc_ChannelStatus == SDADC_SD_CAP_ACTIVCE)
        {
            *(pChannelSDData->Sdadc_ChannelBufferPtr + pChannelSDData->Sdadc_ChannelBufferCnt) =
                (uint8)SDADC_HWA_GetSD_CAP(pSdadc, pChannelConfig->u8HwChannelId);
            pChannelSDData->Sdadc_ChannelBufferCnt++;
            if (pChannelSDData->Sdadc_ChannelBufferCnt == pChannelSDData->Sdadc_ChannelBufferSize)
            {
                pChannelSDData->Sdadc_ChannelStatus = SDADC_SD_CAP_RESULT_READY;
                Sdadc_LLD_StopSignDelayCapture(pHwConfig, pChannelConfig->u8HwChannelId);
            }
        }
        SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_20();
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleTsignP2NNotification(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_EXTIS_TSIGN_P2N0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        if (pChannelConfig->TsignP2NNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->TsignP2NNotification();
            }
        }
    }
}

#if (SDADC_TS_POLLING == STD_OFF)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_HandleTimestampValid(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig,
    uint32                         u32Flags)
{
    if ((u32Flags & (SDADC_EXTIS_TSVLD0_MASK << pChannelConfig->u8HwChannelId)) != 0u)
    {
        Sdadc_ChannelTsValid[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] = 1u;
        if (pChannelConfig->TimestampValidNotification != NULL_PTR)
        {
            if (Sdadc_ChannelNotificationEnable[pHwConfig->HWInstanceId][pChannelConfig->u8HwChannelId] !=
                0u)
            {
                pChannelConfig->TimestampValidNotification();
            }
        }
    }
}
#endif

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_ExtIntHander(const Sdadc_HwConfigType *pHwConfig,
                                                       const Sdadc_ChannelConfigType *pChannelConfig,
                                                       uint32 u32Flags)
{
    Sdadc_LLD_HandleCaptureValidNotification(pHwConfig, pChannelConfig, u32Flags);
    Sdadc_LLD_HandleTsignP2NNotification(pHwConfig, pChannelConfig, u32Flags);
#if (SDADC_TS_POLLING == STD_OFF)
    Sdadc_LLD_HandleTimestampValid(pHwConfig, pChannelConfig, u32Flags);
#endif
}

#if defined(SDADC_UNIT_0_CH_0_ISR_USED) || defined(SDADC_UNIT_1_CH_0_ISR_USED) || \
    defined(SDADC_UNIT_0_CH_1_ISR_USED) || defined(SDADC_UNIT_1_CH_1_ISR_USED) || \
    defined(SDADC_UNIT_0_CH_2_ISR_USED) || defined(SDADC_UNIT_1_CH_2_ISR_USED)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_MainHander(const uint8 u8HwInstaneId,
                                                     const uint8 u8HwChannelId)
{
    const Sdadc_HwConfigType      *pHwConfig;
    const Sdadc_ChannelConfigType *pChannelCfg;
    SDADC_Type *const              pSdadc = s_apSdadc_HwInstances[u8HwInstaneId];

    uint32 u32NIInt;
    uint32 u32ABInt0;
    uint32 u32ABInt1;
    uint32 u32EXInt;

    pHwConfig = Sdadc_LLD_GetConfigById(u8HwInstaneId);
    if (pHwConfig != NULL_PTR)
    {
        pChannelCfg = Sdadc_LLD_GetChannelCfgByHwId(pHwConfig, u8HwChannelId);
        if (pChannelCfg != NULL_PTR)
        {
            SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_17();
            u32NIInt = SDADC_HWA_GetNISR(pSdadc) & SDADC_HWA_GetNIER(pSdadc) &
                       (SDADC_NISR_CH0_MASK << u8HwChannelId);
            u32ABInt0 = SDADC_HWA_GetABNISR0(pSdadc) & SDADC_HWA_GetABNIER0(pSdadc) &
                        (SDADC_ABNISR0_CH0_MASK << u8HwChannelId);
            u32ABInt1 = SDADC_HWA_GetABNISR1(pSdadc) & SDADC_HWA_GetABNIER1(pSdadc) &
                        (SDADC_ABNISR1_CH0_MASK << u8HwChannelId);

            u32EXInt = SDADC_HWA_GetEXTIS(pSdadc) & SDADC_HWA_GetEXTIE(pSdadc) &
                       (SDADC_EXTIS_CH0_MASK << u8HwChannelId);
#if (SDADC_TS_POLLING == STD_ON)
            u32EXInt &= ~(SDADC_EXTIS_TSVLD0_MASK << u8HwChannelId);
#endif
            SDADC_HWA_SetNISR(pSdadc, u32NIInt);
            SDADC_HWA_SetABNISR0(pSdadc, u32ABInt0);
            SDADC_HWA_SetABNISR1(pSdadc, u32ABInt1);
            SDADC_HWA_SetEXTIS(pSdadc, u32EXInt);
            SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_17();
#if (SDADC_CALIBRATION_FEATURE == STD_ON)
            if (Sdadc_CalibrationSMStatus[u8HwInstaneId][u8HwChannelId].Sdadc_CalibrationStatus ==
                SDADC_CALIBRATION_OFFSET_RUNNING)
            {
                if ((u32NIInt & SDADC_NISR_COC_MASK) != 0u)
                {
                    Sdadc_LLD_ISR_OffsetCalibHandler(pHwConfig, pChannelCfg);
                }
            }
            else if (Sdadc_CalibrationSMStatus[u8HwInstaneId][u8HwChannelId].Sdadc_CalibrationStatus ==
                     SDADC_CALIBRATION_GAIN_RUNNING)
            {
                if ((u32NIInt & SDADC_NISR_COC_MASK) != 0u)
                {
                    Sdadc_LLD_ISR_GainCalibHandler(pHwConfig, pChannelCfg);
                }
            }
            else
#endif
            {
                if (u32NIInt != 0u)
                {
                    Sdadc_LLD_ISR_NormalIntHander(pHwConfig, pChannelCfg, u32NIInt);
                }
                if (u32ABInt0 != 0u)
                {
                    Sdadc_LLD_ISR_Abnormal0IntHander(pHwConfig, pChannelCfg, u32ABInt0);
                }
                if (u32ABInt1 != 0u)
                {
                    Sdadc_LLD_ISR_Abnormal1IntHander(pHwConfig, pChannelCfg, u32ABInt1);
                }
                if (u32EXInt != 0u)
                {
                    Sdadc_LLD_ISR_ExtIntHander(pHwConfig, pChannelCfg, u32EXInt);
                }
            }
        }
    }
}
#endif

#if (SDADC_CALIBRATION_FEATURE == STD_ON)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_OffsetCalibHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig)
{
    uint8                  u8HwChannelId  = pChannelConfig->u8HwChannelId;
    uint8                  u8HwInstanceId = pHwConfig->HWInstanceId;
    Sdadc_LLD_CalibSMType *pCalibSmData;
    SDADC_Type *const      pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint32                 u32Data;
    uint8                  u8SignedFmt;
    uint32                 u32ChannelMask = 0u;
    uint32                 u32TimeoutCounter;
    Std_ReturnType         Ret = E_NOT_OK;

    pCalibSmData = &Sdadc_CalibrationSMStatus[u8HwInstanceId][u8HwChannelId];
    u32Data      = (uint32)SDADC_HWA_GetRDATA(pSdadc, pChannelConfig->u8HwChannelId);
    u8SignedFmt  = ((pChannelConfig->u32CFRReg & SDADC_CFR_RDFMT_MASK) == SDADC_CFR_RDFMT_MASK) ?
                       (uint8)0U :
                       (uint8)1U;
    if (u8SignedFmt != 0u)
    {
        pCalibSmData->s64CalibDataSum += (sint32)u32Data;
    }
    else
    {

        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: (sint64)((uint64)u32Data & 0xFFFFFFFFULL) always produces positive values (0 to
        2^32-1) by preserving unsigned semantics through bitmasking, while (sint64)(u32Data)
        performs direct sign extension*/
        pCalibSmData->s64CalibDataSum += (sint64)((uint64)u32Data & 0x00000000FFFFFFFFULL);
        /* PRQA S 2985 -- */
    }

    pCalibSmData->u16CalibDataCnt++;
    if (pCalibSmData->u16CalibDataCnt == SDADC_OFFSET_CALIBRATION_CNT)
    {
        pCalibSmData->tResult.s32Offset = (sint32)(pCalibSmData->s64CalibDataSum /
                                                   SDADC_OFFSET_CALIBRATION_CNT);
        Sdadc_LLD_EnableChannel(pHwConfig, u8HwChannelId, 0, 0, 0);
        Sdadc_LLD_StartCalibrationGainCfg(pHwConfig, pChannelConfig, pCalibSmData->tResult.s32Offset);
        SDADC_HWA_FlushFIFO(pSdadc, u8HwChannelId);
        SDADC_HWA_SetNISR(pSdadc, SDADC_NISR_CH0_MASK << u8HwChannelId);
        SDADC_HWA_SetNIER(pSdadc,
                          SDADC_HWA_GetNIER(pSdadc) | (SDADC_NIER_COCIE0_MASK << u8HwChannelId));
        Sdadc_LLD_SetChannelSWTrigger(u8HwInstanceId, u8HwChannelId, 0u);
        Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId, u8HwChannelId, 0u);
        pCalibSmData                  = &Sdadc_CalibrationSMStatus[u8HwInstanceId][u8HwChannelId];
        pCalibSmData->s64CalibDataSum = 0;
        pCalibSmData->u16CalibDataCnt = 0;
        SDADC_HWA_SetCH_EN(pSdadc, u8HwChannelId, 1);
        u32ChannelMask    = (uint32)(1U << (u8HwChannelId));
        u32TimeoutCounter = SDADC_TIMEOUT_LOOPS;
        while (u32TimeoutCounter != 0u)
        {
            if ((SDADC_HWA_GetCHRDY(pSdadc) & u32ChannelMask) == u32ChannelMask)
            {
                Ret = E_OK;
                break;
            }
            u32TimeoutCounter--;
        }

        if (Ret == E_OK)
        {
            Sdadc_LLD_SetChannelSWTrigger(u8HwInstanceId, u8HwChannelId, 1);
            Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId, u8HwChannelId, 1u);
            pCalibSmData->Sdadc_CalibrationStatus = SDADC_CALIBRATION_GAIN_RUNNING;
        }
        else
        {
            Sdadc_LLD_InitChannel(pHwConfig, pChannelConfig, u8HwChannelId);
            pCalibSmData->Sdadc_CalibrationStatus = SDADC_CALIBRATION_ERROR;
        }
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ISR_GainCalibHandler(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelConfig)
{
    uint8                  u8HwChannelId  = pChannelConfig->u8HwChannelId;
    uint8                  u8HwInstanceId = pHwConfig->HWInstanceId;
    Sdadc_LLD_CalibSMType *pCalibSmData;
    SDADC_Type *const      pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint32                 u32Data;
    uint8                  u8UnSignedFmt =
        ((pChannelConfig->u32CFRReg & SDADC_CFR_RDFMT_MASK) == SDADC_CFR_RDFMT_MASK) ? (uint8)1U :
                                                                                                        (uint8)0U;
    uint32 u32GainShift = (pChannelConfig->u32CMACSRReg & SDADC_CMACSR_GAINSEL_MASK) >>
                          SDADC_CMACSR_GAINSEL_SHIFT;

    pCalibSmData = &Sdadc_CalibrationSMStatus[u8HwInstanceId][u8HwChannelId];
    u32Data      = (uint32)SDADC_HWA_GetRDATA(pSdadc, pChannelConfig->u8HwChannelId);

    if (u8UnSignedFmt != 0u)
    {
        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: (sint64)((uint64)u32Data & 0xFFFFFFFFULL) always produces positive values (0 to
        2^32-1) by preserving unsigned semantics through bitmasking, while (sint64)(u32Data)
        performs direct sign extension*/
        pCalibSmData->s64CalibDataSum += (sint64)((uint64)u32Data & 0x00000000FFFFFFFFULL);
        /* PRQA S 2985 -- */
    }
    else
    {
        pCalibSmData->s64CalibDataSum += (sint32)u32Data;
    }

    pCalibSmData->u16CalibDataCnt++;
    if (pCalibSmData->u16CalibDataCnt == SDADC_GAIN_CALIBRATION_CNT)
    {
        pCalibSmData->s64CalibDataSum = pCalibSmData->s64CalibDataSum / SDADC_GAIN_CALIBRATION_CNT;
        u32Data                       = (uint32)(pCalibSmData->s64CalibDataSum >> 8u);
        if ((u32Data << u32GainShift) == 0U)
        {
            Sdadc_LLD_InitChannel(pHwConfig, pChannelConfig, u8HwChannelId);
            pCalibSmData->Sdadc_CalibrationStatus = SDADC_CALIBRATION_ERROR;
        }
        else
        {
            u32Data = (uint32)((1ULL << (39U + u8UnSignedFmt)) / (u32Data << u32GainShift));
            pCalibSmData->tResult.u32Gain = u32Data;
            Sdadc_LLD_EnableChannel(pHwConfig, u8HwChannelId, 0, 0, 0);
            Sdadc_LLD_InitChannel(pHwConfig, pChannelConfig, u8HwChannelId);
            pCalibSmData->Sdadc_CalibrationStatus = SDADC_CALIBRATION_DONE;
        }
    }
}
#endif

#define CDD_SDADC_STOP_SEC_CODE
#include "Sdadc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
