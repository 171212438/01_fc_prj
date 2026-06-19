/**
*   @file    Ocu_Tpu_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Ocu - Tpu driver header file.
*   @details Tpu driver defines which need to be exported to external application
*
*   @addtogroup Ocu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Tpu
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add 
                                                         Tpu support(only available on FC7240)
==================================================================================================*/
/* PRQA S 3630 EOF
   3630:The implementation of this struct/union type should be hidden.
   REASON: These structures are needed.
*/
#ifndef OCU_Tpu_TYPES_H
#define OCU_Tpu_TYPES_H
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ocu_Types.h"
#include "StdRegMacros.h"
#include "Tpu_E_Reg.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/* PRQA S 1534++
   1534: The macro '%1s' is declared but not used within this project.
   REASON:These macros are ETH DMA descriptors definition, may be used in the future.
*/
/**
* @brief Tpu 0
*/
#define OCU_TPU_0    ((uint8)0x00)

/**
* @brief Tpu channel 0
*/
#define OCU_TPU_CH_0    ((uint8)0x00)
/**
* @brief Tpu channel 1
*/
#define OCU_TPU_CH_1    ((uint8)0x01)
/**
* @brief Tpu channel 2
*/
#define OCU_TPU_CH_2    ((uint8)0x02)
/**
* @brief Tpu channel 3
*/
#define OCU_TPU_CH_3    ((uint8)0x03)
/**
* @brief Tpu channel 4
*/
#define OCU_TPU_CH_4    ((uint8)0x04)
/**
* @brief Tpu channel 5
*/
#define OCU_TPU_CH_5    ((uint8)0x05)
/**
* @brief Tpu channel 6
*/
#define OCU_TPU_CH_6    ((uint8)0x06)
/**
* @brief Tpu channel 7
*/
#define OCU_TPU_CH_7    ((uint8)0x07)
/**
* @brief Tpu channel 8
*/
#define OCU_TPU_CH_8    ((uint8)0x08)
/**
* @brief Tpu channel 9
*/
#define OCU_TPU_CH_9    ((uint8)0x09)
/**
* @brief Tpu channel 10
*/
#define OCU_TPU_CH_10    ((uint8)0xA)
/**
* @brief Tpu channel 11
*/
#define OCU_TPU_CH_11    ((uint8)0x0B)
/**
* @brief Tpu channel 12
*/
#define OCU_TPU_CH_12    ((uint8)0x0C)
/**
* @brief Tpu channel 13
*/
#define OCU_TPU_CH_13    ((uint8)0x0D)
/**
* @brief Tpu channel 14
*/
#define OCU_TPU_CH_14    ((uint8)0x0E)
/**
* @brief Tpu channel 15
*/
#define OCU_TPU_CH_15    ((uint8)0x0F)
/**
* @brief Tpu channel 16
*/
#define OCU_TPU_CH_16    ((uint8)0x10)
/**
* @brief Tpu channel 17
*/
#define OCU_TPU_CH_17    ((uint8)0x11)
/**
* @brief Tpu channel 18
*/
#define OCU_TPU_CH_18    ((uint8)0x12)
/**
* @brief Tpu channel 19
*/
#define OCU_TPU_CH_19    ((uint8)0x13)
/**
* @brief Tpu channel 20
*/
#define OCU_TPU_CH_20    ((uint8)0x14)
/**
* @brief Tpu channel 21
*/
#define OCU_TPU_CH_21    ((uint8)0x15)
/**
* @brief Tpu channel 22
*/
#define OCU_TPU_CH_22    ((uint8)0x016)
/**
* @brief Tpu channel 23
*/
#define OCU_TPU_CH_23    ((uint8)0x17)
/**
* @brief Tpu channel 24
*/
#define OCU_TPU_CH_24    ((uint8)0x18)
/**
* @brief Tpu channel 25
*/
#define OCU_TPU_CH_25    ((uint8)0x19)
/**
* @brief Tpu channel 26
*/
#define OCU_TPU_CH_26    ((uint8)0x1A)
/**
* @brief Tpu channel 27
*/
#define OCU_TPU_CH_27    ((uint8)0x1B)
/**
* @brief Tpu channel 28
*/
#define OCU_TPU_CH_28    ((uint8)0x1C)
/**
* @brief Tpu channel 29
*/
#define OCU_TPU_CH_29    ((uint8)0x1D)
/**
* @brief Tpu channel 30
*/
#define OCU_TPU_CH_30    ((uint8)0x1E)
/**
* @brief Tpu channel 31
*/
#define OCU_TPU_CH_31    ((uint8)0x1F)
/* PRQA S 1534 --*/

