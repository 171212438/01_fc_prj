/**
*   @file    Gpt.h
*   @implements      Gpt.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR Gpt - driver API and development errors definition.
*   @details This file contains the Gpt Autosar driver API and development errors definition.
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
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and add
Gpt_Tpu support(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/

#ifndef GPT_H
#define GPT_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
/* [SWS_Gpt_00278] */
#include "Std_Types.h"
#include "Gpt_Cfg.h"
#include "Gpt_Hw.h"
#include "Gpt_version.h"

/* [SWS_Gpt_00278] */
#if (GPT_WAKEUP_FUNCTION_API == STD_ON)
#include "EcuM.h"
#endif

/*=================================================================================================
*                                          CONSTANT-LIKE DEFINES
=================================================================================================*/

/*=================================================================================================
*                                      FUNCTION-LIKE DEFINES(MACROS)
=================================================================================================*/
/* [SWDESG_GPT_115] */
/**
 * @brief function Gpt_StartTimer is called when the driver is in sleep mode for a channel which
 * is not wakeup enabled
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_INVALID_CALL               ((uint8)0xA0U)

/**
 * @brief API service called without module initialization [SWS_Gpt_91000]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_UNINIT                     ((uint8)0x0AU)

/**
 * @brief API service called when timer channel is still busy (running) [SWS_Gpt_91001]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_BUSY                       ((uint8)0x0BU)

/**
 * @brief API service called when driver is in wrong mode [SWS_Gpt_91001]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_MODE                       ((uint8)0x0CU)

/**
 * @brief API service for initialization called when already initialized [SWS_Gpt_91000]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_ALREADY_INITIALIZED        ((uint8)0x0DU)

/**
 * @brief API error return code: Init function failed [SWS_Gpt_91000]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_INIT_FAILED                ((uint8)0x0E)

/**
 * @brief API parameter checking: invalid channel [SWS_Gpt_91000]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_PARAM_CHANNEL              ((uint8)0x14U)

/**
 * @brief API parameter checking: invalid value [SWS_Gpt_91000]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_PARAM_VALUE                ((uint8)0x15U)

/**
 * @brief API parameter checking: invalid pointer [SWS_Gpt_91000]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_PARAM_POINTER              ((uint8)0x16U)
/**
 * @brief API parameter checking: invalid Predef Timer [SWS_Gpt_91000]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_PARAM_PREDEF_TIMER         ((uint8)0x17U)
/**
 * @brief API parameter checking: invalid mode [SWS_Gpt_91000]
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_PARAM_MODE                 ((uint8)0x1FU)

/**
 * @brief API parameter checking: invalid partition
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_PARAM_PARTITION            ((uint8)0x20U)

/**
 * @brief Gpt get Spinlock failed
 * @details Errors and exceptions that will be detected by the GPT driver
 */
#define GPT_E_GET_SPIN_LOCK_FAILED       ((uint8)0x21U)

/**
 * @brief API Check invalid Group
 *
 */
#define GPT_E_PARAM_GROUP                ((uint8)0x22U)

/**
 * @brief Spin lock timeout value
 *
 */
#define GPT_SPIN_LOCK_TIMEOUT            ((uint16)0xFFFFU)

/* API SERVICE IDs */

/**
 * @brief API service ID for Gpt_GetVersionInfo  function [SWS_Gpt_00279]
 * @details Parameters used when raising an error/exception
 */
#define GPT_GETVERSIONINFO_ID            ((uint8)0x00U)

/**
 * @brief API service ID for Gpt_Init function [SWS_Gpt_00280]
 * @details Parameters used when raising an error/exception
 */
#define GPT_INIT_ID                      ((uint8)0x01U)

/**
 * @brief API service ID for Gpt_DeInit function [SWS_Gpt_00281]
 * @details Parameters used when raising an error/exception
 */
#define GPT_DEINIT_ID                    ((uint8)0x02U)

/**
 * @brief API service ID for Gpt_GetTimeElapsed function [SWS_Gpt_00282]
 * @details Parameters used when raising an error/exception
 */
#define GPT_TIMEELAPSED_ID               ((uint8)0x03U)

/**
 * @brief API service ID for Gpt_GetTimeRemaining function [SWS_Gpt_00283]
 * @details Parameters used when raising an error/exception
 */
#define GPT_TIMEREMAINING_ID             ((uint8)0x04U)

/**
 * @brief API service ID for Gpt_StartTimer function [SWS_Gpt_00284]
 * @details Parameters used when raising an error/exception
 */
#define GPT_STARTTIMER_ID                ((uint8)0x05U)

/**
 * @brief API service ID for Gpt_StopTimer function [SWS_Gpt_00285]
 * @details Parameters used when raising an error/exception
 */
#define GPT_STOPTIMER_ID                 ((uint8)0x06U)

