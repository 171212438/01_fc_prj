/**
 *   @file    Icu_Tpu.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - TPU driver source file.
 *   @details TPU source file, containing the variables and functions that are exported by the
 *            TPU driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : TPU
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
*   0.6.0       15/04/2023    QXW0070       N/A          Initial Version
==================================================================================================*/
/* PRQA S 2071,5087 EOF  #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location.
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
#include "Icu_Tpu.h"
#include "SchM_Icu.h"
#include "Tpu_E_Reg.h"
#include "Tpu_H_Reg.h"
#include "Scm_Reg.h"
#include "Scm_RegOps.h"
#if (ICU_SUPPORT_TPU == STD_ON)
/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
#define ICU_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Icu_MemMap.h"
/**
@brief overflow enable flag of Tpu channel
*/
ICU_DATA_SECTION static uint32 s_aTpuOverflowFlag[ICU_TPU_COUNT];
#define ICU_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Icu_MemMap.h"
#endif
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/* PRQA S 3684 ++ #Misra-C:2012 Rule-8.11 When an array with external linkage is declared, its size
 * should be explicitly specified. This rule applies to non-defining declarations only. It is
 * possible to define an array and specify its size implicitly by means of initialization. Reason:
 * The size of the object was implicitly specified when defining it*/
extern TPU_E_Type *const TPU_E_PTRS[];
extern TPU_H_Type *const TPU_H_PTRS[];
/* PRQA S 3684 -- */
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
LOCAL_INLINE void ICU_TPU_E_HWA_SetTCR1ClkControl(TPU_E_Type *const pTPUE, uint32 u32Mode);
LOCAL_INLINE void ICU_TPU_E_HWA_SetTCR1Prescaler(TPU_E_Type *const pTPUE, uint32 u32Prescaler);
LOCAL_INLINE void ICU_TPU_E_HWA_SetTCRClkFilter(TPU_E_Type *const pTPUE, uint32 u32Mode);
LOCAL_INLINE void ICU_TPU_E_HWA_SetChTBS1(TPU_E_Type *const             pTPUE,
                                          uint32                        u32Channel,
                                          ICU_TPUE_TimeBaseSelctionType eSelect);
LOCAL_INLINE void ICU_TPU_E_HWA_SetChTBS2(TPU_E_Type *const             pTPUE,
                                          uint32                        u32Channel,
                                          ICU_TPUE_TimeBaseSelctionType eSelect);
LOCAL_INLINE void ICU_TPU_E_HWA_SetHalt(TPU_E_Type *const pTPUE, uint32 u32Halt);
LOCAL_INLINE void ICU_TPU_E_HWA_SetFilterCtrl(TPU_E_Type *const pTPUE, uint32 u32Ctrl);
LOCAL_INLINE void ICU_TPU_E_HWA_SetFilterClkSrc(TPU_E_Type *const pTPUE, uint32 u32ClkSrc);
LOCAL_INLINE void ICU_TPU_E_HWA_SetFilterPrescaler(TPU_E_Type *const pTPUE, uint32 u32Prescaler);
LOCAL_INLINE void ICU_TPU_E_HWA_SetTCR1MaxCnt(TPU_E_Type *const pTPUE, uint32 u32MaxCnt);
LOCAL_INLINE void ICU_TPU_E_HWA_DisableTCR1OVFIRQ(TPU_E_Type *const pTPUE);
LOCAL_INLINE void ICU_TPU_E_HWA_ClearTCR1Overflow(TPU_E_Type *const pTPUE);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
LOCAL_INLINE void ICU_TPU_E_HWA_EnableTCR1OVFIRQ(TPU_E_Type *const pTPUE);
#if (defined ICU_TPU_ISR_USED)
LOCAL_INLINE uint32 ICU_TPU_E_HWA_GetT1MR(const TPU_E_Type *pTPUE, uint32 u32Mask);
#endif /* (defined ICU_TPU_ISR_USED) */
#endif /* (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON) */
#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
LOCAL_INLINE uint32 ICU_TPU_H_HWA_GetInputStatus(const TPU_H_Type *pTPUH);
#endif
LOCAL_INLINE uint32 ICU_TPU_H_HWA_GetRequestStatus(const TPU_H_Type *pTPUH);

LOCAL_INLINE void   ICU_TPU_E_HWA_SetIPAC1(TPU_E_Type *const pTPUE,
                                           uint32            u32Channel,
                                           ICU_TPUE_IPACType eType);
LOCAL_INLINE void   ICU_TPU_E_HWA_SetIPAC2(TPU_E_Type *const pTPUE,
                                           uint32            u32Channel,
                                           ICU_TPUE_IPACType eType);
LOCAL_INLINE void   ICU_TPU_E_HWA_DisableMatch(TPU_E_Type *const pTPUE, uint32 u32Channel);
LOCAL_INLINE void   ICU_TPU_E_HWA_EnableSrvReq(TPU_E_Type *const pTPUE, uint32 u32Channel);
LOCAL_INLINE void   ICU_TPU_E_HWA_EnableChEventInt(TPU_E_Type *const pTPUE, uint32 u32Channel);
LOCAL_INLINE void   ICU_TPU_E_HWA_DisableChEventInt(TPU_E_Type *const pTPUE, uint32 u32Channel);
LOCAL_INLINE uint32 ICU_TPU_E_HWA_ReadChEventIntEnable(const TPU_E_Type *pTPUE, uint32 u32Channel);
LOCAL_INLINE void   ICU_TPU_E_HWA_SetChFilter(TPU_E_Type *const pTPUE,
                                              uint32            u32Channel,
                                              uint32            u32Filter);
