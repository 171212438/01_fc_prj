/**
 *   @file    Ocu_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ocu - Ocu type definition.
 *   @details This file contains the OCU AUTOSAR type definition.
 *
 *   @addtogroup Ocu
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : FTU, TPU, EFTU
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
*   0.9.0       18/11/2024    QXW0119       N/A          Add EFTU support
*   1.4.1       09/12/2025    QXW0099       N/A          Change to SOMC mode
==================================================================================================*/

#ifndef OCU_TYPES_H
#define OCU_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Ocu_Cfg.h"

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/
/**
 * @brief      Pin State type
 */
typedef enum
{
    OCU_HIGH = 0U, /* Pin level is high */
    OCU_LOW  = 1U  /* Pin level is low */
} Ocu_PinStateType;

/**
 * @brief      Pin Action type
 * @details    Automatic action (by hardware) to be performed on a pin attached to an OCU channel.
 */
typedef enum
{
    OCU_SET_HIGH = 0U, /* The channel pin will be set HIGH upon compare match. */
    OCU_SET_LOW  = 1U, /* The channel pin will be set LOW upon compare match. */
    OCU_TOGGLE   = 2U, /* The channel pin will be set to the opposite of its current level HIGH upon
                          compare match. */
    OCU_DISABLE = 3U   /* The channel pin will remain at its current level upon compare match. */
} Ocu_PinActionType;

/* clang-format off */
/**
 * @brief      Ocu Return Type
 * @details    Return information after setting a new threshold value.
 */
typedef enum
{
    OCU_CM_IN_REF_INTERVAL = 0U, /* The compare match will occur inside the current Reference Interval. */
    OCU_CM_OUT_REF_INTERVAL = 1U /* The compare match will not occur inside the current Reference Interval. */
} Ocu_ReturnType;
/* clang-format on */

/**
 * @brief Select time base value from TBU_CNT1 and TBU_CNT2.
 *
 */
typedef enum
{
    EFTU_TOM_TIMEBASE_SEL_TBU_CNT1 = 0u, /* TBU_CNT1 selected */
    EFTU_TOM_TIMEBASE_SEL_TBU_CNT2 = 1u, /* TBU_CNT2 selected */
    EFTU_TOM_TIMEBASE_SEL_TBU_CNT0 = 2u, /* TBU_CNT0 selected */
} Ocu_TimeBaseSel_Type;

#if (OCU_DOWNCOUNTING_SUPPORTED == STD_ON)
/**
 * @brief      Ocu Counting direction
 *
 */
typedef enum
{
    OCU_UPCOUNTING   = 0U,
    OCU_DOWNCOUNTING = 1U
} Ocu_CountDirectionType;
#endif

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
 * @brief      Ocu channel type
 */
typedef uint8 Ocu_ChannelType;

/**
 * @brief      Channel notification typedef
 */
typedef void (*Ocu_NotifyType)(void);

#if ((OCU_SET_RELATIVE_THRESHOLD_API == STD_ON) || (OCU_SET_ABSOLUTE_THRESHOLD_API == STD_ON))
/*
 * structure for OCU SetRelativeThreshold and SetAbsoluteThreshold functionalities
 */
typedef struct
{
    Ocu_ChannelType u8ChannelNumber;   /*channel id */
    uint32          u32ReferenceValue; /* Reference interval */
    uint32          u32AbsoluteValue;  /* Absolute threshold value */
    uint32          u32RelativeValue;  /* Relative threshold value */
    Ocu_ReturnType  eInterval;         /* Returned status */
} Ocu_SetThresholdType;
#endif

#ifdef __cplusplus
}
#endif

#endif /* OCU_TYPES_H */

/** @} */
