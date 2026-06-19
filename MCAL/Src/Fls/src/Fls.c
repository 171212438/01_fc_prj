/**
 *   @file    Fls.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Fls - flash driver source code.
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

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Fls.h"
#include "Fls_Flash.h"
#include "Fls_Hal.h"
#include "Fls_version.h"
#if ((FLS_DEV_ERROR_DETECT == STD_ON) || (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */

#include "SchM_Fls.h"

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/
/* SWS_Fls_00206 */
#ifndef FLS_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (FLS_AR_RELEASE_MAJOR_VERSION != FLS_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef FLS_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (FLS_SW_MAJOR_VERSION != FLS_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef FLS_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (FLS_SW_MINOR_VERSION != FLS_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef FLS_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (FLS_SW_PATCH_VERSION != FLS_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (FLS_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != FLS_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if (FLS_DEV_ERROR_DETECT == STD_ON)
#define FLS_TOTAL_SIZE (Fls_pConfigPtr->u32TotalSize)
#endif

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/
#define FLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "Fls_MemMap.h"

/**
 * @brief Result of last flash module job
 * @implements Fls_eJobResult_Object
 */
FLS_DATA_SECTION static MemIf_JobResultType Fls_eJobResult = MEMIF_JOB_OK;
/**
 * @brief Last logical address to be processed by a job
 */
FLS_DATA_SECTION static Fls_AddressType Fls_u32JobAddrEnd = 0UL;
/**
 * @brief Maximum number of bytes to read or compare in one cycle of Fls_MainFunction
 */
FLS_DATA_SECTION static Fls_LengthType Fls_u32MaxRead = 0UL;
/**
 * @brief Maximum number of bytes to write in one cycle of Fls_MainFunction
 */
FLS_DATA_SECTION static Fls_LengthType Fls_u32MaxWrite = 0UL;

#define FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Fls_MemMap.h"

#define FLS_START_SEC_VAR_INIT_8
#include "Fls_MemMap.h"

/**
 * @brief Pointer to current position in source data buffer
 */
FLS_DATA_SECTION static const uint8 *Fls_pJobDataSrcPtr = NULL_PTR;
/**
 * @brief Pointer to current position in target data buffer
 */
FLS_DATA_SECTION static uint8 *Fls_pJobDataDestPtr = NULL_PTR;
/**
 * @brief Logical address of data block currently processed by Fls_MainFunction
 */
FLS_DATA_SECTION static Fls_AddressType Fls_u32JobAddrIt = 0UL;
/**
 * @brief Index of last flash sector by current job
 */
FLS_DATA_SECTION static Fls_SectorIndexType Fls_u32JobSectorEnd = 0UL;
/**
 * @brief Type of currently executed job (erase, write, read, or compare)
 */
FLS_DATA_SECTION static Fls_JobType Fls_eJob = FLS_JOB_ERASE;
/**
 * @brief Pointer to current flash module configuration set
 */
FLS_DATA_SECTION static const Fls_ConfigType *Fls_pConfigPtr = NULL_PTR;
/**
 * @brief D_FLASH sector size Occupancy
 */
FLS_DATA_SECTION static uint8 Fls_DflashSectorSizeBit = 0;
/**
 * @brief D_FLASH max wtite size Occupancy
 */
FLS_DATA_SECTION static uint8 Fls_DflashMaxWriteSizeBit = 0;

#define FLS_STOP_SEC_VAR_INIT_8
#include "Fls_MemMap.h"

#define FLS_START_SEC_VAR_INIT_32
#include "Fls_MemMap.h"

#define FLS_STOP_SEC_VAR_INIT_32
#include "Fls_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define FLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "Fls_MemMap.h"
/**
 * @brief Index of flash sector currently processed by a job
 */
FLS_DATA_SECTION volatile Fls_SectorIndexType Fls_u32JobSectorIt = 0UL;
/**
    @brief Result of last flash hardware job
*/
FLS_DATA_SECTION volatile MemIf_JobResultType Fls_eLLDJobResult = MEMIF_JOB_OK;
/**
    @brief Type of current flash hardware job - used for asynchronous operating mode.
*/
FLS_DATA_SECTION Fls_LLDJobType Fls_eLLDJob = FLASH_JOB_NONE;

#define FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Fls_MemMap.h"

#define FLS_START_SEC_VAR_INIT_8
#include "Fls_MemMap.h"

#define FLS_STOP_SEC_VAR_INIT_8
#include "Fls_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"

#if (FLS_DEV_ERROR_DETECT == STD_ON)
FLS_TEXT_SECTION static boolean Fls_IsAddrPageAligned(const Fls_AddressType u32TargetAddress);
FLS_TEXT_SECTION static boolean Fls_IsAddrPageStartAligned(const Fls_AddressType u32TargetAddress);
FLS_TEXT_SECTION static boolean Fls_IsAddrPageEndAligned(const Fls_AddressType u32TargetAddress);
FLS_TEXT_SECTION static boolean Fls_IsAddrSectorStartAligned(const Fls_AddressType u32TargetAddress);
FLS_TEXT_SECTION static boolean Fls_IsAddrSectorEndAligned(const Fls_AddressType u32TargetAddress);
#endif

FLS_TEXT_SECTION static Fls_AddressType Fls_CalcMaxTransferLen(const Fls_LengthType u32MaxTransfer);
FLS_TEXT_SECTION static Fls_AddressType Fls_CalcWriteTransferLength(
    const Fls_AddressType u32MaxTransferLen);
FLS_TEXT_SECTION static Fls_AddressType Fls_CalcReadTransferLength(
    const Fls_AddressType u32MaxTransferLen);
FLS_TEXT_SECTION static uint8               Fls_CalcLog2(uint32 u32CalInput);
FLS_TEXT_SECTION static MemIf_JobResultType Fls_DoJobErase(void);
FLS_TEXT_SECTION static Fls_LLDReturnType   Fls_DoJobRead(const Fls_AddressType u32Length);
FLS_TEXT_SECTION static Fls_LLDReturnType   Fls_DoJobWrite(const Fls_AddressType u32Length);

#if (FLS_COMPARE_API == STD_ON)
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_DoJobCompare(const Fls_AddressType u32Length);
#endif
#if (FLS_BLANK_CHECK_API == STD_ON)
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_DoJobBlankCheck(const Fls_AddressType u32Length);
#endif

FLS_TEXT_SECTION static MemIf_JobResultType Fls_DoJobDataTransfer(const Fls_JobType eJob,
                                                                  const Fls_LengthType u32MaxTransfer);
