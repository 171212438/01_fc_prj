/**
 *   @file    CDD_Sdadc_LLD.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR SDSDADC - hardware specific type definition
 *   @details This file contains the SDSDADC AUTOSAR hardware specific type definition
 *
 *   @addtogroup SDSDADC
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
*   0.8.0       20/8/2024     QXW0084       N/A          SDSDADC Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "SchM_Sdadc.h"
#include "Mcal.h"
#include "CDD_Sdadc_Hw.h"
#include "CDD_Sdadc_LLD.h"
#include "CDD_Sdadc_Cfg.h"
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
#include "CDD_Dma.h"
#endif

typedef struct
{
    uint32 u32CCRReg;
    uint32 u32CDRReg;
    uint32 u32CFRReg;
    uint32 u32CMACSRReg;
    uint32 u32CTSCNTReg;
    uint32 u32CICFRReg;
} Sdadc_CalibConfigType;

#define CDD_SDADC_START_SEC_CONST_UNSPECIFIED
#include "Sdadc_MemMap.h"

#if (SDADC_CALIBRATION_FEATURE == STD_ON)
CDD_SDADC_DATA_SECTION const Sdadc_CalibConfigType tSdadc_CalibCfg = {
    /** Configuration for SDADC CCR register */
    0x00014002U,
    /** Configuration for SDADC CDR register */
    0x00008000U,
    /** Configuration for SDADC CFR register */
    0x10401C00U,
    /** Configuration for SDADC CMACSR register */
    0x80000000U,
    /** Configuration for SDADC CTSCNTR register */
    0x00080000U,
    /** Configuration for SDADC CICFR register */
    0x00040008U,
};
#endif

#define CDD_SDADC_STOP_SEC_CONST_UNSPECIFIED
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_CONST_32
#include "Sdadc_MemMap.h"

CDD_SDADC_DATA_SECTION SDADC_Type *const s_apSdadc_HwInstances[SDADC_HW_INSTANCE_COUNT] =
    SDADC_BASE_PTRS;

CDD_SDADC_DATA_SECTION const uint32 s_apSdadc_TimeStampSrcAddr[SDADC_HW_INSTANCE_COUNT] =
    SDADC_TSTMP_RES_ADDRS;

#define CDD_SDADC_STOP_SEC_CONST_32
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

#if (SDADC_CALIBRATION_FEATURE == STD_ON)
CDD_SDADC_DATA_SECTION Sdadc_LLD_CalibSMType
    Sdadc_CalibrationSMStatus[SDADC_HW_INSTANCE_COUNT][SDADC_MAX_CHANNEL_CNT];
#endif

#define CDD_SDADC_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_NO_INIT_32
#include "Sdadc_MemMap.h"

#define SDADC_GTS_DMA_BUFFER_LEN 2U

CDD_SDADC_DATA_SECTION ALIGN(32) volatile Sdadc_GlobalTimestampInfoType
    Sdadc_ChannelGlobalTimestampInfoBuffer[SDADC_HW_INSTANCE_COUNT][SDADC_GTS_DMA_BUFFER_LEN];
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
/**
 * @brief DMA channel config for SDADC instance
 *
 */
CDD_SDADC_DATA_SECTION Dma_ChannelType g_aSdadcDmaChnConfig[SDADC_HW_INSTANCE_COUNT];
#endif
#define CDD_SDADC_STOP_SEC_VAR_NO_INIT_32
#include "Sdadc_MemMap.h"

#define CDD_SDADC_START_SEC_VAR_NO_INIT_8
#include "Sdadc_MemMap.h"

CDD_SDADC_DATA_SECTION uint8
    Sdadc_ChannelNotificationEnable[SDADC_HW_INSTANCE_COUNT][SDADC_MAX_CHANNEL_CNT];
#if (SDADC_TS_POLLING == STD_OFF)
CDD_SDADC_DATA_SECTION uint8 Sdadc_ChannelTsValid[SDADC_HW_INSTANCE_COUNT][SDADC_MAX_CHANNEL_CNT];
#endif

#define CDD_SDADC_STOP_SEC_VAR_NO_INIT_8
#include "Sdadc_MemMap.h"

/**
 * @note put all SDADC code into defined section
 */
#define CDD_SDADC_START_SEC_CODE
#include "Sdadc_MemMap.h"
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ChannelSupressCovInt(SDADC_Type *const pSdadc,
                                                           uint8             u8HwChannelId);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ChannelTSVLDIntEnable(SDADC_Type *const pSdadc,
                                                            uint8             u8HwChannelId,
                                                            uint8             u8Enable);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ChannelFIFOIntEnable(SDADC_Type *const pSdadc,
                                                           uint8             u8HwChannelId,
                                                           uint8             u8Enable);
CDD_SDADC_TEXT_SECTION uint8 Sdadc_LLD_CacuMFShift(uint8 u8Order, uint16 u16Osr, uint8 u8UnSignedFmt);
#if (SDADC_CALIBRATION_FEATURE == STD_ON)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_StartCalibrationOffsetCfg(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelCfg,
    uint8                          u8SingleEnd);
#endif
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_SetChannelIntEn(const Sdadc_HwConfigType *pHwConfig,
                                                      uint8                     u8HwChannelId);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ClearChannelIntEn(const uint8 u8HwinstaneId,
                                                        uint8       u8HwChannelId);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ClearChannelIntFlags(const uint8 u8HwinstaneId,
                                                           uint8       u8HwChannelId);
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_InitDma(const Sdadc_HwConfigType *HwConfig);
#endif
#if (STD_ON == SDADC_TS_POLLING)
CDD_SDADC_TEXT_SECTION uint8 Sdadc_LLD_ChannelTSVLDGet(SDADC_Type *const pSdadc, uint8 u8HwChannelId);
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ChannelTSVLDClear(SDADC_Type *const pSdadc,
                                                        uint8             u8HwChannelId);
#endif

CDD_SDADC_TEXT_SECTION STATIC float32 Sdadc_Log2(uint16 x_in)
{
    float32 x        = (float32)x_in;
    sint32  exponent = 0;
    uint8   xExceed  = 0;
    float32 ret;

    if ((x_in < 4) || (x_in > 512))
    {
        xExceed = 1;
        ret     = 2.0f;
    }

    if (xExceed == 0)
    {
        /* PRQA S 3339 ++ #Misra-C:2012 Rule-14.1 Floating point variable used as 'while' loop
         * control variable. Reason: normalize x to 0-2. */
        while (x >= 2.0f)
        {
            x /= 2.0f;
            exponent++;
        }
        /* PRQA S 3339 -- */

        float32 ln_x = 0.0f;
        float32 term = x - 1.0f;
        uint32  n    = 1;

        /* PRQA S 3339 ++ #Misra-C:2012 Rule-14.1 Floating point variable used as 'while' loop
         * control variable. Reason:  Allow Computational Accuracy*/
        do
        {
            ln_x += term / (float32)n;
            term *= -(x - 1.0f);
            n++;
        }
        while ((term > COMPUTATIONAL_ACCURACY_POS) || (term < COMPUTATIONAL_ACCURACY_NEG));
        /* PRQA S 3339 -- */

        ret = (float32)exponent + (ln_x / LN2VALUE);
    }
    return ret;
}

