/**
*   @file    Icu_Aontimer.c
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Aontimer driver source file.
*   @details Aontimer source file, containing the variables and functions that are exported by the
*            Aontimer driver.
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Aontimer
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
#include "Icu_Aontimer.h"
#include "SchM_Icu.h"
#include "Aontimer_Reg.h"

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define ICU_START_SEC_CONST_32
#include "Icu_MemMap.h"
#define ICU_STOP_SEC_CONST_32
#include "Icu_MemMap.h"
/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

LOCAL_INLINE void ICU_AONTIMER_HWA_ConfigModule(AONTIMER_Type *const pAontmr, uint32 u32RegValue);
LOCAL_INLINE void ICU_AONTIMER_HWA_ConfigModulePrescale(AONTIMER_Type *const pAontmr,
                                                        uint32               u32RegValue);
LOCAL_INLINE void ICU_AONTIMER_HWA_SelectClkSrcOnPulseMode(AONTIMER_Type *const        pAontmr,
                                                           Icu_AontimerPulseClkSrcType eClk);
LOCAL_INLINE void ICU_AONTIMER_HWA_EnablePulseMode(AONTIMER_Type *const pAontmr);
LOCAL_INLINE void ICU_AONTIMER_HWA_DisableBypassMode(AONTIMER_Type *const pAontmr);
LOCAL_INLINE void ICU_AONTIMER_HWA_EnableBypassMode(AONTIMER_Type *const pAontmr);
LOCAL_INLINE void ICU_AONTIMER_HWA_SetPrescale(AONTIMER_Type *const pAontmr, uint8 u8PrescalerValue);
LOCAL_INLINE void   ICU_AONTIMER_HWA_SelectModuleClkSrc(AONTIMER_Type *const   pAontmr,
                                                        Icu_AontimerClkSrcType eClk);
LOCAL_INLINE void   ICU_AONTIMER_HWA_SetModuleCompareValue(AONTIMER_Type *const pAontmr,
                                                           uint32               u32RegValue);
LOCAL_INLINE void   ICU_AONTIMER_HWA_ConfigModulePolarity(AONTIMER_Type *const          pAontmr,
                                                          Icu_AontimerPulsePolarityType ePol);
LOCAL_INLINE void   ICU_AONTIMER_HWA_DisableTimer(AONTIMER_Type *const pAontmr);
LOCAL_INLINE void   ICU_AONTIMER_HWA_DisableModuleInterrupt(AONTIMER_Type *const pAontmr);
LOCAL_INLINE void   ICU_AONTIMER_HWA_EnableModuleInterrupt(AONTIMER_Type *const pAontmr);
LOCAL_INLINE void   ICU_AONTIMER_HWA_EnableTimer(AONTIMER_Type *const pAontmr);
LOCAL_INLINE void   ICU_AONTIMER_HWA_ClearInterruptFlag(AONTIMER_Type *const pAontmr);
LOCAL_INLINE uint32 ICU_AONTIMER_HWA_GetInterruptEnable(const AONTIMER_Type *const pAontmr);
LOCAL_INLINE uint32 ICU_AONTIMER_HWA_GetInterruptFlag(const AONTIMER_Type *const pAontmr);
#if (ICU_EDGE_COUNT_API == STD_ON)
LOCAL_INLINE void   ICU_AONTIMER_HWA_SetModuleCounterValue(AONTIMER_Type *const pAontmr,
                                                           uint32               u32RegValue);
LOCAL_INLINE uint16 ICU_AONTIMER_HWA_GetModuleCounterValue(const AONTIMER_Type *const pAontmr);
#endif

#if (defined ICU_AONTIMER_ISR_USED)
LOCAL_INLINE void Icu_Aontimer_ProcessInterrupt(void);
ICU_TEXT_SECTION  ISR(ICU_AONTIMER_ISR);
#endif
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief Configure AONTIMER module
 * @param pAontmr       -Aontimer instance
 * @param u32RegValue   -CSR register value
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_ConfigModule(AONTIMER_Type *const pAontmr, uint32 u32RegValue)
{
    pAontmr->CSR = u32RegValue;
}

/**
 * @brief Configure AONTIMER module prescale
 * @param pAontmr       -Aontimer instance
 * @param u32RegValue   -PSR register value
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_ConfigModulePrescale(AONTIMER_Type *const pAontmr,
                                                        uint32               u32RegValue)
{
    pAontmr->PSR = u32RegValue;
}

/**
 * @brief Select AONTIMER module external clock source when timer configured to pulse mode
 * @param pAontmr   -Aontimer instance
 * @param eClk      -Input counter clock source
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_SelectClkSrcOnPulseMode(AONTIMER_Type *const        pAontmr,
                                                           Icu_AontimerPulseClkSrcType eClk)
{
    uint32 u32RegValue = pAontmr->CSR;
    pAontmr->CSR |= (u32RegValue & ~(uint32)AONTIMER_CSR_TPS_MASK) | AONTIMER_CSR_TPS(eClk);
}

/**
 * @brief Enable AONTIMER module pulse mode
 * @param pAontmr   -Aontimer instance
 *
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_EnablePulseMode(AONTIMER_Type *const pAontmr)
{
    pAontmr->CSR |= (uint32)AONTIMER_CSR_TMS_MASK;
}

/**
 * @brief If disable bypass mode, the timer will enable the prescaler in timer counter mode or
 * glitch filter in pulse mode
 * @param pAontmr   -Aontimer instance
 *
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_DisableBypassMode(AONTIMER_Type *const pAontmr)
{
    pAontmr->PSR &= ~(uint32)AONTIMER_PSR_PBYP_MASK;
}

/**
 * @brief If enable bypass mode, the timer will bypass the prescaler in timer counter mode or glitch
 * filter in pulse mode
 * @param pAontmr   -Aontimer instance
 *
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_EnableBypassMode(AONTIMER_Type *const pAontmr)
{
    pAontmr->PSR |= (uint32)AONTIMER_PSR_PBYP_MASK;
}

/**
 * @brief Set AONTIMER prescale
 * @param pAontmr            -Aontimer instance
 * @param u8PrescalerValue  Prescaler value,the range of the input value is :0~15, and the range of
 * prescaler is :2^1 ~ 2^16.
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_SetPrescale(AONTIMER_Type *const pAontmr, uint8 u8PrescalerValue)
{
    uint32 u32RegValue = pAontmr->PSR;
    pAontmr->PSR       = ((u32RegValue & ~(uint32)AONTIMER_PSR_PRESCALE_MASK) |
                    AONTIMER_PSR_PRESCALE(u8PrescalerValue));
}

/**
 * @brief Select AONTIMER mdoule clock source
 * @param pAontmr               -Aontimer instance
 * @param eClk                  -Aontimer clock source
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_SelectModuleClkSrc(AONTIMER_Type *const   pAontmr,
                                                      Icu_AontimerClkSrcType eClk)
{
    uint32 u32RegValue = pAontmr->PSR;
    /* PRQA S 2985 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the result
     * is always that of the left-hand operand. REASON: The bit shift of the PCS is 0. For the
     * portability of the code, we keep this operation*/
    pAontmr->PSR = ((u32RegValue & ~(uint32)AONTIMER_PSR_PCS_MASK) | AONTIMER_PSR_PCS(eClk));
    /* PRQA S 2985 -- */
}

