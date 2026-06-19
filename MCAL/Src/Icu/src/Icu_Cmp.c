/**
 *   @file    Icu_Cmp.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - Cmp driver source file.
 *   @details Cmp source file, containing the variables and functions that are exported by the
 *            PORT driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Cmp
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
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
*   0.4.0       14/11/2023   QXW0076       N/A          Eliminate timestamp potential hazards
*   0.5.0       25/01/2024   QXW0076       N/A         add time stamp dma function
*   0.6.0       18/3/2024    QXW0076       N/A         verify timestamp dma feature && support for 7240.
==================================================================================================*/
/* PRQA S 2071,5087 EOF #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
    This attribute syntax is a language extension.
    REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 3006,1006 EOF #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
                        #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented
    1006:[E] This in-line assembler construct is a language extension. The code has been ignored.
    3006:This function contains a mixture of in-line assembler statements and C statements.
    REASON: This is the normal usage of macros.
*/
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Cmp.h"
#include "SchM_Icu.h"
#include "Icu_Cmp_Reg.h"
#if (ICU_SUPPORT_CMP == STD_ON)
/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/**
 * @brief base address array for FTU
 */
#define ICU_START_SEC_CONST_32
#include "Icu_MemMap.h"
/* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
   object and an integer type 0306:Cast between a pointer to object and an integral type. REASON:
   This is the CMP base type initialization.
*/
ICU_DATA_SECTION static CMP_Type *const CMP_PTRS[] = CMP_BASE_PTRS;
/* PRQA S 0306 -- */
#define ICU_STOP_SEC_CONST_32
#include "Icu_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

LOCAL_INLINE void ICU_CMP_HWA_Enable(CMP_Type *const pCmp);
LOCAL_INLINE void ICU_CMP_HWA_Disable(CMP_Type *const pCmp);
LOCAL_INLINE void ICU_CMP_HWA_SetEnStopMod(CMP_Type *const pCmp, uint8 bEnable);
LOCAL_INLINE void ICU_CMP_HWA_SetComparatorMod(CMP_Type *const      pCmp,
                                               Icu_CmpModSelType    eMod,
                                               uint8                u8FilterPrd,
                                               Icu_CmpFilterCntType eFilterCnt);
LOCAL_INLINE void ICU_CMP_HWA_SetDacEnableSrc(CMP_Type *const pCmp, Icu_CmpDacEnableSrcType eType);
LOCAL_INLINE void ICU_CMP_HWA_SetCmpOutInvert(CMP_Type *const pCmp, Icu_CmpInvertType eType);
LOCAL_INLINE void ICU_CMP_HWA_SetCmpOutSel(CMP_Type *const pCmp, Icu_CmpOutSelectType eType);
LOCAL_INLINE void Icu_CMP_HWA_SetEnCmpOutPinEnable(CMP_Type *const pCmp, uint8 bEnable);
LOCAL_INLINE void ICU_CMP_HWA_SetCmpOutWinLevel(CMP_Type *const pCmp, Icu_CmpOutWinLevelType eType);
LOCAL_INLINE void ICU_CMP_HWA_SetCmpOutWin(CMP_Type *const pCmp, Icu_CmpOutWinUserDefType eType);
LOCAL_INLINE void ICU_CMP_HWA_SetEnWinSampleInvert(CMP_Type *const pCmp, Icu_CmpWinInvType eType);
LOCAL_INLINE void ICU_CMP_HWA_SetEnEventCloseWin(CMP_Type *const pCmp, Icu_CmpWinCloseType eType);
LOCAL_INLINE void ICU_CMP_HWA_SetEventCloseWin(CMP_Type *const pCmp, ICU_CmpCloseWinEventType eType);
LOCAL_INLINE void   ICU_CMP_HWA_SetSpeedMod(CMP_Type *const pCmp, ICU_CmpSpeedModSelType eMod);
LOCAL_INLINE void   ICU_CMP_HWA_SetHystCtrl(CMP_Type *const pCmp, ICU_CmpHystCtrlType eType);
LOCAL_INLINE void   ICU_CMP_HWA_SetPSelMux(CMP_Type *const pCmp, Icu_CmpMuxSelType eType);
LOCAL_INLINE void   ICU_CMP_HWA_SetNSelMux(CMP_Type *const pCmp, Icu_CmpMuxSelType eType);
LOCAL_INLINE void   ICU_CMP_HWA_SetINPSel(CMP_Type *const pCmp, Icu_CmpInSrcSelType eType);
LOCAL_INLINE void   ICU_CMP_HWA_SetINNSel(CMP_Type *const pCmp, Icu_CmpInSrcSelType eType);
LOCAL_INLINE void   ICU_CMP_HWA_SetEnDac(CMP_Type *const pCmp, uint8 bEnable);
LOCAL_INLINE void   ICU_CMP_HWA_SetVinRefSel(CMP_Type *const pCmp, ICU_CmpDacVinRefSelType eType);
LOCAL_INLINE void   ICU_CMP_HWA_SetDacData(CMP_Type *const pCmp, uint8 u8Data);
LOCAL_INLINE void   ICU_CMP_HWA_SetIntEn_Rising(CMP_Type *const pCmp, uint8 bEnable);
LOCAL_INLINE uint8  ICU_CMP_HWA_GetIntEn_Rising(const CMP_Type *const pCmp);
LOCAL_INLINE void   ICU_CMP_HWA_SetIntEn_Falling(CMP_Type *const pCmp, uint8 bEnable);
LOCAL_INLINE uint8  ICU_CMP_HWA_GetIntEn_Falling(const CMP_Type *const pCmp);
LOCAL_INLINE uint8  ICU_CMP_HWA_GetIntRisingFlag(const CMP_Type *const pCmp);
LOCAL_INLINE uint8  ICU_CMP_HWA_GetIntFallingFlag(const CMP_Type *const pCmp);
LOCAL_INLINE void   ICU_CMP_HWA_ClearIntRisingFlag(CMP_Type *const pCmp);
LOCAL_INLINE void   ICU_CMP_HWA_ClearIntFallingFlag(CMP_Type *const pCmp);
LOCAL_INLINE uint32 ICU_CMP_HWA_GetCmpOut(const CMP_Type *const pCmp);
LOCAL_INLINE void   ICU_CMP_HWA_ClearCCR1(CMP_Type *const pCmp);
LOCAL_INLINE void   ICU_CMP_HWA_ClearCCR2(CMP_Type *const pCmp);
LOCAL_INLINE void   ICU_CMP_HWA_ClearDCR(CMP_Type *const pCmp);
ICU_TEXT_SECTION static void Icu_Cmp_ConfigInt(const Icu_CmpInstanceType    eCmpInstance,
                                               const ICU_CmpOutPolarityType ePolarity);
