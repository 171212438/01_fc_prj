/**
*   @file    EthTrcv.h
*   @implements      EthTrcv.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR EthTrcv - driver API and definition header file.
*   @details This file contains the implementation of EthTrcv driver API and definition.
*
*   @addtogroup ETHTRCV
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EthTrcv
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

/* PRQA S 2071 EOF
   2071: This attribute syntax is a language extension.
   REASON:These test code need to be placed in the specified location.
*/

#ifndef ETHTRCV_H
#define ETHTRCV_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthTrcv_Version.h"
#include "EthTrcv_Types.h"
#include "EthTrcv_Cfg.h"

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/* EthTrcv driver service IDs definition */
#define ETHTRCV_DRV_SID_INIT                        0x01
#define ETHTRCV_DRV_SID_TRANSCEIVERLINKSTATEREQUEST 0x02
#define ETHTRCV_DRV_SID_SETTRANSCEIVERMODE          0x03
#define ETHTRCV_DRV_SID_GETTRANSCEIVERMODE          0x04
#define ETHTRCV_DRV_SID_STARTAUTONEGOTIATION        0x05
#define ETHTRCV_DRV_SID_GETLINKSTATE                0x06
#define ETHTRCV_DRV_SID_GETBAUDRATE                 0x07
#define ETHTRCV_DRV_SID_GETDUPLEXMODE               0x08
#define ETHTRCV_DRV_SID_READMIIINDICATION           0x09
#define ETHTRCV_DRV_SID_WRITEMIIINDICATION          0x0A
#define ETHTRCV_DRV_SID_GETVERSIONINFO              0x0B
#define ETHTRCV_DRV_SID_MAINFUNCTION                0x0C
#define ETHTRCV_DRV_SID_SETTRANSCEIVERWAKEUPMODE    0x0D
#define ETHTRCV_DRV_SID_GETTRANSCEIVERWAKEUPMODE    0x0E
#define ETHTRCV_DRV_SID_CHECKWAKEUP                 0x0F
#define ETHTRCV_DRV_SID_GETPHYSIGNALQUALITY         0x10
#define ETHTRCV_DRV_SID_SETPHYTESTMODE              0x11
#define ETHTRCV_DRV_SID_SETPHYLOOPBACKMODE          0x12
#define ETHTRCV_DRV_SID_SETPHYTXMODE                0x13
#define ETHTRCV_DRV_SID_GETCABLEDIAGNOSTICSRESULT   0x14
#define ETHTRCV_DRV_SID_GETPHYIDENTIFIER            0x15
#define ETHTRCV_DRV_SID_RUNCABLEDIAGNOSTIC          0x16
#define ETHTRCV_DRV_SID_GETBUSWUREASON              0x17
#define ETHTRCV_DRV_SID_GETMACMETHOD                0x18

/* EthTrcv DET error codes */
#define ETHTRCV_E_INV_TRCV_IDX                      ((uint8)0x01)
#define ETHTRCV_E_UNINIT                            ((uint8)0x02)
#define ETHTRCV_E_PARAM_POINTER                     ((uint8)0x03)
#define ETHTRCV_E_NOT_SUPPORTED                     ((uint8)0x04)
#define ETHTRCV_E_INV_PARTITION                     ((uint8)0x05)
#define ETHTRCV_E_ALREADY_INITIALIZED               ((uint8)0x06)

#if ((STD_ON == ETHTRCV_VERSION_INFO_API) && (STD_ON == ETHTRCV_VERSION_INFO_API_MACRO))
/**
 * @brief    Get version information macro.
 *
 */
#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
#define EthTrcv_GetVersionInfo(VersionInfoPtr)                                     \
    do                                                                             \
    {                                                                              \
        if (NULL_PTR == VersionInfoPtr)                                            \
        {                                                                          \
            (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,                       \
                                  (uint8)ETHTRCV_INDEX,                            \
                                  (uint8)ETHTRCV_DRV_SID_GETVERSIONINFO,           \
                                  (uint8)ETHTRCV_E_PARAM_POINTER);                 \
        }                                                                          \
        else                                                                       \
        {                                                                          \
            (VersionInfoPtr)->vendorID         = (uint16)ETHTRCV_VENDOR_ID;        \
            (VersionInfoPtr)->moduleID         = (uint16)ETHTRCV_MODULE_ID;        \
            (VersionInfoPtr)->sw_major_version = (uint16)ETHTRCV_SW_MAJOR_VERSION; \
            (VersionInfoPtr)->sw_minor_version = (uint16)ETHTRCV_SW_MINOR_VERSION; \
            (VersionInfoPtr)->sw_patch_version = (uint16)ETHTRCV_SW_PATCH_VERSION; \
        }                                                                          \
    }                                                                              \
    while (0U)
