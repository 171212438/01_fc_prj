/**
*   @file    Lin.h
*   @version 1.5.1

*   @brief   AUTOSAR LIN - driver API and development errors implemention.
*   @details This file contains the LIN Autosar driver API and development errors implemention.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : LIN
*   PLATFORM             : Flagchip FC7xxx
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
*   0.1.0       15/06/2023    QXW0095       N/A          LIN Initial Version
*   0.2.0       27/09/2023    QXW0095       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0095       N/A          Optimize the static code
*   0.4.0       20/11/2023    QXW0095       N/A          Optimize the static code
*   0.6.0       18/03/2024    QXW0122       N/A          Add support for FC7240
*   0.7.0       16/04/2024    QXW0122       N/A          Add Lin slave mode
*   0.8.0       01/08/2024    QXW0122       N/A          Add timeout detection & Add FIFO support
==================================================================================================*/
#ifndef LIN_H
#define LIN_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/**
 * @file           Lin.h
 */
/* [SWS_Lin_00054] [SWS_Lin_00226] */
#include "ComStack_Types.h"
#include "Std_Types.h"
#include "Mcal.h"
#include "Lin_Cfg.h"
#include "Lin_GeneralTypes.h"
#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
/* [SWS_Lin_00042] */
#include "EcuM.h"
#endif /* LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON */

/*==================================================================================================
*                                   FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
 *       Development errors.
 *       The following errors shall be detectable by the Lin module depending on its
 *       configuration (development / production mode).
 *
 *       All error codes
 *
 */

/**
 * @brief          Macro that specifies usage of a LIN SLAVE node
 * @details        This macro is used in user configuration structure to set the node type as SLAVE.
 *
 */
#define LIN_SLAVE_NODE               (0u)

/**
 * @brief          Macro that specifies usage of a LIN MASTER node
 * @details        This macro is used in user configuration structure to set the node type as MASTER.
 *
 */
#define LIN_MASTER_NODE              (1u)

/**
 * @brief   LIN Instance ID
 */
#define LIN_INSTANCE_ID              ((uint8)0U)

/**
 * @brief   API service used without Adc module initialization
 */
/* [SWS_Lin_00048] */
#define LIN_E_UNINIT                 ((uint8)0x00U)

/**
 * @brief   API service used with an invalid or inactive channel parameter
 */
/* [SWS_Lin_00048] */
#define LIN_E_INVALID_CHANNEL        ((uint8)0x02U)

/**
 * @brief   API service called with invalid configuration pointer
 */
/* [SWS_Lin_00048] */
#define LIN_E_INVALID_POINTER        ((uint8)0x03U)

/**
 * @brief   Invalid state transition for the current state
 */
/* [SWS_Lin_00048] */
#define LIN_E_STATE_TRANSITION       ((uint8)0x04U)

/**
 * @brief   API service called with a NULL pointer
 */
/* [SWS_Lin_00048] */
#define LIN_E_PARAM_POINTER          ((uint8)0x05U)

/**
 * @brief   Timeout caused by hardware error
 */
/* [SWS_Lin_00048] [SWS_Lin_00290] */
#define LIN_E_TIMEOUT                ((uint8)0x06U)

/**
 * @brief   Lin Already Initialized
 */
#define LIN_E_ALREADY_INITIALIZED    ((uint8)0x07U)

/****************************************
 *    All AUTOSAR API's service IDs
 ****************************************/
/**
 * @brief   API Service ID for Lin_Init()
 */
#define LIN_INIT_ID                  ((uint8)0x0U)

/**
 * @brief   API Service ID for Lin_GetVersionInfo()
 */
#define LIN_VERSIONINFO_ID           ((uint8)0x1U)

/**
 * @brief   API Service ID for Lin_SendFrame()
 */
#define LIN_SENDFRAME_ID             ((uint8)0x4U)

/**
 * @brief   API Service ID for Lin_GoToSleep()
 */
#define LIN_GOTOSLEEP_ID             ((uint8)0x6U)

/**
 * @brief   API Service ID for Lin_WakeUp()
 */
#define LIN_WAKEUP_ID                ((uint8)0x7U)

/**
 * @brief   API Service ID for Lin_GetStatus()
 */
#define LIN_GETSTATUS_ID             ((uint8)0x8U)

/**
 * @brief   API Service ID for Lin_GoToSleepInternal()
 */
#define LIN_GOTOSLEEPINTERNAL_ID     ((uint8)0x9U)

/**
 * @brief   API Service ID for Lin_CheckWakeup()
 */
#define LIN_CHECKWAKEUP_ID           ((uint8)0xAU)

/**
 * @brief   API Service ID for Lin_WakeUpInternal()
 */
#define LIN_WAKEUPINTERNAL_ID        ((uint8)0xBU)

/**
 * @brief   API Service ID for Lin_TimerExpiredService()
 */
#define LIN_TIMEOUT_ID               ((uint8)0xCU)

/**
 * @brief  API Service ID for Lin_Deinit()
 */
#define LIN_DEINIT_ID                ((uint8)0xDU)

/****************************************
 * Lin driver states
 ****************************************/