/*==================================================================================================
*                                            ENUMS 
==================================================================================================*/
/**
 * @brief   Tpu debug mode
 * 
 */
typedef enum
{
    OCU_TPU_CHANNEL_NORMAL_CNT_RUN   = 0U,   /**< Tpu counter stopped, channel works as function mode. */
    OCU_TPU_CHANNEL_NORMAL_CNT_STOP  = 1U,  /**< Tpu counter stopped, channel output force to safe state. */
    OCU_TPU_CHANNEL_DISABLE_CNT_RUN  = 2U,  /**< Tpu counter stopped, channel output is frozen. */
    OCU_TPU_CHANNEL_DISABLE_CNT_STOP = 3U  /**< Tpu counter works as function mode, channel works as function mode. */
} OCU_Tpu_DebugModeType;

/**
 * @brief   Tpu module clock source
 * 
 */
typedef enum
{
    OCU_TPU_CLK_TCRCLK         = 0U,
    OCU_TPU_CLK_UP_DOWN_MODE   = 3U,
    OCU_TPU_CLK_BUS_CLOCK_DIV2 = 4U,
    OCU_TPU_CLK_BUS_CLOCK      = 5U
} Ocu_TpuClkSrcType;

/**
 * @brief   TCRCLK signal filter mode
 * 
 */
typedef enum
{
    OCU_TPU_TWO_SAMPLE = 0U,
    OCU_TPU_INTEGRATOR = 2U
} Ocu_TpuTCRCLKFilterModeType;

/**
 * @brief   TCRCLK signal filter clock
 * 
 */
typedef enum
{
    OCU_TPU_BUS_CLOCK_DIV2 = 0U,
    OCU_TPU_CHANNELS_CLOCK = 1U
} Ocu_TpuTCRCLKFilterClockType;

/** 
 * @brief Select a digital filter mode  
 * 
 */
typedef enum
{
    OCU_TPU_FILTER_TWO_SAMPLE   = 0U,
    OCU_TPU_FILTER_BYPASS       = 1U,
    OCU_TPU_FILTER_THREE_SAMPLE = 2U,
    OCU_TPU_FILTER_CONTINUOUS   = 3U
} Ocu_TpuChannelFilterModeType;

/** 
 * @brief The prescaler of the clocks used in digital filters for the channel input signals 
 * 
 */
typedef enum
{
    OCU_TPU_DIV_1     = 0U,
    OCU_TPU_DIV_2     = 1U,
    OCU_TPU_DIV_4     = 2U,
    OCU_TPU_DIV_8     = 3U,
    OCU_TPU_DIV_16    = 4U,
    OCU_TPU_DIV_32    = 5U,
    OCU_TPU_DIV_64    = 6U,
    OCU_TPU_DIV_128   = 7U,
    OCU_TPU_DIV_256   = 8U
} Ocu_TpuChannelFilterPrescaler;

/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall
 * be distinct
 * Reason: Some macro length are more than 31 */
/** 
 * @brief Channel output Pin Action Control.  
 *
 */
