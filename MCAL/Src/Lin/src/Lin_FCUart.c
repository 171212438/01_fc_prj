/**
*   @file    Lin_FCUart.c
*   @version 1.5.1

*   @brief   AUTOSAR LIN - driver API and development errors implemention.
*   @details This file contains the LIN Autosar driver API and development errors implemention.
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : LIN
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
*   0.1.0       15/06/2023    QXW0095       N/A          LIN Initial Version
*   0.2.0       27/09/2023    QXW0095       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0095       N/A          Optimize the static code
*   0.4.0       20/11/2023    QXW0095       N/A          Optimize the static code
*   0.6.0       18/03/2024    QXW0122       N/A          Add support for FC7240
*   0.7.0       16/04/2024    QXW0122       N/A          Add Lin slave mode
*   0.8.0       01/08/2024    QXW0122       N/A          Add timeout detection & Add FIFO support
==================================================================================================*/
/* [SWS_Lin_00063] */
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#ifndef USER_MODE_REG_PROT_ENABLED
#define USER_MODE_REG_PROT_ENABLED (LIN_USER_MODE_SOFTWARE_LOCKED)
#endif

#include "Std_Types.h"
#include "Lin.h"
#include "LinIf.h"
#include "Lin_GeneralTypes.h"
#include "Lin_FCUart.h"
#include "Lin_FCUart_RegOps.h"
#include "SchM_Lin.h"
#include "LinIf_Cbk.h"

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef LIN_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (LIN_AR_RELEASE_MAJOR_VERSION != LIN_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef LIN_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (LIN_SW_MAJOR_VERSION != LIN_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef LIN_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (LIN_SW_MINOR_VERSION != LIN_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef LIN_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (LIN_SW_PATCH_VERSION != LIN_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
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
#define LIN_START_SEC_VAR_NO_INIT_8
#include "Lin_MemMap.h"

#if (LIN_HAS_SLAVE_NODE == STD_ON)
/**
 * @brief   Store FCUART data to send or receive
 */
LIN_DATA_SECTION static volatile uint8 Lin_FCUart_Slave_Buffer[LIN_FCUART_MAX_MODULES][LIN_MAX_DATA_LENGTH];
#endif /* (LIN_HAS_SLAVE_NODE == STD_ON) */

LIN_DATA_SECTION Lin_PduType LinPdu_Channel_slave_Pdu[LIN_FCUART_MAX_MODULES];

/**
 * @brief   Store FCUART data to send or receive
 */
/* [SWS_Lin_00026] */
LIN_DATA_SECTION static volatile uint8 Lin_FCUart_Buffer[LIN_INSTANCE_CONFIG][FCUART_MAX_BUFFER_LENGTH_U8];

/**
 * @brief   Point to the next byte to send or receive in FCUART Buffers
 */
LIN_DATA_SECTION static volatile uint8 Lin_FCUart_BufferPtr[LIN_INSTANCE_CONFIG];

/**
 * @brief   Real sizes of FCUART Buffers
 */
LIN_DATA_SECTION static volatile uint8 Lin_FCUart_BufferLength[LIN_INSTANCE_CONFIG];

/**
 * @brief   The wakeup flag
 */
LIN_DATA_SECTION static volatile uint8 Lin_FCUart_WakeupFlag[LIN_INSTANCE_CONFIG];

/**
 * @brief   Checksum mode
 */
LIN_DATA_SECTION static Lin_FrameCsModelType Lin_FCUart_CheckSumMode[LIN_INSTANCE_CONFIG];

/**
 * @brief   Wait break flag
 */
LIN_DATA_SECTION static uint8 Lin_FCUart_WaitBreakFlag[LIN_INSTANCE_CONFIG];

#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
/**
 * @brief   Wait Idle flag
 */
LIN_DATA_SECTION static uint8 Lin_FCUart_IdleFlag[LIN_FCUART_MAX_MODULES];
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */

#define LIN_STOP_SEC_VAR_NO_INIT_8
#include "Lin_MemMap.h"

#define LIN_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Lin_MemMap.h"

LIN_DATA_SECTION Lin_StateStructType Lin_StateConfig[LIN_INSTANCE_CONFIG];

#define LIN_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Lin_MemMap.h"

#define LIN_START_SEC_VAR_INIT_UNSPECIFIED
#include "Lin_MemMap.h"

/**
 * @brief Static Lin config pointer
 */
LIN_DATA_SECTION static const Lin_CoreConfigType *Lin_FCUart_pConfig[LIN_INSTANCE_CONFIG] =
    LIN_CORE_CONFIGPTR_UINIT_ARRAY;

#define LIN_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Lin_MemMap.h"

#define LIN_START_SEC_CONST_UNSPECIFIED
#include "Lin_MemMap.h"

LIN_DATA_SECTION static FCUART_Type *const LIN_PTRS[] = FCUART_BASE_PTRS;

#define LIN_STOP_SEC_CONST_UNSPECIFIED
#include "Lin_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief   Gets the status of the LIN driver when Channel is transmitting header.
 * @details This function returns the state of the current
 *          header transmission status of the Lin channel.
 *
 */
LOCAL_INLINE Lin_StatusType Lin_LL_HeaderTransmissionGetStatus(const uint8 u8Channel,
                                                               const uint8 u8ChannelFrameErr);

/**
 * @brief   Gets the status of the LIN driver when Channel is transmitting data.
 * @details This function returns the state of the current data
 *          transmission status of the Lin channel.
 *
 */
LOCAL_INLINE Lin_StatusType Lin_LL_DataTransmissionGetStatus(const uint8 u8Channel,
                                                             const uint8 u8ChannelFrameErr);

/**
 * @brief   Calculate PID according to Frame ID.
 * @details Calculate PID according to Frame ID.
 *
 */
LOCAL_INLINE void Lin_LL_PIDCalc(uint8 u8Channel, uint8 u8FrameID);
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

/**
 * @brief   Calculate Lin frame checksum.
 * @details Calculate Lin frame checksum.
 *
 */
LIN_TEXT_SECTION static uint8 Lin_LL_CheckSumCalc(uint8 u8Channel, Lin_FrameCsModelType eCheckSumMod);

/**
 * @brief   Clear STAT Reg and disable interrupt.
 * @details This function shall reset status.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_ShutDownReset(uint8 u8Module);

#if (LIN_BRKD_SUPPORT == STD_OFF)
#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief Half current baudrate
 */
LIN_TEXT_SECTION static void FCUART_LL_ChangeBaudrate(uint8 u8Channel);
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */
/**
 * @brief Recover baudrate
 */
LIN_TEXT_SECTION static void FCUART_LL_RecoverBaudrate(uint8 u8Channel);
#endif /* (LIN_BRKD_SUPPORT == STD_OFF) */

#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
/**
 * @brief  rx edge interrupt handle
 */
LIN_TEXT_SECTION static void Lin_LL_RxEdgeInterruptHandle(const uint8 u8Channel,
                                                          const uint8 u8Module);

/**
 * @brief   Interrupt handler for Idle line detected on FCUART.
 * @details This function shall manage the RX ISRs on the
 *          addressed channel.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel);
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */

/**
 * @brief  rx receive interrupt handle
 */
LIN_TEXT_SECTION static void Lin_LL_RxReceiveInterruptHandle(const uint8 u8Channel,
                                                             const uint8 u8Module);

/**
 * @brief  tx complete interrupt handle
 */
LIN_TEXT_SECTION static void Lin_LL_TxCompleteInterruptHandle(const uint8 u8Channel,
                                                              const uint8 u8Module);

/**
 * @brief  tx empty interrupt handle
 */
LIN_TEXT_SECTION static void Lin_LL_TxEmptyInterruptHandle(const uint8 u8Channel,
                                                           const uint8 u8Module);

#if LIN_DEV_FIFO_SUPPORT == STD_OFF
/**
 * @brief   Interrupt handler for RX Data Register Full on FCUART.
 * @details This function shall manage the RX ISRs on the
 *          addressed channel.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_RxDataReadyHandler(uint8 u8Module, uint8 u8Channel);
#endif

#if LIN_DEV_FIFO_SUPPORT == STD_ON
/**
 * @brief   Interrupt handler for RX Data Register Full on FCUART used FIFO.
 * @details This function shall manage the RX ISRs on the
 *          addressed channel.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_RxDataFifoUsedHandle(uint8 u8Module, uint8 u8Channel);
#endif

/**
 * @brief   Interrupt handler for Checksum.
 * @details This function shall manage the ISRs on the
 *          addressed channel.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_ChecksumHandle(uint8 u8Channel);

#if LIN_DEV_FIFO_SUPPORT == STD_OFF
/**
 * @brief   Interrupt handler for RX Data Register Full on FCUART in slave responses command.
 * @details This function shall manage the RX ISRs on the
 *          addressed channel when the frame command is a slave response command.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_InterruptSourceSlave(uint8  u8Module,
                                                         uint8  u8Channel,
                                                         uint32 u32Data);
#endif

#if (LIN_HAS_SLAVE_NODE == STD_ON)

/**
 * @brief   Handle slave node idle state
 */
LIN_TEXT_SECTION static void Lin_LL_HandleSlaveNodeIdle(uint8                u8Channel,
                                                        uint8                u8Module,
                                                        Lin_StateStructType *LinCurrentState);

/**
 * @brief Lin break character interrupt handle
 */
LIN_TEXT_SECTION static void Lin_LL_BreakDetectInterruptHandle(const uint8 u8Channel,
                                                               const uint8 u8Module);

/**
 * @brief  Slave node receive interrupt handle
 */
LIN_TEXT_SECTION static void Lin_LL_SlaveNodeRxHandle(uint8 u8Module, uint8 u8Channel);

/**
 * @brief  Slave node receive Sync Byte Field interrupt handle
 */
LIN_TEXT_SECTION static void Lin_LL_SlaveNodeRxSyncByteHandle(uint8 u8Module, uint8 u8Channel);

/**
 * @brief  Slave node receive Protected Identifier Field interrupt handle
 */
LIN_TEXT_SECTION static void Lin_LL_SlaveNodeRxPidByteHandle(uint8 u8Module, uint8 u8Channel);

/**
 * @brief   This function puts current node to Idle state.
 */
LIN_TEXT_SECTION static void Lin_LL_GoToIdleState(uint8 u8Module);
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/

/**
 * @brief   This function starts sleep wakeup signal detection.
 */
LIN_TEXT_SECTION void FCUART_LL_StartSleepDetection(uint8 u8Channel);

/**
 * @brief   This function stops sleep wakeup signal detection.
 */
LIN_TEXT_SECTION void FCUART_LL_StopSleepDetection(uint8 u8Channel);

/**
 * @brief   This function delays for tick function clk.
 */
LIN_TEXT_SECTION void FCUART_LL_DelayFunctionClk(uint8 u8Channel, uint32 u32Tick);
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief   Initialize a Lin channel.
 * @details This function initializes hardware channel through HaedWareAbsract(HWA).
 *
 * @param[in] u8Channel Lin channel to be initialized.
 * @param[in] pConfig   Pointer to the Lin configuration structure.
 *
 * @return            void.
 *
 */
/* [SWS_Lin_00008] [SWS_Lin_00029] */
LIN_TEXT_SECTION void Lin_LL_ChannelInit(uint8 u8Channel, const Lin_ConfigType *pConfig)
{
    uint8  u8Module;
    uint32 u32TempBaudReg;
    uint32 u32TempCtrlReg;
    uint32 u32TempFifoReg;
    uint32 u32TempWatermarkReg;

    /*Get instance of Lin module*/
    u8Module                     = pConfig->pLin_CoreConfig[u8Channel]->pLinChannel->u8HwModule;
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    /* Static Lin configure update */
    Lin_FCUart_pConfig[u8Channel] = pConfig->pLin_CoreConfig[u8Channel];

    /* Reset FCUART registers */
    FCUART_LIN_HWA_SoftwareReset(pLinHwPtr);

    /* temporary CTRL register */
    /* [SWS_Lin_00156] */
    u32TempCtrlReg = (uint32)0U | /* initial value                                       */
                     FCUART_CTRL_R8T9(0U) |  /* Receive Bit 8 / Transmit Bit 9  */
                     FCUART_CTRL_R9T8(0U) |  /* Receive Bit 9 / Transmit Bit 8  */
                     FCUART_CTRL_TXDIR(0U) | /* TXD Pin Direction in Single-Wire Mode */
                     FCUART_CTRL_TXINV(0U) | /* Transmit Data Inversion */
                     FCUART_CTRL_ORIE(0U) |  /* Overrun Interrupt Disable  */
                     FCUART_CTRL_NEIE(0U) |  /* Noise Error Interrupt Disable  */
                     FCUART_CTRL_FEIE(0U) |  /* Frame Error Interrupt Disable  */
                     FCUART_CTRL_PEIE(0U) |  /* Parity Error Interrupt Disable  */
                     FCUART_CTRL_TIE(0U) |   /* Transmit Interrupt Disable   */
                     FCUART_CTRL_TCIE(0U) |  /* Transmission Complete Interrupt Disable  */
                     FCUART_CTRL_RIE(0U) |   /* Receiver Interrupt Disable   */
                     FCUART_CTRL_IIE(0U) |   /* Idle Line Interrupt Disable   */
                     FCUART_CTRL_TE(0U) |    /* Transmitter Disable    */
                     FCUART_CTRL_RE(0U) |    /* Receiver Disable    */
                     FCUART_CTRL_RWC(0U) |   /* Receiver WakeUp Control   */
                     FCUART_CTRL_SBK(0U) |   /* Send Break   */
                     FCUART_CTRL_M0IE(0U) |  /* Match address 0 Interrupt Disable  */
                     FCUART_CTRL_M1IE(0U) |  /* Match address 1 Interrupt Disable  */
                     FCUART_CTRL_7BMS(0U) |  /* 7-Bit Mode Select  */
                     FCUART_CTRL_IDLECFG(
                         6U) | /* Idle Configuration 2^n bytes time no data entry IDLE */
                     FCUART_CTRL_LOOPMS(0U) | /* Loop Mode Select */
                     FCUART_CTRL_WAITEN(0U) | /* WAIT Enable */
                     FCUART_CTRL_RXSRC(0U) |  /* Receiver Source Select  */
                     FCUART_CTRL_BMSEL(0U) |  /* 8-Bit Mode Select  */
                     FCUART_CTRL_RSWMS(0U) |  /* Receiver WakeUp Method Select  */
                     FCUART_CTRL_ITS(0U) |    /* Idle Line Type Select    */
                     FCUART_CTRL_PE(0U) | /* Parity Enable                                        */
                     FCUART_CTRL_PT(0U);  /* Parity Type                                          */
    /* PRQA S 2985,2986 ++ #Misra-C:2012: Rule-2.2 This operation is redundant. The value of the
     * result is always that of the left-hand operand. REASON: Redundant code is used to improve
     * readability. */
    /* temporary BAUD register */
    u32TempBaudReg =
        (uint32)0U |                 /* initial value                                        */
        FCUART_BAUD_MAEN0(0U) |      /* Match mode enable 0                                  */
        FCUART_BAUD_MAEN1(0U) |      /* Match mode enable 1                                  */
        FCUART_BAUD_10BIT_MODE(0U) | /* 10bit mode select                                    */
        FCUART_BAUD_OVR_SAMP(Lin_FCUart_pConfig[u8Channel]->u32LinBaudOverSamplingRatio -
                             1U) |   /* Over sampling Ratio, n+1                             */
        FCUART_BAUD_TDMAEN(0U) |     /* Transmitter DMA Enable                               */
        FCUART_BAUD_RDMAEN(0U) |     /* Receiver Full DMA Disable                             */
        FCUART_BAUD_RIDMAEN(0U) |    /* Receiver Idle DMA Disable                             */
        FCUART_BAUD_MATCH_CFG(0U) |  /* Match Configuration                                  */
        FCUART_BAUD_BEDGE_SAMP(1U) | /* Both Edge Sampling                                   */
        FCUART_BAUD_RESYNC_DIS(0U) | /* Re-synchronization Disable                           */
        FCUART_BAUD_LBKDIE(0U) |     /* LIN Break Detect Interrupt Disable                    */
        FCUART_BAUD_RIAEIE(0U) |     /* RX Input Active Edge Interrupt Disable                */
        FCUART_BAUD_SBNS(0U) |       /* Stop Bit Number Select                               */
        FCUART_BAUD_SBR(
            Lin_FCUart_pConfig[u8Channel]->u32LinBaudRateDivisor); /* Baud Rate Modulo Divisor.
                                                                      baud-rate = baud clock /
                                                                      ((OVR_SAMP+1) * SBR) */
#if LIN_DEV_FIFO_SUPPORT == STD_ON
    /* PRQA S 2985,2986 -- */
    /* temporary FIFO register */
    u32TempFifoReg = (uint32)0U |                /* initial value                             */
                     FCUART_FIFO_TXEMPTY(0U) |   /* Transmit Buffer/FIFO Empty                 */
                     FCUART_FIFO_RXEMPTY(0U) |   /* Receive Buffer/FIFO Empty                  */
                     FCUART_FIFO_TXOF(0U) |      /* Transmitter Buffer Overflow Flag           */
                     FCUART_FIFO_RXUF(0U) |      /* Receiver Buffer Underflow Flag             */
                     FCUART_FIFO_TXFLUSH(1U) |   /* Transmit FIFO/Buffer Flush                 */
                     FCUART_FIFO_RXFLUSH(1U) |   /* Receive FIFO/Buffer Flush                  */
                     FCUART_FIFO_RXIDEN(0U) |    /* Receiver Idle Empty Enable                 */
                     FCUART_FIFO_TXOFIE(1U) |    /* Transmit FIFO Overflow Interrupt Enable    */
                     FCUART_FIFO_RXUFIE(1U) |    /* Receive FIFO Underflow Interrupt Enable    */
                     FCUART_FIFO_TXFEN(1U) |     /* Transmit FIFO Enable                       */
                     FCUART_FIFO_TXFIFODEP(0U) | /* Transmit FIFO Buffer Depth 16 datawords    */
                     FCUART_FIFO_RXFEN(1U) |     /* Receive FIFO Enable                        */
                     FCUART_FIFO_RXFIFODEP(0U);  /* Receive FIFO Buffer Depth, 16 datawords    */
#else
    u32TempFifoReg = (uint32)0U |                /* initial value                             */
                     FCUART_FIFO_TXEMPTY(0U) |   /* Transmit Buffer/FIFO Empty                 */
                     FCUART_FIFO_RXEMPTY(0U) |   /* Receive Buffer/FIFO Empty                  */
                     FCUART_FIFO_TXOF(0U) |      /* Transmitter Buffer Overflow Flag           */
                     FCUART_FIFO_RXUF(0U) |      /* Receiver Buffer Underflow Flag             */
                     FCUART_FIFO_TXFLUSH(0U) |   /* Transmit FIFO/Buffer Flush                 */
                     FCUART_FIFO_RXFLUSH(0U) |   /* Receive FIFO/Buffer Flush                  */
                     FCUART_FIFO_RXIDEN(0U) |    /* Receiver Idle Empty Enable                 */
                     FCUART_FIFO_TXOFIE(0U) |    /* Transmit FIFO Overflow Interrupt Disable    */
                     FCUART_FIFO_RXUFIE(0U) |    /* Receive FIFO Underflow Interrupt Disable    */
                     FCUART_FIFO_TXFEN(0U) |     /* Transmit FIFO Disable                       */
                     FCUART_FIFO_TXFIFODEP(0U) | /* Transmit FIFO Buffer Depth                  */
                     FCUART_FIFO_RXFEN(0U) |     /* Receive FIFO Disable, Disable RX FIFO       */
                     FCUART_FIFO_RXFIFODEP(0U);  /* Receive FIFO Buffer Depth, 4 data FIFO     */
#endif
    /* temporary WATERMARK register */
    u32TempWatermarkReg = (uint32)0U | /* initial value                                          */
                          FCUART_WATERMARK_RXCOUNT(0U) | /* Receive Counter */
                          FCUART_WATERMARK_RXWATER(
                              0U) | /* Receive WaterMark, receive n-1 request interrupt or DMA */
                          FCUART_WATERMARK_TXCOUNT(0U) | /* Transmit Counter */
#if LIN_DEV_FIFO_SUPPORT == STD_ON
                          FCUART_WATERMARK_TXWATER(15U); /* Transmit WaterMark */
#else
                          FCUART_WATERMARK_TXWATER(0U); /* Transmit WaterMark */
#endif

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_00();
    {
        /* write register with temporary data */
        FCUART_LIN_HWA_SetBaud(pLinHwPtr, u32TempBaudReg);
        FCUART_LIN_HWA_SetFifo(pLinHwPtr, u32TempFifoReg);
        FCUART_LIN_HWA_SetWaterMark(pLinHwPtr, u32TempWatermarkReg);
        FCUART_LIN_HWA_SetCtrl(pLinHwPtr, u32TempCtrlReg);

        if ((boolean)LIN_MASTER_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
        {
#if (LIN_BRKD_SUPPORT == STD_ON)
            FCUART_LIN_HWA_SetBreakDelimiter(pLinHwPtr,
                                             Lin_FCUart_pConfig[u8Channel]->eLinBreakDelimiterLen);
#endif
            /* Set break length*/
            FCUART_LIN_HWA_SetBreakLength(pLinHwPtr, LIN_BREAKLEN_HIGHER_13BITS);
        }
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_00();

#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
    if (Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8LinWakeUpSup == (uint8)STD_ON)
    {
        if (TRUE == Lin_FCUart_WakeupFlag[u8Channel])
        {
            /* The driver must not only invoke EcuM_SetWakeupEvent while
            the ECU is waiting for a wakeup event during a sleep phase
            but also during the driver initialization phase.(SWS_EcuM_02826)*/
            EcuM_SetWakeupEvent(
                (EcuM_WakeupSourceType)Lin_FCUart_pConfig[u8Channel]->pLinChannel->LinChannelWakeUpSrc);
        }
    }
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */

    Lin_FCUart_WakeupFlag[u8Channel] = FALSE;

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_01();
    {
        /* After init, set Lin sleep mode(set interrupt to simulate)  */
        /* Disable FCUART Receiver and Transmitter Interrupt*/
        FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
        FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);

        /* Reset buffer length */
        Lin_FCUart_BufferLength[u8Channel] = (uint8)0U;

        /* Enable wake up detection */
        /* Enable RX Input Active Edge Interrupt Enable */
        FCUART_LL_StartSleepDetection(u8Channel);
        FCUART_LIN_HWA_StartReceive(pLinHwPtr);
    }

    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_01();
}

/**
 * @brief   Check if a LIN channel has been waked-up.
 * @details This function identifies if the addressed LIN channel
 *          has been woken up by the LIN bus transceiver. It checks
 *          the wake up flag from the addressed LIN channel which
 *          must be in sleep mode and have the wake up signal.
 *
 * @param[in] Channel LIN channel to be waked-up.
 *
 * @return            Std_ReturnType.
 * @retval E_OK       If the LIN Channel has the wake
 *                    up flag set.
 * @retval E_NOT_OK   Otherwise.
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * REASON: The function is not used in this project but it must be applied for user*/
LIN_TEXT_SECTION Std_ReturnType Lin_LL_CheckWakeup(uint8 Channel)
{
    Std_ReturnType u8RetVal;

    u8RetVal = Lin_FCUart_WakeupFlag[Channel];

    if ((uint8)TRUE == u8RetVal)
    {
        /* Reset Wakeup Flag */
        Lin_FCUart_WakeupFlag[Channel] = (uint8)FALSE;
    }
    else
    {
        /* Do nothing */
    }

    return u8RetVal;
}
/* PRQA S 1503 --*/

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief   Gets the status of the LIN driver when Channel is operating.
 * @details This function returns the state of the current
 *          transmission, reception or operation status.
 *          If the reception of a Slave response was successful then
 *          this service provides a pointer to the buffer where the
 *          data is stored.
 *
 * @param[in]   u8Channel LIN channel number
 * @param[out]  pu8LinSdu pointer to pointer to a shadow buffer or memory
 *              mapped LIN Hardware receive buffer where the current SDU is
 *              stored
 * @return                  Lin_StatusType.
 * @retval LIN_NOT_OK       Development or production error raised
 *                          none of the below conditions.
 * @retval LIN_TX_OK        Successful transmission.
 * @retval LIN_TX_BUSY      Ongoing transmission of header or response.
 * @retval LIN_TX_HEADER_ERROR Error occurred during header
 *                          transmission.
 * @retval LIN_TX_ERROR     Error occurred during response
 *                          transmission.
 * @retval LIN_RX_OK        Reception of correct response.
 * @retval LIN_RX_BUSY      Ongoing reception where at least one byte
 *                          has been received.
 * @retval LIN_RX_ERROR     Error occurred during reception.
 * @retval LIN_RX_NO_REPONSE No data byte has been received yet.
 * @retval LIN_OPERATIONAL  Channel is ready for next header.
 *                          transmission and no data are available.
 * @retval LIN_CH_SLEEP     Channel is in sleep mode.
 *
 */
/* [SWS_Lin_00200] */
LIN_TEXT_SECTION Lin_StatusType Lin_LL_GetStatus(const uint8 u8Channel, uint8 *pu8LinSdu)
{
    uint8          u8ChannelFrameErr;
    uint8          u8ChannelFrameSta;
    uint8          u8TempBufferPtr     = Lin_FCUart_BufferPtr[u8Channel];
    uint8          u8TempBufferLen     = Lin_FCUart_BufferLength[u8Channel];
    uint8          u8TransmitHeaderCmd = Lin_SM_TransmitHeaderCmd[u8Channel];
    Lin_StatusType u8RetVal            = LIN_NOT_OK;

    if (u8TempBufferLen != (uint8)0U)
    {
        u8ChannelFrameErr = Lin_SM_ChFrameErrStatus[u8Channel];

        /* Send header */
        if (u8TempBufferPtr <= (PID_BYTE_OFFSET_U8 + ((uint8)1U)))
        {
            u8RetVal = Lin_LL_HeaderTransmissionGetStatus(u8Channel, u8ChannelFrameErr);
        }
        /* Send Data */
        else if (u8TempBufferLen > u8TempBufferPtr)
        {
            u8RetVal = Lin_LL_DataTransmissionGetStatus(u8Channel, u8ChannelFrameErr);
        }
        /* The last byte has been transmitted/received */
        else if (u8TempBufferLen == u8TempBufferPtr)
        {
            u8ChannelFrameSta = Lin_SM_ChFrameStatus[u8Channel];
            switch (u8ChannelFrameErr)
            {
                /* No error has occurred */
                case LIN_NO_ERROR:
                    if (LIN_TX_COMPLETE_STATE == u8ChannelFrameSta)
                    {
                        /* [SWS_Lin_00238] */
                        u8RetVal                           = LIN_TX_OK;
                        Lin_FCUart_BufferLength[u8Channel] = (uint8)0U;
                    }
                    else if (LIN_RX_COMPLETE_STATE == u8ChannelFrameSta)
                    {
                        /* Copy the data from hardware buffer */
                        Lin_HW_CopyData(u8Channel, pu8LinSdu);
                        Lin_FCUart_BufferLength[u8Channel] = (uint8)0U;
                        u8RetVal                           = LIN_RX_OK;
                    }
                    else
                    {
                        /* Code Flow Error */
                        u8RetVal = LIN_NOT_OK;
                    }
                    break;
                /* Errors occurred */
                case LIN_NOISE_ERROR:
                case LIN_BIT_ERROR:
                case LIN_TIMEOUT_ERROR:
                case LIN_FRAMING_ERROR:
                case LIN_TXRX_FIFO_ERROR:
                    if (LIN_RX_RES_COMMAND == u8TransmitHeaderCmd)
                    {
                        u8RetVal = LIN_RX_ERROR;
                    }
                    else
                    {
                        u8RetVal = LIN_TX_ERROR;
                    }
                    break;
                case LIN_CHECKSUM_ERROR:
                case LIN_BUFFER_OVER_RUN_ERROR:
                    u8RetVal = LIN_RX_ERROR;
                    break;
                default: /* PRQA S 2016 */
                    break;
            }
        }
        else
        {
            u8RetVal = LIN_NOT_OK;
        }
    }
    else
    {
        u8RetVal = LIN_OPERATIONAL;
    }
    return u8RetVal;
}

/**
 * @brief   Gets the status of the LIN driver when Channel is transmitting header.
 * @details This function returns the state of the current
 *          header transmission status of the Lin channel.
 *
 * @param[in]   Channel LIN channel number
 * @param[in]   u8ChannelFrameErr transmission error status of the Lin Channel
 *
 * @return                      Lin_StatusType.
 * @retval LIN_NOT_OK           Development or production error raised
 *                              none of the below conditions.
 * @retval LIN_TX_OK            Successful transmission.
 * @retval LIN_TX_BUSY          Ongoing transmission of header or response.
 * @retval LIN_TX_HEADER_ERROR  Error occurred during header transmission.
 * @retval LIN_RX_NO_REPONSE    No data byte has been received yet.
 *
 *
 */
LOCAL_INLINE Lin_StatusType Lin_LL_HeaderTransmissionGetStatus(const uint8 u8Channel,
                                                               const uint8 u8ChannelFrameErr)
{
    uint8          u8TransmitHeaderCmd = Lin_SM_TransmitHeaderCmd[u8Channel];
    uint8          u8ChannnelFrameSta  = Lin_SM_ChFrameStatus[u8Channel];
    Lin_StatusType u8RetVal            = LIN_NOT_OK;

    switch (u8ChannelFrameErr)
    {
        /* No error has occurred */
        case LIN_NO_ERROR:
            if ((LIN_IGNORE_COMMAND == u8TransmitHeaderCmd) &&
                (LIN_TX_HEADER_COMPLETE_STATE == u8ChannnelFrameSta))
            {
                /* [SWS_Lin_00238] */
                u8RetVal = LIN_TX_OK;
            }
            else if ((LIN_RX_RES_COMMAND == u8TransmitHeaderCmd) &&
                     (LIN_TX_HEADER_COMPLETE_STATE == u8ChannnelFrameSta))
            {
                u8RetVal = LIN_RX_NO_RESPONSE;
            }
            else
            {
                u8RetVal = LIN_TX_BUSY;
            }
            break;
        /* Errors occurred */
        case LIN_NOISE_ERROR:
        case LIN_FRAMING_ERROR:
        case LIN_BIT_ERROR:
            u8RetVal = LIN_TX_HEADER_ERROR;
            break;
        case LIN_TIMEOUT_ERROR:
            if ((LIN_RX_RES_COMMAND == u8TransmitHeaderCmd) &&
                (LIN_TX_HEADER_COMPLETE_STATE == u8ChannnelFrameSta))
            {
                u8RetVal = LIN_RX_NO_RESPONSE;
            }
            else
            {
                u8RetVal = LIN_TX_HEADER_ERROR;
            }
            break;
        default:
            u8RetVal = LIN_NOT_OK;
            break;
    }
    return u8RetVal;
}

/**
 * @brief   Gets the status of the LIN driver when Channel is transmitting data.
 * @details This function returns the state of the current data
 *          transmission status of the Lin channel.
 *
 * @param[in]   Channel LIN channel number
 * @param[in]   u8ChannelFrameErr transmission error status of the Lin Channel
 *
 * @return                  Lin_StatusType.
 * @retval LIN_NOT_OK       Development or production error raised
 *                          none of the below conditions.
 * @retval LIN_TX_OK        Successful transmission.
 * @retval LIN_TX_BUSY      Ongoing transmission of header or response.
 * @retval LIN_TX_ERROR     Error occurred during response
 *                          transmission.
 * @retval LIN_RX_OK        Reception of correct response.
 * @retval LIN_RX_BUSY      Ongoing reception where at least one byte
 *                          has been received.
 * @retval LIN_RX_ERROR     Error occurred during reception.
 *
 */
LOCAL_INLINE Lin_StatusType Lin_LL_DataTransmissionGetStatus(const uint8 u8Channel,
                                                             const uint8 u8ChannelFrameErr)
{
    uint8          u8TransmitHeaderCmd = Lin_SM_TransmitHeaderCmd[u8Channel];
    uint8          u8ChannnelFrameSta  = Lin_SM_ChFrameStatus[u8Channel];
    Lin_StatusType u8RetVal            = LIN_NOT_OK;

    switch (u8ChannelFrameErr)
    {
        /* No error has occurred */
        case LIN_NO_ERROR:
            if (LIN_RX_RES_COMMAND == u8TransmitHeaderCmd)
            {
                if (LIN_RX_ONGOING_STATE == u8ChannnelFrameSta)
                {
                    u8RetVal = LIN_RX_BUSY;
                }
            }
            else if ((LIN_IGNORE_COMMAND == u8TransmitHeaderCmd) &&
                     (LIN_TX_COMPLETE_STATE == u8ChannnelFrameSta))
            {
                /* [SWS_Lin_00238] */
                u8RetVal = LIN_TX_OK;
            }
            else
            {
                u8RetVal = LIN_TX_BUSY;
            }
            break;
        /* Errors occurred */
        case LIN_BIT_ERROR:
        case LIN_TIMEOUT_ERROR:
        case LIN_NOISE_ERROR:
            if (LIN_RX_RES_COMMAND == u8TransmitHeaderCmd)
            {
                u8RetVal = LIN_RX_ERROR;
            }
            else
            {
                u8RetVal = LIN_TX_ERROR;
            }
            break;
        case LIN_BUFFER_OVER_RUN_ERROR:
        case LIN_FRAMING_ERROR:
            u8RetVal = LIN_RX_ERROR;
            break;
        default:
            u8RetVal = LIN_NOT_OK;
            break;
    }
    return u8RetVal;
}
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

/**
 * @brief   Copy the data received from the FCUART data registers to pu8LinSdu.
 * @details This function shall copy the received data in the provided buffer
 *          addressed by the pu8LinSdu pointer parameter.
 *
 * @param[in]   Channel LIN channel number
 * @param[out]  pu8LinSdu pointer to pointer to a shadow buffer or memory
 *              mapped FCUART Hardware receive buffer where the current SDU is stored
 *
 * @return   void.
 *
 * @note   Internal driver function.
 *
 */
LIN_TEXT_SECTION void Lin_HW_CopyData(const uint8 u8Channel, uint8 *pu8LinSdu)
{
    uint8 u8Temp;
    uint8 u8BufferLength;
    /*  datalength = bufferlength - sysch - pid - checksum  */
    u8BufferLength = (uint8)(Lin_FCUart_BufferLength[u8Channel] - (uint8)3U);
    for (u8Temp = (uint8)0U; u8Temp < u8BufferLength; u8Temp++)
    {
        pu8LinSdu[u8Temp] = Lin_FCUart_Buffer[u8Channel][DATA_OFFSET_U8 + u8Temp];
    }
}

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief   Prepares and send a go-to-sleep-command frame on Channel.
 * @details This function stops any ongoing transmission and initiates
 *          the transmission of the sleep command (master command frame with
 *          ID = 0x3C and data = (0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF).
 *
 * @param[in] u8Channel LIN channel number
 * @param[in] u8Module LIN module to be addressed.
 *
 * @return   Std_ReturnType.
 * @retval E_NOT_OK   In case of a time-out situation only.
 * @retval E_OK       Otherwise.
 *
 */
LIN_TEXT_SECTION Std_ReturnType Lin_LL_GoToSleep(uint8 u8Channel, uint8 u8Module)
{
    uint32             u32TempResult   = (uint32)0U;
    uint32             u32TempTryCount = (uint32)0U;
    Std_ReturnType     u8Retval        = (uint8)E_NOT_OK;
    FCUART_Type *const pLinHwPtr       = LIN_PTRS[u8Module];

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_02();
    {
        /* Disable FCUART Receiver and Transmitter interrupt */
        FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
        FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);

        /* Disable FCUART Transmitter complete interrupt */
        FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(pLinHwPtr);

#if LIN_DEV_FIFO_SUPPORT == STD_ON
        FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, 0U);
#endif /*LIN_DEV_FIFO_SUPPORT == STD_ON*/
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_02();
    /* Set timeout check */
    /* [SWS_Lin_00097] [FMR_Lin_0008] */
    do
    {
        u32TempResult = FCUART_LIN_HWA_GetStatus(pLinHwPtr,
                                                 (FCUART_STAT_TCF_MASK | FCUART_STAT_TDREF_MASK));
        /* check transmit flag */
        if ((FCUART_STAT_TCF_MASK | FCUART_STAT_TDREF_MASK) == u32TempResult)
        {
            u8Retval = (uint8)E_OK;
            break;
        }
        else
        {
            u32TempTryCount++;
        }
    }
    while (u32TempTryCount <= LIN_TIMEOUT_TIMES);

    if (u8Retval == (uint8)E_OK)
    {
        FCUART_LIN_HWA_ClearReceiveTransmit(pLinHwPtr);

        FCUART_LL_DelayFunctionClk(u8Channel, 2);

        /* Discard FCUART Tx Rx Buffer */
        FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);

        FCUART_LIN_HWA_StartReceive(pLinHwPtr);

        FCUART_LL_DelayFunctionClk(u8Channel, 2);

        Lin_FCUart_BufferLength[u8Channel] = FCUART_MAX_BUFFER_LENGTH_U8;

        /************************** Frame Header ********************************/
        /* Synch byte*/
        Lin_FCUart_Buffer[u8Channel][SYNC_BYTE_OFFSET_U8] = SYNC_BYTE_U8;
        /* PID(Go sleep command is 0x3C) */
        Lin_LL_PIDCalc(u8Channel, MASTER_REQ_DIAGNOSTIC_PID_U8);
        /* Data Go sleep command is (0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF) */
        Lin_FCUart_Buffer[u8Channel][(uint8)2U] = (uint8)0x00U;
        Lin_FCUart_Buffer[u8Channel][(uint8)3U] = (uint8)0xFFU;
        Lin_FCUart_Buffer[u8Channel][(uint8)4U] = (uint8)0xFFU;
        Lin_FCUart_Buffer[u8Channel][(uint8)5U] = (uint8)0xFFU;
        Lin_FCUart_Buffer[u8Channel][(uint8)6U] = (uint8)0xFFU;
        Lin_FCUart_Buffer[u8Channel][(uint8)7U] = (uint8)0xFFU;
        Lin_FCUart_Buffer[u8Channel][(uint8)8U] = (uint8)0xFFU;
        Lin_FCUart_Buffer[u8Channel][(uint8)9U] = (uint8)0xFFU;
        /* checksum */
        Lin_FCUart_Buffer[u8Channel][FCUART_MAX_BUFFER_LENGTH_U8 - (uint8)1U] =
            Lin_LL_CheckSumCalc(u8Channel, LIN_CLASSIC_CS);
        /************************** Frame Header End ****************************/

        /* Set next byte to send the sync byte. This will be used in the transmission complete
         * interrupt */
        Lin_FCUart_BufferPtr[u8Channel]  = SYNC_BYTE_OFFSET_U8;
        Lin_FCUart_WakeupFlag[u8Channel] = (uint8)FALSE;

        SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_03();
        {
            /* Disable all error interrupt */
            FCUART_LIN_HWA_DisableErrorInterrupt(pLinHwPtr);
#if (LIN_BRKD_SUPPORT == STD_ON)
            FCUART_LIN_HWA_SendBreakField(pLinHwPtr);
#else
            /* Set baudrate */
            FCUART_LL_ChangeBaudrate(u8Channel);
            FCUART_LIN_HWA_SetData(pLinHwPtr, (uint32)0x00);
#endif
            /* Set header command type is sleep*/
            Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_TX_SLEEP_COMMAND;
            FCUART_LIN_HWA_StartTransmit(pLinHwPtr);
            FCUART_LIN_HWA_EnableTransmitCompleteInterrupt(pLinHwPtr);

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
            /* Start the timer to check for frame timeout. */
            /* Timeout duration(in microseconds) after sending break */
            LIN_START_TIMER_NOTIFICATION(
                u8Channel,
                (Lin_FCUart_pConfig[u8Channel]->HeaderTimeoutValue +
                 (Lin_FCUart_pConfig[u8Channel]->ResponseTimeoutValue * (uint32)9U)));
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
        }
        SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_03();
    }
    return u8Retval;
}

/**
 * @brief   Calculate PID according to Frame ID.
 * @details Calculate PID according to Frame ID.
 *
 * @param[in]  u8Channel    LIN channel number
 * @param[in]  u8FrameID    Frame ID.
 *
 * @return   void.
 *
 */
LOCAL_INLINE void Lin_LL_PIDCalc(uint8 u8Channel, uint8 u8FrameID)
{
    uint8 u8TempParity;

    /* PRQA S 2985 ++ #Misra-C:2012 Rule-2.2 There shall be no dead code.
     * REASON:redundant bit operation is used to improve code readability.*/
    u8TempParity = (uint8)(((GETBIT_U8(u8FrameID, 0U) ^ GETBIT_U8(u8FrameID, 1U) ^
                             GETBIT_U8(u8FrameID, 2U) ^ GETBIT_U8(u8FrameID, 4U))
                            << (uint8)6U) |
                           (((uint8)0xFFU ^ (GETBIT_U8(u8FrameID, 1U) ^ GETBIT_U8(u8FrameID, 3U) ^
                                             GETBIT_U8(u8FrameID, 4U) ^ GETBIT_U8(u8FrameID, 5U)))
                            << (uint8)7U));
    /* PRQA S 2985 -- */
    Lin_FCUart_Buffer[u8Channel][PID_BYTE_OFFSET_U8] = (uint8)(u8FrameID | u8TempParity);
}
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

/**
 * @brief   Calculate Lin frame checksum.
 * @details Calculate Lin frame checksum.
 *
 * @param[in]   u8Channel       LIN channel number
 * @param[in]   eChecksumMod    Checksum mode.
 *
 * @return  u32Checksum
 *
 *
 */
LIN_TEXT_SECTION static uint8 Lin_LL_CheckSumCalc(uint8 u8Channel, Lin_FrameCsModelType eCheckSumMod)
{
    uint16 u16TempCheckSum;
    uint16 u16BufferLen;
    uint16 u16Index;

    u16BufferLen = (uint16)((uint16)Lin_FCUart_BufferLength[u8Channel] - ((uint16)3U));
    if (eCheckSumMod == LIN_CLASSIC_CS)
    {
        u16TempCheckSum = (uint16)0U;
    }
    else
    {
        u16TempCheckSum = (uint16)Lin_FCUart_Buffer[u8Channel][PID_BYTE_OFFSET_U8];
    }
    for (u16Index = (uint16)0U; u16Index < u16BufferLen; u16Index++)
    {
        u16TempCheckSum = (uint16)(u16TempCheckSum +
                                   Lin_FCUart_Buffer[u8Channel][DATA_OFFSET_U8 + u16Index]);
        if (u16TempCheckSum > (uint16)0xFFU)
        {
            u16TempCheckSum = (uint16)(u16TempCheckSum - (uint16)0xFFU);
        }
    }
    return (uint8)((~u16TempCheckSum));
}

/**
 * @brief   Same function as Lin_LL_GoToSleep() but
 *          without sending a go-to-sleep-command on the bus.
 * @details This function stops any ongoing transmission and put the
 *          Channel in sleep mode (then Lin hardware enters a
 *          reduced power operation mode).
 *
 * @param[in] u8Channel LIN channel number
 * @param[in] u8Module Lin module to be addressed.
 *
 * @return  Std_ReturnType.
 * @retval  E_NOT_OK   In case of a timeout situation only.
 * @retval  E_OK       Otherwise.
 *
 */
/* [SWS_Lin_00223] */
LIN_TEXT_SECTION Std_ReturnType Lin_LL_GoToSleepInternal(uint8 u8Channel, uint8 u8Module)
{
    uint32             u32TempResult   = (uint32)0U;
    uint32             u32TempTryCount = (uint32)0U;
    Std_ReturnType     u8Retval        = (uint8)E_NOT_OK;
    FCUART_Type *const pLinHwPtr       = LIN_PTRS[u8Module];

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_04();
    {

        FCUART_LIN_HWA_ClearReceiveTransmit(pLinHwPtr);
        FCUART_LL_DelayFunctionClk(u8Channel, 2);
        /* Stop any ongoing transmission */
        /* Discard FCUART Tx Rx Buffer */
        FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);

        FCUART_LIN_HWA_StartReceiveTransmit(pLinHwPtr);
        FCUART_LL_DelayFunctionClk(u8Channel, 2);

        /* Disable FCUART Receiver and Transmitter interrupt */
        FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
        FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);

        /* Disable FCUART Transmitter complete interrupt */
        FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(pLinHwPtr);
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_04();

    /* Set timeout check */
    /* [SWS_Lin_00097] [FMR_Lin_0008] */
    do
    {
        u32TempResult = FCUART_LIN_HWA_GetStatus(pLinHwPtr,
                                                 (FCUART_STAT_TCF_MASK | FCUART_STAT_TDREF_MASK));
        /* check transmit flag */
        if ((FCUART_STAT_TCF_MASK | FCUART_STAT_TDREF_MASK) == u32TempResult)
        {
            u8Retval = (uint8)E_OK;
            break;
        }
        else
        {
            u32TempTryCount++;
        }
    }
    while (u32TempTryCount <= LIN_TIMEOUT_TIMES);

    /* reset header command type*/
    Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_TX_NO_COMMAND;
    /* Reset buffer length */
    Lin_FCUart_BufferLength[u8Channel] = (uint8)0U;

    Lin_FCUart_WakeupFlag[u8Channel] = (uint8)FALSE;

    if (u8Retval == (uint8)E_OK)
    {
        SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_05();
        {
            /* Enter Sleep mode */
            /* Clear RX Pin Active Edge Interrupt Flag */
            /* Enable RX Input Active Edge Interrupt Enable */
            /* [SWS_Lin_00222] */
            FCUART_LL_StartSleepDetection(u8Channel);
        }
        SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_05();
    }
    return u8Retval;
}

#if (LIN_MASTER_NODE_USED == STD_ON)
/**
 * @brief   Sends the header part of the Lin frame.
 * @details Initiates the transmission of the header
 *          part of the Lin frame on Channel using information
 *          stored on PduInfoPtr pointer.
 *          If response type is MASTER_RESPONSE then nothing is sent over the bus
 *          the entire frame (including header) is sent with the Lin_LL_SendResponse
 *
 * @param[in]   u8Channel LIN channel number
 * @param[in]   pPduInfoPtr pointer to PDU containing the PID, Checksum model,
 *              Response type, Dl and SDU data pointer.
 *
 * @return            Std_ReturnType.
 * @retval E_NOT_OK   In case of a timeout situation only.
 * @retval E_OK       Otherwise.
 *
 */
/* [SWS_Lin_00017] */
LIN_TEXT_SECTION Std_ReturnType Lin_LL_SendHeader(uint8              u8Channel,
                                                  uint8              u8Module,
                                                  const Lin_PduType *pPduInfoPtr)
{
    uint32             u32TempResult   = (uint32)0U;
    uint32             u32TempTryCount = (uint32)0U;
    Std_ReturnType     u8Retval        = (uint8)E_NOT_OK;
    FCUART_Type *const pLinHwPtr       = LIN_PTRS[u8Module];

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_06();
    {
        /* [SWS_Lin_00021] */
        /* Disable FCUART Receiver and Transmitter interrupt */
        FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
        FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);

        /* Disable FCUART Transmitter complete interrupt */
        FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(pLinHwPtr);

#if LIN_DEV_FIFO_SUPPORT == STD_ON
        FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, 0U);
#endif /*LIN_DEV_FIFO_SUPPORT == STD_ON*/
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_06();

    /* Set timeout check */
    /* [SWS_Lin_00097] [FMR_Lin_0008] */
    do
    {
        u32TempResult = FCUART_LIN_HWA_GetStatus(pLinHwPtr,
                                                 (FCUART_STAT_TCF_MASK | FCUART_STAT_TDREF_MASK));
        /* check transmit flag */
        if ((FCUART_STAT_TCF_MASK | FCUART_STAT_TDREF_MASK) == u32TempResult)
        {
            u8Retval = (uint8)E_OK;
            break;
        }
        else
        {
            u32TempTryCount++;
        }
    }
    while (u32TempTryCount <= LIN_TIMEOUT_TIMES);
    u32TempResult = FCUART_LIN_HWA_GetStatus(pLinHwPtr, FCUART_STAT_RDRFF_MASK);
    if (FCUART_STAT_RDRFF_MASK == u32TempResult)
    {
        (void)FCUART_LIN_HWA_GetData(pLinHwPtr);
    }
    if (u8Retval == (uint8)E_OK)
    {
        FCUART_LIN_HWA_ClearTransmit(pLinHwPtr);

        Lin_FCUart_BufferLength[u8Channel] = (uint8)(3U + ((pPduInfoPtr->Dl > LIN_MAX_DATA_LENGTH) ?
                                                               LIN_MAX_DATA_LENGTH :
                                                               pPduInfoPtr->Dl));

        /* Synch byte*/
        Lin_FCUart_Buffer[u8Channel][SYNC_BYTE_OFFSET_U8] = SYNC_BYTE_U8;
        /* PID */
        /* [SWS_Lin_00016] */
        Lin_LL_PIDCalc(u8Channel, pPduInfoPtr->Pid);
        /* Set Checksum model type */
        Lin_FCUart_CheckSumMode[u8Channel] = pPduInfoPtr->Cs;

        /* Transmit Header */
        Lin_FCUart_BufferPtr[u8Channel] = SYNC_BYTE_OFFSET_U8;

#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
        if (LIN_MASTER_RESPONSE != pPduInfoPtr->Drc)
#else
        if (LIN_FRAMERESPONSE_TX != pPduInfoPtr->Drc)
#endif /* LIN_USE_LEGACY_LINIF_API == STD_ON */
        {
            SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_07();
            {
                /* Disable all error interrupt */
                FCUART_LIN_HWA_DisableErrorInterrupt(pLinHwPtr);

                FCUART_LIN_HWA_ClearReceiveTransmit(pLinHwPtr);
                FCUART_LL_DelayFunctionClk(u8Channel, 2);

                FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);

                FCUART_LIN_HWA_StartReceive(pLinHwPtr);
                FCUART_LL_DelayFunctionClk(u8Channel, 2);

#if (LIN_BRKD_SUPPORT == STD_ON)
                FCUART_LIN_HWA_SendBreakField(pLinHwPtr);
#else
                /* Set baudrate */
                FCUART_LL_ChangeBaudrate(u8Channel);
                FCUART_LIN_HWA_SetData(pLinHwPtr, (uint32)0x00);
#endif
                Lin_FCUart_WaitBreakFlag[u8Channel] = FALSE;
                FCUART_LIN_HWA_StartTransmit(pLinHwPtr);
                FCUART_LL_DelayFunctionClk(u8Channel, 2);
                FCUART_LIN_HWA_EnableTransmitCompleteInterrupt(pLinHwPtr);

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
                /* Start the timer to check for frame timeout.*/
                /* Timeout duration(in microseconds) after sending break */
                LIN_START_TIMER_NOTIFICATION(u8Channel,
                                             (Lin_FCUart_pConfig[u8Channel]->HeaderTimeoutValue +
                                              (Lin_FCUart_pConfig[u8Channel]->ResponseTimeoutValue *
                                               (uint32)(Lin_FCUart_BufferLength[u8Channel] - 2UL))));
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
            }
            SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_07();
        }
    }
    return u8Retval;
}

/**
 * @brief   Sends the response part of the Lin frame.
 * @details Initiates the transmission of the data
 *          part of the Lin frame on Channel using information
 *          stored on PduInfoPtr pointer.
 *
 * @param[in]   u8Channel LIN channel number
 * @param[in]   pPduInfoPtr pointer to PDU containing the PID, Checksum model,
 *              Response type, Dl and SDU data pointer.
 *
 * @return      void.
 *
 */
/* [SWS_Lin_00018] */
LIN_TEXT_SECTION void Lin_LL_SendResponse(uint8              u8Channel,
                                          uint8              u8Module,
                                          const Lin_PduType *pPduInfoPtr)
{
    uint8              u8SendDataLen;
    uint8              u8Index;
    uint8              u8FrameId;
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    u8SendDataLen = (pPduInfoPtr->Dl > LIN_MAX_DATA_LENGTH) ? LIN_MAX_DATA_LENGTH : pPduInfoPtr->Dl;

    /*************** Prepare Data to send ***************/
    /* [SWS_Lin_00053] */
    for (u8Index = (uint8)0U; u8Index < u8SendDataLen; u8Index++)
    {
        Lin_FCUart_Buffer[u8Channel][DATA_OFFSET_U8 + u8Index] = pPduInfoPtr->SduPtr[u8Index];
    }

    u8FrameId = pPduInfoPtr->Pid;
    if ((u8FrameId == MASTER_REQ_DIAGNOSTIC_ID_U8) || (u8FrameId == SLAVE_RSP_DIAGNOSTIC_ID_U8))
    {
        /* checksum */
        Lin_FCUart_Buffer[u8Channel][Lin_FCUart_BufferLength[u8Channel] - (uint8)1U] =
            Lin_LL_CheckSumCalc(u8Channel, LIN_CLASSIC_CS);
    }
    else
    {
        Lin_FCUart_CheckSumMode[u8Channel] = pPduInfoPtr->Cs;
        /* [SWS_Lin_00019] */
        if (Lin_FCUart_CheckSumMode[u8Channel] == LIN_CLASSIC_CS)
        {
            Lin_FCUart_Buffer[u8Channel][Lin_FCUart_BufferLength[u8Channel] - (uint8)1U] =
                Lin_LL_CheckSumCalc(u8Channel, LIN_CLASSIC_CS);
        }
        else
        {
            Lin_FCUart_Buffer[u8Channel][Lin_FCUart_BufferLength[u8Channel] - (uint8)1U] =
                Lin_LL_CheckSumCalc(u8Channel, LIN_ENHANCED_CS);
        }
    }
    /*************** End ***************/
    /* Set next byte to send the sync byte. This will be used in the transmission complete interrupt */
    Lin_FCUart_BufferPtr[u8Channel] = SYNC_BYTE_OFFSET_U8;

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_08();
    {
        /* Disable all error interrupt */
        FCUART_LIN_HWA_DisableErrorInterrupt(pLinHwPtr);

        FCUART_LIN_HWA_ClearReceiveTransmit(pLinHwPtr);

        FCUART_LL_DelayFunctionClk(u8Channel, 2);

        FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);

        FCUART_LIN_HWA_StartReceive(pLinHwPtr);
        FCUART_LL_DelayFunctionClk(u8Channel, 2);

#if (LIN_BRKD_SUPPORT == STD_ON)
        FCUART_LIN_HWA_SendBreakField(pLinHwPtr);
#else
        /* Set baudrate */
        FCUART_LL_ChangeBaudrate(u8Channel);
        FCUART_LIN_HWA_SetData(pLinHwPtr, (uint32)0x00);
#endif
        Lin_FCUart_WaitBreakFlag[u8Channel] = FALSE;
        FCUART_LIN_HWA_StartTransmit(pLinHwPtr);
        FCUART_LL_DelayFunctionClk(u8Channel, 2);
        FCUART_LIN_HWA_EnableTransmitCompleteInterrupt(pLinHwPtr);

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
        /* Start the timer to check for frame timeout. */
        /* Timeout duration(in microseconds) after sending break */
        LIN_START_TIMER_NOTIFICATION(u8Channel,
                                     (Lin_FCUart_pConfig[u8Channel]->HeaderTimeoutValue +
                                      (Lin_FCUart_pConfig[u8Channel]->ResponseTimeoutValue *
                                       (uint32)(Lin_FCUart_BufferLength[u8Channel] - 2UL))));
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_08();
}
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

/**
 * @brief   Sends a wake up signal to the Lin bus.
 * @details This function shall sent a wake up signal to the LIN bus
 *          and put the Lin channel in LIN_CH_OPERATIONAL state.
 *
 * @param[in]   u8Channel LIN channel number
 * @param[in]   u8Module  Lin module to be addressed.
 *
 * @return      void.
 *
 */
LIN_TEXT_SECTION void Lin_LL_WakeUp(uint8 u8Channel, uint8 u8Module)
{
    uint32             u32TempBaudrate;
    uint8              u8TempWakeUpByte;
    uint32             u32TempResult   = (uint32)0U;
    uint32             u32TempTryCount = (uint32)0U;
    FCUART_Type *const pLinHwPtr       = LIN_PTRS[u8Module];

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_09();
    {
        /* Stop any ongoing transmission */
        /* Disable FCUART Receiver and Transmitter interrupt */
        FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
        FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);

        /* Disable FCUART Transmitter complete interrupt */
        FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(pLinHwPtr);
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_09();

    /* Set timeout check */
    /* [SWS_Lin_00097] [FMR_Lin_0008] */
    do
    {
        u32TempResult = FCUART_LIN_HWA_GetStatus(pLinHwPtr,
                                                 (FCUART_STAT_TCF_MASK | FCUART_STAT_TDREF_MASK));
        /* check transmit flag */
        if ((FCUART_STAT_TCF_MASK | FCUART_STAT_TDREF_MASK) == u32TempResult)
        {
            break;
        }
        else
        {
            u32TempTryCount++;
        }
    }
    while (u32TempTryCount <= LIN_TIMEOUT_TIMES);

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_10();
    {
        /* Reset Buffer Length if Lin channel already has sleeped */
        if (LIN_CH_SLEEP_STATE == Lin_SM_ChStatus[u8Channel])
        {
            Lin_FCUart_BufferLength[u8Channel] = (uint8)0U;
        }

        /* Disable wake up detection */
        /* Disable able RX Input Active Edge Interrupt Enable */
        /* Clear RX Pin Active Edge Interrupt Flag */
        FCUART_LL_StopSleepDetection(u8Channel);
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_10();

    /* Assign wakeup signal to satisfy Lin Specifications specifies that
     *  wakeup signal shall be in range from 250us to 5 ms.
     */
    /* [SWS_Lin_00209] */
    u32TempBaudrate = Lin_FCUart_pConfig[u8Channel]->u32LinBaudRate;
    if (u32TempBaudrate > (uint32)10000U)
    {
        u8TempWakeUpByte = (uint8)0x80U;
    }
    else
    {
        u8TempWakeUpByte = (uint8)0xF8U;
    }

    FCUART_LIN_HWA_ClearReceiveTransmit(pLinHwPtr);
    FCUART_LL_DelayFunctionClk(u8Channel, 2);
    FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);
    FCUART_LIN_HWA_StartReceive(pLinHwPtr);
    FCUART_LL_DelayFunctionClk(u8Channel, 2);
    FCUART_LIN_HWA_SetData(pLinHwPtr, u8TempWakeUpByte);
    FCUART_LIN_HWA_StartTransmit(pLinHwPtr);
    FCUART_LL_DelayFunctionClk(u8Channel, 2);
}

/**
 * @brief   Wake up the Lin channel.
 * @details This function shall put the Lin channel in LIN_CH_OPERATIONAL state without
 *          sending a wake up signal to the Lin bus
 *
 * @param[in]   u8Channel LIN channel number
 * @param[in]   u8Module  Lin module to be addressed.
 *
 * @return      void.
 *
 */
/* [SWS_Lin_00262] */
LIN_TEXT_SECTION void Lin_LL_WakeupInternal(uint8 u8Channel, uint8 u8Module)
{
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    /* Reset Buffer Length if Lin channel has already sleeped */
    if (LIN_CH_SLEEP_STATE == Lin_SM_ChStatus[u8Channel])
    {
        Lin_FCUart_BufferLength[u8Channel] = (uint8)0U;
    }

    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_11();
    {
        /* Stop any ongoing transmission */
        /* Disable FCUART Receiver and Transmitter interrupt */
        FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
        FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);
        /* Disable FCUART Transmitter complete interrupt */
        FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(pLinHwPtr);

        /* Disable wake up detection */
        /* Clear RX Pin Active Edge Interrupt Flag */
        /* Disable RX Input Active Edge Interrupt Enable */
        FCUART_LL_StopSleepDetection(u8Channel);
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_11();
}

#if (LIN_HAS_SLAVE_NODE == STD_ON)
/**
 * @brief   This function puts current node to Idle state.
 * @details This function shall put the Lin channel to Idle state.
 *
 * @param[in]   u8Module Lin module to be addressed.
 *
 * @return      void.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_GoToIdleState(uint8 u8Module)
{
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr,
                                  FCUART_STAT_LBKDIF_MASK | FCUART_STAT_RPAEIF_MASK |
                                      FCUART_STAT_RORF_MASK | FCUART_STAT_NF_MASK |
                                      FCUART_STAT_FEF_MASK | FCUART_STAT_PEF_MASK);
    /* Enable LIN break detect interrupt (Only in slave node)*/
    FCUART_LIN_HWA_SetLinBreakDetectEnable(pLinHwPtr, TRUE);
    FCUART_LIN_HWA_EnableBreakDetectInterrupt(pLinHwPtr);

    /* Enable error interrupt */
    FCUART_LIN_HWA_EnableErrorInterrupt(pLinHwPtr);
    FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
}
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/

