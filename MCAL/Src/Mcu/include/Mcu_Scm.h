/**
 *   @file    Mcu_Scm.h
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
#ifndef MCU_SCM_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
#define MCU_SCM_H
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C"
{
#endif

#include "Platform_Types.h"
#include "Mcu_CfgPlatformDef.h"

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
/**
 * @brief Trace clock selection
 *
 */
typedef enum
{
    SCM_TRACE_CORE_CLK = 0U,    /*!< Select platform core clock to trace clock */
    SCM_TRACE_SCG_PLL1_DIVH_CLK /*!< Select SCG PLL1 platform clock to trace clock */
} SCM_TraceClkSrcType;

/**
 * @brief Trace clock divider value
 *
 */
typedef enum
{
    SCM_TRACE_CLOCK_DIV_1   = 0U,  /*!< Trace clock divider by 1 */
    SCM_TRACE_CLOCK_DIV_2   = 2U,  /*!< Trace clock divider by 2 */
    SCM_TRACE_CLOCK_DIV_3   = 4U,  /*!< Trace clock divider by 3 */
    SCM_TRACE_CLOCK_DIV_2_3 = 5U,  /*!< Trace clock divider by 2/3 */
    SCM_TRACE_CLOCK_DIV_4   = 6U,  /*!< Trace clock divider by 4 */
    SCM_TRACE_CLOCK_DIV_5   = 8U,  /*!< Trace clock divider by 5 */
    SCM_TRACE_CLOCK_DIV_2_5 = 9U,  /*!< Trace clock divider by 2/5 */
    SCM_TRACE_CLOCK_DIV_6   = 10U, /*!< Trace clock divider by 6 */
    SCM_TRACE_CLOCK_DIV_7   = 12U, /*!< Trace clock divider by 7 */
    SCM_TRACE_CLOCK_DIV_2_7 = 13U, /*!< Trace clock divider by 2/7 */
    SCM_TRACE_CLOCK_DIV_8   = 14U  /*!< Trace clock divider by 8 */
} SCM_TraceClkDivSelType;

/**
 * @brief data type for register SCM_DEBUG_TRACE.
 * Divider output clock = Divider input clock /(TRACEDIV+1).
 */
typedef struct
{
    boolean                bClkEnable;  /*!< Trace clock  enable.          */
    boolean                bDivEnable;  /*!< Trace clock divider enable.   */
    boolean                bDebugATCLK; /*!<  Debug ATCLK enable.          */
    SCM_TraceClkDivSelType eDiv;        /*!< Trace clock divider divisor.  */
    SCM_TraceClkSrcType    eClkSel;     /*!< Trace clock selection .       */
} SCM_TraceClkDivType;

#if (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON)
/**
 * @brief data type for register SCM_SUBSYS_PCC.
 */
typedef struct
{
    boolean bTpuClockEn;     /*!< TPU clock enable */
    boolean bHsmClockEn;     /*!< HSM clock enable */
    boolean bSubSysWdgRstEn; /*!< Subsystem watchdog reset enable */
} SCM_SubSysClkType;
#else
/**
 * @brief data type for register SCM_HSM_PCC.
 *        configure HSM clock.
 */
typedef struct
{
    boolean bClockEn;    /*!< HSM clock enable */
    boolean bWdgResetEn; /*!< HSM watchdog reset enable */
#if ((MCU_CFG_SCM_7300GT_SUPPORT == STD_ON) || (MCU_CFG_SCM_7300GT_LITE_SUPPORT == STD_ON))
    boolean bCryptoClockEn; /*!< Crypto clock enable(FlexCore mode) */
#if (MCU_CFG_SCM_7300GT_SUPPORT == STD_ON)
    boolean bTpuClockEn; /*!< TPU clock enable(FlexCore mode) */
#endif /* (MCU_CFG_SCM_7300GT_SUPPORT == STD_ON) */
#endif /* ((MCU_CFG_SCM_7300GT_SUPPORT == STD_ON) || (MCU_CFG_SCM_7300GT_LITE_SUPPORT == STD_ON)) */
} SCM_HsmClkSelType;

#endif /* (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON) */

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

/**
 * @brief set trace clock.
 * @details output clock = Divider input clock/(TRACEDIV+1).
 * @param pTraceClockDiv: data structure point of SCM TraceClkDiv configuration.
 */
void SCM_SetTraceClockConfig(const SCM_TraceClkDivType *pTraceClk);

#if (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON)
/**
 * @brief set SubSystem clock.
 *
 * @param pSubSysClk: data structure point of SCM subsystem clock configuration.
 */
MCU_TEXT_SECTION void SCM_SetSubSysClockConfig(const SCM_SubSysClkType *pSubSysClk);
#else
/**
 * @brief set Hsm clock.
 *
 * @param pHsmClk: data structure point of SCM Hsm clock configuration.
 */
void SCM_SetHsmClockConfig(const SCM_HsmClkSelType *pHsmClk);
#endif /* (MCU_CFG_SCM_SUBSYSTEM_SUPPORT == STD_ON) */

#if (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON)
/**
 * @brief Set HSADC bias force enable/disable.
 *
 * @param bEnable Enable/disable.
 */
MCU_TEXT_SECTION void SCM_SetHsadcBiasForce(boolean bEnable);
#endif /* (MCU_CFG_SCM_HSADC_BIAS_FORCE_SUPPORT == STD_ON) */

#if defined(__cplusplus)
}
#endif

/** @}*/
#endif
