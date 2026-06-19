/**
*   @file    Fee_ChunkSwitch.h
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

#ifndef FEE_CHUNKSWITCH_H
#define FEE_CHUNKSWITCH_H

#ifdef __cplusplus
extern "C" {
#endif

/* PRQA S 795 EOF #Misra-C:2012 Rule-5.3 Identifier matches other identifier(s) in an outer scope within the specified number of significant characters.
 * Reason: The function name need to be clear. */

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

/**
* @brief        Initialize the chunk switch operation on current chunk group
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the erase job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the erase job
*/
extern MemIf_JobResultType Fee_CS_JobActiveChunkSwitch(void);

/**
* @brief        Program chunk header in current chunk(to be switched) because of recent erase
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept the write job
*
*/
extern MemIf_JobResultType Fee_CS_JobChunkSwitchHdrProgram(void);

/**
* @brief        Copy block from source to target chunk
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED Underlying Fls didn't accept the write job
*
*/
extern MemIf_JobResultType Fee_CS_JobChunkSwitchCopyBlock(void);

/**
* @brief        Read data from source chunk to internal data buffer
*
* @param        bStatus                  FALSE if previous Fls read job has failed
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING        Underlying Fls accepted the read job
*               MEMIF_JOB_FAILED         Underlying Fls didn't accept read job
*/
extern MemIf_JobResultType Fee_CS_JobChunkSwitchCopyDataRead(const boolean bStatus);

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
extern MemIf_JobResultType Fee_CS_JobChunkSwitchCopyDataWrite(const boolean bStatus);

/**
* @brief        Program chunk Header when chunk switch is done
*
* @return       MemIf_JobResultType
*               MEMIF_JOB_PENDING Underlying Fls accepted the write job
*               MEMIF_JOB_FAILED Underlying Fls didn't accept write job
*/
extern MemIf_JobResultType Fee_CS_JobChunkSwitchChunkHdrVldDone(void);


#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

/*==================================================================================================
*                                     INLINE FUNCTION
==================================================================================================*/
/**
* @brief    A wrapper function for Fee_JobInternalSwapDataRead
*/
LOCAL_INLINE MemIf_JobResultType Fee_CS_JobChunkSwitchCopyDataRead_FuncWrap(void)
{
    return Fee_CS_JobChunkSwitchCopyDataRead(TRUE);
}

/**
* @brief    A wrapper function for ee_CS_JobChunkSwitchCopyDataWrite
*/
LOCAL_INLINE MemIf_JobResultType Fee_CS_JobChunkSwitchCopyDataWrite_FuncWrap(void)
{
    return Fee_CS_JobChunkSwitchCopyDataWrite(TRUE);
}


#ifdef __cplusplus
}
#endif

#endif /* FEE_CHUNKSWITCH_H */

/** @}*/
