/**
*   @file    LLD_Uart.h
*   @version 1.5.1

 *   @brief   AUTOSAR UART - Isolation level file for UART driver.
 *   @details Implementation file for function defin ition on isolation level between high and low level driver.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
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
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to variable length reception
==================================================================================================*/

#ifndef LLD_UART_H
#define LLD_UART_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Uart_Types.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define UART_START_SEC_CODE
#include "Uart_MemMap.h"
/**
 * @brief Initializes an UART operation HwUnit.
 *
 * The caller provides memory for the driver state structures during initialization.
 * The user must select the UART clock source in the application to initialize the UART.
 *
 * @param HwUnit  UART HwUnit number
 * @param UserConfig user configuration structure of type #Uart_UserConfigType
 * @return void
 */
UART_TEXT_SECTION void Uart_LLD_Init(const uint8 HwUnit,
                                     const Uart_UserConfigType *UserConfig);

/**
 * @brief Shuts down the UART by disabling interrupts and transmitter/receiver.
 *
 * @param HwUnit  UART HwUnit number
 * @return  UART_STATUS_SUCCESS if successful;
 *          UART_STATUS_ERROR if the progress has not fully completed;
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_Deinit(const uint8 HwUnit);

/**
 * @brief Send out multiple bytes of data using polling method.
 *
 * @param   HwUnit  UART HwUnit number.
 * @param   TxDataBuff The buffer pointer which saves the data to be sent.
 * @param   TxDataSize Size of data to be sent in unit of byte.
 * @param   Timeout The number of timeout cycles per frame of data transmission.
 * @return  UART_STATUS_SUCCESS if successful;
 *          UART_STATUS_BUSY if the resource is busy;
 *          UART_STATUS_TIMEOUT if timeout occur
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_SyncSend(const uint8 HwUnit,
                                                    const uint8 *TxDataBuff,
                                                    const uint32 TxDataSize,
                                                    const uint32 Timeout);

/**
 * @brief Sends data out through the UART module using a non-blocking method.
 *  This enables an a-sync method for transmitting data. When used with
 *  a non-blocking receive, the UART can perform a full duplex operation.
 *  Non-blocking  means that the function returns immediately.
 *  The application has to get the transmit status to know when the transmit is complete.
 *
 * @param   HwUnit  UART HwUnit number.
 * @param   TxDataBuff The buffer pointer which saves the data to be sent.
 * @param   TxDataSize Size of data to be sent in unit of byte.
 * @return  UART_STATUS_SUCCESS if successful;
 *          UART_STATUS_BUSY if the resource is busy;
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_AsyncSend(const uint8 HwUnit,
                                                     const uint8 *TxDataBuff,
                                                     const uint32 TxDataSize);

/**
 * @brief Returns whether the previous transmit is complete.
 *
 * @param HwUnit  UART HwUnit number
 * @param BytesRemaining Pointer to value that is populated with the number of bytes that
 *        have been sent in the active transfer
 *        @note In DMA mode, this parameter may not be accurate, in case the transfer completes
 *              right after calling this function; in this edge-case, the parameter will reflect
 *              the initial transfer size, due to automatic reloading of the major loop count
 *              in the DMA transfer descriptor.
 * @return The transmit status.
 * @retval UART_STATUS_SUCCESS The transmit has completed successfully.
 * @retval UART_STATUS_BUSY The transmit is still in progress.
 * @retval UART_STATUS_ABORTED The transmit was aborted.
 * @retval UART_STATUS_TIMEOUT A timeout was reached.
 * @retval UART_STATUS_ERROR An error occurred.
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_GetTransmitStatus(const uint8 HwUnit, 
                                                             uint32 * BytesRemaining);

/**
 * @brief Terminates a non-blocking transmission early.
 *
 * @param HwUnit  UART HwUnit number
 * @return UART_STATUS_ERROR if the transmit process has not fully completed,
 *         UART_STATUS_SUCCESS if the transmit process has successfully completed
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_AbortSendingData(const uint8 HwUnit);

/**
 * @brief Receive multiple bytes of data using polling method.
 *
 *
 * @param   HwUnit  UART HwUnit number.
 * @param   RxDataBuff The buffer pointer which saves the data to be received.
 * @param   RxDataSize Size of data need to be received in unit of byte.
 * @param   Timeout The number of timeout cycles per frame of data reception.
 * @return  UART_STATUS_SUCCESS if the transaction is successful;
 *          UART_STATUS_BUSY if the resource is busy;
 *          UART_STATUS_RX_OVERRUN if an overrun error occured
 *          UART_STATUS_FRAMING_ERROR if a framing error occured
 *          UART_STATUS_PARITY_ERROR if a parity error occured
 *          UART_STATUS_NOISE_ERROR if a noise error occured
 *          UART_STATUS_TIMEOUT if timeout occur
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_SyncReceive(const uint8 HwUnit,
                                                       uint8 *RxDataBuff,
                                                       const uint32 RxDataSize,
                                                       const uint32 Timeout);

/**
 * @brief Gets data from the UART module by using a non-blocking method.
 *  This enables an a-sync method for receiving data. When used with
 *  a non-blocking transmission, the UART can perform a full duplex operation.
 *  Non-blocking means that the function returns immediately.
 *  The application has to get the receive status to know when the receive is complete.
 *
 * @param HwUnit  UART HwUnit number
 * @param RxDataBuff  buffer containing 8-bit read data chars received
 * @param RxDataSize  the number of bytes to receive
 * @return UART_STATUS_SUCCESS if successful;
 *         UART_STATUS_BUSY if the resource is busy
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_AsyncReceive(const uint8 HwUnit);

/**
 * @brief Returns whether the previous receive is complete.
 *
 * @param HwUnit  UART HwUnit number
 * @param BytesRemaining pointer to value that is filled  with the number of bytes that
 *        still need to be received in the active transfer.
 *        @note In DMA mode, this parameter may not be accurate, in case the transfer completes
 *              right after calling this function; in this edge-case, the parameter will reflect
 *              the initial transfer size, due to automatic reloading of the major loop count
 *              in the DMA transfer descriptor.
 * @return The receive status.
 * @retval UART_STATUS_SUCCESS the receive has completed successfully.
 * @retval UART_STATUS_BUSY the receive is still in progress.
 * @retval UART_STATUS_ABORTED The receive was aborted.
 * @retval UART_STATUS_TIMEOUT A timeout was reached.
 * @retval UART_STATUS_RX_OVERRUN, UART_STATUS_FRAMING_ERROR, UART_STATUS_PARITY_ERROR,
            or UART_STATUS_NOISE_ERROR, UART_STATUS_ERROR An error occurred during reception.
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_GetReceiveStatus(const uint8 HwUnit, 
                                                            uint32 * BytesRemaining);

/**
 * @brief Terminates a non-blocking receive early.
 *
 * @param HwUnit  UART HwUnit number
 *
 * @return UART_STATUS_ERROR if the receive process has not fully completed,
 *         UART_STATUS_SUCCESS if the receive process has successfully completed
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_AbortReceivingData(const uint8 HwUnit);

/**
 * @brief Configures the UART baud rate.
 *
 * This function configures the UART baud rate.
 * In some UART HwUnits the user must disable the transmitter/receiver
 * before calling this function.
 * Generally, this may be applied to all UARTs to ensure safe operation.
 *
 * @param HwUnit  UART HwUnit number.
 * @param DesiredBaudrate UART desired baud rate.
 * @param ClockFrequency Clock Frequency of UART HwUnit.
 * @return UART_STATUS_BUSY if called during an on-going transfer, UART_STATUS_SUCCESS otherwise
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_SetBaudRate(const uint8 HwUnit,
                                                       const Uart_BaudrateType DesiredBaudrate,
                                                       const uint32 ClockFrequency);

/**
 * @brief Returns the UART baud rate.
 *
 * This function returns the UART configured baud rate.
 *
 * @param HwUnit  UART HwUnit number.
 * @param[out] ConfiguredBaudRate UART configured baud rate.
 */
