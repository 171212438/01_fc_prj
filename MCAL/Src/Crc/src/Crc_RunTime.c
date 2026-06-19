/**
 *   @file    Crc_RunTime.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crc - Crc Software driver source file.
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
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.4.0       15/12/2023    QXW0119       N/A          Crc Initial Version
*   0.6.0       18/03/2024    QXW0119       N/A          Add Crc8 hardware and support for FC7240
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Crc_RunTime.h"
#include "Mcal.h"

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

/**
 * @brief This function Calculate CRC8 Software with Channel Input: CRC8 and CRC8H2F
 * @param u8CrcLastResult          - Start value when the algorithm starts.
 * @param Crc_DataPtr              - Pointer to the Crc Data Input.
 * @param Crc_Length               - Length of crcDataPtr block to be calculated in bytes.
 * @param u8Polynomial             - The polynomial of CRC8 or CRC8H2F.
 *
 * @return CRC final result: 8 bits
 * */
CRC_TEXT_SECTION uint8 Crc_RunTimeCalculateCRC8(uint8        u8CrcLastResult,
                                                const uint8 *Crc_DataPtr,
                                                uint32       Crc_Length,
                                                uint8        u8Polynomial)
{
    uint8  u8CrcResult = u8CrcLastResult;
    uint32 LengthIdx   = 0U;
    uint8  BitsIdx     = 0U;
    for (LengthIdx = 0UL; LengthIdx < Crc_Length; LengthIdx++)
    {
        u8CrcResult ^= Crc_DataPtr[LengthIdx];
        for (BitsIdx = 0U; BitsIdx < CRC_BYTE_LEN; BitsIdx++)
        {
            if (0U != (u8CrcResult & CRC8_MSB))
            {
                u8CrcResult = (uint8)(((uint8)(u8CrcResult << 1U)) ^ u8Polynomial);
            }
            else
            {
                u8CrcResult = (uint8)(u8CrcResult << 1U);
            }
        }
    }
    u8CrcResult ^= CRC8_XOR_VALUE;
    return u8CrcResult;
}

/**
 * @brief This function Calculate CRC16 Software with Channel Input: CRC16 and CRC16ARC
 * @param u16CrcLastResult         - Start value when the algorithm starts.
 * @param Crc_DataPtr              - Pointer to the Crc Data Input.
 * @param Crc_Length               - Length of crcDataPtr block to be calculated in bytes.
 * @param sProtocolCrc16           - CRC16 information: CRC16 and CRC16ARC.
 *
 * @return CRC final result: 16 bits
 * */
CRC_TEXT_SECTION uint16 Crc_RunTimeCalculateCRC16(uint16              u16CrcLastResult,
                                                  const uint8        *Crc_DataPtr,
                                                  uint32              Crc_Length,
                                                  const Crc_InitType *sProtocolCrc16)
{
    uint16 u16CrcResult = u16CrcLastResult;
    uint16 CrcDataU16   = 0U;
    uint32 LengthIdx    = 0U;
    uint8  BitsIdx      = 0U;

    for (LengthIdx = 0UL; LengthIdx < Crc_Length; LengthIdx++)
    {
        if (sProtocolCrc16->eWriteDataSwap == WRITE_DATASWAP_BIT_BYTE)
        {
            CrcDataU16 = Crc_ReverseUInt8(Crc_DataPtr[LengthIdx]);
        }
        else
        {
            CrcDataU16 = Crc_DataPtr[LengthIdx];
        }
        u16CrcResult ^= (uint16)(((uint16)CrcDataU16) << CRC_BYTE_LEN);
        for (BitsIdx = 0U; BitsIdx < CRC_BYTE_LEN; BitsIdx++)
        {
            if (0U != (u16CrcResult & CRC16_MSB))
            {
                u16CrcResult = (uint16)(((uint16)(u16CrcResult << 1U)) ^
                                        sProtocolCrc16->u64Polynomial);
            }
            else
            {
                u16CrcResult = (uint16)(u16CrcResult << 1U);
            }
        }
    }
    if (sProtocolCrc16->eReadDataSwap == READ_DATASWAP_BIT_BYTE)
    {
        u16CrcResult = Crc_ReverseUInt16(u16CrcResult);
    }
    return u16CrcResult;
}