CDD_SDADC_TEXT_SECTION STATIC uint8 Sdadc_CeilFloat(float32 xValue)
{
    uint8   u8Part  = (uint8)xValue;
    float32 decimal = xValue - (float32)u8Part;
    uint8   u8Ret;
    if (decimal > 1e-6f)
    {
        u8Ret = (uint8)(u8Part + 1U);
    }
    else
    {
        u8Ret = u8Part;
    }
    return u8Ret;
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ChannelSupressCovInt(SDADC_Type *const pSdadc,
                                                           uint8             u8HwChannelId)
{
    SDADC_HWA_SetFOVFIE(pSdadc, (SDADC_HWA_GetFOVFIE(pSdadc) & (~(1U << u8HwChannelId))));
    SDADC_HWA_SetFRDYIE(pSdadc, (SDADC_HWA_GetFRDYIE(pSdadc) & (~(1U << u8HwChannelId))));
    SDADC_HWA_SetFUNFIE(pSdadc, (SDADC_HWA_GetFUNFIE(pSdadc) & (~(1U << u8HwChannelId))));
    SDADC_HWA_SetCOCIE(pSdadc, (SDADC_HWA_GetCOCIE(pSdadc) & (~(1U << u8HwChannelId))));
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ChannelTSVLDIntEnable(SDADC_Type *const pSdadc,
                                                            uint8             u8HwChannelId,
                                                            uint8             u8Enable)
{
    if ((SDADC_HWA_GetTSTRGM(pSdadc, u8HwChannelId) != 0x3U) &&
        (SDADC_HWA_GetTSTRGM(pSdadc, u8HwChannelId) != 0x0U))
    {
        SDADC_HWA_SetTSVLD_IE(pSdadc,
                              (SDADC_HWA_GetTSVLD_IE(pSdadc) & (~(1U << u8HwChannelId))) |
                                  ((uint32)u8Enable << u8HwChannelId));
    }
    else
    {
        SDADC_HWA_SetTSVLD_IE(pSdadc, (SDADC_HWA_GetTSVLD_IE(pSdadc) & (~(1U << u8HwChannelId))));
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ChannelFIFOIntEnable(SDADC_Type *const pSdadc,
                                                           uint8             u8HwChannelId,
                                                           uint8             u8Enable)
{
    if (SDADC_HWA_GetFIFO_EN(pSdadc, u8HwChannelId) != 0u)
    {
        SDADC_HWA_FlushFIFO(pSdadc, u8HwChannelId);
        if (SDADC_HWA_GetDMA_EN(pSdadc, u8HwChannelId) == 0u)
        {
            SDADC_HWA_SetFOVFIE(pSdadc,
                                (SDADC_HWA_GetFOVFIE(pSdadc) & (~(1U << u8HwChannelId))) |
                                    ((uint32)u8Enable << u8HwChannelId));
            SDADC_HWA_SetFRDYIE(pSdadc,
                                (SDADC_HWA_GetFRDYIE(pSdadc) & (~(1U << u8HwChannelId))) |
                                    ((uint32)u8Enable << u8HwChannelId));
            SDADC_HWA_SetFUNFIE(pSdadc,
                                (SDADC_HWA_GetFUNFIE(pSdadc) & (~(1U << u8HwChannelId))) |
                                    ((uint32)u8Enable << u8HwChannelId));
        }
    }
}

CDD_SDADC_TEXT_SECTION uint8 Sdadc_LLD_CacuMFShift(uint8 u8Order, uint16 u16Osr, uint8 u8UnSignedFmt)
{
    uint8 u8Temp;
    uint8 u8Mfshift;
    if ((u16Osr & (u16Osr - 1)) == 0)
    {
        uint16 u16Temp = u16Osr;
        uint32 u32Pow  = 0;
        while ((u16Temp >> 1U) != 0)
        {
            u16Temp >>= 1U;
            u32Pow++;
        }
        u8Temp = (uint8)((u8Order * u32Pow) + 1U - u8UnSignedFmt);
    }
    else
    {
        u8Temp = (uint8)(Sdadc_CeilFloat(u8Order * Sdadc_Log2(u16Osr)) + 1u - u8UnSignedFmt);
    }
    if (u8Temp < SDADC_MFSHIFT_DATALENGTH)
    {
        u8Mfshift = (uint8)(SDADC_MFSHIFT_LEFT | (SDADC_MFSHIFT_DATALENGTH - u8Temp));
    }
    else
    {
        /* PRQA S 2986 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the right-hand operand.
        Reason: In register operation, there is a macro definition that defined as zero.
        For code maintainability, this redundant writing style needs to be preserved. */
        u8Mfshift = (uint8)(SDADC_MFSHIFT_RIGHT | (u8Temp - SDADC_MFSHIFT_DATALENGTH));
        /* PRQA S 2985 -- */
    }
    return u8Mfshift;
}

CDD_SDADC_TEXT_SECTION static void Sdadc_LLD_LoopDelay(uint32 Delaycnt)
{
    /* PRQA S 3387, 303 ++ #Misra-C:2012 Rule-13.3 A full expression containing an increment (++) or
     * decrement (--) operator should have no potential side effects other than that caused by the
     * increment or decrement operator. Reason:  The increment operation (i++) is the only side
     * effect in this loop. The for loop increments the variable 'i' and the only other operation is
     * a NOP instruction, which does not have any side effects. Therefore, this code complies with
     * MISRA Rule 13.3.*/
    for (volatile uint32 i = 0; i < Delaycnt; i++)
    {
        ASM_KEYWORD volatile("nop");
    }
    /* PRQA S 3387 -- */
}

CDD_SDADC_TEXT_SECTION static uint32 SDADC_Cacu_CFRRegs(uint32 u32CFRRegParam, uint32 u32CDRReg)
{
    uint32 u32CFRReg    = u32CFRRegParam;
    uint8 u8UnSignedFmt = ((u32CFRReg & SDADC_CFR_RDFMT_MASK) == SDADC_CFR_RDFMT_MASK) ? (uint8)1U :
                                                                                         (uint8)0U;
    u32CFRReg &= ~SDADC_CFR_MFSHIFT_MASK;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
    The value of the result is always that of the left-hand operand.
    Reason: In register operation macros, there is a macro definition that shifts by 0 bits.
    For code maintainability, this redundant writing style needs to be preserved. */
    u32CFRReg |= SDADC_CFR_MFSHIFT(Sdadc_LLD_CacuMFShift(
        (u32CDRReg & SDADC_CDR_MFORD_MASK) >> SDADC_CDR_MFORD_SHIFT,
        (uint16)(((u32CDRReg & SDADC_CDR_MFOSR_MASK) >> SDADC_CDR_MFOSR_SHIFT) + 1U),
        u8UnSignedFmt));
    /* PRQA S 2985 -- */
    return u32CFRReg;
}

CDD_SDADC_TEXT_SECTION static void SDADC_Init_CalibRegs(SDADC_Type *const              pSdadc,
                                                        const Sdadc_ChannelConfigType *pChannelCfg)
{
    uint8 u8HwChannelId;

    u8HwChannelId = pChannelCfg->u8HwChannelId;
    SDADC_HWA_SetCBRn(pSdadc, u8HwChannelId, (*(pChannelCfg->pCalibPtr))->u32CBRReg);
    SDADC_HWA_SetCGNR(pSdadc, u8HwChannelId, (*(pChannelCfg->pCalibPtr))->u32CGNRReg);
}

#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_InitDma(const Sdadc_HwConfigType *HwConfig)
{
    uint8            u8HwinstaneId = HwConfig->HWInstanceId;
    Dma_InstanceType DmaInstance   = HwConfig->eDmaInstance;
    uint8            DmaChannel    = HwConfig->u8DmaChannel;

    /* PRQA S 306, 303 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a
     * pointer to object and an integer type.
     * Reason: The pointer of the buffer should be converted to the source and destination address
     * for DMA */
    /* In sequence group mode, SDADC conversion results are in SDADC_RESULTn registers */
    g_aSdadcDmaChnConfig[u8HwinstaneId].u32DmaSADDR = s_apSdadc_TimeStampSrcAddr[u8HwinstaneId];
    /* The address of the result buffer */
    g_aSdadcDmaChnConfig[u8HwinstaneId].u32DmaDADDR =
        (uint32)(&Sdadc_ChannelGlobalTimestampInfoBuffer[u8HwinstaneId]);
    /* PRQA S 306, 303 -- */
    /* Do not use circular buffer for source buffer */
    g_aSdadcDmaChnConfig[u8HwinstaneId].bDmaSrcCircularBufferEn = (boolean)FALSE;
    /* The circular buffer size */
    g_aSdadcDmaChnConfig[u8HwinstaneId].u32DmaSrcCircBufferSize = 0U;
    /* Do not use circular buffer for destination buffer */
    g_aSdadcDmaChnConfig[u8HwinstaneId].bDmaDestCircularBufferEn = (boolean)FALSE;
    /* The circular buffer size */
    g_aSdadcDmaChnConfig[u8HwinstaneId].u32DmaDestCircBufferSize = 0U;
    /* The SDADC_RESULTn registers can only be accessed by 4 byte aligned read */
    g_aSdadcDmaChnConfig[u8HwinstaneId].eDmaSSIZE = DMA_TRAN_SIZE_4B;
    /* Since the source buffer is 4 byte size, the destination buffer has to be 4 byte size */
    g_aSdadcDmaChnConfig[u8HwinstaneId].eDmaDSIZE = DMA_TRAN_SIZE_4B;
    /* The source address will increment by data size (4 bytes) */
    g_aSdadcDmaChnConfig[u8HwinstaneId].s16SrcDataOffset = 4;
    /* The increment of destination will be configured later */
    g_aSdadcDmaChnConfig[u8HwinstaneId].s16DestDataOffset = 4;
    /* The Dma engine will only transfer one element with one trigger signal */
    g_aSdadcDmaChnConfig[u8HwinstaneId].u32DmaNBYTES = sizeof(Sdadc_GlobalTimestampInfoType);
    /* The total elements to be transfered */
    g_aSdadcDmaChnConfig[u8HwinstaneId].u16DmaOuterLoopCounter = SDADC_GTS_DMA_BUFFER_LEN;
    /* The increment of destination address is made up of data size and stream number samples */
    g_aSdadcDmaChnConfig[u8HwinstaneId].s32DmaILOFF = -sizeof(Sdadc_GlobalTimestampInfoType);
    /* Do not enable inner loop offset for source address */
    g_aSdadcDmaChnConfig[u8HwinstaneId].bDmaSILOE = (boolean)TRUE;
    /* Enable inner loop offset for destination address to apply the destination address increment */
    g_aSdadcDmaChnConfig[u8HwinstaneId].bDmaDILOE = (boolean)FALSE;
    /* The Dma needs to be reconfigured after conversion completed */
    g_aSdadcDmaChnConfig[u8HwinstaneId].bDmaAutoStopEnable = (boolean)FALSE;
    /* Since the DMA will be re-configured, no need to reset source address */
    g_aSdadcDmaChnConfig[u8HwinstaneId].s32DmaSLAST = -sizeof(Sdadc_GlobalTimestampInfoType);
    /* The detinatination address will be re-configured */
    g_aSdadcDmaChnConfig[u8HwinstaneId].s32DmaDLAST = -(
        sint32)(sizeof(Sdadc_GlobalTimestampInfoType) * SDADC_GTS_DMA_BUFFER_LEN);

    Dma_ConfigChannel(DmaInstance, DmaChannel, &g_aSdadcDmaChnConfig[u8HwinstaneId]);
}
#endif

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_InitChannel(const Sdadc_HwConfigType      *HwConfig,
                                                  const Sdadc_ChannelConfigType *pChannelCfg,
                                                  uint8                          u8HwChannelId)
{
    if ((HwConfig != NULL_PTR) && (HwConfig->CoreId == SDADC_GetCoreID()) && (pChannelCfg != NULL_PTR))
    {
        SDADC_Type *const pSdadc = s_apSdadc_HwInstances[HwConfig->HWInstanceId];
        SDADC_HWA_SetCCRn(pSdadc, u8HwChannelId, pChannelCfg->u32CCRReg);
        SDADC_HWA_SetCDRn(pSdadc, u8HwChannelId, pChannelCfg->u32CDRReg);
        SDADC_HWA_SetCFRn(pSdadc,
                          u8HwChannelId,
                          SDADC_Cacu_CFRRegs(pChannelCfg->u32CFRReg, pChannelCfg->u32CDRReg));
        SDADC_HWA_SetCPRn(pSdadc, u8HwChannelId, pChannelCfg->u32CPRReg);
        SDADC_HWA_SetCLLMTn(pSdadc, u8HwChannelId, pChannelCfg->u32CLLMTReg);
        SDADC_HWA_SetCHLMTn(pSdadc, u8HwChannelId, pChannelCfg->u32CHLMTReg);
        SDADC_HWA_SetCRTCSR(pSdadc, u8HwChannelId, pChannelCfg->u32CRTCSRReg);
        SDADC_HWA_SetCSDR(pSdadc, u8HwChannelId, pChannelCfg->u32CSDRReg);
        SDADC_HWA_SetCICFR(pSdadc, u8HwChannelId, pChannelCfg->u32CICFRReg);
        SDADC_HWA_SetCMACSR(pSdadc, u8HwChannelId, pChannelCfg->u32CMACSRReg);
        SDADC_HWA_SetCTSCNT(pSdadc, u8HwChannelId, pChannelCfg->u32CTSCNTReg);
        SDADC_Init_CalibRegs(pSdadc, pChannelCfg);
#if (SDADC_TS_POLLING == STD_OFF)
        Sdadc_ChannelTsValid[HwConfig->HWInstanceId][u8HwChannelId] = 0;
#endif
        Sdadc_LLD_SetChannelIntEn(HwConfig, u8HwChannelId);
    }
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_InitInstance(const Sdadc_HwConfigType *HwConfig)
{
    SDADC_Type                    *pSdadc;
    Std_ReturnType                 Ret = E_NOT_OK;
    const Sdadc_ChannelConfigType *pChannelCfg;
    uint8                          u8HwChannelId;
    uint32                         u32ScmValue;
    uint8                          Sdadc_ChLoop;

    if ((HwConfig != NULL_PTR) && (HwConfig->CoreId == SDADC_GetCoreID()))
    {
        /* PRQA S 2842 ++ #Misra-C:2012: Rule-18.1 Apparent: Dereference of an invalid pointer
        value.. Reason: Index will not be greater than limitation. */
        pSdadc = s_apSdadc_HwInstances[HwConfig->HWInstanceId];
        /* PRQA S 2842 -- */
        SDADC_HWA_SetCTRL(pSdadc, HwConfig->u32CTRLReg);
        SDADC_HWA_SetPWM_GEN(pSdadc, HwConfig->u32PWMGENReg);

        for (Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
        {
            if (HwConfig->paSdadcChannelCfg[Sdadc_ChLoop] != NULL_PTR)
            {
                pChannelCfg   = HwConfig->paSdadcChannelCfg[Sdadc_ChLoop];
                u8HwChannelId = pChannelCfg->u8HwChannelId;
                Sdadc_LLD_InitChannel(HwConfig, pChannelCfg, u8HwChannelId);
            }
        }

        SDADC_HWA_SetBACSR(pSdadc, HwConfig->u32BACSRReg);
        if (HwConfig->HWInstanceId == 0)
        {
            u32ScmValue = SCM_HWA_Get_TSTMP_LOCK() & (~(SCM_TSTMP_LOCK_SDADC0_TSTMP_SEL_MASK |
                                                        SCM_TSTMP_LOCK_SDADC0_TMR_SRC_SEL_MASK));
            u32ScmValue |= SCM_TSTMP_LOCK_SDADC0_TSTMP_SEL(HwConfig->u32TSTAMPSEL) |
                           SCM_TSTMP_LOCK_SDADC0_TMR_SRC_SEL(HwConfig->u32TMRSRCSEL);
            SCM_HWA_Set_TSTMP_LOCK(u32ScmValue);
        }
        else
        {
            u32ScmValue = SCM_HWA_Get_TSTMP_LOCK() & (~(SCM_TSTMP_LOCK_SDADC1_TSTMP_SEL_MASK |
                                                        SCM_TSTMP_LOCK_SDADC1_TMR_SRC_SEL_MASK));
            u32ScmValue |= SCM_TSTMP_LOCK_SDADC1_TSTMP_SEL(HwConfig->u32TSTAMPSEL) |
                           SCM_TSTMP_LOCK_SDADC1_TMR_SRC_SEL(HwConfig->u32TMRSRCSEL);
            SCM_HWA_Set_TSTMP_LOCK(u32ScmValue);
        }
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
        if (HwConfig->u8UseDma != 0U)
        {
            Sdadc_LLD_InitDma(HwConfig);
        }
#endif
    }
    return Ret;
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_DeInitInstance(const Sdadc_HwConfigType *HwConfig)
{
    SDADC_Type *const pSdadc     = s_apSdadc_HwInstances[HwConfig->HWInstanceId];
    uint32            u32LoopCnt = (uint32)((1u << SDADC_HWA_GetPRESCALE(pSdadc)) *
                                 (SDADC_HWA_GetMCLK_DIV(pSdadc) + 1) * 2 * HwConfig->DelayCntFactor);
    /* NOTE: Before asserting this bit, the interrupt(s) should be disabled by
        deasserting the corresponding NVIC Interrupt Set-Enable Register or
        deasserting the interrupt enable bit(s), and the DMA function should be
        disabled by deasserting the DMA enable bit or disabling the DMA
        channels via DMAMUX. */
    SDADC_HWA_SetNIER(pSdadc, 0);
    SDADC_HWA_SetABNIER0(pSdadc, 0);
    SDADC_HWA_SetABNIER1(pSdadc, 0);
    SDADC_HWA_SetEXTIE(pSdadc, 0);
    for (uint8 i = 0; i < SDADC_MAX_CHANNEL_CNT; i++)
    {
        SDADC_HWA_SetDMA_EN(pSdadc, i, 0);
    }
    SDADC_HWA_SetRESET(pSdadc, 1);
    Sdadc_LLD_LoopDelay(u32LoopCnt);
    SDADC_HWA_SetRESET(pSdadc, 0);
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_SetCarrierSignal(const Sdadc_HwConfigType *pHwConfig,
                                                       uint32                    u32Mode)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
    The value of the result is always that of the left-hand operand.
    Reason: In register operation macros, there is a macro definition that shifts by 0 bits.
    For code maintainability, this redundant writing style needs to be preserved. */
    uint32 u32Pattern = (pHwConfig->u32PWMGENReg & SDADC_PWM_GEN_PATTERN_MASK) >>
                        SDADC_PWM_GEN_PATTERN_SHIFT;
    /* PRQA S 2985 -- */

    if (u32Mode != 0u)
    {
        if (SDADC_HWA_GetPATTERN(pSdadc) == 0U)
        {
            SDADC_HWA_SetPATTERN(pSdadc, u32Pattern);
        }
    }
    else
    {
        if (SDADC_HWA_GetPATTERN(pSdadc) == u32Pattern)
        {
            SDADC_HWA_SetPATTERN(pSdadc, 0U);
        }
    }
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_StartModulation(const Sdadc_HwConfigType *pHwConfig)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    Std_ReturnType    Ret    = E_NOT_OK;
    uint32            u32Counter;
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
    Dma_InstanceType DmaInstance = pHwConfig->eDmaInstance;
    uint8            DmaChannel  = pHwConfig->u8DmaChannel;
#endif
    SDADC_HWA_SetMEN(pSdadc, 1U);
    if (SDADC_HWA_GetBIAS_EN(pSdadc) != 0u)
    {
        u32Counter = SDADC_TIMEOUT_LOOPS;
        while (u32Counter != 0u)
        {
            u32Counter--;
            if (SDADC_HWA_GetBIAS_ON(pSdadc) != 0u)
            {
                Ret = E_OK;
                break;
            }
        }
    }
    else
    {
        Ret = E_OK;
    }
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
    if (pHwConfig->u8UseDma != 0U)
    {
        Sdadc_ChannelGlobalTimestampInfoBuffer[pHwConfig->HWInstanceId][0].u32TimeStampRes = 0U;
        Sdadc_ChannelGlobalTimestampInfoBuffer[pHwConfig->HWInstanceId][1].u32TimeStampRes = 0U;
        Dma_EnableHwRequest(DmaInstance, DmaChannel);
    }
#endif
    return Ret;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_StopModulation(const Sdadc_HwConfigType *pHwConfig)
{
    SDADC_Type *const pSdadc     = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint32            u32LoopCnt = (uint32)((1u << SDADC_HWA_GetPRESCALE(pSdadc)) *
                                 (SDADC_HWA_GetMCLK_DIV(pSdadc) + 1u) * 2u *
                                 pHwConfig->DelayCntFactor);
#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
    Dma_InstanceType DmaInstance = pHwConfig->eDmaInstance;
    uint8            DmaChannel  = pHwConfig->u8DmaChannel;

    if (pHwConfig->u8UseDma != 0U)
    {
        Dma_DisableHwRequest(DmaInstance, DmaChannel);
    }
#endif
    SDADC_HWA_SetMEN(pSdadc, 0U);
    /*Delay to make sure reconfig is safe*/
    Sdadc_LLD_LoopDelay(u32LoopCnt);
    return E_OK;
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_SetIntgSWTrigger(uint8 u8HwInstanceId,
                                                       uint8 u8HwChannelId,
                                                       uint8 u8Value)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[u8HwInstanceId];
    uint32            u32Mask;
    uint32            u32MaskCOC;
    uint32            u32TimeoutCounter;

    if (u8HwChannelId != SDADC_ALL_HW_CHANNEL)
    {
        u32Mask = (uint32)(SDADC_EXTCTRL_INTG_STRIG0_MASK << u8HwChannelId);
    }
    else
    {
        u32Mask = SDADC_EXTCTRL_INTG_STRIG_MASK;
    }

    if (u8Value == 0)
    {
        SDADC_HWA_SetEXTCTRL(pSdadc, (uint32)(SDADC_HWA_GetEXTCTRL(pSdadc) & ~u32Mask));
    }
    else
    {
        u32TimeoutCounter = SDADC_INTG_MCOC_TIMEOUT_LOOPS;
        if (u8HwChannelId != SDADC_ALL_HW_CHANNEL)
        {
            u32MaskCOC = (uint32)(SDADC_EXTIS_MCIC_COC0_MASK << u8HwChannelId);
        }
        else
        {
            u32MaskCOC = SDADC_EXTIS_MCIC_COC_MASK;
        }

        SDADC_HWA_SetEXTIS(pSdadc, u32MaskCOC);

        while (u32TimeoutCounter != 0u)
        {
            if ((SDADC_HWA_GetEXTIS(pSdadc) & u32MaskCOC) == u32MaskCOC)
            {
                break;
            }
            u32TimeoutCounter--;
        }
        SDADC_HWA_SetEXTCTRL(pSdadc, (uint32)(SDADC_HWA_GetEXTCTRL(pSdadc) | u32Mask));
    }
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_SetChannelSWTrigger(uint8 u8HwInstanceId,
                                                          uint8 u8HwChannelId,
                                                          uint8 u8Value)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[u8HwInstanceId];
    uint32            u32Mask;
    if (u8HwChannelId != SDADC_ALL_HW_CHANNEL)
    {
        u32Mask = (uint32)(SDADC_CTRL_STRIG0_MASK << u8HwChannelId);
    }
    else
    {
        u32Mask = SDADC_CTRL_STRIG2_MASK | SDADC_CTRL_STRIG1_MASK | SDADC_CTRL_STRIG0_MASK;
    }
    if (u8Value == 0)
    {
        SDADC_HWA_SetCTRL(pSdadc, (uint32)(SDADC_HWA_GetCTRL(pSdadc) & ~u32Mask));
    }
    else
    {
        SDADC_HWA_SetCTRL(pSdadc, (uint32)(SDADC_HWA_GetCTRL(pSdadc) | u32Mask));
    }
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_EnableAllChannel(const Sdadc_HwConfigType *pHwConfig,
                                                                 uint8 u8Enable,
                                                                 uint8 u8ConfigReload)
{
    SDADC_Type *const              pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    Std_ReturnType                 Ret    = E_NOT_OK;
    const Sdadc_ChannelConfigType *pChannelCfg;
    uint8                          u8ChannelMask = 0U;
    uint8                          u8HwChannelId = 0U;
    uint32                         u32TimeoutCounter;

    Sdadc_LLD_ClearAllIntFlags(pHwConfig->HWInstanceId);

    for (uint8 Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
    {
        pChannelCfg = pHwConfig->paSdadcChannelCfg[Sdadc_ChLoop];
        if (pChannelCfg != NULL_PTR)
        {
            u8HwChannelId = pChannelCfg->u8HwChannelId;
            if (u8Enable != 0u)
            {
                if (u8ConfigReload != 0u)
                {
                    Sdadc_LLD_InitChannel(pHwConfig, pChannelCfg, u8HwChannelId);
                }

                Sdadc_LLD_ChannelFIFOIntEnable(pSdadc, u8HwChannelId, u8Enable);
#if (SDADC_TS_POLLING == STD_OFF)
                Sdadc_LLD_ChannelTSVLDIntEnable(pSdadc, u8HwChannelId, u8Enable);
#endif

                if ((pChannelCfg->u8AccessMode == SDADC_SINGLE_READ) ||
                    (SDADC_HWA_GetTSRDM(pSdadc, u8HwChannelId) == SDADC_RDM_DIRECT))
                {
                    SDADC_HWA_SetCOCIE(pSdadc,
                                       (SDADC_HWA_GetCOCIE(pSdadc) & (~(1U << u8HwChannelId))) |
                                           ((uint32)u8Enable << u8HwChannelId));
                }
            }

            if (pChannelCfg->u8COCIntSupress != 0u)
            {
                Sdadc_LLD_ChannelSupressCovInt(pSdadc, u8HwChannelId);
            }

            Sdadc_LLD_SetChannelSWTrigger(pHwConfig->HWInstanceId, u8HwChannelId, 0u);
            Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId, u8HwChannelId, 0u);
            SDADC_HWA_SetCH_EN(pSdadc, pChannelCfg->u8HwChannelId, u8Enable);
            u8ChannelMask |= (uint8)(1U << (pChannelCfg->u8HwChannelId));
        }
    }

    if (u8Enable != 0u)
    {
        u32TimeoutCounter = SDADC_TIMEOUT_LOOPS;
        while (u32TimeoutCounter != 0u)
        {
            if ((SDADC_HWA_GetCHRDY(pSdadc) & u8ChannelMask) == u8ChannelMask)
            {
                Ret = E_OK;
                break;
            }
            u32TimeoutCounter--;
        }
    }
    else
    {
        uint32 u32LoopCnt = 10u * (1u << SDADC_HWA_GetPRESCALE(pSdadc)) *
                            (SDADC_HWA_GetMCLK_DIV(pSdadc) + 1u) * 2u * pHwConfig->DelayCntFactor;
        /*Delay to make sure reconfig is safe*/
        Sdadc_LLD_LoopDelay(u32LoopCnt);
        Ret = E_OK;
    }
    return Ret;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_EnableChannel(const Sdadc_HwConfigType *pHwConfig,
                                                              uint8 u8HwChannelId,
                                                              uint8 u8Enable,
                                                              uint8 u8AccessMode,
                                                              uint8 u8ConfigReload)
{
    SDADC_Type *const              pSdadc        = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    Std_ReturnType                 Ret           = E_NOT_OK;
    const Sdadc_ChannelConfigType *pChannelCfg   = Sdadc_LLD_GetChannelCfgByHwId(pHwConfig,
                                                                               u8HwChannelId);
    uint8                          u8ChannelMask = 0U;
    uint32                         u32TimeoutCounter;

    Sdadc_LLD_ClearChannelIntFlags(pHwConfig->HWInstanceId, u8HwChannelId);

    if (u8Enable != 0u)
    {
        if (u8ConfigReload != 0u)
        {
            Sdadc_LLD_InitChannel(pHwConfig, pChannelCfg, u8HwChannelId);
        }

        Sdadc_LLD_ChannelFIFOIntEnable(pSdadc, u8HwChannelId, u8Enable);
#if (SDADC_TS_POLLING == STD_OFF)
        Sdadc_LLD_ChannelTSVLDIntEnable(pSdadc, u8HwChannelId, u8Enable);
#endif

        if ((u8AccessMode == SDADC_SINGLE_READ) ||
            (SDADC_HWA_GetTSRDM(pSdadc, u8HwChannelId) == SDADC_RDM_DIRECT))
        {
            SDADC_HWA_SetCOCIE(pSdadc,
                               (SDADC_HWA_GetCOCIE(pSdadc) & (~(1U << u8HwChannelId))) |
                                   ((uint32)u8Enable << u8HwChannelId));
        }
    }

    if (pChannelCfg->u8COCIntSupress != 0u)
    {
        Sdadc_LLD_ChannelSupressCovInt(pSdadc, u8HwChannelId);
    }

    SDADC_HWA_SetCH_EN(pSdadc, u8HwChannelId, u8Enable);
    u8ChannelMask = (uint8)(1U << (u8HwChannelId));

    if (u8Enable != 0u)
    {
        u32TimeoutCounter = SDADC_TIMEOUT_LOOPS;
        while (u32TimeoutCounter != 0u)
        {
            if ((SDADC_HWA_GetCHRDY(pSdadc) & u8ChannelMask) == u8ChannelMask)
            {
                Ret = E_OK;
                break;
            }
            u32TimeoutCounter--;
        }
    }
    else
    {
        uint32 u32LoopCnt = 10u * (1u << SDADC_HWA_GetPRESCALE(pSdadc)) *
                            (SDADC_HWA_GetMCLK_DIV(pSdadc) + 1u) * 2u * pHwConfig->DelayCntFactor;
        /*Delay to make sure reconfig is safe*/
        Sdadc_LLD_LoopDelay(u32LoopCnt);
        Ret = E_OK;
    }
    return Ret;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_SingleRead(const Sdadc_HwConfigType *pHwConfig,
                                                           uint8                     u8HwChannelId,
                                                           Sdadc_ResultType         *ptResultData)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint32            u32TimeoutCounter;

    Sdadc_ChannelConfigTypeConstPtr pChannelConfig;
    *ptResultData = 0;

    pChannelConfig = pHwConfig->paSdadcChannelCfg[u8HwChannelId];

    if (SDADC_HWA_GetFIFO_EN(pSdadc, u8HwChannelId) != 0u)
    {
        u32TimeoutCounter = SDADC_TIMEOUT_LOOPS;
        while ((SDADC_HWA_GetFIFO_EMPTY(pSdadc) & (1u << (pChannelConfig->u8HwChannelId))) == 0u)
        {
            *ptResultData = SDADC_HWA_GetRDATA(pSdadc, u8HwChannelId);
            u32TimeoutCounter--;
            if (u32TimeoutCounter == 0)
            {
                break;
            }
        }
    }
    else
    {
        *ptResultData = SDADC_HWA_GetRDATA(pSdadc, u8HwChannelId);
    }

    return E_OK;
}

CDD_SDADC_TEXT_SECTION const Sdadc_HwConfigType *Sdadc_LLD_GetConfigById(const uint8 u8HwinstaneId)
{
    uint32                    CoreId    = SDADC_GetCoreID();
    const Sdadc_HwConfigType *pHwConfig = NULL_PTR;

    if (Sdadc_CfgPtr[CoreId] != NULL_PTR)
    {
        for (uint8 j = 0; j < SDADC_INSTANCE_CNT; j++)
        {
            if ((Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[j]->CoreId == CoreId) &&
                (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[j]->HWInstanceId == u8HwinstaneId))
            {
                pHwConfig = Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[j];
                break;
            }
        }
    }
    return pHwConfig;
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_EnableChannelNotification(const uint8 u8HwinstaneId,
                                                                const uint8 u8HwChannelId,
                                                                uint8       u8Enable)
{
    Sdadc_ChannelNotificationEnable[u8HwinstaneId][u8HwChannelId] = u8Enable;
}

CDD_SDADC_TEXT_SECTION uint8 Sdadc_LLD_GetInstacneIdByHwId(const uint8 u8HwinstaneId)
{
    uint32 CoreId     = SDADC_GetCoreID();
    uint8  InstanceId = 0xFFU;
    for (uint8 i = 0; i < SDADC_INSTANCE_CNT; i++)
    {
        if (Sdadc_CfgPtr[CoreId]->apSdadcInstanceCfg[i]->HWInstanceId == u8HwinstaneId)
        {
            InstanceId = i;
            break;
        }
    }
    return InstanceId;
}

CDD_SDADC_TEXT_SECTION Sdadc_ChannelConfigType *Sdadc_LLD_GetChannelCfgByHwId(
    const Sdadc_HwConfigType *pHwConfig,
    const uint8               u8HwChannelId)
{
    Sdadc_ChannelConfigTypeConstPtr pChannelCfg = NULL_PTR;

    for (uint8 i = 0; i < SDADC_MAX_CHANNEL_CNT; i++)
    {
        if ((pHwConfig->paSdadcChannelCfg[i] != NULL_PTR) &&
            (pHwConfig->paSdadcChannelCfg[i]->u8HwChannelId == u8HwChannelId))
        {
            pChannelCfg = pHwConfig->paSdadcChannelCfg[i];
            break;
        }
    }
    return (Sdadc_ChannelConfigType *)pChannelCfg;
}

CDD_SDADC_TEXT_SECTION uint8 Sdadc_LLD_GetChannelIdByHwId(const Sdadc_HwConfigType *pHwConfig,
                                                          const uint8               u8HwChannelId)
{
    uint8 ChannelId = 0xFFU;
    for (uint8 i = 0; i < SDADC_MAX_CHANNEL_CNT; i++)
    {
        if ((pHwConfig->paSdadcChannelCfg[i] != NULL_PTR) &&
            (pHwConfig->paSdadcChannelCfg[i]->u8HwChannelId == u8HwChannelId))
        {
            ChannelId = i;
            break;
        }
    }
    return ChannelId;
}

CDD_SDADC_TEXT_SECTION uint32 Sdadc_LLD_RingBufferCnt(Sdadc_ChannelMDataType *pChannelMData)
{
    Sdadc_SizeType tSize;
    SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_01();
    if (pChannelMData->Sdadc_ChannelBufferPtr == NULL_PTR)
    {
        tSize = 0;
    }
    else if (pChannelMData->Sdadc_ChannelBufferFull != 0u)
    {
        tSize = pChannelMData->Sdadc_ChannelBufferSize;
    }
    else
    {
        tSize = ((uint32)(pChannelMData->Sdadc_ChannelBufferWPtr +
                          pChannelMData->Sdadc_ChannelBufferSize -
                          pChannelMData->Sdadc_ChannelBufferRPtr) %
                 pChannelMData->Sdadc_ChannelBufferSize);
    }
    SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_01();
    return tSize;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_RingBufferRead(Sdadc_ChannelMDataType *pChannelMData,
                                                               Sdadc_ResultType *ptResultData)
{
    Sdadc_ResultType ResultData = 0;
    Std_ReturnType   Ret        = E_OK;
    SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_02();
    if (pChannelMData->Sdadc_ChannelBufferPtr == NULL_PTR)
    {
        Ret = E_NOT_OK;
    }
    else if ((pChannelMData->Sdadc_ChannelBufferFull == 0U) &&
             (pChannelMData->Sdadc_ChannelBufferRPtr == pChannelMData->Sdadc_ChannelBufferWPtr))
    {
        Ret = E_NOT_OK;
    }
    else
    {
        ResultData                             = *pChannelMData->Sdadc_ChannelBufferRPtr;
        pChannelMData->Sdadc_ChannelBufferFull = 0U;
        pChannelMData->Sdadc_ChannelBufferRPtr++;
        if (pChannelMData->Sdadc_ChannelBufferRPtr ==
            (pChannelMData->Sdadc_ChannelBufferPtr + pChannelMData->Sdadc_ChannelBufferSize))
        {
            pChannelMData->Sdadc_ChannelBufferRPtr = pChannelMData->Sdadc_ChannelBufferPtr;
        }
    }
    *ptResultData = ResultData;
    SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_02();
    return Ret;
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_RingBufferWrite(Sdadc_ChannelMDataType *pChannelMData,
                                                      Sdadc_ResultType        tResultData)
{
    SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_03();
    if (pChannelMData->Sdadc_ChannelBufferPtr != NULL_PTR)
    {
        *pChannelMData->Sdadc_ChannelBufferWPtr = tResultData;
        if (pChannelMData->Sdadc_ChannelBufferFull != 0u)
        {
            pChannelMData->Sdadc_ChannelBufferWPtr++;
            pChannelMData->Sdadc_ChannelBufferRPtr++;
            if (pChannelMData->Sdadc_ChannelBufferWPtr ==
                (pChannelMData->Sdadc_ChannelBufferPtr + pChannelMData->Sdadc_ChannelBufferSize))
            {
                pChannelMData->Sdadc_ChannelBufferWPtr = pChannelMData->Sdadc_ChannelBufferPtr;
            }
            if (pChannelMData->Sdadc_ChannelBufferRPtr ==
                (pChannelMData->Sdadc_ChannelBufferPtr + pChannelMData->Sdadc_ChannelBufferSize))
            {
                pChannelMData->Sdadc_ChannelBufferRPtr = pChannelMData->Sdadc_ChannelBufferPtr;
            }
        }
        else
        {
            pChannelMData->Sdadc_ChannelBufferWPtr++;
            if (pChannelMData->Sdadc_ChannelBufferWPtr ==
                (pChannelMData->Sdadc_ChannelBufferPtr + pChannelMData->Sdadc_ChannelBufferSize))
            {
                pChannelMData->Sdadc_ChannelBufferWPtr = pChannelMData->Sdadc_ChannelBufferPtr;
            }
            if (pChannelMData->Sdadc_ChannelBufferWPtr == pChannelMData->Sdadc_ChannelBufferRPtr)
            {
                pChannelMData->Sdadc_ChannelBufferFull = 1U;
            }
        }
    }
    SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_03();
}

CDD_SDADC_TEXT_SECTION uint32 Sdadc_LLD_LinearBufferCnt(Sdadc_ChannelMDataType *pChannelMData)
{
    Sdadc_SizeType tSize;
    SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_04();
    if (pChannelMData->Sdadc_ChannelBufferPtr == NULL_PTR)
    {
        tSize = 0U;
    }
    else if (pChannelMData->Sdadc_ChannelBufferFull != 0u)
    {
        tSize = pChannelMData->Sdadc_ChannelBufferSize;
    }
    else
    {
        tSize = (uint32)(pChannelMData->Sdadc_ChannelBufferWPtr -
                         pChannelMData->Sdadc_ChannelBufferRPtr);
    }
    SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_04();
    return tSize;
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_LinearBufferWrite(Sdadc_ChannelMDataType *pChannelMData,
                                                        Sdadc_ResultType        tResultData)
{
    SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_06();
    if (pChannelMData->Sdadc_ChannelBufferPtr != NULL_PTR)
    {
        if (pChannelMData->Sdadc_ChannelBufferFull == 0U)
        {
            *pChannelMData->Sdadc_ChannelBufferWPtr = tResultData;
            pChannelMData->Sdadc_ChannelBufferWPtr++;
            if (pChannelMData->Sdadc_ChannelBufferWPtr ==
                (pChannelMData->Sdadc_ChannelBufferPtr + pChannelMData->Sdadc_ChannelBufferSize))
            {
                pChannelMData->Sdadc_ChannelBufferWPtr = pChannelMData->Sdadc_ChannelBufferPtr;
            }
            if (pChannelMData->Sdadc_ChannelBufferWPtr == pChannelMData->Sdadc_ChannelBufferRPtr)
            {
                pChannelMData->Sdadc_ChannelBufferFull = 1U;
            }
        }
    }
    SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_06();
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_SetChannelIntEn(const Sdadc_HwConfigType *pHwConfig,
                                                      uint8                     u8HwChannelId)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];

    SDADC_HWA_SetNIER(pSdadc,
                      SDADC_HWA_GetNIER(pSdadc) |
                          (pHwConfig->u32NIERReg & (SDADC_NIER_CH0_MASK << u8HwChannelId)));
    SDADC_HWA_SetABNIER0(pSdadc,
                         SDADC_HWA_GetABNIER0(pSdadc) |
                             (pHwConfig->u32ABNIER0Reg & (SDADC_ABNIER0_CH0_MASK << u8HwChannelId)));
    SDADC_HWA_SetABNIER1(pSdadc,
                         SDADC_HWA_GetABNIER1(pSdadc) |
                             (pHwConfig->u32ABNIER1Reg & (SDADC_ABNIER1_CH0_MASK << u8HwChannelId)));
    SDADC_HWA_SetEXTIE(pSdadc,
                       SDADC_HWA_GetEXTIE(pSdadc) |
                           (pHwConfig->u32EXTIEReg & (SDADC_EXTIE_CH0_MASK << u8HwChannelId)));
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ClearChannelIntEn(const uint8 u8HwinstaneId, uint8 u8HwChannelId)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[u8HwinstaneId];
    SDADC_HWA_SetNIER(pSdadc, SDADC_HWA_GetNIER(pSdadc) & (~(SDADC_NIER_CH0_MASK << u8HwChannelId)));
    SDADC_HWA_SetABNIER0(pSdadc,
                         SDADC_HWA_GetABNIER0(pSdadc) & (~(SDADC_ABNIER0_CH0_MASK << u8HwChannelId)));
    SDADC_HWA_SetABNIER1(pSdadc,
                         SDADC_HWA_GetABNIER1(pSdadc) & (~(SDADC_ABNIER1_CH0_MASK << u8HwChannelId)));
    SDADC_HWA_SetEXTIE(pSdadc,
                       SDADC_HWA_GetEXTIE(pSdadc) & (~(SDADC_EXTIE_CH0_MASK << u8HwChannelId)));
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ClearChannelIntFlags(const uint8 u8HwinstaneId,
                                                           uint8       u8HwChannelId)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[u8HwinstaneId];
    SDADC_HWA_SetNISR(pSdadc, SDADC_NISR_CH0_MASK << u8HwChannelId);
    SDADC_HWA_SetABNISR0(pSdadc, SDADC_ABNISR0_CH0_MASK << u8HwChannelId);
    SDADC_HWA_SetABNISR1(pSdadc, SDADC_ABNISR1_CH0_MASK << u8HwChannelId);
    SDADC_HWA_SetEXTIS(pSdadc, SDADC_EXTIS_CH0_MASK << u8HwChannelId);
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ClearAllIntFlags(const uint8 u8HwinstaneId)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[u8HwinstaneId];
    SDADC_HWA_SetNISR(pSdadc, 0xFFFFFFFFU);
    SDADC_HWA_SetABNISR0(pSdadc, 0xFFFFFFFFU);
    SDADC_HWA_SetABNISR1(pSdadc, 0xFFFFFFFFU);
    SDADC_HWA_SetEXTIS(pSdadc, 0xFFFFFFFFU);
}

#if (SDADC_TS_POLLING != STD_OFF)
CDD_SDADC_TEXT_SECTION uint8 Sdadc_LLD_ChannelTSVLDGet(SDADC_Type *const pSdadc, uint8 u8HwChannelId)
{
    uint8 ret = 0u;
    if ((SDADC_HWA_GetTSVLD(pSdadc) & (1u << u8HwChannelId)) != 0u)
    {
        ret = 1u;
    }
    return ret;
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_ChannelTSVLDClear(SDADC_Type *const pSdadc, uint8 u8HwChannelId)
{
    SDADC_HWA_ClearTSVLD(pSdadc, (uint32)(1u << u8HwChannelId));
}
#endif

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_GetTimestamp(const Sdadc_HwConfigType *pHwConfig,
                                                             uint8 u8HwChannelId,
                                                             Sdadc_TimestampInfoType *pTimestampInfo)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint32            u32Tsinfo1;
    uint32            u32Tsinfo2;
    uint8             u8RetryCnt = 4u;

    SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_07();
    pTimestampInfo->u32TimestampCnt = SDADC_HWA_GetTSCNT(pSdadc, u8HwChannelId);
#if (SDADC_TS_POLLING == STD_OFF)
    if (Sdadc_ChannelTsValid[pHwConfig->HWInstanceId][u8HwChannelId] != 0u)
    {
        /* The CTSINFO register cannot be accessed while it is being updated, otherwise a afcb2
           monitor fault will occur. Ensure that the timestamp capture is valid before reading it,
           and read it before the next capture occurs to prevent accessing the register while it is
           being updated. */
        do
        {
            u32Tsinfo1 = SDADC_HWA_GetTSINFO(pSdadc, u8HwChannelId);
            u32Tsinfo2 = SDADC_HWA_GetTSINFO(pSdadc, u8HwChannelId);
            u8RetryCnt--;
            if (u8RetryCnt == 0)
            {
                break;
            }
        }
        while (u32Tsinfo2 != u32Tsinfo1);
        Sdadc_ChannelTsValid[pHwConfig->HWInstanceId][u8HwChannelId] = 0u;

        pTimestampInfo->u16DataTrunc = (uint16)((u32Tsinfo2 & SDADC_CTSINFO_TSDATA_MASK) >>
                                                SDADC_CTSINFO_TSDATA_SHIFT);
        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: In register operation macros, there is a macro definition that shifts by 0 bits.
        For code maintainability, this redundant writing style needs to be preserved. */
        pTimestampInfo->u16TimeStamp = (uint16)((u32Tsinfo2 & SDADC_CTSINFO_TSTAMP_MASK) >>
                                                SDADC_CTSINFO_TSTAMP_SHIFT);
        /* PRQA S 2985 -- */
    }
#else
    if (Sdadc_LLD_ChannelTSVLDGet(pSdadc, u8HwChannelId) != 0u)
    {
        /* The CTSINFO register cannot be accessed while it is being updated, otherwise a afcb2
           monitor fault will occur. Ensure that the timestamp capture is valid before reading it,
           and read it before the next capture occurs to prevent accessing the register while it is
           being updated. */
        do
        {
            u32Tsinfo1 = SDADC_HWA_GetTSINFO(pSdadc, u8HwChannelId);
            u32Tsinfo2 = SDADC_HWA_GetTSINFO(pSdadc, u8HwChannelId);
            u8RetryCnt--;
            if ((u8RetryCnt == 0))
            {
                break;
            }
        }
        while (u32Tsinfo2 != u32Tsinfo1);

        Sdadc_LLD_ChannelTSVLDClear(pSdadc, u8HwChannelId);
        pTimestampInfo->u16DataTrunc = (uint16)((u32Tsinfo2 & SDADC_CTSINFO_TSDATA_MASK) >>
                                                SDADC_CTSINFO_TSDATA_SHIFT);
        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: In register operation macros, there is a macro definition that shifts by 0 bits.
        For code maintainability, this redundant writing style needs to be preserved. */
        pTimestampInfo->u16TimeStamp = (uint16)((u32Tsinfo2 & SDADC_CTSINFO_TSTAMP_MASK) >>
                                                SDADC_CTSINFO_TSTAMP_SHIFT);
        /* PRQA S 2985 -- */
    }
#endif
    else
    {
        pTimestampInfo->u16DataTrunc = 0u;
        pTimestampInfo->u16TimeStamp = 0u;
    }

    SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_07();
    return E_OK;
}

#if (STD_ON == SDADC_GLOBAL_TS_SUPPORT)
CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_GetGlobalTimestamp(
    const Sdadc_HwConfigType      *pHwConfig,
    Sdadc_GlobalTimestampInfoType *pTimestampInfo)
{
    Std_ReturnType                          eRet           = E_OK;
    uint8                                   u8HwInstanceId = pHwConfig->HWInstanceId;
    Sdadc_GlobalTimestampInfoType           tTimeStampInfo = { 0 };
    volatile Sdadc_GlobalTimestampInfoType *pSafeTimeStampInfo;
    uint32                                  u32TimeStampRes0;
    uint32                                  u32TimeStampRes1;
    uint32                                  u32PreviousTs = 0;
    uint32                                  u32CurrentTs  = 0xFFFFFFFFUL;
    uint32                                  diff          = 0;
    Dma_InstanceType                        DmaInstance   = pHwConfig->eDmaInstance;
    uint8                                   DmaChannel    = pHwConfig->u8DmaChannel;
    uint32                                  u32Cnt        = SDADC_GLOBAL_TIMESTAMP_LOOPS;
    const Sdadc_ChannelConfigType          *pChannelCfg;
    uint8                                   Sdadc_ChLoop;

    do
    {
        u32Cnt--;
        if (u32Cnt == 0)
        {
            eRet = E_NOT_OK;
            break;
        }
        if (Dma_CheckIfTransferActive(DmaInstance, DmaChannel) == FALSE)
        {
            SchM_Enter_Sdadc_SDADC_EXCLUSIVE_AREA_19();
            u32TimeStampRes0 =
                Sdadc_ChannelGlobalTimestampInfoBuffer[u8HwInstanceId][0].u32TimeStampRes;
            u32TimeStampRes1 =
                Sdadc_ChannelGlobalTimestampInfoBuffer[u8HwInstanceId][1].u32TimeStampRes;

            diff = u32TimeStampRes1 - u32TimeStampRes0;
            if (diff == 0)
            {
                pSafeTimeStampInfo = &Sdadc_ChannelGlobalTimestampInfoBuffer[u8HwInstanceId][1];
                u32PreviousTs      = u32TimeStampRes1;
            }
            else if (diff <= (0xFFFFFFFFUL >> 1))
            {
                pSafeTimeStampInfo = &Sdadc_ChannelGlobalTimestampInfoBuffer[u8HwInstanceId][0];
                u32PreviousTs      = u32TimeStampRes0;
            }
            else
            {
                pSafeTimeStampInfo = &Sdadc_ChannelGlobalTimestampInfoBuffer[u8HwInstanceId][1];
                u32PreviousTs      = u32TimeStampRes1;
            }
            for (Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
            {
                tTimeStampInfo.u32ChannelRes[Sdadc_ChLoop] =
                    pSafeTimeStampInfo->u32ChannelRes[Sdadc_ChLoop];
            }
            u32CurrentTs = pSafeTimeStampInfo->u32TimeStampRes;
            SchM_Exit_Sdadc_SDADC_EXCLUSIVE_AREA_19();
        }
    }
    while (u32CurrentTs != u32PreviousTs);

    tTimeStampInfo.u32TimeStampRes = u32CurrentTs;
    for (Sdadc_ChLoop = 0U; Sdadc_ChLoop < SDADC_MAX_CHANNEL_CNT; Sdadc_ChLoop++)
    {
        pChannelCfg = pHwConfig->paSdadcChannelCfg[Sdadc_ChLoop];
        if ((pChannelCfg != NULL_PTR) && (pChannelCfg->u8GlobalTs != 0U))
        {
            pTimestampInfo->u32ChannelRes[Sdadc_ChLoop] =
                tTimeStampInfo.u32ChannelRes[pChannelCfg->u8HwChannelId];
        }
        else
        {
            pTimestampInfo->u32ChannelRes[Sdadc_ChLoop] = 0U;
        }
    }

    pTimestampInfo->u32TimeStampRes = tTimeStampInfo.u32TimeStampRes;

    return eRet;
}
#endif

#if (SDADC_CALIBRATION_FEATURE == STD_ON)
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_StartCalibrationOffsetCfg(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelCfg,
    uint8                          u8SingleEnd)
{
    SDADC_Type *const            pSdadc        = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint8                        u8HwChannelId = pChannelCfg->u8HwChannelId;
    const Sdadc_CalibConfigType *pCalibCfg     = &tSdadc_CalibCfg;
    uint32                       u32CFR        = pCalibCfg->u32CFRReg;
    uint32 u32CDR    = (pChannelCfg->u32CDRReg & (~SDADC_CDR_MFCM_MASK)) | pCalibCfg->u32CDRReg;
    uint32 u32CMACSR = pCalibCfg->u32CMACSRReg;
    uint32 u32CTSCNT = pCalibCfg->u32CTSCNTReg;

    u32CFR &= ~(SDADC_CFR_RDFMT_MASK | SDADC_CFR_MFSHIFT_MASK | SDADC_CFR_CLKSEL_MASK);
    u32CFR |= (SDADC_Cacu_CFRRegs(pChannelCfg->u32CFRReg, pChannelCfg->u32CDRReg) &
               (SDADC_CFR_MFSHIFT_MASK | SDADC_CFR_RDFMT_MASK | SDADC_CFR_CLKSEL_MASK));
    u32CMACSR &= ~(SDADC_CMACSR_MACLKSEL_MASK | SDADC_CMACSR_DITHER_EN_MASK |
                   SDADC_CMACSR_GAINSEL_MASK);
    /*OFFSET*/
    u32CMACSR |= pChannelCfg->u32CMACSRReg &
                 (SDADC_CMACSR_MACLKSEL_MASK | SDADC_CMACSR_DITHER_EN_MASK);
    if (u8SingleEnd != 0u)
    {
        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: For code maintainability and clarity in register configuration, this redundant write
        is intentional to explicitly clear certain bits before setting new ones, even if they are
        already zero. */
        u32CMACSR &= ~(SDADC_CMACSR_INCFGP_MASK | SDADC_CMACSR_INCFGM_MASK);
        /* PRQA S 2985 -- */
        u32CMACSR |= SDADC_CMACSR_INCFGP(1U) | SDADC_CMACSR_INCFGM(1U);
    }
    else
    {
        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: For code maintainability and clarity in register configuration, this redundant write
        is intentional to explicitly clear certain bits before setting new ones, even if they are
        already zero. */
        u32CMACSR &= ~(SDADC_CMACSR_INCFGP_MASK | SDADC_CMACSR_INCFGM_MASK);
        /* PRQA S 2985 -- */
        u32CMACSR |= SDADC_CMACSR_INCFGP(3U) | SDADC_CMACSR_INCFGM(3U);
    }

    SDADC_HWA_SetCCRn(pSdadc, u8HwChannelId, pCalibCfg->u32CCRReg);
    SDADC_HWA_SetCDRn(pSdadc, u8HwChannelId, u32CDR);
    SDADC_HWA_SetCFRn(pSdadc, u8HwChannelId, u32CFR);
    SDADC_HWA_SetCPRn(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCLLMTn(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCHLMTn(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCRTCSR(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCSDR(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCICFR(pSdadc, u8HwChannelId, pCalibCfg->u32CICFRReg);
    SDADC_HWA_SetCMACSR(pSdadc, u8HwChannelId, u32CMACSR);
    SDADC_HWA_SetCTSCNT(pSdadc, u8HwChannelId, u32CTSCNT);
    SDADC_HWA_SetCBRn(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCGNR(pSdadc, u8HwChannelId, 0U);
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_StartCalibrationGainCfg(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelCfg,
    sint32                         s32Offset)
{
    SDADC_Type *const            pSdadc        = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint8                        u8HwChannelId = pChannelCfg->u8HwChannelId;
    const Sdadc_CalibConfigType *pCalibCfg     = &tSdadc_CalibCfg;
    uint32                       u32CFR        = pCalibCfg->u32CFRReg;
    uint32 u32CDR    = (pChannelCfg->u32CDRReg & (~SDADC_CDR_MFCM_MASK)) | pCalibCfg->u32CDRReg;
    uint32 u32CMACSR = pCalibCfg->u32CMACSRReg;
    uint32 u32CTSCNT = pCalibCfg->u32CTSCNTReg;

    u32CFR &= ~(SDADC_CFR_RDFMT_MASK | SDADC_CFR_MFSHIFT_MASK | SDADC_CFR_CLKSEL_MASK);
    u32CFR |= (SDADC_Cacu_CFRRegs(pChannelCfg->u32CFRReg, pChannelCfg->u32CDRReg) &
               (SDADC_CFR_MFSHIFT_MASK | SDADC_CFR_RDFMT_MASK | SDADC_CFR_CLKSEL_MASK));
    u32CMACSR &= ~(SDADC_CMACSR_MACLKSEL_MASK | SDADC_CMACSR_DITHER_EN_MASK |
                   SDADC_CMACSR_GAINSEL_MASK);
    /*Gain*/
    u32CMACSR |= pChannelCfg->u32CMACSRReg &
                 (SDADC_CMACSR_MACLKSEL_MASK | SDADC_CMACSR_DITHER_EN_MASK |
                  SDADC_CMACSR_GAINSEL_MASK);
    if (((pChannelCfg->u32CMACSRReg & SDADC_CMACSR_GAINSEL_MASK) >> SDADC_CMACSR_GAINSEL_SHIFT) == 0)
    {
        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: For code maintainability and clarity in register configuration, this redundant write
        is intentional to explicitly clear certain bits before setting new ones, even if they are
        already zero. */
        u32CMACSR &= ~(SDADC_CMACSR_INCFGP_MASK | SDADC_CMACSR_INCFGM_MASK);
        /* PRQA S 2985 -- */
        u32CMACSR |= SDADC_CMACSR_INCFGP(2U) | SDADC_CMACSR_INCFGM(1U);
    }
    else if (((pChannelCfg->u32CMACSRReg & SDADC_CMACSR_GAINSEL_MASK) >>
              SDADC_CMACSR_GAINSEL_SHIFT) == 1)
    {
        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: For code maintainability and clarity in register configuration, this redundant write
        is intentional to explicitly clear certain bits before setting new ones, even if they are
        already zero. */
        u32CMACSR &= ~(SDADC_CMACSR_INCFGP_MASK | SDADC_CMACSR_INCFGM_MASK);
        /* PRQA S 2985 -- */
        u32CMACSR |= SDADC_CMACSR_INCFGP(3U) | SDADC_CMACSR_INCFGM(1U);
    }
    else
    {
        /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant.
        The value of the result is always that of the left-hand operand.
        Reason: For code maintainability and clarity in register configuration, this redundant write
        is intentional to explicitly clear certain bits before setting new ones, even if they are
        already zero. */
        u32CMACSR &= ~(SDADC_CMACSR_INCFGP_MASK | SDADC_CMACSR_INCFGM_MASK);
        /* PRQA S 2985 -- */
        u32CMACSR |= SDADC_CMACSR_INCFGP(0U) | SDADC_CMACSR_INCFGM(1U);
        u32CMACSR |= SDADC_CMACSR_INCFGPV11_MASK;
    }

    SDADC_HWA_SetCCRn(pSdadc, u8HwChannelId, pCalibCfg->u32CCRReg);
    SDADC_HWA_SetCDRn(pSdadc, u8HwChannelId, u32CDR);
    SDADC_HWA_SetCFRn(pSdadc, u8HwChannelId, u32CFR);
    SDADC_HWA_SetCPRn(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCLLMTn(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCHLMTn(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCRTCSR(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCSDR(pSdadc, u8HwChannelId, 0U);
    SDADC_HWA_SetCICFR(pSdadc, u8HwChannelId, pCalibCfg->u32CICFRReg);
    SDADC_HWA_SetCMACSR(pSdadc, u8HwChannelId, u32CMACSR);
    SDADC_HWA_SetCTSCNT(pSdadc, u8HwChannelId, u32CTSCNT);
    SDADC_HWA_SetCBRn(pSdadc, u8HwChannelId, (uint32)s32Offset);
    SDADC_HWA_SetCGNR(pSdadc, u8HwChannelId, 0U);
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_StartCalibration(
    const Sdadc_HwConfigType      *pHwConfig,
    const Sdadc_ChannelConfigType *pChannelCfg,
    uint8                          u8SingleEnd)
{
    SDADC_Type *const      pSdadc         = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    Std_ReturnType         Ret            = E_NOT_OK;
    uint8                  u8HwChannelId  = pChannelCfg->u8HwChannelId;
    uint8                  u8HwInstanceId = pHwConfig->HWInstanceId;
    uint32                 u32TimeoutCounter;
    uint8                  u8ChannelMask = 0;
    Sdadc_LLD_CalibSMType *pCalibSmData;

    Sdadc_LLD_ClearChannelIntEn(pHwConfig->HWInstanceId, u8HwChannelId);
    Sdadc_LLD_ClearChannelIntFlags(pHwConfig->HWInstanceId, u8HwChannelId);
    Sdadc_LLD_StartCalibrationOffsetCfg(pHwConfig, pChannelCfg, u8SingleEnd);
    SDADC_HWA_FlushFIFO(pSdadc, u8HwChannelId);
    SDADC_HWA_SetNIER(pSdadc, SDADC_HWA_GetNIER(pSdadc) | (SDADC_NIER_COCIE0_MASK << u8HwChannelId));
    Sdadc_LLD_SetChannelSWTrigger(pHwConfig->HWInstanceId, u8HwChannelId, 0u);
    Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId, u8HwChannelId, 0u);
    SDADC_HWA_SetCH_EN(pSdadc, u8HwChannelId, 1);
    u8ChannelMask     = (uint8)(1U << (u8HwChannelId));
    u32TimeoutCounter = SDADC_TIMEOUT_LOOPS;
    while (u32TimeoutCounter != 0u)
    {
        if ((SDADC_HWA_GetCHRDY(pSdadc) & u8ChannelMask) == u8ChannelMask)
        {
            Ret = E_OK;
            break;
        }
        u32TimeoutCounter--;
    }

    pCalibSmData = &Sdadc_CalibrationSMStatus[u8HwInstanceId][u8HwChannelId];
    if (Ret == E_OK)
    {
        pCalibSmData->s64CalibDataSum         = 0;
        pCalibSmData->u16CalibDataCnt         = 0;
        pCalibSmData->Sdadc_CalibrationStatus = SDADC_CALIBRATION_OFFSET_RUNNING;
        Sdadc_LLD_SetChannelSWTrigger(u8HwInstanceId, u8HwChannelId, 1);
        Sdadc_LLD_SetIntgSWTrigger(pHwConfig->HWInstanceId, u8HwChannelId, 1u);
    }
    else
    {
        Sdadc_LLD_InitChannel(pHwConfig, pChannelCfg, u8HwChannelId);
        pCalibSmData->Sdadc_CalibrationStatus = SDADC_CALIBRATION_ERROR;
    }

    return Ret;
}

CDD_SDADC_TEXT_SECTION Std_ReturnType Sdadc_LLD_GetCalibrationData(
    const uint8                 u8HwinstaneId,
    uint8                       u8HwChannelId,
    Sdadc_ChannelCalibInfoType *pCalibInfo)
{
    pCalibInfo->u32CBRReg =
        (uint32)(Sdadc_CalibrationSMStatus[u8HwinstaneId][u8HwChannelId].tResult.s32Offset);
    pCalibInfo->u32CGNRReg = Sdadc_CalibrationSMStatus[u8HwinstaneId][u8HwChannelId].tResult.u32Gain;
    return E_OK;
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_SetCalibrationStatus(const uint8 u8HwinstaneId,
                                                           const uint8 u8HwChannelId,
                                                           Sdadc_CalibrationStatusType u8Status)
{
    Sdadc_CalibrationSMStatus[u8HwinstaneId][u8HwChannelId].Sdadc_CalibrationStatus = u8Status;
}

CDD_SDADC_TEXT_SECTION Sdadc_CalibrationStatusType Sdadc_LLD_GetCalibrationStatus(
    const uint8 u8HwinstaneId,
    const uint8 u8HwChannelId)
{
    return Sdadc_CalibrationSMStatus[u8HwinstaneId][u8HwChannelId].Sdadc_CalibrationStatus;
}
#endif

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_SetPwmNegTriggerOutputEnable(uint8 u8HwInstanceId,
                                                                   uint8 u8EnableValue)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[u8HwInstanceId];
    SDADC_HWA_SetTRGSIGN_OEN(pSdadc, u8EnableValue);
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_SetTSignTriggerOutputEnable(uint8 u8HwInstanceId,
                                                                  uint8 u8HwChannelId,
                                                                  uint8 u8EnableValue)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[u8HwInstanceId];
    SDADC_HWA_SetCTRGSIGN_OEN(pSdadc, u8HwChannelId, u8EnableValue);
}

/* [FUNC_SDADC_00286] [SWDSG_SDADC_00306] */
CDD_SDADC_TEXT_SECTION void Sdadc_LLD_StartSignDelayCapture(const Sdadc_HwConfigType *pHwConfig,
                                                            uint8                     u8HwChannelId)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    SDADC_HWA_SetEXTIS(pSdadc, (uint32)(SDADC_EXTIS_SD_CAPVLD0_MASK << u8HwChannelId));
    SDADC_HWA_SetEXTIE(pSdadc,
                       SDADC_HWA_GetEXTIE(pSdadc) | (SDADC_EXTIE_SD_CAPVLD_IE0_MASK << u8HwChannelId));
}

CDD_SDADC_TEXT_SECTION void Sdadc_LLD_StopSignDelayCapture(const Sdadc_HwConfigType *pHwConfig,
                                                           uint8                     u8HwChannelId)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    SDADC_HWA_SetEXTIE(pSdadc,
                       SDADC_HWA_GetEXTIE(pSdadc) &
                           ~(SDADC_EXTIE_SD_CAPVLD_IE0_MASK << u8HwChannelId));
    SDADC_HWA_SetEXTIS(pSdadc, (uint32)(SDADC_EXTIS_SD_CAPVLD0_MASK << u8HwChannelId));
}

CDD_SDADC_TEXT_SECTION uint8 Sdadc_LLD_COCCheckAndClear(const Sdadc_HwConfigType *pHwConfig,
                                                        uint8                     u8HwChannelId)
{
    SDADC_Type *const pSdadc = s_apSdadc_HwInstances[pHwConfig->HWInstanceId];
    uint8             u8Ret  = 0U;
    if ((SDADC_HWA_GetNISR(pSdadc) & (SDADC_NISR_CH0_MASK << u8HwChannelId)) != 0U)
    {
        SDADC_HWA_SetNISR(pSdadc, SDADC_NISR_CH0_MASK << u8HwChannelId);
        u8Ret = 1;
    }
    return u8Ret;
}

#define CDD_SDADC_STOP_SEC_CODE
#include "Sdadc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
