/**
*   @file    FeeInternal.c
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
#include "Mcal.h"
#include "Fee_InternalTypes.h"
#include "Fee_Types.h"
#include "Fee_Extra.h"

/*==================================================================================================
*                                       GOLBAL FUNCTIONS
==================================================================================================*/

#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

/**
* @brief        Format Fee chunk header parameters to write buffer
*
* @param        pChunkHdrPtr   Chunk header type
* @param        pDataBufPtr    Pointer to write buffer
*
*/
FEE_TEXT_SECTION void Fee_Extra_FmtChunkHdr(const Fee_ChunkHeaderType *pChunkHdrPtr, uint8 *pDataBufPtr)
{
    uint32 u32CheckSum;
    const uint8 *pTargetEndPtr;
    uint8 *pTempBufPtr = pDataBufPtr;

    /* Assign pointer */
    pTargetEndPtr = &(pDataBufPtr[FEE_CHUNK_OVERHEAD]);

    /* Calculate the chunk header Checksum */
    u32CheckSum = pChunkHdrPtr->u32ChunkID + pChunkHdrPtr->u32StartAddr + pChunkHdrPtr->u32Length;

    /*Fee chunk header parameters to write buffer*/
    FEE_WRITE_WORD(pTempBufPtr, FEE_CHUNK_ID_INDEX, pChunkHdrPtr->u32ChunkID);
    FEE_WRITE_WORD(pTempBufPtr, FEE_CHUNK_ADDRESS_INDEX, pChunkHdrPtr->u32StartAddr);
    FEE_WRITE_WORD(pTempBufPtr, FEE_CHUNK_SIZE_INDEX, pChunkHdrPtr->u32Length);
    FEE_WRITE_WORD(pTempBufPtr, FEE_CHUNK_CHECKSUM_INDEX, u32CheckSum);

    /* Update pTempBufPtr pointer for filling padding data */
    pTempBufPtr = &(pTempBufPtr[FEE_CHUNK_HEADER_PART1_SIZE]);

    /* Fill rest of the header with the erase pattern */
    for ( ; pTempBufPtr < pTargetEndPtr; pTempBufPtr++)
    {
        *pTempBufPtr = FEE_ERASED_VALUE;
    }
}

/**
* @brief        Parse Fee chunk header parameters from read buffer
*
* @param        pChunkHdr   Pointer to chunk header
* @param        pDataPtr    Pointer to read buffer
*
* @return       Fee_ChunkStatusType
*
*/
FEE_TEXT_SECTION Fee_ChunkStatusType Fee_Extra_ParseChunkHdr(Fee_ChunkHeaderType *pChunkHdr, const uint8 *pDataPtr)
{
    Fee_ChunkStatusType u8RetVal;
    uint32 u32CheckSumRd;
    uint32 u32CheckSumCal;
    boolean bValidFlag   = FALSE;
    boolean bInvalidFlag = FALSE;
    const uint8 *pTargetEndPtr;
    const uint8 *pTempChunkHdrPtr = pDataPtr;

    /* Check 1st part of the header */
    pTargetEndPtr = &pDataPtr[FEE_CHUNK_HEADER_STATUS_OFFSET];

    pChunkHdr->u32ChunkID   = FEE_READ_WORD(pTempChunkHdrPtr, FEE_CHUNK_ID_INDEX);
    pChunkHdr->u32StartAddr = FEE_READ_WORD(pTempChunkHdrPtr, FEE_CHUNK_ADDRESS_INDEX);
    pChunkHdr->u32Length    = FEE_READ_WORD(pTempChunkHdrPtr, FEE_CHUNK_SIZE_INDEX);
    u32CheckSumRd           = FEE_READ_WORD(pTempChunkHdrPtr, FEE_CHUNK_CHECKSUM_INDEX);

    u32CheckSumCal = pChunkHdr->u32ChunkID + pChunkHdr->u32StartAddr + pChunkHdr->u32Length;

    if ( (u32CheckSumCal != u32CheckSumRd) ||
         (((Std_ReturnType)E_OK) != Fee_Extra_PaddingDataCheck(&pTempChunkHdrPtr[FEE_CHUNK_HEADER_PART1_SIZE], pTargetEndPtr)) ||
         (((Std_ReturnType)E_OK) != Fee_Extra_ParseFlag(pTargetEndPtr, FEE_VALIDATED_VALUE, &bValidFlag)) ||
         (((Std_ReturnType)E_OK) != Fee_Extra_ParseFlag(&pTargetEndPtr[FEE_VIRTUAL_PAGE_SIZE],FEE_INVALIDATED_VALUE, &bInvalidFlag))
       )
    {
        /* FEE_chunk_HEADER_INVALID */
    	u8RetVal = FEE_CHUNK_HEADER_INVALID;
    }
    else if (FALSE == bInvalidFlag)
    {
        if (FALSE == bValidFlag)
        {
            u8RetVal = FEE_CHUNK_INCONSISTENT;
        }
        else
        {
            u8RetVal = FEE_CHUNK_VALID;
        }
    }
    else
    {
        u8RetVal = FEE_CHUNK_INVALID;
    }
    return u8RetVal;
}

