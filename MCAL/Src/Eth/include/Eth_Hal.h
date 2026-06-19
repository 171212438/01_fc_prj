/**
*   @file    Eth_Hal.h
*   @implements      Eth_Hal.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR ETH - Eth hardware abstraction layer driver header file.
*   @details This file contains the implementation of hardware abstraction layer API and definition.
*
*   @addtogroup ETH
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETH
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       10/07/2023    QXW0085       N/A          Eth Initial Version
*   0.2.0       27/09/2023    QXW0085       N/A          Implementation of Multicore instance
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Requirements modification and bugs fix
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.6.0       21/03/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.8.0       17/07/2024    QXW0085       N/A          Update Misra-C detection
*   1.5.0       21/01/2026    QXW0085       N/A          Support Time Based Schedule
==================================================================================================*/

#ifndef ETH_HAL_H
#define ETH_HAL_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth_Types.h"
#include "Eth_Cfg.h"
#include "SchM_Eth.h" /* [SWS_Eth_00119] */
#include "EthIf.h"    /* [SWS_Eth_00119] */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/* Get current ECU core ID */
#if (ETH_NUM_ECU_PARTITIONS > 1U)
#define Eth_GetPartitionID() GET_CPU_ID()
#else
#define Eth_GetPartitionID() (0U)
#endif /* ETH_NUM_ECU_PARTITIONS > 1U */

/* Data memory barrier */
#define ETH_DATA_BARRIER()                   MCAL_DATA_MEMORY_BARRIER()

/* Exclusive area for TX buffer allocate */
#define ETH_ENTER_EXCLUSIVE_AREA_TX_BUFFER() SchM_Enter_Eth_ETH_EXCLUSIVE_AREA_00()
#define ETH_EXIT_EXCLUSIVE_AREA_TX_BUFFER()  SchM_Exit_Eth_ETH_EXCLUSIVE_AREA_00()

/* Exclusive area for transmit */
#define ETH_ENTER_EXCLUSIVE_AREA_TRANSMIT()  SchM_Enter_Eth_ETH_EXCLUSIVE_AREA_01()
#define ETH_EXIT_EXCLUSIVE_AREA_TRANSMIT()   SchM_Exit_Eth_ETH_EXCLUSIVE_AREA_01()

/* Exclusive area for transmit buffer release */
#define ETH_ENTER_EXCLUSIVE_AREA_TX_REPORT() SchM_Enter_Eth_ETH_EXCLUSIVE_AREA_02()
#define ETH_EXIT_EXCLUSIVE_AREA_TX_REPORT()  SchM_Exit_Eth_ETH_EXCLUSIVE_AREA_02()

/* Exclusive area for controller mode change */
#define ETH_ENTER_EXCLUSIVE_AREA_CTRLMODE()  SchM_Enter_Eth_ETH_EXCLUSIVE_AREA_03()
#define ETH_EXIT_EXCLUSIVE_AREA_CTRLMODE()   SchM_Exit_Eth_ETH_EXCLUSIVE_AREA_03()

/* Exclusive area for receive */
#define ETH_ENTER_EXCLUSIVE_AREA_RECEIVE()   SchM_Enter_Eth_ETH_EXCLUSIVE_AREA_04()
#define ETH_EXIT_EXCLUSIVE_AREA_RECEIVE()    SchM_Exit_Eth_ETH_EXCLUSIVE_AREA_04()

/* Exclusive area for get global time */
#define ETH_ENTER_EXCLUSIVE_AREA_GETTIME()   SchM_Enter_Eth_ETH_EXCLUSIVE_AREA_05()
#define ETH_EXIT_EXCLUSIVE_AREA_GETTIME()    SchM_Exit_Eth_ETH_EXCLUSIVE_AREA_05()

/* Exclusive area for TX buffer free */
#define ETH_ENTER_EXCLUSIVE_AREA_TX_FREE()   SchM_Enter_Eth_ETH_EXCLUSIVE_AREA_06()
#define ETH_EXIT_EXCLUSIVE_AREA_TX_FREE()    SchM_Exit_Eth_ETH_EXCLUSIVE_AREA_06()

/* Exclusive area for set MAC address */
#define ETH_ENTER_EXCLUSIVE_AREA_SET_MAC()   SchM_Enter_Eth_ETH_EXCLUSIVE_AREA_07()
#define ETH_EXIT_EXCLUSIVE_AREA_SET_MAC()    SchM_Exit_Eth_ETH_EXCLUSIVE_AREA_07()

#define ETH_CONFIG_PTR(CoreId)               (Eth_Config_Ptrs[CoreId])

#if (ETH_NUM_ECU_PARTITIONS > 1U)
/* Get the core ID of the controller mapped */
#define ETH_CFG_PARTITION_ID(CtrlIdx, CoreId) \
    ((Eth_Config_Ptrs[CoreId])->CtrlPtr[CtrlIdx].EcucPartition)
#endif /* ETH_NUM_ECU_PARTITIONS > 1U */

