/**
*   @file    Fee_Extra.h
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

#ifndef FEE_EXTRA_H
#define FEE_EXTRA_H

/**
*   @file
*
*   @addtogroup FEE
*   @{
*/
#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Fee_Cfg.h"
#include "Fee.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     DEFINES AND MACROS
==================================================================================================*/
/** @brief Index of chunk ID information */
#define FEE_CHUNK_ID_INDEX                0U

/** @brief Index of chunk start address information */
#define FEE_CHUNK_ADDRESS_INDEX           4U

/** @brief Index of chunk size information */
#define FEE_CHUNK_SIZE_INDEX              8U

/** @brief Index of chunk checksum information */
#define FEE_CHUNK_CHECKSUM_INDEX          12U

/** @brief Size of chunk header part 1 */
#define FEE_CHUNK_HEADER_PART1_SIZE       16U

/** @brief Index of block ID information */
#define FEE_BLOCK_ID_INDEX                0U

/** @brief Index of block size information */
#define FEE_BLOCK_SIZE_INDEX              2U

/** @brief Index of the start address of the block data */
#define FEE_BLOCK_ADDRESS_INDEX           4U

/** @brief Index of block header checksum information */
#define FEE_BLOCK_CHECKSUM_INDEX          8U

/** @brief Index of block assignment information */
#define FEE_BLOCK_ASSIGNMENT_INDEX        12U

/** @brief Mask of immediate info in block header checksum  */
#define FEE_BLOCK_IMMED_MASK              0x80000000U

/** @brief Mask of immediate info in block header checksum  */
#define FEE_BLOCK_IMMED_USED_MASK         0x7FFFFFFFU

/** @brief Macro to read the byte from the uint8 buffer */
#define FEE_READ_BYTE(Buffer, Index)     ((uint8)(Buffer)[(Index)])

/** @brief Macro to read half word from the uint8 buffer */
#define FEE_READ_HALFWORD(Buffer, Index)     ((uint16)((uint16)((Buffer)[(Index)+1U])<<8U)|(uint16)((Buffer)[(Index)]))

/** @brief Macro to read word from the uint8 buffer */
#define FEE_READ_WORD(Buffer, Index)     \
  ((uint32) ((uint32)((Buffer)[(Index)+3U])<<24U)|((uint32)((Buffer)[(Index)+2U])<<16U)| \
            ((uint32)((Buffer)[(Index)+1U])<<8U)|((uint32)((Buffer)[(Index)])))


/** @brief Macro to write the byte to the uint8 buffer */
#define FEE_WRITE_BYTE(Buffer, Index, Byte)    (Buffer)[(Index)] = (uint8)(Byte);

/** @brief Macro to write half word to the uint8 buffer */
#define FEE_WRITE_HALFWORD(Buffer, Index, Word)             \
{                                                           \
    (Buffer)[(Index)]    = (uint8)((uint16)(Word) & 0xFFU); \
    (Buffer)[(Index)+1U] = (uint8)((uint16)(Word) >> 8U);   \
} 

/** @brief Macro to write word to the uint8 buffer */
#define FEE_WRITE_WORD(Buffer, Index, Word)                  \
{                                                            \
    (Buffer)[(Index)]    = (uint8)((uint32)(Word) & 0xFFU);  \
    (Buffer)[(Index)+1U] = (uint8)((uint32)(Word) >> 8U);    \
    (Buffer)[(Index)+2U] = (uint8)((uint32)(Word) >> 16U);   \
    (Buffer)[(Index)+3U] = (uint8)((uint32)(Word) >> 24U);   \
} 

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"
/**
* @brief        Format Fee chunk header parameters to write buffer
*
* @param        pChunkHdrPtr   Chunk header type
* @param        pDataBufPtr    Pointer to write buffer
*
*
*/
extern void Fee_Extra_FmtChunkHdr(const Fee_ChunkHeaderType *pChunkHdrPtr, uint8 *pDataBufPtr);

/**
* @brief        Parse Fee chunk header parameters from read buffer
*
* @param        pChunkHdr   Pointer to chunk header
* @param        pDataPtr    Pointer to read buffer
*
* @return       Fee_ChunkStatusType
*
*/
extern Fee_ChunkStatusType Fee_Extra_ParseChunkHdr(Fee_ChunkHeaderType *pChunkHdr, const uint8 *pDataPtr);

