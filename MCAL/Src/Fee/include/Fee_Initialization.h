/**
*   @file    Fee_Initialization.h
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

#ifndef FEE_INTIALIZATION_H
#define FEE_INTIALIZATION_H

#ifdef __cplusplus
extern "C" {
#endif

/* PRQA S 795 EOF #Misra-C:2012 Rule-5.3 Identifier matches other identifier(s) in an outer scope within the specified number of significant characters.
 * Reason: The function name need to be clear. */

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
*                                     FUNCTION PROTOTYPES
==================================================================================================*/

#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

/**
* @brief        Intialize all global variables
*
*/
extern void Fee_Init_Initialize_Gv(void);

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
extern MemIf_JobResultType Fee_Init_JobScanChunkHdrResolve(const boolean bStatus);

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
extern MemIf_JobResultType Fee_Init_JobScanBlockHdrResolve(const boolean bStatus);

/**
* @brief        Program first Fee chunk in current Fee chunk group by writing
*               chunk header into flash
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase job
*
*/
extern MemIf_JobResultType Fee_Init_JobScanChunkProgram(void);

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
extern MemIf_JobResultType Fee_Init_JobScanChunkProgramDone(void);

/**
* @brief        Scan active chunk of current chunk group or erase and format
*               first chunk if no active chunk can be found
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase or read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase or read job
*               MEMIF_JOB_OK             There is no more chunk groups to scan
*
* @note         Fee_uJobIntClrGrpIt must contain index of current Fee chunk group
*               Initialize the Fee_uJobIntAddrIt iterator to address of
*               the first Fee block header to scan
*               Initialize the HdrAddrIt and DataAddrIt iterators to addresses of
*               the first Fee block header and data block
*
*/
extern MemIf_JobResultType Fee_Init_JobScanChunk(void);

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
extern MemIf_JobResultType Fee_Init_JobScan(void);


#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
                                      INLINE FUNCTION
==================================================================================================*/
/**
* @brief    A wrapper function for Fee_Init_JobScanChunkHdrResolve
*
*/
LOCAL_INLINE MemIf_JobResultType Fee_Init_JobScanChunkHdrResolve_FuncWrap(void)
{
    return Fee_Init_JobScanChunkHdrResolve(TRUE);
}

/**
* @brief    A wrapper function for Fee_JobInternalScanBlockHdrParse
*
*/
LOCAL_INLINE MemIf_JobResultType Fee_Init_JobScanBlockHdrParse_FuncWrap(void)
{
    return Fee_Init_JobScanBlockHdrResolve(TRUE);
}

#ifdef __cplusplus
}
#endif

#endif /* FEE_INTIALIZATION_H */

/** @}*/
