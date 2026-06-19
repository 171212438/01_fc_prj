/**
*   @file    Icu_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Icu - Module configuration interface for Icu driver.
*   @details Contains the module configuration interface for Icu driver.
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
*   0.4.0       14/11/2023   QXW0076       N/A          Eliminate timestamp potential hazards
*   0.5.0       25/01/2024   QXW0076       N/A         add time stamp dma function
*   0.6.0       18/3/2024    QXW0076       N/A         Add timestamp dma feature && support for 7240.
==================================================================================================*/

#ifndef ICU_CFG_H
#define ICU_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ICU_VENDOR_ID_CFG                       0xAE

#define ICU_CFG_AR_RELEASE_MAJOR_VERSION        4
#define ICU_CFG_AR_RELEASE_MINOR_VERSION        6
#define ICU_CFG_AR_RELEASE_REVISION_VERSION     0

#define ICU_CFG_SW_MAJOR_VERSION                1
#define ICU_CFG_SW_MINOR_VERSION                5
#define ICU_CFG_SW_PATCH_VERSION                1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/**
 *   @brief Maximum number of ICU channels configured
 */
#define ICU_MAX_CHANNEL     ((Icu_ChannelType)3U)

/**
* @brief Symbolic Names for configured channels - legacy
*/
#define  IcuConf_IcuChannel_IcuChannel_Key3          ((Icu_ChannelType)0U)
#define  IcuConf_IcuChannel_IcuChannel_Key2          ((Icu_ChannelType)1U)
#define  IcuConf_IcuChannel_IcuChannel_Key1          ((Icu_ChannelType)2U)


/**
*   @brief  Switches the Development Error Detection and Notification on or off.
*        STD_ON: Enabled.
*        STD_OFF: Disabled.
*   @implements ICU_DEV_ERROR_DETECT_define
*/
#define ICU_DEV_ERROR_DETECT            (STD_ON)

/**
*   @brief  Switch for enabling Wakeup source reporting.
*        STD_ON: Report Wakeup source.
*        STD_OFF: Do not report Wakeup source.
*
*/
#define ICU_REPORT_WAKEUP_SOURCE        (STD_OFF)

/**
* @{
*   @brief Configuration of Optional API's
*/
/**
*   @brief  Adds or removes the service Icu_GetVersionInfo() from the code.
*        STD_ON: Icu_GetVersionInfo() can be used.
*        STD_OFF: Icu_GetVersionInfo() can not be used.
*
*/
#define ICU_GET_VERSION_INFO_API        (STD_ON)

/**
*   @brief  Adds or removes the service Icu_DeInit() from the code.
*        STD_ON: Icu_DeInit() can be used. STD_OFF: Icu_DeInit() can not be used.
*   @implements ICU_DE_INIT_API_define
*/
#define ICU_DE_INIT_API                 (STD_ON)

/**
*   @brief  Adds or removes the service Icu_SetMode() from the code.
*        STD_ON: Icu_SetMode() can be used.
*        STD_OFF: Icu_SetMode() can not be used.
*   @implements ICU_SET_MODE_API_define
*/
#define ICU_SET_MODE_API                (STD_ON)

/**
*   @brief  Adds or removes the service Icu_DisableWakeup() from the code.
*        STD_ON: Icu_DisableWakeup() can be used.
*        STD_OFF: Icu_DisableWakeup() can not be used.
*   @implements ICU_DISABLE_WAKEUP_API_define
*/
#define ICU_DISABLE_WAKEUP_API          (STD_ON)

/**
*   @brief  Adds or removes the service Icu_EnableWakeup() from the code.
*        STD_ON: Icu_EnableWakeup() can be used.
*        STD_OFF: Icu_EnableWakeup() can not be used.
*   @implements ICU_ENABLE_WAKEUP_API_define
*/
#define ICU_ENABLE_WAKEUP_API           (STD_ON)

/**
*   @brief  Adds or removes all services related to the timestamping functionality as listed
*        below from the code: Icu_StartTimestamp(), Icu_StopTimestamp(), Icu_GetTimestampIndex().
*        STD_ON: The services listed above can be used.
*        STD_OFF: The services listed above can not be used.
*   @implements ICU_TIMESTAMP_API_define
*/
#define ICU_TIMESTAMP_API               (STD_ON)

/**
*   @brief  Adds or removes all services related to the edge counting functionality as listed below,
*           from the code: Icu_ResetEdgeCount(), Icu_EnableEdgeCount(), Icu_DisableEdgeCount(),
*           Icu_GetEdgeNumbers().
*        STD_ON: The services listed above can be used.
*        STD_OFF: The services listed above can not be used.
*   @implements ICU_EDGE_COUNT_API_define
*/
#define ICU_EDGE_COUNT_API              (STD_ON)

/**
*   @brief  Adds or removes the service Icu_GetTimeElapsed() from the code.
*        STD_ON: Icu_GetTimeElapsed() can be used.
*        STD_OFF: Icu_GetTimeElapsed() can not be used.
*   @implements ICU_GET_TIME_ELAPSED_API_define
*/
#define ICU_GET_TIME_ELAPSED_API        \
(STD_ON)

/**
*   @brief  Adds or removes the service Icu_GetDutyCycleValues() from the code.
*        STD_ON: Icu_GetDutyCycleValues() can be used.
*        STD_OFF: Icu_GetDutyCycleValues() can not be used.
*   @implements ICU_GET_DUTY_CYCLE_VALUES_API_define
*/
#define ICU_GET_DUTY_CYCLE_VALUES_API   \
(STD_ON)

