/**
*   @file    LLD_Ospi.h
*   @version 1.5.1
* 
*   @brief   AUTOSAR Ospi - OSPI LLD header file.
*   @details OSPI peripheral LLD header file.
* 
*   @addtogroup OSPI
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : OSPI
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
*   ---------   ----------    -----------   ----------   ---------------
*   0.1.0       14/09/2023    QXW0122       N/A          OSPI Initial Version
==================================================================================================*/

/* PRQA S 0777,0779 EOF #Misra-C:2012 Rule-5.1 External identifiers shall be distinct.
 * REASON: These identifiers are long to better describe the functionality of function.
 */

#ifndef LLD_OSPI_H
#define LLD_OSPI_H

#if defined(__cplusplus)
extern "C" {
#endif

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                            ENUMS
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
#define OSPI_START_SEC_CODE
#include "Ospi_MemMap.h"

/**
* @brief   This function is called by Transfer error interrupt.
*/
OSPI_TEXT_SECTION void Ospi_LLD_IsrTransferError(void);

/**
* @brief   This function is called by Transfer complete interrupt.
*/
OSPI_TEXT_SECTION void Ospi_LLD_IsrTransferComplete(void);

/**
* @brief Initialize OSPI configuration
*
*/
OSPI_TEXT_SECTION void OSPI_LLD_Init(void);

/**
* @brief De-initialize the OSPI 
*
*/
OSPI_TEXT_SECTION void OSPI_LLD_Deinit(void);

/**
* @brief   Low-level get status of OSPI.
*
*/
OSPI_TEXT_SECTION Ospi_StatusType OSPI_LLD_GetStatus(void);

/**
* @brief OSPI Config Flash Parameter
*
*/
OSPI_TEXT_SECTION void OSPI_LLD_SetFlashAddress(uint32 FlashAddress);

/**
* @brief OSPI Config LUT
*
* @param index index to be written
* @param cmd Command sequence array
* @param count Number of sequences
*
*/
OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_UpdateLUT(uint32 index, const uint32 *cmd, uint32 count);

/**
* @brief OSPI write sequence data.
*
* @param u8SeqId the cmd id location in lut.
* @param pBuf the write buffer start address.
* @param u8Size data size to be written.
* @return Std_ReturnType
*/
OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_HyperBusSyncCommandWrite(uint8 u8SeqId, const uint32 *pBuf, uint32 u32Size);

/**
* @brief OSPI read sequence data.
*
* @param u8SeqId the cmd id location in lut.
* @param pBuf the read buffer start address.
* @param u32Size data size to be read.
* @return Std_ReturnType
*/
OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_HyperBusSyncCommandRead(uint8 u8SeqId, uint32 *pBuf, uint32 u32Size);

#if(OSPI_DMA_HANDLING_ALLOWED == STD_ON)

OSPI_TEXT_SECTION void Ospi_LLD_DmaInit(const uint32 *writeBuf, uint32 *readBuf, uint16 testsize);

OSPI_TEXT_SECTION void Ospi_LLD_EnableTxDma(void);

OSPI_TEXT_SECTION void Ospi_LLD_EnableRxDma(void);

OSPI_TEXT_SECTION void Ospi_LLD_DisableTxDma(void);

OSPI_TEXT_SECTION void Ospi_LLD_DisableRxDma(void);

OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_HyperBusAsyncCommandDmaRead(uint8 u8SeqId, uint32 u32dataSize);

OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_HyperBusAsyncCommandDmaWrite(uint8 u8SeqId, uint32 u32dataSize);

OSPI_TEXT_SECTION Std_ReturnType Ospi_LLD_SetTxFifoWatermark(void);

OSPI_TEXT_SECTION Std_ReturnType Ospi_LLD_SetRxFifoWatermark(void);

OSPI_TEXT_SECTION void OSPI_LLD_DMA_IRQnHandler(void);

#endif

#define OSPI_STOP_SEC_CODE
#include "Ospi_MemMap.h"

#if defined(__cplusplus)
}
#endif

#endif /* LLD_OSPI_H */

