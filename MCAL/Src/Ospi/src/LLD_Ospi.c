/**
 *   @file    LLD_Ospi.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Ospi - Implements the AUTOSAR OSPI driver functionality.
 *   @details This file implements the AUTOSAR OSPI driver.
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

/* PRQA S 0791 EOF #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * REASON:These macros are distinct.
 */

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_Ospi.h"
#include "LLD_Ospi.h"

#include "SchM_Ospi.h"

#if (OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF)
#include "Dem.h"
#endif

#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
#include "CDD_Dma.h"
#include "Dma_HWA.h"
#endif

#include "Ospi_Hw.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define OSPI_LUT_KEY_VAL (0xFC03FC03UL)
#define OSPI_BUSY_MASK   ((uint8)(0x30u))
/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define OSPI_START_SEC_VAR_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

OSPI_DATA_SECTION static OSPI_Type *const OspiBaseAddress = OSPI_BASE_PTRS;

#define OSPI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

#define OSPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

OSPI_DATA_SECTION static Ospi_CommandType OspiCommandIndex;
OSPI_DATA_SECTION static Ospi_StatusType  OspiHwUnitStatus;

#define OSPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Ospi_MemMap.h"

#define OSPI_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Ospi_MemMap.h"

OSPI_DATA_SECTION static uint32 *ospi_remaining_fifo_ptr;

#define OSPI_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Ospi_MemMap.h"
/*==============================================================================================
*                                       GLOBAL FUNCTIONS
==============================================================================================*/
#define OSPI_START_SEC_CODE
#include "Ospi_MemMap.h"

/*================================================================================================*/
/**
 * @brief   This function is called by transfer error interrupt.
 * @details Non-AutoSar support function used by interrupt service
 *          routine. The function is used as a pseudo ISR for all the OSPI peripherals.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_LLD_IsrTransferError(void)
{
    if ((OSPI_HWA_GetFlag(OspiBaseAddress) & OSPI_FLAG_BUSEF_MASK) != 0U)
    {
        /* clear flag transfer error flag */
        OSPI_HWA_ClearFlag(OspiBaseAddress, OSPI_FLAG_BUSEF_MASK);
        const Ospi_DeviceConfig *DeviceCfg;
        DeviceCfg = OspiConfigPtr->DeviceConfig;
        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_00();
        OspiHwUnitStatus = OSPI_ERROR;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_00();
        if (DeviceCfg->Ospi_TransferErrorNotification != NULL_PTR)
        {
            /* call notification pointer function */
            DeviceCfg->Ospi_TransferErrorNotification();
        }
    }
}

/*================================================================================================*/
/**
 * @brief   This function is called by transfer complete interrupt.
 * @details Non-AutoSar support function used by interrupt service
 *          routine. The function is used as a pseudo ISR for all the OSPI peripherals.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_LLD_IsrTransferComplete(void)
{
    if ((OSPI_HWA_GetFlag(OspiBaseAddress) & OSPI_FLAG_BUSDF_MASK) != 0U)
    {
        const Ospi_DeviceConfig *DeviceCfg;
        DeviceCfg = OspiConfigPtr->DeviceConfig;
        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_01();
        if (OspiCommandIndex == OSPI_COMMAND_WRITE)
        {
            OSPI_HWA_ClearFlag(OspiBaseAddress, OSPI_FLAG_BUSDF_MASK);
            if (OspiHwUnitStatus == OSPI_SUCCESS)
            {
                OSPI_HWA_ClearTxFifo(OspiBaseAddress);
                OspiHwUnitStatus = OSPI_IDLE;
                SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_01();
                OSPI_HWA_SetCompleteIrq(OspiBaseAddress, 0);
                OSPI_HWA_SetErrorIrq(OspiBaseAddress, 0);
                if (DeviceCfg->Ospi_TransferCompleteNotification != NULL_PTR)
                {
                    DeviceCfg->Ospi_TransferCompleteNotification();
                }
            }
            else
            {
                SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_01();
            }
        }
        else
        {
            SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_01();
        }
    }
}

/*================================================================================================*/
/**
 * @brief   This function is called by DMA transfer complete interrupt.
 * @details Non-AutoSar support function used by interrupt service
 *          routine. The function is used as a pseudo ISR for all the OSPI peripherals.
 *
 */