LOCAL_INLINE void   ICU_TPU_E_HWA_ClearTransDetectEvent(TPU_E_Type *const pTPUE, uint32 u32Channel);
LOCAL_INLINE void   ICU_TPU_E_HWA_SetPDCM(TPU_E_Type *const       pTPUE,
                                          uint32                  u32Channel,
                                          ICU_TPUE_PDCMEncodeType eMode);
#if (defined ICU_TPU_ISR_USED)
LOCAL_INLINE ICU_TPUE_PDCMEncodeType ICU_TPU_E_HWA_GetPDCM(const TPU_E_Type *pTPUE,
                                                           uint32            u32Channel);
LOCAL_INLINE void ICU_TPU_E_HWA_SelectCaptureValue(TPU_E_Type *const pTPUE, uint32 u32Channel);
#endif

#if (defined ICU_TPU_ISR_USED)
LOCAL_INLINE uint32 ICU_TPU_E_HWA_GetER1Val(const TPU_E_Type *pTPUE, uint32 u32Channel);
LOCAL_INLINE uint32 ICU_TPU_E_HWA_GetER2Val(const TPU_E_Type *pTPUE, uint32 u32Channel);
LOCAL_INLINE void   Icu_Tpu_IrqHandler(Icu_TpuInstanceType eTpuInstance, uint32 u32StartChannel);
#endif
#if (defined ICU_TPU_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_TPU_CH0_7_ISR);
ICU_TEXT_SECTION ISR(ICU_TPU_CH8_15_ISR);
ICU_TEXT_SECTION ISR(ICU_TPU_CH16_23_ISR);
ICU_TEXT_SECTION ISR(ICU_TPU_CH24_31_OVERFLOW_ISR);
#endif
LOCAL_INLINE void ICU_TPU_E_HWA_ClearChEventISRFlag(TPU_E_Type *const pTPUE, uint32 u32Channel);
ICU_TEXT_SECTION static void Icu_Tpu_ConfigChannel(TPU_E_Type *const       pTPUE,
                                                   const uint32            u32Channel,
                                                   const ICU_TPUE_IPACType eIpac1,
                                                   const ICU_TPUE_IPACType eIpac2);

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Set TCR1 Clock/Gate.
 *
 * @param pTPUE    -TPU_E instance
 * @param u32Mode  -TCR1 clock gate
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetTCR1ClkControl(TPU_E_Type *const pTPUE, uint32 u32Mode)
{
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCR1CTL_MASK) | TPU_E_TBR_CR_TCR1CTL(u32Mode);
}

/**
 * @brief Set TCR1 prescaler,
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Prescaler  -Prescaler
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetTCR1Prescaler(TPU_E_Type *const pTPUE, uint32 u32Prescaler)
{
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The or operation of
     * TPU_E_TBR_CR_TCR1P(u32Prescaler) is to configure the prescaler */
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCR1P_MASK) | TPU_E_TBR_CR_TCR1P(u32Prescaler);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set TCRCLK signal Filter Control.
 *
 * @param pTPUE    -TPU_E instance
 * @param u32Mode  -TCRCLK signal Filter Control
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetTCRClkFilter(TPU_E_Type *const pTPUE, uint32 u32Mode)
{
    pTPUE->TBR_CR = (pTPUE->TBR_CR & ~TPU_E_TBR_CR_TCRCF_MASK) | TPU_E_TBR_CR_TCRCF(u32Mode);
}

/**
 * @brief Set Time Base Selection of Part 1
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 * @param eSelect          -Time Base Selection
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetChTBS1(TPU_E_Type *const             pTPUE,
                                          uint32                        u32Channel,
                                          ICU_TPUE_TimeBaseSelctionType eSelect)
{
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The or operation of
     * TPU_E_CHn_CR2_TBS1(eSelect) is to select the time base */
    pTPUE->CH[u32Channel].CR2 = (pTPUE->CH[u32Channel].CR2 & ~TPU_E_CHn_CR2_TBS1_MASK) |
                                TPU_E_CHn_CR2_TBS1(eSelect);
    /* PRQA S 2985 -- */
}

