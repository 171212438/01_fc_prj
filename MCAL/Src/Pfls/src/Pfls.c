/**
 *   @file    Pfls.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Pfls - flash driver source code.
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

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/

#include "Pfls.h"
#include "Pfls_Flash.h"
#include "Pfls_Hal.h"
#include "Pfls_version.h"
#if ((PFLS_DEV_ERROR_DETECT == STD_ON) || (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */

#include "SchM_Pfls.h"

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/
/* SWS_Pfls_00206 */
#ifndef PFLS_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (PFLS_AR_RELEASE_MAJOR_VERSION != PFLS_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef PFLS_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (PFLS_SW_MAJOR_VERSION != PFLS_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef PFLS_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (PFLS_SW_MINOR_VERSION != PFLS_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef PFLS_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (PFLS_SW_PATCH_VERSION != PFLS_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != PFLS_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
#define PFLS_TOTAL_SIZE (Pfls_pConfigPtr->u32TotalSize)
#endif

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/
#define PFLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "Pfls_MemMap.h"

/**
 * @brief Result of last flash module job
 * @implements Pfls_eJobResult_Object
 */
PFLS_DATA_SECTION static MemIf_JobResultType Pfls_eJobResult = MEMIF_JOB_OK;
/**
 * @brief Last logical address to be processed by a job
 */
PFLS_DATA_SECTION static Pfls_AddressType Pfls_u32JobAddrEnd = 0UL;
/**
 * @brief Maximum number of bytes to read or compare in one cycle of Pfls_MainFunction
 */
PFLS_DATA_SECTION static Pfls_LengthType Pfls_u32MaxRead = 0UL;
/**
 * @brief Maximum number of bytes to write in one cycle of Pfls_MainFunction
 */
PFLS_DATA_SECTION static Pfls_LengthType Pfls_u32MaxWrite = 0UL;

#define PFLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Pfls_MemMap.h"

#define PFLS_START_SEC_VAR_INIT_8
#include "Pfls_MemMap.h"

/**
 * @brief Pointer to current position in source data buffer
 */
PFLS_DATA_SECTION static const uint8 *Pfls_pJobDataSrcPtr = NULL_PTR;
/**
 * @brief Pointer to current position in target data buffer
 */
PFLS_DATA_SECTION static uint8 *Pfls_pJobDataDestPtr = NULL_PTR;
/**
 * @brief Logical address of data block currently processed by Pfls_MainFunction
 */
PFLS_DATA_SECTION static Pfls_AddressType Pfls_u32JobAddrIt = 0UL;
/**
 * @brief Index of last flash sector by current job
 */
PFLS_DATA_SECTION static Pfls_SectorIndexType Pfls_u32JobSectorEnd = 0UL;
/**
 * @brief Type of currently executed job (erase, write, read, or compare)
 */
PFLS_DATA_SECTION static Pfls_JobType Pfls_eJob = PFLS_JOB_ERASE;
/**
 * @brief Pointer to current flash module configuration set
 */
PFLS_DATA_SECTION static const Pfls_ConfigType *Pfls_pConfigPtr = NULL_PTR;
/**
 * @brief P_FLASH sector size Occupancy
 */
PFLS_DATA_SECTION static uint8 Pfls_DflashSectorSizeBit = 0;
/**
 * @brief P_FLASH max wtite size Occupancy
 */
PFLS_DATA_SECTION static uint8 Pfls_DflashMaxWriteSizeBit = 0;

#define PFLS_STOP_SEC_VAR_INIT_8
#include "Pfls_MemMap.h"

#define PFLS_START_SEC_VAR_INIT_32
#include "Pfls_MemMap.h"

#define PFLS_STOP_SEC_VAR_INIT_32
#include "Pfls_MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define PFLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "Pfls_MemMap.h"
/**
 * @brief Index of flash sector currently processed by a job
 */
PFLS_DATA_SECTION volatile Pfls_SectorIndexType Pfls_u32JobSectorIt = 0UL;
/**
    @brief Result of last flash hardware job
*/
PFLS_DATA_SECTION volatile MemIf_JobResultType Pfls_eLLDJobResult = MEMIF_JOB_OK;
/**
    @brief Type of current flash hardware job - used for asynchronous operating mode.
*/
PFLS_DATA_SECTION Pfls_LLDJobType Pfls_eLLDJob = PFLASH_JOB_NONE;

#define PFLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Pfls_MemMap.h"

#define PFLS_START_SEC_VAR_INIT_8
#include "Pfls_MemMap.h"

#define PFLS_STOP_SEC_VAR_INIT_8
#include "Pfls_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
PFLS_TEXT_SECTION static boolean Pfls_IsAddrPageAligned(const Pfls_AddressType u32TargetAddress);
PFLS_TEXT_SECTION static boolean Pfls_IsAddrPageStartAligned(const Pfls_AddressType u32TargetAddress);
PFLS_TEXT_SECTION static boolean Pfls_IsAddrPageEndAligned(const Pfls_AddressType u32TargetAddress);
PFLS_TEXT_SECTION static boolean Pfls_IsAddrSectorStartAligned(
    const Pfls_AddressType u32TargetAddress);
PFLS_TEXT_SECTION static boolean Pfls_IsAddrSectorEndAligned(const Pfls_AddressType u32TargetAddress);
#endif

PFLS_TEXT_SECTION static Pfls_AddressType Pfls_CalcMaxTransferLen(
    const Pfls_LengthType u32MaxTransfer);
PFLS_TEXT_SECTION static Pfls_AddressType Pfls_CalcWriteTransferLength(
    const Pfls_AddressType u32MaxTransferLen);
PFLS_TEXT_SECTION static Pfls_AddressType Pfls_CalcReadTransferLength(
    const Pfls_AddressType u32MaxTransferLen);