/*================================================================================================*/
#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
OSPI_TEXT_SECTION void OSPI_LLD_DMA_IRQnHandler(void)
{
    const Ospi_DeviceConfig *DeviceCfg;
    DeviceCfg = OspiConfigPtr->DeviceConfig;

    SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_02();
    if (OspiCommandIndex == OSPI_COMMAND_READ)
    {
        uint8  u8RxFifoRemain;
        uint16 u16RxCurrCount;
        uint32 u32dataSize;
        u8RxFifoRemain = OSPI_HWA_GetRxFifoFillLevel(OspiBaseAddress);
        u16RxCurrCount = OSPI_HWA_GetRxFifoCnt(OspiBaseAddress);
        u32dataSize    = (uint32)u16RxCurrCount + (uint32)u8RxFifoRemain;
        if (u8RxFifoRemain != 0U)
        {
            for (uint32 i = (uint32)u16RxCurrCount; i < u32dataSize; i++)
            {
                ospi_remaining_fifo_ptr[i] = OSPI_HWA_ReadSecondaryRcvFifoReg(OspiBaseAddress);
            }
        }
        OSPI_HWA_ClearRxFifo(OspiBaseAddress);
        OspiHwUnitStatus = OSPI_IDLE;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_02();
        OSPI_HWA_SetErrorIrq(OspiBaseAddress, 0);
        if (DeviceCfg->Ospi_TransferCompleteNotification != NULL_PTR)
        {
            DeviceCfg->Ospi_TransferCompleteNotification();
        }
    }
    else if (OspiCommandIndex == OSPI_COMMAND_WRITE)
    {
        OspiHwUnitStatus = OSPI_SUCCESS;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_02();
    }
    else
    {
        uint8 u8TxFifoRemain;
        u8TxFifoRemain = OSPI_HWA_GetTxFifoFillLevel(OspiBaseAddress);
        if (u8TxFifoRemain < 4U)
        {
            for (uint8 i = 0; i < (4U - u8TxFifoRemain); i++)
            {
                OSPI_HWA_WriteTxData(OspiBaseAddress, 0x00000000);
            }
        }
        OspiHwUnitStatus = OSPI_TXDMANONECMDDONE;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_02();
    }
}
#endif

/*================================================================================================*/
/**
 * @brief   Low-level initialize function.
 * @details Initialize all static parameters from configuration .
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void OSPI_LLD_Init(void)
{
    const Ospi_DeviceConfig *DeviceCfg;
    DeviceCfg = OspiConfigPtr->DeviceConfig;

    /* Set register to reset value */
    OSPI_HWA_SetCtrlValue(OspiBaseAddress, CTRL_RST_VALUE);
    OSPI_HWA_SetSocCfgValue(OspiBaseAddress, (uint32)0U);
    OSPI_HWA_ModuleDisable(OspiBaseAddress);

    if ((DeviceCfg->bDdrEn == TRUE) && (DeviceCfg->OSPIDqsSrcSelType != DQS_EXTERNAL_PADINPUT))
    {
        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_03();
        OspiHwUnitStatus = OSPI_ERROR;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_03();
    }
    else
    {
        OSPI_HWA_InternalRefclkDiv(OspiBaseAddress, DeviceCfg->OSPIClockDivideType);
        OSPI_HWA_InternalRefclkSource(OspiBaseAddress, DeviceCfg->OSPIClockMuxType);
        OSPI_HWA_EndianSelect(OspiBaseAddress, DeviceCfg->OSPIEndianType);

        OSPI_HWA_PadIbeEnable(OspiBaseAddress);
        OSPI_HWA_InternalRefclkEnable(OspiBaseAddress);

        OSPI_HWA_DqsInvertedDisable(OspiBaseAddress);
        OSPI_HWA_DqsSource(OspiBaseAddress, DeviceCfg->OSPIDqsSrcSelType);
        OSPI_HWA_DqsModeEnable(OspiBaseAddress);

        OSPI_HWA_SetCsHoldTime(OspiBaseAddress, DeviceCfg->CsHoldTime);
        OSPI_HWA_SetCsSetupTime(OspiBaseAddress, DeviceCfg->CsSetupTime);
        OSPI_HWA_CfgDelayLine(OspiBaseAddress, DeviceCfg->DelayLine);

        OSPI_HWA_SetFlashAddr(OspiBaseAddress, DeviceCfg->FlashAddress);
        OSPI_HWA_SetFlashTopAddr(OspiBaseAddress, DeviceCfg->FlashTopAddress);
        OSPI_HWA_SetFlashAddrMode(OspiBaseAddress, DeviceCfg->WordAddressable);
        OSPI_HWA_SetColAddrSpace(OspiBaseAddress, DeviceCfg->FlashColAddressSpace);

        if (DeviceCfg->OSPIDqsSrcSelType == DQS_EXTERNAL_PADINPUT)
        {
            if (DeviceCfg->bDdrEn == TRUE)
            {
                OSPI_HWA_DdrClkEnable(OspiBaseAddress);
                OSPI_HWA_DdrModeEnable(OspiBaseAddress);
                OSPI_HWA_SetDataHoldTime(OspiBaseAddress, 1);
            }
            OSPI_HWA_ObeTimRelaxEnable(OspiBaseAddress);

            OSPI_HWA_DqsOutEnable(OspiBaseAddress);
            OSPI_HWA_DqsLatEnable(OspiBaseAddress);

            OSPI_HWA_Dio3DefLow(OspiBaseAddress);
            OSPI_HWA_Dio2DefLow(OspiBaseAddress);
        }
        else if (DeviceCfg->OSPIDqsSrcSelType == DQS_PAD_LOOPBACK)
        {
            OSPI_HWA_SetSampleDlyClkCycle(OspiBaseAddress, 0);
            OSPI_HWA_SelectRefClkEdge(OspiBaseAddress, 0);
        }
        else
        {
            OSPI_HWA_SetSampleDlyClkCycle(OspiBaseAddress, 0);
            OSPI_HWA_SelectRefClkEdge(OspiBaseAddress, 0);
        }

        OSPI_HWA_ModuleEnable(OspiBaseAddress);
        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_04();
        OspiHwUnitStatus = OSPI_HYPERBUS_INIT;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_04();
        OSPI_HWA_ClearTxFifo(OspiBaseAddress);
    }
}

