/**
 *   @file    Fee.InternalTypes.h
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
*   Version     Date          Initials      CR#      Descriptions
*   ---------   ----------    ---------     -----    -------------
*   0.1.0       14/07/2023    QXW0100       N/A      Fee Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A      Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A      Fix bug and forbidden immediate block & Fee_Cancel
*   0.4.0       20/11/2023    QXW0055       N/A      Fix AMDC problems
*   0.5.0       03/06/2024    QXW0055       N/A      Add immediate block and foreign block support
*    ~
*   1.1.0       23/11/2024    QXW0055       N/A      No substantial content update
*   1.2.0       30/04/2025    QXW0055       N/A      Modified Fee softWare structure
==================================================================================================*/

#ifndef FEE_INTERNALTYPES_H
#define FEE_INTERNALTYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Fee_Types.h"
#include "Fee_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                     DEFINES AND MACROS
==================================================================================================*/
/* clang-format off */
/** @brief This type represents the next job of the FEE module. */
typedef uint8 Fee_JobType;
/* Fee_Read() related jobs */
#define  FEE_NXT_JOB_READ                              (Fee_JobType)0   /**< @brief Read Fee block */
/* Fee_Write() related jobs */
#define  FEE_NXT_JOB_WRITE                             (Fee_JobType)1   /**< @brief Write Fee block to flash */
#define  FEE_NXT_JOB_WRITE_DATA                        (Fee_JobType)2   /**< @brief Write Fee block data to flash */
#define  FEE_NXT_JOB_WRITE_UNALIGNED_DATA              (Fee_JobType)3   /**< @brief Write unaligned rest of Fee block data to flash */
#define  FEE_NXT_JOB_WRITE_BLOCK_HDR_VLD               (Fee_JobType)4   /**< @brief Validate Fee block by writing validation flag to flash  */
#define  FEE_NXT_JOB_WRITE_DONE                        (Fee_JobType)5   /**< @brief Finalize validation of Fee block */
/* Fee_InvalidateBlock() related jobs */
#define  FEE_NXT_JOB_INVAL_BLOCK                       (Fee_JobType)6   /**< @brief Invalidate Fee block by writing the invalidation flag to flash */
#define  FEE_NXT_JOB_INVAL_BLOCK_DONE                  (Fee_JobType)7   /**< @brief Finalize invalidation of Fee block */
/* Fee_EraseImmediateBlock() related jobs */
#define  FEE_NXT_JOB_ERASE_IMMEDIATE                   (Fee_JobType)8   /**< @brief Erase (pre-allocate) immediate Fee block */
/* Fee_Init() related jobs */
#define  FEE_NXT_JOB_INIT_SCAN                         (Fee_JobType)9   /**< @brief Initialize the chunk scan job */
#define  FEE_NXT_JOB_INIT_SCAN_CHUNK                   (Fee_JobType)10  /**< @brief Scan active chunk of current chunk group */
#define  FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_RESOLVE       (Fee_JobType)11  /**< @brief Parse Fee chunk header */
#define  FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM       (Fee_JobType)12  /**< @brief Format first Fee chunk */
#define  FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM_DONE  (Fee_JobType)13  /**< @brief Finalize format of first Fee chunk */
#define  FEE_NXT_JOB_INIT_SCAN_BLOCK_HDR_RESOLVE       (Fee_JobType)14  /**< @brief Parse Fee block header */
/* Chunk switch related jobs */
#define  FEE_NXT_JOB_CS_CHUNK_HDR_PROGRAM              (Fee_JobType)15  /**< @brief Format current Fee chunk in current Fee chunk group */
#define  FEE_NXT_JOB_CS_COPY_BLOCK                     (Fee_JobType)16  /**< @brief Copy next block from source to target chunk */
#define  FEE_NXT_JOB_CS_COPY_DATA_READ                 (Fee_JobType)17  /**< @brief Read data from source chunk to internal Fee buffer */
#define  FEE_NXT_JOB_CS_COPY_DATA_WRITE                (Fee_JobType)18  /**< @brief Write data from internal Fee buffer to target chunk */
#define  FEE_NXT_JOB_CS_CHUNK_HDR_VLD_DONE             (Fee_JobType)19  /**< @brief Finalize format of first Fee chunk */
/* Fee system jobs end */
#define  FEE_NXT_JOB_DONE                              (Fee_JobType)20  /**< @brief No more subsequent jobs to queue */

/** @brief Status of Fee block header */
typedef uint8 Fee_BlockStatusType;
#define  FEE_BLOCK_VALID                (Fee_BlockStatusType)0   /**< @brief Fee block is valid */
#define  FEE_BLOCK_INVALID              (Fee_BlockStatusType)1   /**< @brief Fee block is invalid (has been invalidated) */
#define  FEE_BLOCK_INCONSISTENT         (Fee_BlockStatusType)2   /**< @brief Fee block is inconsistent (contains bogus data) */
#define  FEE_BLOCK_HEADER_INVALID       (Fee_BlockStatusType)3   /**< @brief Fee block header is garbled */
#define  FEE_BLOCK_INVALIDATED          (Fee_BlockStatusType)4   /**< @brief Fee block header is invalidated by Fee_InvalidateBlock(BlockNumber)
                                                                             (not used when FEE_BLOCK_ALWAYS_AVAILABLE == STD_OFF) */
