/**
*   @file    Fee_Internal.c
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
#include "MemIf_Types.h"
#include "Fls.h"
#include "Fee_Initialization.h"
#include "Fee_ChunkSwitch.h"
#include "Fee_Reserve.h"
#include "Fee_Extra.h"
#include "Fee_Internal.h"

/*==================================================================================================
*                                   LOCAL FUNCTION DECLARATION
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobItemManager(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobReadBlock(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobWriteBlockData(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobWriteBlockUnalignedData(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobValidBlockHdr(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobWriteBlockDone(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobInvalidateBlock(void);
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobInvalidateBlockDone(void);

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                       FEE JOB SCHEDULE LOOKUP TABLE AREA
==================================================================================================*/

#define FEE_START_SEC_CONST_UNSPECIFIED
#include "Fee_MemMap.h"

/**
* @brief     List of Fee job functions, used by Fee_JobSchedule
*            The order of functions in this table must be identical
*            with the enumeration Fee_JobType from Fee_InternalTypes.h
*
*/
FEE_DATA_SECTION static const FeeJobQueMngrHandler Fee_aJobFuncTable[] =
{
    /* Fee_Read() related jobs */
    Fee_Int_JobReadBlock,                            /* FEE_JOB_READ */

    /* Fee_Write() related jobs */
    Fee_Int_JobWriteBlock,                           /* FEE_NXT_JOB_WRITE */
    Fee_Int_JobWriteBlockData,                       /* FEE_NXT_JOB_WRITE_DATA */
    Fee_Int_JobWriteBlockUnalignedData,              /* FEE_NXT_JOB_WRITE_UNALIGNED_DATA */
    Fee_Int_JobValidBlockHdr,                        /* FEE_NXT_JOB_WRITE_BLOCK_HDR_VLD */
    Fee_Int_JobWriteBlockDone,                       /* FEE_NXT_JOB_WRITE_DONE */

    /* Fee_InvalidateBlock() related jobs */
    Fee_Int_JobInvalidateBlock,                      /* FEE_JOB_INVAL_BLOCK */
    Fee_Int_JobInvalidateBlockDone,                  /* FEE_JOB_INVAL_BLOCK_DONE */

    /* Fee_EraseImmediateBlock() related jobs */
    Fee_Int_JobEraseImmediateBlock,                  /* FEE_NXT_JOB_ERASE_IMMEDIATE */

    /* Fee_Init() related jobs */
    Fee_Init_JobScan,                                /* FEE_NXT_JOB_INIT_SCAN */
    Fee_Init_JobScanChunk,                           /* FEE_NXT_JOB_INIT_SCAN_CHUNK */
    Fee_Init_JobScanChunkHdrResolve_FuncWrap,        /* FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_RESOLVE */
    Fee_Init_JobScanChunkProgram,                    /* FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM */
    Fee_Init_JobScanChunkProgramDone,                /* FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM_DONE */
    Fee_Init_JobScanBlockHdrParse_FuncWrap,          /* FEE_NXT_JOB_INIT_SCAN_BLOCK_HDR_RESOLVE */

    /* Internal swap jobs */
    Fee_CS_JobChunkSwitchHdrProgram,                 /* FEE_NXT_JOB_CS_CHUNK_HDR_PROGRAM */
    Fee_CS_JobChunkSwitchCopyBlock,                  /* FEE_NXT_JOB_CS_COPY_BLOCK */
    Fee_CS_JobChunkSwitchCopyDataRead_FuncWrap,      /* FEE_NXT_JOB_CS_COPY_DATA_READ */
    Fee_CS_JobChunkSwitchCopyDataWrite_FuncWrap,     /* FEE_NXT_JOB_CS_COPY_DATA_WRITE */
    Fee_CS_JobChunkSwitchChunkHdrVldDone             /* FEE_NXT_JOB_CS_CHUNK_HDR_VLD_DONE */
};

#define FEE_STOP_SEC_CONST_UNSPECIFIED
#include "Fee_MemMap.h"


