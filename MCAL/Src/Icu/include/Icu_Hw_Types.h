/**
*   @file    Icu_Hw_Types.h
*   @version 1.5.1

*   @brief   AUTOSAR Icu - Hw driver header file.
*   @details Hw driver defines which need to be exported to external application
*
*   @addtogroup ICU
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FTU PORT Aontimer
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

#ifndef ICU_HW_TYPES_H
#define ICU_HW_TYPES_H
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "StdRegMacros.h"
#include "Icu_Ftu_Types.h"
#include "Icu_Port_Types.h"
#include "Icu_Aontimer_Types.h"
#include "Icu_Cmp_Types.h"
#include "Icu_Ism_Types.h"
#include "Icu_Tpu_Types.h"
#include "Icu_Fcpit_Types.h"
#include "Icu_Eftu_Tim_Types.h"
#include "Icu_Cfg.h"

/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief Channel is not Initialized
 */
#define ICU_CHANNEL_STATE_OFF            (0x00)
/**
 * @brief Wakeup feature is currently enabled
 */
#define ICU_CHANNEL_STATE_WKUP           ((Icu_ChannelStateType)BIT0)
/**
 * @brief The current channel status - IDLE / ACTIVE
 */
#define ICU_CHANNEL_STATE_ACTIVE         ((Icu_ChannelStateType)BIT1)
/**
 * @brief Notification is enabled
 */
#define ICU_CHANNEL_STATE_NOTIFICATION   ((Icu_ChannelStateType)BIT2)
/**
 * @brief The current channel state - RUNNING
 */
#define ICU_CHANNEL_STATE_RUNNING        ((Icu_ChannelStateType)BIT3)
/**
 * @brief Is wakeup source
 */
#define ICU_CHANNEL_IS_WAKEUP_SOURCE     ((Icu_ChannelStateType)BIT7)

/**
 * @brief Channel numbers of every FTU module
 *
 */
#define ICU_FTU_CHANNELS_PER_MODULE      (8U)

/**
 * @brief Channel numbers of every Eftu_tim module
 *
 */
#define ICU_EFTU_TIM_CHANNELS_PER_MODULE (8U)

/**
 * @brief Channel numbers of every PORT module
 *
 */
#define ICU_PORT_CHANNELS_PER_MODULE     (32U)

/**
 * @brief Channel numbers of every TPU module
 *
 */
#define ICU_TPU_CHANNELS_PER_MODULE      (32U)

/**
 * @brief Channel numbers of every FCPIT module
 *
 */
#define ICU_FCPIT_CHANNELS_PER_MODULE    (4U)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Icu Hardware module type
 *
 */
typedef enum
{
    ICU_HW_FTU_0,
    ICU_HW_FTU_1,
    ICU_HW_FTU_2,
    ICU_HW_FTU_3,
    ICU_HW_FTU_4,
    ICU_HW_FTU_5,
#if (ICU_TOTAL_FTU_NUMBER > 6U)
    ICU_HW_FTU_6,
    ICU_HW_FTU_7,
#endif
#if (ICU_TOTAL_FTU_NUMBER > 8U)
    ICU_HW_FTU_8,
    ICU_HW_FTU_9,
#endif
#if (ICU_TOTAL_FTU_NUMBER > 10U)
    ICU_HW_FTU_10,
    ICU_HW_FTU_11,
#endif
    ICU_HW_PORT_A,
    ICU_HW_PORT_B,
    ICU_HW_PORT_C,
    ICU_HW_PORT_D,
    ICU_HW_PORT_E,
#if (ICU_TOTAL_PORT_NUMBER > 5U)
    ICU_HW_PORT_F,
#endif
#if (ICU_TOTAL_PORT_NUMBER > 6U)
    ICU_HW_PORT_G,
    ICU_HW_PORT_H,
    ICU_HW_PORT_I,
#endif
    ICU_HW_AONTIMER,

#if (ICU_SUPPORT_CMP == STD_ON)
    ICU_HW_CMP0,
#if (ICU_TOTAL_CMP_NUMBER > 1U)
    ICU_HW_CMP1,
#endif
#if (ICU_TOTAL_CMP_NUMBER > 2U)
    ICU_HW_CMP2,
#endif
#endif
    ICU_HW_ISM,
#if (ICU_SUPPORT_TPU == STD_ON)
    ICU_HW_TPU,
#endif
    ICU_HW_FCPIT0,
#if (ICU_TOTAL_FCPIT_NUMBER > 1U)
    ICU_HW_FCPIT1,
#endif

#if (ICU_SUPPORT_EFTU == STD_ON)
    ICU_HW_EFTU_0,
#if (ICU_TOTAL_EFTU_NUMBER > 1U)
    ICU_HW_EFTU_1,
    ICU_HW_EFTU_2,
#endif
#endif
} Icu_HwType;

