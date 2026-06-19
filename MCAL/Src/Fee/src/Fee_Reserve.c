/**
 *   @file    FeeReserve.c
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
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       14/07/2023    QXW0100       N/A          Fee Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0055       N/A          Fix bug and forbidden immediate block &
Fee_Cancel
*   0.4.0       20/11/2023    QXW0055       N/A          Fix AMDC problems
*   0.5.0       03/06/2024    QXW0055       N/A          Add immediate block & Fee_Cancel support
and foreign block support
*    ~
*   1.1.0       23/11/2024    QXW0055       N/A          No substantial content update
*   1.2.0       30/04/2025    QXW0055       N/A          Modified Fee softWare structure
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Fee_Reserve.h"
#include "Fee_Extra.h"
#include "Fee.h"

/* clang-format off */
/*==================================================================================================
*                                 LOCAL FUNCTIONS DECLARATION
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
FEE_TEXT_SECTION static boolean Fee_Resv_ReservedAreaTouchedChk(const uint16 u16BlockNumber);
#endif /* (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) */

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
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
/**
* @brief  Returns the information about touching the Reserved Area by the block
*         specified by uBlockuNumber.
* @return boolean
*         TRUE  - the Reserved Area is touched by the block
*         FALSE - the Reserved Area is not touched by the block
*
* @param u16BlockNumber - block number
*
*/
FEE_TEXT_SECTION static boolean Fee_Resv_ReservedAreaTouchedChk(const uint16 u16BlockNumber)
{
    uint32 u32Index;
    boolean bRetVal;

    /*The Block information is stored by 1 bit, 32 blocks will be stored in one element of Fee_aReservedAreaTouched*/
    /*Calculate index of the element that store the block information*/
    u32Index = ((uint32)u16BlockNumber) >> 5U;
    /*Check if the bit is 1*/
    if (0U != ((Fee_OpsGv.au32ReservedAreaTouched[u32Index]) & Fee_Resv_PowerOf2Of5_LSB((uint32)u16BlockNumber)))
    {
        bRetVal = TRUE;
    }
    else
    {
        bRetVal = FALSE;
    }
    return bRetVal;
}
#endif /* (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) */

/*==================================================================================================
*                                       GOLBAL FUNCTIONS
==================================================================================================*/
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
/**
* @brief       Checks whether the area specified by header and data address touches the Reserved Area.
* @param       u8ChunkGrpIndex - Chunk Group Index
* @return      boolean
*              -TRUE The Reserved Area is touched.
*              -FALSE The Reserved Area is not touched.
*/
FEE_TEXT_SECTION boolean Fee_Resv_TouchReservedAreaInChunkGrp(const uint8 u8ChunkGrpIndex)
{
    boolean bRetVal;
    Fls_LengthType u32AvailSpace;
    uint32 u32ResvSpace;
    const Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;

    /* Assign pointer */
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[u8ChunkGrpIndex]);

    /* Reserved space of chunk group*/
    u32ResvSpace = Fee_Cfg_ChunkGrps[u8ChunkGrpIndex].u32ResvSize;

    /* Calculate available space in active chunk */
    u32AvailSpace = pChunkGrpInfoPtr->u32DataAddrIt - pChunkGrpInfoPtr->u32HdrAddrIt;

    if ((FEE_BLOCK_OVERHEAD + u32ResvSpace) > u32AvailSpace)
    {
        bRetVal = TRUE;
    }
    else
    {
        bRetVal = FALSE;
    }

    return bRetVal;
}

/**
* @brief    Stores the information about touching the Reserved Area for the block
*           specified by BlockNumber.
*
* @param    u16BlockNumber - number of the block touching the Reserved Area
*
*
*/
FEE_TEXT_SECTION void Fee_Resv_RecordBlockInTouchResvArea(const uint16 u16BlockNumber)
{
    uint32 u32Index;

    u32Index = ((uint32)u16BlockNumber) >> 5U;

    Fee_OpsGv.au32ReservedAreaTouched[u32Index] |= Fee_Resv_PowerOf2Of5_LSB((uint32)u16BlockNumber);
}