/*==================================================================================================
*                                        FUNCTIONS
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                      LOCAL FUNCTION
==================================================================================================*/
/**
* @brief        Manager job queue
* @return       MemIf_JobResultType
* @note         Fee_Gv.Fee_eJob must contain type of job to schedule
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobItemManager(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_FAILED;

    /* Jump to the current Fee job through function pointer */
    if(Fee_Gv.u8Job < FEE_NXT_JOB_DONE)
    {
        eRetVal = Fee_aJobFuncTable[Fee_Gv.u8Job]();
    }
    return eRetVal;
}

/**
* @brief        Fee read block internal job function
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept read job
*               MEMIF_BLOCK_INVALID      Requested Fee block is invalid
*               MEMIF_BLOCK_INCONSISTENT Requested Fee block is inconsistent
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobReadBlock(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_FAILED;
    Fee_BlockStatusType u8BlockStatus = FEE_BLOCK_VALID;
    Fls_AddressType u32BlockAddress = 0UL;
    const Fee_BlockInfoType* pBlockInfoPtr;

    /* Assign pointer */
    pBlockInfoPtr = &(Fee_Gv.tBlockInfo[Fee_Gv.u16BlockIndex]);

    /* Get runtime info of block */
    /* [SWS_Fee_00021] [SWDESG_FEE_013] */
    u8BlockStatus   = pBlockInfoPtr->u8BlockStatus;
    u32BlockAddress = pBlockInfoPtr->u32DataAddr;

    /* [SWS_Fee_00023] [SWDESG_FEE_063] */
    if (FEE_BLOCK_VALID == u8BlockStatus)
    {
        if (((Std_ReturnType)E_OK) != Fls_Read((u32BlockAddress+Fee_Gv.u32BlockOffset), Fee_Gv.pDataReadDestPtr, Fee_Gv.u32BlockLength))
        {
            /* Fls read job hasn't been accepted */
            eRetVal = MEMIF_JOB_FAILED;
        }
        else
        {
            /* Fls read job has been accepted */
            eRetVal = MEMIF_JOB_PENDING;
        }
    }
    else if ((FEE_BLOCK_NEVER_WRITTEN == u8BlockStatus) ||
             (FEE_BLOCK_INCONSISTENT == u8BlockStatus)  ||
             (FEE_BLOCK_INCONSISTENT_COPY == u8BlockStatus))
    {
        /* No special treatment of immediate blocks needed anymore */
        eRetVal = MEMIF_BLOCK_INCONSISTENT;
    }
    else if (FEE_BLOCK_INVALID == u8BlockStatus)
    {
        eRetVal = MEMIF_BLOCK_INVALID;
    }
    else
    {
        /* Something is wrong... MEMIF_JOB_FAILED */
    }

    Fee_Gv.u8Job = FEE_NXT_JOB_DONE;

    return eRetVal;
}

/**
* @brief        Write Fee block data
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept write job
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobWriteBlockData(void)
{
    Fls_AddressType u32DataAddr;
    MemIf_JobResultType eRetVal;
    uint16 u16BlockSize;
    uint16 u16AlignedSize;
    Fls_LengthType u32WriteLength;
    const uint8 *pWriteDataPtr;
    uint16 u16BlockIndex = Fee_Gv.u16BlockIndex;
    const Fee_BlockConfigType *pBlockConfigPtr;
    Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    boolean bReservedAreaTouched;
#else
    Fls_AddressType u32HdrAddr;
    Fee_BlockInfoType *pBlockInfoPtr = &(Fee_Gv.tBlockInfo[u16BlockIndex]);
#endif

    /* Assign pointer */
    pBlockConfigPtr = &(Fee_Cfg_BlockConfig[u16BlockIndex]);
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[pBlockConfigPtr->u8ChunkGrp]);

    /* Get size of Fee block from configuration and align*/
    u16BlockSize = pBlockConfigPtr->u16BlockSize;
    u16AlignedSize = Fee_Extra_AlignToVirtualPageSize(u16BlockSize);

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_OFF)
    /* No special treatment of immediate blocks needed anymore; dataAddr and invalidAddr
       has to be updated for a newly written imm/non-imm block  */

    /* Index of chunk group the Fee block belongs to */

    /* Calculate data and header addresses */
    u32DataAddr = pChunkGrpInfoPtr->u32DataAddrIt - u16AlignedSize;
    u32HdrAddr  = pChunkGrpInfoPtr->u32HdrAddrIt;


    pBlockInfoPtr->u32DataAddr    = u32DataAddr;
    pBlockInfoPtr->u32InvalidAddr = (u32HdrAddr + FEE_BLOCK_OVERHEAD) - FEE_VIRTUAL_PAGE_SIZE;
    /* Mark the block as inconsistent since the block header has been written */
    pBlockInfoPtr->u8BlockStatus  = FEE_BLOCK_INCONSISTENT;