/************************* All of interrupt about Lin module *************************/
#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
/**
 * @brief       This function handles the wakeup interrupt.
 *
 * @param[in] u8Channel     LIN channel number
 * @param[in] u8Module      Lin module to be addressed.
 * @return
 */
LIN_TEXT_SECTION static void Lin_LL_RxEdgeInterruptHandle(const uint8 u8Channel, const uint8 u8Module)
{
    uint32                    u32Lin_STATErrReg_FlagStatus;
    uint32                    u32TempVal = 0;
    uint32                    i;
    FCUART_Type *const        pLinHwPtr      = LIN_PTRS[u8Module];
    const Lin_CoreConfigType *pLinCoreConfig = Lin_FCUart_pConfig[u8Channel];
    uint32                    u32CountLimit  = pLinCoreConfig->u16LinBaudWaitCount *
                           pLinCoreConfig->u32LinBaudOverSamplingRatio *
                           pLinCoreConfig->u32LinBaudRateDivisor;

    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_RPAEIF_MASK);

    if (FCUART_LIN_HWA_GetReceiveDataInverse(pLinHwPtr) != 0U)
    {
        /* clear idle interrupt flag */
        FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_IDLEF_MASK);
        /* disable idle interrupt */
        FCUART_LIN_HWA_DisableIdleInterrupt(pLinHwPtr);

        FCUART_LIN_HWA_SetReceiveDataInverse(pLinHwPtr, 0u);

        if (Lin_FCUart_IdleFlag[u8Channel] == FALSE)
        {
            FCUART_LIN_HWA_ClearReceive(LIN_PTRS[u8Module]);
            FCUART_LL_DelayFunctionClk(u8Channel, 2);
            FCUART_LIN_HWA_StartReceive(LIN_PTRS[u8Module]);
            FCUART_LL_DelayFunctionClk(u8Channel, 2);
        }
        else
        {

            Lin_FCUart_IdleFlag[u8Channel] = FALSE;
            /* Set wake up flag */
            Lin_FCUart_WakeupFlag[u8Channel] = TRUE;

            if (Lin_SM_ChStatus[u8Channel] == LIN_CH_SLEEP_STATE)
            {
                /* this case mean still in sleep state,rx data is not sysch */
                /* Discard FCUART Rx Buffer */
                /* PRQA S 3200 ++ #return value is not used.*/
                FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);
                /* PRQA S 3200 -- */

                SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_16();
                {
                    /* Clear Error Interrupts Flags */
                    u32Lin_STATErrReg_FlagStatus =
                        FCUART_LIN_HWA_GetStatus(pLinHwPtr, FCUART_STAT_ERRFLAG_MASK);
                    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, u32Lin_STATErrReg_FlagStatus);
                }
                SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_16();

                if (Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8LinWakeUpSup == (uint8)STD_ON)
                {
                    /* Indicates a valid timer wakeup event to ECU State Manager */
                    /* [SWS_Lin_00176] */
                    EcuM_CheckWakeup((EcuM_WakeupSourceType)Lin_FCUart_pConfig[u8Channel]
                                         ->pLinChannel->LinChannelWakeUpSrc);
                }
            }
        }
    }
    else
    {
        u32TempVal = Lin_SM_ChStatus[u8Channel];
        if (u32TempVal == LIN_CH_SLEEP_STATE)
        {
            /* need wait one bit to make sure start bit is completed.*/
            for (i = 0; i < u32CountLimit; i++)
            {
                if (FCUART_LIN_HWA_GetReceiveActiveFlag(pLinHwPtr) != FALSE)
                {
                    break;
                }
            }
            SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_12();
            {
                if (i != u32CountLimit)
                {
                    Lin_FCUart_IdleFlag[u8Channel] = FALSE;
                    FCUART_LIN_HWA_SetReceiveDataInverse(pLinHwPtr, 1u);
                    /* configure idle flag is set after 1 idle character */
                    FCUART_LIN_HWA_SetIdleConfig(pLinHwPtr, LIN_IDLECCONFIG_CHARACTER_1);
                    /* clear idle interrupt flag */
                    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_IDLEF_MASK);
                    /* enable idle interrupt */
                    FCUART_LIN_HWA_EnableIdleInterrupt(pLinHwPtr);
                }
                else
                {
                    FCUART_LIN_HWA_ClearReceive(LIN_PTRS[u8Module]);
                    FCUART_LL_DelayFunctionClk(u8Channel, 2);
                    FCUART_LIN_HWA_StartReceive(LIN_PTRS[u8Module]);
                    FCUART_LL_DelayFunctionClk(u8Channel, 2);
                }
            }
            SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_12();
        }
    }
}
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */

/**
 * @brief     Receive interrupt handler.
 *
 * @param[in] u8Channel     LIN channel number
 * @param[in] u8Module      Lin module to be addressed.
 * @return
 */
/* [SWS_Lin_00027] */
LIN_TEXT_SECTION static void Lin_LL_RxReceiveInterruptHandle(const uint8 u8Channel,
                                                             const uint8 u8Module)
{
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    if (LIN_MASTER_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
    {
        /* Received break field */
        /* [SWS_Lin_00239] */
        if (Lin_FCUart_WaitBreakFlag[u8Channel] == TRUE)
        {
            Lin_FCUart_WaitBreakFlag[u8Channel] = FALSE;

#if (LIN_BRKD_SUPPORT == STD_OFF)
            /* Break field sends completed */
            FCUART_LL_RecoverBaudrate(u8Channel);
#endif

            FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_ERRFLAG_MASK);
            /* Enable Error Interrupts */
            FCUART_LIN_HWA_EnableErrorInterrupt(pLinHwPtr);

            FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);

#if LIN_DEV_FIFO_SUPPORT == STD_OFF
            /* Transmit the next byte */
            FCUART_LIN_HWA_SetData(pLinHwPtr,
                                   (uint32)Lin_FCUart_Buffer[u8Channel][SYNC_BYTE_OFFSET_U8]);
        }
        else
        {
            Lin_LL_RxDataReadyHandler(u8Module, u8Channel);
        }
#else  /* LIN_DEV_FIFO_SUPPORT == STD_ON */
        }
        Lin_LL_RxDataFifoUsedHandle(u8Module, u8Channel);
