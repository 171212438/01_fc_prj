/**
*   @file    LLD_Uart.c
*   @version 1.5.1

*   @brief   AUTOSAR UART - Low level file for UART driver.
*   @details This file contains the low level functions for UART module.
*
*   @addtogroup UART
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : UART
*   PLATFORM             : Flagchip FC7xxx
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
*   0.7.0       29/05/2024    QXW0122       N/A          UART Initial Version
*   0.8.0       12/07/2024    QXW0122       N/A          Optimize Code
*   1.2.0       07/02/2025    QXW0161       N/A          Modify Uart asynchronous reception to
*                                                        variable length reception
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "LLD_Uart.h"
#include "Uart_RegOps.h"
#include "CDD_Uart_Cfg.h"
#include "SchM_Uart.h"

#if (UART_HAS_DMA_ENABLED == STD_ON)
#include "CDD_Dma.h"
#endif

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/
#define UART_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Uart_MemMap.h"

/** @brief Array of UART driver runtime state structures */
UART_DATA_SECTION Uart_StateStructureType Uart_StateStructure[UART_NUMBER_OF_INSTANCES];

/** @brief User config structure. */
/* [SWS_CDD_UART_00103] */
UART_DATA_SECTION const Uart_UserConfigType *Uart_UserConfig[UART_NUMBER_OF_INSTANCES];

/* Pointer to uart runtime state structure */
UART_DATA_SECTION static Uart_StateStructureType *s_apUartStateArray[UART_NUMBER_OF_INSTANCES];

#define UART_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Uart_MemMap.h"

#define UART_START_SEC_CONST_UNSPECIFIED
#include "Uart_MemMap.h"

/* Table of base addresses for uart instances. */
UART_DATA_SECTION static FCUART_Type *const s_apUartBase[UART_NUMBER_OF_INSTANCES] = FCUART_BASE_PTRS;

#define UART_STOP_SEC_CONST_UNSPECIFIED
#include "Uart_MemMap.h"

#define UART_START_SEC_CONST_BOOLEAN
#include "Uart_MemMap.h"

#if (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON)
UART_DATA_SECTION static const boolean Uart_InstHasTimeoutInterruptEnabled[UART_NUMBER_OF_INSTANCES] =
    UART_ENABLE_TIMEOUT_INTERRUPT_PER_INSTANCE;
#endif

#if (UART_ENABLE_INTERNAL_LOOPBACK == STD_ON)
UART_DATA_SECTION static const boolean Uart_InstHasLoopbackEnabled[UART_NUMBER_OF_INSTANCES] =
    UART_ENABLE_INTERNAL_LOOPBACK_PER_INSTANCE;
#endif

#if (UART_ENABLE_FLOWCONTROL == STD_ON)
UART_DATA_SECTION static const boolean Uart_InstHasFlowControlEnabled[UART_NUMBER_OF_INSTANCES] =
    UART_ENABLE_FLOWCONTROL_PER_INSTANCE;
#endif

#define UART_STOP_SEC_CONST_BOOLEAN
#include "Uart_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
#define UART_START_SEC_CODE
#include "Uart_MemMap.h"

UART_TEXT_SECTION static void Uart_LLD_CompleteSendDataUsingInt(const uint8 HwUnit);
UART_TEXT_SECTION static void Uart_LLD_CompleteReceiveDataUsingInt(const uint8 HwUnit);

#if (UART_HAS_DMA_ENABLED == STD_ON)
UART_TEXT_SECTION static Uart_StatusType Uart_LLD_StartSendDataUsingDma(const uint8  HwUnit,
                                                                        const uint8 *TxDataBuff,
                                                                        const uint32 TxDataSize);
UART_TEXT_SECTION static Uart_StatusType Uart_LLD_StartReceiveDataUsingDma(const uint8 HwUnit);
#endif

UART_TEXT_SECTION static void Uart_LLD_PutData(const uint8 HwUnit);
UART_TEXT_SECTION static void Uart_LLD_GetData(const uint8 HwUnit);
UART_TEXT_SECTION static void Uart_LLD_GetData_Async(const uint8 HwUnit);
UART_TEXT_SECTION static void Uart_LLD_RxIrqHandler(const uint8 HwUnit);
UART_TEXT_SECTION static void Uart_LLD_TxEmptyIrqHandler(const uint8 HwUnit);
/* [SWS_CDD_UART_00105] */
UART_TEXT_SECTION static void Uart_LLD_TxCompleteIrqHandler(const uint8 HwUnit);
UART_TEXT_SECTION static void Uart_LLD_ErrIrqHandler(const uint8 HwUnit);
/* [SWS_CDD_UART_00106] */
#if (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON)
UART_TEXT_SECTION static void Uart_LLD_IdleIrqHandler(const uint8 HwUnit);
#endif /* UART_ENABLE_TIMEOUT_INTERRUPT */
/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief   Initialize an Uart module.
 * @details This function initializes a UART instance for operation.
 *
 * @param   [in]    HwUnit     Uart HW to be initialized.
 *          [in]    UserConfig   Configuration pointer containing hardware specific settings.
 *
 * @return            void.
 *
 */
UART_TEXT_SECTION void Uart_LLD_Init(const uint8 HwUnit, const Uart_UserConfigType *UserConfig)
{
    FCUART_Type             *pUartHwPtr = s_apUartBase[HwUnit];
    Uart_StateStructureType *UartStatePtr;
    uint32                   Index;
    uint8                   *InitStructPtr;

    s_apUartStateArray[HwUnit] = UserConfig->StateStruct;
    UartStatePtr               = s_apUartStateArray[HwUnit];
    Uart_UserConfig[HwUnit]    = UserConfig;
    InitStructPtr              = (uint8 *)UartStatePtr;

    /* Clear the state struct for this instance. */
    for (Index = 0; Index < sizeof(Uart_StateStructureType); Index++)
    {
        InitStructPtr[Index] = 0;
    }

    /* Reset the FCUART registers */
    FCUART_UART_HWA_SoftwareReset(pUartHwPtr);

#if (UART_ENABLE_INTERNAL_LOOPBACK == STD_ON)
    if (Uart_InstHasLoopbackEnabled[HwUnit] != 0U)
    {
        FCUART_UART_HWA_EnableLoopMode(pUartHwPtr);
    }
#endif

#if (UART_ENABLE_FLOWCONTROL == STD_ON)
    if (Uart_InstHasFlowControlEnabled[HwUnit] != 0U)
    {
        FCUART_UART_HWA_EnableHwFlowControl(pUartHwPtr);
    }
#endif

#if (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON)
    if (Uart_InstHasTimeoutInterruptEnabled[HwUnit] != 0U)
    {
        /* [SWS_CDD_UART_00107] */
        /* [SWS_CDD_UART_00108] */
        FCUART_UART_HWA_SetIdleConfig(pUartHwPtr, UserConfig->IdleCharNum);
        FCUART_UART_HWA_EnableIdleInterrupt(pUartHwPtr);
    }
#endif

    /* When OVR_SAMP is set between 3 to 6, this field must be set */
    if (UserConfig->BaudOverSamplingRatio < 8U)
    {
        FCUART_UART_HWA_EnableBothEdgeSampling(pUartHwPtr);
    }

    /* Writes the Osr value to the register. The true oversampling ratio will be the written value adds 1. */
    FCUART_UART_HWA_SetOversamplingRatio(pUartHwPtr, (uint32)UserConfig->BaudOverSamplingRatio - 1U);

    /* Write the Sbr value to the register. */
    FCUART_UART_HWA_SetBaudRateDivisor(pUartHwPtr, UserConfig->BaudRateDivisor);

    if (UserConfig->ParityMode != UART_DISABLED_PARITY)
    {
        FCUART_UART_HWA_SetBitCountPerChar(pUartHwPtr, UserConfig->BitCountPerChar, TRUE);
    }
    else
    {
        FCUART_UART_HWA_SetBitCountPerChar(pUartHwPtr, UserConfig->BitCountPerChar, FALSE);
    }

    FCUART_UART_HWA_SetParity(pUartHwPtr, UserConfig->ParityMode);
    /* [SWS_CDD_UART_00104] */
    FCUART_UART_HWA_SetStopBit(pUartHwPtr, UserConfig->StopBitsCount);
    if (UserConfig->RxFiFoEnable == UART_RXFiFo_Enable)
    {
        FCUART_UART_HWA_EnableRxFiFo(pUartHwPtr);
    }

    /* Set the current transfer status to success when initializing */
    UartStatePtr->TransmitStatus = UART_STATUS_SUCCESS;
    UartStatePtr->ReceiveStatus  = UART_STATUS_SUCCESS;
    /* Memory baud rate */
    UartStatePtr->BaudRate = UserConfig->BaudRate;
}

/**
 * @brief   Deinitialize a Uart instance.
 * @details This function deinitializes the UART instance.
 *
 * @param   [in]    HwUnit     Uart HW to be deinitialized.
 *
 * @return  UART_STATUS_ERROR        Operation error.
 * @return  UART_STATUS_SUCCESS      Operation success.
 *
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_Deinit(const uint8 HwUnit)
{
    uint32       u32TryCount = 0U;
    FCUART_Type *pUartHwPtr  = s_apUartBase[HwUnit];
    const Uart_StateStructureType *UartState = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    Uart_StatusType RetVal;

    while (((UartState->IsTxBusy != 0U) || (UartState->IsRxBusy != 0U)) &&
           (u32TryCount < UART_TIMEOUT_VALUE))
    {
        u32TryCount++;
    }

    if ((UartState->IsTxBusy != 0U) || (UartState->IsRxBusy != 0U))
    {
        RetVal = UART_STATUS_ERROR;
    }
    else
    {
        /* Disable Tx interrupt */
        FCUART_UART_HWA_DisableTransmitInterrupt(pUartHwPtr);
        FCUART_UART_HWA_DisableTransmitCompleteInterrupt(pUartHwPtr);

        /* Disable Rx interrupt*/
        FCUART_UART_HWA_DisableReceiveInterrupt(pUartHwPtr);

        /* Disable error interrupts */
        FCUART_UART_HWA_DisableErrorInterrupt(pUartHwPtr);