/* Get the number of configured controllers */
#define ETH_CFG_NUM_CONTROLS(CoreId)            ((Eth_Config_Ptrs[CoreId])->NumController)

/* Get the pointer to the controller configuration */
#define ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId)   (&((Eth_Config_Ptrs[CoreId])->CtrlPtr[CtrlIdx]))

/* Controller configuration  */
#define ETH_CFG_BUS_CLOCK_FREQ(CtrlCfgPtr)      ((CtrlCfgPtr)->BusClkFreq)

#define ETH_CFG_ETHIF_CTRLIDX(CtrlCfgPtr)       ((CtrlCfgPtr)->EthIfIdx)

#define ETH_CFG_CTRL_NUM_TX_CHANNEL(CtrlCfgPtr) ((CtrlCfgPtr)->EgressFifoCount)

#define ETH_CFG_CTRL_NUM_RX_CHANNEL(CtrlCfgPtr) ((CtrlCfgPtr)->IngressFifoCount)

#define ETH_CFG_NUM_TX_FIFO(CtrlCfgPtr)         ((CtrlCfgPtr)->EgressFifoCount)

#define ETH_CFG_NUM_RX_FIFO(CtrlCfgPtr)         ((CtrlCfgPtr)->IngressFifoCount)

#define ETH_CFG_CTRL_ENABLE_MII(CtrlCfgPtr)     ((CtrlCfgPtr)->EnableMii)

#define ETH_CFG_CTRL_ENABLE_MMD(CtrlCfgPtr)     ((CtrlCfgPtr)->EnableMmd)

#if (STD_ON == ETH_CTRL_ENABLE_MII)
#define ETH_CFG_CTRL_READ_MII_INDICATION(CtrlCfgPtr, CtrlIdx, TrcvIdx, RegIdx, RegVal) \
    if ((CtrlCfgPtr)->ReadMiiCbk != NULL_PTR)                                          \
    {                                                                                  \
        (CtrlCfgPtr)->ReadMiiCbk(CtrlIdx, TrcvIdx, RegIdx, RegVal);                    \
    }

#define ETH_CFG_CTRL_WRITE_MII_INDICATION(CtrlCfgPtr, CtrlIdx, TrcvIdx, RegIdx) \
    if ((CtrlCfgPtr)->WriteMiiCbk != NULL_PTR)                                  \
    {                                                                           \
        (CtrlCfgPtr)->WriteMiiCbk(CtrlIdx, TrcvIdx, RegIdx);                    \
    }
#endif /* STD_ON == ETH_CTRL_ENABLE_MII */

#define ETH_CFG_CTRL_ENABLE_TX_INTERRUPT(CtrlCfgPtr)   ((CtrlCfgPtr)->TxInterruptEn)

#define ETH_CFG_CTRL_ENABLE_RX_INTERRUPT(CtrlCfgPtr)   ((CtrlCfgPtr)->RxInterruptEn)

#define ETH_CFG_PHY_INTERFACE(CtrlCfgPtr)              ((CtrlCfgPtr)->PhyIf)

#define ETH_CFG_CTRL_MAC_ADDRESS(CtrlCfgPtr)           ((CtrlCfgPtr)->MacAddress)

#define ETH_CFG_CTRL_MAC_CONFIGURATION(CtrlCfgPtr)     ((CtrlCfgPtr)->MacConfiguration)

#define ETH_CFG_CTRL_MAC_EXT_CONFIGURATION(CtrlCfgPtr) ((CtrlCfgPtr)->MacExtConfiguration)

#define ETH_CFG_CTRL_MAC_PACKET_FILTER(CtrlCfgPtr)     ((CtrlCfgPtr)->MacFilterRegValue)

/* Egress Ingress FIFO */
#define ETH_CFG_CTRL_TX_FIFO_BUF_LENBYTE(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->EgressFifoCfgPtr[FifoId].FifoBufLenByte)

#define ETH_CFG_CTRL_RX_FIFO_BUF_LENBYTE(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->IngressFifoCfgPtr[FifoId].FifoBufLenByte)

#define ETH_CFG_CTRL_TX_FIFO_BUF_TOTAL(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->EgressFifoCfgPtr[FifoId].FifoBufTotal)

#define ETH_CFG_CTRL_RX_FIFO_BUF_TOTAL(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->IngressFifoCfgPtr[FifoId].FifoBufTotal)

#define ETH_CFG_CTRL_TX_DESC_START_ADDRESS(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->EgressFifoCfgPtr[FifoId].DescListAddress)

#define ETH_CFG_CTRL_RX_DESC_START_ADDRESS(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->IngressFifoCfgPtr[FifoId].DescListAddress)

#define ETH_CFG_CTRL_TX_BUF_START_ADDRESS(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->EgressFifoCfgPtr[FifoId].FifoBufStartAddress)

#define ETH_CFG_CTRL_RX_BUF_START_ADDRESS(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->IngressFifoCfgPtr[FifoId].FifoBufStartAddress)

#define ETH_CFG_CTRL_TX_FIFO_PRIORITY_MASK(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->EgressFifoCfgPtr[FifoId].PriorityMask)