#define  FEE_BLOCK_HEADER_BLANK         (Fee_BlockStatusType)5   /**< @brief Fee block header is blank */
#define  FEE_BLOCK_INCONSISTENT_COPY    (Fee_BlockStatusType)6   /**< @brief FEE data read error during chunk switch (ie data area was allocated) */
#define  FEE_BLOCK_NEVER_WRITTEN        (Fee_BlockStatusType)7   /**< @brief FEE block was never written in data flash */

/** @brief  Status of Fee chunk header */
typedef uint8 Fee_ChunkStatusType;
#define  FEE_CHUNK_VALID                (Fee_ChunkStatusType)0   /**< @brief Fee chunk is valid */
#define  FEE_CHUNK_INVALID              (Fee_ChunkStatusType)1   /**< @brief Fee chunk is invalid */
#define  FEE_CHUNK_INCONSISTENT         (Fee_ChunkStatusType)2   /**< @brief Fee chunk is inconsistent (contains error data) */
#define  FEE_CHUNK_HEADER_INVALID       (Fee_ChunkStatusType)3   /**< @brief Fee chunk header is garbled */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
* @brief Fee chunk group run-time status
*/
typedef struct
{
    Fls_AddressType u32DataAddrIt;        /**< @brief Address of current Fee data block in flash */
    Fls_AddressType u32HdrAddrIt;         /**< @brief Address of current Fee block header in flash */
    uint32          u32ActChunkID;        /**< @brief ID of active chunk */
    uint8           u8ActChunk;           /**< @brief Index of active chunk */
} Fee_ChunkGroupInfoType;

/**
* @brief Fee block run-time status
*/
typedef struct
{
    Fls_AddressType     u32DataAddr;          /**< @brief Address of Fee block data in flash */
    Fls_AddressType     u32InvalidAddr;       /**< @brief Address of Fee block invalidation field in flash */
    Fee_BlockStatusType u8BlockStatus;         /**< @brief Current status of Fee block */
} Fee_BlockInfoType;

/**
* @brief Structure containing the global variables of the module
*/
/* [SWS_Fee_00016/00084] [SWDESG_FEE_011/043/048/050] */
typedef struct
{
    uint8                 *pDataBufferPtr;          /**< @brief Pointer to data buffer, Used by read,write and swap jobs */
    boolean                bNeedToSwap;             /**< @brief Indicates whether a swap is needed */
    uint8                  *pDataReadDestPtr;       /**< @brief Pointer to destination buffer for Fee_Read() */
    const uint8            *pDataWriteDestPtr;      /**< @brief Pointer to source buffer for Fee_Write() */
    uint16                 u16BlockIndex;           /**< @brief Fee block index. Used by all Fee jobs */
    Fls_LengthType         u32BlockOffset;          /**< @brief Fee block Offset. Used by the read Fee job */
    Fls_LengthType         u32BlockLength;          /**< @brief Fee block length. Used by the write Fee job */
    /* runtime status */
    Fee_JobType            u8Job;                   /**< @brief Current job */
    Fee_JobType            u8OriginalJob;           /**< @brief Original job (before any swap) */
    MemIf_StatusType       eModuleStatus;           /**< @brief Current module status */
    MemIf_JobResultType    eJobResult;              /**< @brief Current job result */
    uint8                  u8ChunkGroupIt;          /**< @brief Internal iterator of chunk group */
    uint8                  u8ChunkIt;               /**< @brief Internal iterator of chunk */
    uint16                 u16BlockIt;              /**< @brief Internal iterator of Fee block */
    Fls_AddressType        u32IntAddrIt;            /**< @brief Internal flash helper address iterator. Used by the scan and swap jobs */
    Fls_AddressType        u32IntHdrAddr;           /**< @brief Internal address of current block header. Used by the swap job */
    Fls_AddressType        u32IntDataAddr;          /**< @brief Internal address of current data block. Used by the swap job. */
    Fee_BlockInfoType      tBlockInfo[FEE_MAX_NUM_OF_BLOCKS_IN_FUTURE];  /**< @brief Run-time status of all Fee blocks [SWS_Fee_00049] [SWDESG_FEE_109]*/
    Fee_ChunkGroupInfoType tChunkGrpInfo[FEE_NUM_OF_CHUNK_GROUPS];       /**< @brief Run-time status of all Fee chunk groups */
} Fee_tGlobalVar;


#if ( (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) || (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) )
/**
* @brief        Structure containing the potential global variables of the module
*/
typedef struct
{
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    uint16              u16ForeignBlocksNumber;  /**< @brief Used to keep the number of foreign blocks found when parsing the data flash.
                                                          It represents the number of elements from the array. */
    Fee_BlockConfigType tForeignBlockConfig[FEE_MAX_NUM_OF_BLOCKS_IN_FUTURE - FEE_CFG_NUM_OF_BLOCKS];  /**< @brief Used to keep the config of the foreign blocks */
#endif

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    uint32              au32ReservedAreaTouched[(FEE_MAX_NUM_OF_BLOCKS_IN_FUTURE + ((sizeof(uint32) * 8U)-1U)) / (sizeof(uint32) * 8U)]; /**< @brief Run-time information about blocks touching the Reserved Area */
#endif

} Fee_tPotentialGlobalVar;
#endif /* ( (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) || (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) ) */
/* clang-format on */

#ifdef __cplusplus
}
#endif

#endif /* FEE_INTERNALTYPES_H */

/** @}*/
