/**
*   @file    Fee_Reserve.h
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

#ifndef FEE_RESERVE_H
#define FEE_RESERVE_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Fee_InternalTypes.h"
#include "Fee_Types.h"
#include "Std_Types.h"
#include "Fee_Cfg.h"

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

#if (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON)
/**
* @brief       Checks whether the area specified by header and data address touches the Reserved Area.
* @param       u8ChunkGrpIndex - Chunk Group Index
* @return      boolean
*              -TRUE The Reserved Area is touched.
*              -FALSE The Reserved Area is not touched.
*/
extern boolean Fee_Resv_TouchReservedAreaInChunkGrp(const uint8 u8ChunkGrpIndex);

/**
* @brief    Stores the information about touching the Reserved Area for the block
*           specified by BlockNumber.
*
* @param    u16BlockNumber - number of the block touching the Reserved Area
*
*
*/
extern void Fee_Resv_RecordBlockInTouchResvArea(const uint16 u16BlockNumber);

/**
* @brief    Removes the information about touching the Reserved Area for all blocks
*           within a chunk group specified by u8ChunkGrpIndex.
* @return   void
*
* @param    u8ChunkGrpIndex - chunk group index
*
*/
extern void Fee_Resv_RemoveBlockInTouchResvdArea(const uint8 u8ChunkGrpIndex);
#endif

/**
* @brief      Checks whether the block is writable into the reserved area.
*
* @return     boolean
*             TRUE   The block is writable into the reserved area.
*             FALSE  The block is not writable into the reserved area.
*
*/
extern boolean Fee_Resv_ReservedAreaWritableChk(void);


#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                   INLINE  FUNCTION
==================================================================================================*/
/**
* @brief Function to compute the power of 2 out of the 5 LSB bits of Input value.
*
* @param  u32Val - value out of which 5 LSB bits is taken as an input for the
*                     power of 2 computation
*
*/
LOCAL_INLINE uint32 Fee_Resv_PowerOf2Of5_LSB(const uint32 u32Val)
{
    return (uint32)(0x00000001UL << (u32Val & 0x1FUL));
}

#ifdef __cplusplus
}
#endif

#endif /* FEE_RESERVE_H */

/** @}*/