#endif  /* (FEE_BLOCK_ALWAYS_AVAILABLE == STD_OFF) */

    /* Index of chunk group the Fee block belongs to */

    /* Header has been written so update both header and data addresses;
       no special treatment of immediate blocks needed anymore */
    /* [SWS_Fee_00024] [SWDESG_FEE_026/102/104/105/106/107] */
    pChunkGrpInfoPtr->u32HdrAddrIt += FEE_BLOCK_OVERHEAD;
    pChunkGrpInfoPtr->u32DataAddrIt -= u16AlignedSize;

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    /* When FEE_BLOCK_ALWAYS_AVAILABLE is enabled, Fee_BlockInfo is not updated immediately
       upon a header write. In case of FEE Cancel, the information about the in-cosistent
       (due to incomplete write) immediate block potentially residing in the Reserved Area
       might be lost and therefore it need to be extra handled. */
    bReservedAreaTouched = Fee_Resv_TouchReservedAreaInChunkGrp(pBlockConfigPtr->u8ChunkGrp);

    if ((TRUE == pBlockConfigPtr->bImmediateData) && (TRUE == bReservedAreaTouched))
    {
        /* Store the information about immediate block touching the Reserved Area. */
        Fee_Resv_RecordBlockInTouchResvArea(u16BlockIndex);
    }
