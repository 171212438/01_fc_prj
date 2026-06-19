/* PRQA S 0292  EOF
 * REASON: using @ in comment
 */
/**
*   @file    CDD_I2c_Hw.c
*   @version 1.5.1

*   @brief   AUTOSAR CDD I2c- Complex driver I2c SAR ip
*   @details I2c hardware driver API
*
*   @addtogroup I2c
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : I2c
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
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       14/07/2023    qxw0100       N/A          I2c Initial Version
*   0.2.0       27/09/2023    qxw0100       N/A          Add multicore support
*   0.3.0       09/10/2023    qxw0100       N/A          Fix notification channel bug
*   0.4.0       17/11/2023    qxw0100       N/A          Fix error status bug
*   0.5.0       17/01/2024    qxw0100       N/A          Fix status bug
*   0.6.0       18/01/2024    qxw0100       N/A          Add channel fault clear function
                                                         Add NACK signal for user choice
*   1.2.1       23/06/2025    qxw0120       N/A          Update subaddress mode
*   1.4.0       10/09/2025    qxw0120       N/A          Optimize code， increase the use of FIFO
==================================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Mcal.h"
#include "CDD_I2c_Hw.h"
#include "CDD_I2c.h"
#include "SchM_I2c.h"

#if (STD_ON == I2C_DMA_USED)
#include "CDD_Dma.h"
#endif /* STD_ON == I2C_DMA_USED */

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#define I2C_START_SEC_VAR_INIT_8
#include "I2c_MemMap.h"

/**
 * @brief Used to log status for channels.
 *
 */
I2C_DATA_SECTION static I2c_ChannelStatusType FCIIC_u8aChannelStatus[I2C_MAX_MODULES] = {
    I2C_CH_CLOSED,
    I2C_CH_CLOSED
};

/**
 * @brief Used to indicates IIC mode.
 *
 */
I2C_DATA_SECTION static uint8 FCIIC_u8aMasterFlag[I2C_MAX_MODULES] = { I2C_MODE_UNINIT,
                                                                       I2C_MODE_UNINIT };

#define I2C_STOP_SEC_VAR_INIT_8
#include "I2c_MemMap.h"

#define I2C_START_SEC_VAR_INIT_16
#include "I2c_MemMap.h"

#define I2C_STOP_SEC_VAR_INIT_16
#include "I2c_MemMap.h"

#define I2C_START_SEC_VAR_INIT_32
#include "I2c_MemMap.h"

/**
 * @brief as a Slave,the register address in slave,which the master will access.
 *
 */
I2C_DATA_SECTION static uint32 FCIIC_u32ChSubAddress[I2C_MAX_MODULES] = { 0x0U };

/**
 * @brief Used in the timeout mechanism to handle counting.
 *
 */
I2C_DATA_SECTION static __IO uint32 FCIIC_TickCntForTimeout[I2C_MAX_MODULES] = { 0xffffffffU };

#define I2C_STOP_SEC_VAR_INIT_32
#include "I2c_MemMap.h"

#define I2C_START_SEC_VAR_INIT_BOOLEAN
#include "I2c_MemMap.h"

#if (STD_ON == I2C_DMA_USED)
/**
 * @brief as a Slave,Record whether the slave  enter the Complete function during a transmit
 * communication.
 *
 */
I2C_DATA_SECTION static boolean FCIIC_bSlaveDmaTransmitIsComplete[I2C_MAX_MODULES] = { FALSE };

/**
 * @brief as a Slave,Record whether the slave  enter the Complete function during a receive
 * communication.
 *
 */
I2C_DATA_SECTION static boolean FCIIC_bSlaveDmaReceiveIsComplete[I2C_MAX_MODULES] = { FALSE };
#endif

#define I2C_STOP_SEC_VAR_INIT_BOOLEAN
#include "I2c_MemMap.h"

#define I2C_START_SEC_VAR_NO_INIT_8
#include "I2c_MemMap.h"

/**
 * @brief Used to save buffer point for Slave or master Asynchronous mode.
 *
 */
I2C_DATA_SECTION static uint8 *FCIIC_p8aChBuffer[I2C_MAX_MODULES];

/**
 * @brief Used to save current channel number.
 *
 */
I2C_DATA_SECTION static uint8 FCIIC_u8aChCurChannel[I2C_MAX_MODULES];

/**
 * @brief  Used to save current offset for receiving the register addrss of length  for Slave mode.
 *
 */
I2C_DATA_SECTION static uint8 FCIIC_u8ChSubAddressCurIdx[I2C_MAX_MODULES];

/**
 * @brief as a Slave,the register addrss of length in byte.
 *
 */
I2C_DATA_SECTION static uint8 FCIIC_u8ChSubAddressSize[I2C_MAX_MODULES];

#define I2C_STOP_SEC_VAR_NO_INIT_8
#include "I2c_MemMap.h"

#define I2C_START_SEC_VAR_NO_INIT_16
#include "I2c_MemMap.h"

/**
 * @brief Used to save length for Slave or master Asynchronous mode.
 *
 */
I2C_DATA_SECTION static uint16 FCIIC_u16aChTotalLen[I2C_MAX_MODULES];

/**
 * @brief Used to save current buffer size.
 *
 */
I2C_DATA_SECTION static uint16 FCIIC_u16ChBufferSize[I2C_MAX_MODULES];

/**
 * @brief Used to save current offset in buffer for Slave or master Asynchronous mode.
 *
 */
I2C_DATA_SECTION static uint16 FCIIC_u16aChCurIdx[I2C_MAX_MODULES];

#define I2C_STOP_SEC_VAR_NO_INIT_16
#include "I2c_MemMap.h"

#define I2C_START_SEC_VAR_NO_INIT_BOOLEAN
#include "I2c_MemMap.h"
/**
 * @brief Used to indicates whether the data was actually sent.
 *
 */
I2C_DATA_SECTION static boolean FCIIC_baChReallySend[I2C_MAX_MODULES];

#define I2C_STOP_SEC_VAR_NO_INIT_BOOLEAN
#include "I2c_MemMap.h"

#if (STD_ON == I2C_DMA_USED)

#define I2C_START_SEC_VAR_NO_INIT_16_NO_CACHEABLE
#include "I2c_MemMap.h"

#define I2C_STOP_SEC_VAR_NO_INIT_16_NO_CACHEABLE
#include "I2c_MemMap.h"

#define I2C_START_SEC_VAR_NO_INIT_8
#include "I2c_MemMap.h"

/**
 * @brief Used for save DMA transmit instances.
 *
 */
I2C_DATA_SECTION static uint8 FCIIC_DmaTxInstance[I2C_MAX_MODULES];

/**
 * @brief Used for save DMA transmit channels.
 *
 */
I2C_DATA_SECTION static uint8 FCIIC_DmaTxChannel[I2C_MAX_MODULES];

/**
 * @brief Used for save DMA receive instances.
 *
 */
I2C_DATA_SECTION static uint8 FCIIC_DmaRxInstance[I2C_MAX_MODULES];

/**
 * @brief Used for save DMA receive channels.
 *
 */
I2C_DATA_SECTION static uint8 FCIIC_DmaRxChannel[I2C_MAX_MODULES];

#define I2C_STOP_SEC_VAR_NO_INIT_8
#include "I2c_MemMap.h"

#endif /* STD_ON == I2C_DMA_USED */

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define I2C_START_SEC_CONST_UNSPECIFIED
#include "I2c_MemMap.h"

/* PRQA S 0306 ++
 * REASON: Register base addr
 */
/**
 * @brief Base address of IIC hardware units.
 *
 */
I2C_DATA_SECTION static FCIIC_Type *const FCIIC_saInstanceTable[2] = { FCIIC0, FCIIC1 };
/* PRQA S 0306 --
 */

#define I2C_STOP_SEC_CONST_UNSPECIFIED
#include "I2c_MemMap.h"

/*==================================================================================================
*                                   Global FUNCTION PROTOTYPES
==================================================================================================*/
#define I2C_START_SEC_CODE
#include "I2c_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
I2C_TEXT_SECTION static void           FCIIC_MasterClearStatusFlags(uint8 u8I2cIdx);
I2C_TEXT_SECTION static void           FCIIC_SlaveClearStatusFlags(uint8 u8I2cIdx);
I2C_TEXT_SECTION static Std_ReturnType FCIIC_MasterWaitComplete(uint8 u8I2cIdx, uint32 eStatus);
I2C_TEXT_SECTION static void  FCIIC_MasterStart(uint8 u8I2cIdx, const I2c_RequestType *pRequest);
I2C_TEXT_SECTION static uint8 FCIIC_MasterTransmitData(uint8        u8I2cIdx,
                                                       uint16       u16DataLength,
                                                       const uint8 *pSourceData);
I2C_TEXT_SECTION static uint8 FCIIC_MasterReceiveData(uint8  u8I2cIdx,
                                                      uint16 u16DataLength,
                                                      uint8 *pSourceData);
I2C_TEXT_SECTION static void  FCIIC_MasterInterruptProcessing(uint8 u8I2cIdx, uint32 u32IsrStatus);
I2C_TEXT_SECTION static void  FCIIC_MasterErrorHandler(uint8 u8I2cIdx, uint32 u32IsrStatus);
I2C_TEXT_SECTION static void  FCIIC_MasterInterruptProcessStop(uint8 u8I2cIdx, uint32 u32IsrStatus);
I2C_TEXT_SECTION static void  FCIIC_MasterInterruptProcessTransmit(uint8  u8I2cIdx,
                                                                   uint32 u32IsrStatus);
I2C_TEXT_SECTION static void FCIIC_MasterInterruptProcessReceive(uint8 u8I2cIdx, uint32 u32IsrStatus);
I2C_TEXT_SECTION static void FCIIC_SlaveAck(uint8 u8I2cIdx, boolean bAck);
I2C_TEXT_SECTION static void FCIIC_SlaveErrorHandler(uint8 u8I2cIdx, uint32 u32IsrStatus);
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessing(uint8  u8I2cIdx,
                                                            uint32 u32IsrStatus,
                                                            uint32 u32SSRStatus);
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessAddressMatch(uint8  u8I2cIdx,
                                                                     uint32 u32SSRStatus);
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessReceive(uint8 u8I2cIdx);
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessTransmit(uint8 u8I2cIdx);
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessStop(uint8 u8I2cIdx);

#if (STD_ON == I2C_DMA_USED)
I2C_TEXT_SECTION static void FCIIC_DmaInit(uint8 u8I2cIdx,
                                           uint8 u8TxDmaInstance,
                                           uint8 u8TxDmaChannel,
                                           uint8 u8RxDmaInstance,
                                           uint8 u8RxDmaChannel);
I2C_TEXT_SECTION static void FCIIC_DmaPrepare(uint8            u8DmaInstance,
                                              uint8            u8DmaChannel,
                                              boolean          bMem2Peripheral,
                                              uint32           u32SrcAddr,
                                              uint32           u32DstAddr,
                                              Dma_TranSizeType u32DataSize,
                                              uint32           u32InnerBytes,
                                              uint16           u16OuterCounter,
                                              uint8            u8MasterFlag);