#if (defined ICU_CMP_ISR_USED)
LOCAL_INLINE void Icu_Cmp_ProcessInterrupt(const Icu_CmpInstanceType eCmpInstance);
#endif
#if (defined ICU_CMP0_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_CMP0_ISR);
#endif
#if (defined ICU_CMP1_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_CMP1_ISR);
#endif
#if (defined ICU_CMP2_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_CMP2_ISR);
#endif
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief set CMP enable
 *
 * @param pCmp the CMP instance to use
 */
LOCAL_INLINE void ICU_CMP_HWA_Enable(CMP_Type *const pCmp)
{
    uint32 u32RegVal = pCmp->CCR0;
    pCmp->CCR0       = ((u32RegVal & (~(uint32)CMP_CCR0_EN_MASK)) | CMP_CCR0_EN(1u));
}

/**
 * @brief set CMP disable
 *
 * @param pCmp the CMP instance to use
 */
LOCAL_INLINE void ICU_CMP_HWA_Disable(CMP_Type *const pCmp)
{
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The or operation of CMP_CCR0_EN(0u) is to
     * disable the Cmp */
    uint32 u32RegVal = pCmp->CCR0;
    pCmp->CCR0       = ((u32RegVal & (~(uint32)CMP_CCR0_EN_MASK)) | CMP_CCR0_EN(0u));
    /* PRQA S 2985 -- */
}

/**
 * @brief STOP mode enable
 *
 * @param pCmp the CMP instance to use
 * @param bEnable enable/disable flag
 */
LOCAL_INLINE void ICU_CMP_HWA_SetEnStopMod(CMP_Type *const pCmp, uint8 bEnable)
{
    uint32 u32RegVal = pCmp->CCR0;
    pCmp->CCR0       = ((u32RegVal & (~(uint32)CMP_CCR0_STOP_EN_MASK)) | CMP_CCR0_STOP_EN(bEnable));
}

/**
 * @brief set CMP mode
 *
 * @param pCmp the CMP instance to use
 * @param eMod the CMP mode to use
 * @param u8FilterPrd the CMP filter period
 * @param eFilterCnt the CMP filter sample count
 */
LOCAL_INLINE void ICU_CMP_HWA_SetComparatorMod(CMP_Type *const      pCmp,
                                               Icu_CmpModSelType    eMod,
                                               uint8                u8FilterPrd,
                                               Icu_CmpFilterCntType eFilterCnt)
{
    uint32 u32CmpRegVal = 0U;
    switch (eMod)
    {
        case ICU_CMP_MOD_CONTINUOUS:
            /* PRQA S 2986,2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
             * Reason: Macros are needed to avoid accidental value writing to the register */
            u32CmpRegVal |= CMP_CCR1_WIN_EN(0u) | CMP_CCR1_SAMPLE_EN(0u);
            break;
        case ICU_CMP_MOD_SAMPLE_NONFILTER_EXTCLK:
            u32CmpRegVal |= CMP_CCR1_WIN_EN(0u) | CMP_CCR1_SAMPLE_EN(1u) | CMP_CCR1_FILT_CNT(0x01);
            break;
        case ICU_CMP_MOD_SAMPLE_NONFILTER_INTCLK:
            u32CmpRegVal |= CMP_CCR1_WIN_EN(0u) | CMP_CCR1_SAMPLE_EN(0u) | CMP_CCR1_FILT_CNT(0x01) |
                            CMP_CCR1_FILT_PER(u8FilterPrd);
            break;
        case ICU_CMP_MOD_SAMPLE_FILTER_EXTCLK:
            u32CmpRegVal |= CMP_CCR1_WIN_EN(0u) | CMP_CCR1_SAMPLE_EN(1u) |
                            CMP_CCR1_FILT_CNT(u8FilterPrd);
            break;
        case ICU_CMP_MOD_SAMPLE_FILTER_INTCLK:
            u32CmpRegVal |= CMP_CCR1_WIN_EN(0u) | CMP_CCR1_SAMPLE_EN(0u) |
                            CMP_CCR1_FILT_CNT(eFilterCnt) | CMP_CCR1_FILT_PER(u8FilterPrd);
            break;
        case ICU_CMP_MOD_WINDOW:
            u32CmpRegVal |= CMP_CCR1_WIN_EN(1u) | CMP_CCR1_SAMPLE_EN(0u) | CMP_CCR1_FILT_CNT(0x00) |
                            CMP_CCR1_FILT_PER(0x00);
            break;
        case ICU_CMP_MOD_WINDOW_RESAMPLE:
            u32CmpRegVal |= CMP_CCR1_WIN_EN(1u) | CMP_CCR1_SAMPLE_EN(0u) | CMP_CCR1_FILT_CNT(0x01) |
                            CMP_CCR1_FILT_PER(u8FilterPrd);
            break;
        case ICU_CMP_MOD_WINDOW_FILTER:
            u32CmpRegVal |= CMP_CCR1_WIN_EN(1u) | CMP_CCR1_SAMPLE_EN(0u) |
                            CMP_CCR1_FILT_CNT(eFilterCnt) | CMP_CCR1_FILT_PER(u8FilterPrd);
            break;
        case ICU_CMP_MOD_DISABLE:
            u32CmpRegVal |= CMP_CCR1_WIN_EN(0u);
            /* PRQA S 2986,2985 -- */
            break;
        default: /*default do nothing*/
            break;
    }
    pCmp->CCR1 = u32CmpRegVal;
}