/*================================================================================================*/
/**
 * @brief   Low-level Deinitialize function.
 * @details DeInitialize and set to reset valmue all registers.
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void OSPI_LLD_Deinit(void)
{
    /* Set register to reset value */
    OSPI_HWA_SetCtrlValue(OspiBaseAddress, CTRL_RST_VALUE);
    OSPI_HWA_SetSocCfgValue(OspiBaseAddress, 0);
    OSPI_HWA_ModuleDisable(OspiBaseAddress);
    SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_05();
    OspiHwUnitStatus = OSPI_UNINIT;
    SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_05();
}

/*================================================================================================*/
/**
 * @brief   Low-level get status of OSPI.
 * @details Get current status of OSPI.
 *
 * @return  Ospi_StatusType
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Ospi_StatusType OSPI_LLD_GetStatus(void)
{
    /* Get OSPI status value*/
    uint8           Status;
    Ospi_StatusType OSPI_Status;
    SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_06();
    Status = (uint8)OspiHwUnitStatus;
    if ((Status & OSPI_BUSY_MASK) == OSPI_BUSY_MASK)
    {
        OSPI_Status = OSPI_BUSY;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_06();
    }
    else
    {
        OSPI_Status = OspiHwUnitStatus;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_06();
    }
    return OSPI_Status;
}

/*================================================================================================*/
/**
 * @brief   Low-level OSPI config flash address
 * @details Confiugration for the ospi peripherals device address.
 *
 * @return  Std_ReturnType
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void OSPI_LLD_SetFlashAddress(uint32 FlashAddress)
{
    OSPI_HWA_SetFlashAddr(OspiBaseAddress, FlashAddress);
}

/*================================================================================================*/
/**
 * @brief   Low-level OSPI Wait bus command transaction done.
 * @details
 *
 * @return  OSPI_StatusType
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION static Ospi_StatusType OSPI_LLD_WaitBusIdle(void)
{
    Ospi_StatusType eRet = OSPI_TIMEOUT;

    uint32 timeout = 0xfffff;
    do
    {
        if ((OSPI_HWA_GetStatus(OspiBaseAddress) & OSPI_STATUS_BUSY_MASK) == (uint32)0U)
        {
            eRet = OSPI_SUCCESS;
            break;
        }
        timeout--;
    }
    while (timeout != 0U);

#if (OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF) /* Call Dem_SetEventStatus. */
    if (((uint32)STD_ON == OspiConfigPtr->OSPI_DEM_E_BUSY_Cfg.state) && (eRet == OSPI_TIMEOUT))
    {
        (void)Dem_SetEventStatus((Dem_EventIdType)OspiConfigPtr->OSPI_DEM_E_BUSY_Cfg.id,
                                 DEM_EVENT_STATUS_FAILED);
    }
#endif
    return eRet;
}

/*================================================================================================*/
/**
 * @brief   Low-level OSPI config LUT
 *
 * @param[in]     index index to be written
 * @param[in]     cmd Command sequence array
 * @param[in]     count Number of sequences
 *
 * @return  Std_ReturnType
 */
/*================================================================================================*/
/* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be modified.
 * REASON: The value to which cmd points does not change */
OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_UpdateLUT(uint32 index, const uint32 *cmd, uint32 count)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    uint32           u32Lut = 0;
    volatile uint32 *lutBase;

    /* Wait for bus idle before change flash configuration. */
    if (OSPI_LLD_WaitBusIdle() != OSPI_SUCCESS)
    {
        Status = (Std_ReturnType)E_NOT_OK;
    }
    else
    {
        /* Unlock LUT for update. */
        OspiBaseAddress->LUT_KEY = OSPI_LUT_KEY_VAL;
        OspiBaseAddress->LUT_CFG = 0x02;

        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_07();
        lutBase = &OspiBaseAddress->LUT[index * 4u];
        for (u32Lut = 0; u32Lut < count; u32Lut++)
        {
            *lutBase = *cmd;
            lutBase++;
            cmd++;
        }
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_07();

        /* Lock LUT. */
        OspiBaseAddress->LUT_KEY = OSPI_LUT_KEY_VAL;
        OspiBaseAddress->LUT_CFG = 0x01;
        Status                   = (Std_ReturnType)E_OK;
    }
    return Status;
}
/* PRQA S 1338 -- */
/*================================================================================================*/
/**
 * @brief   Low-level OSPI wait until OSPI is idle.
 * @details
 *
 * @return  OSPI_StatusType  whether the operation is successfully
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION static Ospi_StatusType OSPI_LLD_WaitCmd(void)
{
    Ospi_StatusType eRet = OSPI_TIMEOUT;

    const Ospi_DeviceConfig *DeviceConfig;
    DeviceConfig = OspiConfigPtr->DeviceConfig;

    uint32 timeout;
    timeout = DeviceConfig->OspiTimeout;
    do
    {
        if ((OSPI_HWA_GetFlag(OspiBaseAddress) & OSPI_FLAG_BUSDF_MASK) != (uint32)0U)
        {
            OSPI_HWA_ClearFlag(OspiBaseAddress, OSPI_FLAG_BUSDF_MASK);
            eRet = OSPI_SUCCESS;
            break;
        }
        timeout--;
    }
    while (timeout != 0U);

    /* Call Dem_SetEventStatus. */
#if (OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF)
    if (((uint32)STD_ON == OspiConfigPtr->OSPI_DEM_E_TIMEOUT_Cfg.state) && (eRet == OSPI_TIMEOUT))
    {
        (void)Dem_SetEventStatus((Dem_EventIdType)OspiConfigPtr->OSPI_DEM_E_TIMEOUT_Cfg.id,
                                 DEM_EVENT_STATUS_FAILED);
    }
#endif
    return eRet;
}

/*================================================================================================*/
/**
 * @brief   OSPI write fifo.
 * @details Fifo size is 16words.
 *
 * @param[in] u8SeqIdTx     the cmd id location in lut.
 * @param[in] pBufTx        the write buffer start address.
 * @param[in] u8Size        fifo size to be written.
 *
 * @return OSPI_StatusType
 *
 */
/*================================================================================================*/
/* PRQA S 488 ++ #Misra-C:2012: Rule-18.4 Performing pointer arithmetic.
 * REASON: The start address of the last completed sample is indicated by the start address
 * of the result buffer and the result index, and thus the pointer arithmetic is necessary */
OSPI_TEXT_SECTION static Ospi_StatusType OSPI_LLD_WriteFifo(uint8         u8SeqIdTx,
                                                            const uint32 *pBufTx,
                                                            uint8         u8Size)
{
    Ospi_StatusType eRet = OSPI_SUCCESS;

    for (uint8 i = 0; i < u8Size; i++)
    {
        OSPI_HWA_WriteTxData(OspiBaseAddress, pBufTx[i]);
    }
    if (u8Size < 4U)
    {
        for (uint8 i = 0; i < (4U - u8Size); i++)
        {
            OSPI_HWA_WriteTxData(OspiBaseAddress, 0x00000000);
        }
    }

    OSPI_HWA_SetCmdIdSize(OspiBaseAddress, u8SeqIdTx, (uint16)((uint16)u8Size * (uint8)4U));

    eRet = OSPI_LLD_WaitCmd();

    if (eRet == OSPI_SUCCESS)
    {
        eRet = OSPI_LLD_WaitBusIdle();
    }

    if (eRet == OSPI_TIMEOUT)
    {
        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_08();
        OspiHwUnitStatus = OSPI_BUSY_TX;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_08();
    }

    OSPI_HWA_ClearTxFifo(OspiBaseAddress);
    return eRet;
}