#endif

    /* [SWS_Fee_00005] [SWDESG_FEE_111] */
    if (u16BlockSize < FEE_VIRTUAL_PAGE_SIZE)
    {
        /* Go through buffer... */
        Fee_Extra_CopyDataToBuffer(Fee_Gv.pDataWriteDestPtr, Fee_Gv.pDataBufferPtr, u16BlockSize);
        pWriteDataPtr  = Fee_Gv.pDataBufferPtr;
        u32WriteLength = FEE_VIRTUAL_PAGE_SIZE;

        /* Schedule write of validation pattern */
        Fee_Gv.u8Job = FEE_NXT_JOB_WRITE_BLOCK_HDR_VLD;
    }
    else
    {
        pWriteDataPtr = Fee_Gv.pDataWriteDestPtr;

        if (u16AlignedSize == u16BlockSize)
        {
            u32WriteLength = u16BlockSize;

            /* Schedule write of validation pattern */
            Fee_Gv.u8Job = FEE_NXT_JOB_WRITE_BLOCK_HDR_VLD;
        }
        else
        {
            u32WriteLength = ((uint32)u16AlignedSize) - FEE_VIRTUAL_PAGE_SIZE;

            /* Schedule write of unaligned data */
            Fee_Gv.u8Job = FEE_NXT_JOB_WRITE_UNALIGNED_DATA;
        }
    }

    u32DataAddr = pChunkGrpInfoPtr->u32DataAddrIt;

    if (((Std_ReturnType)E_OK) == Fls_Write(u32DataAddr, pWriteDataPtr,u32WriteLength))
    {
        /* Fls write job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }
    else
    {
        /* Fls write job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }

    return eRetVal;
}

/**
* @brief        Write unaligned rest of Fee block data to flash
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept write job
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobWriteBlockUnalignedData(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32DataAddr;
    uint16 u16WriteOffset;
    uint16 u16WriteLength;
    uint16 u16BlockSize;
    uint16 u16BlockIndex = Fee_Gv.u16BlockIndex;
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    uint8 u8TempChunkGrpIndex;
#endif

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    /* Index of chunk group the Fee block belongs to */
    u8TempChunkGrpIndex = Fee_Cfg_BlockConfig[u16BlockIndex].u8ChunkGrp;
#endif

    /* Get size of Fee block */
    u16BlockSize = Fee_Cfg_BlockConfig[u16BlockIndex].u16BlockSize;

    /* Calculate number of bytes already written */
    u16WriteOffset =  (u16BlockSize / FEE_VIRTUAL_PAGE_SIZE) * FEE_VIRTUAL_PAGE_SIZE;

    /* Calculate Length remaining data to write */
    u16WriteLength = u16BlockSize % FEE_VIRTUAL_PAGE_SIZE;

    Fee_Extra_CopyDataToBuffer(&(Fee_Gv.pDataWriteDestPtr[u16WriteOffset]), Fee_Gv.pDataBufferPtr, u16WriteLength);

    /* No special treatment of immediate data needed any more */
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    /* Use u8ChunkGrp info */
    u32DataAddr = Fee_Gv.tChunkGrpInfo[u8TempChunkGrpIndex].u32DataAddrIt;
#else
    /* Use Block info because it has been updated */
    u32DataAddr = Fee_Gv.tBlockInfo[u16BlockIndex].u32DataAddr;
#endif

    if (((Std_ReturnType)E_OK) == Fls_Write(u32DataAddr+u16WriteOffset, Fee_Gv.pDataBufferPtr, FEE_VIRTUAL_PAGE_SIZE))
    {
        /* Fls write job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }
    else
    {
        /* Fls write job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }

    /* Schedule write of validation pattern */
    Fee_Gv.u8Job = FEE_NXT_JOB_WRITE_BLOCK_HDR_VLD;

    return eRetVal;
}

/**
* @brief        Validate Fee block header
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept write job
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobValidBlockHdr(void)
{
    MemIf_JobResultType eRetVal;
    Fls_AddressType u32HdrAddr;
    uint16 u16BlockIndex = Fee_Gv.u16BlockIndex;
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    uint8 u8TempChunkGrpIndex;
#endif

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    /* Index of cluster group the Fee block belongs to */
    u8TempChunkGrpIndex = Fee_Cfg_BlockConfig[u16BlockIndex].u8ChunkGrp;
#endif
    /* Format validation info to buffer */
    Fee_Extra_FmtFlag(Fee_Gv.pDataBufferPtr, FEE_VALIDATED_VALUE);

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    /* Use ChunkGrp info */
    u32HdrAddr = Fee_Gv.tChunkGrpInfo[u8TempChunkGrpIndex].u32HdrAddrIt - (2U *  FEE_VIRTUAL_PAGE_SIZE);
#else
    /* Use Block info */
    u32HdrAddr = Fee_Gv.tBlockInfo[u16BlockIndex].u32InvalidAddr - FEE_VIRTUAL_PAGE_SIZE;
#endif

    /* Write validation pattern to flash */
    if (((Std_ReturnType)E_OK) == Fls_Write(u32HdrAddr, Fee_Gv.pDataBufferPtr, FEE_VIRTUAL_PAGE_SIZE))
    {
        /* Fls read job has been accepted */
        eRetVal = MEMIF_JOB_PENDING;
    }
    else
    {
        /* Fls write job hasn't been accepted */
        eRetVal = MEMIF_JOB_FAILED;
    }

    /* Finalize the write operation */
    Fee_Gv.u8Job = FEE_NXT_JOB_WRITE_DONE;

    return eRetVal;
}