/**
 * @brief Set AONTIMER compare value
 * @param pAontmr            -Aontimer instance
 * @param u32RegValue        -CMR register value
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_SetModuleCompareValue(AONTIMER_Type *const pAontmr,
                                                         uint32               u32RegValue)
{
    pAontmr->CMR = u32RegValue;
}

/**
 * @brief Configure AONTIMER module polarity. If ePol is 0:Pulse counter input source is
 * active-high, and the CNR increments on rising-edge. If ePol is 1:Pulse counter input source is
 * active-low, and the CNR increments on falling-edge.
 * @param pAontmr               -Aontimer instance
 * @param ePol                  -Polarity enumeration
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_ConfigModulePolarity(AONTIMER_Type *const          pAontmr,
                                                        Icu_AontimerPulsePolarityType ePol)
{
    if (AONTIMER_PulsePolarityType_HIGH == ePol)
    {
        pAontmr->CSR &= ~(uint32)AONTIMER_CSR_TPP_MASK;
    }
    else
    {
        pAontmr->CSR |= (uint32)AONTIMER_CSR_TPP_MASK;
    }
}

/**
 * @brief Disable AONTIMER module timer
 * @param pAontmr               -Aontimer instance
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_DisableTimer(AONTIMER_Type *const pAontmr)
{
    pAontmr->CSR &= ~(uint32)AONTIMER_CSR_TEN_MASK;
}

/**
 * @brief Disable AONTIMER module interrupt
 * @param pAontmr               -Aontimer instance
 *
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_DisableModuleInterrupt(AONTIMER_Type *const pAontmr)
{
    pAontmr->CSR &= ~(uint32)AONTIMER_CSR_TIE_MASK;
}

/**
 * @brief Enable AONTIMER module interrupt
 * @param pAontmr               -Aontimer instance
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_EnableModuleInterrupt(AONTIMER_Type *const pAontmr)
{
    pAontmr->CSR |= (uint32)AONTIMER_CSR_TIE_MASK;
}

/**
 * @brief Enable AONTIMER timer
 * @param pAontmr               -Aontimer instance
 *
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_EnableTimer(AONTIMER_Type *const pAontmr)
{
    pAontmr->CSR |= (uint32)AONTIMER_CSR_TEN_MASK;
}

/**
 * @brief Clean interrupt flag of Aontimer
 *
 * @param pAontmr           -Aontimer instance
 *
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_ClearInterruptFlag(AONTIMER_Type *const pAontmr)
{
    pAontmr->CSR |= (uint32)AONTIMER_CSR_TCF_MASK;
}

/**
 * @brief Get interrupt enable state of Aontimer
 *
 * @param pAontmr   -Aontimer instance
 * @return          interrupt enable state
 *
 * @implements FMR_Icu_0033
 */
