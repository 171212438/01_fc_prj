/**
 *   @file    Adc.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - driver API and development errors definition.
 *   @details This file contains the ADC Autosar driver API and development errors definition.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : ADC
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       10/07/2023    QXW0030       N/A          ADC Initial Version
*   0.2.0       07/10/2023    QXW0030       N/A          Add Adc Multicore Support
*   0.3.0       17/10/2023    QXW0030       N/A          Optimization of Multicore instance
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
==================================================================================================*/

#ifndef ADC_H
#define ADC_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/**
 * @file           Adc.h
 */
#include "Adc_Cfg.h"
#include "Adc_Types.h"
#include "Mcal.h"
#include "Std_Types.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 *       Development errors.
 *       The following errors shall be detectable by the ADC module depending on its
 *       configuration (development / production mode).
 *
 *       All error codes
 *
 */

/**
 * @brief   API service used without Adc module initialization
 */
#define ADC_E_UNINIT                    ((uint8)0x0AU)

/**
 * @brief   Adc module is busy with a running operation
 */
#define ADC_E_BUSY                      ((uint8)0x0BU)

/**
 * @brief   Adc module is in idle state
 */
#define ADC_E_IDLE                      ((uint8)0x0CU)

/**
 * @brief   The ADC module is already initilized
 */
#define ADC_E_ALREADY_INITIALIZED       ((uint8)0x0DU)

/**
 * @brief   The ADC module is not properly configured
 */
#define ADC_E_PARAM_CONFIG              ((uint8)0x0EU)

/**
 * @brief   API service is called using an invalid pointer (e.g. the pointer should not be NULL).
 */
#define ADC_E_PARAM_POINTER             ((uint8)0x14U)

/**
 * @brief   API service used with an invalid ADC group.
 */
#define ADC_E_PARAM_GROUP               ((uint8)0x15U)

/**
 * @brief   API service used with an invalid ADC Conversion Mode.
 */
#define ADC_E_WRONG_CONV_MODE           ((uint8)0x16U)

/**
 * @brief   API service used with an invalid ADC Trigger Source.
 */
#define ADC_E_WRONG_TRIGG_SRC           ((uint8)0x17U)

/**
 * @brief   Check the notification capability of a group.
 */
#define ADC_E_NOTIF_CAPABILITY          ((uint8)0x18U)

/**
 * @brief   API service used without initializing the buffer.
 */
#define ADC_E_BUFFER_UNINIT             ((uint8)0x19U)
/**
 * @brief   One or more ADC group/channel not in IDLE state.
 */
#define ADC_E_NOT_DISENGAGED            ((uint8)0x1AU)
/**
 * @brief   Unsupported power state request.
 */
#define ADC_E_POWER_STATE_NOT_SUPPORTED ((uint8)0x1BU)
/**
 * @brief   Requested power state can not be reached directly.
 */
#define ADC_E_TRANSITION_NOT_POSSIBLE   ((uint8)0x1CU)
/**
 * @brief   ADC not prepared for target power state.
 */
#define ADC_E_PERIPHERAL_NOT_PREPARED   ((uint8)0x1DU)

/**
 * @brief    The Adc_StartGroupConversion and Adc_EnableHardwareTrigger services can not queue
 *           another conversion (queue is full)
 */
#define ADC_E_QUEUE_FULL                ((uint8)0x20U)

/**
 * @brief   API service called using a wrong ADC unit.
 */
#define ADC_E_PARAM_UNIT                ((uint8)0x27U)

/**
 *        All AUTOSAR API's service IDs
 */

/**
 * @brief API service ID for Adc_Init function
 */
#define ADC_INIT_ID                     0x00U

/**
 * @brief API service ID for Adc_DeInit function
 */
#define ADC_DEINIT_ID                   0x01U

/**
 * @brief API service ID for Adc_StartGroupConversion function
 */
#define ADC_STARTGROUPCONVERSION_ID     0x02U

/**
 * @brief API service ID for Adc_StopGroupConversion function
 */
#define ADC_STOPGROUPCONVERSION_ID      0x03U

/**
 * @brief API service ID for Adc_ReadGroup function
 */
#define ADC_VALUEREADGROUP_ID           0x04U

/**
 * @brief API service ID for Adc_EnableHardwareTrigger function
 */
#define ADC_ENABLEHARDWARETRIGGER_ID    0x05U

/**
 * @brief API service ID for Adc_DisableHardwareTrigger function
 */
#define ADC_DISABLEHARDWARETRIGGER_ID   0x06U

/**
 * @brief API service ID for Adc_EnableGroupNotification function
 */