/**
* @brief        Fee block write done and update block info
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_OK
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobWriteBlockDone(void)
{
    uint16 u16BlockIndex = Fee_Gv.u16BlockIndex;
    Fee_BlockInfoType *pBlockInfoPtr = &(Fee_Gv.tBlockInfo[u16BlockIndex]);

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    uint8 u8TempChunkGrpIndex = Fee_Cfg_BlockConfig[u16BlockIndex].u8ChunkGrp;
    const Fee_ChunkGroupInfoType *pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[u8TempChunkGrpIndex]);

    /* Index of chunk group the Fee block belongs to */
    /* Calculate data and header addresses */
    /* Update the block address info */
    pBlockInfoPtr->u32DataAddr    = pChunkGrpInfoPtr->u32DataAddrIt;
    pBlockInfoPtr->u32InvalidAddr = pChunkGrpInfoPtr->u32HdrAddrIt - FEE_VIRTUAL_PAGE_SIZE;
#endif

    /* Mark the Fee block as valid */
    pBlockInfoPtr->u8BlockStatus = FEE_BLOCK_VALID;

    /* No more Fls jobs to schedule */
    Fee_Gv.u8Job = FEE_NXT_JOB_DONE;

    return MEMIF_JOB_OK;
}

/**
* @brief        Invalidate Fee block by writing the invalidation flag to flash
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept write job
*               MEMIF_JOB_OK             The Fee block is already invalid
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobInvalidateBlock(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;
    const Fee_BlockInfoType *pBlockInfoPtr;

    /* [SWS_Fee_00036] [SWDESG_FEE_051] */
    /* Assign pointer */
    pBlockInfoPtr = &(Fee_Gv.tBlockInfo[Fee_Gv.u16BlockIndex]);

    if (FEE_BLOCK_INVALID == pBlockInfoPtr->u8BlockStatus)
    {
        /* No more subsequent Fls jobs to schedule */
        Fee_Gv.u8Job = FEE_NXT_JOB_DONE;

        /* Fee job completed */
        eRetVal = MEMIF_JOB_OK;
    }
    else
    {
        /* Format invalidation pattern to buffer */
        Fee_Extra_FmtFlag(Fee_Gv.pDataBufferPtr, FEE_INVALIDATED_VALUE);

        /* [SWS_Fee_00037] [SWDESG_FEE_052] */
        /* Write invalidation pattern to flash */
        if (((Std_ReturnType)E_OK) == Fls_Write(pBlockInfoPtr->u32InvalidAddr, Fee_Gv.pDataBufferPtr, FEE_VIRTUAL_PAGE_SIZE))
        {
            /* Fls read job has been accepted */
            eRetVal = MEMIF_JOB_PENDING;
        }
        else
        {
            /* Fls write job hasn't been accepted */
            eRetVal = MEMIF_JOB_FAILED;
        }

        /* Finalize the invalidation operation */
        Fee_Gv.u8Job = FEE_NXT_JOB_INVAL_BLOCK_DONE;

    }

    return eRetVal;
}

/**
* @brief        Fee block invalidation done and update block info
*
* @return       MemIf_JobResultType
* @retval       MEMIF_JOB_OK
*
* @note         change Fee block status to FEE_BLOCK_INVALID
*
*/
FEE_TEXT_SECTION static MemIf_JobResultType Fee_Int_JobInvalidateBlockDone(void)
{
    /* Mark the Fee block as invalid */
    Fee_Gv.tBlockInfo[Fee_Gv.u16BlockIndex].u8BlockStatus = FEE_BLOCK_INVALID;

    /* No more subsequent Fls jobs to schedule */
    Fee_Gv.u8Job = FEE_NXT_JOB_DONE;

    /* Fee job completed */
    return MEMIF_JOB_OK;
}