/**
 * @brief set DAC enable selection
 *
 * @param pCmp the CMP instance to use
 * @param eType Dac enable source
 */
LOCAL_INLINE void ICU_CMP_HWA_SetDacEnableSrc(CMP_Type *const pCmp, Icu_CmpDacEnableSrcType eType)
{
    uint32 u32RegVal = pCmp->CCR0;
    pCmp->CCR0 = ((u32RegVal & (~(uint32)CMP_CCR0_DACEN_SEL_MASK)) | CMP_CCR0_DACEN_SEL(eType));
}

/**
 * @brief set CPM output invert
 *
 * @param pCmp the CMP instance to use
 * @param eType CPM output invert type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetCmpOutInvert(CMP_Type *const pCmp, Icu_CmpInvertType eType)
{
    uint32 u32RegVal = pCmp->CCR1;
    pCmp->CCR1 = ((u32RegVal & (~(uint32)CMP_CCR1_CMPOUT_INV_MASK)) | CMP_CCR1_CMPOUT_INV(eType));
}

/**
 * @brief set CPM output filter/unfilter selection
 *
 * @param pCmp the CMP instance to use
 * @param eType CPM output filter/unfilter type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetCmpOutSel(CMP_Type *const pCmp, Icu_CmpOutSelectType eType)
{
    uint32 u32RegVal = pCmp->CCR1;
    pCmp->CCR1 = ((u32RegVal & (~(uint32)CMP_CCR1_CMPOUT_SEL_MASK)) | CMP_CCR1_CMPOUT_SEL(eType));
}

/**
 * @brief set comparator output pin enable
 *
 * @param pCmp the CMP instance to use
 * @param bEnable enable/disable flag
 */
LOCAL_INLINE void Icu_CMP_HWA_SetEnCmpOutPinEnable(CMP_Type *const pCmp, uint8 bEnable)
{
    uint32 u32RegVal = pCmp->CCR1;
    pCmp->CCR1 = ((u32RegVal & (~(uint32)CMP_CCR1_CMPOUT_PEN_MASK)) | CMP_CCR1_CMPOUT_PEN(bEnable));
}

/**
 * @brief set CMPOUT_WIN level, when window is closed
 *
 * @param pCmp the CMP instance to use
 * @param eType CMPOUT_WIN level type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetCmpOutWinLevel(CMP_Type *const pCmp, Icu_CmpOutWinLevelType eType)
{
    uint32 u32RegVal = pCmp->CCR1;
    pCmp->CCR1       = ((u32RegVal & (~(uint32)CMP_CCR1_CMPOUT_WIN_OWEN_MASK)) |
                  CMP_CCR1_CMPOUT_WIN_OWEN(eType));
}

/**
 * @brief set CMPOUT_WIN level in user-define mode, when window is closed
 *
 * @param pCmp the CMP instance to use
 * @param eType user-define CMPOUT_WIN level type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetCmpOutWin(CMP_Type *const pCmp, Icu_CmpOutWinUserDefType eType)
{
    uint32 u32RegVal = pCmp->CCR1;
    pCmp->CCR1       = ((u32RegVal & (~(uint32)CMP_CCR1_CMPOUT_WIN_OW_MASK)) |
                  CMP_CCR1_CMPOUT_WIN_OW(eType));
}

/**
 * @brief set invert the WINDOW/SAMPLE signal enable or not
 *
 * @param pCmp the CMP instance to use
 * @param eType invert the signal.
 */
LOCAL_INLINE void ICU_CMP_HWA_SetEnWinSampleInvert(CMP_Type *const pCmp, Icu_CmpWinInvType eType)
{
    uint32 u32RegVal = pCmp->CCR1;
    pCmp->CCR1       = ((u32RegVal & (~(uint32)CMP_CCR1_WIN_INV_MASK)) | CMP_CCR1_WIN_INV(eType));
}

/**
 * @brief WINDOW signal can or not be closed by CMPO event when window mode
 *
 * @param pCmp the CMP instance to use
 * @param eType Close/Open window
 */
LOCAL_INLINE void ICU_CMP_HWA_SetEnEventCloseWin(CMP_Type *const pCmp, Icu_CmpWinCloseType eType)
{
    uint32 u32RegVal = pCmp->CCR1;
    pCmp->CCR1       = ((u32RegVal & (~(uint32)CMP_CCR1_WIN_CLS_MASK)) | CMP_CCR1_WIN_CLS(eType));
}