#define ETH_CFG_CTRL_RX_FIFO_PRIORITY_MASK(CtrlCfgPtr, FifoId) \
    ((CtrlCfgPtr)->IngressFifoCfgPtr[FifoId].PriorityMask)

/* DMA configuration */
#define ETH_CFG_CTRL_DMA_MODE(CtrlCfgPtr)        ((CtrlCfgPtr)->DmaMode)

#define ETH_CFG_CTRL_DMA_SYSBUS_MODE(CtrlCfgPtr) ((CtrlCfgPtr)->DmaSysBusMode)

#define ETH_CFG_CTRL_DMA_CHANNEL_CONTROL(CtrlCfgPtr, Channel) \
    ((CtrlCfgPtr)->DMAChannelCfgPtr[Channel].Control)

#define ETH_CFG_CTRL_DMA_TX_CHANNEL_CONTROL(CtrlCfgPtr, Channel) \
    ((CtrlCfgPtr)->DMAChannelCfgPtr[Channel].TxControl)

#define ETH_CFG_CTRL_DMA_RX_CHANNEL_CONTROL(CtrlCfgPtr, Channel) \
    ((CtrlCfgPtr)->DMAChannelCfgPtr[Channel].RxControl)

/* MTL configuration */
#define ETH_CFG_CTRL_MTL_OPERATION_MODE(CtrlCfgPtr) ((CtrlCfgPtr)->MtlOperationMode)

#define ETH_CFG_CTRL_MTL_TX_QUEUE_MODE(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].TxQueueMode)

#define ETH_CFG_CTRL_MTL_TX_QUEUE_WEIGHTS(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].TxQueueWeights)

#define ETH_CFG_CTRL_MTL_TX_QUEUE_IDLE_SLOPE_CREDIT(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].IdleSlopeCredit)

#define ETH_CFG_CTRL_MTL_TX_QUEUE_SEND_SLOPE_CREDIT(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].SendSlopeCredit)

#define ETH_CFG_CTRL_MTL_TX_QUEUE_HIGH_CREDIT(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].HiCredit)

#define ETH_CFG_CTRL_MTL_TX_QUEUE_LOW_CREDIT(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].LoCredit)

#define ETH_CFG_CTRL_MTL_RX_QUEUE_MODE(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].RxQueueMode)

#define ETH_CFG_CTRL_MTL_FORWARD_TCPIP_CHECKSUM_ERROR(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].ForwardTCPIPChecksumErr)

#define ETH_CFG_CTRL_MTL_FORWARD_ERROR_PACKETS(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].ForwardErrorPackets)

#define ETH_CFG_CTRL_MTL_FORWARD_UNDERSIZE_GOOD_PACKETS(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].ForwardUndersizedGood)

#define ETH_CFG_CTRL_MTL_RX_QUEUE_WEIGHT(CtrlCfgPtr, Queue) \
    ((CtrlCfgPtr)->MTLQueueCfgPtr[Queue].RxQueueWeight)

/* MMC configuration */
#define ETH_CFG_CTRL_MMC_RESET_ON_READ(CtrlCfgPtr) ((CtrlCfgPtr)->MMCResetOnRead)

#define ETH_CFG_CTRL_MMC_STOP_ROLLOVER(CtrlCfgPtr) ((CtrlCfgPtr)->MMCStopRollover)

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
/* PTP configuration */
#define ETH_CFG_CTRL_PTP_CONTROL(CtrlCfgPtr)                  ((CtrlCfgPtr)->PtpCtrl)

#define ETH_CFG_CTRL_PTP_INIT_TIME_NANOSECONDS(CtrlCfgPtr)    ((CtrlCfgPtr)->InitTime.nanoseconds)

/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 *  0791:Macro identifier does not differ from other macro identifier(s) within the specified number
 *  of significant characters.
 *  REASON:These macros are automatically generated by configuration tool, and they are distinct.
 */
#define ETH_CFG_CTRL_PTP_INIT_TIME_SECONDS(CtrlCfgPtr)        ((CtrlCfgPtr)->InitTime.seconds)

#define ETH_CFG_CTRL_PTP_INIT_TIME_SECONDSHI(CtrlCfgPtr)      ((CtrlCfgPtr)->InitTime.secondsHi)
/* PRQA S 0791 -- */

#define ETH_CFG_CTRL_PTP_SUBSECONDS_INCREMENT(CtrlCfgPtr)     ((CtrlCfgPtr)->SubSecondInc)

#define ETH_CFG_CTRL_PTP_TIMESTAMP_ADDEND(CtrlCfgPtr)         ((CtrlCfgPtr)->TimestampAddend)

#define ETH_CFG_CTRL_PTP_EGRESS_CORR_NANOSECONDS(CtrlCfgPtr)  ((CtrlCfgPtr)->EgressCorrNanoseconds)

