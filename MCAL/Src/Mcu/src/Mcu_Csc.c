/**
 *   @file    Mcu_Csc.c
 *   @version 1.5.1
 *
 *   @brief AUTOSAR Mcu - Csc driver source file.
 *   @details  This is the low level driver source file, mainly implemented for the Csc hardware IP.
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

#include "Mcu_Csc.h"
#include "Mcu_Scg.h"

#if (MCU_CFG_CSC0_INIT_API_SUPPORT == STD_ON)

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

MCU_DATA_SECTION static CSC0_Type *const s_apCsc0Base[CSC0_INSTANCE_COUNT] = CSC0_BASE_PTRS;

#define MCU_STOP_SEC_CONST_UNSPECIFIED
#include "Mcu_MemMap.h"
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                        LOCAL FUNCTION
==================================================================================================*/
static boolean CSC0_GetAon32kClockStatus(void);
static boolean CSC0_GetRtcClockStatus(void);
static boolean CSC0_GetAonClockStatus(void);

/*==================================================================================================
                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTION
==================================================================================================*/
#define MCU_START_SEC_CODE
#include "Mcu_MemMap.h"

/**
 * @brief Get CSC0 Aon32k clock status
 *
 * @return TRUE: clock is valid; FALSE: clock is invalid or parameter is invalid
 */
MCU_TEXT_SECTION static boolean CSC0_GetAon32kClockStatus(void)
{
    boolean bStatus  = (boolean)FALSE;
    uint8   u8ClkVal = 0U;

    u8ClkVal = CSC0_HWA_GetAon32kClk(s_apCsc0Base[0]);
    if (((boolean)TRUE == CSC0_HWA_GetSircDiv32KClk(s_apCsc0Base[0])) &&
        ((uint8)CSC0_AON32K_SIRCDIV_32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SOSC_CLK)) &&
             ((uint8)CSC0_AON32K_SOSC32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SIRC32K_CLK)) &&
             ((uint8)CSC0_AON32K_SIRC32K_CLK == u8ClkVal))
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
 * @brief Get CSC0 Rtc clock status
 *
 * @return TRUE: clock is valid; FALSE: clock is invalid or parameter is invalid
 */
MCU_TEXT_SECTION static boolean CSC0_GetRtcClockStatus(void)
{
    boolean bStatus  = (boolean)FALSE;
    uint8   u8ClkVal = 0U;

    u8ClkVal = CSC0_HWA_GetRtcClk(s_apCsc0Base[0]);
    if (((boolean)TRUE == SCG_GetClockStatus(SCG_FOSCDIVL_CLK)) &&
        ((uint8)CSC0_RTC_FOSCDIVL_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == CSC0_HWA_GetSircDiv32KClk(s_apCsc0Base[0])) &&
             ((uint8)CSC0_RTC_SIRCDIV_32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SOSC_CLK)) &&
             ((uint8)CSC0_RTC_SOSC_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SIRC32K_CLK)) &&
             ((uint8)CSC0_RTC_SIRC32K_CLK == u8ClkVal))
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
 * @brief Get CSC0 Aon clock status
 *
 * @return TRUE: clock is valid; FALSE: clock is invalid or parameter is invalid
 */