I2C_TEXT_SECTION static void FCIIC_MasterDmaTransmit(uint8 u8I2cIdx);
I2C_TEXT_SECTION static void FCIIC_MasterDmaReceive(uint8 u8I2cIdx);
I2C_TEXT_SECTION static void FCIIC_MasterDmaStageNotification(uint8 u8I2cIdx);
I2C_TEXT_SECTION static void FCIIC_SlaveDMAStageNotification(uint8 u8I2cIdx);
#endif /* STD_ON == I2C_DMA_USED */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief        Clear the I2C master status flag state.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterClearStatusFlags(uint8 u8I2cIdx)
{
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];

    FCIIC_Master_HwA_ClearStatus(pFciic,
                                 FCIIC_MSR_DMF_MASK | FCIIC_MSR_PLTF_MASK | FCIIC_MSR_FEF_MASK |
                                     FCIIC_MSR_ALF_MASK | FCIIC_MSR_NDF_MASK | FCIIC_MSR_SDF_MASK |
                                     FCIIC_MSR_EPF_MASK);
}

/**
 * @brief        Clear the I2C slave status flag state.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveClearStatusFlags(uint8 u8I2cIdx)
{
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];

    FCIIC_Slave_HwA_ClearStatus(pFciic,
                                FCIIC_SSR_RSF_MASK | FCIIC_SSR_SDF_MASK | FCIIC_SSR_BEF_MASK |
                                    FCIIC_SSR_TREF_MASK);
}

/**
 * @brief        Wait operation complete for master synchronous Mode.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    eStatus         IIC Master operation status FCIIC_MSR_RDF_STATUS/FCIIC_MSR_TDF_STATUS.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            IIC Master operation success.
 * @retval       E_NOT_OK        IIC Master operation timeout.
 */
I2C_TEXT_SECTION static Std_ReturnType FCIIC_MasterWaitComplete(uint8 u8I2cIdx, uint32 eStatus)
{
    Std_ReturnType          eRetType = E_OK;
    const FCIIC_Type *const pFciic   = FCIIC_saInstanceTable[u8I2cIdx];
    uint32                  u32Status;
    uint32                  u32Timeout;
    uint32                  u32Loop = 0U;

    /* check transmit completed, or timeout return */
    do
    {
        /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
         * Reason: The use of this inline assembly is documented.
         */
        MCAL_NOP();
        /* PRQA S 1006 -- */
        u32Loop++;
        /* 128 nop, timeout increased by 1 */
        u32Timeout = u32Loop >> 7;

        u32Status = FCIIC_Master_HwA_GetStatus(pFciic, eStatus);
    }
    while (((uint8)0 == u32Status) && ((uint32)I2C_TIMEOUT_LOOPS > u32Timeout));

    if (u32Status == (uint8)0)
    {
        eRetType = E_NOT_OK;
    }

    return eRetType;
}

/**
 * @brief        IIC Master transmit data.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u16DataLength    The remaining length of data that needs to be transmit.
 * @param[in]    pSourceData     The data buffer that need transmit.
 *
 * @return       uint8           The number of bytes transmitted.
 */
I2C_TEXT_SECTION static uint8 FCIIC_MasterTransmitData(uint8        u8I2cIdx,
                                                       uint16       u16DataLength,
                                                       const uint8 *pSourceData)
{
    FCIIC_Type *const pFciic      = FCIIC_saInstanceTable[u8I2cIdx];
    uint8             u8DataCount = 0;
    uint8             u8DataIndex;
    u8DataCount = (uint8)(8u - FCIIC_HwA_GetTxCount(pFciic));
    u8DataCount = (uint8)((u16DataLength < u8DataCount) ? u16DataLength : u8DataCount);
    for (u8DataIndex = 0; u8DataIndex < u8DataCount; u8DataIndex++)
    {
        FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_TRANSMIT, pSourceData[u8DataIndex]);
    }
    return u8DataCount;
}

/**
 * @brief        IIC Master receive data.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u16DataLength    The remaining length of data that needs to be received.
 * @param[in]    pSourceData     The data buffer that need received.
 *
 * @return       uint8           The number of bytes received.
 */
I2C_TEXT_SECTION static uint8 FCIIC_MasterReceiveData(uint8  u8I2cIdx,
                                                      uint16 u16DataLength,
                                                      uint8 *pSourceData)
{
    const FCIIC_Type *const pFciic      = FCIIC_saInstanceTable[u8I2cIdx];
    uint8                   u8DataCount = 0;
    uint8                   u8DataIndex;
    u8DataCount = (uint8)(FCIIC_HwA_GetRxCount(pFciic));
    u8DataCount = (uint8)((u16DataLength < u8DataCount) ? u16DataLength : u8DataCount);
    for (u8DataIndex = 0; u8DataIndex < u8DataCount; u8DataIndex++)
    {
        pSourceData[u8DataIndex] = FCIIC_Master_HwA_Receive(pFciic);
    }
    return u8DataCount;
}

/**
 * @brief        Error handler for IIC Master.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the MSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterErrorHandler(uint8 u8I2cIdx, uint32 u32IsrStatus)
{
    uint32            u32ErrorMask = u32IsrStatus & FCIIC_MSR_ERROR_FLAGS_MASK;
    FCIIC_Type *const pFciic       = FCIIC_saInstanceTable[u8I2cIdx];

    if ((FCIIC_HwA_GetMCFGR1(pFciic) & FCIIC_MCFGR1_IGNACK_MASK) != (uint32)0)
    {
        u32ErrorMask &= ~(uint32)(FCIIC_MSR_NDF_MASK);
    }

    if (0x0U != u32ErrorMask)
    {
        SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_12();
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_12();

#ifdef I2C_ERROR_NOTIFICATION
        if (0U != (u32ErrorMask & FCIIC_MSR_NDF_MASK))
        {
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_NACK_RECEIVED);
        }
#endif

#ifdef I2C_ERROR_NOTIFICATION
        /* If the error notification is used signal which error is present */
        /* Check for pin low timeout */
        if (0U != (u32ErrorMask & FCIIC_MSR_PLTF_MASK))
        {
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_TIMEOUT_FAILURE);
        }
#endif

#ifdef I2C_ERROR_NOTIFICATION
        /* Check for FIFO error */
        if (0U != (u32ErrorMask & FCIIC_MSR_FEF_MASK))
        {
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_FIFO_HANDLING);
        }
#endif

#ifdef I2C_ERROR_NOTIFICATION
        /* Check for Arbitration Lost Flag */
        if (0U != (u32ErrorMask & FCIIC_MSR_ALF_MASK))
        {
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_ARBITRATION_FAILURE);
        }
#endif

        FCIIC_HwA_ClearMasterFIFO(pFciic);
    }
}

/**
 * @brief        Function to process IIC Master SDF interrupt.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the MSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterInterruptProcessStop(uint8 u8I2cIdx, uint32 u32IsrStatus)
{
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    uint8             u8CurChn;
    uint16            u16CurIdx;
    uint16            u16TotalLen;
    /* Disable All interrupts */
    FCIIC_Master_HwA_DisableInterrupt(pFciic, FCIIC_MIER_MASK);

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_13();
    u16CurIdx   = FCIIC_u16aChCurIdx[u8I2cIdx];
    u8CurChn    = FCIIC_u8aChCurChannel[u8I2cIdx];
    u16TotalLen = FCIIC_u16aChTotalLen[u8I2cIdx];
    if ((I2C_CH_SENDING == FCIIC_u8aChannelStatus[u8I2cIdx]) && (u16CurIdx == u16TotalLen))
    {
        /* Update channel status [SWS_CDD_I2C_00033] */
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_13();

#ifdef I2C_MASTER_TRANSMIT_COMPLETE_NOTIFICATION
        I2C_MASTER_TRANSMIT_COMPLETE_NOTIFICATION(u8CurChn, u16CurIdx);
#endif
    }
    else if (I2C_CH_RECEIVING == FCIIC_u8aChannelStatus[u8I2cIdx])
    {
        u16CurIdx = (uint16)(FCIIC_MasterReceiveData(u8I2cIdx,
                                                     (uint16)(u16TotalLen - u16CurIdx),
                                                     &FCIIC_p8aChBuffer[u8I2cIdx][u16CurIdx]) +
                             u16CurIdx);

        if (u16CurIdx == u16TotalLen)
        {
            /* Update channel status [SWS_CDD_I2C_00033] */
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_13();
#ifdef I2C_MASTER_RECEIVE_COMPLETE_NOTIFICATION
            I2C_MASTER_RECEIVE_COMPLETE_NOTIFICATION(u8CurChn, u16CurIdx);
#endif
        }
        else
        {
            /* Update channel status */
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_13();
#ifdef I2C_ERROR_NOTIFICATION
            I2C_ERROR_NOTIFICATION(u8CurChn, I2C_E_STATEMACHINE_ERROR);
#endif
        }
    }
    else
    {
        /* Update channel status */
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_13();
#ifdef I2C_ERROR_NOTIFICATION
        I2C_ERROR_NOTIFICATION(u8CurChn, I2C_E_STATEMACHINE_ERROR);
#endif
    }

    (void)u32IsrStatus;
}

/**
 * @brief        Function to process IIC Master TDF interrupt.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the MSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterInterruptProcessTransmit(uint8 u8I2cIdx, uint32 u32IsrStatus)
{
    uint16            u16CurIdx;
    uint16            u16TotalLen;
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_14();
    if (I2C_CH_SENDING == FCIIC_u8aChannelStatus[u8I2cIdx])
    {
        u16CurIdx   = FCIIC_u16aChCurIdx[u8I2cIdx];
        u16TotalLen = FCIIC_u16aChTotalLen[u8I2cIdx];
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_14();

        if (u16CurIdx == u16TotalLen)
        {
            FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_STOP, 0x0u);
            FCIIC_Master_HwA_DisableInterrupt(pFciic, FCIIC_MIER_TDIE_MASK);
        }
        else
        {
            SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_14();
            FCIIC_u16aChCurIdx[u8I2cIdx] =
                (uint16)(FCIIC_MasterTransmitData(u8I2cIdx,
                                                  (uint16)(u16TotalLen - u16CurIdx),
                                                  &FCIIC_p8aChBuffer[u8I2cIdx][u16CurIdx]) +
                         FCIIC_u16aChCurIdx[u8I2cIdx]);
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_14();
        }
    }
    else
    {
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_14();
/* Nothing for misra */
#ifdef I2C_ERROR_NOTIFICATION
        I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_STATEMACHINE_ERROR);
#endif
    }
    (void)u32IsrStatus;
}