#define ETH_CFG_CTRL_PTP_INGRESS_CORR_NANOSECONDS(CtrlCfgPtr) ((CtrlCfgPtr)->IngressCorrNanoseconds)
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
/* Time Aware Shaper */
#define ETH_CFG_CTRL_TIME_AWARE_SHAPER_AVAILABLE(CtrlCfgPtr) \
    ((CtrlCfgPtr)->TimeAwareShaperPtr != NULL_PTR)

#define ETH_CFG_CTRL_TIME_AWARE_SHAPER_NUM(CtrlCfgPtr) ((CtrlCfgPtr)->NumTimeAwareShaper)

#define ETH_CFG_CTRL_TIME_AWARE_SHAPER_PTR(CtrlCfgPtr, TimeAwareShaperIdx) \
    (&((CtrlCfgPtr)->TimeAwareShaperPtr[TimeAwareShaperIdx]))

#define ETH_CFG_CTRL_GCL_GATE_CONTROL(TimeAwareShaperPtr, GclIdx) \
    ((TimeAwareShaperPtr)->GateControlList[GclIdx].GateControl)

#define ETH_CFG_CTRL_GCL_TIME_INTERVAL(TimeAwareShaperPtr, GclIdx) \
    ((TimeAwareShaperPtr)->GateControlList[GclIdx].TimeInterval)
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

#if (STD_ON == ETH_FEATURE_SAFETY_SUPPORT)
/* Automotive safety */
#define ETH_CFG_CTRL_SAFETY_ECC_ENABLE(CtrlCfgPtr)         ((CtrlCfgPtr)->SafetyEccEn)

#define ETH_CFG_CTRL_SAFETY_FSM_PARITY_ENABLE(CtrlCfgPtr)  ((CtrlCfgPtr)->SafetyFsmParityEn)

#define ETH_CFG_CTRL_SAFETY_FSM_TIMEOUT_ENABLE(CtrlCfgPtr) ((CtrlCfgPtr)->SafetyFsmTimeoutEn)

#define ETH_CFG_CTRL_SAFETY_DPP_MODE(CtrlCfgPtr)           ((CtrlCfgPtr)->SafetyDppMode)
#endif /* STD_ON == ETH_FEATURE_SAFETY_SUPPORT */

#if (STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT)
#define ETH_CFG_SWT_TX_ADAPT_BUFFER_LENGTH(CtrlCfgPtr, LengthPtr) \
    ((CtrlCfgPtr)->SwtMgmtPtr->TxAdaptBufLen(LengthPtr))

#define ETH_CFG_SWT_TX_PREPARE_FRAME(CtrlCfgPtr, CtrlIdx, BufIdx, DataPtr, LengthPtr) \
    ((CtrlCfgPtr)->SwtMgmtPtr->TxPrepareFrame(CtrlIdx, BufIdx, DataPtr, LengthPtr))

#define ETH_CFG_SWT_TX_PROCESS_FRAME(CtrlCfgPtr, CtrlIdx, BufIdx, DataPtr, LengthPtr) \
    ((CtrlCfgPtr)->SwtMgmtPtr->TxProcessFrame(CtrlIdx, BufIdx, DataPtr, LengthPtr))

#define ETH_CFG_SWT_TX_FINISHED_INDICATION(CtrlCfgPtr, CtrlIdx, BufIdx) \
    ((CtrlCfgPtr)->SwtMgmtPtr->TxFinishedIndication(CtrlIdx, BufIdx))

#define ETH_CFG_SWT_RX_PROCESS_FRAME(CtrlCfgPtr, CtrlIdx, BufIdx, DataPtr, LengthPtr, MgmtOnly) \
    ((CtrlCfgPtr)->SwtMgmtPtr->RxProcessFrame(CtrlIdx, BufIdx, DataPtr, LengthPtr, MgmtOnly))

#define ETH_CFG_SWT_RX_FINISHED_INDICATION(CtrlCfgPtr, CtrlIdx, BufIdx) \
    ((CtrlCfgPtr)->SwtMgmtPtr->RxFinishedIndication(CtrlIdx, BufIdx))
#endif /* STD_ON == ETH_SWITCH_MANAGEMENT_SUPPORT */

#if (STD_ON == ETH_DEM_EVENT_DETECT)
/* PRQA S 0342 ++ #Misra-C:2012 Rule-20.10 The # and ## preprocessor operators should not be used
 *  0342:The '##' preprocessing operator (sometimes referred to as the glue operator) has been used
 *  in the definition of a macro.
 *  REASON: The usages of this macro are safe and controllable.
 */