FLS_TEXT_SECTION static MemIf_JobResultType Fls_DoJob(void);
FLS_TEXT_SECTION static MemIf_JobResultType Fls_LLDGetJobResult(void);
FLS_TEXT_SECTION static void                Fls_LLDClrJobResult(void);
FLS_TEXT_SECTION static Fls_SectorIndexType Fls_GetSectorIndexByAddr(
    const Fls_AddressType u32TargetAddress);

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"

#if (FLS_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief        Check whether u32TargetAddress is page aligned
 *
 * @details      Check whether u32TargetAddress is integer multiple of Flash Page Size
 *
 * @param[in]    u32TargetAddress Target address in flash memory
 *
 * @return       boolean
 * @retval       TRUE u32TargetAddress is page aligned
 * @retval       FALSE u32TargetAddress is not page aligned
 *
 */
FLS_TEXT_SECTION static boolean Fls_IsAddrPageAligned(const Fls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;

    /* Aligned to Double Word or Word depending if CODE/DATA Flash or DFO */
    if (0U == (u32TargetAddress % D_FLASH_PAGE_SIZE))
    {
    }
    else
    {
        bRetVal = (boolean)FALSE;
    }

    return (bRetVal);
}

/**
 * @brief        Check whether u32TargetAddress is page aligned
 *
 * @details      Check whether u32TargetAddress is integer multiple of Flash Page Size
 *
 * @param[in]    u32TargetAddress Target address in flash memory
 *
 * @return       boolean
 * @retval       TRUE u32TargetAddress is page aligned
 * @retval       FALSE u32TargetAddress is not page aligned
 *
 */
FLS_TEXT_SECTION static boolean Fls_IsAddrPageStartAligned(const Fls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;

    if (((boolean)TRUE == Fls_IsAddrPageAligned(u32TargetAddress)) &&
        (u32TargetAddress < (Fls_AddressType)FLS_TOTAL_SIZE))
    {
    }
    else
    {
        bRetVal = (boolean)FALSE;
    }

    return (bRetVal);
}

/**
 * @brief        Check whether u32TargetAddress is page start aligned
 *
 * @param[in]    u32TargetAddress Target address in flash memory
 * @param[in]    u32Length size of current write
 *
 * @return       boolean
 * @retval       TRUE u32TargetAddress is in range and aligned to end of the page
 * @retval       FALSE u32TargetAddress is not in range or aligned to end of the page
 */
FLS_TEXT_SECTION static boolean Fls_IsAddrPageEndAligned(const Fls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;

    if (((boolean)TRUE == Fls_IsAddrPageAligned(u32TargetAddress + 1U)) &&
        (u32TargetAddress < (Fls_AddressType)FLS_TOTAL_SIZE))
    {
    }
    else
    {
        bRetVal = (boolean)FALSE;
    }

    return (bRetVal);
}

/**
 * @brief        Check whether u32TargetAddress is sector start aligned
 *
 * @param[in]    u32TargetAddress Target address in flash memory
 *
 * @return       boolean
 * @retval       TRUE u32TargetAddress is in range and aligned to start of the sector
 * @retval       FALSE u32TargetAddress is not in range or not aligned to
 *               start of the sector
 */
FLS_TEXT_SECTION static boolean Fls_IsAddrSectorStartAligned(const Fls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;
    /*
     * only allowed form of pointer arithmetic
     */
    if (((u32TargetAddress % D_FLASH_SECTOR_SIZE) == 0U) && (u32TargetAddress < FLS_TOTAL_SIZE))
    {
    }
    else
    {
        bRetVal = (boolean)FALSE;
    }

    return bRetVal;
}

/**
 * @brief        Check whether u32TargetAddress is sector end aligned
 *
 * @param[in]    u32TargetAddress Target address in flash memory
 *
 * @return       boolean
 * @retval       TRUE u32TargetAddress is in range and aligned to end of the sector
 * @retval       FALSE u32TargetAddress is not in range or not aligned to
 *               end of the sector
 */
FLS_TEXT_SECTION static boolean Fls_IsAddrSectorEndAligned(const Fls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;
    /*
     * only allowed form of pointer arithmetic
     */
    if ((((u32TargetAddress + 1U) % D_FLASH_SECTOR_SIZE) == 0U) && (u32TargetAddress < FLS_TOTAL_SIZE))
    {
    }
    else
    {
        bRetVal = (boolean)FALSE;
    }

    return bRetVal;
}
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */

/**
 * @brief        Calculate last logical address to read, write, or compare
 *
 * @param[in]    u32MaxTransfer Maximum number of bytes to read, write, or compare
 *               in current cycle of Fls_MainFunction
 *
 * @return       Fls_AddressType
 * @retval       0 .. (FLS_TOTAL_SIZE - 1)
 */
FLS_TEXT_SECTION static Fls_AddressType Fls_CalcMaxTransferLen(const Fls_LengthType u32MaxTransfer)
{
    Fls_AddressType u32MaxTransferLen = u32MaxTransfer;

    /* Adjust the u32MaxTransferEndAddr address to transfer only
        the u32MaxTransfer bytes in one Fls_MainFunction() call */
    if (Fls_u32JobAddrEnd < (Fls_u32JobAddrIt + u32MaxTransfer))
    {
        u32MaxTransferLen = Fls_u32JobAddrEnd - Fls_u32JobAddrIt + 1U;
    }
    else
    {
    }
    return (u32MaxTransferLen);
}

/**
 * @brief       Calculate number of bytes to read, write, or compare
 *              from current sector
 *
 * @param[in]    u32MaxTransferEndAddr Last address to read, write,
 *               or compare data from in this cycle of Fls_MainFunction
 *
 * @return      Fls_AddressType
 * @retval      0 .. (FLS_SECTOR_SIZE - 1)
 */
FLS_TEXT_SECTION static Fls_AddressType Fls_CalcWriteTransferLength(
    const Fls_AddressType u32MaxTransferLen)
{
    Fls_AddressType TransferLength = u32MaxTransferLen;

    if (((Fls_u32JobAddrIt + u32MaxTransferLen) >> Fls_DflashMaxWriteSizeBit) ==
        (Fls_u32JobAddrIt >> Fls_DflashMaxWriteSizeBit))
    {
    }
    else
    {
        TransferLength = D_FLASH_MAX_WRITE_SIZE - (Fls_u32JobAddrIt & (D_FLASH_MAX_WRITE_SIZE - 1U));
    }

    return (TransferLength);
}

/**
 * @brief       Calculate number of bytes to read, write, or compare
 *              from current sector
 *
 * @param[in]    u32MaxTransferEndAddr Last address to read, write,
 *               or compare data from in this cycle of Fls_MainFunction
 *
 * @return      Fls_AddressType
 * @retval      0 .. (FLS_SECTOR_SIZE - 1)
 */
