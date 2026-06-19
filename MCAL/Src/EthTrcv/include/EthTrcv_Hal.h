/**
*   @file    EthTrcv_Hal.h
*   @implements      EthTrcv_Hal.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR EthTrcv - driver API and definition header file.
*   @details This file contains the implementation of EthTrcv driver API and definition.
*
*   @addtogroup ETHTRCV
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETHTRCV
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
*   0.2.0       27/09/2023    QXW0085       N/A          EthTrcv Initial Version
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Update version
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix
*   0.6.0       15/01/2024    QXW0085       N/A          Update version
==================================================================================================*/

/* PRQA S 3472 EOF
   3472: All toplevel uses of this function-like macro look like they could be replaced by
   equivalent function calls.
   REASON:This is the normal usage of macros.
*/

/* PRQA S 0791 EOF
   0791:Macro identifier does not differ from other macro identifier(s) (e.g. '%1s') within the
      specified number of significant characters.
   REASON:These macros are distinct.
*/

/* PRQA S 2071 EOF
   2071: This attribute syntax is a language extension.
   REASON:These test code need to be placed in the specified location.
*/

#ifndef ETHTRCV_HAL_H
#define ETHTRCV_HAL_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthTrcv_Types.h"
#include "EthTrcv_Hw.h"
#include "SchM_EthTrcv.h"
#include "EthIf.h"
#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
#include "Det.h"
#endif
#if (STD_ON == ETHTRCV_DEM_EVENT_DETECT)
#include "Dem.h"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/* Get current ECU core ID */
#if (ETHTRCV_NUM_ECU_PARTITIONS > 1U)
#define EthTrcv_GetPartitionID() GET_CPU_ID()
#else
#define EthTrcv_GetPartitionID() (0U)
#endif /* ETHTRCV_NUM_ECU_PARTITIONS > 1U */

#if (ETHTRCV_NUM_ECU_PARTITIONS > 1U)
/* Get the core ID of the transceiver mapped */
#define ETHTRCV_CFG_PARTITION_ID(TrcvIdx, CoreId) \
    ((EthTrcv_Config_Ptrs[CoreId])->TrcvCfgPtr[TrcvIdx].EcucPartition)
#endif /* ETHTRCV_NUM_ECU_PARTITIONS > 1U */

/* Get the number of configured transceivers */
#define ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId) ((EthTrcv_Config_Ptrs[CoreId])->NumTransceivers)

/* Get the pointer to the controller configuration */
#define ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId) \
    (&((EthTrcv_Config_Ptrs[CoreId])->TrcvCfgPtr[TrcvIdx]))

#define ETHTRCV_CFG_ETHIF_TRCVIDX(TrcvCfgPtr) ((TrcvCfgPtr)->EthIfTrcvIdx)

#define ETHTRCV_CFG_TRCV_AUTONEG_ENABLED(TrcvCfgPtr) \
    ((TrcvCfgPtr)->ConnNeg == ETHTRCV_CONN_NEG_AUTO)

#define ETHTRCV_CFG_TRCV_SOFTRESET_ON_INIT(TrcvCfgPtr) ((TrcvCfgPtr)->SoftResetOnInit)

#define ETHTRCV_CFG_TRCV_SOFTRESET_READ_REPETITIONS(TrcvCfgPtr) \
    ((TrcvCfgPtr)->SoftResetReadRepetitions)

#define ETHTRCV_CFG_TRCV_PHY_INTERFACE(TrcvCfgPtr)   ((TrcvCfgPtr)->PhyIf)

#define ETHTRCV_CFG_TRCV_PHYS_LAYER_TYPE(TrcvCfgPtr) ((TrcvCfgPtr)->PhysLayer)

#define ETHTRCV_CFG_WAKEUP_SLEEP_ON_DATALINE_ENABLED(TrcvCfgPtr) \
    ((TrcvCfgPtr)->WakeupSleepOnDatalineEnabled)

#define ETHTRCV_CFG_TRCV_RGMII_TX_DELAY_ENABLED(TrcvCfgPtr) ((TrcvCfgPtr)->RgmiiTxDelayEnabled)

