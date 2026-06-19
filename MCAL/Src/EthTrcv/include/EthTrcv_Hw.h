/**
*   @file    EthTrcv_Hw.h
*   @implements      EthTrcv_Hw.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR EthTrcv - EthTrcv hardware implementation header file.
*   @details This file contains the implementation of hardware API and definition.
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

/* PRQA S 2071 EOF
   2071: This attribute syntax is a language extension.
   REASON:These test code need to be placed in the specified location.
*/

#ifndef ETHTRCV_HW_H
#define ETHTRCV_HW_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthTrcv_Types.h"
#include "EthTrcv_Reg.h"

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
 * @brief Invalid value read from transceiver register
 *
 */
#define ETHTRCV_INVALID_REG_VALUE (0xFFFFU)

#define ETHTRCV_MII_MUX_SELECT(MiiIfPtr, xBaseT1) \
    if ((MiiIfPtr)->MiiMux != NULL_PTR)           \
    {                                             \
        (MiiIfPtr)->MiiMux((boolean)(xBaseT1));   \
    }

/* PRQA S 3472 ++
   3472:All toplevel uses of this function-like macro look like they could be replaced by
  equivalent function calls.
   REASON:This is the normal usage of macros.
*/

/**
 * @brief Get the Organizationally Unique Identifier from transceiver ID1 and ID2 register
 *
 */
#define ETHTRCV_ORG_UNIQUE_ID(id1, id2)             \
    (((uint32)(id1) << ETHTRCV_UTP_ID1_OUI_SHIFT) | \
     (((uint32)(id2) & ETHTRCV_UTP_ID2_OUI_MASK) >> ETHTRCV_UTP_ID2_OUI_SHIFT))

/**
 * @brief Get the Manufacturer's Model Number from transceiver ID2 register
 *
 */
#define ETHTRCV_MODEL_NUMBER(id2) \
    (((id2) & ETHTRCV_UTP_ID2_MODEL_MASK) >> ETHTRCV_UTP_ID2_MODEL_SHIFT)

/**
 * @brief Get the Revision Number from transceiver ID2 register
 *
 */
#define ETHTRCV_REVISION_NUMBER(id2) ((id2) & ETHTRCV_UTP_ID2_REVISION_MASK)
/* PRQA S 3472 --*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define ETHTRCV_START_SEC_CODE
#include "EthTrcv_MemMap.h"

/**
 * @brief                        Read the PHY identifier 1 register.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] RegValPtr         Pointer to the address to save the register value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read identifier failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_ReadPhyId1(EthTrcv_DerivateType     Derivate,
                                                          const EthTrcv_MiiIfType *MiiIfPtr,
                                                          uint16                  *RegValPtr);

#if (STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API)
/**
 * @brief                        Read the PHY identifier 2 register.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] RegValPtr         Pointer to the address to save the register value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read identifier failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_ReadPhyId2(EthTrcv_DerivateType     Derivate,
                                                          const EthTrcv_MiiIfType *MiiIfPtr,
                                                          uint16                  *RegValPtr);
#endif /* STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API */