#else
#define EthTrcv_GetVersionInfo(VersionInfoPtr)                                 \
    do                                                                         \
    {                                                                          \
        (VersionInfoPtr)->vendorID         = (uint16)ETHTRCV_VENDOR_ID;        \
        (VersionInfoPtr)->moduleID         = (uint16)ETHTRCV_MODULE_ID;        \
        (VersionInfoPtr)->sw_major_version = (uint16)ETHTRCV_SW_MAJOR_VERSION; \
        (VersionInfoPtr)->sw_minor_version = (uint16)ETHTRCV_SW_MINOR_VERSION; \
        (VersionInfoPtr)->sw_patch_version = (uint16)ETHTRCV_SW_PATCH_VERSION; \
    }                                                                          \
    while (0U)
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
#endif

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define ETHTRCV_START_SEC_CODE
#include "EthTrcv_MemMap.h"
/**
 * @brief    Services defined in AUROSAR Ethernet Transceiver Driver module.
 */

/**
 * @brief                        Initializes the Ethernet Transceiver Driver.
 * @details                      This function is AUTOSAR standard API which is used to initialize
 *                               the EthernetTransceiver.
 *
 * @param[in] CfgPtr             Points to the implementation specific structure.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_Init(const EthTrcv_ConfigType *CfgPtr);

/**
 * @brief                        Enables / disables the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to
 *                               Enables / disables the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvMode           ETHTRCV_MODE_DOWN: disable the transceiver.
 *                               ETHTRCV_MODE_ACTIVE: enable the transceiver.
 *                               ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST: enable the transceiver and
 *                               request an wake-up on the network
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetTransceiverMode(uint8 TrcvIdx, Eth_ModeType TrcvMode);

/**
 * @brief                        Obtains the state of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               state of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] TrcvModePtr       ETHTRCV_MODE_DOWN: the transceiver is disabled.
 *                               ETHTRCV_MODE_ACTIVE: the transceiver is enabled.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetTransceiverMode(uint8         TrcvIdx,
                                                               Eth_ModeType *TrcvModePtr);

#if (STD_ON == ETHTRCV_SET_TRANSCEIVER_WAKEUP_MODE_API)
/**
 * @brief                        Enables / disables the wake-up mode or clear the wake-up reason of
 *                               the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to
 *                               enables / disables the wake-up mode or clear the wake-up reason of
 *                               the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvWakeupMode     ETHTRCV_WUM_DISABLE: disable transceiver wake up.
 *                               ETHTRCV_WUM_ENABLE: enable transceiver wake up.
 *                               ETHTRCV_WUM_CLEAR: clears transceiver wake up reason.
 * @return                       E_OK: transceiver wake up mode has been changed.
 *                               E_NOT_OK: transceiver wake up mode could not be changed or the
 *                               wake-up reason could not be cleared.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetTransceiverWakeupMode(
    uint8                  TrcvIdx,
    EthTrcv_WakeupModeType TrcvWakeupMode);
#endif /* STD_ON == ETHTRCV_SET_TRANSCEIVER_WAKEUP_MODE_API */

#if (STD_ON == ETHTRCV_GET_TRANSCEIVER_WAKEUP_MODE_API)
/**
 * @brief                        Obtains the wake up mode of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               wake up mode of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] TrcvWakeupModePtr ETHTRCV_WUM_DISABLE: transceiver wake up is disabled.
 *                               ETHTRCV_WUM_ENABLE: transceiver wake up is enabled.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver wake up mode could not be obtained.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetTransceiverWakeupMode(
    uint8                   TrcvIdx,
    EthTrcv_WakeupModeType *TrcvWakeupModePtr);
#endif /* STD_ON == ETHTRCV_GET_TRANSCEIVER_WAKEUP_MODE_API */

