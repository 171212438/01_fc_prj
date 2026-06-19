/**
 *   @file    Mcu_Scm_Regops.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mcu - Mcu Scm header file.
 *   @details Mcu Scm low level driver API.
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
#ifndef MCU_SCM_REGOPS_H
#define MCU_SCM_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "Scm_Reg.h"

/**
 * @brief Set SCM_DEBUG_TRACE register value
 *
 * @param pScmReg SCM instance handler
 * @param u32DebugTrace configured register value
 */
LOCAL_INLINE void SCM_HWA_SetDebugTrace(SCM_Type *pScmReg, uint32 u32DebugTrace)
{
    pScmReg->DEBUG_TRACE = u32DebugTrace;
}

/**
 * @brief Set debug atclk enable
 *
 * @param pScmReg SCM instance handler
 */
LOCAL_INLINE void SCM_HWA_EnableDebugATClk(SCM_Type *pScmReg)
{
    pScmReg->DEBUG_TRACE |= (uint32)SCM_DEBUG_TRACE_DEBUG_ATCLK_EN_MASK;
}

#if (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON)
/**
 * @brief Set SUBSYS_PCC register
 *
 * @param pScmReg SCM instance handler
 * @param u32SubSys Value to be set
 */
LOCAL_INLINE void SCM_HWA_SetSbuSysReg(SCM_Type *pScmReg, uint32 u32SubSys)
{
    pScmReg->SUBSYS_PCC = u32SubSys;
}

/**
 * @brief Enable SubSystem clock
 */
LOCAL_INLINE void SCM_HWA_EnableSubSysClock(SCM_Type *pScmReg)
{
    pScmReg->SUBSYS_PCC |= (uint32)SCM_SUBSYS_PCC_CLKEN_SUBSYS_MASK;
}

/**
 * @brief Disable SubSystem clock
 *
 * @param pScmReg SCM instance handler
 */
LOCAL_INLINE void SCM_HWA_DisableSubSysClock(SCM_Type *pScmReg)
{
    pScmReg->SUBSYS_PCC &= ~(uint32)SCM_SUBSYS_PCC_CLKEN_SUBSYS_MASK;
}
#else

#if (MCU_CFG_SCM_7300_SUPPORT == STD_ON)
/**
 * @brief Set SCM_PCC_HSM register value
 *
 * @param pScmReg SCM instance handler
 * @param u32Hsm Value to be set
 */
LOCAL_INLINE void SCM_HWA_SetHsmReg(SCM_Type *pScmReg, uint32 u32Hsm)
{
    pScmReg->HSM_PCC = u32Hsm;
}
#else /* FC73008MDQ FC73004MDDT1C FC73004MDST1C */
/**
 * @brief Set SCM_PCC_FLEXHSM register value
 *
 * @param pScmReg SCM instance handler
 * @param u32Value Value to be set
 */
LOCAL_INLINE void SCM_HWA_SetFlexHsmReg(SCM_Type *pScmReg, uint32 u32Value)
{
    pScmReg->FLEXHSM_PCC = u32Value;
}

/**
 * @brief Set SCM_PCC_CRYPTO register value
 *
 * @param pScmReg SCM instance handler
 * @param u32Value to be set
 */
LOCAL_INLINE void SCM_HWA_SetCryptoPccReg(SCM_Type *pScmReg, uint32 u32Value)
{
    pScmReg->CRYPTO_PCC = u32Value;
}
#if (MCU_CFG_SCM_7300GT_SUPPORT == STD_ON)
/**
 * @brief Set SCM_PCC_CRYPTO register value
 *
 * @param pScmReg SCM instance handler
 * @param u32Value to be set
 */
LOCAL_INLINE void SCM_HWA_SetTpuPccReg(SCM_Type *pScmReg, uint32 u32Value)
{
    pScmReg->TPU_PCC = u32Value;
}
#endif /* (MCU_CFG_SCM_7300GT_SUPPORT == STD_ON) */
#endif /* (MCU_CFG_SCM_7300_SUPPORT == STD_ON)  */

#endif /* (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON) */

#if (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON)
/**
 * @brief Set SCM_ADC_CFG register value
 *
 * @param pScmReg SCM instance handler
 * @param u32Value to be set
 */
LOCAL_INLINE void SCM_HWA_SetAdcCfgReg(SCM_Type *pScmReg, uint32 u32Value)
{
    pScmReg->ADC_CFG = u32Value;
}
#endif /* (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON) */

#if defined(__cplusplus)
}
#endif
/** @}*/

#endif /* #ifndef MCU_SCM_REGOPS_H */
