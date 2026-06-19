/**
*   @file    Lin_FCUart.h
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
#ifndef _LIN_FCUART_H_
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * REASON: It is common definition in h files */
#define _LIN_FCUART_H_
/* PRQA S 603, 602 -- */
#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Lin.h"
#include "Lin_Cfg.h"
#include "Lin_version.h"
#ifdef LIN_DMA_SUPPORTED
#include "CDD_Dma.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
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
* @brief   Maximum Length of Data.
*/
#define FCUART_MAX_DATA_LENGTH_U8                  ((uint8)LIN_MAX_DATA_LENGTH)
/**
* @brief   Maximum Length of Buffer (Sync(1), Pid(1), Data bytes and Checksum(1)).
*/
#define FCUART_MAX_BUFFER_LENGTH_U8                ((uint8)LIN_MAX_DATA_LENGTH+(uint8)3U)

/**
* @brief   Master Request Diagnostic Frame ID 0x3C.
*/
#define MASTER_REQ_DIAGNOSTIC_ID_U8     ((uint8)0x3CU)

/**
* @brief   Slave Response Diagnostic Frame ID 0x3D.
*/
#define SLAVE_RSP_DIAGNOSTIC_ID_U8     ((uint8)0x3DU)

/**
* @brief   Master Request Diagnostic Frame PID 0x3C.
*/
#define MASTER_REQ_DIAGNOSTIC_PID_U8    ((uint8)0x3CU)

/**
* @brief   Slave Response Diagnostic Frame PID 0x7D.
*/
#define SLAVE_RSP_DIAGNOSTIC_PID_U8     ((uint8)0x7DU)

/**
* @brief   Synch byte value.
*/
#define SYNC_BYTE_U8                    ((uint8)0x55U)

/**
* @brief   The position of Synch byte in Lin_FCUart_BufferPtr buffer.
*/
#define SYNC_BYTE_OFFSET_U8             ((uint8)0U)

/**
* @brief   The position of PID byte in Lin_FCUart_BufferPtr buffer.
*/
#define PID_BYTE_OFFSET_U8              ((uint8)1U)

/**
* @brief   The position of PID byte in Lin_FCUart_BufferPtr buffer.
*/
#define FRAME_ID_MASK_U32               ((uint32)0x3FU)

/**
* @brief   The position of PID byte in Lin_FCUart_BufferPtr buffer.
*/
#define DATA_OFFSET_U8                  ((uint8)2U)

/**
* @brief   Sleep command length frame.
*/
#define DATA_LENGTH_8_U32               ((uint32)8U)

/**
* @brief   Catastrophic Errors Recovery (CER) Codes returned by the Lin driver.
*
* @details   Unexpected frame status CER code.
*
*/
#define CER_UNEXPECTED_FRAME_STATUS_INTERRUPT_U8 ((uint8)0x01U)

/**
* @brief   Catastrophic Errors Recovery (CER) Codes returned by the LIN driver.
*
* @details   Unexpected frame error status CER code.
*
*/
#define CER_UNEXPECTED_FRAME_ERROR_STATUS_INTERRUPT_U8 ((uint8)0x02U)

/**
* @brief   Minimum length in us of wakeup pulse.
*/
#define MIN_WAKEUP_PULSE_LENGTH_U32   ((uint32)250U)

/**
* @brief   Lin bit length in us.
*/
#define BIT_LENGTH32(baudrate)       (((uint32)(1000000U))/((uint32)(baudrate)))

/**
* @brief   Get bit B from byte A .
*/
#define GETBIT_U8(A,B)   ((uint8)(((A)>>(B)) & (uint8)0x01U))

/**
* @brief   Instance used .
*/
#define ISTANCE_USED    (LIN_INSTANCE_CONFIG)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"

/**
* @brief   Initialize a Lin channel.
* @details This function initializes hardware channel through HaedWareAbsract(HWA).
*
*/
LIN_TEXT_SECTION void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_ConfigType *pConfig);

/**
* @brief   Check if a LIN channel has been waked-up.
* @details This function identifies if the addressed LIN channel
*          has been woken up by the LIN bus transceiver. It checks
*          the wake up flag from the addressed LIN channel which
*          must be in sleep mode and have the wake up signal.
**/
LIN_TEXT_SECTION Std_ReturnType Lin_LL_CheckWakeup(uint8 Channel);

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief   Gets the status of the LIN driver when Channel is operating.
 * @details This function returns the state of the current
 *          transmission, reception or operation status.
 *          If the reception of a Slave response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *
 */
LIN_TEXT_SECTION Lin_StatusType Lin_LL_GetStatus(const uint8 u8Channel, uint8 *pu8LinSdu);