#if (STD_ON == ETHTRCV_GET_BUS_WU_REASON_API)
/**
 * @brief                        This function returns the least recent wakeup reasons.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               the least recent wakeup reasons.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] WakeupReasonPtr   Pointer to structure of least recent wakeup event, which was
 * detected by the Ethernet PHY.
 * @return                       E_OK: PHY wake up reason request has been accepted.
 *                               E_NOT_OK: PHY wake up reason request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetBusWuReason(uint8 TrcvIdx,
                                                           EthTrcv_WakeupReasonType *WakeupReasonPtr);
#endif /* STD_ON == ETHTRCV_GET_BUS_WU_REASON_API */

/**
 * @brief                        Service is called by EthIf in case a wake-up interrupt is detected.
 * @details                      Service is called by EthIf in case a wake-up interrupt is detected.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @return                       E_OK: The function has been successfully executed.
 *                               E_NOT_OK: The function could not be successfully executed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_CheckWakeup(uint8 TrcvIdx);

#if (STD_ON == ETHTRCV_START_AUTONEGOTIATION_API)
/**
 * @brief                        Restarts the negotiation of the transmission parameters used by the
 *                               indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to restarts the
 *                               negotiation of the transmission.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_StartAutoNegotiation(uint8 TrcvIdx);
#endif /* STD_ON == ETHTRCV_START_AUTONEGOTIATION_API */

#if (STD_ON == ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API)
/**
 * @brief                        Request the given link state for the given Ethernet transceiver.
 * @details                      This function is AUTOSAR standard API which is used to request the
 *                               given link state for the given Ethernet transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] LinkState          The Ethernet link state of a physical Ethernet connection.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_TransceiverLinkStateRequest(
    uint8                 TrcvIdx,
    EthTrcv_LinkStateType LinkState);
#endif /* STD_ON == ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API */

#if (STD_ON == ETHTRCV_GET_LINK_STATE_API)
/**
 * @brief                        Obtains the link state of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               link state of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] LinkStatePtr      ETHTRCV_LINK_STATE_DOWN: transceiver is disconnected.
 *                               ETHTRCV_LINK_STATE_ACTIVE: transceiver is connected.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetLinkState(uint8                  TrcvIdx,
                                                         EthTrcv_LinkStateType *LinkStatePtr);
#endif /* STD_ON == ETHTRCV_GET_LINK_STATE_API */

#if (STD_ON == ETHTRCV_GET_BAUD_RATE_API)
/**
 * @brief                        Obtains the baud rate of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               baud rate of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] BaudRatePtr       ETHTRCV_BAUD_RATE_10MBIT: 10MBit connection.
 *                               ETHTRCV_BAUD_RATE_100MBIT: 100MBit connection.
 *                               ETHTRCV_BAUD_RATE_1000MBIT: 1000MBit connection.
 *                               ETHTRCV_BAUD_RATE_2500MBIT: 2500MBIT Ethernet connection.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetBaudRate(uint8                 TrcvIdx,
                                                        EthTrcv_BaudRateType *BaudRatePtr);
#endif /* STD_ON == ETHTRCV_GET_BAUD_RATE_API */

#if (STD_ON == ETHTRCV_GET_DUPLEX_MODE_API)
/**
 * @brief                        Obtains the duplex mode of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               duplex mode of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] DuplexModePtr     ETHTRCV_DUPLEX_MODE_HALF: half duplex connections.
 *                               ETHTRCV_DUPLEX_MODE_FULL: full duplex connection.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetDuplexMode(uint8                   TrcvIdx,
                                                          EthTrcv_DuplexModeType *DuplexModePtr);
#endif /* STD_ON == ETHTRCV_GET_DUPLEX_MODE_API */

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API)
/**
 * @brief                        Activates a given test mode.
 * @details                      This function is AUTOSAR standard API which is used to activates a
 *                               given test mode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] Mode               Test mode to be activated.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetPhyTestMode(uint8                   TrcvIdx,
                                                           EthTrcv_PhyTestModeType Mode);
#endif /* STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API */

