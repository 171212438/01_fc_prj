/**
*   @file    Gpt_Hw_Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Gpt - hardware specific type definition
*   @details This file contains the Gpt Autosar hardware specific type definition
*
*   @addtogroup GPT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : GPT
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
*   0.1.0       24/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and add Gpt_Tpu support(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter the interrupt service routing
==================================================================================================*/

#ifndef GPT_HW_TYPES_H
#define GPT_HW_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Gpt_Fcpit_Types.h"
#include "Gpt_Aontimer_Types.h"
#include "Gpt_Ftu_Types.h"
#include "Gpt_Tpu_Types.h"
#include "Gpt_Rtc_Types.h"
#include "Gpt_Tstmp_Types.h"
#include "Gpt_Ptimer_Types.h"
#include "Gpt_EftuTom_Types.h"
#include "Common_Cfg.h"
/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
* @brief This enumerated type allows the selection of different power modes. [SWS_Gpt_00360]
*
* @implements Gpt_ModeType_enumeration
*/
typedef enum
{
    GPT_MODE_NORMAL = 0U,                    /**< @brief GPT Normal operation mode of the GPT */
    GPT_MODE_SLEEP = 1U                     /**< @brief GPT sleep mode */
} Gpt_ModeType;

/**
* @brief Gpt channel mode type. Indicates of whether the channel mode is "CONTINUOUS" or "ONE SHOT".
*
*/
typedef enum
{
    GPT_CH_MODE_CONTINUOUS = 0U,        /**< @brief GPT channel mode -  countinous mode */
    GPT_CH_MODE_ONESHOT    = 1U         /**< @brief GPT channel mode -  one-shot mode. */
} Gpt_ChannelModeType;


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/* PRQA S 1535 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This type may not used by user */
/* [SWS_Gpt_00389] */
typedef enum
{
    GPT_PREDEF_TIMER_1US_16BIT = 0x0U,
    GPT_PREDEF_TIMER_1US_24BIT,
    GPT_PREDEF_TIMER_1US_32BIT,
    GPT_PREDEF_TIMER_100US_32BIT
} Gpt_PredefTimerType;
/* PRQA S 1535 -- */
/**
* @brief Gpt channel ID data type [SWS_Gpt_00358]
*/
typedef uint8 Gpt_ChannelType;

/**
* @brief Gpt timeout value type.Used for reading and setting the timer value in number of ticks. [SWS_Gpt_00359]
*/
typedef uint32 Gpt_ValueType;

/**
* @brief Gpt channel notification type.  The callback notifications shall be configurable
* as pointers to user defined functions within the configuration structure.
*/
typedef void (*Gpt_NotificationType)(void);

/**
* @brief Gpt prescaler data type
*/
typedef uint8 Gpt_PrescalerType;

/**
* @brief Gpt clock source data type
*/
typedef uint8 Gpt_ClockSourceType;

/**
 * @brief
 */
typedef enum
{
    GPT_MODULE_FTU_0 = 0U,
    GPT_MODULE_FTU_1,
    GPT_MODULE_FTU_2,
    GPT_MODULE_FTU_3,
    GPT_MODULE_FTU_4,
    GPT_MODULE_FTU_5,
    GPT_MODULE_FTU_6,
    GPT_MODULE_FTU_7,
	GPT_MODULE_FTU_8,
	GPT_MODULE_FTU_9,
	GPT_MODULE_FTU_10,
	GPT_MODULE_FTU_11,
	GPT_MODULE_TPU,
    GPT_MODULE_FCPIT_0,
    GPT_MODULE_FCPIT_1,
    GPT_MODULE_TSTMP_0,
    GPT_MODULE_TSTMP_1,
    GPT_MODULE_TSTMP_2,
    GPT_MODULE_TSTMP_3,
    GPT_MODULE_TSTMP_4,
    GPT_MODULE_AONTIMER,
    GPT_MODULE_RTC,
    GPT_MODULE_PTIMER_0,
    GPT_MODULE_PTIMER_1,
    GPT_MODULE_PTIMER_2,
    GPT_MODULE_PTIMER_3,
    GPT_MODULE_EFTU_0_TOM_0,
    GPT_MODULE_EFTU_0_TOM_1,
    GPT_MODULE_EFTU_1_TOM_0,
    GPT_MODULE_EFTU_1_TOM_1,
    GPT_MODULE_EFTU_2_TOM_0,
    GPT_MODULE_EFTU_2_TOM_1
} Gpt_ModuleType;

