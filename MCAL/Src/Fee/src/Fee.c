/**
*   @file    Fee.c
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
#include "Fee.h"
#include "Fee_Internal.h"
#include "Fee_Cbk.h"
#include "Fee_Version.h"
#include "Fee_Initialization.h"
#include "Fee_Extra.h"
#include "SchM_Fee.h"
#if ((FEE_DEV_ERROR_DETECT == STD_ON) || (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef FEE_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (FEE_AR_RELEASE_MAJOR_VERSION != FEE_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef FEE_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (FEE_SW_MAJOR_VERSION != FEE_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef FEE_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (FEE_SW_MINOR_VERSION != FEE_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef FEE_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (FEE_SW_PATCH_VERSION != FEE_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (FEE_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != FEE_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/
#define FEE_START_SEC_VAR_INIT_UNSPECIFIED
#include "Fee_MemMap.h"

/* This variable used for init state check */
FEE_DATA_SECTION static MemIf_StatusType Fee_eInitState = MEMIF_UNINIT;

#define FEE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Fee_MemMap.h"

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/
#define FEE_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Fee_MemMap.h"

FEE_DATA_SECTION Fee_tGlobalVar Fee_Gv;

#if ( (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) || (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) )
FEE_DATA_SECTION Fee_tPotentialGlobalVar Fee_OpsGv;
#endif /* ( (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) || (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) ) */

#define FEE_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Fee_MemMap.h"

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define FEE_START_SEC_CODE
#include "Fee_MemMap.h"
/**
 * @brief        Service to initialize the FEE module.
 * @details      The function Fee_Init shall initialize the Flash EEPROM Emulation module.
 *
 * @param[in]    ConfigPtr      Pointer to Configuration data structure of the Fee module
 *
 * @pre          The FEE module's environment shall not call the function Fee_Init during a
 *               running operation of the FEE module.
 * @note         The function Autosar Service ID: 0x00 is marked as Synchronous, Non Re-entrant.
 *
 * @return       void
 * @note         [SWS_Fee_00085] [SWDESG_FEE_001-004/092-098]
 */
FEE_TEXT_SECTION void Fee_Init(const Fee_ConfigType *ConfigPtr)
{
#if (FEE_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR != ConfigPtr)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID,FEE_INIT_ID, FEE_E_INIT_FAILED);
    }
    else
#else
    (void)ConfigPtr;
#endif    /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        Fee_Init_Initialize_Gv();
        /* [SWS_Fee_00168] [SWDESG_FEE_002/003] */
        Fee_eInitState = MEMIF_IDLE;
    }
}

#if (FEE_SETMODE_API_SUPPORTED == STD_ON)
/**
 * @brief        Set the Fee module' s operation mode to the given Mode.
 * @details      Call the Fls_SetMode function of the underlying flash driver.
 *
 * @param[in]    Mode (Either MEMIF_MODE_FAST or MEMIF_MODE_SLOW)
 *
 * @note         The module must be initialized and not busy.
 *
 * @note         The function Autosar Service ID[hex]: 0x01, is marked Synchronous Non Reentrant
 * @return       void
 * @note         [SWS_Fee_00086/00170] [SWDESG_FEE_006-011]
 */
FEE_TEXT_SECTION void Fee_SetMode(MemIf_ModeType Mode)
{
#if (FEE_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Fee_00121] [SWDESG_FEE_005] */
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_SETMODE_ID, FEE_E_UNINIT);
    }
    else
#endif /* (FEE_DEV_ERROR_DETECT == STD_ON) */
    {
        if(MEMIF_IDLE == Fee_Gv.eModuleStatus)
        {
            if (Fls_GetStatus() == MEMIF_IDLE)
            {
                /*Set mode for Fls driver*/
                Fls_SetMode(Mode);
            }
            else
            {
                /*Reject job*/
            }
        }
        else if(MEMIF_BUSY == Fee_Gv.eModuleStatus)
        {
            /*Reject job*/
#if (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Fee_00105] [SWDESG_FEE_008] */
            (void)Det_ReportRuntimeError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_SETMODE_ID, FEE_E_BUSY);
#endif /* (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF) */
        }
        else
        {
            /* Reject job when status is MEMIF_UNINIT/MEMIF_BUSY_INTERNAL */
        }
    }
}
#endif /* (FEE_SETMODE_API_SUPPORTED == STD_ON) */