/**
 * @brief        Function to process IIC Master RDF interrupt.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the MSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterInterruptProcessReceive(uint8 u8I2cIdx, uint32 u32IsrStatus)
{
    uint16 u16CurIdx;
    uint16 u16TotalLen;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_15();
    if (I2C_CH_RECEIVING == FCIIC_u8aChannelStatus[u8I2cIdx])
    {
        u16CurIdx   = FCIIC_u16aChCurIdx[u8I2cIdx];
        u16TotalLen = FCIIC_u16aChTotalLen[u8I2cIdx];
        FCIIC_u16aChCurIdx[u8I2cIdx] =
            (uint16)(FCIIC_MasterReceiveData(u8I2cIdx,
                                             (uint16)(u16TotalLen - u16CurIdx),
                                             &FCIIC_p8aChBuffer[u8I2cIdx][u16CurIdx]) +
                     FCIIC_u16aChCurIdx[u8I2cIdx]);
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_15();
    }
    else
    {
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_15();
#ifdef I2C_ERROR_NOTIFICATION
        I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_STATEMACHINE_ERROR);
#endif
    }
    (void)u32IsrStatus;
}

/**
 * @brief        Interrupt handler for IIC Master.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the MSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterInterruptProcessing(uint8 u8I2cIdx, uint32 u32IsrStatus)
{
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    if (0U != (u32IsrStatus & FCIIC_MSR_ERROR_FLAGS_MASK))
    {
        FCIIC_MasterErrorHandler(u8I2cIdx, u32IsrStatus);
    }
    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_16();
    if (I2C_CH_ERROR_PRESENT != FCIIC_u8aChannelStatus[u8I2cIdx])
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_16();
        /* Check for stop detected */
        if (0U != (u32IsrStatus & FCIIC_MSR_SDF_MASK))
        {
            FCIIC_MasterInterruptProcessStop(u8I2cIdx, u32IsrStatus);
        }
        /* Check for transmit ready */
        else if (0U != (u32IsrStatus & FCIIC_MSR_TDF_MASK))
        {
            FCIIC_MasterInterruptProcessTransmit(u8I2cIdx, u32IsrStatus);
        }
        /* Check for data received spurious interrupt */
        else if (0U != (u32IsrStatus & FCIIC_MSR_RDF_MASK))
        {
            FCIIC_MasterInterruptProcessReceive(u8I2cIdx, u32IsrStatus);
        }
        else
        {
            /* Nothing for misra */
        }
    }
    else
    {
#if (STD_ON == I2C_DMA_USED)

        if (0U != FCIIC_HwA_GetDmaStatus(pFciic, FCIIC_MDER_TDDE_MASK))
        {
            Dma_DisableHwRequest((Dma_InstanceType)FCIIC_DmaTxInstance[u8I2cIdx],
                                 FCIIC_DmaTxChannel[u8I2cIdx]);
        }
        if (0U != FCIIC_HwA_GetDmaStatus(pFciic, FCIIC_MDER_RDDE_MASK))
        {
            Dma_DisableHwRequest((Dma_InstanceType)FCIIC_DmaRxInstance[u8I2cIdx],
                                 FCIIC_DmaRxChannel[u8I2cIdx]);
        }
#endif
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_16();

        FCIIC_HwA_ClearMasterFIFO(pFciic);

        FCIIC_Master_HwA_DisableInterrupt(pFciic, FCIIC_MIER_MASK);
    }
}

/**
 * @brief        IIC Slave send ACK/NACK signal.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    bAck            Send ACK/NACK flag.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveAck(uint8 u8I2cIdx, boolean bAck)
{
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    if ((boolean)TRUE == bAck)
    {
        FCIIC_Slave_HwA_NACK(pFciic, FCIIC_STAR_TXNACK(0U));
    }
    else
    {
        FCIIC_Slave_HwA_NACK(pFciic, FCIIC_STAR_TXNACK(1U));
    }
}

/**
 * @brief        Error handler for IIC Slave.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the SSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveErrorHandler(uint8 u8I2cIdx, uint32 u32IsrStatus)
{
    uint32 u32ErrorMask = u32IsrStatus & (FCIIC_SSR_TREF_MASK | FCIIC_SSR_BEF_MASK);

    if (0x0U != u32ErrorMask)
    {
        SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_12();
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_12();

#ifdef I2C_ERROR_NOTIFICATION
        /* Check for Transmit or Receive Error */
        if (0U != (u32ErrorMask & FCIIC_SSR_TREF_MASK))
        {
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_SLAVE_TR_FAILURE);
        }
#endif

#ifdef I2C_ERROR_NOTIFICATION
        /* Check for Bit Error */
        if (0U != (u32ErrorMask & FCIIC_SSR_BEF_MASK))
        {
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_SLAVE_BE_FAILURE);
        }
#endif
    }
}

/**
 * @brief        Function to process IIC Slave AM0F interrupt.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32SSRStatus    The status of the SSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessAddressMatch(uint8  u8I2cIdx,
                                                                     uint32 u32SSRStatus)
{
    FCIIC_Type *const     pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    uint32                u32Raddr;
    I2c_ChannelStatusType u8ChannelStatus;
#if (STD_ON == I2C_DMA_USED)
    uint32 u32I2cSlaveDmaStatus = FCIIC_HwA_GetSDER(pFciic);
#endif

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_17();
    FCIIC_baChReallySend[u8I2cIdx] = (boolean)FALSE;
    u8ChannelStatus                = FCIIC_u8aChannelStatus[u8I2cIdx];

    u32Raddr = FCIIC_HwA_GetSASR(pFciic);

    if ((0x0U < FCIIC_u8ChSubAddressSize[u8I2cIdx]))
    {
        /*firstly match device address when the master want to read and */
        if ((I2C_CH_LISTENING == u8ChannelStatus) &&
            (FCIIC_u8ChSubAddressCurIdx[u8I2cIdx] != FCIIC_u8ChSubAddressSize[u8I2cIdx]) &&
            (0 == (u32SSRStatus & FCIIC_SSR_RSF_MASK)))
        {
            if ((I2C_DIR_WRITE == (u32Raddr & I2C_DIR_MASK)))
            {
                FCIIC_Slave_HwA_EnableInterrupt(pFciic, FCIIC_SIER_RDIE_MASK);
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_LISTENING_READ;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();
                FCIIC_SlaveAck(u8I2cIdx, (boolean)TRUE);
#ifdef I2C_SLAVE_ADDR_MATCH_NOTIFICATION
                I2C_SLAVE_ADDR_MATCH_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_RECEIVE_DATA);
#endif
            }
            else
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_SENDING;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();
                FCIIC_SlaveAck(u8I2cIdx, (boolean)TRUE);
#ifdef I2C_SLAVE_SUBADDRESS_WRITE_NOTIFICATION
                I2C_SLAVE_SUBADDRESS_WRITE_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                                        &(FCIIC_p8aChBuffer[u8I2cIdx]),
                                                        &(FCIIC_u16ChBufferSize[u8I2cIdx]),
                                                        FCIIC_u32ChSubAddress[u8I2cIdx]);
#endif

#ifdef I2C_SLAVE_ADDR_MATCH_NOTIFICATION
                I2C_SLAVE_ADDR_MATCH_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_SEND_DATA);
#endif
                SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_17();
                uint16 u16CurIdx = FCIIC_u16aChCurIdx[u8I2cIdx];
                FCIIC_Slave_HwA_Transmit(pFciic, FCIIC_p8aChBuffer[u8I2cIdx][u16CurIdx]);
                FCIIC_u16aChCurIdx[u8I2cIdx] = (uint16)(FCIIC_u16aChCurIdx[u8I2cIdx] + 0x1u);
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();
                FCIIC_Slave_HwA_EnableInterrupt(pFciic, FCIIC_SIER_TDIE_MASK);
            }
        }
        /*secondly match adddress when the master read and subAddressSize more than 0*/
        else if ((I2C_CH_LISTENING_READ == u8ChannelStatus) &&
                 (FCIIC_u8ChSubAddressCurIdx[u8I2cIdx] == FCIIC_u8ChSubAddressSize[u8I2cIdx]) &&
                 (0 != (u32SSRStatus & FCIIC_SSR_RSF_MASK)))
        {
            if (I2C_DIR_READ == (u32Raddr & I2C_DIR_MASK))
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_SENDING;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();
                FCIIC_SlaveAck(u8I2cIdx, (boolean)TRUE);
#ifdef I2C_SLAVE_SUBADDRESS_WRITE_NOTIFICATION
                I2C_SLAVE_SUBADDRESS_WRITE_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                                        &(FCIIC_p8aChBuffer[u8I2cIdx]),
                                                        &(FCIIC_u16ChBufferSize[u8I2cIdx]),
                                                        FCIIC_u32ChSubAddress[u8I2cIdx]);
#endif

#ifdef I2C_SLAVE_ADDR_MATCH_NOTIFICATION
                I2C_SLAVE_ADDR_MATCH_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_SEND_DATA);
#endif
                SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_17();
                uint16 u16CurIdx = FCIIC_u16aChCurIdx[u8I2cIdx];
                FCIIC_Slave_HwA_Transmit(pFciic, FCIIC_p8aChBuffer[u8I2cIdx][u16CurIdx]);
                FCIIC_u16aChCurIdx[u8I2cIdx] = (uint16)(FCIIC_u16aChCurIdx[u8I2cIdx] + 0x1u);
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();
                FCIIC_Slave_HwA_EnableInterrupt(pFciic, FCIIC_SIER_TDIE_MASK);
            }
            else
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();
                FCIIC_SlaveAck(u8I2cIdx, (boolean)FALSE);
#ifdef I2C_ERROR_NOTIFICATION
                I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                       I2C_E_DIRECTION_FAILURE | I2C_E_REQUEST_METHOD);
#endif
            }
        }
        else
        {
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();
            FCIIC_SlaveAck(u8I2cIdx, (boolean)FALSE);
#ifdef I2C_ERROR_NOTIFICATION
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_DIRECTION_FAILURE);
#endif
        }
    }
    else
    {
        /* subAddressSize=0 */
        if ((I2C_CH_LISTENING == u8ChannelStatus) || (I2C_CH_IDLE == u8ChannelStatus))
        {
            if ((I2C_DIR_READ == (u32Raddr & I2C_DIR_MASK)))
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_SENDING;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();

#if (STD_ON == I2C_DMA_USED)
                if (0U != (FCIIC_SDER_TDDE_MASK & u32I2cSlaveDmaStatus))
                {
                    Dma_EnableHwRequest((Dma_InstanceType)FCIIC_DmaTxInstance[u8I2cIdx],
                                        FCIIC_DmaTxChannel[u8I2cIdx]);
                }
                else
#endif
                {
                    FCIIC_Slave_HwA_EnableInterrupt(pFciic, FCIIC_SIER_TDIE_MASK);
                }

                FCIIC_SlaveAck(u8I2cIdx, (boolean)TRUE);
#ifdef I2C_SLAVE_ADDR_MATCH_NOTIFICATION
                I2C_SLAVE_ADDR_MATCH_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_SEND_DATA);
#endif
            }
            else
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_RECEIVING;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();

#if (STD_ON == I2C_DMA_USED)
                if (0U != (FCIIC_SDER_RDDE_MASK & u32I2cSlaveDmaStatus))
                {
                    Dma_EnableHwRequest((Dma_InstanceType)FCIIC_DmaRxInstance[u8I2cIdx],
                                        FCIIC_DmaRxChannel[u8I2cIdx]);
                }
                else
#endif
                {
                    FCIIC_Slave_HwA_EnableInterrupt(pFciic, FCIIC_SIER_RDIE_MASK);
                }

                FCIIC_SlaveAck(u8I2cIdx, (boolean)TRUE);
#ifdef I2C_SLAVE_ADDR_MATCH_NOTIFICATION
                I2C_SLAVE_ADDR_MATCH_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_RECEIVE_DATA);
#endif
            }
        }
        else
        {
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_17();
            FCIIC_SlaveAck(u8I2cIdx, (boolean)FALSE);
#ifdef I2C_ERROR_NOTIFICATION
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_DIRECTION_FAILURE);
#endif
        }
    }
}

/**
 * @brief        Function to process IIC Slave RDF interrupt.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessReceive(uint8 u8I2cIdx)
{
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    uint16            u16CurIdx;
    uint8             u8SubAddrTotalLen;
    uint8             u8SubAddrCurIdx;
    uint8             u8ShiftWidth;
    uint8             u8Data;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_18();
    u8SubAddrTotalLen = FCIIC_u8ChSubAddressSize[u8I2cIdx];
    u8SubAddrCurIdx   = FCIIC_u8ChSubAddressCurIdx[u8I2cIdx];
    u16CurIdx         = FCIIC_u16aChCurIdx[u8I2cIdx];
    if (0x0U != FCIIC_u8ChSubAddressSize[u8I2cIdx])
    {
        /*If the subaddress is fully received, change the state machine to I2C_CH_RECEIVING to
         * prepare to send data */
        if ((I2C_CH_LISTENING_READ == FCIIC_u8aChannelStatus[u8I2cIdx]) &&
            (u8SubAddrCurIdx == u8SubAddrTotalLen))
        {
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_RECEIVING;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_18();
#ifdef I2C_SLAVE_SUBADDRESS_READ_NOTIFICATION
            I2C_SLAVE_SUBADDRESS_READ_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                                   &FCIIC_p8aChBuffer[u8I2cIdx],
                                                   &FCIIC_u16ChBufferSize[u8I2cIdx],
                                                   FCIIC_u32ChSubAddress[u8I2cIdx]);
