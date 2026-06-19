/**
*   @file    Pwm_Eftu_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR PWM - hardware specific type definition
*   @details This file contains the PWM AUTOSAR hardware specific type definition
*
*   @addtogroup PWM
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EFTU
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
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifndef PWM_EFTU_TYPES_H
#define PWM_EFTU_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                      INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Cpm_Reg.h"
#include "Pwm_Types.h"
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

/*==================================================================================================
*                                  DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief TOM channel 0
 */
#define TOM_CH_0                        ((Pwm_Ftu_ChannelType)0x00)
/**
 * @brief TOM channel 1
 */
#define TOM_CH_1                        ((Pwm_Ftu_ChannelType)0x01)
/**
 * @brief TOM channel 2
 */
#define TOM_CH_2                        ((Pwm_Ftu_ChannelType)0x02)
/**
 * @brief TOM channel 3
 */
#define TOM_CH_3                        ((Pwm_Ftu_ChannelType)0x03)
/**
 * @brief TOM channel 4
 */
#define TOM_CH_4                        ((Pwm_Ftu_ChannelType)0x04)
/**
 * @brief TOM channel 5
 */
#define TOM_CH_5                        ((Pwm_Ftu_ChannelType)0x05)
/**
 * @brief TOM channel 6
 */
#define TOM_CH_6                        ((Pwm_Ftu_ChannelType)0x06)
/**
 * @brief TOM channel 7
 */
#define TOM_CH_7                        ((Pwm_Ftu_ChannelType)0x07)

/** 
 * @brief PWM channel duty max value 
 */
#define PWM_TOM_CHANNEL_DUTY_U24_MAX    ((uint32)0xFFFFFF)

/** 
 * @brief PWM TOM channel CCU0 interrupt flag 
 */
#define PWM_TOM_CHANNEL_CCU0_FLAG       ((uint32)0x01U)

/** 
 * @brief PWM TOM channel CCU1 interrupt flag 
 */
#define PWM_TOM_CHANNEL_CCU1_FLAG       ((uint32)0x02U)

/** 
 * @brief PWM TOM channel CCU0 and CCU1 interrupt flag 
 */
#define PWM_TOM_CHANNEL_CCU0_CCU1_FLAG  ((uint32)0x03U)
/*==================================================================================================
*                             GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
/**
 * @brief PWM DTM combine type
 */
typedef enum
{
    PWM_EFTU_DTM_COMBINE_SYNCED,       /** @brief PWM DTM output1 synchronous with output0 */
    PWM_EFTU_DTM_COMBINE_COMPL,        /** @brief PWM DTM output1 complement with output0 */
    PWM_EFTU_DTM_OUTPUT_TRIG,          /** @brief PWM DTM output1 output trig pulse */
} Pwm_Eftu_Dtm_CombineType;

/**
 * @brief Eftu Dtm channel configuration structure type
 */
typedef struct
{
    const boolean                   bDeadTimeUsed;
    const uint8                     u8DtmClkSrc;
    const boolean                   bRisingDeadTimeEnable;
    const boolean                   bFallingDeadTimeEnable;
    const uint16                    u16RisingDeadTime;
    const uint16                    u16FallingDeadTime;
    const Pwm_Eftu_Dtm_CombineType  eOutput1SigOption;
    const boolean                   bDtmOutputSwap;
} Pwm_Eftu_Dtm_ConfigType;

/**
 * @brief Eftu Tom channel configuration structure type
 */
typedef struct
{
    const Pwm_AlignmentType         eEftuAlignedMode;       /**< Pwm channel aligned mode */
    const uint8                     u8TomChClkSrc;          /**< This parameter is for EFTU. Clock source used by the PWM channel */
    const uint32                    u32PeriodValue;         /**< Pwm period value */
    const uint8                     u8ChTrigOut;            /**< TOM channel trig out selection. 
                                                                 0: TRIG OUT is TRIG_[x-1] or TIM _EXT_CAPTURE(x)
                                                                 1: TRIG OUT is TRIG_CCU0 */
    const boolean                   bPwmTomCntRstCcu0;      /* Tom channel counter reset by internal/external internal/external */
    const uint32                    u32TrigDelay;           /**< TOM channel trig out delay */

} Pwm_Eftu_Tom_ConfigType;

/**
 * @brief Eftu Hrpwm configuration structure type
 */
typedef struct
{
    const boolean                   bHrpwmSupport;          /**< High-resolution PWM support enable, determines whether high-resolution PWM is supported */
    const uint8                     u8HrpwmPeriodMicroStep; /**< High-resolution PWM period micro-step */
    const uint8                     u8HrpwmDutyMicroStep;   /**< High-resolution PWM duty cycle micro-step */
} Pwm_Hrpwm_ConfigType;

/**
 * @brief Eftu Tom global configuration structure type
 */
typedef struct
{
    const boolean                   bPwmTomGlbEn;           /**< TOM channel uses global timer group */
} Pwm_Eftu_TomGlobal_ConfigType;

/**
 * @brief Eftu channel configuration structure type
 */
typedef struct
{
    Pwm_Eftu_Tom_ConfigType         tEftuTomChannelConfig;
    Pwm_Eftu_Dtm_ConfigType         tEftuDtmChannelConfig;
    Pwm_Hrpwm_ConfigType            tHrpwmChannelConfig;
} Pwm_Eftu_ConfigType;
/*==================================================================================================
*                                FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* PWM_EFTU_TYPES_H */

/** @} */
