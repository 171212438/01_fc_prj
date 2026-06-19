/**
*   @file    Mcu_Smc_RegOps.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Mcu - Mcu Smc header file.
*   @details Mcu Smc low level driver API.
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
#ifndef MCU_SMC_REGOPS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_SMC_REGOPS_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Mcu_Smc_Regs.h"

/**
 * @addtogroup Mcu_Smc_RegOps_h
 * @{
 */
/*==================== Local typedef ===============*/
/** @brief SMC stop mode control */
typedef enum
{
    SMC_STOP_MODE = 0U,
    SMC_STANDBY_MODE = 4U
} SMC_StopModeCtrlType;

/** @brief SMC standby mode */
typedef enum
{
    SMC_CFG_STANDBY_0 = 0U,
    SMC_CFG_STANDBY_1 = 1U,
    SMC_CFG_STANDBY_2 = 2U,
    SMC_CFG_STANDBY_3 = 3U
} SMC_StandbyModeType;

/*=============== Local inline function ===============*/

/**
 * @brief Set stop mode control
 *
 * @param pSmcReg SMC instance handler
 * @param eMode Stop mode control type
 */
LOCAL_INLINE void SMC_HWA_SetStopModeCtrl(SMC_Type *pSmcReg, SMC_StopModeCtrlType eMode)
{
    pSmcReg->PMCTRL = (uint32)eMode;
}

/**
 * @brief Set standby mode
 *
 * @param pSmcReg SMC instance handler
 * @param eMode Standby mode type
 */
LOCAL_INLINE void SMC_HWA_SetStandbyMode(SMC_Type *pSmcReg, SMC_StandbyModeType eMode)
{
    pSmcReg->STANDBY_CFG = (uint32)eMode;
}

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
/**
 * @brief Set PMPORT register
 * @param pSmcReg SMC instance handler
 * @param u32Data set value
 */
LOCAL_INLINE void SMC_HWA_SetPmportReg(SMC_Type *pSmcReg, uint32 u32Data)
{
    pSmcReg->PMPROT = u32Data;
}

/**
 * @brief Set IOLOCK register
 * @param pSmcReg SMC instance handler
 * @param u32Data set value
 */
LOCAL_INLINE void SMC_HWA_SetIolockReg(SMC_Type *pSmcReg, uint32 u32Data)
{
    pSmcReg->IOLOCK = u32Data;
}

/**
 * @brief Get IOLOCK register
 * @param pSmcReg SMC instance handler
 * @return uint32 register value
 */
LOCAL_INLINE uint32 SMC_HWA_GetIolockReg(SMC_Type *pSmcReg)
{
    return pSmcReg->IOLOCK;
}

/**
 * @brief Set RAMRET register
 * @param pSmcReg SMC instance handler
 * @param u32Data set value
 */
LOCAL_INLINE void SMC_HWA_SetRamretReg(SMC_Type *pSmcReg, uint32 u32Data)
{
    pSmcReg->RAMRET = u32Data;
}

/**
 * @brief Set PGCTRL register
 * @param pSmcReg SMC instance handler
 * @param u32Data set value
 */
LOCAL_INLINE void SMC_HWA_SetPgctrlReg(SMC_Type *pSmcReg, uint32 u32Data)
{
    pSmcReg->PGCTRL = u32Data;
}

/**
 * @brief Set PCU_CTRL register
 * @param pSmcReg SMC instance handler
 * @param u32Data set value
 */
LOCAL_INLINE void SMC_HWA_SetPcuctrlReg(SMC_Type *pSmcReg, uint32 u32Data)
{
    pSmcReg->PCU_CTRL = u32Data;
}

/**
 * @brief Set ISO_CTRL register
 * @param pSmcReg SMC instance handler
 * @param u32Data set value
 */
LOCAL_INLINE void SMC_HWA_SetIsoctrlReg(SMC_Type *pSmcReg, uint32 u32Data)
{
    pSmcReg->ISO_CTRL = u32Data;
}

/**
 * @brief Set PD1 PAD  hold follows software control
 * @param pSmcReg SMC instance handler
 */
LOCAL_INLINE void SMC_HWA_SetIsoPadHold(SMC_Type *pSmcReg)
{
    pSmcReg->ISO_CTRL = SMC_ISO_CTRL_PAD_ISO_HOLD(1U);
}

/**
 * @brief Set PD1 PAD  hold clear follows software control
 * @param pSmcReg SMC instance handler
 */
LOCAL_INLINE void SMC_HWA_SetIsoPadHoldClear(SMC_Type *pSmcReg)
{
    pSmcReg->ISO_CTRL = SMC_ISO_CTRL_PAD_ISO_HOLD_CLR(1U);
}

/**
 * @brief Get ISO_CTRL register
 * @param pSmcReg SMC instance handler
 * @return uint32 register value
 */
LOCAL_INLINE uint32 SMC_HWA_GetIsoctrlReg(SMC_Type *pSmcReg)
{
    return pSmcReg->ISO_CTRL;
}

/**
 * @brief Set CGM_WAKEUP register
 * @param pSmcReg SMC instance handler
 * @param u32Data set value
 */
LOCAL_INLINE void SMC_HWA_SetCgmwakeupReg(SMC_Type *pSmcReg, uint32 u32Data)
{
    pSmcReg->CGM_WAKEUP = u32Data;
}

/**
 * @brief Set CCM_LPCTRL register
 * @param pSmcReg SMC instance handler
 * @param u32Data set value
 */
LOCAL_INLINE void SMC_HWA_SetCcmlpctrlReg(SMC_Type *pSmcReg, uint32 u32Data)
{
    pSmcReg->CCM_LPCTRL = u32Data;
}

