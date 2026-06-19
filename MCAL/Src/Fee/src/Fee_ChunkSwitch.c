/**
*   @file    Fee_ChunkSwitch.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Fee - Source file.
*   @details This is the Flash EEPROM Emulation(Fee) source file.
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
#include "Fls.h"
#include "Fee.h"
#include "Fee_Extra.h"
#include "Fee_Reserve.h"
#include "Fee_RestoreJob.h"
#include "Fee_ChunkSwitch.h"

/*==================================================================================================
*                                 LOCAL FUNCTIONS DECLARATION
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

FEE_TEXT_SECTION static MemIf_JobResultType Fee_CS_JobChunkSwitchErase(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_CS_JobChunkSwitchBlockHdrVld(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_CS_JobChunkSwitchChunkHdrVld(void);
FEE_TEXT_SECTION static uint8 Fee_CS_GetNextChunkIndex(uint8 u8ChunkIndexCur);

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                       FUNCTIONS
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
* @brief        Erase current chunk in current chunk group by erasing flash
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase job
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_CS_JobChunkSwitchErase(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32StartAddress;
    Fls_LengthType  u32Length;
    const Fee_ChunkType *pChunkPtr;

    /* Assign pointer */
    pChunkPtr = &(Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].pChunkPtr[Fee_Gv.u8ChunkIt]);

    /* Get configured chunk info */
    u32StartAddress = pChunkPtr->u32StartAddr;
    u32Length       = pChunkPtr->u32Length;

    /* Erase cluster */
    if (((Std_ReturnType)E_OK) == Fls_Erase(u32StartAddress, u32Length))
    {
        /* Fls read job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }
    else
    {
        /* Fls read job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }

    /* Schedule cluster format job */
    Fee_Gv.u8Job = FEE_NXT_JOB_CS_CHUNK_HDR_PROGRAM;

    return eRetVal;
}

/**
* @brief        Validate Fee block header
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls did not accept write job
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_CS_JobChunkSwitchBlockHdrVld(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;

    /* Format validation info to buffer */
    Fee_Extra_FmtFlag(Fee_Gv.pDataBufferPtr, FEE_VALIDATED_VALUE);

    /* Write header to flash */
    if (((Std_ReturnType)E_OK) != Fls_Write(Fee_Gv.u32IntHdrAddr - (2U*FEE_VIRTUAL_PAGE_SIZE), Fee_Gv.pDataBufferPtr, FEE_VIRTUAL_PAGE_SIZE))
    {
        /* Fls read job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }
    else
    {
        /* Fls read job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }

    /* Finalize the write operation */
    Fee_Gv.u8Job = FEE_NXT_JOB_CS_COPY_BLOCK;

    return eRetVal;
}

/**
* @brief        Validate Fee chunk when chunk switch finish by
*               writing FEE_VALIDATED_VALUE into flash
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the write job
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_CS_JobChunkSwitchChunkHdrVld(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32StartAddr;

    /* Get start address of been switched chunk */
    u32StartAddr = Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].pChunkPtr[Fee_Gv.u8ChunkIt].u32StartAddr;

    /* Format validation pattern to write buffer */
    Fee_Extra_FmtFlag(Fee_Gv.pDataBufferPtr, FEE_VALIDATED_VALUE);

    /* Write validation pattern to flash */
    if (((Std_ReturnType)E_OK) == Fls_Write( (u32StartAddr + FEE_CHUNK_OVERHEAD) - (2U * FEE_VIRTUAL_PAGE_SIZE), \
                                             Fee_Gv.pDataBufferPtr, FEE_VIRTUAL_PAGE_SIZE )
       )
    {
        /* Fls write job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }
    else
    {
        /* Fls write job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }

    /* Schedule subsequent Fee job */
    Fee_Gv.u8Job = FEE_NXT_JOB_CS_CHUNK_HDR_VLD_DONE;

    return eRetVal;
}

/**
* @brief        Calculate the index of the next chunk in current chunk group.
* @param        u8ChunkIndexCur  Current chunk index
* @return       The index of the next chunk to be erased in the group
*/
FEE_TEXT_SECTION static uint8 Fee_CS_GetNextChunkIndex(uint8 u8ChunkIndexCur)
{
    uint8 u8ChunkIndexNext = u8ChunkIndexCur;

    /* Calculate index of chunk to switch to */
    u8ChunkIndexNext++;

    if (u8ChunkIndexNext == Fee_Cfg_ChunkGrps[Fee_Gv.u8ChunkGroupIt].u32ChunkCount)
    {
        /* Chunk roll over */
        u8ChunkIndexNext = 0U;
    }

    return u8ChunkIndexNext;
}