/*================================================================================================*/
/**
 * @brief   OSPI write sequence data.
 * @details
 *
 * @param[in] u8SeqId the cmd id location in lut.
 * @param[in] pBuf the write buffer start address.
 * @param[in] u32Size data size to be written.
 *
 * @return Std_ReturnType
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_HyperBusSyncCommandWrite(uint8         u8SeqId,
                                                                   const uint32 *pBuf,
                                                                   uint32        u32Size)
{
    Std_ReturnType           status = (Std_ReturnType)E_NOT_OK;
    Ospi_StatusType          eRet   = OSPI_SUCCESS;
    const Ospi_DeviceConfig *DeviceConfig;
    DeviceConfig = OspiConfigPtr->DeviceConfig;

    uint32 u32Loop  = u32Size / (uint32)16;
    uint32 u32Addr  = DeviceConfig->FlashAddress;
    uint8  u8Remain = (uint8)(u32Size % (uint32)16);

    if (u32Loop != (uint32)0)
    {
        for (uint32 i = 0; i < u32Loop; i++)
        {
            if (eRet == OSPI_SUCCESS)
            {
                OSPI_HWA_SetFlashAddr(OspiBaseAddress, u32Addr + (i * (uint32)64));
                eRet = OSPI_LLD_WriteFifo(u8SeqId, pBuf + ((uint32)16 * i), (uint8)16);
            }
        }
    }
    if (u8Remain != (uint8)0)
    {
        if (eRet == OSPI_SUCCESS)
        {
            OSPI_HWA_SetFlashAddr(OspiBaseAddress, u32Addr + (u32Loop * (uint32)64));
            eRet = OSPI_LLD_WriteFifo(u8SeqId, pBuf + ((uint32)16 * u32Loop), u8Remain);
        }
    }

    if (eRet == OSPI_SUCCESS)
    {
        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_09();
        OspiHwUnitStatus = OSPI_IDLE;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_09();
        status = (Std_ReturnType)E_OK;
    }
    return status;
}

/*================================================================================================*/
/**
 * @brief   OSPI read fifo
 * @details Fifo size is 16words.
 *
 * @param[in] u8SeqIdRx  the cmd id location in lut.
 * @param[in] pBufRx     the read buffer start address.
 * @param[in] u8Size     data size to be read.
 *
 * @return OSPI_StatusType
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION static Ospi_StatusType OSPI_LLD_ReadFifo(uint8 u8SeqIdRx, uint32 *pBufRx, uint8 u8Size)
{
    Ospi_StatusType eRet = OSPI_SUCCESS;

    OSPI_HWA_SetCmdIdSize(OspiBaseAddress, u8SeqIdRx, (uint16)((uint16)u8Size * (uint8)4));

    eRet = OSPI_LLD_WaitCmd();

    if (eRet == OSPI_SUCCESS)
    {
        eRet = OSPI_LLD_WaitBusIdle();
        if (eRet == OSPI_SUCCESS)
        {
            for (uint8 i = 0; i < u8Size; i++)
            {
                pBufRx[i] = OSPI_HWA_ReadSecondaryRcvFifoReg(OspiBaseAddress);
            }
        }
    }

    if (eRet == OSPI_TIMEOUT)
    {
        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_10();
        OspiHwUnitStatus = OSPI_BUSY_RX;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_10();
    }

    OSPI_HWA_ClearRxFifo(OspiBaseAddress);
    return eRet;
}

/*================================================================================================*/
/**
 * @brief   OSPI read sequence data
 * @details
 *
 * @param[in] u8SeqId     the cmd id location in lut.
 * @param[in] pBuf        the read buffer start address.
 * @param[in] u32Size     data size to be read.
 *
 * @return Std_ReturnType
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_HyperBusSyncCommandRead(uint8   u8SeqId,
                                                                  uint32 *pBuf,
                                                                  uint32  u32Size)
{
    Std_ReturnType           status = (Std_ReturnType)E_NOT_OK;
    Ospi_StatusType          eRet   = OSPI_SUCCESS;
    const Ospi_DeviceConfig *DeviceConfig;
    DeviceConfig = OspiConfigPtr->DeviceConfig;

    uint32 u32Loop  = u32Size / (uint32)16;
    uint32 u32Addr  = DeviceConfig->FlashAddress;
    uint8  u8Remain = (uint8)(u32Size % (uint32)16);

    if (u32Loop != (uint32)0)
    {
        for (uint32 i = 0; i < u32Loop; i++)
        {
            if (eRet == OSPI_SUCCESS)
            {
                OSPI_HWA_SetFlashAddr(OspiBaseAddress, u32Addr + (i * (uint32)64));
                eRet = OSPI_LLD_ReadFifo(u8SeqId, pBuf + ((uint32)16 * i), (uint8)16);
            }
        }
    }
    if (u8Remain != (uint8)0)
    {
        if (eRet == OSPI_SUCCESS)
        {
            OSPI_HWA_SetFlashAddr(OspiBaseAddress, u32Addr + (u32Loop * (uint32)64));
            eRet = OSPI_LLD_ReadFifo(u8SeqId, pBuf + ((uint32)16 * u32Loop), u8Remain);
        }
    }

    if (eRet == OSPI_SUCCESS)
    {
        SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_11();
        OspiHwUnitStatus = OSPI_IDLE;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_11();
        status = (Std_ReturnType)E_OK;
    }

    return status;
}

/* PRQA S 488 -- */
#if (OSPI_DMA_HANDLING_ALLOWED == STD_ON)
/*================================================================================================*/
/**
 * @brief   Initialize DMA channels.
 * @details Initialize DMA Tx/Rx cahnnels for OSPI Hw unit.
 *
 * @param[in]    writeBuf    Pointer to write array
 * @param[in]    readBuf     Pointer to read array
 * @param[in]    testsize    Transmission size
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_LLD_DmaInit(const uint32 *writeBuf, uint32 *readBuf, uint16 testsize)
{
    const Ospi_DeviceConfig *DeviceConfig;
    DeviceConfig = OspiConfigPtr->DeviceConfig;
    SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_12();
    OspiCommandIndex = OSPI_COMMAND_DMAINIT;
    SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_12();

    ospi_remaining_fifo_ptr = readBuf;

    uint8 RxFifoLength;
    RxFifoLength = (DeviceConfig->OspiRxWatermark) + 1U;

    Dma_ChannelType Ospi_DmaChannelAttr;

    /* TX */
    /*The size of data in one transfer*/
    Ospi_DmaChannelAttr.eDmaDSIZE = DMA_TRAN_SIZE_4B;
    Ospi_DmaChannelAttr.eDmaSSIZE = DMA_TRAN_SIZE_4B;

    Ospi_DmaChannelAttr.u32DmaNBYTES = 4U;

    Ospi_DmaChannelAttr.s16SrcDataOffset  = 4;
    Ospi_DmaChannelAttr.s16DestDataOffset = 0;

    /* Disable destination and source circular buffer*/
    Ospi_DmaChannelAttr.bDmaSrcCircularBufferEn  = FALSE;
    Ospi_DmaChannelAttr.bDmaDestCircularBufferEn = FALSE;

    /* Disable destination and source inner loop offset */
    Ospi_DmaChannelAttr.bDmaSILOE = FALSE;
    Ospi_DmaChannelAttr.bDmaDILOE = FALSE;

    Ospi_DmaChannelAttr.u16DmaOuterLoopCounter = testsize;

    Ospi_DmaChannelAttr.s32DmaSLAST = 0;
    Ospi_DmaChannelAttr.s32DmaDLAST = 0;

    /* Tx Dma channel: Set reg TX_FIFO address as Dma Destination address */
    Ospi_DmaChannelAttr.bDmaAutoStopEnable = TRUE;
    Ospi_DmaChannelAttr.u32DmaSADDR        = (uint32)writeBuf;
    Ospi_DmaChannelAttr.u32DmaDADDR        = (uint32) & (OspiBaseAddress->TFDR);

    (void)Dma_ConfigChannel(OspiConfigPtr->DeviceConfig->eOspiTxDmaInstance,
                            OspiConfigPtr->DeviceConfig->u8OspiTxDmaChannel,
                            &Ospi_DmaChannelAttr);

    /* RX */
    /*The size of data in one transfer*/
    Ospi_DmaChannelAttr.eDmaDSIZE = DMA_TRAN_SIZE_4B;
    Ospi_DmaChannelAttr.eDmaSSIZE = DMA_TRAN_SIZE_4B;

    Ospi_DmaChannelAttr.u32DmaNBYTES = (uint32)RxFifoLength * 4U;

    Ospi_DmaChannelAttr.s16SrcDataOffset  = 0;
    Ospi_DmaChannelAttr.s16DestDataOffset = 4;

    /* Disable destination and source circular buffer*/
    Ospi_DmaChannelAttr.bDmaSrcCircularBufferEn  = FALSE;
    Ospi_DmaChannelAttr.bDmaDestCircularBufferEn = FALSE;

    /* Disable destination and source inner loop offset */
    Ospi_DmaChannelAttr.bDmaSILOE = FALSE;
    Ospi_DmaChannelAttr.bDmaDILOE = FALSE;

    Ospi_DmaChannelAttr.u16DmaOuterLoopCounter = testsize / RxFifoLength;

    Ospi_DmaChannelAttr.s32DmaSLAST = 0;
    Ospi_DmaChannelAttr.s32DmaDLAST = 0;

    /* Rx Dma channel: Set reg RX_FIFO address as Dma soure address*/
    Ospi_DmaChannelAttr.bDmaAutoStopEnable = TRUE;
    Ospi_DmaChannelAttr.u32DmaSADDR        = (uint32) & (OspiBaseAddress->RFD2R);
    Ospi_DmaChannelAttr.u32DmaDADDR        = (uint32)readBuf;

    (void)Dma_ConfigChannel(OspiConfigPtr->DeviceConfig->eOspiRxDmaInstance,
                            OspiConfigPtr->DeviceConfig->u8OspiRxDmaChannel,
                            &Ospi_DmaChannelAttr);
}