PFLS_TEXT_SECTION static uint8               Pfls_CalcLog2(uint32 u32CalInput);
PFLS_TEXT_SECTION static MemIf_JobResultType Pfls_DoJobErase(void);
PFLS_TEXT_SECTION static Pfls_LLDReturnType  Pfls_DoJobRead(const Pfls_AddressType u32Length);
PFLS_TEXT_SECTION static Pfls_LLDReturnType  Pfls_DoJobWrite(const Pfls_AddressType u32Length);

#if (PFLS_COMPARE_API == STD_ON)
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_DoJobCompare(const Pfls_AddressType u32Length);
#endif
#if (PFLS_BLANK_CHECK_API == STD_ON)
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_DoJobBlankCheck(const Pfls_AddressType u32Length);
#endif

PFLS_TEXT_SECTION static MemIf_JobResultType Pfls_DoJobDataTransfer(
    const Pfls_JobType    eJob,
    const Pfls_LengthType u32MaxTransfer);
PFLS_TEXT_SECTION static MemIf_JobResultType  Pfls_DoJob(void);
PFLS_TEXT_SECTION static MemIf_JobResultType  Pfls_LLDGetJobResult(void);
PFLS_TEXT_SECTION static void                 Pfls_LLDClrJobResult(void);
PFLS_TEXT_SECTION static Pfls_SectorIndexType Pfls_GetSectorIndexByAddr(
    const Pfls_AddressType u32TargetAddress);