/**
 * @brief Enable SMC clock out
 *
 */
LOCAL_INLINE void SMC_HWA_EnableClockOut(SMC_Type *pSmcReg)
{
    pSmcReg->CLKOUT_CTRL |= (uint32)SMC_CLKOUT_CTRL_CLKOUT_EN_MASK;
}

/**
 * @brief Disable SMC clock out
 *
 */
LOCAL_INLINE void SMC_HWA_DisableClockOut(SMC_Type *pSmcReg)
{
    pSmcReg->CLKOUT_CTRL &= ~(uint32)SMC_CLKOUT_CTRL_CLKOUT_EN_MASK;
}

/**
 * @brief Set SMC_CLKOUT_CTRL register
 *
 * @param pSmcReg SMC instance handler
 * @param u32ClkOutCtrl set value
 */
LOCAL_INLINE void SMC_HWA_SetClkOutCtrl(SMC_Type *pSmcReg, uint32 u32ClkOutCtrl)
{
    pSmcReg->CLKOUT_CTRL = u32ClkOutCtrl;
}

/**
 * @brief Set SMC_AONCLKSEL register
 *
 * @param pSmcReg SMC instance handler
 * @param u32AonClkReg set value
 */
LOCAL_INLINE void SMC_HWA_SetAonClkReg(SMC_Type *pSmcReg, uint32 u32AonClkReg)
{
    pSmcReg->AONCLKSEL = u32AonClkReg;
}

/**
 * @brief Get AON32K clock select
 *
 * @param pSmcReg CSC instance handler
 * @return AON32KCLKSEL value
 */
LOCAL_INLINE uint8 SMC_HWA_GetAon32kClk(const SMC_Type *pSmcReg)
{
    return (uint8)((pSmcReg->AONCLKSEL & SMC_AONCLKSEL_AON32KCLKSEL_MASK) >> SMC_AONCLKSEL_AON32KCLKSEL_SHIFT);
}

/**
 * @brief Get RTC clock select
 *
 * @param pCsc0 SMC instance handler
 * @return RTC value
 */
LOCAL_INLINE uint8 SMC_HWA_GetRtcClk(const SMC_Type *pSmcReg)
{
    return (uint8)((pSmcReg->AONCLKSEL & SMC_AONCLKSEL_RTCCLKSEL_MASK) >> SMC_AONCLKSEL_RTCCLKSEL_SHIFT);
}

/**
 * @brief Get AON clock select
 *
 * @param pSmcReg SMC instance handler
 * @return RTC value
 */
LOCAL_INLINE uint8 SMC_HWA_GetAonClk(const SMC_Type *pSmcReg)
{
    return (uint8)((pSmcReg->AONCLKSEL & SMC_AONCLKSEL_AONCLKSEL_MASK) >> SMC_AONCLKSEL_AONCLKSEL_SHIFT);
}

/**
 * @brief Get SIRCDIV_32K clock status
 *
 * @param pSmcReg SMC instance handler
 * @return SIRCDIV32K clock status, TRUE is valid and FALSE is invalid
 */
LOCAL_INLINE boolean SMC_HWA_GetSircDiv32KClk(const SMC_Type *pSmcReg)
{
    return (boolean)((SMC_AONCLKSEL_SIRCDIV32KEN_MASK == (pSmcReg->AONCLKSEL & SMC_AONCLKSEL_SIRCDIV32KEN_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Get SIRC32_1K clock status
 *
 * @param pSmcReg SMC instance handler
 * @return SIRC32_1K clock status, TRUE is valid and FALSE is invalid
 */
LOCAL_INLINE boolean SMC_HWA_GetSirc32KDiv1KClk(const SMC_Type *pSmcReg)
{
    return (boolean)((SMC_AONCLKSEL_AON1KCLKEN_MASK == (pSmcReg->AONCLKSEL & SMC_AONCLKSEL_AON1KCLKEN_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Set low power wakeup PADx configure source
 *
* @param pSmcReg SMC instance handler
 * @param u8PadNum Low power PAD number
 * @param u8PadSrc Low power PAD source
 */
LOCAL_INLINE void SMC_HWA_SetLPWakeUpPadSrc(SMC_Type *pSmcReg, uint8 u8PadNum, uint8 u8PadSrc)
{
    pSmcReg->WAKEUP = ((pSmcReg->WAKEUP) & (~((uint32)SMC_WAKEUP_LP_WAKEUP_CFG0_MASK >> (4U * (uint32)u8PadNum)))) |
                      (SMC_WAKEUP_LP_WAKEUP_CFG0(u8PadSrc) >> (4U * (uint32)u8PadNum));
}

/**
 * @brief Set low power wakeup PADx configure source polarity
 *
 * @param pSmcReg SMC instance handler
 * @param u8PadNum Low power PAD number
 * @param u8PadPolarity Low power PAD polarity
 */
LOCAL_INLINE void SMC_HWA_SetLPWakeUpPadPol(SMC_Type *pSmcReg, uint8 u8PadNum, uint8 u8PadPolarity)
{
    pSmcReg->WAKEUP = ((pSmcReg->WAKEUP) & (~((uint32)SMC_WAKEUP_LP0_POL_MASK >> (uint32)u8PadNum))) |
                      (SMC_WAKEUP_LP0_POL(u8PadPolarity) >> (uint32)u8PadNum);
}

#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */



/** @}*/
#if defined(__cplusplus)
}
#endif
/** @}*/

#endif /* #ifndef _MCU_SMC_REGOPS_H_ */