typedef enum
{
    OCU_TPUE_NO_CHANGE_OUTPUT                                         = 0U,
    OCU_TPUE_MATCH_SET_OUTPUT_HIGH                                    = 1U,
    OCU_TPUE_MATCH_SET_OUTPUT_LOW                                     = 2U,
    OCU_TPUE_MATCH_TOGGLE_OUTPUT                                      = 3U,
    OCU_TPUE_TRANSITION_SET_OUTPUT_HIGH                               = 4U,
    OCU_TPUE_TRANSITION_SET_OUTPUT_LOW                                = 5U,
    OCU_TPUE_TRANSITION_TOGGLE_OUTPUT                                 = 6U,
    OCU_TPUE_NO_CHANGE_OPAC                                           = 7U
} OCU_TPUE_OPACType;

/** 
 * @brief Channel time base selection of part 1.  
 * 
 */
typedef enum
{
    OCU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR1_MATCHBASE_TCR1             = 0U,
    OCU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR1_MATCHBASE_TCR2             = 1U,
    OCU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR2_MATCHBASE_TCR1             = 2U,
    OCU_TPUE_GREATER_OR_EQUAL_CAPBASE_TCR2_MATCHBASE_TCR2             = 3U,
    OCU_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR1                   = 4U,
    OCU_TPUE_EQUAL_ONLY_CAPBASE_TCR1_MATCHBASE_TCR2                   = 5U,
    OCU_TPUE_EQUAL_ONLY_CAPBASE_TCR2_MATCHBASE_TCR1                   = 6U,
    OCU_TPUE_EQUAL_ONLY_CAPBASE_TCR2_MATCHBASE_TCR2                   = 7U,
} OCU_TPUE_TimeBaseSelctionType;
/* PRQA S 0779 -- */

/** 
 * @brief PDCM Encoding.  
 * 
 */
typedef enum
{
    OCU_TPUE_EM_B_ST                                         = 0U,
    OCU_TPUE_EM_B_DT                                         = 1U,
    OCU_TPUE_EM_NB_ST                                        = 2U,
    OCU_TPUE_EM_NB_DT                                        = 3U,
    OCU_TPUE_M2_ST                                           = 4U,
    OCU_TPUE_M2_DT                                           = 5U,
    OCU_TPUE_BM_ST                                           = 6U,
    OCU_TPUE_BM_DT                                           = 7U,
    OCU_TPUE_M2_O_ST                                         = 8U,
    OCU_TPUE_M2_O_DT                                         = 9U,
    OCU_TPUE_SM_ST                                           = 12U,
    OCU_TPUE_SM_DT                                           = 13U,
    OCU_TPUE_SM_ST_E                                         = 14U,
} OCU_TPUE_PDCMEncodeType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief Tpu HW channel id type
 */
typedef uint8 Ocu_Tpu_ChannelType;

/**
 * @brief          Tpu HW module id type
 */
typedef uint8 Ocu_Tpu_ModuleType;

/**
 * @brief Tpu module specific configuration structure for the Ocu functionality
 */
typedef struct
{
    const Ocu_TpuClkSrcType             eTCR1ClkSrc;
    const uint16                        u16TCR1Prescaler;
    const OCU_Tpu_DebugModeType         eTpuDbgMode;
    const uint8                         u8TpuModuleId;
    const uint32                        u32MaxTCR1Value;
    const Ocu_TpuTCRCLKFilterModeType   eOcuTcrClkFilterMode;
    const Ocu_TpuTCRCLKFilterClockType  eOcuTcrClkFilterClock;
    const Ocu_TpuChannelFilterModeType  eOcuChannelFilterMode;
    const Ocu_TpuChannelFilterPrescaler eOcuChannelFilterPrescaler;
} Ocu_Tpu_ModuleConfigType;

/**
 * @brief Tpu Module Config Type
 * 
 */
typedef struct
{
    const Ocu_Tpu_ModuleType            u8TpuNumModules;           /* Number of Tpu modules in the Ocu configuration */
    const Ocu_Tpu_ModuleConfigType      (*pTpuModulesConfig)[];    /* Pointer to the configured modules for Tpu */
} Ocu_TpuConfigType;

#ifdef __cplusplus
}
#endif

#endif /* OCU_Tpu_TYPES_H */

/** @} */
