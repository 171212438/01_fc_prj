/**
 *   @file    Mcu_Scg.c
 *   @version 1.5.1
 *
 *   @brief AUTOSAR Mcu - Scg driver source file.
 *   @details  This is the low level driver source file, mainly implemented for the Scg hardware IP.
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

#include "Mcu_Scg.h"

/*==================================================================================================
                                            MACROS
==================================================================================================*/
#define DIV_STABILIZATION_TIMEOUT        100000U
#define FOSC_STABILIZATION_TIMEOUT       4800000U
#define FIRC_STABILIZATION_TIMEOUT       100000U
#define SIRC_STABILIZATION_TIMEOUT       100000U
#define SIRC32K_STABILIZATION_TIMEOUT    100000U
#define SOSC_STABILIZATION_TIMEOUT       150000000U
#define PLL_STABILIZATION_TIMEOUT        641000U
#define SCG_CLKSRC_STABILIZATION_TIMEOUT 100000U

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

MCU_DATA_SECTION static SCG_Type *const s_apScgBase[SCG_INSTANCE_COUNT] = SCG_BASE_PTRS;

#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

#define MCU_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION static SCG_ISRCallbackType SCG_FoscClockErrorNotify = NULL_PTR;
MCU_DATA_SECTION static SCG_ISRCallbackType SCG_SoscClockErrorNotify = NULL_PTR;
MCU_DATA_SECTION static SCG_ISRCallbackType SCG_FircClockErrorNotify = NULL_PTR;
MCU_DATA_SECTION static SCG_ISRCallbackType SCG_SircClockErrorNotify = NULL_PTR;
MCU_DATA_SECTION static SCG_ISRCallbackType SCG_Pll0ClockErrorNotify = NULL_PTR;
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
MCU_DATA_SECTION static SCG_ISRCallbackType SCG_Pll1ClockErrorNotify = NULL_PTR;
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */

#define MCU_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcu_MemMap.h"
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"
/**
 * @brief Wait SOSC clock stable
 *
 * @param bStableStatus Wait SOSC clock valid stable or wait SOSC clock invalid stable
 * @return SOSC status
 */
MCU_TEXT_SECTION static SCG_StatusType SCG_WaitSoscClockStable(boolean bStableStatus);

/**
 * @brief Wait FOSC clock stable
 *
 * @param bStableStatus Wait FOSC clock valid stable or wait FOSC clock invalid stable
 * @return FOSC status
 */
MCU_TEXT_SECTION static SCG_StatusType SCG_WaitFoscClockStable(boolean bStableStatus);

/**
 * @brief Wait FIRC clock stable
 *
 * @param bStableStatus Wait FIRC clock valid stable or wait FIRC clock invalid stable
 * @return FIRC status
 */
MCU_TEXT_SECTION static SCG_StatusType SCG_WaitFircClockStable(boolean bStableStatus);

/**
 * @brief Wait PLL clock stable
 *
 * @param ePllType  PLL type
 * @param bStableStatus Wait PLL clock valid stable or wait PLL clock invalid stable
 *
 * @return PLL status
 */
MCU_TEXT_SECTION static SCG_StatusType SCG_WaitPllClockStable(SCG_PllClkType ePllType,
                                                              boolean        bStableStatus);

/*==================================================================================================
                                        LOCAL FUNCTION
==================================================================================================*/

/**
 * @brief Wait SOSC clock stable
 *
 * @param bStableStatus Wait SOSC clock valid stable or wait SOSC clock invalid stable
 * @return SOSC status
 */
MCU_TEXT_SECTION static SCG_StatusType SCG_WaitSoscClockStable(boolean bStableStatus)
{
    SCG_StatusType eStatus;
    uint32         u32Temp;
    boolean        bStatus = (boolean)(((boolean)TRUE == bStableStatus) ? FALSE : TRUE);
    /*         Check SOSC valid         */
    u32Temp = SOSC_STABILIZATION_TIMEOUT;
    while ((SCG_HWA_GetSoscValid(s_apScgBase[0]) == bStatus) && (u32Temp > 0U))
    {
        u32Temp--;
    }

    if (u32Temp == 0U)
    {
        eStatus = SCG_STATUS_TIMEOUT;
    }
    else
    {
        eStatus = SCG_STATUS_SUCCESS;
    }
    return eStatus;
}

/**
 * @brief Wait FOSC clock stable
 *
 * @param bStableStatus Wait FOSC clock valid stable or wait FOSC clock invalid stable
 * @return FOSC status
 */
MCU_TEXT_SECTION static SCG_StatusType SCG_WaitFoscClockStable(boolean bStableStatus)
{
    SCG_StatusType eStatus;
    uint32         u32Temp;
    boolean        bStatus = (boolean)(((boolean)TRUE == bStableStatus) ? FALSE : TRUE);
    /*         Check FOSC valid         */
    u32Temp = FOSC_STABILIZATION_TIMEOUT;
    while ((SCG_HWA_GetFoscValid(s_apScgBase[0]) == bStatus) && (u32Temp > 0U))
    {
        u32Temp--;
    }

    if (u32Temp == 0U)
    {
        eStatus = SCG_STATUS_TIMEOUT;
    }
    else
    {
        eStatus = SCG_STATUS_SUCCESS;
    }
    return eStatus;
}

/**
 * @brief Wait FIRC clock stable
 *
 * @param bStableStatus Wait FIRC clock valid stable or wait FIRC clock invalid stable
 * @return FIRC status
 */
MCU_TEXT_SECTION static SCG_StatusType SCG_WaitFircClockStable(boolean bStableStatus)
{
    SCG_StatusType eStatus;
    uint32         u32Temp;
    boolean        bStatus = (boolean)(((boolean)TRUE == bStableStatus) ? FALSE : TRUE);
    /*         Check FIRC valid         */
    u32Temp = FIRC_STABILIZATION_TIMEOUT;
    while ((SCG_HWA_GetFircValid(s_apScgBase[0]) == bStatus) && (u32Temp > 0U))
    {
        u32Temp--;
    }

    if (u32Temp == 0U)
    {
        eStatus = SCG_STATUS_TIMEOUT;
    }
    else
    {
        eStatus = SCG_STATUS_SUCCESS;
    }
    return eStatus;
}

/**
 * @brief Wait PLL clock stable
 *
 * @param ePllType  PLL type
 * @param bStableStatus Wait PLL clock valid stable or wait PLL clock invalid stable
 *
 * @return PLL status
 */
MCU_TEXT_SECTION static SCG_StatusType SCG_WaitPllClockStable(SCG_PllClkType ePllType,
                                                              boolean        bStableStatus)
{
    SCG_StatusType eStatus;
    uint32         u32Temp;
    boolean        bStatus = (boolean)(((boolean)TRUE == bStableStatus) ? FALSE : TRUE);
    /*         Check PLL locked         */
    u32Temp = PLL_STABILIZATION_TIMEOUT;
    if (SCG_PLL0 == ePllType)
    {
        /* [FMR_MCU_0003] */
        while (((SCG_HWA_GetPll0Locked(s_apScgBase[0]) == bStatus) ||
                (SCG_HWA_GetPll0Valid(s_apScgBase[0]) == bStatus)) &&
               (u32Temp > 0U))
        {
            u32Temp--;
        }
    }
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    else
    {
        /* [FMR_MCU_0003] */
        while (((SCG_HWA_GetPll1Locked(s_apScgBase[0]) == bStatus) ||
                (SCG_HWA_GetPll1Valid(s_apScgBase[0]) == bStatus)) &&
               (u32Temp > 0U))
        {
            u32Temp--;
        }
    }
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */

    if (u32Temp == 0U)
    {
        eStatus = SCG_STATUS_TIMEOUT;
    }
    else
    {
        eStatus = SCG_STATUS_SUCCESS;
    }
    return eStatus;
}

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTION
==================================================================================================*/

