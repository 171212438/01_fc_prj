/**
 *   @file    CDD_Ospi.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ospi - driver API and development errors implemention.
 *   @details This file contains the Ospi Autosar driver API and development errors implemention.
 *
 *   @addtogroup OSPI
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : OSPI
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    -----------   ----------   ---------------
*   0.1.0       14/09/2023    QXW0122       N/A          OSPI Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/*
 * @file           CDD_Ospi.c
 */
#include "CDD_Ospi.h"
#include "LLD_Ospi.h"
#include "Ospi_version.h"

/* Switches the Development Error Detection and Notification ON or OFF. */
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef OSPI_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined.(OSPI) "
#elif (OSPI_AR_RELEASE_MAJOR_VERSION != OSPI_CFG_H_AR_REL_MAJ_VER)
#error "Autosar release major version is not matched.(OSPI) "
#endif

#ifndef OSPI_AR_RELEASE_MINOR_VERSION
#error "Autosar release minor version is not defined.(OSPI) "
#elif (OSPI_AR_RELEASE_MINOR_VERSION != OSPI_CFG_H_AR_REL_MIN_VER)
#error "Autosar release minor version is not matched.(OSPI) "
#endif

#ifndef OSPI_AR_REL_REV_VERSION
#error "Autosar release revision version is not defined.(OSPI) "
#elif (OSPI_AR_REL_REV_VERSION != OSPI_CFG_H_AR_REL_REV_VER)
#error "Autosar release revision version is not matched.(OSPI) "
#endif

#ifndef OSPI_SW_MAJOR_VERSION
#error "Software major version is not defined.(OSPI) "
#elif (OSPI_SW_MAJOR_VERSION != OSPI_CFG_H_SW_MAJOR_VER)
#error "Software major version is not matched.(OSPI) "
#endif

#ifndef OSPI_SW_MINOR_VERSION
#error "Software minor version is not defined.(OSPI) "
#elif (OSPI_SW_MINOR_VERSION != OSPI_CFG_H_SW_MINOR_VER)
#error "Software minor version is not matched.(OSPI) "
#endif

#ifndef OSPI_SW_PATCH_VERSION
#error "Software patch version is not defined.(OSPI) "
#elif (OSPI_SW_PATCH_VERSION != OSPI_CFG_H_SW_PATCH_VER)
#error "Software patch major version is not matched.(OSPI) "
#endif

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

#define OSPI_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

/**
 * @brief        Global Configuration Pointer.
 * @details      Data structure containing the set of configuration parameters required for
 *               initializing the OSPI Driver and OSPI HW Unit(s)
 *
 */
OSPI_DATA_SECTION const Ospi_ConfigType *OspiConfigPtr = NULL_PTR;

#define OSPI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define OSPI_START_SEC_CODE
#include "Ospi_MemMap.h"

/*================================================================================================*/
/**
 * @brief        This function initializes the OSPI hardware unit and the driver.
 * @details      This function initializes the OSPI hardware unit and the driver using the
 * pre-established configurations
 *               - Service ID:       0x00
 *               - Sync/Async:       Synchronous
 *               - Reentrancy:       Non-Reentrant
 * @param[in]     pConfigPtr      Specifies the pointer to the configuration set
 *
 * @return         void
 *
 * @api
 *
 * @pre  Ospi_Init shall be called at most once during runtime.
 * @post Ospi_Init shall initialize all the controllers and set the driver in READY state.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_Init(const Ospi_ConfigType *pConfigPtr)
{
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    uint32 ErrorDetected = 0U;
    if (NULL_PTR != OspiConfigPtr)
    {
        /* Call Det_ReportError */
        /* Already Init*/
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_INIT_ID,
                              (uint8)OSPI_E_ALREADY_INITIALIZED);
        ErrorDetected = 1U;
    }
#if (OSPI_CONFIG_VARIANT == OSPI_VARIANT_PRECOMPILE)
    if (NULL_PTR != pConfigPtr)
#else
    /* If Development Error Detection is enabled, report error if pConfigPtr is passed as a NULL
     * Pointer */
    if (NULL_PTR == pConfigPtr)
#endif /*OSPI_CONFIG_VARIANT != OSPI_VARIANT_PRECOMPILE*/
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_INIT_ID,
                              (uint8)OSPI_E_PARAM_POINTER);
        ErrorDetected = 1U;
    }
    if (ErrorDetected == 0U)
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
#if (OSPI_CONFIG_VARIANT != OSPI_VARIANT_PRECOMPILE)
        OspiConfigPtr = pConfigPtr;
#else
    OspiConfigPtr = &OspiDriverConfig_PC;