/**
 * @brief        Service to initiate a read job.
 * @details      The function Fee_Read shall take the block start address and
 *               offset and calculate the corresponding memory read address.
 *
 * @param[in]    BlockNumber      Number of logical block, also denoting
 *                                start address of that block in flash memory.
 * @param[in]    BlockOffset      Read address offset inside the block.
 * @param[out]   DataBufferPtr    Pointer to data buffer.
 * @param[in]    Length           Number of bytes to read.
 *
 * @note         The module must be initialized, not busy, BlockNumber must be valid,
 *               Length and DataBufferPtr not empty, BlockOffset and (BlockOffset + Length - 1)
 *               must be in range.
 *
 * @return       Std_ReturnType
 *               E_OK             The read job was accepted by the
 *                                underlying memory driver.
 *               E_NOT_OK         The read job has not been accepted
 *                                by the underlying memory driver.
 *
 * @note         The function Autosar Service ID: 0x02 is marked as Asynchronous, Non Re-entrant.
 * @note         [SWS_Fee_00073/00087/00162/00172] [SWDESG_FEE_012-023/064]
 */
FEE_TEXT_SECTION Std_ReturnType Fee_Read(uint16 BlockNumber, uint16 BlockOffset, uint8 *DataBufferPtr, uint16 Length)
{
    Std_ReturnType u8RetVal = (Std_ReturnType)E_NOT_OK;
    uint16 u16BlockIndex = Fee_Extra_GetBlockIndex(BlockNumber);

#if (FEE_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Fee_00122/00134/00135/00137] [SWDESG_FEE_005/012/015/016/019/022/020] */
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_READ_ID, FEE_E_UNINIT);
    }
    else if (MEMIF_BUSY_INTERNAL == Fee_Gv.eModuleStatus)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_READ_ID, FEE_E_BUSY_INTERNAL);
    }
    else if (0xFFFFU == u16BlockIndex)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_READ_ID, FEE_E_INVALID_BLOCK_NO);
    }
    else if (BlockOffset >= Fee_Cfg_BlockConfig[u16BlockIndex].u16BlockSize)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_READ_ID, FEE_E_INVALID_BLOCK_OFS);
    }
    else if ((0U == Length) || ((BlockOffset + Length) > Fee_Cfg_BlockConfig[u16BlockIndex].u16BlockSize))
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_READ_ID, FEE_E_INVALID_BLOCK_LEN);
    }
    else if (NULL_PTR == DataBufferPtr)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_READ_ID, FEE_E_PARAM_POINTER);
    }
    else
#endif    /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        /* [SWS_Fee_00133] [SWDESG_FEE_017/018] */
        if (MEMIF_IDLE == Fee_Gv.eModuleStatus)
        {
            SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_00();

            /* Configure the read job */
            Fee_Gv.u16BlockIndex  = u16BlockIndex;
            Fee_Gv.u32BlockOffset = BlockOffset;
            Fee_Gv.u32BlockLength = Length;
            Fee_Gv.pDataReadDestPtr = DataBufferPtr;
            Fee_Gv.u8Job = FEE_NXT_JOB_READ;
            Fee_Gv.eModuleStatus = MEMIF_BUSY;
            Fee_Gv.eJobResult = MEMIF_JOB_PENDING;
            u8RetVal = (Std_ReturnType)E_OK;

            SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_00();
        }
        else if(MEMIF_BUSY == Fee_Gv.eModuleStatus)
        {
#if (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Fee_00105] [SWDESG_FEE_017] */
            (void)Det_ReportRuntimeError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_READ_ID, FEE_E_BUSY);
#endif /* FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            /* Reject job when status is MEMIF_UNINIT/MEMIF_BUSY_INTERNAL */
        }
    }
    return u8RetVal;
}

