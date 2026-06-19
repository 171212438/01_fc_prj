/**
 *   @file    Mcu_Smc.h
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
#ifndef MCU_SMC_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
#define MCU_SMC_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C"
{
#endif

#include "Mcal.h"
#include "Mcu_Smc_RegOps.h"

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

/*==================================================================================================
*                                            MACROS
==================================================================================================*/
#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)

#define LP_WAKEUP_PAD_NUM 5U

#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/** @brief Smc mode. [SWS_MCU_00165] */
typedef enum
{
    SMC_MODE_RUN = 0U, /**< The MCU can run at full speed and the internal supply is fully
                          regulated, that is, in run regulation */
#if (MCU_CFG_SMC_CORELP_SUPPORT == STD_ON)
    SMC_MODE_CORELP_SLEEP, /**< Core enters sleep mode and no other clock is gated. Only the core
                              clock is gated. */
    SMC_MODE_CORELP_DEEPSLEEP, /**< Core enters deep sleep mode and the core clock and the bus clock
                                  of the peripherals in the PD1 domain that are assigned to this
                                  core will be gated. */
#else
    SMC_MODE_WAIT, /**< Core enters sleep mode and no other clock is gated. Only the core clock is gated. */
#endif             /*(MCU_CFG_SMC_CORELP_SUPPORT == STD_ON)*/
    SMC_MODE_STOP, /**< All cores enter Deep Sleep mode and both core and bus clocks are gated off.. */
    SMC_MODE_STANDBY_0, /**< All clocks except some low-power clocks can keep on are gated off and
                           the PD1 domain is powered off. please refer to reference manual for
                           detail about standby mode 0. */
    SMC_MODE_STANDBY_1, /**< All clocks except some low-power clocks can keep on are gated off and
                           the PD1 domain is powered off. please refer to reference manual for
                           detail about standby mode 1. */
    SMC_MODE_STANDBY_2, /**< All clocks except some low-power clocks can keep on are gated off and
                           the PD1 domain is powered off. please refer to reference manual for
                           detail about standby mode 2. */
    SMC_MODE_STANDBY_3  /**< All clocks except some low-power clocks can keep on are gated off and
                           the PD1 domain is powered off. please refer to reference manual for detail
                           about standby mode 3. */
} SMC_ModeType;

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
/** @brief SMC_CLKOUT_CTRL[CKOUTSEL] SMC clock out source definition. */
typedef enum
{
    SMC_CLKOUT_SCG_CLKOUT    = 0U,  /*!< SCG CLKOUT */
    SMC_CLKOUT_FOSC_DIVM_CLK = 2U,  /*!< FOSC DIVM CLK */
    SMC_CLKOUT_SLOW_CLK      = 3U,  /*!< SLOW CLK */
    SMC_CLKOUT_SIRC_DIVM_CLK = 4U,  /*!< SIRC DIVM CLK */
    SMC_CLKOUT_PLL1_DIVM_CLK = 5U,  /*!< PLL1 DIVM CLK */
    SMC_CLKOUT_FIRC_DIVM_CLK = 6U,  /*!< FIRC DIVM CLK */
    SMC_CLKOUT_CORE_CLK      = 7U,  /*!< CORE CLK */
    SMC_CLKOUT_PLL0_DIVM_CLK = 8U,  /*!< PLL0 DIVM CLK */
    SMC_CLKOUT_BUS_CLK       = 9U,  /*!< BUS CLK */
    SMC_CLKOUT_128K_CLK      = 10U, /*!< 128K CLK */
    SMC_CLKOUT_AON_CLK       = 12U, /*!< AON CLK */
    SMC_CLKOUT_RTC_CLK       = 14U  /*!< AON32K CLK */
} SMC_ClkoutSrcType;

/** @brief SMC_CHIPCTLR[CKOUTSEL]  SMC clock out divider definition. */
typedef enum
{
    SMC_CLKOUT_DIV_BY1 = 0U, /*!< Divided by 1 */
    SMC_CLKOUT_DIV_BY2 = 1U, /*!< Divided by 2 */
    SMC_CLKOUT_DIV_BY3 = 2U, /*!< Divided by 3 */
    SMC_CLKOUT_DIV_BY4 = 3U, /*!< Divided by 4 */
    SMC_CLKOUT_DIV_BY5 = 4U, /*!< Divided by 5 */
    SMC_CLKOUT_DIV_BY6 = 5U, /*!< Divided by 6 */
    SMC_CLKOUT_DIV_BY7 = 6U, /*!< Divided by 7 */
    SMC_CLKOUT_DIV_BY8 = 7U  /*!< Divided by 8 */
} SMC_ClkoutDivType;