/**
* @brief        Format Fee block parameters into a write buffer
*
* @param        tBlockHdr         block header (block number and Length)
* @param        u32TargetAddress  Logical address of Fee block in Fls adress space
* @param        pDataBuf          Pointer to format buffer
*
*/
extern void Fee_Extra_FmtBlockHdr(const Fee_BlockType *tBlockHdr, const Fls_AddressType u32TargetAddress,
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
                                  const Fee_BlockAssignmentType u8BlockAssignment,
#endif
                                  uint8 *pDataBuf
                                 );

/**
* @brief        Parse Fee block header parameters from read buffer
*
* @param        pBlockHdrPtr            Fee Block Header( block number and Length)
* @param        pDataAddrPtr            Pointer to fee block data address
* @param        pBlockAssignmentPtr       Pointer to fee block assignment(optional)
* @param        pDataBufPtr             Pointer to read buffer
*
* @return       Fee_BlockStatusType
*               FEE_BLOCK_VALID          Fee block is valid
*               FEE_BLOCK_INVALID        Fee block is invalidated
*               FEE_BLOCK_INCONSISTENT   Fee block is inconsistent, it may contain corrupted data...
*               FEE_BLOCK_HEADER_INVALID Fee block header is invalid (with error data)
*               FEE_BLOCK_HEADER_BLANK   Fee block header is filled with FEE_ERASED_VALUE
*
*
*/
extern Fee_BlockStatusType Fee_Extra_ParseBlockHdr(Fee_BlockType *const pBlockHdrPtr,
                                                   Fls_AddressType *const pDataAddrPtr,
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
                                                   uint8 *const pBlockAssignmentPtr,
#endif
                                                   const uint8 *pDataBufPtr
                                                            );

/**
* @brief        Format validation or invalidation flag to write buffer
*
* @param        pTargetPtr   Pointer to write buffer
* @param        u8FlagMode   FEE_VALIDATED_VALUE or FEE_INVALIDATED_VALUE
*
*
*/
extern void Fee_Extra_FmtFlag(uint8 *pTargetPtr, const uint8 u8FlagMode);

/**
* @brief          Check whether specified data buffer contains only
*                 the FEE_ERASED_VALUE value
*
* @param          pTargetPtr     pointer to start of the checked buffer
* @param          pTargetEndPtr  pointer to end + 1 of the checked buffer
*
* @return         Std_ReturnType
*                 E_OK           The buffer contains only erased value
*                 E_NOT_OK       The buffer doesn't contain only erased value
*
*/
extern Std_ReturnType Fee_Extra_PaddingDataCheck(const uint8 *pTargetPtr, const uint8 *const pTargetEndPtr);

/**
* @brief        Parse the valid or invalid flag from a read buffer
*
* @param        pTargetPtr       Pointer to the read buffer
* @param        u8FlagMode       FEE_VALIDATED_VALUE or FEE_INVALIDATED_VALUE
* @param        pFlagVal         TRUE if flag of above type is set
*
* @return       Std_ReturnType
*               E_OK             The flag is set or cleared and rest of the read buffer
*                                (FEE_VIRTUAL_PAGE_SIZE - 1) contains FEE_ERASED_VALUE
*               E_NOT_OK         Buffer doesn't contain valid flag data. It's garbled...
*
*/
extern Std_ReturnType Fee_Extra_ParseFlag(const uint8 *const pTargetPtr, const uint8 u8FlagMode, boolean *pFlagVal);

/**
* @brief        Searches ordered list of Fee blocks and returns index of block
*               with matching BlockNumber
*
* @param        u16BlockNumber             Fee block number (FeeBlockNumber)
*
*               Fee block index 0xFFFF if BlockNumber is invalid
*
*/
extern uint16 Fee_Extra_GetBlockIndex(const uint16 u16BlockNumber);

