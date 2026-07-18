/**
*   @file    Pwm_PBcfg.c
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
*                                                        (update global time base, the timer width of FTU1/2 change to 24bit)
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          optimization the implement of PwmDutycycleUpdatedEndperiod/PwmClass/PwmChannelEcucPartitionRef in xdm
*                                                        and fix some QAC analysis warning
*   0.9.0       05/12/2024    QXW0119       N/A          Add EFTU support
==================================================================================================*/
#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                         INCLUDE FILES
==================================================================================================*/
#include "Pwm.h"
#include "Pwm_PBcfg.h"
#include "Ftu_RegOps.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"


/** @brief Prototypes of Pwm channels User Notifications */  
#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
/**
 * @brief        Configurations for Ftu modules
 *
 */
PWM_DATA_SECTION static const Pwm_Ftu_ModuleConfigType Pwm_FtuConfigModules[PWM_NUM_CONF_FTU_MODULES] =
{
    /* Ftu Module 0 */
    {
        /** @brief Ftu Instance */
        PWM_INSTANCE_FTU_3,

        /** @brief FTU_3_CONF */
        (FTU_CONF_DBG(FTU_DBG_COUNTER_STOP_CHN_WORKS) | ((uint32) 0U)),

        /** @brief FTU_3_SC register */
        (FTU_SC_CLKS(1) | FTU_SC_PS(0) | FTU_SC_CHNOUTEN( ((uint32)1U << (uint32)6U )| ((uint32)1U << (uint32)5U )| ((uint32)0)) | ((uint32)0)),

        /** @brief External clock value */
        3U,

        /** @brief FTU_3_SYNC register */
        (FTU_SYNC_CNTMIN_MASK | ((uint32) 0)),

        /** @brief Configure fault operation mode and channel initialization status */
        ((uint32)0),

        /** @brief FTU_3_DEADTIME register */
        (FTU_DEADTIME_DTPS(1U) | ((uint32) 0U)),

        /** @brief  Edge alignment for the current channel  */
        ( PWM_EDGE_ALIGNED ),

        /** @brief FTU_3_COMBINE register */
        (FTU_CHCTRL_SYNCEN3_MASK | FTU_CHCTRL_SYNCEN2_MASK | ((uint32) 0)),

        /** @brief Default period value: 10000HZ*/
        ((Pwm_PeriodType) 15000),

        /** @brief FTU_3_FLTCTRL register */
        ((uint32) 0),

        /** @brief FTU_3_FLTPOL register */
        ((uint32) 0),

        /** @brief FTU_3_PWMLOAD register */
        (uint32) (FTU_PWMLOAD_LDOK_MASK),

        /** @brief Fault notification callbacks */
        { NULL_PTR, NULL_PTR},

        /** @brief FTU_3_EXTTRIG register */
        ((uint32) 0U|((uint32)FTU_TRIGCONF_CH0TRIG_MASK)),
        {
            /** @brief Only useful if multicore is enabled. Whether Core0 uses the channel under the current FTU Module */
            ((boolean) TRUE)
            /** @brief Only useful if multicore is enabled. Whether Core1 uses the channel under the current FTU Module */
            ,((boolean) FALSE)
            /** @brief Only useful if multicore is enabled. Whether Core2 uses the channel under the current FTU Module */
            ,((boolean) FALSE)
        }
    },
    /* Ftu Module 1 */
    {
        /** @brief Ftu Instance */
        PWM_INSTANCE_FTU_7,

        /** @brief FTU_7_CONF */
        (FTU_CONF_DBG(FTU_DBG_COUNTER_STOP_CHN_WORKS) | ((uint32) 0U)),

        /** @brief FTU_7_SC register */
        (FTU_SC_CLKS(1) | FTU_SC_PS(0) | FTU_SC_CHNOUTEN( ((uint32)1U << (uint32)5U )| ((uint32)1U << (uint32)3U )| ((uint32)1U << (uint32)1U )| ((uint32)0)) | ((uint32)0)),

        /** @brief External clock value */
        3U,

        /** @brief FTU_7_SYNC register */
        (FTU_SYNC_CNTMIN_MASK | ((uint32) 0)),

        /** @brief Configure fault operation mode and channel initialization status */
        ((uint32)0),

        /** @brief FTU_7_DEADTIME register */
        (FTU_DEADTIME_DTPS(1U) | ((uint32) 0U)),

        /** @brief  Edge alignment for the current channel  */
        ( PWM_EDGE_ALIGNED ),

        /** @brief FTU_7_COMBINE register */
        (FTU_CHCTRL_SYNCEN2_MASK | FTU_CHCTRL_SYNCEN1_MASK | FTU_CHCTRL_SYNCEN0_MASK | ((uint32) 0)),

        /** @brief Default period value: 10000HZ*/
        ((Pwm_PeriodType) 15000),

        /** @brief FTU_7_FLTCTRL register */
        ((uint32) 0),

        /** @brief FTU_7_FLTPOL register */
        ((uint32) 0),

        /** @brief FTU_7_PWMLOAD register */
        (uint32) (FTU_PWMLOAD_LDOK_MASK),

        /** @brief Fault notification callbacks */
        { NULL_PTR, NULL_PTR},

        /** @brief FTU_7_EXTTRIG register */
        ((uint32) 0U),
        {
            /** @brief Only useful if multicore is enabled. Whether Core0 uses the channel under the current FTU Module */
            ((boolean) FALSE)
            /** @brief Only useful if multicore is enabled. Whether Core1 uses the channel under the current FTU Module */
            ,((boolean) FALSE)
            /** @brief Only useful if multicore is enabled. Whether Core2 uses the channel under the current FTU Module */
            ,((boolean) TRUE)
        }
    },
    /* Ftu Module 2 */
    {
        /** @brief Ftu Instance */
        PWM_INSTANCE_FTU_2,

        /** @brief FTU_2_CONF */
        (FTU_CONF_DBG(FTU_DBG_COUNTER_STOP_CHN_WORKS) | ((uint32) 0U)),

        /** @brief FTU_2_SC register */
        (FTU_SC_CLKS(1) | FTU_SC_PS(0) | FTU_SC_CHNOUTEN( ((uint32)1U << (uint32)7U )| ((uint32)1U << (uint32)6U )| ((uint32)1U << (uint32)5U )| ((uint32)1U << (uint32)4U )| ((uint32)1U << (uint32)3U )| ((uint32)1U << (uint32)2U )| ((uint32)1U << (uint32)1U )| ((uint32)1U << (uint32)0U )| ((uint32)0)) | ((uint32)0)),

        /** @brief External clock value */
        3U,

        /** @brief FTU_2_SYNC register */
        (FTU_SYNC_CNTMIN_MASK | ((uint32) 0)),

        /** @brief Configure fault operation mode and channel initialization status */
        ((uint32)0),

        /** @brief FTU_2_DEADTIME register */
        (FTU_DEADTIME_DTPS(1U) | ((uint32) 0U)),

        /** @brief  Edge alignment for the current channel  */
        ( PWM_EDGE_ALIGNED ),

        /** @brief FTU_2_COMBINE register */
        (FTU_CHCTRL_SYNCEN3_MASK | FTU_CHCTRL_SYNCEN2_MASK | FTU_CHCTRL_SYNCEN1_MASK | FTU_CHCTRL_SYNCEN0_MASK | ((uint32) 0)),

        /** @brief Default period value: 10000HZ*/
        ((Pwm_PeriodType) 15000),

        /** @brief FTU_2_FLTCTRL register */
        ((uint32) 0),

        /** @brief FTU_2_FLTPOL register */
        ((uint32) 0),

        /** @brief FTU_2_PWMLOAD register */
        (uint32) (FTU_PWMLOAD_LDOK_MASK),

        /** @brief Fault notification callbacks */
        { NULL_PTR, NULL_PTR},

        /** @brief FTU_2_EXTTRIG register */
        ((uint32) 0U),
        {
            /** @brief Only useful if multicore is enabled. Whether Core0 uses the channel under the current FTU Module */
            ((boolean) FALSE)
            /** @brief Only useful if multicore is enabled. Whether Core1 uses the channel under the current FTU Module */
            ,((boolean) TRUE)
            /** @brief Only useful if multicore is enabled. Whether Core2 uses the channel under the current FTU Module */
            ,((boolean) FALSE)
        }
    },
    /* Ftu Module 3 */
    {
        /** @brief Ftu Instance */
        PWM_INSTANCE_FTU_6,

        /** @brief FTU_6_CONF */
        (FTU_CONF_DBG(FTU_DBG_COUNTER_STOP_CHN_WORKS) | ((uint32) 0U)),

        /** @brief FTU_6_SC register */
        (FTU_SC_CLKS(1) | FTU_SC_PS(0) | FTU_SC_CHNOUTEN( ((uint32)1U << (uint32)6U )| ((uint32)0)) | ((uint32)0)),

        /** @brief External clock value */
        3U,

        /** @brief FTU_6_SYNC register */
        (FTU_SYNC_CNTMIN_MASK | ((uint32) 0)),

        /** @brief Configure fault operation mode and channel initialization status */
        ((uint32)0),

        /** @brief FTU_6_DEADTIME register */
        (FTU_DEADTIME_DTPS(1U) | ((uint32) 0U)),

        /** @brief  Edge alignment for the current channel  */
        ( PWM_EDGE_ALIGNED ),

        /** @brief FTU_6_COMBINE register */
        (FTU_CHCTRL_SYNCEN3_MASK | ((uint32) 0)),

        /** @brief Default period value: 10000HZ*/
        ((Pwm_PeriodType) 15000),

        /** @brief FTU_6_FLTCTRL register */
        ((uint32) 0),

        /** @brief FTU_6_FLTPOL register */
        ((uint32) 0),

        /** @brief FTU_6_PWMLOAD register */
        (uint32) (FTU_PWMLOAD_LDOK_MASK),

        /** @brief Fault notification callbacks */
        { NULL_PTR, NULL_PTR},

        /** @brief FTU_6_EXTTRIG register */
        ((uint32) 0U),
        {
            /** @brief Only useful if multicore is enabled. Whether Core0 uses the channel under the current FTU Module */
            ((boolean) TRUE)
            /** @brief Only useful if multicore is enabled. Whether Core1 uses the channel under the current FTU Module */
            ,((boolean) FALSE)
            /** @brief Only useful if multicore is enabled. Whether Core2 uses the channel under the current FTU Module */
            ,((boolean) FALSE)
        }
    }
};
/**
 * @brief        Configurations for PWM channels
 *
 */