#define ETHTRCV_CFG_TRCV_RGMII_TX_DELAY_VALUE(TrcvCfgPtr)   ((TrcvCfgPtr)->RgmiiTxDelayValue)

#define ETHTRCV_CFG_TRCV_RGMII_RX_DELAY_ENABLED(TrcvCfgPtr) ((TrcvCfgPtr)->RgmiiRxDelayEnabled)

#define ETHTRCV_CFG_TRCV_RGMII_RX_DELAY_VALUE(TrcvCfgPtr)   ((TrcvCfgPtr)->RgmiiRxDelayValue)

#define ETHTRCV_CFG_TRCV_CLOCK_OUTPUT(TrcvCfgPtr)           ((TrcvCfgPtr)->ClkOutPut)

#define ETHTRCV_CFG_TRCV_LINKUP_REOETITIONS(TrcvCfgPtr)     ((TrcvCfgPtr)->WaitLinkupRepetitions)

#define ETHTRCV_CFG_TRCV_CONNNEG(TrcvCfgPtr)                ((TrcvCfgPtr)->ConnNeg)

#define ETHTRCV_CFG_TRCV_DUPLEX_MODE(TrcvCfgPtr)            ((TrcvCfgPtr)->DuplexMode)

#define ETHTRCV_CFG_TRCV_SPEED_MODE(TrcvCfgPtr)             ((TrcvCfgPtr)->MacLayerSpeed)

#define ETHTRCV_CFG_TRCV_AUTONEG_SPEED(TrcvCfgPtr)          ((TrcvCfgPtr)->TrcvSpeed)

#define ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr)          ((TrcvCfgPtr)->MiiIfPtr)

#define ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr)               ((TrcvCfgPtr)->DerivateType)

extern const EthTrcv_ConfigType *EthTrcv_Config_Ptrs[ETHTRCV_NUM_ECU_PARTITIONS];

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define ETHTRCV_START_SEC_CODE
#include "EthTrcv_MemMap.h"

/**
 * @brief                        Check whether the transceiver is accessible.
 * @details                      This function check whether the controller is accessible by reading
 *                               the identifier.
 *
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK: The transceiver is accessible.
 *                               E_NOT_OK: The transceiver is not accessible.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_CheckAccessTransceiver(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);

/**
 * @brief                        Initialize the indexed transceiver.
 * @details                      Initialize the indexed transceiver.Configure all transceiver
 * configuration parameters (e.g. baud rate, duplex mode, automatic negotiation, ...).
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK The transceiver is initialized successfully.
 *                               E_NOT_OK The transceiver is initialized failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_InitTransceiver(uint8 TrcvIdx,
                                                                const EthTrcv_TrcvCfgType *TrcvCfgPtr);

/**
 * @brief                        Set the transceiver mode of indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] TrcvMode           ETHTRCV_MODE_DOWN: disable the transceiver.
 *                               ETHTRCV_MODE_ACTIVE: enable the transceiver.
 *                               ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST: enable the transceiver and
 *                               request an wake-up on the network
 * @return                       E_OK The transceiver mode is set successfully.
 *                               E_NOT_OK The transceiver mode is set failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_SetTransceiverMode(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    Eth_ModeType               TrcvMode);

/**
 * @brief                        Get the transceiver mode of indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] TrcvModePtr       ETHTRCV_MODE_DOWN: disable the transceiver.
 *                               ETHTRCV_MODE_ACTIVE: enable the transceiver.
 * @return                       E_OK Get the transceiver mode successfully.
 *                               E_NOT_OK Get the transceiver mode failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetTransceiverMode(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    Eth_ModeType              *TrcvModePtr

);

#if (STD_ON == ETHTRCV_SET_TRANSCEIVER_WAKEUP_MODE_API)
/**
 * @brief                        Set the transceiver wake up mode of indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] TrcvWakeupMode     ETHTRCV_WUM_DISABLE: disable transceiver wake up.
 *                               ETHTRCV_WUM_ENABLE: enable transceiver wake up.
 *                               ETHTRCV_WUM_CLEAR: clears transceiver wake up reason.
 * @return                       E_OK success.
 *                               E_NOT_OK failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_SetTransceiverWakeupMode(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    EthTrcv_WakeupModeType     TrcvWakeupMode);
#endif /* STD_ON == ETHTRCV_SET_TRANSCEIVER_WAKEUP_MODE_API */

