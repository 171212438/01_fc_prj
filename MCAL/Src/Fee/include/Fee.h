/**
*   @file    Fee.h
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

#ifndef FEE_H
#define FEE_H

/**
*   @file
*
*   @addtogroup FEE
*   @{
*/
/*   @implements Fee.h */
#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fee_InternalTypes.h"
#include "Fee_Cfg.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*  All service IDs (passed to DET) */
/**
*@brief     Fee instance ID
*/
#define FEE_INSTANCE_ID                ((uint8)0U)
/**
*   @brief service ID of function: Fee_Init.
*/
#define FEE_INIT_ID                    ((uint8)0x00)

/**
*   @brief service ID of function: Fee_SetMode.
*/
#define FEE_SETMODE_ID                 ((uint8)0x01)

/**
*   @brief service ID of function: Fee_Read.
*/
#define FEE_READ_ID                    ((uint8)0x02)

/**
*   @brief service ID of function: Fee_Write.
*/
#define FEE_WRITE_ID                   ((uint8)0x03)

/**
*   @brief service ID of function: Fee_Cancel.
*/
#define FEE_CANCEL_ID                  ((uint8)0x04)

/**
*   @brief service ID of function: Fee_GetStatus.
*/
#define FEE_GETSTATUS_ID               ((uint8)0x05)

/**
*   @brief service ID of function: Fee_GetJobResult.
*/
#define FEE_GETJOBRESULT_ID            ((uint8)0x06)

/**
*   @brief service ID of function: Fee_InvalidateBlock.
*/
#define FEE_INVALIDATEBLOCK_ID         ((uint8)0x07)

/**
*   @brief service ID of function: Fee_GetVersionInfo.
*/
#define FEE_GETVERSIONINFO_ID          ((uint8)0x08)

/**
*   @brief service ID of function: Fee_EraseImmediateBlock.
*/
#define FEE_ERASEIMMEDIATEBLOCK_ID     ((uint8)0x09)

/**
*   @brief service ID of function: Fee_JobEndNotification.
*/
#define FEE_JOBENDNOTIFICATION_ID      ((uint8)0x10)

/**
*   @brief service ID of function: Fee_JobErrorNotification.
*/
#define FEE_JOBERRORNOTIFICATION_ID    ((uint8)0x11)

/**
*   @brief service ID of function: Fee_MainFunction.
*/
#define FEE_MAINFUNCTION_ID            ((uint8)0x12)

/**
*   @brief service ID of function: Fee_ForceSwapOnNextWrite.
*/
#define FEE_FORCECHUNKSWITCHONNEXTWRITE_ID    ((uint8)0x13)


/* Development error codes (passed to DET) */
/* [SWS_Fee_00010] [SWDESG_FEE_006/015/019/020/021/022/028/029/030/037/045/049/053/054/059/060] */
/** @brief API called when module was not initialized */
#define FEE_E_UNINIT                   ((uint8)0x01)

/** @brief API called with invalid block number */
#define FEE_E_INVALID_BLOCK_NO         ((uint8)0x02)

/** @brief API called with invalid block offset */
#define FEE_E_INVALID_BLOCK_OFS        ((uint8)0x03)

/** @brief API called with invalid data pointer */
#define FEE_E_PARAM_POINTER            ((uint8)0x04)

/** @brief API called with invalid length information */
#define FEE_E_INVALID_BLOCK_LEN        ((uint8)0x05)

/** @brief API called while module is busy processing a user request */
#define FEE_E_BUSY                     ((uint8)0x06)

/** @brief API called while module is busy doing internal management operations */
#define FEE_E_BUSY_INTERNAL            ((uint8)0x07U)

/** @brief API called while module is not busy because there is no job to cancel */
#define FEE_E_INVALID_CANCEL           ((uint8)0x08)

/** @brief API Fee_init failed */
#define FEE_E_INIT_FAILED              ((uint8)0x09)