#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
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
PFLS_TEXT_SECTION static boolean Pfls_IsAddrPageAligned(const Pfls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;

    /* Aligned to Double Word or Word depending if CODE/DATA Flash or DFO */
    if (0U == (u32TargetAddress % P_FLASH_PAGE_SIZE))
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
PFLS_TEXT_SECTION static boolean Pfls_IsAddrPageStartAligned(const Pfls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;

    if (((boolean)TRUE == Pfls_IsAddrPageAligned(u32TargetAddress)) &&
        (u32TargetAddress < (Pfls_AddressType)PFLS_TOTAL_SIZE))
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
PFLS_TEXT_SECTION static boolean Pfls_IsAddrPageEndAligned(const Pfls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;

    if (((boolean)TRUE == Pfls_IsAddrPageAligned(u32TargetAddress + 1U)) &&
        (u32TargetAddress < (Pfls_AddressType)PFLS_TOTAL_SIZE))
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
PFLS_TEXT_SECTION static boolean Pfls_IsAddrSectorStartAligned(const Pfls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;
    /*
     * only allowed form of pointer arithmetic
     */
    if (((u32TargetAddress % P_FLASH_SECTOR_SIZE) == 0U) && (u32TargetAddress < PFLS_TOTAL_SIZE))
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
PFLS_TEXT_SECTION static boolean Pfls_IsAddrSectorEndAligned(const Pfls_AddressType u32TargetAddress)
{
    boolean bRetVal = (boolean)TRUE;
    /*
     * only allowed form of pointer arithmetic
     */
    if ((((u32TargetAddress + 1U) % P_FLASH_SECTOR_SIZE) == 0U) &&
        (u32TargetAddress < PFLS_TOTAL_SIZE))
    {
    }
    else
    {
        bRetVal = (boolean)FALSE;
    }

    return bRetVal;
}
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */

/**
 * @brief        Calculate last logical address to read, write, or compare
 *
 * @param[in]    u32MaxTransfer Maximum number of bytes to read, write, or compare
 *               in current cycle of Pfls_MainFunction
 *
 * @return       Pfls_AddressType
 * @retval       0 .. (PFLS_TOTAL_SIZE - 1)
 */
PFLS_TEXT_SECTION static Pfls_AddressType Pfls_CalcMaxTransferLen(const Pfls_LengthType u32MaxTransfer)
{
    Pfls_AddressType u32MaxTransferLen = u32MaxTransfer;

    /* Adjust the u32MaxTransferEndAddr address to transfer only
        the u32MaxTransfer bytes in one Pfls_MainFunction() call */
    if (Pfls_u32JobAddrEnd < (Pfls_u32JobAddrIt + u32MaxTransfer))
    {
        u32MaxTransferLen = Pfls_u32JobAddrEnd - Pfls_u32JobAddrIt + 1U;
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
 *               or compare data from in this cycle of Pfls_MainFunction
 *
 * @return      Pfls_AddressType
 * @retval      0 .. (PFLS_SECTOR_SIZE - 1)
 */
PFLS_TEXT_SECTION static Pfls_AddressType Pfls_CalcWriteTransferLength(
    const Pfls_AddressType u32MaxTransferLen)
{
    Pfls_AddressType TransferLength = u32MaxTransferLen;

    if (((Pfls_u32JobAddrIt + u32MaxTransferLen) >> Pfls_DflashMaxWriteSizeBit) ==
        (Pfls_u32JobAddrIt >> Pfls_DflashMaxWriteSizeBit))
    {
    }
    else
    {
        TransferLength = P_FLASH_MAX_WRITE_SIZE - (Pfls_u32JobAddrIt & (P_FLASH_MAX_WRITE_SIZE - 1U));
    }

    return (TransferLength);
}

/**
 * @brief       Calculate number of bytes to read, write, or compare
 *              from current sector
 *
 * @param[in]    u32MaxTransferEndAddr Last address to read, write,
 *               or compare data from in this cycle of Pfls_MainFunction
 *
 * @return      Pfls_AddressType
 * @retval      0 .. (PFLS_SECTOR_SIZE - 1)
 */
PFLS_TEXT_SECTION static Pfls_AddressType Pfls_CalcReadTransferLength(
    const Pfls_AddressType u32MaxTransferLen)
{
    Pfls_AddressType TransferLength = u32MaxTransferLen;

    if (((Pfls_u32JobAddrIt + u32MaxTransferLen) >> Pfls_DflashSectorSizeBit) ==
        (Pfls_u32JobAddrIt >> Pfls_DflashSectorSizeBit))
    {
    }
    else
    {
        TransferLength = P_FLASH_SECTOR_SIZE - (Pfls_u32JobAddrIt & (P_FLASH_SECTOR_SIZE - 1U));
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
PFLS_TEXT_SECTION static uint8 Pfls_CalcLog2(uint32 u32CalInput)
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
PFLS_TEXT_SECTION static MemIf_JobResultType Pfls_DoJobErase(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_PENDING;

    if (Pfls_u32JobSectorIt > Pfls_u32JobSectorEnd)
    {
        /* No more sectors to erase */
        eRetVal = MEMIF_JOB_OK;
    }
    else
    {
        Pfls_LLDReturnType eLldRetVal = PFLASH_E_OK;

        eLldRetVal = Pfls_Hal_Erase();

        if (PFLASH_E_FAILED == eLldRetVal)
        {
            eRetVal = MEMIF_JOB_FAILED;
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* SWS_Pfls_00315 */
            (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                         PFLS_INSTANCE_ID,
                                         PFLS_MAINFUNCTION_ID,
                                         PFLS_E_ERASE_FAILED);
#endif
        }
        else if ((Pfls_u32JobSectorIt == Pfls_u32JobSectorEnd) && (PFLASH_E_OK == eLldRetVal))
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
 * @return       Pfls_LLDReturnType
 * @retval       PFLASH_E_OK read operation succeeded
 * @retval       PFLASH_E_FAILED read operation failed due to a hardware error
 */
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_DoJobRead(const Pfls_AddressType u32Length)
{
    Pfls_LLDReturnType eRetVal = PFLASH_E_OK;

    eRetVal = Pfls_Hal_Read(Pfls_u32JobAddrIt, u32Length, Pfls_pJobDataDestPtr);

    /* Do physical sector read */
    if (PFLASH_E_FAILED == eRetVal)
    {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Pfls_00317 SWS_Pfls_00106 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_MAINFUNCTION_ID,
                                     PFLS_E_READ_FAILED);
#endif
    }
    return (eRetVal);
}

/**
 * @brief        Write up to one physical flash sector
 *
 * @param[in]    u32SectorOffset Flash sector offset to write data from
 * @param[in]    Length Number of bytes to read
 *
 * @return       Pfls_LLDReturnType
 * @retval       PFLASH_E_OK write operation succeeded
 * @retval       PFLASH_E_FAILED write operation failed due to a hardware error
 */
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_DoJobWrite(const Pfls_AddressType u32Length)
{
    Pfls_LLDReturnType eRetVal = PFLASH_E_OK;

    eRetVal = Pfls_Hal_Write(Pfls_u32JobAddrIt, u32Length, Pfls_pJobDataSrcPtr);

    if (PFLASH_E_FAILED == eRetVal)
    {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Pfls_00316 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_MAINFUNCTION_ID,
                                     PFLS_E_WRITE_FAILED);
#endif
    }
    return (eRetVal);
}

#if (PFLS_COMPARE_API == STD_ON)
/**
* @brief        Compare up to one physical flash sector with data buffer
* @param[in]    u32Length Number of bytes to compare
*
* @return       Pfls_LLDReturnType
* @retval       PFLASH_E_OK compare operation succeeded
* @retval       PFLASH_E_FAILED compare operation failed due to a hardware error
* @retval       PFLASH_E_BLOCK_INCONSISTENT compare operation failed
          due to data mismatch
*/
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_DoJobCompare(const Pfls_AddressType u32Length)
{

    Pfls_LLDReturnType eRetVal = PFLASH_E_OK;
    eRetVal = Pfls_Hal_Compare(Pfls_u32JobAddrIt, u32Length, Pfls_pJobDataSrcPtr);
    if (PFLASH_E_FAILED == eRetVal)
    {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Pfls_00318 SWS_Pfls_00154 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_MAINFUNCTION_ID,
                                     PFLS_E_COMPARE_FAILED);
#endif
    }
    return (eRetVal);
}
#endif /* PFLS_COMPARE_API == STD_ON */

#if (PFLS_BLANK_CHECK_API == STD_ON)
/**
 * @brief          Compare up to one physical flash sector with pre-defined erased value
 *
 * @param[in]      u32Length Number of bytes to verify
 *
 * @return         Pfls_LLDReturnType
 * @retval         PFLASH_E_OK blank check operation succeeded
 * @retval         PFLASH_E_FAILED blank check operation failed due to a hardware error
 * @retval         PFLASH_E_BLOCK_INCONSISTENT blank check operation failed
 *                 due to data mismatch
 */
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_DoJobBlankCheck(const Pfls_AddressType u32Length)
{
    Pfls_LLDReturnType eRetVal = PFLASH_E_OK;

    eRetVal = Pfls_Hal_Compare(Pfls_u32JobAddrIt, u32Length, NULL_PTR);

    if (PFLASH_E_FAILED == eRetVal)
    {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Pfls_00318 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_BLANK_CHECK_ID,
                                     PFLS_E_COMPARE_FAILED);
#endif
    }
    return (eRetVal);
}
#endif /* PFLS_BLANK_CHECK_API == STD_ON */

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
PFLS_TEXT_SECTION static MemIf_JobResultType Pfls_DoJobDataTransfer(
    const Pfls_JobType    eJob,
    const Pfls_LengthType u32MaxTransfer)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_PENDING;

    /* No more data to write */
    if (Pfls_u32JobAddrIt > Pfls_u32JobAddrEnd)
    {
        eRetVal = MEMIF_JOB_OK;
    }
    else
    {

        Pfls_AddressType   u32MaxTransferLen = 0UL;
        Pfls_LLDReturnType eTransferRetVal   = PFLASH_E_FAILED;

        /* Last address to transfer data to/from in this call of
            the Pfls_MainFunction() functions */
        u32MaxTransferLen = Pfls_CalcMaxTransferLen(u32MaxTransfer);

        Pfls_AddressType u32SectorTransferLength = 0UL;

        if (eJob == PFLS_JOB_WRITE)
        {
            u32SectorTransferLength = Pfls_CalcWriteTransferLength(u32MaxTransferLen);
            eTransferRetVal         = Pfls_DoJobWrite(u32SectorTransferLength);
            /* Update the source data pointer for next write */
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be performed
             * Here Unavoidably.*/
            Pfls_pJobDataSrcPtr += u32SectorTransferLength;
            /* PRQA S 488 -- */
        }
        else if (eJob == PFLS_JOB_READ)
        {
            u32SectorTransferLength = Pfls_CalcReadTransferLength(u32MaxTransferLen);
            eTransferRetVal         = Pfls_DoJobRead(u32SectorTransferLength);
            /* Update the source data pointer for next write */
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be performed
             * Here Unavoidably.*/
            Pfls_pJobDataDestPtr += u32SectorTransferLength;
            /* PRQA S 488 -- */
        }
#if (PFLS_COMPARE_API == STD_ON)
        else if (eJob == PFLS_JOB_COMPARE)
        {
            u32SectorTransferLength = Pfls_CalcReadTransferLength(u32MaxTransferLen);
            eTransferRetVal         = Pfls_DoJobCompare(u32SectorTransferLength);
            /* Update the source data pointer for next compare */
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be performed
             * Here Unavoidably.*/
            Pfls_pJobDataSrcPtr += u32SectorTransferLength;
            /* PRQA S 488 -- */
        }
#endif /* PFLS_COMPARE_API == STD_ON */

#if (PFLS_BLANK_CHECK_API == STD_ON)
        else if (eJob == PFLS_JOB_BLANK_CHECK)
        {
            u32SectorTransferLength = Pfls_CalcReadTransferLength(u32MaxTransferLen);
            eTransferRetVal         = Pfls_DoJobBlankCheck(u32SectorTransferLength);
        }
#endif /* PFLS_BLANK_CHECK_API == STD_ON */
        else
        {
        }
        Pfls_u32JobAddrIt += u32SectorTransferLength;
        if (PFLASH_E_FAILED == eTransferRetVal)
        {
            eRetVal = MEMIF_JOB_FAILED;
        }
        else if (PFLASH_E_BLOCK_INCONSISTENT == eTransferRetVal)
        {
            /* compare job only */
            eRetVal = MEMIF_BLOCK_INCONSISTENT;
        }
        else if ((Pfls_u32JobAddrIt > Pfls_u32JobAddrEnd) && (PFLASH_E_OK == eTransferRetVal))
        {
            /* All desired job data has been successfully transferred */
            eRetVal = MEMIF_JOB_OK;
        }
        else
        {
            /* The write operation is either pending (PFLASH_E_PENDING)
            in hardware in case of asynchronous operation or
            finished (PFLASH_E_OK) in case of synchronous operation
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
PFLS_TEXT_SECTION static MemIf_JobResultType Pfls_DoJob(void)
{
    MemIf_JobResultType eWorkResult = MEMIF_JOB_OK;
    if (Pfls_eJob == PFLS_JOB_ERASE)
    {
        eWorkResult = Pfls_DoJobErase();
    }
    else if (Pfls_eJob == PFLS_JOB_WRITE)
    {
        eWorkResult = Pfls_DoJobDataTransfer(Pfls_eJob, Pfls_u32MaxWrite);
    }
#if (PFLS_BLANK_CHECK_API == STD_ON)
    else if (Pfls_eJob == PFLS_JOB_BLANK_CHECK)
    {
        eWorkResult = Pfls_DoJobDataTransfer(Pfls_eJob, Pfls_u32MaxRead);
    }
#endif /* PFLS_BLANK_CHECK_API == STD_ON */
    else if (Pfls_eJob == PFLS_JOB_READ)
    {
        eWorkResult = Pfls_DoJobDataTransfer(Pfls_eJob, Pfls_u32MaxRead);
    }
#if (PFLS_COMPARE_API == STD_ON)
    else if (Pfls_eJob == PFLS_JOB_COMPARE)
    {
        eWorkResult = Pfls_DoJobDataTransfer(Pfls_eJob, Pfls_u32MaxRead);
    }
#endif /* PFLS_COMPARE_API == STD_ON */
    else
    {
    }
    return eWorkResult;
}

/**
 * @brief       Returns the LLD JobResult
 */
PFLS_TEXT_SECTION static MemIf_JobResultType Pfls_LLDGetJobResult(void)
{
    return (Pfls_eLLDJobResult);
}

/**
 * @brief          Clear status of erase or write hardware job result.
 */
PFLS_TEXT_SECTION static void Pfls_LLDClrJobResult(void)
{
    Pfls_eLLDJobResult = MEMIF_JOB_OK;
    Pfls_eLLDJob       = PFLASH_JOB_NONE;
}

/**
 * @brief        Maps u32TargetAddress to sector index
 *
 * @param[in]    u32TargetAddress Target address in flash memory
 *
 * @return       Zero based index of logical sector
 * @retval       0 .. (Pfls_pConfigPtr->u32SectorCount - 1)
 */
PFLS_TEXT_SECTION static Pfls_SectorIndexType Pfls_GetSectorIndexByAddr(
    const Pfls_AddressType u32TargetAddress)
{
    return (u32TargetAddress >> Pfls_DflashSectorSizeBit);
}

/**
 * @brief        The function initializes Pfls module.
 * @param[in]    pConfigPtr        Pointer to flash driver configuration set.
 *
 * @implements SWS_Pfls_00249
 */
PFLS_TEXT_SECTION void Pfls_Init(const Pfls_ConfigType *pConfigPtr)
{
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
#ifdef PFLS_PRECOMPILE_SUPPORT
    if (NULL_PTR != pConfigPtr)
#else
    if (NULL_PTR == pConfigPtr)
#endif /* <DRIVER>_PRECOMPILE_SUPPORT */
    {
        /* SWS_Pfls_00015 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_INIT_ID,
                              PFLS_E_PARAM_CONFIG);
    }
    else if (MEMIF_JOB_PENDING == Pfls_eJobResult)
    {
        /* SWS_Pfls_00268 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_INIT_ID, PFLS_E_BUSY);
    }
    else
    {
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */

#ifdef PFLS_PRECOMPILE_SUPPORT
        /* SWS_Pfls_000191 */
        Pfls_pConfigPtr = &Pfls_Config;
        (void)pConfigPtr;
#else
    Pfls_pConfigPtr = pConfigPtr;
#endif /* <DRIVER>_PRECOMPILE_SUPPORT */

        /* Set the max number of bytes to read/write
            during Pfls_MainFunction call */
        if (MEMIF_MODE_SLOW == Pfls_pConfigPtr->eDefaultMode)
        {
            /* SWS_Pfls_00086 */
            Pfls_u32MaxRead  = Pfls_pConfigPtr->u32MaxReadNormalMode;
            Pfls_u32MaxWrite = Pfls_pConfigPtr->u32MaxWriteNormalMode;
        }
        else
        {
            /* SWS_Pfls_00086 */
            Pfls_u32MaxRead  = Pfls_pConfigPtr->u32MaxReadFastMode;
            Pfls_u32MaxWrite = Pfls_pConfigPtr->u32MaxWriteFastMode;
        }
        /* Initialize flash hardware
        NOTE: The variable 'Pfls_eLLDJobResult' will be updated in the below function*/
        /* SWS_Pfls_00014 */
        Pfls_Hal_Init();

        if (MEMIF_JOB_FAILED == Pfls_eLLDJobResult)
        {
            Pfls_eJobResult = MEMIF_JOB_FAILED;
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
            Pfls_pConfigPtr = NULL_PTR;
            /* SWS_Pfls_00268 */
            (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_INIT_ID, PFLS_E_BUSY);
#endif
        }
        else
        {
            /* SWS_Pfls_00324 */
            Pfls_eJobResult = MEMIF_JOB_OK;
        }
        Pfls_DflashSectorSizeBit   = Pfls_CalcLog2(P_FLASH_SECTOR_SIZE);
        Pfls_DflashMaxWriteSizeBit = Pfls_CalcLog2(P_FLASH_MAX_WRITE_SIZE);

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
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
 * @implements       SWS_Pfls_00001 SWS_Pfls_00250 SWS_Pfls_00218 SWS_Pfls_00330 SWS_Pfls_00220
 */
PFLS_TEXT_SECTION Std_ReturnType Pfls_Erase(Pfls_AddressType u32TargetAddress,
                                            Pfls_LengthType  u32Length)
{
    Std_ReturnType       u8RetVal           = (Std_ReturnType)E_OK;
    Pfls_SectorIndexType u32TmpJobSectorIt  = 0UL;
    Pfls_SectorIndexType u32TmpJobSectorEnd = 0UL;

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        /* SWS_Pfls_00065 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_ERASE_ID, PFLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((boolean)FALSE == (Pfls_IsAddrSectorStartAligned((Pfls_AddressType)u32TargetAddress)))
    {
        /* SWS_Pfls_00310 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_ERASE_ID,
                              PFLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) ||
             ((boolean)FALSE ==
              (Pfls_IsAddrSectorEndAligned(((Pfls_AddressType)u32TargetAddress + u32Length) - 1U))))
    {
        /* SWS_Pfls_00310 SWS_Pfls_00021 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_ERASE_ID,
                              PFLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobSectorIt  = Pfls_GetSectorIndexByAddr(u32TargetAddress);
        u32TmpJobSectorEnd = Pfls_GetSectorIndexByAddr((u32TargetAddress + u32Length) - 1U);

        if (MEMIF_JOB_PENDING == Pfls_eJobResult)
        {
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Pfls_00312 SWS_Pfls_00023 */
            (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_ERASE_ID, PFLS_E_BUSY);
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* Configure the erase job */
            /* SWS_Pfls_00327 */
            Pfls_u32JobSectorIt  = u32TmpJobSectorIt;
            Pfls_u32JobSectorEnd = u32TmpJobSectorEnd;
            Pfls_eJob            = PFLS_JOB_ERASE;
            Pfls_LLDClrJobResult();
            /* SWS_Pfls_00329 */
            Pfls_eJobResult = Pfls_DoJob();
            if ((MEMIF_JOB_FAILED == Pfls_eJobResult) ||
                (MEMIF_BLOCK_INCONSISTENT == Pfls_eJobResult))
            {

                if (NULL_PTR != Pfls_pConfigPtr->jobErrorNotificationPtr)
                {
                    /* Call PflsJobErrorNotification function if configured */
                    Pfls_pConfigPtr->jobErrorNotificationPtr();
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
 * @implements       SWS_Pfls_00001 SWS_Pfls_00002 SWS_Pfls_00003 SWS_Pfls_00216 SWS_Pfls_00251
 *                   SWS_Pfls_00223 SWS_Pfls_00334 SWS_Pfls_00225
 */
PFLS_TEXT_SECTION Std_ReturnType Pfls_Write(Pfls_AddressType u32TargetAddress,
                                            const uint8     *pSourceAddressPtr,
                                            Pfls_LengthType  u32Length)
{
    Std_ReturnType   u8RetVal         = (Std_ReturnType)E_OK;
    Pfls_AddressType u32TmpJobAddrEnd = 0UL;

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        /* SWS_Pfls_00066 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_WRITE_ID, PFLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((boolean)FALSE == (Pfls_IsAddrPageStartAligned((Pfls_AddressType)u32TargetAddress)))
    {
        /* SWS_Pfls_00310 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_WRITE_ID,
                              PFLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) ||
             ((boolean)FALSE ==
              (Pfls_IsAddrPageEndAligned(((Pfls_AddressType)u32TargetAddress + u32Length) - 1U))))
    {
        /* SWS_Pfls_00310 SWS_Pfls_00027 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_WRITE_ID,
                              PFLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == pSourceAddressPtr)
    {
        /* SWS_Pfls_00310 SWS_Pfls_00157 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_WRITE_ID,
                              PFLS_E_PARAM_DATA);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobAddrEnd = (u32TargetAddress + u32Length) - 1U;

        if (MEMIF_JOB_PENDING == Pfls_eJobResult)
        {
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Pfls_00312 SWS_Pfls_00030 */
            (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_WRITE_ID, PFLS_E_BUSY);
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* Configure the write job */
            /* SWS_Pfls_00208 SWS_Pfls_00331 */
            Pfls_u32JobAddrEnd  = u32TmpJobAddrEnd;
            Pfls_u32JobAddrIt   = u32TargetAddress;
            Pfls_pJobDataSrcPtr = pSourceAddressPtr;
            Pfls_eJob           = PFLS_JOB_WRITE;
            Pfls_LLDClrJobResult();
            /* SWS_Pfls_00333 */
            Pfls_eJobResult = Pfls_DoJob();
            if ((MEMIF_JOB_FAILED == Pfls_eJobResult) ||
                (MEMIF_BLOCK_INCONSISTENT == Pfls_eJobResult))
            {
                if (NULL_PTR != Pfls_pConfigPtr->jobErrorNotificationPtr)
                {
                    /* Call PflsJobErrorNotification function if configured */
                    Pfls_pConfigPtr->jobErrorNotificationPtr();
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

/* SWS_Pfls_00183 */
#if (PFLS_CANCEL_API == STD_ON)
/**
 * @brief         Cancel an ongoing flash read, write, erase or compare job.
 *
 * @return       void
 *
 * @implements   SWS_Pfls_00252 SWS_Pfls_00229
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 It will exist not used functions when use QAC to analysis
 * the whole project, this error need deviation in doc but not deviation in code Reason: The
 * function used in fee module.*/
PFLS_TEXT_SECTION void Pfls_Cancel(void)
/* PRQA S 1503 -- */
{
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        /* SWS_Pfls_00356 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_CANCEL_ID, PFLS_E_UNINIT);
    }
    else
    {
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */

        if (MEMIF_JOB_PENDING == Pfls_eJobResult)
        {
            /* Cancel ongoing hardware job */
            /* SWS_Pfls_00230 */
            Pfls_Hal_Cancel();
            /* If underlying hardware job was successfully canceled */
            if (MEMIF_JOB_CANCELED == Pfls_eLLDJobResult)
            {
                /* SWS_Pfls_00033 */
                /* Update global job result status */
                Pfls_eJobResult = MEMIF_JOB_CANCELED;
            }

            if (NULL_PTR != Pfls_pConfigPtr->jobErrorNotificationPtr)
            {
                /* SWS_Pfls_00147 */
                /* Call PflsJobErrorNotification function if configured */
                Pfls_pConfigPtr->jobErrorNotificationPtr();
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
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
}
#endif /* PFLS_CANCEL_API == STD_ON */

/* SWS_Pfls_00184 */
#if (PFLS_GET_STATUS_API == STD_ON)
/**
 * @brief            Returns the PFLS module status.
 *
 * @return           MemIf_StatusType
 * @retval           MEMIF_UNINIT        Module has not been initialized (yet).
 * @retval           MEMIF_IDLE          Module is currently idle.
 * @retval           MEMIF_BUSY          Module is currently busy.
 *
 * @implements       SWS_Pfls_00253 SWS_Pfls_00034
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 It will exist not used functions when use QAC to analysis
 * the whole project, this error need deviation in doc but not deviation in code Reason: The
 * function used in fee module.*/
PFLS_TEXT_SECTION MemIf_StatusType Pfls_GetStatus(void)
/* PRQA S 1503 -- */
{
    MemIf_StatusType eRetVal;
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        eRetVal = MEMIF_UNINIT;
    }
    else if (MEMIF_JOB_PENDING == Pfls_eJobResult)
    {
        eRetVal = MEMIF_BUSY;
    }
    else
    {
        eRetVal = MEMIF_IDLE;
    }

    return (eRetVal);
}
#endif /* PFLS_GET_STATUS_API == STD_ON */

/* SWS_Pfls_00185 */
#if (PFLS_GET_JOB_RESULT_API == STD_ON)
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
 * @implements       SWS_Pfls_00254 SWS_Pfls_00035
 */
PFLS_TEXT_SECTION MemIf_JobResultType Pfls_GetJobResult(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_OK;

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        /* SWS_Pfls_00358 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_GETJOBRESULT_ID,
                              PFLS_E_UNINIT);
        eRetVal = (MemIf_JobResultType)MEMIF_JOB_FAILED;
    }
    else
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* SWS_Pfls_00036 */
        eRetVal = Pfls_eJobResult;
    }

    return (eRetVal);
}
#endif /* PFLS_GET_JOB_RESULT_API == STD_ON */

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
 * @implements       SWS_Pfls_00001 SWS_Pfls_00002 SWS_Pfls_00216 SWS_Pfls_00256 SWS_Pfls_00236
 *                   SWS_Pfls_00340 SWS_Pfls_00238
 */
PFLS_TEXT_SECTION Std_ReturnType Pfls_Read(Pfls_AddressType u32SourceAddress,
                                           uint8           *pTargetAddressPtr,
                                           Pfls_LengthType  u32Length)
{
    Std_ReturnType   u8RetVal         = (Std_ReturnType)E_OK;
    Pfls_AddressType u32TmpJobAddrEnd = 0UL;

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        /* SWS_Pfls_00099 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_READ_ID, PFLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (u32SourceAddress >= PFLS_TOTAL_SIZE)
    {
        /* SWS_Pfls_00310 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_READ_ID,
                              PFLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) || ((u32SourceAddress + u32Length) > PFLS_TOTAL_SIZE))
    {
        /* SWS_Pfls_00310 SWS_Pfls_00098 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_READ_ID,
                              PFLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == pTargetAddressPtr)
    {
        /* SWS_Pfls_00310 SWS_Pfls_00158 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_READ_ID, PFLS_E_PARAM_DATA);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobAddrEnd = (u32SourceAddress + u32Length) - 1U;

        if (MEMIF_JOB_PENDING == Pfls_eJobResult)
        {
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Pfls_00312 SWS_Pfls_00100 */
            (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_READ_ID, PFLS_E_BUSY);
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* Configure the read job */
            /* SWS_Pfls_00208 SWS_Pfls_00337 */
            Pfls_u32JobAddrIt    = u32SourceAddress;
            Pfls_u32JobAddrEnd   = u32TmpJobAddrEnd;
            Pfls_pJobDataDestPtr = pTargetAddressPtr;
            Pfls_eJob            = PFLS_JOB_READ;
            Pfls_LLDClrJobResult();

            /* Execute the read job */
            /* SWS_Pfls_00339 */
            Pfls_eJobResult = MEMIF_JOB_PENDING;
        }
    }
    return (u8RetVal);
}

/* SWS_Pfls_00186 */
#if (PFLS_COMPARE_API == STD_ON)
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
 * @implements       SWS_Pfls_00257 SWS_Pfls_00241 SWS_Pfls_00344 SWS_Pfls_00243
 */
PFLS_TEXT_SECTION Std_ReturnType Pfls_Compare(Pfls_AddressType u32SourceAddress,
                                              const uint8     *pTargetAddressPtr,
                                              Pfls_LengthType  u32Length)
{
    Std_ReturnType   u8RetVal         = (Std_ReturnType)E_OK;
    Pfls_AddressType u32TmpJobAddrEnd = 0UL;

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        /* SWS_Pfls_00152 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_COMPARE_ID, PFLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (u32SourceAddress >= PFLS_TOTAL_SIZE)
    {
        /* SWS_Pfls_00310 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_COMPARE_ID,
                              PFLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) || ((u32SourceAddress + u32Length) > PFLS_TOTAL_SIZE))
    {
        /* SWS_Pfls_00310 SWS_Pfls_00151 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_COMPARE_ID,
                              PFLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (NULL_PTR == pTargetAddressPtr)
    {
        /* SWS_Pfls_00310 SWS_Pfls_00273 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_COMPARE_ID,
                              PFLS_E_PARAM_DATA);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
    {

        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobAddrEnd = (u32SourceAddress + u32Length) - 1U;

        if (MEMIF_JOB_PENDING == Pfls_eJobResult)
        {
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Pfls_00312 SWS_Pfls_00153 */
            (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                                  PFLS_INSTANCE_ID,
                                  PFLS_COMPARE_ID,
                                  PFLS_E_BUSY);
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* SWS_Pfls_00341 */
            Pfls_u32JobAddrIt   = u32SourceAddress;
            Pfls_u32JobAddrEnd  = u32TmpJobAddrEnd;
            Pfls_pJobDataSrcPtr = pTargetAddressPtr;
            Pfls_eJob           = PFLS_JOB_COMPARE;
            Pfls_LLDClrJobResult();
            /* SWS_Pfls_00343 */
            Pfls_eJobResult = MEMIF_JOB_PENDING;
        }
    }

    return (u8RetVal);
}
#endif /* PFLS_COMPARE_API == STD_ON */

#if (PFLS_BLANK_CHECK_API == STD_ON)
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
 * @implements       SWS_Pfls_00371 SWS_Pfls_00373 SWS_Pfls_00377 SWS_Pfls_00378 SWS_Pfls_00269
 */
PFLS_TEXT_SECTION Std_ReturnType Pfls_BlankCheck(Pfls_AddressType u32TargetAddress,
                                                 Pfls_LengthType  u32Length)
{
    Std_ReturnType   u8RetVal         = (Std_ReturnType)E_OK;
    Pfls_AddressType u32TmpJobAddrEnd = 0UL;

#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        /* SWS_Pfls_00382 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_BLANK_CHECK_ID,
                              PFLS_E_UNINIT);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if (u32TargetAddress >= PFLS_TOTAL_SIZE)
    {
        /* SWS_Pfls_00310 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_BLANK_CHECK_ID,
                              PFLS_E_PARAM_ADDRESS);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else if ((0U == u32Length) || ((u32TargetAddress + u32Length) > PFLS_TOTAL_SIZE))
    {
        /* SWS_Pfls_00310 SWS_Pfls_00381 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_BLANK_CHECK_ID,
                              PFLS_E_PARAM_LENGTH);
        u8RetVal = (Std_ReturnType)E_NOT_OK;
    }
    else
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
    {
        /* Perform calculations outside the critical section in order
            to limit time spend in the CS */
        u32TmpJobAddrEnd = (u32TargetAddress + u32Length) - 1U;

        if (MEMIF_JOB_PENDING == Pfls_eJobResult)
        {
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
            /* SWS_Pfls_00383 */
            (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                                  PFLS_INSTANCE_ID,
                                  PFLS_BLANK_CHECK_ID,
                                  PFLS_E_BUSY);
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
            u8RetVal = (Std_ReturnType)E_NOT_OK;
        }
        else
        {
            /* SWS_Pfls_00374 */
            Pfls_u32JobAddrIt  = u32TargetAddress;
            Pfls_u32JobAddrEnd = u32TmpJobAddrEnd;
            Pfls_eJob          = PFLS_JOB_BLANK_CHECK;
            Pfls_LLDClrJobResult();
            /* SWS_Pfls_00376 */
            Pfls_eJobResult = MEMIF_JOB_PENDING;
        }
    }

    return (u8RetVal);
}
#endif /* PFLS_BLANK_CHECK_API == STD_ON */

/* SWS_Pfls_00187 */
#if (PFLS_SET_MODE_API == STD_ON)
/**
 * @brief           Sets the PFLS module's operation mode to the given Mode.
 *
 * @param[in]        Mode        MEMIF_MODE_FAST or MEMIF_MODE_SLOW.
 *
 * @implements      SWS_Pfls_00258
 */
PFLS_TEXT_SECTION void Pfls_SetMode(MemIf_ModeType eMode)
{
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_SETMODE_ID, PFLS_E_UNINIT);
    }
    else if (MEMIF_JOB_PENDING == Pfls_eJobResult)
    {
        /* SWS_Pfls_00312 SWS_Pfls_00156 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID, PFLS_INSTANCE_ID, PFLS_SETMODE_ID, PFLS_E_BUSY);
    }
    else
    {
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
        /* Set the max number of bytes to read/write
            during Pfls_MainFunction call */
        switch (eMode)
        {
            /* SWS_Pfls_00155 */
            case MEMIF_MODE_FAST:
                Pfls_u32MaxRead  = Pfls_pConfigPtr->u32MaxReadFastMode;
                Pfls_u32MaxWrite = Pfls_pConfigPtr->u32MaxWriteFastMode;
                break;

            case MEMIF_MODE_SLOW:
                Pfls_u32MaxRead  = Pfls_pConfigPtr->u32MaxReadNormalMode;
                Pfls_u32MaxWrite = Pfls_pConfigPtr->u32MaxWriteNormalMode;
                break;

            default:
                /* Do nothing - should not happen in Fully Trusted Environment;
                   'default' clause added to fulfill MISRA Rule 15.3 */
                break;
        }
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
}
#endif /* PFLS_SET_MODE_API == STD_ON */

#if (PFLS_VERSION_INFO_API == STD_ON)
/**
 * @brief        Returns version information about PFLS module.
 *
 * @param[in,out] pVersionInfoPtr  Pointer to where to store the version information of this module.
 *
 * @implements    SWS_Pfls_00259
 */
PFLS_TEXT_SECTION void Pfls_GetVersionInfo(Std_VersionInfoType *pVersionInfoPtr)
{
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == pVersionInfoPtr)
    {
        /* SWS_Pfls_00363 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_GETVERSIONINFO_ID,
                              PFLS_E_PARAM_POINTER);
    }
    else
    {
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
        pVersionInfoPtr->moduleID         = (uint16)PFLS_MODULE_ID;
        pVersionInfoPtr->vendorID         = (uint16)PFLS_VENDOR_ID;
        pVersionInfoPtr->sw_major_version = (uint8)PFLS_SW_MAJOR_VERSION;
        pVersionInfoPtr->sw_minor_version = (uint8)PFLS_SW_MINOR_VERSION;
        pVersionInfoPtr->sw_patch_version = (uint8)PFLS_SW_PATCH_VERSION;
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
}
#endif /* PFLS_VERSION_INFO_API == STD_ON */

/**
 * @brief            Performs actual flash read, write, erase and compare jobs.
 * @details          Bytes number processed per cycle depends by job type (erase, write, read, compare)
 *                   current PFLS module's operating mode (normal, fast)
 *                   and write, erase Mode of Execution (sync, async).
 *
 * @implements       SWS_Pfls_00255 SWS_Pfls_00037 SWS_Pfls_00038 SWS_Pfls_00040 SWS_Pfls_00235
 *                   SWS_Pfls_00196
 *
 */
PFLS_TEXT_SECTION void Pfls_MainFunction(void)
{
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Pfls_pConfigPtr)
    {
        /* SWS_Pfls_00117 */
        (void)Det_ReportError((uint16)PFLS_MODULE_ID,
                              PFLS_INSTANCE_ID,
                              PFLS_MAINFUNCTION_ID,
                              PFLS_E_UNINIT);
    }
    else
    {
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
        if (MEMIF_JOB_PENDING == Pfls_eJobResult)
        {

            /* Check the status of pending jobs. */
            if (PFLASH_JOB_NONE != Pfls_eLLDJob) /* If there is any Async job scheduled. */
            {
                /* Process ongoing erase or write asynchronous hardware job */
                Pfls_Hal_LLDMainFunction(); /* Process the maximum defined length(configuration
                                              parameter), or until a sector boundary. */
            }

            /* Get status/result of ongoing erase or write Async or Irq mode hardware job */
            Pfls_eJobResult = Pfls_LLDGetJobResult();

            if (MEMIF_JOB_OK == Pfls_eJobResult)
            {
                /* SWS_Pfls_00345 */
                Pfls_eJobResult = Pfls_DoJob();
            }
            else
            {
                /* Pfls_eJobResult != MEMIF_JOB_OK */
            }

            if (MEMIF_JOB_OK == Pfls_eJobResult)
            {
                if (NULL_PTR != Pfls_pConfigPtr->jobEndNotificationPtr)
                {
                    /* Call PflsJobEndNotification function if configured */
                    /* SWS_Pfls_00346 */
                    Pfls_pConfigPtr->jobEndNotificationPtr();
                }
                else
                {
                    /* Callback notification configured as null pointer */
                }
            }
            else if ((MEMIF_JOB_FAILED == Pfls_eJobResult) ||
                     (MEMIF_BLOCK_INCONSISTENT == Pfls_eJobResult))
            {

                if (NULL_PTR != Pfls_pConfigPtr->jobErrorNotificationPtr)
                {
                    /* SWS_Pfls_00260 FSWS_Pfls_00347 SWS_Pfls_00348 SWS_Pfls_00349 */
                    /* Call PflsJobErrorNotification function if configured */
                    Pfls_pConfigPtr->jobErrorNotificationPtr();
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
                    Pfls_MainFunction call(for Async jobs, or in interrupt context for IRQ type jobs). */
            }
        }
        else
        {
            /* Nothing to do since no job is pending */
        }
#if (PFLS_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
}

#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

#ifdef __cplusplus
}
#endif
