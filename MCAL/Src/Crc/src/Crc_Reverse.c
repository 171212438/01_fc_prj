/**
 *   @file    Crc_Reverse.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crc - Crc driver source file.
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
*   0.5.0       05/01/2024    QXW0119       N/A          Optimize_Code
*   0.6.0       18/03/2024    QXW0119       N/A          Add Crc8 hardware and support for FC7240
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Crc_Reverse.h"
#include "Mcal.h"

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

/**
 * @brief This function reverse the uint64 data (bit and byte).
 * @param u64Data             - Input data uses to reverse.
 *
 * @return The reverse result: 64 bits
 * */
CRC_TEXT_SECTION uint64 Crc_ReverseUInt64(uint64 u64Data)
{
    uint8  u8BitIdx;
    uint64 u64Temp = 0;
    for (u8BitIdx = 0; u8BitIdx < CRC_REVERSE_BITWIDTH_64; u8BitIdx++)
    {
        u64Temp |= ((u64Data >> u8BitIdx) & CRC_REVERSE_BIT)
                   << ((CRC_REVERSE_BITWIDTH_64 - 1U) - u8BitIdx);
    }
    return u64Temp;
}

/**
 * @brief This function reverse the uint32 data (bit and byte).
 * @param u32Data             - Input data uses to reverse.
 *
 * @return The reverse result: 32 bits
 * */
CRC_TEXT_SECTION uint32 Crc_ReverseUInt32(uint32 u32Data)
{
    uint8  u8BitIdx;
    uint32 u32Temp = 0;
    for (u8BitIdx = 0; u8BitIdx < CRC_REVERSE_BITWIDTH_32; u8BitIdx++)
    {
        u32Temp |= ((u32Data >> u8BitIdx) & CRC_REVERSE_BIT)
                   << ((CRC_REVERSE_BITWIDTH_32 - 1U) - u8BitIdx);
    }
    return u32Temp;
}

/**
 * @brief This function reverse the uint16 data (bit and byte).
 * @param u16Data             - Input data uses to reverse.
 *
 * @return The reverse result: 16 bits
 * */
CRC_TEXT_SECTION uint16 Crc_ReverseUInt16(uint16 u16Data)
{
    uint8  u8BitIdx;
    uint16 u16Temp = 0;
    for (u8BitIdx = 0; u8BitIdx < CRC_REVERSE_BITWIDTH_16; u8BitIdx++)
    {
        u16Temp |= (uint16)(((u16Data >> u8BitIdx) & CRC_REVERSE_BIT)
                            << ((CRC_REVERSE_BITWIDTH_16 - 1U) - u8BitIdx));
    }
    return u16Temp;
}

/**
 * @brief This function reverse the uint8 data (bit).
 * @param u8Data             - Input data uses to reverse.
 *
 * @return The reverse result: 8 bits
 * */
CRC_TEXT_SECTION uint8 Crc_ReverseUInt8(uint8 u8Data)
{
    uint8 u8BitIdx;
    uint8 u8Temp = 0;
    for (u8BitIdx = 0; u8BitIdx < CRC_REVERSE_BITWIDTH_8; u8BitIdx++)
    {
        u8Temp |= (uint8)(((u8Data >> u8BitIdx) & CRC_REVERSE_BIT)
                          << ((CRC_REVERSE_BITWIDTH_8 - 1U) - u8BitIdx));
    }
    return u8Temp;
}

/**
 * @brief This function reverse only byte order for uint16 data.
 * @param u16Data            - Input data uses to reverse.
 *
 * @return The reverse result: 16 bits (byte order reversed, bits unchanged)
 * @details Example: 0x1234 -> 0x3412
 */
CRC_TEXT_SECTION uint16 Crc_ReverseByteUInt16(uint16 u16Data)
{
    return (uint16)((u16Data >> 8U) | (u16Data << 8U));
}

/**
 * @brief This function reverse only byte order for uint32 data.
 * @param u32Data            - Input data uses to reverse.
 *
 * @return The reverse result: 32 bits (byte order reversed, bits unchanged)
 * @details Example: 0x12345678 -> 0x78563412
 */
CRC_TEXT_SECTION uint32 Crc_ReverseByteUInt32(uint32 u32Data)
{
    /* PRQA S 1339 ++
     * #Misra-C:2012 Rule-17.8 Evaluating address of parameter.
     * Reason: Create local variable to avoid taking address of parameter
     */
    uint32 u32LocalData = u32Data;
    uint8 *pu8Data      = (uint8 *)&u32LocalData;
    return ((uint32)pu8Data[3] << 24U) | ((uint32)pu8Data[2] << 16U) | ((uint32)pu8Data[1] << 8U) |
           ((uint32)pu8Data[0]);
    /* PRQA S 1339 -- */
}

/**
 * @brief This function reverse only byte order for uint64 data.
 * @param u64Data            - Input data uses to reverse.
 *
 * @return The reverse result: 64 bits (byte order reversed, bits unchanged)
 * @details Example: 0x123456789ABCDEF0 -> 0xF0DEBC9A78563412
 */
