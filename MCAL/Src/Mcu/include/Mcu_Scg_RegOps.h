/**
 *   @file    Mcu_Scg_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mcu - Mcu Scg header file.
 *   @details Mcu Scg low level driver API.
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
#ifndef MCU_SCG_REGOPS_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
#define MCU_SCG_REGOPS_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C"
{
#endif

#include "Mcu_Scg_Regs.h"
/**
 * @addtogroup Mcu_Scg_RegOps
 * @{
 *
 */
/*=============== Local inline function   ===============*/
/*=============== PLL_LOLC Register interface ===============*/
#if (MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT == STD_ON)
/**
 * @brief Enable PLL0 loss of lock
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePLL0Lolc(SCG_Type *pScgReg)
{
    pScgReg->PLL_LOLC &= ~(uint32)SCG_PLL_LOLC_PLL0_LOLC_MASK;
}

/**
 * @brief Disable PLL0 loss of lock
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePLL0Lolc(SCG_Type *pScgReg)
{
    pScgReg->PLL_LOLC |= (uint32)SCG_PLL_LOLC_PLL0_LOLC_MASK;
}

/**
 * @brief Enable PLL1 loss of lock
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePLL1Lolc(SCG_Type *pScgReg)
{
    pScgReg->PLL_LOLC &= ~(uint32)SCG_PLL_LOLC_PLL1_LOLC_MASK;
}

/**
 * @brief Disable PLL1 loss of lock
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePLL1Lolc(SCG_Type *pScgReg)
{
    pScgReg->PLL_LOLC |= (uint32)SCG_PLL_LOLC_PLL1_LOLC_MASK;
}
#endif /* (MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT == STD_ON) */
/*=============== Sosc Register interface ===============*/
/* clang-format off */
/**
 * @brief Check SOSC valid
 *
 * @param pScgReg SCG instance handler
 * @return If SOSC is valid, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetSoscValid(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_SOSCCSR_VLD_MASK == (pScgReg->SOSCCSR & SCG_SOSCCSR_VLD_MASK)) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Unlock SOSC CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_UnlockSoscCsrReg(SCG_Type *pScgReg)
{
    pScgReg->SOSCCSR &= ~(uint32)(SCG_SOSCCSR_LK_MASK);
}

/**
 * @brief Lock SOSC CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_LockSoscCsrReg(SCG_Type *pScgReg)
{
    pScgReg->SOSCCSR |= (uint32)(SCG_SOSCCSR_LK_MASK);
}

/**
 * @brief Enable SOSC clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableSoscClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->SOSCCSR |= (uint32)(SCG_SOSCCSR_CM_MASK);
}

/**
 * @brief Disable SOSC clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableSoscClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->SOSCCSR &= ~(uint32)(SCG_SOSCCSR_CM_MASK);
}

/**
 * @brief Enable SOSC clock monitor Reset
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableSoscClockMonitorReset(SCG_Type *pScgReg)
{
    pScgReg->SOSCCSR |= (uint32)(SCG_SOSCCSR_CMRE_MASK);
}

/**
 * @brief Disable SOSC clock monitor Reset
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableSoscClockMonitorReset(SCG_Type *pScgReg)
{
    pScgReg->SOSCCSR &= ~(uint32)(SCG_SOSCCSR_CMRE_MASK);
}

/**
 * @brief Set SOSC enable
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableSosc(SCG_Type *pScgReg)
{
    pScgReg->SOSCCSR |= (uint32)SCG_SOSCCSR_EN_MASK;
}

/**
 * @brief Disable SOSC
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableSosc(SCG_Type *pScgReg)
{
    pScgReg->SOSCCSR &= ~(uint32)SCG_SOSCCSR_EN_MASK;
}

/**
 * @brief Set SOSC CFG register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CfgValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetSoscCfg(SCG_Type *pScgReg, uint32 u32CfgValue)
{
    pScgReg->SOSCCFG = u32CfgValue;
}

/**
 * @brief Set SOSC CCR register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CsrValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetSoscCsr(SCG_Type *pScgReg, uint32 u32CsrValue)
{
    pScgReg->SOSCCSR = u32CsrValue;
}

/**
 * @brief Get SOSC CSR register value
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE uint32 SCG_HWA_GetSoscCsr(const SCG_Type *pScgReg)
{
    return (uint32)pScgReg->SOSCCSR;
}

/**
 * @brief Check and clear SOSC clock error
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_CheckAndClearSoscClkErr(SCG_Type *pScgReg)
{
    boolean bFlag;
    if (SCG_SOSCCSR_ERR_MASK == (pScgReg->SOSCCSR & SCG_SOSCCSR_ERR_MASK))
    {
        /* Unlock SOSCCSR register */
        pScgReg->SOSCCSR &= (uint32)SCG_SOSCCSR_All_EXCEPT_ERR_AND_LK_MASK;
        /* Clear error flag and Lock SOSCCSR register */
        pScgReg->SOSCCSR |= (uint32)(SCG_SOSCCSR_ERR_MASK | SCG_SOSCCSR_LK_MASK);

        bFlag = (boolean)TRUE;
    }
    else
    {
        bFlag = (boolean)FALSE;
    }
    return bFlag;
}

