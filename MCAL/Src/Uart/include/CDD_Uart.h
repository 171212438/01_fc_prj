/**
*   @file    CDD_Uart.h
*   @version 1.5.1

*   @brief   AUTOSAR UART - driver API and development errors implemention.
*   @details This file contains the UART driver API and development errors implemention.
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
#ifndef UART_H
#define UART_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Uart_Types.h"
#include "Uart_Version.h"
#include "CDD_Uart_Cfg.h"
#include "Mcal.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define UART_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"

#if STD_OFF == UART_PRECOMPILE_SUPPORT
UART_CONFIG_EXT
#endif

#define UART_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Uart_MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define UART_START_SEC_CODE
#include "Uart_MemMap.h"

/**
 * @brief   Initializes the UART module.
 * @details This function performs software initialization of UART
 *          driver. It shall configure the Uart hardware peripheral for each channel.
 *
 * @param[in] Config - Pointer to UART driver configuration set.
 *
 * @return  void
 *
 *
 *
 **/
UART_TEXT_SECTION void Uart_Init(const Uart_ConfigType *Config);

/**
 * @brief   De-initializes the UART module.
 * @details This function performs software de-initialization of UART
 *          driver.
 *
 * @param   -
 *
 * @return  void
 *
 *
 *
 **/
UART_TEXT_SECTION void Uart_Deinit(void);

/**
 * @brief   Configures the baud rate for the serial communication.
 * @details This function performs the setting of the communication baudrate provided in the parameter.
 *
 * @param[in] Channel - Uart channel to be addressed.
 * @param[in] Baudrate - Baudrate value to be set.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the Uart Channel is not valid or
 *                          Uart driver is not initialized or
 *                          a transfer is on-going or
 *                          wrong core is addressed.
 *
 * @retval E_OK             Successfull baudrate configuration.
 *
 *
 * @pre    Uart_Init function must be called before this API.
 *
 *
 **/
UART_TEXT_SECTION Std_ReturnType Uart_SetBaudrate(uint8 Channel,
                                                  Uart_BaudrateType Baudrate);

/**
 * @brief   Retrieves the baud rate which is currently set for the serial communication.
 * @details This function returns via the second parameter the current serial baudrate.
 *
 * @param[in]  Channel - Uart channel to be addressed.
 * @param[out] Baudrate - Pointer to a memory location where the baudrate value is returned.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the Uart Channel is not valid or
 *                          Uart driver is not initialized or
 *                          a transfer is on-going or
 *                          wrong core is addressed or
 *                          a NULL_PTR pointer has been provided
 *
 * @retval E_OK             Successfull baudrate retrieval.
 *
 *
 * @pre    Uart_Init function must be called before this API.
 *
 *
 **/
UART_TEXT_SECTION Std_ReturnType Uart_GetBaudrate(uint8 Channel,
                                                  uint32 *Baudrate);

/**
 * @brief   Configures a new buffer for continuous transfers.
 * @details This function can be called inside a notification callback and
 *          offers the possibility to change the buffer in order to assure a
 *          continuous asynchronous transfer.
 *
 * @param[in] Channel -    Uart channel to be addressed.
 * @param[in] DataBuffer - The new buffer provided.
 * @param[in] DataSize -   The size of the new buffer.
 * @param[in] TransType -  This parameter indicates for which type of transmission is the buffer set.
 *
 * @return                  void.
 *
 *
 * @pre    Uart_Init function must be called before this API.
 *
 *
 **/
UART_TEXT_SECTION void Uart_SetTransBuffer(uint8 Channel,
                                           uint8 *DataBuffer,
                                           uint32 DataSize,
                                           Uart_DirectionType TransType);

/**
* @brief   Starts a synchronous transfer of bytes.
* @details This function starts sending a number of bytes in a synchronous manner.
*
* @param[in] Channel -    Uart channel to be addressed.
* @param[in] DataBuffer - The buffer which contains the bytes to be sent.
* @param[in] DataSize -   The Buffer size.
* @param[in] Timeout -    Number of timeout cycles.

* @return                  Std_ReturnType.
* @retval E_NOT_OK         If the Uart Channel is not valid or
*                          Uart driver is not initialized or
*                          Buffer is a NULL_PTR or
*                          BufferSize is 0, meaning no space has been allocated for the buffer or
*                          a wrong core has been accessed or
*                          a transfer is already on going on the requested channel or
*                          timeout occured.
*
* @retval E_OK             Successful transfer.
*
*
* @pre    Uart_Init function must be called before this API.
*
*
**/
UART_TEXT_SECTION Std_ReturnType Uart_SyncSend(uint8 Channel,
                                               const uint8 *DataBuffer,
                                               uint32 DataSize,
                                               uint32 Timeout);

/**
 * @brief   Starts a synchronous reception of bytes.
 * @details This function starts receiving a number of bytes in a synchronous manner.
 *
 * @param[in] Channel - Uart channel to be addressed.
 * @param[in] DataBuffer - The buffer where the bytes will be located.
 * @param[in] DataSize - The Buffer size.
 * @param[in] Timeout - Number of timeout cycles.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the Uart Channel is not valid or
 *                          Uart driver is not initialized or
 *                          Buffer is a NULL_PTR or
 *                          BufferSize is 0, meaning no space has been allocated for the buffer or
 *                          a wrong core has been accessed or
 *                          a reception is already on going on the requested channel or
 *                          timeout occured.
 *
 * @retval E_OK             Successful reception.
 *
 *
 * @pre    Uart_Init function must be called before this API.
 *
 *
 **/