/**
 * @brief        Service to initiate a write job.
 * @details      The function Fee_Write shall take the block start address and calculate the
 *               corresponding memory write address. The block address offset shall be fixed
 *               to zero. The function Fee_Write shall copy the given / computed parameters to
 *               module internal variables, initiate a write job, set the FEE module status to
 *               MEMIF_BUSY, set the job result to MEMIF_JOB_PENDING and return with E_OK.
 *               The FEE module shall execute the write job of the function Fee_Write asynchronously
 *               within the FEE module' s main function.
 *
 * @param[in]    BlockNumber      Number of logical block, also denoting start address of
 *                                that block in emulated EEPROM.
 * @param[out]   DataBufferPtr    Pointer to data buffer.
 *
 * @return       Std_ReturnType
 *               E_OK             The write job was accepted by the underlying memory driver.
 *               E_NOT_OK         The write job has not been accepted by the underlying memory
 *                                driver.
 *
 * @note         The module must be initialized, not busy, BlockNumber must be valid, DataBufferPtr
 *               not NULL. Before call the function "Fee_Write" for immediate data must be  called
 *               the function "Fee_EraseImmediateBlock".
 * @note         The function Autosar Service ID: 0x03 is marked as Asynchronous, Non Re-entrant.
 * @note         [SWS_Fee_00088/00163/00174] [SWDESG_FEE_024-034/102]
 */
FEE_TEXT_SECTION Std_ReturnType Fee_Write(uint16 BlockNumber, const uint8 *DataBufferPtr)
{
    Std_ReturnType u8RetVal = (Std_ReturnType)E_NOT_OK;
    uint16 u16BlockIndex = Fee_Extra_GetBlockIndex(BlockNumber);

#if (FEE_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Fee_00123/00137/00138/00139] [SWDESG_FEE_020/029/030] */
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_WRITE_ID, FEE_E_UNINIT);
    }
    else if (MEMIF_BUSY_INTERNAL == Fee_Gv.eModuleStatus)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_WRITE_ID, FEE_E_BUSY_INTERNAL);
    }
    else if (0xFFFFU == u16BlockIndex)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_WRITE_ID, FEE_E_INVALID_BLOCK_NO);
    }
    else if (NULL_PTR == DataBufferPtr)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID,FEE_WRITE_ID, FEE_E_PARAM_POINTER);
    }
    else
#endif  /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        /* [SWS_Fee_00144] [SWDESG_FEE_031] */
        if (MEMIF_IDLE == Fee_Gv.eModuleStatus)
        {
            SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_01();

            /* Configure the write job */
            Fee_Gv.u16BlockIndex = u16BlockIndex;
            Fee_Gv.pDataWriteDestPtr = DataBufferPtr;
            Fee_Gv.u8Job = FEE_NXT_JOB_WRITE;
            Fee_Gv.eModuleStatus = MEMIF_BUSY;
            Fee_Gv.eJobResult = MEMIF_JOB_PENDING;
            u8RetVal = (Std_ReturnType)E_OK;

            SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_01();
        }
        else if(MEMIF_BUSY == Fee_Gv.eModuleStatus)
        {
#if (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Fee_00105] [SWDESG_FEE_031] */
            (void)Det_ReportRuntimeError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_WRITE_ID, FEE_E_BUSY);
#endif /* FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            /* Reject job when status is MEMIF_UNINIT/MEMIF_BUSY_INTERNAL */
        }
    }
    return u8RetVal;
}

/**
 * @brief        Service to call the cancel function of the underlying flash driver.
 * @details      The function Fee_Cancel and the cancel function of the underlying flash driver
 *               are asynchronous. an ongoing read, erase or write job in the flash memory.
 *
 * @note         The module must be initialized.
 * @note         The function Autosar Service ID: 0x04 is marked as Asynchronous, Non Re-entrant.
 * @note         For Software robust,default value STD_OFF.
 */
FEE_TEXT_SECTION void Fee_Cancel(void)
{
#if (FEE_CANCEL_API == STD_OFF)
#if (FEE_DEV_ERROR_DETECT == STD_ON)
    (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_CANCEL_ID, FEE_E_CANCEL_API);
#endif /* FEE_DEV_ERROR_DETECT == STD_ON */
#else
#if (FEE_DEV_ERROR_DETECT == STD_ON)
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_CANCEL_ID, FEE_E_UNINIT);
    }
    else