/********* Fosc Register interface ************/
/* clang-format off */
/**
 * @brief Check FOSC valid
 *
 * @param pScgReg SCG instance handler
 * @return If FOSC is valid, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetFoscValid(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_FOSCCSR_VLD_MASK == (pScgReg->FOSCCSR & SCG_FOSCCSR_VLD_MASK)) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Unlock FOSC CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_UnlockFoscCsrReg(SCG_Type *pScgReg)
{
    pScgReg->FOSCCSR &= ~(uint32)(SCG_FOSCCSR_LK_MASK);
}

/**
 * @brief Lock FOSC CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_LockFoscCsrReg(SCG_Type *pScgReg)
{
    pScgReg->FOSCCSR |= (uint32)(SCG_FOSCCSR_LK_MASK);
}

/* clang-format off */
/**
 * @brief Check FOSC DIVH/M/L ACK to 1
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetFoscDivAck(const SCG_Type *pScgReg)
{
    return (boolean)(((SCG_FOSCDIV_DIVL_ACK_MASK | SCG_FOSCDIV_DIVM_ACK_MASK | SCG_FOSCDIV_DIVH_ACK_MASK) ==
                      (pScgReg->FOSCDIV & (SCG_FOSCDIV_DIVL_ACK_MASK | SCG_FOSCDIV_DIVM_ACK_MASK | SCG_FOSCDIV_DIVH_ACK_MASK))
                     )? TRUE : FALSE
                    );
}

/**
 * @brief Check FOSC DIVH/M/L ACK to 0
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetFoscDivNoAck(const SCG_Type *pScgReg)
{
    return (boolean)((0U == (pScgReg->FOSCDIV & (SCG_FOSCDIV_DIVL_ACK_MASK | SCG_FOSCDIV_DIVM_ACK_MASK | SCG_FOSCDIV_DIVH_ACK_MASK))) ? TRUE : FALSE);
}

/**
 * @brief Check FOSC DIVL valid
 *
 * @param pScgReg SCG instance handler
 * @return If FOSC DIVL is valid, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetFoscDivLValid(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_FOSCDIV_DIVL_ACK_MASK == (pScgReg->FIRCDIV & SCG_FOSCDIV_DIVL_ACK_MASK)) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Enable FOSC
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableFosc(SCG_Type *pScgReg)
{
    pScgReg->FOSCCSR |= SCG_FOSCCSR_EN_MASK;
}

/**
 * @brief Disable FOSC
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableFosc(SCG_Type *pScgReg)
{
    pScgReg->FOSCCSR &= ~SCG_FOSCCSR_EN_MASK;
}

/**
 * @brief Set FOSCCFG register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CfgValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetFoscCfg(SCG_Type *pScgReg, uint32 u32CfgValue)
{
    pScgReg->FOSCCFG = u32CfgValue;
}

/**
 * @brief Set FOSCCSR register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CsrValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetFoscCsr(SCG_Type *pScgReg, uint32 u32CsrValue)
{
    pScgReg->FOSCCSR = u32CsrValue;
}

/**
 * @brief Enable FOSC clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableFoscClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->FOSCCSR |= (uint32)(SCG_FOSCCSR_CM_MASK);
}

/**
 * @brief Disable FOSC clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableFoscClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->FOSCCSR &= ~(uint32)(SCG_FOSCCSR_CM_MASK);
}

/**
 * @brief Enable FOSC clock monitor Reset
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableFoscClockMonitorReset(SCG_Type *pScgReg)
{
    pScgReg->FOSCCSR |= (uint32)(SCG_FOSCCSR_CMRE_MASK);
}

/**
 * @brief Disable FOSC clock monitor Reset
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableFoscClockMonitorReset(SCG_Type *pScgReg)
{
    pScgReg->FOSCCSR &= ~(uint32)(SCG_FOSCCSR_CMRE_MASK);
}

/**
 * @brief Get FOSCCSR register value
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE uint32 SCG_HWA_GetFoscCsr(const SCG_Type *pScgReg)
{
    return (uint32)pScgReg->FOSCCSR;
}

/**
 * @brief enable FOSCDIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableFoscDiv(SCG_Type *pScgReg)
{
    pScgReg->FOSCDIV |= (uint32)(SCG_FOSCDIV_DIVL_EN_MASK | SCG_FOSCDIV_DIVM_EN_MASK |
                                 SCG_FOSCDIV_DIVH_EN_MASK);
}

/**
 * @brief disable FOSCDIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableFoscDiv(SCG_Type *pScgReg)
{
    pScgReg->FOSCDIV &= ~(uint32)(SCG_FOSCDIV_DIVL_EN_MASK | SCG_FOSCDIV_DIVM_EN_MASK |
                                  SCG_FOSCDIV_DIVH_EN_MASK);
}

/**
 * @brief Set FOSCDIV register value
 *
 * @param pScgReg SCG instance handler
 * @param u32DivValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetFoscDiv(SCG_Type *pScgReg, uint32 u32DivValue)
{
    pScgReg->FOSCDIV = u32DivValue;
}

/**
 * @brief Check and clear FOSC clock error
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_CheckAndClearFoscClkErr(SCG_Type *pScgReg)
{
    boolean bFlag;
    if (SCG_FOSCCSR_ERR_MASK == (pScgReg->FOSCCSR & SCG_FOSCCSR_ERR_MASK))
    {
        /* Unlock FOSCCSR register */
        pScgReg->FOSCCSR &= (uint32)SCG_FOSCCSR_All_EXCEPT_ERR_AND_LK_MASK;
        /* Clear error flag and Lock FOSCCSR register */
        pScgReg->FOSCCSR |= (uint32)(SCG_FOSCCSR_ERR_MASK | SCG_FOSCCSR_LK_MASK);

        bFlag = (boolean)TRUE;
    }
    else
    {
        bFlag = (boolean)FALSE;
    }
    return bFlag;
}