#endif
            SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_18();
        }
        /*receive subAddress data*/
        if ((I2C_CH_LISTENING_READ == FCIIC_u8aChannelStatus[u8I2cIdx]) &&
            (u8SubAddrCurIdx < u8SubAddrTotalLen))
        {
            if (u8SubAddrCurIdx == 0x0U)
            {
                FCIIC_u32ChSubAddress[u8I2cIdx] = 0x0U;
            }
            u8ShiftWidth = (uint8)((u8SubAddrTotalLen - u8SubAddrCurIdx - (uint8)0x1U) << 0x3U);
            u8Data       = FCIIC_Slave_HwA_Receive(pFciic);
            FCIIC_u32ChSubAddress[u8I2cIdx] |= (uint32)(u8Data << u8ShiftWidth);
            FCIIC_u8ChSubAddressCurIdx[u8I2cIdx] = (uint8)(FCIIC_u8ChSubAddressCurIdx[u8I2cIdx] + 1u);
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_18();
            FCIIC_SlaveAck(u8I2cIdx, (boolean)TRUE);
        }
        /*receive data */
        else if ((I2C_CH_RECEIVING == FCIIC_u8aChannelStatus[u8I2cIdx]) &&
                 (u8SubAddrCurIdx == u8SubAddrTotalLen) &&
                 (FCIIC_u16aChCurIdx[u8I2cIdx] < FCIIC_u16ChBufferSize[u8I2cIdx]))
        {
            u16CurIdx                              = FCIIC_u16aChCurIdx[u8I2cIdx];
            FCIIC_p8aChBuffer[u8I2cIdx][u16CurIdx] = FCIIC_Slave_HwA_Receive(pFciic);
            FCIIC_u16aChCurIdx[u8I2cIdx]           = (uint16)(FCIIC_u16aChCurIdx[u8I2cIdx] + 1u);
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_18();
            FCIIC_SlaveAck(u8I2cIdx, (boolean)TRUE);
/* [SWS_CDD_I2C_00111] */
#ifdef I2C_SLAVE_BYTE_RECEIVE_NOTIFICATION
            I2C_SLAVE_BYTE_RECEIVE_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx]);
#endif
        }
        else
        {
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_18();
            (void)FCIIC_Slave_HwA_Receive(pFciic);
            FCIIC_SlaveAck(u8I2cIdx, (boolean)FALSE);
#ifdef I2C_ERROR_NOTIFICATION
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_STATEMACHINE_ERROR);
#endif
        }
    }
    else
    {
        if ((I2C_CH_RECEIVING == FCIIC_u8aChannelStatus[u8I2cIdx]))
        {
            FCIIC_p8aChBuffer[u8I2cIdx][u16CurIdx] = FCIIC_Slave_HwA_Receive(pFciic);
            FCIIC_u16aChCurIdx[u8I2cIdx]           = (uint16)(FCIIC_u16aChCurIdx[u8I2cIdx] + 1u);
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_18();
            FCIIC_SlaveAck(u8I2cIdx, (boolean)TRUE);
/* [SWS_CDD_I2C_00111] */
#ifdef I2C_SLAVE_BYTE_RECEIVE_NOTIFICATION
            I2C_SLAVE_BYTE_RECEIVE_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx]);
#endif
        }
        else
        {
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_18();
            (void)FCIIC_Slave_HwA_Receive(pFciic);
            FCIIC_SlaveAck(u8I2cIdx, (boolean)FALSE);
#ifdef I2C_ERROR_NOTIFICATION
            I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_STATEMACHINE_ERROR);
#endif
        }
    }
}

/**
 * @brief        Function to process IIC Slave TDF interrupt.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the SSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessTransmit(uint8 u8I2cIdx)
{
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    uint16            u16CurIdx;
    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_19();
    u16CurIdx = FCIIC_u16aChCurIdx[u8I2cIdx];
    if ((I2C_CH_SENDING == FCIIC_u8aChannelStatus[u8I2cIdx]) &&
        (FCIIC_u16aChCurIdx[u8I2cIdx] <= FCIIC_u16ChBufferSize[u8I2cIdx]))
    {
        FCIIC_Slave_HwA_Transmit(pFciic, FCIIC_p8aChBuffer[u8I2cIdx][u16CurIdx]);
        FCIIC_u16aChCurIdx[u8I2cIdx]   = (uint16)(FCIIC_u16aChCurIdx[u8I2cIdx] + 0x1u);
        FCIIC_baChReallySend[u8I2cIdx] = (boolean)TRUE;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_19();
    }
    else
    {
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_19();
        FCIIC_Slave_HwA_Transmit(pFciic, 0x00);
#ifdef I2C_ERROR_NOTIFICATION
        I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_STATEMACHINE_ERROR);
#endif
    }
}

/**
 * @brief        Function to process IIC Slave SDF interrupt.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the SSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessStop(uint8 u8I2cIdx)
{
    FCIIC_Type *const     pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    I2c_ChannelStatusType u8CurChSts;
    boolean               u8RealSend;
    uint16                totalLen;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_20();
    u8CurChSts                           = FCIIC_u8aChannelStatus[u8I2cIdx];
    u8RealSend                           = FCIIC_baChReallySend[u8I2cIdx];
    FCIIC_u8ChSubAddressCurIdx[u8I2cIdx] = (uint8)0x0U;
    if ((I2C_CH_SENDING == u8CurChSts) && ((boolean)TRUE == u8RealSend))
    {
        FCIIC_u16aChCurIdx[u8I2cIdx] = (uint16)(FCIIC_u16aChCurIdx[u8I2cIdx] - 1u);
    }
    totalLen                     = FCIIC_u16aChCurIdx[u8I2cIdx];
    FCIIC_u16aChCurIdx[u8I2cIdx] = (uint16)0x0U;
    FCIIC_Slave_HwA_DisableInterrupt(pFciic, FCIIC_SIER_TDIE_MASK | FCIIC_SIER_RDIE_MASK);

    if (I2C_CH_SENDING == u8CurChSts)
    {
#if (STD_ON == I2C_DMA_USED)
        uint32 u32I2cSlaveDmaStatus = FCIIC_HwA_GetSDER(pFciic);
        if (((uint32)0x0U != (FCIIC_SDER_TDDE_MASK & u32I2cSlaveDmaStatus)))
        {
            if ((boolean)FALSE == FCIIC_bSlaveDmaTransmitIsComplete[u8I2cIdx])
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_20();
                Dma_SetCfgSaddr((Dma_InstanceType)FCIIC_DmaTxInstance[u8I2cIdx],
                                FCIIC_DmaTxChannel[u8I2cIdx],
                                (uint32)FCIIC_p8aChBuffer[u8I2cIdx]);
#ifdef I2C_ERROR_NOTIFICATION
                I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                       I2C_E_SLAVE_DMA_TRANSMIT_NUMBER_LESS);
#endif
            }
            else
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_20();
#ifdef I2C_SLAVE_TRANSMIT_COMPLETE_NOTIFICATION
                I2C_SLAVE_TRANSMIT_COMPLETE_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                                         FCIIC_u16aChTotalLen[u8I2cIdx]);
#endif
            }
        }
        else
#endif
        {
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_20();
#ifdef I2C_SLAVE_TRANSMIT_COMPLETE_NOTIFICATION
            I2C_SLAVE_TRANSMIT_COMPLETE_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], totalLen);
#endif
        }
    }
    else if (I2C_CH_RECEIVING == u8CurChSts)
    {
#if (STD_ON == I2C_DMA_USED)
        uint32 u32I2cSlaveDmaStatus = FCIIC_HwA_GetSDER(pFciic);
        if (((uint32)0x0U != (FCIIC_SDER_RDDE_MASK & u32I2cSlaveDmaStatus)))
        {
            if ((boolean)FALSE == FCIIC_bSlaveDmaReceiveIsComplete[u8I2cIdx])
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_20();
                Dma_SetCfgDaddr((Dma_InstanceType)FCIIC_DmaRxInstance[u8I2cIdx],
                                FCIIC_DmaRxChannel[u8I2cIdx],
                                (uint32)FCIIC_p8aChBuffer[u8I2cIdx]);
#ifdef I2C_ERROR_NOTIFICATION
                I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                       I2C_E_SLAVE_DMA_RECEIVE_NUMBER_LESS);
#endif
            }
            else
            {
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_20();
#ifdef I2C_SLAVE_RECEIVE_COMPLETE_NOTIFICATION
                I2C_SLAVE_RECEIVE_COMPLETE_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                                        FCIIC_u16aChTotalLen[u8I2cIdx]);
#endif
            }
        }
        else
#endif
        {
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_20();
/* [SWS_CDD_I2C_00059] */
#ifdef I2C_SLAVE_RECEIVE_COMPLETE_NOTIFICATION
            I2C_SLAVE_RECEIVE_COMPLETE_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], totalLen);
#endif
        }
    }
    else
    {
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_20();
    }
}
/**
 * @brief        Interrupt handler for IIC Slave.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u32IsrStatus    The status of the SSR flags.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveInterruptProcessing(uint8  u8I2cIdx,
                                                            uint32 u32IsrStatus,
                                                            uint32 u32SSRStatus)
{
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    if (0U != (u32IsrStatus & (FCIIC_SSR_TREF_MASK | FCIIC_SSR_BEF_MASK)))
    {
        FCIIC_SlaveErrorHandler(u8I2cIdx, u32IsrStatus);
    }
    if (FCIIC_u8aChannelStatus[u8I2cIdx] != I2C_CH_ERROR_PRESENT)
    {
        if (0 != (u32IsrStatus & FCIIC_SSR_AM0F_MASK))
        {
            FCIIC_SlaveInterruptProcessAddressMatch(u8I2cIdx, u32SSRStatus);
        }
        else if ((0 != (u32IsrStatus & FCIIC_SSR_RDF_MASK)))
        {
            FCIIC_SlaveInterruptProcessReceive(u8I2cIdx);
        }
        else if ((0 != (u32IsrStatus & FCIIC_SSR_TDF_MASK)))
        {
            FCIIC_SlaveInterruptProcessTransmit(u8I2cIdx);
        }
        else if ((0 != (u32IsrStatus & FCIIC_SSR_SDF_MASK)))
        {
            FCIIC_SlaveInterruptProcessStop(u8I2cIdx);
        }
        else
        {
            /* Nothing for misra */
        }
    }
    else
    {
        FCIIC_u8ChSubAddressCurIdx[u8I2cIdx] = (uint8)0x0U;
        FCIIC_u16aChCurIdx[u8I2cIdx]         = (uint16)0x0U;

#if (STD_ON == I2C_DMA_USED)
        uint32 u32I2cSlaveDmaStatus = FCIIC_HwA_GetSDER(pFciic);
        if (0U != (FCIIC_SDER_TDDE_MASK & u32I2cSlaveDmaStatus))
        {
            Dma_DisableHwRequest((Dma_InstanceType)FCIIC_DmaTxInstance[u8I2cIdx],
                                 FCIIC_DmaTxChannel[u8I2cIdx]);
        }
        if (0U != (FCIIC_SDER_RDDE_MASK & u32I2cSlaveDmaStatus))
        {
            Dma_DisableHwRequest((Dma_InstanceType)FCIIC_DmaRxInstance[u8I2cIdx],
                                 FCIIC_DmaRxChannel[u8I2cIdx]);
        }
#endif
        FCIIC_Slave_HwA_DisableInterrupt(pFciic, FCIIC_SIER_MASK);
    }
}