/**
 * @brief Set Time Base Selection of Part 2
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 * @param eSelect          -Time Base Selection
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetChTBS2(TPU_E_Type *const             pTPUE,
                                          uint32                        u32Channel,
                                          ICU_TPUE_TimeBaseSelctionType eSelect)
{
    pTPUE->CH[u32Channel].CR2 = (pTPUE->CH[u32Channel].CR2 & ~TPU_E_CHn_CR2_TBS2_MASK) |
                                TPU_E_CHn_CR2_TBS2(eSelect);
}

/**
 * @brief Set whether to halt channel array/time base counter in stop mode
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Halt          -Halt options
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetHalt(TPU_E_Type *const pTPUE, uint32 u32Halt)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_HALT_MASK) | TPU_E_GCR_CR_HALT(u32Halt);
}

/**
 * @brief Set Channel Digital Filter Control
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Ctrl          -Filter Control
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetFilterCtrl(TPU_E_Type *const pTPUE, uint32 u32Ctrl)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_CDFC_MASK) | TPU_E_GCR_CR_CDFC(u32Ctrl);
}

/**
 * @brief Set Filter Clock Source Selection
 *
 * @param pTPUE            -TPU_E instance
 * @param u32ClkSrc      -Filter Clock Source Selection
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetFilterClkSrc(TPU_E_Type *const pTPUE, uint32 u32ClkSrc)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_FCSS_MASK) | TPU_E_GCR_CR_FCSS(u32ClkSrc);
}

/**
 * @brief Set Filter Prescaler Clock Control
 *
 * @param pTPUE                -TPU_E instance
 * @param u32Prescaler      -Filter Clock Source Selection
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetFilterPrescaler(TPU_E_Type *const pTPUE, uint32 u32Prescaler)
{
    pTPUE->GCR_CR = (pTPUE->GCR_CR & ~TPU_E_GCR_CR_FPSCK_MASK) | TPU_E_GCR_CR_FPSCK(u32Prescaler);
}

/**
 * @brief Set Maximum value of TCR1 counter in TCR1 updown mode
 *
 * @param pTPUE            -TPU_E instance
 * @param u32MaxCnt      -Maximum value
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetTCR1MaxCnt(TPU_E_Type *const pTPUE, uint32 u32MaxCnt)
{
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The or operation of
     * TPU_E_TBR_T1MR_MAX(u32MaxCnt) is to set the max cnt */
    pTPUE->TBR_T1MR = (pTPUE->TBR_T1MR & ~TPU_E_TBR_T1MR_MAX_MASK) | TPU_E_TBR_T1MR_MAX(u32MaxCnt);
    /* PRQA S 2985 -- */
}

/**
 * @brief Disable TCR1 Overflow IRQ
 *
 * @param pTPUE            -TPU_E instance
 */
LOCAL_INLINE void ICU_TPU_E_HWA_DisableTCR1OVFIRQ(TPU_E_Type *const pTPUE)
{
    pTPUE->TBR_T1MR &= ~TPU_E_TBR_T1MR_IRQ_EN_MASK;
}

/**
 * @brief Clear TCR1 Overflow Flag
 *
 * @param pTPUE            -TPU_E instance
 */
LOCAL_INLINE void ICU_TPU_E_HWA_ClearTCR1Overflow(TPU_E_Type *const pTPUE)
{
    pTPUE->TBR_T1MR |= TPU_E_TBR_T1MR_OVF_MASK;
}

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief Disable TCR1 Overflow IRQ
 *
 * @param pTPUE            -TPU_E instance
 */
LOCAL_INLINE void ICU_TPU_E_HWA_EnableTCR1OVFIRQ(TPU_E_Type *const pTPUE)
{
    pTPUE->TBR_T1MR |= TPU_E_TBR_T1MR_IRQ_EN_MASK;
}
#if (defined ICU_TPU_ISR_USED)
/**
 * @brief Get T1MR register value
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Mask        -Read bit mask
 */
LOCAL_INLINE uint32 ICU_TPU_E_HWA_GetT1MR(const TPU_E_Type *pTPUE, uint32 u32Mask)
{
    return pTPUE->TBR_T1MR & u32Mask;
}
#endif
#endif

#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Get the pin input status of the TPU instance
 *
 * @param pTPUH            -TPU_H instance
 */
LOCAL_INLINE uint32 ICU_TPU_H_HWA_GetInputStatus(const TPU_H_Type *pTPUH)
{
    return (uint32)pTPUH->GCR_VIR;
}
#endif
/**
 * @brief Get the service request status of the TPU instance
 *
 * @param pTPUH            -TPU_H instance
 */
LOCAL_INLINE uint32 ICU_TPU_H_HWA_GetRequestStatus(const TPU_H_Type *pTPUH)
{
    return pTPUH->GCR_VSR;
}

