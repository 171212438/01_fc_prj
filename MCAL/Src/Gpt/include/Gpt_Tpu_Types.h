/**
*   @file    Gpt_Tpu_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt - hardware specific type definition
*   @details This file contains the Gpt Autosar hardware specific type definition
*
*   @addtogroup GPT_Tpu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT_TPU
*   PLATFORM             : Flagchip FC7300
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
*   0.7.0       26/04/2024    QXW0074       N/A          Gpt_Tpu Initial version
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_TPU_TYPES_H
#define GPT_TPU_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Number of counter cycles missed due to overflow
*/
#define GPT_TPU_OVERFLOW_PAD_U32           ((uint32)1U)

/**
* @brief Highest possible value for TPU TCR
*/
#define GPT_TPU_E_TCR_MAX_VALUE_U32          ((uint32)0xFFFFFFuL)

/**
* @brief TPU Channels defines
*/
#define TPU_CH_0                  ((uint8)0x00)
#define TPU_CH_1                  ((uint8)0x01)
#define TPU_CH_2                  ((uint8)0x02)
#define TPU_CH_3                  ((uint8)0x03)
#define TPU_CH_4                  ((uint8)0x04)
#define TPU_CH_5                  ((uint8)0x05)
#define TPU_CH_6                  ((uint8)0x06)
#define TPU_CH_7                  ((uint8)0x07)
#define TPU_CH_8                  ((uint8)0x08)
#define TPU_CH_9                  ((uint8)0x09)
#define TPU_CH_10                 ((uint8)0x0a)
#define TPU_CH_11                 ((uint8)0x0b)
#define TPU_CH_12                 ((uint8)0x0c)
#define TPU_CH_13                 ((uint8)0x0d)
#define TPU_CH_14                 ((uint8)0x0e)
#define TPU_CH_15                 ((uint8)0x0f)
#define TPU_CH_16                 ((uint8)0x10)
#define TPU_CH_17                 ((uint8)0x11)
#define TPU_CH_18                 ((uint8)0x12)
#define TPU_CH_19                 ((uint8)0x13)
#define TPU_CH_20                 ((uint8)0x14)
#define TPU_CH_21                 ((uint8)0x15)
#define TPU_CH_22                 ((uint8)0x16)
#define TPU_CH_23                 ((uint8)0x17)
#define TPU_CH_24                 ((uint8)0x18)
#define TPU_CH_25                 ((uint8)0x19)
#define TPU_CH_26                 ((uint8)0x1a)
#define TPU_CH_27                 ((uint8)0x1b)
#define TPU_CH_28                 ((uint8)0x1c)
#define TPU_CH_29                 ((uint8)0x1d)
#define TPU_CH_30                 ((uint8)0x1e)
#define TPU_CH_31                 ((uint8)0x1f)

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This is an enum which does not need to be instantiated. */
/** @brief TPU debug mode */
typedef enum
{
    GPT_TPU_DBG_CNT_RUN = 0U,            /**< TPU counter works as function mode. */
    GPT_TPU_DBG_CNT_STOP = 1U,           /**< TPU counter stopped. */
} Gpt_TpuDebugModeType;
/* PRQA S 1535 -- */

/** @brief TCR1 clock control */
typedef enum
{
    GPT_TPU_CLK_TCRCLK          = 0U,
    GPT_TPU_CLK_UP_DOWN_MODE    = 3U,
    GPT_TPU_CLK_BUS_CLOCK_DIV2  = 4U,
    GPT_TPU_CLK_BUS_CLOCK       = 5U,
} Gpt_TpuClockSourceType;

/** @brief TCRCLK signal filter control (sample mode) */
typedef enum
{
    GPT_TPU_TCRCLK_FITLER_MODE_TWO_SAMPLE = 0U,
    GPT_TPU_TCRCLK_FITLER_MODE_INTEGRATOR = 2U,
} Gpt_TpuTCRCLKFilterModeType;

/** @brief TCRCLK signal filter control (filter clock source)  */
typedef enum
{
    GPT_TPU_TCRCLK_FITLER_CLOCK_BUS_CLOCK_DIV2 = 0U,
    GPT_TPU_TCRCLK_FITLER_CLOCK_CHANNELS_CLOCK = 1U,
} Gpt_TpuTCRCLKFilterClockType;