#if (MCU_CFG_SCG_SLEEP_WDG_SUPPORT == STD_ON)
/**
 * @brief disable Low Power sleep WDOG Register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DiasableSLPWDG(SCG_Type *pScgReg)
{
    pScgReg->SLPWDG &= ~(uint32)SCG_SLPWDG_EN_MASK;
}

/**
 * @brief Set Low Power Wakeup WDOG Register
 *
 * @param pScgReg SCG instance handler
 * @param u8MSBVal Most Significant value, if OSC is 40M
 *                 and FOSC not valid after 1.8ms wakeup,
 *                 the chip will reset and RGM register will
 *                 report clock error reset reason.
 */
LOCAL_INLINE void SCG_HWA_SetWKPWDG(SCG_Type *pScgReg, uint8 u8MSBVal)
{
    pScgReg->WKPWDG = (SCG_WKPWDG_MSB(u8MSBVal) | SCG_WKPWDG_EN_MASK);
}
#endif /* (MCU_CFG_SCG_SLEEP_WDG_SUPPORT == STD_ON) */

/*********  SIRC Register interface  ************/
/* clang-format off */
/**
 * @brief Check SIRC valid
 *
 * @param pScgReg SCG instance handler
 * @return If SIRC is valid, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetSircValid(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_SIRCCSR_VLD_MASK == (pScgReg->SIRCCSR & SCG_SIRCCSR_VLD_MASK)) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Get SIRCCSR register value
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE uint32 SCG_HWA_GetSircCsr(const SCG_Type *pScgReg)
{
    return (uint32)pScgReg->SIRCCSR;
}

/**
 * @brief Set SIRCCSR register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CsrValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetSircCsr(SCG_Type *pScgReg, uint32 u32CsrValue)
{
    pScgReg->SIRCCSR = u32CsrValue;
}

/**
 * @brief Unlock SIRC CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_UnlockSircCsrReg(SCG_Type *pScgReg)
{
    pScgReg->SIRCCSR &= ~(uint32)SCG_SIRCCSR_LK_MASK;
}

/**
 * @brief Lock SIRC CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_LockSircCsrReg(SCG_Type *pScgReg)
{
    pScgReg->SIRCCSR |= (uint32)SCG_SIRCCSR_LK_MASK;
}

/* clang-format off */
/**
 * @brief Check SIRC DIVH/M/L ACK to 1
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetSircDivAck(const SCG_Type *pScgReg)
{
    return (boolean)(((SCG_SIRCDIV_DIVL_ACK_MASK | SCG_SIRCDIV_DIVM_ACK_MASK | SCG_SIRCDIV_DIVH_ACK_MASK) ==
                      (pScgReg->SIRCDIV & (SCG_SIRCDIV_DIVL_ACK_MASK | SCG_SIRCDIV_DIVM_ACK_MASK | SCG_SIRCDIV_DIVH_ACK_MASK)))
                      ? TRUE : FALSE
                    );
}

/**
 * @brief Check SIRC DIVH/M/L ACK to 0
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetSircDivNoAck(const SCG_Type *pScgReg)
{
    return (boolean)((0U == (pScgReg->SIRCDIV & (SCG_SIRCDIV_DIVL_ACK_MASK | SCG_SIRCDIV_DIVM_ACK_MASK | SCG_SIRCDIV_DIVH_ACK_MASK))) ?TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Set SIRCDIV register value
 *
 * @param pScgReg SCG instance handler
 * @param u32DivValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetSircDiv(SCG_Type *pScgReg, uint32 u32DivValue)
{
    pScgReg->SIRCDIV = u32DivValue;
}

/**
 * @brief Disable SIRCDIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DiableSircDiv(SCG_Type *pScgReg)
{
    pScgReg->SIRCDIV &= ~(uint32)(SCG_SIRCDIV_DIVL_EN_MASK | SCG_SIRCDIV_DIVM_EN_MASK |
                                  SCG_SIRCDIV_DIVH_EN_MASK);
}

/**
 * @brief enable FIRCDIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableSircDiv(SCG_Type *pScgReg)
{
    pScgReg->SIRCDIV |= (uint32)(SCG_SIRCDIV_DIVL_EN_MASK | SCG_SIRCDIV_DIVM_EN_MASK |
                                 SCG_SIRCDIV_DIVH_EN_MASK);
}

/**
 * @brief Set SIRCTCFG register value for SIRC Trim configure.
 *
 * @param pScgReg SCG instance handler
 * @param u32TcfgValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetSircTcfg(SCG_Type *pScgReg, uint32 u32TcfgValue)
{
    pScgReg->SIRCTCFG = u32TcfgValue;
}

/**
 * @brief Check and clear SIRC clock error
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_CheckAndClearSircClkErr(SCG_Type *pScgReg)
{
    boolean bFlag;
    if (SCG_SIRCCSR_ERR_MASK == (pScgReg->SIRCCSR & SCG_SIRCCSR_ERR_MASK))
    {
        /* Unlock SIRCCSR register */
        pScgReg->SIRCCSR &= (uint32)SCG_SIRCCSR_All_EXCEPT_ERR_AND_LK_MASK;
        /* Clear error flag and Lock SIRCCSR register */
        pScgReg->SIRCCSR |= (uint32)(SCG_SIRCCSR_ERR_MASK | SCG_SIRCCSR_LK_MASK);

        bFlag = (boolean)TRUE;
    }
    else
    {
        bFlag = (boolean)FALSE;
    }
    return bFlag;
}
/*********  Sirc32k Register interface  ************/
/* clang-format off */
/**
 * @brief Check SIRC32K valid
 *
 * @param pScgReg SCG instance handler
 * @return If SIRC32k is valid, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetSirc32kValid(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_SIRC32KCSR_VLD_MASK == (pScgReg->SIRC32KCSR & SCG_SIRC32KCSR_VLD_MASK)) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Unlock SIRC32K CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_UnlockSirc32kCsrReg(SCG_Type *pScgReg)
{
    pScgReg->SIRC32KCSR &= ~(uint32)(SCG_SIRC32KCSR_LK_MASK);
}

/**
 * @brief Lock SIRC32K CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_LockSirc32kCsrReg(SCG_Type *pScgReg)
{
    pScgReg->SIRC32KCSR |= (uint32)(SCG_SIRC32KCSR_LK_MASK);
}

/**
 * @brief Set SIRC32KCSR register value for SIRC32K clock source configure.
 *
 * @param pScgReg SCG instance handler
 * @param u32CsrValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetSirc32kCsr(SCG_Type *pScgReg, uint32 u32CsrValue)
{
    pScgReg->SIRC32KCSR = u32CsrValue;
}

/**
 * @brief Disable SIRC32K
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableSirc32k(SCG_Type *pScgReg)
{
    pScgReg->SIRC32KCSR &= ~(uint32)(SCG_SIRC32KCSR_EN_MASK);
}

/********* Firc Register interface ************/
/* clang-format off */
/**
 * @brief Check FIRC valid
 *
 * @param pScgReg SCG instance handler
 * @return If FIRC is valid, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetFircValid(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_FIRCCSR_VLD_MASK == (pScgReg->FIRCCSR & SCG_FIRCCSR_VLD_MASK)) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Unlock FIRC CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_UnlockFircCsrReg(SCG_Type *pScgReg)
{
    pScgReg->FIRCCSR &= ~(uint32)(SCG_FIRCCSR_LK_MASK);
}

/**
 * @brief Lock FIRC CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_LockFircCsrReg(SCG_Type *pScgReg)
{
    pScgReg->FIRCCSR |= (uint32)(SCG_FIRCCSR_LK_MASK);
}

/* clang-format off */
/**
 * @brief Check FIRC DIVH/M/L ACK to 1
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetFircDivAck(const SCG_Type *pScgReg)
{
    return (boolean)(((SCG_FIRCDIV_DIVL_ACK_MASK | SCG_FIRCDIV_DIVM_ACK_MASK | SCG_FIRCDIV_DIVH_ACK_MASK) ==
                      (pScgReg->FIRCDIV & (SCG_FIRCDIV_DIVL_ACK_MASK | SCG_FIRCDIV_DIVM_ACK_MASK | SCG_FIRCDIV_DIVH_ACK_MASK)))
                      ? TRUE : FALSE
                    );
}

/**
 * @brief Check FIRC DIVH/M/L ACK to 0
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetFircDivNoAck(const SCG_Type *pScgReg)
{
    return (boolean)((0U == (pScgReg->FIRCDIV & (SCG_FIRCDIV_DIVL_ACK_MASK | SCG_FIRCDIV_DIVM_ACK_MASK | SCG_FIRCDIV_DIVH_ACK_MASK))) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Enable FIRC.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableFirc(SCG_Type *pScgReg)
{
    pScgReg->FIRCCSR |= SCG_FIRCCSR_EN_MASK;
}

/**
 * @brief Disable FIRC.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableFirc(SCG_Type *pScgReg)
{
    pScgReg->FIRCCSR &= ~SCG_FIRCCSR_EN_MASK;
}

/**
 * @brief Set FIRCCSR register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CsrValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetFircCsr(SCG_Type *pScgReg, uint32 u32CsrValue)
{
    pScgReg->FIRCCSR = u32CsrValue;
}

/**
 * @brief Get FIRC CSR register value.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE uint32 SCG_HWA_GetFircCsr(const SCG_Type *pScgReg)
{
    return (uint32)pScgReg->FIRCCSR;
}

/**
 * @brief Enable FIRC clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableFircClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->FIRCCSR |= (uint32)(SCG_FIRCCSR_CM_MASK);
}

/**
 * @brief Disable FIRC clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableFircClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->FIRCCSR &= ~(uint32)SCG_FIRCCSR_CM_MASK;
}

/**
 * @brief Set FIRCCFG register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CfgValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetFircCfg(SCG_Type *pScgReg, uint32 u32CfgValue)
{
    pScgReg->FIRCCFG = u32CfgValue;
}

/**
 * @brief Set FOSCDIV register value
 *
 * @param pScgReg SCG instance handler
 * @param u32DivValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetFircDiv(SCG_Type *pScgReg, uint32 u32DivValue)
{
    pScgReg->FIRCDIV = u32DivValue;
}

/**
 * @brief disable FIRCDIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisableFircDiv(SCG_Type *pScgReg)
{
    pScgReg->FIRCDIV &= ~(uint32)(SCG_FIRCDIV_DIVL_EN_MASK | SCG_FIRCDIV_DIVM_EN_MASK |
                                  SCG_FIRCDIV_DIVH_EN_MASK);
}

/**
 * @brief enable FIRCDIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnableFircDiv(SCG_Type *pScgReg)
{
    pScgReg->FIRCDIV |= (uint32)(SCG_FIRCDIV_DIVL_EN_MASK | SCG_FIRCDIV_DIVM_EN_MASK |
                                 SCG_FIRCDIV_DIVH_EN_MASK);
}

/**
 * @brief Set FIRCTCFG register value for FIRC clock trim configure.
 *
 * @param pScgReg SCG instance handler
 * @param u32TcfgValue configured register value.
 */