/**
 * @brief Set SOSC configuration.
 * @param pSoscConfig: pointer to the soccType structure variable, which defined SOSC initial
 * information.
 * @return SOSC status. SOSC would wait for SOSC valid in while loop within pre-dinfined limited
 * time to check the SOSC valid or not. If SOSC still not valid(this may happen if external Slow OSC
 * not placed),  it would return fail
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SetSOSC(const SCG_SoscType *pSoscConfig)
{
    SCG_StatusType eStatus = SCG_STATUS_SUCCESS;
    uint32         u32Temp;

    /* Unlock SOSC CSR register */
    SCG_HWA_UnlockSoscCsrReg(s_apScgBase[0]);

    /* Set SOSC */
    if (pSoscConfig->bEnable == (boolean)TRUE)
    {
        /* disable sosc */
        SCG_HWA_DisableSosc(s_apScgBase[0]);

        /* Configure SOSC CFG register */
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant. The value of the
         * result is always that of the left-hand operand. REASON: Generate code influence here. */
        u32Temp = (uint32)(SCG_SOSCCFG_EOCV(pSoscConfig->u8Eocv) | SCG_SOSCCFG_GM_SEL(3U) |
                           SCG_SOSCCFG_CURPRG_SF(3U) | SCG_SOSCCFG_CURPRG_COMP(3U));
        /* PRQA S 2985 -- */
        SCG_HWA_SetSoscCfg(s_apScgBase[0], u32Temp);

        /* Configure SOSC CSR register and enable sosc*/
        u32Temp = SCG_HWA_GetSoscCsr(s_apScgBase[0]);
        u32Temp &= (uint32)(~(SCG_SOSCCSR_EN_MASK | SCG_SOSCCSR_BYPASS_MASK));
        u32Temp |= (uint32)(SCG_SOSCCSR_EN(1U) | SCG_SOSCCSR_BYPASS(pSoscConfig->bBypass));
        SCG_HWA_SetSoscCsr(s_apScgBase[0], u32Temp);

        if ((boolean)FALSE == pSoscConfig->bNoWait)
        {
            eStatus = SCG_WaitSoscClockStable((boolean)TRUE);
        }

        if (SCG_STATUS_TIMEOUT == eStatus)
        {
            SCG_HWA_DisableSosc(s_apScgBase[0]);
        }
        else
        {
            if ((boolean)TRUE == pSoscConfig->bCm)
            {
                SCG_HWA_EnableSoscClockMonitor(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisableSoscClockMonitor(s_apScgBase[0]);
            }

            if ((boolean)TRUE == pSoscConfig->bCmre)
            {
                SCG_HWA_EnableSoscClockMonitorReset(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisableSoscClockMonitorReset(s_apScgBase[0]);
            }
        }
    }
    else
    {
        SCG_HWA_DisableSosc(s_apScgBase[0]);
    }

    /* Lock SOSC CSR register */
    SCG_HWA_LockSoscCsrReg(s_apScgBase[0]);

    /* Save clock error notify */
    SCG_SoscClockErrorNotify = pSoscConfig->pNotify;

    return eStatus;
}

/**
 * @brief Set FOSC configuration
 *
 * @param pFoscConfig pointer to the FOSCType structure data instance, which defined FOSC initial
 * information.
 * @return  FOSC status. FOSC would wait for FOSC valid in while loop within pre-dinfined limited
 * time to check the FOSC valid or not. If FOSC still not valid(this may happen if external Fast OSC
 * not placed),  it would return fail.
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SetFOSC(const SCG_FoscType *pFoscConfig)
{
    SCG_StatusType eStatus = SCG_STATUS_SUCCESS;
    boolean        bComp_En;
    uint32         u32Temp;
#if (MCU_CFG_SCG_SLEEP_WDG_SUPPORT == STD_ON)
    uint8 u8MSBVal;
#endif /*  (MCU_CFG_SCG_SLEEP_WDG_SUPPORT == STD_ON)     */

    /* Unlock FOSC CSR register */
    SCG_HWA_UnlockFoscCsrReg(s_apScgBase[0]);

    if ((boolean)TRUE == pFoscConfig->bEnable)
    {
        /* disable fosc */
        SCG_HWA_DisableFosc(s_apScgBase[0]);

        bComp_En = (boolean)(((boolean)TRUE == pFoscConfig->bBypass) ? FALSE : TRUE);

        /* COMP_EN is setting to 1  COMP_EN must be 1 when using an external crystal */
        /* Configure GM to the max value, GM_SEL: 15U */
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant. The value of the
         * result is always that of the left-hand operand. REASON: Generate code influence here. */
        u32Temp = (uint32)(SCG_FOSCCFG_BYPASS(pFoscConfig->bBypass) |
                           SCG_FOSCCFG_COMP_EN(bComp_En) | SCG_FOSCCFG_EOCV(pFoscConfig->u8Eocv) |
                           SCG_FOSCCFG_GM_SEL(15U) | SCG_FOSCCFG_ALC_D(1U) | SCG_FOSCCFG_HYST_D(0U));
        /* PRQA S 2985 -- */
        SCG_HWA_SetFoscCfg(s_apScgBase[0], u32Temp);

        /* Configure FOSC CSR */
        u32Temp = SCG_HWA_GetFoscCsr(s_apScgBase[0]);
        u32Temp &= (uint32)(~(SCG_FOSCCSR_EN_MASK | SCG_FOSCCSR_STEN_MASK));
        u32Temp |= (SCG_FOSCCSR_EN_MASK | SCG_FOSCCSR_STEN(pFoscConfig->bSten));
        SCG_HWA_SetFoscCsr(s_apScgBase[0], u32Temp);

        /* Wait FOSC clock stable */
        eStatus = SCG_WaitFoscClockStable((boolean)TRUE);
        if (SCG_STATUS_SUCCESS == eStatus)
        {
            if ((boolean)TRUE == pFoscConfig->bCm)
            {
                SCG_HWA_EnableFoscClockMonitor(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisableFoscClockMonitor(s_apScgBase[0]);
            }

            if ((boolean)TRUE == pFoscConfig->bCmre)
            {
                SCG_HWA_EnableFoscClockMonitorReset(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisableFoscClockMonitorReset(s_apScgBase[0]);
            }

            /* disable DIVEN */
            SCG_HWA_DisableFoscDiv(s_apScgBase[0]);
            /* wait div ack to be clear */
            u32Temp = DIV_STABILIZATION_TIMEOUT;
            while (((boolean)FALSE == SCG_HWA_GetFoscDivNoAck(s_apScgBase[0])) && (u32Temp > 0U))
            {
                u32Temp--;
            }

            if (u32Temp == 0U)
            {
                eStatus = SCG_STATUS_TIMEOUT;
            }
            else
            {
                /* clang-format off */
                /* set div value */
                u32Temp = ((uint32)(((uint32)pFoscConfig->eDivH) & SCG_FOSCDIV_DIVH_MASK) |
                           (((uint32)pFoscConfig->eDivM << SCG_FOSCDIV_DIVM_SHIFT) & SCG_FOSCDIV_DIVM_MASK) |
                           (((uint32)pFoscConfig->eDivL << SCG_FOSCDIV_DIVL_SHIFT) & SCG_FOSCDIV_DIVL_MASK));
                SCG_HWA_SetFoscDiv(s_apScgBase[0], u32Temp);
                /* clang-format on */
                /* enable DIVEN */
                SCG_HWA_EnableFoscDiv(s_apScgBase[0]);
                /* wait div ack to be set */
                u32Temp = DIV_STABILIZATION_TIMEOUT;
                while (((boolean)FALSE == SCG_HWA_GetFoscDivAck(s_apScgBase[0])) && (u32Temp > 0U))
                {
                    u32Temp--;
                }

                if (u32Temp == 0U)
                {
                    eStatus = SCG_STATUS_TIMEOUT;
                }
                else
                {
#if (MCU_CFG_SCG_SLEEP_WDG_SUPPORT == STD_ON)
                    /* clang-format off */
                    /* if OSC >= 40M ,set 5, if OSC = 32M,set 10, if OSC = 24M, set 15, if OSC =
                     * 16M, set 20, if OSC = 8M, set 25*/
                    /* This is the protection measure during low power wake up, if SCG register not
                     * valid after the setting time, the chip will reset and will set clock error
                     * flag in RGM register */
                    u8MSBVal = (((pFoscConfig->u32XtalFreq) / 8000000U) >= 5U) ?
                               (uint8)5U :
                               (uint8)((6U - ((pFoscConfig->u32XtalFreq) / 8000000U)) * 5U);
                    /* clang-format on */
                    SCG_HWA_SetWKPWDG(s_apScgBase[0], u8MSBVal);
                    SCG_HWA_DiasableSLPWDG(s_apScgBase[0]);
#endif /*  (MCU_CFG_SCG_SLEEP_WDG_SUPPORT == STD_ON)     */
                }
            }
        }
        else
        {
            SCG_HWA_DisableFosc(s_apScgBase[0]);
        }
    }
    else
    {
        SCG_HWA_DisableFosc(s_apScgBase[0]);
    }

    /* Lock FOSC CSR register */
    SCG_HWA_LockFoscCsrReg(s_apScgBase[0]);

    /* Save clock error notify */
    SCG_FoscClockErrorNotify = pFoscConfig->pNotify;

    return eStatus;
}

/**
 * @brief Set SIRC configuration.
 * @param pSircConfig: pointer to the SIRCType structure data instance, which defined SIRC initial
 * information
 * @return SIRC status. SIRCwould wait for SIRC valid in while loop within pre-dinfined limited time
 *         to check the SIRC valid or not. If SOSC still not valid,  it would return fail.
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SetSIRC(const SCG_SircType *pSircConfig)
{
    SCG_StatusType eStatus = SCG_STATUS_SUCCESS;
    uint32         u32Temp;

    /* Unlock SIRC CSR register */
    SCG_HWA_UnlockSircCsrReg(s_apScgBase[0]);

    /* Clear CSR register including TRUP TREN STEN LPEN and ERR(w1c) before setting SIRCTCFG  */
    SCG_HWA_SetSircCsr(s_apScgBase[0], SCG_SIRCCSR_ERR_MASK);

    /*   SIRC  configuration SIRCTCFG    */
    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
     * Reason: Macros are needed to avoid accidental value writing to the register */
    u32Temp = (uint32)(SCG_SIRCTCFG_TRIMSRC(pSircConfig->u8TrimSrc) |
#if (MCU_CFG_SCG_SIRC_AUTOTRIM_CTRL_SUPPORT == STD_ON)
                       SCG_SIRCTCFG_SAMPLE(0U) | SCG_SIRCTCFG_DELAY(0U) |
#endif /* (MCU_CFG_SCG_SIRC_AUTOTRIM_CTRL_SUPPORT == STD_ON) */
                       SCG_SIRCTCFG_TRIMDIV(pSircConfig->u16TrimDiv));
    /* PRQA S 2985 -- */
    SCG_HWA_SetSircTcfg(s_apScgBase[0], u32Temp);

    /* CM, TRUP, TREN, LPEN, STEN are cleared before */
    u32Temp = (uint32)(SCG_SIRCCSR_CM(pSircConfig->bCm) | SCG_SIRCCSR_TRUP(pSircConfig->bTrEn) |
                       SCG_SIRCCSR_TREN(pSircConfig->bTrEn) | SCG_SIRCCSR_LPEN(pSircConfig->bLpen) |
                       SCG_SIRCCSR_STEN(pSircConfig->bSten));
    SCG_HWA_SetSircCsr(s_apScgBase[0], u32Temp);

    /*
        DIV setting process:
        Clear SIRCDIV[DIVH_EN], wait SIRCDIV[DIVH_ACK] clear
            --> Configure SIRCDIV[DIVH]
            --> Set SIRCDIV[DIVH_EN], wait SIRCDIV[DIVH_ACK] is set
    */
    SCG_HWA_DiableSircDiv(s_apScgBase[0]);

    u32Temp = DIV_STABILIZATION_TIMEOUT;
    while (((boolean)FALSE == SCG_HWA_GetSircDivNoAck(s_apScgBase[0])) && (u32Temp > 0U))
    {
        u32Temp--;
    }

    if (u32Temp == 0U)
    {
        eStatus = SCG_STATUS_TIMEOUT;
    }
    else
    {
        /* clang-format off */
        u32Temp = (uint32)((((uint32)pSircConfig->eDivH) & SCG_SIRCDIV_DIVH_MASK) |
                           (((uint32)pSircConfig->eDivM << SCG_SIRCDIV_DIVM_SHIFT) & SCG_SIRCDIV_DIVM_MASK) |
                           (((uint32)pSircConfig->eDivL << SCG_SIRCDIV_DIVL_SHIFT) & SCG_SIRCDIV_DIVL_MASK));
        /* clang-format on */
        SCG_HWA_SetSircDiv(s_apScgBase[0], u32Temp);
        SCG_HWA_EnableSircDiv(s_apScgBase[0]);

        u32Temp = DIV_STABILIZATION_TIMEOUT;
        while (((boolean)FALSE == SCG_HWA_GetSircDivAck(s_apScgBase[0])) && (u32Temp > 0U))
        {
            u32Temp--;
        }
        if (u32Temp == 0U)
        {
            eStatus = SCG_STATUS_TIMEOUT;
        }
    }

    /* Lock SIRC CSR register */
    SCG_HWA_LockSircCsrReg(s_apScgBase[0]);

    /* Save clock error notify */
    SCG_SircClockErrorNotify = pSircConfig->pNotify;

    return eStatus;
}

/**
 * @brief Set SIRC32K configuration.
 * @param pSirc32kConfig: pointer to the Sirc32kType structure data instance, which defined SIRC32K
 * initial information
 * @return SIRC32K status
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SetSIRC32K(const SCG_Sirc32kType *pSirc32kConfig)
{
    SCG_StatusType eStatus = SCG_STATUS_SUCCESS;
    uint32         u32Temp;

    /* Unlock SIRC32K CSR register */
    SCG_HWA_UnlockSirc32kCsrReg(s_apScgBase[0]);

    /* Enable SIRC32K */
    if ((boolean)TRUE == pSirc32kConfig->bEn)
    {
        SCG_HWA_SetSirc32kCsr(s_apScgBase[0], ((uint32)(SCG_SIRC32KCSR_EN(1U))));

        /*               Check SIRC valid                       */
        u32Temp = SIRC32K_STABILIZATION_TIMEOUT;
        while (((boolean)FALSE == SCG_HWA_GetSirc32kValid(s_apScgBase[0])) && (u32Temp > 0U))
        {
            u32Temp--;
        }
        if (u32Temp == 0U)
        {
            eStatus = SCG_STATUS_TIMEOUT;
        }
    }
    else
    {
        /* Disable SIRC32K */
        SCG_HWA_DisableSirc32k(s_apScgBase[0]);
    }

    /* Lock SIRC32K CSR register */
    SCG_HWA_LockSirc32kCsrReg(s_apScgBase[0]);

    return eStatus;
}