#endif /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        if (MEMIF_JOB_PENDING == Fee_Gv.eJobResult)
        {
            /* Cancel ongoing Fls job if any */
            if (MEMIF_BUSY == Fee_Gv.eModuleStatus)
            {
                Fee_Gv.eJobResult = MEMIF_JOB_CANCELED;
                Fee_Gv.u8Job = FEE_NXT_JOB_DONE;
                Fls_Cancel();
                Fee_Gv.eModuleStatus = MEMIF_IDLE;
            }
            else
            {
#if (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                /* [SWS_Fee_00105] [SWDESG_FEE_037] */
                (void)Det_ReportRuntimeError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_CANCEL_ID, FEE_E_INVALID_CANCEL);
#endif /* (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF) */
                FEE_NVM_JOB_ERROR_NOTIFICATION
            }
        }
        else
        {
            /* Leave the job result unchanged */
            /* [SWS_Fee_00164] [SWDESG_FEE_038] */
        }
    }
#endif    /* FEE_CANCEL_API == STD_OFF */
}

/**
 * @brief        Return the Fee module state.
 * @details      Return the Fee module state synchronously.
 *
 * @note         The function Autosar Service ID: 0x05 is marked as Synchronous, Non Re-entrant.
 *
 * @return       Fee_ModuleStatus
 *               MEMIF_UNINIT             Module has not been initialized.
 *               MEMIF_IDLE               Module is currently idle.
 *               MEMIF_BUSY               Module is currently busy.
 *               MEMIF_BUSY_INTERNAL      Module is busy with internal management operations.
 * @note         [SWS_Fee_00090] [SWDESG_FEE_043]
 */
FEE_TEXT_SECTION MemIf_StatusType Fee_GetStatus(void)
{
    MemIf_StatusType eRetVal;

    /* [SWS_Fee_00034/00074] [SWDESG_FEE_041] */
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        eRetVal = MEMIF_UNINIT;
    }
    else
    {
        /* [SWS_Fee_00128/00129] [SWDESG_FEE_042] */
        eRetVal = Fee_Gv.eModuleStatus;
    }
    return eRetVal;
}

/**
 * @brief        Return the result of the last job.
 * @details      Return the result of the last job synchronously.
 *
 * @return       MemIf_JobResultType
 *               MEMIF_JOB_OK              The job has been finished successfully.
 *               MEMIF_JOB_FAILED          The job has not been finished successfully.
 *               MEMIF_JOB_PENDING         The job has not yet been finished.
 *               MEMIF_JOB_CANCELED        The job has been canceled.
 *               MEMIF_BLOCK_INCONSISTENT  The requested block is inconsistent, it may contain
 *                                         corrupted data.
 *               MEMIF_BLOCK_INVALID       The requested block has been invalidated, the requested
 *                                         read operation can not be performed.
 * @note         The function Autosar Service ID: 0x06 is marked as Synchronous, Non Re-entrant.
 * @note         [SWS_Fee_00091/00155] [SWDESG_FEE_046-048]
 *
 */
FEE_TEXT_SECTION MemIf_JobResultType Fee_GetJobResult(void)
{
    MemIf_JobResultType eRetVal = MEMIF_JOB_FAILED;

#if (FEE_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Fee_00125] [SWDESG_FEE_045] */
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_GETJOBRESULT_ID, FEE_E_UNINIT);
    }
    else
#endif    /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        /* [SWS_Fee_00035/00156/00158/00159/00160] [SWDESG_FEE_044/047] */
        eRetVal = Fee_Gv.eJobResult;
    }

    return eRetVal;
}

/**
 * @brief        Service to invalidate a logical block.
 *
 * @param[in]    BlockNumber      Number of logical block, also denoting
 *                                start address of that block in flash memory
 * @return       Std_ReturnType
 * @retval       E_OK             The job was accepted by the underlying
 *                                memory driver.
 * @retval       E_NOT_OK         The job has not been accepted by the
 *                                underlying memory driver.
 *
 * @note         The module must be initialized, not busy, and BlockNumber must be valid
 * @note         The function Autosar Service ID: 0x07 is marked as Asynchronous, Non Re-entrant.
 * @note         [SWS_Fee_00092/00165/00193] [SWDESG_FEE_051-056/064]
 */