/**
 * @brief Set Input Pin Action Control of Part 1
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 * @param eType          -Pin Action
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetIPAC1(TPU_E_Type *const pTPUE,
                                         uint32            u32Channel,
                                         ICU_TPUE_IPACType eType)
{
    pTPUE->CH[u32Channel].CR2 = (pTPUE->CH[u32Channel].CR2 & ~TPU_E_CHn_CR2_IPAC1_MASK) |
                                TPU_E_CHn_CR2_IPAC1(eType);
}

/**
 * @brief Set Input Pin Action Control of Part 2
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 * @param eType          -Pin Action
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetIPAC2(TPU_E_Type *const pTPUE,
                                         uint32            u32Channel,
                                         ICU_TPUE_IPACType eType)
{
    pTPUE->CH[u32Channel].CR2 = (pTPUE->CH[u32Channel].CR2 & ~TPU_E_CHn_CR2_IPAC2_MASK) |
                                TPU_E_CHn_CR2_IPAC2(eType);
}

/**
 * @brief Disable match events
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE void ICU_TPU_E_HWA_DisableMatch(TPU_E_Type *const pTPUE, uint32 u32Channel)
{
    pTPUE->CH[u32Channel].ER1 &= ~TPU_E_CHn_ER1_MEF_MASK;
}

/**
 * @brief Enable service request
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE void ICU_TPU_E_HWA_EnableSrvReq(TPU_E_Type *const pTPUE, uint32 u32Channel)
{
    pTPUE->CH[u32Channel].MR = (pTPUE->CH[u32Channel].MR & ~TPU_E_CHn_MR_SRI_MASK) |
                               TPU_E_CHn_MR_SRIE_MASK;
}

/**
 * @brief Enable Channel Event Triggered Interrupt
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE void ICU_TPU_E_HWA_EnableChEventInt(TPU_E_Type *const pTPUE, uint32 u32Channel)
{
    pTPUE->CH[u32Channel].CR |= TPU_E_CHn_CR_CIE_MASK;
}

/**
 * @brief Disable Channel Event Triggered Interrupt
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE void ICU_TPU_E_HWA_DisableChEventInt(TPU_E_Type *const pTPUE, uint32 u32Channel)
{
    pTPUE->CH[u32Channel].CR &= ~TPU_E_CHn_CR_CIE_MASK;
}

/**
 * @brief Read Channel Event Triggered Interrupt enable
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE uint32 ICU_TPU_E_HWA_ReadChEventIntEnable(const TPU_E_Type *pTPUE, uint32 u32Channel)
{
    return pTPUE->CH[u32Channel].CR & TPU_E_CHn_CR_CIE_MASK;
}

/**
 * @brief Set Channel Filter Bypass
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 * @param u32Filter        -Filter Bypass
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetChFilter(TPU_E_Type *const pTPUE, uint32 u32Channel, uint32 u32Filter)
{
    pTPUE->CH[u32Channel].CR = (pTPUE->CH[u32Channel].CR & ~TPU_E_CHn_CR_CFB_MASK) |
                               TPU_E_CHn_CR_CFB(u32Filter);
}

/**
 * @brief Clear Transition detect events
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE void ICU_TPU_E_HWA_ClearTransDetectEvent(TPU_E_Type *const pTPUE, uint32 u32Channel)
{
    pTPUE->CH[u32Channel].ECR = TPU_E_CHn_ECR_TDL1_CLR_MASK | TPU_E_CHn_ECR_TDL2_CLR_MASK;
}

/**
 * @brief Set Predefined Channel Mode.
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 * @param eMode            -Channel mode
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SetPDCM(TPU_E_Type *const       pTPUE,
                                        uint32                  u32Channel,
                                        ICU_TPUE_PDCMEncodeType eMode)
{
    pTPUE->CH[u32Channel].MR = (pTPUE->CH[u32Channel].MR & ~TPU_E_CHn_MR_PDCM_MASK) |
                               TPU_E_CHn_MR_PDCM(eMode) | TPU_E_CHn_MR_PDME_MASK;
}
#if (defined ICU_TPU_ISR_USED)
/**
 * @brief Get Predefined Channel Mode.
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE ICU_TPUE_PDCMEncodeType ICU_TPU_E_HWA_GetPDCM(const TPU_E_Type *pTPUE, uint32 u32Channel)
{
    /* PRQA S 4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be cast
     * to a different essential type category or a wider essential type Reason: It is allowed to
     * cast the value */
    /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
       inappropriate essential type. Reason: The relative register bits can be safely converted to
       the enumeration type */
    return (ICU_TPUE_PDCMEncodeType)(((uint32)pTPUE->CH[u32Channel].MR & TPU_E_CHn_MR_PDCM_MASK) >>
                                     TPU_E_CHn_MR_PDCM_SHIFT);
    /* PRQA S 4342 -- */
    /* PRQA S 4394 -- */
}
/**
 * @brief Select Capture Value
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE void ICU_TPU_E_HWA_SelectCaptureValue(TPU_E_Type *const pTPUE, uint32 u32Channel)
{
    pTPUE->CH[u32Channel].ER1 = pTPUE->CH[u32Channel].ER1 & ~TPU_E_CHn_ER1_ERS_MASK;
}
#endif

#if (defined ICU_TPU_ISR_USED)
/**
 * @brief Get ER1 Value.
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE uint32 ICU_TPU_E_HWA_GetER1Val(const TPU_E_Type *pTPUE, uint32 u32Channel)
{
    uint32 u32TmpVal;
    u32TmpVal = (pTPUE->CH[u32Channel].ER1 & TPU_E_CHn_ER1_ER1_MASK) >> TPU_E_CHn_ER1_ER1_SHIFT;
    return u32TmpVal;
}

/**
 * @brief Get ER2 Value.
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE uint32 ICU_TPU_E_HWA_GetER2Val(const TPU_E_Type *pTPUE, uint32 u32Channel)
{
    uint32 u32TmpVal;
    u32TmpVal = (pTPUE->CH[u32Channel].ER2 & TPU_E_CHn_ER2_ER2_MASK) >> TPU_E_CHn_ER2_ER2_SHIFT;
    return u32TmpVal;
}
#endif

/**
 * @brief Clear Channel Event Trigger Interrupt Tunnel Status
 *
 * @param pTPUE            -TPU_E instance
 * @param u32Channel    -TPU channel
 */
LOCAL_INLINE void ICU_TPU_E_HWA_ClearChEventISRFlag(TPU_E_Type *const pTPUE, uint32 u32Channel)
{
    pTPUE->CH[u32Channel].SCR = TPU_E_CHn_SCR_CISC_MASK;
}