/**
 * @brief Set FIRC configuration.
 * @param pFircConfig: pointer to the FIRCType structure data instance, which defined FIRC initial
 * information.
 * @return FIRC status. FIRCwould wait for FIRC valid in while loop within pre-dinfined limited time
 *         to check the FIRC valid or not. If FIRC still not valid,  it would return fail.
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SetFIRC(const SCG_FircType *pFircConfig)
{
    SCG_StatusType eStatus = SCG_STATUS_SUCCESS;
    uint32         u32Temp;

    /* Unlock FIRC CSR register */
    SCG_HWA_UnlockFircCsrReg(s_apScgBase[0]);

    /*            Set FIRCCSR           */
    if ((boolean)TRUE == pFircConfig->bEnable)
    {
        /* Configure FIRCCFG register */
        SCG_HWA_SetFircCfg(s_apScgBase[0], SCG_FIRCCFG_CLKEN(3U));

        /* Clear CSR register including TRUP TREN STEN and ERR(w1c) before setting SIRCTCFG  */
        u32Temp = SCG_HWA_GetFircCsr(s_apScgBase[0]);
        u32Temp &= (~(uint32)(SCG_FIRCCSR_TRUP_MASK | SCG_FIRCCSR_TREN_MASK | SCG_FIRCCSR_STEN_MASK));
        SCG_HWA_SetFircCsr(s_apScgBase[0], (u32Temp | SCG_FIRCCSR_ERR_MASK));

        /*   For clock autotrim, set TREN to True together with TRUP to True   */
        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code
         * Reason: Macros are needed to avoid accidental value writing to the register */
        u32Temp = (uint32)(SCG_FIRCTCFG_TRIMSRC(pFircConfig->u8TrimSrc) |
#if (MCU_CFG_SCG_FIRC_AUTOTRIM_CTRL_SUPPORT == STD_ON)
                           SCG_FIRCTCFG_SAMPLE(0U) | SCG_FIRCTCFG_DELAY(0U) |
#endif /* MCU_CFG_SCG_FIRC_AUTOTRIM_CTRL_SUPPORT == STD_ON */
                           SCG_FIRCTCFG_TRIMDIV(pFircConfig->u16TrimDiv));
        /* PRQA S 2985 -- */
        SCG_HWA_SetFircTcfg(s_apScgBase[0], u32Temp);

        /* TRUP, TREN, STEN are cleared before, configure TRUP and EN together with TREN setting */
        u32Temp = (uint32)(SCG_FIRCCSR_TRUP(pFircConfig->bTrEn) |
                           SCG_FIRCCSR_TREN(pFircConfig->bTrEn) |
                           SCG_FIRCCSR_STEN(pFircConfig->bSten) | SCG_FIRCCSR_EN(1U));
        SCG_HWA_SetFircCsr(s_apScgBase[0], u32Temp);
        /* Wait FIRC clock stable */
        eStatus = SCG_WaitFircClockStable((boolean)TRUE);

        if (eStatus == SCG_STATUS_SUCCESS)
        {
            if ((boolean)TRUE == pFircConfig->bCm)
            {
                SCG_HWA_EnableFircClockMonitor(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisableFircClockMonitor(s_apScgBase[0]);
            }

            /* Configure FIRC DIV register */
            /*Disable DIVEN first*/
            SCG_HWA_DisableFircDiv(s_apScgBase[0]);
            /*Wait ack to be clear. [FMR_MCU_0003] */
            u32Temp = DIV_STABILIZATION_TIMEOUT;
            while (((boolean)FALSE == SCG_HWA_GetFircDivNoAck(s_apScgBase[0])) && (u32Temp > 0U))
            {
                u32Temp--;
            }

            if (0U == u32Temp)
            {
                eStatus = SCG_STATUS_TIMEOUT;
            }
            else
            {
                /* clang-format off */
                u32Temp = (uint32)((((uint32)pFircConfig->eDivH) & SCG_FIRCDIV_DIVH_MASK) |
                                   (((uint32)pFircConfig->eDivM << SCG_FIRCDIV_DIVM_SHIFT) & SCG_FIRCDIV_DIVM_MASK) |
                                   (((uint32)pFircConfig->eDivL << SCG_FIRCDIV_DIVL_SHIFT) & SCG_FIRCDIV_DIVL_MASK));
                /* clang-format on */
                /* Set DIV value */
                SCG_HWA_SetFircDiv(s_apScgBase[0], u32Temp);
                /* Enable DIVEN */
                SCG_HWA_EnableFircDiv(s_apScgBase[0]);
                /*Wait ack to be set. [FMR_MCU_0003] */
                u32Temp = DIV_STABILIZATION_TIMEOUT;
                while (((boolean)FALSE == SCG_HWA_GetFircDivAck(s_apScgBase[0])) && (u32Temp > 0U))
                {
                    u32Temp--;
                }
                if (0U == u32Temp)
                {
                    eStatus = SCG_STATUS_TIMEOUT;
                }
            }
        }
    }
    else
    {
        SCG_HWA_DisableFirc(s_apScgBase[0]);
    }

    /* Lock FIRC CSR register */
    SCG_HWA_LockFircCsrReg(s_apScgBase[0]);

    /* Save clock error notify */
    SCG_FircClockErrorNotify = pFircConfig->pNotify;

    return eStatus;
}

