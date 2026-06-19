/**
*   @file    Fee_Initialization.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Fee - Source file.
*   @details This file contains code for Fee initialization.
*
*   @addtogroup FEE
*   @{
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

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Fee_InternalTypes.h"
#include "Fee_Types.h"
#include "Fee_Extra.h"
#include "Fee_Initialization.h"
#include "Fee_Reserve.h"
#include "Fee.h"

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define FEE_START_SEC_VAR_NO_INIT_8
#include "Fee_MemMap.h"

/**
* @brief        Data buffer used by all jobs to store immediate data
*/
FEE_DATA_SECTION ALIGN(4) static uint8 Fee_Buffer[FEE_DATA_BUFFER_SIZE];

#define FEE_STOP_SEC_VAR_NO_INIT_8
#include "Fee_MemMap.h"


/*==================================================================================================
*                                  LOCAL FUNCTION DECLARATION
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

FEE_TEXT_SECTION static MemIf_JobResultType Fee_Init_JobScanChunkErase(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Init_JobScanBlockHdrRead(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Init_JobScanChunkHdrRead(void);
FEE_TEXT_SECTION static boolean Fee_Init_MatchBlockConfigChk(uint16 u16BlockIndex, \
                                                             uint16 u16BlockRuntimeInfoIndex, \
                                                             const Fee_BlockType *pBlockHdr,  \
                                                             Fls_AddressType u32DataAddr
                                                            );
FEE_TEXT_SECTION static void Fee_Init_UpdateBlockRuntimeInfo(uint16 u16BlockRuntimeInfoIndex,   \
                                                             Fee_BlockStatusType u8BlockStatus, \
                                                             Fls_AddressType u32DataAddr,       \
                                                             boolean bImmediateBlock
                                                            );
FEE_TEXT_SECTION static boolean Fee_Init_JobScanChunkHdrDone(void);
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Init_UpdateForeignBlockInfo(uint16 *pForeignBlockIndexPtr, \
                                                           const Fee_BlockType *pBlockHdr, \
                                                           Fee_BlockAssignmentType u8BlockAssignment
                                                           );
#endif /* (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) */


#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                      FUNCTIONS
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
* @brief        Erase first Fee chunk in current chunk group
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase
*                                        job
*
* @note         Fee_uJobIntClrGrpIt must contain index of current Fee chunk
*               group
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Init_JobScanChunkErase(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32ConfigStartAddr;
    Fls_LengthType  u32ConfigChunkSize;
    const Fee_ChunkType *pChunkPtr;

    /* Assign Pointer */
    pChunkPtr = &(Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].pChunkPtr[Fee_Gv.u8ChunkIt]);

    /* Get address and size of chunk in the chunk group */
    u32ConfigStartAddr = pChunkPtr->u32StartAddr;
    u32ConfigChunkSize = pChunkPtr->u32Length;

    /* Erase first chunk in the current chunk group */
    if (((Std_ReturnType)E_OK) == Fls_Erase(u32ConfigStartAddr, u32ConfigChunkSize))
    {
        /* Fls read job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }
    else
    {
        /* Fls read job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }

    /* Schedule chunk format job */
    Fee_Gv.u8Job = FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM;

    return eRetVal;
}

/**
* @brief        Read the Fee block header into internal buffer
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING Underlying Fls accepted the read job
*               MEMIF_JOB_FAILED Underlying Fls didn't accept the read job
*
* @note         Fee_Gv.u32IntAddrIt must contain valid logical address of
*               Fee block header to read
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Init_JobScanBlockHdrRead(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;

    /* Read the block header */
    if (((Std_ReturnType)E_OK) != Fls_Read(Fee_Gv.u32IntAddrIt, Fee_Gv.pDataBufferPtr, FEE_BLOCK_OVERHEAD))
    {
        /* Fls read job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }
    else
    {
        /* Fls read job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }

    Fee_Gv.u8Job = FEE_NXT_JOB_INIT_SCAN_BLOCK_HDR_RESOLVE;

    return eRetVal;
}

/**
* @brief        Read Fee chunk header
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept read job
*
* @note         Fee_Gv.u8ChunkGroupIt must contain index of current Fee chunk group
*               Fee_Gv.u8ChunkIt must contain index of current Fee chunk
*               Schedule the FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_RESOLVE subsequent job
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Init_JobScanChunkHdrRead(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32Address;

    /* Get address of current chunk  from configuration*/
    u32Address = Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].pChunkPtr[Fee_Gv.u8ChunkIt].u32StartAddr;

    /* Chunk header will be read directly from logical address, don't need translation here */
    if (((Std_ReturnType)E_OK) != Fls_Read(u32Address, Fee_Gv.pDataBufferPtr, FEE_CHUNK_OVERHEAD))
    {
        /* Fls read job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }
    else
    {
        /* Fls read job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }

    /* Schedule chunk scan job */
    Fee_Gv.u8Job = FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_RESOLVE;

    return eRetVal;
}