/**
* @brief   Prepares and send a go-to-sleep-command frame on Channel.
* @details This function stops any ongoing transmission and initiates
*          the transmission of the sleep command (master command frame with
*          ID = 0x3C and data = (0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF).
*
*/
LIN_TEXT_SECTION Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module);

/**
* @brief   Sends the header part of the Lin frame.
* @details Initiates the transmission of the header
*          part of the Lin frame on Channel using information
*          stored on PduInfoPtr pointer.
*          If response type is MASTER_RESPONSE then nothing is sent over the bus
*          the entire frame (including header) is sent with the Lin_LL_SendResponse
*
*/
LIN_TEXT_SECTION Std_ReturnType Lin_LL_SendHeader(uint8 u8Channel, uint8 u8Module, const Lin_PduType *pPduInfoPtr);

/**
* @brief   Sends the response part of the Lin frame.
* @details Initiates the transmission of the data
*          part of the Lin frame on Channel using information
*          stored on PduInfoPtr pointer.
*
*/
LIN_TEXT_SECTION void Lin_LL_SendResponse(uint8 u8Channel, uint8 u8Module, const Lin_PduType *pPduInfoPtr);
#endif  /* (LIN_MASTER_NODE_USED == STD_ON) */

/**
* @brief   Same function as Lin_LLD_GoToSleep() but
*          without sending a go-to-sleep-command on the bus.
* @details This function stops any ongoing transmission and put the
*          Channel in sleep mode (then Lin hardware enters a
*          reduced power operation mode).
*
*/
LIN_TEXT_SECTION Std_ReturnType Lin_LL_GoToSleepInternal(uint8 u8Channel, uint8 u8Module);

/**
* @brief   Sends a wake up signal to the Lin bus.
* @details This function shall sent a wake up signal to the LIN bus
*          and put the Lin channel in LIN_CH_OPERATIONAL state.
** @param[in]   u8Channel Lin channel to be addressed.
**
*/
LIN_TEXT_SECTION void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module);

/**
* @brief   Wake up the Lin channel.
* @details This function shall put the Lin channel in LIN_CH_OPERATIONAL state without
*          sending a wake up signal to the Lin bus
*
*/
LIN_TEXT_SECTION void Lin_LL_WakeupInternal(uint8 u8Channel, uint8 u8Module);

/**
* @brief   Interrupt handler for TX and RX on FCUART.
* @details This function shall manage all the RX and TX ISRs on the
*          addressed channel.
*
*/
LIN_TEXT_SECTION void Lin_LL_TxRxInterruptHandler(const uint8 u8Module);

/**
* @brief   Interrupt handler for Error on UART.
* @details This function shall manage all the Error ISRs on the
*          addressed channel.
*
*/
LIN_TEXT_SECTION void Lin_LL_ErrorInterruptHandler(const uint8 u8Module);

/**
* @brief   Copy the data received from the FCUART data registers to pu8LinSdu.
* @details This function shall copy the received data in the provided buffer
*          addressed by the pu8LinSdu pointer parameter.
*
*/
LIN_TEXT_SECTION void Lin_HW_CopyData(const uint8 u8Channel, uint8 *pu8LinSdu);

#if(LIN_HAS_SLAVE_NODE == STD_ON)
/**
* @brief   Process the data part of the Lin frame(From slave node).
* @details Initiates the transmission of the data
*          part of the Lin frame on Channel using information
*          stored on PduInfoPtr pointer.
*
*/
LIN_TEXT_SECTION void Lin_LL_SlaveProcessData(uint8 u8Channel, uint8 u8Module, const Lin_PduType *pPduInfoPtr);

/**
* @brief   LIN notifies to lin interface slave error.
* @details This callback function is used for notifing to LinIf about slave error.
*
*/
LIN_TEXT_SECTION void Lin_LL_SlaveReportError(uint8 u8Channel, Lin_StateStructType *LinStateStruct);
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/

/**
* @brief   De-initialize a Lin channel.
* @details This function de-initializes hardware channel.
*
*/
LIN_TEXT_SECTION void Lin_LL_Deinit(uint8 u8Module);

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
/**
* @brief    This is callback function for Timer Interrupt Handler.
* @details  Users shall initialize a timer (for example FTU)
*           and the time period in microseconds will be set by the driver via LinStartTimerNotification.
*
*/
LIN_TEXT_SECTION void Lin_LL_TimerExpiredService(uint8 u8Channel);
#endif /*(LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)*/

#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"

#ifdef __cplusplus
}
#endif
#endif /* _LIN_FCUART_H_ */

/** @} */