/**
 * @brief Disable PLLx .
 * @param eClock PLL0/PLL1 clock type, defined in SCG_PllClkType.
 * @return
 */
MCU_TEXT_SECTION SCG_StatusType SCG_DisablePLLClock(SCG_PllClkType eClock)
{
    SCG_StatusType eStatus = SCG_STATUS_ERROR;

    if (SCG_PLL0 == eClock)
    {
        /* Disable PLL0 clock */
        /* Unlock PLL0 CSR register first */
        SCG_HWA_UnlockPll0CsrReg(s_apScgBase[0]);

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
        SCG_HWA_DisablePll0_Clk1(s_apScgBase[0]);
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

#if (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON)
        SCG_HWA_DisablePll0_Clk2(s_apScgBase[0]);
#endif /* (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON) */

        SCG_HWA_DisablePll0(s_apScgBase[0]);

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
        /* FC73008MDQ/FC73004MDDT1C/FC73004MDST1C
         * 1. Disable PLL
         * 2. PLL force off
         */
        SCG_HWA_EnablePll0ForceOff(s_apScgBase[0]);
#else
        /* FC73008MDT/FC7240
         * 1. Disable PLL
         * 2. Disable fosc
         * 3. Set Pll_xCFG register to 0
         */
        SCG_HWA_UnlockFoscCsrReg(s_apScgBase[0]);
        SCG_HWA_DisableFosc(s_apScgBase[0]);
        SCG_HWA_SetPll0Cfg(s_apScgBase[0], 0U);
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */
        eStatus = SCG_WaitPllClockStable(SCG_PLL0, (boolean)FALSE);
    }
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    else if (SCG_PLL1 == eClock)
    {
        /* Disable PLL1 clock */
        /* Unlock PLL1 CSR register first */
        SCG_HWA_UnlockPll1CsrReg(s_apScgBase[0]);

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
        SCG_HWA_DisablePll1_Clk1(s_apScgBase[0]);
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

        SCG_HWA_DisablePll1(s_apScgBase[0]);

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
        /* FC73008MDQ/FC73004MDDT1C/FC73004MDST1C
         * 1. Disable PLL
         * 2. PLL force off
         */
        SCG_HWA_EnablePll1ForceOff(s_apScgBase[0]);
#else
        /* FC73008MDT/FC7240
         * 1. Disable PLL
         * 2. Disable fosc
         * 3. Set Pll_xCFG register to 0
         */
        SCG_HWA_UnlockFoscCsrReg(s_apScgBase[0]);
        SCG_HWA_DisableFosc(s_apScgBase[0]);
        SCG_HWA_SetPll1Cfg(s_apScgBase[0], 0U);
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

        eStatus = SCG_WaitPllClockStable(SCG_PLL1, (boolean)FALSE);
    }
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */
    else
    {
        /* Not PLLx clock, do nothing */
    }

    return eStatus;
}