#if (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON)
        if (Uart_InstHasTimeoutInterruptEnabled[HwUnit] != 0U)
        {
            FCUART_UART_HWA_DisableIdleInterrupt(pUartHwPtr);
        }
#endif
        /* Clear the status of the current storage */
        s_apUartStateArray[HwUnit] = NULL_PTR;
        RetVal                     = UART_STATUS_SUCCESS;
    }
    return RetVal;
}

/**
 * @brief   Sending data using polling method.
 * @details
 *
 * @param[in]    HwUnit             Uart HW.
 * @param[in]    TxDataBuff         Buffer to send.
 * @param[in]    TxDataSize         The number of bytes to send.
 * @param[in]    Timeout            The number of timeout cycles per frame of data transmission
 *
 */
/* [SWS_CDD_UART_00044] */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_SyncSend(const uint8  HwUnit,
                                                    const uint8 *TxDataBuff,
                                                    const uint32 TxDataSize,
                                                    const uint32 Timeout)
{
    FCUART_Type             *pUartHwPtr = s_apUartBase[HwUnit];
    Uart_StateStructureType *UartState;
    uint32                   u32TryCount = 0U;
    uint32                   u32Result   = 0U;
    Uart_StatusType          RetVal      = UART_STATUS_SUCCESS;

    UartState = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    SchM_Enter_Uart_UART_EXCLUSIVE_AREA_00();

    /* Check whether the current send is busy */
    if (UartState->IsTxBusy != 0U)
    {
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_00();
        RetVal = UART_STATUS_BUSY;
    }
    else
    {
        UartState->IsTxBusy = TRUE;
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_00();
        UartState->TxBuff = TxDataBuff;
        UartState->TxSize = TxDataSize;

        UartState->TransmitStatus = UART_STATUS_BUSY;

        /* Disable Tx interrupt */
        FCUART_UART_HWA_DisableTransmitInterrupt(pUartHwPtr);
        FCUART_UART_HWA_DisableTransmitCompleteInterrupt(pUartHwPtr);

        /* Enable tx transmission */
        FCUART_UART_HWA_SetTxTransfer(pUartHwPtr, TRUE);

        /* When tx still has data left, transmit */
        while (UartState->TxSize > 0U)
        {
            Uart_LLD_PutData(HwUnit);

            u32Result   = 0U;
            u32TryCount = 0U;

            while ((u32Result == 0U) && (u32TryCount < Timeout))
            {
                /* check the current frame transmit flag */
                u32Result = FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_TDREF_MASK);
                u32TryCount++;
            }
            /* If timeout occurs before the current frame has finished sending, end all transmissions */
            if (u32Result == 0U)
            {
                break;
            }
        }

        /* Disable the transmitter */
        FCUART_UART_HWA_SetTxTransfer(pUartHwPtr, FALSE);

        /* Check if a timeout has occurred */
        if (u32Result == 0U)
        {
            UartState->TransmitStatus = UART_STATUS_TIMEOUT;
        }
        else
        {
            UartState->TransmitStatus = UART_STATUS_SUCCESS;
        }
        UartState->IsTxBusy = FALSE;
        RetVal              = UartState->TransmitStatus;
    }
    return RetVal;
}

/**
 * @brief   Receiving data using polling method.
 * @details
 *
 * @param[in]    HwUnit           Uart HW.
 * @param[in]    RxDataBuff       Buffer to receive.
 * @param[in]    RxDataSize       The number of bytes to receive.
 * @param[in]    Timeout          The number of timeout cycles per frame of data reception.
 */
/* [SWS_CDD_UART_00055] */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_SyncReceive(const uint8  HwUnit,
                                                       uint8       *RxDataBuff,
                                                       const uint32 RxDataSize,
                                                       const uint32 Timeout)
{
    FCUART_Type             *pUartHwPtr = s_apUartBase[HwUnit];
    Uart_StateStructureType *UartState;
    uint32                   u32TryCount  = 0U;
    uint32                   u32Result    = 0U;
    boolean                  bshouldBreak = FALSE;
    Uart_StatusType          RetVal       = UART_STATUS_SUCCESS;

    UartState = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    SchM_Enter_Uart_UART_EXCLUSIVE_AREA_02();

    /* Check whether the current send is busy */
    if (UartState->IsRxBusy != 0U)
    {
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_02();
        RetVal = UART_STATUS_BUSY;
    }
    else
    {
        UartState->IsRxBusy = TRUE;
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_02();
        UartState->RxBuff        = RxDataBuff;
        UartState->RxSize        = RxDataSize;
        UartState->ReceiveStatus = UART_STATUS_BUSY;

        /* Disable Rx interrupt */
        FCUART_UART_HWA_DisableReceiveInterrupt(pUartHwPtr);

        /* Enable the receiver */
        FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, TRUE);

        while ((UartState->RxSize > 0U) && (bshouldBreak == FALSE))
        {
            u32Result   = 0U;
            u32TryCount = 0U;
            while ((u32Result == 0U) && (u32TryCount < Timeout))
            {
                /* Wait for the receiving completion flag */
                u32Result = FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_RDRFF_MASK);
                u32TryCount++;
            }

            /* Check for errors on received data */
            if (FCUART_UART_HWA_GetStatus(pUartHwPtr,
                                          (FCUART_STAT_FEF_MASK | FCUART_STAT_PEF_MASK |
                                           FCUART_STAT_NF_MASK)) != 0U)
            {
                UartState->ReceiveStatus = UART_STATUS_ERROR;

                /* Clear the error flags */
                FCUART_UART_HWA_WriteClearSTAT(pUartHwPtr, FCUART_STAT_ERRFLAG_MASK);
                bshouldBreak = TRUE;
            }
            /* Check if Timeout occur */
            else if (u32Result == 0U)
            {
                UartState->ReceiveStatus = UART_STATUS_TIMEOUT;
                bshouldBreak             = TRUE;
            }
            else
            {
                /* Get received data */
                Uart_LLD_GetData(HwUnit);
            }
        }

        if (0U == UartState->RxSize)
        {
            UartState->ReceiveStatus = UART_STATUS_SUCCESS;
        }

        /* Disable the FCUART receiver */
        FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, FALSE);

        UartState->IsRxBusy = FALSE;

        /* Read dummy to clear RDRF flag */
        (void)FCUART_UART_HWA_GetData(pUartHwPtr);

        RetVal = UartState->ReceiveStatus;
    }
    return RetVal;
}

/**
 * @brief   Send out multiple bytes of data using non-blocking method.
 * @details This function sends data out through the FCUART module using
 *          non-blocking method. The function will return immediately after calling this
 *          function.
 *
 * @param[in]    HwUnit           Uart HW.
 * @param[in]    TxDataBuff       Buffer to send.
 * @param[in]    TxDataSize       The number of bytes to send.
 *
 */
/* [SWS_CDD_UART_00073] */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_AsyncSend(const uint8  HwUnit,
                                                     const uint8 *TxDataBuff,
                                                     const uint32 TxDataSize)
{
    FCUART_Type               *pUartHwPtr = s_apUartBase[HwUnit];
    const Uart_UserConfigType *UartUserCfg;
    Uart_StateStructureType   *UartState;

    Uart_StatusType RetVal = UART_STATUS_SUCCESS;
    UartUserCfg            = Uart_UserConfig[HwUnit];
    UartState              = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    SchM_Enter_Uart_UART_EXCLUSIVE_AREA_01();

    /* Check whether the current state is busy */
    if (UartState->IsTxBusy != 0U)
    {
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_01();
        RetVal = UART_STATUS_BUSY;
    }
    else
    {
        UartState->IsTxBusy = TRUE;
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_01();

        /* The trans type is using interrupts */
        if (UART_USING_INTERRUPTS == UartUserCfg->TransferType)
        {
            /* initialize the module driver state structure */
            UartState->TxBuff         = TxDataBuff;
            UartState->TxSize         = TxDataSize;
            UartState->TransmitStatus = UART_STATUS_BUSY;

            /* Enable the FCUART transmitter */
            FCUART_UART_HWA_SetTxTransfer(pUartHwPtr, TRUE);

            /* Enable tx empty interrupt */
            FCUART_UART_HWA_EnableTransmitInterrupt(pUartHwPtr);

            RetVal = UART_STATUS_SUCCESS;
        }
#if (UART_HAS_DMA_ENABLED == STD_ON)
        /* The trans type is using DMA */
        else
        {
            RetVal = Uart_LLD_StartSendDataUsingDma(HwUnit, TxDataBuff, TxDataSize);
        }
#endif
    }
    return RetVal;
}
/**
 * @brief Clear FCUART Rx Internal Buffer and User Buffer
 *
 * @param pUart UART instance value
 */

