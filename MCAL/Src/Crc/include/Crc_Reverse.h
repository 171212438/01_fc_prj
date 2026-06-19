/**
 *   @file    Crc_Reverse.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crc - Crc Ip driver header file.
 *   @details
 *
 *   @addtogroup CRC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CRC
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
*   0.6.0       18/03/2024    QXW0119       N/A          Add Crc8 hardware and support for FC7240
==================================================================================================*/
#ifndef CRC_REVERSE_H
#define CRC_REVERSE_H

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
 * @brief        The CRC reverse bit/byte width.
 * @details      Parameters are used to control the reverse width.
 * */
#define CRC_REVERSE_BITWIDTH_64 ((uint8)64U)
#define CRC_REVERSE_BITWIDTH_32 ((uint8)32U)
#define CRC_REVERSE_BITWIDTH_16 ((uint8)16U)
#define CRC_REVERSE_BITWIDTH_8  ((uint8)8U)
#define CRC_REVERSE_BIT         ((uint8)0x01)

/**
 * @brief        CRC reverse mode enumeration.
 * @details      Defines the reverse operation mode.
 * */
typedef enum
{
    CRC_REVERSE_MODE_BIT  = 0x01U, /**< Reverse only bits within each byte */
    CRC_REVERSE_MODE_BYTE = 0x02U, /**< Reverse only byte order */
    CRC_REVERSE_MODE_BOTH = 0x03U  /**< Reverse both bits and bytes */
} Crc_ReverseModeType;

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/
#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

/**
 * @brief This function reverse the uint64 data (bit and byte).
 * @param u64Data             - Input data uses to reverse.
 *
 * @return The reverse result: 64 bits
 * */
CRC_TEXT_SECTION uint64 Crc_ReverseUInt64(uint64 u64Data);

/**
 * @brief This function reverse the uint32 data (bit and byte).
 * @param u32Data             - Input data uses to reverse.
 *
 * @return The reverse result: 32 bits
 * */
CRC_TEXT_SECTION uint32 Crc_ReverseUInt32(uint32 u32Data);

/**
 * @brief This function reverse the uint16 data (bit and byte).
 * @param u16Data             - Input data uses to reverse.
 *
 * @return The reverse result: 16 bits
 * */
CRC_TEXT_SECTION uint16 Crc_ReverseUInt16(uint16 u16Data);

/**
 * @brief This function reverse the uint8 data (bit).
 * @param u8Data             - Input data uses to reverse.
 *
 * @return The reverse result: 8 bits
 * */
CRC_TEXT_SECTION uint8 Crc_ReverseUInt8(uint8 u8Data);

/**
 * @brief This function reverse the uint64 data with specified mode.
 * @param u64Data            - Input data uses to reverse.
 * @param eReverseMode       - Reverse mode (BIT/BYTE/BOTH).
 *
 * @return The reverse result: 64 bits
 * */
CRC_TEXT_SECTION uint64 Crc_ReverseUInt64Ex(uint64 u64Data, Crc_ReverseModeType eReverseMode);

/**
 * @brief This function reverse the uint32 data with specified mode.
 * @param u32Data            - Input data uses to reverse.
 * @param eReverseMode       - Reverse mode (BIT/BYTE/BOTH).
 *
 * @return The reverse result: 32 bits
 * */
CRC_TEXT_SECTION uint32 Crc_ReverseUInt32Ex(uint32 u32Data, Crc_ReverseModeType eReverseMode);

/**
 * @brief This function reverse the uint16 data with specified mode.
 * @param u16Data            - Input data uses to reverse.
 * @param eReverseMode       - Reverse mode (BIT/BYTE/BOTH).
 *
 * @return The reverse result: 16 bits
 * */
CRC_TEXT_SECTION uint16 Crc_ReverseUInt16Ex(uint16 u16Data, Crc_ReverseModeType eReverseMode);

/**
 * @brief This function reverse only byte order for uint64 data.
 * @param u64Data            - Input data uses to reverse.
 *
 * @return The reverse result: 64 bits (byte order reversed, bits unchanged)
 * */
CRC_TEXT_SECTION uint64 Crc_ReverseByteUInt64(uint64 u64Data);

/**
 * @brief This function reverse only byte order for uint32 data.
 * @param u32Data            - Input data uses to reverse.
 *
 * @return The reverse result: 32 bits (byte order reversed, bits unchanged)
 * */
CRC_TEXT_SECTION uint32 Crc_ReverseByteUInt32(uint32 u32Data);

/**
 * @brief This function reverse only byte order for uint16 data.
 * @param u16Data            - Input data uses to reverse.
 *
 * @return The reverse result: 16 bits (byte order reversed, bits unchanged)
 * */
CRC_TEXT_SECTION uint16 Crc_ReverseByteUInt16(uint16 u16Data);

#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*CRC_H*/

/** @} */
