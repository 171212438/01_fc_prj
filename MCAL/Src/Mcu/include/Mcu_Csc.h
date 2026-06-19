/**
*   @file    Mcu_Csc.h
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
#ifndef MCU_CSC_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 * Reason: It is common definition in h files */
#define MCU_CSC_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C" {
#endif

#include "Platform_Types.h"
#include "Mcu_Csc_RegOps.h"

#if (MCU_CFG_CSC0_INIT_API_SUPPORT == STD_ON)

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANT-LIKE DEFINES
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
==================================================================================================*/

#if (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)
#define  LP_WAKEUP_PAD_NUM  5U
#endif /* (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON) */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/** @brief CSC0_CLKOUT_CTRL[CKOUTSEL] CSC0 clock out source definition. */
typedef enum
{
    CSC0_CLKOUT_SCG_CLKOUT    = 0U,  /*!< SCG CLKOUT */
    CSC0_CLKOUT_FOSC_DIVM_CLK = 2U,  /*!< FOSC DIVM CLK */
    CSC0_CLKOUT_SLOW_CLK      = 3U,  /*!< SLOW CLK */
    CSC0_CLKOUT_SIRC_DIVM_CLK = 4U,  /*!< SIRC DIVM CLK */
    CSC0_CLKOUT_PLL1_DIVM_CLK = 5U,  /*!< PLL1 DIVM CLK */
    CSC0_CLKOUT_FIRC_DIVM_CLK = 6U,  /*!< FIRC DIVM CLK */
    CSC0_CLKOUT_CORE_CLK      = 7U,  /*!< CORE CLK */
    CSC0_CLKOUT_PLL0_DIVM_CLK = 8U,  /*!< PLL0 DIVM CLK */
    CSC0_CLKOUT_BUS_CLK       = 9U,  /*!< BUS CLK */
    CSC0_CLKOUT_128K_CLK      = 10U, /*!< 128K CLK */
    CSC0_CLKOUT_AON_CLK       = 12U, /*!< AON CLK */
    CSC0_CLKOUT_RTC_CLK       = 14U  /*!< AON32K CLK */
} CSC0_ClkoutSrcType;

/** @brief CSC0_CHIPCTLR[CKOUTSEL]  CSC0 clock out divider definition. */
typedef enum
{
    CSC0_CLKOUT_DIV_BY1 = 0U,       /*!< Divided by 1 */
    CSC0_CLKOUT_DIV_BY2 = 1U,       /*!< Divided by 2 */
    CSC0_CLKOUT_DIV_BY3 = 2U,       /*!< Divided by 3 */
    CSC0_CLKOUT_DIV_BY4 = 3U,       /*!< Divided by 4 */
    CSC0_CLKOUT_DIV_BY5 = 4U,       /*!< Divided by 5 */
    CSC0_CLKOUT_DIV_BY6 = 5U,       /*!< Divided by 6 */
    CSC0_CLKOUT_DIV_BY7 = 6U,       /*!< Divided by 7 */
    CSC0_CLKOUT_DIV_BY8 = 7U        /*!< Divided by 8 */
} CSC0_ClkoutDivType;

/** @brief data type for CSC0_AONCLKSR[32KAONCLKSEL], Set AON32K clock source  */
typedef enum
{
    CSC0_AON32K_DISABLED_CLK    = 0U,  /*!< CSC0_AONCLKSR[32KAONCLKSEL]  RESERVE. W1C  */
    CSC0_AON32K_SIRCDIV_32K_CLK = 1U,  /*!< CSC0_AONCLKSR[32KAONCLKSEL], SIRCDIV_32K */
    CSC0_AON32K_SOSC32K_CLK     = 2U,  /*!< CSC0_AONCLKSR[32KAONCLKSEL], SOSC32K */
    CSC0_AON32K_SIRC32K_CLK     = 3U   /*!< CSC0_AONCLKSR[32KAONCLKSEL], SIRC32K */
} CSC0_AON32KClkSrcType;