FLS_TEXT_SECTION static Fls_AddressType Fls_CalcReadTransferLength(
    const Fls_AddressType u32MaxTransferLen)
{
    Fls_AddressType TransferLength = u32MaxTransferLen;

    if (((Fls_u32JobAddrIt + u32MaxTransferLen) >> Fls_DflashSectorSizeBit) ==
        (Fls_u32JobAddrIt >> Fls_DflashSectorSizeBit))
    {
    }
    else
    {
        TransferLength = D_FLASH_SECTOR_SIZE - (Fls_u32JobAddrIt & (D_FLASH_SECTOR_SIZE - 1U));
    }

    return (TransferLength);
}

/**
 * @brief       Calculate Log2
 *
 * @param[in]   u32CalInput  the para need to calc
 *
 * @return      uint8 calc result
 */
FLS_TEXT_SECTION static uint8 Fls_CalcLog2(uint32 u32CalInput)
{
    uint8  u8RetVal = 0U;
    uint32 u32Tmp   = u32CalInput;
    u32Tmp          = u32Tmp >> 1U;
    while (u32Tmp != 0U)
    {
        u32Tmp = u32Tmp >> 1U;
        u8RetVal++;
    }
    return u8RetVal;
}

/**
 * @brief        Erase one complete flash sector
 *
 * @return       MemIf_JobResultType
 * @retval       MEMIF_JOB_OK erase operation succeeded and there
 *               is no more sectors to erase
 * @retval       MEMIF_JOB_PENDING erase operation succeeded and there
 *               is still one or more sectors to erase
 * @retval       MEMIF_JOB_FAILED operation failed due to hardware error
 */
FLS_TEXT_SECTION static MemIf_JobResultType Fls_DoJobErase(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_PENDING;

    if (Fls_u32JobSectorIt > Fls_u32JobSectorEnd)
    {
        /* No more sectors to erase */
        eRetVal = MEMIF_JOB_OK;
    }
    else
    {
        Fls_LLDReturnType eLldRetVal = FLASH_E_OK;

        eLldRetVal = Fls_Hal_Erase();

        if (FLASH_E_FAILED == eLldRetVal)
        {
            eRetVal = MEMIF_JOB_FAILED;
        }
        else if ((Fls_u32JobSectorIt == Fls_u32JobSectorEnd) && (FLASH_E_OK == eLldRetVal))
        {
            eRetVal = MEMIF_JOB_OK;
        }
        else
        {
            /* Nothing for misra */
        }
    }
    return (eRetVal);
}

/**
 * @brief        Read up to one physical flash sector
 *
 * @param[in]    SectorOffset Flash sector offset to read data from
 * @param[in]    Length Number of bytes to read
 *
 * @return       Fls_LLDReturnType
 * @retval       FLASH_E_OK read operation succeeded
 * @retval       FLASH_E_FAILED read operation failed due to a hardware error
 */
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_DoJobRead(const Fls_AddressType u32Length)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;

    eRetVal = Fls_Hal_Read(Fls_u32JobAddrIt, u32Length, Fls_pJobDataDestPtr);

    return (eRetVal);
}

/**
 * @brief        Write up to one physical flash sector
 *
 * @param[in]    u32SectorOffset Flash sector offset to write data from
 * @param[in]    Length Number of bytes to read
 *
 * @return       Fls_LLDReturnType
 * @retval       FLASH_E_OK write operation succeeded
 * @retval       FLASH_E_FAILED write operation failed due to a hardware error
 */
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_DoJobWrite(const Fls_AddressType u32Length)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;

    eRetVal = Fls_Hal_Write(Fls_u32JobAddrIt, u32Length, Fls_pJobDataSrcPtr);

    return (eRetVal);
}

#if (FLS_COMPARE_API == STD_ON)
/**
* @brief        Compare up to one physical flash sector with data buffer
* @param[in]    u32Length Number of bytes to compare
*
* @return       Fls_LLDReturnType
* @retval       FLASH_E_OK compare operation succeeded
* @retval       FLASH_E_FAILED compare operation failed due to a hardware error
* @retval       FLASH_E_BLOCK_INCONSISTENT compare operation failed
          due to data mismatch
*/
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_DoJobCompare(const Fls_AddressType u32Length)
{

    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    eRetVal                   = Fls_Hal_Compare(Fls_u32JobAddrIt, u32Length, Fls_pJobDataSrcPtr);

    return (eRetVal);
}
#endif /* FLS_COMPARE_API == STD_ON */

#if (FLS_BLANK_CHECK_API == STD_ON)
/**
 * @brief          Compare up to one physical flash sector with pre-defined erased value
 *
 * @param[in]      u32Length Number of bytes to verify
 *
 * @return         Fls_LLDReturnType
 * @retval         FLASH_E_OK blank check operation succeeded
 * @retval         FLASH_E_FAILED blank check operation failed due to a hardware error
 * @retval         FLASH_E_BLOCK_INCONSISTENT blank check operation failed
 *                 due to data mismatch
 */
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_DoJobBlankCheck(const Fls_AddressType u32Length)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;

    eRetVal = Fls_Hal_Compare(Fls_u32JobAddrIt, u32Length, NULL_PTR);

    return (eRetVal);
}
#endif /* FLS_BLANK_CHECK_API == STD_ON */