/*================================================================================================*/
/**
 * @brief   low-level enables dma tx mode
 * @details
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_LLD_EnableTxDma(void)
{
    OSPI_HWA_ClearTxFifo(OspiBaseAddress);
    Dma_EnableHwRequest(OspiConfigPtr->DeviceConfig->eOspiTxDmaInstance,
                        OspiConfigPtr->DeviceConfig->u8OspiTxDmaChannel);
    OSPI_HWA_SetTxDMA(OspiBaseAddress, TRUE);
}

/*================================================================================================*/
/**
 * @brief   low-level enables dma rx mode
 * @details
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_LLD_EnableRxDma(void)
{
    OSPI_HWA_ClearRxFifo(OspiBaseAddress);
    Dma_EnableHwRequest(OspiConfigPtr->DeviceConfig->eOspiRxDmaInstance,
                        OspiConfigPtr->DeviceConfig->u8OspiRxDmaChannel);
    OSPI_HWA_SetRxDMA(OspiBaseAddress, TRUE);
}

/*================================================================================================*/
/**
 * @brief   low-level disables dma tx mode
 * @details
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_LLD_DisableTxDma(void)
{
    OSPI_HWA_SetTxDMA(OspiBaseAddress, FALSE);
    OSPI_HWA_ClearTxFifo(OspiBaseAddress);
    Dma_DisableHwRequest(OspiConfigPtr->DeviceConfig->eOspiTxDmaInstance,
                         OspiConfigPtr->DeviceConfig->u8OspiTxDmaChannel);
}

/*================================================================================================*/
/**
 * @brief   low-level disables dma rx mode
 * @details
 *
 */