/**
 * @brief        IIC master transmit start.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       void.
 */
/* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
 * Reason: The or operation of FCIIC_MTDR_DATA() is add slave address and direction.
 */

I2C_TEXT_SECTION static void FCIIC_MasterStart(uint8 u8I2cIdx, const I2c_RequestType *pRequest)
{
    uint8             u8CountCMD;
    uint8             u8Data;
    uint8            *pSubAddr = (uint8 *)&pRequest->subAddress;
    FCIIC_Type *const pFciic   = FCIIC_saInstanceTable[u8I2cIdx];

    if (0U != pRequest->subAddressSize)
    {
        u8Data = (uint8)(FCIIC_MTDR_DATA((uint32)(pRequest->u8SlaveAddress << 1) | I2C_DIR_WRITE));
        FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_STARTANDTRANSMIT, u8Data);
        for (u8CountCMD = pRequest->subAddressSize; u8CountCMD > 0; --u8CountCMD)
        {
            u8Data = (uint8)(FCIIC_MTDR_DATA(pSubAddr[u8CountCMD - 1]));
            FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_TRANSMIT, u8Data);
        }
        if (I2C_DIR_READ == pRequest->u8Direction)
        {
            u8Data = (uint8)(FCIIC_MTDR_DATA((uint32)(pRequest->u8SlaveAddress << 1) | I2C_DIR_READ));
            FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_STARTANDTRANSMIT, u8Data);
            u8Data = (uint8)(FCIIC_MRDR_DATA(pRequest->u16Len - 1));
            FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_RECEIVE, u8Data);
            FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_STOP, 0x0u);
        }
    }
    else
    {
        u8Data = (uint8)(FCIIC_MTDR_DATA(((uint32)pRequest->u8SlaveAddress << 1u) +
                                         pRequest->u8Direction));
        FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_STARTANDTRANSMIT, u8Data);
        if (I2C_DIR_READ == pRequest->u8Direction)
        {
            u8Data = (uint8)(FCIIC_MRDR_DATA(pRequest->u16Len - 1));
            FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_RECEIVE, u8Data);
            FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_STOP, 0x0u);
        }
    }
}
/* PRQA S 2985 --
 */

#if (STD_ON == I2C_DMA_USED)
/**
 * @brief        IIC master Asynchronous DMA mode initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u8TxDmaChannel  DMA transmit channel.
 * @param[in]    u8RxDmaChannel  DMA receive channel.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_DmaInit(uint8 u8I2cIdx,
                                           uint8 u8TxDmaInstance,
                                           uint8 u8TxDmaChannel,
                                           uint8 u8RxDmaInstance,
                                           uint8 u8RxDmaChannel)
{
    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_22();
    FCIIC_DmaTxInstance[u8I2cIdx] = u8TxDmaInstance;
    FCIIC_DmaTxChannel[u8I2cIdx]  = u8TxDmaChannel;
    FCIIC_DmaRxInstance[u8I2cIdx] = u8RxDmaInstance;
    FCIIC_DmaRxChannel[u8I2cIdx]  = u8RxDmaChannel;
    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_22();
}

/**
 * @brief        IIC master Asynchronous DMA mode prepare data.
 *
 * @param[in]    u8DmaChannel    The DMA channel.
 * @param[in]    bMem2Peripheral Memory2Peripheral or Peripheral2Memory flag.
 * @param[in]    u32SrcAddr      The DMA source address.
 * @param[in]    u32DstAddr      The DMA destination address.
 * @param[in]    u32DataSize     The data width.
 * @param[in]    u32InnerBytes   The DMA inner send bytes.
 * @param[in]    u16OuterCounter The DMA outer loop count.
 * @param[in]    u8MasterFlag    The master flag.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_DmaPrepare(uint8            u8DmaInstance,
                                              uint8            u8DmaChannel,
                                              boolean          bMem2Peripheral,
                                              uint32           u32SrcAddr,
                                              uint32           u32DstAddr,
                                              Dma_TranSizeType u32DataSize,
                                              uint32           u32InnerBytes,
                                              uint16           u16OuterCounter,
                                              uint8            u8MasterFlag)
{
    Dma_ChannelType FCIIC_DmaChannelAttr;

    /* Initial Dma Struct Data */
    FCIIC_DmaChannelAttr.s32DmaSLAST              = (sint32)0U;
    FCIIC_DmaChannelAttr.s32DmaDLAST              = (sint32)0U;
    FCIIC_DmaChannelAttr.bDmaSrcCircularBufferEn  = (boolean)FALSE; /* no source address modulo */
    FCIIC_DmaChannelAttr.bDmaDestCircularBufferEn = (boolean)FALSE; /* no dest address modulo   */
    FCIIC_DmaChannelAttr.bDmaAutoStopEnable       = (boolean)TRUE;
    FCIIC_DmaChannelAttr.s32DmaILOFF =
        (sint32)0U; /* a sign-extended offset applied to the source or destination address to form
                       the next-state value after the inner loop completes */
    if (I2C_MASTER_MODE == u8MasterFlag)
    {
        FCIIC_DmaChannelAttr.bDmaSILOE = (boolean)FALSE; /* Source Inner Loop Offset Enable */
        FCIIC_DmaChannelAttr.bDmaDILOE = (boolean)FALSE;
    }
    else
    {
        FCIIC_DmaChannelAttr.bDmaSILOE = (boolean)TRUE; /* Source Inner Loop Offset Enable */
        FCIIC_DmaChannelAttr.bDmaDILOE = (boolean)TRUE;
    }

    FCIIC_DmaChannelAttr.u32DmaSADDR = (uint32)u32SrcAddr; /* src address read - will be updated later*/
    FCIIC_DmaChannelAttr.u32DmaDADDR  = (uint32)u32DstAddr; /* dest address */
    FCIIC_DmaChannelAttr.eDmaSSIZE    = u32DataSize;        /* one transmit data size */
    FCIIC_DmaChannelAttr.eDmaDSIZE    = u32DataSize;
    FCIIC_DmaChannelAttr.u32DmaNBYTES = u32InnerBytes; /* inner loop count */
    FCIIC_DmaChannelAttr.u16DmaOuterLoopCounter =
        u16OuterCounter; /* Outer Loop count - will be updated later */
    if (1U == bMem2Peripheral)
    {
        FCIIC_DmaChannelAttr.s16SrcDataOffset =
            (sint16)(1U << ((uint8)u32DataSize)); /* Source data increment size after DMA engine
                                                     transferred a datum*/
        FCIIC_DmaChannelAttr.s16DestDataOffset = 0;
    }
    else
    {
        FCIIC_DmaChannelAttr.s16SrcDataOffset =
            0; /* Source data increment size after DMA engine transferred a datum*/
        FCIIC_DmaChannelAttr.s16DestDataOffset = (sint16)(1U << ((uint8)u32DataSize));
    }
    (void)Dma_ConfigChannel((Dma_InstanceType)u8DmaInstance, u8DmaChannel, &FCIIC_DmaChannelAttr);

    if (I2C_MASTER_MODE == u8MasterFlag)
    {
        /* TX HW request */
        Dma_EnableHwRequest((Dma_InstanceType)u8DmaInstance, u8DmaChannel);
    }
}

/**
 * @brief        IIC master Asynchronous DMA mode transmit data.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterDmaTransmit(uint8 u8I2cIdx)
{
    const FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    uint16                  u16TotalLen;
    uint32                  u32BufAddr;
    uint8                   u8Channel;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_25();
    u8Channel   = FCIIC_DmaTxChannel[u8I2cIdx];
    u16TotalLen = FCIIC_u16aChTotalLen[u8I2cIdx];
    u32BufAddr  = (uint32)FCIIC_p8aChBuffer[u8I2cIdx];
    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_25();

    FCIIC_DmaPrepare(FCIIC_DmaTxInstance[u8I2cIdx],
                     u8Channel,
                     (boolean)TRUE,
                     u32BufAddr,
                     (uint32)&pFciic->MTDR,
                     DMA_TRAN_SIZE_1B,
                     1u,
                     u16TotalLen,
                     I2C_MASTER_MODE);
}

/**
 * @brief        IIC master Asynchronous DMA mode receive data.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterDmaReceive(uint8 u8I2cIdx)
{
    const FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    uint16                  u16TotalLen;
    uint8                   u8Channel;
    uint32                  u32BufAddr;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_28();
    u8Channel   = FCIIC_DmaRxChannel[u8I2cIdx];
    u16TotalLen = FCIIC_u16aChTotalLen[u8I2cIdx];
    u32BufAddr  = (uint32)FCIIC_p8aChBuffer[u8I2cIdx];
    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_28();

    FCIIC_DmaPrepare(FCIIC_DmaRxInstance[u8I2cIdx],
                     u8Channel,
                     (boolean)FALSE,
                     (uint32)&pFciic->MRDR,
                     u32BufAddr,
                     DMA_TRAN_SIZE_1B,
                     1u,
                     u16TotalLen,
                     I2C_MASTER_MODE);
}

/**
 * @brief        IIC master Asynchronous DMA mode, one transmit finish.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_MasterDmaStageNotification(uint8 u8I2cIdx)
{
    I2c_ChannelStatusType u8CurChSts;
    uint8                 curChannel;
    uint16                totalLen;
    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_26();
    u8CurChSts                       = FCIIC_u8aChannelStatus[u8I2cIdx];
    FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
    curChannel                       = FCIIC_u8aChCurChannel[u8I2cIdx];
    totalLen                         = FCIIC_u16aChTotalLen[u8I2cIdx];
    FCIIC_Type *const pFciic         = FCIIC_saInstanceTable[u8I2cIdx];

    if (I2C_CH_SENDING == u8CurChSts)
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_26();
        FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_STOP, 0x0u);
/* [SWS_CDD_I2C_00108] */
#ifdef I2C_MASTER_TRANSMIT_COMPLETE_NOTIFICATION
        I2C_MASTER_TRANSMIT_COMPLETE_NOTIFICATION(curChannel, totalLen);
#endif
    }
    else if (I2C_CH_RECEIVING == u8CurChSts)
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_26();
/* [SWS_CDD_I2C_00109] */
#ifdef I2C_MASTER_RECEIVE_COMPLETE_NOTIFICATION
        I2C_MASTER_RECEIVE_COMPLETE_NOTIFICATION(curChannel, totalLen);
#endif
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_26();
#ifdef I2C_ERROR_NOTIFICATION
        I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_STATEMACHINE_ERROR);
#endif
    }
    FCIIC_Master_HwA_ClearStatus(pFciic, FCIIC_MSR_SDF_MASK | FCIIC_MSR_EPF_MASK);
}