/**
* @brief        Check the block attribute match the configuration,
*               and its data address in acceptable area
* @param        u16BlockIndex             Index of block in Fee_Cfg_BlockConfig
* @param        u16BlockRuntimeInfoIndex  Index of block in Fee_Gv.tBlockRuntimeInfo
* @param        pBlockHdr                  Pointer to block header
* @param        u32DataAddr                Data address of block
*
* @return        boolean
*/
FEE_TEXT_SECTION static boolean Fee_Init_MatchBlockConfigChk(uint16 u16BlockIndex, \
                                                             uint16 u16BlockRuntimeInfoIndex, \
                                                             const Fee_BlockType *pBlockHdr,  \
                                                             Fls_AddressType u32DataAddr
                                                            )
{
    boolean bRetVal = TRUE;
    uint16 u16AlignedBlockSize;
    const Fee_BlockConfigType *pBlockConfigPtr;
    const Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

    /* Assign Pointer */
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[Fee_Gv.u8ChunkGroupIt]);

    if ( (0xFFFFU != u16BlockIndex) || (0xFFFFU != u16BlockRuntimeInfoIndex) )
    {
        u16AlignedBlockSize = Fee_Extra_AlignToVirtualPageSize(pBlockHdr->u16Length);

        if ( (u32DataAddr <= (pChunkGrpInfoPtr->u32DataAddrIt - u16AlignedBlockSize)) &&
             (u32DataAddr >= (pChunkGrpInfoPtr->u32HdrAddrIt + (2U * FEE_BLOCK_OVERHEAD)))
           )
        {
            /* Only checks non-foreign blocks */
            if (0xFFFFU == u16BlockRuntimeInfoIndex)
            {
                /* Assign Pointer -- avoid index overflow */
                pBlockConfigPtr  = &(Fee_Cfg_BlockConfig[u16BlockIndex]);

                if ( ( (pBlockConfigPtr->u8ChunkGrp)     != (Fee_Gv.u8ChunkGroupIt) ) ||
                     ( (pBlockConfigPtr->u16BlockSize)   != (pBlockHdr->u16Length)  ) ||
                     ( (pBlockConfigPtr->bImmediateData) != (pBlockHdr->bImmediateBlock) )
                   )
                {
                    /* Not matched with the configuration */
                    bRetVal = FALSE;
                }
            }
        }
        else
        {
            /* Invalid area */
            bRetVal = FALSE;
        }
    }
    else
    {
        /* Both indexes are FFFF: Invalid block number */
        bRetVal = FALSE;
    }

    return bRetVal;
}