#endif /*OSPI_CONFIG_VARIANT != OSPI_VARIANT_PRECOMPILE*/
        /* Call the low level function to initialize driver */
        OSPI_LLD_Init();
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief        This function de-initializes the OSPI driver.
 * @details      This function de-initializes the OSPI driver using the pre-established configurations.
 *               - Service ID:       0x02
 *               - Sync/Async:       Synchronous
 *               - Reentrancy:       Non-Reentrant
 * @return        void
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_DeInit.
 *        Otherwise, the function Ospi_DeInit() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
/* PRQA S 1503 EOF #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * REASON: These functions are reserved for future usage.
 */
OSPI_TEXT_SECTION void Ospi_DeInit(void)
{
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    /* If Development Error Detection is enabled, report error if not initialized*/
    /* Call Det_ReportError */
    if (NULL_PTR == OspiConfigPtr)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_DEINIT_ID,
                              (uint8)OSPI_E_UNINIT);
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        OSPI_LLD_Deinit();
        /* reset configuration pointer */
        OspiConfigPtr = NULL_PTR;
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief   This function returns the status of the OSPI driver.
 * @details This function returns the status of the OSPI driver.
 *          - Service ID:       0x01
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @return Ospi_StatusType
 * @retval OSPI_UNINIT               The driver is un-initialized
 * @retval OSPI_IDLE                 The driver has no pending transfers
 * @retval OSPI_BUSY                 The driver is busy
 * @retval OSPI_TIMEOUT              Wait for transmission timeout
 * @retval OSPI_SUCCESS              Transfer successful
 * @retval OSPI_ERROR                Transmission error occurred
 * @retval OSPI_HYPERBUS_INIT        Ospi hyperbus mode is init
 * @retval OSPI_TXDMANONECMDDONE     Ospi tx dma startup complete but not yet sent
 *
 * @api
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Ospi_StatusType Ospi_GetStatus(void)
{
    Ospi_StatusType Ospi_Status;
    Ospi_Status = OSPI_LLD_GetStatus();
    return Ospi_Status;
}