/*================================================================================================*/
OSPI_TEXT_SECTION void Ospi_LLD_DisableRxDma(void)
{
    OSPI_HWA_SetRxDMA(OspiBaseAddress, FALSE);
    OSPI_HWA_ClearRxFifo(OspiBaseAddress);
    Dma_DisableHwRequest(OspiConfigPtr->DeviceConfig->eOspiRxDmaInstance,
                         OspiConfigPtr->DeviceConfig->u8OspiRxDmaChannel);
}

/*========================================S========================================================*/
/**
 * @brief   Set transmit fifo watermark.
 * @details Indicates how many valid entries will trigger a transmit action.
 *
 * @return  Std_ReturnType
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_LLD_SetTxFifoWatermark(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    const Ospi_DeviceConfig *DeviceConfig;
    DeviceConfig = OspiConfigPtr->DeviceConfig;

    uint8 TxFifoWatermark;
    TxFifoWatermark = DeviceConfig->OspiTxWatermark;

    if (TxFifoWatermark < 16U)
    {
        OSPI_HWA_SetTxFifoWaterMark(OspiBaseAddress, (uint8)TxFifoWatermark);
    }
    else
    {
#if (OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF) /* Call Dem_SetEventStatus. */
        if ((uint32)STD_ON == OspiConfigPtr->OSPI_DEM_E_TO_FIFO_THRESHOLD_Cfg.state)
        {
            (void)Dem_SetEventStatus(
                (Dem_EventIdType)OspiConfigPtr->OSPI_DEM_E_TO_FIFO_THRESHOLD_Cfg.id,
                DEM_EVENT_STATUS_FAILED);
        }
#endif
        Status = (Std_ReturnType)E_NOT_OK;
    }
    return Status;
}