/**
 * @brief Set PLL0 configuration.
 * @param pPll0Config: pointer to the PLL0Type structure data instance, which defined PLL0 initial
 * information.
 * @return PLL0 status. PLL0 would wait for PLL0 valid in while loop within pre-dinfined limited
 * time to check the PLL0 valid or not. If PLL0 still not valid(this may happen if external Fast OSC
 * not placed), it would return fail. PLL0 would check the status of input clock source(FIRC or
 * FOSC), if it is not valid, it would return FALSE.
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SetPLL0(const SCG_PllType *pPll0Config)
{
    SCG_StatusType eStatus = SCG_STATUS_SUCCESS;
    uint32         u32Temp;

    if ((boolean)TRUE == pPll0Config->bEnable)
    {
        /* Unlock PLL0 CSR register */
        SCG_HWA_UnlockPll0CsrReg(s_apScgBase[0]);

#if (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON)
        /* Configure PLL ECFG register */
        u32Temp = SCG_PLL0ECFG_MULT_MUX(pPll0Config->ePllMultMuxSel) |
                  SCG_PLL0ECFG_CLK1_MUX(pPll0Config->bPllClk1MuxExtraDiv2) |
                  SCG_PLL0ECFG_CLK_MUX(pPll0Config->bPllClkMuxExtraDiv2);

        SCG_HWA_SetPll0Ecfg(s_apScgBase[0], u32Temp);
#endif /* (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON) */

        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant. The value of the
         * result is always that of the left-hand operand. REASON: Generate code influence here. */
        /* Configure PLL CFG register */
        u32Temp = (uint32)(SCG_PLL0CFG_PREDIV(pPll0Config->u8Prediv) |
                           SCG_PLL0CFG_MULT(pPll0Config->u16Mult) |
                           SCG_PLL0CFG_PSTDIV(pPll0Config->ePstDiv) |
#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
                           SCG_PLL0CFG_PSTDIV1(pPll0Config->ePstDiv1) |
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */
                           SCG_PLL0CFG_SOURCE(pPll0Config->eSrc));

        SCG_HWA_SetPll0Cfg(s_apScgBase[0], u32Temp);
        /* PRQA S 2985 -- */
#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
#else
        SCG_HWA_SetCfgRegProt(s_apScgBase[0], (boolean)TRUE);
        SCG_HWA_EnablePll0FastStart(s_apScgBase[0]);
        SCG_HWA_SetCfgRegProt(s_apScgBase[0], (boolean)FALSE);
#endif /* MCU_CFG_SCG_PLL_CLK1_SUPPORT */

        /* Configure PLL CSR register, Pll0_Clk1 need to be enabled before Pll enable or write
         * PLL0CSR register together. */
        u32Temp = (uint32)(SCG_PLL0CSR_ERR_MASK | SCG_PLL0CSR_EN_MASK |
#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
                           SCG_PLL0CSR_CK1EN(pPll0Config->bPllClk1En) |
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */
#if (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON)
                           SCG_PLL0CSR_CK2EN(pPll0Config->bPllClk2En) |
#endif /* (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON) */
                           SCG_PLL0CSR_STEN(pPll0Config->bSten));
        SCG_HWA_SetPll0Csr(s_apScgBase[0], u32Temp);
        /*               Wait until PLL0 valid                       */
        eStatus = SCG_WaitPllClockStable(SCG_PLL0, (boolean)TRUE);

        if (eStatus == SCG_STATUS_SUCCESS)
        {
            if ((boolean)TRUE == pPll0Config->bCm)
            {
                SCG_HWA_EnablePll0ClockMonitor(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisablePll0ClockMonitor(s_apScgBase[0]);
            }

            if ((boolean)TRUE == pPll0Config->bCmre)
            {
                SCG_HWA_EnablePll0ClockMonitorReset(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisablePll0ClockMonitorReset(s_apScgBase[0]);
            }

            /* disable PLL0 DIVEN  */
            SCG_HWA_DisablePll0Div(s_apScgBase[0]);
            /* wait div ack to be clear */
            u32Temp = DIV_STABILIZATION_TIMEOUT;
            while (((boolean)FALSE == SCG_HWA_GetPll0DivNoAck(s_apScgBase[0])) && (u32Temp > 0U))
            {
                u32Temp--;
            }

            if (0U == u32Temp)
            {
                eStatus = SCG_STATUS_TIMEOUT;
            }
            else
            {
                /* clang-format off */
                    /* set div value */
                    u32Temp = (uint32)((((uint32)pPll0Config->eDivH) & SCG_PLL0DIV_DIVH_MASK) |
                                       (((uint32)pPll0Config->eDivM << SCG_PLL0DIV_DIVM_SHIFT) & SCG_PLL0DIV_DIVM_MASK) |
                                       (((uint32)pPll0Config->eDivL << SCG_PLL0DIV_DIVL_SHIFT) & SCG_PLL0DIV_DIVL_MASK));
                /* clang-format on */
                SCG_HWA_SetPll0Div(s_apScgBase[0], u32Temp);
                /* enable PLL0 DIVEN  */
                SCG_HWA_EnablePll0Div(s_apScgBase[0]);
                /* wait div ack to be set */
                u32Temp = DIV_STABILIZATION_TIMEOUT;
                while (((boolean)FALSE == SCG_HWA_GetPll0DivAck(s_apScgBase[0])) && (u32Temp > 0U))
                {
                    u32Temp--;
                }
                if (0U == u32Temp)
                {
                    eStatus = SCG_STATUS_TIMEOUT;
                }
            }
        }
        else
        {
            /* wait PLL0 valid & lock timeout. */
        }

        /* Lock PLL0 CSR register */
        SCG_HWA_LockPll0CsrReg(s_apScgBase[0]);

#if (MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT == STD_ON)
        /* set PLL0 behaviour after Loss of Lock */
        if ((boolean)TRUE == pPll0Config->bLossSwitch)
        {
            SCG_HWA_EnablePLL0Lolc(s_apScgBase[0]);
        }
        else
        {
            SCG_HWA_DisablePLL0Lolc(s_apScgBase[0]);
        }
#endif /* MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT == STD_ON */

        /* Save clock error notify */
        SCG_Pll0ClockErrorNotify = pPll0Config->pNotify;
    }
    else
    {
        /* PLL0 clock is not enabled, do nothing here */
    }

    return eStatus;
}

#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
/**
 * @brief Set PLL1 configuration.
 * @param pPll1Config: pointer to the PLL0Type structure data instance, which defined PLL1 initial
 * information.
 * @return PLL1 status. PLL1 would wait for PLL0 valid in while loop within pre-dinfined limited
 * time to check the PLL1 valid or not. If PLL1 still not valid(this may happen if external Fast OSC
 * not placed), it would return fail. PLL1 would check the status of input clock source(FIRC or
 * FOSC), if it is not valid, it would return FALSE.
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SetPLL1(const SCG_PllType *pPll1Config)
{
    SCG_StatusType eStatus = SCG_STATUS_SUCCESS;
    uint32         u32Temp;

    if ((boolean)TRUE == pPll1Config->bEnable)
    {
        /* Unlock PLL1 CSR register */
        SCG_HWA_UnlockPll1CsrReg(s_apScgBase[0]);

        /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant. The value of the
         * result is always that of the left-hand operand. REASON: Generate code influence here. */
        /* Configure PLL1 CFG register */
        u32Temp = (uint32)(SCG_PLL1CFG_PREDIV(pPll1Config->u8Prediv) |
                           SCG_PLL1CFG_MULT(pPll1Config->u16Mult) |
                           SCG_PLL1CFG_PSTDIV(pPll1Config->ePstDiv) |
#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
                           SCG_PLL1CFG_PSTDIV1(pPll1Config->ePstDiv1) |
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */
                           SCG_PLL1CFG_SOURCE(pPll1Config->eSrc));
        /* PRQA S 2985 -- */
        SCG_HWA_SetPll1Cfg(s_apScgBase[0], u32Temp);

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
        /* FC73008MDQ/FC73004MDDT1C/FC73004MDST1C */