/**
* @brief    Removes the information about touching the Reserved Area for all blocks
*           within a chunk group specified by u8ChunkGrpIndex.
* @return   void
*
* @param    u8ChunkGrpIndex - chunk group index
*
*/
FEE_TEXT_SECTION void Fee_Resv_RemoveBlockInTouchResvdArea(const uint8 u8ChunkGrpIndex)
{
    uint16 u16BlockIndex;
    uint32 u32Index = 0UL;
    uint32 u32BitMask = 0x00000001UL;
#if (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON)
    uint16 u16BlockTotalNum = FEE_CFG_NUM_OF_BLOCKS + Fee_OpsGv.u16ForeignBlocksNumber;
#else
    uint16 u16BlockTotalNum = FEE_CFG_NUM_OF_BLOCKS;
#endif

    for (u16BlockIndex = 0U; u16BlockIndex < u16BlockTotalNum; u16BlockIndex++)
    {
        /*Check if the block "BlockIt" is in ClrGrpIndex*/
        if (u8ChunkGrpIndex == Fee_Extra_GetBlockChunkGrp(u16BlockIndex))
        {
            /*Remove information bit of the block*/
            Fee_OpsGv.au32ReservedAreaTouched[u32Index] &= (~u32BitMask);
        }
        /*Check if the block is the last block in one element of au32ReservedAreaTouched */
        if (0x80000000UL == u32BitMask)
        {
            /*Reset Mask to the 1st bit*/
            u32BitMask = 0x00000001UL;
            /*Move to the next element of au32ReservedAreaTouched*/
            u32Index++;
        }
        else
        {
            /*Move to next bit for next block "BlockIt+1"*/
            u32BitMask = u32BitMask << 1U;
        }
    }
}
#endif /* (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) */

/**
* @brief      Checks whether the block is writable into the reserved area.
*
* @return     boolean
*             TRUE   The block is writable into the reserved area.
*             FALSE  The block is not writable into the reserved area.
*
*/
FEE_TEXT_SECTION boolean Fee_Resv_ReservedAreaWritableChk(void)
{
    boolean bRetVal;
    uint16 u16BlockSize;
    uint16 u16AlignedSize;
    Fls_LengthType u32ChunkAvailSpace;
    uint8 u8ChunkGrpIndex;
    uint32 u32ReservedSpace;
    boolean bImmediateData;
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
    boolean bReservedAreaTouched;
#endif
    const Fee_BlockInfoType *pBlockInfoPtr;
    const Fee_ChunkGroupInfoType *pChunkGrpInfoPtr;
    uint16 u16BlockIndex = Fee_Gv.u16BlockIndex;

    /* Index of chunk group that Fee block configured */
    u8ChunkGrpIndex = Fee_Extra_GetBlockChunkGrp(u16BlockIndex);

    /* Assign pointer */
    pBlockInfoPtr = &(Fee_Gv.tBlockInfo[u16BlockIndex]);
    pChunkGrpInfoPtr = &(Fee_Gv.tChunkGrpInfo[u8ChunkGrpIndex]);

    /* Reserved space of chunk group */
    u32ReservedSpace = Fee_Cfg_ChunkGrps[u8ChunkGrpIndex].u32ResvSize;

    /* Calculate available space in active chunk */
    u32ChunkAvailSpace = pChunkGrpInfoPtr->u32DataAddrIt - pChunkGrpInfoPtr->u32HdrAddrIt;

    /* Get size of Fee block and align to virtual page size */
    u16BlockSize = Fee_Extra_GetBlockSize(u16BlockIndex);
    u16AlignedSize = Fee_Extra_AlignToVirtualPageSize(u16BlockSize);

    /* Stop condition: One FEE_BLOCK_OVERHEAD must be left blank to have a clear separation
       between header block space and data block space */
    if ( ( ((uint32)u16AlignedSize) + (2U * FEE_BLOCK_OVERHEAD) ) > u32ChunkAvailSpace )
    {
        /* Rest space is not enough for current block write */
        bRetVal = FALSE;
    }
    else if ( ( ((uint32)u16AlignedSize) + (2U * FEE_BLOCK_OVERHEAD) + u32ReservedSpace ) > u32ChunkAvailSpace )
    {
        /* Current block can be write if touch reserve area */
        bImmediateData = Fee_Extra_GetBlockImmediate(u16BlockIndex);

        /* Block targets reserved area */
#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
        bReservedAreaTouched = Fee_Resv_ReservedAreaTouchedChk(u16BlockIndex);

        if ((TRUE == bImmediateData) && (FALSE == bReservedAreaTouched))
#else
        if (TRUE == bImmediateData)
#endif
        {
            /* Immediate block - only writable if not already present in the reserved area */
            /* The block is written in the chunk - is it written in the reserved area? */
            if ( ( (0UL == pBlockInfoPtr->u32DataAddr) && (0UL == pBlockInfoPtr->u32InvalidAddr) ) ||
                    ((FEE_BLOCK_OVERHEAD + u32ReservedSpace) <= (pBlockInfoPtr->u32DataAddr - (pBlockInfoPtr->u32InvalidAddr + FEE_VIRTUAL_PAGE_SIZE)))
               )
            {
                /* The block is not written at all or never written in the reserved area */
                bRetVal = TRUE;
            }
            else
            {
                bRetVal = FALSE;
            }
        }
        else
        {
            bRetVal = FALSE;
        }
    }
    else
    {
        /* Block does not target reserved area */
        bRetVal = TRUE;
    }
    return bRetVal;
}

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"
/* clang-format on */

#ifdef __cplusplus
}
#endif

/** @}*/
