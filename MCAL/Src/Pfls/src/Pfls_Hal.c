/**
 *   @file    Pfls_Hal.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Pfls - flash IP wrapper related functions.
 *
 *   @addtogroup Pfls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pfls
*   PLATFORM             : Flagchip FC7300
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
*   1.4.0       09/29/2025    QXW0054       N/A          Pfls Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Pfls_Hal.h"
#include "Pfls.h"
#include "Pfls_Flash.h"
#include "Pfls_version.h"

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"

PFLS_TEXT_SECTION void Pfls_Hal_Init(void)
{
    /* Initialize flash hardware
       NOTE: The variable 'Pfls_eLLDJobResult' will be updated in the below function*/
    Pfls_Flash_Init();
}

PFLS_TEXT_SECTION void Pfls_Hal_AbortSuspended(void)
{
    /* wait for memory controller to finish erase suspended abort operation */
    if (PFLASH_E_OK == Pfls_Flash_WaitForOperationFinish())
    {
        /* everything OK */
    }
    else /* operation not finished, aborted on timeout */
    {
        Pfls_eLLDJob       = PFLASH_JOB_NONE;
        Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
    }
}

#if (PFLS_CANCEL_API == STD_ON)
void Pfls_Hal_Cancel(void)
{
    if (MEMIF_JOB_PENDING == Pfls_eLLDJobResult)
    {
        Pfls_Flash_Cancel();
    }
    else
    {
        /* no hardware job (asynchronous) is pending, do nothing */

        /* Mark the internal job as failed.*/
        Pfls_eLLDJob       = PFLASH_JOB_NONE;
        Pfls_eLLDJobResult = MEMIF_JOB_CANCELED;
    }
}
#endif

/**
 * @brief          IP wrapper sector erase function.
 */
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Hal_Erase(void)
{
    return Pfls_Flash_Erase(Pfls_u32JobSectorIt);
}

/**
 * @brief          IP wrapper sector write function.
 */
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Hal_Write(const Pfls_AddressType u32WriteAddr,
                                                    const Pfls_AddressType u32Length,
                                                    const uint8           *pJobDataSrcPtr)
{
    return Pfls_Flash_Write(u32WriteAddr, u32Length, pJobDataSrcPtr);
}

/*
 */
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Hal_Read(const Pfls_AddressType u32ReadAddr,
                                                   const Pfls_AddressType u32Length,
                                                   uint8                 *pJobDataDestPtr)
{
    return Pfls_Flash_Read(u32ReadAddr, u32Length, pJobDataDestPtr);
}

#if ((PFLS_COMPARE_API == STD_ON) || (PFLS_BLANK_CHECK_API == STD_ON))
/**
 * @brief          IP wrapper sector compare function.
 */
Pfls_LLDReturnType Pfls_Hal_Compare(const Pfls_AddressType u32CompareAddr,
                                    const Pfls_AddressType u32Length,
                                    const uint8           *pJobDataSrcPtr)
{
    return Pfls_Flash_Compare(u32CompareAddr, u32Length, pJobDataSrcPtr);
}
#endif /* ( PFLS_COMPARE_API == STD_ON ) || (PFLS_BLANK_CHECK_API == STD_ON) */

/**
 * @brief          Process ongoing erase or write hardware job.
 * @details        In case Async Operation is ongoing this function will complete the following job:
 *                 - Erase
 *                 - Erase on Interleaved sectors
 *                 - Write
 *                 - Erase blank Check
 */
PFLS_TEXT_SECTION void Pfls_Hal_LLDMainFunction(void)
{
    if (MEMIF_JOB_PENDING == Pfls_eLLDJobResult)
    {
        /* some hardware job (asynchronous) is pending */
        if (PFLASH_JOB_ERASE == Pfls_eLLDJob)
        {

            Pfls_Flash_MainFunctionErase();
        }
        /* Write hardware job (asynchronous) is pending */
        else if (PFLASH_JOB_WRITE == Pfls_eLLDJob)
        {

            Pfls_Flash_MainFunctionWrite();
        }
        else
        {
            /* Do nothing */
        }
    }
    else
    {
        /* no hardware job (asynchronous) is pending, do nothing */
    }
}

#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

#ifdef __cplusplus
}
#endif