#else
        /* FC73008MDT/FC7240 */
        SCG_HWA_SetCfgRegProt(s_apScgBase[0], (boolean)TRUE);
        SCG_HWA_EnablePll1FastStart(s_apScgBase[0]);
        SCG_HWA_SetCfgRegProt(s_apScgBase[0], (boolean)FALSE);
#endif /* MCU_CFG_SCG_PLL_CLK1_SUPPORT */

        /* Configure PLL1 CSR register, Pll0_Clk1 need to be enabled before Pll enable or write
         * PLL0CSR register together. */
        u32Temp = (uint32)(SCG_PLL1CSR_ERR_MASK | SCG_PLL1CSR_EN_MASK |
#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
                           SCG_PLL1CSR_CK1EN(pPll1Config->bPllClk1En) |
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */
                           SCG_PLL1CSR_STEN(pPll1Config->bSten));
        SCG_HWA_SetPll1Csr(s_apScgBase[0], u32Temp);
        /*               Wait until PLL1 valid                       */
        eStatus = SCG_WaitPllClockStable(SCG_PLL1, (boolean)TRUE);

        if (eStatus == SCG_STATUS_SUCCESS)
        {
            if ((boolean)TRUE == pPll1Config->bCm)
            {
                SCG_HWA_EnablePll1ClockMonitor(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisablePll1ClockMonitor(s_apScgBase[0]);
            }

            if ((boolean)TRUE == pPll1Config->bCmre)
            {
                SCG_HWA_EnablePll1ClockMonitorReset(s_apScgBase[0]);
            }
            else
            {
                SCG_HWA_DisablePll1ClockMonitorReset(s_apScgBase[0]);
            }

            /* disable PLL1 DIVEN */
            SCG_HWA_DisablePll1Div(s_apScgBase[0]);
            /* wait div ack to be clear */
            u32Temp = DIV_STABILIZATION_TIMEOUT;
            while (((boolean)FALSE == SCG_HWA_GetPll1DivNoAck(s_apScgBase[0])) && (u32Temp > 0U))
            {
                u32Temp--;
            }

            if (0U == u32Temp)
            {
                eStatus = SCG_STATUS_TIMEOUT;
            }
            else
            {
                /* clang-format off */
                    /* Set div value */
                    u32Temp = (uint32)((((uint32)pPll1Config->eDivH) & SCG_PLL1DIV_DIVH_MASK) |
                                       (((uint32)pPll1Config->eDivM << SCG_PLL1DIV_DIVM_SHIFT) & SCG_PLL1DIV_DIVM_MASK) |
                                       (((uint32)pPll1Config->eDivL << SCG_PLL1DIV_DIVL_SHIFT) & SCG_PLL1DIV_DIVL_MASK));
                    SCG_HWA_SetPll1Div(s_apScgBase[0], u32Temp);
                /* clang-format on */
                /* enable PLL1 DIVEN */
                SCG_HWA_EnablePll1Div(s_apScgBase[0]);
                /* wait div ack to be set */
                u32Temp = DIV_STABILIZATION_TIMEOUT;
                while (((boolean)FALSE == SCG_HWA_GetPll1DivAck(s_apScgBase[0])) && (u32Temp > 0U))
                {
                    u32Temp--;
                }
                if (0U == u32Temp)
                {
                    eStatus = SCG_STATUS_TIMEOUT;
                }
            }
        }
        else
        {
            /* wait PLL0 valid & lock timeout. */
        }

        /* Lock PLL1 CSR register */
        SCG_HWA_LockPll1CsrReg(s_apScgBase[0]);

#if (MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT == STD_ON)
        /* set PLL0 behaviour after Loss of Lock */
        if ((boolean)TRUE == pPll1Config->bLossSwitch)
        {
            SCG_HWA_EnablePLL1Lolc(s_apScgBase[0]);
        }
        else
        {
            SCG_HWA_DisablePLL1Lolc(s_apScgBase[0]);
        }
#endif /* MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT == STD_ON */

        /* Save clock error notify */
        SCG_Pll1ClockErrorNotify = pPll1Config->pNotify;
    }
    else
    {
        /* PLL1 clock is not enabled, do nothing here */
    }

    return eStatus;
}
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */

/**
 * @brief Set system run time clock and related CORE/BUS/SLOW clock.
 * @param pSysClkConfig: pointer to the clockCtrlType structure data instance,
 *        which defined for system clock selection.
 * @return System clock status. This function would check the clock source status before set it
 * system clock, if the chosen clock source is invalid, it would return FALSE.
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SetClkCtrl(const SCG_ClockCtrlType *pSysClkConfig)
{
    SCG_StatusType eStatus = SCG_STATUS_SUCCESS;
    uint32         u32Temp;

    switch (pSysClkConfig->eSrc)
    {
        case SCG_CLOCK_SRC_FOSC:
            if ((boolean)FALSE == SCG_HWA_GetFoscValid(s_apScgBase[0]))
            {
                eStatus = SCG_STATUS_PARAM_INVALID;
            }
            break;
        case SCG_CLOCK_SRC_FIRC:
            if ((boolean)FALSE == SCG_HWA_GetFircValid(s_apScgBase[0]))
            {
                eStatus = SCG_STATUS_PARAM_INVALID;
            }
            break;
        case SCG_CLOCK_SRC_PLL0:
            if (((boolean)FALSE == SCG_HWA_GetPll0Locked(s_apScgBase[0])) ||
                (((boolean)FALSE == SCG_HWA_GetPll0Valid(s_apScgBase[0]))))
            {
                eStatus = SCG_STATUS_PARAM_INVALID;
            }
            break;
#if (MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT == STD_ON)
        case SCG_CLOCK_SRC_SIRC:
            if ((boolean)FALSE == SCG_HWA_GetSircValid(s_apScgBase[0]))
            {
                eStatus = SCG_STATUS_PARAM_INVALID;
            }
            break;
#endif /* (MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT == STD_ON) */
        default:
            eStatus = SCG_STATUS_PARAM_INVALID;
            break;
    }

    if (SCG_STATUS_SUCCESS == eStatus)
    {
        /* Switch system clock from FIRC to user configuration clock */
        if ((SCG_CLOCK_SRC_FOSC == pSysClkConfig->eSrc)
#if (MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT == STD_ON)
            || (SCG_CLOCK_SRC_SIRC == pSysClkConfig->eSrc)
#endif /* (MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT == STD_ON) */
        )
        {
            /* user configuration is FOSC/SIRC, fast clock to slow clock, need switch clock source first */
            SCG_HWA_SwitchSystemClock(s_apScgBase[0], (uint8)(pSysClkConfig->eSrc));

            u32Temp = SCG_CLKSRC_STABILIZATION_TIMEOUT;
            while (((boolean)FALSE == SCG_HWA_GetSysClkUPRD(s_apScgBase[0])) && (u32Temp > 0U))
            {
                u32Temp--;
            }

            /*   Time out, clock select failed     */
            if (0U == u32Temp)
            {
                eStatus = SCG_STATUS_TIMEOUT;
            }
            else if (SCG_HWA_GetSysClkSrc(s_apScgBase[0]) != (uint8)pSysClkConfig->eSrc)
            {
                eStatus = SCG_STATUS_CLKSEL_ERROR;
            }
            else
            {
                /* do nothing */
            }
        }
        else
        {
            /* user configuration is FIRC/PLL0, slow clock to fast clock */
            /* do nothing here */
        }

        if (SCG_STATUS_SUCCESS == eStatus)
        {
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant. The value of the
             * result is always that of the left-hand operand. REASON: Generate code influence here. */
            /* Configure system control register */
            u32Temp = (uint32)((uint32)SCG_CCR_SYSCLK_CME(pSysClkConfig->bSysClkMonitor) |
                               (uint32)SCG_CCR_SCS(pSysClkConfig->eSrc) |
                               (uint32)SCG_CCR_DIVCORE(pSysClkConfig->eDivCore) |
                               (uint32)SCG_CCR_DIVBUS(pSysClkConfig->eDivBus) |
                               (uint32)SCG_CCR_DIVSLOW(pSysClkConfig->eDivSlow));
            /* PRQA S 2985 -- */
            SCG_HWA_SetCCR(s_apScgBase[0], u32Temp);

            u32Temp = SCG_CLKSRC_STABILIZATION_TIMEOUT;
            while (((boolean)FALSE == SCG_HWA_GetSysClkUPRD(s_apScgBase[0])) && (u32Temp > 0U))
            {
                u32Temp--;
            }

            /*   Time out, clock select failed     */
            if (0U == u32Temp)
            {
                eStatus = SCG_STATUS_TIMEOUT;
            }
            else if (SCG_HWA_GetSysClkSrc(s_apScgBase[0]) != (uint8)pSysClkConfig->eSrc)
            {
                eStatus = SCG_STATUS_CLKSEL_ERROR;
            }
            else
            {
                /* do nothing */
            }
        }
        else
        {
            /* Switch system clock source failed */
        }
    }

    return eStatus;
}