#endif /* LIN_DEV_FIFO_SUPPORT == STD_OFF */
    }
/* [SWS_Lin_00273] */
#if (LIN_HAS_SLAVE_NODE == STD_ON)
    else
    {
        Lin_LL_SlaveNodeRxHandle(u8Module, u8Channel);
    }
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
}

#if (LIN_HAS_SLAVE_NODE == STD_ON)
/**
 * @brief   This function handles slave node idle state.
 * @details This function will set the node state to idle and call the callback function.
 *
 * @param[in]   u8Channel           LIN channel number
 * @param[in]   u8Module            Lin module to be addressed.
 * @param[in]   LinCurrentState     Lin current state.
 */
LIN_TEXT_SECTION static void Lin_LL_HandleSlaveNodeIdle(uint8                u8Channel,
                                                        uint8                u8Module,
                                                        Lin_StateStructType *LinCurrentState)
{
    if (LIN_SLAVE_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
    {

        switch (LinCurrentState->CurrentEventId)
        {
            case LIN_READBACK_ERROR:
                LinIf_LinErrorIndication(u8Channel, LIN_ERR_RESP_DATABIT);
                break;
            case LIN_SYNC_ERROR:
                LinIf_LinErrorIndication(u8Channel, LIN_ERR_HEADER);
                break;
            case LIN_CHECKSUM_ERROR_EVENT:
                LinIf_LinErrorIndication(u8Channel, LIN_ERR_RESP_CHKSUM);
                break;
            case LIN_FRAME_ERROR:
                LinIf_LinErrorIndication(u8Channel, LIN_ERR_RESP_STOPBIT);
                break;
            case LIN_RX_TIMEOUT_ERROR:
                LinIf_LinErrorIndication(u8Channel, LIN_ERR_INC_RESP);
                break;
            case LIN_RX_OVERRUN_ERROR:
                LinIf_LinErrorIndication(u8Channel, LIN_ERR_INC_RESP);
                break;
            default:
                /* do nothing */
                break;
        }

        Lin_LL_GoToIdleState(u8Module);
        /* Notifies the user of the current transmission status. */
        if (NULL_PTR != Lin_FCUart_pConfig[u8Channel]->Callback)
        {
            Lin_FCUart_pConfig[u8Channel]->Callback(u8Channel, LinCurrentState);
        }
    }
}

/**
 * @brief This function handles the break interruption.
 *
 * @param[in] u8Channel     LIN channel number
 * @param[in] u8Module      Lin module to be addressed.
 * @return
 */
/* [SWS_Lin_00272] */
LIN_TEXT_SECTION static void Lin_LL_BreakDetectInterruptHandle(const uint8 u8Channel,
                                                               const uint8 u8Module)
{
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;
    FCUART_Type *const   pLinHwPtr       = LIN_PTRS[u8Module];
    uint32               u32TempResult   = 0U;

    FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);

    u32TempResult = FCUART_LIN_HWA_GetStatus(pLinHwPtr, FCUART_STAT_RDRFF_MASK);
    if (FCUART_STAT_RDRFF_MASK == u32TempResult)
    {
        (void)FCUART_LIN_HWA_GetData(pLinHwPtr);
    }
    /* Clear Lin break detect flag */
    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, (uint32)FCUART_STAT_LBKDIF_MASK);
    /* Disable lin break detect */
    FCUART_LIN_HWA_SetLinBreakDetectEnable(pLinHwPtr, FALSE);
    /* Disable the lin break detect interrupt */
    FCUART_LIN_HWA_DisableBreakDetectInterrupt(pLinHwPtr);