/**
*   @brief  Adds or removes the service Icu_GetInputState() from the code.
*        STD_ON: Icu_GetInputState() can be used.
*        STD_OFF: Icu_GetInputState() can not be used.
*   @implements ICU_GET_INPUT_STATE_API_define
*/
#define ICU_GET_INPUT_STATE_API         (STD_ON)

/**
*   @brief  Adds or removes the services Icu_StartSignalMeasurement() and
*          Icu_StopSignalMeasurement() from the code.
*        STD_ON: Icu_StartSignalMeasurement() and Icu_StopSignalMeasurement() can be used.
*        STD_OFF: Icu_StartSignalMeasurement() and Icu_StopSignalMeasurement() can not be used.
*   @implements ICU_SIGNAL_MEASUREMENT_API_define
*/
#define ICU_SIGNAL_MEASUREMENT_API      (STD_ON)

/**
*   @brief  Adds or removes the service Icu_CheckWakeup() from the code.
*        STD_ON: Icu_CheckWakeup() can be used.
*        STD_OFF: Icu_CheckWakeup() can not be used.
*   @implements ICU_WAKEUP_FUNCTIONALITY_API_define
*/
#define ICU_WAKEUP_FUNCTIONALITY_API      (STD_OFF)

/**
*   @brief  Adds or removes the services Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection()
*           from the code.
*        STD_ON: Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection() can be used.
*        STD_OFF: Icu_EnableEdgeDetection() and Icu_DisableEdgeDetection() can not be used.
*
*   @implements  ICU_EDGE_DETECT_API_define
*/
#define ICU_EDGE_DETECT_API      (STD_ON)

/**
*   @brief   Adds or removes the service Icu_GetInputLevel() from the code.
*         STD_ON:  Icu_GetInputLevel() can be used.
*         STD_OFF: Icu_GetInputLevel() can not be used.
*
*
*/
#define ICU_GET_INPUT_LEVEL_API             (STD_ON)

/**
*   @brief  Add / removes Overflow Notification functionality.
*        STD_ON: Add Overflow Notification functionality
*        STD_OFF: Removes Overflow Notification functionality
*/
#define ICU_OVERFLOW_NOTIFICATION_API       (STD_OFF)
/**@}*/

/**
*   @brief  Switch for enabling overflow time statistics.
*        STD_ON: The number of overflows will be added to the statistics
*                in ICU_MODE_SIGNAL_MEASUREMENT mode.
*        STD_OFF: The number of overflows will be added to the statistics.
*/
#define ICU_OVERFLOW_TIME_STATISTICS        (STD_ON)


/**
 * @brief Switch for enabling multicore feature.
 *         STD_ON:  Enable Icu multicore feature.
 *         STD_OFF: Disable Icu multicore feature.
 */
#define ICU_MULTICORE_SUPPORT                       (STD_OFF)

/**
 * @brief Switch for Icu Global Time base feature.
 *         STD_ON:  Enable Icu Global Time Base feature.
 *         STD_OFF: Doaanle Icu Global Time Base feature.
 */
#define ICU_GTB_SUPPORT                       (STD_OFF)



/**
 * @brief Enable/disable support for Icu time stamp dma feature.
*/
#define ICU_TIMESTAMP_DMA                    (STD_ON)

/**
 * @brief Hardware FTU Instance.
*/
#define ICU_TOTAL_FTU_NUMBER            (8U)

/**
 * @brief Hardware Port Instance.
*/
#define ICU_TOTAL_PORT_NUMBER             (5U)

/**
 * @brief Hardware FCPIT Instance.
*/
#define ICU_TOTAL_FCPIT_NUMBER             (1U)

/**
 * @brief Hardware EFTU Instance.
*/
#define ICU_TOTAL_EFTU_NUMBER             (0U)

/**
 * @brief Hardware Cmp Instance.
*/
#define ICU_TOTAL_CMP_NUMBER            (2U)

/**
 * @brief Hardware Fpc channel .
*/
#define ISM_FPC_TOTAL_CHANNEL             (16U)

/**
 * @brief Hardware Fpc channel .
*/
#define ISM_LAM_TOTAL_CHANNEL             (16U)

    
/**
 * @brief Ftu Supports Icm Mode.
*/
#define ICU_FTU_SUPPORT_ICM_MODE             (STD_ON)

/**
 * @brief Only Supports One Timebase Group.
*/
#define ICU_GLOBAL_TIME_BASE_CONST_ONE    (STD_OFF)

/**
 * @brief Icu Supports Tpu.
*/
#define ICU_SUPPORT_TPU          (STD_ON)

/**
 * @brief Icu Supports EFTU.
*/
#define ICU_SUPPORT_EFTU          (STD_OFF)


/**
 * @brief Icu Supports CMP.
*/
#define ICU_SUPPORT_CMP          (STD_ON)


/**
 * @brief        This is a timeout value which is used to wait till spinlock is acquired
 */
#define ICU_SPIN_LOCK_TIMEOUT                     (0x0000ffffUL)



/**
 * @brief define the dma channel count used by Icu.
*/
#define ICU_TIMESTAMP_DMACHANNEL_COUNT        (0U)



/**
 * @brief ICU PORT driver interrupt used
 *
 */
#define ICU_PORT_ISR_USED

#define ICU_PORT_A_9_USED
#define ICU_PORT_A_ISR_USED
#define ICU_PORT_B_16_USED
#define ICU_PORT_B_ISR_USED
#define ICU_PORT_D_0_USED
#define ICU_PORT_D_ISR_USED











/*==================================================================================================
                                             ENUMS
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


#ifdef __cplusplus
}
#endif

#endif    /* ICU_CFG_H */
/**@}*/