LOCAL_INLINE void SCG_HWA_SetFircTcfg(SCG_Type *pScgReg, uint32 u32TcfgValue)
{
    pScgReg->FIRCTCFG = u32TcfgValue;
}

/**
 * @brief Check and clear FIRC clock error
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_CheckAndClearFircClkErr(SCG_Type *pScgReg)
{
    boolean bFlag;
    if (SCG_FIRCCSR_ERR_MASK == (pScgReg->FIRCCSR & SCG_FIRCCSR_ERR_MASK))
    {
        /* Unlock FIRCCSR register */
        pScgReg->FIRCCSR &= (uint32)SCG_FIRCCSR_All_EXCEPT_ERR_AND_LK_MASK;
        /* Clear error flag and Lock FIRCCSR register */
        pScgReg->FIRCCSR |= (uint32)(SCG_FIRCCSR_ERR_MASK | SCG_FIRCCSR_LK_MASK);

        bFlag = (boolean)TRUE;
    }
    else
    {
        bFlag = (boolean)FALSE;
    }
    return bFlag;
}
/********* Pll0 Register interface ************/
/* clang-format off */
/**
 * @brief Check PLL0 enable status
 *
 * @param pScgReg SCG instance handler
 * @return If PLL0 is enable, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetPll0Enable(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_PLL0CSR_EN_MASK == (pScgReg->PLL0CSR & SCG_PLL0CSR_EN_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Check PLL0 valid
 *
 * @param pScgReg SCG instance handler
 * @return If PLL0 is valid, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetPll0Valid(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_PLL0CSR_VLD_MASK == (pScgReg->PLL0CSR & SCG_PLL0CSR_VLD_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Check PLL0 locked
 *
 * @param pScgReg SCG instance handler
 * @return If PLL0 is locked, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetPll0Locked(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_PLL0CSR_PLLLK_MASK == (pScgReg->PLL0CSR & SCG_PLL0CSR_PLLLK_MASK)) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Enable PLL0 clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll0ClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR |= (uint32)(SCG_PLL0CSR_CM_MASK);
}

/**
 * @brief Disable PLL0 clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll0ClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR &= ~(uint32)(SCG_PLL0CSR_CM_MASK);
}

/**
 * @brief Enable PLL0 clock monitor Reset
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll0ClockMonitorReset(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR |= (uint32)(SCG_PLL0CSR_CMRE_MASK);
}

/**
 * @brief Disable PLL0 clock monitor Reset
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll0ClockMonitorReset(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR &= ~(uint32)(SCG_PLL0CSR_CMRE_MASK);
}

/**
 * @brief Lock PLL0 CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_LockPll0CsrReg(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR |= (uint32)(SCG_PLL0CSR_LK_MASK);
}

/**
 * @brief Unlock PLL0 CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_UnlockPll0CsrReg(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR &= ~(uint32)(SCG_PLL0CSR_LK_MASK);
}

/* clang-format off */
/**
 * @brief Check PLL0 DIVH/M/L ACK to 1
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetPll0DivAck(const SCG_Type *pScgReg)
{
    return (boolean)(((SCG_PLL0DIV_DIVL_ACK_MASK | SCG_PLL0DIV_DIVM_ACK_MASK | SCG_PLL0DIV_DIVH_ACK_MASK) ==
                      (pScgReg->PLL0DIV & (SCG_PLL0DIV_DIVL_ACK_MASK | SCG_PLL0DIV_DIVM_ACK_MASK | SCG_PLL0DIV_DIVH_ACK_MASK)))
                      ? TRUE : FALSE
                    );
}

/**
 * @brief Check PLL0 DIVH/M/L ACK to 0
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetPll0DivNoAck(const SCG_Type *pScgReg)
{
    return (boolean)((0U == (pScgReg->PLL0DIV & (SCG_PLL0DIV_DIVL_ACK_MASK | SCG_PLL0DIV_DIVM_ACK_MASK | SCG_PLL0DIV_DIVH_ACK_MASK))) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Set PLL0CSR register value.
 *
 * @param pScgReg SCG instance handler
 * @param u32CsrValue configured register value.
 */