/**
 * @brief   Lin driver initialization states
 */
#define LIN_UNINIT                   ((uint8)0x01U)

/**
 * @brief   Lin driver initialization states
 */
#define LIN_INIT                     ((uint8)0x02U)

/**
 * @brief   Lin Channel states
 * @details go-to-sleep-command has been issued on the bus,
 *          Lin channel stay at this state until Lin_GetStatus() is called
 */
#define LIN_CH_SLEEP_PENDING         ((uint8)0x01U)

/**
 * @brief   Lin Channel states
 * @details   The detection of a wake-up pulse is enabled. The Lin
 *            hardware is into a low power mode if such a mode is
 *            provided by the hardware.
 */
#define LIN_CH_SLEEP_STATE           ((uint8)0x02U)

/**
 * @brief     Lin Channel states
 * @details   The individual channel has been initialized (using
 *            at least one channel configured data set) and
 *            is able to participate in the Lin cluster.
 */
#define LIN_CH_OPERATIONAL_STATE     ((uint8)0x03U)

/**
 * @brief     Lin Channel states
 * @details   The individual channel is not ready to
 *            proceess a frame.
 */
#define LIN_CH_NOT_READY_STATE       ((uint8)0x04U)

/**
 * @brief     Lin Channel states
 * @details   The individual channel is ready to proceess a frame.
 */
#define LIN_CH_READY_STATE           ((uint8)0x05U)

/**
 * @brief     Lin Channel states
 * @details   Lin frame was sent and no errors.
 */
#define LIN_TX_COMPLETE_STATE        ((uint8)0x06U)

/**
 * @brief     Lin Channel states
 * @details   Lin frame was received and no errors.
 */
#define LIN_RX_COMPLETE_STATE        ((uint8)0x07U)

/**
 * @brief     Lin Channel states
 * @details   State after the Lin frame header was correctly sent.
 */
#define LIN_CH_RECEIVE_NOTHING_STATE ((uint8)0x08U)

/**
 * @brief     Lin Channel states
 * @details   Lin frame is receiving.
 */
#define LIN_RX_ONGOING_STATE         ((uint8)0x09U)

/**
 * @brief     Lin Channel states
 * @details   Lin header is transmission.
 */
#define LIN_TX_HEADER_COMPLETE_STATE ((uint8)0x0AU)

/****************************************
 * Lin interrupt states
 ****************************************/
/**
 * @brief     Interrupt Errors conditions
 * @details   No error occurred on a channel.
 */
#define LIN_NO_ERROR                 ((uint8)0x00U)

/**
 * @brief     Interrupt Errors conditions
 * @details   Bit error on a channel:
 *            - During response field transmission (Slave and Master modes);
 *            - During header transmission (in Master mode).
 */
#define LIN_BIT_ERROR                ((uint8)0x01U)

/**
 * @brief     Interrupt Errors conditions
 * @details   Checksum error on a channel.
 */
#define LIN_CHECKSUM_ERROR           ((uint8)0x02U)

/**
 * @brief     Interrupt Errors conditions
 * @details   Invalid stop bit:
 *            - During reception of any data in the response field (Slave and Master modes);
 *            - During reception of Synch or Identifier Field (Slave mode).
 */
#define LIN_FRAMING_ERROR            ((uint8)0x03U)

/**
 * @brief     Interrupt Errors conditions
 * @details   New data byte is received on a channel and the buffer full flag is not cleared.
 */
#define LIN_BUFFER_OVER_RUN_ERROR    ((uint8)0x04U)

/**
 * @brief     Interrupt Errors conditions
 * @details   Noise detected on a received character.
 */
#define LIN_NOISE_ERROR              ((uint8)0x05U)

/**
 * @brief     Interrupt Errors conditions
 * @details   Header or Response timeout detected.
 */
#define LIN_TIMEOUT_ERROR            ((uint8)0x06U)

/**
 * @brief     Interrupt Errors conditions
 * @details   Receiver Buffer Underflow or Transmitter Buffer Overflow.
 */
#define LIN_TXRX_FIFO_ERROR          ((uint8)0x07U)
/****************************************
 * Lin command ID
 ****************************************/
/**
 * @brief     Commands IDs
 * @details   Response is generated from this node
 */
#define LIN_TX_RES_COMMAND           ((uint8)0x01U)

/**
 * @brief     Commands IDs
 * @details   Response is generated from another node and is
 *            relevant for this node.
 */
#define LIN_RX_RES_COMMAND           ((uint8)0x02U)

/**
 * @brief     Commands IDs
 * @details   Tx frame is a sleep command frame.
 */
#define LIN_TX_SLEEP_COMMAND         ((uint8)0x03U)

/**
 * @brief     Commands IDs
 * @details   No tx command pending.
 */
#define LIN_TX_NO_COMMAND            ((uint8)0x04U)

/**
 * @brief     Commands IDs
 * @details   Response is generated from another node and is
 *            irrelevant for this node
 */
#define LIN_IGNORE_COMMAND           ((uint8)0x05U)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