/*==================================================================================================
*                                       GOLBAL FUNCTIONS
==================================================================================================*/
/**
* @brief        Fee mainfunction internal job function
* @note         Schedule job and update job result
*/
FEE_TEXT_SECTION void Fee_Int_MainFunction(void)
{
    if (MEMIF_JOB_PENDING == Fee_Gv.eJobResult)
    {
        switch (Fee_Gv.u8Job)
        {
        /* for all the following jobs subsequent jobs will be called in Fee job schedule function based on Job */
        case FEE_NXT_JOB_INIT_SCAN:
        case FEE_NXT_JOB_READ:
        case FEE_NXT_JOB_WRITE:
        case FEE_NXT_JOB_INVAL_BLOCK:
        case FEE_NXT_JOB_ERASE_IMMEDIATE:
            Fee_Gv.eJobResult = Fee_Int_JobItemManager();
            break;
        /* for all the following jobs job end or job error notification will be called based on the job result */
        case FEE_NXT_JOB_WRITE_DATA:
        case FEE_NXT_JOB_WRITE_UNALIGNED_DATA:
        case FEE_NXT_JOB_WRITE_BLOCK_HDR_VLD:
        case FEE_NXT_JOB_WRITE_DONE:
        case FEE_NXT_JOB_INVAL_BLOCK_DONE:
        case FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_RESOLVE:
        case FEE_NXT_JOB_INIT_SCAN_CHUNK:
        case FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM:
        case FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM_DONE:
        case FEE_NXT_JOB_INIT_SCAN_BLOCK_HDR_RESOLVE:
        case FEE_NXT_JOB_CS_COPY_BLOCK:
        case FEE_NXT_JOB_CS_CHUNK_HDR_PROGRAM:
        case FEE_NXT_JOB_CS_COPY_DATA_READ:
        case FEE_NXT_JOB_CS_COPY_DATA_WRITE:
        case FEE_NXT_JOB_CS_CHUNK_HDR_VLD_DONE:
        case FEE_NXT_JOB_DONE:
        default:
            /* Internal or subsequent job */
            break;
        }

        if (MEMIF_JOB_PENDING == Fee_Gv.eJobResult)
        {
            /* Nothing to do */
        }
        else if (MEMIF_JOB_OK == Fee_Gv.eJobResult)
        {
            if(MEMIF_BUSY_INTERNAL != Fee_Gv.eModuleStatus)
            {
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
                /* Call job end notification function */
                /* [SWS_Fee_00056] [SWDESG_FEE_070] */
                FEE_NVM_JOB_END_NOTIFICATION
            }
            else
            {
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
            }
        }
        else
        {
            if(MEMIF_BUSY_INTERNAL != Fee_Gv.eModuleStatus)
            {
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
                /* Call job error notification function */
                FEE_NVM_JOB_ERROR_NOTIFICATION
            }
            else
            {
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
            }
        }
    }
}

/**
* @brief        Fee job end notification internal job function
* @note         Schedule job and update job result
*/
FEE_TEXT_SECTION void Fee_Int_JobEndNotification(void)
{
    if (FEE_NXT_JOB_DONE != Fee_Gv.u8Job)
    {
        Fee_Gv.eJobResult = Fee_Int_JobItemManager();
        if (MEMIF_JOB_OK == Fee_Gv.eJobResult)
        {
            if(MEMIF_BUSY_INTERNAL != Fee_Gv.eModuleStatus)
            {
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
                /* call NVM_JOB_END_NOTIFICATION to report operation success  */
                /* [SWS_Fee_00055] [SWDESG_FEE_067] */
                FEE_NVM_JOB_END_NOTIFICATION
            }
            else
            {
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
            }
        }
        else if (MEMIF_JOB_PENDING == Fee_Gv.eJobResult)
        {
            /* Fls job ongoing */
        }
        else
        {
            if(MEMIF_BUSY_INTERNAL != Fee_Gv.eModuleStatus)
            {
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
                /* call NVM_JOB_ERROR_NOTIFICATION to report operation error  */
                FEE_NVM_JOB_ERROR_NOTIFICATION
            }
            else
            {
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
            }
        }
    }
    else
    {
        Fee_Gv.eJobResult = Fls_GetJobResult();

        if(MEMIF_BUSY_INTERNAL != Fee_Gv.eModuleStatus)
        {
            Fee_Gv.eModuleStatus = MEMIF_IDLE;
            /* call NVM_JOB_END_NOTIFICATION to report operation success  */
            FEE_NVM_JOB_END_NOTIFICATION
        }
        else
        {
            Fee_Gv.eModuleStatus = MEMIF_IDLE;
        }
    }
}