/**
 * @brief                        Activates a given loopback mode.
 * @details                      This function is AUTOSAR standard API which is used to activates a
 *                               given loopback mode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] Mode               Loopback mode to be activated.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetPhyLoopbackMode(uint8                       TrcvIdx,
                                                               EthTrcv_PhyLoopbackModeType Mode);

/**
 * @brief                        Obtains the current signal quality of the link of the indexed
 *                               transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               current signal quality of the link of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] SignalQualityPtr  Pointer to the memory where the signal quality shall be stored.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetPhySignalQuality(uint8   TrcvIdx,
                                                                uint32 *SignalQualityPtr);

/**
 * @brief                        Activates a given transmission mode.
 * @details                      This function is AUTOSAR standard API which is used to activates a
 *                               given transmission mode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] Mode               Transmission mode to be activated.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetPhyTxMode(uint8 TrcvIdx, EthTrcv_PhyTxModeType Mode);

#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
/**
 * @brief                        Trigger the cable diagnostics for the given Ethernet transceiver.
 * @details                      This function is AUTOSAR standard API which is used to trigger the
 *                               cable diagnostics for the given Ethernet transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @return                       E_OK: The trigger has been accepted.
 *                               E_NOT_OK: The trigger has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_RunCableDiagnostic(uint8 TrcvIdx);

/**
 * @brief                        Retrieves the cable diagnostics result of a given transceiver.
 * @details                      This function is AUTOSAR standard API which is used to retrieves
 * the cable diagnostics result of a given transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] ResultPtr         Pointer to the location where the cable diagnostics result shall
 *                               be stored.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetCableDiagnosticsResult(
    uint8                        TrcvIdx,
    EthTrcv_CableDiagResultType *ResultPtr);
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */

#if (STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API)
/**
 * @brief                        Obtains the PHY identifier of the Ethernet Transceiver.
 * @details                      Obtains the PHY identifier of the Ethernet Transceiver according to
 *                               IEEE 802.3-2015 chapter 22.2.4.3.1 PHY Identifer.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] OrgUniqueIdPtr    Pointer to the memory where the Organizationally Unique Identifier
 *                               shall be stored.
 * @param[out] ModelNrPtr        Pointer to the memory where the Manufacturer's Model Number shall
 *                               be stored.
 * @param[out] RevisionNrPtr     Pointer to the memory where the Revision Number shall be stored.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetPhyIdentifier(uint8   TrcvIdx,
                                                             uint32 *OrgUniqueIdPtr,
                                                             uint8  *ModelNrPtr,
                                                             uint8  *RevisionNrPtr);
#endif /* STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API */

/**
 * @brief                        Obtains the media access mode of the transceiver when
 * EthTrcvDuplexMode is configured as ETHTRCV_DUPLEX_MODE_HALF.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] MacModePtr        ETHTRCV_MAC_TYPE_CSMA_CD: Carrier-sense multiple access with
 * collicion detection. ETHTRCV_MAC_TYPE_PLCA: Physical layer collision avoidance.
 * @return                       E_OK: success.
 *                               E_NOT_OK: MacType could not be returned.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetMacMethod(uint8                  TrcvIdx,
                                                         EthTrcv_MacMethodType *MacModePtr);

#if ((STD_ON == ETHTRCV_VERSION_INFO_API) && (STD_OFF == ETHTRCV_VERSION_INFO_API_MACRO))
/**
 * @brief                        Returns the version information of this module.
 * @details                      Returns the version information of this module.
 *
 * @param[out] VersionInfoPtr    Version information of this module.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr);
#endif

/**
 * @brief                        Ethernet Transceiver scheduled function.
 * @details                      Used for polling state changes and wakeup reasons. Calls
 *                               EthIf_TrcvModeIndication when the transceiver mode changed.
 *                               Stores wakeup events if EthTrcvWakeUpSupport is set to
 *                               ETHTRCV_WAKEUP_BY_POLLING..
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_MainFunction(void);

/**
 * @brief                        Mii bus read indication.
 * @details                      Called when information has been read out via MII interface.
 *                               Triggered by previous Eth_ReadMii call. Can directly be called
 *                               within Eth_ReadMii.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[in] RegVal             Value contained in the indexed register.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_ReadMiiIndication(uint8  CtrlIdx,
                                                    uint8  TrcvIdx,
                                                    uint8  RegIdx,
                                                    uint16 RegVal);

/**
 * @brief                        Mii bus write indication.
 * @details                      Called when information has been written via MII interface.
 *                               Triggered by previous Eth_WriteMii call. Can directly be called
 *                               within Eth_WriteMii.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_WriteMiiIndication(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx);

#define ETHTRCV_STOP_SEC_CODE
#include "EthTrcv_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*ETHTRCV_H*/

/** @} */