/** @brief data type for CSC0_AONCLKSR[RTCCLKSEL], Set RTC clock source  */
typedef enum
{
    CSC0_RTC_FOSCDIVL_CLK    = 0U,  /*!< CSC0_RTCCLKSEL[RTCCLKSEL], FOSC_DIVL */
    CSC0_RTC_SIRCDIV_32K_CLK = 1U,  /*!< CSC0_RTCCLKSEL[RTCCLKSEL], SIRC_DIV */
    CSC0_RTC_SOSC_CLK        = 2U,  /*!< CSC0_RTCCLKSEL[RTCCLKSEL], SOSC */
    CSC0_RTC_SIRC32K_CLK     = 3U   /*!< CSC0_RTCCLKSEL[RTCCLKSEL], SIRC_32K */
} CSC0_RTCClkSrcType;

/** @brief data type for CSC0_AONCLKSR[AONCLKSEL], Set Always on clock source  */
typedef enum
{
    CSC0_AON_SIRCDIV_128K_CLK = 0U,  /*!< CSC0_AONCLKSEL[AONCLKSEL], SIRCDIV_128K */
    CSC0_AON_SIRC32K_CLK      = 1U,  /*!< CSC0_AONCLKSEL[AONCLKSEL], SIRC32K */
    CSC0_AON_SIRCDIV_32K_CLK  = 2U,  /*!< CSC0_AONCLKSEL[AONCLKSEL], SIRCDIV_32K */
    CSC0_AON_SIRC32_1K_CLK    = 3U   /*!< CSC0_AONCLKSEL[AONCLKSEL], SIRC32_1K */
} CSC0_AONClkSrcType;

/** @brief CSC0 clock source type for clock information querry  */
typedef enum
{
    CSC0_AON32K_CLK    = 0U,  /*!< AON32K_CLK */
    CSC0_RTC_CLK       = 1U,  /*!< RTC_CLK */
    CSC0_AON_CLK       = 2U   /*!< AON_CLK */
} CSC0_ClkSrcType;

#if (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)
/**
 * @brief LP WakeUp Pad source
 */
typedef enum
{
    CSC0_LPWAKEUP_PAD_DISABLE          = 0U,  /*!< Disable */
    CSC0_LPWAKEUP_PAD_AONTIMER_TRIGGER = 1U,  /*!< AONTIMER Trigger */
    CSC0_LPWAKEUP_PAD_RTC_ALARM        = 2U,  /*!< RTC Alarm(Interrupt) */
    CSC0_LPWAKEUP_PAD_CMP0_OUTPUT      = 3U,  /*!< CMP0 Output */
    CSC0_LPWAKEUP_PAD_CMP1_OUTPUT      = 4U,  /*!< CMP1 Output */
    CSC0_LPWAKEUP_PAD_PMC_RPM_ENTRY    = 6U,  /*!< PMC RPM Entry */
    CSC0_LPWAKEUP_PAD_WKU_INTERRUPT    = 7U,  /*!< WKU Interrupt */
    CSC0_LPWAKEUP_PAD_TSTMP0_PWM_TRIGGER0 = 8U, /*!< TSTMP0 PWM TRIGGER0, use modulate 0 as posedge, modulate 1 as negedge */
    CSC0_LPWAKEUP_PAD_TSTMP0_PWM_TRIGGER1 = 9U, /*!< TSTMP0 PWM TRIGGER1, use modulate 2 as posedge, modulate 3 as negedge */
    CSC0_LPWAKEUP_PAD_FCPIT0_PWM_TRIGGER0 = 10U, /*!< FCPT0 PWM TRIGGER0, use ch0 trigger as posedge, ch1 trigger as negedge */
    CSC0_LPWAKEUP_PAD_FCPIT0_PWM_TRIGGER1 = 11U, /*!< FCPT0 PWM TRIGGER1, use ch2 trigger as posedge, ch3 trigger as negedge */
    CSC0_LPWAKEUP_PAD_FCPIT0_TRIGGER_OUT0 = 12U, /*!< FCPIT0 Trigger out[0] */
    CSC0_LPWAKEUP_PAD_FCPIT0_TRIGGER_OUT1 = 13U, /*!< FCPIT0 Trigger out[1] */
    CSC0_LPWAKEUP_PAD_FCPIT0_TRIGGER_OUT2 = 14U, /*!< FCPIT0 Trigger out[2] */
    CSC0_LPWAKEUP_PAD_FCPIT0_TRIGGER_OUT3 = 15U  /*!< FCPIT0 Trigger out[3] */
} CSC0_LPWakeUpPadSrcType;