PWM_DATA_SECTION static const Pwm_ChannelConfigType Pwm_ConfigChannels[PWM_NUM_CONF_CHANNELS] =
{
    /* RGB1_BLUE - PwmChannelId_0 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_6,
        /** @brief  Hardware Channel ID */
        FTU_CH_6,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)0U
    },
    /* RGB1_GREEN - PwmChannelId_1 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_3,
        /** @brief  Hardware Channel ID */
        FTU_CH_5,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)0U
    },
    /* RGB1_RED - PwmChannelId_2 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_3,
        /** @brief  Hardware Channel ID */
        FTU_CH_6,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)0U
    },
    /* RGB2_BLUE - PwmChannelId_3 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_7,
        /** @brief  Hardware Channel ID */
        FTU_CH_1,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)2U
    },
    /* RGB2_GREEN - PwmChannelId_4 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_7,
        /** @brief  Hardware Channel ID */
        FTU_CH_3,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)2U
    },
    /* RGB2_RED - PwmChannelId_5 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_7,
        /** @brief  Hardware Channel ID */
        FTU_CH_5,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)2U
    },
    /* Msc_Pwm_0 - PwmChannelId_6 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_2,
        /** @brief  Hardware Channel ID */
        FTU_CH_0,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)1U
    },
    /* Msc_Pwm_1 - PwmChannelId_7 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_2,
        /** @brief  Hardware Channel ID */
        FTU_CH_1,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)1U
    },
    /* Msc_Pwm_2 - PwmChannelId_8 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_2,
        /** @brief  Hardware Channel ID */
        FTU_CH_2,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)1U
    },
    /* Msc_Pwm_3 - PwmChannelId_9 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_2,
        /** @brief  Hardware Channel ID */
        FTU_CH_3,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)1U
    },
    /* Msc_Pwm_4 - PwmChannelId_10 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_2,
        /** @brief  Hardware Channel ID */
        FTU_CH_4,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)1U
    },
    /* Msc_Pwm_5 - PwmChannelId_11 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_2,
        /** @brief  Hardware Channel ID */
        FTU_CH_5,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)1U
    },
    /* Msc_Pwm_6 - PwmChannelId_12 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_2,
        /** @brief  Hardware Channel ID */
        FTU_CH_6,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)1U
    },
    /* Msc_Pwm_7 - PwmChannelId_13 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_FTU_2,
        /** @brief  Hardware Channel ID */
        FTU_CH_7,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)1U
    },
    /* PWM1 - PwmChannelId_14 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_EFTU_1_TOM_0,
        /** @brief  Hardware Channel ID */
        TOM_CH_4,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD_SHIFTED,
        /** @brief  PWM channel polarity */
        PWM_LOW,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_ENABLE,
        /** @brief  Core ID */
        (uint8)0U
    },
    /* PWM2 - PwmChannelId_15 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_EFTU_1_TOM_0,
        /** @brief  Hardware Channel ID */
        TOM_CH_5,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD_SHIFTED,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_ENABLE,
        /** @brief  Core ID */
        (uint8)0U
    },
    /* PWM3 - PwmChannelId_16 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_EFTU_1_TOM_0,
        /** @brief  Hardware Channel ID */
        TOM_CH_6,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD_SHIFTED,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_ENABLE,
        /** @brief  Core ID */
        (uint8)0U
    },
    /* PWM4 - PwmChannelId_17 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_EFTU_1_TOM_0,
        /** @brief  Hardware Channel ID */
        TOM_CH_7,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD_SHIFTED,
        /** @brief  PWM channel polarity */
        PWM_LOW,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_ENABLE,
        /** @brief  Core ID */
        (uint8)0U
    },
    /* PWM5 - PwmChannelId_18 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_EFTU_1_TOM_0,
        /** @brief  Hardware Channel ID */
        TOM_CH_3,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD_SHIFTED,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)0U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_ENABLE,
        /** @brief  Core ID */
        (uint8)0U
    },
    /* PWM_CARRIER - PwmChannelId_19 */
    {
        /** @brief  Hardware Module ID */
        PWM_INSTANCE_EFTU_1_TOM_0,
        /** @brief  Hardware Channel ID */
        TOM_CH_0,
        /** @brief  Channel Period Class */
        PWM_FIXED_PERIOD,
        /** @brief  PWM channel polarity */
        PWM_HIGH,
        /** @brief  PWM channel idle state */
        PWM_LOW,
        /** @brief  Default duty cycle value */
        (uint16)16384U,
        /** @brief  Phase shift count value */
        (uint32)0U,
        /** @brief Pwm notification function */
        NULL_PTR,
        /** @brief Ftu channel combine or not */
        PWM_FTU_COMBINE_DISABLE,
        /** @brief Pwm channel phase shift or not */
        PWM_PHASESHIFT_DISABLE,
        /** @brief  Core ID */
        (uint8)0U
    }
};
/**
 * @brief  Logic channel number to actual channel map
 *
 */