/**
 * @brief set which CMPO event causes window close,user should enable CMPO can close window first.
 *
 * @param pCmp the CMP instance to use
 * @param eType CMPO event type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetEventCloseWin(CMP_Type *const pCmp, ICU_CmpCloseWinEventType eType)
{
    uint32 u32RegVal = pCmp->CCR1;
    pCmp->CCR1       = ((u32RegVal & (~(uint32)CMP_CCR1_EVT_SEL_MASK)) | CMP_CCR1_EVT_SEL(eType));
}

/**
 * @brief set CMP power mode select
 *
 * @param pCmp the CMP instance to use
 * @param eMod CMP power mode
 */
LOCAL_INLINE void ICU_CMP_HWA_SetSpeedMod(CMP_Type *const pCmp, ICU_CmpSpeedModSelType eMod)
{
    uint32 u32RegVal = pCmp->CCR2;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_CCR2 Register is clear
     * the HPMD Register */
    pCmp->CCR2 = ((u32RegVal & (~(uint32)CMP_CCR2_HPMD_MASK)) | CMP_CCR2_HPMD(eMod));
    /* PRQA S 2985 -- */
}

/**
 * @brief set Comparator hard block hysteresis control
 *
 * @param pCmp the CMP instance to use
 * @param eType CMP hysteresis control type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetHystCtrl(CMP_Type *const pCmp, ICU_CmpHystCtrlType eType)
{
    uint32 u32RegVal = pCmp->CCR2;
    pCmp->CCR2       = ((u32RegVal & (~(uint32)CMP_CCR2_HYSTCTR_MASK)) | CMP_CCR2_HYSTCTR(eType));
}

/**
 * @brief set which input is selected for the positive mux
 *
 * @param pCmp the CMP instance to use
 * @param eType CMP positive mux type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetPSelMux(CMP_Type *const pCmp, Icu_CmpMuxSelType eType)
{
    uint32 u32RegVal = pCmp->CCR2;
    pCmp->CCR2       = ((u32RegVal & (~(uint32)CMP_CCR2_PSEL_MASK)) | CMP_CCR2_PSEL(eType));
}

/**
 * @brief set which input is selected for the negative mux
 *
 * @param pCmp the CMP instance to use
 * @param eType CMP negative mux type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetNSelMux(CMP_Type *const pCmp, Icu_CmpMuxSelType eType)
{
    uint32 u32RegVal = pCmp->CCR2;
    pCmp->CCR2       = ((u32RegVal & (~(uint32)CMP_CCR2_MSEL_MASK)) | CMP_CCR2_MSEL(eType));
}

/**
 * @brief set the input to the positive port of the comparator
 *
 * @param pCmp the CMP instance to use
 * @param eType CMP positive input source type(analog mux,dac)
 */
LOCAL_INLINE void ICU_CMP_HWA_SetINPSel(CMP_Type *const pCmp, Icu_CmpInSrcSelType eType)
{
    uint32 u32RegVal = pCmp->CCR2;
    pCmp->CCR2       = ((u32RegVal & (~(uint32)CMP_CCR2_INPSEL_MASK)) | CMP_CCR2_INPSEL(eType));
}

/**
 * @brief set the input to the negative port of the comparator
 *
 * @param pCmp the CMP instance to use
 * @param eType CMP negative input source type(analog mux,dac)
 */
LOCAL_INLINE void ICU_CMP_HWA_SetINNSel(CMP_Type *const pCmp, Icu_CmpInSrcSelType eType)
{
    uint32 u32RegVal = pCmp->CCR2;
    pCmp->CCR2       = ((u32RegVal & (~(uint32)CMP_CCR2_INMSEL_MASK)) | CMP_CCR2_INMSEL(eType));
}

/**
 * @brief set CMP DAC enable
 *
 * @param pCmp the CMP instance to use
 * @param bEnable enable/disable flag
 */
LOCAL_INLINE void ICU_CMP_HWA_SetEnDac(CMP_Type *const pCmp, uint8 bEnable)
{
    uint32 u32RegVal = pCmp->DCR;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_DCR Register is clear
     * the DAC bit */
    pCmp->DCR = ((u32RegVal & (~(uint32)CMP_DCR_DAC_EN_MASK)) | CMP_DCR_DAC_EN(bEnable));
    /* PRQA S 2985 -- */
}

/**
 * @brief set DAC reference voltage source
 *
 * @param pCmp the CMP instance to use
 * @param eType CMP reference voltage source type
 */
LOCAL_INLINE void ICU_CMP_HWA_SetVinRefSel(CMP_Type *const pCmp, ICU_CmpDacVinRefSelType eType)
{
    uint32 u32RegVal = pCmp->DCR;
    pCmp->DCR        = ((u32RegVal & (~(uint32)CMP_DCR_VRSEL_MASK)) | CMP_DCR_VRSEL(eType));
}

/**
 * @brief set CMP Dac output
 *
 * @param pCmp the CMP instance to use
 * @param u8Data the Dac data
 * @note output = (VinRef / 256) * (u8Data + 1)
 */
LOCAL_INLINE void ICU_CMP_HWA_SetDacData(CMP_Type *const pCmp, uint8 u8Data)
{
    uint32 u32RegVal = pCmp->DCR;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_DCR Register is clear
     * the DAC Data bit */
    pCmp->DCR = ((u32RegVal & (~(uint32)CMP_DCR_DAC_DATA_MASK)) | CMP_DCR_DAC_DATA(u8Data));
    /* PRQA S 2985 -- */
}