/**
 * @brief API service ID for Gpt_EnableNotification function [SWS_Gpt_00286]
 * @details Parameters used when raising an error/exception
 */
#define GPT_ENABLENOTIFICATION_ID        ((uint8)0x07U)

/**
 * @brief API service ID for Gpt_DisableNotification function [SWS_Gpt_00287]
 * @details Parameters used when raising an error/exception
 */
#define GPT_DISABLENOTIFICATION_ID       ((uint8)0x08U)

/**
 * @brief API service ID for Gpt_SetMode function [SWS_Gpt_00288]
 * @details Parameters used when raising an error/exception
 */
#define GPT_SETMODE_ID                   ((uint8)0x09U)

/**
 * @brief API service ID for Gpt_DisableWakeup function [SWS_Gpt_00289]
 * @details Parameters used when raising an error/exception
 */
#define GPT_DISABLEWAKEUP_ID             ((uint8)0x0AU)

/**
 * @brief API service ID for Gpt_EnableWakeup function [SWS_Gpt_00290]
 * @details Parameters used when raising an error/exception
 */
#define GPT_ENABLEWAKEUP_ID              ((uint8)0x0BU)

/**
 * @brief API service ID for Gpt_CheckWakeup function [SWS_Gpt_00328]
 * @details Parameters used when raising an error/exception
 */
#define GPT_CHECKWAKEUP_ID               ((uint8)0x0CU)

/**
 * @brief API service ID for Gpt_ProcessCommonInterrupt generic ISR handler
 * @details Parameters used when raising an error/exception
 */
#define GPT_PROCESSCOMMONINTERRUPT_ID    ((uint8)0x11U)

/**
 * @brief API service ID for Gpt_StartGlobalTime function [FUNC_Gpt_0001]
 * @details Parameters used when raising an error/exception
 */
#define GPT_STARTGLOBALTIME_ID           ((uint8)0x12U)

/**
 * @brief API service ID for Gpt_StopGlobalTime function [FUNC_Gpt_0002]
 * @details Parameters used when raising an error/exception
 */
#define GPT_STOPGLOBALTIME_ID            ((uint8)0x13U)

/**
 * @brief API service ID for Gpt_GetRtcCounterValue function
 * @details Parameters used when raising an error/exception
 */
#define GPT_GETRTCCOUNTERVALUE_ID        ((uint8)0x14U)

/**
 * @brief API service ID for Gpt_ResetRtcCounter function
 * @details Parameters used when raising an error/exception
 */
#define GPT_RESETRTCCOUNTER_ID           ((uint8)0x15U)

/**
 * @brief API service ID for Gpt_ChangeNextTimeoutValue function [FUNC_Gpt_0021]
 * @details Parameters used when raising an error/exception
 */
#define GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID ((uint8)0x0FU)

/**
 * @brief   API service ID for Gpt_GetPredefTimerValue function [SWS_Gpt_00394]
 * @details Parameters used when raising an error/exception
 */
#define GPT_GET_PREDEF_TIMERVALUE_ID     ((uint8)0x0DU)
/**
 * @brief Instance ID of this GPT driver.
 *
 */
#define GPT_INSTANCE_ID                  ((uint8)0U)

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/
/**
 * @brief This enumerated type allows the selection of channel status type.
 *
 */
typedef enum
{
    GPT_STATUS_UNINITIALIZED = 0, /**< @brief GPT channel status - uninitialized */
    GPT_STATUS_INITIALIZED   = 1, /**< @brief GPT channel status - initialized */
    GPT_STATUS_STOPPED       = 2, /**< @brief GPT channel status - stopped */
    GPT_STATUS_EXPIRED       = 3, /**< @brief GPT channel status - expired */
    GPT_STATUS_RUNNING       = 4  /**< @brief GPT channel status - running */
} Gpt_ChannelStatusType;
/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/**
 * @brief Gpt runtime status type - this is the type of the data structure including the
 * runtime status informations of a channel.
 *
 */
typedef struct
{
    /**< @brief GPT channel runtime status */
    Gpt_ChannelStatusType eChannelStatus;
    /**< @brief GPT channel has notification enabled at runtime */
    boolean bNotificationEnabled;

#if ((GPT_WAKEUP_FUNCTION_API == STD_ON) && (GPT_REPORT_WAKEUP_SOURCE == STD_ON))
    /**< @brief GPT channel has wakeup enabled at runtime*/
    boolean bWakeupEnabled;
    /**< @brief GPT channel executed wakeup */
    boolean bWakeupGenerated;
#endif
} Gpt_ChannelInfoType;
/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

#if (GPT_VERSION_INFO_API == STD_ON)
/**
 * @brief Get GPT module version information API
 *
 * @param VersionInfoPtr Version information structure pointer
 */