UART_TEXT_SECTION void Uart_LLD_GetBaudRate(const uint8 HwUnit, 
                                            uint32 * ConfiguredBaudRate);

/**
 * @brief Sets the internal driver reference to the tx buffer.
 *
 * This function can be called from the tx callback to provide the driver
 * with a new buffer, for continuous transmission.
 *
 * @param HwUnit  UART HwUnit number
 * @param TxDataBuff  source buffer containing 8-bit data chars to send
 * @param TxDataSize  the number of bytes to send
 * @return void
 */
UART_TEXT_SECTION void Uart_LLD_SetTxBuffer(const uint8 HwUnit,
                                            const uint8 * TxDataBuff,
                                            const uint32 TxDataSize);

/**
 * @brief Sets the internal driver reference to the rx buffer.
 *
 * This function can be called from the rx callback to provide the driver
 * with a new buffer, for continuous reception.
 *
 * @param HwUnit    UART HwUnit number
 * @param RxDataBuff  destination buffer containing 8-bit data chars to receive
 * @param RxDataSize  the number of bytes to receive
 * @return void
 */
UART_TEXT_SECTION void Uart_LLD_SetRxBuffer(const uint8 HwUnit,
                                            uint8 * RxDataBuff,
                                            const uint32 RxDataSize);

/**
 * @brief Interrupt handler for FCUART.
 *
 * @param HwUnit
 *
 * @return  void
 */
UART_TEXT_SECTION void Uart_LLD_IrqHandler(const uint8 HwUnit);

#if (UART_HAS_DMA_ENABLED == STD_ON)
/**
 * @internal
 * @brief   : Finish up a transmit by completing the process of sending
 * data and disabling the DMA requests. This is a part of callback for DMA major loop
 * completion, so it must match the DMA callback signature.
 * @param HwUnit Uart HwUnit number
 * @return void
 */
UART_TEXT_SECTION void Uart_LLD_CompleteSendUsingDma(uint8 HwUnit);

/**
 * @internal
 * @brief   : Finish up a receive by completing the process of receiving data
 * and disabling the DMA requests. This is a part of callback for DMA major loop
 * completion, so it must match the DMA callback signature.
 * @param HwUnit Uart HwUnit number
 * @return void
 */
UART_TEXT_SECTION void Uart_LLD_CompleteReceiveUsingDma(uint8 HwUnit);


UART_TEXT_SECTION void Uart_LLD_CompleteSendUsingDma_CheckSend(uint8 HwUnit);
#endif

#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"

#if defined(__cplusplus)
}
#endif

/** @}*/

#endif /* UART_H */
