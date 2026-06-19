/**
 *   @file    Mcu_Smc.c
 *   @version 1.5.1
 *
 *   @brief AUTOSAR Mcu - Smc driver source file.
 *   @details  This is the low level driver source file, mainly implemented for the Smc hardware IP.
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
/* PRQA S 1006 EOF #Misra-C:2012 Rule-4.2 This in-line assembler construct is a language extension.
 * The code has been ignored. REASON: The use of this inline assembly is documented.. */
/* PRQA S 3006 EOF #Misra-C:2012 Rule-4.3 This function contains a mixture of in-line assembler
 * statements and C statements. REASON: The assembly statement has been encapsulated and isolated.
 */

#ifdef __cplusplus
extern "C"
{
#endif

#include "SchM_Mcu.h"
#include "Mcu_Smc.h"
#include "Mcu_CM7_RegOps.h"

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
#include "Mcu_Scg.h"
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
/* clang-format off */
/**
 *              Local pointer to the instance handler
 */
#define MCU_START_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"

MCU_DATA_SECTION static SMC_Type *const s_apSmcBase[SMC_INSTANCE_COUNT] = SMC_BASE_PTRS;

MCU_DATA_SECTION static FC7XXX_SCB_Type *const s_apScbBase[FC7XXX_SCB_INSTANCE_COUNT] = FC7XXX_SCB_BASE_PTRS;

#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"
/* clang-format on */
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                        LOCAL FUNCTION
==================================================================================================*/

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
static boolean SMC_GetAon32kClockStatus(void);
static boolean SMC_GetRtcClockStatus(void);
static boolean SMC_GetAonClockStatus(void);
#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTION
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"
/**
 * @brief Set system mode
 *
 * @param eMode Smc configuration mode
 */
MCU_TEXT_SECTION void SMC_SetSystemMode(SMC_ModeType eMode)
{
    /* Operation EXCLUSIVE_AREA here to avoid entering standby encounter interrupt  */
    SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00();
    switch (eMode)
    {
        case SMC_MODE_RUN:
            /* Clear the SLEEPDEEP bit to disable deep sleep mode */
            CM7_HWA_DisableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            break;

#if (MCU_CFG_SMC_CORELP_SUPPORT == STD_ON)
        case SMC_MODE_CORELP_SLEEP:
            /* Clear the SLEEPDEEP bit to disable deep sleep mode */
            CM7_HWA_DisableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            /* Cpu is going into sleep state */
            EXECUTE_WAIT();
            break;

        case SMC_MODE_CORELP_DEEPSLEEP:
            /* Clear the SLEEPDEEP bit to disable deep sleep mode */
            CM7_HWA_EnableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            /* Cpu is going into sleep state */
            EXECUTE_WAIT();
            break;
#else
        case SMC_MODE_WAIT:
            /* Clear the SLEEPDEEP bit to disable deep sleep mode */
            CM7_HWA_DisableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            /* Cpu is going into sleep state */
            EXECUTE_WAIT();
            break;
#endif /*(MCU_CFG_SMC_CORELP_SUPPORT == STD_ON)*/

        case SMC_MODE_STOP:
            /* switch smc mode to stop mode */
            SMC_HWA_SetStopModeCtrl(s_apSmcBase[0], SMC_STOP_MODE);
            /* Set the SLEEPDEEP bit to enable deep sleep mode (STOP)*/
            CM7_HWA_EnableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            /* Cpu is going into deep sleep state */
            EXECUTE_WAIT();
            break;

        case SMC_MODE_STANDBY_0:
            /* select standby mode*/
            SMC_HWA_SetStandbyMode(s_apSmcBase[0], SMC_CFG_STANDBY_0);
            /* switch smc mode to standby mode */
            SMC_HWA_SetStopModeCtrl(s_apSmcBase[0], SMC_STANDBY_MODE);
            /* Set the SLEEPDEEP bit to enable deep sleep mode */
            CM7_HWA_EnableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            /* Cpu is going into deep sleep state */
            EXECUTE_WAIT();
            break;

        case SMC_MODE_STANDBY_1:
            /* select standby mode*/
            SMC_HWA_SetStandbyMode(s_apSmcBase[0], SMC_CFG_STANDBY_1);
            /* switch smc mode to standby mode */
            SMC_HWA_SetStopModeCtrl(s_apSmcBase[0], SMC_STANDBY_MODE);
            /* Set the SLEEPDEEP bit to enable deep sleep mode */
            CM7_HWA_EnableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            /* Cpu is going into deep sleep state */
            EXECUTE_WAIT();
            break;

        case SMC_MODE_STANDBY_2:
            /* select standby mode*/
            SMC_HWA_SetStandbyMode(s_apSmcBase[0], SMC_CFG_STANDBY_2);
            /* switch smc mode to standby mode */
            SMC_HWA_SetStopModeCtrl(s_apSmcBase[0], SMC_STANDBY_MODE);
            /* Set the SLEEPDEEP bit to enable deep sleep mode */
            CM7_HWA_EnableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            /* Cpu is going into deep sleep state */
            EXECUTE_WAIT();
            break;

        case SMC_MODE_STANDBY_3:
            /* select standby mode*/
            SMC_HWA_SetStandbyMode(s_apSmcBase[0], SMC_CFG_STANDBY_3);
            /* switch smc mode to standby mode */
            SMC_HWA_SetStopModeCtrl(s_apSmcBase[0], SMC_STANDBY_MODE);
            /* Set the SLEEPDEEP bit to enable deep sleep mode */
            CM7_HWA_EnableDeepSleep(s_apScbBase[0]);
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            /* Cpu is going into deep sleep state */
            EXECUTE_WAIT();
            break;
        default:
            SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00();
            break;
    }
}

/**
 * @brief Generate software reset
 *
 */
MCU_TEXT_SECTION void CM7_GenerateSystemReset(void)
{
    CM7_HWA_SystemReset(s_apScbBase[0]);
}

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
/**
 * @brief Get SMC Aon32k clock status
 *
 * @return TRUE: clock is valid; FALSE: clock is invalid or parameter is invalid
 */
MCU_TEXT_SECTION static boolean SMC_GetAon32kClockStatus(void)
{
    boolean bStatus  = (boolean)FALSE;
    uint8   u8ClkVal = 0U;

    u8ClkVal = SMC_HWA_GetAon32kClk(s_apSmcBase[0]);
    if (((boolean)TRUE == SMC_HWA_GetSircDiv32KClk(s_apSmcBase[0])) &&
        ((uint8)SMC_AON32K_SIRCDIV_32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SOSC_CLK)) &&
             ((uint8)SMC_AON32K_SOSC32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SIRC32K_CLK)) &&
             ((uint8)SMC_AON32K_SIRC32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else
    {
        bStatus = (boolean)FALSE;
    }
    return bStatus;
}

/**
 * @brief Get SMC Rtc clock status
 *
 * @return TRUE: clock is valid; FALSE: clock is invalid or parameter is invalid
 */
MCU_TEXT_SECTION static boolean SMC_GetRtcClockStatus(void)
{
    boolean bStatus  = (boolean)FALSE;
    uint8   u8ClkVal = 0U;

    u8ClkVal = SMC_HWA_GetRtcClk(s_apSmcBase[0]);
    if (((boolean)TRUE == SCG_GetClockStatus(SCG_FOSCDIVL_CLK)) &&
        ((uint8)SMC_RTC_FOSCDIVL_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SMC_HWA_GetSircDiv32KClk(s_apSmcBase[0])) &&
             ((uint8)SMC_RTC_SIRCDIV_32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SOSC_CLK)) &&
             ((uint8)SMC_RTC_SOSC_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SIRC32K_CLK)) &&
             ((uint8)SMC_RTC_SIRC32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else
    {
        bStatus = (boolean)FALSE;
    }
    return bStatus;
}

/**
 * @brief Get SMC Aon clock status
 *
 * @return TRUE: clock is valid; FALSE: clock is invalid or parameter is invalid
 */
MCU_TEXT_SECTION static boolean SMC_GetAonClockStatus(void)
{
    boolean bStatus  = (boolean)FALSE;
    uint8   u8ClkVal = 0U;

    u8ClkVal = SMC_HWA_GetAonClk(s_apSmcBase[0]);
    if (((boolean)TRUE == SCG_GetClockStatus(SCG_SIRC_CLK)) &&
        ((uint8)SMC_AON_SIRCDIV_128K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SIRC32K_CLK)) &&
             ((uint8)SMC_AON_SIRC32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SMC_HWA_GetSircDiv32KClk(s_apSmcBase[0])) &&
             ((uint8)SMC_AON_SIRCDIV_32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SMC_HWA_GetSirc32KDiv1KClk(s_apSmcBase[0])) &&
             ((uint8)SMC_AON_SIRC32_1K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else
    {
        bStatus = (boolean)FALSE;
    }
    return bStatus;
}

/**
 * @brief set clock out. with clock out pin configure, the clock would be monitored.
 *        This Function may combined with SCG_cckout setting
 *        need to call SCG_SetClkOut,if clock out source set to SCG CLKOUT.
 *
 * @param pSmcClkOut pointer to SmcClkOut instance for clock out configuration
 */
MCU_TEXT_SECTION void SMC_SetClockout(const SMC_ClkoutType *pSmcClkOut)
{
    uint32 u32Temp;

    /* configuration sequence
       1. Disable CLKOUTEN
       2. Set CLKOUTSEL
       3. Enable CLKOUTEN    */
    SMC_HWA_DisableClockOut(s_apSmcBase[0]);

    if ((boolean)TRUE == pSmcClkOut->bEnable)
    {
        /* configure CLKOUT */
        u32Temp = (uint32)(SMC_CLKOUT_CTRL_CLKOUT_SEL(pSmcClkOut->eSource) |
                           SMC_CLKOUT_CTRL_CLKOUT_DIV(pSmcClkOut->eDivider));
        SMC_HWA_SetClkOutCtrl(s_apSmcBase[0], u32Temp);

        /* enable SMC CLKOUT */
        SMC_HWA_EnableClockOut(s_apSmcBase[0]);
    }
    else
    {
        /* Nothing to do */
    }
}

/**
 * @brief set always on clock source configuration include AON32K, RTC, AONCLK clock.
 *
 * @param pAonclkSrcType pointer to AONCLKSEL instance for AON clock source configuration
 */
MCU_TEXT_SECTION void SMC_SetAonClkSrc(const SMC_AONCLKSELType *pAonclkSrcType)
{
    /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer
     * to object and an integer type Reason: Pointer used to read register operation could not be avoid */
    uint32 u32Temp = s_apSmcBase[0]->AONCLKSEL;
    /* PRQA S 0306 -- */

    u32Temp &= ~(uint32)(SMC_AONCLKSEL_AONCLKSEL_MASK | SMC_AONCLKSEL_AON32KCLKSEL_MASK |
                         SMC_AONCLKSEL_RTCCLKSEL_MASK);
    u32Temp |= (uint32)(SMC_AONCLKSEL_AONCLKSEL(pAonclkSrcType->eAonSel) |
                        SMC_AONCLKSEL_AON32KCLKSEL(pAonclkSrcType->eAon32KSel) |
                        SMC_AONCLKSEL_RTCCLKSEL(pAonclkSrcType->eRtcSel));

    u32Temp &= ~(uint32)SMC_AONCLKSEL_AON1KCLKEN_MASK;
    if (pAonclkSrcType->eAonSel == SMC_AON_SIRC32_1K_CLK)
    {
        u32Temp |= (uint32)SMC_AONCLKSEL_AON1KCLKEN_MASK;
    }

    u32Temp &= ~(uint32)SMC_AONCLKSEL_SIRCDIV32KEN_MASK;
    if ((pAonclkSrcType->eAonSel == SMC_AON_SIRCDIV_32K_CLK) ||
        (pAonclkSrcType->eAon32KSel == SMC_AON32K_SIRCDIV_32K_CLK) ||
        (pAonclkSrcType->eRtcSel == SMC_RTC_SIRCDIV_32K_CLK))
    {
        u32Temp |= (uint32)SMC_AONCLKSEL_SIRCDIV32KEN_MASK;
    }
    SMC_HWA_SetAonClkReg(s_apSmcBase[0], u32Temp);
}

/**
 * @brief Get SMC clock status
 *
 * @param eSmcClockName SMC AONCLKSEL register clock source select
 * @return TRUE: SMC clock is valid; FALSE: SMC clock is invalid or parameter is invalid
 */
MCU_TEXT_SECTION boolean SMC_GetSmcClockStatus(SMC_ClkSrcType eSmcClockName)
{
    boolean bStatus = (boolean)FALSE;

    if (SMC_AON32K_CLK == eSmcClockName)
    {
        bStatus = SMC_GetAon32kClockStatus();
    }
    else if (SMC_RTC_CLK == eSmcClockName)
    {
        bStatus = SMC_GetRtcClockStatus();
    }
    else
    {
        bStatus = SMC_GetAonClockStatus();
    }
    return bStatus;
}

/**
 * @brief Configure the low power wakeup PAD output in SMC_LP_WAKEUP register
 *
 * @param SMC_LPWakeUpPadType the low power wakeup PAD source and polarity configuration
 */
MCU_TEXT_SECTION void SMC_SetLPWakeUpPad(const SMC_LPWakeUpPadType *pLPWakeUpPad)
{
    uint8  u8Index;
    uint32 u32RegVal;

    /* Unlock SMC important registers */
    SMC_HWA_SetPmportReg(s_apSmcBase[0], 0U);

    /* Get IO lock status */
    u32RegVal = SMC_HWA_GetIolockReg(s_apSmcBase[0]);

    for (u8Index = 0U; u8Index < LP_WAKEUP_PAD_NUM; u8Index++)
    {
        SMC_HWA_SetLPWakeUpPadSrc(s_apSmcBase[0],
                                  pLPWakeUpPad[u8Index].u8LPWakeUpPadNum,
                                  (uint8)(pLPWakeUpPad[u8Index].eLpWakeUpPadSel));
        SMC_HWA_SetLPWakeUpPadPol(s_apSmcBase[0],
                                  pLPWakeUpPad[u8Index].u8LPWakeUpPadNum,
                                  (uint8)(pLPWakeUpPad[u8Index].eLpWakeUpPadPolSel));

        if (SMC_LPWAKEUP_PAD_DISABLE != (pLPWakeUpPad[u8Index].eLpWakeUpPadSel))
        {
            /* Default enable iolock when wakeuppad is enabled */
            u32RegVal |= (1U << (SMC_IOLOCK_CTRL0_SHIFT - (pLPWakeUpPad[u8Index].u8LPWakeUpPadNum)));
        }
        else
        {
            /* Disable iolock when wakeuppad is disabled */
            u32RegVal &= ~(1U << (SMC_IOLOCK_CTRL0_SHIFT - (pLPWakeUpPad[u8Index].u8LPWakeUpPadNum)));
        }
    }
    /* Set IO lock status */
    SMC_HWA_SetIolockReg(s_apSmcBase[0], u32RegVal);
}

/**
 * @brief Configure SMC mixed used control
 *
 * @param SMC_MixedUsedType SMC mixed used control
 */
MCU_TEXT_SECTION void SMC_SetMixedUsedConfiguration(const SMC_MixedUsedType *pMixedUsedConfig)
{
#if (MCU_CFG_SMC_LP_GOOD_SUPPORT == STD_ON)
    uint32 u32Temp;
#endif /* (MCU_CFG_SMC_LP_GOOD_SUPPORT == STD_ON) */

    /* Unlock SMC important registers */
    SMC_HWA_SetPmportReg(s_apSmcBase[0], 0U);

#if (MCU_CFG_SMC_SRAM2_RENTENTION_MODE_SUPPORT == STD_ON)
    /* Set SRAM2 block retention control */
    SMC_HWA_SetRamretReg(s_apSmcBase[0], (uint32)(pMixedUsedConfig->eRamRetenSel));
#endif /* (MCU_CFG_SMC_SRAM2_RENTENTION_MODE_SUPPORT == STD_ON) */

#if (MCU_CFG_SMC_LP_GOOD_SUPPORT == STD_ON)
    /* PG Contrl */
    if ((boolean)TRUE == pMixedUsedConfig->tPGCtrlConifg.bEnable)
    {
        u32Temp = (uint32)(SMC_PGCTRL_PG_EN_MASK | SMC_PGCTRL_PG_LOCK_EN_MASK |
                           SMC_PGCTRL_PG_LOCK_SEL(pMixedUsedConfig->tPGCtrlConifg.ePGLockSel) |
                           SMC_PGCTRL_PG_POL(pMixedUsedConfig->tPGCtrlConifg.ePGActivePol));
    }
    else
    {
        /* clang-format off */
        /* Disable PG control, u32Temp = 0U */
        u32Temp = 0U;
        /* Set standby exit postpone count through PCUCtrl when LP_GOOD is not used. */
        SMC_HWA_SetPcuctrlReg(s_apSmcBase[0], SMC_PCU_CTRL_RPM_EXIT_CNT(pMixedUsedConfig->tPGCtrlConifg.u16RpmExitCnt));
        /* clang-format on */
    }

    SMC_HWA_SetPgctrlReg(s_apSmcBase[0], u32Temp);
#else
    /* clang-format off */
    /* Set standby exit postpone count through PCUCtrl when LP_GOOD is not used. */
    SMC_HWA_SetPcuctrlReg(s_apSmcBase[0], SMC_PCU_CTRL_RPM_EXIT_CNT(pMixedUsedConfig->tPGCtrlConifg.u16RpmExitCnt));
    /* clang-format on */
#endif /* (MCU_CFG_SMC_LP_GOOD_SUPPORT == STD_ON) */
}

#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)  */

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