/**
 @brief         Read, write, or compare flash data
 @return        MemIf_JobResultType
 @retval        MEMIF_JOB_OK read, write, or compare operation succeeded and there
                is no more data to read, write, or compare
 @retval        MEMIF_JOB_PENDING read, write, or compare operation succeeded
                and there is still some data to read, write, or compare
 @retval        MEMIF_JOB_FAILED read, write, or compare operation failed due
                to a hardware error
 @retval        MEMIF_BLOCK_INCONSISTENT Compared data from a flash compare
                eJob are not equal
*/
FLS_TEXT_SECTION static MemIf_JobResultType Fls_DoJobDataTransfer(const Fls_JobType eJob,
                                                                  const Fls_LengthType u32MaxTransfer)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_PENDING;

    /* No more data to write */
    if (Fls_u32JobAddrIt > Fls_u32JobAddrEnd)
    {
        eRetVal = MEMIF_JOB_OK;
    }
    else
    {

        Fls_AddressType   u32MaxTransferLen = 0UL;
        Fls_LLDReturnType eTransferRetVal   = FLASH_E_FAILED;

        /* Last address to transfer data to/from in this call of
            the Fls_MainFunction() functions */
        u32MaxTransferLen = Fls_CalcMaxTransferLen(u32MaxTransfer);

        Fls_AddressType u32SectorTransferLength = 0UL;

        if (eJob == FLS_JOB_WRITE)
        {
            u32SectorTransferLength = Fls_CalcWriteTransferLength(u32MaxTransferLen);
            eTransferRetVal         = Fls_DoJobWrite(u32SectorTransferLength);
            /* Update the source data pointer for next write */
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be performed
             * Here Unavoidably.*/
            Fls_pJobDataSrcPtr += u32SectorTransferLength;
            /* PRQA S 488 -- */
        }
        else if (eJob == FLS_JOB_READ)
        {
            u32SectorTransferLength = Fls_CalcReadTransferLength(u32MaxTransferLen);
            eTransferRetVal         = Fls_DoJobRead(u32SectorTransferLength);
            /* Update the source data pointer for next write */
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be performed
             * Here Unavoidably.*/
            Fls_pJobDataDestPtr += u32SectorTransferLength;
            /* PRQA S 488 -- */
        }
#if (FLS_COMPARE_API == STD_ON)
        else if (eJob == FLS_JOB_COMPARE)
        {
            u32SectorTransferLength = Fls_CalcReadTransferLength(u32MaxTransferLen);
            eTransferRetVal         = Fls_DoJobCompare(u32SectorTransferLength);
            /* Update the source data pointer for next compare */
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be performed
             * Here Unavoidably.*/
            Fls_pJobDataSrcPtr += u32SectorTransferLength;
            /* PRQA S 488 -- */
        }
#endif /* FLS_COMPARE_API == STD_ON */

#if (FLS_BLANK_CHECK_API == STD_ON)
        else if (eJob == FLS_JOB_BLANK_CHECK)
        {
            u32SectorTransferLength = Fls_CalcReadTransferLength(u32MaxTransferLen);
            eTransferRetVal         = Fls_DoJobBlankCheck(u32SectorTransferLength);
        }
#endif /* FLS_BLANK_CHECK_API == STD_ON */
        else
        {
        }
        Fls_u32JobAddrIt += u32SectorTransferLength;
        if (FLASH_E_FAILED == eTransferRetVal)
        {
            eRetVal = MEMIF_JOB_FAILED;
        }
        else if (FLASH_E_BLOCK_INCONSISTENT == eTransferRetVal)
        {
            /* compare job only */
            eRetVal = MEMIF_BLOCK_INCONSISTENT;
        }
        else if ((Fls_u32JobAddrIt > Fls_u32JobAddrEnd) && (FLASH_E_OK == eTransferRetVal))
        {
            /* All desired job data has been successfully transferred */
            eRetVal = MEMIF_JOB_OK;
        }
        else
        {
            /* The write operation is either pending (FLASH_E_PENDING)
            in hardware in case of asynchronous operation or
            finished (FLASH_E_OK) in case of synchronous operation
            and there is more pages to write */
        }
    }

    return (eRetVal);
}

/**
 * @brief Execute corresponding actions based on Job status
 *
 * @return       MemIf_JobResultType
 * @retval       MEMIF_JOB_OK              Successfully completed job.
 * @retval       MEMIF_JOB_FAILED          Not successfully completed job.
 * @retval       MEMIF_JOB_PENDING         Still pending job (not yet completed).
 * @retval       MEMIF_JOB_CANCELED        Job has been canceled.
 * @retval       MEMIF_BLOCK_INCONSISTENT  Inconsistent block requested, it may
 *                                         contains corrupted data.
 * @retval       MEMIF_BLOCK_INVALID       Invalid block requested.
 */
FLS_TEXT_SECTION static MemIf_JobResultType Fls_DoJob(void)
{
    MemIf_JobResultType eWorkResult = MEMIF_JOB_OK;
    if (Fls_eJob == FLS_JOB_ERASE)
    {
        eWorkResult = Fls_DoJobErase();
    }
    else if (Fls_eJob == FLS_JOB_WRITE)
    {
        eWorkResult = Fls_DoJobDataTransfer(Fls_eJob, Fls_u32MaxWrite);
    }
#if (FLS_BLANK_CHECK_API == STD_ON)
    else if (Fls_eJob == FLS_JOB_BLANK_CHECK)
    {
        eWorkResult = Fls_DoJobDataTransfer(Fls_eJob, Fls_u32MaxRead);
    }
#endif /* FLS_BLANK_CHECK_API == STD_ON */
    else if (Fls_eJob == FLS_JOB_READ)
    {
        eWorkResult = Fls_DoJobDataTransfer(Fls_eJob, Fls_u32MaxRead);
    }
#if (FLS_COMPARE_API == STD_ON)
    else if (Fls_eJob == FLS_JOB_COMPARE)
    {
        eWorkResult = Fls_DoJobDataTransfer(Fls_eJob, Fls_u32MaxRead);
    }
#endif /* FLS_COMPARE_API == STD_ON */
    else
    {
    }
    return eWorkResult;
}

/**
 * @brief       Returns the LLD JobResult
 */
FLS_TEXT_SECTION static MemIf_JobResultType Fls_LLDGetJobResult(void)
{
    return (Fls_eLLDJobResult);
}

/**
 * @brief          Clear status of erase or write hardware job result.
 */
FLS_TEXT_SECTION static void Fls_LLDClrJobResult(void)
{
    Fls_eLLDJobResult = MEMIF_JOB_OK;
    Fls_eLLDJob       = FLASH_JOB_NONE;
}

/**
 * @brief        Maps u32TargetAddress to sector index
 *
 * @param[in]    u32TargetAddress Target address in flash memory
 *
 * @return       Zero based index of logical sector
 * @retval       0 .. (Fls_pConfigPtr->u32SectorCount - 1)
 */
FLS_TEXT_SECTION static Fls_SectorIndexType Fls_GetSectorIndexByAddr(
    const Fls_AddressType u32TargetAddress)
{
    return (u32TargetAddress >> Fls_DflashSectorSizeBit);
}

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief        The function initializes Fls module.
 * @param[in]    pConfigPtr        Pointer to flash driver configuration set.
 *
 * @implements SWS_Fls_00249
 */
