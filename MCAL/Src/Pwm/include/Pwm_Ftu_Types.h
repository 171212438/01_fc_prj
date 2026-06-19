/**
 *   @file    Pwm_Ftu_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR PWM - hardware specific type definition
 *   @details This file contains the PWM AUTOSAR hardware specific type definition
 *
 *   @addtogroup PWM
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pwm
*   PLATFORM             : Flagchip FC7300
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
*   0.1.0       24/5/2023     QXW0076       N/A          PWM Initial Version
*   0.2.0       27/9/2023     QXW0074       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0074       N/A          Optimization code
*   0.4.0       20/10/2023    QXW0074       N/A          Optimization code and EB plugins
*   0.5.0       12/01/2024    QXW0074       N/A          add Phase Shift and global time base feature
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*                                                        (update global time base, the timer width
of FTU1/2 change to 24bit)
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          optimization the implement of
PwmDutycycleUpdatedEndperiod/PwmClass/PwmChannelEcucPartitionRef in xdm
*                                                        and fix some QAC analysis warning
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifndef PWM_FTU_TYPES_H
#define PWM_FTU_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                      INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Cpm_Reg.h"
#include "Pwm_Types.h"
#include "Pwm_Cfg.h"
/*==================================================================================================
*                                        CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                   DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                          ENUMS
==================================================================================================*/

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief Ftu HW channel type
 */
typedef uint8 Pwm_Ftu_ChannelType;

/**
 * @brief Ftu TOF IRQ state type ID
 */
typedef uint8 Pwm_Ftu_EdgeStateType;

/**
 * @brief Fault channel notification typedef
 */
typedef void (*Pwm_Ftu_FaultNotifyType)(uint8 u8ModuleId, uint8 u8FaultChannel);

/*==================================================================================================
*                                  DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief Defines that specifies the Module types used in Pwm_Ftu_ModuleType type
 */
#define PWM_NO_EDGE               ((Pwm_Ftu_EdgeStateType)0U)
#define PWM_CHF_IRQ_EDGE          ((Pwm_Ftu_EdgeStateType)1U)
#define PWM_TOF_IRQ_EDGE          ((Pwm_Ftu_EdgeStateType)2U)
#define PWM_TOF_IRQ_NO_EDGE_NOTIF ((Pwm_Ftu_EdgeStateType)4U)

/**
 * @brief FTU channel 0
 */
#define FTU_CH_0                  ((Pwm_Ftu_ChannelType)0x00)
/**
 * @brief FTU channel 1
 */
#define FTU_CH_1                  ((Pwm_Ftu_ChannelType)0x01)
/**
 * @brief FTU channel 2
 */
#define FTU_CH_2                  ((Pwm_Ftu_ChannelType)0x02)
/**
 * @brief FTU channel 3
 */
#define FTU_CH_3                  ((Pwm_Ftu_ChannelType)0x03)
/**
 * @brief FTU channel 4
 */
#define FTU_CH_4                  ((Pwm_Ftu_ChannelType)0x04)
/**
 * @brief FTU channel 5
 */
#define FTU_CH_5                  ((Pwm_Ftu_ChannelType)0x05)
/**
 * @brief FTU channel 6
 */
#define FTU_CH_6                  ((Pwm_Ftu_ChannelType)0x06)
/**
 * @brief FTU channel 7
 */
#define FTU_CH_7                  ((Pwm_Ftu_ChannelType)0x07)

/*==================================================================================================
*                             GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/**
 * @brief PWM FTU combine type
 */
typedef enum
{
    PWM_FTU_COMBINE_DISABLE = 0U, /** @brief PWM FTU channel is not combined with the (n+1) channel */
    PWM_FTU_COMBINE_SYNCED,       /** @brief PWM FTU channel combined with the (n+1) channel and two
                                     channel output sync */
    PWM_FTU_COMBINE_COMPL,        /** @brief PWM FTU channel combined with the (n+1) channel and two
                                     channel output complement */
} Pwm_Ftu_CombineType;

/**
 * @brief FTU module configuration structure type
 */
typedef struct
{
    const Pwm_InstanceType        eInstance;       /** @brief FTU instance */
    const uint32                  u32RegConf;      /** @brief configuration register value */
    const uint32                  u32RegSc;        /** @brief status and control register value */
    const uint8                   u8ExternalClk;   /** @brief external clock value */
    const uint32                  u32RegSync;      /** @brief synchronize register value */
    const uint32                  u32RegMode;      /** @brief mode selection register value */
    const uint32                  u32RegDeadtime;  /** @brief deadtime register value */
    const Pwm_AlignmentType       eAlingnment;     /** @brief channel alignment type */
    const uint32                  u32RegChctrlVal; /** @brief channel control register value */
    const uint32                  u32RegModVal;    /** @brief default period (MOD) register value */
    const uint32                  u32RegFctrl;     /** @brief fault control register value */
    const uint32                  u32RegFltpol;    /** @brief fault polarity register value */
    const uint32                  u32RegPwmload;   /** @brief pwmload register value */
    const Pwm_Ftu_FaultNotifyType pfFaultNotification[2]; /** @brief Pointer to fault notification
                                                             function */
    const uint32 u32RegExtTrig; /** @brief alternate status and control register value */
#if (PWM_CORE_USED_U8 > 1U)
    const boolean bModuleCoreUsed[PWM_CORE_USED_U8]; /** @brief Only useful if multicore is enabled.
                                                        The core allocation involved in the FTU
                                                        instance */
#endif                                               /* (PWM_CORE_USED_U8 > 1U) */
} Pwm_Ftu_ModuleConfigType;

/*==================================================================================================
*                                FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* PWM_FTU_TYPES_H */

/** @} */
