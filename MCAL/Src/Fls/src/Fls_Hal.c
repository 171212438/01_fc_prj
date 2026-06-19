/**
 *   @file    Fls_Hal.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Fls - flash IP wrapper related functions.
 *
 *   @addtogroup Fls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Fls
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
*   0.1.0       20/06/2023    QXW0054       N/A          Fls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Fls increases hardware operation mutex
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Fls_Hal.h"
#include "Fls.h"
#include "Fls_Flash.h"
#include "Fls_version.h"

/*=================================================================================================
*                                      GLOBAL FUNCTIONS
=================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"

FLS_TEXT_SECTION void Fls_Hal_Init(void)
{
    /* Initialize flash hardware
       NOTE: The variable 'Fls_eLLDJobResult' will be updated in the below function*/
    Fls_Flash_Init();
}

FLS_TEXT_SECTION void Fls_Hal_AbortSuspended(void)
{
    /* wait for memory controller to finish erase suspended abort operation */
    if (FLASH_E_OK == Fls_Flash_WaitForOperationFinish())
    {
        /* everything OK */
    }
    else /* operation not finished, aborted on timeout */
    {
        Fls_eLLDJob       = FLASH_JOB_NONE;
        Fls_eLLDJobResult = MEMIF_JOB_FAILED;
    }
}

#if (FLS_CANCEL_API == STD_ON)
void Fls_Hal_Cancel(void)
{
    if (MEMIF_JOB_PENDING == Fls_eLLDJobResult)
    {
        Fls_Flash_Cancel();
    }
    else
    {
        /* no hardware job (asynchronous) is pending, do nothing */

        /* Mark the internal job as failed.*/
        Fls_eLLDJob       = FLASH_JOB_NONE;
        Fls_eLLDJobResult = MEMIF_JOB_CANCELED;
    }
}
#endif

/**
 * @brief          IP wrapper sector erase function.
 */
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Hal_Erase(void)
{
    return Fls_Flash_Erase(Fls_u32JobSectorIt);
}

/**
 * @brief          IP wrapper sector write function.
 */
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Hal_Write(const Fls_AddressType u32WriteAddr,
                                                 const Fls_AddressType u32Length,
                                                 const uint8          *pJobDataSrcPtr)
{
    return Fls_Flash_Write(u32WriteAddr, u32Length, pJobDataSrcPtr);
}

/*
 */
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Hal_Read(const Fls_AddressType u32ReadAddr,
                                                const Fls_AddressType u32Length,
                                                uint8                *pJobDataDestPtr)
{
    return Fls_Flash_Read(u32ReadAddr, u32Length, pJobDataDestPtr);
}

#if ((FLS_COMPARE_API == STD_ON) || (FLS_BLANK_CHECK_API == STD_ON))
/**
 * @brief          IP wrapper sector compare function.
 */
Fls_LLDReturnType Fls_Hal_Compare(const Fls_AddressType u32CompareAddr,
                                  const Fls_AddressType u32Length,
                                  const uint8          *pJobDataSrcPtr)
{
    return Fls_Flash_Compare(u32CompareAddr, u32Length, pJobDataSrcPtr);
}
#endif /* ( FLS_COMPARE_API == STD_ON ) || (FLS_BLANK_CHECK_API == STD_ON) */

/**
 * @brief          Process ongoing erase or write hardware job.
 * @details        In case Async Operation is ongoing this function will complete the following job:
 *                 - Erase
 *                 - Erase on Interleaved sectors
 *                 - Write
 *                 - Erase blank Check
 */
FLS_TEXT_SECTION void Fls_Hal_LLDMainFunction(void)
{
    if (MEMIF_JOB_PENDING == Fls_eLLDJobResult)
    {
        /* some hardware job (asynchronous) is pending */
        if (FLASH_JOB_ERASE == Fls_eLLDJob)
        {

            Fls_Flash_MainFunctionErase();
        }
        /* Write hardware job (asynchronous) is pending */
        else if (FLASH_JOB_WRITE == Fls_eLLDJob)
        {

            Fls_Flash_MainFunctionWrite();
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

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

#ifdef __cplusplus
}
#endif