/**
 * @brief Configure the channel transition detect
 *
 * @param pTPUE                -TPU instance
 * @param u32Channel        -TPU channel
 * @param eIpac1            -Input Pin Action of Part 1
 * @param eIpac2            -Input Pin Action of Part 2
 */
ICU_TEXT_SECTION static void Icu_Tpu_ConfigChannel(TPU_E_Type *const       pTPUE,
                                                   const uint32            u32Channel,
                                                   const ICU_TPUE_IPACType eIpac1,
                                                   const ICU_TPUE_IPACType eIpac2)
{
    ICU_TPU_E_HWA_ClearChEventISRFlag(pTPUE, u32Channel);
    ICU_TPU_E_HWA_ClearTransDetectEvent(pTPUE, u32Channel);
    ICU_TPU_E_HWA_SetIPAC1(pTPUE, u32Channel, eIpac1);
    ICU_TPU_E_HWA_SetIPAC2(pTPUE, u32Channel, eIpac2);
    if (eIpac2 == ICU_TPUE_NO_TRANSITIONS)
    {
        ICU_TPU_E_HWA_SetPDCM(pTPUE, u32Channel, ICU_TPUE_SM_ST_E);
    }
    else
    {
        ICU_TPU_E_HWA_SetPDCM(pTPUE, u32Channel, ICU_TPUE_SM_DT);
    }
}

#if (defined ICU_TPU_ISR_USED)
/**
 * @brief TPU Channel interrupt handler
 *
 * @param eTpuInstance        -TPU instance
 * @param u32StartChannel   -Start channel of the handler
 *
 * @implements SWS_Icu_00149,SWS_Icu_00150
 */
LOCAL_INLINE void Icu_Tpu_IrqHandler(Icu_TpuInstanceType eTpuInstance, uint32 u32StartChannel)
{
    /* SWS_Icu_00119 */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if (Icu_pConfig[u8CoreID] != NULL_PTR)
#else
    if (Icu_pConfig != NULL_PTR)
#endif
    {
        uint32 u32Channel;
        /* PRQA S 3205 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type
         * declarations Reason: u32Rvalue will be used by Assemble instructions */
        volatile uint32 u32Rvalue;
        /* PRQA S 3205 -- */
        uint32            u32IntrFlag = ICU_TPU_H_HWA_GetRequestStatus(TPU_H_PTRS[eTpuInstance]);
        TPU_E_Type *const pTPUE       = TPU_E_PTRS[eTpuInstance];
        /* PRQA S 1891 ++ #Misra-C:2012: Rule-10.7 If a composite expression is used as one operand
           of an operator in which the usual arithmetic conversions are performed then the other
           operand shall not have wider essential type. Reason: It is safety to multiply the
           u32IntrFlag here */
        u32IntrFlag &= (0xFFu << u32StartChannel);
        /* PRQA S 1891 -- */
        while (u32IntrFlag != (uint32)0U)
        {
            /* PRQA S 1006 ++ #Misra-C:2012: Dir-4.2 All usage of assembly language should be
           documented. Reason: Here we use a Assemble instruction to reduce code execution time */
            ASM_KEYWORD volatile("rbit %0,%1" : "=r"(u32Rvalue) : "r"(u32IntrFlag));
            ASM_KEYWORD volatile("clz %0,%1" : "=r"(u32Channel) : "r"(u32Rvalue));
            /* PRQA S 1006 -- */
            ICU_TPU_E_HWA_ClearChEventISRFlag(pTPUE, u32Channel);
            ICU_TPU_E_HWA_ClearTransDetectEvent(pTPUE, u32Channel);
            ICU_TPU_E_HWA_SelectCaptureValue(pTPUE, u32Channel);
            uint32 u32Val1 = ICU_TPU_E_HWA_GetER1Val(pTPUE, u32Channel);
            uint32 u32Val2 = ICU_TPU_E_HWA_GetER2Val(pTPUE, u32Channel);
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
           to an inappropriate essential type. Reason: The relative register bits can be safely
           converted to the enumeration type */
            /* PRQA S 4393,4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            /* PRQA S 4543 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an inappropriate
             * essential type. Reason: No problem doing this conversion as the value is within the
             * range of the cast type.
             */
            if (ICU_TPU_E_HWA_GetPDCM(pTPUE, u32Channel) == ICU_TPUE_SM_ST_E)
            {
                Icu_HW_TpuSingleCaptureProcess(eTpuInstance, u32Channel, u32Val1);
            }
            else
            {
                Icu_HW_TpuDualCaptureProcess(eTpuInstance, u32Channel, u32Val1, u32Val2);
            }
            /* PRQA S 4543 -- */
            /* PRQA S 4393,4394 -- */
            /* PRQA S 4342 -- */
            /* PRQA S 1891 ++ #Misra-C:2012: Rule-10.7 If a composite expression is used as one
            operand of an operator in which the usual arithmetic conversions are performed then the
            other operand shall not have wider essential type. Reason: It is safety to multiply the
            u32IntrFlag here */
            u32IntrFlag &= ~(1u << u32Channel);
            /* PRQA S 1891 -- */
        }
    }
}

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief TPU overflow interrupt handler
 *
 * @param eTpuInstance        -TPU instance
 * @param u32StartChannel   -Start channel of the handler
 */
