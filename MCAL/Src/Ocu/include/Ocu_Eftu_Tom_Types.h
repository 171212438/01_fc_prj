/**
 *   @file    Ocu_Eftu_Tom_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - Eftu driver header file.
 *   @details Eftu driver defines which need to be exported to external application
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : EFTU
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
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
*   1.4.1       09/12/2025    QXW0099       N/A          Change to SOMC mode
==================================================================================================*/
/* PRQA S 3630 EOF
   3630:The implementation of this struct/union type should be hidden.
   REASON: These structures are needed.
*/
#ifndef OCU_EFTU_TOM_TYPES_H
#define OCU_EFTU_TOM_TYPES_H
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ocu_Types.h"
#include "StdRegMacros.h"
#include "Eftu_Tom_Reg.h"

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
 * @brief Eftu 0 TOM 0
 */
#define OCU_EFTU_0_TOM_0          ((uint8)0x00)
/**
 * @brief Eftu 0 TOM 1
 */
#define OCU_EFTU_0_TOM_1          ((uint8)0x01)
/**
 * @brief Eftu 1 TOM 0
 */
#define OCU_EFTU_1_TOM_0          ((uint8)0x02)
/**
 * @brief Eftu 1 TOM 1
 */
#define OCU_EFTU_1_TOM_1          ((uint8)0x03)
/**
 * @brief Eftu 2 TOM 0
 */
#define OCU_EFTU_2_TOM_0          ((uint8)0x04)
/**
 * @brief Eftu 2 TOM 1
 */
#define OCU_EFTU_2_TOM_1          ((uint8)0x05)

/**
 * @brief Eftu channel 0
 */
#define OCU_TOM_CH_0              ((uint8)0x00)
/**
 * @brief Eftu channel 1
 */
#define OCU_TOM_CH_1              ((uint8)0x01)
/**
 * @brief Eftu channel 2
 */
#define OCU_TOM_CH_2              ((uint8)0x02)
/**
 * @brief Eftu channel 3
 */
#define OCU_TOM_CH_3              ((uint8)0x03)
/**
 * @brief Eftu channel 4
 */
#define OCU_TOM_CH_4              ((uint8)0x04)
/**
 * @brief Eftu channel 5
 */
#define OCU_TOM_CH_5              ((uint8)0x05)
/**
 * @brief Eftu channel 6
 */
#define OCU_TOM_CH_6              ((uint8)0x06)
/**
 * @brief Eftu channel 7
 */
#define OCU_TOM_CH_7              ((uint8)0x07)
/**
 * @brief Eftu channel 8
 */
#define OCU_TOM_CH_8              ((uint8)0x08)
/**
 * @brief Eftu channel 9
 */
#define OCU_TOM_CH_9              ((uint8)0x09)
/**
 * @brief Eftu channel 10
 */
#define OCU_TOM_CH_10             ((uint8)0xA)
/**
 * @brief Eftu channel 11
 */
#define OCU_TOM_CH_11             ((uint8)0x0B)
/**
 * @brief Eftu channel 12
 */
#define OCU_TOM_CH_12             ((uint8)0x0C)
/**
 * @brief Eftu channel 13
 */
#define OCU_TOM_CH_13             ((uint8)0x0D)
/**
 * @brief Eftu channel 14
 */
#define OCU_TOM_CH_14             ((uint8)0x0E)
/**
 * @brief Eftu channel 15
 */
#define OCU_TOM_CH_15             ((uint8)0x0F)
/* PRQA S 1534 --*/

#define OCU_TOM_CHANNEL_MODE_SOMI ((uint32)0x00U)
#define OCU_TOM_CHANNEL_MODE_SOMC ((uint32)0x01U)
#define OCU_TOM_CHANNEL_MODE_SOMP ((uint32)0x02U)
#define OCU_TOM_CHANNEL_MODE_SOMS ((uint32)0x03U)

#define RST_CCU0_MATCH_CM0        ((uint32)0x00U)
#define RST_CCU0_TRIGGER          ((uint32)0x01U)

#define OCU_TOM_MAX_CN0_VALUE     ((uint32)0xFFFFFF)
#define OCU_TOM_BORDR_PAST        ((uint32)0x800000)

#define OCU_BIT_SET               (0x1U)
#define OCU_BIT_RESET             (0x0U)

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief Eftu HW channel id type
 */
typedef uint8 Ocu_Eftu_ChannelType;

/**
 * @brief          Eftu HW module id type
 */
typedef uint8 Ocu_Eftu_ModuleType;

/**
 * @brief Eftu module specific configuration structure for the Ocu functionality
 */
typedef struct
{
    const uint8  eEftuClkSrc;
    const uint8  u8EftuModuleId;
    const uint32 u32MaxCounterValue;
} Ocu_Eftu_ChanConfigType;

/**
 * @brief Eftu Module Config Type
 *
 */
typedef struct
{
    const Ocu_Eftu_ModuleType u8EftuNumModules; /* Number of Eftu modules in the Ocu configuration */
    const Ocu_Eftu_ChanConfigType (
        *pEftuModulesConfig)[]; /* Pointer to the configured modules for Eftu */
} Ocu_eFtuConfigType;

/**
 * @brief Ocu Eftu Compare Strategy Type
 *
 * This enum defines the compare strategy for the OCU EFTU module,
 * corresponding to the TMCB[4:2] bits.
 */
typedef enum
{
    OCU_EFTU_COMP_CCU0_CCU1_PARALLEL_DISABLE_ANY            = 0u,
    OCU_EFTU_COMP_CCU0_CCU1_PARALLEL_DISABLE_BOTH           = 1u,
    OCU_EFTU_COMP_CCU0_ONLY_TBU_CNT0                        = 2u,
    OCU_EFTU_COMP_CCU1_ONLY_TBU_CNT1_TBU_CNT2               = 3u,
    OCU_EFTU_COMP_CCU0_THEN_CCU1_TBU_CNT0                   = 4u,
    OCU_EFTU_COMP_CCU0_THEN_CCU1_TBU_CNT1_TBU_CNT2          = 5u,
    OCU_EFTU_COMP_CCU0_THEN_CCU1_TBU_CNT0_TBU_CNT1_TBU_CNT2 = 6u,
    OCU_EFTU_COMP_CANCEL_PENDING_EVENTS                     = 7u
} Ocu_eFtuCompStrategy_Type;

/**
 * @brief Ocu Eftu Signal Level Control Type
 *
 * This enum defines the signal level control strategy for the OCU EFTU module,
 * corresponding to the TMCB[1:0] bits.
 */
typedef enum
{
    OCU_EFTU_LEVEL_CTRL_NO_CHANGE     = 0u,
    OCU_EFTU_LEVEL_CTRL_SET_TO_1_OR_0 = 1u,
    OCU_EFTU_LEVEL_CTRL_SET_TO_0_OR_1 = 2u,
    OCU_EFTU_LEVEL_CTRL_TOGGLE        = 3u
} Ocu_eFtuLevelCtrl_Type;

#ifdef __cplusplus
}
#endif

#endif /* OCU_EFTU_TOM_TYPES_H */

/** @} */