UART_TEXT_SECTION void FCUART_UART_HWA_FlushRx_DMA_Buffer(const uint8 HwUnit)
{
    uint16                     u16Index;
    const Uart_UserConfigType *UartUserCfg;
    uint8                     *pInternalBuffer;
    uint8                     *pToUserBuffer;
    uint16                    *pAsyncReadPosition;
    uint16                     pInternalBufferSize;
    uint16                     pToUserBufferSize;

    UartUserCfg         = Uart_UserConfig[HwUnit];
    pInternalBuffer     = UartUserCfg->InternalBuffer;
    pToUserBuffer       = UartUserCfg->TOUserBuffer;
    pAsyncReadPosition  = UartUserCfg->AsyncRead_Position;
    pInternalBufferSize = UartUserCfg->InternalBufferSize;
    pToUserBufferSize   = UartUserCfg->ToUserBufferSize;

    for (u16Index = 0; u16Index < pInternalBufferSize; u16Index++)
    {
        pInternalBuffer[u16Index] = 0;
    }

    for (u16Index = 0; u16Index < pToUserBufferSize; u16Index++)
    {
        pToUserBuffer[u16Index] = 0;
    }
    *pAsyncReadPosition = pInternalBufferSize;
}

/**
 * @brief    This function receives data from FCUART module using
 *           non-blocking method.
 * @details  This function returns immediately after initiating the
 *           receive function. After calling non-blocking get function,
 *           the application must get the receive status to check if receive
 *           is completed or not.
 *
 * @param[in]    HwUnit          Uart HW.
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_AsyncReceive(const uint8 HwUnit)
{
    /* [SWS_CDD_UART_00064] */
    FCUART_Type               *pUartHwPtr = s_apUartBase[HwUnit];
    const Uart_UserConfigType *UartUserCfg;
    Uart_StateStructureType   *UartState;
    Uart_StatusType            RetVal = UART_STATUS_SUCCESS;
    UartUserCfg                       = Uart_UserConfig[HwUnit];
    UartState                         = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    SchM_Enter_Uart_UART_EXCLUSIVE_AREA_03();

    /* Check whether the current state is busy */
    if (UartState->IsRxBusy != 0U)
    {
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_03();
        RetVal = UART_STATUS_BUSY;
    }
    else
    {
        UartState->IsRxBusy = TRUE;
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_03();

        /* The trans type is using interrupts */
        if (UART_USING_INTERRUPTS == UartUserCfg->TransferType)
        {
            UartState->ReceiveStatus = UART_STATUS_BUSY;

            FCUART_UART_HWA_WriteClearSTAT(pUartHwPtr, FCUART_STAT_ERRFLAG_MASK);
            /* Clear the Rx Buffer */
            FCUART_UART_HWA_FlushRxBuffer(pUartHwPtr);

            (void)FCUART_UART_HWA_FlushRx_DMA_Buffer(HwUnit);

            /* Start receiving */
            FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, TRUE);

            /* Enable receive and error interrupts */
            FCUART_UART_HWA_EnableErrorInterrupt(pUartHwPtr);
            FCUART_UART_HWA_EnableReceiveInterrupt(pUartHwPtr);

            RetVal = UART_STATUS_SUCCESS;
        }
#if (UART_HAS_DMA_ENABLED == STD_ON)
        else
        {
            /* The trans type is using DMA */
            RetVal = Uart_LLD_StartReceiveDataUsingDma(HwUnit);
        }
#endif
    }
    return RetVal;
}

/**
 * @brief   This function returns whether the previous FCUART transmit has
 *          finished.
 * @details  When performing non-blocking transmit, the user can call this
 *           function to ascertain the state of the current transmission:
 *           in progress (or busy) or complete (success).
 *
 * @param[in]    HwUnit               Uart HW.
 * @param[in]    BytesRemaining       The number of bytes remaining to be transmitted.
 *
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_GetTransmitStatus(const uint8 HwUnit,
                                                             uint32     *BytesRemaining)
{
    const Uart_StateStructureType *UartState;
    const Uart_UserConfigType     *UartUserCfg;
    Uart_StatusType                TransStatusVal;

    UartState   = (const Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    if ((BytesRemaining != NULL_PTR) && (UART_USING_INTERRUPTS == UartUserCfg->TransferType))
    {
        SchM_Enter_Uart_UART_EXCLUSIVE_AREA_05();
        TransStatusVal = UartState->TransmitStatus;
        if (UartState->IsTxBusy != 0U)
        {
            *BytesRemaining = UartState->TxSize;
            SchM_Exit_Uart_UART_EXCLUSIVE_AREA_05();
        }
        else
        {
            *BytesRemaining = 0;
            SchM_Exit_Uart_UART_EXCLUSIVE_AREA_05();
        }
    }
#if (UART_HAS_DMA_ENABLED == STD_ON)
    else if ((BytesRemaining != NULL_PTR) && (UART_USING_DMA == UartUserCfg->TransferType))
    {
        SchM_Enter_Uart_UART_EXCLUSIVE_AREA_05();
        TransStatusVal = UartState->TransmitStatus;
        if (UartState->IsTxBusy != 0U)
        {
            SchM_Exit_Uart_UART_EXCLUSIVE_AREA_05();
            /* Indicates the number of loops transported by the dma */
            uint16 u16Index = Dma_GetCurrentOuterLoopCounter(
                (Dma_InstanceType)UartUserCfg->eTxDmaInstance,
                (uint8)UartUserCfg->TxDMAChannel);

            *BytesRemaining = u16Index;
        }
        else
        {
            *BytesRemaining = 0;
            SchM_Exit_Uart_UART_EXCLUSIVE_AREA_05();
        }
    }
#endif
    else
    {
        SchM_Enter_Uart_UART_EXCLUSIVE_AREA_05();
        TransStatusVal = UartState->TransmitStatus;
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_05();
    }

    return TransStatusVal;
}

/**
 * @brief    This function returns whether the previous FCUART receive is
 *           complete.
 * @details  When performing a non-blocking receive, the user can call this
 *           function to ascertain the state of the current receive progress: in progress
 *           or complete.
 *
 * @param[in]    HwUnit              Uart HW.
 * @param[in]    BytesRemaining      The number of bytes remaining to be received.
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_GetReceiveStatus(const uint8 HwUnit, uint32 *BytesRemaining)
{
    const Uart_StateStructureType *UartState;
    const Uart_UserConfigType     *UartUserCfg;
    Uart_StatusType                TransStatusVal;

    UartState   = (const Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    if ((BytesRemaining != NULL_PTR) && (UART_USING_INTERRUPTS == UartUserCfg->TransferType))
    {
        SchM_Enter_Uart_UART_EXCLUSIVE_AREA_04();
        TransStatusVal = UartState->ReceiveStatus;
        if (UartState->IsRxBusy != 0U)
        {
            *BytesRemaining = UartState->RxSize;
            SchM_Exit_Uart_UART_EXCLUSIVE_AREA_04();
        }
        else
        {
            *BytesRemaining = 0;
            SchM_Exit_Uart_UART_EXCLUSIVE_AREA_04();
        }
    }
#if (UART_HAS_DMA_ENABLED == STD_ON)
    else if ((BytesRemaining != NULL_PTR) && (UART_USING_DMA == UartUserCfg->TransferType))
    {
        SchM_Enter_Uart_UART_EXCLUSIVE_AREA_04();
        TransStatusVal = UartState->ReceiveStatus;
        if (UartState->IsRxBusy != 0U)
        {
            SchM_Exit_Uart_UART_EXCLUSIVE_AREA_04();

            /* Indicates the number of loops transported by the dma */
            uint16 u16Index = Dma_GetCurrentOuterLoopCounter(
                (Dma_InstanceType)UartUserCfg->eRxDmaInstance,
                (uint8)UartUserCfg->RxDMAChannel);
            *BytesRemaining = u16Index;
        }
        else
        {
            *BytesRemaining = 0;
            SchM_Exit_Uart_UART_EXCLUSIVE_AREA_04();
        }
    }
#endif
    else
    {
        SchM_Enter_Uart_UART_EXCLUSIVE_AREA_04();
        TransStatusVal = UartState->ReceiveStatus;
        SchM_Exit_Uart_UART_EXCLUSIVE_AREA_04();
    }

    return TransStatusVal;
}

/**
 * @brief   This function terminates an non-blocking FCUART transmission.
 * @details  During a non-blocking FCUART transmission, the user has the option to
 *           terminate the transmission early if the transmission is still in progress.
 *
 * @param[in]    HwUnit             Uart HW.
 *
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_AbortSendingData(const uint8 HwUnit)
{
    Uart_StateStructureType   *UartState;
    const Uart_UserConfigType *UartUserCfg;
    FCUART_Type               *pUartHwPtr = s_apUartBase[HwUnit];
    Uart_StatusType            RetVal     = UART_STATUS_SUCCESS;

    UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    /* Check whether the transmission is currently busy */
    if (UartState->IsTxBusy == 0U)
    {
        RetVal = UART_STATUS_SUCCESS;
    }
    else
    {
        UartState->TransmitStatus = UART_STATUS_ABORTED;

        if (UART_USING_INTERRUPTS == UartUserCfg->TransferType)
        {
            Uart_LLD_CompleteSendDataUsingInt(HwUnit);
        }
#if (UART_HAS_DMA_ENABLED == STD_ON)
        else
        {
            Dma_DisableHwRequest(UartUserCfg->eTxDmaInstance, (uint8)UartUserCfg->TxDMAChannel);
            Uart_LLD_CompleteSendUsingDma(HwUnit);
        }
#endif
        /* Clear the Tx Buffer */
        FCUART_UART_HWA_FlushTxBuffer(pUartHwPtr);
    }

    if (UART_STATUS_TIMEOUT == UartState->TransmitStatus)
    {
        RetVal = UART_STATUS_ERROR;
    }

    return RetVal;
}