LOCAL_INLINE void Icu_Tpu_OverflowHandler(Icu_TpuInstanceType eTpuInstance)
{
    TPU_E_Type *const pTPUE = TPU_E_PTRS[eTpuInstance];
    if (0u != ICU_TPU_E_HWA_GetT1MR(pTPUE, TPU_E_TBR_T1MR_OVF_MASK))
    {
        uint32 u32Channel;
        ICU_TPU_E_HWA_ClearTCR1Overflow(pTPUE);
        for (u32Channel = 0u; u32Channel < ICU_TPU_CHANNELS_PER_MODULE; u32Channel++)
        {
            /* PRQA S 1891 ++ #Misra-C:2012: Rule-10.7 If a composite expression is used as one
            operand of an operator in which the usual arithmetic conversions are performed then the
            other operand shall not have wider essential type. Reason: It is safety to multiply the
            u32Channel here */
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
        to an inappropriate essential type. Reason: The relative register bits can be safely
        converted to the enumeration type */
            /* PRQA S 4394,4322 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            if ((s_aTpuOverflowFlag[eTpuInstance] & (1u << u32Channel)) != 0U)
            {
                Icu_HW_TpuOverflowIntrProcess((Icu_HwChannelType)eTpuInstance, u32Channel);
            }
            /* PRQA S 1891 -- */
            /* PRQA S 4342 -- */
            /* PRQA S 4394,4322 -- */
        }
    }
}
#endif
#endif

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize a TPU Module
 *
 * @param pConfig   -Pointer to TPU module configuration structure
 *
 * @implements SWDESG_ICU_200
 */
ICU_TEXT_SECTION void Icu_Tpu_Init(const Icu_TpuModuleConfigType *pConfig)
{
    uint32            u32Loop;
    TPU_E_Type *const pTPUE = TPU_E_PTRS[pConfig->eTpuInstance];
    if (pConfig->u16Prescaler < 256U)
    {
        ICU_TPU_E_HWA_SetTCR1ClkControl(pTPUE, (uint32)pConfig->eClockSource);
        ICU_TPU_E_HWA_SetTCR1Prescaler(pTPUE, (uint32)((uint32)(pConfig->u16Prescaler) - 1u));
    }
    else
    {
        ICU_TPU_E_HWA_SetTCR1ClkControl(pTPUE, (uint32)ICU_TPU_CLK_BUS_CLOCK_DIV2);
        ICU_TPU_E_HWA_SetTCR1Prescaler(pTPUE, (uint32)(((uint32)(pConfig->u16Prescaler) / 2u) - 1u));
    }
    ICU_TPU_E_HWA_SetTCRClkFilter(pTPUE,
                                  ((uint32)(pConfig->eTcrClkFilterClock)) |
                                      ((uint32)(pConfig->eTcrClkFilterMode)));
    ICU_TPU_E_HWA_SetHalt(pTPUE, (uint32)pConfig->eDebugMode);
    ICU_TPU_E_HWA_SetFilterCtrl(pTPUE, (uint32)pConfig->eFilterMode);
    ICU_TPU_E_HWA_SetTCR1MaxCnt(pTPUE, 0xFFFFFFU);
    if (pConfig->eFilterPrescaler == ICU_TPU_PRESCALER_DIV_256)
    {
        ICU_TPU_E_HWA_SetFilterClkSrc(pTPUE, 0U);
        ICU_TPU_E_HWA_SetFilterPrescaler(pTPUE, (uint32)ICU_TPU_PRESCALER_DIV_128);
    }
    else
    {
        ICU_TPU_E_HWA_SetFilterClkSrc(pTPUE, 1U);
        ICU_TPU_E_HWA_SetFilterPrescaler(pTPUE, (uint32)pConfig->eFilterPrescaler);
    }
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
    s_aTpuOverflowFlag[pConfig->eTpuInstance] = 0U;
#endif
    ICU_TPU_E_HWA_DisableTCR1OVFIRQ(pTPUE);
    ICU_TPU_E_HWA_ClearTCR1Overflow(pTPUE);

    for (u32Loop = 0; u32Loop < pConfig->u32ChannelCount; u32Loop++)
    {
        ICU_TPU_E_HWA_SetChFilter(pTPUE,
                                  (*pConfig->pTpuChannelsConfig)[u32Loop].u32HwChannel,
                                  (uint32)((*pConfig->pTpuChannelsConfig)[u32Loop].eFilter));
    }
    if (ICU_TPU_GTB_DISABLE == pConfig->eGtbEnable)
    {
        SCM_HWA_EnableGTBC(SCM_FTU_GTBC_TPU_GTBC_MASK);
    }
    else
    {
        SCM_HWA_DisableGTBC(SCM_FTU_GTBC_TPU_GTBC_MASK);
    }
}

#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize a TPU Module
 *
 * @param pConfig   -Pointer to TPU module configuration structure
 *
 * @implements SWDESG_ICU_201
 */
ICU_TEXT_SECTION void Icu_Tpu_DeInit(const Icu_TpuModuleConfigType *pConfig)
{
    ICU_TPU_E_HWA_DisableTCR1OVFIRQ(TPU_E_PTRS[pConfig->eTpuInstance]);
    SCM_HWA_DisableGTBC(SCM_FTU_GTBC_TPU_GTBC_MASK);
}
#endif