LOCAL_INLINE uint32 ICU_AONTIMER_HWA_GetInterruptEnable(const AONTIMER_Type *const pAontmr)
{
    uint32 u32Value = pAontmr->CSR & (uint32)AONTIMER_CSR_TIE_MASK;
    return u32Value;
}

/**
 * @brief Get interrupt flag of Aontimer
 *
 * @param pAontmr           -Aontimer instance
 * @return                  Interrupt flag of Aontimer
 *
 * @implements FMR_Icu_0033
 */
LOCAL_INLINE uint32 ICU_AONTIMER_HWA_GetInterruptFlag(const AONTIMER_Type *const pAontmr)
{
    uint32 u32Value = pAontmr->CSR & (uint32)AONTIMER_CSR_TCF_MASK;
    return u32Value;
}

#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Get Module Enable
 *
 * @param pAontmr           -Aontimer instance
 * @return                  Enalbe mask
 *
 * @implements FMR_Icu_0033
 */
LOCAL_INLINE uint32 ICU_AONTIMER_HWA_GetModuleEnable(const AONTIMER_Type *const pAontmr)
{
    uint32 u32Value = pAontmr->CSR & ((uint32)AONTIMER_CSR_TEN_MASK);
    return u32Value;
}
/**
 * @brief Set AONTIMER current counter value
 * @param pAontmr           -Aontimer instance
 * @param u32RegValue       -CNR register value
 */
LOCAL_INLINE void ICU_AONTIMER_HWA_SetModuleCounterValue(AONTIMER_Type *const pAontmr,
                                                         uint32               u32RegValue)
{
    pAontmr->CNR = u32RegValue;
}

/**
 * @brief Get count value of Aontimer
 *
 * @param pAontmr           -Aontimer instance
 * @return                  Count value of Aontimer
 *
 * @implements FMR_Icu_0033
 */
LOCAL_INLINE uint16 ICU_AONTIMER_HWA_GetModuleCounterValue(const AONTIMER_Type *const pAontmr)
{
    uint16 u16RegValue = (uint16)(pAontmr->CNR & AONTIMER_CNR_COUNTER_MASK);
    return u16RegValue;
}
#endif
/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief Initialize an AONTIMER module
 *
 * @param pConfig -Pointer to AONTIMER module configuration structure
 *
 * @implements SWDESG_ICU_140
 */