/**
* @brief        Update block run-time information
*
*/
FEE_TEXT_SECTION static void Fee_Init_UpdateBlockRuntimeInfo(uint16 u16BlockRuntimeInfoIndex,   \
                                                             Fee_BlockStatusType u8BlockStatus, \
                                                             Fls_AddressType u32DataAddr,       \
                                                             boolean bImmediateBlock
                                                            )
{
    Fee_BlockInfoType *pBlockInfoPtr;
    Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

    /* Assign Pointer */
    pBlockInfoPtr    = &(Fee_Gv.tBlockInfo[u16BlockRuntimeInfoIndex]);
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[Fee_Gv.u8ChunkGroupIt]);

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)

    /* Update block run-time information when:
    - new valid block is found
    - block was invalidated
    - block contains immediate data (basically just ignore INCONSISTENT non-immediate blocks) */

    if (FEE_BLOCK_INCONSISTENT != u8BlockStatus)
    {
        /* Mark invalidated blocks as invalid */
        if (FEE_BLOCK_INVALIDATED == u8BlockStatus)
        {
            pBlockInfoPtr->u8BlockStatus= FEE_BLOCK_INVALID;
        }
        else
        {
            pBlockInfoPtr->u8BlockStatus = u8BlockStatus;
        }

        /* Update the block data pointer */
        pBlockInfoPtr->u32DataAddr = u32DataAddr;
        pBlockInfoPtr->u32InvalidAddr = (Fee_Gv.u32IntAddrIt + FEE_BLOCK_OVERHEAD) - FEE_VIRTUAL_PAGE_SIZE;
        pChunkGrpInfoPtr->u32DataAddrIt = u32DataAddr;
    }
    else
    {
        /* header is valid but data is corrupted, in this case it is important to update
        DataAddrIt to avoid corrupted space, chunk switch is not needed */
        pChunkGrpInfoPtr->u32DataAddrIt = u32DataAddr;
    }

    /* Check for blocks potentially overlapping the Reserved Area */

    /* Let Fee_Gv.tChunkGrpInfo[u8TempChunkGrpIt].u32IntHdrAddr be completely updated  */
    pChunkGrpInfoPtr->u32HdrAddrIt = Fee_Gv.u32IntAddrIt + FEE_BLOCK_OVERHEAD;

    if (TRUE == Fee_Resv_TouchReservedAreaInChunkGrp(Fee_Gv.u8ChunkGroupIt))
    {
        if (TRUE == bImmediateBlock)
        {
            /* Mark the imm. block as touching the Reserved Area (we are esp.
            interested only about inconsistent imm. blocks here, but it does not
            matter if also consistent imm. block will be marked) */
            Fee_Resv_RecordBlockInTouchResvArea(u16BlockRuntimeInfoIndex);
        }
        else
        {
            /* Non-immediate data found in the Reserved Area -- need chunk switch */
            Fee_Gv.bNeedToSwap = TRUE;
        }
    }

#else
    /* [SWS_Fee_00153/00154] [SWDESG_FEE_032] */
    /* FEE_BLOCK_ALWAYS_AVAILABLE mode is off, just update block run-time information */
    /* No special treatment of immediate data and overlapping the Reserved Area needed any more */
    (void)bImmediateBlock;

    pBlockInfoPtr->u8BlockStatus  = u8BlockStatus;
    pBlockInfoPtr->u32DataAddr    = u32DataAddr;
    pBlockInfoPtr->u32InvalidAddr = (Fee_Gv.u32IntAddrIt + FEE_BLOCK_OVERHEAD) - FEE_VIRTUAL_PAGE_SIZE;
    pChunkGrpInfoPtr->u32DataAddrIt  = u32DataAddr;

#endif /* FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON */
}