/** @brief Gpt channel Global Time Base Enable(only for FTU) */
typedef enum
{
	GPT_GTB_Dis = 0U,
	GPT_GTB_En = 1U,
}Gpt_GtbType;

/**
* @brief Low level configuration for channel specific parameters
*/
typedef struct
{
    uint8 u8GptPredefChannel;                   /**<@brief GPT hw channel ID */
    Gpt_ModuleType eGptPredefModule;            /**<@brief GPT hw module used */
    boolean bGptPredefDebugModeEnable;          /**<@brief Channel debug mode enable */
    Gpt_PrescalerType u8GptPredefPrescaler;     /**<@brief Channel prescaler value */
    Gpt_ClockSourceType u8GptPredefClockSource; /**<@brief Channel clock source */
    uint32 u32MaxValue;                         /**<@brief Counter max value */
    uint8 u8GptPredefChannelPartition;          /**<@brief channel partition */
} Gpt_ConfigPredefChannelType;

/**
 * @brief [SWS_Gpt_00086]
 */
typedef struct
{
    uint8 u8GptChannel;                           /**<@brief GPT hw channel ID */
    Gpt_ModuleType eGptModule;                    /**<@brief GPT hw module used */
    Gpt_ChannelModeType eGptChannelMode;          /**<@brief GPT channel mode */
    Gpt_ValueType u32GptChannelTickValueMax;      /**<@brief Channel max tick value */
    boolean bGptDebugModeEnable;                  /**<@brief Channel debug mode enable */
    uint32 u32GptWakeupSource;                    /**<@brief EcuM wake up source Id */
    boolean bGptEnableWakeup;                     /**<@brief GPT ch WakeUp enable */
    Gpt_NotificationType pGptNotification;        /**<@brief Pointer to external callback*/
    Gpt_GtbType	eGtbEn;							  /**<@brief GPT Gtb enable */
} Gpt_ConfigChannelCommonType;

/**
 * @brief
 */
/* PRQA S 750 ++ #Misra-C:2012 Rule-19.2 A union type specifier has been defined.
 * Reason: A union definition is needed in this file and it can be better understood and used by user */
typedef union
{
    Gpt_ConfigChannelFtuType tGptFtuChannelConfig;
    Gpt_ConfigChannelAontimerType tGptAontimerChannelConfig;
    Gpt_ConfigChannelFcpitType tGptFcpitChannelConfig;
    Gpt_ConfigChannelTpuType tGptTpuChannelConfig;
    Gpt_ConfigChannelTstmpType tGptTstmpChannelConfig;
    Gpt_ConfigChannelPtimerType tGptPtimerChannelConfig;
    Gpt_ConfigChannelEftuTomType tGptEftuTomChannelConfig;
    uint32 _reserve;
} Gpt_ConfigChannelHwSpecificType;
/* PRQA S 750 --*/
/**
 * @brief
 */
typedef struct
{
    Gpt_ConfigChannelCommonType tGptChannelCommonConfig;
    Gpt_ConfigChannelHwSpecificType tGptChannelHwSpecificConfig;
} Gpt_ConfigChannelType;


/**
* @brief Gpt configuration type. This is the type of the data structure including the configuration
*        set required for initializing the GPT driver. [SWS_Gpt_00357]
*/
typedef struct
{
    /**< @brief Pointer to the GPT channel configuration */
    const Gpt_ConfigChannelType *pGptChannelConfig;
    /**< @brief Pointer to the GPT channel predef timer configuration */
    const Gpt_ConfigPredefChannelType *const(*pGptChannelPredefConfig);
    /**< @brief Hardware to logic channel map table*/
    const Gpt_ChannelType *pGptHw2ChannelMap;
    /**< @brief Mutilcore channel partion map table*/
    const uint8 *pGptChannelPartitionMappingPtr;
    /**< @brief Gpt Ftu Gtb Group*/
    const uint32 *pGptFtuGroupPtr;

} Gpt_ConfigType;

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /*GPT_HW_TYPES_H*/

/** @} */