#if LIN_DEV_FIFO_SUPPORT == STD_ON
    FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, 0U);
#endif /*LIN_DEV_FIFO_SUPPORT == STD_ON*/

    /* Enable Receiver Interrupt */
    FCUART_LIN_HWA_EnableReceiveInterrupt(pLinHwPtr);

    LinCurrentState->CurrentNodeState = LIN_NODE_STATE_RECV_SYNC;

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
    /* Call notification to start timer for the checking header reception timeout */
    /* Header Timeout duration(in microseconds) after detection break */
    LIN_START_TIMER_NOTIFICATION(u8Channel, Lin_FCUart_pConfig[u8Channel]->HeaderTimeoutValue);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
}
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/

/**
 * @brief This function handles transfer completion interrupt.
 *
 * @param[in] u8Channel     LIN channel number
 * @param[in] u8Module      Lin module to be addressed.
 * @return
 */
LIN_TEXT_SECTION static void Lin_LL_TxCompleteInterruptHandle(const uint8 u8Channel,
                                                              const uint8 u8Module)
{
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

#if LIN_DEV_FIFO_SUPPORT == STD_ON
    uint8 u8HeaderCmd;
    uint8 u8BufferLen;

    u8BufferLen = Lin_FCUart_BufferLength[u8Channel];
    u8HeaderCmd = Lin_SM_TransmitHeaderCmd[u8Channel];
#endif /*LIN_DEV_FIFO_SUPPORT == STD_ON*/

    /* Disable FCUART Transmitter complete interrupt */
    FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(pLinHwPtr);

    if (Lin_FCUart_BufferPtr[u8Channel] == SYNC_BYTE_OFFSET_U8)
    {
        FCUART_LIN_HWA_EnableReceiveInterrupt(pLinHwPtr);
        /* Wait for rx interrupt */
        Lin_FCUart_WaitBreakFlag[u8Channel] = TRUE;
    }
#if LIN_DEV_FIFO_SUPPORT == STD_ON
    else
    {
        Lin_SM_ChFrameStatus[u8Channel] = LIN_TX_HEADER_COMPLETE_STATE;

        if (u8HeaderCmd == LIN_RX_RES_COMMAND)
        {
            /* Enable Receive Interrupt */
            FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, (uint32)(u8BufferLen - 1U));
            FCUART_LIN_HWA_EnableReceiveInterrupt(pLinHwPtr);
        }
        else if (u8HeaderCmd == LIN_IGNORE_COMMAND)
        {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
            /* Call the stop timer notification when the header has finished passing when
             * LIN_IGNORE_COMMAND */
            LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
        }
        else
        {
            /* Irrelevant state */
        }
    }
#endif /*LIN_DEV_FIFO_SUPPORT == STD_ON*/
}

/**
 * @brief The function handles the transmission empty interrupt.
 *
 * @param[in] u8Channel     LIN channel number
 * @param[in] u8Module      Lin module to be addressed.
 * @return
 */
LIN_TEXT_SECTION static void Lin_LL_TxEmptyInterruptHandle(const uint8 u8Channel, const uint8 u8Module)
{
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];
    uint8              u8BufferPos;

    /* Disable FCUART Transmitter interrupt */
    FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);
    /* Enable Receive Interrupt */
    FCUART_LIN_HWA_EnableReceiveInterrupt(pLinHwPtr);

    /* Transmit the next byte */
    /* [SWS_Lin_00096] */
    u8BufferPos = Lin_FCUart_BufferPtr[u8Channel];
    FCUART_LIN_HWA_SetData(pLinHwPtr, (uint32)Lin_FCUart_Buffer[u8Channel][u8BufferPos]);
}

/**
 * @brief   Interrupt handler for TX and RX on FCUART.
 * @details This function shall manage all the RX and TX ISRs on the
 *          addressed channel.
 *
 * @param[in]  u8Module     LIN module to be addressed.
 *
 * @return     void.
 *
 * @note       Internal driver function.
 *
 */
/* [SWS_Lin_00028] [SWS_Lin_00155] [SWS_Lin_00157] [SWS_Lin_00210] [FMR_Lin_0005] */
LIN_TEXT_SECTION void Lin_LL_TxRxInterruptHandler(const uint8 u8Module)
{
    uint8              u8Channel;
    uint32             u32LinStatReg;
    uint32             u32LinCtrlReg;
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];
#if ((LIN_HAS_SLAVE_NODE == STD_ON) || (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON))
    uint32 u32LinBaudReg;
#endif
    uint32 LinCurrentPartionId = GET_CPU_ID();

    /* Get the logical channel using this HW channel */
    u8Channel = Lin_HwToChannel[u8Module];

    /* [FMR_Lin_0006] */
    if ((u8Channel != (uint8)0XFF) && (NULL_PTR != Lin_FCUart_pConfig[u8Channel]) &&
        (LinCurrentPartionId == Lin_FCUart_pConfig[u8Channel]->pLinChannel->ChannelCoreId))
    {
        /*Get the status of the FCUART*/
        u32LinStatReg = FCUART_LIN_HWA_ReadSTAT(pLinHwPtr) & FCUART_STAT_ALLFLAG_MASK;
        u32LinCtrlReg = FCUART_LIN_HWA_GetCtrl(pLinHwPtr);

#if ((LIN_HAS_SLAVE_NODE == STD_ON) || (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON))
        u32LinBaudReg = FCUART_LIN_HWA_GetBaud(pLinHwPtr);
#endif

        if (u32LinStatReg != (uint32)0U)
        {
            /* [FMR_Lin_0007] */
            /* Transmit Interrupt enable*/
            /* Transmit Data Register Empty Flag is set */
            if (((u32LinStatReg & FCUART_STAT_TDREF_MASK) == FCUART_STAT_TDREF_MASK) &&
                ((u32LinCtrlReg & FCUART_CTRL_TIE_MASK) == FCUART_CTRL_TIE_MASK))
            {
                /* Transmit Data Register Empty interrupt handle */
                Lin_LL_TxEmptyInterruptHandle(u8Channel, u8Module);
            }
            /* Receiver Interrupt enable */
            /* Receive Data Register Full Flag is set */
            else if (((u32LinStatReg & FCUART_STAT_RDRFF_MASK) == FCUART_STAT_RDRFF_MASK) &&
                     ((u32LinCtrlReg & FCUART_CTRL_RIE_MASK) == FCUART_CTRL_RIE_MASK))
            {
                /* Rx Data interrupt handle */
                Lin_LL_RxReceiveInterruptHandle(u8Channel, u8Module);
            }
            /* Transmission Complete Interrupt enable */
            /* Transmission Complete Flag is set */
            else if (((u32LinStatReg & FCUART_STAT_TCF_MASK) == FCUART_STAT_TCF_MASK) &&
                     ((u32LinCtrlReg & FCUART_CTRL_TCIE_MASK) == FCUART_CTRL_TCIE_MASK))
            {
                /* Transmit Data Complete interrupt handle */
                Lin_LL_TxCompleteInterruptHandle(u8Channel, u8Module);
            }
#if (LIN_HAS_SLAVE_NODE == STD_ON)
            else if (((u32LinStatReg & FCUART_STAT_LBKDIF_MASK) == FCUART_STAT_LBKDIF_MASK) &&
                     ((u32LinBaudReg & FCUART_BAUD_LBKDIE_MASK) == FCUART_BAUD_LBKDIE_MASK))
            {
                /* LIN break character detected handle */
                Lin_LL_BreakDetectInterruptHandle(u8Channel, u8Module);
            }
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
            /* RX Input Active Edge Interrupt enable */
            /* RX Input Active Edge Interrupt Flag is set */
            /* [SWS_Lin_00037] */
            else if (((u32LinStatReg & FCUART_STAT_RPAEIF_MASK) == FCUART_STAT_RPAEIF_MASK) &&
                     ((u32LinBaudReg & FCUART_BAUD_RIAEIE_MASK) == FCUART_BAUD_RIAEIE_MASK))
            {
                /* Rx Input Active Edge interrupt handle */
                Lin_LL_RxEdgeInterruptHandle(u8Channel, u8Module);
            }
            /* Idle Line Interrupt Detected */
            else if (((u32LinStatReg & FCUART_STAT_IDLEF_MASK) == FCUART_STAT_IDLEF_MASK) &&
                     ((u32LinCtrlReg & FCUART_CTRL_IIE_MASK) == FCUART_CTRL_IIE_MASK))
            {
                Lin_LL_IdleInterruptHandler(u8Module, u8Channel);
            }
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */
            else
            {
                Lin_LL_ShutDownReset(u8Module);
            }
        }
        else
        {
            Lin_LL_ShutDownReset(u8Module);
        }
    }
    else
    {
        Lin_LL_ShutDownReset(u8Module);
    }
}

/**
 * @brief   Clear STAT Reg and disable interrupt.
 * @details This function shall reset status.
 *
 * @param[in]   u8Module    LIN module to be addressed.
 *
 * @return      void.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_ShutDownReset(uint8 u8Module)
{
    uint32             u32TempStat;
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];
    uint8              u8Channel;

    u8Channel = Lin_HwToChannel[u8Module];
    /* clear all status */
    u32TempStat = FCUART_LIN_HWA_ReadSTAT(pLinHwPtr);
    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, u32TempStat);

    /* Disable FCUART Transmitter complete interrupt */
    FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(pLinHwPtr);

    /* Disable FCUART Receiver and Transmitter interrupt */
    FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
    FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);
    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr,
                                  FCUART_STAT_LBKDIF_MASK | FCUART_STAT_RPAEIF_MASK |
                                      FCUART_STAT_RORF_MASK | FCUART_STAT_NF_MASK |
                                      FCUART_STAT_FEF_MASK | FCUART_STAT_PEF_MASK);
    /* Enable LIN break detect interrupt (Only in slave node)*/
    FCUART_LIN_HWA_ClearReceiveTransmit(pLinHwPtr);
    FCUART_LL_DelayFunctionClk(u8Channel, 2);
    FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);
    FCUART_LIN_HWA_StartReceiveTransmit(pLinHwPtr);
    FCUART_LL_DelayFunctionClk(u8Channel, 2);

    if ((Lin_FCUart_pConfig[u8Channel]->NodeFunction == LIN_SLAVE_NODE) &&
        (Lin_SM_ChStatus[u8Channel] != LIN_CH_SLEEP_STATE))
    {

        FCUART_LIN_HWA_SetLinBreakDetectEnable(pLinHwPtr, TRUE);
        FCUART_LIN_HWA_EnableBreakDetectInterrupt(pLinHwPtr);
    }
}

#if LIN_DEV_FIFO_SUPPORT == STD_OFF
/**
 * @brief   Interrupt handler for RX Data Register Full on FCUART.
 * @details This function shall manage the RX ISRs on the
 *          addressed channel.
 *
 * @param[in]   u8Module LIN module to be addressed.
 * @param[in]   u8Channel LIN channel number.
 *
 * @return      void.
 *
 */