FLS_TEXT_SECTION void Fls_Init(const Fls_ConfigType *pConfigPtr)
{
#if (FLS_DEV_ERROR_DETECT == STD_ON)
#ifdef FLS_PRECOMPILE_SUPPORT
    if (NULL_PTR != pConfigPtr)
#else
    if (NULL_PTR == pConfigPtr)
#endif /* <DRIVER>_PRECOMPILE_SUPPORT */
    {
        /* SWS_Fls_00015 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_INIT_ID, FLS_E_PARAM_CONFIG);
    }
    else if (MEMIF_JOB_PENDING == Fls_eJobResult)
    {
        /* SWS_Fls_00268 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_INIT_ID, FLS_E_BUSY);
    }
    else
    {
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */

#ifdef FLS_PRECOMPILE_SUPPORT
        /* SWS_Fls_000191 */
        Fls_pConfigPtr = &Fls_Config;
        (void)pConfigPtr;
#else
    Fls_pConfigPtr = pConfigPtr;
#endif /* <DRIVER>_PRECOMPILE_SUPPORT */

        /* Set the max number of bytes to read/write
            during Fls_MainFunction call */
        if (MEMIF_MODE_SLOW == Fls_pConfigPtr->eDefaultMode)
        {
            /* SWS_Fls_00086 */
            Fls_u32MaxRead  = Fls_pConfigPtr->u32MaxReadNormalMode;
            Fls_u32MaxWrite = Fls_pConfigPtr->u32MaxWriteNormalMode;
        }
        else
        {
            /* SWS_Fls_00086 */
            Fls_u32MaxRead  = Fls_pConfigPtr->u32MaxReadFastMode;
            Fls_u32MaxWrite = Fls_pConfigPtr->u32MaxWriteFastMode;
        }
        /* Initialize flash hardware
        NOTE: The variable 'Fls_eLLDJobResult' will be updated in the below function*/
        /* SWS_Fls_00014 */
        Fls_Hal_Init();

        if (MEMIF_JOB_FAILED == Fls_eLLDJobResult)
        {
            Fls_eJobResult = MEMIF_JOB_FAILED;
#if (FLS_DEV_ERROR_DETECT == STD_ON)
            Fls_pConfigPtr = NULL_PTR;
            /* SWS_Fls_00268 */
            (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_INIT_ID, FLS_E_BUSY);
#endif
        }
        else
        {
            /* SWS_Fls_00324 */
            Fls_eJobResult = MEMIF_JOB_OK;
        }
        Fls_DflashSectorSizeBit   = Fls_CalcLog2(D_FLASH_SECTOR_SIZE);
        Fls_DflashMaxWriteSizeBit = Fls_CalcLog2(D_FLASH_MAX_WRITE_SIZE);

#if (FLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}

/**
 * @brief            Erase one or more complete flash sectors.
 *
 * @param[in]        TargetAddress        Target address in flash memory.
 * @param[in]        Length               Number of bytes to erase.
 *
 * @return           Std_ReturnType
 * @retval           E_OK                    Erase command has been accepted.
 * @retval           E_NOT_OK                Erase command has not been accepted.
 *
 * @implements       SWS_Fls_00001 SWS_Fls_00250 SWS_Fls_00218 SWS_Fls_00330 SWS_Fls_00220
 */
FLS_TEXT_SECTION Std_ReturnType Fls_Erase(Fls_AddressType u32TargetAddress, Fls_LengthType u32Length)
{
    Std_ReturnType      u8RetVal           = (Std_ReturnType)E_OK;
    Fls_SectorIndexType u32TmpJobSectorIt  = 0UL;
    Fls_SectorIndexType u32TmpJobSectorEnd = 0UL;

#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        /* SWS_Fls_00065 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_ERASE_ID, FLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((boolean)FALSE == (Fls_IsAddrSectorStartAligned((Fls_AddressType)u32TargetAddress)))
    {
        /* SWS_Fls_00310 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_ERASE_ID, FLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) ||
             ((boolean)FALSE ==
              (Fls_IsAddrSectorEndAligned(((Fls_AddressType)u32TargetAddress + u32Length) - 1U))))
    {
        /* SWS_Fls_00310 SWS_Fls_00021 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_ERASE_ID, FLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobSectorIt  = Fls_GetSectorIndexByAddr(u32TargetAddress);
        u32TmpJobSectorEnd = Fls_GetSectorIndexByAddr((u32TargetAddress + u32Length) - 1U);

        if (MEMIF_JOB_PENDING == Fls_eJobResult)
        {
#if (FLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Fls_00312 SWS_Fls_00023 */
            (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_ERASE_ID, FLS_E_BUSY);
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* Configure the erase job */
            /* SWS_Fls_00327 */
            Fls_u32JobSectorIt  = u32TmpJobSectorIt;
            Fls_u32JobSectorEnd = u32TmpJobSectorEnd;
            Fls_eJob            = FLS_JOB_ERASE;
            Fls_LLDClrJobResult();
            /* SWS_Fls_00329 */
            Fls_eJobResult = Fls_DoJob();
            if ((MEMIF_JOB_FAILED == Fls_eJobResult) || (MEMIF_BLOCK_INCONSISTENT == Fls_eJobResult))
            {

                if (NULL_PTR != Fls_pConfigPtr->jobErrorNotificationPtr)
                {
                    /* Call FlsJobErrorNotification function if configured */
                    Fls_pConfigPtr->jobErrorNotificationPtr();
                }
                else
                {
                    /* Callback notification configured as null pointer */
                }
            }
            else
            {
            }
        }
    }
    return (u8RetVal);
}

/**
 * @brief            Write one or more complete flash pages to the flash device.
 *
 * @param[in]        TargetAddress        Target address in flash memory.
 * @param[in]        SourceAddressPtr     Pointer to source data buffer.
 * @param[in]        Length               Number of bytes to write.
 *
 * @return           Std_ReturnType
 * @retval           E_OK                 Write command has been accepted.
 * @retval           E_NOT_OK             Write command has not been accepted.
 *
 * @implements       SWS_Fls_00001 SWS_Fls_00002 SWS_Fls_00003 SWS_Fls_00216 SWS_Fls_00251
 *                   SWS_Fls_00223 SWS_Fls_00334 SWS_Fls_00225
 */
FLS_TEXT_SECTION Std_ReturnType Fls_Write(Fls_AddressType u32TargetAddress,
                                          const uint8    *pSourceAddressPtr,
                                          Fls_LengthType  u32Length)
{
    Std_ReturnType  u8RetVal         = (Std_ReturnType)E_OK;
    Fls_AddressType u32TmpJobAddrEnd = 0UL;

#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        /* SWS_Fls_00066 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_WRITE_ID, FLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((boolean)FALSE == (Fls_IsAddrPageStartAligned((Fls_AddressType)u32TargetAddress)))
    {
        /* SWS_Fls_00310 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_WRITE_ID, FLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) ||
             ((boolean)FALSE ==
              (Fls_IsAddrPageEndAligned(((Fls_AddressType)u32TargetAddress + u32Length) - 1U))))
    {
        /* SWS_Fls_00310 SWS_Fls_00027 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_WRITE_ID, FLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == pSourceAddressPtr)
    {
        /* SWS_Fls_00310 SWS_Fls_00157 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_WRITE_ID, FLS_E_PARAM_DATA);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobAddrEnd = (u32TargetAddress + u32Length) - 1U;

        if (MEMIF_JOB_PENDING == Fls_eJobResult)
        {
#if (FLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Fls_00312 SWS_Fls_00030 */
            (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_WRITE_ID, FLS_E_BUSY);
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* Configure the write job */
            /* SWS_Fls_00208 SWS_Fls_00331 */
            Fls_u32JobAddrEnd  = u32TmpJobAddrEnd;
            Fls_u32JobAddrIt   = u32TargetAddress;
            Fls_pJobDataSrcPtr = pSourceAddressPtr;
            Fls_eJob           = FLS_JOB_WRITE;
            Fls_LLDClrJobResult();
            /* SWS_Fls_00333 */
            Fls_eJobResult = Fls_DoJob();
            if ((MEMIF_JOB_FAILED == Fls_eJobResult) || (MEMIF_BLOCK_INCONSISTENT == Fls_eJobResult))
            {
                if (NULL_PTR != Fls_pConfigPtr->jobErrorNotificationPtr)
                {
                    /* Call FlsJobErrorNotification function if configured */
                    Fls_pConfigPtr->jobErrorNotificationPtr();
                }
                else
                {
                    /* Callback notification configured as null pointer */
                }
            }
            else
            {
            }
        }
    }
    return (u8RetVal);
}