/**
 * @brief  Switch system clock source during run time.
 * @param eClock: target clock source user want to switch.
 * @return Switch clock source status. This function check if the clock source is in proper range.
 */
MCU_TEXT_SECTION SCG_StatusType SCG_SwitchClkCtrlSrc(SCG_ClockSrcType eClock)
{
    SCG_StatusType   eStatus = SCG_STATUS_SUCCESS;
    SCG_ClockSrcType eSysClkSrc;
    uint32           u32Temp;
    uint32           u32TempReg;

    switch (eClock)
    {
        case SCG_CLOCK_SRC_FOSC:
            if ((boolean)FALSE == SCG_HWA_GetFoscValid(s_apScgBase[0]))
            {
                eStatus = SCG_STATUS_PARAM_INVALID;
            }
            break;
        case SCG_CLOCK_SRC_FIRC:
            if ((boolean)FALSE == SCG_HWA_GetFircValid(s_apScgBase[0]))
            {
                eStatus = SCG_STATUS_PARAM_INVALID;
            }
            break;
        case SCG_CLOCK_SRC_PLL0:
            if (((boolean)FALSE == SCG_HWA_GetPll0Valid(s_apScgBase[0])) ||
                ((boolean)FALSE == SCG_HWA_GetPll0Locked(s_apScgBase[0])))
            {
                eStatus = SCG_STATUS_PARAM_INVALID;
            }
            break;
#if (MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT == STD_ON)
        case SCG_CLOCK_SRC_SIRC:
            if ((boolean)FALSE == SCG_HWA_GetSircValid(s_apScgBase[0]))
            {
                eStatus = SCG_STATUS_PARAM_INVALID;
            }
            break;
#endif /* ( MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT == STD_ON ) */
        default:
            eStatus = SCG_STATUS_PARAM_INVALID;
            break;
    }

    if (SCG_STATUS_SUCCESS == eStatus)
    {
        /* This part of code is based on target clock source is FIRC */
        eSysClkSrc = (SCG_ClockSrcType)SCG_HWA_GetSysClkSrc(s_apScgBase[0]);
        if (SCG_CLOCK_SRC_PLL0 != eSysClkSrc)
        {
            /* system clock source is FOSC/SIRC/FIRC, switch the clock source from a slow clock to a
               fast clock need change clock divider first, than switch system clock to FIRC(Set CCR reg).*/
            /* divider here is not user configuration,divcore=1, divbus=2, divslow=4
               just for prevent core/bus/slow clock from over run.  */
            u32TempReg = SCG_HWA_GetCCR(s_apScgBase[0]);
            u32TempReg &= ~(uint32)(SCG_CCR_SCS_MASK | SCG_CCR_DIVCORE_MASK | SCG_CCR_DIVBUS_MASK |
                                    SCG_CCR_DIVSLOW_MASK);
            /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 This operation is redundant. The value of the
             * result is always that of the left-hand operand. REASON: Code is need here. */
            u32TempReg |= (uint32)((uint32)SCG_CCR_SCS(eClock) |
                                   (uint32)SCG_CCR_DIVCORE(SCG_CLOCK_DIV_BY1) |
                                   (uint32)SCG_CCR_DIVBUS(SCG_CLOCK_DIV_BY2) |
                                   (uint32)SCG_CCR_DIVSLOW(SCG_CLOCK_DIV_BY4));
            /* PRQA S 2985 -- */
            SCG_HWA_SetCCR(s_apScgBase[0], u32TempReg);
        }
        else
        {
            /* To switch the clock source from a fast clock to a slow clock,
               need switch clock source first,prevent core/bus/slow clock from over run.*/
            /* Switch system clock */
            SCG_HWA_SwitchSystemClock(s_apScgBase[0], (uint8)eClock);
        }

        u32Temp = SCG_CLKSRC_STABILIZATION_TIMEOUT;
        while (((boolean)FALSE == SCG_HWA_GetSysClkUPRD(s_apScgBase[0])) && (u32Temp > 0U))
        {
            u32Temp--;
        }
        /*   Time out, clock select failed     */
        if (0U == u32Temp)
        {
            eStatus = SCG_STATUS_TIMEOUT;
        }
        else if (SCG_HWA_GetSysClkSrc(s_apScgBase[0]) != (uint8)eClock)
        {
            eStatus = SCG_STATUS_CLKSEL_ERROR;
        }
        else
        {
            /* do nothing */
        }
    }

    return eStatus;
}

/**
 * @brief  Set clock out source in SCG. it set SCG_CLKOUTCFG [CLKOUTSEL].
 * @param pSysClkConfig: pointer to the clockCtrlType structure data instance,
 *        which defined for system clock selection.
 */
MCU_TEXT_SECTION void SCG_SetClkOut(const SCG_ClockCtrlType *pSysClkConfig)
{
    uint32              u32Temp;
    SCG_ClockoutSrcType eClockOutSrc;
    SCG_NvmClkSrcType   eNvmClockSrc;
    SCG_Cmu4ClkSrcType  eCmu4ClkSrc;

    eClockOutSrc = pSysClkConfig->eClkOutSrc;
    eNvmClockSrc = pSysClkConfig->eNvmClkSrc;
    eCmu4ClkSrc  = pSysClkConfig->eCmu4ClkSrc;

    /* Clear NVMCLK source first and clear clock out source select */
    SCG_HWA_SetClkOutCfg(s_apScgBase[0], 0U);

    /*   enable configured NVMCLK source          */
    if (eNvmClockSrc == SCG_NVMCLK_SRC_FIRC)
    {
        u32Temp = (uint32)(SCG_CLKOUTCFG_NVMCLK_FIRC_MASK);
    }
    else
    {
        u32Temp = (uint32)(SCG_CLKOUTCFG_NVMCLK_SIRC_MASK);
    }

    /*   enable configured CMU4CLK source          */
    if (eCmu4ClkSrc == SCG_CMU4CLK_SRC_FOSC)
    {
        u32Temp |= (uint32)(SCG_CLKOUTCFG_CMU4CLK_FOSC_MASK);
    }
    else
    {
        u32Temp |= (uint32)(SCG_CLKOUTCFG_CMU4CLK_SIRC_MASK);
    }

    /*   configure clockout source          */
    u32Temp |= (uint32)(SCG_CLKOUTCFG_CLKOUTSEL(eClockOutSrc));
    SCG_HWA_SetClkOutCfg(s_apScgBase[0], u32Temp);
}