/**
 * @brief                        Perform software reset.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SoftReset(EthTrcv_DerivateType     Derivate,
                                                         const EthTrcv_MiiIfType *MiiIfPtr);

/**
 * @brief                        Check whether the software reset is complete.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] TryTimes          Try times to wait reset complete.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_CheckResetComplete(EthTrcv_DerivateType     Derivate,
                                                                  const EthTrcv_MiiIfType *MiiIfPtr,
                                                                  uint32 TryTimes);

/**
 * @brief                        Set RGMII TX clock delay.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue         TX clock delay value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetRgmiiTxDelay(EthTrcv_DerivateType     Derivate,
                                                               const EthTrcv_MiiIfType *MiiIfPtr,
                                                               uint8                    DelayValue);

/**
 * @brief                        Set RGMII RX clock delay.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue         RX clock delay value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetRgmiiRxDelay(EthTrcv_DerivateType     Derivate,
                                                               const EthTrcv_MiiIfType *MiiIfPtr,
                                                               uint8                    DelayValue);

/**
 * @brief                        Hardware specific configuration.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Baud Rate from configuration structure.
 * @param[in] Duplex             Duplex mode from configuration structure.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SpecificConfig(EthTrcv_DerivateType     Derivate,
                                                              const EthTrcv_MiiIfType *MiiIfPtr,
                                                              EthTrcv_BaudRateType     Speed,
                                                              EthTrcv_DuplexModeType   Duplex);

/**
 * @brief                        Transceiver hardware bridge mode configuration.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Baud Rate from configuration.
 * @param[in] Duplex             Duplex mode from configuration.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_BridgeConfig(EthTrcv_DerivateType     Derivate,
                                                            const EthTrcv_MiiIfType *MiiIfPtr,
                                                            EthTrcv_BaudRateType     Speed,
                                                            EthTrcv_DuplexModeType   Duplex);

/**
 * @brief                        Set clock output mode.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] ClkOutMode         Clock output mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetClockOutput(EthTrcv_DerivateType     Derivate,
                                                              const EthTrcv_MiiIfType *MiiIfPtr,
                                                              EthTrcv_ClkOutPutType    ClkOutMode);

/**
 * @brief                        Enable or distable Auto-Negotiation.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] EnableAutoNeg      TRUE: Enable, FALSE: Disable.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_EnableAutoNegtiation(EthTrcv_DerivateType Derivate,
                                                                    const EthTrcv_MiiIfType *MiiIfPtr,
                                                                    boolean EnableAutoNeg);

/**
 * @brief                        Read Auto-Negotiation completed status.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] CompleteStatusPtr Pointer to the memory to save the Auto-Negotiation completed status.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_ReadAutoNegtiationStatus(
    EthTrcv_DerivateType     Derivate,
    const EthTrcv_MiiIfType *MiiIfPtr,
    boolean                 *CompleteStatusPtr);

/**
 * @brief                        Set Auto-Negotiation advertise ability.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MaxSpeed           The maximum speed advertised for Auto-Negotiation.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set Auto-Negotiation ability failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetAutoNegtiationAbility(
    EthTrcv_DerivateType     Derivate,
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     MaxSpeed);

/**
 * @brief                        Set manual duplex and speed selection.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DuplexMode         Duplex mode from configuration structure.
 * @param[in] SpeedMode          Baud Rate from configuration structure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Restart Auto-Negotiation failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_ForceLink(EthTrcv_DerivateType     Derivate,
                                                         const EthTrcv_MiiIfType *MiiIfPtr,
                                                         EthTrcv_DuplexModeType   DuplexMode,
                                                         EthTrcv_BaudRateType     SpeedMode,
                                                         EthTrcv_ConnNegType      ConnNeg);

#if (STD_ON == ETHTRCV_GET_LINK_STATE_API)
/**
 * @brief                        Read the current link state of the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] LinkStatePtr      Pointer to the address to save the link state.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read link state failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_ReadLinkState(EthTrcv_DerivateType     Derivate,
                                                             const EthTrcv_MiiIfType *MiiIfPtr,
                                                             EthTrcv_LinkStateType   *LinkStatePtr);
#endif /* STD_ON == ETHTRCV_GET_LINK_STATE_API */

#if (STD_ON == ETHTRCV_GET_BAUD_RATE_API)
/**
 * @brief                        Read the current baud rate of the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] BaudRatePtr       Pointer to the address to save the baud rate.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read baud rate failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_ReadBaudRate(EthTrcv_DerivateType     Derivate,
                                                            const EthTrcv_MiiIfType *MiiIfPtr,
                                                            EthTrcv_BaudRateType    *BaudRatePtr);
#endif /* STD_ON == ETHTRCV_GET_BAUD_RATE_API */

#if (STD_ON == ETHTRCV_GET_DUPLEX_MODE_API)
/**
 * @brief                        Read the current duplex mode  of the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] DuplexModePtr     Pointer to the address to save the duplex mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read identifier failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_ReadDuplexMode(EthTrcv_DerivateType     Derivate,
                                                              const EthTrcv_MiiIfType *MiiIfPtr,
                                                              EthTrcv_DuplexModeType *DuplexModePtr);
#endif /* STD_ON == ETHTRCV_GET_DUPLEX_MODE_API */

