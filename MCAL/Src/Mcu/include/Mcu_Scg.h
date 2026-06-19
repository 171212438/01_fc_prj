/**
 *   @file    Mcu_Scg.h
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
#ifndef MCU_SCG_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
#define MCU_SCG_H
/* PRQA S 0603 -- */

#if defined(__cplusplus)
extern "C"
{
#endif

#include "Mcu_Scg_RegOps.h"

/**
 * @addtogroup Mcu_Scg
 * @{
 */

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
*                                             ENUMS
==================================================================================================*/

/** @brief clock list for internal clock tree */
typedef enum
{
    SCG_SIRC_CLK    = 0U, /*!< SIRC clock                 */
    SCG_SIRC32K_CLK = 1U, /*!< SIRC clock                 */
    SCG_FIRC_CLK    = 2U, /*!< FIRC clock                 */
    SCG_FOSC_CLK    = 3U, /*!< FOSC clock                 */
    SCG_PLL0_CLK    = 4U, /*!< PLL0 clock                 */
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    SCG_PLL1_CLK = 5U,       /*!< PLL0 clock                 */
#endif                       /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */
    SCG_SOSC_CLK      = 6U,  /*!< SOSC clock                 */
    SCG_SIRCDIVH_CLK  = 7U,  /*!< SIRCDIVH functional clock  */
    SCG_SIRCDIVM_CLK  = 8U,  /*!< SIRCDIVM functional clock  */
    SCG_SIRCDIVL_CLK  = 9U,  /*!< SIRCDIVL functional clock  */
    SCG_FIRCDIVH_CLK  = 10U, /*!< FIRCDIVH functional clock  */
    SCG_FIRCDIVM_CLK  = 11U, /*!< FIRCDIVM functional clock  */
    SCG_FIRCDIVL_CLK  = 12U, /*!< FIRCDIVL functional clock  */
    SCG_FOSCDIVH_CLK  = 13U, /*!< FOSCDIVH functional clock  */
    SCG_FOSCDIVM_CLK  = 14U, /*!< FOSCDIVM functional clock  */
    SCG_FOSCDIVL_CLK  = 15U, /*!< FOSCDIVL functional clock  */
    SCG_PLL0DIVH_CLK  = 16U, /*!< PLL0DIVH functional clock  */
    SCG_PLL0DIVM_CLK  = 17U, /*!< PLL0DIVM functional clock  */
    SCG_PLL0DIVL_CLK  = 18U, /*!< PLL0DIVL functional clock  */
    SCG_PLL1DIVH_CLK  = 19U, /*!< PLL0DIVH functional clock  */
    SCG_PLL1DIVM_CLK  = 20U, /*!< PLL0DIVM functional clock  */
    SCG_PLL1DIVL_CLK  = 21U, /*!< PLL0DIVL functional clock  */
    SCG_END_OF_CLOCKS = 22U, /*!< End of SCG clocks          */
} SCG_ClkSrcType;

/** @brief indicate the clock function called status */
typedef enum
{
    SCG_STATUS_SUCCESS       = 0U, /*!< clock set succeed            */
    SCG_STATUS_ERROR         = 1U, /*!< clock set failed             */
    SCG_STATUS_TIMEOUT       = 2U, /*!< clock set TIMEOUT            */
    SCG_STATUS_PARAM_INVALID = 3U, /*!< clock set PARAM ERROR        */
    SCG_STATUS_UNKNOWN       = 4U, /*!< clock Status unknown         */
    SCG_STATUS_CLKSEL_ERROR  = 5U  /*!< clock select_failure ERROR   */
} SCG_StatusType;

/**
 * @brief SCG_CCR [SCS]  to Select system clock source
 *
 */
typedef enum
{
    SCG_CLOCK_SRC_FOSC = 1U, /*!< System Fast OSC. */
#if (MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT == STD_ON)
    SCG_CLOCK_SRC_SIRC = 2U,  /*!< Slow IRC. */
#endif                        /* ( MCU_CFG_SCG_SYSCLK_SIRC_SUPPORT == STD_ON ) */
    SCG_CLOCK_SRC_FIRC = 3U,  /*!< Fast IRC.   */
    SCG_CLOCK_SRC_PLL0 = 6U,  /*!< System PLL. */
    SCG_CLOCK_SRC_NONE = 255U /*!< MAX value.  */
} SCG_ClockSrcType;

/**
 * @brief SCG_CCR [DIVCORE ]/ SCG_CCR [DIVBUS ]/ SCG_CCR [DIVSLOW ]  to Select system clock source.
 *
 */
typedef enum
{
    SCG_CLOCK_DIV_BY1 = 0U, /*!< Divided by 1.    */
    SCG_CLOCK_DIV_BY2 = 1U, /*!< Divided by 2.    */
    SCG_CLOCK_DIV_BY3 = 2U, /*!< Divided by 3.    */
    SCG_CLOCK_DIV_BY4 = 3U  /*!< Divided by 4.    */
} SCG_ClockDivType;

/**
 * @brief SCG_ CLKOUTCFG [CLKOUTSEL]  to Select system clock source.
 */
typedef enum
{
    SCG_CLOCKOUT_SRC_OFF     = 0U, /*!< SCG OFF.  */
    SCG_CLOCKOUT_SRC_FOSC    = 1U, /*!< Fast OSC. */
    SCG_CLOCKOUT_SRC_SIRC    = 2U, /*!< Slow IRC. */
    SCG_CLOCKOUT_SRC_FIRC    = 3U, /*!< Fast IRC. */
    SCG_CLOCKOUT_SRC_SOSC    = 4U, /*!< Slow OSC. */
    SCG_CLOCKOUT_SRC_PLL1    = 5U, /*!< System PLL1. */
    SCG_CLOCKOUT_SRC_PLL0    = 6U, /*!< System PLL0. */
    SCG_CLOCKOUT_SRC_SIRC32K = 7U  /*!< SIRC32K_CLK. */
} SCG_ClockoutSrcType;

/**
 * @brief SCG_CLKOUTCFG [NVMCLK_FIRC_SIRC]  to select nvm clock source.
 */
typedef enum
{
    SCG_NVMCLK_SRC_FIRC = 0U, /*!< NVM source choose FIRC.   */
    SCG_NVMCLK_SRC_SIRC = 1U  /*!< NVM source choose SIRC.   */
} SCG_NvmClkSrcType;

/**
 * @brief SCG_CLKOUTCFG [CMU4CLK_FOSC_SIRC]  to select CMU4 clock source
 */
typedef enum
{
    SCG_CMU4CLK_SRC_SIRC = 0U, /*!< CMU4 source choose SIRC.   */
    SCG_CMU4CLK_SRC_FOSC = 1U  /*!< CMU4 source choose FORC.   */
} SCG_Cmu4ClkSrcType;

/** @brief [DIVL]/[DIVM]/[DIVH] bit field definition for SCG_SIRC/ SCG_FIRC/ SCG_FOSC/ SCG_PLL0
 * registers */
typedef enum
{
    SCG_ASYNC_CLOCK_DISABLE = 0U, /*!< Clock output is disabled.  */
    SCG_ASYNCCLOCKDIV_BY1   = 1U, /*!< Divided by 1.              */
    SCG_ASYNCCLOCKDIV_BY2   = 2U, /*!< Divided by 2.              */
    SCG_ASYNCCLOCKDIV_BY4   = 3U, /*!< Divided by 4.              */
    SCG_ASYNCCLOCKDIV_BY8   = 4U, /*!< Divided by 8.              */
    SCG_ASYNCCLOCKDIV_BY16  = 5U, /*!< Divided by 16.             */
    SCG_ASYNCCLOCKDIV_BY32  = 6U, /*!< Divided by 32.             */
    SCG_ASYNCCLOCKDIV_BY64  = 7U  /*!< Divided by 64.             */
} SCG_AsyncClockDivType;

/** @brief SCG_ PLLxCFG[PREDIV]  for PLLx clock calculation (0~31 mean div1~div32)*/
typedef uint8 SCG_PllPredivType;

/** @brief SCG_ PLLxCFG[PSTDIV]  for PLLx clock calculation */
typedef enum
{
    SCG_PLLPSTDIV_BY2 = 1U, /*!< Divided by 2. */
    SCG_PLLPSTDIV_BY4 = 2U, /*!< Divided by 4. */
    SCG_PLLPSTDIV_BY8 = 3U  /*!< Divided by 8. */
} SCG_PllPstdivType;

/** @brief SCG_ PLLxCFG[SOURCE] to Select PLLx clock sourec */
typedef enum
{
    SCG_PLLSOURCE_FOSC = 0U, /*!< PLL source choose FOSC. */
    SCG_PLLSOURCE_FIRC = 1U  /*!< PLL source choose FIRC. */
} SCG_PllSourceType;

/** @brief SCG_ PLLxCFG [MULT]  for PLLx clock calculation. */
typedef uint16 SCG_PllMultiplyType;

/**
 * @brief PLL clock type
 */
typedef enum
{
    SCG_PLL0 = 0U, /*!< PLL0 clock */
    SCG_PLL1 = 1U  /*!< PLL1 clock */
} SCG_PllClkType;

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
/** @brief SCG_ PLLxCFG[PSTDIV1]  for PLLx clock1 calculation */
typedef enum
{
    SCG_PLLPSTDIV1_BY2  = 0U, /*!< Divided by 2. */
    SCG_PLLPSTDIV1_BY4  = 1U, /*!< Divided by 4. */
    SCG_PLLPSTDIV1_BY6  = 2U, /*!< Divided by 6. */
    SCG_PLLPSTDIV1_BY8  = 3U, /*!< Divided by 8. */
    SCG_PLLPSTDIV1_BY10 = 4U, /*!< Divided by 10. */
    SCG_PLLPSTDIV1_BY12 = 5U, /*!< Divided by 12. */
    SCG_PLLPSTDIV1_BY14 = 6U, /*!< Divided by 14. */
    SCG_PLLPSTDIV1_BY16 = 7U, /*!< Divided by 16. */
} SCG_PllPstdiv1Type;
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

#if (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON)
/** @brief SCG_ PLL0ECFG[MULT_MUX] for PLL clock calculation */
typedef enum
{
    SCG_PLL0_MULT_MUX_SEL_TYPICAL     = 0U, /*!< Mult mux select typical value(9 bits). */
    SCG_PLL0_MULT_MUX_SEL_DOUBLE_MULT = 1U, /*!< Mult mux select mult*2(9 bits). */
    SCG_PLL0_MULT_MUX_SEL_TEN_BITS    = 3U  /*!< Mult mux select mult(10 bits). */
} SCG_PllMultMuxSelType;
#endif /* (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON) */

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/** @brief Scg interrupt notification function type */
typedef void (*SCG_ISRCallbackType)(void);

/** @brief FOSC initial definition, include register SCG_FOSCCSR/SCG_FOSCDIV/SCG_FOSCCFG. */
typedef struct
{
    boolean bCm;     /*!< SCG_FOSCCSR[CM] bit, Clock Monitor is enable */
    boolean bCmre;   /*!< SCG_FOSCCSR[CMRE] bit, Clock Monitor Reset Enable
                          0 Generates interrupt, 1 Generates reset         */
    boolean bSten;   /*!< SCG_FOSCCSR[STEN] bit, Clock Stop in Stop modes */
    boolean bEnable; /*!< SCG_FOSCCSR[EN] bit, FOSC clock enable */
    boolean bBypass; /*!< SCG_FOSCCFG[BYPASS] bit, Configures FOSC for bypassing the internal oscillator.*/
    SCG_AsyncClockDivType eDivH;       /*!< SCG_FOSCDIV[DIVH] bit field definition. */
    SCG_AsyncClockDivType eDivM;       /*!< SCG_FOSCDIV[DIVM] bit field definition. */
    SCG_AsyncClockDivType eDivL;       /*!< SCG_FOSCDIV[DIVL] bit field definition. */
    uint8                 u8Eocv;      /*!< SCG_FOSCCFG[EOCV] bit, End of Count Value*/
    uint32                u32XtalFreq; /*!< static parameter for FOSC clock record. */
    SCG_ISRCallbackType   pNotify;     /*!< static parameter for FOSC clock error notify */
} SCG_FoscType;

/** @brief SIRC initial definition, include register SCG_ SIRCCSR/ SCG_ SIRCDIV/ SCG_ SIRCTCCFG. */
/* clang-format off */
typedef struct
{
    boolean               bCm;   /*!< SCG_SIRCCSR[CM] bit, SIRC Clock Monitor Enable */
    boolean               bTrEn; /*!< SCG_SIRCCSR[TREN] bit, IRC software trim enable (auto trim) */
    boolean               bLpen; /*!< SCG_SIRCCSR[LPEN] bit, Clock Standby Enable */
    boolean               bSten; /*!< SCG_SIRCCSR[STEN] bit, Clock Stop Enable */
    SCG_AsyncClockDivType eDivH; /*!< SCG_SIRCDIV[DIVH] bit field definition.*/
    SCG_AsyncClockDivType eDivM; /*!< SCG_SIRCDIV[DIVM] bit field definition.*/
    SCG_AsyncClockDivType eDivL; /*!< SCG_SIRCDIV[DIVL] bit field definition.*/
    uint8                 u8TrimSrc;  /*!< SCG_SIRCTCFG[TRIMSRC] IRC clock auto trim reference clock source select.*/
    uint16                u16TrimDiv; /*!< SCG_SIRCTCFG[TRIMDIV] IRC clock auto trim divide value.*/
    SCG_ISRCallbackType   pNotify;    /*!< static parameter for SIRC clock error notify */
} SCG_SircType;
/* clang-format on */

/** @brief SIRC32KCSR register configuration type. */
typedef struct
{
    boolean bEn; /*!< SIRC32KCSR[EN] bit, Clock is enabled */
} SCG_Sirc32kType;

/** @brief FIRC initial definition, include register SCG_ FIRCCSR/ SCG_ FIRCDIV/ SCG_ FIRCFG. */
/* clang-format off */
typedef struct
{
    boolean               bEnable; /*!< SCG_FIRCCSR[EN] bit, FIRC clock enable */
    boolean               bCm;     /*!< SCG_FIRCCSR[CM] bit, FIRC Clock Monitor Enable */
    boolean               bTrEn;   /*!< SCG_FIRCCSR[TREN] bit, IRC software trim enable (auto trim) */
    boolean               bSten;   /*!< SCG_FIRCCSR[STEN] bit, Clock Standby Enable */
    SCG_AsyncClockDivType eDivH;   /*!< SCG_FIRCDIV[DIVH] bit field definition.*/
    SCG_AsyncClockDivType eDivM;   /*!< SCG_FIRCDIV[DIVM] bit field definition.*/
    SCG_AsyncClockDivType eDivL;   /*!< SCG_FIRCDIV[DIVL] bit field definition.*/
    uint8                 u8TrimSrc;  /*!< SCG_FIRCTCFG[TRIMSRC] IRC clock auto trim reference clock source select.*/
    uint16                u16TrimDiv; /*!< SCG_FIRCTCFG[TRIMDIV] IRC clock auto trim divide value.*/
    SCG_ISRCallbackType   pNotify;    /*!< static parameter for FIRC clock error notify */
} SCG_FircType;
/* clang-format on */

/** @brief SOSC definition, include register SCG_SOSCCFG. */
typedef struct
{
    boolean bEnable; /*!< SCG_SOSCCSR[EN] bit, SOSC clock enable */
    boolean bBypass; /*!< SCG_SOSCCSR[BYPASS] bit, Configures SOSC for bypassing the internal oscillator.*/
    boolean             bCm;     /*!< SCG_SOSCCSR[CM] bit,Clock Monitor enable.*/
    boolean             bCmre;   /*!< SCG_SOSCCSR[CMRE] bit, 1:Clock Monitor Reset, 0: interrupt*/
    boolean             bNoWait; /*!< No wait SOSC valid flag or not*/
    uint8               u8Eocv;  /*!< SCG_SOSCCFG[EOCV] bit, End of Count Value*/
    uint32              u32XtalFreq; /*!< static parameter for SOSC clock record. */
    SCG_ISRCallbackType pNotify;     /*!< static parameter for SOSC clock error notify */
} SCG_SoscType;

/** @brief PLL0 definition, include register SCG_PLL0CSR/ SCG_PLL0DIV/SCG_PLL0CFG. */
/* clang-format off */
typedef struct
{
    boolean bEnable; /*!< SCG_PLLxCSR[EN] bit, PLL clock enable */
    boolean bCm;     /*!< SCG_PLLxCSR[CM] bit,Clock Monitor enable.*/
    boolean bCmre;   /*!< SCG_PLLxCSR[CMRE] bit, 1:Clock Monitor Reset, 0: interrupt*/
    boolean bSten;   /*!< SCG_PLLxCSR[STEN] bit, Clock Stop Enable */
#if (MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT == STD_ON)
    boolean bLossSwitch; /*!< SCG_PLL_LOLC[PLL1/0_LOLC] bit, PLL1/PLL0 Behaviour after Loss of Lock */
#endif /* (MCU_CFG_SCG_PLL_LOSS_LOCK_SUPPORT == STD_ON) */
#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
    boolean            bPllClk1En; /*!< SCG_PLLxCSR[CK1EN] bit, PLL clock1 enable */
    SCG_PllPstdiv1Type ePstDiv1;   /*!< SCG_PLLxCFG[PSTDIV1] bit field definition.*/
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */
#if (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON)
    boolean bPllClk2En;           /*!< SCG_PLLxCSR[CK2EN] bit, PLL0 clock2 enable */
    boolean bPllClkMuxExtraDiv2;  /*!< SCG_PLLECFG[CLK_MUX] bit, PLL0_CLK Additional 2 Frequency Division */
    boolean bPllClk1MuxExtraDiv2; /*!< SCG_PLLECFG[CLK1_MUX] bit, PLL0_CLK1 Additional 2 Frequency Division */
    SCG_PllMultMuxSelType ePllMultMuxSel; /*!< SCG_PLLECFG[MUX_SEL] bit field definition.*/
#endif  /* (MCU_CFG_SCG_PLL0_CLK2_SUPPORT == STD_ON) */
    SCG_AsyncClockDivType eDivH;          /*!< SCG_PLLxDIV[DIVH] bit field definition.*/
    SCG_AsyncClockDivType eDivM;          /*!< SCG_PLLxDIV[DIVM] bit field definition.*/
    SCG_AsyncClockDivType eDivL;          /*!< SCG_PLLxDIV[DIVL] bit field definition.*/
    SCG_PllPredivType     u8Prediv;       /*!< SCG_PLLxCFG[PREDIV] bit field definition.*/
    SCG_PllMultiplyType   u16Mult;        /*!< SCG_PLLxCFG[MULT] bit field definition.*/
    SCG_PllSourceType     eSrc;           /*!< SCG_PLLxCFG[SOURCE] bit field definition.*/
    SCG_PllPstdivType     ePstDiv;        /*!< SCG_PLLxCFG[PSTDIV] bit field definition.*/
    SCG_ISRCallbackType   pNotify;        /*!< static parameter for PLL0 clock error notify */
} SCG_PllType;
/* clang-format on */

/** @brief Current system clock definition, include register SCG_CCR and SCG_CLKOUTCFG. */
typedef struct
{
    boolean             bSysClkMonitor; /*!< SCG_CCR[SYSCLK_CME], System Clock monitor bit.*/
    SCG_ClockSrcType    eSrc;           /*!< SCG_CCR[SCS], System Clock Source.*/
    SCG_ClockDivType    eDivSlow;       /*!< SCG_CCR[DIVSLOW], Slow Clock Divide Ratio.*/
    SCG_ClockDivType    eDivBus;        /*!< SCG_CCR[DIVBUS], Bus Clock Divide Ratio.*/
    SCG_ClockDivType    eDivCore;       /*!< SCG_CCR[DIVCORE], Core Clock Divide Ratio.*/
    SCG_ClockoutSrcType eClkOutSrc;     /*!< SCG_CLKOUTCFG[CLKOUTSEL], SCG Clock Out Select.*/
    SCG_NvmClkSrcType   eNvmClkSrc; /*!< SCG_CLKOUTCFG[NVMCLK_FIRC/SIRC], NVM clock source Select.*/
    SCG_Cmu4ClkSrcType eCmu4ClkSrc; /*!< SCG_CLKOUTCFG[CMU4CLK_FOSC/SIRC], CMU4 clock source Select.*/
} SCG_ClockCtrlType;

/** @brief the SCG module type, including FOSC/SIRC/FIRC/SOSC/PLL0 */
typedef struct
{
    SCG_SircType    SircConfig;
    SCG_Sirc32kType Sirc32kconfig;
    SCG_FircType    FircConfig;
    SCG_FoscType    FoscConfig;
    SCG_PllType     Pll0Config;
#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
    SCG_PllType Pll1Config;
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */
    SCG_SoscType      SoscConfig;
    SCG_ClockCtrlType ClockCtrlConfig;
} SCG_ClockType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

SCG_StatusType SCG_SetSOSC(const SCG_SoscType *pSoscConfig);

SCG_StatusType SCG_SetSIRC(const SCG_SircType *pSircConfig);

SCG_StatusType SCG_SetSIRC32K(const SCG_Sirc32kType *pSirc32kConfig);

SCG_StatusType SCG_SetFIRC(const SCG_FircType *pFircConfig);

SCG_StatusType SCG_SetFOSC(const SCG_FoscType *pFoscConfig);

SCG_StatusType SCG_DisablePLLClock(SCG_PllClkType eClock);

SCG_StatusType SCG_SetPLL0(const SCG_PllType *pPll0Config);

#if (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON)
SCG_StatusType SCG_SetPLL1(const SCG_PllType *pPll1Config);
#endif /* (MCU_CFG_SCG_PLL1_SUPPORT == STD_ON) */

SCG_StatusType SCG_SetClkCtrl(const SCG_ClockCtrlType *pSysClkConfig);

SCG_StatusType SCG_SwitchClkCtrlSrc(SCG_ClockSrcType eClock);

void SCG_SetClkOut(const SCG_ClockCtrlType *pSysClkConfig);

boolean SCG_GetClockStatus(SCG_ClkSrcType eClock);

boolean SCG_GetPllEnableStatus(SCG_ClkSrcType eClock);

SCG_ClockSrcType SCG_GetSysClockSrc(void);

boolean SCG_GetSysClockValid(void);

SCG_Cmu4ClkSrcType SCG_GetCMU4ClockSrc(void);

#if (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON)
void SCG_GateOffPllxClk1BeforeStandby(void);
#endif /* (MCU_CFG_SCG_PLL_CLK1_SUPPORT == STD_ON) */

void SCG_UserIRQHandler(void);
/** @}*/
#if defined(__cplusplus)
}
#endif
/** @}*/ /* Mcu_Scg */
#endif