/**
 * @brief LP WakeUp Pad polarity select
 */
typedef enum
{
	CSC0_LPWAKEUP_PADPOL_KEEP  = 0U, /*!< Keep the LP_WAKEUP CFGx */
	CSC0_LPWAKEUP_PADPOL_INVERT 	 /*!< Invert the LP_WAKEUP CFGx */
} CSC0_LPWakeUpPadPolType;
#endif /* (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON) */

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/** @brief data type for register CSC0_CLKOUT_CTRL,mainly focus on CLKOUT setting  */
typedef struct
{
    boolean bEnable;                    /*!< CSC0 ClockOut enable.          */
    CSC0_ClkoutSrcType  eSource;        /*!< CSC0 ClockOut source select.   */
    CSC0_ClkoutDivType  eDivider;       /*!< CSC0 ClockOut divide ratio.    */
} CSC0_ClkoutType;

/**
 * @brief data type for register CSC0_AONCLKSR
 */
typedef struct
{
    CSC0_AON32KClkSrcType eAon32KSel;  /*!< CSC0 32 KHz Always-on Clock Source Select */
    CSC0_RTCClkSrcType    eRtcSel;     /*!< CSC0 RTC Clock Source Select */
    CSC0_AONClkSrcType    eAonSel;     /*!< CSC0 AON Clock Source Select */
} CSC0_AONCLKSRType;

#if (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)
/**
 * @brief data type for register CSC0_AONCLKSR
 */
typedef struct
{
    uint8   u8LPWakeUpPadNum;                   /*!< CSC0 LP WakeUp Pad number */
    CSC0_LPWakeUpPadSrcType eLpWakeUpPadSel;    /*!< CSC0 LP WakeUp Pad source select */
    CSC0_LPWakeUpPadPolType eLpWakeUpPadPolSel; /*!< CSC0 LP WakeUp Pad polarity select */
} CSC0_LPWakeUpPadType;
#endif /* (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON) */

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief set clock out. with clock out pin configure, the clock would be monitored.
 *        This Function may combined with SCG_cckout setting
 *        need to call SCG_SetClkOut,if clock out source set to SCG CLKOUT.
 *
 * @param pCsc0ClkOut pointer to Csc0ClkOut instance for clock out configuration
 */
void CSC0_SetClockout(const CSC0_ClkoutType *pCsc0ClkOut);

/**
 * @brief set always on clock source configuration include AON32K, RTC, AONCLK clock.
 *
 * @param pAonclkSrcType pointer to AONCLKSR instance for AON clock source configuration
 */
void CSC0_SetAonClkSrc(const CSC0_AONCLKSRType *pAonclkSrcType);

/**
 * @brief Get CSC0 clock status
 *
 * @param eCsc0ClockName CSC0 AONCLKSR register clock source select
 * @return TRUE: CSC0 clock is valid; FALSE: CSC0 clock is invalid or parameter is invalid
 */
boolean CSC0_GetCsc0ClockStatus(CSC0_ClkSrcType eCsc0ClockName);

/**
 * @brief Enable HClock
 *
 * @note Enable HClock to keep clock of ram in TCM active, prevent DMA access to TCM memory form some error when low power request
 */
void CSC0_EnableHClock(void);

#if (MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)
/**
 * @brief Configure the low power wakeup PAD output in CSC0_LP_WAKEUP register
 *
 * @param CSC0_LPWakeUpPadType the low power wakeup PAD source and polarity configuration
 */
void CSC0_SetLPWakeUpPad(const CSC0_LPWakeUpPadType* pLPWakeUpPad);
#endif /*(MCU_CFG_CSC0_WAKEUP_PAD_SUPPORT == STD_ON)  */


#endif /* #if (MCU_CFG_CSC0_INIT_API_SUPPORT == STD_ON)  */


#if defined(__cplusplus)
}
#endif

/** @}*/
#endif