CRC_TEXT_SECTION uint64 Crc_ReverseByteUInt64(uint64 u64Data)
{
    uint64 u64Temp = u64Data;
    uint8 *pu8Data = (uint8 *)&u64Temp;
    return ((uint64)pu8Data[7] << 56ULL) | ((uint64)pu8Data[6] << 48ULL) |
           ((uint64)pu8Data[5] << 40ULL) | ((uint64)pu8Data[4] << 32ULL) |
           ((uint64)pu8Data[3] << 24ULL) | ((uint64)pu8Data[2] << 16ULL) |
           ((uint64)pu8Data[1] << 8ULL) | ((uint64)pu8Data[0]);
}

/**
 * @brief This function reverse the uint16 data with specified mode.
 * @param u16Data            - Input data uses to reverse.
 * @param eReverseMode       - Reverse mode (BIT/BYTE/BOTH).
 *
 * @return The reverse result: 16 bits
 * */
CRC_TEXT_SECTION uint16 Crc_ReverseUInt16Ex(uint16 u16Data, Crc_ReverseModeType eReverseMode)
{
    uint16 u16Result = u16Data;

    if (CRC_REVERSE_MODE_BYTE == eReverseMode)
    {
        /* Reverse only byte order */
        u16Result = Crc_ReverseByteUInt16(u16Data);
    }
    else if (CRC_REVERSE_MODE_BIT == eReverseMode)
    {
        uint16 u16Temp   = u16Data;
        uint8 *pu8Data   = (uint8 *)&u16Temp;
        uint8 *pu8Result = (uint8 *)&u16Result;
        pu8Result[0]     = Crc_ReverseUInt8(pu8Data[0]);
        pu8Result[1]     = Crc_ReverseUInt8(pu8Data[1]);
    }
    else if (CRC_REVERSE_MODE_BOTH == eReverseMode)
    {
        /* Reverse both bits and bytes (same as original function) */
        u16Result = Crc_ReverseUInt16(u16Data);
    }
    else
    {
        /* Invalid mode, return original data */
        u16Result = u16Data;
    }

    return u16Result;
}

/**
 * @brief This function reverse the uint32 data with specified mode.
 * @param u32Data            - Input data uses to reverse.
 * @param eReverseMode       - Reverse mode (BIT/BYTE/BOTH).
 *
 * @return The reverse result: 32 bits
 * */
CRC_TEXT_SECTION uint32 Crc_ReverseUInt32Ex(uint32 u32Data, Crc_ReverseModeType eReverseMode)
{
    uint32 u32Result = u32Data;
    uint8  u8ByteIdx;

    if (CRC_REVERSE_MODE_BYTE == eReverseMode)
    {
        /* Reverse only byte order */
        u32Result = Crc_ReverseByteUInt32(u32Data);
    }
    else if (CRC_REVERSE_MODE_BIT == eReverseMode)
    {
        uint32 u32Temp   = u32Data;
        uint8 *pu8Data   = (uint8 *)&u32Temp;
        uint8 *pu8Result = (uint8 *)&u32Result;
        for (u8ByteIdx = 0; u8ByteIdx < 4U; u8ByteIdx++)
        {
            pu8Result[u8ByteIdx] = Crc_ReverseUInt8(pu8Data[u8ByteIdx]);
        }
    }
    else if (CRC_REVERSE_MODE_BOTH == eReverseMode)
    {
        /* Reverse both bits and bytes (same as original function) */
        u32Result = Crc_ReverseUInt32(u32Data);
    }
    else
    {
        /* Invalid mode, return original data */
        u32Result = u32Data;
    }

    return u32Result;
}

/**
 * @brief This function reverse the uint64 data with specified mode.
 * @param u64Data            - Input data uses to reverse.
 * @param eReverseMode       - Reverse mode (BIT/BYTE/BOTH).
 *
 * @return The reverse result: 64 bits
 * */
CRC_TEXT_SECTION uint64 Crc_ReverseUInt64Ex(uint64 u64Data, Crc_ReverseModeType eReverseMode)
{
    uint64 u64Result = u64Data;
    uint8  u8ByteIdx;

    if (CRC_REVERSE_MODE_BYTE == eReverseMode)
    {
        /* Reverse only byte order */
        u64Result = Crc_ReverseByteUInt64(u64Data);
    }
    else if (CRC_REVERSE_MODE_BIT == eReverseMode)
    {
        uint64 u64Temp   = u64Data;
        uint8 *pu8Data   = (uint8 *)&u64Temp;
        uint8 *pu8Result = (uint8 *)&u64Result;
        for (u8ByteIdx = 0; u8ByteIdx < 8U; u8ByteIdx++)
        {
            pu8Result[u8ByteIdx] = Crc_ReverseUInt8(pu8Data[u8ByteIdx]);
        }
    }
    else if (CRC_REVERSE_MODE_BOTH == eReverseMode)
    {
        /* Reverse both bits and bytes (same as original function) */
        u64Result = Crc_ReverseUInt64(u64Data);
    }
    else
    {
        /* Invalid mode, return original data */
        u64Result = u64Data;
    }

    return u64Result;
}

#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
