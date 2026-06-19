/**
 *   @file    Crc.h
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
#ifndef CRC_TYPES_H
#define CRC_TYPES_H

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
 * @brief        Table lookup calculation parameters.
 * @details      Parameters used to control the table index.
 * */
#define CRC_32TABLE_INDEX_SHIFT ((uint8)24U)
#define CRC_BYTE_LEN            ((uint8)8U)

/**
 * @brief        Runtime calculation parameters.
 * @details      Parameters used to determine the MSB bit.
 * */
#define CRC8_MSB                ((uint8)0x80U)
#define CRC16_MSB               ((uint16)0x8000U)
#define CRC32_MSB               ((uint32)0x80000000U)

/**
 * @brief        The CRC XOR value.
 * @details      Parameters used to XOR the start value when the function is no first call.
 * */
#define CRC8_XOR_VALUE          ((uint8)0xFFU)
#define CRC8H2F_XOR_VALUE       ((uint8)0xFFU)
#define CRC32_XOR_VALUE         ((uint32)0xFFFFFFFFU)
#define CRC32P4_XOR_VALUE       ((uint32)0xFFFFFFFFU)
#define CRC64_XOR_VALUE         ((uint64)0xFFFFFFFFFFFFFFFFU)
/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/
/**
 * @brief   This type contains the CRC Width Type.
 * @details Select Width for each Channel to calculate CRC.
 * */
typedef enum
{
    CRC_BIT_8       = 0U,
    CRC_BIT_16      = 1U,
    CRC_BIT_32      = 2U,
    CRC_BIT_64      = 3U,
    CRC_BIT_INVALID = 4U
} CRC_BitWidthType;

/**
 * @brief   The supported CRC protocol type.
 * @details Select Width for each Channel to calculate CRC.
 * */
typedef enum
{
    CRC_PROTOCOL_8BIT_SAE_J1850 = 0U,
    CRC_PROTOCOL_8BIT_H2F,
    CRC_PROTOCOL_16BIT_CCITT_FALSE,
    CRC_PROTOCOL_16BIT_ARC,
    CRC_PROTOCOL_32BIT_ETHERNET,
    CRC_PROTOCOL_32BIT_E2E_P4,
    CRC_PROTOCOL_64BIT_ECMA
} Crc_StandardType;

/**
 * @brief The data swap for write
 * @details Select dataswap type for each Channel.
 */
typedef enum
{
    WRITE_DATASWAP_NONE     = 0U, /*!< none data swap for write */
    WRITE_DATASWAP_BIT      = 1U, /*!< only bits data swap for write */
    WRITE_DATASWAP_BIT_BYTE = 2U, /*!< both bits and bytes data swap for write */
    WRITE_DATASWAP_BYTE     = 3U  /*!< only bytes data swap for write */
} CRC_WriteDataSwapType;

/**
 * @brief The data swap for read
 */
typedef enum
{
    READ_DATASWAP_NONE     = 0U, /*!< none data swap for read */
    READ_DATASWAP_BIT      = 1U, /*!< only bits data swap for read */
    READ_DATASWAP_BIT_BYTE = 2U, /*!< both bits and bytes data swap for read */
    READ_DATASWAP_BYTE     = 3U  /*!< only bytes data swap for read */
} CRC_ReadDataSwapType;

/**
 * @brief The complement of reading crc data
 */
typedef enum
{
    READ_DATA_NORMAL = 0U, /*!< none complement of reading crc data */
    READ_DATA_FXOR   = 1U  /*!< Invert or complement crc data */
} CRC_ReadDataFXORType;

/**
 * @brief Defines the crc configuration
 * @details This structure is used to configure the crc
 */
/* PRQA S 3630 ++
   3630:The implementation of this struct/union type should be hidden.
   REASON: These structures are needed.
*/
typedef struct
{
    uint64                u64Polynomial;  /*!< the polynomial value of crc */
    uint64                u64SeedValue;   /*!< the seed value of crc */
    CRC_WriteDataSwapType eWriteDataSwap; /*!< the data swap for write(none,bits,bytes or both) */
    CRC_ReadDataSwapType  eReadDataSwap;  /*!< the data swap for read(none,bits,bytes or both) */
    CRC_ReadDataFXORType  eReadDataFXOR;  /*!< complement of reading crc data(none or FXOR) */
    CRC_BitWidthType      eBitWidth;
} Crc_InitType;
/* PRQA S 3630 -- */

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /*CRC_H*/

/** @} */