/* [SWS_Lin_00060] [SWS_Lin_00240] */
LIN_TEXT_SECTION static void Lin_LL_RxDataReadyHandler(uint8 u8Module, uint8 u8Channel)
{
    uint32             u32DataRegVal;
    uint8              u8BufferLen;
    uint8              u8BufferPos;
    uint8              u8HeaderCmd;
    uint8              u8TempVal;
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    /* Disable Receiver Interrupt */
    FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);

    /* Read the data register */
    u32DataRegVal                        = FCUART_LIN_HWA_GetDataRegStatus(pLinHwPtr);
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;
    u8BufferPos                          = Lin_FCUart_BufferPtr[u8Channel];
    u8BufferLen                          = Lin_FCUart_BufferLength[u8Channel];
    u8TempVal                            = Lin_FCUart_Buffer[u8Channel][u8BufferPos];
    u8HeaderCmd                          = Lin_SM_TransmitHeaderCmd[u8Channel];

    if (u8BufferPos < u8BufferLen)
    {
        /* this case mean sysch has transmitted, PID still need to transmit */
        /* [SWS_Lin_00239] */
        if (u8BufferPos == SYNC_BYTE_OFFSET_U8)
        {
            SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_13();
            {
                if ((uint8)(u32DataRegVal & (uint8)0xFFU) != u8TempVal)
                {
                    Lin_SM_ChFrameErrStatus[u8Channel] = LIN_BIT_ERROR;
                }
                else
                {
                    /* Enable Transmit Interrupt */
                    FCUART_LIN_HWA_EnableTransmitInterrupt(pLinHwPtr);
                }
            }
            SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_13();
        }
        else
        {
            switch (u8HeaderCmd)
            {
                case LIN_TX_RES_COMMAND:
                {
                    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_14();
                    if ((uint8)(u32DataRegVal & (uint8)0xFFU) != u8TempVal)
                    {
                        Lin_SM_ChFrameErrStatus[u8Channel] = LIN_BIT_ERROR;
                        LinCurrentState->CurrentEventId    = LIN_READBACK_ERROR;
                        SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_14();
#if (LIN_HAS_SLAVE_NODE == STD_ON)
                        Lin_LL_HandleSlaveNodeIdle(u8Channel, u8Module, LinCurrentState);
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
                    }
                    else
                    {
                        if (u8BufferPos == (u8BufferLen - (uint8)1U))
                        {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
                            /* Call the stop timer notification when the frame has finished passing */
                            LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
                            Lin_SM_ChFrameStatus[u8Channel]   = LIN_TX_COMPLETE_STATE;
                            LinCurrentState->CurrentEventId   = LIN_TX_COMPLETED;
                            LinCurrentState->CurrentNodeState = LIN_NODE_STATE_SEND_DATA_COMPLETED;
                            SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_14();
#if (LIN_HAS_SLAVE_NODE == STD_ON)
                            Lin_LL_HandleSlaveNodeIdle(u8Channel, u8Module, LinCurrentState);

                            if (LIN_SLAVE_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
                            {
                                LinIf_TxConfirmation(u8Channel);
                            }

#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
                        }
                        else
                        {
                            if (u8BufferPos == PID_BYTE_OFFSET_U8)
                            {
                                Lin_SM_ChFrameStatus[u8Channel] = LIN_TX_HEADER_COMPLETE_STATE;
                            }
                            /* Enable Transmit Interrupt */
                            FCUART_LIN_HWA_EnableTransmitInterrupt(pLinHwPtr);
                            SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_14();
                        }
                    }
                }
                break;
                case LIN_TX_SLEEP_COMMAND:
                {
                    if ((uint8)(u32DataRegVal & (uint8)0xFFU) != u8TempVal)
                    {
                        Lin_SM_ChFrameErrStatus[u8Channel] = LIN_BIT_ERROR;
                    }
                    else
                    {
                        if (u8BufferPos == (u8BufferLen - (uint8)1U))
                        {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
                            /* Call the stop timer notification when the frame has finished passing */
                            LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
                            Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_TX_NO_COMMAND;
                            /* Reset buffer length */
                            Lin_FCUart_BufferLength[u8Channel] = (uint8)0U;

#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
                            SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_15();
                            {
                                /* Enable wake up detection */
                                /* Clear RX Pin Active Edge Interrupt Flag */
                                /* Enable RX Input Active Edge Interrupt Enable */
                                /* [SWS_Lin_00220] */
                                FCUART_LL_StartSleepDetection(u8Channel);
                            }
                            SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_15();
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */
                        }
                        else
                        {
                            SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_16();
                            {
                                if (u8BufferPos == PID_BYTE_OFFSET_U8)
                                {
                                    Lin_SM_ChFrameStatus[u8Channel] = LIN_TX_HEADER_COMPLETE_STATE;
                                }
                                /* Enable Transmit Interrupt */
                                FCUART_LIN_HWA_EnableTransmitInterrupt(pLinHwPtr);
                            }
                            SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_16();
                        }
                    }
                }
                break;
                case LIN_RX_RES_COMMAND:
                {
                    if (((uint8)(u32DataRegVal & (uint8)0xFFU) != u8TempVal) &&
                        (PID_BYTE_OFFSET_U8 == Lin_FCUart_BufferPtr[u8Channel]))
                    {
                        Lin_SM_ChFrameErrStatus[u8Channel] = LIN_BIT_ERROR;
                    }
                    else
                    {
                        /* this case mean the frame is a rx response frame */
                        Lin_LL_InterruptSourceSlave(u8Module, u8Channel, u32DataRegVal);
                    }
                }
                break;
                case LIN_IGNORE_COMMAND:
                {
                    if ((uint8)(u32DataRegVal & (uint8)0xFFU) != u8TempVal)
                    {
                        Lin_SM_ChFrameErrStatus[u8Channel] = LIN_BIT_ERROR;
                    }
                    else
                    {
                        Lin_SM_ChFrameStatus[u8Channel] = LIN_TX_HEADER_COMPLETE_STATE;
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
                        /* Call the stop timer notification when the header has finished passing
                         * when LIN_IGNORE_COMMAND */
                        LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
                    }
                }
                break;
                default: /* PRQA S 2016 */
                    break;
            }
        }

        if ((u8HeaderCmd == LIN_TX_SLEEP_COMMAND) &&
            (Lin_SM_ChFrameErrStatus[u8Channel] != LIN_NO_ERROR))
        {
            SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_17();
            {
                Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_TX_NO_COMMAND;
                /* Enable wake up detection */
                /* Clear RX Pin Active Edge Interrupt Flag */
                /* Enable RX Input Active Edge Interrupt Enable */
                FCUART_LL_StartSleepDetection(u8Channel);
            }
            SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_17();
        }
        /* [SWS_Lin_00096] */
        Lin_FCUart_BufferPtr[u8Channel] = (uint8)(Lin_FCUart_BufferPtr[u8Channel] + 1U);
    }
}
#endif

#if LIN_DEV_FIFO_SUPPORT == STD_ON
/**
 * @brief   This function is to handle the data received from the FIFO.
 *
 * @param u8Module       LIN module to be addressed.
 * @param u8Channel      LIN channel number
 *
 * @return
 */
LIN_TEXT_SECTION static void Lin_LL_RxDataFifoUsedHandle(uint8 u8Module, uint8 u8Channel)
{
    uint8 u8HeaderCmd;
    uint8 u8BufferLen;
    uint8 u8RxFifoCount;

#if (LIN_HAS_SLAVE_NODE == STD_ON)
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
    volatile uint8    *pBufferPtr = Lin_FCUart_Buffer[u8Channel];
    FCUART_Type *const pLinHwPtr  = LIN_PTRS[u8Module];

    u8HeaderCmd   = Lin_SM_TransmitHeaderCmd[u8Channel];
    u8BufferLen   = Lin_FCUart_BufferLength[u8Channel];
    u8RxFifoCount = FCUART_LIN_HWA_GetFifoRxCount(pLinHwPtr);

    /* Disable Receiver Interrupt */
    FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);

    switch (u8HeaderCmd)
    {
        case LIN_TX_RES_COMMAND:
        case LIN_TX_SLEEP_COMMAND:
        {
            if (LIN_MASTER_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
            {
                /* Received break field */
                if (Lin_FCUart_BufferPtr[u8Channel] == SYNC_BYTE_OFFSET_U8)
                {
                    Lin_FCUart_BufferPtr[u8Channel] = PID_BYTE_OFFSET_U8;

                    /* Master res send header and response*/
                    for (uint8 u8Index = 0; u8Index < u8BufferLen; u8Index++)
                    {
                        uint8 data = *pBufferPtr;
                        pBufferPtr++;
                        FCUART_LIN_HWA_SetData(pLinHwPtr, (uint32)data);
                    }

                    FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, (uint32)(u8BufferLen - 1U));

                    /* Enable Receiver Interrupt */
                    FCUART_LIN_HWA_EnableReceiveInterrupt(pLinHwPtr);
                }
                else
                {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
                    /* Call notification to handle the completion of frame transmission */
                    LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */

                    if (u8RxFifoCount == u8BufferLen)
                    {
                        Lin_SM_ChFrameStatus[u8Channel] = LIN_TX_COMPLETE_STATE;
                        Lin_FCUart_BufferPtr[u8Channel] = u8BufferLen;
                        FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);

                        if (u8HeaderCmd == LIN_TX_SLEEP_COMMAND)
                        {
                            Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_TX_NO_COMMAND;
                            /* Reset buffer length */
                            Lin_FCUart_BufferLength[u8Channel] = (uint8)0U;

                            /* Enable wake up detection */
                            /* Clear RX Pin Active Edge Interrupt Flag */
                            /* Enable RX Input Active Edge Interrupt Enable */
                            FCUART_LL_StartSleepDetection(u8Channel);
                        }
                    }
                    else
                    {
                        Lin_SM_ChFrameErrStatus[u8Channel] = LIN_BIT_ERROR;
                    }
                }
            }
#if (LIN_HAS_SLAVE_NODE == STD_ON)
            else /* LIN_SLAVE_NODE */
            {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
                /* Call notification to handle the completion of frame transmission */
                LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */

                if (u8RxFifoCount == (u8BufferLen - DATA_OFFSET_U8))
                {
                    Lin_FCUart_BufferPtr[u8Channel] = u8BufferLen;
                    LinCurrentState->CurrentEventId = LIN_TX_COMPLETED;
                    if (LIN_SLAVE_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
                    {
                        LinIf_TxConfirmation(u8Channel);
                    }
                }
                else
                {
                    Lin_SM_ChFrameErrStatus[u8Channel] = LIN_BIT_ERROR;
                    LinCurrentState->CurrentEventId    = LIN_READBACK_ERROR;
                }

                FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, 0U);
                Lin_LL_HandleSlaveNodeIdle(u8Channel, u8Module, LinCurrentState);
            }
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
        }
        break;
        case LIN_RX_RES_COMMAND:
        case LIN_IGNORE_COMMAND:
        {
            if (LIN_MASTER_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
            {
                /* Received break field */
                if (Lin_FCUart_BufferPtr[u8Channel] == SYNC_BYTE_OFFSET_U8)
                {
                    Lin_FCUart_BufferPtr[u8Channel] = PID_BYTE_OFFSET_U8;

                    FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);

                    /*Slave res only send header*/
                    for (uint8 u8Index = 0; u8Index < DATA_OFFSET_U8; u8Index++)
                    {
                        uint8 data = *pBufferPtr;
                        pBufferPtr++;
                        FCUART_LIN_HWA_SetData(pLinHwPtr, (uint32)data);
                    }

                    FCUART_LIN_HWA_EnableTransmitCompleteInterrupt(pLinHwPtr);
                }
                else
                {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
                    /* Call notification to handle the completion of frame reception */
                    LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */

                    Lin_FCUart_BufferPtr[u8Channel] = u8BufferLen;
                    for (uint8 u8Index = 0U; u8Index < u8BufferLen; u8Index++)
                    {
                        Lin_FCUart_Buffer[u8Channel][u8Index] = FCUART_LIN_HWA_GetData(pLinHwPtr);
                    }

                    Lin_LL_ChecksumHandle(u8Channel);
                }
            }
#if (LIN_HAS_SLAVE_NODE == STD_ON)
            else /* LIN_SLAVE_NODE */
            {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
                /* Call notification to handle the completion of frame reception */
                LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */

                Lin_FCUart_BufferPtr[u8Channel] = u8BufferLen;
                for (uint8 u8Index = DATA_OFFSET_U8; u8Index < u8BufferLen; u8Index++)
                {
                    Lin_FCUart_Buffer[u8Channel][u8Index] = FCUART_LIN_HWA_GetData(pLinHwPtr);
                }
                Lin_LL_ChecksumHandle(u8Channel);
                if (LIN_SLAVE_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
                {
                    if (LinCurrentState->CurrentEventId == LIN_RX_COMPLETED)
                    {
                        Lin_HW_CopyData(u8Channel, (uint8 *)Lin_FCUart_Slave_Buffer[u8Channel]);
                        LinIf_RxIndication(u8Channel, (uint8 *)Lin_FCUart_Slave_Buffer[u8Channel]);
                    }
                }
                FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, 0U);
                Lin_LL_HandleSlaveNodeIdle(u8Channel, u8Module, LinCurrentState);
            }
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
        }
        break;
        default: /* ignore state */
            break;
    }
}
#endif

/**
 * @brief This function handles the checksum calculation
 *
 * @param u8Channel     LIN channel number
 * @return
 */
LIN_TEXT_SECTION static void Lin_LL_ChecksumHandle(uint8 u8Channel)
{
    uint8 u8FrameId;
    uint8 u8CheckSum;
    uint8 u8BufferLen;

    u8BufferLen                          = Lin_FCUart_BufferLength[u8Channel];
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;

    u8FrameId = Lin_FCUart_Buffer[u8Channel][PID_BYTE_OFFSET_U8];
    if ((u8FrameId == MASTER_REQ_DIAGNOSTIC_PID_U8) || (u8FrameId == SLAVE_RSP_DIAGNOSTIC_PID_U8))
    {
        u8CheckSum = Lin_LL_CheckSumCalc(u8Channel, LIN_CLASSIC_CS);
    }
    else
    {
        if (Lin_FCUart_CheckSumMode[u8Channel] == LIN_CLASSIC_CS)
        {
            u8CheckSum = Lin_LL_CheckSumCalc(u8Channel, LIN_CLASSIC_CS);
        }
        else
        {
            u8CheckSum = Lin_LL_CheckSumCalc(u8Channel, LIN_ENHANCED_CS);
        }
    }

    if (u8CheckSum != Lin_FCUart_Buffer[u8Channel][u8BufferLen - 1U])
    {
        /* Set checksum error */
        Lin_SM_ChFrameErrStatus[u8Channel] = LIN_CHECKSUM_ERROR;
        LinCurrentState->CurrentEventId    = LIN_CHECKSUM_ERROR_EVENT;
    }
    else
    {
        /* Set Rx complete */
        Lin_SM_ChFrameStatus[u8Channel]   = LIN_RX_COMPLETE_STATE;
        LinCurrentState->CurrentEventId   = LIN_RX_COMPLETED;
        LinCurrentState->CurrentNodeState = LIN_NODE_STATE_RECV_DATA_COMPLETED;
    }
}

#if LIN_DEV_FIFO_SUPPORT == STD_OFF
/**
 * @brief   Interrupt handler for RX Data Register Full on FCUART in rx response command.
 * @details This function shall manage the RX ISRs on the
 *          addressed channel when the frame command is a rx response command.
 *
 * @param[in]   u8Module    LIN module to be addressed.
 * @param[in]   u8Channel   LIN channel number.
 * @param[in]   u32Data     Value of the data register.
 *
 * @return       void.
 */
LIN_TEXT_SECTION static void Lin_LL_InterruptSourceSlave(uint8 u8Module, uint8 u8Channel, uint32 u32Data)
{
    uint8 u8BufferLen;
    uint8 u8BufferPos;

#if (LIN_HAS_SLAVE_NODE == STD_ON)
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];
    u8BufferPos                  = Lin_FCUart_BufferPtr[u8Channel];
    u8BufferLen                  = Lin_FCUart_BufferLength[u8Channel];

    /* handler data */
    if ((u8BufferPos > PID_BYTE_OFFSET_U8) && (u8BufferPos < (u8BufferLen - (uint8)1U)))
    {
        /* receive data */
        Lin_FCUart_Buffer[u8Channel][u8BufferPos] = (uint8)(u32Data & (uint32)0xFFU);
        Lin_SM_ChFrameStatus[u8Channel]           = LIN_RX_ONGOING_STATE;

        /* still need to receive data */
        /* Enable Receiver Interrupt */
        FCUART_LIN_HWA_EnableReceiveInterrupt(pLinHwPtr);
    }
    /* checksum */
    else if (u8BufferPos == (u8BufferLen - (uint8)1U))
    {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
        /* Call notification to handle checksum error or reception completed */
        LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */

        /* receive last data */
        Lin_FCUart_Buffer[u8Channel][u8BufferPos] = (uint8)(u32Data & (uint32)0xFFU);

        Lin_LL_ChecksumHandle(u8Channel);

#if (LIN_HAS_SLAVE_NODE == STD_ON)
        Lin_LL_HandleSlaveNodeIdle(u8Channel, u8Module, LinCurrentState);
        if (LIN_SLAVE_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
        {
            if (LinCurrentState->CurrentEventId == LIN_RX_COMPLETED)
            {
                Lin_HW_CopyData(u8Channel, (uint8 *)Lin_FCUart_Slave_Buffer[u8Channel]);
                LinIf_RxIndication(u8Channel, (uint8 *)Lin_FCUart_Slave_Buffer[u8Channel]);
            }
        }
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
    }
    else
    {
        /* u8BufferPos == PID_BYTE_OFFSET_U8 */
        /* Set tx header complete */
        Lin_SM_ChFrameStatus[u8Channel] = LIN_TX_HEADER_COMPLETE_STATE;

        /* Enable Receiver Interrupt */
        FCUART_LIN_HWA_EnableReceiveInterrupt(pLinHwPtr);
    }
}
#endif

#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
/**
 * @brief   Interrupt handler for Idle line detected on FCUART.
 * @details This function shall manage the RX ISRs on the
 *          addressed channel.
 *
 * @param[in]   u8Module  LIN module to be addressed.
 * @param[in]   u8Channel Lin channel number.
 *
 * @return       void.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_IdleInterruptHandler(uint8 u8Module, uint8 u8Channel)
{
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    Lin_FCUart_IdleFlag[u8Channel] = TRUE;
    /* clear idle interrupt flag */
    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_IDLEF_MASK);
    /* disable idle interrupt */
    FCUART_LIN_HWA_DisableIdleInterrupt(pLinHwPtr);
}
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */

/**
 * @brief   Interrupt handler for Error on UART.
 * @details This function shall manage all the Error ISRs on the
 *          addressed channel.
 *
 * @param[in]   u8Module    LIN module to be addressed.
 *
 * @return       void.
 *
 * @note         Internal driver function.
 *
 *
 */