/**
 * @brief    This function terminates a non-blocking receive early.
 * @details  During a non-blocking FCUART receive, the user may choose
 *           to terminate the receive early if the receive is still in progress.
 *
 * @param[in]    HwUnit            Uart HW.
 */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_AbortReceivingData(const uint8 HwUnit)
{
    Uart_StateStructureType   *UartState;
    const Uart_UserConfigType *UartUserCfg;
    FCUART_Type               *pUartHwPtr = s_apUartBase[HwUnit];
    Uart_StatusType            RetVal     = UART_STATUS_SUCCESS;

    UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    /* Check whether the transmission is currently busy */
    if (UartState->IsRxBusy == 0U)
    {
        RetVal = UART_STATUS_SUCCESS;
    }
    else
    {
        UartState->ReceiveStatus = UART_STATUS_ABORTED;

        if (UART_USING_INTERRUPTS == UartUserCfg->TransferType)
        {
            Uart_LLD_CompleteReceiveDataUsingInt(HwUnit);
        }
#if (UART_HAS_DMA_ENABLED == STD_ON)
        else
        {
            Dma_DisableHwRequest(UartUserCfg->eRxDmaInstance, (uint8)UartUserCfg->RxDMAChannel);
            Uart_LLD_CompleteReceiveUsingDma(HwUnit);
        }
#endif
        /* Clear all the error flags */
        FCUART_UART_HWA_WriteClearSTAT(pUartHwPtr, FCUART_STAT_ERRFLAG_MASK);
        /* Flush the Rx Buffer */
        FCUART_UART_HWA_FlushRxBuffer(pUartHwPtr);
    }

    if (UART_STATUS_TIMEOUT == UartState->ReceiveStatus)
    {
        RetVal = UART_STATUS_ERROR;
    }

    return RetVal;
}

/**
 * @brief   Set the baud rate required by the user.
 * @details
 *
 * @param[in] HwUnit            Uart HW.
 * @param[in] DesiredBaudrate   The baudrate value to be configured.
 * @param[in] ClockFrequency    The clock frequency set for the Uart module.
 *
 * @return   UART_STATUS_SUCCESS     Baud rate successfully configured
 *           UART_STATUS_BUSY        Baud rate wasn't successfully configured
 *
 */
/* [SWS_CDD_UART_00015] */
UART_TEXT_SECTION Uart_StatusType Uart_LLD_SetBaudRate(const uint8             HwUnit,
                                                       const Uart_BaudrateType DesiredBaudrate,
                                                       const uint32            ClockFrequency)
{
    uint32 Sbr = 1U;
    uint32 Osr = 1U;
    uint32 SbrTemp;
    uint32 u32Index;
    uint32 MinDiff = 0xFFFFFFFFU;
    uint32 BaudDiff;
    uint32 Temp;

    FCUART_Type             *pUartHwPtr = s_apUartBase[HwUnit];
    Uart_StateStructureType *UartState;
    UartState = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    Uart_StatusType Status;

    /* [SWS_CDD_UART_00016] */
    if ((TRUE == UartState->IsTxBusy) || (TRUE == UartState->IsRxBusy))
    {
        Status = UART_STATUS_BUSY;
    }
    else
    {
        for (u32Index = 4U; u32Index <= 32; u32Index++)
        {
            Temp    = DesiredBaudrate * u32Index;
            SbrTemp = (ClockFrequency + (Temp >> 1U)) / Temp;
            if (SbrTemp == 0U)
            {
                SbrTemp = 1U;
            }
            else if (SbrTemp >= 8192U)
            {
                continue;
            }
            else
            {
                /* do nothing */
            }

            Temp = Temp * SbrTemp;
            if (Temp == ClockFrequency)
            {
                Osr = u32Index;
                Sbr = SbrTemp;
                break;
            }
            else if (Temp > ClockFrequency)
            {
                BaudDiff = Temp - ClockFrequency;
            }
            else
            {
                BaudDiff = ClockFrequency - Temp;
            }

            if (BaudDiff < MinDiff)
            {
                MinDiff = BaudDiff;
                Osr     = u32Index;
                Sbr     = SbrTemp;
            }
        }

        /* Update structure */
        UartState->BaudRate = ClockFrequency / (Osr * Sbr);

        if (Osr < 8U)
        {
            FCUART_UART_HWA_EnableBothEdgeSampling(pUartHwPtr);
        }

        /* Writes the Osr value to the register. The true oversampling ratio will be the written
         * value adds 1. */
        FCUART_UART_HWA_SetOversamplingRatio(pUartHwPtr, (Osr - 1U));

        /* write the Sbr value */
        FCUART_UART_HWA_SetBaudRateDivisor(pUartHwPtr, Sbr);

        Status = UART_STATUS_SUCCESS;
    }
    return Status;
}

/**
 * @brief   Gets the current configuration baud rate.
 * @details Returns the UART configured baud rate.
 *
 * @param[in] HwUnit                 Uart HW.
 * @param[in] ConfiguredBaudRate     The current baudrate value has been configured.
 * @return   void
 *
 */
/* [SWS_CDD_UART_00024] */
UART_TEXT_SECTION void Uart_LLD_GetBaudRate(const uint8 HwUnit, uint32 *ConfiguredBaudRate)
{
    const Uart_StateStructureType *UartState;

    UartState = (const Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    *ConfiguredBaudRate = UartState->BaudRate;
}

/*!
 * @brief Sets the internal driver reference to the tx buffer.
 *
 * @details This function can be called from the tx callback to provide the driver
 *          with a new buffer, for continuous transmission.
 *
 * @param HwUnit  UART HwUnit number
 * @param TxDataBuff  source buffer containing 8-bit data chars to send
 * @param TxDataSize  the number of bytes to send
 * @return void
 */
UART_TEXT_SECTION void Uart_LLD_SetTxBuffer(const uint8  HwUnit,
                                            const uint8 *TxDataBuff,
                                            const uint32 TxDataSize)
{
    Uart_StateStructureType *UartState;
    UartState = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    UartState->TxBuff = TxDataBuff;
    UartState->TxSize = TxDataSize;
}

/*!
 * @brief Sets the internal driver reference to the rx buffer.
 *
 * @details This function can be called from the rx callback to provide the driver
 *          with a new buffer, for continuous reception.
 *
 * @param HwUnit      UART HwUnit number
 * @param RxDataBuff  destination buffer containing 8-bit data chars to receive
 * @param RxDataSize  the number of bytes to receive
 * @return void
 */
UART_TEXT_SECTION void Uart_LLD_SetRxBuffer(const uint8  HwUnit,
                                            uint8       *RxDataBuff,
                                            const uint32 RxDataSize)
{
    Uart_StateStructureType *UartState;
    UartState = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    UartState->RxBuff = RxDataBuff;
    UartState->RxSize = RxDataSize;
}

/**
 * @brief   Interrupt handler for FCUART.
 * @details
 *
 * @param HwUnit
 *
 * @return  void
 */
UART_TEXT_SECTION void Uart_LLD_IrqHandler(const uint8 HwUnit)
{
    if (HwUnit < FCUART_INSTANCE_COUNT)
    {
        FCUART_Type                   *pUartHwPtr;
        const Uart_StateStructureType *UartState;
        pUartHwPtr = s_apUartBase[HwUnit];
        UartState  = (const Uart_StateStructureType *)s_apUartStateArray[HwUnit];

        if (NULL_PTR != UartState)
        {
            /* Receiver Interrupt enable */
            /* Receive Data Register Full Flag is set */
            if ((FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_RDRFF_MASK) != 0U) &&
                (FCUART_UART_HWA_GetCtrlReg(pUartHwPtr, FCUART_CTRL_RIE_MASK) != 0U))
            {
                Uart_LLD_RxIrqHandler(HwUnit);
            }
            /* Transmit Interrupt enable*/
            /* Transmit Data Register Empty Flag is set */
            else if ((FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_TDREF_MASK) != 0U) &&
                     (FCUART_UART_HWA_GetCtrlReg(pUartHwPtr, FCUART_CTRL_TIE_MASK) != 0U))
            {
                Uart_LLD_TxEmptyIrqHandler(HwUnit);
            }
            /* Transmission Complete Interrupt enable */
            /* Transmission Complete Flag is set */
            else if ((FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_TCF_MASK) != 0U) &&
                     (FCUART_UART_HWA_GetCtrlReg(pUartHwPtr, FCUART_CTRL_TCIE_MASK) != 0U))
            {
                Uart_LLD_TxCompleteIrqHandler(HwUnit);
            }
#if (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON)
            else if ((FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_IDLEF_MASK) != 0U) &&
                     (FCUART_UART_HWA_GetCtrlReg(pUartHwPtr, FCUART_CTRL_IIE_MASK) != 0U))
            {
                Uart_LLD_IdleIrqHandler(HwUnit);
            }
#endif /* (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON) */
            else
            {
                /* Do nothing */
            }
            /* Processing error interrupt */
            Uart_LLD_ErrIrqHandler(HwUnit);
        }
        else
        {
            /* Currently instance has not been initialized */
            FCUART_UART_HWA_FlushRxBuffer(pUartHwPtr);
            FCUART_UART_HWA_WriteClearSTAT(pUartHwPtr, FCUART_STAT_ERRFLAG_MASK);
        }
    }
}

/**
 * @brief   Rx Interrupt handler for FCUART.
 * @details
 *
 * @param[in]
 *
 * @return  void
 */