/**
* @brief        Format Fee block parameters into a write buffer
*
* @param        tBlockHdr         block header (block number and Length)
* @param        u32TargetAddress  Logical address of Fee block in Fls adress space
* @param        u8BlockAssignment Block assignment (when FEE_FOREIGN_BLOCKS_SUPPORT is on)
* @param        pDataBuf          Pointer to format buffer
*
*/
FEE_TEXT_SECTION void Fee_Extra_FmtBlockHdr(const Fee_BlockType *tBlockHdr, const Fls_AddressType u32TargetAddress,
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
                                            const Fee_BlockAssignmentType u8BlockAssignment,
#endif
                                            uint8 *pDataBuf
                                           )
{
    uint32 u32CheckSum = 0UL;
    const uint8 *pTargetEndPtr;
    uint8 *pTempDataBuf = pDataBuf;

    /* Assign pointer */
    pTargetEndPtr = &(pTempDataBuf[FEE_BLOCK_OVERHEAD]);

    /* Calculate the block header Checksum */
    u32CheckSum = ((uint32)(tBlockHdr->u16BlockNumber)) + ((uint32)(tBlockHdr->u16Length)) + u32TargetAddress;

    /* Use MSB of the Checksum for the immediate block flag so the Checksum is 31-bit */
    if (TRUE == (tBlockHdr->bImmediateBlock))
    {
        u32CheckSum += 1U;
        u32CheckSum |= FEE_BLOCK_IMMED_MASK;
    }
    else
    {
        u32CheckSum &= FEE_BLOCK_IMMED_USED_MASK;
    }

    /* Format Fee block parameters into a write buffer*/
    FEE_WRITE_HALFWORD(pTempDataBuf, FEE_BLOCK_ID_INDEX, tBlockHdr->u16BlockNumber);
    FEE_WRITE_HALFWORD(pTempDataBuf, FEE_BLOCK_SIZE_INDEX, tBlockHdr->u16Length);
    FEE_WRITE_WORD(pTempDataBuf, FEE_BLOCK_ADDRESS_INDEX, u32TargetAddress);
    FEE_WRITE_WORD(pTempDataBuf, FEE_BLOCK_CHECKSUM_INDEX, u32CheckSum);
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    FEE_WRITE_BYTE(pTempDataBuf, FEE_BLOCK_ASSIGNMENT_INDEX, u8BlockAssignment);
    /* Update pTempDataBuf address for filling padding data  */
    pTempDataBuf = &(pTempDataBuf[FEE_BLOCK_ASSIGNMENT_INDEX + 1U]);
#else
    /* Update pTempDataBuf address for filling padding data  */
    pTempDataBuf = &(pTempDataBuf[FEE_BLOCK_ASSIGNMENT_INDEX]);
#endif

    /* Fill rest of the header with the erase pattern */
    for ( ; pTempDataBuf < pTargetEndPtr; pTempDataBuf++)
    {
        *pTempDataBuf = FEE_ERASED_VALUE;
    }
}

/**
* @brief        Parse Fee block header parameters from read buffer
*
* @param        pBlockHdrPtr            Fee Block Header( Pblock number and Length)
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
FEE_TEXT_SECTION Fee_BlockStatusType Fee_Extra_ParseBlockHdr(Fee_BlockType *const pBlockHdrPtr,
                                                             Fls_AddressType *const pDataAddrPtr,
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
                                                             uint8 *const pBlockAssignmentPtr,
#endif
                                                             const uint8 *pDataBufPtr
                                                            )
{
    Fee_BlockStatusType u8RetVal = FEE_BLOCK_INVALID;
    uint32 u32CheckSumRd;
    uint32 u32CheckSumCalc;
    const uint8 *pTargetEndPtr;
    const uint8 *pTempDataBufPtr = pDataBufPtr;
    boolean bValidFlag   = FALSE;
    boolean bInvalidFlag = FALSE;
    uint8 u8PaddingCheckOffset;

    if ((Std_ReturnType)E_OK == Fee_Extra_PaddingDataCheck(pTempDataBufPtr, &(pTempDataBufPtr[FEE_BLOCK_OVERHEAD])))
    {
        u8RetVal = FEE_BLOCK_HEADER_BLANK;
    }
    else
    {
        /* Check 1st part of the header */
        pTargetEndPtr = &pDataBufPtr[FEE_BLOCK_HEADER_STATUS_OFFSET];

        pBlockHdrPtr->u16BlockNumber =  FEE_READ_HALFWORD(pTempDataBufPtr, FEE_BLOCK_ID_INDEX);
        pBlockHdrPtr->u16Length      =  FEE_READ_HALFWORD(pTempDataBufPtr, FEE_BLOCK_SIZE_INDEX);
        *pDataAddrPtr = FEE_READ_WORD(pTempDataBufPtr, FEE_BLOCK_ADDRESS_INDEX);
        u32CheckSumRd = FEE_READ_WORD(pTempDataBufPtr, FEE_BLOCK_CHECKSUM_INDEX);
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
        *pBlockAssignmentPtr = FEE_READ_BYTE(pTempDataBufPtr, FEE_BLOCK_ASSIGNMENT_INDEX);
        u8PaddingCheckOffset = FEE_BLOCK_ASSIGNMENT_INDEX + 1U;