/*================================================================================================*/
/**
 * @brief   This function sets the flash address.
 * @details This function sets the flash address for ospi peripherals device.
 *          - Service ID:       0x03
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]  FlashAddress  Address to be written
 *
 * @return Std_ReturnType
 * @retval E_OK         The flash address set is successfull
 * @retval E_NOT_OK     The flash address set is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_SetFlashConfig.
 *        Otherwise, the function Ospi_SetFlashConfig() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_SetFlashAddress(uint32 FlashAddress)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SET_FLASH_ADDRESS_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        OSPI_LLD_SetFlashAddress(FlashAddress);
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return (Status);
}

/*================================================================================================*/
/**
 * @brief   This function update the LUT.
 * @details This function update the LUT.
 *          - Service ID:       0x04
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]    index  Index to be written
 * @param[in]    cmd    Command sequence array
 * @param[in]    count  Number of sequences
 *
 * @return Std_ReturnType
 * @retval E_OK         The lookup table set is successfull
 * @retval E_NOT_OK     The lookup table set is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_UpdateLUT.
 *        Otherwise, the function Ospi_UpdateLUT() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_UpdateLUT(uint32 index, const uint32 *cmd, uint32 count)
{
    Std_ReturnType Status;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_UPDATE_LUT_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (cmd == NULL_PTR)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_UPDATE_LUT_ID,
                              (uint8)OSPI_E_PARAM_POINTER);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if ((index > 3U) || (count > 16U))
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_UPDATE_LUT_ID,
                              (uint8)OSPI_E_PARAM_OUTRANGE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Status = OSPI_LLD_UpdateLUT(index, (const uint32 *)cmd, count);
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return Status;
}

/*================================================================================================*/
/**
 * @brief   This function is used for synchronous command with read data.
 * @details This function is used for synchronous command with read data.
 *          - Service ID:       0x05
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Non-Reentrant
 *
 * @param[in]    u8SeqId    The cmd id location in lut.
 * @param[in]    pBuf       The read buffer start address.
 * @param[in]    u32Size    Data size to be read.
 *
 * @return Std_ReturnType
 * @retval E_OK         The synchronous command with read data is successfull
 * @retval E_NOT_OK     The synchronous command with read data is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_HyperBusSyncCommandRead.
 *        Otherwise, the function Ospi_HyperBusSyncCommandRead() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_HyperBusSyncCommandRead(uint8   u8SeqId,
                                                              uint32 *pBuf,
                                                              uint32  u32Size)
{
    Std_ReturnType Status;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SYNC_READ_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (pBuf == NULL_PTR)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SYNC_READ_ID,
                              (uint8)OSPI_E_PARAM_POINTER);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (u32Size <= 0U)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SYNC_READ_ID,
                              (uint8)OSPI_E_PARAM_OUTRANGE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Status = OSPI_LLD_HyperBusSyncCommandRead(u8SeqId, pBuf, u32Size);
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return Status;
}

/*================================================================================================*/
/**
 * @brief   This function is used for synchronous command with write data.
 * @details This function is used for synchronous command with write data.
 *          - Service ID:       0x06
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @param[in]    u8SeqId    The cmd id location in lut.
 * @param[in]    pBuf       The write buffer start address.
 * @param[in]    u32Size    Data size to be written.
 *
 * @return Std_ReturnType
 * @retval E_OK         The synchronous command with write data is successfull
 * @retval E_NOT_OK     The synchronous command with write data is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_HyperBusSyncCommandWrite.
 *       Otherwise, the function Ospi_HyperBusSyncCommandWrite() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_HyperBusSyncCommandWrite(uint8         u8SeqId,
                                                               const uint32 *pBuf,
                                                               uint32        u32Size)
{
    Std_ReturnType Status;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SYNC_WRITE_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (pBuf == NULL_PTR)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SYNC_WRITE_ID,
                              (uint8)OSPI_E_PARAM_POINTER);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else if (u32Size <= 0U)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SYNC_WRITE_ID,
                              (uint8)OSPI_E_PARAM_OUTRANGE);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Status = OSPI_LLD_HyperBusSyncCommandWrite(u8SeqId, (const uint32 *)pBuf, u32Size);
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return Status;
}

#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
/*================================================================================================*/
/**
 * @brief   This function initializes the OSPI driver in DMA mode.
 * @details This function initializes the OSPI driver using the pre-established configurations in
 * DMA mode.
 *          - Service ID:       0x09
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Non-Reentrant
 *
 * @param[in]    writeBuf    Pointer to write array
 * @param[in]    readBuf     Pointer to read array
 * @param[in]    testsize    Transmission size
 *
 * @return Std_ReturnType
 * @retval E_OK         The DMA mode init is successfull
 * @retval E_NOT_OK     The DMA mode init is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_DmaInit.
 *       Otherwise, the function Ospi_DmaInit() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_DmaInit(const uint32 *writeBuf, uint32 *readBuf, uint16 testsize)
{
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_CONFIG_DMA_ID,
                              (uint8)OSPI_E_UNINIT);
    }
    else if (writeBuf == NULL_PTR)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_CONFIG_DMA_ID,
                              (uint8)OSPI_E_PARAM_POINTER);
    }
    else if (readBuf == NULL_PTR)
    {
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_CONFIG_DMA_ID,
                              (uint8)OSPI_E_PARAM_POINTER);
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Ospi_LLD_DmaInit((const uint32 *)writeBuf, (uint32 *)readBuf, testsize);
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief   This function enables dma tx mode
 * @details This function enables dma tx mode
 *          - Service ID:       0x10
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @return Std_ReturnType
 * @retval E_OK         The DMA tx mode enable is successfull
 * @retval E_NOT_OK     The DMA tx mode enable is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_EnableTxDma.
 *       Otherwise, the function Ospi_EnableTxDma() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_EnableTxDma(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_ENABLE_TX_DMA_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Ospi_LLD_EnableTxDma();
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return (Status);
}

/*================================================================================================*/
/**
 * @brief   This function enables dma rx mode
 * @details This function enables dma rx mode
 *          - Service ID:       0x11
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @return Std_ReturnType
 * @retval E_OK         The DMA rx mode enable is successfull
 * @retval E_NOT_OK     The DMA rx mode enable is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_EnableRxDma.
 *       Otherwise, the function Ospi_EnableRxDma() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_EnableRxDma(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_ENABLE_RX_DMA_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Ospi_LLD_EnableRxDma();
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return (Status);
}

/*================================================================================================*/
/**
 * @brief   This function disables dma tx mode
 * @details This function disables dma tx mode
 *          - Service ID:       0x12
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @return Std_ReturnType
 * @retval E_OK         The DMA tx mode disable is successfull
 * @retval E_NOT_OK     The DMA tx mode disable is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_DisableTxDma.
 *       Otherwise, the function Ospi_DisableTxDma() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_DisableTxDma(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_DISABLE_TX_DMA_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Ospi_LLD_DisableTxDma();
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return (Status);
}

/*================================================================================================*/
/**
 * @brief   This function disables dma rx mode
 * @details This function disables dma rx mode
 *          - Service ID:       0x13
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @return Std_ReturnType
 * @retval E_OK         The DMA rx mode disable is successfull
 * @retval E_NOT_OK     The DMA rx mode disable is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_DisableRxDma.
 *       Otherwise, the function Ospi_DisableRxDma() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_DisableRxDma(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_DISABLE_RX_DMA_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Ospi_LLD_DisableRxDma();
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return (Status);
}

/*================================================================================================*/
/**
 * @brief   This function sets the watermark of the transmitted fifo.
 * @details This function sets the watermark of the transmitted fifo in DMA mode.
 *          - Service ID:       0x07
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @return   Std_ReturnType
 * @retval   E_OK        Sets the watermark of the transmitted fifo is successfull.
 * @retval   E_NOT_OK    Sets the watermark of the transmitted fifo is unsuccessfull.
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_SetTxFifoWatermark.
 *       Otherwise, the function Ospi_SetTxFifoWatermark() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_SetTxFifoWatermark(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SET_FIFO_TxWATERMARK_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Status = Ospi_LLD_SetTxFifoWatermark();
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return (Status);
}

/*================================================================================================*/
/**
 * @brief   This function sets the watermark of the reveiving fifo.
 * @details This function sets the watermark of the reveiving fifo in DMA mode.
 *          - Service ID:       0x08
 *          - Sync/Async:       Synchronous
 *          - Reentrancy:       Reentrant
 *
 * @return   Std_ReturnType
 * @retval   E_OK          Sets the watermark of the reveiving fifo is successfull.
 * @retval   E_NOT_OK      Sets the watermark of the reveiving fifo is unsuccessfull.
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_SetRxFifoWatermark.
 *       Otherwise, the function Ospi_SetRxFifoWatermark() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_SetRxFifoWatermark(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_SET_FIFO_RxWATERMARK_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Status = Ospi_LLD_SetRxFifoWatermark();
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return (Status);
}

/*================================================================================================*/
/**
 * @brief   This function is used for Hyperbus mode Asynchronous command with read data in dma mode.
 * @details This function is used for Hyperbus mode Asynchronous command with read data in dma mode.
 *          - Service ID:       0x14
 *          - Sync/Async:       Asynchronous
 *          - Reentrancy:       Non-Reentrant
 *
 * @return Std_ReturnType
 * @retval E_OK         The Asynchronous command with read data in dma mode is successfull
 * @retval E_NOT_OK     The Asynchronous command with read data in dma mode is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_HyperBusAsyncCommandDmaRead
 *       otherwise, the function Ospi_HyperBusAsyncCommandDmaRead() shall raise the development
 * error if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_HyperBusAsyncCommandDmaRead(uint8 u8SeqId, uint32 dataSize)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_ASYNC_DMA_READ_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Status = OSPI_LLD_HyperBusAsyncCommandDmaRead(u8SeqId, dataSize);
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return Status;
}

/*================================================================================================*/
/**
 * @brief   This function is used for Hyperbus mode Asynchronous command with write data in dma mode.
 * @details This function is used for Hyperbus mode Asynchronous command with write data in dma mode.
 *          - Service ID:       0x15
 *          - Sync/Async:       Asynchronous
 *          - Reentrancy:       Non-Reentrant
 *
 * @return Std_ReturnType
 * @retval E_OK         The Asynchronous command with write data in dma mode is successfull
 * @retval E_NOT_OK     The Asynchronous command with write data in dma mode is unsuccessfull
 *
 * @api
 *
 * @pre  The driver needs to be initialized before calling Ospi_HyperBusAsyncCommandDmaWrite
 *       otherwise, the function Ospi_HyperBusAsyncCommandDmaWrite() shall raise the development error
 *       if OSPI_DEV_ERROR_DETECT is STD_ON.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_HyperBusAsyncCommandDmaWrite(uint8 u8SeqId, uint32 dataSize)
{
    Std_ReturnType Status;

#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == OspiConfigPtr)
    {
        /* If Development Error Detection is enabled, report error if not initialized*/
        /* Call Det_ReportError */
        (void)Det_ReportError((uint16)OSPI_MODULE_ID,
                              (uint8)OSPI_INSTANCE_ID,
                              (uint8)OSPI_ASYNC_DMA_WRITE_ID,
                              (uint8)OSPI_E_UNINIT);
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
        Status = OSPI_LLD_HyperBusAsyncCommandDmaWrite(u8SeqId, dataSize);
#if (OSPI_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* OSPI_DEV_ERROR_DETECT == STD_ON */
    return Status;
}

#endif /*OSPI_DMA_HANDLING_ALLOWED == STD_ON*/
/*================================================================================================*/
#define OSPI_STOP_SEC_CODE
#include "Ospi_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