/**
 * @brief This function Calculate CRC32 Software with Channel Input: CRC32E2E_P4 and CRC32ETHERNET
 * @param u32CrcLastResult         - Start value when the algorithm starts.
 * @param Crc_DataPtr              - Pointer to the Crc Data Input.
 * @param Crc_Length               - Length of crcDataPtr block to be calculated in bytes.
 * @param u32Polynomial            - The polynomial of CRC32E2E_P4 or CRC32ETHERNET.
 *
 * @return CRC final result: 32 bits
 * */
CRC_TEXT_SECTION uint32 Crc_RunTimeCalculateCRC32(uint32       u32CrcLastResult,
                                                  const uint8 *Crc_DataPtr,
                                                  uint32       Crc_Length,
                                                  uint32       u32Polynomial)
{
    uint32 u32CrcResult = u32CrcLastResult;
    uint32 CrcDataU32   = 0U;
    uint32 LengthIdx    = 0U;
    uint8  BitsIdx      = 0U;

    for (LengthIdx = 0UL; LengthIdx < Crc_Length; LengthIdx++)
    {
        CrcDataU32 = Crc_ReverseUInt8(Crc_DataPtr[LengthIdx]);
        u32CrcResult ^= (CrcDataU32 << 24U);
        for (BitsIdx = 0U; BitsIdx < CRC_BYTE_LEN; BitsIdx++)
        {
            if (0U != (u32CrcResult & CRC32_MSB))
            {
                u32CrcResult = (uint32)(u32CrcResult << 1U);
                u32CrcResult = (uint32)(u32CrcResult ^ u32Polynomial);
            }
            else
            {
                u32CrcResult <<= 1U;
            }
        }
    }
    u32CrcResult = Crc_ReverseUInt32(u32CrcResult);
    u32CrcResult ^= CRC32_XOR_VALUE;
    return u32CrcResult;
}

/**
 * @brief This function Calculate CRC64 Software with Channel Input: CRC64ECMA
 * @param u64CrcLastResult         - Start value when the algorithm starts.
 * @param Crc_DataPtr              - Pointer to the Crc Data Input.
 * @param Crc_Length               - Length of crcDataPtr block to be calculated in bytes.
 * @param u64Polynomial            - CRC64ECMA polynomial.
 *
 * @return CRC final result: 64 bits
 * */
CRC_TEXT_SECTION uint64 Crc_RunTimeCalculateCRC64(uint64       u64CrcLastResult,
                                                  const uint8 *Crc_DataPtr,
                                                  uint32       Crc_Length,
                                                  uint64       u64Polynomial)
{
    uint64 u64CrcResult = u64CrcLastResult;
    uint64 CrcDataU64   = 0U;
    uint32 LengthIdx    = 0U;
    uint8  BitsIdx      = 0U;

    for (LengthIdx = 0UL; LengthIdx < Crc_Length; LengthIdx++)
    {
        CrcDataU64 = Crc_ReverseUInt8(Crc_DataPtr[LengthIdx]);
        u64CrcResult ^= (CrcDataU64 << 56U);
        for (BitsIdx = 0U; BitsIdx < CRC_BYTE_LEN; BitsIdx++)
        {
            if (0U != (u64CrcResult & 0x8000000000000000UL))
            {
                u64CrcResult = (u64CrcResult << 1U);
                u64CrcResult = (u64CrcResult ^ u64Polynomial);
            }
            else
            {
                u64CrcResult <<= 1U;
            }
        }
    }
    u64CrcResult = Crc_ReverseUInt64(u64CrcResult);
    u64CrcResult ^= CRC64_XOR_VALUE;
    return u64CrcResult;
}

#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