#if (FEE_CANCEL_API == STD_OFF)
/** @brief API called when underlying driver has cancel API disabled */
/* [SWS_Fee_91002] [SWDESG_FEE_008/017/031/039/055/061] */
#define FEE_E_CANCEL_API               ((uint8)0x0A)
#endif

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
#define FEE_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Fee_MemMap.h"

extern Fee_tGlobalVar Fee_Gv;

#if ( (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) || (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) )
extern Fee_tPotentialGlobalVar Fee_OpsGv;
#endif /* ( (FEE_FOREIGN_BLOCKS_SUPPORT == STD_ON) || (FEE_BLOCK_ALWAYS_AVAILABLE == STD_ON) ) */

#define FEE_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Fee_MemMap.h"
/*==================================================================================================
*                                     FUNCTION PROTOTYPES
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
 */

extern void Fee_Init(const Fee_ConfigType *ConfigPtr);

#if( FEE_SETMODE_API_SUPPORTED == STD_ON )
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
 */
extern void Fee_SetMode(MemIf_ModeType Mode);
#endif /* FEE_SETMODE_API_SUPPORTED == STD_ON */

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
 */
extern Std_ReturnType Fee_Read(uint16 BlockNumber, uint16 BlockOffset, uint8 *DataBufferPtr, uint16 Length);

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
 */
extern Std_ReturnType Fee_Write(uint16 BlockNumber, const uint8 *DataBufferPtr);

/**
 * @brief        Service to call the cancel function of the underlying flash driver.
 * @details      The function Fee_Cancel and the cancel function of the underlying flash driver
 *               are asynchronous. an ongoing read, erase or write job in the flash memory.
 *
 * @note         The module must be initialized.
 * @note         The function Autosar Service ID: 0x04 is marked as Asynchronous, Non Re-entrant.
 * @note         For Software robust,default value STD_OFF.
 */
extern void Fee_Cancel(void);

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
 */
extern MemIf_StatusType Fee_GetStatus(void);

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
 *
 */
extern MemIf_JobResultType Fee_GetJobResult(void);

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
 * @note          The module must be initialized, not busy, and BlockNumber must be valid
 *
 * @note         The function Autosar Service ID: 0x07 is marked as Asynchronous, Non Re-entrant.
 */
extern Std_ReturnType Fee_InvalidateBlock(uint16 BlockNumber);

#if( FEE_VERSION_INFO_API == STD_ON )
/**
 * @brief        Return the version information of the Fee module.
 * @details      The version information includes: Module Id, Vendor Id,
 *               Vendor specific version numbers.
 *
 * @param[out]   VersionInfoPtr   Pointer to where to store the version information of this module.
 * @note         The function Autosar Service ID: 0x08 is marked as Synchronous, Non Re-entrant.
 */
extern void Fee_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr);
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
 *
 * @note         The function Autosar Service ID: 0x09 is marked as Asynchronous, Non Re-entrant.
 */
extern Std_ReturnType Fee_EraseImmediateBlock(uint16 BlockNumber);

/**
 * @brief        Service to report the FEE module the successful end of an asynchronous operation.
 *
 * @details      The underlying flash driver shall call the function Fee_JobEndNotification
 *               to report the successful end of an asynchronous operation.
 *
 * @note         The module must be initialized.
 * @note         The function Autosar Service ID: 0x10 is marked as Synchronous, Non Re-entrant.
 */
extern void Fee_JobEndNotification(void);

/**
 * @brief        Service to report the FEE module the failure of an asynchronous operation.
 *
 * @details      The underlying flash driver shall call the function Fee_JobErrorNotification
 *               to report the failure of an asynchronous operation.
 *
 * @note         The module must be initialized.
 * @note         The function Autosar Service ID: 0x11 is marked as Synchronous, Non Re-entrant.
 */
extern void Fee_JobErrorNotification(void);

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
 */
extern void Fee_MainFunction(void);

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
*/
extern Std_ReturnType Fee_ForceChunkSwitchOnNextWrite(uint8 u8ChunkGrpIndex);

#define FEE_STOP_SEC_CODE
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FEE_H */