UART_TEXT_SECTION static void Uart_LLD_RxIrqHandler(const uint8 HwUnit)
{

    const Uart_UserConfigType *UartUserCfg;
    uint16                    *pAsyncReadPosition;
    uint8                     *pToUserBuffer;
    uint16                     pInternalBufferSize;
    uint16                     pToUserBufferSize;
    uint16                     pRxfifoCount;
    const FCUART_Type         *pUartHwPtr;

    UartUserCfg         = Uart_UserConfig[HwUnit];
    pAsyncReadPosition  = UartUserCfg->AsyncRead_Position;
    pToUserBuffer       = UartUserCfg->TOUserBuffer;
    pInternalBufferSize = UartUserCfg->InternalBufferSize;
    pToUserBufferSize   = UartUserCfg->ToUserBufferSize;
    pUartHwPtr          = (const FCUART_Type *)s_apUartBase[HwUnit];

    if (UartUserCfg->RxFiFoEnable == UART_RXFiFo_Enable)
    {
        pRxfifoCount = FCUART_UART_HWA_GetRxFiFoCount(pUartHwPtr);
        while (pRxfifoCount > 0)
        {
            Uart_LLD_GetData_Async(HwUnit);
            pRxfifoCount--;
            if ((*pAsyncReadPosition) == pToUserBufferSize)
            {
                if (UartUserCfg->Callback != NULL_PTR)
                {
                    UartUserCfg->Callback(HwUnit, pToUserBufferSize, pToUserBuffer, UART_EVENT_RX_ASY);
                }
                *pAsyncReadPosition = pInternalBufferSize;
            }
        }
    }
    else
    {
        Uart_LLD_GetData_Async(HwUnit);
        if ((*pAsyncReadPosition) == pToUserBufferSize)
        {
            if (UartUserCfg->Callback != NULL_PTR)
            {
                UartUserCfg->Callback(HwUnit, pToUserBufferSize, pToUserBuffer, UART_EVENT_RX_ASY);
            }
            *pAsyncReadPosition = pInternalBufferSize;
        }
    }
}

/**
 * @brief   Tx Empty Interrupt handler for FCUART.
 * @details
 *
 * @param[in]
 *
 * @return  void
 */
UART_TEXT_SECTION static void Uart_LLD_TxEmptyIrqHandler(const uint8 HwUnit)
{
    const Uart_StateStructureType *UartState;
    const Uart_UserConfigType     *UartUserCfg;
    FCUART_Type                   *pUartHwPtr;

    pUartHwPtr  = s_apUartBase[HwUnit];
    UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    /* Check if there are any more bytes to send */
    if (UartState->TxSize > 0U)
    {
        /* Transmit the data */
        Uart_LLD_PutData(HwUnit);

        /* Check if this was the last byte in the current buffer */
        if ((0U == UartState->TxSize) && (UartUserCfg->Callback != NULL_PTR))
        {
            /* Invoke callback if there is one (callback may reset the tx buffer for continuous
             * transmission)*/
            UartUserCfg->Callback(HwUnit, 0, NULL_PTR, UART_EVENT_TX_EMPTY);
        }
        /* If there's no new data, disable tx empty interrupt and enable transmission complete
         * interrupt */
        if (0U == UartState->TxSize)
        {
            FCUART_UART_HWA_DisableTransmitInterrupt(pUartHwPtr);
            FCUART_UART_HWA_EnableTransmitCompleteInterrupt(pUartHwPtr);
        }
    }
}

/**
 * @brief   Tx Complete Interrupt handler for FCUART.
 * @details
 *
 * @param[in]
 *
 * @return  void
 */
UART_TEXT_SECTION static void Uart_LLD_TxCompleteIrqHandler(const uint8 HwUnit)
{
    const Uart_StateStructureType *UartState;
    const Uart_UserConfigType     *UartUserCfg;

    UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    if (0U == UartState->TxSize)
    {
        if (UART_USING_INTERRUPTS == UartUserCfg->TransferType)
        {
            /* Complete the interrupt based transfer */
            Uart_LLD_CompleteSendDataUsingInt(HwUnit);
        }
#if (UART_HAS_DMA_ENABLED == STD_ON)
        if (UART_USING_DMA == UartUserCfg->TransferType)
        {
            Uart_LLD_CompleteSendUsingDma_CheckSend(HwUnit);
        }
#endif
        /* Invoke callback if there is one */
        if (UartUserCfg->Callback != NULL_PTR)
        {
            UartUserCfg->Callback(HwUnit, 0, NULL_PTR, UART_EVENT_END_TRANSFER);
        }
    }
}

#if (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON)
/**
 * @brief FCUART idle irq handle
 *
 * @param HwUnit
 * @return void
 */
UART_TEXT_SECTION static void Uart_LLD_IdleIrqHandler(const uint8 HwUnit)
{
    FCUART_Type *pUartHwPtr;
    pUartHwPtr = s_apUartBase[HwUnit];
    Uart_StatusType            ReceiveStatus;
    const Uart_UserConfigType *UartUserCfg         = Uart_UserConfig[HwUnit];
    uint16                    *pAsyncReadPosition  = UartUserCfg->AsyncRead_Position;
    uint8                     *pToUserBuffer       = UartUserCfg->TOUserBuffer;
    uint16                     pInternalBufferSize = UartUserCfg->InternalBufferSize;
    uint16                     u16UartReadsize     = 0;
#if (UART_HAS_DMA_ENABLED == STD_ON)
    uint16 u16Index;
    uint16 DMA_Counter;
    uint8 *pInternalBuffer   = UartUserCfg->InternalBuffer;
    uint16 pToUserBufferSize = UartUserCfg->ToUserBufferSize;
#endif

    FCUART_UART_HWA_ClearStatus(pUartHwPtr, FCUART_STAT_IDLEF_MASK);
    ReceiveStatus = Uart_LLD_GetReceiveStatus(HwUnit, NULL_PTR);

    if (ReceiveStatus == UART_STATUS_BUSY)
    {
#if (UART_HAS_DMA_ENABLED == STD_ON)
        if (UART_USING_INTERRUPTS != UartUserCfg->TransferType)
        {

            DMA_Counter = Dma_GetCurrentOuterLoopCounter(UartUserCfg->eRxDmaInstance,
                                                         (uint8)UartUserCfg->RxDMAChannel);
            if ((DMA_Counter != pToUserBufferSize) && (DMA_Counter != pInternalBufferSize))
            {

                for (u16Index = 0; u16Index < ((*pAsyncReadPosition) - DMA_Counter); u16Index++)
                {
                    pToUserBuffer[u16Index] =
                        pInternalBuffer[(pInternalBufferSize - (*pAsyncReadPosition)) + u16Index];
                    u16UartReadsize++;
                }
                *pAsyncReadPosition = DMA_Counter;
                if (UartUserCfg->Callback != NULL_PTR)
                {
                    UartUserCfg->Callback(HwUnit, u16UartReadsize, pToUserBuffer, UART_EVENT_RX_ASY);
                }
            }
#if (UART_RERECIVE_ENABLED == STD_ON)
            Dma_DisableHwRequest(UartUserCfg->eRxDmaInstance, (uint8)UartUserCfg->RxDMAChannel);

            FCUART_UART_HWA_DisableErrorInterrupt(pUartHwPtr);
            FCUART_UART_HWA_DisableReceiveDMA(pUartHwPtr);
            /* Disable receiver */
            FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, FALSE);

            (void)FCUART_UART_HWA_GetData(pUartHwPtr);
            FCUART_UART_HWA_WriteClearSTAT(pUartHwPtr, FCUART_STAT_ERRFLAG_MASK);
            Uart_LLD_StartReceiveDataUsingDma(HwUnit);
#endif
        }
        else
#endif
        {
            u16UartReadsize     = (uint16)(pInternalBufferSize - (*pAsyncReadPosition));
            *pAsyncReadPosition = pInternalBufferSize;
            if (u16UartReadsize != 0)
            {
                if (UartUserCfg->Callback != NULL_PTR)
                {
                    UartUserCfg->Callback(HwUnit, u16UartReadsize, pToUserBuffer, UART_EVENT_RX_ASY);
                }
#if (UART_RERECIVE_ENABLED == STD_ON)
                FCUART_UART_HWA_DisableErrorInterrupt(pUartHwPtr);
                FCUART_UART_HWA_DisableReceiveInterrupt(pUartHwPtr);
                /* Disable receiver */
                FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, FALSE);

                (void)FCUART_UART_HWA_GetData(pUartHwPtr);
                FCUART_UART_HWA_WriteClearSTAT(pUartHwPtr, FCUART_STAT_ERRFLAG_MASK);

                FCUART_UART_HWA_FlushRxBuffer(pUartHwPtr);

                (void)FCUART_UART_HWA_FlushRx_DMA_Buffer(HwUnit);

                /* Start receiving */
                FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, TRUE);

                /* Enable receive and error interrupts */
                FCUART_UART_HWA_EnableErrorInterrupt(pUartHwPtr);
                FCUART_UART_HWA_EnableReceiveInterrupt(pUartHwPtr);
#endif
            }
        }
    }
    /* Invoke callback if there is one */
    if (UartUserCfg->Callback != NULL_PTR)
    {
        UartUserCfg->Callback(HwUnit, 0, NULL_PTR, UART_EVENT_IDLE);
    }
}
#endif /* (UART_ENABLE_TIMEOUT_INTERRUPT == STD_ON) */

/**
 * @brief   Error Interrupt handler for FCUART.
 * @details
 *
 * @param[in]
 *
 * @return  void
 */