#define ICU_HW_FTU_START (ICU_HW_FTU_0)
#if (ICU_TOTAL_FTU_NUMBER == 12U)
#define ICU_HW_FTU_END (ICU_HW_FTU_11)
#elif (ICU_TOTAL_FTU_NUMBER == 10U)
#define ICU_HW_FTU_END (ICU_HW_FTU_9)
#elif (ICU_TOTAL_FTU_NUMBER == 8U)
#define ICU_HW_FTU_END (ICU_HW_FTU_7)
#elif (ICU_TOTAL_FTU_NUMBER == 6U)
#define ICU_HW_FTU_END (ICU_HW_FTU_5)
#endif

#define ICU_HW_PORT_START (ICU_HW_PORT_A)
#if (ICU_TOTAL_PORT_NUMBER == 9U)
#define ICU_HW_PORT_END (ICU_HW_PORT_I)
#elif (ICU_TOTAL_PORT_NUMBER == 5U)
#define ICU_HW_PORT_END (ICU_HW_PORT_E)
#elif (ICU_TOTAL_PORT_NUMBER == 6U)
#define ICU_HW_PORT_END (ICU_HW_PORT_F)
#endif

#if (ICU_SUPPORT_CMP == STD_ON)

#define ICU_HW_CMP_START (ICU_HW_CMP0)
#if (ICU_TOTAL_CMP_NUMBER == 1U)
#define ICU_HW_CMP_END (ICU_HW_CMP0)
#elif (ICU_TOTAL_CMP_NUMBER == 2U)
#define ICU_HW_CMP_END (ICU_HW_CMP1)
#elif (ICU_TOTAL_CMP_NUMBER == 3U)
#define ICU_HW_CMP_END (ICU_HW_CMP2)
#endif

#endif

#define ICU_HW_ISM_END (ICU_HW_ISM)

#if (ICU_SUPPORT_TPU == STD_ON)
#define ICU_HW_TPU_START (ICU_HW_TPU)
#define ICU_HW_TPU_END   (ICU_HW_TPU)
#endif

#define ICU_HW_FCPIT_START (ICU_HW_FCPIT0)
#if (ICU_TOTAL_FCPIT_NUMBER == 1U)
#define ICU_HW_FCPIT_END (ICU_HW_FCPIT0)
#elif (ICU_TOTAL_FCPIT_NUMBER == 2U)
#define ICU_HW_FCPIT_END (ICU_HW_FCPIT1)
#endif