/**
 * @brief        IIC master Asynchronous DMA mode, one transmit finish.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION static void FCIIC_SlaveDMAStageNotification(uint8 u8I2cIdx)
{
    const FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    uint32                  u32I2cSlaveDmaStatus;
    I2c_ChannelStatusType   u8CurChSts;

    u32I2cSlaveDmaStatus = FCIIC_HwA_GetSDER(pFciic);
    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_26();
    u8CurChSts = FCIIC_u8aChannelStatus[u8I2cIdx];
    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_26();

    if ((0u != (FCIIC_SDER_TDDE_MASK & u32I2cSlaveDmaStatus)) && (I2C_CH_SENDING == u8CurChSts))
    {
        Dma_SetCfgSaddr((Dma_InstanceType)FCIIC_DmaTxInstance[u8I2cIdx],
                        FCIIC_DmaTxChannel[u8I2cIdx],
                        (uint32)FCIIC_p8aChBuffer[u8I2cIdx]);
        FCIIC_bSlaveDmaTransmitIsComplete[u8I2cIdx] = (boolean)TRUE;
    }
    else if ((0u != (FCIIC_SDER_RDDE_MASK & u32I2cSlaveDmaStatus)) && (I2C_CH_RECEIVING == u8CurChSts))
    {
        Dma_SetCfgDaddr((Dma_InstanceType)FCIIC_DmaRxInstance[u8I2cIdx],
                        FCIIC_DmaTxChannel[u8I2cIdx],
                        (uint32)FCIIC_p8aChBuffer[u8I2cIdx]);
        FCIIC_bSlaveDmaReceiveIsComplete[u8I2cIdx] = (boolean)TRUE;
    }
    else
    {
#ifdef I2C_ERROR_NOTIFICATION
        I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_STATEMACHINE_ERROR);
#endif
    }
}
#endif /* STD_ON == I2C_DMA_USED */

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
/**
 * @brief        IIC Master mode initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pInitReg        IIC request register.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_Init_Master(uint8                   u8I2cIdx,
                                                  uint8                   u8CoreId,
                                                  const FCIIC_RegCfgType *pInitReg)
{
    uint32 u32TempMcr, u32TempMcfgr0, u32TempMcfgr1, u32TempMcfgr2, u32TempMcfgr3, u32TempMfcr,
        u32TempMccr0, u32TempMder;
    FCIIC_Type *const pFciic   = (FCIIC_Type *)FCIIC_saInstanceTable[u8I2cIdx];
    Std_ReturnType    eRetType = E_NOT_OK;

    u32TempMcr    = pInitReg->MCR;
    u32TempMder   = pInitReg->MDER;
    u32TempMcfgr0 = pInitReg->MCFGR0;
    u32TempMcfgr1 = pInitReg->MCFGR1;
    u32TempMcfgr2 = pInitReg->MCFGR2;
    u32TempMcfgr3 = pInitReg->MCFGR3;
    u32TempMfcr   = pInitReg->MFCR;
    u32TempMccr0  = pInitReg->MCCR;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_00();
    if (I2C_CH_CLOSED == FCIIC_u8aChannelStatus[u8I2cIdx])
    {
        FCIIC_u8aMasterFlag[u8I2cIdx]    = I2C_MASTER_MODE;
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_00();

        /* [SWS_CDD_I2C_00089] [SWS_CDD_I2C_00090] */
        FCIIC_HwA_SetMDER(pFciic, u32TempMder);
        FCIIC_HwA_SetMCFGR0(pFciic, u32TempMcfgr0);
        FCIIC_HwA_SetMCFGR1(pFciic, u32TempMcfgr1);
        FCIIC_HwA_SetMCFGR2(pFciic, u32TempMcfgr2);
        FCIIC_HwA_SetMCFGR3(pFciic, u32TempMcfgr3);
        FCIIC_HwA_SetMFCR(pFciic, u32TempMfcr);
        FCIIC_HwA_SetMCCR(pFciic, u32TempMccr0);
        FCIIC_HwA_SetMCR(
            pFciic,
            u32TempMcr); /* FCIIC_MCR_RRF_MASK\FCIIC_MCR_RTF_MASK\FCIIC_MCR_DBGEN_MASK\FCIIC_MCR_RST_MASK;
                          */

#if (STD_ON == I2C_DMA_USED)
        if (0U != u32TempMder)
        {
            FCIIC_DmaInit(u8I2cIdx,
                          pInitReg->u8TxDmaInstance,
                          pInitReg->u8TxDmaChannel,
                          pInitReg->u8RxDmaInstance,
                          pInitReg->u8RxDmaChannel);
        }
#endif

        eRetType = E_OK;
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_00();
    }
    (void)u8CoreId;

    return eRetType;
}

/**
 * @brief        IIC Master mode de-initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_DeInit_Master(uint8 u8I2cIdx)
{
    uint32            u32PCCFCIICAddress;
    FCIIC_Type *const pFciic = (FCIIC_Type *)FCIIC_saInstanceTable[u8I2cIdx];
    uint32            u32TempMcr, u32TempMder, u32TempPcc;
    Std_ReturnType    eRetType = E_NOT_OK;

    if (u8I2cIdx == 0U)
    {
        u32PCCFCIICAddress = PCC_FCIIC0_ADDRESS;
    }
    else
    {
        u32PCCFCIICAddress = PCC_FCIIC1_ADDRESS;
    }

    /* [SWS_CDD_I2C_00093] */
    u32TempMcr = FCIIC_MCR_RRF(0U) | FCIIC_MCR_RTF(0U) | FCIIC_MCR_DBGEN(0U) | FCIIC_MCR_RST(0U) |
                 FCIIC_MCR_MEN(0U); /* master disable */

    u32TempMder = FCIIC_MDER_RDDE(0U) | /* disable receive dma */
                  FCIIC_MDER_TDDE(0U);  /* disable transmit dma */

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_01();
    if ((I2C_CH_IDLE == FCIIC_u8aChannelStatus[u8I2cIdx]) ||
        (I2C_CH_ERROR_PRESENT == FCIIC_u8aChannelStatus[u8I2cIdx]))
    {
        FCIIC_u8aMasterFlag[u8I2cIdx]    = I2C_MODE_UNINIT;
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_CLOSED;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_01();

        /*   Disable interrupt and DMA    */
        FCIIC_Master_HwA_DisableInterrupt(pFciic, FCIIC_MIER_MASK);
        FCIIC_HwA_SetMDER(pFciic, u32TempMder);

        /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a
         * pointer to object and an integer type Reason: Pointer to register addressing map
         * operation could not be avoid */
        u32TempPcc = *((volatile uint32 *)(u32PCCFCIICAddress));
        /*   Disable PCC gate    */
        *((volatile uint32 *)(u32PCCFCIICAddress)) = (uint32)(u32TempPcc & (~PCC_FCIIC_CGC_MASK));
        /*   Disable function clock    */
        *((volatile uint32 *)(u32PCCFCIICAddress)) = (uint32)(u32TempPcc & (~PCC_FCIIC_SEL_MASK));

        FCIIC_HwA_SetMCR(pFciic, FCIIC_MCR_RST(1U));
        FCIIC_HwA_SetMCR(pFciic, u32TempMcr);

        /*   Disable PCC gate    */
        *((volatile uint32 *)(u32PCCFCIICAddress)) = (uint32)(u32TempPcc & (~PCC_FCIIC_CGC_MASK));
        /*   Recover function clock    */
        *((volatile uint32 *)(u32PCCFCIICAddress)) = u32TempPcc;
        /* PRQA S 0306 -- */

        eRetType = E_OK;
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_01();
    }

    return eRetType;
}

/**
 * @brief        IIC Slave mode initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    u8CoreId        Core Id corresponding to IIC hardware unit.
 * @param[in]    pInitReg        IIC request register.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_Init_Slave(uint8                   u8I2cIdx,
                                                 uint8                   u8CoreId,
                                                 const FCIIC_RegCfgType *pInitReg)
{
    uint32            u32TempScr, u32TempScfgr1, u32TempScfgr2, u32TempSamr, u32TempSder;
    FCIIC_Type *const pFciic   = (FCIIC_Type *)FCIIC_saInstanceTable[u8I2cIdx];
    Std_ReturnType    eRetType = E_NOT_OK;

    u32TempScr    = pInitReg->SCR;
    u32TempSder   = pInitReg->SDER;
    u32TempScfgr1 = pInitReg->SCFGR1;
    u32TempScfgr2 = pInitReg->SCFGR2;
    u32TempSamr   = pInitReg->SAMR;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_02();
    if (I2C_CH_CLOSED == FCIIC_u8aChannelStatus[u8I2cIdx])
    {
        FCIIC_u8aMasterFlag[u8I2cIdx]    = I2C_SLAVE_MODE;
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_02();

        FCIIC_HwA_SetSCFGR1(pFciic, u32TempScfgr1);
        FCIIC_HwA_SetSCFGR2(pFciic, u32TempScfgr2);
        FCIIC_HwA_SetSAMR(pFciic, u32TempSamr);
        FCIIC_HwA_SetSCR(pFciic, u32TempScr);
        FCIIC_HwA_SetSDER(pFciic, u32TempSder);

#if (STD_ON == I2C_DMA_USED)
        if (0U != u32TempSder)
        {
            FCIIC_DmaInit(u8I2cIdx,
                          pInitReg->u8TxDmaInstance,
                          pInitReg->u8TxDmaChannel,
                          pInitReg->u8RxDmaInstance,
                          pInitReg->u8RxDmaChannel);
        }
#endif
        eRetType = E_OK;
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_02();
    }
    (void)u8CoreId;

    return eRetType;
}

/**
 * @brief        IIC Slave mode de-initial.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_DeInit_Slave(uint8 u8I2cIdx)
{
    uint32            u32PCCFCIICAddress;
    FCIIC_Type *const pFciic = (FCIIC_Type *)FCIIC_saInstanceTable[u8I2cIdx];
    uint32            u32TempScr, u32TempSder, u32TempPcc;
    Std_ReturnType    eRetType = E_NOT_OK;

    if (u8I2cIdx == 0U)
    {
        u32PCCFCIICAddress = PCC_FCIIC0_ADDRESS;
    }
    else
    {
        u32PCCFCIICAddress = PCC_FCIIC1_ADDRESS;
    }

    u32TempScr  = FCIIC_SCR_FILTEN(0U) | FCIIC_SCR_RST(0U) | FCIIC_SCR_SEN(0U); /* slave enable */
    u32TempSder = FCIIC_SDER_AVDE(0U) | FCIIC_SDER_RDDE(0U) | /* disable receive dma */
                  FCIIC_SDER_TDDE(0U);                        /* disable transmit dma */

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_03();
    if ((I2C_CH_IDLE == FCIIC_u8aChannelStatus[u8I2cIdx]) ||
        (I2C_CH_ERROR_PRESENT == FCIIC_u8aChannelStatus[u8I2cIdx]))
    {
        FCIIC_u8aMasterFlag[u8I2cIdx]    = I2C_MODE_UNINIT;
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_CLOSED;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_03();

        /*   Disable interrupt and DMA    */
        FCIIC_Slave_HwA_DisableInterrupt(pFciic, FCIIC_SIER_MASK);
        FCIIC_HwA_SetSDER(pFciic, u32TempSder);

        /* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a
         * pointer to object and an integer type Reason: Pointer to register addressing map
         * operation could not be avoid */
        u32TempPcc = *((volatile uint32 *)(u32PCCFCIICAddress));
        /*   Disable PCC gate    */
        *((volatile uint32 *)(u32PCCFCIICAddress)) = (uint32)(u32TempPcc & (~PCC_FCIIC_CGC_MASK));
        /*   Disable function clock    */
        *((volatile uint32 *)(u32PCCFCIICAddress)) = (uint32)(u32TempPcc & (~PCC_FCIIC_SEL_MASK));

        FCIIC_HwA_SetSCR(pFciic, FCIIC_SCR_RST(1U));
        FCIIC_HwA_SetSCR(pFciic, u32TempScr);

        /*   Disable PCC gate    */
        *((volatile uint32 *)(u32PCCFCIICAddress)) = (uint32)(u32TempPcc & (~PCC_FCIIC_CGC_MASK));
        /*   Recover function clock    */
        *((volatile uint32 *)(u32PCCFCIICAddress)) = u32TempPcc;
        /* PRQA S 0306 -- */

        eRetType = E_OK;
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_03();
    }

    return eRetType;
}