/*==================================================================================================
*                                       GOLBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        Initialize the chunk switch operation on current chunk group
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase job
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_CS_JobActiveChunkSwitch(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_FAILED;
    uint8 u8ChunkIndex_Cur;
    uint8 u8ChunkIndex_Next;

    /* Get chunk index the block belongs to */
    u8ChunkIndex_Cur = Fee_Gv.tChunkGrpInfo[Fee_Gv.u8ChunkGroupIt].u8ActChunk;

    /* Get the next chunk to erase */
    u8ChunkIndex_Next = Fee_CS_GetNextChunkIndex(u8ChunkIndex_Cur);

    /* Save index of chunk to switch to */
    Fee_Gv.u8ChunkIt = u8ChunkIndex_Next;

    /* Store type of original job so Fee can re-schedule
       this job once the chunk switch is complete */
    Fee_Gv.u8OriginalJob = Fee_Gv.u8Job;

    /* Erase the chunk to be switched */
    eRetVal = Fee_CS_JobChunkSwitchErase();

    return eRetVal;
}

/**
* @brief        Program chunk header in current chunk(to be switched) because of recent erase
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the write job
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_CS_JobChunkSwitchHdrProgram(void)
{
    MemIf_JobResultType eRetVal;
    Fee_ChunkHeaderType tChunkHdr;
    uint8 u8TempChunkGrpIndex = Fee_Gv.u8ChunkGroupIt;
    uint8 u8TempChunkIndex = Fee_Gv.u8ChunkIt;
    const Fee_ChunkType *pChunkPtr;

    /* Assign pointer */
    pChunkPtr = &(Fee_Cfg_ChunkGrps[u8TempChunkGrpIndex].pChunkPtr[u8TempChunkIndex]);

    tChunkHdr.u32StartAddr = pChunkPtr->u32StartAddr;
    tChunkHdr.u32Length    = pChunkPtr->u32Length;
    tChunkHdr.u32ChunkID   = Fee_Gv.tChunkGrpInfo[u8TempChunkGrpIndex].u32ActChunkID + 1U;

    /* Format new chunk header with u32ActChunkID + 1 */
    Fee_Extra_FmtChunkHdr(&tChunkHdr, Fee_Gv.pDataBufferPtr);

    /* Write the cluster header to flash */
    if (((Std_ReturnType)E_OK) == Fls_Write(tChunkHdr.u32StartAddr, Fee_Gv.pDataBufferPtr, FEE_CHUNK_OVERHEAD - (2U * FEE_VIRTUAL_PAGE_SIZE)))
    {
        /* Fls read job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }
    else
    {
        /* Fls write job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }

    /* Calculate header address: Move on to the first block header */
    Fee_Gv.u32IntHdrAddr = tChunkHdr.u32StartAddr + FEE_CHUNK_OVERHEAD;

    /* Calculate data address: Move on to the end of chunk */
    Fee_Gv.u32IntDataAddr = tChunkHdr.u32StartAddr + tChunkHdr.u32Length;

    /* Reset the block iterator */
    Fee_Gv.u16BlockIt = 0U;

    /* Schedule cluster format done job */
    Fee_Gv.u8Job = FEE_NXT_JOB_CS_COPY_BLOCK;

    return eRetVal;
}