#if (STD_ON == ETHTRCV_GET_TRANSCEIVER_WAKEUP_MODE_API)
/**
 * @brief                        Get the transceiver wake up mode of indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] TrcvWakeupModePtr ETHTRCV_WUM_DISABLE: transceiver wake up is disabled.
 *                               ETHTRCV_WUM_ENABLE: transceiver wake up is enabled.
 * @return                       E_OK success.
 *                               E_NOT_OK failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetTransceiverWakeupMode(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    EthTrcv_WakeupModeType    *TrcvWakeupModePtr);
#endif /* STD_ON == ETHTRCV_GET_TRANSCEIVER_WAKEUP_MODE_API */

#if (STD_ON == ETHTRCV_GET_BUS_WU_REASON_API)
/**
 * @brief                        Get the least recent wakeup reasons of indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] WakeupReasonPtr   The reasons defined in EthTrcv_WakeupReasonType.
 * @return                       E_OK success.
 *                               E_NOT_OK failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetBusWuReason(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    EthTrcv_WakeupReasonType  *WakeupReasonPtr);
#endif /* STD_ON == ETHTRCV_GET_BUS_WU_REASON_API */

/**
 * @brief                        Check if the wakeup event of the indexed transceiver is detected.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK success.
 *                               E_NOT_OK failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_CheckWakeup(uint8                      TrcvIdx,
                                                            const EthTrcv_TrcvCfgType *TrcvCfgPtr);

#if (STD_ON == ETHTRCV_START_AUTONEGOTIATION_API)
/**
 * @brief                        Restart the automatic negotiation of the transmission.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK success.
 *                               E_NOT_OK failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_StartAutoNegotiation(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);
#endif /* STD_ON == ETHTRCV_START_AUTONEGOTIATION_API */

/**
 * @brief                        Start link training of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] LinkState          The Ethernet link state of a physical Ethernet connection.
 * @return                       E_OK success.
 *                               E_NOT_OK failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_TransceiverLinkStateRequest(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    EthTrcv_LinkStateType      LinkState);

#if (STD_ON == ETHTRCV_GET_LINK_STATE_API)
/**
 * @brief                        Read the current link state of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] LinkStatePtr      ETHTRCV_LINK_STATE_DOWN: transceiver is disconnected.
 *                               ETHTRCV_LINK_STATE_ACTIVE: transceiver is connected.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetLinkState(uint8                      TrcvIdx,
                                                             const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                             EthTrcv_LinkStateType *LinkStatePtr);
#endif /* STD_ON == ETHTRCV_GET_LINK_STATE_API */

#if (STD_ON == ETHTRCV_GET_BAUD_RATE_API)
/**
 * @brief                        Read the baud rate of the current link.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] BaudRatePtr       ETHTRCV_BAUD_RATE_10MBIT: 10MBit connection.
 *                               ETHTRCV_BAUD_RATE_100MBIT: 100MBit connection.
 *                               ETHTRCV_BAUD_RATE_1000MBIT: 1000MBit connection.
 *                               ETHTRCV_BAUD_RATE_2500MBIT: 2500MBIT Ethernet connection.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetBaudRate(uint8                      TrcvIdx,
                                                            const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                            EthTrcv_BaudRateType      *BaudRatePtr);
#endif /* STD_ON == ETHTRCV_GET_BAUD_RATE_API */

#if (STD_ON == ETHTRCV_GET_DUPLEX_MODE_API)
/**
 * @brief                        Read the duplex mode of the current link.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] DuplexModePtr     ETHTRCV_DUPLEX_MODE_HALF: half duplex connections.
 *                               ETHTRCV_DUPLEX_MODE_FULL: full duplex connection.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetDuplexMode(uint8                      TrcvIdx,
                                                              const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                              EthTrcv_DuplexModeType *DuplexModePtr);
#endif /* STD_ON == ETHTRCV_GET_DUPLEX_MODE_API */