#define Eth_ReportDemEvent(CtrlCfgPtr, DemId, Status)                                    \
    if ((uint32)STD_ON == (CtrlCfgPtr)->Cfg_##DemId.state)                               \
    {                                                                                    \
        (void)Dem_SetEventStatus((Dem_EventIdType)(CtrlCfgPtr)->Cfg_##DemId.id, Status); \
    }
/* PRQA S 0342 -- */
#else
#define Eth_ReportDemEvent(CtrlCfgPtr, DemId, Status) (void)(CtrlCfgPtr)
#endif /* STD_ON = ETH_DEM_EVENT_DETECT */

#define ETH_INVALID_FIFO_IDX 0xFFU

/*==================================================================================================
*                                    GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

extern const Eth_ConfigType *Eth_Config_Ptrs[ETH_NUM_ECU_PARTITIONS];

/*==================================================================================================
*                                        FUNCTION PROTOTYPES
==================================================================================================*/

#define ETH_START_SEC_CODE
#include "Eth_MemMap.h"

/**
 * @brief                        Get the max TX buffer count of the indexed controller.
 * @details                      [SWDESG_ETH_138]Get the maximum number of transmit buffers of the
 *                                               indexed controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @return                       The max buffer count.
 *
 */
ETH_TEXT_SECTION uint32 Eth_Hal_TxBuffersCount(uint8 CtrlIdx);

/**
 * @brief                        Get the FIFO ID corresponding to the priority.
 * @details                      [SWDESG_ETH_139]Get the FIFO ID corresponding to the priority.
 *
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] Priority           Priority of The TX FIFO.
 * @return                       The index of TX FIFO.
 *
 */
ETH_TEXT_SECTION uint8 Eth_Hal_TxPriorityToFifoId(const Eth_CtrlCfgType *CtrlCfgPtr, uint8 Priority);

/**
 * @brief                        Check whether the controller is accessible.
 * @details                      [SWDESG_ETH_141]This function check whether the controller is
 *                               accessible.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @return                       TRUE: The controller is accessible.
 *                               FALSE: The controller is not accessible.
 *
 */
ETH_TEXT_SECTION boolean Eth_Hal_CheckAccessController(uint8 CtrlIdx);

/**
 * @brief                        Initialize the handle type and the system level configuration.
 * @details                      Initialize the variables of Eth_HandleType, and configure the
 *                               SCM_ENET and SCM_PERI_CLKDIV registers to configure the clock,
 *                               interface, and other options of Ethernet.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       E_OK The controller is initialized successfully.
 *                               E_NOT_OK The controller is initialized failed.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_PreInit(uint8 CtrlIdx, const Eth_CtrlCfgType *CtrlCfgPtr);

/**
 * @brief                        Initialize the indexed controller.
 * @details                      [SWDESG_ETH_142]Initialize the MDIO,DMA,MTL,MAC,Aotomotive-Safety,
 *                               MMC,PTP registers and transmit/receiver buffers.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       E_OK The controller is initialized successfully.
 *                               E_NOT_OK The controller is initialized failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_InitController(uint8                  CtrlIdx,
                                                       const Eth_CtrlCfgType *CtrlCfgPtr);

/**
 * @brief                        Set the controller mode.
 * @details                      [SWDESG_ETH_143]Set the state of the indexed controller,the
 * function is protected.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlMode           The controller mode.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @return                       E_OK Set mode successfully.
 *                               E_NOT_OK CtrlMode is invalid.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_SetControllerMode(uint8                  CtrlIdx,
                                                          Eth_ModeType           CtrlMode,
                                                          const Eth_CtrlCfgType *CtrlCfgPtr);

/**
 * @brief                        Get the state of the indexed controller.
 * @details                      [SWDESG_ETH_144]Get the controller mode of the indexed controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @return                       ETH_MODE_DOWN: The controller is disabled.
 *                               ETH_MODE_ACTIVE: The controller is enabled.
 *
 */
ETH_TEXT_SECTION Eth_ModeType Eth_Hal_GetControllerMode(uint8 CtrlIdx);

/**
 * @brief                        Get the MAC address of the indexed controller.
 * @details                      [SWDESG_ETH_145]Get the MAC address of the indexed controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] PhysAddrPtr       The variable to save MAC address.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_GetMacAddress(uint8 CtrlIdx, uint8 *PhysAddrPtr);

/**
 * @brief                        Set the MAC address of the indexed controller.
 * @details                      [SWDESG_ETH_146]Set the MAC address of the indexed controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] PhysAddrPtr        MAC address.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_SetMacAddress(uint8 CtrlIdx, const uint8 *PhysAddrPtr);

/**
 * @brief                        Completely open the filter.
 * @details                      [SWDESG_ETH_147]Completely open the filter.All multicast and
 *                               broadcast frames will be forwarded to the application.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_OpenMacAddressFilter(uint8 CtrlIdx);

/**
 * @brief                        Reduce the filter to the controllers unique unicast MAC address.
 * @details                      [SWDESG_ETH_148]Reduce the filter to the controllers unique unicast
 *                               MAC address. All multicast and broadcast frames will be dropped.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_CloseMacAddressFilter(uint8 CtrlIdx);

/**
 * @brief                        Set the filter to user configuration hash filter mode.
 * @details                      [SWDESG_ETH_149]Set the filter to user configuration hash filter
 *                               mode. The Settings such as Reaeive all,pass all multicast,broadcast
 *                               and promiscuous mode,are based on user configuration.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] MacFilter          MAC packet filter register value.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_MacAddressUserModeHashFilter(uint8 CtrlIdx, uint32 MacFilter);

/**
 * @brief                        Set the MAC address filter.
 * @details                      [SWDESG_ETH_150]Set the MAC address filter by set the MAC hash table.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] PhysAddrPtr        MAC address.
 * @param[in] Action             Add or remove the MAC address from hash table.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_SetMacAddressFilter(uint8                CtrlIdx,
                                                  const uint8         *PhysAddrPtr,
                                                  Eth_FilterActionType Action);

#if (STD_ON == ETH_CTRL_ENABLE_MII)
/**
 * @brief                        Write the specified transceiver register through the MII interface.
 * @details                      [SWDESG_ETH_151]Write the specified transceiver register through
 * the MII interface clause 22 protocol.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver.
 * @param[in] RegIdx             Index of the register.
 * @param[in] RegVal             Value to write.
 * @return                       E_OK: Write successfully.
 *                               E_NOT_OK: Write failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_WriteMii(uint8        CtrlIdx,
                                                 uint8        TrcvIdx,
                                                 uint8        RegIdx,
                                                 const uint16 RegVal);

/**
 * @brief                        Read the specified transceiver register through the MII interface.
 * @details                      [SWDESG_ETH_152]Read the specified transceiver register through the
 *                               MII interface clause 22 protocol.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver.
 * @param[in] RegIdx             Index of the register.
 * @param[out] RegValPtr         Pointer to memory to save register value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_ReadMii(uint8   CtrlIdx,
                                                uint8   TrcvIdx,
                                                uint8   RegIdx,
                                                uint16 *RegValPtr);
#endif /* STD_ON == ETH_CTRL_ENABLE_MII */

#if (STD_ON == ETH_CTRL_ENABLE_MMD)
/**
 * @brief                        Write the specified transceiver register through the MII interface.
 * @details                      [SWDESG_ETH_153]Write the specified transceiver register through
 * the MII interface clause 45 protocol.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver.
 * @param[in] Mmd                (MMD)Device address.
 * @param[in] RegIdx             Index of the register.
 * @param[in] RegVal             Value to write.
 * @return                       E_OK: Write successfully.
 *                               E_NOT_OK: Write failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType
    Eth_Hal_WriteMmd(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, const uint16 RegVal);

/**
 * @brief                        Read the specified transceiver register through the MII interface.
 * @details                      [SWDESG_ETH_154]Read the specified transceiver register through the
 *                               MII interface clause 45 protocol.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver.
 * @param[in] Mmd                (MMD)Device address.
 * @param[in] RegIdx             Index of the register.
 * @param[out] RegValPtr         The variable to save register value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType
    Eth_Hal_ReadMmd(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, uint16 *RegValPtr);
#endif /* STD_ON == ETH_CTRL_ENABLE_MMD */

/**
 * @brief                        Read the drop counter values.
 * @details                      [SWDESG_ETH_155]Reads a list with drop counter values of the
 *                               corresponding controller. The meaning of these values is described
 *                               at Eth_CounterType.0xFFFFFFFFU is an invalid value.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] CounterPtr        The variable to save counter value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetCounterValues(uint8 CtrlIdx, Eth_CounterType *CounterPtr);

/**
 * @brief                        Read the RX statistics counter values.
 * @details                      [SWDESG_ETH_156]Reads a list with receive counter values according
 *                               to IETF RFC2819.The meaning of these values is described at
 *                               Eth_RxStatsType. 0xFFFFFFFFU is an invalid value.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] RxStats           The variable to save Rx stats value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetRxStats(uint8 CtrlIdx, Eth_RxStatsType *RxStats);

/**
 * @brief                        Read the TX statistics counter values.
 * @details                      [SWDESG_ETH_157]Returns the list of Transmission Statistics out of
 *                               IETF RFC1213 defined with Eth_TxStatsType, where the maximal
 *                               possible value shall denote an invalid value,e.g. this counter is
 *                               not available.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] TxStats           The variable to save Tx stats value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetTxStats(uint8 CtrlIdx, Eth_TxStatsType *TxStats);

/**
 * @brief                        Read the transmission error counter values.
 * @details                      [SWDESG_ETH_158]Returns the list of transmission error counters out
 *                               of IETF RFC1213 and RFC1643 defined with
 *                               Eth_TxErrorCounterValuesType. 0xFFFFFFFFU is an invalid value.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] TxErrorCounterValues The variable to save Tx error counters value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetTxErrorCounterValues(
    uint8                         CtrlIdx,
    Eth_TxErrorCounterValuesType *TxErrorCounterValues);

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
/**
 * @brief                        Get current PTP system time.
 * @details                      [SWDESG_ETH_159]Get current PTP system time maintained by the
 *                               Ethernet controller.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] timeQualPtr       The quality of timestamp.
 * @param[out] timeStampPtr      The system time value.
 * @return                       E_OK: Read successfully.
 *                               E_NOT_OK: Read failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_GetCurrentTime(uint8                  CtrlIdx,
                                                       Eth_TimeStampQualType *timeQualPtr,
                                                       Eth_TimeStampType     *timeStampPtr);

/**
 * @brief                        Enable egress time stamping on a dedicated message.
 * @details                      [SWDESG_ETH_160]Enable egress time stamping on a dedicated message.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] BufIdx             Index of the message buffer.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_EnableEgressTimeStamp(uint8 CtrlIdx, Eth_BufIdxType BufIdx);

/**
 * @brief                        Get PTP time stamp of egressed frame.
 * @details                      [SWDESG_ETH_161]Get the time stamp of the transmitted frame on the
 *                               egress path.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[out] timeQualPtr       The quality of time stamp.
 * @param[out] timeStampPtr      The time stamp value.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_GetEgressTimeStamp(uint8                  CtrlIdx,
                                                 Eth_BufIdxType         BufIdx,
                                                 Eth_TimeStampQualType *timeQualPtr,
                                                 Eth_TimeStampType     *timeStampPtr);

/**
 * @brief                        Get PTP time stamp of ingressed frame.
 * @details                      [SWDESG_ETH_162]Get the time stamp of the received  frame on the
 *                               ingress path.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[out] timeQualPtr       The quality of time stamp.
 * @param[out] timeStampPtr      The time stamp value.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_GetIngressTimeStamp(uint8                  CtrlIdx,
                                                  const Eth_CtrlCfgType *CtrlCfgPtr,
                                                  const Eth_DataType    *DataPtr,
                                                  Eth_TimeStampQualType *timeQualPtr,
                                                  Eth_TimeStampType     *timeStampPtr);

/**
 * @brief                        Set PTP system time correction.
 * @details                      [SWDESG_ETH_163]Set PTP system time offset and ratio correction. If
 *                               the secondsHi field of timeOffsetPtr or rateRatioPtr is nonzero
 *                               value, that is, the time difference or time ratio is too large,
 * this API will return E_NOT_OK, please call Eth_Hal_SetGlobalTime first.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] timeOffsetPtr      The PTP time offset value.
 * @param[in] rateRatioPtr       The PTP time ratio bias.
 * @return                       E_OK: Set correction time successfully.
 *                               E_NOT_OK: Set correction time failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_SetCorrectionTime(uint8                      CtrlIdx,
                                                          const Eth_TimeIntDiffType *timeOffsetPtr,
                                                          const Eth_RateRatioType   *rateRatioPtr);

/**
 * @brief                        Set PTP system time.
 * @details                      [SWDESG_ETH_164]Set PTP system time to a target value.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] timeStampPtr       The PTP time value to set.
 * @return                       E_OK: Set PTP time successfully.
 *                               E_NOT_OK: Set PTP time failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_SetGlobalTime(uint8                    CtrlIdx,
                                                      const Eth_TimeStampType *timeStampPtr);
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

/**
 * @brief                        Provides access to a transmit buffer of the FIFO related to the
 *                               specified priority.
 * @details                      [SWDESG_ETH_165]Get a transmit buffer resource from the resource
 *                               pool maintained by the ETH driver.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] FifoIdx            Index of the transmit FIFO.
 * @param[out] BufIdxPtr         Index to the granted buffer resource. To be used for subsequent
 *                               requests.
 * @param[out] BufPtr            Pointer to the granted buffer.
 * @param[inout] LenBytePtr      In: desired length in bytes, out: granted length in bytes.
 * @return                       BUFREQ_OK: success.
 *                               BUFREQ_E_BUSY: all buffers in use.
 *                               BUFREQ_E_OVFL: requested buffer too large.
 *
 */
ETH_TEXT_SECTION BufReq_ReturnType Eth_Hal_ProvideTxBuffer(uint8                  CtrlIdx,
                                                           const Eth_CtrlCfgType *CtrlCfgPtr,
                                                           uint8                  FifoIdx,
                                                           Eth_BufIdxType        *BufIdxPtr,
                                                           uint8                **BufPtr,
                                                           uint16                *LenBytePtr);

/**
 * @brief                        Triggers transmission of a previously filled transmit buffer.
 * @details                      [SWDESG_ETH_166]Build the Ethernet header with the given physical
 *                               target address (MAC address) and trigger the transmission of a
 *                               previously filled transmit buffer.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] BufIdx             Index of the buffer resource.
 * @param[in] FrameType          Ethernet frame type.
 * @param[in] TxConfirmation     Activates transmission confirmation.
 * @param[in] LenByte            Data length in byte.
 * @param[in] PhysAddrPtr        Physical target address (MAC address) in network byte order.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transmission failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_Transmit(uint8                  CtrlIdx,
                                                 const Eth_CtrlCfgType *CtrlCfgPtr,
                                                 Eth_BufIdxType         BufIdx,
                                                 Eth_FrameType          FrameType,
                                                 boolean                TxConfirmation,
                                                 uint16                 LenByte,
                                                 const uint8           *PhysAddrPtr);

/**
 * @brief                        Report transmission to EthIf layer.
 * @details                      [SWDESG_ETH_167]Report transmission to EthIf layer in protected
 *                               context.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] FifoIdx            Index of the FIFO channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ReportTransmission(uint8                  CtrlIdx,
                                                 uint8                  FifoIdx,
                                                 const Eth_CtrlCfgType *CtrlCfgPtr);

/**
 * @brief                        Report reception to EthIf layer.
 * @details                      [SWDESG_ETH_168]Report reception to EthIf layer.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] FifoIdx            Index of the FIFO channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION Eth_RxStatusType Eth_Hal_ReportReception(uint8                  CtrlIdx,
                                                          uint8                  FifoIdx,
                                                          const Eth_CtrlCfgType *CtrlCfgPtr);

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
/**
 * @brief                        Initialize Time Aware Shaper.
 * @details                      [SWDESG_ETH_353]This is the implementation of IEEE 802.1Qbv
 *                               (Enhancements to Scheduled Traffic) and IEEE802.1Qbu (Frame
 *                               Preemption). Note that, this function needs to be called after the
 *                               time synchronization.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] TimeAwareShaperIdx Index of the time aware shaper configurations.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_TimeAwareShaperInit(uint8                  CtrlIdx,
                                                            const Eth_CtrlCfgType *CtrlCfgPtr,
                                                            uint8 TimeAwareShaperIdx);
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
/**
 * @brief                       Configure TBS control register.
 * @details                     Configures the Time Based Scheduling control register with the
 * provided parameters.
 *
 * @param[in] CtrlIdx           Index of the controller within the context of the Ethernet Driver.
 * @param[in] TBSCfgPtr         Pointer to the TBS configuration.
 * @return Std_ReturnType       Operation status (E_OK if successful, E_NOT_OK otherwise).
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Hal_TBSConfigureCtrl(uint8                  CtrlIdx,
                                                         const Eth_CtrlCfgType *CtrlCfgPtr,
                                                         const Eth_TBSCfgType  *TBSCfgPtr);

/**
 * @brief                        Set launch time of the indexed buffer resource.
 * @details                      Save the launch time to the buffer resource structure.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] BufIdx             Index of the buffer resource to be transmitted.
 * @param[in] LaunchTimePtr      Pointer to the TBS launch time structure.
 * @return Std_ReturnType        Operation status (E_OK if successful, E_NOT_OK otherwise).
 */
ETH_TEXT_SECTION void Eth_Hal_TBSSetLaunchTime(uint8                        CtrlIdx,
                                               Eth_BufIdxType               BufIdx,
                                               const Eth_TBSLaunchTimeType *LaunchTimePtr);
#endif /* STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT */

/**
 * @brief                        Eth driver scheduled main function.
 * @details                      [SWDESG_ETH_169]The function checks for controller errors and lost
 *                               frames. Used for polling state changes. Calls
 *                               EthIf_CtrlModeIndication when the controller mode changed.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_MainFunction(uint8 CtrlIdx, const Eth_CtrlCfgType *CtrlCfgPtr);

/**
 * @brief                        Process the system interrupt event.
 * @details                      [SWDESG_ETH_170]Handle the system interrupt events.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ProcessSystemInterrupt(uint8                  CtrlIdx,
                                                     const Eth_CtrlCfgType *CtrlCfgPtr);

/**
 * @brief                        Process the transmission interrupt event.
 * @details                      [SWDESG_ETH_171]Handle the transmission interrupt events.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] ChIdx              Index of the TX channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ProcessTxInterrupt(uint8                  CtrlIdx,
                                                 uint8                  ChIdx,
                                                 const Eth_CtrlCfgType *CtrlCfgPtr);

/**
 * @brief                        Process the reception interrupt event.
 * @details                      [SWDESG_ETH_172]Handle the reception interrupt events.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] ChIdx              Index of the RX channel.
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ProcessRxInterrupt(uint8                  CtrlIdx,
                                                 uint8                  ChIdx,
                                                 const Eth_CtrlCfgType *CtrlCfgPtr);

/**
 * @brief                        Clear the system interrupt status.
 * @details                      [SWDESG_ETH_173]Clear the system interrupt status.
 *
 * @param[in] CtrlIdx            The controller index.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ClearSystemInterruptStatus(uint8 CtrlIdx);

/**
 * @brief                        Clear the transmission interrupt status.
 * @details                      [SWDESG_ETH_174]Clear the transmission interrupt status.
 *
 * @param[in] CtrlIdx            The controller index.
 * @param[in] ChIdx              The channel index.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ClearTxInterruptStatus(uint8 CtrlIdx, uint8 ChIdx);

/**
 * @brief                        Clear the reception interrupt status.
 * @details                      [SWDESG_ETH_175]Clear the reception interrupt status.
 *
 * @param[in] CtrlIdx            The controller index.
 * @param[in] ChIdx              The channel index.
 *
 */
ETH_TEXT_SECTION void Eth_Hal_ClearRxInterruptStatus(uint8 CtrlIdx, uint8 ChIdx);

#define ETH_STOP_SEC_CODE
#include "Eth_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*ETH_HAL_H*/

/** @} */