/** @brief data type for SMC_AONCLKSEL[32KAONCLKSEL], Set AON32K clock source  */
typedef enum
{
    SMC_AON32K_DISABLED_CLK    = 0U, /*!< SMC_AONCLKSEL[32KAONCLKSEL]  RESERVE. W1C  */
    SMC_AON32K_SIRCDIV_32K_CLK = 1U, /*!< SMC_AONCLKSEL[32KAONCLKSEL], SIRCDIV_32K */
    SMC_AON32K_SOSC32K_CLK     = 2U, /*!< SMC_AONCLKSEL[32KAONCLKSEL], SOSC32K */
    SMC_AON32K_SIRC32K_CLK     = 3U  /*!< SMC_AONCLKSEL[32KAONCLKSEL], SIRC32K */
} SMC_AON32KClkSrcType;

/** @brief data type for SMC_AONCLKSEL[RTCCLKSEL], Set RTC clock source  */
typedef enum
{
    SMC_RTC_FOSCDIVL_CLK    = 0U, /*!< SMC_RTCCLKSEL[RTCCLKSEL], FOSC_DIVL */
    SMC_RTC_SIRCDIV_32K_CLK = 1U, /*!< SMC_RTCCLKSEL[RTCCLKSEL], SIRC_DIV */
    SMC_RTC_SOSC_CLK        = 2U, /*!< SMC_RTCCLKSEL[RTCCLKSEL], SOSC */
    SMC_RTC_SIRC32K_CLK     = 3U  /*!< SMC_RTCCLKSEL[RTCCLKSEL], SIRC_32K */
} SMC_RTCClkSrcType;

/** @brief data type for SMC_AONCLKSEL[AONCLKSEL], Set Always on clock source  */
typedef enum
{
    SMC_AON_SIRCDIV_128K_CLK = 0U, /*!< SMC_AONCLKSEL[AONCLKSEL], SIRCDIV_128K */
    SMC_AON_SIRC32K_CLK      = 1U, /*!< SMC_AONCLKSEL[AONCLKSEL], SIRC32K */
    SMC_AON_SIRCDIV_32K_CLK  = 2U, /*!< SMC_AONCLKSEL[AONCLKSEL], SIRCDIV_32K */
    SMC_AON_SIRC32_1K_CLK    = 3U  /*!< SMC_AONCLKSEL[AONCLKSEL], SIRC32_1K */
} SMC_AONClkSrcType;

/** @brief SMC clock source type for clock information querry  */
typedef enum
{
    SMC_AON32K_CLK = 0U, /*!< AON32K_CLK */
    SMC_RTC_CLK    = 1U, /*!< RTC_CLK */
    SMC_AON_CLK    = 2U  /*!< AON_CLK */
} SMC_ClkSrcType;

/**
 * @brief LP WakeUp Pad source
 */
typedef enum
{
    SMC_LPWAKEUP_PAD_DISABLE          = 0U, /*!< Disable */
    SMC_LPWAKEUP_PAD_AONTIMER_TRIGGER = 1U, /*!< AONTIMER Trigger */
    SMC_LPWAKEUP_PAD_RTC_ALARM        = 2U, /*!< RTC Alarm(Interrupt) */
#if (MCU_CFG_SMC_CMP0_LPWAKEUP_SUPPORT == STD_ON)
    SMC_LPWAKEUP_PAD_CMP0_OUTPUT = 3U, /*!< CMP0 Output */
#endif                                 /* (MCU_CFG_SMC_CMP0_LPWAKEUP_SUPPORT == STD_ON) */
#if (MCU_CFG_SMC_ADC2_LPWAKEUP_SUPPORT == STD_ON)
    SMC_LPWAKEUP_PAD_ADC1_CMP = 4U, /*!< ADC1 CMP */
    SMC_LPWAKEUP_PAD_ADC2_CMP = 5U, /*!< ADC2 CMP */
#else
    SMC_LPWAKEUP_PAD_ADC0_CMP = 4U, /*!< ADC1 CMP */
    SMC_LPWAKEUP_PAD_ADC1_CMP = 5U, /*!< ADC2 CMP */
#endif                                         /* (MCU_CFG_SMC_ADC2_LPWAKEUP_SUPPORT == STD_ON) */
    SMC_LPWAKEUP_PAD_PMC_RPM_ENTRY       = 6U, /*!< PMC RPM Entry */
    SMC_LPWAKEUP_PAD_WKU_INTERRUPT       = 7U, /*!< WKU Interrupt */
    SMC_LPWAKEUP_PAD_TSTMP0_PWM_TRIGGER0 = 8U, /*!< TSTMP0 PWM TRIGGER0, use modulate 0 as posedge,
                                                  modulate 1 as negedge */
    SMC_LPWAKEUP_PAD_TSTMP0_PWM_TRIGGER1 = 9U, /*!< TSTMP0 PWM TRIGGER1, use modulate 2 as posedge,
                                                  modulate 3 as negedge */
    SMC_LPWAKEUP_PAD_TSTMP0_CH0_TRIGGER = 10U, /*!< TSTMP0 CH0 TRIGGER  */
    SMC_LPWAKEUP_PAD_TSTMP0_CH1_TRIGGER = 11U, /*!< TSTMP0 CH1 TRIGGER */
    SMC_LPWAKEUP_PAD_PMC_V11_EN         = 12U  /*!< PMC V11 EN  */
} SMC_LPWakeUpPadSrcType;