/**
* @brief        Check if all chunk have been scanned or not
*
*/
FEE_TEXT_SECTION static boolean Fee_Init_JobScanChunkHdrDone(void)
{
    boolean bRetVal;

    /* Move on to next chunk */
    (Fee_Gv.u8ChunkIt)++;

    if (Fee_Gv.u8ChunkIt == Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].u32ChunkCount)
    {
        /* Move on to next chunk group */
        (Fee_Gv.u8ChunkGroupIt)++;
        Fee_Gv.u8ChunkIt = 0U;
    }

    if (FEE_NUM_OF_CHUNK_GROUPS == Fee_Gv.u8ChunkGroupIt)
    {
        Fee_Gv.u8ChunkGroupIt = 0U;

        /* Done scanning all chunk headers */
        bRetVal = TRUE;
    }
    else
    {
        /* There are still chunks to scan */
        bRetVal = FALSE;
    }

    return bRetVal;
}

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
/**
* @brief        Update foreign block configuration information
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Init_UpdateForeignBlockInfo(uint16 *pForeignBlockIndexPtr, \
                                                                     const Fee_BlockType *pBlockHdr, \
                                                                     Fee_BlockAssignmentType u8BlockAssignment
                                                                    )
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;
    uint16 u16BlockIndex = *pForeignBlockIndexPtr;

    if (0xFFFFU == u16BlockIndex)
    {
        /* Find a new foreign block */
        if (Fee_OpsGv.u16ForeignBlocksNumber < (FEE_MAX_NUM_OF_BLOCKS_IN_FUTURE - FEE_CFG_NUM_OF_BLOCKS))
        {
            /* update the foreign block index */
            u16BlockIndex = Fee_OpsGv.u16ForeignBlocksNumber;
            *pForeignBlockIndexPtr = u16BlockIndex;

            /* update the foreign block configuration */
            Fee_OpsGv.tForeignBlockConfig[u16BlockIndex].u8ChunkGrp        = Fee_Gv.u8ChunkGroupIt;
            Fee_OpsGv.tForeignBlockConfig[u16BlockIndex].u16BlockSize      = pBlockHdr->u16Length;
            Fee_OpsGv.tForeignBlockConfig[u16BlockIndex].u16BlockNumber    = pBlockHdr->u16BlockNumber;
            Fee_OpsGv.tForeignBlockConfig[u16BlockIndex].bImmediateData    = pBlockHdr->bImmediateBlock;
            Fee_OpsGv.tForeignBlockConfig[u16BlockIndex].u8BlockAssignment = u8BlockAssignment;

            /* increment the number of foreign blocks */
            (Fee_OpsGv.u16ForeignBlocksNumber)++;
        }
        else
        {
            /* Call job error notification function */
            FEE_NVM_JOB_ERROR_NOTIFICATION
            /* Foreign block overflow, set job failed */
            eRetVal = MEMIF_JOB_FAILED;
        }
    }

    return eRetVal;
}
#endif /* (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) */

/*==================================================================================================
*                                       GOLBAL FUNCTIONS
==================================================================================================*/

/**
* @brief        Intialize all global variables
*
*/
FEE_TEXT_SECTION void Fee_Init_Initialize_Gv(void)
{
    uint32 u32Index;
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    uint32 u32TempResvNum = (FEE_MAX_NUM_OF_BLOCKS_IN_FUTURE + ((sizeof(uint32) * 8U)-1U)) / (sizeof(uint32) * 8U);
#endif /* (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) */

    /* Initialize all chunk groups */
    for (u32Index = 0U; u32Index < FEE_NUM_OF_CHUNK_GROUPS; u32Index++)
    {
        Fee_Gv.tChunkGrpInfo[u32Index].u32DataAddrIt = 0U;
        Fee_Gv.tChunkGrpInfo[u32Index].u32HdrAddrIt  = 0U;
        Fee_Gv.tChunkGrpInfo[u32Index].u32ActChunkID = 0U;
        Fee_Gv.tChunkGrpInfo[u32Index].u8ActChunk    = 0U;
    }

    /* Initialize all block info records */
    for (u32Index = 0U; u32Index < FEE_MAX_NUM_OF_BLOCKS_IN_FUTURE; u32Index++)
    {
        /* for blocks which were never written Fee returns INCONSISTENT status */
        Fee_Gv.tBlockInfo[u32Index].u8BlockStatus  = FEE_BLOCK_NEVER_WRITTEN;
        Fee_Gv.tBlockInfo[u32Index].u32DataAddr    = 0U;
        Fee_Gv.tBlockInfo[u32Index].u32InvalidAddr = 0U;
    }

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    /* Removes information about touching the Reserved Area for all blocks. */
    for (u32Index = 0U; u32Index < u32TempResvNum; u32Index++)
    {
        Fee_OpsGv.au32ReservedAreaTouched[u32Index] = 0UL;
    }
#endif /* (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) */

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    /* Clear the total number of foreign blocks exist in flash */
    Fee_OpsGv.u16ForeignBlocksNumber = 0U;

    /* Initialize all foreign block config records */
    for (u32Index = 0U; u32Index < (FEE_MAX_NUM_OF_BLOCKS_IN_FUTURE - FEE_CFG_NUM_OF_BLOCKS); u32Index++)
    {
        Fee_OpsGv.tForeignBlockConfig[u32Index].u16BlockNumber = 0U;
        Fee_OpsGv.tForeignBlockConfig[u32Index].u16BlockSize   = 0U;
        Fee_OpsGv.tForeignBlockConfig[u32Index].u8ChunkGrp     = 0U;
        Fee_OpsGv.tForeignBlockConfig[u32Index].bImmediateData = FALSE;
        Fee_OpsGv.tForeignBlockConfig[u32Index].u8BlockAssignment = FEE_PROJECT_RESERVED;
    }
#endif
    /* Common used data buffer pointer to static array space */
    Fee_Gv.pDataBufferPtr = &Fee_Buffer[0U];
    /* Initialize other global variables */
    Fee_Gv.bNeedToSwap       = FALSE;
    Fee_Gv.pDataReadDestPtr  = NULL_PTR;
    Fee_Gv.pDataWriteDestPtr = NULL_PTR;
    Fee_Gv.u16BlockIndex  = 0U;
    Fee_Gv.u32BlockOffset = 0U;
    Fee_Gv.u32BlockLength = 0U;
    Fee_Gv.u8OriginalJob  = FEE_NXT_JOB_DONE;

    /* Clear runtime variables */
    Fee_Gv.u8ChunkGroupIt = 0U;
    Fee_Gv.u8ChunkIt      = 0U;
    Fee_Gv.u16BlockIt     = 0U;
    Fee_Gv.u32IntAddrIt   = 0U;
    Fee_Gv.u32IntHdrAddr  = 0U;
    Fee_Gv.u32IntDataAddr = 0U;

    /* Schedule initial job */
    Fee_Gv.eModuleStatus  = MEMIF_BUSY_INTERNAL;
    Fee_Gv.u8Job = FEE_NXT_JOB_INIT_SCAN;
    Fee_Gv.eJobResult = MEMIF_JOB_PENDING;
}