/**
 * @brief Initialize a Tpu channel
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 *
 * @implements SWDESG_ICU_202
 */
ICU_TEXT_SECTION void Icu_Tpu_ChannelInit(const Icu_TpuInstanceType eTpuInstance,
                                          const uint32              u32Channel)
{
    TPU_E_Type *const pTPUE = TPU_E_PTRS[eTpuInstance];
    ICU_TPU_E_HWA_SetChTBS1(pTPUE, u32Channel, ICU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR1_MATCHBASE_TCR1);
    ICU_TPU_E_HWA_SetChTBS2(pTPUE, u32Channel, ICU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR1_MATCHBASE_TCR1);
    ICU_TPU_E_HWA_DisableMatch(pTPUE, u32Channel);
    ICU_TPU_E_HWA_SetIPAC1(pTPUE, u32Channel, ICU_TPUE_NO_TRANSITIONS);
    ICU_TPU_E_HWA_SetIPAC2(pTPUE, u32Channel, ICU_TPUE_NO_TRANSITIONS);
    ICU_TPU_E_HWA_EnableSrvReq(pTPUE, u32Channel);
    ICU_TPU_E_HWA_DisableChEventInt(pTPUE, u32Channel);
}

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set a Tpu channel to sleep mode
 *
 * @param eTpuInstance  -Tpu instance Id
 * @param u32Channel    -Tpu channel index
 *
 * @implements SWDESG_ICU_203
 */