/**
 * @brief set comparator rising interrupt enable
 *
 * @param pCmp the CMP instance to use
 * @param bEnable enable/disable flag
 */
LOCAL_INLINE void ICU_CMP_HWA_SetIntEn_Rising(CMP_Type *const pCmp, uint8 bEnable)
{
    uint32 u32RegVal = pCmp->IER;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_IER Register is clear
     * the IE bit */
    pCmp->IER = ((u32RegVal & (~(uint32)CMP_IER_CFR_IE_MASK)) | CMP_IER_CFR_IE(bEnable));
    /* PRQA S 2985 -- */
}

/**
 * @brief get comparator rising interrupt enable status
 *
 * @param pCmp the CMP instance to use
 * @return comparator rising interrupt status
 */
LOCAL_INLINE uint8 ICU_CMP_HWA_GetIntEn_Rising(const CMP_Type *const pCmp)
{
    uint8  RetStatus;
    uint32 u32RegVal = pCmp->IER;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_IER Register is get the
     * hardware bit */
    RetStatus = ((((u32RegVal & CMP_IER_CFR_IE_MASK) >> CMP_IER_CFR_IE_SHIFT) != 0U) ? 1u : 0u);
    /* PRQA S 2985 -- */
    return RetStatus;
}

/**
 * @brief set comparator falling interrupt enable
 *
 * @param pCmp the CMP instance to use
 * @param bEnable enable/disable flag
 */
LOCAL_INLINE void ICU_CMP_HWA_SetIntEn_Falling(CMP_Type *const pCmp, uint8 bEnable)
{
    uint32 u32RegVal = pCmp->IER;
    pCmp->IER        = ((u32RegVal & (~(uint32)CMP_IER_CFF_IE_MASK)) | CMP_IER_CFF_IE(bEnable));
}

/**
 * @brief get comparator falling interrupt enable status
 *
 * @param pCmp the CMP instance to use
 * @return comparator falling interrupt status
 */
LOCAL_INLINE uint8 ICU_CMP_HWA_GetIntEn_Falling(const CMP_Type *const pCmp)
{
    uint8  bRetStatus;
    uint32 u32RegVal = pCmp->IER;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_IER Register is get the
     * hardware bit */
    bRetStatus = ((((u32RegVal & CMP_IER_CFF_IE_MASK) >> CMP_IER_CFF_IE_SHIFT) != 0U) ? 1U : 0U);
    return bRetStatus;
    /* PRQA S 2985 -- */
}

/**
 * @brief get CMP output rising edge status
 *
 * @param pCmp the CMP instance to use
 * @return CMP rising edge status
 */
LOCAL_INLINE uint8 ICU_CMP_HWA_GetIntRisingFlag(const CMP_Type *const pCmp)
{
    uint8  bRetStatus;
    uint32 u32RegVal = pCmp->CSR;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_IER Register is get the
     * hardware bit */
    bRetStatus = ((((u32RegVal & CMP_CSR_CFR_MASK) >> CMP_CSR_CFR_SHIFT) != 0U) ? 1u : 0u);
    /* PRQA S 2985 -- */
    return bRetStatus;
}

/**
 * @brief get CMP output falling edge status
 *
 * @param pCmp the CMP instance to use
 * @return CMP falling edge status
 */
LOCAL_INLINE uint8 ICU_CMP_HWA_GetIntFallingFlag(const CMP_Type *const pCmp)
{
    uint8  bRetStatus;
    uint32 u32RegVal = pCmp->CSR;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_IER Register is get the
     * hardware bit */
    bRetStatus = ((((u32RegVal & CMP_CSR_CFF_MASK) >> CMP_CSR_CFF_SHIFT) != 0U) ? 1u : 0u);
    return bRetStatus;
    /* PRQA S 2985 -- */
}

/**
 * @brief clear rising interrupt flag
 *
 * @param pCmp the CMP instance to use
 */
LOCAL_INLINE void ICU_CMP_HWA_ClearIntRisingFlag(CMP_Type *const pCmp)
{
    pCmp->CSR = (uint32)CMP_CSR_CFR_MASK;
}

/**
 * @brief clear falling interrupt flag
 *
 * @param pCmp the CMP instance to use
 */
LOCAL_INLINE void ICU_CMP_HWA_ClearIntFallingFlag(CMP_Type *const pCmp)
{
    pCmp->CSR = (uint32)CMP_CSR_CFF_MASK;
}

/**
 * @brief get CMP filtered output
 *
 * @param pCmp the CMP instance to use
 * @return CMP filtered output
 */
LOCAL_INLINE uint32 ICU_CMP_HWA_GetCmpOut(const CMP_Type *const pCmp)
{
    uint32 u32RegVal = pCmp->CSR;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The operation of CMP_IER Register is get the
     * hardware bit */
    u32RegVal = (u32RegVal & CMP_CSR_CMPOUT_FILTER_MASK) >> CMP_CSR_CMPOUT_FILTER_SHIFT;
    /* PRQA S 2985 -- */
    return u32RegVal;
}

/**
 * @brief  Clear CMP CCR1 register
 * @param  pCmp CMP instance to use
 */
LOCAL_INLINE void ICU_CMP_HWA_ClearCCR1(CMP_Type *const pCmp)
{
    pCmp->CCR1 = 0u;
}

/**
 * @brief  Clear CMP CCR2 register
 * @param  pCmp CMP instance to use
 */
LOCAL_INLINE void ICU_CMP_HWA_ClearCCR2(CMP_Type *const pCmp)
{
    pCmp->CCR2 = 0u;
}