FEE_TEXT_SECTION Std_ReturnType Fee_InvalidateBlock(uint16 BlockNumber)
{
    Std_ReturnType u8RetVal = (Std_ReturnType)E_NOT_OK;
    uint16 u16BlockIndex = Fee_Extra_GetBlockIndex(BlockNumber);

#if (FEE_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Fee_00126/00140] [SWDESG_FEE_053/054] */
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_INVALIDATEBLOCK_ID, FEE_E_UNINIT);
    }
    else if (0xFFFFU == u16BlockIndex)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_INVALIDATEBLOCK_ID, FEE_E_INVALID_BLOCK_NO);
    }
    else
#endif    /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        /* [SWS_Fee_00145] [SWDESG_FEE_055] */
        if (MEMIF_IDLE == Fee_Gv.eModuleStatus)
        {
            SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_02();

            /* Configure the invalidate block job */
            Fee_Gv.u16BlockIndex = u16BlockIndex;
            Fee_Gv.u8Job = FEE_NXT_JOB_INVAL_BLOCK;
            Fee_Gv.eModuleStatus = MEMIF_BUSY;
            Fee_Gv.eJobResult = MEMIF_JOB_PENDING;
            u8RetVal = (Std_ReturnType)E_OK;

            SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_02();
        }
        else if (MEMIF_BUSY == Fee_Gv.eModuleStatus)
        {
#if (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Fee_00105] [SWDESG_FEE_054] */
            (void)Det_ReportRuntimeError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_INVALIDATEBLOCK_ID, FEE_E_BUSY);
#endif /* (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF) */
        }
        else
        {
            /* Reject job when status is MEMIF_UNINIT/MEMIF_BUSY_INTERNAL */
        }
    }

    return u8RetVal;
}

#if (FEE_VERSION_INFO_API == STD_ON)
/**
 * @brief        Return the version information of the Fee module.
 * @details      The version information includes: Module Id, Vendor Id,
 *               Vendor specific version numbers.
 *
 * @param[out]   VersionInfoPtr   Pointer to where to store the version information of this module.
 *
 * @note         The function Autosar Service ID: 0x08 is marked as Synchronous, Non Re-entrant.
 * @note         [SWS_Fee_00093] [SWDESG_FEE_050]
 */
FEE_TEXT_SECTION void Fee_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr)
{
#if (FEE_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Fee_00147] [SWDESG_FEE_049] */
    if (NULL_PTR == VersionInfoPtr)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID,FEE_GETVERSIONINFO_ID, FEE_E_PARAM_POINTER);
    }
    else
#endif /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        VersionInfoPtr->moduleID = (uint16)FEE_MODULE_ID;
        VersionInfoPtr->vendorID = (uint16)FEE_VENDOR_ID;
        VersionInfoPtr->sw_major_version = (uint8)FEE_SW_MAJOR_VERSION;
        VersionInfoPtr->sw_minor_version = (uint8)FEE_SW_MINOR_VERSION;
        VersionInfoPtr->sw_patch_version = (uint8)FEE_SW_PATCH_VERSION;
    }
}
#endif /* FEE_VERSION_INFO_API == STD_ON */

/**
 * @brief        Service to erase a logical block.
 * @details      The function Fee_EraseImmediateBlock shall take the block number and calculate
 *               the corresponding memory block address. The function Fee_EraseImmediateBlock shall
 *               ensure that the FEE module can write immediate data. Whether this involves
 *               physically erasing a memory area and therefore calling the erase function of the
 *               underlying driver depends on the implementation. If development error detection
 *               for the FEE module is enabled, the function Fee_EraseImmediateBlock shall check
 *               whether the addressed logical block is configured as containing immediate data
 *               (configuration parameter FeeImmediateData == TRUE). If not, the function
 *               Fee_EraseImmediateBlock shall report the error code FEE_E_INVALID_BLOCK_NO.
 *
 * @param[in]    BlockNumber      Number of logical block, also denoting.
 *
 * @return       Std_ReturnType
 * @retval       E_OK             The job was accepted by the underlying memory driver.
 *               E_NOT_OK         The job has not been accepted by the underlying memory driver.
 *                                start address of that block in emulated EEPROM.
 *
 * @note         The module must be initialized, not busy, BlockNumber must be valid and
 *               type of Fee block must be immediate.
 * @note         The function Autosar Service ID: 0x09 is marked as Asynchronous, Non Re-entrant.
 * @note         [SWS_Fee_00067/00094/00166] [SWDESG_FEE_057-062/103/108]
 */