/**
* @brief        Align block size to multiple of FEE_VIRTUAL_PAGE_SIZE
*
* @param        u16BlockSize        Fee block size (FeeBlockSize)
*
* @note         Fee block size to integer multiple of FEE_VIRTUAL_PAGE_SIZE
*
*/
extern uint16 Fee_Extra_AlignToVirtualPageSize(uint16 u16BlockSize);

/**
* @brief        Copy data from user to internal write buffer and fills
*               rest of the write buffer with FEE_ERASED_VALUE
*
* @param        pSourcePtr        Pointer to user data buffer
* @param        pTargetPtr        Pointer to internal write buffer
* @param        u16Length         Number of bytes to copy
*
* @note         Length must be <= FEE_VIRTUAL_PAGE_SIZE
*/
extern void Fee_Extra_CopyDataToBuffer(const uint8 *pSourcePtr, uint8 *pTargetPtr, const uint16 u16Length);

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                      INLINE FUNCTION 
==================================================================================================*/
/**
* @brief      Returns the chunk group for a block in configuration
*
* @param      u16BlockRuntimeIndex     index in the Fee_Cfg_BlockConfig
* @return     chunk group number
*
*/
LOCAL_INLINE uint8 Fee_Extra_GetBlockChunkGrp(const uint16 u16BlockRuntimeIndex)
{
    uint8 u8ChunkGrp;

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    if (u16BlockRuntimeIndex < FEE_CFG_NUM_OF_BLOCKS)
    {
        /* this means block is not foreign, so the configuration is part of Fee_Cfg_BlockConfig*/
        u8ChunkGrp = Fee_Cfg_BlockConfig[u16BlockRuntimeIndex].u8ChunkGrp;
    }
    else
    {
        /* this means block is foreign, so the configuration is part of Fee_aForeignBlockConfig*/
        u8ChunkGrp = Fee_OpsGv.tForeignBlockConfig[u16BlockRuntimeIndex-FEE_CFG_NUM_OF_BLOCKS].u8ChunkGrp;
    }
#else
    /* the configuration is part of Fee_BlockConfig*/
    u8ChunkGrp = Fee_Cfg_BlockConfig[u16BlockRuntimeIndex].u8ChunkGrp;
#endif

    return u8ChunkGrp;
}

/**
* @brief      Returns the block number from block configuration
*
* @param      u16BlockRuntimeIndex     index in the Fee_Cfg_BlockConfig
* @return     block number
*
*/
LOCAL_INLINE uint16 Fee_Extra_GetBlockNumber(const uint16 u16BlockRuntimeIndex)
{
    uint16 u16BlockNumber = 0U;

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    if (u16BlockRuntimeIndex < FEE_CFG_NUM_OF_BLOCKS)
    {
        /* this means block is not foreign, so the configuration is part of Fee_Cfg_BlockConfig*/
        u16BlockNumber = Fee_Cfg_BlockConfig[u16BlockRuntimeIndex].u16BlockNumber;
    }
    else
    {
        /* this means block is foreign, so the configuration is part of tForeignBlockConfig*/
        u16BlockNumber = Fee_OpsGv.tForeignBlockConfig[u16BlockRuntimeIndex-FEE_CFG_NUM_OF_BLOCKS].u16BlockNumber;
    }
#else
    /* the configuration is part of Fee_BlockConfig*/
    u16BlockNumber = Fee_Cfg_BlockConfig[u16BlockRuntimeIndex].u16BlockNumber;
#endif

    return u16BlockNumber;
}

/**
* @brief      Returns the block size from block configuration
*
* @param      u16BlockRuntimeIndex     block index
* @return     block size
*/
LOCAL_INLINE uint16 Fee_Extra_GetBlockSize(const uint16 u16BlockRuntimeIndex)
{
    uint16 u16BlockSize;

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    if (u16BlockRuntimeIndex < FEE_CFG_NUM_OF_BLOCKS)
    {
        /* this means block is not foreign, so the configuration is part of Fee_Cfg_BlockConfig*/
        u16BlockSize = Fee_Cfg_BlockConfig[u16BlockRuntimeIndex].u16BlockSize;
    }
    else
    {
        /* this means block is foreign, so the configuration is part of Fee_aForeignBlockConfig*/
        u16BlockSize = Fee_OpsGv.tForeignBlockConfig[u16BlockRuntimeIndex-FEE_CFG_NUM_OF_BLOCKS].u16BlockSize;
    }
#else
    /* the configuration is part of Fee_BlockConfig*/
    u16BlockSize = Fee_Cfg_BlockConfig[u16BlockRuntimeIndex].u16BlockSize;
#endif

    return u16BlockSize;
}