/* SWS_Fls_00183 */
#if (FLS_CANCEL_API == STD_ON)
/**
 * @brief         Cancel an ongoing flash read, write, erase or compare job.
 *
 * @return       void
 *
 * @implements   SWS_Fls_00252 SWS_Fls_00229
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 It will exist not used functions when use QAC to analysis
 * the whole project, this error need deviation in doc but not deviation in code Reason: The
 * function used in fee module.*/
FLS_TEXT_SECTION void Fls_Cancel(void)
/* PRQA S 1503 -- */
{
#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        /* SWS_Fls_00356 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_CANCEL_ID, FLS_E_UNINIT);
    }
    else
    {
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */

        if (MEMIF_JOB_PENDING == Fls_eJobResult)
        {
            /* Cancel ongoing hardware job */
            /* SWS_Fls_00230 */
            Fls_Hal_Cancel();
            /* If underlying hardware job was successfully canceled */
            if (MEMIF_JOB_CANCELED == Fls_eLLDJobResult)
            {
                /* SWS_Fls_00033 */
                /* Update global job result status */
                Fls_eJobResult = MEMIF_JOB_CANCELED;
            }

            if (NULL_PTR != Fls_pConfigPtr->jobErrorNotificationPtr)
            {
                /* SWS_Fls_00147 */
                /* Call FlsJobErrorNotification function if configured */
                Fls_pConfigPtr->jobErrorNotificationPtr();
            }
            else
            {
                /* Callback notification configured as null pointer */
            }
        }
        else
        {
            /* Leave the job result unchanged */
        }
#if (FLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
}
#endif /* FLS_CANCEL_API == STD_ON */

/* SWS_Fls_00184 */
#if (FLS_GET_STATUS_API == STD_ON)
/**
 * @brief            Returns the FLS module status.
 *
 * @return           MemIf_StatusType
 * @retval           MEMIF_UNINIT        Module has not been initialized (yet).
 * @retval           MEMIF_IDLE          Module is currently idle.
 * @retval           MEMIF_BUSY          Module is currently busy.
 *
 * @implements       SWS_Fls_00253 SWS_Fls_00034
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 It will exist not used functions when use QAC to analysis
 * the whole project, this error need deviation in doc but not deviation in code Reason: The
 * function used in fee module.*/
FLS_TEXT_SECTION MemIf_StatusType Fls_GetStatus(void)
/* PRQA S 1503 -- */
{
    MemIf_StatusType eRetVal;
    if (NULL_PTR == Fls_pConfigPtr)
    {
        eRetVal = MEMIF_UNINIT;
    }
    else if (MEMIF_JOB_PENDING == Fls_eJobResult)
    {
        eRetVal = MEMIF_BUSY;
    }
    else
    {
        eRetVal = MEMIF_IDLE;
    }

    return (eRetVal);
}
#endif /* FLS_GET_STATUS_API == STD_ON */

/* SWS_Fls_00185 */
#if (FLS_GET_JOB_RESULT_API == STD_ON)
/**
 * @brief            Returns the result of the last job.
 *
 * @return           MemIf_JobResultType
 * @retval           MEMIF_JOB_OK              Successfully completed job.
 * @retval           MEMIF_JOB_FAILED          Not successfully completed job.
 * @retval           MEMIF_JOB_PENDING         Still pending job (not yet completed).
 * @retval           MEMIF_JOB_CANCELED        Job has been canceled.
 * @retval           MEMIF_BLOCK_INCONSISTENT  Inconsistent block requested, it may
 *                                             contains corrupted data.
 * @retval           MEMIF_BLOCK_INVALID       Invalid block requested.
 *
 * @implements       SWS_Fls_00254 SWS_Fls_00035
 */
FLS_TEXT_SECTION MemIf_JobResultType Fls_GetJobResult(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;

#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        /* SWS_Fls_00358 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_GETJOBRESULT_ID, FLS_E_UNINIT);
        eRetVal = (MemIf_JobResultType)MEMIF_JOB_FAILED;
    }
    else
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* SWS_Fls_00036 */
        eRetVal = Fls_eJobResult;
    }

    return (eRetVal);
}
#endif /* FLS_GET_JOB_RESULT_API == STD_ON */

/*
 * @brief            Reads from flash memory.
 *
 * @param[in]        SourceAddress        Source address in flash memory.
 * @param[in]        Length               Number of bytes to read.
 * @param[out]       TargetAddressPtr    Pointer to target data buffer.
 *
 * @return           MemIf_JobResultType
 * @retval           MEMIF_JOB_OK              Successfully completed job.
 * @retval           MEMIF_JOB_FAILED          Not successfully completed job.
 * @retval           MEMIF_JOB_PENDING         Still pending job (not yet completed).
 * @retval           MEMIF_JOB_CANCELED        Job has been canceled.
 * @retval           MEMIF_BLOCK_INCONSISTENT  Inconsistent block requested, it may
 *                                             contains corrupted data.
 * @retval           MEMIF_BLOCK_INVALID       Invalid block requested.
 *
 * @implements       SWS_Fls_00001 SWS_Fls_00002 SWS_Fls_00216 SWS_Fls_00256 SWS_Fls_00236
 *                   SWS_Fls_00340 SWS_Fls_00238
 */