/**
 * @brief        IIC get current channel status.
 *
 * @param[in]    u8I2cIdx               The hardware Unit.
 *
 * @return       I2c_ChannelStatusType  The current channel status.
 */
I2C_TEXT_SECTION I2c_ChannelStatusType FCIIC_GetChannelStatus(uint8 u8I2cIdx)
{
    I2c_ChannelStatusType eChannelStatus;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_04();
    eChannelStatus = FCIIC_u8aChannelStatus[u8I2cIdx];
    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_04();

    return eChannelStatus;
}

/**
 * @brief        IIC check whether or not the timeout.
 *
 * @param[in]    u8I2cIdx               The hardware Unit.
 * @param[in]    u32Times               The transmission time is considered a timeout,The actual
 * time is equal to the query period multiplied by u32Times.
 *
 * @return       Std_ReturnType  The current channel Whether or not the timeout.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_CheckForTimeouts(uint8 u8I2cIdx, uint32 u32Times)
{
    Std_ReturnType eRetType = E_OK;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_31();
    /* Some state don't need timeout check */
    if ((I2C_CH_IDLE == FCIIC_u8aChannelStatus[u8I2cIdx]) ||
        (I2C_CH_ERROR_PRESENT == FCIIC_u8aChannelStatus[u8I2cIdx]) ||
        (I2C_CH_CLOSED == FCIIC_u8aChannelStatus[u8I2cIdx]))
    {
        FCIIC_TickCntForTimeout[u8I2cIdx] = (uint32)0x0;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_31();
    }
    else if (FCIIC_TickCntForTimeout[u8I2cIdx] <= u32Times)
    {
        FCIIC_TickCntForTimeout[u8I2cIdx] += (uint32)0x1;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_31();
    }
    else
    {
        /* Change state to error when timeout occur */
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_31();

#ifdef I2C_ERROR_NOTIFICATION
        I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx], I2C_E_TIMEOUT_FAILURE);
#endif

        eRetType = E_NOT_OK;
    }

    return eRetType;
}

/**
 * @brief        IIC clear channel fault.
 *
 * @param[in]    u8I2cIdx               The hardware Unit.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_ClearChannelFault(uint8 u8I2cIdx)
{
    Std_ReturnType    eRetType;
    volatile uint32   u32Timeout = 0xFFFFu;
    FCIIC_Type *const pFciic     = FCIIC_saInstanceTable[u8I2cIdx];
    uint8             u8MasterFlag;

    u8MasterFlag = FCIIC_u8aMasterFlag[u8I2cIdx];
    /* master mode */
    if (I2C_MASTER_MODE == u8MasterFlag)
    {
        while (((pFciic->MSR & FCIIC_MSR_BBF_MASK) == FCIIC_MSR_BBF_MASK) && (u32Timeout > 0))
        {
            u32Timeout = u32Timeout - 1;
        }
    }
    /* slave mode */
    else if (I2C_SLAVE_MODE == u8MasterFlag)
    {
        while (((pFciic->SSR & FCIIC_SSR_BBF_MASK) == FCIIC_SSR_BBF_MASK) && (u32Timeout > 0))
        {
            u32Timeout = u32Timeout - 1;
        }
    }
    else
    {
        /* Nothing for misra */
    }

    if (u32Timeout != 0)
    {
        SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_32();
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_32();
        eRetType = E_OK;
    }
    else
    {
        eRetType = E_NOT_OK;
    }

    return eRetType;
}

/**
 * @brief        IIC master synchronous send.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_MasterSyncSend(uint8                  u8Channel,
                                                     uint8                  u8I2cIdx,
                                                     const I2c_RequestType *pRequest)
{
    uint16                u16LoopMax   = pRequest->u16Len;
    uint16                u16LoopCount = 0;
    Std_ReturnType        eRetType     = E_NOT_OK;
    I2c_ChannelStatusType u8ChannelStatus;
    uint8                 u8MasterFlag;
    FCIIC_Type *const     pFciic = FCIIC_saInstanceTable[u8I2cIdx];

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_05();
    u8MasterFlag    = FCIIC_u8aMasterFlag[u8I2cIdx];
    u8ChannelStatus = FCIIC_u8aChannelStatus[u8I2cIdx];

    /* [SWS_CDD_I2C_00022] */
    if ((I2C_CH_IDLE == u8ChannelStatus) && (I2C_MASTER_MODE == u8MasterFlag))
    {
        FCIIC_u8aChCurChannel[u8I2cIdx]  = u8Channel;
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_SENDING;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_05();
        /* [SWS_CDD_I2C_00117] */
        FCIIC_HwA_ClearMasterFIFO(pFciic);
        FCIIC_MasterClearStatusFlags(u8I2cIdx);
        FCIIC_HwA_SetTxWatermark(pFciic, (uint8)0U);
        FCIIC_MasterStart(u8I2cIdx, pRequest);

        do
        {
            u16LoopCount = (uint16)(FCIIC_MasterTransmitData(u8I2cIdx,
                                                             (uint16)(u16LoopMax - u16LoopCount),
                                                             &pRequest->BufferPtr[u16LoopCount]) +
                                    u16LoopCount);
            eRetType     = FCIIC_MasterWaitComplete(u8I2cIdx, FCIIC_MSR_TDF_MASK);
        }
        while ((u16LoopCount < u16LoopMax) && (eRetType == E_OK));

        if (E_OK == eRetType)
        {
            /* stop */
            FCIIC_Master_HwA_Transmit(pFciic, FCIIC_TX_CMD_STOP, 0x0u);
            eRetType = FCIIC_MasterWaitComplete(u8I2cIdx, FCIIC_MSR_SDF_MASK);
            if (E_OK == eRetType)
            {
                /* [SWS_CDD_I2C_00018] [SWS_CDD_I2C_00020] */
                SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_05();
                FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
                SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_05();
            }
        }
        if (E_OK != eRetType)
        {
            SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_05();
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_05();
            FCIIC_MasterErrorHandler(u8I2cIdx, FCIIC_HwA_GetMSR(pFciic));
        }
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_05();
    }
    return eRetType;
}

/**
 * @brief        IIC master synchronous receive.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_MasterSyncReceive(uint8                  u8Channel,
                                                        uint8                  u8I2cIdx,
                                                        const I2c_RequestType *pRequest)
{
    uint16                u16LoopMax   = pRequest->u16Len;
    uint16                u16LoopCount = 0;
    Std_ReturnType        eRetType     = E_NOT_OK;
    I2c_ChannelStatusType u8ChannelStatus;
    uint8                 u8MasterFlag;
    FCIIC_Type *const     pFciic = FCIIC_saInstanceTable[u8I2cIdx];

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_06();
    u8MasterFlag    = FCIIC_u8aMasterFlag[u8I2cIdx];
    u8ChannelStatus = FCIIC_u8aChannelStatus[u8I2cIdx];

    if ((I2C_CH_IDLE == u8ChannelStatus) && (I2C_MASTER_MODE == u8MasterFlag))
    {
        FCIIC_u8aChCurChannel[u8I2cIdx]  = u8Channel;
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_RECEIVING;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_06();

        FCIIC_HwA_ClearMasterFIFO(pFciic);
        FCIIC_MasterClearStatusFlags(u8I2cIdx);
        FCIIC_HwA_SetRxWatermark(pFciic, (uint8)0U);
        FCIIC_MasterStart(u8I2cIdx, pRequest);

        do
        {
            eRetType     = FCIIC_MasterWaitComplete(u8I2cIdx, FCIIC_MSR_RDF_MASK);
            u16LoopCount = (uint16)(FCIIC_MasterReceiveData(u8I2cIdx,
                                                            (uint16)(u16LoopMax - u16LoopCount),
                                                            &pRequest->BufferPtr[u16LoopCount]) +
                                    u16LoopCount);
        }
        while ((u16LoopCount < u16LoopMax) && (eRetType == E_OK));

        if (E_OK == eRetType)
        {
            SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_06();
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_IDLE;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_06();
        }
        else
        {
            SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_06();
            FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_06();
            FCIIC_MasterErrorHandler(u8I2cIdx, FCIIC_HwA_GetMSR(pFciic));
        }
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_06();
    }

    return eRetType;
}

/**
 * @brief        IIC master Asynchronous send.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_MasterAsyncSend(uint8                  u8Channel,
                                                      uint8                  u8I2cIdx,
                                                      const I2c_RequestType *pRequest)
{
    uint32 u32MierMask = FCIIC_MIER_PLTIE_MASK | FCIIC_MIER_FEIE_MASK | FCIIC_MIER_ALIE_MASK;
    Std_ReturnType        eRetType = E_NOT_OK;
    FCIIC_Type *const     pFciic   = FCIIC_saInstanceTable[u8I2cIdx];
    I2c_ChannelStatusType u8ChannelStatus;
    uint8                 u8MasterFlag;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_07();
    u8MasterFlag    = FCIIC_u8aMasterFlag[u8I2cIdx];
    u8ChannelStatus = FCIIC_u8aChannelStatus[u8I2cIdx];

    /* [SWS_CDD_I2C_00035] */
    if ((I2C_CH_IDLE == u8ChannelStatus) && (I2C_MASTER_MODE == u8MasterFlag))
    {
        FCIIC_u8aChCurChannel[u8I2cIdx] = u8Channel;

        FCIIC_u16aChTotalLen[u8I2cIdx]    = pRequest->u16Len;
        FCIIC_p8aChBuffer[u8I2cIdx]       = pRequest->BufferPtr;
        FCIIC_u16aChCurIdx[u8I2cIdx]      = 0x0U;
        FCIIC_u8aChannelStatus[u8I2cIdx]  = I2C_CH_SENDING;
        FCIIC_TickCntForTimeout[u8I2cIdx] = 0;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_07();

        FCIIC_HwA_ClearMasterFIFO(pFciic);
        FCIIC_MasterClearStatusFlags(u8I2cIdx);

        if ((FCIIC_HwA_GetMCFGR1(pFciic) & FCIIC_MCFGR1_IGNACK_MASK) == (uint32)0)
        {
            u32MierMask |= FCIIC_MIER_NDIE_MASK;
        }
        FCIIC_MasterStart(u8I2cIdx, pRequest);

#if (STD_ON == I2C_DMA_USED)
        if (0U != FCIIC_HwA_GetDmaStatus(pFciic, FCIIC_MDER_TDDE_MASK))
        {
            FCIIC_HwA_SetTxWatermark(pFciic, (uint8)0U);
            FCIIC_Master_HwA_EnableInterrupt(pFciic, u32MierMask);
            FCIIC_MasterDmaTransmit(u8I2cIdx);
            eRetType = E_OK;
        }
        else
#endif /* STD_ON == I2C_DMA_USED */
        {
            FCIIC_HwA_SetTxWatermark(pFciic, (uint8)2U);
            /* [SWS_CDD_I2C_00029] */
            u32MierMask |= FCIIC_MIER_SDIE_MASK | FCIIC_MIER_TDIE_MASK;
            FCIIC_Master_HwA_EnableInterrupt(pFciic, u32MierMask);
            eRetType = E_OK;
        }
    }
    else
    {
        /* [SWS_CDD_I2C_00030] [SWS_CDD_I2C_00031]*/
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_07();
    }

    return eRetType;
}