/**
* @brief      Returns the immediate attribute from configuration
*
* @param      u16BlockRuntimeIndex     block index
* @return     value of the immediate attribute
*/
LOCAL_INLINE boolean Fee_Extra_GetBlockImmediate(const uint16 u16BlockRuntimeIndex)
{
    boolean bRetVal;

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    if (u16BlockRuntimeIndex < FEE_CFG_NUM_OF_BLOCKS)
    {
        /* this means block is not foreign, so the configuration is part of Fee_BlockConfig*/
        bRetVal = Fee_Cfg_BlockConfig[u16BlockRuntimeIndex].bImmediateData;
    }
    else
    {
        /* this means block is foreign, so the configuration is part of Fee_aForeignBlockConfig*/
        bRetVal = Fee_OpsGv.tForeignBlockConfig[u16BlockRuntimeIndex-FEE_CFG_NUM_OF_BLOCKS].bImmediateData;
    }
#else
    /* the configuration is part of Fee_BlockConfig*/
    bRetVal = Fee_Cfg_BlockConfig[u16BlockRuntimeIndex].bImmediateData;
#endif

    return bRetVal;
}

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
/**
* @brief        Searches ordered list of Fee blocks and returns index of block
*               with matching BlockNumber
*
* @param        u16BlockNumber             Fee block number (FeeBlockNumber)
*
* @return       Fee block index 0xFFFF if BlockNumber is invalid
*
*/
LOCAL_INLINE uint16 Fee_Extra_GetForeignBlockIndex(const uint16 u16BlockNumber)
{
    uint16 u16Index;
    uint16 u16RetVal = 0xFFFFU;
    uint16 u16TempForeignBlocksNumber = Fee_OpsGv.u16ForeignBlocksNumber;

    /*Only check when Fee_OpsGv.u16ForeignBlocksNumber large than 0*/
    if (u16TempForeignBlocksNumber >= 1UL)
    {
        for (u16Index = 0U; u16Index < u16TempForeignBlocksNumber; u16Index++)
        {
            if (u16BlockNumber == Fee_OpsGv.tForeignBlockConfig[u16Index].u16BlockNumber)
            {
                /*Found the block, store and return*/
                u16RetVal = u16Index;
                break;
            }
        }
    }

    return u16RetVal;
}

/**
* @brief      Returns the block project assignement from configuration
*
* @param      BlockRuntimeIndex     index of block
* @return     Fee_BlockAssignmentType
*             FEE_PROJECT_SHARED
*             FEE_PROJECT_APPLICATION
*             FEE_PROJECT_BOOTLOADER
*             FEE_PROJECT_RESERVED
*/
LOCAL_INLINE Fee_BlockAssignmentType Fee_Extra_GetBlockAssignment(const uint16 BlockRuntimeIndex)
{
    Fee_BlockAssignmentType u8BlockAssignment;

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    if (BlockRuntimeIndex < FEE_CFG_NUM_OF_BLOCKS)
    {
        /* this means block is not foreign, so the configuration is part of Fee_BlockConfig*/
        u8BlockAssignment = Fee_Cfg_BlockConfig[BlockRuntimeIndex].u8BlockAssignment;
    }
    else
    {
        /* this means block is foreign, so the configuration is part of Fee_aForeignBlockConfig*/
        u8BlockAssignment = Fee_OpsGv.tForeignBlockConfig[BlockRuntimeIndex-FEE_CFG_NUM_OF_BLOCKS].u8BlockAssignment;
    }
#else
    /* the configuration is part of Fee_BlockConfig*/
    u8BlockAssignment = Fee_Cfg_BlockConfig[BlockRuntimeIndex].u8BlockAssignment;
#endif

    return u8BlockAssignment;
}
#endif /* (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) */



#ifdef __cplusplus
}
#endif

#endif /* FEE_EXTRA_H */

/** @}*/