LIN_TEXT_SECTION void Lin_LL_ErrorInterruptHandler(const uint8 u8Module)
{
    uint8              u8Channel;
    uint32             u32Lin_STATErrReg_FlagStatus;
    uint32             u32Lin_FifoErrReg_FlagStatus;
    uint32             u32LinStatReg;
    uint32             u32LinCtrlReg;
    uint32             u32LinFifoReg;
    boolean            bErrorFlag          = FALSE;
    FCUART_Type *const pLinHwPtr           = LIN_PTRS[u8Module];
    uint32             LinCurrentPartionId = GET_CPU_ID();

    /* Get the logical channel using this HW channel */
    u8Channel = Lin_HwToChannel[u8Module];

    /* Get all error flag in STAT Reg */
    u32Lin_STATErrReg_FlagStatus = FCUART_LIN_HWA_GetStatus(pLinHwPtr, FCUART_STAT_ERRFLAG_MASK);
    u32Lin_FifoErrReg_FlagStatus =
        FCUART_LIN_HWA_GetFifoFlag(pLinHwPtr, (FCUART_FIFO_TXOF_MASK | FCUART_FIFO_RXUF_MASK));

    if ((u8Channel != (uint8)0XFFU) && (NULL_PTR != Lin_FCUart_pConfig[u8Channel]) &&
        (LinCurrentPartionId == Lin_FCUart_pConfig[u8Channel]->pLinChannel->ChannelCoreId))
    {
        Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;

        /*Get the status of the FCUART*/
        u32LinStatReg = FCUART_LIN_HWA_ReadSTAT(pLinHwPtr) & FCUART_STAT_ALLFLAG_MASK;
        u32LinCtrlReg = FCUART_LIN_HWA_GetCtrl(pLinHwPtr);
        u32LinFifoReg = FCUART_LIN_HWA_GetFifoFlag(pLinHwPtr,
                                                   (FCUART_FIFO_TXOFIE_MASK |
                                                    FCUART_FIFO_RXUFIE_MASK));

        if ((u32Lin_STATErrReg_FlagStatus != (uint32)0U) ||
            (u32Lin_FifoErrReg_FlagStatus != (uint32)0U))
        {
            /* receiver overrun interrupt detected */
            /* receiver overrun flag && interrupt enable */
            if (((u32LinStatReg & FCUART_STAT_RORF_MASK) == FCUART_STAT_RORF_MASK) &&
                ((u32LinCtrlReg & FCUART_CTRL_ORIE_MASK) == FCUART_CTRL_ORIE_MASK))
            {
                bErrorFlag = TRUE;
                /* Clear overrun error Interrupt Flag */
                FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_RORF_MASK);
                /* Update LinSM */
                Lin_SM_ChFrameErrStatus[u8Channel] = LIN_BUFFER_OVER_RUN_ERROR;
                LinCurrentState->CurrentEventId    = LIN_RX_OVERRUN_ERROR;
            }
            /* receiver noise error interrupt detected */
            /* receiver noise error flag && interrupt enable */
            else if (((u32LinStatReg & FCUART_STAT_NF_MASK) == FCUART_STAT_NF_MASK) &&
                     ((u32LinCtrlReg & FCUART_CTRL_NEIE_MASK) == FCUART_CTRL_NEIE_MASK))
            {
                bErrorFlag = TRUE;
                /* Clear noise error Interrupt Flag */
                FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_NF_MASK);
                /* Update LinSM */
                Lin_SM_ChFrameErrStatus[u8Channel] = LIN_NOISE_ERROR;
                LinCurrentState->CurrentEventId    = LIN_NOISY_ERROR;
            }
            /* receiver frame error interrupt detected */
            /* receiver frame error flag && interrupt enable */
            else if (((u32LinStatReg & FCUART_STAT_FEF_MASK) == FCUART_STAT_FEF_MASK) &&
                     ((u32LinCtrlReg & FCUART_CTRL_FEIE_MASK) == FCUART_CTRL_FEIE_MASK))
            {
                bErrorFlag = TRUE;
                /* Clear frame error Interrupt Flag */
                FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_FEF_MASK);
                /* Update LinSM */
                Lin_SM_ChFrameErrStatus[u8Channel] = LIN_FRAMING_ERROR;
                LinCurrentState->PreviousNodeState = LinCurrentState->CurrentNodeState;
                LinCurrentState->CurrentEventId    = LIN_FRAME_ERROR;
            }
            else if ((u32Lin_FifoErrReg_FlagStatus != 0U) && (u32LinFifoReg != 0U))
            {
                bErrorFlag = TRUE;
                FCUART_LIN_HWA_ClearFifoFlag(pLinHwPtr, u32Lin_FifoErrReg_FlagStatus);
                /* Update LinSM */
                Lin_SM_ChFrameErrStatus[u8Channel] = LIN_TXRX_FIFO_ERROR;
                LinCurrentState->CurrentEventId    = LIN_FIFO_ERROR;
                FCUART_LIN_HWA_ClearTxRxFifo(pLinHwPtr);
            }
            else
            {
                /* Clear Error Interrupts Flags */
                FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, u32Lin_STATErrReg_FlagStatus);
                FCUART_LIN_HWA_ClearFifoFlag(pLinHwPtr, u32Lin_FifoErrReg_FlagStatus);
            }
        }

        if (bErrorFlag != 0U)
        {
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
            /* Call notification to stop timer when frame error*/
            LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */

            /* Disable FCUART Receiver and Transmitter interrupt */
            FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
            FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);

#if (LIN_HAS_SLAVE_NODE == STD_ON)
            Lin_LL_HandleSlaveNodeIdle(u8Channel, u8Module, LinCurrentState);
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
        }
    }
    else
    {
        /* Clear Error Interrupts Flags */
        FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, u32Lin_STATErrReg_FlagStatus);
        FCUART_LIN_HWA_ClearFifoFlag(pLinHwPtr, u32Lin_FifoErrReg_FlagStatus);
    }
}

#if (LIN_HAS_SLAVE_NODE == STD_ON)
/**
 * @brief   Handle the response part of the Lin frame on the slave node.
 * @details This section describes how to perform operations
 *          on the slave node based on the frame type.
 *
 * @param[in]   u8Channel LIN channel number
 * @param[in]   u8Module  LIN module to be addressed
 * @param[in]   pPduInfoPtr pointer to PDU containing the PID, Checksum model,
 *              Response type, Dl and SDU data pointer.
 *
 * @return      void.
 *
 */
/* [SWS_Lin_00282] */
LIN_TEXT_SECTION void Lin_LL_SlaveProcessData(uint8              u8Channel,
                                              uint8              u8Module,
                                              const Lin_PduType *pPduInfoPtr)
{
    uint8                u8FrameId;
    FCUART_Type *const   pLinHwPtr       = LIN_PTRS[u8Module];
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;
    Lin_FrameDlType      Dl;

    Dl = (Lin_FrameDlType)((pPduInfoPtr->Dl > LIN_MAX_DATA_LENGTH) ? LIN_MAX_DATA_LENGTH :
                                                                     pPduInfoPtr->Dl);
    Lin_FCUart_BufferLength[u8Channel] = (uint8)(3U + Dl);
    Lin_FCUart_BufferPtr[u8Channel]    = DATA_OFFSET_U8;
    Lin_FCUart_CheckSumMode[u8Channel] = pPduInfoPtr->Cs;

/* [SWS_Lin_00283] */
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
    if (LIN_MASTER_RESPONSE == pPduInfoPtr->Drc)
#else
    if (LIN_FRAMERESPONSE_TX == pPduInfoPtr->Drc)
#endif /* LIN_USE_LEGACY_LINIF_API == STD_ON */
    {
        Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_TX_RES_COMMAND;
        /*  Prepare Data to send */
        for (uint8 u8Index = (uint8)0U; u8Index < Dl; u8Index++)
        {
            Lin_FCUart_Buffer[u8Channel][DATA_OFFSET_U8 + u8Index] = pPduInfoPtr->SduPtr[u8Index];
        }

        u8FrameId = pPduInfoPtr->Pid;
        if ((u8FrameId == MASTER_REQ_DIAGNOSTIC_ID_U8) || (u8FrameId == SLAVE_RSP_DIAGNOSTIC_ID_U8))
        {
            /* Checksum */
            Lin_FCUart_Buffer[u8Channel][Lin_FCUart_BufferLength[u8Channel] - (uint8)1U] =
                Lin_LL_CheckSumCalc(u8Channel, LIN_CLASSIC_CS);
        }
        else
        {
            if (Lin_FCUart_CheckSumMode[u8Channel] == LIN_CLASSIC_CS)
            {
                Lin_FCUart_Buffer[u8Channel][Lin_FCUart_BufferLength[u8Channel] - (uint8)1U] =
                    Lin_LL_CheckSumCalc(u8Channel, LIN_CLASSIC_CS);
            }
            else
            {
                Lin_FCUart_Buffer[u8Channel][Lin_FCUart_BufferLength[u8Channel] - (uint8)1U] =
                    Lin_LL_CheckSumCalc(u8Channel, LIN_ENHANCED_CS);
            }
        }

        /* Set Break char detect length as minimum */
        FCUART_LIN_HWA_SetLinBreakDetectEnable(pLinHwPtr, FALSE);

        /* Set LIN current state to sending Break field */
        LinCurrentState->CurrentNodeState = LIN_NODE_STATE_SEND_DATA;

#if LIN_DEV_FIFO_SUPPORT == STD_ON
        FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, Dl);

        for (uint8 u8Index = DATA_OFFSET_U8; u8Index < Lin_FCUart_BufferLength[u8Channel]; u8Index++)
        {
            FCUART_LIN_HWA_SetData(pLinHwPtr, Lin_FCUart_Buffer[u8Channel][u8Index]);
        }
#else
        /* Start sending data */
        FCUART_LIN_HWA_SetData(LIN_PTRS[u8Module], Lin_FCUart_Buffer[u8Channel][DATA_OFFSET_U8]);
#endif
        FCUART_LIN_HWA_StartTransmit(pLinHwPtr);

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
        /* Call notification to start timer for Lin instance and configure timeout value */
        LIN_START_TIMER_NOTIFICATION(u8Channel,
                                     (Lin_FCUart_pConfig[u8Channel]->ResponseTimeoutValue) *
                                         (uint32)(Dl + 1UL));
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */
    }

/* [SWS_Lin_00284] */
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
    else if (LIN_SLAVE_RESPONSE == pPduInfoPtr->Drc)
#else
    else if (LIN_FRAMERESPONSE_RX == pPduInfoPtr->Drc)
#endif /* LIN_USE_LEGACY_LINIF_API == STD_ON */
    {
        Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_RX_RES_COMMAND;

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_START_TIMER_NOTIFICATION
        /* Call notification to start timer for Lin instance and configure timeout value */
        LIN_START_TIMER_NOTIFICATION(u8Channel,
                                     (Lin_FCUart_pConfig[u8Channel]->ResponseTimeoutValue) *
                                         (uint32)(Dl + 1UL));
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */

        LinCurrentState->CurrentNodeState = LIN_NODE_STATE_RECV_DATA;
        FCUART_LIN_HWA_SetLinBreakDetectEnable(pLinHwPtr, FALSE);

#if LIN_DEV_FIFO_SUPPORT == STD_ON
        FCUART_LIN_HWA_SetRxWaterMark(pLinHwPtr, Dl);
#endif
    }
    /* [SWS_Lin_00276] */
    else /* LIN_FRAMERESPONSE_IGNORE */
    {
        Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_IGNORE_COMMAND;
        Lin_FCUart_BufferLength[u8Channel]  = 0U;
        Lin_FCUart_BufferPtr[u8Channel]     = SYNC_BYTE_OFFSET_U8;

        FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
        /* Enable LIN break detect interrupt */
        FCUART_LIN_HWA_EnableBreakDetectInterrupt(pLinHwPtr);
        /* Set Break char detect length */
        FCUART_LIN_HWA_SetLinBreakDetectEnable(pLinHwPtr, TRUE);
        LinCurrentState->CurrentNodeState = LIN_NODE_STATE_IDLE;
    }
}

/**
 *
 * @brief   LIN notifies to lin interface slave error.
 * @details This callback function is used for notifing to LinIf about slave error.
 *
 * @param[in]        LinStateStruct     pointer to the current LIN state structure.
 * @return           void.
 *
 */
/* [SWS_Lin_00277] */
LIN_TEXT_SECTION void Lin_LL_SlaveReportError(uint8 u8Channel, Lin_StateStructType *LinStateStruct)
{
    uint8 u8TempBufferLen = Lin_FCUart_BufferLength[u8Channel];
    uint8 u8TempBufferPtr = Lin_FCUart_BufferPtr[u8Channel];

    /* Get the current LIN state of this Lin instance. */
    if (LIN_NODE_STATE_SEND_DATA == LinStateStruct->CurrentNodeState)
    {
        LinIf_LinErrorIndication((NetworkHandleType)u8Channel, LIN_ERR_RESP_DATABIT);
    }
    else if ((LIN_NODE_STATE_RECV_SYNC == LinStateStruct->CurrentNodeState) ||
             (LIN_NODE_STATE_RECV_PID == LinStateStruct->CurrentNodeState))
    {
        LinIf_LinErrorIndication((NetworkHandleType)u8Channel, LIN_ERR_HEADER);
    }
    else if (LIN_NODE_STATE_RECV_DATA == LinStateStruct->CurrentNodeState)
    {
        if (u8TempBufferPtr == DATA_OFFSET_U8)
        {
            LinIf_LinErrorIndication((NetworkHandleType)u8Channel, LIN_ERR_NO_RESP);
        }
        else if (u8TempBufferPtr < u8TempBufferLen)
        {
            LinIf_LinErrorIndication((NetworkHandleType)u8Channel, LIN_ERR_INC_RESP);
        }
        else
        {
            /* No error */
        }
    }
    else
    {
        /*The node state is not within the state */
    }
}

/**
 * @brief   Interrupt handler for slave node rx.
 * @details This function shall manage the RX ISRs on the
 *          addressed channel for slave node.
 *
 * @param[in]   u8Module  LIN module to be addressed.
 * @param[in]   u8Channel LIN channel number.
 *
 * @return      void.
 *
 */
LIN_TEXT_SECTION static void Lin_LL_SlaveNodeRxHandle(uint8 u8Module, uint8 u8Channel)
{
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;

    switch (LinCurrentState->CurrentNodeState)
    {
        case LIN_NODE_STATE_RECV_SYNC:
            /* Current state is RECEIVE SYNC FIELD */
            Lin_LL_SlaveNodeRxSyncByteHandle(u8Module, u8Channel);
            break;
        case LIN_NODE_STATE_RECV_PID:
            /* Get data from Data Register */
            Lin_LL_SlaveNodeRxPidByteHandle(u8Module, u8Channel);
            break;
        case LIN_NODE_STATE_SEND_DATA:
        case LIN_NODE_STATE_RECV_DATA:
#if LIN_DEV_FIFO_SUPPORT == STD_ON
            Lin_LL_RxDataFifoUsedHandle(u8Module, u8Channel);
#else
            Lin_LL_RxDataReadyHandler(u8Module, u8Channel);
#endif
            break;
        default: /* No action */
            break;
    }
}

/**
 * @brief   Lin slave node handle the sync byte received.
 *
 * @param[in] u8Module      LIN module to be addressed.
 * @param[in] u8Channel     LIN channel number.
 * @return
 */
LIN_TEXT_SECTION static void Lin_LL_SlaveNodeRxSyncByteHandle(uint8 u8Module, uint8 u8Channel)
{
    uint32               u32DataRegVal;
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;

    u32DataRegVal = FCUART_LIN_HWA_GetData(LIN_PTRS[u8Module]);

    if (0x55U == u32DataRegVal)
    {
        /* Synch byte*/
        Lin_FCUart_Buffer[u8Channel][SYNC_BYTE_OFFSET_U8] = SYNC_BYTE_U8;
        /* Change node's current state to RECEIVE PID */
        LinCurrentState->CurrentNodeState = LIN_NODE_STATE_RECV_PID;
    }
    else
    {
        LinCurrentState->CurrentNodeState = LIN_NODE_STATE_IDLE;
        LinCurrentState->CurrentEventId   = LIN_SYNC_ERROR;

        Lin_LL_HandleSlaveNodeIdle(u8Channel, u8Module, LinCurrentState);
    }
}

/**
 * @brief   Lin slave node handle the PID byte received.
 *
 * @param[in] u8Module      LIN module to be addressed.
 * @param[in] u8Channel     LIN channel number.
 * @return
 */