/**
 * @brief  Clear CMP DCR register
 * @param  pCmp CMP instance to use
 */
LOCAL_INLINE void ICU_CMP_HWA_ClearDCR(CMP_Type *const pCmp)
{
    pCmp->DCR = 0u;
}

/**
 * @brief This function config the cmp interrupt
 *
 * @param eCmpInstance      -CMP instance id
 * @param ePolarity         -input state
 */
ICU_TEXT_SECTION static void Icu_Cmp_ConfigInt(const Icu_CmpInstanceType    eCmpInstance,
                                               const ICU_CmpOutPolarityType ePolarity)
{
    CMP_Type *pCmpPtr = CMP_PTRS[eCmpInstance];
    switch (ePolarity)
    {
        case ICU_CMP_OUT_RISING_EDGE:
            ICU_CMP_HWA_SetIntEn_Falling(pCmpPtr, FALSE);
            ICU_CMP_HWA_SetIntEn_Rising(pCmpPtr, TRUE);
            break;
        case ICU_CMP_OUT_FALLING_EDGE:
            ICU_CMP_HWA_SetIntEn_Rising(pCmpPtr, FALSE);
            ICU_CMP_HWA_SetIntEn_Falling(pCmpPtr, TRUE);
            break;
        case ICU_CMP_OUT_BOTH_EDGE:
            ICU_CMP_HWA_SetIntEn_Rising(pCmpPtr, TRUE);
            ICU_CMP_HWA_SetIntEn_Falling(pCmpPtr, TRUE);
            break;
        default: /*default do nothing*/
            break;
    }
}

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize a CMP module
 *
 * @param pConfig   -Pointer to CMP module configuration structure
 *
 * @implements SWDESG_ICU_165
 */
ICU_TEXT_SECTION void Icu_Cmp_Init(const Icu_CmpModuleConfigType *pConfig)
{
    uint32 u32TReadycount = 0U;
    /* disable CMP module */
    CMP_Type *pCmpPtr = CMP_PTRS[pConfig->eCmpInstance];
    ICU_CMP_HWA_Disable(pCmpPtr);

    /* determine comparator function mode */
    ICU_CMP_HWA_SetComparatorMod(pCmpPtr, pConfig->eCmpMode, pConfig->u8Filtper, pConfig->eCmpFilterCnt);
    /* configure CMP module */
    /* CCR0 register */
    ICU_CMP_HWA_SetEnStopMod(pCmpPtr, pConfig->u8CmpStopen);
    ICU_CMP_HWA_SetDacEnableSrc(pCmpPtr, pConfig->sCmpDacConfig.eCmpDacEnSrc);
    /* CCR1 register */
    ICU_CMP_HWA_SetCmpOutInvert(pCmpPtr, pConfig->u8InvCmpOut);

    /*cmp Window config */
    /*if enable Window mode,sample signal is from trgsel */
    ICU_CMP_HWA_SetCmpOutWinLevel(pCmpPtr, pConfig->sCmpWinConfig.eCmpWinlevel);
    ICU_CMP_HWA_SetCmpOutWin(pCmpPtr, pConfig->sCmpWinConfig.eCmpWinUerdef);
    ICU_CMP_HWA_SetEnWinSampleInvert(pCmpPtr, pConfig->sCmpWinConfig.eCmpWinInvSample);
    ICU_CMP_HWA_SetEnEventCloseWin(pCmpPtr, pConfig->sCmpWinConfig.eCmpWinClose);
    ICU_CMP_HWA_SetEventCloseWin(pCmpPtr, pConfig->sCmpWinConfig.eCmpWinCloseEvent);
    /* CCR2 register */
    ICU_CMP_HWA_SetSpeedMod(pCmpPtr, pConfig->u8HighSpeedmode);
    ICU_CMP_HWA_SetHystCtrl(pCmpPtr, pConfig->eCmpHystCtrl);
    ICU_CMP_HWA_SetPSelMux(pCmpPtr, pConfig->sCmpInPconfig.eChannelMuxSel);
    ICU_CMP_HWA_SetNSelMux(pCmpPtr, pConfig->sCmpInNconfig.eChannelMuxSel);
    ICU_CMP_HWA_SetINPSel(pCmpPtr, pConfig->sCmpInPconfig.eInChannelSrc);
    ICU_CMP_HWA_SetINNSel(pCmpPtr, pConfig->sCmpInNconfig.eInChannelSrc);
    /* DCR register */
    if ((pConfig->sCmpDacConfig.eCmpDacEnSrc) == ICU_CMP_DACENABLE_DCR)
    {
        ICU_CMP_HWA_SetEnDac(pCmpPtr, pConfig->sCmpDacConfig.u8DcrDacEn);
    }
    ICU_CMP_HWA_SetVinRefSel(pCmpPtr, pConfig->sCmpDacConfig.eCmpDacRefSel);
    ICU_CMP_HWA_SetDacData(pCmpPtr, pConfig->sCmpDacConfig.u8DacData);
    ICU_CMP_HWA_Enable(pCmpPtr);
    while (u32TReadycount < (pConfig->u32WaitReadyTime))
    {
        u32TReadycount++;
    }
    /*cmpout pin*/
    ICU_CMP_HWA_SetCmpOutSel(pCmpPtr, pConfig->sCmpOutPinConfig.eCmpOutPinSel);
    Icu_CMP_HWA_SetEnCmpOutPinEnable(pCmpPtr, pConfig->sCmpOutPinConfig.bCmpOutPinEn);
}

/**
 * @brief De-initialize a CMP module
 *
 * @param eCmpInstance  -CMP instance id
 *
 * @implements SWDESG_ICU_166
 */