LOCAL_INLINE void SCG_HWA_SetPll0Csr(SCG_Type *pScgReg, uint32 u32CsrValue)
{
    pScgReg->PLL0CSR = u32CsrValue;
}

/**
 * @brief Get PLL0CSR register value.
 *
 * @param pScgReg SCG instance handler
 * @return uint32 register value.
 */
LOCAL_INLINE uint32 SCG_HWA_GetPll0Csr(SCG_Type *pScgReg)
{
    return pScgReg->PLL0CSR;
}

/**
 * @brief Disable PLL0.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll0(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR &= ~(uint32)SCG_PLL0CSR_EN_MASK;
}

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
/**
 * @brief Disable PLL0_CLK1.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll0_Clk1(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR &= ~(uint32)SCG_PLL0CSR_CK1EN_MASK;
}

/**
 * @brief Enable PLL0 Force Off.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll0ForceOff(SCG_Type *pScgReg)
{
    pScgReg->PLL0PDIS = 0xFC200001u;
}
#else
/**
 * @brief Set configuration register protection enable/disable .
 *
 * @param pScgReg SCG instance handler
 * @param bEnable Enable/Disable protection
 */
LOCAL_INLINE void SCG_HWA_SetCfgRegProt(SCG_Type *pScgReg, boolean bEnable)
{
    pScgReg->CFG = (SCG_CFG_PORT_LOCK_KEY(0x5A5A) | SCG_CFG_PORT_CFG_EN(bEnable));
}

