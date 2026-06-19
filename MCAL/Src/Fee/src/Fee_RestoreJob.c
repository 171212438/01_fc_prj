/**
*   @file    Fee_RestoreJob.c
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
#include "Fee_RestoreJob.h"
#include "Fee_Internal.h"
#include "Fee.h"

/*==================================================================================================
*                                       GOLBAL FUNCTIONS
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"

/**
* @brief        Restore Original Job after chunk switch done
* @return       MemIf_JobResultType
*/
FEE_TEXT_SECTION MemIf_JobResultType Fee_Restore_JobRestoreOriginalJob(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_FAILED;

    if(FEE_NXT_JOB_WRITE == Fee_Gv.u8Job)
    {
        eRetVal = Fee_Int_JobWriteBlock();
    }
    else if(FEE_NXT_JOB_ERASE_IMMEDIATE == Fee_Gv.u8Job)
    {
        eRetVal = Fee_Int_JobEraseImmediateBlock();
    }
    else
    {
        /* Something wrong here */
    }

    return eRetVal;
}

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
