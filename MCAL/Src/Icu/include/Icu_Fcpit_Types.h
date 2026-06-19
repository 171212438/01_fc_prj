/**
*   @file    Icu_Fcpit_Types.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Fcpit driver header file.
*   @details Fcpit driver defines which need to be exported to external application
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Fcpit
*   PLATFORM             : Flagchip FC4150
*   AUTOSAR VERSION      : 4.3.1
*   AUTOSAR REVISION     : ASR_REL_4_3_1
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
*   0.3.0       27/10/2022    QXW0070       N/A          Icu Initial Version
*   0.5.0       16/03/2023    QXW0070       N/A          Ftu instance add configuration of period
*   1.0.0       23/03/2023    QXW0070       N/A          Update clock source name
*   1.3.0       27/06/2024    QXW0076       N/A          Safety version
==================================================================================================*/
#ifndef ICU_FCPIT_TYPE_H
#define ICU_FCPIT_TYPE_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
/*===============================================================================================
*                                       DEFINES AND MACROS
===============================================================================================*/

/** @brief Fcpit counter mode, the default mode is 32bit periodic count mode */
typedef enum
{
    ICU_FCPIT_32PERIODIC_COUNTER = 0,  /*!< 32-bit periodic counter mode */
    ICU_FCPIT_DUAL_16PERIODIC_COUNTER, /*!< Dual 16-bit periodic counter mode */
    ICU_FCPIT_ACCUMULATOR,             /*!< Accumulator mode */
    ICU_FCPIT_INPUT_CAPTURE,           /*!< Input capture mode */
    ICU_FCPIT_CHANNEL_NOMODE           /*!< No operation mode for the channel */
} Icu_FcpitTimerModeType;

/**
 * @brief  Defines the Icu_FcpitInstanceType enumeration for identifying different Fcpit instances
 */

typedef enum
{
    ICU_FCPIT0 = 0U, /*!< FCPIT0 instance */
    ICU_FCPIT1 = 1U, /*!< FCPIT1 instance */
} Icu_FcpitInstanceType;

/** @brief Fcpit trigger select */
typedef enum
{
    FCPIT_TRIGGER_0 = 0U,
    FCPIT_TRIGGER_1,
    FCPIT_TRIGGER_2,
    FCPIT_TRIGGER_3,
} Icu_FcpitTriggerSelectType;

/** @brief Fcpit trigger source */
typedef enum
{
    FCPIT_TRIGGER_EXTERNAL = 0U,
    FCPIT_TRIGGER_INTERNAL,
} Icu_FcpitTriggerSourceType;

/**
 *
 * @brief Fcpit channel config type
 */
typedef struct
{
    const uint8                u8FcpitChannel;
    Icu_FcpitTimerModeType     eFcpitChannelMode;
    Icu_FcpitTriggerSourceType eFcpitTriggerSrc;
    Icu_FcpitTriggerSelectType eFcpitTriggerSelect;
} Icu_FcpitChannelConfigType;

/**
 * @brief FCPIT module config type
 *
 */
typedef struct
{
    const uint8           u8ChannelCount;
    Icu_FcpitInstanceType eFcpitInstance;
    boolean               bFcpitDebugMode;
    const Icu_FcpitChannelConfigType (*pFcpitChannelsConfig)[];
    const uint8 u8InstancePartition;
} Icu_FcpitModuleConfigType;

/**
 *
 * @brief Fcpit hw config type
 */
typedef struct
{
    const uint8 u8ModuleCount;
    const Icu_FcpitModuleConfigType (*pFcpitModuleConfig)[];
} Icu_FcpitHwConfigType;

#ifdef __cplusplus
}
#endif
#endif /*ICU_FCPIT_TYPE_H*/
/** @} */