ICU_TEXT_SECTION void Icu_Cmp_DeInit(const Icu_CmpInstanceType eCmpInstance)
{
    CMP_Type *pCmpPtr = CMP_PTRS[eCmpInstance];
    /* disable CMP module */
    ICU_CMP_HWA_Disable(pCmpPtr);
    /* CCR0 register */
    ICU_CMP_HWA_SetComparatorMod(pCmpPtr, ICU_CMP_MOD_DISABLE, 0, ICU_CMP_FILTERCNT_0);
    ICU_CMP_HWA_SetEnStopMod(pCmpPtr, FALSE);
    ICU_CMP_HWA_SetDacEnableSrc(pCmpPtr, ICU_CMP_DACENABLE_DCR);
    /* CCR1 register */
    ICU_CMP_HWA_ClearCCR1(pCmpPtr);
    /* CCR2 register */
    ICU_CMP_HWA_ClearCCR2(pCmpPtr);
    /* DCR register */
    ICU_CMP_HWA_ClearDCR(pCmpPtr);
    /* IER register */
    ICU_CMP_HWA_SetIntEn_Rising(pCmpPtr, FALSE);
    ICU_CMP_HWA_SetIntEn_Falling(pCmpPtr, FALSE);
    /* CSR register */
    ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
    ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);
}

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set CMP to sleep mode
 *
 * @param eCmpInstance     -CMP instance id
 *
 * @implements SWDESG_ICU_172
 */
ICU_TEXT_SECTION void Icu_Cmp_SetSleepMode(const Icu_CmpInstanceType eCmpInstance)
{
    CMP_Type *pCmpPtr = CMP_PTRS[eCmpInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_40();
    ICU_CMP_HWA_SetIntEn_Rising(pCmpPtr, FALSE);
    ICU_CMP_HWA_SetIntEn_Falling(pCmpPtr, FALSE);
    /* clear flag */
    ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
    ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_40();
}

/**
 * @brief Set CMP to normal mode
 *
 * @param eCmpInstance     -CMP instance id
 *
 * @implements SWDESG_ICU_171
 */
ICU_TEXT_SECTION void Icu_Cmp_SetNormalMode(const Icu_CmpInstanceType eCmpInstance)
{
    CMP_Type *pCmpPtr = CMP_PTRS[eCmpInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_41();
    /* clear flag */
    ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
    ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);

    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_41();
}
#endif

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of Instance
 *
 * @param eCmpInstance      -Cmp instance Id
 * @param ePolarity         - input state
 * @return                  -state of the cmp Instance
 *
 * @implements SWDESG_ICU_167
 */
ICU_TEXT_SECTION boolean Icu_Cmp_GetInputState(const Icu_CmpInstanceType    eCmpInstance,
                                               const ICU_CmpOutPolarityType ePolarity)
{
    uint8     bState    = FALSE;
    CMP_Type *pCmpPtr   = CMP_PTRS[eCmpInstance];
    uint8     bFallFlag = ICU_CMP_HWA_GetIntFallingFlag(pCmpPtr);
    uint8     bRisFlag  = ICU_CMP_HWA_GetIntRisingFlag(pCmpPtr);
    uint8     bFallEn   = ICU_CMP_HWA_GetIntEn_Falling(pCmpPtr);
    uint8     bRisEn    = ICU_CMP_HWA_GetIntEn_Rising(pCmpPtr);
    if (ICU_CMP_OUT_BOTH_EDGE == ePolarity)
    {
        if (((0u != bFallFlag) && (FALSE == bFallEn)) || ((0u != bRisFlag) && (FALSE == bRisEn)))
        {
            SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_42();
            ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);
            ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
            SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_42();
            bState = TRUE;
        }
    }
    if ((0u != bFallFlag) && (FALSE == bFallEn) && (ICU_CMP_OUT_FALLING_EDGE == ePolarity))
    {
        // Falling
        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_42();
        ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);
        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_42();
        bState = TRUE;
    }
    if ((0u != bRisFlag) && (FALSE == bRisEn) && (ICU_CMP_OUT_RISING_EDGE == ePolarity))
    {
        // Rising
        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_42();
        ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_42();
        bState = TRUE;
    }
    return bState;
}
#endif

/**
 * @brief Set activation for cmp
 *
 * @param eCmpInstance     -Cmp instance Id
 * @param ePolarity     -The polarity of pulse mode
 *
 * @implements SWDESG_ICU_168
 */
ICU_TEXT_SECTION void Icu_Cmp_SetActivationCondition(const Icu_CmpInstanceType    eCmpInstance,
                                                     const ICU_CmpOutPolarityType ePolarity)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_43();
    Icu_Cmp_ConfigInt(eCmpInstance, ePolarity);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_43();
}

#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief Enable cmp edge detection
 *
 * @param eCmpInstance     -cmp instance Id
 * @param ePolarity     -The polarity of pulse mode
 *
 * @implements SWDESG_ICU_169
 */
ICU_TEXT_SECTION void Icu_Cmp_EnableEdgeDetection(const Icu_CmpInstanceType    eCmpInstance,
                                                  const ICU_CmpOutPolarityType ePolarity)
{
    CMP_Type *pCmpPtr = CMP_PTRS[eCmpInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_44();
    ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
    ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);
    Icu_Cmp_ConfigInt(eCmpInstance, ePolarity);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_44();
}

/**
 * @brief Disable cmp edge detection
 *
 * @param eCmpInstance     -cmp instance Id
 *
 * @implements SWDESG_ICU_170
 */