/**
* @brief        Resolve Fee chunk header
*
* @param        bStatus  FALSE if previous Fls read job has failed
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase or read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase or read job
*
* @note         Fee_Gv.u8ChunkGroupIt must contain index of current Fee chunk group
*               Fee_Gv.u8ChunkIt must contain index of current Fee chunk
*               Update the Fee_Gv.u8ChunkIt and/or Fee_Gv.u8ChunkGroupIt iterators to move
*               into next chunk and/or chunk group and read next chunk header if there is any
*               Scan first active chunk if Fee is done with reading the chunk headers
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Init_JobScanChunkHdrResolve(const boolean bStatus)
{
    MemIf_JobResultType eRetVal;
    Fee_ChunkStatusType u8ChunkSta;
    Fls_AddressType     u32ConfigStartAddr;
    Fls_LengthType      u32ConfigChunkSize;
    boolean             bScanChunkDone;
    Fee_ChunkHeaderType tParsedChunkHdr;
    const Fee_ChunkType *pChunkPtr;
    Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

    /* Assign pointer */
    pChunkPtr        = &(Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].pChunkPtr[Fee_Gv.u8ChunkIt]);
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[Fee_Gv.u8ChunkGroupIt]);

    /* Parse chunk parameters from the read buffer */
    u8ChunkSta = Fee_Extra_ParseChunkHdr(&tParsedChunkHdr, Fee_Gv.pDataBufferPtr);

    /* Get configured chunk start address and size */
    u32ConfigStartAddr = pChunkPtr->u32StartAddr;
    u32ConfigChunkSize = pChunkPtr->u32Length;

    if ( (TRUE == bStatus) &&
         (FEE_CHUNK_VALID == u8ChunkSta) &&
         (tParsedChunkHdr.u32StartAddr == u32ConfigStartAddr) &&
         (tParsedChunkHdr.u32Length == u32ConfigChunkSize)
       )
    {
        if (tParsedChunkHdr.u32ChunkID > pChunkGrpInfoPtr->u32ActChunkID)
        {
            /* Found active chunk */
            pChunkGrpInfoPtr->u8ActChunk    = Fee_Gv.u8ChunkIt;
            pChunkGrpInfoPtr->u32ActChunkID = tParsedChunkHdr.u32ChunkID;
        }
    }
    else
    {
        /* Invalid, inconsistent, move to the next one */
    }

    /* Move on to next chunk */
    bScanChunkDone = Fee_Init_JobScanChunkHdrDone();

    if (TRUE == bScanChunkDone)
    {
        /* Done reading all chunk headers. Now scan active chunks */
        eRetVal = Fee_Init_JobScanChunk();
    }
    else
    {
        /* Read next chunk header */
        eRetVal = Fee_Init_JobScanChunkHdrRead();
    }

    return eRetVal;
}

