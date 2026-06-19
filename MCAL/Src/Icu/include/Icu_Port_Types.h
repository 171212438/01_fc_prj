/**
*   @file    Icu_Port_Types.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Port driver header file.
*   @details Port driver defines which need to be exported to external application
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : PORT
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
*   0.1.0       22/5/2023    QXW0076       N/A          Icu Initial Version
*   0.3.0       21/9/2023    QXW0076       N/A          Add MultiCore feature
==================================================================================================*/

#ifndef ICU_PORT_TYPE_H
#define ICU_PORT_TYPE_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/** @brief Port Instance */
typedef enum
{
    ICU_PORT_A = 0,
    ICU_PORT_B,
    ICU_PORT_C,
    ICU_PORT_D,
    ICU_PORT_E,
    ICU_PORT_F,
    ICU_PORT_G,
    ICU_PORT_H,
    ICU_PORT_I,
} Icu_PortInstanceType;

/*===============================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
===============================================================================================*/

/** @brief Port interrupt configuration */
typedef enum
{
    ICU_PORT_IRQ_DISABLE       = 0U,
    ICU_PORT_IRQ_DMA_RISING    = 1U,
    ICU_PORT_IRQ_DMA_FALLING   = 2U,
    ICU_PORT_IRQ_DMA_BOTH_EDGE = 3U,
    ICU_PORT_IRQ_LOGIC_0       = 8U,
    ICU_PORT_IRQ_RISING        = 9U,
    ICU_PORT_IRQ_FALLING       = 10U,
    ICU_PORT_IRQ_BOTH_EDGE     = 11U,
    ICU_PORT_IRQ_LOGIC_1       = 12U
} Icu_PortIntConfigType;

/**
 * @brief Port Module Config Type
 *
 */
typedef struct
{
    const Icu_PortInstanceType ePortInstance;
    const uint8                u8InstancePartition;
} Icu_PortModuleConfigType;

/** @brief Port Hw Config Type */
typedef struct
{
    const uint8 u8ModuleCount;
    const Icu_PortModuleConfigType (*pPortModuleConfig)[];
} Icu_Port_HwConfigType;

#ifdef __cplusplus
}
#endif
#endif /*ICU_PORT_TYPE_H*/
/** @} */