#else
        u8PaddingCheckOffset = FEE_BLOCK_ASSIGNMENT_INDEX;
#endif
        /* Use MSB of Checksum for immediate block flag so
           the Checksum is 31-bit long */
        u32CheckSumCalc = (uint32)(pBlockHdrPtr->u16BlockNumber) + (uint32)(pBlockHdrPtr->u16Length) + (*pDataAddrPtr);

        if (0U == (u32CheckSumRd & FEE_BLOCK_IMMED_MASK))
        {
            pBlockHdrPtr->bImmediateBlock = FALSE;
        }
        else
        {
            pBlockHdrPtr->bImmediateBlock = TRUE;
            u32CheckSumCalc += 1U;
        }

        /* Ignore MSB since it's used for ImmediateBlock flag */
        if ( ((u32CheckSumRd & FEE_BLOCK_IMMED_USED_MASK) != (u32CheckSumCalc & FEE_BLOCK_IMMED_USED_MASK)) ||
             (((Std_ReturnType)E_OK) != Fee_Extra_PaddingDataCheck(&(pTempDataBufPtr[u8PaddingCheckOffset]), pTargetEndPtr)) ||
             (((Std_ReturnType)E_OK) != Fee_Extra_ParseFlag(pTargetEndPtr, FEE_VALIDATED_VALUE, &bValidFlag)) ||
             (((Std_ReturnType)E_OK) != Fee_Extra_ParseFlag(&(pTargetEndPtr[FEE_VIRTUAL_PAGE_SIZE]), FEE_INVALIDATED_VALUE, &bInvalidFlag))
           )
        {
            u8RetVal = FEE_BLOCK_HEADER_INVALID;
        }
        else
        {
            /* Block header is valid */
            if (TRUE == bValidFlag)
            {
                if (FALSE == bInvalidFlag)
                {
                    u8RetVal = FEE_BLOCK_VALID;           /* TRUE and FALSE */
                }
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
                else
                {
                    u8RetVal = FEE_BLOCK_INVALIDATED;     /* TRUE and TRUE */
                }
#endif
            }
            else
            {
                if (FALSE == bInvalidFlag)
                {
                    u8RetVal = FEE_BLOCK_INCONSISTENT;    /* FALSE and FALSE */
                }
                else
                {
                    /* FALSE and TRUE -- invalid */
                }
            }
        }
    }

    return u8RetVal;
}

/**
* @brief        Format validation or invalidation flag to write buffer
*
* @param        pTargetPtr   Pointer to write buffer
* @param        u8FlagMode   FEE_VALIDATED_VALUE or FEE_INVALIDATED_VALUE
*
*
*/
FEE_TEXT_SECTION void Fee_Extra_FmtFlag(uint8 *pTargetPtr, const uint8 u8FlagMode)
{
    const uint8 *pTargetEndPtr = &(pTargetPtr[FEE_VIRTUAL_PAGE_SIZE]);
    uint8 *pTempPtr = pTargetPtr;

    *pTempPtr = u8FlagMode;
    pTempPtr++;

    for (; pTempPtr < pTargetEndPtr; pTempPtr++)
    {
        /*Store erase value to target address*/
        *pTempPtr = FEE_ERASED_VALUE;
    }
}

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
FEE_TEXT_SECTION  Std_ReturnType Fee_Extra_PaddingDataCheck(const uint8 *pTargetPtr, const uint8 *const pTargetEndPtr)
{
    Std_ReturnType u8RetVal = (Std_ReturnType)E_OK;
    const uint8 *pTempTargetPtr = pTargetPtr;

    for ( ; pTempTargetPtr < pTargetEndPtr; pTempTargetPtr++)
    {
        if (FEE_ERASED_VALUE == *pTempTargetPtr)
        {
            /* Pattern match */
        }
        else
        {
            u8RetVal = (Std_ReturnType)E_NOT_OK;
            break;
        }
    }

    return u8RetVal;
}

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
FEE_TEXT_SECTION Std_ReturnType Fee_Extra_ParseFlag(const uint8 *const pTargetPtr, const uint8 u8FlagMode, boolean *pFlagVal)
{
    Std_ReturnType u8RetVal;

    if ((u8FlagMode == *pTargetPtr) || (FEE_ERASED_VALUE == *pTargetPtr))
    {
        /* The mode can be either present or not */
        if (u8FlagMode == *pTargetPtr)
        {
            *pFlagVal = TRUE;
        }
        else
        {
            *pFlagVal = FALSE;
        }

        /* Check rest of the FEE_VIRTUAL_PAGE_SIZE */
        u8RetVal = Fee_Extra_PaddingDataCheck(&pTargetPtr[1U], &pTargetPtr[FEE_VIRTUAL_PAGE_SIZE]);
    }
    else
    {
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }

    return u8RetVal;
}