/*================================================================================================*/
/**
 * @brief   Set receive fifo watermark.
 * @details Indicates how many valid entries will trigger a readout action.
 *
 * @return  Std_ReturnType
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType Ospi_LLD_SetRxFifoWatermark(void)
{
    Std_ReturnType Status = (Std_ReturnType)E_OK;

    const Ospi_DeviceConfig *DeviceConfig;
    DeviceConfig = OspiConfigPtr->DeviceConfig;

    uint8 RxFifoWatermark;
    RxFifoWatermark = DeviceConfig->OspiRxWatermark;

    if (RxFifoWatermark < 16U)
    {
        OSPI_HWA_SetRxFifoWaterMark(OspiBaseAddress, (uint8)RxFifoWatermark);
    }
    else
    {
#if (OSPI_DIS_DEM_REPORT_ERR_STAT == STD_OFF) /* Call Dem_SetEventStatus. */
        if ((uint32)STD_ON == OspiConfigPtr->OSPI_DEM_E_TO_FIFO_THRESHOLD_Cfg.state)
        {
            (void)Dem_SetEventStatus(
                (Dem_EventIdType)OspiConfigPtr->OSPI_DEM_E_TO_FIFO_THRESHOLD_Cfg.id,
                DEM_EVENT_STATUS_FAILED);
        }
#endif
        Status = (Std_ReturnType)E_NOT_OK;
    }
    return Status;
}

/*================================================================================================*/
/**
 * @brief   The function that triggers dma read.
 * @details
 *
 * @param[in] u8SeqId the cmd id location in lut.
 * @param[in] u32dataSize data size to be written.
 * @param[in] readBuf Pointer to read array.
 *
 * @return Std_ReturnType
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_HyperBusAsyncCommandDmaRead(uint8  u8SeqId,
                                                                      uint32 u32dataSize)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_13();
    OspiCommandIndex = OSPI_COMMAND_READ;

    const Ospi_DeviceConfig *DeviceConfig;
    DeviceConfig   = OspiConfigPtr->DeviceConfig;
    uint32 u32Addr = DeviceConfig->FlashAddress;

    if ((OspiHwUnitStatus == OSPI_IDLE) || (OspiHwUnitStatus == OSPI_HYPERBUS_INIT))
    {
        OspiHwUnitStatus = OSPI_BUSY_RX;
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_13();
        OSPI_HWA_SetErrorIrq(OspiBaseAddress, 1);

        OSPI_HWA_SetFlashAddr(OspiBaseAddress, u32Addr);
        OSPI_HWA_SetCmdIdSize(OspiBaseAddress, u8SeqId, (uint16)(u32dataSize * 4u));

        Status = (Std_ReturnType)E_OK;
    }
    else
    {
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_13();
    }

    return Status;
}

/*================================================================================================*/
/**
 * @brief   The function that triggers dma write.
 * @details
 *
 * @param[in] u8SeqId the cmd id location in lut.
 * @param[in] u32dataSize data size to be written.
 *
 * @return Std_ReturnType
 */
/*================================================================================================*/
OSPI_TEXT_SECTION Std_ReturnType OSPI_LLD_HyperBusAsyncCommandDmaWrite(uint8  u8SeqId,
                                                                       uint32 u32dataSize)
{
    Std_ReturnType Status = (Std_ReturnType)E_NOT_OK;
    SchM_Enter_Ospi_OSPI_EXCLUSIVE_AREA_14();
    OspiCommandIndex = OSPI_COMMAND_WRITE;

    const Ospi_DeviceConfig *DeviceConfig;
    DeviceConfig   = OspiConfigPtr->DeviceConfig;
    uint32 u32Addr = DeviceConfig->FlashAddress;

    if ((OspiHwUnitStatus == OSPI_IDLE) || (OspiHwUnitStatus == OSPI_HYPERBUS_INIT) ||
        (OspiHwUnitStatus == OSPI_TXDMANONECMDDONE))
    {
        if (OspiHwUnitStatus == OSPI_TXDMANONECMDDONE)
        {
            OspiHwUnitStatus = OSPI_SUCCESS;
            SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_14();
        }
        else
        {
            OspiHwUnitStatus = OSPI_BUSY_TX;
            SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_14();
        }
        OSPI_HWA_SetErrorIrq(OspiBaseAddress, 1);
        OSPI_HWA_SetCompleteIrq(OspiBaseAddress, 1);

        OSPI_HWA_SetFlashAddr(OspiBaseAddress, u32Addr);
        OSPI_HWA_SetCmdIdSize(OspiBaseAddress, u8SeqId, (uint16)(u32dataSize * 4u));
        Status = (Std_ReturnType)E_OK;
    }
    else
    {
        SchM_Exit_Ospi_OSPI_EXCLUSIVE_AREA_14();
    }

    return Status;
}

#endif

#ifdef __cplusplus
}
#endif