FLS_TEXT_SECTION Std_ReturnType Fls_Read(Fls_AddressType u32SourceAddress,
                                         uint8          *pTargetAddressPtr,
                                         Fls_LengthType  u32Length)
{
    Std_ReturnType  u8RetVal         = (Std_ReturnType)E_OK;
    Fls_AddressType u32TmpJobAddrEnd = 0UL;

#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        /* SWS_Fls_00099 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_READ_ID, FLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (u32SourceAddress >= FLS_TOTAL_SIZE)
    {
        /* SWS_Fls_00310 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_READ_ID, FLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) || ((u32SourceAddress + u32Length) > FLS_TOTAL_SIZE))
    {
        /* SWS_Fls_00310 SWS_Fls_00098 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_READ_ID, FLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == pTargetAddressPtr)
    {
        /* SWS_Fls_00310 SWS_Fls_00158 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_READ_ID, FLS_E_PARAM_DATA);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobAddrEnd = (u32SourceAddress + u32Length) - 1U;

        if (MEMIF_JOB_PENDING == Fls_eJobResult)
        {
#if (FLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Fls_00312 SWS_Fls_00100 */
            (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_READ_ID, FLS_E_BUSY);
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* Configure the read job */
            /* SWS_Fls_00208 SWS_Fls_00337 */
            Fls_u32JobAddrIt    = u32SourceAddress;
            Fls_u32JobAddrEnd   = u32TmpJobAddrEnd;
            Fls_pJobDataDestPtr = pTargetAddressPtr;
            Fls_eJob            = FLS_JOB_READ;
            Fls_LLDClrJobResult();

            /* Execute the read job */
            /* SWS_Fls_00339 */
            Fls_eJobResult = MEMIF_JOB_PENDING;
        }
    }
    return (u8RetVal);
}

/* SWS_Fls_00186 */
#if (FLS_COMPARE_API == STD_ON)
/**
 * @brief           Compares a flash memory area with an application data buffer.
 *
 * @param[in]        SourceAddress          Source address in flash memory.
 * @param[in]        TargetAddressPtr       Pointer to source data buffer.
 * @param[in]        Length                 Number of bytes to compare.
 *
 * @return           Std_ReturnType
 * @retval           E_OK                      Compare command has been accepted.
 * @retval           E_NOT_OK                   Compare command has not been accepted.
 *
 * @implements       SWS_Fls_00257 SWS_Fls_00241 SWS_Fls_00344 SWS_Fls_00243
 */
FLS_TEXT_SECTION Std_ReturnType Fls_Compare(Fls_AddressType u32SourceAddress,
                                            const uint8    *pTargetAddressPtr,
                                            Fls_LengthType  u32Length)
{
    Std_ReturnType  u8RetVal         = (Std_ReturnType)E_OK;
    Fls_AddressType u32TmpJobAddrEnd = 0UL;

#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        /* SWS_Fls_00152 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_COMPARE_ID, FLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (u32SourceAddress >= FLS_TOTAL_SIZE)
    {
        /* SWS_Fls_00310 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID,
                              FLS_INSTANCE_ID,
                              FLS_COMPARE_ID,
                              FLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) || ((u32SourceAddress + u32Length) > FLS_TOTAL_SIZE))
    {
        /* SWS_Fls_00310 SWS_Fls_00151 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID,
                              FLS_INSTANCE_ID,
                              FLS_COMPARE_ID,
                              FLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == pTargetAddressPtr)
    {
        /* SWS_Fls_00310 SWS_Fls_00273 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_COMPARE_ID, FLS_E_PARAM_DATA);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
    {

        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobAddrEnd = (u32SourceAddress + u32Length) - 1U;

        if (MEMIF_JOB_PENDING == Fls_eJobResult)
        {
#if (FLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Fls_00312 SWS_Fls_00153 */
            (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_COMPARE_ID, FLS_E_BUSY);
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* SWS_Fls_00341 */
            Fls_u32JobAddrIt   = u32SourceAddress;
            Fls_u32JobAddrEnd  = u32TmpJobAddrEnd;
            Fls_pJobDataSrcPtr = pTargetAddressPtr;
            Fls_eJob           = FLS_JOB_COMPARE;
            Fls_LLDClrJobResult();
            /* SWS_Fls_00343 */
            Fls_eJobResult = MEMIF_JOB_PENDING;
        }
    }

    return (u8RetVal);
}
#endif /* FLS_COMPARE_API == STD_ON */

#if (FLS_BLANK_CHECK_API == STD_ON)
/**
 * @brief           Verify whether a given memory area has been erased but not (yet) programmed.
 *
 * @param[in]        TargetAddress          Address in flash memory from which the blank check
 * should be started.
 * @param[in]        Length                 Number of bytes to be checked for erase pattern.
 *
 * @return           Std_ReturnType
 * @retval           E_OK                   Blank checking command has been accepted.
 * @retval           E_NOT_OK               Blank checking command has not been accepted.
 *
 * @implements       SWS_Fls_00371 SWS_Fls_00373 SWS_Fls_00377 SWS_Fls_00378 SWS_Fls_00269
 */
FLS_TEXT_SECTION Std_ReturnType Fls_BlankCheck(Fls_AddressType u32TargetAddress,
                                               Fls_LengthType  u32Length)
{
    Std_ReturnType  u8RetVal         = (Std_ReturnType)E_OK;
    Fls_AddressType u32TmpJobAddrEnd = 0UL;

#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        /* SWS_Fls_00382 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_BLANK_CHECK_ID, FLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (u32TargetAddress >= FLS_TOTAL_SIZE)
    {
        /* SWS_Fls_00310 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID,
                              FLS_INSTANCE_ID,
                              FLS_BLANK_CHECK_ID,
                              FLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) || ((u32TargetAddress + u32Length) > FLS_TOTAL_SIZE))
    {
        /* SWS_Fls_00310 SWS_Fls_00381 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID,
                              FLS_INSTANCE_ID,
                              FLS_BLANK_CHECK_ID,
                              FLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobAddrEnd = (u32TargetAddress + u32Length) - 1U;

        if (MEMIF_JOB_PENDING == Fls_eJobResult)
        {
#if (FLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Fls_00383 */
            (void)Det_ReportError((uint16)FLS_MODULE_ID,
                                  FLS_INSTANCE_ID,
                                  FLS_BLANK_CHECK_ID,
                                  FLS_E_BUSY);
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* SWS_Fls_00374 */
            Fls_u32JobAddrIt  = u32TargetAddress;
            Fls_u32JobAddrEnd = u32TmpJobAddrEnd;
            Fls_eJob          = FLS_JOB_BLANK_CHECK;
            Fls_LLDClrJobResult();
            /* SWS_Fls_00376 */
            Fls_eJobResult = MEMIF_JOB_PENDING;
        }
    }

    return (u8RetVal);
}
#endif /* FLS_BLANK_CHECK_API == STD_ON */