MCU_TEXT_SECTION static boolean CSC0_GetAonClockStatus(void)
{
    boolean bStatus  = (boolean)FALSE;
    uint8   u8ClkVal = 0U;

    u8ClkVal = CSC0_HWA_GetAonClk(s_apCsc0Base[0]);
    if (((boolean)TRUE == SCG_GetClockStatus(SCG_SIRC_CLK)) &&
        ((uint8)CSC0_AON_SIRCDIV_128K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == SCG_GetClockStatus(SCG_SIRC32K_CLK)) &&
             ((uint8)CSC0_AON_SIRC32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == CSC0_HWA_GetSircDiv32KClk(s_apCsc0Base[0])) &&
             ((uint8)CSC0_AON_SIRCDIV_32K_CLK == u8ClkVal))
    {
        bStatus = (boolean)TRUE;
    }
    else if (((boolean)TRUE == CSC0_HWA_GetSirc32KDiv1KClk(s_apCsc0Base[0])) &&
             ((uint8)CSC0_AON_SIRC32_1K_CLK == u8ClkVal))
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
 * @param pCsc0ClkOut pointer to Csc0ClkOut instance for clock out configuration
 */
MCU_TEXT_SECTION void CSC0_SetClockout(const CSC0_ClkoutType *pCsc0ClkOut)
{
    uint32 u32Temp;

    /* configuration sequence
       1. Disable CLKOUTEN
       2. Set CLKOUTSEL
       3. Enable CLKOUTEN    */
    CSC0_HWA_DisableClockOut(s_apCsc0Base[0]);

    if ((boolean)TRUE == pCsc0ClkOut->bEnable)
    {
        /* configure CLKOUT */
        u32Temp = (uint32)(CSC0_CLKOUT_CTRL_CLKOUT_SEL(pCsc0ClkOut->eSource) |
                           CSC0_CLKOUT_CTRL_CLKOUT_DIV(pCsc0ClkOut->eDivider));
        CSC0_HWA_SetClkOutCtrl(s_apCsc0Base[0], u32Temp);

        /* enable CSC0 CLKOUT */
        CSC0_HWA_EnableClockOut(s_apCsc0Base[0]);
    }
    else
    {
        /* Do nothing*/
    }
}

/**
 * @brief set always on clock source configuration include AON32K, RTC, AONCLK clock.
 *
 * @param pAonclkSrcType pointer to AONCLKSR instance for AON clock source configuration
 */
MCU_TEXT_SECTION void CSC0_SetAonClkSrc(const CSC0_AONCLKSRType *pAonclkSrcType)
{
    /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer
     * to object and an integer type Reason: Pointer used to read register operation could not be avoid */
    uint32 u32Temp = s_apCsc0Base[0]->AONCLKSR;
    /* PRQA S 0306 -- */

    u32Temp &= ~(uint32)(CSC0_AONCLKSR_AONCLKSEL_MASK | CSC0_AONCLKSR_AON32KCLKSEL_MASK |
                         CSC0_AONCLKSR_RTCCLKSEL_MASK);
    u32Temp |= (uint32)(CSC0_AONCLKSR_AONCLKSEL(pAonclkSrcType->eAonSel) |
                        CSC0_AONCLKSR_AON32KCLKSEL(pAonclkSrcType->eAon32KSel) |
                        CSC0_AONCLKSR_RTCCLKSEL(pAonclkSrcType->eRtcSel));

    u32Temp &= ~(uint32)CSC0_AONCLKSR_AON1KCLKEN_MASK;
    if (pAonclkSrcType->eAonSel == CSC0_AON_SIRC32_1K_CLK)
    {
        u32Temp |= (uint32)CSC0_AONCLKSR_AON1KCLKEN_MASK;
    }

    u32Temp &= ~(uint32)CSC0_AONCLKSR_SIRCDIV32KEN_MASK;
    if ((pAonclkSrcType->eAonSel == CSC0_AON_SIRCDIV_32K_CLK) ||
        (pAonclkSrcType->eAon32KSel == CSC0_AON32K_SIRCDIV_32K_CLK) ||
        (pAonclkSrcType->eRtcSel == CSC0_RTC_SIRCDIV_32K_CLK))
    {
        u32Temp |= (uint32)CSC0_AONCLKSR_SIRCDIV32KEN_MASK;
    }
    CSC0_HWA_SetAonClkReg(s_apCsc0Base[0], u32Temp);
}

/**
 * @brief Get CSC0 clock status
 *
 * @param eCsc0ClockName CSC0 AONCLKSR register clock source select
 * @return TRUE: CSC0 clock is valid; FALSE: CSC0 clock is invalid or parameter is invalid
 */
MCU_TEXT_SECTION boolean CSC0_GetCsc0ClockStatus(CSC0_ClkSrcType eCsc0ClockName)
{
    boolean bStatus = (boolean)FALSE;

    if (CSC0_AON32K_CLK == eCsc0ClockName)
    {
        bStatus = CSC0_GetAon32kClockStatus();
    }
    else if (CSC0_RTC_CLK == eCsc0ClockName)
    {
        bStatus = CSC0_GetRtcClockStatus();
    }
    else
    {
        bStatus = CSC0_GetAonClockStatus();
    }
    return bStatus;
}

/**
 * @brief Enable HClock
 *
 * @note Enable HClock to keep clock of ram in TCM active, prevent DMA access to TCM memory form
 * some error when low power request
 */
MCU_TEXT_SECTION void CSC0_EnableHClock(void)
{
    CSC0_HWA_EnableHClock(s_apCsc0Base[0]);
}

#if (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)
/**
 * @brief Configure the low power wakeup PAD output in CSC0_LP_WAKEUP register
 *
 * @param CSC0_LPWakeUpPadType the low power wakeup PAD source and polarity configuration
 */
MCU_TEXT_SECTION void CSC0_SetLPWakeUpPad(const CSC0_LPWakeUpPadType *pLPWakeUpPad)
{
    uint8 u8Index;

    for (u8Index = 0U; u8Index < LP_WAKEUP_PAD_NUM; u8Index++)
    {
        CSC0_HWA_SetLPWakeUpPadSrc(s_apCsc0Base[0],
                                   pLPWakeUpPad[u8Index].u8LPWakeUpPadNum,
                                   (uint8)(pLPWakeUpPad[u8Index].eLpWakeUpPadSel));
        CSC0_HWA_SetLPWakeUpPadPol(s_apCsc0Base[0],
                                   pLPWakeUpPad[u8Index].u8LPWakeUpPadNum,
                                   (uint8)(pLPWakeUpPad[u8Index].eLpWakeUpPadPolSel));
    }
}
#endif /*(MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)  */

#define MCU_STOP_SEC_CODE
#include "Mcu_MemMap.h"

#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_OFF) */

#ifdef __cplusplus
}
#endif

/** @} */