FEE_TEXT_SECTION Std_ReturnType Fee_EraseImmediateBlock(uint16 BlockNumber)
{
    Std_ReturnType u8RetVal = (Std_ReturnType)E_NOT_OK;
    uint16 u16BlockIndex = Fee_Extra_GetBlockIndex(BlockNumber);

#if (FEE_DEV_ERROR_DETECT == STD_ON)
    /* [SWS_Fee_00127/00141] [SWDESG_FEE_059/060] */
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_ERASEIMMEDIATEBLOCK_ID, FEE_E_UNINIT);
    }
    else if (0xFFFFU == u16BlockIndex)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_ERASEIMMEDIATEBLOCK_ID, FEE_E_INVALID_BLOCK_NO);
    }
    else if (FALSE == Fee_Cfg_BlockConfig[u16BlockIndex].bImmediateData)
    {
        /* [SWS_Fee_00068] [SWDESG_FEE_058] */
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_ERASEIMMEDIATEBLOCK_ID, FEE_E_INVALID_BLOCK_NO);
    }
    else
#endif /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        /* [SWS_Fee_00146] [SWDESG_FEE_061] */
        if (MEMIF_IDLE == Fee_Gv.eModuleStatus)
        {
            SchM_Enter_Fee_FEE_EXCLUSIVE_AREA_03();

            /* Configure the erase immediate block job */
            Fee_Gv.u16BlockIndex = u16BlockIndex;
            Fee_Gv.u8Job = FEE_NXT_JOB_ERASE_IMMEDIATE;
            Fee_Gv.eModuleStatus = MEMIF_BUSY;
            Fee_Gv.eJobResult = MEMIF_JOB_PENDING;
            u8RetVal = (Std_ReturnType)E_OK;

            SchM_Exit_Fee_FEE_EXCLUSIVE_AREA_03();
        }
        else if (MEMIF_BUSY == Fee_Gv.eModuleStatus)
        {
#if (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Fee_00105] [SWDESG_FEE_060] */
            (void)Det_ReportRuntimeError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_ERASEIMMEDIATEBLOCK_ID, FEE_E_BUSY);
#endif /* (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF) */
        }
        else
        {
            /* Reject job when status is MEMIF_UNINIT/MEMIF_BUSY_INTERNAL */
        }
    }

    return u8RetVal;
}

/**
 * @brief        Service to report the FEE module the successful end of an asynchronous operation.
 *
 * @details      The underlying flash driver shall call the function Fee_JobEndNotification
 *               to report the successful end of an asynchronous operation.
 *
 * @note         The module must be initialized.
 * @note         The function Autosar Service ID: 0x10 is marked as Synchronous, Non Re-entrant.
 * @note         [SWS_Fee_00052/00095] [SWDESG_FEE_067-069/100]
 */
FEE_TEXT_SECTION void Fee_JobEndNotification(void)
{
#if (FEE_DEV_ERROR_DETECT == STD_ON)
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_JOBENDNOTIFICATION_ID, FEE_E_UNINIT);

    }
    else
#endif /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        /* [SWS_Fee_00142] [SWDESG_FEE_068/100] */
        Fee_Int_JobEndNotification();
    }
}

/**
 * @brief        Service to report the FEE module the failure of an asynchronous operation.
 *
 * @details      The underlying flash driver shall call the function Fee_JobErrorNotification
 *               to report the failure of an asynchronous operation.
 *
 * @note         The module must be initialized.
 * @note         The function Autosar Service ID: 0x11 is marked as Synchronous, Non Re-entrant.
 * @note         [SWS_Fee_00054/00096] [SWDESG_FEE_070-073]
 */
FEE_TEXT_SECTION void Fee_JobErrorNotification(void)
{
#if (FEE_DEV_ERROR_DETECT == STD_ON)
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_JOBERRORNOTIFICATION_ID, FEE_E_UNINIT);
    }
    else