#if (ICU_SUPPORT_EFTU == STD_ON)
#define ICU_HW_EFTU_START (ICU_HW_EFTU_0)
#if (ICU_TOTAL_EFTU_NUMBER == 1U)
#define ICU_HW_EFTU_END (ICU_HW_EFTU_0)
#elif (ICU_TOTAL_EFTU_NUMBER == 3U)
#define ICU_HW_EFTU_END (ICU_HW_EFTU_2)
#endif
#endif
typedef enum
{
    ICU_HW_FTU_0_CH_0 = 0,
    ICU_HW_FTU_0_CH_1,
    ICU_HW_FTU_0_CH_2,
    ICU_HW_FTU_0_CH_3,
    ICU_HW_FTU_0_CH_4,
    ICU_HW_FTU_0_CH_5,
    ICU_HW_FTU_0_CH_6,
    ICU_HW_FTU_0_CH_7,

    ICU_HW_FTU_1_CH_0,
    ICU_HW_FTU_1_CH_1,
    ICU_HW_FTU_1_CH_2,
    ICU_HW_FTU_1_CH_3,
    ICU_HW_FTU_1_CH_4,
    ICU_HW_FTU_1_CH_5,
    ICU_HW_FTU_1_CH_6,
    ICU_HW_FTU_1_CH_7,

    ICU_HW_FTU_2_CH_0,
    ICU_HW_FTU_2_CH_1,
    ICU_HW_FTU_2_CH_2,
    ICU_HW_FTU_2_CH_3,
    ICU_HW_FTU_2_CH_4,
    ICU_HW_FTU_2_CH_5,
    ICU_HW_FTU_2_CH_6,
    ICU_HW_FTU_2_CH_7,

    ICU_HW_FTU_3_CH_0,
    ICU_HW_FTU_3_CH_1,
    ICU_HW_FTU_3_CH_2,
    ICU_HW_FTU_3_CH_3,
    ICU_HW_FTU_3_CH_4,
    ICU_HW_FTU_3_CH_5,
    ICU_HW_FTU_3_CH_6,
    ICU_HW_FTU_3_CH_7,

    ICU_HW_FTU_4_CH_0,
    ICU_HW_FTU_4_CH_1,
    ICU_HW_FTU_4_CH_2,
    ICU_HW_FTU_4_CH_3,
    ICU_HW_FTU_4_CH_4,
    ICU_HW_FTU_4_CH_5,
    ICU_HW_FTU_4_CH_6,
    ICU_HW_FTU_4_CH_7,

    ICU_HW_FTU_5_CH_0,
    ICU_HW_FTU_5_CH_1,
    ICU_HW_FTU_5_CH_2,
    ICU_HW_FTU_5_CH_3,
    ICU_HW_FTU_5_CH_4,
    ICU_HW_FTU_5_CH_5,
    ICU_HW_FTU_5_CH_6,
    ICU_HW_FTU_5_CH_7,
#if (ICU_TOTAL_FTU_NUMBER > 6U)
    ICU_HW_FTU_6_CH_0,
    ICU_HW_FTU_6_CH_1,
    ICU_HW_FTU_6_CH_2,
    ICU_HW_FTU_6_CH_3,
    ICU_HW_FTU_6_CH_4,
    ICU_HW_FTU_6_CH_5,
    ICU_HW_FTU_6_CH_6,
    ICU_HW_FTU_6_CH_7,

    ICU_HW_FTU_7_CH_0,
    ICU_HW_FTU_7_CH_1,
    ICU_HW_FTU_7_CH_2,
    ICU_HW_FTU_7_CH_3,
    ICU_HW_FTU_7_CH_4,
    ICU_HW_FTU_7_CH_5,
    ICU_HW_FTU_7_CH_6,
    ICU_HW_FTU_7_CH_7,
#endif
#if (ICU_TOTAL_FTU_NUMBER > 8U)
    ICU_HW_FTU_8_CH_0,
    ICU_HW_FTU_8_CH_1,
    ICU_HW_FTU_8_CH_2,
    ICU_HW_FTU_8_CH_3,
    ICU_HW_FTU_8_CH_4,
    ICU_HW_FTU_8_CH_5,
    ICU_HW_FTU_8_CH_6,
    ICU_HW_FTU_8_CH_7,

    ICU_HW_FTU_9_CH_0,
    ICU_HW_FTU_9_CH_1,
    ICU_HW_FTU_9_CH_2,
    ICU_HW_FTU_9_CH_3,
    ICU_HW_FTU_9_CH_4,
    ICU_HW_FTU_9_CH_5,
    ICU_HW_FTU_9_CH_6,
    ICU_HW_FTU_9_CH_7,
#endif
#if (ICU_TOTAL_FTU_NUMBER > 10U)
    ICU_HW_FTU_10_CH_0,
    ICU_HW_FTU_10_CH_1,
    ICU_HW_FTU_10_CH_2,
    ICU_HW_FTU_10_CH_3,
    ICU_HW_FTU_10_CH_4,
    ICU_HW_FTU_10_CH_5,
    ICU_HW_FTU_10_CH_6,
    ICU_HW_FTU_10_CH_7,

    ICU_HW_FTU_11_CH_0,
    ICU_HW_FTU_11_CH_1,
    ICU_HW_FTU_11_CH_2,
    ICU_HW_FTU_11_CH_3,
    ICU_HW_FTU_11_CH_4,
    ICU_HW_FTU_11_CH_5,
    ICU_HW_FTU_11_CH_6,
    ICU_HW_FTU_11_CH_7,
#endif
    ICU_HW_PORT_A_CH_0,
    ICU_HW_PORT_A_CH_1,
    ICU_HW_PORT_A_CH_2,
    ICU_HW_PORT_A_CH_3,
    ICU_HW_PORT_A_CH_4,
    ICU_HW_PORT_A_CH_5,
    ICU_HW_PORT_A_CH_6,
    ICU_HW_PORT_A_CH_7,
    ICU_HW_PORT_A_CH_8,
    ICU_HW_PORT_A_CH_9,
    ICU_HW_PORT_A_CH_10,
    ICU_HW_PORT_A_CH_11,
    ICU_HW_PORT_A_CH_12,
    ICU_HW_PORT_A_CH_13,
    ICU_HW_PORT_A_CH_14,
    ICU_HW_PORT_A_CH_15,
    ICU_HW_PORT_A_CH_16,
    ICU_HW_PORT_A_CH_17,
    ICU_HW_PORT_A_CH_18,
    ICU_HW_PORT_A_CH_19,
    ICU_HW_PORT_A_CH_20,
    ICU_HW_PORT_A_CH_21,
    ICU_HW_PORT_A_CH_22,
    ICU_HW_PORT_A_CH_23,
    ICU_HW_PORT_A_CH_24,
    ICU_HW_PORT_A_CH_25,
    ICU_HW_PORT_A_CH_26,
    ICU_HW_PORT_A_CH_27,
    ICU_HW_PORT_A_CH_28,
    ICU_HW_PORT_A_CH_29,
    ICU_HW_PORT_A_CH_30,
    ICU_HW_PORT_A_CH_31,

    ICU_HW_PORT_B_CH_0,
    ICU_HW_PORT_B_CH_1,
    ICU_HW_PORT_B_CH_2,
    ICU_HW_PORT_B_CH_3,
    ICU_HW_PORT_B_CH_4,
    ICU_HW_PORT_B_CH_5,
    ICU_HW_PORT_B_CH_6,
    ICU_HW_PORT_B_CH_7,
    ICU_HW_PORT_B_CH_8,
    ICU_HW_PORT_B_CH_9,
    ICU_HW_PORT_B_CH_10,
    ICU_HW_PORT_B_CH_11,
    ICU_HW_PORT_B_CH_12,
    ICU_HW_PORT_B_CH_13,
    ICU_HW_PORT_B_CH_14,
    ICU_HW_PORT_B_CH_15,
    ICU_HW_PORT_B_CH_16,
    ICU_HW_PORT_B_CH_17,
    ICU_HW_PORT_B_CH_18,
    ICU_HW_PORT_B_CH_19,
    ICU_HW_PORT_B_CH_20,
    ICU_HW_PORT_B_CH_21,
    ICU_HW_PORT_B_CH_22,
    ICU_HW_PORT_B_CH_23,
    ICU_HW_PORT_B_CH_24,
    ICU_HW_PORT_B_CH_25,
    ICU_HW_PORT_B_CH_26,
    ICU_HW_PORT_B_CH_27,
    ICU_HW_PORT_B_CH_28,
    ICU_HW_PORT_B_CH_29,
    ICU_HW_PORT_B_CH_30,
    ICU_HW_PORT_B_CH_31,

    ICU_HW_PORT_C_CH_0,
    ICU_HW_PORT_C_CH_1,
    ICU_HW_PORT_C_CH_2,
    ICU_HW_PORT_C_CH_3,
    ICU_HW_PORT_C_CH_4,
    ICU_HW_PORT_C_CH_5,
    ICU_HW_PORT_C_CH_6,
    ICU_HW_PORT_C_CH_7,
    ICU_HW_PORT_C_CH_8,
    ICU_HW_PORT_C_CH_9,
    ICU_HW_PORT_C_CH_10,
    ICU_HW_PORT_C_CH_11,
    ICU_HW_PORT_C_CH_12,
    ICU_HW_PORT_C_CH_13,
    ICU_HW_PORT_C_CH_14,
    ICU_HW_PORT_C_CH_15,
    ICU_HW_PORT_C_CH_16,
    ICU_HW_PORT_C_CH_17,
    ICU_HW_PORT_C_CH_18,
    ICU_HW_PORT_C_CH_19,
    ICU_HW_PORT_C_CH_20,
    ICU_HW_PORT_C_CH_21,
    ICU_HW_PORT_C_CH_22,
    ICU_HW_PORT_C_CH_23,
    ICU_HW_PORT_C_CH_24,
    ICU_HW_PORT_C_CH_25,
    ICU_HW_PORT_C_CH_26,
    ICU_HW_PORT_C_CH_27,
    ICU_HW_PORT_C_CH_28,
    ICU_HW_PORT_C_CH_29,
    ICU_HW_PORT_C_CH_30,
    ICU_HW_PORT_C_CH_31,

    ICU_HW_PORT_D_CH_0,
    ICU_HW_PORT_D_CH_1,
    ICU_HW_PORT_D_CH_2,
    ICU_HW_PORT_D_CH_3,
    ICU_HW_PORT_D_CH_4,
    ICU_HW_PORT_D_CH_5,
    ICU_HW_PORT_D_CH_6,
    ICU_HW_PORT_D_CH_7,
    ICU_HW_PORT_D_CH_8,
    ICU_HW_PORT_D_CH_9,
    ICU_HW_PORT_D_CH_10,
    ICU_HW_PORT_D_CH_11,
    ICU_HW_PORT_D_CH_12,
    ICU_HW_PORT_D_CH_13,
    ICU_HW_PORT_D_CH_14,
    ICU_HW_PORT_D_CH_15,
    ICU_HW_PORT_D_CH_16,
    ICU_HW_PORT_D_CH_17,
    ICU_HW_PORT_D_CH_18,
    ICU_HW_PORT_D_CH_19,
    ICU_HW_PORT_D_CH_20,
    ICU_HW_PORT_D_CH_21,
    ICU_HW_PORT_D_CH_22,
    ICU_HW_PORT_D_CH_23,
    ICU_HW_PORT_D_CH_24,
    ICU_HW_PORT_D_CH_25,
    ICU_HW_PORT_D_CH_26,
    ICU_HW_PORT_D_CH_27,
    ICU_HW_PORT_D_CH_28,
    ICU_HW_PORT_D_CH_29,
    ICU_HW_PORT_D_CH_30,
    ICU_HW_PORT_D_CH_31,

    ICU_HW_PORT_E_CH_0,
    ICU_HW_PORT_E_CH_1,
    ICU_HW_PORT_E_CH_2,
    ICU_HW_PORT_E_CH_3,
    ICU_HW_PORT_E_CH_4,
    ICU_HW_PORT_E_CH_5,
    ICU_HW_PORT_E_CH_6,
    ICU_HW_PORT_E_CH_7,
    ICU_HW_PORT_E_CH_8,
    ICU_HW_PORT_E_CH_9,
    ICU_HW_PORT_E_CH_10,
    ICU_HW_PORT_E_CH_11,
    ICU_HW_PORT_E_CH_12,
    ICU_HW_PORT_E_CH_13,
    ICU_HW_PORT_E_CH_14,
    ICU_HW_PORT_E_CH_15,
    ICU_HW_PORT_E_CH_16,
    ICU_HW_PORT_E_CH_17,
    ICU_HW_PORT_E_CH_18,
    ICU_HW_PORT_E_CH_19,
    ICU_HW_PORT_E_CH_20,
    ICU_HW_PORT_E_CH_21,
    ICU_HW_PORT_E_CH_22,
    ICU_HW_PORT_E_CH_23,
    ICU_HW_PORT_E_CH_24,
    ICU_HW_PORT_E_CH_25,
    ICU_HW_PORT_E_CH_26,
    ICU_HW_PORT_E_CH_27,
    ICU_HW_PORT_E_CH_28,
    ICU_HW_PORT_E_CH_29,
    ICU_HW_PORT_E_CH_30,
    ICU_HW_PORT_E_CH_31,
#if (ICU_TOTAL_PORT_NUMBER > 5U)
    ICU_HW_PORT_F_CH_0,
    ICU_HW_PORT_F_CH_1,
    ICU_HW_PORT_F_CH_2,
    ICU_HW_PORT_F_CH_3,
    ICU_HW_PORT_F_CH_4,
    ICU_HW_PORT_F_CH_5,
    ICU_HW_PORT_F_CH_6,
    ICU_HW_PORT_F_CH_7,
    ICU_HW_PORT_F_CH_8,
    ICU_HW_PORT_F_CH_9,
    ICU_HW_PORT_F_CH_10,
    ICU_HW_PORT_F_CH_11,
    ICU_HW_PORT_F_CH_12,
    ICU_HW_PORT_F_CH_13,
    ICU_HW_PORT_F_CH_14,
    ICU_HW_PORT_F_CH_15,
    ICU_HW_PORT_F_CH_16,
    ICU_HW_PORT_F_CH_17,
    ICU_HW_PORT_F_CH_18,
    ICU_HW_PORT_F_CH_19,
    ICU_HW_PORT_F_CH_20,
    ICU_HW_PORT_F_CH_21,
    ICU_HW_PORT_F_CH_22,
    ICU_HW_PORT_F_CH_23,
    ICU_HW_PORT_F_CH_24,
    ICU_HW_PORT_F_CH_25,
    ICU_HW_PORT_F_CH_26,
    ICU_HW_PORT_F_CH_27,
    ICU_HW_PORT_F_CH_28,
    ICU_HW_PORT_F_CH_29,
    ICU_HW_PORT_F_CH_30,
    ICU_HW_PORT_F_CH_31,
#endif
#if (ICU_TOTAL_PORT_NUMBER > 6U)
    ICU_HW_PORT_G_CH_0,
    ICU_HW_PORT_G_CH_1,
    ICU_HW_PORT_G_CH_2,
    ICU_HW_PORT_G_CH_3,
    ICU_HW_PORT_G_CH_4,
    ICU_HW_PORT_G_CH_5,
    ICU_HW_PORT_G_CH_6,
    ICU_HW_PORT_G_CH_7,
    ICU_HW_PORT_G_CH_8,
    ICU_HW_PORT_G_CH_9,
    ICU_HW_PORT_G_CH_10,
    ICU_HW_PORT_G_CH_11,
    ICU_HW_PORT_G_CH_12,
    ICU_HW_PORT_G_CH_13,
    ICU_HW_PORT_G_CH_14,
    ICU_HW_PORT_G_CH_15,
    ICU_HW_PORT_G_CH_16,
    ICU_HW_PORT_G_CH_17,
    ICU_HW_PORT_G_CH_18,
    ICU_HW_PORT_G_CH_19,
    ICU_HW_PORT_G_CH_20,
    ICU_HW_PORT_G_CH_21,
    ICU_HW_PORT_G_CH_22,
    ICU_HW_PORT_G_CH_23,
    ICU_HW_PORT_G_CH_24,
    ICU_HW_PORT_G_CH_25,
    ICU_HW_PORT_G_CH_26,
    ICU_HW_PORT_G_CH_27,
    ICU_HW_PORT_G_CH_28,
    ICU_HW_PORT_G_CH_29,
    ICU_HW_PORT_G_CH_30,
    ICU_HW_PORT_G_CH_31,

    ICU_HW_PORT_H_CH_0,
    ICU_HW_PORT_H_CH_1,
    ICU_HW_PORT_H_CH_2,
    ICU_HW_PORT_H_CH_3,
    ICU_HW_PORT_H_CH_4,
    ICU_HW_PORT_H_CH_5,
    ICU_HW_PORT_H_CH_6,
    ICU_HW_PORT_H_CH_7,
    ICU_HW_PORT_H_CH_8,
    ICU_HW_PORT_H_CH_9,
    ICU_HW_PORT_H_CH_10,
    ICU_HW_PORT_H_CH_11,
    ICU_HW_PORT_H_CH_12,
    ICU_HW_PORT_H_CH_13,
    ICU_HW_PORT_H_CH_14,
    ICU_HW_PORT_H_CH_15,
    ICU_HW_PORT_H_CH_16,
    ICU_HW_PORT_H_CH_17,
    ICU_HW_PORT_H_CH_18,
    ICU_HW_PORT_H_CH_19,
    ICU_HW_PORT_H_CH_20,
    ICU_HW_PORT_H_CH_21,
    ICU_HW_PORT_H_CH_22,
    ICU_HW_PORT_H_CH_23,
    ICU_HW_PORT_H_CH_24,
    ICU_HW_PORT_H_CH_25,
    ICU_HW_PORT_H_CH_26,
    ICU_HW_PORT_H_CH_27,
    ICU_HW_PORT_H_CH_28,
    ICU_HW_PORT_H_CH_29,
    ICU_HW_PORT_H_CH_30,
    ICU_HW_PORT_H_CH_31,

    ICU_HW_PORT_I_CH_0,
    ICU_HW_PORT_I_CH_1,
    ICU_HW_PORT_I_CH_2,
    ICU_HW_PORT_I_CH_3,
    ICU_HW_PORT_I_CH_4,
    ICU_HW_PORT_I_CH_5,
    ICU_HW_PORT_I_CH_6,
    ICU_HW_PORT_I_CH_7,
    ICU_HW_PORT_I_CH_8,
    ICU_HW_PORT_I_CH_9,
    ICU_HW_PORT_I_CH_10,
    ICU_HW_PORT_I_CH_11,
    ICU_HW_PORT_I_CH_12,
    ICU_HW_PORT_I_CH_13,
    ICU_HW_PORT_I_CH_14,
    ICU_HW_PORT_I_CH_15,
    ICU_HW_PORT_I_CH_16,
    ICU_HW_PORT_I_CH_17,
    ICU_HW_PORT_I_CH_18,
    ICU_HW_PORT_I_CH_19,
    ICU_HW_PORT_I_CH_20,
    ICU_HW_PORT_I_CH_21,
    ICU_HW_PORT_I_CH_22,
    ICU_HW_PORT_I_CH_23,
    ICU_HW_PORT_I_CH_24,
    ICU_HW_PORT_I_CH_25,
    ICU_HW_PORT_I_CH_26,
    ICU_HW_PORT_I_CH_27,
    ICU_HW_PORT_I_CH_28,
    ICU_HW_PORT_I_CH_29,
    ICU_HW_PORT_I_CH_30,
    ICU_HW_PORT_I_CH_31,
#endif
    ICU_HW_AONTIMER_CH,
#if (ICU_SUPPORT_CMP == STD_ON)
    ICU_HW_CMP0_CH,
#if (ICU_TOTAL_CMP_NUMBER > 1U)
    ICU_HW_CMP1_CH,
#endif
#if (ICU_TOTAL_CMP_NUMBER > 2U)
    ICU_HW_CMP2_CH,
#endif
#endif
    ICU_HW_ISM_CH_0,
    ICU_HW_ISM_CH_1,
    ICU_HW_ISM_CH_2,
    ICU_HW_ISM_CH_3,
    ICU_HW_ISM_CH_4,
    ICU_HW_ISM_CH_5,
    ICU_HW_ISM_CH_6,
    ICU_HW_ISM_CH_7,
#if (ISM_LAM_TOTAL_CHANNEL > 8u)
    ICU_HW_ISM_CH_8,
    ICU_HW_ISM_CH_9,
    ICU_HW_ISM_CH_10,
    ICU_HW_ISM_CH_11,
    ICU_HW_ISM_CH_12,
    ICU_HW_ISM_CH_13,
    ICU_HW_ISM_CH_14,
    ICU_HW_ISM_CH_15,
#endif
#if (ICU_SUPPORT_TPU == STD_ON)
    ICU_HW_TPU_CH_0,
    ICU_HW_TPU_CH_1,
    ICU_HW_TPU_CH_2,
    ICU_HW_TPU_CH_3,
    ICU_HW_TPU_CH_4,
    ICU_HW_TPU_CH_5,
    ICU_HW_TPU_CH_6,
    ICU_HW_TPU_CH_7,
    ICU_HW_TPU_CH_8,
    ICU_HW_TPU_CH_9,
    ICU_HW_TPU_CH_10,
    ICU_HW_TPU_CH_11,
    ICU_HW_TPU_CH_12,
    ICU_HW_TPU_CH_13,
    ICU_HW_TPU_CH_14,
    ICU_HW_TPU_CH_15,
    ICU_HW_TPU_CH_16,
    ICU_HW_TPU_CH_17,
    ICU_HW_TPU_CH_18,
    ICU_HW_TPU_CH_19,
    ICU_HW_TPU_CH_20,
    ICU_HW_TPU_CH_21,
    ICU_HW_TPU_CH_22,
    ICU_HW_TPU_CH_23,
    ICU_HW_TPU_CH_24,
    ICU_HW_TPU_CH_25,
    ICU_HW_TPU_CH_26,
    ICU_HW_TPU_CH_27,
    ICU_HW_TPU_CH_28,
    ICU_HW_TPU_CH_29,
    ICU_HW_TPU_CH_30,
    ICU_HW_TPU_CH_31,
#endif

    ICU_HW_FCPIT0_CH_0,
    ICU_HW_FCPIT0_CH_1,
    ICU_HW_FCPIT0_CH_2,
    ICU_HW_FCPIT0_CH_3,
#if (ICU_TOTAL_FCPIT_NUMBER > 1U)
    ICU_HW_FCPIT1_CH_0,
    ICU_HW_FCPIT1_CH_1,
    ICU_HW_FCPIT1_CH_2,
    ICU_HW_FCPIT1_CH_3,
#endif
#if (ICU_SUPPORT_EFTU == STD_ON)
    ICU_HW_EFTU0_TIM_CH_0,
    ICU_HW_EFTU0_TIM_CH_1,
    ICU_HW_EFTU0_TIM_CH_2,
    ICU_HW_EFTU0_TIM_CH_3,
    ICU_HW_EFTU0_TIM_CH_4,
    ICU_HW_EFTU0_TIM_CH_5,
    ICU_HW_EFTU0_TIM_CH_6,
    ICU_HW_EFTU0_TIM_CH_7,
#if (ICU_TOTAL_EFTU_NUMBER > 1U)
    ICU_HW_EFTU1_TIM_CH_0,
    ICU_HW_EFTU1_TIM_CH_1,
    ICU_HW_EFTU1_TIM_CH_2,
    ICU_HW_EFTU1_TIM_CH_3,
    ICU_HW_EFTU1_TIM_CH_4,
    ICU_HW_EFTU1_TIM_CH_5,
    ICU_HW_EFTU1_TIM_CH_6,
    ICU_HW_EFTU1_TIM_CH_7,
    ICU_HW_EFTU2_TIM_CH_0,
    ICU_HW_EFTU2_TIM_CH_1,
    ICU_HW_EFTU2_TIM_CH_2,
    ICU_HW_EFTU2_TIM_CH_3,
    ICU_HW_EFTU2_TIM_CH_4,
    ICU_HW_EFTU2_TIM_CH_5,
    ICU_HW_EFTU2_TIM_CH_6,
    ICU_HW_EFTU2_TIM_CH_7,
#endif
#endif
    ICU_HW_CHANNEL_COUNT,
} Icu_HwChannelType;