/**
 * @brief Get SCG clock status
 *
 * @param eClock SCG clock
 * @return true: SCG clock is valid, false: SCG clock is invalid or parameter invalid
 */
MCU_TEXT_SECTION boolean SCG_GetClockStatus(SCG_ClkSrcType eClock)
{
    boolean bClkStatus = (boolean)FALSE;
    switch (eClock)
    {
        case SCG_SIRC_CLK:
            bClkStatus = (boolean)TRUE;
            break;
        case SCG_SIRC32K_CLK:
            bClkStatus = SCG_HWA_GetSirc32kValid(s_apScgBase[0]);
            break;
        case SCG_FIRC_CLK:
            bClkStatus = SCG_HWA_GetFircValid(s_apScgBase[0]);
            break;
        case SCG_FOSC_CLK:
            bClkStatus = SCG_HWA_GetFoscValid(s_apScgBase[0]);
            break;
        case SCG_PLL0_CLK:
            bClkStatus = (SCG_HWA_GetPll0Locked(s_apScgBase[0]) &&
                          SCG_HWA_GetPll0Valid(s_apScgBase[0]));
            break;
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
        case SCG_PLL1_CLK:
            bClkStatus = (SCG_HWA_GetPll1Locked(s_apScgBase[0]) &&
                          SCG_HWA_GetPll1Valid(s_apScgBase[0]));
            break;
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */
        case SCG_SOSC_CLK:
            bClkStatus = SCG_HWA_GetSoscValid(s_apScgBase[0]);
            break;
        case SCG_FOSCDIVL_CLK:
            bClkStatus = SCG_HWA_GetFoscDivLValid(s_apScgBase[0]);
            break;
        default:
            /* do nothing*/
            break;
    }

    return bClkStatus;
}

/**
 * @brief Get PLL clock enable status
 *
 * @param eClock SCG clock
 * @return true: PLL clock is enable, false: PLL clock is disable
 */
MCU_TEXT_SECTION boolean SCG_GetPllEnableStatus(SCG_ClkSrcType eClock)
{
    boolean bClkStatus;

    if (SCG_PLL0_CLK == eClock)
    {
        bClkStatus = SCG_HWA_GetPll0Enable(s_apScgBase[0]);
    }
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    else if (SCG_PLL1_CLK == eClock)
    {
        bClkStatus = SCG_HWA_GetPll1Enable(s_apScgBase[0]);
    }
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */
    else
    {
        bClkStatus = (boolean)FALSE;
    }

    return bClkStatus;
}

/**
 * @brief Get SCG CMU4 clock source
 *
 * @return SCG_Cmu4ClkSrcType: CMU4 clock source SIRC/FOSC
 */
MCU_TEXT_SECTION SCG_Cmu4ClkSrcType SCG_GetCMU4ClockSrc(void)
{
    uint32 u32Temp = SCG_HWA_GetClkOutCfg(s_apScgBase[0]);

    return (((u32Temp & SCG_CLKOUTCFG_CMU4CLK_FOSC_MASK) == SCG_CLKOUTCFG_CMU4CLK_FOSC_MASK) ?
                SCG_CMU4CLK_SRC_FOSC :
                SCG_CMU4CLK_SRC_SIRC);
}

/**
 * @brief Get system clock source
 *
 * @return System clock source type
 */
MCU_TEXT_SECTION SCG_ClockSrcType SCG_GetSysClockSrc(void)
{
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type Reason: No problem doing this as the value is within range of
     * the cast type. */
    return (SCG_ClockSrcType)SCG_HWA_GetSysClkSrc(s_apScgBase[0]);
    /* PRQA S 4342-- */
}

/**
 * @brief Get system clock valid
 *
 * @return true-valid false-invalid
 */
MCU_TEXT_SECTION boolean SCG_GetSysClockValid(void)
{
    boolean          bClkStatus;
    SCG_ClockSrcType eSysClkSel;

    eSysClkSel = SCG_GetSysClockSrc();
    if (SCG_CLOCK_SRC_FOSC == eSysClkSel)
    {
        bClkStatus = SCG_HWA_GetFoscValid(s_apScgBase[0]);
    }
    else if (SCG_CLOCK_SRC_FIRC == eSysClkSel)
    {
        bClkStatus = SCG_HWA_GetFircValid(s_apScgBase[0]);
    }
    else if (SCG_CLOCK_SRC_PLL0 == eSysClkSel)
    {
        bClkStatus = (SCG_HWA_GetPll0Valid(s_apScgBase[0]) && SCG_HWA_GetPll0Locked(s_apScgBase[0]));
    }
    else
    {
        bClkStatus = (boolean)FALSE;
    }
    return bClkStatus;
}

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
/**
 * @brief Gate off PLL0_CLK1 and PLL1_CLK1 before entry standby mode
 *
 */
MCU_TEXT_SECTION void SCG_GateOffPllxClk1BeforeStandby(void)
{
    if (SCG_PLL0CSR_CK1EN_MASK == ((SCG_HWA_GetPll0Csr(s_apScgBase[0])) & SCG_PLL0CSR_CK1EN_MASK))
    {
        /* PLL0 CSR register */
        SCG_HWA_UnlockPll0CsrReg(s_apScgBase[0]);
        SCG_HWA_DisablePll0_Clk1(s_apScgBase[0]);
#if (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON)
        SCG_HWA_DisablePll0_Clk2(s_apScgBase[0]);
#endif /* (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON) */
        SCG_HWA_LockPll0CsrReg(s_apScgBase[0]);
    }
    else
    {
        /* Nothing */
    }

#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    if (SCG_PLL1CSR_CK1EN_MASK == ((SCG_HWA_GetPll1Csr(s_apScgBase[0])) & SCG_PLL1CSR_CK1EN_MASK))
    {
        /* PLL1 CSR register */
        SCG_HWA_UnlockPll1CsrReg(s_apScgBase[0]);
        SCG_HWA_DisablePll1_Clk1(s_apScgBase[0]);
        SCG_HWA_LockPll1CsrReg(s_apScgBase[0]);
    }
    else
    {
        /* Nothing */
    }
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */
}
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

/**
 * @brief SCG clock error notification
 *
 * @note  [FUNC_MCU_0028]
 */
MCU_TEXT_SECTION void SCG_UserIRQHandler(void)
{
    if (((boolean)TRUE == SCG_HWA_CheckAndClearSoscClkErr(s_apScgBase[0])) &&
        (NULL_PTR != SCG_SoscClockErrorNotify))
    {
        SCG_SoscClockErrorNotify();
    }

    if (((boolean)TRUE == SCG_HWA_CheckAndClearFoscClkErr(s_apScgBase[0])) &&
        (NULL_PTR != SCG_FoscClockErrorNotify))
    {
        SCG_FoscClockErrorNotify();
    }

    if (((boolean)TRUE == SCG_HWA_CheckAndClearFircClkErr(s_apScgBase[0])) &&
        (NULL_PTR != SCG_FircClockErrorNotify))
    {
        SCG_FircClockErrorNotify();
    }

    if (((boolean)TRUE == SCG_HWA_CheckAndClearSircClkErr(s_apScgBase[0])) &&
        (NULL_PTR != SCG_SircClockErrorNotify))
    {
        SCG_SircClockErrorNotify();
    }

    if (((boolean)TRUE == SCG_HWA_CheckAndClearPll0ClkErr(s_apScgBase[0])) &&
        (NULL_PTR != SCG_Pll0ClockErrorNotify))
    {
        SCG_Pll0ClockErrorNotify();
    }

#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    if (((boolean)TRUE == SCG_HWA_CheckAndClearPll1ClkErr(s_apScgBase[0])) &&
        (NULL_PTR != SCG_Pll1ClockErrorNotify))
    {
        SCG_Pll1ClockErrorNotify();
    }
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */
}

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