UART_TEXT_SECTION static void Uart_LLD_ErrIrqHandler(const uint8 HwUnit)
{
    uint32                     u32Uart_ErrStatus;
    boolean                    bErrorFlag  = FALSE;
    FCUART_Type               *pUartHwPtr  = s_apUartBase[HwUnit];
    Uart_StateStructureType   *UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    const Uart_UserConfigType *UartUserCfg = Uart_UserConfig[HwUnit];

    u32Uart_ErrStatus = FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_ERRFLAG_MASK);

    /* Check whether the corresponding interrupt is enabled.
    If the interrupt is set, clear the flag bit */
    if (u32Uart_ErrStatus != (uint32)0U)
    {
        /* Handle receive overrun interrupt */
        if ((FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_RORF_MASK) != 0U) &&
            (FCUART_UART_HWA_GetCtrlReg(pUartHwPtr, FCUART_CTRL_ORIE_MASK) != 0U))
        {
            bErrorFlag               = TRUE;
            UartState->ReceiveStatus = UART_STATUS_RX_OVERRUN;
            FCUART_UART_HWA_ClearStatus(pUartHwPtr, FCUART_STAT_RORF_MASK);
        }
        else if ((FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_FEF_MASK) != 0U) &&
                 (FCUART_UART_HWA_GetCtrlReg(pUartHwPtr, FCUART_CTRL_FEIE_MASK) != 0U))
        {
            bErrorFlag               = TRUE;
            UartState->ReceiveStatus = UART_STATUS_FRAMING_ERROR;
            FCUART_UART_HWA_ClearStatus(pUartHwPtr, FCUART_STAT_FEF_MASK);
        }
        else if ((FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_NF_MASK) != 0U) &&
                 (FCUART_UART_HWA_GetCtrlReg(pUartHwPtr, FCUART_CTRL_NEIE_MASK) != 0U))
        {
            bErrorFlag               = TRUE;
            UartState->ReceiveStatus = UART_STATUS_NOISE_ERROR;
            FCUART_UART_HWA_ClearStatus(pUartHwPtr, FCUART_STAT_NF_MASK);
        }
        else if ((FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_PEF_MASK) != 0U) &&
                 (FCUART_UART_HWA_GetCtrlReg(pUartHwPtr, FCUART_CTRL_PEIE_MASK) != 0U))
        {
            bErrorFlag               = TRUE;
            UartState->ReceiveStatus = UART_STATUS_PARITY_ERROR;
            FCUART_UART_HWA_ClearStatus(pUartHwPtr, FCUART_STAT_PEF_MASK);
        }
        else
        {
            FCUART_UART_HWA_ClearStatus(pUartHwPtr, u32Uart_ErrStatus);
        }

        if (bErrorFlag != 0U)
        {
            if (UART_USING_INTERRUPTS == UartUserCfg->TransferType)
            {
                Uart_LLD_CompleteReceiveDataUsingInt(HwUnit);
            }
#if (UART_HAS_DMA_ENABLED == STD_ON)
            else
            {
                Dma_DisableHwRequest(UartUserCfg->eRxDmaInstance, (uint8)UartUserCfg->RxDMAChannel);
                Uart_LLD_CompleteReceiveUsingDma(HwUnit);
            }
#endif
            if (UartUserCfg->Callback != NULL_PTR)
            {
                UartUserCfg->Callback(HwUnit, 0, NULL_PTR, UART_EVENT_ERROR);
            }
        }
    }
}

#if (UART_HAS_DMA_ENABLED == STD_ON)
/**
 * @brief    Start a transmit by beginning the process of
 *           sending data using DMA transfers.
 * @details
 *
 * @param[in] HwUnit             Uart HW.
 * @param[in] TxDataBuff         Buffer to send.
 * @param[in] TxDataSize         The number of bytes to send.
 *
 * @return  Uart_StatusType
 */
UART_TEXT_SECTION static Uart_StatusType Uart_LLD_StartSendDataUsingDma(const uint8  HwUnit,
                                                                        const uint8 *TxDataBuff,
                                                                        const uint32 TxDataSize)
{
    Uart_StateStructureType   *UartState;
    const Uart_UserConfigType *UartUserCfg;
    FCUART_Type               *pUartHwPtr;
    Uart_StatusType            RetVal = UART_STATUS_SUCCESS;

    pUartHwPtr  = s_apUartBase[HwUnit];
    UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    Dma_ChannelType Uart_DmaChannelAttr;

    /*The size of data in one transfer*/
    Uart_DmaChannelAttr.eDmaDSIZE = DMA_TRAN_SIZE_1B;
    Uart_DmaChannelAttr.eDmaSSIZE = DMA_TRAN_SIZE_1B;

    Uart_DmaChannelAttr.u32DmaNBYTES = 1U;

    Uart_DmaChannelAttr.s16SrcDataOffset  = 1;
    Uart_DmaChannelAttr.s16DestDataOffset = 0;

    /* Disable destination and source circular buffer*/
    Uart_DmaChannelAttr.bDmaSrcCircularBufferEn  = FALSE;
    Uart_DmaChannelAttr.bDmaDestCircularBufferEn = FALSE;

    /* Disable destination and source inner loop offset */
    Uart_DmaChannelAttr.bDmaSILOE = FALSE;
    Uart_DmaChannelAttr.bDmaDILOE = FALSE;

    Uart_DmaChannelAttr.u16DmaOuterLoopCounter = (uint16)TxDataSize;

    Uart_DmaChannelAttr.s32DmaSLAST = 0;
    Uart_DmaChannelAttr.s32DmaDLAST = 0;

    /* Tx Dma channel: Set reg TX_FIFO address as Dma Destination address */
    Uart_DmaChannelAttr.bDmaAutoStopEnable = TRUE;
    Uart_DmaChannelAttr.u32DmaSADDR        = (uint32)TxDataBuff;
    Uart_DmaChannelAttr.u32DmaDADDR        = (uint32) & (pUartHwPtr->DATA);

    /* Update state structure */
    UartState->TxBuff         = TxDataBuff;
    UartState->TxSize         = 0U;
    UartState->TransmitStatus = UART_STATUS_BUSY;

    /* Configure the transfer control descriptor for the DMA channel */
    if ((Std_ReturnType)E_OK == Dma_ConfigChannel(UartUserCfg->eTxDmaInstance,
                                                  (uint8)UartUserCfg->TxDMAChannel,
                                                  &Uart_DmaChannelAttr))
    {
        /* Start the DMA channel */
        Dma_EnableHwRequest(UartUserCfg->eTxDmaInstance, (uint8)UartUserCfg->TxDMAChannel);
    }
    else
    {
        RetVal = UART_STATUS_ERROR;
    }

    /* Enable the FCUART transmitter */
    FCUART_UART_HWA_SetTxTransfer(pUartHwPtr, TRUE);

    /* Enable tx DMA requests for the current instance */
    FCUART_UART_HWA_EnableTransmitDMA(pUartHwPtr);

    return RetVal;
}
#endif

#if (STD_ON == UART_HAS_DMA_ENABLED)
/**
 * @brief        Start a receive by beginning the process of
 *               receiving data using DMA transfers.
 * @details
 *
 * @param[in] HwUnit          Uart HW.
 * @param[in] RxDataBuff      Buffer to receive.
 * @param[in] RxDataSize      The number of bytes to receive.
 *
 * @return  void
 */
UART_TEXT_SECTION static Uart_StatusType Uart_LLD_StartReceiveDataUsingDma(const uint8 HwUnit)
{
    Uart_StateStructureType   *UartState;
    const Uart_UserConfigType *UartUserCfg;
    FCUART_Type               *pUartHwPtr;
    uint8                     *pInternalBuffer;
    uint16                     pInternalBufferSize;
    Uart_StatusType            RetVal = UART_STATUS_SUCCESS;

    pUartHwPtr          = s_apUartBase[HwUnit];
    UartState           = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg         = Uart_UserConfig[HwUnit];
    pInternalBuffer     = UartUserCfg->InternalBuffer;
    pInternalBufferSize = UartUserCfg->InternalBufferSize;

    /* Clear all the error flags */
    FCUART_UART_HWA_WriteClearSTAT(pUartHwPtr, FCUART_STAT_ERRFLAG_MASK);
    /* Flush the Rx Buffer */
    FCUART_UART_HWA_FlushRxBuffer(pUartHwPtr);

    (void)FCUART_UART_HWA_FlushRx_DMA_Buffer(HwUnit);

    Dma_ChannelType Uart_DmaChannelAttr;

    /*The size of data in one transfer*/
    Uart_DmaChannelAttr.eDmaDSIZE = DMA_TRAN_SIZE_1B;
    Uart_DmaChannelAttr.eDmaSSIZE = DMA_TRAN_SIZE_1B;

    Uart_DmaChannelAttr.u32DmaNBYTES = 1U;

    Uart_DmaChannelAttr.s16SrcDataOffset  = 0;
    Uart_DmaChannelAttr.s16DestDataOffset = 1;

    /* Disable destination and source circular buffer*/
    Uart_DmaChannelAttr.bDmaSrcCircularBufferEn  = FALSE;
    Uart_DmaChannelAttr.bDmaDestCircularBufferEn = TRUE;
    Uart_DmaChannelAttr.u32DmaDestCircBufferSize = pInternalBufferSize;
    /* Disable destination and source inner loop offset */
    Uart_DmaChannelAttr.bDmaSILOE = FALSE;
    Uart_DmaChannelAttr.bDmaDILOE = FALSE;

    Uart_DmaChannelAttr.u16DmaOuterLoopCounter = (uint16)pInternalBufferSize;

    Uart_DmaChannelAttr.s32DmaSLAST = 0;
    Uart_DmaChannelAttr.s32DmaDLAST = 0;

    Uart_DmaChannelAttr.bDmaAutoStopEnable = FALSE;
    Uart_DmaChannelAttr.u32DmaSADDR        = (uint32) & (pUartHwPtr->DATA);
    Uart_DmaChannelAttr.u32DmaDADDR        = (uint32)pInternalBuffer;

    /* Update the state structure */
    UartState->IsRxBusy      = TRUE;
    UartState->ReceiveStatus = UART_STATUS_BUSY;

    /* Configure the transfer control descriptor for the DMA channel */
    if ((Std_ReturnType)E_OK == Dma_ConfigChannel(UartUserCfg->eRxDmaInstance,
                                                  (uint8)UartUserCfg->RxDMAChannel,
                                                  &Uart_DmaChannelAttr))
    {
        /* Start the DMA channel */
        Dma_EnableHwRequest(UartUserCfg->eRxDmaInstance, (uint8)UartUserCfg->RxDMAChannel);
    }
    else
    {
        RetVal = UART_STATUS_ERROR;
    }

    /* Enable the FCUART receiver */
    FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, TRUE);

    /* Enable error interrupts and enable rx DMA requests */
    FCUART_UART_HWA_EnableErrorInterrupt(pUartHwPtr);
    FCUART_UART_HWA_EnableReceiveDMA(pUartHwPtr);

    return RetVal;
}
#endif