/**
 * @brief Set PLL0 fast start enable/disable .
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll0FastStart(SCG_Type *pScgReg)
{
    pScgReg->PLL0SCFG |= SCG_PLL0SCFG_FS_EN(1U);
}

/**
 * @brief Set PLL1 fast start enable/disable .
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll1FastStart(SCG_Type *pScgReg)
{
    pScgReg->PLL1SCFG |= SCG_PLL1SCFG_FS_EN(1U);
}

#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

#if (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON)
/**
 * @brief Disable PLL0_CLK2.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll0_Clk2(SCG_Type *pScgReg)
{
    pScgReg->PLL0CSR &= ~(uint32)SCG_PLL0CSR_CK2EN_MASK;
}

/**
 * @brief Set PLL0ECFG register
 */
LOCAL_INLINE void SCG_HWA_SetPll0Ecfg(SCG_Type *pScgReg, uint32 u32Value)
{
    uint32 u32Temp;
    pScgReg->PLL0ECFG = u32Value;
    /* PLL0ECFG will active after PLL0CFG is written */
    u32Temp          = pScgReg->PLL0CFG;
    pScgReg->PLL0CFG = u32Temp;
}

#endif /* (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON) */

/**
 * @brief Set PLL0CFG register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CfgValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetPll0Cfg(SCG_Type *pScgReg, uint32 u32CfgValue)
{
    pScgReg->PLL0CFG = u32CfgValue;
}

/**
 * @brief Set PLL0DIV register value
 *
 * @param pScgReg SCG instance handler
 * @param u32DivValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetPll0Div(SCG_Type *pScgReg, uint32 u32DivValue)
{
    pScgReg->PLL0DIV = u32DivValue;
}

/**
 * @brief enable Pll0DIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll0Div(SCG_Type *pScgReg)
{
    pScgReg->PLL0DIV |= (uint32)(SCG_PLL0DIV_DIVL_EN_MASK | SCG_PLL0DIV_DIVM_EN_MASK |
                                 SCG_PLL0DIV_DIVH_EN_MASK);
}

/**
 * @brief disable Pll0DIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll0Div(SCG_Type *pScgReg)
{
    pScgReg->PLL0DIV &= ~(uint32)(SCG_PLL0DIV_DIVL_EN_MASK | SCG_PLL0DIV_DIVM_EN_MASK |
                                  SCG_PLL0DIV_DIVH_EN_MASK);
}

/**
 * @brief Check and clear PLL0 clock error
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_CheckAndClearPll0ClkErr(SCG_Type *pScgReg)
{
    boolean bFlag;
    if (SCG_PLL0CSR_ERR_MASK == (pScgReg->PLL0CSR & SCG_PLL0CSR_ERR_MASK))
    {
        /* Unlock PLL0CSR register */
        pScgReg->PLL0CSR &= (uint32)SCG_PLL0CSR_All_EXCEPT_ERR_AND_LK_MASK;
        /* Clear error flag and Lock PLL0CSR register */
        pScgReg->PLL0CSR |= (uint32)(SCG_PLL0CSR_ERR_MASK | SCG_PLL0CSR_LK_MASK);

        bFlag = (boolean)TRUE;
    }
    else
    {
        bFlag = (boolean)FALSE;
    }
    return bFlag;
}
/********* Pll1 Register interface ************/
/* clang-format off */
/**
 * @brief Check PLL1 enable status
 *
 * @param pScgReg SCG instance handler
 * @return If PLL1 is enable, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetPll1Enable(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_PLL1CSR_EN_MASK == (pScgReg->PLL1CSR & SCG_PLL1CSR_EN_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Check PLL1 valid
 *
 * @param pScgReg SCG instance handler
 * @return If PLL1 is valid, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetPll1Valid(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_PLL1CSR_VLD_MASK == (pScgReg->PLL1CSR & SCG_PLL1CSR_VLD_MASK)) ? TRUE : FALSE);
}

/**
 * @brief Check PLL1 locked
 *
 * @param pScgReg SCG instance handler
 * @return If PLL1 is locked, return TRUE, else return FALSE
 */