PWM_DATA_SECTION static const Pwm_ChannelType Pwm_FtuHw2LogicChannelMap[PWM_FTU_CHANNELS_NO] =
{
    /* Channels 0-7 -> FTU_0 in the array of logic Pwm channels */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    /* Channels 0-7 -> FTU_1 in the array of logic Pwm channels */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    /* Channels 0-7 -> FTU_2 in the array of logic Pwm channels */
    6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U,
    /* Channels 0-7 -> FTU_3 in the array of logic Pwm channels */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 1U, 2U, 0xFF,
    /* Channels 0-7 -> FTU_4 in the array of logic Pwm channels */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    /* Channels 0-7 -> FTU_5 in the array of logic Pwm channels */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    /* Channels 0-7 -> FTU_6 in the array of logic Pwm channels */
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0U, 0xFF,
    /* Channels 0-7 -> FTU_7 in the array of logic Pwm channels */
    0xFF, 3U, 0xFF, 4U, 0xFF, 5U, 0xFF, 0xFF
};
/**
 * @brief  Logic instance number to actual intance map
 *
 */
PWM_DATA_SECTION static const Pwm_ModuleType Pwm_Hw2LogicInstanceMap[PWM_HW_MODULES_NO_U8] =
{
    0xFF, 0xFF, 2U, 0U, 0xFF, 0xFF, 3U, 1U, 0xFF, 0xFF, 0U, 0xFF, 0xFF, 0xFF
};
/**
 * @brief  Logic channel number to Eftu logic channel map
 *
 */