/* SWS_Fls_00187 */
#if (FLS_SET_MODE_API == STD_ON)
/**
 * @brief           Sets the FLS module's operation mode to the given Mode.
 *
 * @param[in]        Mode        MEMIF_MODE_FAST or MEMIF_MODE_SLOW.
 *
 * @implements      SWS_Fls_00258
 */
FLS_TEXT_SECTION void Fls_SetMode(MemIf_ModeType eMode)
{
#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_SETMODE_ID, FLS_E_UNINIT);
    }
    else if (MEMIF_JOB_PENDING == Fls_eJobResult)
    {
        /* SWS_Fls_00312 SWS_Fls_00156 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_SETMODE_ID, FLS_E_BUSY);
    }
    else
    {
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
        /* Set the max number of bytes to read/write
            during Fls_MainFunction call */
        switch (eMode)
        {
            /* SWS_Fls_00155 */
            case MEMIF_MODE_FAST:
                Fls_u32MaxRead  = Fls_pConfigPtr->u32MaxReadFastMode;
                Fls_u32MaxWrite = Fls_pConfigPtr->u32MaxWriteFastMode;
                break;

            case MEMIF_MODE_SLOW:
                Fls_u32MaxRead  = Fls_pConfigPtr->u32MaxReadNormalMode;
                Fls_u32MaxWrite = Fls_pConfigPtr->u32MaxWriteNormalMode;
                break;

            default:
                /* Do nothing - should not happen in Fully Trusted Environment;
                   'default' clause added to fulfill MISRA Rule 15.3 */
                break;
        }
#if (FLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
}
#endif /* FLS_SET_MODE_API == STD_ON */

#if (FLS_VERSION_INFO_API == STD_ON)
/**
 * @brief        Returns version information about FLS module.
 *
 * @param[in,out] pVersionInfoPtr  Pointer to where to store the version information of this module.
 *
 * @implements    SWS_Fls_00259
 */
FLS_TEXT_SECTION void Fls_GetVersionInfo(Std_VersionInfoType *pVersionInfoPtr)
{
#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == pVersionInfoPtr)
    {
        /* SWS_Fls_00363 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID,
                              FLS_INSTANCE_ID,
                              FLS_GETVERSIONINFO_ID,
                              FLS_E_PARAM_POINTER);
    }
    else
    {
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
        pVersionInfoPtr->moduleID         = (uint16)FLS_MODULE_ID;
        pVersionInfoPtr->vendorID         = (uint16)FLS_VENDOR_ID;
        pVersionInfoPtr->sw_major_version = (uint8)FLS_SW_MAJOR_VERSION;
        pVersionInfoPtr->sw_minor_version = (uint8)FLS_SW_MINOR_VERSION;
        pVersionInfoPtr->sw_patch_version = (uint8)FLS_SW_PATCH_VERSION;
#if (FLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
}
#endif /* FLS_VERSION_INFO_API == STD_ON */

/**
 * @brief            Performs actual flash read, write, erase and compare jobs.
 * @details          Bytes number processed per cycle depends by job type (erase, write, read, compare)
 *                   current FLS module's operating mode (normal, fast)
 *                   and write, erase Mode of Execution (sync, async).
 *
 * @implements       SWS_Fls_00255 SWS_Fls_00037 SWS_Fls_00038 SWS_Fls_00040 SWS_Fls_00235
 *                   SWS_Fls_00196
 *
 */
FLS_TEXT_SECTION void Fls_MainFunction(void)
{
#if (FLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Fls_pConfigPtr)
    {
        /* SWS_Fls_00117 */
        (void)Det_ReportError((uint16)FLS_MODULE_ID, FLS_INSTANCE_ID, FLS_MAINFUNCTION_ID, FLS_E_UNINIT);
    }
    else
    {
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
        if (MEMIF_JOB_PENDING == Fls_eJobResult)
        {

            /* Check the status of pending jobs. */
            if (FLASH_JOB_NONE != Fls_eLLDJob) /* If there is any Async job scheduled. */
            {
                /* Process ongoing erase or write asynchronous hardware job */
                Fls_Hal_LLDMainFunction(); /* Process the maximum defined length(configuration
                                              parameter), or until a sector boundary. */
            }

            /* Get status/result of ongoing erase or write Async or Irq mode hardware job */
            Fls_eJobResult = Fls_LLDGetJobResult();

            if (MEMIF_JOB_OK == Fls_eJobResult)
            {
                /* SWS_Fls_00345 */
                Fls_eJobResult = Fls_DoJob();
            }
            else
            {
                /* Fls_eJobResult != MEMIF_JOB_OK */
            }

            if (MEMIF_JOB_OK == Fls_eJobResult)
            {
                if (NULL_PTR != Fls_pConfigPtr->jobEndNotificationPtr)
                {
                    /* Call FlsJobEndNotification function if configured */
                    /* SWS_Fls_00346 */
                    Fls_pConfigPtr->jobEndNotificationPtr();
                }
                else
                {
                    /* Callback notification configured as null pointer */
                }
            }
            else if ((MEMIF_JOB_FAILED == Fls_eJobResult) ||
                     (MEMIF_BLOCK_INCONSISTENT == Fls_eJobResult))
            {

                if (NULL_PTR != Fls_pConfigPtr->jobErrorNotificationPtr)
                {
                    /* SWS_Fls_00260 FSWS_Fls_00347 SWS_Fls_00348 SWS_Fls_00349 */
                    /* Call FlsJobErrorNotification function if configured */
                    Fls_pConfigPtr->jobErrorNotificationPtr();
                }
                else
                {
                    /* Callback notification configured as null pointer */
                }
            }
            else
            {
                /* Compiler_Warning: else clause added to fulfil the MISRA rule 14.10 */
                /* Not done yet. There is more data to transfer in following
                    Fls_MainFunction call(for Async jobs, or in interrupt context for IRQ type jobs). */
            }
        }
        else
        {
            /* Nothing to do since no job is pending */
        }
#if (FLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
}

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

#ifdef __cplusplus
}
#endif