LOCAL_INLINE boolean SCG_HWA_GetPll1Locked(const SCG_Type *pScgReg)
{
    return (boolean)((SCG_PLL1CSR_PLLLK_MASK == (pScgReg->PLL1CSR & SCG_PLL1CSR_PLLLK_MASK)) ? TRUE : FALSE);
}
/* clang-format on */

/**
 * @brief Enable PLL1 clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll1ClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->PLL1CSR |= (uint32)(SCG_PLL1CSR_CM_MASK);
}

/**
 * @brief Disable PLL1 clock monitor
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll1ClockMonitor(SCG_Type *pScgReg)
{
    pScgReg->PLL1CSR &= ~(uint32)(SCG_PLL1CSR_CM_MASK);
}

/**
 * @brief Enable PLL1 clock monitor Reset
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll1ClockMonitorReset(SCG_Type *pScgReg)
{
    pScgReg->PLL1CSR |= (uint32)(SCG_PLL1CSR_CMRE_MASK);
}

/**
 * @brief Disable PLL1 clock monitor Reset
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll1ClockMonitorReset(SCG_Type *pScgReg)
{
    pScgReg->PLL1CSR &= ~(uint32)(SCG_PLL1CSR_CMRE_MASK);
}

/**
 * @brief Lock PLL1 CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_LockPll1CsrReg(SCG_Type *pScgReg)
{
    pScgReg->PLL1CSR |= (uint32)(SCG_PLL1CSR_LK_MASK);
}

/**
 * @brief Unlock PLL1 CSR register
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_UnlockPll1CsrReg(SCG_Type *pScgReg)
{
    pScgReg->PLL1CSR &= ~(uint32)(SCG_PLL1CSR_LK_MASK);
}

/* clang-format off */
/**
 * @brief Check PLL1 DIVH/M/L ACK to 1
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetPll1DivAck(const SCG_Type *pScgReg)
{
    return (boolean)(((SCG_PLL1DIV_DIVL_ACK_MASK | SCG_PLL1DIV_DIVM_ACK_MASK | SCG_PLL1DIV_DIVH_ACK_MASK) ==
                      (pScgReg->PLL1DIV & (SCG_PLL1DIV_DIVL_ACK_MASK | SCG_PLL1DIV_DIVM_ACK_MASK | SCG_PLL1DIV_DIVH_ACK_MASK)))
                     ? TRUE : FALSE
                    );
}

/**
 * @brief Check PLL1 DIVH/M/L ACK to 0
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_GetPll1DivNoAck(const SCG_Type *pScgReg)
{
    return (boolean)((0U == (pScgReg->PLL1DIV & (SCG_PLL1DIV_DIVL_ACK_MASK | SCG_PLL1DIV_DIVM_ACK_MASK | SCG_PLL1DIV_DIVH_ACK_MASK)))
                     ? TRUE : FALSE
                    );
}
/* clang-format on */

/**
 * @brief Set PLL1CSR register value.
 *
 * @param pScgReg SCG instance handler
 * @param u32CsrValue configured register value.
 */
LOCAL_INLINE void SCG_HWA_SetPll1Csr(SCG_Type *pScgReg, uint32 u32CsrValue)
{
    pScgReg->PLL1CSR = u32CsrValue;
}

/**
 * @brief Get PLL1CSR register value.
 *
 * @param pScgReg SCG instance handler
 * @return uint32 register value.
 */
LOCAL_INLINE uint32 SCG_HWA_GetPll1Csr(SCG_Type *pScgReg)
{
    return pScgReg->PLL1CSR;
}