PWM_DATA_SECTION static const Pwm_ChannelType Pwm_LogicCh2EftuLogicChMap[PWM_NUM_CONF_CHANNELS] =
{
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0U, 1U, 2U, 3U, 4U, 5U
};

/**
 * @brief  Eftu channel specific configuration
 *
 */
PWM_DATA_SECTION static const Pwm_Eftu_ConfigType Pwm_EftuChannelConfiguration[6] =
{
    {
        /** @brief Pwm channel TOM configuration */
        {
            /** @brief Pwm channel aligned mode */
            PWM_EDGE_ALIGNED,
            /** @brief TOM channel clock source */
            1,
            /** @brief Pwm channel period value */
            750,
            /** @brief TOM channel trigger output selection */
            0,
            /** @brief TOM channel counter reset by last channel */
            TRUE,
            /** @brief TOM channel trigger delay */
            0
        },
        /** @brief Pwm channel DTM configuration */
        {
            /** @brief DTM enable */
            (boolean)TRUE,
            /** @brief DTM clock source */
            (uint8)0U,
            /** @brief DTM rising edge enable */
            (boolean)TRUE,
            /** @brief DTM falling edge enable */
            (boolean)TRUE,
            /** @brief DTM rising edge dead time */
            (uint16)23U,
            /** @brief DTM falling edge dead time */
            (uint16)23U,
            /** @brief DTM invert output1 */
            (Pwm_Eftu_Dtm_CombineType)1,
            /** @brief DTM Output swap */
            (boolean)FALSE
        },
        {
            /** @brief High Resolution support */
            FALSE,
            /** @brief High Resolution period micro-step */
            0U,
            /** @brief High Resolution duty cycle micro-step */
            0U
        }
    },
    {
        /** @brief Pwm channel TOM configuration */
        {
            /** @brief Pwm channel aligned mode */
            PWM_EDGE_ALIGNED,
            /** @brief TOM channel clock source */
            1,
            /** @brief Pwm channel period value */
            750,
            /** @brief TOM channel trigger output selection */
            0,
            /** @brief TOM channel counter reset by last channel */
            TRUE,
            /** @brief TOM channel trigger delay */
            0
        },
        /** @brief Pwm channel DTM configuration */
        {
            /** @brief DTM enable */
            (boolean)TRUE,
            /** @brief DTM clock source */
            (uint8)0U,
            /** @brief DTM rising edge enable */
            (boolean)TRUE,
            /** @brief DTM falling edge enable */
            (boolean)TRUE,
            /** @brief DTM rising edge dead time */
            (uint16)23U,
            /** @brief DTM falling edge dead time */
            (uint16)23U,
            /** @brief DTM invert output1 */
            (Pwm_Eftu_Dtm_CombineType)1,
            /** @brief DTM Output swap */
            (boolean)FALSE
        },
        {
            /** @brief High Resolution support */
            FALSE,
            /** @brief High Resolution period micro-step */
            0U,
            /** @brief High Resolution duty cycle micro-step */
            0U
        }
    },
    {
        /** @brief Pwm channel TOM configuration */
        {
            /** @brief Pwm channel aligned mode */
            PWM_EDGE_ALIGNED,
            /** @brief TOM channel clock source */
            1,
            /** @brief Pwm channel period value */
            750,
            /** @brief TOM channel trigger output selection */
            0,
            /** @brief TOM channel counter reset by last channel */
            TRUE,
            /** @brief TOM channel trigger delay */
            0
        },
        /** @brief Pwm channel DTM configuration */
        {
            /** @brief DTM enable */
            (boolean)TRUE,
            /** @brief DTM clock source */
            (uint8)0U,
            /** @brief DTM rising edge enable */
            (boolean)TRUE,
            /** @brief DTM falling edge enable */
            (boolean)TRUE,
            /** @brief DTM rising edge dead time */
            (uint16)23U,
            /** @brief DTM falling edge dead time */
            (uint16)23U,
            /** @brief DTM invert output1 */
            (Pwm_Eftu_Dtm_CombineType)1,
            /** @brief DTM Output swap */
            (boolean)FALSE
        },
        {
            /** @brief High Resolution support */
            FALSE,
            /** @brief High Resolution period micro-step */
            0U,
            /** @brief High Resolution duty cycle micro-step */
            0U
        }
    },
    {
        /** @brief Pwm channel TOM configuration */
        {
            /** @brief Pwm channel aligned mode */
            PWM_EDGE_ALIGNED,
            /** @brief TOM channel clock source */
            1,
            /** @brief Pwm channel period value */
            750,
            /** @brief TOM channel trigger output selection */
            0,
            /** @brief TOM channel counter reset by last channel */
            TRUE,
            /** @brief TOM channel trigger delay */
            0
        },
        /** @brief Pwm channel DTM configuration */
        {
            /** @brief DTM enable */
            (boolean)TRUE,
            /** @brief DTM clock source */
            (uint8)0U,
            /** @brief DTM rising edge enable */
            (boolean)TRUE,
            /** @brief DTM falling edge enable */
            (boolean)TRUE,
            /** @brief DTM rising edge dead time */
            (uint16)23U,
            /** @brief DTM falling edge dead time */
            (uint16)23U,
            /** @brief DTM invert output1 */
            (Pwm_Eftu_Dtm_CombineType)1,
            /** @brief DTM Output swap */
            (boolean)FALSE
        },
        {
            /** @brief High Resolution support */
            FALSE,
            /** @brief High Resolution period micro-step */
            0U,
            /** @brief High Resolution duty cycle micro-step */
            0U
        }
    },
    {
        /** @brief Pwm channel TOM configuration */
        {
            /** @brief Pwm channel aligned mode */
            PWM_EDGE_ALIGNED,
            /** @brief TOM channel clock source */
            1,
            /** @brief Pwm channel period value */
            750,
            /** @brief TOM channel trigger output selection */
            0,
            /** @brief TOM channel counter reset by last channel */
            TRUE,
            /** @brief TOM channel trigger delay */
            0
        },
        /** @brief Pwm channel DTM configuration */
        {
            /** @brief DTM enable */
            (boolean)FALSE,
            /** @brief DTM clock source */
            (uint8)0U,
            /** @brief DTM rising edge enable */
            (boolean)FALSE,
            /** @brief DTM falling edge enable */
            (boolean)FALSE,
            /** @brief DTM rising edge dead time */
            (uint16)0U,
            /** @brief DTM falling edge dead time */
            (uint16)0U,
            /** @brief DTM invert output1 */
            (Pwm_Eftu_Dtm_CombineType)0,
            /** @brief DTM Output swap */
            (boolean)FALSE
        },
        {
            /** @brief High Resolution support */
            FALSE,
            /** @brief High Resolution period micro-step */
            0U,
            /** @brief High Resolution duty cycle micro-step */
            0U
        }
    },
    {
        /** @brief Pwm channel TOM configuration */
        {
            /** @brief Pwm channel aligned mode */
            PWM_EDGE_ALIGNED,
            /** @brief TOM channel clock source */
            1,
            /** @brief Pwm channel period value */
            750,
            /** @brief TOM channel trigger output selection */
            1,
            /** @brief TOM channel counter reset by last channel */
            FALSE,
            /** @brief TOM channel trigger delay */
            0
        },
        /** @brief Pwm channel DTM configuration */
        {
            /** @brief DTM enable */
            (boolean)FALSE,
            /** @brief DTM clock source */
            (uint8)0U,
            /** @brief DTM rising edge enable */
            (boolean)FALSE,
            /** @brief DTM falling edge enable */
            (boolean)FALSE,
            /** @brief DTM rising edge dead time */
            (uint16)0U,
            /** @brief DTM falling edge dead time */
            (uint16)0U,
            /** @brief DTM invert output1 */
            (Pwm_Eftu_Dtm_CombineType)0,
            /** @brief DTM Output swap */
            (boolean)FALSE
        },
        {
            /** @brief High Resolution support */
            FALSE,
            /** @brief High Resolution period micro-step */
            0U,
            /** @brief High Resolution duty cycle micro-step */
            0U
        }
    }
};