/**
 * @brief LP WakeUp Pad polarity select
 */
typedef enum
{
    SMC_LPWAKEUP_PADPOL_KEEP = 0U, /*!< Keep the LP_WAKEUP CFGx */
    SMC_LPWAKEUP_PADPOL_INVERT     /*!< Invert the LP_WAKEUP CFGx */
} SMC_LPWakeUpPadPolType;

/** @brief data type for register SMC_CLKOUT_CTRL,mainly focus on CLKOUT setting  */
typedef struct
{
    boolean           bEnable;  /*!< SMC ClockOut enable.          */
    SMC_ClkoutSrcType eSource;  /*!< SMC ClockOut source select.   */
    SMC_ClkoutDivType eDivider; /*!< SMC ClockOut divide ratio.    */
} SMC_ClkoutType;

/**
 * @brief data type for register SMC_AONCLKSEL
 */
typedef struct
{
    SMC_AON32KClkSrcType eAon32KSel; /*!< SMC 32 KHz Always-on Clock Source Select */
    SMC_RTCClkSrcType    eRtcSel;    /*!< SMC RTC Clock Source Select */
    SMC_AONClkSrcType    eAonSel;    /*!< SMC AON Clock Source Select */
} SMC_AONCLKSELType;

/**
 * @brief data type for register SMC_AONCLKSEL
 */
typedef struct
{
    uint8                  u8LPWakeUpPadNum;   /*!< SMC LP WakeUp Pad number */
    SMC_LPWakeUpPadSrcType eLpWakeUpPadSel;    /*!< SMC LP WakeUp Pad source select */
    SMC_LPWakeUpPadPolType eLpWakeUpPadPolSel; /*!< SMC LP WakeUp Pad polarity select */
} SMC_LPWakeUpPadType;

#if (MCU_CFG_SMC_SRAM2_RENTENTION_MODE_SUPPORT == STD_ON)
/**
 * @brief SRAM2 block retention control
 */
typedef enum
{
    SMC_SRAM2_RETENTION_DISABLE = 0,      /*!< SRAM2 Block Retention 32KB */
    SMC_SRAM2_RETENTION_32KB    = 0x1U,   /*!< SRAM2 Block Retention 32KB */
    SMC_SRAM2_RETENTION_64KB    = 0x3U,   /*!< SRAM2 Block Retention 64KB */
    SMC_SRAM2_RETENTION_96KB    = 0x7U,   /*!< SRAM2 Block Retention 96KB */
    SMC_SRAM2_RETENTION_128KB   = 0xFU,   /*!< SRAM2 Block Retention 128KB */
    SMC_SRAM2_RETENTION_160KB   = 0x1FU,  /*!< SRAM2 Block Retention 160KB */
    SMC_SRAM2_RETENTION_192KB   = 0x3FU,  /*!< SRAM2 Block Retention 192KB */
    SMC_SRAM2_RETENTION_224KB   = 0x7FU,  /*!< SRAM2 Block Retention 224KB */
    SMC_SRAM2_RETENTION_256KB   = 0xFFU,  /*!< SRAM2 Block Retention 256KB */
    SMC_SRAM2_RETENTION_288KB   = 0x1FFU, /*!< SRAM2 Block Retention 288KB */
    SMC_SRAM2_RETENTION_320KB   = 0x3FFU, /*!< SRAM2 Block Retention 320KB */
    SMC_SRAM2_RETENTION_352KB   = 0x7FFU, /*!< SRAM2 Block Retention 352KB */
    SMC_SRAM2_RETENTION_384KB   = 0xFFFU  /*!< SRAM2 Block Retention 384KB */
} SMC_Sram2RentenCtrlType;
#endif /* (MCU_CFG_SMC_SRAM2_RENTENTION_MODE_SUPPORT == STD_ON) */

