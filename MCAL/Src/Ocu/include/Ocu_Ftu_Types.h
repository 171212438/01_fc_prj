/**
*   @file    Ocu_Ftu_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Ocu - Ftu driver header file.
*   @details FTU driver defines which need to be exported to external application
*
*   @addtogroup Ocu
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU
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
*   0.3.0       20/10/2023    QXW0119       N/A          Release version
*   0.4.0       15/12/2023    QXW0119       N/A          Fix AMDC problems
*   0.6.0       18/03/2024    QXW0119       N/A          Add FC7240 support
*   0.7.0       19/04/2024    QXW0119       N/A          Optimization the xdm of OCU module and add 
                                                         Tpu support(only available on FC7240)
==================================================================================================*/
/* PRQA S 3630 EOF
   3630:The implementation of this struct/union type should be hidden.
   REASON: These structures are needed.
*/
#ifndef OCU_FTU_TYPES_H
#define OCU_FTU_TYPES_H
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Ftu_Reg.h"
#include "Ocu_Types.h"
#include "StdRegMacros.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define OCU_FTU_SWOCTRL_FORCED_VALUE_OFFSET  ((uint8)8U)

/* PRQA S 1534++
   1534: The macro '%1s' is declared but not used within this project.
   REASON:These macros are ETH DMA descriptors definition, may be used in the future.
*/
/**
* @brief FTU 0
*/
#define OCU_FTU_0    ((uint8)0x00)
/**
* @brief FTU 1
*/
#define OCU_FTU_1    ((uint8)0x01)
/**
* @brief FTU 2
*/
#define OCU_FTU_2    ((uint8)0x02)
/**
* @brief FTU 3
*/
#define OCU_FTU_3    ((uint8)0x03)
/**
* @brief FTU 4
*/
#define OCU_FTU_4    ((uint8)0x04)
/**
* @brief FTU 5
*/
#define OCU_FTU_5    ((uint8)0x05)
/**
* @brief FTU 6
*/
#define OCU_FTU_6    ((uint8)0x06)
/**
* @brief FTU 7
*/
#define OCU_FTU_7    ((uint8)0x07)

#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B))
/**
* @brief FTU 8
*/
#define OCU_FTU_8    ((uint8)0x08)
/**
* @brief FTU 9
*/
#define OCU_FTU_9    ((uint8)0x09)
/**
* @brief FTU 10
*/
#define OCU_FTU_10    ((uint8)0x0A)
/**
* @brief FTU 11
*/
#define OCU_FTU_11    ((uint8)0x0B)
#endif

/**
* @brief FTU channel 0
*/
#define OCU_FTU_CH_0    ((uint8)0x00)
/**
* @brief FTU channel 1
*/
#define OCU_FTU_CH_1    ((uint8)0x01)
/**
* @brief FTU channel 2
*/
#define OCU_FTU_CH_2    ((uint8)0x02)
/**
* @brief FTU channel 3
*/
#define OCU_FTU_CH_3    ((uint8)0x03)
/**
* @brief FTU channel 4
*/
#define OCU_FTU_CH_4    ((uint8)0x04)
/**
* @brief FTU channel 5
*/
#define OCU_FTU_CH_5    ((uint8)0x05)
/**
* @brief FTU channel 6
*/
#define OCU_FTU_CH_6    ((uint8)0x06)
/**
* @brief FTU channel 7
*/
#define OCU_FTU_CH_7    ((uint8)0x07)

/* PRQA S 1534 --*/

/*==================================================================================================
*                                            ENUMS 
==================================================================================================*/
/**
* @brief   Ftu debug mode
* 
*/
typedef enum
{
    OCU_FTU_DBG_COUNTER_STOP_CHN_WORKS = 0U,       /**< FTU counter stopped, channel works as function mode. */
	OCU_FTU_DBG_COUNTER_STOP_CHN_FORCE_SAFE = 1U,  /**< FTU counter stopped, channel output force to safe state. */
	OCU_FTU_DBG_COUNTER_STOP_CHN_FROZEN = 2U,      /**< FTU counter stopped, channel output is frozen. */
	OCU_FTU_DBG_COUNTER_WORKS_CHN_WORKS = 3U       /**< FTU counter works as function mode, channel works as function mode. */
} OCU_FTU_DebugModeType;

/**
* @brief   Ftu counter prescaler
* 
*/
typedef enum
{
    OCU_FTU_PRESCALER_DIV1 = 0U,
    OCU_FTU_PRESCALER_DIV2 = 1U,
    OCU_FTU_PRESCALER_DIV4 = 2U,
    OCU_FTU_PRESCALER_DIV8 = 3U,
    OCU_FTU_PRESCALER_DIV16 = 4U,
    OCU_FTU_PRESCALER_DIV32 = 5U,
    OCU_FTU_PRESCALER_DIV64 = 6U,
    OCU_FTU_PRESCALER_DIV128= 7U
} Ocu_FtuPrescalerType;

/**
* @brief   Ftu module clock source
* 
*/
typedef enum
{
    OCU_FTU_NO_CLK = 0U,
    OCU_FTU_BUS_CLK = 1U,
    OCU_FTU_PCC_CLK = 3U,
    OCU_FTU_EXTERNAL_CLK0 = 4U,
    OCU_FTU_EXTERNAL_CLK1 = 5U,
    OCU_FTU_EXTERNAL_CLK2 = 6U
} Ocu_FtuModuleClkSrcType;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          Ftu HW channel id type
*/
typedef uint8 Ocu_Ftu_ChannelType;

/**
* @brief          Ftu HW module id type
*/
typedef uint8 Ocu_Ftu_ModuleType;

/**
* @brief Ftu module specific configuration structure for the Ocu functionality
*/
typedef struct
{
    const Ocu_FtuModuleClkSrcType       eClkSrc;
    const Ocu_FtuPrescalerType          ePrescaler;
    const OCU_FTU_DebugModeType         eDbgMode;
    const uint8                         u8ModuleId;
    const uint32                        u32MaxCounterValue;
} Ocu_Ftu_ModuleConfigType;

/**
 * @brief FTU Module Config Type
 * 
 */
typedef struct
{
    const Ocu_Ftu_ModuleType        u8NumModules;           /* Number of Ftu modules in the Ocu configuration */
    const Ocu_Ftu_ModuleConfigType  (*pModulesConfig)[];    /* Pointer to the configured modules for Ftu */
} Ocu_FtuConfigType;

#ifdef __cplusplus
}
#endif

#endif /* OCU_FTU_TYPES_H */

/** @} */