/**
* @brief        Fee job error notification internal job function
* @note         Schedule job and update job result
*/
FEE_TEXT_SECTION void Fee_Int_JobErrorNotification(void)
{
    uint8 u8ChunkGrpIndex;

    if (MEMIF_JOB_CANCELED != Fee_Gv.eJobResult)
    {
        switch (Fee_Gv.u8Job)
        {
        /* Error while reading block header, move on to next block headers */
        case FEE_NXT_JOB_INIT_SCAN_BLOCK_HDR_RESOLVE:
            Fee_Gv.eJobResult = Fee_Init_JobScanBlockHdrResolve(FALSE);
            break;

        /* Error while reading chunk header. Move on to next chunk */
        case FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_RESOLVE:
            Fee_Gv.eJobResult = Fee_Init_JobScanChunkHdrResolve(FALSE);
            break;

        /* Error while reading data from source chunk. Leave block as INCONSISTENT and move on to next block */
        case FEE_NXT_JOB_CS_COPY_DATA_WRITE:
            Fee_Gv.eJobResult = Fee_CS_JobChunkSwitchCopyDataWrite(FALSE);
            break;

        /* for all the following cases based on the Fee module status error notification will be called */
        case FEE_NXT_JOB_WRITE:
        case FEE_NXT_JOB_WRITE_DATA:
        case FEE_NXT_JOB_WRITE_UNALIGNED_DATA:
        case FEE_NXT_JOB_ERASE_IMMEDIATE:
        case FEE_NXT_JOB_WRITE_BLOCK_HDR_VLD:
        case FEE_NXT_JOB_WRITE_DONE:
        {
            u8ChunkGrpIndex = Fee_Extra_GetBlockChunkGrp(Fee_Gv.u16BlockIndex);

            /* Something wrong in FlashMemory (force chunk switch next write) */
            Fee_Gv.tChunkGrpInfo[u8ChunkGrpIndex].u32DataAddrIt = Fee_Gv.tChunkGrpInfo[u8ChunkGrpIndex].u32HdrAddrIt + \
                                                                  (2U * FEE_BLOCK_OVERHEAD);

            Fee_Gv.eJobResult = Fls_GetJobResult();
            Fee_Gv.eModuleStatus = MEMIF_IDLE;

            FEE_NVM_JOB_ERROR_NOTIFICATION
            break;
        }

        case FEE_NXT_JOB_READ:
        case FEE_NXT_JOB_INVAL_BLOCK:
        case FEE_NXT_JOB_INVAL_BLOCK_DONE:
        case FEE_NXT_JOB_INIT_SCAN:
        case FEE_NXT_JOB_INIT_SCAN_CHUNK:
        case FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM:
        case FEE_NXT_JOB_INIT_SCAN_CHUNK_HDR_PROGRAM_DONE:
        case FEE_NXT_JOB_CS_COPY_BLOCK:
        case FEE_NXT_JOB_CS_CHUNK_HDR_PROGRAM:
        case FEE_NXT_JOB_CS_COPY_DATA_READ:
        case FEE_NXT_JOB_CS_CHUNK_HDR_VLD_DONE:
        case FEE_NXT_JOB_DONE:
        default:
            Fee_Gv.eJobResult = Fls_GetJobResult();
            Fee_Gv.eModuleStatus = MEMIF_IDLE;

            FEE_NVM_JOB_ERROR_NOTIFICATION
            break;
        }
    }
    else
    {
        /* Fls job has been canceled. Do nothing in this callback.*/
    }
}

/**
* @brief        Erase (pre-allocate) immediate Fee block
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept write job
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Int_JobEraseImmediateBlock(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;
    uint16 u16BlockIndex = Fee_Gv.u16BlockIndex;

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    if (u16BlockIndex >= FEE_CFG_NUM_OF_BLOCKS)
    {
        /* set job as failed */
        eRetVal = MEMIF_JOB_FAILED;
        /* Call job error notification function */
        FEE_NVM_JOB_ERROR_NOTIFICATION
    }
    else