#if (MCU_CFG_SMC_LP_GOOD_SUPPORT == STD_ON)
/**
 * @brief Power good lock selection
 */
typedef enum
{
    SMC_PG_LOCK_PTE1  = 0U, /* PTE1 is locked for LP_GOOD function when PG_IOLOCK_EN is 1 */
    SMC_PG_LOCK_PTE22 = 1U, /* PTE22 is locked for LP_GOOD function when PG_IOLOCK_EN is 1 */
    SMC_PG_LOCK_PTE20 = 2U, /* PTE20 is locked for LP_GOOD function when PG_IOLOCK_EN is 1 */
    SMC_PG_LOCK_PTI20 = 3U  /* PTI20 is locked for LP_GOOD function when PG_IOLOCK_EN is 1 */
} SMC_PGLockSelType;

/**
 * @brief Power good polarity
 */
typedef enum
{
    SMC_PG_ACTIVE_POL_HIGH = 0U, /* Level 1 is active of LP_GOOD pad */
    SMC_PG_ACTIVE_POL_LOW  = 1U  /* Level 0 is active of LP_GOOD pad */
} SMC_PGActivePolType;
#endif /* (MCU_CFG_SMC_LP_GOOD_SUPPORT == STD_ON) */

/**
 * @brief Power good control
 */
typedef struct
{
#if (MCU_CFG_SMC_LP_GOOD_SUPPORT == STD_ON)
    boolean             bEnable;      /*!< SMC PG IOLOCK enable */
    SMC_PGLockSelType   ePGLockSel;   /*!< SMC PG IOLOCK selection */
    SMC_PGActivePolType ePGActivePol; /*!< SMC PG Active Polarity selection */
#endif                                /* (MCU_CFG_SMC_LP_GOOD_SUPPORT == STD_ON) */
    uint16 u16RpmExitCnt;
} SMC_PGCtrlType;

/**
 * @brief SMC mixed type
 */
typedef struct
{
#if (MCU_CFG_SMC_SRAM2_RENTENTION_MODE_SUPPORT == STD_ON)
    SMC_Sram2RentenCtrlType eRamRetenSel; /*!< SMC SRAM2 block selection */
#endif                            /* #if (MCU_CFG_SMC_SRAM2_RENTENTION_MODE_SUPPORT == STD_ON) */
    SMC_PGCtrlType tPGCtrlConifg; /*!< SMC PG control configuration */
} SMC_MixedUsedType;

#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/* global functions */
void SMC_SetSystemMode(SMC_ModeType eMode);

void CM7_GenerateSystemReset(void);

#if (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON)
/**
 * @brief set clock out. with clock out pin configure, the clock would be monitored.
 *        This Function may combined with SCG_cckout setting
 *        need to call SCG_SetClkOut,if clock out source set to SCG CLKOUT.
 *
 * @param pSmcClkOut pointer to SmcClkOut instance for clock out configuration
 */
void SMC_SetClockout(const SMC_ClkoutType *pSmcClkOut);

/**
 * @brief set always on clock source configuration include AON32K, RTC, AONCLK clock.
 *
 * @param pAonclkSrcType pointer to AONCLKSEL instance for AON clock source configuration
 */
void SMC_SetAonClkSrc(const SMC_AONCLKSELType *pAonclkSrcType);

/**
 * @brief Get SMC clock status
 *
 * @param eSmcClockName SMC AONCLKSEL register clock source select
 * @return TRUE: SMC clock is valid; FALSE: SMC clock is invalid or parameter is invalid
 */
boolean SMC_GetSmcClockStatus(SMC_ClkSrcType eSmcClockName);

/**
 * @brief Configure the low power wakeup PAD output in SMC_LP_WAKEUP register
 *
 * @param SMC_LPWakeUpPadType the low power wakeup PAD source and polarity configuration
 */
void SMC_SetLPWakeUpPad(const SMC_LPWakeUpPadType *pLPWakeUpPad);

/**
 * @brief Configure SMC mixed used control
 *
 * @param SMC_MixedUsedType SMC mixed used control
 */
void SMC_SetMixedUsedConfiguration(const SMC_MixedUsedType *pMixedUsedConfig);

#endif /* (MCU_CFG_SMC_INIT_API_SUPPORT == STD_ON) */

#if defined(__cplusplus)
}
#endif
/** @}*/
#endif /* _MCU_SMC_H_ */
