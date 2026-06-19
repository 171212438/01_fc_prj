/**
*   @file    Gpt_Aontimer_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt -  Gpt header file.
*   @details GPT low level driver API.
*
*   @addtogroup GPT_Aontimer
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT_AONTIMER
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
*   0.1.0       22/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Optimization code
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/
#ifndef GPT_AONTIMER_REGOPS_H
#define GPT_AONTIMER_REGOPS_H
/* [FMR_Gpt_0002] */
#ifdef __cplusplus
extern "C" {
#endif
/*=================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Aontimer_Reg.h"
#include "Gpt_Aontimer_Types.h"
/*=================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*=================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*=================================================================================================
*                                             ENUMS
==================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/**
 * @brief Read AONTIMER compare value
 *
 * @param pAontimer Aontimer instance
 * @return AONTIMER compare value
 */
LOCAL_INLINE uint32 AONTIMER_HWA_ReadCompareValue(const AONTIMER_Type *pAontimer)
{
    return (uint32)(pAontimer->CMR);
}

/**
 * @brief Read AONTIMER module timer status
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE uint32 AONTIMER_HWA_ReadTimerStatus(const AONTIMER_Type *pAontimer)
{
    return (pAontimer->CSR & (uint32)AONTIMER_CSR_TEN_MASK);
}

/**
 * @brief set AONTIMER debug mode
 *
 * @param pAontimer Aontimer instance
 * @param u8Debugmode counter run in debug mode or not
 */
LOCAL_INLINE void AONTIMER_HWA_ConfigDebugMode( AONTIMER_Type *pAontimer,uint8 u8Debugmode)
{
	uint32 u32RegValue = pAontimer->CSR ;
	pAontimer->CSR = (u32RegValue & ~(uint32)AONTIMER_CSR_DBGEN_MASK) | AONTIMER_CSR_DBGEN(u8Debugmode);
}


/**
 * @brief Read AONTIMER current counter value
 *
 * @param pAontimer Aontimer instance
 * @return AONTIMER current counter value
 */
LOCAL_INLINE uint32 AONTIMER_HWA_ReadCounterCurrentValue(const AONTIMER_Type *pAontimer)
{
    return (uint32)(pAontimer->CNR);
}

/**
 * @brief Check interrupt enable and interrupt flag
 *
 * @param pAontimer Aontimer instance
 * @return uint32 interrupt enable and interrupt flag
 */
LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlagAndEnable(const AONTIMER_Type *pAontimer)
{
    return (uint32)(pAontimer->CSR & (AONTIMER_CSR_TIE_MASK | AONTIMER_CSR_TCF_MASK));
}

/**
 * @brief Check interrupt flag
 *
 * @param pAontimer Aontimer instance
 * @return AONTIMER interrupt flag
 */
LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntFlag(const AONTIMER_Type *pAontimer)
{
    return (uint32)((pAontimer->CSR & (AONTIMER_CSR_TCF_MASK)) >> AONTIMER_CSR_TCF_SHIFT);
}

/**
 * @brief Check AONTIMER interrupt enable state
 *
 * @param pAontimer Aontimer instance
 * @return AONTIMER interrupt enable state
 */
LOCAL_INLINE uint32 AONTIMER_HWA_CheckIntEnableState(const AONTIMER_Type *pAontimer)
{
    return (uint32)((pAontimer->CSR & (AONTIMER_CSR_TIE_MASK)) >> AONTIMER_CSR_TIE_SHIFT);
}

/**
 * @brief Set AONTIMER compare value
 *
 * @param pAontimer Aontimer instance
 * @param u32RegValue CMR register value
 */
LOCAL_INLINE void AONTIMER_HWA_SetModuleCompareValue(AONTIMER_Type *pAontimer, uint32 u32RegValue)
{
    pAontimer->CMR = u32RegValue;
}

/**
 * @brief Configure CNR register to reset on overflow
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_SetCounterResetOnOverflow(AONTIMER_Type *pAontimer)
{
    pAontimer->CSR |= (uint32)AONTIMER_CSR_TFC_MASK;
}

/**
 * @brief Set AONTIMER current counter value
 *
 * @param pAontimer Aontimer instance
 * @param u32RegValue CNR register value
 */
LOCAL_INLINE void AONTIMER_HWA_SetModuleCounterValue(AONTIMER_Type *pAontimer, uint32 u32RegValue)
{
    pAontimer->CNR = u32RegValue;
}

/**
 * @brief Enable AONTIMER module interrupt
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_EnableModuleInterrupt(AONTIMER_Type *pAontimer)
{
    pAontimer->CSR |= (uint32)AONTIMER_CSR_TIE_MASK;
}

/**
 * @brief Clear AONTIMER interrupt flags
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_ClearInterruptFlag(AONTIMER_Type *pAontimer)
{
    pAontimer->CSR |= (uint32)AONTIMER_CSR_TCF_MASK;
}

/**
 * @brief Configure AONTIMER module prescale
 *
 * @param pAontimer Aontimer instance
 * @param u32RegValue PSR register value
 */
LOCAL_INLINE void AONTIMER_HWA_ConfigModulePrescale(AONTIMER_Type *pAontimer, uint32 u32RegValue)
{
    pAontimer->PSR = u32RegValue;
}

/**
 * @brief Enable AONTIMER timer
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_EnableTimer(AONTIMER_Type *pAontimer)
{
    pAontimer->CSR |= (uint32)AONTIMER_CSR_TEN_MASK;
}

/**
 * @brief Set AONTIMER prescaler
 *
 * @param pAontimer Aontimer instance
 * @param ePrescalerValue Prescaler value,the range of the input value is :0~15, and the range of prescaler is :2^1 ~ 2^16.
 */
LOCAL_INLINE void AONTIMER_HWA_SetPrescale(AONTIMER_Type *pAontimer, Gpt_AontimerPrescalerType ePrescalerValue)
{
    uint32 u32RegValue = pAontimer->PSR;
    pAontimer->PSR = ((u32RegValue & ~(uint32)AONTIMER_PSR_PRESCALE_MASK) | AONTIMER_PSR_PRESCALE(ePrescalerValue));
}

/**
 * @brief If enable bypass mode, the timer will bypass the prescaler in timer counter mode or glitch filter in pulse mode
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_EnableBypassMode(AONTIMER_Type *pAontimer)
{
    pAontimer->PSR |= (uint32)AONTIMER_PSR_PBYP_MASK;
}

/**
 * @brief Select AONTIMER module clock source
 *
 * @param pAontimer Aontimer instance
 * @param eClk Aontimer clock source
 */
LOCAL_INLINE void AONTIMER_HWA_SelectModuleClkSrc(AONTIMER_Type *pAontimer, Gpt_AontimerClkSrcType eClk)
{
    uint32 u32RegValue = pAontimer->PSR;
    pAontimer->PSR = ((u32RegValue & ~(uint32)AONTIMER_PSR_PCS_MASK) | AONTIMER_PSR_PCS(eClk));
}

/**
 * @brief Disable AONTIMER module interrupt
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_DisableModuleInterrupt(AONTIMER_Type *pAontimer)
{
    pAontimer->CSR &= ~(uint32)AONTIMER_CSR_TIE_MASK;
}

/**
 * @brief Disable AONTIEMR module pulse mode
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_DisablePulseMode(AONTIMER_Type *pAontimer)
{
    pAontimer->CSR &= ~(uint32)AONTIMER_CSR_TMS_MASK;
}

/**
 * @brief Disable AONTIMER module timer
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_DisableTimer(AONTIMER_Type *pAontimer)
{
    pAontimer->CSR &= ~(uint32)AONTIMER_CSR_TEN_MASK;
}

/**
 * @brief If disable bypass mode, the timer will enable the prescaler in timer counter mode or glitch filter in pulse mode
 *
 * @param pAontimer Aontimer instance
 */
LOCAL_INLINE void AONTIMER_HWA_DisableBypassMode(AONTIMER_Type *pAontimer)
{
    pAontimer->PSR &= ~(uint32)AONTIMER_PSR_PBYP_MASK;
}

#ifdef __cplusplus
}
#endif


#endif /* #ifndef GPT_AONTIMER_REGOPS_H */
/**  @}*/