/**
 * @brief        Stop Sending data in interrupt mode.
 * @details
 *
 * @param[in] HwUnit       Uart HW.
 *
 * @return  void
 */
UART_TEXT_SECTION static void Uart_LLD_CompleteSendDataUsingInt(const uint8 HwUnit)
{
    Uart_StateStructureType *UartState;
    FCUART_Type             *pUartHwPtr;

    pUartHwPtr = s_apUartBase[HwUnit];
    UartState  = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    if (UART_STATUS_BUSY != UartState->TransmitStatus)
    {
        /* The current status is not in transmit */
        FCUART_UART_HWA_DisableTransmitInterrupt(pUartHwPtr);
    }

    FCUART_UART_HWA_DisableTransmitCompleteInterrupt(pUartHwPtr);

    FCUART_UART_HWA_SetTxTransfer(pUartHwPtr, FALSE);

    if (UART_STATUS_BUSY == UartState->TransmitStatus)
    {
        UartState->TransmitStatus = UART_STATUS_SUCCESS;
    }

    UartState->IsTxBusy = FALSE;
}

#if (UART_HAS_DMA_ENABLED == STD_ON)
/**
 * @brief        Complete dma sending data
 * @details      This call back function is called in the dma transfer completion function.
 *
 * @param[in] HwUnit       Uart HW.
 *
 * @return  void
 */
UART_TEXT_SECTION void Uart_LLD_CompleteSendUsingDma(uint8 HwUnit)
{
    Uart_StateStructureType   *UartState;
    const Uart_UserConfigType *UartUserCfg;
    FCUART_Type               *pUartHwPtr;

    pUartHwPtr  = s_apUartBase[HwUnit];
    UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    /* Check if the channel is in execution */
    if ((boolean)TRUE ==
        Dma_CheckIfTransferActive(UartUserCfg->eTxDmaInstance, (uint8)UartUserCfg->TxDMAChannel))
    {
        UartState->TransmitStatus = UART_STATUS_DMA_ERROR;

        if (UartUserCfg->Callback != NULL_PTR)
        {
            UartUserCfg->Callback(HwUnit, 0, NULL_PTR, UART_EVENT_ERROR);
        }
    }

    if (UART_STATUS_BUSY == UartState->TransmitStatus)
    {
        if (UartUserCfg->Callback != NULL_PTR)
        {
            UartUserCfg->Callback(HwUnit, 0, NULL_PTR, UART_EVENT_TX_EMPTY);
        }
    }

    /* If the tx buffer is updated in the callback function, the updated DMA continues the transfer;
       Otherwise, end the current transfer. */
    if ((UartState->TxSize > 0U) && (UartState->TransmitStatus != UART_STATUS_DMA_ERROR))
    {
        Dma_SetCfgSaddr(UartUserCfg->eTxDmaInstance,
                        (uint8)UartUserCfg->TxDMAChannel,
                        (uint32)(UartState->TxBuff));
        Dma_UpdateOuterLoopCounter(UartUserCfg->eTxDmaInstance,
                                   (uint8)UartUserCfg->TxDMAChannel,
                                   (uint16)UartState->TxSize);

        UartState->TxSize = 0U;

        /* Re-start the channel */
        Dma_EnableHwRequest(UartUserCfg->eTxDmaInstance, (uint8)UartUserCfg->TxDMAChannel);
    }
    else
    {
        /* The current state is in Abort condition */
        /* Disable tx DMA requests */
        FCUART_UART_HWA_EnableTransmitCompleteInterrupt(pUartHwPtr);
        FCUART_UART_HWA_DisableTransmitDMA(pUartHwPtr);
    }
}

UART_TEXT_SECTION void Uart_LLD_CompleteSendUsingDma_CheckSend(uint8 HwUnit)
{

    Uart_StateStructureType *UartState;
    FCUART_Type             *pUartHwPtr;

    pUartHwPtr = s_apUartBase[HwUnit];
    UartState  = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    /* Disable the CompleteInterrupt */
    FCUART_UART_HWA_DisableTransmitCompleteInterrupt(pUartHwPtr);

    /* Disable the transmitter */
    FCUART_UART_HWA_SetTxTransfer(pUartHwPtr, FALSE);

    if (UART_STATUS_BUSY == UartState->TransmitStatus)
    {
        UartState->TransmitStatus = UART_STATUS_SUCCESS;
    }

    /* Update the busy flag */
    UartState->IsTxBusy = FALSE;
}

#endif

/**
 * @brief        To terminate the current instance of receiving data via interrupt
 * @details
 *
 * @param[in] HwUnit    Uart HW.
 * @return    void
 */
UART_TEXT_SECTION static void Uart_LLD_CompleteReceiveDataUsingInt(const uint8 HwUnit)
{
    FCUART_Type             *pUartHwPtr;
    Uart_StateStructureType *UartState;
    uint32                   u32TryCount = 0U;
    uint32                   u32Result   = 0U;

    pUartHwPtr = s_apUartBase[HwUnit];
    UartState  = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];

    FCUART_UART_HWA_DisableErrorInterrupt(pUartHwPtr);
    FCUART_UART_HWA_DisableReceiveInterrupt(pUartHwPtr);

    /* In Abort case, the transmission need to stop instantly */
    if (UART_STATUS_ABORTED == UartState->ReceiveStatus)
    {
        while ((u32Result == 0U) && (u32TryCount < UART_TIMEOUT_VALUE))
        {
            /* wait for the completion of the transmission */
            u32Result = FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_RDRFF_MASK);
            u32TryCount++;
        }
    }

    /* Disable receiver */
    FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, FALSE);

    (void)FCUART_UART_HWA_GetData(pUartHwPtr);

    /* Update the information of the module driver state */
    UartState->IsRxBusy = FALSE;

    if (UART_STATUS_BUSY == UartState->ReceiveStatus)
    {
        UartState->ReceiveStatus = UART_STATUS_SUCCESS;
    }
}

#if (STD_ON == UART_HAS_DMA_ENABLED)

/**
 * @brief        Finish up a receive by completing the process of receiving data
 *               and disabling the DMA requests..
 * @details      This is a callback for DMA major loop completion,
 *               so it must match the DMA callback signature.
 *
 * @param[in] HwUnit    Uart HW.
 * @return  void
 */
UART_TEXT_SECTION void Uart_LLD_CompleteReceiveUsingDma(uint8 HwUnit)
{
    Uart_StateStructureType   *UartState;
    const Uart_UserConfigType *UartUserCfg;
    FCUART_Type               *pUartHwPtr;
    uint32                     u32TryCount = 0U;
    uint32                     u32Result   = 0U;
    uint8                     *pInternalBuffer;
    uint8                     *pToUserBuffer;
    uint16                     u16Index;
    uint16                     u16UartReadsize = 0;
    uint16                    *pAsyncReadPosition;
    uint16                     pInternalBufferSize;
    uint16                     pToUserBufferSize;

    pUartHwPtr          = s_apUartBase[HwUnit];
    UartState           = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg         = Uart_UserConfig[HwUnit];
    pInternalBuffer     = UartUserCfg->InternalBuffer;
    pToUserBuffer       = UartUserCfg->TOUserBuffer;
    pAsyncReadPosition  = UartUserCfg->AsyncRead_Position;
    pInternalBufferSize = UartUserCfg->InternalBufferSize;
    pToUserBufferSize   = UartUserCfg->ToUserBufferSize;

    /* If the Rx buffer is updated in the callback function, the updated DMA continues the transfer;
       Otherwise, end the current transfer. */
    if (UartState->ReceiveStatus == UART_STATUS_BUSY)
    {

        if ((*pAsyncReadPosition) <= pToUserBufferSize)
        {
            for (u16Index = 0; u16Index < (*pAsyncReadPosition); u16Index++)
            {
                pToUserBuffer[u16Index] =
                    pInternalBuffer[(pInternalBufferSize - (*pAsyncReadPosition)) + u16Index];
                u16UartReadsize++;
            }
            *pAsyncReadPosition = pInternalBufferSize;
        }
        else
        {
            for (u16Index = 0; u16Index < ((*pAsyncReadPosition) - pToUserBufferSize); u16Index++)
            {
                pToUserBuffer[u16Index] =
                    pInternalBuffer[(pInternalBufferSize - (*pAsyncReadPosition)) + u16Index];
                u16UartReadsize++;
            }
            *pAsyncReadPosition = pToUserBufferSize;
        }

        if (UartUserCfg->Callback != NULL_PTR)
        {
            UartUserCfg->Callback(HwUnit, u16UartReadsize, pToUserBuffer, UART_EVENT_RX_ASY);
        }
    }
    else
    {
        /* Enable error interrupts and enable rx DMA requests for the current instance */
        FCUART_UART_HWA_DisableErrorInterrupt(pUartHwPtr);
        FCUART_UART_HWA_DisableReceiveDMA(pUartHwPtr);

        /* In Abort condition, the transmission needs to halt immediately */
        if (UART_STATUS_ABORTED == UartState->ReceiveStatus)
        {
            u32TryCount = 0U;
            while ((u32Result == 0U) && (u32TryCount < UART_TIMEOUT_VALUE))
            {
                u32Result = FCUART_UART_HWA_GetStatus(pUartHwPtr, FCUART_STAT_RDRFF_MASK);
                u32TryCount++;
            }
        }

        FCUART_UART_HWA_SetRxTransfer(pUartHwPtr, FALSE);
        (void)FCUART_UART_HWA_GetData(pUartHwPtr);

        /* Update the busy flag */
        UartState->IsRxBusy = FALSE;
    }
}