#if (LIN_PRECOMPILE_SUPPORT == STD_ON)
extern const Lin_ConfigType *Lin_PBCfgVarPredef[LIN_PARTIONS_NB];
#else  /* LIN_PRECOMPILE_SUPPORT == STD_OFF */
extern const Lin_ConfigType *const Lin_Config[LIN_PARTIONS_NB];
#endif /* LIN_PRECOMPILE_SUPPORT == STD_ON */

#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

#define LIN_START_SEC_VAR_NO_INIT_8
#include "Lin_MemMap.h"

extern volatile uint8 Lin_SM_ChStatus[LIN_INSTANCE_CONFIG];
extern volatile uint8 Lin_SM_ChFrameStatus[LIN_INSTANCE_CONFIG];
extern volatile uint8 Lin_SM_ChFrameErrStatus[LIN_INSTANCE_CONFIG];
extern uint8          Lin_SM_TransmitHeaderCmd[LIN_INSTANCE_CONFIG];

#define LIN_STOP_SEC_VAR_NO_INIT_8
#include "Lin_MemMap.h"
/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"

/**
 * @brief   Initializes the Lin module.
 * @details This function is used to initialize LIN driver(including state machine).
 *
 */
LIN_TEXT_SECTION void Lin_Init(const Lin_ConfigType *Config);

/**
 * @brief   Check the wake up of Lin channel.
 * @details This function identifies if the Lin channel has been woken up
 *
 */
LIN_TEXT_SECTION Std_ReturnType Lin_CheckWakeup(uint8 Channel);

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief   Gets the status of the LIN driver.
 * @details This function returns the state of the current
 *          transmission, reception or operation status.
 *          If the reception of a Slave response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *
 */
LIN_TEXT_SECTION Lin_StatusType Lin_GetStatus(uint8 Channel, const uint8 **Lin_SduPtr);

/**
 * @brief   The service instructs the driver to transmit a
 *          go-to-sleep-command on the addressed Lin channel.
 * @details This function stops any ongoing transmission and initiates
 *          the transmission of the sleep command (master command
 *          frame with ID = 0x3C and data = (0x00, 0xFF, 0xFF, 0xFF,
 *          0xFF, 0xFF, 0xFF, 0xFF). State transition in
 *          LIN_CH_SLEEP_STATE shall be done after the completion of
 *          the sleep command transmission regardless of the success
 *          (therefore the ISR is responsible to put the channel in
 *          LIN_CH_SLEEP_STATE).
 *
 */
LIN_TEXT_SECTION Std_ReturnType Lin_GoToSleep(uint8 Channel);

/**
 * @brief   Sends a Lin frame.
 * @details Sends a Lin header and a Lin response, if necessary. The
 *          direction of the frame response (master response, slave
 *          response, slave-to-slave communication) is provided by
 *          the PduInfoPtr.
 *
 */
LIN_TEXT_SECTION Std_ReturnType Lin_SendFrame(uint8 Channel, const Lin_PduType *PduInfoPtr);
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

/**
 * @brief   Put a Lin channel in the internal sleep state.
 * @details Stops any ongoing transmission, sets the channel
 *          state to LIN_CH_SLEEP and put the LIN
 *          hardware unit to a reduced power operation mode.
 *
 */
LIN_TEXT_SECTION Std_ReturnType Lin_GoToSleepInternal(uint8 Channel);

/**
 * @brief   Generates a wake up pulse.
 * @details This function shall sent a wake up signal to the LIN bus
 *          and put the Lin channel in LIN_CH_OPERATIONAL state.
 *
 */
LIN_TEXT_SECTION Std_ReturnType Lin_Wakeup(uint8 Channel);

/**
 * @brief   Wake up the Lin channel.
 * @details This function shall put the LIN channel in LIN_CH_OPERATIONAL state without sending a
 *          wake up signal to the LIN bus
 *
 */
LIN_TEXT_SECTION Std_ReturnType Lin_WakeupInternal(uint8 Channel);

/**
 * @brief   De-initialize the Lin module.
 * @details This function is used to de-initialize LIN driver.
 *
 */
LIN_TEXT_SECTION void Lin_Deinit(void);

#if (LIN_HAS_SLAVE_NODE == STD_ON)
/**
 * @brief   LIN callback Handle.
 * @details This callback function is used to signal the events to the HLD layer.
 *
 */
LIN_TEXT_SECTION void Lin_Callback_Handle(uint8 u8Channel, Lin_StateStructType *LinStateStruct);
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
/**
 * @brief    This is callback function for Timer Interrupt Handler.
 * @details  Users shall initialize a timer (for example FTU)
 *           and the time period in microseconds will be set by the driver via
 *           LinStartTimerNotification. In timer IRQ handler, call this function.
 *
 */
LIN_TEXT_SECTION void Lin_TimerExpiredService(uint8 u8Channel);
#endif /*(LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)*/

#if (LIN_VERSION_INFO_API == STD_ON)
/**
 * @brief   Returns the version information of this module.
 * @details
 *
 */
LIN_TEXT_SECTION void Lin_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif /* LIN_VERSION_INFO_API == STD_ON */

#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* ADC_H */

/** @} */