/**
* @brief        Searches ordered list of Fee blocks and returns index of block
*               with matching BlockNumber
*
* @param        u16BlockNumber             Fee block number (FeeBlockNumber)
*
*               Fee block index 0xFFFF if BlockNumber is invalid
*
*/
FEE_TEXT_SECTION uint16 Fee_Extra_GetBlockIndex(const uint16 u16BlockNumber)
{
    sint32 s32Low = 0L;
    sint32 s32High = (sint32)FEE_CFG_NUM_OF_BLOCKS - 1;
    sint32 s32Middle;
    uint16 u16RetVal = 0xFFFFU;

    /*Using binary search to find the index of BlockNumber*/
    while (s32Low <= s32High)
    {
        s32Middle = s32Low + ((s32High - s32Low) / 2);

        if (u16BlockNumber < Fee_Cfg_BlockConfig[s32Middle].u16BlockNumber)
        {
            /*Store High for next searching*/
            s32High = s32Middle - 1;
        }
        else if (u16BlockNumber > Fee_Cfg_BlockConfig[s32Middle].u16BlockNumber)
        {
            /*Store Low for next searching*/
            s32Low = s32Middle + 1;
        }
        else
        {
            /*BlockNumber is matched, store the index and return*/
            u16RetVal = (uint16)s32Middle;
            break;
        }
    }
    /*RetVal will be 0xFFFFU if BlockNumber is not matched with any index*/
    return u16RetVal;
}

/**
* @brief        Align block size to multiple of FEE_VIRTUAL_PAGE_SIZE
*
* @param        u16BlockSize        Fee block size (FeeBlockSize)
*
* @note         Fee block size to integer multiple of FEE_VIRTUAL_PAGE_SIZE
*
*/
FEE_TEXT_SECTION uint16 Fee_Extra_AlignToVirtualPageSize(uint16 u16BlockSize)
{
    uint16 u16Retval;
    /* Check whether the block size is integer multiple of FEE_VIRTUAL_PAGE_SIZE */
    if (0U == (u16BlockSize % FEE_VIRTUAL_PAGE_SIZE))
    {
        /* block size is an integer multiple of FEE_VIRTUAL_PAGE_SIZE */
        u16Retval = u16BlockSize;
    }
    else
    {
        u16Retval = ((u16BlockSize / FEE_VIRTUAL_PAGE_SIZE) + 1U) * FEE_VIRTUAL_PAGE_SIZE;
    }

    return u16Retval;
}

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
FEE_TEXT_SECTION void Fee_Extra_CopyDataToBuffer(const uint8 *pSourcePtr, uint8 *pTargetPtr, const uint16 u16Length)
{
    const uint8 *pTargetEndPtr = &(pTargetPtr[u16Length]);
    const uint8 *pPageEndPtr = &(pTargetPtr[FEE_VIRTUAL_PAGE_SIZE]);
    uint8 *pTempTargetPtr = pTargetPtr;
    const uint8 *pTempSourcePtr = pSourcePtr;

    /* Copy data to page buffer */
    for ( ; pTempTargetPtr < pTargetEndPtr; pTempTargetPtr++)
    {
        *pTempTargetPtr = *pTempSourcePtr;
        pTempSourcePtr++;
    }

    /* Fill rest of the page buffer with FEE_ERASED_VALUE */
    for ( ; pTempTargetPtr < pPageEndPtr; pTempTargetPtr++)
    {
        *pTempTargetPtr = FEE_ERASED_VALUE;
    }
}

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