/**
 * @brief Disable PLL1.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll1(SCG_Type *pScgReg)
{
    pScgReg->PLL1CSR &= ~(uint32)SCG_PLL1CSR_EN_MASK;
}

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
/**
 * @brief Disable PLL1_CLK1.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll1_Clk1(SCG_Type *pScgReg)
{
    pScgReg->PLL1CSR &= ~(uint32)SCG_PLL1CSR_CK1EN_MASK;
}

/**
 * @brief Enable PLL1 Force Off.
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll1ForceOff(SCG_Type *pScgReg)
{
    pScgReg->PLL1PDIS = 0xFC200001u;
}
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

/**
 * @brief Set PLL1CFG register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CfgValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetPll1Cfg(SCG_Type *pScgReg, uint32 u32CfgValue)
{
    pScgReg->PLL1CFG = u32CfgValue;
}

/**
 * @brief Set PLL1DIV register value
 *
 * @param pScgReg SCG instance handler
 * @param u32DivValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetPll1Div(SCG_Type *pScgReg, uint32 u32DivValue)
{
    pScgReg->PLL1DIV = u32DivValue;
}

/**
 * @brief enable Pll1DIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_EnablePll1Div(SCG_Type *pScgReg)
{
    pScgReg->PLL1DIV |= (uint32)(SCG_PLL1DIV_DIVL_EN_MASK | SCG_PLL1DIV_DIVM_EN_MASK |
                                 SCG_PLL1DIV_DIVH_EN_MASK);
}

/**
 * @brief disable Pll1DIV as user manual request sequence
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE void SCG_HWA_DisablePll1Div(SCG_Type *pScgReg)
{
    pScgReg->PLL1DIV &= ~(uint32)(SCG_PLL1DIV_DIVL_EN_MASK | SCG_PLL1DIV_DIVM_EN_MASK |
                                  SCG_PLL1DIV_DIVH_EN_MASK);
}

/**
 * @brief Check and clear PLL1 clock error
 *
 * @param pScgReg SCG instance handler
 */
LOCAL_INLINE boolean SCG_HWA_CheckAndClearPll1ClkErr(SCG_Type *pScgReg)
{
    boolean bFlag;
    if (SCG_PLL1CSR_ERR_MASK == (pScgReg->PLL1CSR & SCG_PLL1CSR_ERR_MASK))
    {
        /* Unlock PLL1CSR register */
        pScgReg->PLL1CSR &= (uint32)SCG_PLL1CSR_All_EXCEPT_ERR_AND_LK_MASK;
        /* Clear error flag and Lock PLL1CSR register */
        pScgReg->PLL1CSR |= (uint32)(SCG_PLL1CSR_ERR_MASK | SCG_PLL1CSR_LK_MASK);

        bFlag = (boolean)TRUE;
    }
    else
    {
        bFlag = (boolean)FALSE;
    }
    return bFlag;
}

/********* System clock Register interface ************/
/**
 * @brief Set system clock CCR register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CcrValue configured register value
 */
LOCAL_INLINE void SCG_HWA_SetCCR(SCG_Type *pScgReg, uint32 u32CcrValue)
{
    pScgReg->CCR = u32CcrValue;
}

/**
 * @brief Get system clock CCR register value
 *
 * @param pScg SCG instance handler
 * @param u32CcrValue configured register value
 */
LOCAL_INLINE uint32 SCG_HWA_GetCCR(SCG_Type *pScg)
{
    return (uint32)(pScg->CCR);
}

/**
 * @brief Get system clock CSR register value
 *
 * @param pScg SCG instance handler
 * @return uint32 register value
 */
LOCAL_INLINE uint32 SCG_HWA_GetCSR(SCG_Type *pScg)
{
    return (uint32)(pScg->CSR);
}

/**
 * @brief Get system clock source. used to calculate system clock frequency at startup.
 *        used to check if the target clock source successfully switched.
 *
 * @param pScgReg SCG instance handler
 * @return uint8. system clock source.
 */
LOCAL_INLINE uint8 SCG_HWA_GetSysClkSrc(const SCG_Type *pScgReg)
{
    return (uint8)((pScgReg->CSR & (uint32)SCG_CSR_SCS_MASK) >> SCG_CSR_SCS_SHIFT);
}

/**
 * @brief Switch system clock
 *
 * @param pScgReg SCG instance handler
 * @param u8Clk system clock source
 */
LOCAL_INLINE void SCG_HWA_SwitchSystemClock(SCG_Type *pScgReg, uint8 u8Clk)
{
    pScgReg->CCR = (uint32)((pScgReg->CCR & ~(uint32)SCG_CCR_SCS_MASK) | SCG_CCR_SCS(u8Clk));
}

/**
 * @brief Get system clock valid status, use this status to check system clock update finished or not.
 *
 * @param pScgReg SCG instance handler
 * @return boolean. TRUE as updated; FALSE as not updated.
 */
LOCAL_INLINE boolean SCG_HWA_GetSysClkUPRD(const SCG_Type *pScgReg)
{
    return (boolean)((((uint32)pScgReg->CSR & (uint32)SCG_CSR_CCR_UPRD_MASK) != 0U) ? TRUE : FALSE);
}

/*********  Clkout Register interface ************/
/**
 * @brief Set CLKOUTCFG register value
 *
 * @param pScgReg SCG instance handler
 * @param u32CfgValue configured register value, include clock out and NVM clock source
 */
LOCAL_INLINE void SCG_HWA_SetClkOutCfg(SCG_Type *pScgReg, uint32 u32CfgValue)
{
    pScgReg->CLKOUTCFG = u32CfgValue;
}

/**
 * @brief Get clock out configure register value
 */
LOCAL_INLINE uint32 SCG_HWA_GetClkOutCfg(const SCG_Type *pScgReg)
{
    return pScgReg->CLKOUTCFG;
}

/** @}*/ /* MCU_SCG_REGOPS */

#if defined(__cplusplus)
}
#endif
/** @}*/

#endif /* #ifndef _MCU_SCG_REGOPS_H_ */