/**
 * @brief        IIC master Asynchronous receive.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_MasterAsyncReceive(uint8                  u8Channel,
                                                         uint8                  u8I2cIdx,
                                                         const I2c_RequestType *pRequest)
{
    uint32 u32MierMask = FCIIC_MIER_PLTIE_MASK | FCIIC_MIER_FEIE_MASK | FCIIC_MIER_ALIE_MASK;

    Std_ReturnType        eRetType = E_NOT_OK;
    FCIIC_Type *const     pFciic   = FCIIC_saInstanceTable[u8I2cIdx];
    I2c_ChannelStatusType u8ChannelStatus;
    uint8                 u8MasterFlag;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_08();
    u8MasterFlag    = FCIIC_u8aMasterFlag[u8I2cIdx];
    u8ChannelStatus = FCIIC_u8aChannelStatus[u8I2cIdx];

    if ((I2C_CH_IDLE == u8ChannelStatus) && (I2C_MASTER_MODE == u8MasterFlag))
    {
        FCIIC_u8aChCurChannel[u8I2cIdx]   = u8Channel;
        FCIIC_u16aChTotalLen[u8I2cIdx]    = pRequest->u16Len;
        FCIIC_p8aChBuffer[u8I2cIdx]       = pRequest->BufferPtr;
        FCIIC_u16aChCurIdx[u8I2cIdx]      = 0x0U;
        FCIIC_u8aChannelStatus[u8I2cIdx]  = I2C_CH_RECEIVING;
        FCIIC_TickCntForTimeout[u8I2cIdx] = 0;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_08();

        FCIIC_HwA_ClearMasterFIFO(pFciic);
        FCIIC_MasterClearStatusFlags(u8I2cIdx);

        if ((FCIIC_HwA_GetMCFGR1(pFciic) & FCIIC_MCFGR1_IGNACK_MASK) == (uint32)0)
        {
            u32MierMask |= FCIIC_MIER_NDIE_MASK;
        }
        FCIIC_MasterStart(u8I2cIdx, pRequest);
#if (STD_ON == I2C_DMA_USED)
        if (0U != FCIIC_HwA_GetDmaStatus(pFciic, FCIIC_MDER_RDDE_MASK))
        {
            FCIIC_HwA_SetRxWatermark(pFciic, (uint8)0U);
            FCIIC_Master_HwA_EnableInterrupt(pFciic, u32MierMask);
            FCIIC_MasterDmaReceive(u8I2cIdx);
            eRetType = E_OK;
        }
        else
#endif /* STD_ON == I2C_DMA_USED */
        {
            FCIIC_HwA_SetRxWatermark(pFciic, (uint8)5U);
            u32MierMask |= FCIIC_MIER_SDIE_MASK | FCIIC_MIER_RDIE_MASK;
            FCIIC_Master_HwA_EnableInterrupt(pFciic, u32MierMask);
            eRetType = E_OK;
        }
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_08();
    }

    return eRetType;
}

/**
 * @brief        IIC slave listening.
 *
 * @param[in]    u8Channel       The IIC channel.
 * @param[in]    u8I2cIdx        The hardware Unit.
 * @param[in]    pRequest        The IIC request type.
 *
 * @return       Std_ReturnType  E_OK or E_NOT_OK.
 * @retval       E_OK            Operation success.
 * @retval       E_NOT_OK        Operation failed.
 */
I2C_TEXT_SECTION Std_ReturnType FCIIC_SlaveListening(uint8                  u8Channel,
                                                     uint8                  u8I2cIdx,
                                                     const I2c_RequestType *pRequest)
{
    Std_ReturnType        eRetType = E_NOT_OK;
    I2c_ChannelStatusType u8ChannelStatus;
    uint8                 u8MasterFlag;
    uint32                u32SierMask;
    FCIIC_Type *const     pFciic = FCIIC_saInstanceTable[u8I2cIdx];
#if (STD_ON == I2C_DMA_USED)
    uint8  u8TxChannel, u8RxChannel;
    uint8  u8TxInstance, u8RxInstance;
    uint32 u32I2cSlaveDmaStatus;
    u32I2cSlaveDmaStatus = FCIIC_HwA_GetSDER(pFciic);
#endif

    FCIIC_SlaveClearStatusFlags(u8I2cIdx);
    FCIIC_Slave_HwA_DisableInterrupt(pFciic, FCIIC_SIER_RDIE_MASK | FCIIC_SIER_TDIE_MASK);

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_09();
    u8MasterFlag    = FCIIC_u8aMasterFlag[u8I2cIdx];
    u8ChannelStatus = FCIIC_u8aChannelStatus[u8I2cIdx];
    /* [SWS_CDD_I2C_00056] */
    if ((I2C_CH_IDLE == u8ChannelStatus) && (I2C_SLAVE_MODE == u8MasterFlag))
    {
        FCIIC_u8aChCurChannel[u8I2cIdx] = u8Channel;
        FCIIC_u16aChCurIdx[u8I2cIdx]    = 0x0U;
        /* [SWS_CDD_I2C_00055] */
        FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_LISTENING;
        u32SierMask = FCIIC_SIER_AM0IE_MASK | FCIIC_SIER_TREIE_MASK | FCIIC_SIER_BEIE_MASK |
                      FCIIC_SIER_SDIE_MASK;
        FCIIC_p8aChBuffer[u8I2cIdx]        = pRequest->BufferPtr;
        FCIIC_u16ChBufferSize[u8I2cIdx]    = pRequest->u16BufferSize;
        FCIIC_u8ChSubAddressSize[u8I2cIdx] = pRequest->subAddressSize;
        /*start counting for checking timeout*/
        FCIIC_TickCntForTimeout[u8I2cIdx] = 0;
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_09();

        if ((uint8)0x0U == pRequest->subAddressSize)
        {
#if (STD_ON == I2C_DMA_USED)
            SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_09();
            FCIIC_u16aChTotalLen[u8I2cIdx] = pRequest->u16Len;
            u8TxChannel                    = FCIIC_DmaTxChannel[u8I2cIdx];
            u8RxChannel                    = FCIIC_DmaRxChannel[u8I2cIdx];
            u8TxInstance                   = FCIIC_DmaTxInstance[u8I2cIdx];
            u8RxInstance                   = FCIIC_DmaRxInstance[u8I2cIdx];
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_09();
            if (u32I2cSlaveDmaStatus != 0x0u)
            {
                if ((uint16)0x0U != pRequest->u16Len)
                {
                    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_09();
                    FCIIC_bSlaveDmaTransmitIsComplete[u8I2cIdx] = (boolean)FALSE;
                    FCIIC_bSlaveDmaReceiveIsComplete[u8I2cIdx]  = (boolean)FALSE;
                    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_09();
                    if (((uint8)0x0U != (FCIIC_SDER_TDDE_MASK & u32I2cSlaveDmaStatus)))
                    {
                        FCIIC_DmaPrepare(u8TxInstance,
                                         u8TxChannel,
                                         (boolean)TRUE,
                                         (uint32)pRequest->BufferPtr,
                                         (uint32)&pFciic->STDR,
                                         DMA_TRAN_SIZE_1B,
                                         1u,
                                         pRequest->u16Len,
                                         I2C_SLAVE_MODE);
                    }
                    if (((uint8)0x0U != (FCIIC_SDER_RDDE_MASK & u32I2cSlaveDmaStatus)))
                    {
                        FCIIC_DmaPrepare(u8RxInstance,
                                         u8RxChannel,
                                         (boolean)FALSE,
                                         (uint32)&pFciic->SRDR,
                                         (uint32)pRequest->BufferPtr,
                                         DMA_TRAN_SIZE_1B,
                                         1u,
                                         pRequest->u16Len,
                                         I2C_SLAVE_MODE);
                    }
                }
                else
                {
                    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_09();
                    FCIIC_u8aChannelStatus[u8I2cIdx] = I2C_CH_ERROR_PRESENT;
                    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_09();
#ifdef I2C_ERROR_NOTIFICATION
                    I2C_ERROR_NOTIFICATION(FCIIC_u8aChCurChannel[u8I2cIdx],
                                           I2C_E_SLAVE_DMA_TRANSMIT_NUMBER_LESS);
#endif
                }
            }
#endif
        }
        else
        {
            SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_09();
            FCIIC_u8ChSubAddressCurIdx[u8I2cIdx] = 0x0U;
            SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_09();
        }

        FCIIC_Slave_HwA_EnableInterrupt(pFciic, u32SierMask);
        eRetType = E_OK;
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_09();
    }

    return eRetType;
}

/**
 * @brief        IIC interrupt handler.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC_LL_IRQnHandler(uint8 u8I2cIdx)
{
    uint32            u32IsrStatus, u32SSRStatus;
    FCIIC_Type *const pFciic = FCIIC_saInstanceTable[u8I2cIdx];
    uint8             u8MasterFlag;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_10();
    u8MasterFlag = FCIIC_u8aMasterFlag[u8I2cIdx];
    SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_10();

    /* [SWS_CDD_I2C_00062] */
    if (I2C_MASTER_MODE == u8MasterFlag)
    {

        /* Clear Interrupt [SWS_CDD_I2C_00063] */
        u32IsrStatus = FCIIC_HwA_GetMSR(pFciic);
        u32IsrStatus &= FCIIC_HwA_GetMIER(pFciic);
        FCIIC_MasterClearStatusFlags(u8I2cIdx);
        if (0U != u32IsrStatus)
        {
            /* [SWS_CDD_I2C_00032] [SWS_CDD_I2C_00036]*/
            FCIIC_MasterInterruptProcessing(u8I2cIdx, u32IsrStatus);
        }
    }
    else if (I2C_SLAVE_MODE == u8MasterFlag)
    {
        /* Read MIER status [SWS_CDD_I2C_00063] */
        u32SSRStatus = FCIIC_HwA_GetSSR(pFciic);
        u32IsrStatus = (FCIIC_HwA_GetSIER(pFciic) & u32SSRStatus);
        FCIIC_SlaveClearStatusFlags(u8I2cIdx);
        if (0U != u32IsrStatus)
        {
            FCIIC_SlaveInterruptProcessing(u8I2cIdx, u32IsrStatus, u32SSRStatus);
        }
    }
    else
    {
        /* Disable Master */
        FCIIC_HwA_SetMCR(pFciic, 0x0U);

        /* Disable Slave */
        FCIIC_HwA_SetSCR(pFciic, 0x0U);
    }
}

#if (STD_ON == I2C_DMA_USED)
/**
 * @brief        IIC DMA interrupt handler.
 *
 * @param[in]    u8I2cIdx        The hardware Unit.
 *
 * @return       void.
 */
I2C_TEXT_SECTION void FCIIC_LL_Dma_IRQnHandler(uint8 u8I2cIdx)
{
    uint8 u8MasterFlag;

    SchM_Enter_I2c_I2C_EXCLUSIVE_AREA_11();
    u8MasterFlag = FCIIC_u8aMasterFlag[u8I2cIdx];

    if (I2C_MASTER_MODE == u8MasterFlag)
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_11();
        FCIIC_MasterDmaStageNotification(u8I2cIdx);
    }
    else if (I2C_SLAVE_MODE == u8MasterFlag)
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_11();
        FCIIC_SlaveDMAStageNotification(u8I2cIdx);
    }
    else
    {
        SchM_Exit_I2c_I2C_EXCLUSIVE_AREA_11();
    }
}
#endif /* STD_ON == I2C_DMA_USED */

#define I2C_STOP_SEC_CODE
#include "I2c_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