ICU_TEXT_SECTION void Icu_Aontimer_Init(const Icu_AontimerModuleConfigType *pConfig)
{
    /* Disable the Aontimer, and clear control register. */
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[pConfig->eAontimerInstance];
    ICU_AONTIMER_HWA_DisableTimer(pAontimerPtr);
    ICU_AONTIMER_HWA_ConfigModule(pAontimerPtr, (uint32)0U);
    ICU_AONTIMER_HWA_ConfigModulePrescale(pAontimerPtr, (uint32)0U);
    /*Select Input Pin*/
    ICU_AONTIMER_HWA_SelectClkSrcOnPulseMode(pAontimerPtr, pConfig->ePinSelect);

    ICU_AONTIMER_HWA_EnablePulseMode(pAontimerPtr);
    if (ICU_AONTIMER_PRESCALER_BYPASS == pConfig->ePrescalerEnable)
    {
        ICU_AONTIMER_HWA_EnableBypassMode(pAontimerPtr);
    }
    else
    {
        ICU_AONTIMER_HWA_DisableBypassMode(pAontimerPtr);
    }
    ICU_AONTIMER_HWA_SetPrescale(pAontimerPtr, (uint8)pConfig->eGlitchFilter);
    ICU_AONTIMER_HWA_SelectModuleClkSrc(pAontimerPtr, pConfig->eClkSrc);
}

#if (ICU_DE_INIT_API == STD_ON)
/**
 * @brief De-initialize AONTIMER module
 *
 * @param eInstance -AONTIMER instance id
 *
 * @implements SWDESG_ICU_143
 */
ICU_TEXT_SECTION void Icu_Aontimer_DeInit(const Icu_AontimerInstanceType eInstance)
{
    /* Disable the Aontimer, and clear control register. */
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[eInstance];
    ICU_AONTIMER_HWA_DisableTimer(pAontimerPtr);
    ICU_AONTIMER_HWA_ConfigModule(pAontimerPtr, (uint32)0U);
    ICU_AONTIMER_HWA_ConfigModulePrescale(pAontimerPtr, (uint32)0U);
    ICU_AONTIMER_HWA_SetModuleCompareValue(pAontimerPtr, 0x0000FFFFu);
}

#endif

#if (ICU_EDGE_COUNT_API == STD_ON)
/**
 * @brief Get AONTIMER enable status
 *
 * @param eInstance         -AONTIMER instance id
 * @return                  -AONTIMER enable status
 *
 * @implements SWDESG_ICU_152
 */
ICU_TEXT_SECTION boolean Icu_Aontimer_IsEnable(const Icu_AontimerInstanceType eInstance)
{
    uint32 u32Value = ICU_AONTIMER_HWA_GetModuleEnable(AONTIMER_PTRS[eInstance]);
    return (0u != u32Value) ? (boolean)TRUE : (boolean)FALSE;
}

/**
 * @brief Get Aontimer edge numbers
 *
 * @param eInstance         -AONTIMER instance Id
 * @return                  Aontimer edge numbers
 *
 * @implements SWDESG_ICU_144
 */
ICU_TEXT_SECTION Icu_EdgeNumberType Icu_Aontimer_GetEdgeNumbers(
    const Icu_AontimerInstanceType eInstance)
{
    Icu_EdgeNumberType tEdgeNum;
    AONTIMER_Type     *pAontimerPtr = AONTIMER_PTRS[eInstance];
    /*On each read of the CNR, software must first write to the CNR with
      any value. This synchronizes and registers the current value of the
      CNR into a temporary register. */
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_31();
    ICU_AONTIMER_HWA_SetModuleCounterValue(pAontimerPtr, 1);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_31();
    tEdgeNum = (Icu_EdgeNumberType)ICU_AONTIMER_HWA_GetModuleCounterValue(pAontimerPtr);
    return tEdgeNum;
}

/**
 * @brief Reset Aontimer edge numbers
 *
 * @param eInstance          -AONTIMER instance Id
 *
 * @implements SWDESG_ICU_145
 */