/** @brief Select a digital filter mode  */
typedef enum
{
    GPT_TPU_FILTER_TWO_SAMPLE   = 0U,
    GPT_TPU_FILTER_BYPASS       = 1U,
    GPT_TPU_FILTER_THREE_SAMPLE = 2U,
    GPT_TPU_FILTER_CONTINUOUS   = 3U,
} Gpt_TpuFilterModeType;

/** @brief The prescaler of the clocks used in digital filters for the channel input signals */
typedef enum
{
    GPT_TPU_PRESCALER_DIV_1     = 0U,
    GPT_TPU_PRESCALER_DIV_2     = 1U,
    GPT_TPU_PRESCALER_DIV_4     = 2U,
    GPT_TPU_PRESCALER_DIV_8     = 3U,
    GPT_TPU_PRESCALER_DIV_16    = 4U,
    GPT_TPU_PRESCALER_DIV_32    = 5U,
    GPT_TPU_PRESCALER_DIV_64    = 6U,
    GPT_TPU_PRESCALER_DIV_128   = 7U,
    GPT_TPU_PRESCALER_DIV_256   = 8U,
} Gpt_TpuFilterPrescalerType;

/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This is an enum which does not need to be instantiated. */
/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall be distinct
*  REASON: Identifiers declared is different */
/** @brief Channel time base selection of part 1.  */
typedef enum
{
    GPT_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR1_MATCHBASE_TCR1             = 0U,
    GPT_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR1_MATCHBASE_TCR2             = 1U,
    GPT_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR2_MATCHBASE_TCR1             = 2U,
    GPT_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR2_MATCHBASE_TCR2             = 3U,
    GPT_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR1                   = 4U,
    GPT_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR2                   = 5U,
    GPT_TPUE_EQUAL_ONLY_CAPBASE_TCR2_MATCHBASE_TCR1                   = 6U,
    GPT_TPUE_EQUAL_ONLY_CAPBASE_TCR2_MATCHBASE_TCR2                   = 7U,
} Gpt_TpuTimeBaseSelctionType;

/* PRQA S 0779 -- */
/** @brief Configure of the channel filter bypass  */
typedef enum
{
    GPT_TPU_CH_FILTER_OPEN      = 0U,
    GPT_TPU_CH_FILTER_BYPASS    = 1U
} Gpt_TpuChannelFilterType;

/** @brief PDCM Encoding.  */
typedef enum
{
    GPT_TPUE_EM_B_ST                                         = 0U,
    GPT_TPUE_EM_B_DT                                         = 1U,
    GPT_TPUE_EM_NB_ST                                        = 2U,
    GPT_TPUE_EM_NB_DT                                        = 3U,
    GPT_TPUE_M2_ST                                           = 4U,
    GPT_TPUE_M2_DT                                           = 5U,
    GPT_TPUE_BM_ST                                           = 6U,
    GPT_TPUE_BM_DT                                           = 7U,
    GPT_TPUE_M2_O_ST                                         = 8U,
    GPT_TPUE_M2_O_DT                                         = 9U,
    GPT_TPUE_SM_ST                                           = 12U,
    GPT_TPUE_SM_DT                                           = 13U,
    GPT_TPUE_SM_ST_E                                         = 14U,
} Gpt_TpuPDCMEncodeType;
/* PRQA S 1535 -- */

/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: When GPT_TPU_USED was defined, this Gpt_ConfigChannelTpuType will be used. */
/**
 * @brief
 */
typedef struct
{
    Gpt_TpuClockSourceType          eTpuClockSrc;
    uint16                          u16Prescaler;
    Gpt_TpuTCRCLKFilterModeType     eTcrClkFilterMode;
    Gpt_TpuTCRCLKFilterClockType    eTcrClkFilterClock;
    Gpt_TpuFilterModeType           eFilterMode;
    Gpt_TpuFilterPrescalerType      eFilterPrescaler;
} Gpt_ConfigChannelTpuType;
/* PRQA S 1535 -- */
/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*GPT_TPU_TYPES_H*/
/** @} */