ICU_TEXT_SECTION void Icu_Cmp_DisableEdgeDetection(const Icu_CmpInstanceType eCmpInstance)
{
    CMP_Type *pCmpPtr = CMP_PTRS[eCmpInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_45();
    ICU_CMP_HWA_SetIntEn_Rising(pCmpPtr, FALSE);
    ICU_CMP_HWA_SetIntEn_Falling(pCmpPtr, FALSE);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_45();
}
#endif

#if (ICU_EDGE_COUNT_API == STD_ON)

/**
 * @brief Enable Cmp edge count
 *
 * @param eCmpInstance         -Cmp instance Id
 * @param ePolarity         -The polarity of pulse mode
 *
 * @implements SWDESG_ICU_174
 */
ICU_TEXT_SECTION void Icu_Cmp_EnableEdgeCount(const Icu_CmpInstanceType    eCmpInstance,
                                              const ICU_CmpOutPolarityType ePolarity)
{
    CMP_Type *pCmpPtr = CMP_PTRS[eCmpInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_46();
    ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
    ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);
    Icu_Cmp_ConfigInt(eCmpInstance, ePolarity);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_46();
}

/**
 * @brief Disable CMP edge count
 *
 * @param eCmpInstance         -CMP instance id
 *
 * @implements SWDESG_ICU_175
 */
ICU_TEXT_SECTION void Icu_Cmp_DisableEdgeCount(const Icu_CmpInstanceType eCmpInstance)
{
    CMP_Type *pCmpPtr = CMP_PTRS[eCmpInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_47();
    ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
    ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);
    ICU_CMP_HWA_SetIntEn_Rising(pCmpPtr, FALSE);
    ICU_CMP_HWA_SetIntEn_Falling(pCmpPtr, FALSE);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_47();
}

#endif

#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief This function returns the input level of the CMP channel
 *
 * @param eCmpInstance         -CMP instance id
 * @return                     -Input level of the channel
 *
 * @implementsSWDESG_ICU_173
 */
ICU_TEXT_SECTION uint8 Icu_Cmp_GetInputLevel(const Icu_CmpInstanceType eCmpInstance)
{
    uint32 u32Cmpout = ICU_CMP_HWA_GetCmpOut(CMP_PTRS[eCmpInstance]);
    return (((uint32)0u != u32Cmpout) ? 1u : 0u);
}
#endif

#if (defined ICU_CMP_ISR_USED)
/**
 * @brief cmp interrupt process
 *
 * @param eInstance     -cmp instance Id
 *
 * @implements SWS_Icu_00149,SWS_Icu_00150
 */
LOCAL_INLINE void Icu_Cmp_ProcessInterrupt(const Icu_CmpInstanceType eCmpInstance)
{
    /* SWS_Icu_00119 */
    CMP_Type *pCmpPtr       = CMP_PTRS[eCmpInstance];
    uint8     u8FallingMask = ICU_CMP_HWA_GetIntEn_Falling(pCmpPtr);
    u8FallingMask &= ICU_CMP_HWA_GetIntFallingFlag(pCmpPtr);
    uint8 u8RisingMask = ICU_CMP_HWA_GetIntEn_Rising(pCmpPtr);
    u8RisingMask &= ICU_CMP_HWA_GetIntRisingFlag(pCmpPtr);
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if ((Icu_pConfig[u8CoreID] != NULL_PTR) && (u8FallingMask != 0U))
#else
    if ((Icu_pConfig != NULL_PTR) && (u8FallingMask != 0U))
#endif
    {
        ICU_CMP_HWA_ClearIntFallingFlag(pCmpPtr);
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
        an inappropriate essential type. Reason: The relative register bits can be safely converted
        to the enumeration type */
        /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        /* PRQA S 4543,4521 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an inappropriate
         * essential type. Reason: No problem doing this conversion as the value is within the range
         * of the cast type.
         */
        /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        Icu_HW_CmpChannelIntrProcess(eCmpInstance);
        /* PRQA S 4394 -- */
        /* PRQA S 4543,4521 -- */
        /* PRQA S 4393 -- */
        /* PRQA S 4342 -- */
    }
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    else if ((Icu_pConfig[u8CoreID] != NULL_PTR) && (u8RisingMask != 0U))
#else
    else if ((Icu_pConfig != NULL_PTR) && (u8RisingMask != 0U))
#endif
    {
        ICU_CMP_HWA_ClearIntRisingFlag(pCmpPtr);
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
        an inappropriate essential type. Reason: The relative register bits can be safely converted
        to the enumeration type */
        /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        /* PRQA S 4543,4521 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an inappropriate
         * essential type. Reason: No problem doing this conversion as the value is within the range
         * of the cast type.*/
        /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        Icu_HW_CmpChannelIntrProcess(eCmpInstance);
        /* PRQA S 4394 -- */
        /* PRQA S 4543,4521 -- */
        /* PRQA S 4393 -- */
        /* PRQA S 4342 -- */
    }
    else
    {
        /*do nothing*/
    }
}

#if (defined ICU_CMP0_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_CMP0_ISR)
{
    Icu_Cmp_ProcessInterrupt(ICU_CMP0);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_CMP1_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_CMP1_ISR)
{
    Icu_Cmp_ProcessInterrupt(ICU_CMP1);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_CMP2_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_CMP2_ISR)
{
    Icu_Cmp_ProcessInterrupt(ICU_CMP2);
    EXIT_INTERRUPT();
}
#endif

#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#endif /*ICU_SUPPORT_CMP */
#ifdef __cplusplus
}
#endif
/** @} */