GPT_TEXT_SECTION void Gpt_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr);
#endif

/**
 * @brief GPT initialization
 *
 * @param ConfigPtr Pointer to configuration value
 */
GPT_TEXT_SECTION void Gpt_Init(const Gpt_ConfigType *ConfigPtr);

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initialization
 *
 */
GPT_TEXT_SECTION void Gpt_DeInit(void);
#endif

#if (GPT_TIME_ELAPSED_API == STD_ON)
/**
 * @brief Get channel elapsed value
 *
 * @param Channel Logic channel number
 * @return Gpt_ValueType
 */
GPT_TEXT_SECTION Gpt_ValueType Gpt_GetTimeElapsed(Gpt_ChannelType Channel);
#endif

#if (GPT_TIME_REMAINING_API == STD_ON)
/**
 * @brief Get channel remaining value
 *
 * @param Channel Logic channel number
 * @return Gpt_ValueType
 */
GPT_TEXT_SECTION Gpt_ValueType Gpt_GetTimeRemaining(Gpt_ChannelType Channel);
#endif

/**
 * @brief Start channel
 *
 * @param Channel Logic channel number
 * @param Value Start time value
 */
GPT_TEXT_SECTION void Gpt_StartTimer(Gpt_ChannelType Channel, Gpt_ValueType Value);

/**
 * @brief Stop channel
 *
 * @param Channel Logic channel number
 */
GPT_TEXT_SECTION void Gpt_StopTimer(Gpt_ChannelType Channel);

#if (GPT_ENABLE_DISABLE_NOTIFICATION_API == STD_ON)
/**
 * @brief Enable channel notification
 *
 * @param Channel Logic channel number
 */
GPT_TEXT_SECTION void Gpt_EnableNotification(Gpt_ChannelType Channel);

/**
 * @brief Disable channel notification
 *
 * @param Channel Logic channel number
 */
GPT_TEXT_SECTION void Gpt_DisableNotification(Gpt_ChannelType Channel);
#endif

#if (GPT_WAKEUP_FUNCTION_API == STD_ON)
/**
 * @brief Set GPT mode
 *
 * @param Mode GPT module mode
 */
GPT_TEXT_SECTION void Gpt_SetMode(Gpt_ModeType Mode);

/**
 * @brief Disable channel wakeup
 *
 * @param Channel Logic channel number
 */
GPT_TEXT_SECTION void Gpt_DisableWakeup(Gpt_ChannelType Channel);

/**
 * @brief Enable channel wakeup
 *
 * @param Channel Logic channel number
 */
GPT_TEXT_SECTION void Gpt_EnableWakeup(Gpt_ChannelType Channel);

/**
 * @brief Check wakeup status
 *
 * @param WakeupSource
 */
GPT_TEXT_SECTION void Gpt_CheckWakeup(EcuM_WakeupSourceType WakeupSource);
#endif

#if (GPT_FTU_GTB_SUPPORT == STD_ON)
/*
 * @brief Enable the Ftu Gtb function
 *
 * @param u32Group  -- Ftu Gtb Group
 * */
GPT_TEXT_SECTION void Gpt_StartGlobalTime(const uint32 u32Group);

/*
 * @brief Disble the Ftu Gtb function
 *
 * @param u32Group  -- Ftu Gtb Group
 * */
GPT_TEXT_SECTION void Gpt_StopGlobalTime(const uint32 u32Group);
#endif

#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
/**
 * @brief Change next timeout value
 *
 * @param Channel Logic channel number
 * @param Value Channel value
 */
GPT_TEXT_SECTION void Gpt_ChangeNextTimeoutValue(Gpt_ChannelType Channel, Gpt_ValueType Value);
#endif

#if (GPT_GET_RTC_COUNTER_VALUE_API == STD_ON)
/**
 * @brief Get the RTC current Seconds register value
 *
 * @param Channel Logic channel number
 * @return Gpt_ValueType
 */
GPT_TEXT_SECTION Gpt_ValueType Gpt_GetRtcCounterValue(Gpt_ChannelType Channel);
#endif

#if (GPT_RESET_RTC_COUNTER_API == STD_ON)
/**
 * @brief Reset the RTC Seconds register value
 *
 * @param Channel Logic channel number
 */
GPT_TEXT_SECTION void Gpt_ResetRtcCounter(Gpt_ChannelType Channel);
#endif

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief Get Predef timer value
 *
 * @param PredefTimer Predef timer enumeration
 * @param TimeValuePtr Time value pointer
 * @return Std_ReturnType API status return type
 */
GPT_TEXT_SECTION Std_ReturnType Gpt_GetPredefTimerValue(Gpt_PredefTimerType PredefTimer,
                                                        uint32             *TimeValuePtr);
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*GPT_H*/

/** @} */