/**
 * @brief  Eftu Tom global configuration
 *
 */
PWM_DATA_SECTION const Pwm_Eftu_TomGlobal_ConfigType Pwm_EftuTomGlobalConfiguration[6] =
{
    /** @brief TOM global time base enable */
    {FALSE},
    {FALSE},
    {FALSE},
    {FALSE},
    {FALSE},
    {FALSE}
};
/**
 * @brief   Pwm high level configuration structure
 *
 */
PWM_DATA_SECTION const Pwm_ConfigType Pwm_Config =
{
   /** @brief pwm channel configuration */
    Pwm_ConfigChannels,
   /** @brief pwm channel count */
    20U,
    /** @brief pwm module configuration */
    {
        /** @brief pwm FTU module count */
        4U,
        /** @brief Ftu module configuration */
        Pwm_FtuConfigModules,
        /** @brief pwm TOM channel count */
        6U,
        /** @brief TOM channel specific configuration */
        Pwm_EftuChannelConfiguration,
        /** @brief TOM Global configuration */
        Pwm_EftuTomGlobalConfiguration
    },
   /** @brief Pwm channel to Ftu channel map */
    Pwm_FtuHw2LogicChannelMap,
   /** @brief pwm module to HW instance map */
    Pwm_Hw2LogicInstanceMap,
    /** @brief pwm logic channel to Eftu Tom logic channel map */
    Pwm_LogicCh2EftuLogicChMap,
    /** @brief Configurations for Pwm Ftu Gtb Groups */
    NULL_PTR
};

#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                        LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

