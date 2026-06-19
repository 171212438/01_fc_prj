/**
 *   @file    Crc_Lookup_Tables.h
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
#ifndef CRC_LOOKUP_TABLE_H
#define CRC_LOOKUP_TABLE_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Crc_Reverse.h"
#include "Crc_Types.h"
#include "Std_Types.h"
#include "Crc.h"
#include "Crc_Cfg.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

#if ((CHANNEL_CRC_8BIT_SAE_J1850_LOOKUP_USED == STD_ON) || \
     (CHANNEL_CRC_8BIT_H2F_LOOKUP_USED == STD_ON) ||       \
     (CRC_8BIT_SAE_J1850 == CRC_TABLE_CALCULATION) || (CRC_8BIT_H2F == CRC_TABLE_CALCULATION))
/**
 * @brief   This function Calculate CRC8 Lookup Table with Channel Input: CRC8 and CRC8H2F
 * @param u8CrcLastResult          - Start value when the algorithm starts.
 * @param Crc_DataPtr              - Pointer to the Crc Data Input.
 * @param Crc_Length               - Length of crcDataPtr block to be calculated in bytes.
 * @param eType                    - CRC8 and CRC8H2F
 *
 * @return CRC final result: 8 bits
 * */
CRC_TEXT_SECTION uint8 Crc_TableCalculateCRC8(uint8                  u8CrcLastResult,
                                              const uint8           *Crc_DataPtr,
                                              uint32                 Crc_Length,
                                              const Crc_StandardType eType);
#endif

#if ((CHANNEL_CRC_16BIT_CCITT_FALSE_LOOKUP_USED == STD_ON) || \
     (CHANNEL_CRC_16BIT_ARC_LOOKUP_USED == STD_ON) ||         \
     (CRC_16BIT_CCITT_FALSE == CRC_TABLE_CALCULATION) || (CRC_16BIT_ARC == CRC_TABLE_CALCULATION))
/**
 * @brief   This function Calculate CRC16 Lookup Table with Channel Input: CRC16 and CRC16ARC
 * @param u16CrcLastResult         - Start value when the algorithm starts.
 * @param Crc_DataPtr              - Pointer to the Crc Data Input.
 * @param Crc_Length               - Length of crcDataPtr block to be calculated in bytes.
 * @param eType                    - CRC16 and CRC16ARC
 *
 * @return CRC final result: 16 bits
 * */
CRC_TEXT_SECTION uint16 Crc_TableCalculateCRC16(uint16                 u16CrcLastResult,
                                                const uint8           *Crc_DataPtr,
                                                uint32                 Crc_Length,
                                                const Crc_StandardType eType);
#endif

#if ((CHANNEL_CRC_32BIT_ETHERNET_LOOKUP_USED == STD_ON) || \
     (CHANNEL_CRC_32BIT_E2E_P4_LOOKUP_USED == STD_ON) ||   \
     (CRC_32BIT_ETHERNET == CRC_TABLE_CALCULATION) || (CRC_32BIT_E2E_P4 == CRC_TABLE_CALCULATION))
/**
 * @brief This function Calculate CRC32 Software with Channel Input: CRC32E2E_P4 and CRC32ETHERNET
 * @param u32CrcLastResult         - Start value when the algorithm starts.
 * @param Crc_DataPtr              - Pointer to the Crc Data Input.
 * @param Crc_Length               - Length of crcDataPtr block to be calculated in bytes.
 * @param eType                    - CRC32E2E_P4 and CRC32ETHERNET.
 *
 * @return CRC final result: 32 bits
 * */
CRC_TEXT_SECTION uint32 Crc_TableCalculateCRC32(uint32                 u32CrcLastResult,
                                                const uint8           *Crc_DataPtr,
                                                uint32                 Crc_Length,
                                                const Crc_StandardType eType);
#endif

#if ((CHANNEL_CRC_64BIT_ECMA_LOOKUP_USED == STD_ON) || (CRC_64BIT_ECMA == CRC_TABLE_CALCULATION))
/**
 * @brief This function Calculate CRC64 Software with Channel Input: CRC64ECMA
 * @param u64CrcLastResult         - Start value when the algorithm starts.
 * @param Crc_DataPtr              - Pointer to the Crc Data Input.
 * @param Crc_Length               - Length of crcDataPtr block to be calculated in bytes.
 *
 * @return CRC final result: 64 bits
 * */
CRC_TEXT_SECTION uint64 Crc_TableCalculateCRC64(uint64       u64CrcLastResult,
                                                const uint8 *Crc_DataPtr,
                                                uint32       Crc_Length);
#endif
#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif
/** @} */