#define ADC_ENABLEGROUPNOTIFICATION_ID  0x07U

/**
 * @brief API service ID for Adc_DisableGroupNotification function
 */
#define ADC_DISABLEGROUPNOTIFICATION_ID 0x08U

/**
 * @brief API service ID for Adc_GetGroupStatus function
 */
#define ADC_GETGROUPSTATUS_ID           0x09U

/**
 * @brief API service ID for Adc_GetVersionInfo function
 */
#define ADC_GETVERSIONINFO_ID           0x0AU

/**
 * @brief API service ID for Adc_GetStreamLastPointer function
 */
#define ADC_GETSTREAMLASTPOINTER_ID     0x0BU

/**
 * @brief API service ID for Adc_SetupResultBuffer function
 */
#define ADC_SETUPRESULTBUFFER_ID        0x0CU
/**
 * @brief API service ID for Adc_SetPowerState function
 */
#define ADC_SETPOWERSTATE_ID            0x10U
/**
 * @brief API service ID for Adc_GetCurrentPowerState function
 */
#define ADC_GETCURRENTPOWERSTATE_ID     0x11U
/**
 * @brief API service ID for Adc_GetTargetPowerState function
 */
#define ADC_GETTARGETPOWERSTATE_ID      0x12U
/**
 * @brief API service ID for Adc_PreparePowerState function
 */
#define ADC_PREPAREPOWERSTATE_ID        0x13U

/**
 *        All NON-AUTOSAR API's service IDs
 */

/**
 * @brief API service ID for Adc_CalcTemperature function
 */
#define ADC_CALCTEMPERATURE_ID          0x80U
/**
 * @brief API service ID for Adc_GetTemperatureStatus function
 */
#define ADC_GETTEMPERATURESTATUS_ID     0x81U

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

ADC_TEXT_SECTION void Adc_Init(const Adc_ConfigType *ConfigPtr);

ADC_TEXT_SECTION Std_ReturnType Adc_SetupResultBuffer(Adc_GroupType       Group,
                                                      Adc_ValueGroupType *DataBufferPtr);

#if (ADC_DEINIT_API == STD_ON)
ADC_TEXT_SECTION void Adc_DeInit(void);
#endif /* ADC_DEINIT_API == STD_ON */

#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
ADC_TEXT_SECTION void Adc_StartGroupConversion(Adc_GroupType Group);

ADC_TEXT_SECTION void Adc_StopGroupConversion(Adc_GroupType Group);
#endif /* ADC_ENABLE_START_STOP_GROUP_API == STD_ON */

#if (ADC_READ_GROUP_API == STD_ON)
ADC_TEXT_SECTION Std_ReturnType Adc_ReadGroup(Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr);
#endif /* ADC_READ_GROUP_API == STD_ON */

#if (ADC_HW_TRIGGER_API == STD_ON)
ADC_TEXT_SECTION void Adc_EnableHardwareTrigger(Adc_GroupType Group);

ADC_TEXT_SECTION void Adc_DisableHardwareTrigger(Adc_GroupType Group);
#endif /* ADC_HW_TRIGGER_API == STD_ON */

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
ADC_TEXT_SECTION void Adc_EnableGroupNotification(Adc_GroupType Group);

ADC_TEXT_SECTION void Adc_DisableGroupNotification(Adc_GroupType Group);
#endif /* ADC_GRP_NOTIF_CAPABILITY == STD_ON */

ADC_TEXT_SECTION Adc_StatusType Adc_GetGroupStatus(Adc_GroupType Group);

ADC_TEXT_SECTION Adc_StreamNumSampleType Adc_GetStreamLastPointer(Adc_GroupType Group,
                                                                  Adc_ValueGroupType **PtrToSamplePtr);

#if (ADC_VERSION_INFO_API == STD_ON)
ADC_TEXT_SECTION void Adc_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif /* ADC_VERSION_INFO_API == STD_ON */

#if (ADC_ENABLE_TMU_SUPPORT == STD_ON)
#if (ADC_CALC_TEMPERATURE_API == STD_ON)
ADC_TEXT_SECTION float32 Adc_CalcTemperature(float32 Voltage);
#endif /* ADC_CALC_TEMPERATURE_API == STD_ON */

#if (ADC_GET_TEMPERATURE_STATUS_API == STD_ON)
ADC_TEXT_SECTION AdcTemperatureStatusType Adc_GetTemperatureStatus(void);
#endif /* ADC_GET_TEMPERATURE_STATUS_API == STD_ON */
#endif /* ADC_ENABLE_TMU_SUPPORT == STD_ON */

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_H */

/** @} */