/**
* @brief        Resolve Fee block header
*
* @param        bStatus             FALSE if previous Fls read job has failed
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase or
*                                        read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase
*                                        or read job
*               MEMIF_JOB_OK             There is no more cluster groups to scan
*
* @note         Initialize internal recovery chunk switch operation in case of error
*               Fee block header or failure of previous read job (perhaps ECC failure..)
*               Advance the Fee_uJobIntClrGrpIt iterator to next cluster group in
*               case of blank Fee block header (end of header list)
*               Update the BlockStatus, DataAddr, and InvalidAddr block
*               information and the HdrAddrIt and DataAddrIt iterators in case of valid
*               Fee block header
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Init_JobScanBlockHdrResolve(const boolean bStatus)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;
    Fee_BlockStatusType u8BlockSta;
    Fee_BlockType tBlockHdr;
    Fls_AddressType u32DataAddr;
    uint16 u16BlockIndex;
    uint16 u16BlockRuntimeInfoIndex = 0xFFFFU;
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    Fee_BlockAssignmentType u8BlockAssignment = FEE_PROJECT_RESERVED;
    uint16 u16ForeignBlockIndex;
#endif

    /* Parse block header from read buffer */
    u8BlockSta = Fee_Extra_ParseBlockHdr(&tBlockHdr, &u32DataAddr,
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
                                         (uint8 *)&u8BlockAssignment,
#endif
                                         Fee_Gv.pDataBufferPtr
                                        );

    /* bNeedToSwap was set because previously processed block wasn't properly recognized.
       perform a swap to prevent a risk that this block overlaps the Reserved Area. */
    if ((FEE_BLOCK_HEADER_INVALID  == u8BlockSta) || (FALSE == bStatus))
    {
        /* Invalidate the block index so Fee won't skip the Fee_Gv.u16BlockIndex block */
        Fee_Gv.u16BlockIndex = 0xFFFFU;

        /* Move on to next block header */
        Fee_Gv.u32IntAddrIt += FEE_BLOCK_OVERHEAD;

        /* Update the block header pointer */
        Fee_Gv.tChunkGrpInfo[Fee_Gv.u8ChunkGroupIt].u32HdrAddrIt = Fee_Gv.u32IntAddrIt;

        /* Set swap-to-be-performed flag */
        Fee_Gv.bNeedToSwap = TRUE;

        /* Read next block header */
        eRetVal = Fee_Init_JobScanBlockHdrRead();
    }
    else if (FEE_BLOCK_HEADER_BLANK == u8BlockSta)
    {
        /* If bNeedToSwap is set, it means that next write should cause chunk switch. */
        if (TRUE == Fee_Gv.bNeedToSwap)
        {
            Fee_Gv.bNeedToSwap = FALSE;
            Fee_Gv.tChunkGrpInfo[Fee_Gv.u8ChunkGroupIt].u32DataAddrIt = Fee_Gv.u32IntAddrIt + (2U * FEE_BLOCK_OVERHEAD);
        }

        /* End of header list so move on to next chunk group */
        (Fee_Gv.u8ChunkGroupIt)++;

        eRetVal = Fee_Init_JobScanChunk();
    }
    else
    {
        /* Get block index in configuration */
        u16BlockIndex = Fee_Extra_GetBlockIndex(tBlockHdr.u16BlockNumber);

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
        /* Check if block was not found in the configuration and it is a foreign block */
        if ( (0xFFFFU == u16BlockIndex) &&
#if (FEE_BOOTLOADER_CONFIG == STD_ON)
             (FEE_PROJECT_APPLICATION == u8BlockAssignment)
#else
             (FEE_PROJECT_BOOTLOADER == u8BlockAssignment)
#endif
           )
        {
            /* search for block index in the foreign blocks configuration */
            u16ForeignBlockIndex = Fee_Extra_GetForeignBlockIndex(tBlockHdr.u16BlockNumber);

            /* Check and update foreign block configuration information */
            /* Set job as failed in case of foreign block overflow */
            eRetVal = Fee_Init_UpdateForeignBlockInfo(&u16ForeignBlockIndex, &tBlockHdr, u8BlockAssignment);

            /* Found a foreign block: Prepare index to be used for the runtime info data */
            u16BlockRuntimeInfoIndex = FEE_CFG_NUM_OF_BLOCKS + u16ForeignBlockIndex;
        }
#endif

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
        if (MEMIF_JOB_OK == eRetVal)
#endif
        {
            /* If block header matches Fee configuration and its data address in an acceptable area: update its runtime info */
            if (TRUE == Fee_Init_MatchBlockConfigChk(u16BlockIndex, u16BlockRuntimeInfoIndex, &tBlockHdr, u32DataAddr))
            {
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
                /* No foreign blocks found, use the index from our configuration */
                if (0xFFFFU == u16BlockRuntimeInfoIndex)
#endif
                {
                    u16BlockRuntimeInfoIndex = u16BlockIndex;
                }
                /* [SWS_Fee_00071] [SWDESG_FEE_104/105/106/107] */
                Fee_Init_UpdateBlockRuntimeInfo(u16BlockRuntimeInfoIndex, u8BlockSta, u32DataAddr, tBlockHdr.bImmediateBlock);
            }
            else
            {
                /* 1. Invalid block number (removed from Fee config...) next write cluster swap occurs. Or */
                /* 2. Block header doesn't match Fee config or the FEE algorithm... during next write cluster swap occurs */
                Fee_Gv.bNeedToSwap = TRUE;
            }

            /* Move on to next block header */
            Fee_Gv.u32IntAddrIt += FEE_BLOCK_OVERHEAD;

            /* Update the block header pointer */
            Fee_Gv.tChunkGrpInfo[Fee_Gv.u8ChunkGroupIt].u32HdrAddrIt = Fee_Gv.u32IntAddrIt;

            /* Read next header */
            eRetVal = Fee_Init_JobScanBlockHdrRead();
        }
    }

    return eRetVal;
}


