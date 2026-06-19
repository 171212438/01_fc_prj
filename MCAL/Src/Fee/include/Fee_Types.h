/**
*   @file    Fee.Types.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Fee - header file.
*   @details Fee type definition.
*
*   @addtogroup FEE
*   @{
*
*/
/*==================================================================================================
*   PERIPHERAL           : Fee
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2025 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       14/07/2023    QXW0100       N/A          Fee Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Fix bug and forbidden immediate block & Fee_Cancel
*   0.4.0       20/11/2023    QXW0055       N/A          Fix AMDC problems
*   0.5.0       03/06/2024    QXW0055       N/A          Add immediate block & Fee_Cancel support and foreign block support
*    ~
*   1.1.0       23/11/2024    QXW0055       N/A          No substantial content update
*   1.2.0       30/04/2025    QXW0055       N/A          Modified Fee softWare structure
==================================================================================================*/
#ifndef FEE_TYPES_H
#define FEE_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "MemIf_Types.h"
#include "Fls.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                     DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Fee block assignment type
*/
typedef uint8 Fee_BlockAssignmentType;
#define  FEE_PROJECT_SHARED       (Fee_BlockAssignmentType)1     /**< block is used for all the projects */
#define  FEE_PROJECT_APPLICATION  (Fee_BlockAssignmentType)2     /**< block is used for the application project */
#define  FEE_PROJECT_BOOTLOADER   (Fee_BlockAssignmentType)3     /**< block is used for the bootloader project */
#define  FEE_PROJECT_RESERVED     (Fee_BlockAssignmentType)0xFF  /**< the value is reserved */

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief Fee block configuration structure
*/
typedef struct
{
    uint16  u16BlockNumber;                        /**< @brief Fee block number */
    uint16  u16BlockSize;                          /**< @brief Size of Fee block in bytes */
    uint8   u8ChunkGrp;                            /**< @brief  Index of chunk group the Fee block belongs to */
    boolean bImmediateData;                        /**< @brief TRUE if immediate data block */
    Fee_BlockAssignmentType u8BlockAssignment;      /**< @brief specifies which project uses this block */
} Fee_BlockConfigType;

/**
* @brief Fee chunk configuration structure
*/
typedef struct
{
    Fls_AddressType u32StartAddr;    /**< @brief Address of Fee chunk in flash */
    Fls_LengthType  u32Length;       /**< @brief Size of Fee chunk in bytes */
} Fee_ChunkType;

/**
* @brief Fee chunk group configuration structure
*/
typedef struct
{
    const Fee_ChunkType *const pChunkPtr;    /**< @brief Pointer to array of Fee chunk configurations */
    uint32 u32ChunkCount;                    /**< @brief Number of chunks in chunk group */
    Fls_LengthType u32ResvSize;              /**< @brief Size of reserved area in the given chunk group (memory occupied by immediate blocks) */
} Fee_ChunkGroupType;

/**
* @brief Fee Configuration type is a stub type, not used, but required by AUTOSAR
*/
typedef Fee_BlockConfigType Fee_ConfigType;

/**
* @brief Fee block header configuration structure. This consists of block number and length of block and Type of Fee block
*/
typedef struct
{
    uint16  u16BlockNumber;     /**< @brief Number of block */
    uint16  u16Length;          /**< @brief Length of block */
    boolean bImmediateBlock;    /**< @brief Type of Fee block. Set to TRUE for immediate block */
} Fee_BlockType;

/**
* @brief Fee chunk header configuration structure.
*/
typedef struct
{
    uint32          u32ChunkID;    /**< @brief 32-bit chunk ID */
    Fls_AddressType u32StartAddr;  /**< @brief Start address of Fee chunk in Fls address space */
    Fls_LengthType  u32Length;     /**< @brief Length of Fee chunk in bytes */
} Fee_ChunkHeaderType;

#ifdef __cplusplus
}
#endif


#endif /* FEE_TYPES_H */

/** @}*/