ICU_TEXT_SECTION void Icu_Aontimer_ResetEdgeNumbers(const Icu_AontimerInstanceType eInstance)
{
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[eInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_37();
    /*reset to clear CNR*/
    ICU_AONTIMER_HWA_DisableTimer(pAontimerPtr);
    ICU_AONTIMER_HWA_EnableTimer(pAontimerPtr);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_37();
}

/**
 * @brief Enable Aontimer edge count
 *
 * @param eInstance         -AONTIMER instance Id
 * @param ePolarity         -The polarity of pulse mode
 *
 * @implements SWDESG_ICU_146
 */
ICU_TEXT_SECTION void Icu_Aontimer_EnableEdgeCount(const Icu_AontimerInstanceType      eInstance,
                                                   const Icu_AontimerPulsePolarityType ePolarity)
{
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[eInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_38();
    ICU_AONTIMER_HWA_DisableTimer(pAontimerPtr);
    ICU_AONTIMER_HWA_ClearInterruptFlag(pAontimerPtr);
    ICU_AONTIMER_HWA_SetModuleCompareValue(pAontimerPtr, 0xFFFF);
    ICU_AONTIMER_HWA_ConfigModulePolarity(pAontimerPtr, ePolarity);
    ICU_AONTIMER_HWA_EnableTimer(pAontimerPtr);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_38();
}

/**
 * @brief Disable Aontimer edge count
 *
 * @param eInstance         -AONTIMER instance Id
 *
 * @implements SWDESG_ICU_147
 */
ICU_TEXT_SECTION void Icu_Aontimer_DisableEdgeCount(const Icu_AontimerInstanceType eInstance)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_39();
    ICU_AONTIMER_HWA_DisableTimer(AONTIMER_PTRS[eInstance]);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_39();
}
#endif

#if (ICU_EDGE_DETECT_API == STD_ON)
/**
 * @brief Enable Aontimer edge detection
 *
 * @param eInstance     -AONTIMER instance Id
 * @param ePolarity     -The polarity of pulse mode
 *
 * @implements SWDESG_ICU_148
 */
ICU_TEXT_SECTION void Icu_Aontimer_EnableEdgeDetection(const Icu_AontimerInstanceType eInstance,
                                                       const Icu_AontimerPulsePolarityType ePolarity)
{
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[eInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_32();
    ICU_AONTIMER_HWA_DisableTimer(pAontimerPtr);
    ICU_AONTIMER_HWA_ClearInterruptFlag(pAontimerPtr);
    ICU_AONTIMER_HWA_ConfigModulePolarity(pAontimerPtr, ePolarity);
    ICU_AONTIMER_HWA_SetModuleCompareValue(pAontimerPtr, 0);
    ICU_AONTIMER_HWA_EnableModuleInterrupt(pAontimerPtr);
    ICU_AONTIMER_HWA_EnableTimer(pAontimerPtr);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_32();
}

/**
 * @brief Disable Aontimer edge detection
 *
 * @param eInstance     -AONTIMER instance Id
 *
 * @implements SWDESG_ICU_149
 */
ICU_TEXT_SECTION void Icu_Aontimer_DisableEdgeDetection(const Icu_AontimerInstanceType eInstance)
{
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[eInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_33();
    ICU_AONTIMER_HWA_DisableTimer(pAontimerPtr);
    ICU_AONTIMER_HWA_DisableModuleInterrupt(pAontimerPtr);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_33();
}
#endif

#if (ICU_SET_MODE_API == STD_ON)
/**
 * @brief Set Aontimer to normal mode
 *
 * @param eInstance     -AONTIMER instance Id
 * @param ePolarity     -The polarity of pulse mode
 *
 * @implements SWDESG_ICU_150
 */
ICU_TEXT_SECTION void Icu_Aontimer_SetNormalMode(const Icu_AontimerInstanceType      eInstance,
                                                 const Icu_AontimerPulsePolarityType ePolarity)
{
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[eInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_34();
    ICU_AONTIMER_HWA_ClearInterruptFlag(pAontimerPtr);
    ICU_AONTIMER_HWA_DisableTimer(pAontimerPtr);
    ICU_AONTIMER_HWA_ConfigModulePolarity(pAontimerPtr, ePolarity);
    ICU_AONTIMER_HWA_EnableTimer(pAontimerPtr);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_34();
}

/**
 * @brief Set Aontimer to sleep mode
 *
 * @param eInstance     -AONTIMER instance Id
 *
 * @implements SWDESG_ICU_151
 */
ICU_TEXT_SECTION void Icu_Aontimer_SetSleepMode(const Icu_AontimerInstanceType eInstance)
{
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[eInstance];
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_35();
    ICU_AONTIMER_HWA_ClearInterruptFlag(pAontimerPtr);
    ICU_AONTIMER_HWA_DisableModuleInterrupt(pAontimerPtr);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_35();
}
#endif

/**
 * @brief Set activation for Aontimer
 *
 * @param eInstance     -AONTIMER instance Id
 * @param ePolarity     -The polarity of pulse mode
 *
 * @implements SWDESG_ICU_141
 */
ICU_TEXT_SECTION void Icu_Aontimer_SetActivationCondition(const Icu_AontimerInstanceType eInstance,
                                                          const Icu_AontimerPulsePolarityType ePolarity)
{
    SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_36();
    ICU_AONTIMER_HWA_DisableTimer(AONTIMER_PTRS[eInstance]);
    ICU_AONTIMER_HWA_ConfigModulePolarity(AONTIMER_PTRS[eInstance], ePolarity);
    ICU_AONTIMER_HWA_EnableTimer(AONTIMER_PTRS[eInstance]);
    SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_36();
}

#if (ICU_GET_INPUT_STATE_API == STD_ON)
/**
 * @brief This function returns the state of Aontimer
 *
 * @param eInstance     -AONTIMER instance Id
 * @return              state of the Aontimer
 *
 * @implements SWDESG_ICU_142
 */
ICU_TEXT_SECTION boolean Icu_Aontimer_GetInputState(const Icu_AontimerInstanceType eInstance)
{
    boolean        bState       = FALSE;
    AONTIMER_Type *pAontimerPtr = AONTIMER_PTRS[eInstance];
    uint32         u32IntrFlag  = ICU_AONTIMER_HWA_GetInterruptFlag(pAontimerPtr);
    if ((0u == ICU_AONTIMER_HWA_GetInterruptEnable(pAontimerPtr)) && (0u != u32IntrFlag))
    {
        SchM_Enter_Icu_ICU_EXCLUSIVE_AREA_39();
        ICU_AONTIMER_HWA_ClearInterruptFlag(pAontimerPtr);
        SchM_Exit_Icu_ICU_EXCLUSIVE_AREA_39();
        bState = TRUE;
    }
    return bState;
}
#endif

#if (defined ICU_AONTIMER_ISR_USED)
/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * Reason: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive*/
LOCAL_INLINE void Icu_Aontimer_ProcessInterrupt(void)
{
    /* SWS_Icu_00119,SWS_Icu_00149,SWS_Icu_00150*/
    /* PRQA S 3415 ++ #Misra-C:2012 Icu_AontimerPrescalerEnableType The right hand operand of a
     * logical && or || operator shall not contain persistent side effects. Reason: That depends on
     * compile macro branch */
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if ((Icu_pConfig[u8CoreID] != NULL_PTR) &&
        ((ICU_AONTIMER_HWA_GetInterruptEnable(AONTIMER_PTRS[ICU_AONTIMER]) ==
          (uint32)AONTIMER_CSR_TIE_MASK) &&
         (ICU_AONTIMER_HWA_GetInterruptFlag(AONTIMER_PTRS[ICU_AONTIMER]) ==
          (uint32)AONTIMER_CSR_TCF_MASK)))
#else
    if ((Icu_pConfig != NULL_PTR) &&
        ((ICU_AONTIMER_HWA_GetInterruptEnable(AONTIMER_PTRS[ICU_AONTIMER]) ==
          (uint32)AONTIMER_CSR_TIE_MASK) &&
         (ICU_AONTIMER_HWA_GetInterruptFlag(AONTIMER_PTRS[ICU_AONTIMER]) ==
          (uint32)AONTIMER_CSR_TCF_MASK)))
#endif
    /* PRQA S 3415 -- */
    {
        ICU_AONTIMER_HWA_ClearInterruptFlag(AONTIMER_PTRS[ICU_AONTIMER]);
        /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to
        an inappropriate essential type. Reason: The relative register bits can be safely converted
        to the enumeration type */
        /* PRQA S 4393 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall not be
         * cast to a different essential type category or a wider essential type Reason: It is
         * allowed to cast the value */
        /* PRQA S 4543 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an inappropriate
         * essential type. Reason: No problem doing this conversion as the value is within the range
         * of the cast type.
         */
        Icu_HW_AontimerChannelIntrProcess(eInstance);
        /* PRQA S 4543 -- */
        /* PRQA S 4393 -- */
        /* PRQA S 4342 -- */
    }
    else
    {
        /*do nothing*/
    }
}
/* PRQA S 3006,1006 -- */

ICU_TEXT_SECTION ISR(ICU_AONTIMER_ISR)
{
    Icu_Aontimer_ProcessInterrupt();
    EXIT_INTERRUPT();
}
#endif
#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"
#ifdef __cplusplus
}
#endif
/** @} */