/**
* @brief        Program first Fee chunk in current Fee chunk group by writing
*               chunk header into flash
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase job
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Init_JobScanChunkProgram(void)
{
    MemIf_JobResultType eRetVal;
    Fee_ChunkHeaderType tChunkHdr;
    const Fee_ChunkType *pChunkPtr;

    /* Assign Pointer */
    pChunkPtr = &(Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].pChunkPtr[Fee_Gv.u8ChunkIt]);

    /* Get address and size of first chunk in the current chunk group */
    tChunkHdr.u32ChunkID   = 1U;
    tChunkHdr.u32StartAddr = pChunkPtr->u32StartAddr;
    tChunkHdr.u32Length    = pChunkPtr->u32Length;

    /* Build chunk header with chunk ID = 1 */
    Fee_Extra_FmtChunkHdr(&tChunkHdr, Fee_Gv.pDataBufferPtr);

    /* Make the chunk valid right away as it's empty anyway... */
    Fee_Extra_FmtFlag(&(Fee_Gv.pDataBufferPtr[FEE_CHUNK_HEADER_STATUS_OFFSET]), FEE_VALIDATED_VALUE);

    /* Write the chunk header to flash */
    if (((Std_ReturnType)E_OK) == Fls_Write(tChunkHdr.u32StartAddr, Fee_Gv.pDataBufferPtr, FEE_CHUNK_OVERHEAD - FEE_VIRTUAL_PAGE_SIZE))
    {
        /* Fls read job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }
    else
    {
        /* Fls write job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }

    /* Schedule chunk format done job */
    Fee_Gv.u8Job = FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM_DONE;

    return eRetVal;
}