/**
* @brief        Copy block from source to target chunk
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED Underlying Fls didn't accept the write job
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_CS_JobChunkSwitchCopyBlock(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32DataAddr;
    Fee_BlockType tBlockHdr;
    uint16 u16AlignedSize;
    uint8 u8BlockStatus;
    uint16 u16TempBlockIt = Fee_Gv.u16BlockIt;
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    Fee_BlockAssignmentType u8BlockAssignment;
    uint16 u16BlockTotalNum = FEE_CFG_NUM_OF_BLOCKS + Fee_OpsGv.u16ForeignBlocksNumber;
#else
    uint16 u16BlockTotalNum = FEE_CFG_NUM_OF_BLOCKS;
#endif

    /* Find first valid or inconsistent block in same chunk group */
    for ( ; u16TempBlockIt < u16BlockTotalNum;  u16TempBlockIt++)
    {
        u8BlockStatus   = Fee_Gv.tBlockInfo[u16TempBlockIt].u8BlockStatus;
        /* process only valid and inconsistent blocks from the current chunk */
        if (( Fee_Gv.u8ChunkGroupIt == Fee_Extra_GetBlockChunkGrp(u16TempBlockIt) ) &&
            ((FEE_BLOCK_VALID == u8BlockStatus) ||
             (FEE_BLOCK_INCONSISTENT == u8BlockStatus) ||
             (FEE_BLOCK_INCONSISTENT_COPY == u8BlockStatus)
            )
           )

        {
            break;
        }
        else
        {
            /* No match. Try next one... */
        }
    }

    /* Update  global variable Fee_Gv.u16BlockIt */
    Fee_Gv.u16BlockIt = u16TempBlockIt;

    if (u16BlockTotalNum == u16TempBlockIt)
    {
        /* No more matching blocks. Validate the chunk header */
        eRetVal = Fee_CS_JobChunkSwitchChunkHdrVld();
    }
    else
    {
        tBlockHdr.u16BlockNumber  = Fee_Extra_GetBlockNumber(u16TempBlockIt);
        tBlockHdr.u16Length       = Fee_Extra_GetBlockSize(u16TempBlockIt);
        tBlockHdr.bImmediateBlock = Fee_Extra_GetBlockImmediate(u16TempBlockIt);
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
        u8BlockAssignment = Fee_Extra_GetBlockAssignment(u16TempBlockIt);
#endif
        /* Data space no more allocated even for inconsistent immediate (pre-erased) blocks */
        /* PRQA S 2843 ++ #Misra-C:2012 Rule-18.1 Suspicious: Dereference of an invalid pointer value..
         * Reason: u16TempBlockIt added from 0 to u16BlockTotalNum. There is no possibility of exceeding u16BlockTotalNum*/
        if (FEE_BLOCK_VALID == Fee_Gv.tBlockInfo[u16TempBlockIt].u8BlockStatus)
        /* PRQA S 2843 -- */
        {
            /* Align Fee block size to the virtual page boundary */
            u16AlignedSize = Fee_Extra_AlignToVirtualPageSize(tBlockHdr.u16Length);

            /* Calculate data address */
            u32DataAddr = Fee_Gv.u32IntDataAddr - u16AlignedSize;

            /* Update the block address info */
            Fee_Gv.u32IntDataAddr = u32DataAddr;

            /* Initialize the data transfer iterator */
            Fee_Gv.u32IntAddrIt = u32DataAddr;
        }
        else
        {
            /* Don't allocate data space for inconsistent block */
            u32DataAddr = 0U;
        }

        /* Format block header to the buffer */
        Fee_Extra_FmtBlockHdr(&tBlockHdr, u32DataAddr,
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
                              u8BlockAssignment,
#endif
                              Fee_Gv.pDataBufferPtr
                             );

        /* Write header to flash */
        if (((Std_ReturnType)E_OK) != Fls_Write(Fee_Gv.u32IntHdrAddr, Fee_Gv.pDataBufferPtr, FEE_BLOCK_OVERHEAD - (2U * FEE_VIRTUAL_PAGE_SIZE)))
        {
            /* Fls write job hasn't been accepted */
            eRetVal = MEMIF_JOB_FAILED;
        }
        else
        {
            /* Fls write job has been accepted */
            eRetVal = MEMIF_JOB_PENDING;
        }

        /* PRQA S 2843 ++ #Misra-C:2012 Rule-18.1 Suspicious: Dereference of an invalid pointer value..
         * Reason: u16TempBlockIt added from 0 to u16BlockTotalNum. There is no possibility of exceeding u16BlockTotalNum*/
        if (FEE_BLOCK_VALID == Fee_Gv.tBlockInfo[u16TempBlockIt].u8BlockStatus)
        /* PRQA S 2843 -- */
        {
            /* Read block data */
            Fee_Gv.u8Job = FEE_NXT_JOB_CS_COPY_DATA_READ;
        }
        else
        {
            /* Nothing to read. Move on to next block and u16TempBlockIt is no need to operate */
            (Fee_Gv.u16BlockIt) ++;
            Fee_Gv.u8Job = FEE_NXT_JOB_CS_COPY_BLOCK;
        }

        /* Move on to next block header */
        Fee_Gv.u32IntHdrAddr += FEE_BLOCK_OVERHEAD;
    }

    return eRetVal;
}