#endif  /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        /* [SWS_Fee_00143] [SWDESG_FEE_071/101] */
        Fee_Int_JobErrorNotification();
    }
}

/**
 * @brief        Service to handle the requested read / write / erase jobs
 *               respectively the internal management operations.
 * @details      The function shall asynchronously handle the requested read / write / erase jobs
 *               respectively the internal management operations. The function shall check,
 *               whether  the block requested for reading  has been invalidated by
 *               the upper layer module. If so, the function shall set the job result to
 *               MEMIF_BLOCK_INVALID and call the error notification routine of the upper layer
 *               if configured.The function shall check the consistency of the  logical block
 *               being read before notifying the caller. If an inconsistency of the read data
 *               is detected, the function shall set the job result to MEMIF_BLOCK_INCONSISTENT
 *               and call the error notification routine of the upper layer.
 * @note         The module must be initialized.
 * @note         The function Autosar Service ID: 0x12.
 * @note         [SWS_Fee_00026/00057/00097/00169] [SWDESG_FEE_014/027/063-066/099]
 */
FEE_TEXT_SECTION void Fee_MainFunction(void)
{
#if (FEE_DEV_ERROR_DETECT == STD_ON)
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_MAINFUNCTION_ID, FEE_E_UNINIT);
    }
    else
#endif  /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        Fee_Int_MainFunction();
    }
}

/**
 * @brief       Service to prepare the driver for a chunk switch in the selected chunk group.
 *
 * @details     While the computed amount of memory is allocated as a result of Fee_Write
 *              call for common data blocks, for immediate data blocks memory gets completely
 *              pre-allocated through Fee_EraseImmediateBlock function (i.e. Fee_Write does
 *              not change the remaining space).
 *              As a result, chunk switch triggered by the planned Fee_ForceChunkSwitchOnNextWrite function
 *              behave the same way, or in other words, an operation that really activates the
 *              physical chunk switch must be either Fee_Write on common FEE block or
 *              Fee_EraseImmediateBlock on immediate data block.
 *
 * @param       u8ChunkGrpIndex    Index of the selected chunk group
 * @return       Std_ReturnType
 *               E_NOT_OK  module is not initialized, busy or busy_internal.
 *               E_OK      No more space available in the selected cluster.
 *
 *               The module must be initialized, not busy and busy_internal.
 *
 * @note         As this API manipulates the internal driver state, it has to be claimed
 *               non-reentrant and colliding with other FEE ASR APIs
 * @note         [FUNC_Fee_016] [SWDESG_FEE_073-075]
 */
FEE_TEXT_SECTION Std_ReturnType Fee_ForceChunkSwitchOnNextWrite(uint8 u8ChunkGrpIndex)
{
    Std_ReturnType u8RetVal = (Std_ReturnType)E_NOT_OK;

#if (FEE_DEV_ERROR_DETECT == STD_ON)
    if (MEMIF_UNINIT == Fee_eInitState)
    {
        (void)Det_ReportError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_FORCECHUNKSWITCHONNEXTWRITE_ID, FEE_E_UNINIT);
    }
    else
#endif    /* FEE_DEV_ERROR_DETECT == STD_ON */
    {
        if(MEMIF_IDLE == Fee_Gv.eModuleStatus)
        {
            if(u8ChunkGrpIndex < FEE_NUM_OF_CHUNK_GROUPS)
            {
                Fee_Int_ForceNoAvailSpace(u8ChunkGrpIndex);
                u8RetVal = (Std_ReturnType)E_OK;
            }
            else
            {
                /* Invalid chunk group index*/
            }
        }
        else if (MEMIF_BUSY == Fee_Gv.eModuleStatus)
        {
#if (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Fee_00105] [SWDESG_FEE_074] */
            (void)Det_ReportRuntimeError((uint16)FEE_MODULE_ID, FEE_INSTANCE_ID, FEE_FORCECHUNKSWITCHONNEXTWRITE_ID, FEE_E_BUSY);
#endif /* (FEE_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF) */
        }
        else
        {
            /* Reject job when status is MEMIF_UNINIT/MEMIF_BUSY_INTERNAL */
        }
    }

    return u8RetVal;
}

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