#endif

/* PRQA S 3387 ++ #Misra-C:2012 Rule-13.3 A full expression containing an increment (++)
 * or decrement (--) operator should have no other potential side effects other than
 * that caused by the increment or decrement operator
 * REASON: A pointer ++ should be performed here unavoidably.
 */
/**
 * @brief        Write data to the buffer register
 * @details
 *
 * @param[in] HwUnit    Uart HW.
 * @return  void
 */
UART_TEXT_SECTION static void Uart_LLD_PutData(const uint8 HwUnit)
{
    Uart_StateStructureType   *UartState;
    const Uart_UserConfigType *UartUserCfg;
    FCUART_Type               *pUartHwPtr;
    uint16                     Data16b;
    uint8                      Data8b;
    uint8                      u8Bit_8;
    uint8                      u8Bit_9;

    pUartHwPtr  = s_apUartBase[HwUnit];
    UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    if ((UART_7_BITS_PER_CHAR == UartUserCfg->BitCountPerChar) ||
        (UART_8_BITS_PER_CHAR == UartUserCfg->BitCountPerChar))
    {
        Data8b = *(UartState->TxBuff);
        /* Update the state structure */
        ++UartState->TxBuff;
        --UartState->TxSize;
        /* Transmit the data */
        FCUART_UART_HWA_SetData(pUartHwPtr, Data8b);
    }
    else
    {
        Data16b = (uint16)(*UartState->TxBuff);
        /* Update the state structure */
        if (1U == UartState->TxSize)
        {
            ++UartState->TxBuff;
            --UartState->TxSize;
        }
        else
        {
            ++UartState->TxBuff;
            Data16b |= (uint16)(((uint16)(*UartState->TxBuff)) << 8U);

            ++UartState->TxBuff;
            UartState->TxSize -= 2U;
        }

        /* Transmit the data */
        if (UART_9_BITS_PER_CHAR == UartUserCfg->BitCountPerChar)
        {
            u8Bit_8 = (uint8)((Data16b >> 8U) & 0x1U);
            /* Set bit8 */
            FCUART_UART_HWA_SetR9T8(pUartHwPtr, u8Bit_8);
            /* Set 0 ~ 7 bits */
            FCUART_UART_HWA_SetData(pUartHwPtr, Data16b);
        }
        else
        {
            u8Bit_8 = (uint8)((Data16b >> 8U) & 0x1U);
            u8Bit_9 = (uint8)((Data16b >> 9U) & 0x1U);

            /* Set bit8 */
            FCUART_UART_HWA_SetR9T8(pUartHwPtr, u8Bit_8);
            /* Set bit9 */
            FCUART_UART_HWA_SetR8T9(pUartHwPtr, u8Bit_9);
            /* Set 0 ~ 7 bits */
            FCUART_UART_HWA_SetData(pUartHwPtr, Data16b);
        }
    }
}

/**
 * @brief        Read data from the buffer register
 * @details
 *
 * @param[in] HwUnit    Uart HW.
 * @return  void
 */
UART_TEXT_SECTION static void Uart_LLD_GetData(const uint8 HwUnit)
{
    Uart_StateStructureType   *UartState;
    const Uart_UserConfigType *UartUserCfg;
    const FCUART_Type         *pUartHwPtr;
    uint8                      u8Bit_8;
    uint8                      u8Bit_9;
    uint8                      u8Temp;
    uint16                     Data16b;

    pUartHwPtr  = (const FCUART_Type *)s_apUartBase[HwUnit];
    UartState   = (Uart_StateStructureType *)s_apUartStateArray[HwUnit];
    UartUserCfg = Uart_UserConfig[HwUnit];

    if ((UART_7_BITS_PER_CHAR == UartUserCfg->BitCountPerChar) ||
        (UART_8_BITS_PER_CHAR == UartUserCfg->BitCountPerChar))
    {
        /* Receive the data */
        *(UartState->RxBuff) = FCUART_UART_HWA_GetData(pUartHwPtr);
        if (UART_7_BITS_PER_CHAR == UartUserCfg->BitCountPerChar)
        {
            *(UartState->RxBuff) &= 0x7FU;
        }
        /* Update the state structure */
        ++UartState->RxBuff;
        --UartState->RxSize;
    }
    else
    {
        if (UART_9_BITS_PER_CHAR == UartUserCfg->BitCountPerChar)
        {
            /* Get bit8 */
            u8Bit_8 = FCUART_UART_HWA_GetR8T9(pUartHwPtr);
            /* Get 0 ~ 7 bits */
            u8Temp = FCUART_UART_HWA_GetData(pUartHwPtr);
            /* Get 0 ~ 8 bits */
            Data16b = (uint16)(((uint16)u8Bit_8 << 8U) | (uint16)u8Temp);
        }
        else
        {
            /* Get bit8 */
            u8Bit_8 = FCUART_UART_HWA_GetR8T9(pUartHwPtr);
            /* Get bit9 */
            u8Bit_9 = FCUART_UART_HWA_GetR9T8(pUartHwPtr);
            /* Get 0 ~ 7 bits */
            u8Temp = FCUART_UART_HWA_GetData(pUartHwPtr);
            /* Get 0 ~ 9 bits */
            Data16b = (uint16)(((uint16)u8Bit_8 << 8U) | ((uint16)u8Bit_9 << 9U) | (uint16)u8Temp);
        }
        /* Get the data and update state structure */
        if (1U == UartState->RxSize)
        {
            *(UartState->RxBuff) = (uint8)Data16b;
            ++UartState->RxBuff;
            --UartState->RxSize;
        }
        else
        {
            /* Write the least significant bits to the receive buffer */
            *(UartState->RxBuff) = (uint8)(Data16b & 0xFFU);
            ++UartState->RxBuff;
            /* Write the ninth bit to the subsequent byte in the rx buffer */
            *UartState->RxBuff = (uint8)(Data16b >> 8U);
            ++UartState->RxBuff;
            UartState->RxSize -= 2U;
        }
    }
}

/**
 * @brief        Read data from the buffer register
 * @details
 *
 * @param[in] HwUnit    Uart HW.
 * @return  void
 */
UART_TEXT_SECTION static void Uart_LLD_GetData_Async(const uint8 HwUnit)
{

    const Uart_UserConfigType *UartUserCfg;
    const FCUART_Type         *pUartHwPtr;
    uint8                      u8Bit_8;
    uint8                      u8Bit_9;
    uint8                      u8Temp;
    uint16                     Data16b;
    uint16                    *pAsyncReadPosition;
    uint8                     *pToUserBuffer;
    uint16                     pInternalBufferSize;

    pUartHwPtr          = (const FCUART_Type *)s_apUartBase[HwUnit];
    UartUserCfg         = Uart_UserConfig[HwUnit];
    pAsyncReadPosition  = UartUserCfg->AsyncRead_Position;
    pInternalBufferSize = UartUserCfg->InternalBufferSize;

    pToUserBuffer = UartUserCfg->TOUserBuffer;

    if ((UART_7_BITS_PER_CHAR == UartUserCfg->BitCountPerChar) ||
        (UART_8_BITS_PER_CHAR == UartUserCfg->BitCountPerChar))
    {
        pToUserBuffer[pInternalBufferSize - (*pAsyncReadPosition)] = FCUART_UART_HWA_GetData(
            pUartHwPtr);
        if (UART_7_BITS_PER_CHAR == UartUserCfg->BitCountPerChar)
        {
            pToUserBuffer[pInternalBufferSize - (*pAsyncReadPosition)] &= 0x7FU;
        }
        (*pAsyncReadPosition)--;
    }
    else
    {
        if (UART_9_BITS_PER_CHAR == UartUserCfg->BitCountPerChar)
        {
            /* Get bit8 */
            u8Bit_8 = FCUART_UART_HWA_GetR8T9(pUartHwPtr);
            /* Get 0 ~ 7 bits */
            u8Temp = FCUART_UART_HWA_GetData(pUartHwPtr);
            /* Get 0 ~ 8 bits */
            Data16b = (uint16)(((uint16)u8Bit_8 << 8U) | (uint16)u8Temp);
        }
        else
        {
            /* Get bit8 */
            u8Bit_8 = FCUART_UART_HWA_GetR8T9(pUartHwPtr);
            /* Get bit9 */
            u8Bit_9 = FCUART_UART_HWA_GetR9T8(pUartHwPtr);
            /* Get 0 ~ 7 bits */
            u8Temp = FCUART_UART_HWA_GetData(pUartHwPtr);
            /* Get 0 ~ 9 bits */
            Data16b = (uint16)(((uint16)u8Bit_8 << 8U) | ((uint16)u8Bit_9 << 9U) | (uint16)u8Temp);
        }
        if (((*pAsyncReadPosition) - 1) > 32)
        {
            pToUserBuffer[pInternalBufferSize - (*pAsyncReadPosition)] = (uint8)(Data16b & 0xFFU);
            (*pAsyncReadPosition)--;
            pToUserBuffer[pInternalBufferSize - (*pAsyncReadPosition)] = (uint8)(Data16b >> 8U);
            (*pAsyncReadPosition)--;
        }
    }
}

/* PRQA S 3387 -- */
#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"

#ifdef __cplusplus
}

/** @} */

#endif
