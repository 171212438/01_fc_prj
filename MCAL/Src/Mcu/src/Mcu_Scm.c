/**
 *   @file    Mcu_Scm.c
 *   @version 1.5.1
 *
 *   @brief AUTOSAR Mcu - Scm driver source file.
 *   @details  This is the low level driver source file, mainly implemented for the Scm hardware IP.
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

#ifdef __cplusplus
extern "C"
{
#endif

#include "Mcu_Scm.h"
#include "Mcu_Scm_RegOps.h"

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
/**
 *              Local pointer to the instance handler
 */
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION static SCM_Type *const s_apScmBase[SCM_INSTANCE_COUNT] = SCM_BASE_PTRS;

#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                        LOCAL FUNCTION
==================================================================================================*/

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTION
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

/**
 * @brief set trace clock.
 *
 * @param pTraceClk: data structure point of SCM pTraceClk configuration.
 */
MCU_TEXT_SECTION void SCM_SetTraceClockConfig(const SCM_TraceClkDivType *pTraceClk)
{
    /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer
     * to object and an integer type Reason: Pointer used to read register operation could not be avoid */
    uint32 u32Temp = s_apScmBase[0]->DEBUG_TRACE;
    /* PRQA S 0306 -- */

    if ((boolean)TRUE == pTraceClk->bClkEnable)
    {
        u32Temp &= ~(uint32)(SCM_DEBUG_TRACE_DEBUG_ATCLK_EN_MASK | SCM_DEBUG_TRACE_TRACECLK_DIV_MASK |
                             SCM_DEBUG_TRACE_TRACECLK_SEL_MASK | SCM_DEBUG_TRACE_TRACECLK_EN_MASK);
        /* Set trace divider value */
        u32Temp |= (uint32)(SCM_DEBUG_TRACE_TRACECLK_SEL(pTraceClk->eClkSel));
        if ((boolean)TRUE == pTraceClk->bDivEnable)
        {
            u32Temp |= (uint32)(SCM_DEBUG_TRACE_TRACECLK_DIV(pTraceClk->eDiv) |
                                SCM_DEBUG_TRACE_TRACECLK_EN_MASK);
        }

        SCM_HWA_SetDebugTrace(s_apScmBase[0], u32Temp);

        if ((boolean)TRUE == pTraceClk->bDebugATCLK)
        {
            /* Enable trace clock */
            SCM_HWA_EnableDebugATClk(s_apScmBase[0]);
        }
    }
    else
    {
        /* Disable trace clock */
        SCM_HWA_SetDebugTrace(s_apScmBase[0], 0U);
    }
}

#if (MCU_CFG_SCM_7300_SUPPORT == STD_ON)
/**
 * @brief set Hsm clock.
 *
 * @param pHsmClk: data structure point of SCM Hsm clock configuration.
 */
MCU_TEXT_SECTION void SCM_SetHsmClockConfig(const SCM_HsmClkSelType *pHsmClk)
{
    /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer
     * to object and an integer type Reason: Pointer used to read register operation could not be avoid */
    uint32 u32Temp = s_apScmBase[0]->HSM_PCC;
    /* PRQA S 0306 -- */

    u32Temp &= ~(uint32)(SCM_HSM_PCC_CLKEN_MASK | SCM_HSM_PCC_WDG_RSTEN_MASK);
    if ((boolean)TRUE == pHsmClk->bClockEn)
    {
        u32Temp |= (uint32)(SCM_HSM_PCC_CLKEN(1U) | SCM_HSM_PCC_WDG_RSTEN(pHsmClk->bWdgResetEn));
    }
    else
    {
        /* Clear enable bit */
    }
    SCM_HWA_SetHsmReg(s_apScmBase[0], u32Temp);
}

#elif ((MCU_CFG_SCM_7300GT_SUPPORT == STD_ON) || (MCU_CFG_SCM_7300GT_LITE_SUPPORT == STD_ON))
/**
 * @brief set Hsm clock.
 *
 * @param pHsmClk: data structure point of SCM Hsm clock configuration.
 */
