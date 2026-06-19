/**
*   @file    Fee.Internal.h
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

#ifndef FEE_INTERNAL_H
#define FEE_INTERNAL_H

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

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
* @brief       Fee job queue list handler
*/
typedef MemIf_JobResultType (*FeeJobQueMngrHandler)(void);

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

/**
* @brief        Fee mainfunction internal job function
* @note         Schedule job and update job result
*/
extern void Fee_Int_MainFunction(void);

/**
* @brief        Fee job end notification internal job function
* @note         Schedule job and update job result
*/
extern void Fee_Int_JobEndNotification(void);

/**
* @brief        Fee job error notification internal job function
* @note         Schedule job and update job result
*/
extern void Fee_Int_JobErrorNotification(void);

/**
* @brief        Fee write block internal job function
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED Underlying Fls didn't accept write job
*
*/
extern MemIf_JobResultType Fee_Int_JobWriteBlock(void);

/**
* @brief        Erase (pre-allocate) immediate Fee block
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept write job
*
*/
extern MemIf_JobResultType Fee_Int_JobEraseImmediateBlock(void);

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"


/*==================================================================================================
*                                   INLINE  FUNCTION
==================================================================================================*/
/**
* @brief        Force no available space in the chunk group
* @note         Can be used to force chunk switch on next write in some circumstances
*/
LOCAL_INLINE void Fee_Int_ForceNoAvailSpace(uint8 u8ChunkGrpIndex)
{
    Fee_Gv.tChunkGrpInfo[u8ChunkGrpIndex].u32DataAddrIt = Fee_Gv.tChunkGrpInfo[u8ChunkGrpIndex].u32HdrAddrIt + \
                                                          (2U * FEE_BLOCK_OVERHEAD);
}


#ifdef __cplusplus
}
#endif

#endif /* FEE_INTERNAL_H */

/** @}*/
