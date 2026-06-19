/**
*   @file    Mcu_Csc_Regops.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Mcu Csc header file.
*   @details Mcu Csc low level driver API.
*
*   @addtogroup MCU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : MCU
*   PLATFORM             : Flagchip FC7xxx
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
*   0.1.0       15/07/2023    QXW0055       N/A          MCU_WKU Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Change version
*   0.4.0       20/11/2023    QXW0055       N/A          Fix amdc problems
*   0.5.0       20/12/2023    QXW0055       N/A          Add CMU disable delay
*   0.6.0       20/02/2024    QXW0055       N/A          Add FC7240 platform support
*   0.7.0       20/04/2024    QXW0055       N/A          Change version
*   0.8.0       08/08/2024    QXW0055       N/A          Add SOSC no wait and PMC&RGM disable API
*               15/11/2024    QXW0055       N/A          Add 8MDQ support
*   1.0.3       07/01/2025    QXW0055       N/A          Add platform include file and fix code
==================================================================================================*/
#ifndef MCU_CSC_REGOPS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_CSC_REGOPS_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

#include "Mcu_Csc_Regs.h"


#if (MCU_CFG_CSC0_INIT_API_SUPPORT == STD_ON)

/**
 * @brief Enable CSC0 clock out
 *
 */
LOCAL_INLINE void CSC0_HWA_EnableClockOut(CSC0_Type *pCsc0Reg)
{
    pCsc0Reg->CLKOUT_CTRL |= (uint32)CSC0_CLKOUT_CTRL_CLKOUT_EN_MASK;
}

/**
 * @brief Disable CSC0 clock out
 *
 */
LOCAL_INLINE void CSC0_HWA_DisableClockOut(CSC0_Type *pCsc0Reg)
{
    pCsc0Reg->CLKOUT_CTRL &= ~(uint32)CSC0_CLKOUT_CTRL_CLKOUT_EN_MASK;
}

/**
 * @brief Set CSC0_CLKOUT_CTRL register
 *
 * @param pCsc0Reg CSC0 instance handler
 * @param u32ClkOutCtrl set value
 */
LOCAL_INLINE void CSC0_HWA_SetClkOutCtrl(CSC0_Type *pCsc0Reg, uint32 u32ClkOutCtrl)
{
    pCsc0Reg->CLKOUT_CTRL = u32ClkOutCtrl;
}

/**
 * @brief Set CSC0_AONCLKSR register
 *
 * @param pCsc0Reg CSC0 instance handler
 * @param u32AonClkReg set value
 */
LOCAL_INLINE void CSC0_HWA_SetAonClkReg(CSC0_Type *pCsc0Reg, uint32 u32AonClkReg)
{
    pCsc0Reg->AONCLKSR = u32AonClkReg;
}

/**
 * @brief Get AON32K clock select
 *
 * @param pCsc0Reg CSC instance handler
 * @return AON32KCLKSEL value
 */
LOCAL_INLINE uint8 CSC0_HWA_GetAon32kClk(const CSC0_Type *pCsc0Reg)
{
    return (uint8)((pCsc0Reg->AONCLKSR & CSC0_AONCLKSR_AON32KCLKSEL_MASK) >> CSC0_AONCLKSR_AON32KCLKSEL_SHIFT);
}

/**
 * @brief Get RTC clock select
 *
 * @param pCsc0 CSC0 instance handler
 * @return RTC value
 */
LOCAL_INLINE uint8 CSC0_HWA_GetRtcClk(const CSC0_Type *pCsc0Reg)
{
    return (uint8)((pCsc0Reg->AONCLKSR & CSC0_AONCLKSR_RTCCLKSEL_MASK) >> CSC0_AONCLKSR_RTCCLKSEL_SHIFT);
}

/**
 * @brief Get AON clock select
 *
 * @param pCsc0Reg CSC0 instance handler
 * @return RTC value
 */
LOCAL_INLINE uint8 CSC0_HWA_GetAonClk(const CSC0_Type *pCsc0Reg)
{
    return (uint8)((pCsc0Reg->AONCLKSR & CSC0_AONCLKSR_AONCLKSEL_MASK) >> CSC0_AONCLKSR_AONCLKSEL_SHIFT);
}

/**
 * @brief Get SIRCDIV_32K clock status
 *
 * @param pCsc0Reg CSC0 instance handler
 * @return SIRCDIV32K clock status, TRUE is valid and FALSE is invalid
 */
LOCAL_INLINE boolean CSC0_HWA_GetSircDiv32KClk(const CSC0_Type *pCsc0Reg)
{
    return (boolean)((CSC0_AONCLKSR_SIRCDIV32KEN_MASK == (pCsc0Reg->AONCLKSR & CSC0_AONCLKSR_SIRCDIV32KEN_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Get SIRC32_1K clock status
 *
 * @param pCsc0Reg CSC0 instance handler
 * @return SIRC32_1K clock status, TRUE is valid and FALSE is invalid
 */
LOCAL_INLINE boolean CSC0_HWA_GetSirc32KDiv1KClk(const CSC0_Type *pCsc0Reg)
{
    return (boolean)((CSC0_AONCLKSR_AON1KCLKEN_MASK == (pCsc0Reg->AONCLKSR & CSC0_AONCLKSR_AON1KCLKEN_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Enable CSC0 CCM0 HClock
 *
 * @param pCsc0Reg CSC0 instance handler
 */
LOCAL_INLINE void CSC0_HWA_EnableHClock(CSC0_Type *pCsc0Reg)
{
    pCsc0Reg->CCM0_CFG |=  (uint32)CSC0_CCM0_CFG_CPU0_FORCE_HCLKEN_MASK;
}

#if (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)
/**
 * @brief Set low power wakeup PADx configure source
 *
* @param pCsc0Reg CSC0 instance handler
 * @param u8PadNum Low power PAD number
 * @param u8PadSrc Low power PAD source
 */
LOCAL_INLINE void CSC0_HWA_SetLPWakeUpPadSrc(CSC0_Type *pCsc0Reg, uint8 u8PadNum, uint8 u8PadSrc)
{
    pCsc0Reg->LP_WAKEUP = ((pCsc0Reg->LP_WAKEUP) & (~(CSC0_LP_WAKEUP_LP_WAKEUP_CFG0_MASK >> (4U * (uint32)u8PadNum)))) |
                          (CSC0_LP_WAKEUP_LP_WAKEUP_CFG0(u8PadSrc) >> (4U * (uint32)u8PadNum));
}

/**
 * @brief Set low power wakeup PADx configure source polarity
 *
 * @param pCsc0Reg CSC0 instance handler
 * @param u8PadNum Low power PAD number
 * @param u8PadPolarity Low power PAD polarity
 */
LOCAL_INLINE void CSC0_HWA_SetLPWakeUpPadPol(CSC0_Type *pCsc0Reg, uint8 u8PadNum, uint8 u8PadPolarity)
{
    pCsc0Reg->LP_WAKEUP = ((pCsc0Reg->LP_WAKEUP) & (~(CSC0_LP_WAKEUP_LP0_POL_MASK >> (uint32)u8PadNum))) |
                          (CSC0_LP_WAKEUP_LP0_POL(u8PadPolarity) >> (uint32)u8PadNum);
}
#endif /*(MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)  */


#endif /* #if (MCU_CFG_CSC0_INIT_API_SUPPORT == STD_ON) */

#if defined(__cplusplus)
}
#endif
/** @}*/

#endif /* #ifndef _MCU_SMISC_REGOPS_H_ */