/**
 * @brief                        Check the test mode is available on the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] Mode               Test mode to be activated.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_PhyTestModeAvailable(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    EthTrcv_PhyTestModeType    Mode);

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API)
/**
 * @brief                        Activates a given test mode of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] Mode               Test mode to be activated.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_SetPhyTestMode(uint8 TrcvIdx,
                                                               const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                               EthTrcv_PhyTestModeType Mode);
#endif /* STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API */

/**
 * @brief                        Check the loop back mode is available on the indexed transceiver.
 *
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] Mode               Loop back mode to be activated.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_PhyLoopbackModeAvailable(
    const EthTrcv_TrcvCfgType  *TrcvCfgPtr,
    EthTrcv_PhyLoopbackModeType Mode);

/**
 * @brief                        Activates a given loopback mode of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] Mode               Loopback mode to be activated.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_SetPhyLoopbackMode(
    uint8                       TrcvIdx,
    const EthTrcv_TrcvCfgType  *TrcvCfgPtr,
    EthTrcv_PhyLoopbackModeType Mode);

/**
 * @brief                        Read the signal quality of the current link.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] SignalQualityPtr  Pointer to the memory where the signal quality shall be stored.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetPhySignalQuality(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    uint32                    *SignalQualityPtr);

/**
 * @brief                        Check the TX mode is available on the indexed transceiver.
 *
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] Mode               TX mode to be activated.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_PhyTxModeAvailable(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    EthTrcv_PhyTxModeType      Mode);

/**
 * @brief                        Set the transmission mode of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] Mode              Transmission mode to be activated.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_SetPhyTxMode(uint8                      TrcvIdx,
                                                             const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                             EthTrcv_PhyTxModeType      Mode);

#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
/**
 * @brief                        Trigger the cable diagnostics of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_RunCableDiagnostic(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);

/**
 * @brief                        Get the cable diagnostics result of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] ResultPtr         Pointer to the location where the cable diagnostics result shall
 *                               be stored.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetCableDiagnosticsResult(
    uint8                        TrcvIdx,
    const EthTrcv_TrcvCfgType   *TrcvCfgPtr,
    EthTrcv_CableDiagResultType *ResultPtr);
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */

#if (STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API)
/**
 * @brief                        Read the identifier of the indexed transceiver.
 *
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] OrgUniqueIdPtr    Pointer to the memory where the Organizationally Unique Identifier
 *                               shall be stored.
 * @param[out] ModelNrPtr        Pointer to the memory where the Manufacturer's Model Number shall
 *                               be stored.
 * @param[out] RevisionNrPtr     Pointer to the memory where the Revision Number shall be stored.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetPhyIdentifier(const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                                 uint32 *OrgUniqueIdPtr,
                                                                 uint8  *ModelNrPtr,
                                                                 uint8  *RevisionNrPtr);
#endif /* STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API */

/**
 * @brief                        Get the media access mode of the transceiver when EthTrcvDuplexMode
 *                               is configured as ETHTRCV_DUPLEX_MODE_HALF.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[out] MacModePtr        ETHTRCV_MAC_TYPE_CSMA_CD: Carrier-sense multiple access with
 * collicion detection. ETHTRCV_MAC_TYPE_PLCA: Physical layer collision avoidance.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_GetMacMethod(uint8                      TrcvIdx,
                                                             const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                             EthTrcv_MacMethodType     *MacModePtr);

/**
 * @brief                        Ethernet Transceiver scheduled function.
 * @details                      Used for polling state changes and wakeup reasons. Calls
 *                               EthIf_TrcvModeIndication when the transceiver mode changed.
 *                               Stores wakeup events if EthTrcvWakeUpSupport is set to
 *                               ETHTRCV_WAKEUP_BY_POLLING.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_Hal_MainFunction(uint8                      TrcvIdx,
                                                   const EthTrcv_TrcvCfgType *TrcvCfgPtr);

#define ETHTRCV_STOP_SEC_CODE
#include "EthTrcv_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*ETHTRCV_HAL_H*/

/** @} */