/**
* @brief        Finalize program of first Fee chunk in current Fee chunk group
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase or
*                                        read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase
*                                        or read job
*               MEMIF_JOB_OK             There is no more chunk groups to scan
*
* @note         Assign index (u8ActChunk) and ID (u32ActChunkID) of active chunk in
*               current chunk group
*               Initialize the u32HdrAddrIt and u32DataAddrIt iterators to addresses
*               of the first Fee block header and data block
*               Advance the Fee_Gv.u8ChunkGroupIt iterator to next chunk group
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Init_JobScanChunkProgramDone(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32ConfigStartAddr;
    Fls_LengthType  u32ConfigChunkSize;
    const Fee_ChunkType *pChunkPtr;
    Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

    /* Assign pointer */
    pChunkPtr = &(Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].pChunkPtr[Fee_Gv.u8ChunkIt]);
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[Fee_Gv.u8ChunkGroupIt]);

    /* Assign Index and ID of active chunk */
    pChunkGrpInfoPtr->u32ActChunkID = 1U;
    pChunkGrpInfoPtr->u8ActChunk = Fee_Gv.u8ChunkIt;

    /* Get address and size of chunk in the chunk group */
    u32ConfigStartAddr = pChunkPtr->u32StartAddr;
    u32ConfigChunkSize = pChunkPtr->u32Length;

    /* Initialize the block header pointer */
    pChunkGrpInfoPtr->u32HdrAddrIt = u32ConfigStartAddr + FEE_CHUNK_OVERHEAD;

    /* Initialize the block data pointer */
    pChunkGrpInfoPtr->u32DataAddrIt = u32ConfigStartAddr + u32ConfigChunkSize;

    /* Move on to next chunk group */
    (Fee_Gv.u8ChunkGroupIt)++;

    /* Scan next chunk group if any */
    eRetVal = Fee_Init_JobScanChunk();

    return eRetVal;
}

/**
* @brief        Scan active chunk of current chunk group or erase and format
*               first chunk if no active chunk can be found
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase or read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase or read job
*               MEMIF_JOB_OK             There is no more chunk groups to scan
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Init_JobScanChunk(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32ConfigStartAddr;
    Fls_LengthType  u32ConfigChunkSize;
    uint8 u8TempChunkIndex;
    uint8 u8TempChunkGrpIt;
    Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

    /* Assign Pointer */
    u8TempChunkGrpIt = Fee_Gv.u8ChunkGroupIt;
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[u8TempChunkGrpIt]);

    if (FEE_NUM_OF_CHUNK_GROUPS == u8TempChunkGrpIt)
    {
        /* Nor more chunk groups to scan */
        Fee_Gv.u8Job = FEE_NXT_JOB_DONE;
        eRetVal = MEMIF_JOB_OK;
    }
    else
    {
        if(0U == pChunkGrpInfoPtr->u32ActChunkID)
        {
            /* No active chunk found in current group so erase and format the first one. */
            Fee_Gv.u8ChunkIt = 0U;
            eRetVal = Fee_Init_JobScanChunkErase();
        }
        else
        {
            /* Active chunk found */
            /* Get index of active chunk */
            u8TempChunkIndex = pChunkGrpInfoPtr->u8ActChunk;

            u32ConfigStartAddr = Fee_Cfg_ChunkGrps[u8TempChunkGrpIt].pChunkPtr[u8TempChunkIndex].u32StartAddr;
            u32ConfigChunkSize = Fee_Cfg_ChunkGrps[u8TempChunkGrpIt].pChunkPtr[u8TempChunkIndex].u32Length;

            /* Calculate logical address of first block header in active chunk */
            Fee_Gv.u32IntAddrIt = FEE_CHUNK_OVERHEAD + u32ConfigStartAddr;

            /* Initialize the block header pointer */
            pChunkGrpInfoPtr->u32HdrAddrIt = Fee_Gv.u32IntAddrIt;

            /* Initialize the block data pointer */
            pChunkGrpInfoPtr->u32DataAddrIt = u32ConfigStartAddr + u32ConfigChunkSize;

            /* Active chunk found so read the first block header */
            eRetVal = Fee_Init_JobScanBlockHdrRead();
        }
    }

    return eRetVal;
}

/**
* @brief        Initialize the chunk scan job
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept read job
*
* @note         Reset the Fee_Gv.Fee_u8ChunkGroupIt and Fee_u8ChunkIt iterators
*               Schedule reading of first chunk header
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Init_JobScan(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;

    /* Reset iterators to first chunk of first chunk group */
    Fee_Gv.u8ChunkGroupIt = 0U;
    Fee_Gv.u8ChunkIt = 0U;

    /* Schedule reading of first chunk header */
    eRetVal = Fee_Init_JobScanChunkHdrRead();

    return eRetVal;
}


#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