LIN_TEXT_SECTION static void Lin_LL_SlaveNodeRxPidByteHandle(uint8 u8Module, uint8 u8Channel)
{
    uint8                u8DataRegVal;
    FCUART_Type *const   pLinHwPtr       = LIN_PTRS[u8Module];
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;
    Lin_PduType         *pLin_Slave_Pdu  = &LinPdu_Channel_slave_Pdu[u8Channel];
    Std_ReturnType       TempReturn;

#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
#ifdef LIN_STOP_TIMER_NOTIFICATION
    /* Call notification to stop timer after PID byte received for Slave node */
    LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif
#endif /* (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF) */

    /* [SWS_Lin_00271] */
    u8DataRegVal = FCUART_LIN_HWA_GetData(pLinHwPtr);

    Lin_FCUart_Buffer[u8Channel][PID_BYTE_OFFSET_U8] = u8DataRegVal;
    LinCurrentState->CurrentPid                      = u8DataRegVal;
    LinCurrentState->CurrentEventId                  = LIN_RECV_HEADER_OK;
    pLin_Slave_Pdu->Pid                              = LinCurrentState->CurrentPid;
    pLin_Slave_Pdu->SduPtr = (uint8 *)(&Lin_FCUart_Slave_Buffer[u8Channel]);
    TempReturn             = LinIf_HeaderIndication(u8Channel, pLin_Slave_Pdu);
    if ((uint8)E_NOT_OK == TempReturn)
    {
#if (LIN_USE_LEGACY_LINIF_API == STD_ON)
        pLin_Slave_Pdu->Drc = LIN_SLAVE_TO_SLAVE;
#else
        pLin_Slave_Pdu->Drc = LIN_FRAMERESPONSE_IGNORE;
#endif /* LIN_USE_LEGACY_LINIF_API == STD_ON */
        pLin_Slave_Pdu->Dl = 1u;
    }
    Lin_LL_SlaveProcessData(u8Channel,
                            Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8HwModule,
                            pLin_Slave_Pdu);

    /* Notifies the user of the current transmission status. */
    if (NULL_PTR != Lin_FCUart_pConfig[u8Channel]->Callback)
    {
        Lin_FCUart_pConfig[u8Channel]->Callback(u8Channel, LinCurrentState);
    }
}

#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/

/**
 * @brief This function is used to deinitialize the LIN module.
 * @details This function shall stop the transfer and deinitialize the LIN module.
 *
 * @param[in]   u8Module  Lin module to be addressed.
 *
 * @return void
 */
/* [FUNC_Lin_0021] */
LIN_TEXT_SECTION void Lin_LL_Deinit(uint8 u8Module)
{
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    /* Clear FCUART Status */
    FCUART_LIN_HWA_WriteClearSTAT(pLinHwPtr, FCUART_STAT_ALLFLAG_MASK);

    /* Clear FCUART Transmitter and Receiver */
    FCUART_LIN_HWA_ClearTransmit(pLinHwPtr);
    FCUART_LIN_HWA_ClearReceive(pLinHwPtr);

    /* Disable FCUART Receiver and Transmitter interrupt */
    FCUART_LIN_HWA_DisableReceiveInterrupt(pLinHwPtr);
    FCUART_LIN_HWA_DisableTransmitInterrupt(pLinHwPtr);

    /* Disable FCUART Transmitter complete interrupt */
    FCUART_LIN_HWA_DisableTransmitCompleteInterrupt(pLinHwPtr);

    /* Disable FCUART Break Detect interrupt */
    FCUART_LIN_HWA_DisableBreakDetectInterrupt(pLinHwPtr);

    /* Disable FCUART Error interrupt */
    FCUART_LIN_HWA_DisableErrorInterrupt(pLinHwPtr);

    /* Reset FCUART */
    FCUART_LIN_HWA_SoftwareReset(pLinHwPtr);
}

/**
 * @brief    This is callback function for Timer Interrupt Handler.
 * @details  Users shall initialize a timer (for example FTU)
 *           and the time period in microseconds will be set by the driver via
 * LinStartTimerNotification.
 *
 * @param[in]   u8Channel LIN channel number
 *
 * @return      void.
 *
 */
#if (LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)
/* [FUNC_Lin_0023] */
LIN_TEXT_SECTION void Lin_LL_TimerExpiredService(uint8 u8Channel)
{
    Lin_StateStructType *LinCurrentState = Lin_FCUart_pConfig[u8Channel]->pLin_StateArray;
    uint8                u8Module        = Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8HwModule;

#ifdef LIN_STOP_TIMER_NOTIFICATION
    /* Call notification to stop timer when timeout occurred */
    LIN_STOP_TIMER_NOTIFICATION(u8Channel);
#endif

    if (LIN_MASTER_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
    {
        Lin_SM_ChFrameErrStatus[u8Channel] = LIN_TIMEOUT_ERROR;
        if (LIN_TX_SLEEP_COMMAND == Lin_SM_TransmitHeaderCmd[u8Channel])
        {
            Lin_SM_TransmitHeaderCmd[u8Channel] = LIN_TX_NO_COMMAND;
            /* Enable wake up detection */
            /* Clear RX Pin Active Edge Interrupt Flag */
            /* Enable RX Input Active Edge Interrupt Enable */
            FCUART_LL_StartSleepDetection(u8Channel);
        }
    }
#if (LIN_HAS_SLAVE_NODE == STD_ON)
    else
    {
        switch (LinCurrentState->CurrentNodeState)
        {
            /* If the node current state is receiving SYNC byte */
            case LIN_NODE_STATE_RECV_SYNC:
            /* If the node current state is receiving PID byte */
            case LIN_NODE_STATE_RECV_PID:
            /* If the node current state is receiving DATA byte */
            case LIN_NODE_STATE_RECV_DATA:
            /* If the node current state is sending DATA byte */
            case LIN_NODE_STATE_SEND_DATA:
                LinCurrentState->CurrentEventId = LIN_RX_TIMEOUT_ERROR;
                Lin_LL_HandleSlaveNodeIdle(u8Channel, u8Module, LinCurrentState);
                break;
            default:
                /* The node state is not receiving header, response data bytes or checksum */
                break;
        }
    }
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
}
#endif /*(LIN_FRAME_TIMEOUT_DISABLE == STD_OFF)*/

#if (LIN_BRKD_SUPPORT == STD_OFF)
#if (LIN_MASTER_NODE_USED == STD_ON)
/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * REASON: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive */
/**
 * @brief Half current baudrate
 *
 * @param u8Channel     LIN channel number
 * @return
 */
LIN_TEXT_SECTION static void FCUART_LL_ChangeBaudrate(uint8 u8Channel)
{
    uint16             i;
    uint8              u8Module  = Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8HwModule;
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    FCUART_LIN_HWA_SetSBR(pLinHwPtr,
                          (Lin_FCUart_pConfig[u8Channel]->u32LinBaudRateDivisor * 3U) / 2U);

    /* need wait one funcclk tick to make sure baud register value taking effect.*/
    for (i = 0; i < Lin_FCUart_pConfig[u8Channel]->u16LinBaudWaitCount; i++)
    {
        ASM_KEYWORD volatile("nop");
    }
}
/* PRQA S 3006,1006 -- */
#endif /* (LIN_MASTER_NODE_USED == STD_ON) */

/* PRQA S 3006,1006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 *                                   Dir-4.2 All usage of assembly language should be documented.
 * REASON: The assembly statement has been encapsulated and isolated.
 *         This is an unavoidable false positive */
/**
 * @brief Recover current baudrate
 *
 * @param u8Channel     LIN channel number
 * @return
 */
LIN_TEXT_SECTION static void FCUART_LL_RecoverBaudrate(uint8 u8Channel)
{
    uint16             i;
    uint8              u8Module  = Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8HwModule;
    FCUART_Type *const pLinHwPtr = LIN_PTRS[u8Module];

    FCUART_LIN_HWA_SetSBR(pLinHwPtr, Lin_FCUart_pConfig[u8Channel]->u32LinBaudRateDivisor);

    /* need wait one funcclk tick to make sure baud register value taking effect.*/
    for (i = 0; i < Lin_FCUart_pConfig[u8Channel]->u16LinBaudWaitCount; i++)
    {
        ASM_KEYWORD volatile("nop");
    }
}
/* PRQA S 3006,1006 -- */
#endif /* (LIN_BRKD_SUPPORT == STD_OFF) */

LIN_TEXT_SECTION static uint8 FCUART_LL_ChangeBaudrateParam(uint32  u32Baudrate,
                                                            uint32  u32ClockSrcFreq,
                                                            uint32 *u32OverSamp,
                                                            uint32 *u32Sbr)
{
    uint32 u32Smb = u32ClockSrcFreq / u32Baudrate;

    uint32 u32MinSmbDiff   = 0xFFFFFFFFU;
    uint32 u32BestOverSamp = 0;
    uint32 u32BestSbr      = 0;

    for (uint32 u32OverSampTemp = 4; u32OverSampTemp <= 32; u32OverSampTemp++)
    {
        uint32 u32SbrTemp     = u32Smb / u32OverSampTemp;
        uint32 u32CalcSmb     = u32OverSampTemp * u32SbrTemp;
        uint32 u32TempSmbDiff = u32Smb - u32CalcSmb;

        if (u32TempSmbDiff < u32MinSmbDiff)
        {
            u32MinSmbDiff   = u32TempSmbDiff;
            u32BestOverSamp = u32OverSampTemp;
            u32BestSbr      = u32SbrTemp;
        }

        if (u32TempSmbDiff == 0)
        {
            break;
        }
    }

    *u32OverSamp = u32BestOverSamp;
    *u32Sbr      = u32BestSbr;

    return (u32MinSmbDiff == 0) ? 0 : 1;
}

/* PRQA S 3006,1006 ++ #implement is dependent on compiler. */
/**
 * @brief Half current baudrate
 */

LIN_TEXT_SECTION static void FCUART_LL_ChangeBaudrateWakeUpDetect(uint8 u8Channel)
{
    uint16                    i;
    const Lin_CoreConfigType *pLinCoreConfig = Lin_FCUart_pConfig[u8Channel];
    uint8                     u8Module       = pLinCoreConfig->pLinChannel->u8HwModule;
    uint32                    u32CountLimit  = pLinCoreConfig->u16LinBaudWaitCount;
    uint32                    FuncClk        = pLinCoreConfig->u32LinBaudOverSamplingRatio *
                     pLinCoreConfig->u32LinBaudRateDivisor * pLinCoreConfig->u32LinBaudRate;
    uint32 u32OverSamp;
    uint32 u32Sbr;

    FCUART_LL_ChangeBaudrateParam(85000U, FuncClk, &u32OverSamp, &u32Sbr);

    FCUART_LIN_HWA_SetSBR(LIN_PTRS[u8Module], u32Sbr);
    FCUART_LIN_HWA_SetOvrSample(LIN_PTRS[u8Module], u32OverSamp - 1);

    /* need wait one funcclk tick to make sure baud register value taking effect.*/
    for (i = 0; i < u32CountLimit; i++)
    {
        ASM_KEYWORD volatile("nop");
    }
}
/* PRQA S 3006,1006 -- */

/* PRQA S 3006,1006 ++ #implement is dependent on compiler. */
/**
 * @brief Recover baudrate
 */
LIN_TEXT_SECTION static void FCUART_LL_RecoverBaudrateWakeUpDetect(uint8 u8Channel)
{
    uint16 i;
    uint8  u8Module = Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8HwModule;

    FCUART_LIN_HWA_SetSBR(LIN_PTRS[u8Module], Lin_FCUart_pConfig[u8Channel]->u32LinBaudRateDivisor);
    FCUART_LIN_HWA_SetOvrSample(
        LIN_PTRS[u8Module],
        (uint32)((uint32)Lin_FCUart_pConfig[u8Channel]->u32LinBaudOverSamplingRatio - 1U));

    /* need wait one funcclk tick to make sure baud register value taking effect.*/
    for (i = 0; i < Lin_FCUart_pConfig[u8Channel]->u16LinBaudWaitCount; i++)
    {
        ASM_KEYWORD volatile("nop");
    }
}
/* PRQA S 3006,1006 -- */

LIN_TEXT_SECTION void FCUART_LL_StartSleepDetection(uint8 u8Channel)
{
    uint32 u32CtrlVal;
    uint8  u8Module = Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8HwModule;
    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_19();
    {
        u32CtrlVal = FCUART_LIN_HWA_GetCtrl(LIN_PTRS[u8Module]);
        u32CtrlVal &= ~(FCUART_CTRL_TE_MASK | FCUART_CTRL_RE_MASK);
        FCUART_LIN_HWA_SetCtrl(LIN_PTRS[u8Module], u32CtrlVal);

        FCUART_LL_DelayFunctionClk(u8Channel, 2);
        FCUART_LL_ChangeBaudrateWakeUpDetect(u8Channel);

        /* Enable FCUART Receiver and Transmitter */
        u32CtrlVal = FCUART_LIN_HWA_GetCtrl(LIN_PTRS[u8Module]);
        u32CtrlVal |= (FCUART_CTRL_TE_MASK | FCUART_CTRL_RE_MASK);
        FCUART_LIN_HWA_SetCtrl(LIN_PTRS[u8Module], u32CtrlVal);

        FCUART_LL_DelayFunctionClk(u8Channel, 2);

        FCUART_LIN_HWA_WriteClearSTAT(LIN_PTRS[u8Module], FCUART_STAT_RPAEIF_MASK);
        /* Enable RX Input Active Edge Interrupt Enable */
        FCUART_LIN_HWA_EnableReceiveActiveInterrupt(LIN_PTRS[u8Module]);
#if (LIN_HAS_SLAVE_NODE == STD_ON)
        if ((boolean)LIN_SLAVE_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
        {
            /* Enable LIN break detect interrupt */
            FCUART_LIN_HWA_DisableBreakDetectInterrupt(LIN_PTRS[u8Module]);
            /* Set Break char detect length */
            FCUART_LIN_HWA_SetLinBreakDetectEnable(LIN_PTRS[u8Module], FALSE);
        }
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/
    }
    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_19();
}

LIN_TEXT_SECTION void FCUART_LL_StopSleepDetection(uint8 u8Channel)
{
    uint32 u32CtrlVal;
    uint8  u8Module = Lin_FCUart_pConfig[u8Channel]->pLinChannel->u8HwModule;
    SchM_Enter_Lin_LIN_EXCLUSIVE_AREA_18();

    u32CtrlVal = FCUART_LIN_HWA_GetCtrl(LIN_PTRS[u8Module]);
    u32CtrlVal &= ~(FCUART_CTRL_TE_MASK | FCUART_CTRL_RE_MASK);
    FCUART_LIN_HWA_SetCtrl(LIN_PTRS[u8Module], u32CtrlVal);

    FCUART_LL_DelayFunctionClk(u8Channel, 2);
    FCUART_LL_RecoverBaudrateWakeUpDetect(u8Channel);

    /* disable idle interrupt */
#if (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON)
    Lin_FCUart_IdleFlag[u8Channel] = FALSE;
#endif /* (LIN_GLOBAL_WAKEUP_SUPPORT == STD_ON) */
    FCUART_LIN_HWA_DisableIdleInterrupt(LIN_PTRS[u8Module]);
    FCUART_LIN_HWA_SetReceiveDataInverse(LIN_PTRS[u8Module], 0u);
    /* Enable RX Input Active Edge Interrupt Enable */
    FCUART_LIN_HWA_DisableReceiveActiveInterrupt(LIN_PTRS[u8Module]);

    FCUART_LIN_HWA_WriteClearSTAT(LIN_PTRS[u8Module], FCUART_STAT_RPAEIF_MASK);
    /* clear idle interrupt flag */
    FCUART_LIN_HWA_WriteClearSTAT(LIN_PTRS[u8Module], FCUART_STAT_IDLEF_MASK);

    /* Enable FCUART Receiver and Transmitter */
    u32CtrlVal = FCUART_LIN_HWA_GetCtrl(LIN_PTRS[u8Module]);
    u32CtrlVal |= (FCUART_CTRL_TE_MASK | FCUART_CTRL_RE_MASK);
    FCUART_LIN_HWA_SetCtrl(LIN_PTRS[u8Module], u32CtrlVal);

    FCUART_LL_DelayFunctionClk(u8Channel, 2);

#if (LIN_HAS_SLAVE_NODE == STD_ON)
    if (LIN_SLAVE_NODE == Lin_FCUart_pConfig[u8Channel]->NodeFunction)
    {
        /* Enable LIN break detect interrupt */
        FCUART_LIN_HWA_EnableBreakDetectInterrupt(LIN_PTRS[u8Module]);
        /* Set Break char detect length */
        FCUART_LIN_HWA_SetLinBreakDetectEnable(LIN_PTRS[u8Module], TRUE);
    }
#endif /*(LIN_HAS_SLAVE_NODE == STD_ON)*/

    SchM_Exit_Lin_LIN_EXCLUSIVE_AREA_18();
}

LIN_TEXT_SECTION void FCUART_LL_DelayFunctionClk(uint8 u8Channel, uint32 u32Tick)
{
    uint32 u32CountLimit = Lin_FCUart_pConfig[u8Channel]->u16LinBaudWaitCount * u32Tick / 4;
    /*range 4-7 clk, typical 5-6 clk per loop*/
#if defined(_TASKING_C_FC7XXX_)
    ASM_KEYWORD("1:\n"
                "   subs %[cnt], %[cnt], #1 \n"
                "   nop         \n"
                "   dsb         \n"
                "   bne 1p      \n" : [cnt] "+r"(u32CountLimit) : : "cc",
                "memory");
#else
    ASM_KEYWORD volatile("1: subs %[cnt], %[cnt], #1 \n\t"
                         "   nop         \n\t"
                         "   dsb         \n\t"
                         "   bne 1b      \n\t" : [cnt] "+r"(u32CountLimit) : : "cc",
                         "memory");
#endif
}

#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