#define ICU_HW_PORT_CH_START (ICU_HW_PORT_A_CH_0)

#if (ICU_SUPPORT_TPU == STD_ON)
#define ICU_HW_TPU_CH_START (ICU_HW_TPU_CH_0)
#endif

#define ICU_HW_FCPIT_CH_START (ICU_HW_FCPIT0_CH_0)

#if (ICU_SUPPORT_EFTU == STD_ON)
#define ICU_HW_EFTU_CH_START (ICU_HW_EFTU0_TIM_CH_0)
#endif
/*===============================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
===============================================================================================*/
/**
 * @brief   ICU Channel state type
 *
 */
typedef uint8 Icu_ChannelStateType;

/**
 * @brief Hardware config type
 *
 */
typedef struct
{
    const Icu_Ftu_HwConfigType     *pFtuHwConfig;      /* Point to FTU modules configuration*/
    const Icu_Port_HwConfigType    *pPortHwConfig;     /* Point to PORT modules configuration*/
    const Icu_AontimerHwConfigType *pAontimerHwConfig; /* Point to AONTIMER modules configuration*/
    const Icu_CmpHwConfigType      *pCmpHwConfig;      /* Point to CMP modules configuration*/
    const Icu_IsmHwConfigType      *pIsmHwConfig;      /* Point to ISM modules configuration*/
    const Icu_TpuHwConfigType      *pTpuHwConfig;      /* Point to TPU modules configuration*/
    const Icu_FcpitHwConfigType    *pFcpitHwConfig;    /* Point to FCPIT modules configuration*/
    const Icu_EftuTimHwConfigType  *pEftuTimHwConfig;  /* Point to EFTU_Tim modules configuration*/
} Icu_HwConfigType;

#ifdef __cplusplus
}
#endif
#endif /*ICU_HW_TYPES_H*/
/** @} */