UART_TEXT_SECTION Std_ReturnType Uart_SyncReceive(uint8 Channel,
                                                  uint8 *DataBuffer,
                                                  uint32 DataSize,
                                                  uint32 Timeout);

/**
 * @brief   Aborts an on-going transfer.
 * @details This function aborts either a reception or a transmission depending on the last parameter.
 *
 * @param[in] Channel - Uart channel to be addressed.
 * @param[in] TransType - Type of the transfer to be aborted. It can be either UART_SEND or UART_RECEIVE.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the Uart Channel is not valid or
 *                          Uart driver is not initialized or
 *                          a wrong core has been accessed.
 *
 * @retval E_OK             Successful transfer aborted or in case no transfer was on going.
 *
 *
 * @pre    Uart_Init function must be called before this API.
 *
 *
 **/
UART_TEXT_SECTION Std_ReturnType Uart_AbortTransfer(uint8 Channel,
                                                    Uart_DirectionType TransType);

/**
 * @brief   Starts an asynchronous transfer(send) of bytes.
 * @details This function starts sending a number of bytes in an asynchronous manner. The transfer can be performed using
 *          either DMA or interrupts depending on the transfer type configured on the addressed channel.
 *
 * @param[in] Channel - Uart channel to be addressed.
 * @param[in] DataBuffer - The buffer where the data to be sent is located.
 * @param[in] DataSize - The Buffer size.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the Uart Channel is not valid or
 *                          Uart driver is not initialized or
 *                          Buffer is a NULL_PTR or
 *                          BufferSize is 0, meaning no space has been allocated for the buffer or
 *                          a wrong core has been accessed or
 *                          a transfer(send) is already on going on the requested channel.
 *
 * @retval E_OK             The transfer(send) started successfully.
 *
 *
 * @pre    Uart_Init function must be called before this API.
 *
 *
 **/
UART_TEXT_SECTION Std_ReturnType Uart_AsyncSend(uint8 Channel,
                                                const uint8 *DataBuffer,
                                                uint32 DataSize);

/**
 * @brief   Starts an asynchronous transfer(receive) of bytes.
 * @details This function starts receiving a number of bytes in an asynchronous manner. The transfer can be performed using
 *          either DMA or interrupts depending on the transfer type configured on the addressed channel.
 *
 * @param[in] Channel - Uart channel to be addressed.
 *
 * @return                  Std_ReturnType.
 * @retval E_NOT_OK         If the Uart Channel is not valid or
 *                          Uart driver is not initialized or
 *                          Buffer is a NULL_PTR or
 *                          BufferSize is 0, meaning no space has been allocated for the buffer or
 *                          a wrong core has been accessed or
 *                          a transfer(receive) is already on going on the requested channel.
 *
 * @retval E_OK             The transfer(receive) started successfully.
 *
 *
 * @pre    Uart_Init function must be called before this API.
 *
 *
 **/
UART_TEXT_SECTION Std_ReturnType Uart_AsyncReceive(uint8 Channel);

/**
 * @brief   Returns the status of the previous transfer.
 * @details This function returns the status of the previous transfer.
 *          If there is a transfer in progress, this function will also get the number of remaining bytes at the time the function was called.
 * @param[in]  Channel - Uart channel to be addressed.
 * @param[out] RemainingBytesPointer - A pointer where the number of remaining bytes will be written.
 * @param[in]  TransType - The type of trasfer in discussion (UART_SEND or UART_RECEIVE).
 *
 * @return  Uart_StatusType.
 * @retval  UART_STATUS_SUCCESS  - Operation has ended successfully.
 * @retval  UART_STATUS_FRAMING_ERROR  - Operation has had a framing error. This status is returned only if the TransferType parameter is RECEIVE.
 * @retval  UART_STATUS_RX_OVERRUN_ERROR  - Operation has had an overrun error. This status is returned only if the TransferType parameter is RECEIVE.
 * @retval  UART_STATUS_PARITY_ERROR - Operation has had a parity error. This status is returned only if the TransferType parameter is RECEIVE.
 * @retval  UART_STATUS_BUSY - Operation has not finished at the moment of function call.
 * @retval  UART_STATUS_ABORTED - Operation has been aborted.
 * @retval  UART_STATUS_TIMEOUT - Operation has had timeout error in transfer functions.
 *
 *
 * @pre    Uart_Init function must be called before this API.
 *
 *
 **/
UART_TEXT_SECTION Uart_StatusType Uart_GetStatus(uint8 Channel,
                                                 uint32 *RemainingBytesPointer,
                                                 Uart_DirectionType TransType);

#if (UART_VERSION_INFO_API == STD_ON)
/**
 * @brief   Returns the version information of this module.
 * @details The version information includes:
 *
 *          - Two bytes for the Vendor ID
 *          - Two bytes for the Module ID
 *          - One byte  for the Instance ID
 *          - Three bytes version number. The numbering shall be vendor
 *            specific: it consists of:
 *
 *             - The major, the minor and the patch version number of
 *               the module;
 *             - The AUTOSAR specification version number shall not
 *               be included. The AUTOSAR specification version number is
 *               checked during compile time and therefore not required
 *               in this API.
 *
 * @param[in,out] VersionInfo   Pointer for storing the version information
 *                              of this module.
 *
 * @return void.
 *
 **/
UART_TEXT_SECTION void Uart_GetVersionInfo(Std_VersionInfoType *VersionInfo);
#endif /* (UART_VERSION_INFO_API == STD_ON) */

#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* UART_H */