/**
 * @brief                        Get the current mode of the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] TrcvModePtr       ETHTRCV_MODE_DOWN: the transceiver is disabled.
 *                               ETHTRCV_MODE_ACTIVE: the transceiver is enabled.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Get mode failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_GetTransceiverMode(EthTrcv_DerivateType     Derivate,
                                                                  const EthTrcv_MiiIfType *MiiIfPtr,
                                                                  Eth_ModeType *TrcvModePtr);

/**
 * @brief                        Set transceiver mode up or down.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set transceiver down failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetTransceiverUpDown(EthTrcv_DerivateType Derivate,
                                                                    const EthTrcv_MiiIfType *MiiIfPtr,
                                                                    boolean PowerUp);

/**
 * @brief                        Check the test mode is available on the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] PhysLayer          The physical layer type of the Transceiver.
 * @param[in] Mode               Test mode.
 * @return                       E_OK: Test mode is available.
 *                               E_NOT_OK: Test mode is not available.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_TestModeAvailable(EthTrcv_DerivateType    Derivate,
                                                                 EthTrcv_PhysLayerType   PhysLayer,
                                                                 EthTrcv_PhyTestModeType Mode);

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API)
/**
 * @brief                        Set PHY test mode.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] PhysLayer          The physical layer type of the Transceiver.
 * @param[in] Mode               Test mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set test mode failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetTestMode(EthTrcv_DerivateType     Derivate,
                                                           const EthTrcv_MiiIfType *MiiIfPtr,
                                                           EthTrcv_PhysLayerType    PhysLayer,
                                                           EthTrcv_PhyTestModeType  Mode);
#endif /* STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API */

/**
 * @brief                        Check the loopback mode is available on the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] Mode               Loopback mode.
 * @return                       E_OK: Test mode is available.
 *                               E_NOT_OK: Test mode is not available.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_LoopbackModeAvailable(EthTrcv_DerivateType Derivate,
                                                                     EthTrcv_PhyLoopbackModeType Mode);

/**
 * @brief                        Set PHY loopback mode.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Mode               Loopback mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set loopback mode failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetLoopbackMode(EthTrcv_DerivateType        Derivate,
                                                               const EthTrcv_MiiIfType    *MiiIfPtr,
                                                               EthTrcv_PhyLoopbackModeType Mode);

/**
 * @brief                        Check the Signal Quality is supported by the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @return                       TRUE: Signal Quality is supported.
 *                               FALSE: Signal Quality not supported.
 *
 */
ETHTRCV_TEXT_SECTION boolean EthTrcv_Hw_SignalQualitySupported(EthTrcv_DerivateType Derivate);

/**
 * @brief                        Get the Signal Quality of current link.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] SignalQualityPtr  Pointer to the memory where the signal quality shall be stored.
 * @return                       TRUE: Signal Quality is supported.
 *                               FALSE: Signal Quality not supported.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_GetSignalQuality(EthTrcv_DerivateType     Derivate,
                                                                const EthTrcv_MiiIfType *MiiIfPtr,
                                                                uint32 *SignalQualityPtr);

/**
 * @brief                        Check the TX mode is available on the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] Mode               TX mode.
 * @return                       E_OK: Test mode is available.
 *                               E_NOT_OK: Test mode is not available.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_TxModeAvailable(EthTrcv_DerivateType  Derivate,
                                                               EthTrcv_PhyTxModeType Mode);

/**
 * @brief                        Set PHY TX mode.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Mode               PHY TX mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set PHY TX mode failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetPhyTxMode(EthTrcv_DerivateType     Derivate,
                                                            const EthTrcv_MiiIfType *MiiIfPtr,
                                                            EthTrcv_PhyTxModeType    Mode);

/**
 * @brief                        Set the MII interface connected to PHY.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] PhyIf              MII interface.
 * @param[out] TryTimes          Try times to wait reset complete.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set PHY TX mode failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetMiiInterface(EthTrcv_DerivateType     Derivate,
                                                               const EthTrcv_MiiIfType *MiiIfPtr,
                                                               EthTrcv_PhyIfType        PhyIf,
                                                               uint32                   TryTimes);

#define ETHTRCV_STOP_SEC_CODE
#include "EthTrcv_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*ETHTRCV_HW_H*/

/** @} */