ICU_TEXT_SECTION void Icu_Tpu_SetSleepMode(const Icu_TpuInstanceType eTpuInstance,
                                           const uint32              u32Channel)
{
    TPU_E_Type *const pTPUE = TPU_E_PTRS[eTpuInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_71();
    ICU_TPU_E_HWA_SetIPAC1(pTPUE, u32Channel, ICU_TPUE_NO_TRANSITIONS);
    ICU_TPU_E_HWA_SetIPAC2(pTPUE, u32Channel, ICU_TPUE_NO_TRANSITIONS);

    ICU_TPU_E_HWA_ClearChEventISRFlag(pTPUE, u32Channel);
    ICU_TPU_E_HWA_ClearTransDetectEvent(pTPUE, u32Channel);
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
    s_aTpuOverflowFlag[eTpuInstance] &= ~(uint32)((uint32)1u << u32Channel);
    if ((uint32)0u == s_aTpuOverflowFlag[eTpuInstance])
    {
        ICU_TPU_E_HWA_DisableTCR1OVFIRQ(pTPUE);
    }
#endif
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_71();
}

/**
 * @brief Set a TPU channel to normal mode
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 * @param eIpac1               -Input Pin Action of Part 1
 * @param eIpac2               -Input Pin Action of Part 2
 *
 * @implements SWDESG_ICU_204
 */
ICU_TEXT_SECTION void Icu_Tpu_SetNormalMode(const Icu_TpuInstanceType eTpuInstance,
                                            const uint32              u32Channel,
                                            const ICU_TPUE_IPACType   eIpac1,
                                            const ICU_TPUE_IPACType   eIpac2)
{
    TPU_E_Type *const pTPUE = TPU_E_PTRS[eTpuInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_72();
    ICU_TPU_E_HWA_SetIPAC1(pTPUE, u32Channel, eIpac1);
    ICU_TPU_E_HWA_SetIPAC2(pTPUE, u32Channel, eIpac2);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_72();
}
#endif

/**
 * @brief Set activation for a TPU channel
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 * @param eIpac1               -Input Pin Action of Part 1
 * @param eIpac2               -Input Pin Action of Part 2
 *
 * @implements SWDESG_ICU_205
 */
ICU_TEXT_SECTION void Icu_Tpu_SetActivationCondition(const Icu_TpuInstanceType eTpuInstance,
                                                     const uint32              u32Channel,
                                                     const ICU_TPUE_IPACType   eIpac1,
                                                     const ICU_TPUE_IPACType   eIpac2)
{
    TPU_E_Type *const pTPUE = TPU_E_PTRS[eTpuInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_78();
    ICU_TPU_E_HWA_SetIPAC1(pTPUE, u32Channel, eIpac1);
    ICU_TPU_E_HWA_SetIPAC2(pTPUE, u32Channel, eIpac2);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_78();
}

#if (ICU_GET_INPUT_LEVEL_API == STD_ON) || (ICU_SIGNAL_MEASUREMENT_API == STD_ON)
/**
 * @brief Get the input level of TPU channel
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 * @return        Input level of the TPU channel
 *
 * @implements SWDESG_ICU_206
 */
ICU_TEXT_SECTION Icu_InputLevelType Icu_Tpu_GetInputLevel(const Icu_TpuInstanceType eTpuInstance,
                                                          const uint32              u32Channel)
{
    Icu_InputLevelType eInputLevel;
    uint32             u32InputStatus = ICU_TPU_H_HWA_GetInputStatus(TPU_H_PTRS[eTpuInstance]);
    if ((u32InputStatus & (uint32)((uint32)1u << u32Channel)) != (uint32)0u)
    {
        eInputLevel = ICU_INPUT_HIGH;
    }
    else
    {
        eInputLevel = ICU_INPUT_LOW;
    }
    return eInputLevel;
}
#endif

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of the TPU channel
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 * @return                  state of the channel
 *
 * @implements SWDESG_ICU_207
 */
ICU_TEXT_SECTION boolean Icu_Tpu_GetInputState(const Icu_TpuInstanceType eTpuInstance,
                                               const uint32              u32Channel)
{
    boolean           bState = FALSE;
    TPU_E_Type *const pTPUE  = TPU_E_PTRS[eTpuInstance];
    if (0u == ICU_TPU_E_HWA_ReadChEventIntEnable(pTPUE, u32Channel))
    {
        uint32 u32IntrFlag = ICU_TPU_H_HWA_GetRequestStatus(TPU_H_PTRS[eTpuInstance]);
        if ((uint32)0u != (u32IntrFlag & (uint32)((uint32)1u << u32Channel)))
        {
            bState = (boolean)TRUE;
            SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_79();
            ICU_TPU_E_HWA_ClearChEventISRFlag(pTPUE, u32Channel);
            ICU_TPU_E_HWA_ClearTransDetectEvent(pTPUE, u32Channel);
            SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_79();
        }
        else
        {
            /* Nothing for misra */
        }
    }
    else
    {
        /* Nothing for misra */
    }
    return bState;
}
#endif

/**
 * @brief Stop a TPU channel
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 *
 * @implements SWDESG_ICU_209
 */
ICU_TEXT_SECTION void Icu_Tpu_StopChannel(const Icu_TpuInstanceType eTpuInstance,
                                          const uint32              u32Channel)
{
    TPU_E_Type *const pTPUE = TPU_E_PTRS[eTpuInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_70();
    ICU_TPU_E_HWA_DisableChEventInt(pTPUE, u32Channel);

    ICU_TPU_E_HWA_SetIPAC1(pTPUE, u32Channel, ICU_TPUE_NO_TRANSITIONS);
    ICU_TPU_E_HWA_SetIPAC2(pTPUE, u32Channel, ICU_TPUE_NO_TRANSITIONS);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_70();
}

/**
 * @brief Start a TPU channel
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 * @param eIpac1               -Input Pin Action of Part 1
 * @param eIpac2               -Input Pin Action of Part 2
 *
 * @implements SWDESG_ICU_208
 */
ICU_TEXT_SECTION void Icu_Tpu_StartChannel(const Icu_TpuInstanceType eTpuInstance,
                                           const uint32              u32Channel,
                                           const ICU_TPUE_IPACType   eIpac1,
                                           const ICU_TPUE_IPACType   eIpac2)
{
    TPU_E_Type *const pTPUE = TPU_E_PTRS[eTpuInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_73();
    Icu_Tpu_ConfigChannel(pTPUE, u32Channel, eIpac1, eIpac2);
    ICU_TPU_E_HWA_EnableChEventInt(pTPUE, u32Channel);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_73();
}

#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
/**
 * @brief Enable the overflow interrupt of the channel
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 *
 * @implements SWDESG_ICU_212
 */
ICU_TEXT_SECTION void Icu_Tpu_EnableOverflow(const Icu_TpuInstanceType eTpuInstance,
                                             const uint32              u32Channel)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_75();
    s_aTpuOverflowFlag[eTpuInstance] |= (uint32)1u << u32Channel;
    ICU_TPU_E_HWA_EnableTCR1OVFIRQ(TPU_E_PTRS[eTpuInstance]);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_75();
}

/**
 * @brief Disable the overflow interrupt of the channel
 *
 * @param eTpuInstance      -TPU instance Id
 * @param u32Channel        -TPU channel index
 *
 * @implements SWDESG_ICU_213
 */
ICU_TEXT_SECTION void Icu_Tpu_DisableOverflow(const Icu_TpuInstanceType eTpuInstance,
                                              const uint32              u32Channel)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_76();
    s_aTpuOverflowFlag[eTpuInstance] &= ~(uint32)((uint32)1u << u32Channel);
    if ((uint32)0u == s_aTpuOverflowFlag[eTpuInstance])
    {
        ICU_TPU_E_HWA_DisableTCR1OVFIRQ(TPU_E_PTRS[eTpuInstance]);
    }
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_76();
}
#endif

#if (defined ICU_TPU_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_TPU_CH0_7_ISR)
{
    Icu_Tpu_IrqHandler(ICU_TPU, 0u);
    EXIT_INTERRUPT();
}
ICU_TEXT_SECTION ISR(ICU_TPU_CH8_15_ISR)
{
    Icu_Tpu_IrqHandler(ICU_TPU, 8u);
    EXIT_INTERRUPT();
}
ICU_TEXT_SECTION ISR(ICU_TPU_CH16_23_ISR)
{
    Icu_Tpu_IrqHandler(ICU_TPU, 16u);
    EXIT_INTERRUPT();
}
ICU_TEXT_SECTION ISR(ICU_TPU_CH24_31_OVERFLOW_ISR)
{
#if (ICU_OVERFLOW_NOTIFICATION_API == STD_ON) || (ICU_OVERFLOW_TIME_STATISTICS == STD_ON)
    Icu_Tpu_OverflowHandler(ICU_TPU);
#endif
    Icu_Tpu_IrqHandler(ICU_TPU, 24u);
    EXIT_INTERRUPT();
}
#endif
#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#endif
#ifdef __cplusplus
}
#endif
/** @} */