#endif
    {
        /* Perform chunk switch when reserved area has been touched, or do nothing. */
        if (FALSE == Fee_Resv_ReservedAreaWritableChk())
        {
            /* Reserved area is not writable, force the chunk switch */
            /* Get chunk group index */
            Fee_Gv.u8ChunkGroupIt = Fee_Cfg_BlockConfig[u16BlockIndex].u8ChunkGrp;

            eRetVal = Fee_CS_JobActiveChunkSwitch();
        }
        else
        {
            /* Do effectively nothing */
            Fee_Gv.u8Job = FEE_NXT_JOB_DONE;
        }
    }

    return eRetVal;
}

/**
* @brief        Fee write block internal job function
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED Underlying Fls didn't accept write job
*
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Int_JobWriteBlock(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_FAILED;
    uint16 u16AlignedSize;
    Fee_BlockType tBlockHdr;
    Fls_AddressType u32DataAddr;
    Fls_AddressType u32HdrAddr;
    uint16 u16BlockIndex = Fee_Gv.u16BlockIndex;
    const Fee_BlockConfigType *pBlockConfigPtr;
    const Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

    /* Assign pointer */
    pBlockConfigPtr = &(Fee_Cfg_BlockConfig[u16BlockIndex]);
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[pBlockConfigPtr->u8ChunkGrp]);

#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    if (u16BlockIndex >= FEE_CFG_NUM_OF_BLOCKS)
    {
        /* Call job error notification function */
        FEE_NVM_JOB_ERROR_NOTIFICATION
    }
    else
#endif
    {
        /* Get block configuration from generated file */
        tBlockHdr.u16BlockNumber  = pBlockConfigPtr->u16BlockNumber;
        tBlockHdr.u16Length       = pBlockConfigPtr->u16BlockSize;
        tBlockHdr.bImmediateBlock = pBlockConfigPtr->bImmediateData;
        /* Align block size to write */
        u16AlignedSize = Fee_Extra_AlignToVirtualPageSize(tBlockHdr.u16Length);

        /* [SWS_Fee_00009] [SWDESG_FEE_024] */
        if (FALSE == Fee_Resv_ReservedAreaWritableChk())
        {
            /* The block won't fit into current chunk. Active swap sequence... */
            /* Get chunk group index the block belongs to */
            Fee_Gv.u8ChunkGroupIt = pBlockConfigPtr->u8ChunkGrp;

            eRetVal = Fee_CS_JobActiveChunkSwitch();
        }
        else
        {
            /* Normal write and write block header first */

            /* Calculate data and header addresses */
            u32DataAddr = pChunkGrpInfoPtr->u32DataAddrIt - u16AlignedSize;
            u32HdrAddr  = pChunkGrpInfoPtr->u32HdrAddrIt;

            /* Format block header to the write buffer */
            Fee_Extra_FmtBlockHdr(&tBlockHdr, u32DataAddr,
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
                                  pBlockConfigPtr->u8BlockAssignment,
#endif
                                  Fee_Gv.pDataBufferPtr
                                 );

            /* Write header to flash */
            if (((Std_ReturnType)E_OK) == Fls_Write(u32HdrAddr, Fee_Gv.pDataBufferPtr, FEE_BLOCK_OVERHEAD - (2U * FEE_VIRTUAL_PAGE_SIZE)))
            {
                /* Fls read job has been accepted */
                eRetVal = MEMIF_JOB_PENDING;
            }
            else
            {
                /* Fls read job hasn't been accepted */
                eRetVal = MEMIF_JOB_FAILED;
            }
        }

        /* Schedule next job */
        if (FEE_NXT_JOB_CS_CHUNK_HDR_PROGRAM == Fee_Gv.u8Job)
        {
            /* Block write caused chunk switch... */
        }
        else
        {
            Fee_Gv.u8Job = FEE_NXT_JOB_WRITE_DATA;
        }
    }

    return eRetVal;
}

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