/**
* @brief        Read data from source chunk to internal data buffer
*
* @param        bStatus                  FALSE if previous Fls read job has failed
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept read job
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_CS_JobChunkSwitchCopyDataRead(const boolean bStatus)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32ReadAddr;
    uint16 u16AlignedSize;
    uint16 u16BlockSize;

    /* Get aligned size of block to be switched */
    u16BlockSize = Fee_Extra_GetBlockSize(Fee_Gv.u16BlockIt);
    u16AlignedSize = Fee_Extra_AlignToVirtualPageSize(u16BlockSize);

    /* Calculate remaining number of bytes to read */
    Fee_Gv.u32BlockLength = (Fee_Gv.u32IntDataAddr + u16AlignedSize) - Fee_Gv.u32IntAddrIt;

    if (FALSE == bStatus)
    {
        /* There was error while reading the source chunk block.
           Change the block status to FEE_BLOCK_INCONSISTENT_COPY to mark the status change
           during chunk switch, leave the block (in flash) INCONSITENT and move on to next block */
        Fee_Gv.tBlockInfo[Fee_Gv.u16BlockIt].u8BlockStatus = FEE_BLOCK_INCONSISTENT_COPY;
        (Fee_Gv.u16BlockIt)++;
        eRetVal = Fee_CS_JobChunkSwitchCopyBlock();
    }
    else if (0U == Fee_Gv.u32BlockLength)
    {
        /* No more bytes to copy. Validate the block and move on to next block... */
        (Fee_Gv.u16BlockIt)++;

        eRetVal = Fee_CS_JobChunkSwitchBlockHdrVld();
    }
    else
    {
        if (Fee_Gv.u32BlockLength > FEE_DATA_BUFFER_SIZE)
        {
            Fee_Gv.u32BlockLength = FEE_DATA_BUFFER_SIZE;
        }
        else
        {
            /* Block data fits into the buffer */
        }

        /* Calculate source address */
        u32ReadAddr = (Fee_Gv.tBlockInfo[Fee_Gv.u16BlockIt].u32DataAddr + Fee_Gv.u32IntAddrIt) - Fee_Gv.u32IntDataAddr;

        /* Read the block data */
        if (((Std_ReturnType)E_OK) != Fls_Read(u32ReadAddr, Fee_Gv.pDataBufferPtr, Fee_Gv.u32BlockLength))
        {
            /* Fls read job hasn't been accepted */
            eRetVal = MEMIF_JOB_FAILED;
        }
        else
        {
            /* Fls read job has been accepted */
            eRetVal = MEMIF_JOB_PENDING;
        }

        Fee_Gv.u8Job = FEE_NXT_JOB_CS_COPY_DATA_WRITE;
    }

    return eRetVal;
}

/**
* @brief        Write data from data buffer to target chunk
*
* @param        bStatus              FALSE if previous Fls read job has failed
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING    Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED     Underlying Fls didn't accept write job
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_CS_JobChunkSwitchCopyDataWrite(const boolean bStatus)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;

    if (TRUE == bStatus)
    {
        if (((Std_ReturnType)E_OK) == Fls_Write(Fee_Gv.u32IntAddrIt, Fee_Gv.pDataBufferPtr, Fee_Gv.u32BlockLength))
        {
            /* Fls read job has been accepted */
            eRetVal = MEMIF_JOB_PENDING;
        }
        else
        {
            /* Fls write job hasn't been accepted */
            eRetVal = MEMIF_JOB_FAILED;
        }

        Fee_Gv.u32IntAddrIt += Fee_Gv.u32BlockLength;

        Fee_Gv.u8Job = FEE_NXT_JOB_CS_COPY_DATA_READ;
    }
    else
    {
        eRetVal = Fee_CS_JobChunkSwitchCopyDataRead(FALSE);
    }
    return eRetVal;
}

/**
* @brief        Program chunk Header when chunk switch is done
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED Underlying Fls didn't accept write job
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_CS_JobChunkSwitchChunkHdrVldDone(void)
{
    MemIf_JobResultType eRetVal;
    uint16 u16BlockIndex;
    Fls_AddressType u32HdrAddrIt;
    Fls_AddressType u32DataAddrIt;
    uint16 u16BlockSize;
    uint16 u16AlignedSize;
    uint8 u8BlockStatus;
    uint8 u8TempChunkGrpIndex = Fee_Gv.u8ChunkGroupIt;
    uint8 u8TempChunkIndex = Fee_Gv.u8ChunkIt;
    const Fee_ChunkType *pChunkPtr;
    Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    uint16 u16BlockTotalNum = FEE_CFG_NUM_OF_BLOCKS + Fee_OpsGv.u16ForeignBlocksNumber;
#else
    uint16 u16BlockTotalNum = FEE_CFG_NUM_OF_BLOCKS;
#endif

    /* Assign pointer */
    pChunkPtr = &(Fee_Cfg_ChunkGrps[u8TempChunkGrpIndex].pChunkPtr[u8TempChunkIndex]);
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[u8TempChunkGrpIndex]);

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    /* Switch is done so re-initialize info about the blocks touching the Reserved Area. */
    Fee_Resv_RemoveBlockInTouchResvdArea(u8TempChunkGrpIndex);