MCU_TEXT_SECTION void SCM_SetHsmClockConfig(const SCM_HsmClkSelType *pHsmClk)
{
    /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer
     * to object and an integer type Reason: Pointer used to read register operation could not be avoid */
    uint32 u32Temp0 = s_apScmBase[0]->FLEXHSM_PCC;
    uint32 u32Temp1 = s_apScmBase[0]->CRYPTO_PCC;
#if (MCU_CFG_SCM_7300GT_SUPPORT == STD_ON)
    uint32 u32Temp2 = s_apScmBase[0]->TPU_PCC;
#endif /* (MCU_CFG_SCM_7300GT_SUPPORT == STD_ON) */
    /* PRQA S 0306 -- */

    /* Set HSM clock */
    u32Temp0 &= ~(uint32)(SCM_FLEXHSM_PCC_CLKEN_FLEXHSM_MASK | SCM_FLEXHSM_PCC_WDG_RSTEN_MASK);
    if ((boolean)TRUE == pHsmClk->bClockEn)
    {
        u32Temp0 |= (uint32)(SCM_FLEXHSM_PCC_CLKEN_FLEXHSM(1U) |
                             SCM_FLEXHSM_PCC_WDG_RSTEN(pHsmClk->bWdgResetEn));
    }
    else
    {
        /* Clear enable bit */
    }
    SCM_HWA_SetFlexHsmReg(s_apScmBase[0], u32Temp0);

    /* Set Crypto clock */
    u32Temp1 &= ~(uint32)(SCM_CRYPTO_PCC_CLKEN_CRYPTO_MASK);
    if ((boolean)TRUE == pHsmClk->bCryptoClockEn)
    {
        u32Temp1 |= (uint32)(SCM_CRYPTO_PCC_CLKEN_CRYPTO(1U));
    }
    else
    {
        /* Clear enable bit */
    }
    SCM_HWA_SetCryptoPccReg(s_apScmBase[0], u32Temp1);

#if (MCU_CFG_SCM_7300GT_SUPPORT == STD_ON)
    /* Set Tpu clock */
    u32Temp2 &= ~(uint32)(SCM_TPU_PCC_CLKEN_TPU_MASK);
    if ((boolean)TRUE == pHsmClk->bTpuClockEn)
    {
        u32Temp2 |= (uint32)(SCM_TPU_PCC_CLKEN_TPU(1U));
    }
    else
    {
        /* Clear enable bit */
    }
    SCM_HWA_SetTpuPccReg(s_apScmBase[0], u32Temp2);
#endif /* (MCU_CFG_SCM_7300GT_SUPPORT == STD_ON) */
}

#elif (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON)
/**
 * @brief set SubSystem clock.
 *
 * @param pSubSysClk: data structure point of SCM subsystem clock configuration.
 */
MCU_TEXT_SECTION void SCM_SetSubSysClockConfig(const SCM_SubSysClkType *pSubSysClk)
{
    /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer
     * to object and an integer type Reason: Pointer used to read register operation could not be avoid */
    uint32 u32Temp = s_apScmBase[0]->SUBSYS_PCC;
    /* PRQA S 0306 -- */

    u32Temp &= ~(uint32)(SCM_SUBSYS_PCC_CLKEN_TPU_MASK | SCM_SUBSYS_PCC_CLKEN_HSM_ENGINE_MASK |
                         SCM_SUBSYS_PCC_WDG_RSTEN_MASK | SCM_SUBSYS_PCC_CLKEN_SUBSYS_MASK);

    if (((boolean)TRUE == pSubSysClk->bTpuClockEn) || ((boolean)TRUE == pSubSysClk->bHsmClockEn) ||
        ((boolean)TRUE == pSubSysClk->bSubSysWdgRstEn))
    {
        u32Temp |= (uint32)(SCM_SUBSYS_PCC_CLKEN_SUBSYS(1U) |
                            SCM_SUBSYS_PCC_CLKEN_TPU(pSubSysClk->bTpuClockEn) |
                            SCM_SUBSYS_PCC_CLKEN_HSM_ENGINE(pSubSysClk->bHsmClockEn) |
                            SCM_SUBSYS_PCC_WDG_RSTEN(pSubSysClk->bSubSysWdgRstEn));
        SCM_HWA_SetSbuSysReg(s_apScmBase[0], u32Temp);
    }
    else
    {
        SCM_HWA_DisableSubSysClock(s_apScmBase[0]);
    }
}
#else
/* More platform... */
#endif /* (MCU_CFG_SCM_7300_SUPPORT == STD_ON) */

#if (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON)
/**
 * @brief Set HSADC bias force enable/disable.
 *
 * @param bEnable Enable/disable.
 */
MCU_TEXT_SECTION void SCM_SetHsadcBiasForce(boolean bEnable)
{
    /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer
     * to object and an integer type Reason: Pointer used to read register operation could not be avoid */
    uint32 u32Temp = s_apScmBase[0]->ADC_CFG;
    /* PRQA S 0306 -- */
    u32Temp &= ~(uint32)SCM_ADC_CFG_HSADC_BIAS_FORCE_EN_MASK;
    u32Temp |= (uint32)(SCM_ADC_CFG_HSADC_BIAS_FORCE_EN(bEnable));
    SCM_HWA_SetAdcCfgReg(s_apScmBase[0], u32Temp);
}
#endif /* (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON) */

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