#endif

    u32HdrAddrIt  = pChunkPtr->u32StartAddr;
    u32DataAddrIt = u32HdrAddrIt + pChunkPtr->u32Length;

    /* Move on to the first block header */
    u32HdrAddrIt += FEE_CHUNK_OVERHEAD;

    /* Sync block info */
    for (u16BlockIndex = 0U; u16BlockIndex < u16BlockTotalNum; u16BlockIndex++)
    {
        if (u8TempChunkGrpIndex == Fee_Extra_GetBlockChunkGrp(u16BlockIndex))
        {
            /* Valid blocks and inconsistent blocks with allocated data were copied,
               update the block info and internal pointers accordingly.
            */
            u8BlockStatus   = Fee_Gv.tBlockInfo[u16BlockIndex].u8BlockStatus;
            if ((FEE_BLOCK_VALID == u8BlockStatus) ||
                (FEE_BLOCK_INCONSISTENT == u8BlockStatus) ||
                (FEE_BLOCK_INCONSISTENT_COPY == u8BlockStatus)
               )
            {
                /* Sync InvalidAddr */
                Fee_Gv.tBlockInfo[u16BlockIndex].u32InvalidAddr = (u32HdrAddrIt + FEE_BLOCK_OVERHEAD) - FEE_VIRTUAL_PAGE_SIZE;

                /* Update the block data address info */
                if (FEE_BLOCK_VALID == u8BlockStatus)
                {
                    u16BlockSize = Fee_Extra_GetBlockSize(u16BlockIndex);
                    u16AlignedSize = Fee_Extra_AlignToVirtualPageSize(u16BlockSize);

                    /* "Allocate" data already switched (written to the flash) */
                    u32DataAddrIt -= u16AlignedSize;

                    /* store the data address to the block runtime record */
                    Fee_Gv.tBlockInfo[u16BlockIndex].u32DataAddr = u32DataAddrIt;
                }
                else
                {
                    /* (Inconsistent plain block  -- no data written (switched, allocated)/available */
                    Fee_Gv.tBlockInfo[u16BlockIndex].u32DataAddr = 0U;
                }

                if (FEE_BLOCK_INCONSISTENT_COPY == u8BlockStatus)
                {
                    u16BlockSize = Fee_Extra_GetBlockSize(u16BlockIndex);
                    u16AlignedSize = Fee_Extra_AlignToVirtualPageSize(u16BlockSize);

                    /* "Allocate" data already swapped (written to the flash) */
                    u32DataAddrIt -= u16AlignedSize;
                    /* Damaged data read during copy, but already allocated => inconsistent */
                    Fee_Gv.tBlockInfo[u16BlockIndex].u8BlockStatus = FEE_BLOCK_INCONSISTENT;
                }

                /* Advance the header pointer */
                u32HdrAddrIt += FEE_BLOCK_OVERHEAD;
            }
            else
            {
                /* Not a usable block */
                /* clear the addresses of the block not present in the new active cluster */
                Fee_Gv.tBlockInfo[u16BlockIndex].u32DataAddr = 0U;
                Fee_Gv.tBlockInfo[u16BlockIndex].u32InvalidAddr = 0U;
            }
        }
    }

    /* Switch to the new chunk */
    pChunkGrpInfoPtr->u8ActChunk    = u8TempChunkIndex;
    pChunkGrpInfoPtr->u32ActChunkID += 1U;
    pChunkGrpInfoPtr->u32HdrAddrIt  = u32HdrAddrIt;
    pChunkGrpInfoPtr->u32DataAddrIt = u32DataAddrIt;


    /* Restore original Fee_eJob */
    if (FEE_NXT_JOB_INIT_SCAN_CHUNK == Fee_Gv.u8OriginalJob)
    {
        (Fee_Gv.u8ChunkGroupIt)++;
    }
    else
    {
        /* Do nothing */
    }

    /* Internal job has finished so transition from MEMIF_BUSYINTERNAL to MEMIF_BUSY */
    Fee_Gv.eModuleStatus = MEMIF_BUSY;

    /* And now cross fingers and re-schedule original job ... */
    Fee_Gv.u8Job = Fee_Gv.u8OriginalJob;

    eRetVal = Fee_Restore_JobRestoreOriginalJob();

    return eRetVal;
}


#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
