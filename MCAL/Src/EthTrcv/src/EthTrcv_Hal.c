/**
*   @file    EthTrcv_Hal.c
*   @version 1.5.1

*   @brief   AUTOSAR EthTrcv - EthTrcv hardware abstraction layer driver source file.
*   @details This file contains the implementation of EthTrcv driver hardware abstraction layer API.
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

/* PRQA S 2071,5087 EOF
   2071: This attribute syntax is a language extension.
   5087: Use of #include directive after code fragment.
   REASON:These test code need to be placed in the specified location.
*/

/* PRQA S 3469 EOF
   3469:This usage of a function-like macro looks like it could be replaced by an equivalent
   REASON: This is the normal usage of macros.
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthTrcv_Hal.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define ETHTRCV_NORMAL_MODE            ((uint8)0U)

#define ETHTRCV_TEST_MODE              ((uint8)1U)

#define ETHTRCV_LOOPBACK_MODE          ((uint8)2U)

#define ETHTRCV_PHY_TX_MODE            ((uint8)3U)

#define ETHTRCV_PHY_SLEEP_PROCESS_MODE ((uint8)4U)

#define ETHTRCV_TRUE_FLAG              ((uint8)1U)

#define ETHTRCV_FLASE_FLAG             ((uint8)0U)

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

#define ETHTRCV_START_SEC_VAR_NO_INIT_8
#include "EthTrcv_MemMap.h"

ETHTRCV_DATA_SECTION static uint8 EthTrcv_OptMode[ETHTRCV_MAX_TRCVS_SUPPORTED];

#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
ETHTRCV_DATA_SECTION static uint8 EthTrcv_RequestModeStored[ETHTRCV_MAX_TRCVS_SUPPORTED];
ETHTRCV_DATA_SECTION static uint8 EthTrcv_RequestLinkStored[ETHTRCV_MAX_TRCVS_SUPPORTED];
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */

ETHTRCV_DATA_SECTION static uint8 EthTrcv_ModeChangeReport[ETHTRCV_MAX_TRCVS_SUPPORTED];

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
ETHTRCV_DATA_SECTION static uint8 EthTrcv_WakeupReasonFlags[ETHTRCV_MAX_TRCVS_SUPPORTED];
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

#define ETHTRCV_STOP_SEC_VAR_NO_INIT_8
#include "EthTrcv_MemMap.h"

#define ETHTRCV_START_SEC_VAR_NO_INIT_16
#include "EthTrcv_MemMap.h"

ETHTRCV_DATA_SECTION static uint16 EthTrcv_WaitLinkRepetitions[ETHTRCV_MAX_TRCVS_SUPPORTED];

#define ETHTRCV_STOP_SEC_VAR_NO_INIT_16
#include "EthTrcv_MemMap.h"

#define ETHTRCV_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "EthTrcv_MemMap.h"

ETHTRCV_DATA_SECTION static Eth_ModeType EthTrcv_RequestMode[ETHTRCV_MAX_TRCVS_SUPPORTED];
ETHTRCV_DATA_SECTION static Eth_ModeType EthTrcv_CurrMode[ETHTRCV_MAX_TRCVS_SUPPORTED];

ETHTRCV_DATA_SECTION static EthTrcv_LinkStateType EthTrcv_RequestLinkState[ETHTRCV_MAX_TRCVS_SUPPORTED];
ETHTRCV_DATA_SECTION static EthTrcv_LinkStateType EthTrcv_CurrLinkState[ETHTRCV_MAX_TRCVS_SUPPORTED];

#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
ETHTRCV_DATA_SECTION EthTrcv_CableDiagResultType EthTrcv_CableDiagState[ETHTRCV_MAX_TRCVS_SUPPORTED];
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
ETHTRCV_DATA_SECTION static EthTrcv_WakeupModeType EthTrcv_WakeupMode[ETHTRCV_MAX_TRCVS_SUPPORTED];
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

#define ETHTRCV_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "EthTrcv_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ETHTRCV_START_SEC_CODE
#include "EthTrcv_MemMap.h"

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_SoftReset(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_TrcvSpecificConfig(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_MiiInterfaceConfig(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);

#ifndef ETHTRCV_BRIDGE_MODE
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_AutoNegotiation(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_ForceLink(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);
#endif

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_Hal_handleRequestMode(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_Hal_HandleLinkStateRequest(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief                        Reset the transceiver by software.
 *
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK: Reset successfully.
 *                               E_NOT_OK: Reset failed.
 *
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_SoftReset(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_OK;

    if ((boolean)TRUE == ETHTRCV_CFG_TRCV_SOFTRESET_ON_INIT(TrcvCfgPtr))
    {
        RetStatus = EthTrcv_Hw_SoftReset(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                         ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr));

        if (RetStatus == E_OK)
        {
            RetStatus = EthTrcv_Hw_CheckResetComplete(
                ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                ETHTRCV_CFG_TRCV_SOFTRESET_READ_REPETITIONS(TrcvCfgPtr));
        }
    }
    return RetStatus;
}

/**
 * @brief                        Transceiver specific configuration.
 *
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK: Set configuration successfully.
 *                               E_NOT_OK: Set configuration failed.
 *
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_TrcvSpecificConfig(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_OK;

    RetStatus = EthTrcv_Hw_SetClockOutput(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                          ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                          ETHTRCV_CFG_TRCV_CLOCK_OUTPUT(TrcvCfgPtr));
    if (RetStatus == E_OK)
    {
        RetStatus = EthTrcv_Hw_SpecificConfig(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                              ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                              ETHTRCV_CFG_TRCV_SPEED_MODE(TrcvCfgPtr),
                                              ETHTRCV_CFG_TRCV_DUPLEX_MODE(TrcvCfgPtr));
    }
    return RetStatus;
}

/**
 * @brief                        Set the MII interface configuration.
 *
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK: Set configuration successfully.
 *                               E_NOT_OK: Set configuration failed.
 *
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_MiiInterfaceConfig(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType    RetStatus = E_OK;
    EthTrcv_PhyIfType PhyIf     = ETHTRCV_CFG_TRCV_PHY_INTERFACE(TrcvCfgPtr);

    if (PhyIf == ETHTRCV_PHYIF_MII)
    {
        EthTrcv_Hw_SetMiiInterface(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                   ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                   ETHTRCV_PHYIF_MII,
                                   ETHTRCV_CFG_TRCV_SOFTRESET_READ_REPETITIONS(TrcvCfgPtr));
    }
    else if (PhyIf == ETHTRCV_PHYIF_RMII)
    {
        EthTrcv_Hw_SetMiiInterface(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                   ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                   ETHTRCV_PHYIF_RMII,
                                   ETHTRCV_CFG_TRCV_SOFTRESET_READ_REPETITIONS(TrcvCfgPtr));
    }
    else if (PhyIf == ETHTRCV_PHYIF_RGMII)
    {
        EthTrcv_Hw_SetMiiInterface(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                   ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                   ETHTRCV_PHYIF_RGMII,
                                   ETHTRCV_CFG_TRCV_SOFTRESET_READ_REPETITIONS(TrcvCfgPtr));
        /* Set RGMII delay */
        if ((boolean)TRUE == ETHTRCV_CFG_TRCV_RGMII_TX_DELAY_ENABLED(TrcvCfgPtr))
        {
            RetStatus = EthTrcv_Hw_SetRgmiiTxDelay(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                   ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                   ETHTRCV_CFG_TRCV_RGMII_TX_DELAY_VALUE(TrcvCfgPtr));
        }
        if ((RetStatus == E_OK) &&
            ((boolean)TRUE == ETHTRCV_CFG_TRCV_RGMII_RX_DELAY_ENABLED(TrcvCfgPtr)))
        {
            RetStatus = EthTrcv_Hw_SetRgmiiRxDelay(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                   ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                   ETHTRCV_CFG_TRCV_RGMII_RX_DELAY_VALUE(TrcvCfgPtr));
        }
    }
    else if (PhyIf == ETHTRCV_PHYIF_SGMII)
    {
        /* Not Supported. */
    }
    else
    {
        /* Nothing to do. */
    }

    return RetStatus;
}

#ifndef ETHTRCV_BRIDGE_MODE
/**
 * @brief                        Set AutoNegotiation mode.
 *
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK: Set AutoNegotiation successfully.
 *                               E_NOT_OK: Set AutoNegotiation failed.
 *
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_AutoNegotiation(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus;

    RetStatus = EthTrcv_Hw_SetAutoNegtiationAbility(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                    ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                    ETHTRCV_CFG_TRCV_AUTONEG_SPEED(TrcvCfgPtr));

    if (RetStatus == E_OK)
    {
        RetStatus = EthTrcv_Hw_EnableAutoNegtiation(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                    ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                    (boolean)TRUE);
    }

    return RetStatus;
}

/**
 * @brief                        Set force link mode.
 *
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK: Set force link successfully.
 *                               E_NOT_OK: Set force link failed.
 *
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_Hal_ForceLink(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_OK;

    /* Disable auto-negotiation */
    RetStatus = EthTrcv_Hw_EnableAutoNegtiation(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                (boolean)FALSE);
    if (RetStatus == E_OK)
    {
        RetStatus = EthTrcv_Hw_ForceLink(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                         ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                         ETHTRCV_CFG_TRCV_DUPLEX_MODE(TrcvCfgPtr),
                                         ETHTRCV_CFG_TRCV_SPEED_MODE(TrcvCfgPtr),
                                         ETHTRCV_CFG_TRCV_CONNNEG(TrcvCfgPtr));
    }

    return RetStatus;
}
#endif

/**
 * @brief                        Handle the transceiver mode request of indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 *                               request an wake-up on the network
 * @return                       E_OK The transceiver mode is set successfully.
 *                               E_NOT_OK The transceiver mode is set failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_Hal_handleRequestMode(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    if (ETH_MODE_ACTIVE == EthTrcv_RequestMode[TrcvIdx])
    {
        RetStatus = EthTrcv_Hw_SetTransceiverUpDown(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                    ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                    (boolean)TRUE);

        if (RetStatus == E_OK)
        {
            RetStatus = EthTrcv_Hal_TrcvSpecificConfig(TrcvCfgPtr);

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
            /* Wake-up not implemented */
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */
        }
    }
    else if (ETH_MODE_DOWN == EthTrcv_RequestMode[TrcvIdx])
    {
        RetStatus = EthTrcv_Hw_SetTransceiverUpDown(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                    ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                    (boolean)FALSE);

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
        /* Wake-up not implemented */
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */
    }
#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
    else if (ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST == EthTrcv_RequestMode[TrcvIdx])
    {
        /* Wake-up not implemented */
        EthTrcv_CurrMode[TrcvIdx] = ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST;
    }
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */
    else
    {
        /* Other values of TrcvMode are not supported */
    }

    if (E_OK == RetStatus)
    {
        EthTrcv_CurrMode[TrcvIdx]         = EthTrcv_RequestMode[TrcvIdx];
        EthTrcv_ModeChangeReport[TrcvIdx] = ETHTRCV_TRUE_FLAG;
    }

#if (STD_OFF == ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API)
    /* AUTOSAR4.3.1 and the earlier versions do not have EthTrcv_TransceiverLinkStateRequest API,
     * start link training here.
     */
    if (E_OK == RetStatus)
    {
        if ((ETH_MODE_ACTIVE == EthTrcv_RequestMode[TrcvIdx]) ||
            (ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST == EthTrcv_RequestMode[TrcvIdx]))
        {
            (void)EthTrcv_Hal_TransceiverLinkStateRequest(TrcvIdx,
                                                          TrcvCfgPtr,
                                                          ETHTRCV_LINK_STATE_ACTIVE);
        }
        else
        {
            (void)EthTrcv_Hal_TransceiverLinkStateRequest(TrcvIdx, TrcvCfgPtr, ETHTRCV_LINK_STATE_DOWN);
        }
    }
#endif /* STD_ON == ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API */

    return RetStatus;
}

/**
 * @brief                        Handle the link training request of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @return                       E_OK success.
 *                               E_NOT_OK failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_Hal_HandleLinkStateRequest(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    if (EthTrcv_CurrMode[TrcvIdx] != (uint8)ETH_MODE_DOWN)
    {
        if (EthTrcv_RequestLinkState[TrcvIdx] == ETHTRCV_LINK_STATE_ACTIVE)
        {
#ifdef ETHTRCV_BRIDGE_MODE
            RetStatus = EthTrcv_Hw_BridgeConfig(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                ETHTRCV_CFG_TRCV_SPEED_MODE(TrcvCfgPtr),
                                                ETHTRCV_CFG_TRCV_DUPLEX_MODE(TrcvCfgPtr));
#else
            if (ETHTRCV_CFG_TRCV_AUTONEG_ENABLED(TrcvCfgPtr))
            {
                RetStatus = EthTrcv_Hal_AutoNegotiation(TrcvCfgPtr);
            }
            else
            {
                RetStatus = EthTrcv_Hal_ForceLink(TrcvCfgPtr);
            }
#endif
            EthTrcv_WaitLinkRepetitions[TrcvIdx] = ETHTRCV_CFG_TRCV_LINKUP_REOETITIONS(TrcvCfgPtr);
        }
        else if (EthTrcv_RequestLinkState[TrcvIdx] == ETHTRCV_LINK_STATE_DOWN)
        {
            /* Set link state down, do nothing */
            RetStatus = E_OK;
        }
        else
        {
            /* Unsupported link state */
        }
    }
    else
    {
        /* The transceiver is in down mode, do nothing and return E_NOT_OK */
    }

    return RetStatus;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

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
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus;
    uint16         RegValue;

    RetStatus = EthTrcv_Hw_ReadPhyId1(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                      ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                      &RegValue);

    if ((RetStatus == E_OK) && (RegValue == ETHTRCV_INVALID_REG_VALUE))
    {
        RetStatus = E_NOT_OK;
    }

    return RetStatus;
}

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
                                                                const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_OK;

    EthTrcv_RequestMode[TrcvIdx]      = ETH_MODE_DOWN;
    EthTrcv_CurrMode[TrcvIdx]         = ETH_MODE_DOWN;
    EthTrcv_RequestLinkState[TrcvIdx] = ETHTRCV_LINK_STATE_DOWN;
    EthTrcv_CurrLinkState[TrcvIdx]    = ETHTRCV_LINK_STATE_DOWN;

    /* Perform soft-reset */
    RetStatus = EthTrcv_Hal_SoftReset(TrcvCfgPtr);

    if (RetStatus == E_OK)
    {
        RetStatus = EthTrcv_Hal_MiiInterfaceConfig(TrcvCfgPtr);
        if (RetStatus == E_OK)
        {
            RetStatus |= EthTrcv_Hw_SetTransceiverUpDown(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                         ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                         (boolean)FALSE);
        }
    }

    return RetStatus;
}

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
    Eth_ModeType               TrcvMode)
{
    Std_ReturnType RetStatus;

    /* [SWS_EthTrcv_00094] The transceiver is already in the requested mode */
    if (TrcvMode == EthTrcv_CurrMode[TrcvIdx])
    {
        RetStatus = E_OK;
    }
    else
    {
        EthTrcv_ModeChangeReport[TrcvIdx] = ETHTRCV_FLASE_FLAG;

#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
        if (ETHTRCV_CABLEDIAG_PENDING == EthTrcv_CableDiagState[TrcvIdx])
        {
            /* [SWS_EthTrcv_00163] Store the mode request */
            EthTrcv_RequestMode[TrcvIdx]       = TrcvMode;
            EthTrcv_RequestModeStored[TrcvIdx] = ETHTRCV_TRUE_FLAG;
            RetStatus                          = E_OK;
        }
        else
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */
        {
            /* [SWS_EthTrcv_00179] Do not overwrite the ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST mode
             * if the new mode is ETH_MODE_ACTIVE
             */
            if (!((ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST == EthTrcv_RequestMode[TrcvIdx]) &&
                  (TrcvMode == ETH_MODE_ACTIVE)))
            {
                EthTrcv_RequestMode[TrcvIdx] = TrcvMode;
            }

            RetStatus = EthTrcv_Hal_handleRequestMode(TrcvIdx, TrcvCfgPtr);
        }
    }

    return RetStatus;
}

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

)
{
    Std_ReturnType RetStatus = E_OK;

    if ((EthTrcv_CurrMode[TrcvIdx] != ETH_MODE_DOWN) &&
        (EthTrcv_CurrMode[TrcvIdx] != ETH_MODE_ACTIVE) &&
        (EthTrcv_CurrMode[TrcvIdx] != ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST))
    {
        *TrcvModePtr = ETH_MODE_DOWN;
    }
    else
    {
        RetStatus = EthTrcv_Hw_GetTransceiverMode(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                  ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                  TrcvModePtr);
    }

    return RetStatus;
}

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
 * @return                       E_OK successfully.
 *                               E_NOT_OK failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_SetTransceiverWakeupMode(
    uint8                      TrcvIdx,
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    EthTrcv_WakeupModeType     TrcvWakeupMode)
{
    Std_ReturnType RetStatus = E_NOT_OK;

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)

#else
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)TrcvIdx;
    (void)TrcvCfgPtr;
    (void)TrcvWakeupMode;
    /* PRQA S 3119 -- */
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

    return RetStatus;
}
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
    EthTrcv_WakeupModeType    *TrcvWakeupModePtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)

#else
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)TrcvIdx;
    (void)TrcvCfgPtr;
    /* PRQA S 3119 -- */
    *TrcvWakeupModePtr = ETHTRCV_WUM_DISABLE;
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

    return RetStatus;
}
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
    EthTrcv_WakeupReasonType  *WakeupReasonPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)

#else
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)TrcvIdx;
    (void)TrcvCfgPtr;
    /* PRQA S 3119 -- */
    *WakeupReasonPtr = ETHTRCV_WUR_NONE;
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

    return RetStatus;
}
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
                                                            const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    /* [SWS_EthTrcv_00139] The function shall be only available if EthTrcvWakeUpSupport
     * is something else than ETHTRCV_WAKEUP_NOT_SUPPORTED
     */
#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)

#else
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)TrcvIdx;
    (void)TrcvCfgPtr;
    /* PRQA S 3119 -- */
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

    return RetStatus;
}

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
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    /* [SWS_EthTrcv_00056] If the internal cable diagnostic state is ETHTRCV_CABLEDIAG_PENDING
     * return E_NOT_OK.
     */
#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
    if (EthTrcv_CableDiagState[TrcvIdx] != ETHTRCV_CABLEDIAG_PENDING)
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */
    {
        if ((EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE) ||
            (EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST))
        {

#ifndef ETHTRCV_BRIDGE_MODE
            if (ETHTRCV_CFG_TRCV_AUTONEG_ENABLED(TrcvCfgPtr))
            {
                RetStatus = EthTrcv_Hal_AutoNegotiation(TrcvCfgPtr);
            }
#else
            RetStatus = E_OK;
#endif
        }
    }

    return RetStatus;
}
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
Std_ReturnType EthTrcv_Hal_TransceiverLinkStateRequest(uint8                      TrcvIdx,
                                                       const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                       EthTrcv_LinkStateType      LinkState)
{
    Std_ReturnType RetStatus;

    /* [SWS_EthTrcv_00154] The transceiver is already in the requested link state */
    if (LinkState == EthTrcv_CurrLinkState[TrcvIdx])
    {
        RetStatus = E_OK;
    }
    else
    {
#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
        if (ETHTRCV_CABLEDIAG_PENDING == EthTrcv_CableDiagState[TrcvIdx])
        {
            /* [SWS_EthTrcv_00165] Store the link state request */
            EthTrcv_RequestLinkState[TrcvIdx]  = LinkState;
            EthTrcv_RequestLinkStored[TrcvIdx] = ETHTRCV_TRUE_FLAG;
            RetStatus                          = E_OK;
        }
        else
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */
        {
            EthTrcv_RequestLinkState[TrcvIdx] = LinkState;
            RetStatus = EthTrcv_Hal_HandleLinkStateRequest(TrcvIdx, TrcvCfgPtr);
        }
    }

    return RetStatus;
}

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
                                                             EthTrcv_LinkStateType *LinkStatePtr)
{
    Std_ReturnType RetStatus = E_OK;

    if ((EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE) ||
        (EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST))
    {
        /* [SWS_EthTrcv_00062] EthTrcvWakeupSleepOnDatalineEnabled set to TRUE and
         * the Transceiver Driver detect that a sleep process is performed
         */
        if ((ETHTRCV_CFG_WAKEUP_SLEEP_ON_DATALINE_ENABLED(TrcvCfgPtr) == (boolean)TRUE) &&
            (ETHTRCV_PHY_SLEEP_PROCESS_MODE == EthTrcv_OptMode[TrcvIdx]))
        {
            *LinkStatePtr = ETHTRCV_LINK_STATE_DOWN;
        }
        else
        {
            RetStatus = EthTrcv_Hw_ReadLinkState(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                 ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                 LinkStatePtr);
        }
    }
    else
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_DOWN;
    }

    return RetStatus;
}
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
                                                            EthTrcv_BaudRateType      *BaudRatePtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    if (EthTrcv_CurrLinkState[TrcvIdx] == ETHTRCV_LINK_STATE_ACTIVE)
    {
        RetStatus = EthTrcv_Hw_ReadBaudRate(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                            ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                            BaudRatePtr);
    }

    return RetStatus;
}
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
                                                              EthTrcv_DuplexModeType *DuplexModePtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    if (EthTrcv_CurrLinkState[TrcvIdx] == ETHTRCV_LINK_STATE_ACTIVE)
    {
        RetStatus = EthTrcv_Hw_ReadDuplexMode(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                              ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                              DuplexModePtr);
    }

    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_DUPLEX_MODE_API */

/**
 * @brief                        Check the test mode is available on the indexed transceiver.
 *
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] Mode               Test mode to be activated.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_PhyTestModeAvailable(
    const EthTrcv_TrcvCfgType *TrcvCfgPtr,
    EthTrcv_PhyTestModeType    Mode)
{
    return EthTrcv_Hw_TestModeAvailable(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                        ETHTRCV_CFG_TRCV_PHYS_LAYER_TYPE(TrcvCfgPtr),
                                        Mode);
}

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API)
/**
 * @brief                        Activates a given test mode of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 * @param[in] Mode               Test mode to be activated.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hal_SetPhyTestMode(uint8 TrcvIdx,
                                                               const EthTrcv_TrcvCfgType *TrcvCfgPtr,
                                                               EthTrcv_PhyTestModeType Mode)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    /* [SWS_EthTrcv_00166] If the internal cable diagnostic state is ETHTRCV_CABLEDIAG_PENDING
     * return E_NOT_OK */
#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
    if (ETHTRCV_CABLEDIAG_PENDING != EthTrcv_CableDiagState[TrcvIdx])
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */
    {
        if ((EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE) ||
            (EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST))
        {
            if ((EthTrcv_OptMode[TrcvIdx] == ETHTRCV_NORMAL_MODE) ||
                (EthTrcv_OptMode[TrcvIdx] == ETHTRCV_TEST_MODE))
            {
                RetStatus = EthTrcv_Hw_SetTestMode(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                   ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                   ETHTRCV_CFG_TRCV_PHYS_LAYER_TYPE(TrcvCfgPtr),
                                                   Mode);
                if (RetStatus == E_OK)
                {
                    EthTrcv_OptMode[TrcvIdx] = (Mode == ETHTRCV_PHYTESTMODE_NONE) ?
                                                   ETHTRCV_NORMAL_MODE :
                                                   ETHTRCV_TEST_MODE;
                }
            }
        }
    }

    return RetStatus;
}
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
    EthTrcv_PhyLoopbackModeType Mode)
{
    return EthTrcv_Hw_LoopbackModeAvailable(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr), Mode);
}

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
    EthTrcv_PhyLoopbackModeType Mode)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    /* [SWS_EthTrcv_00167] If the internal cable diagnostic state is ETHTRCV_CABLEDIAG_PENDING,
     * the function return E_NOT_OK.
     */
#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
    if (ETHTRCV_CABLEDIAG_PENDING != EthTrcv_CableDiagState[TrcvIdx])
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */
    {
        if ((EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE) ||
            (EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST))
        {
            if ((EthTrcv_OptMode[TrcvIdx] == ETHTRCV_NORMAL_MODE) ||
                (EthTrcv_OptMode[TrcvIdx] == ETHTRCV_LOOPBACK_MODE))
            {
                RetStatus = EthTrcv_Hw_SetLoopbackMode(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                       ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                       Mode);
                if (RetStatus == E_OK)
                {
                    EthTrcv_OptMode[TrcvIdx] = (Mode == ETHTRCV_PHYLOOPBACK_NONE) ?
                                                   ETHTRCV_NORMAL_MODE :
                                                   ETHTRCV_LOOPBACK_MODE;
                }
            }
        }
    }

    return RetStatus;
}

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
    uint32                    *SignalQualityPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    if (EthTrcv_CurrMode[TrcvIdx] == (uint8)ETH_MODE_ACTIVE)
    {
        if (EthTrcv_CurrLinkState[TrcvIdx] == ETHTRCV_LINK_STATE_ACTIVE)
        {
            if ((boolean)TRUE ==
                EthTrcv_Hw_SignalQualitySupported(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr)))
            {
                RetStatus = EthTrcv_Hw_GetSignalQuality(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                        ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                        SignalQualityPtr);
            }
        }
    }

    return RetStatus;
}

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
    EthTrcv_PhyTxModeType      Mode)
{
    return EthTrcv_Hw_TxModeAvailable(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr), Mode);
}

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
                                                             EthTrcv_PhyTxModeType      Mode)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    /* [SWS_EthTrcv_00168] If the internal cable diagnostic state is ETHTRCV_CABLEDIAG_PENDING,
     * the function return E_NOT_OK.
     */
#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
    if (ETHTRCV_CABLEDIAG_PENDING != EthTrcv_CableDiagState[TrcvIdx])
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */
    {
        if ((EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE) ||
            (EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST))
        {
            if ((EthTrcv_OptMode[TrcvIdx] == ETHTRCV_NORMAL_MODE) ||
                (EthTrcv_OptMode[TrcvIdx] == ETHTRCV_PHY_TX_MODE))
            {
                RetStatus = EthTrcv_Hw_SetPhyTxMode(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                    ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                    Mode);
                if (RetStatus == E_OK)
                {
                    EthTrcv_OptMode[TrcvIdx] = (Mode == ETHTRCV_PHYTXMODE_NORMAL) ?
                                                   ETHTRCV_NORMAL_MODE :
                                                   ETHTRCV_PHY_TX_MODE;
                }
            }
        }
    }
    return RetStatus;
}

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
    const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)TrcvIdx;
    (void)TrcvCfgPtr;
    /* PRQA S 3119 -- */
    return RetStatus;
}

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
    EthTrcv_CableDiagResultType *ResultPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)TrcvIdx;
    (void)TrcvCfgPtr;
    /* PRQA S 3119 -- */
    *ResultPtr = ETHTRCV_CABLEDIAG_ERROR;
    return RetStatus;
}
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
                                                                 uint8  *RevisionNrPtr)
{
    uint16         PhyId1, PhyId2;
    Std_ReturnType RetStatus;

    RetStatus = EthTrcv_Hw_ReadPhyId1(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                      ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                      &PhyId1);

    if (RetStatus == E_OK)
    {
        RetStatus = EthTrcv_Hw_ReadPhyId2(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                          ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                          &PhyId2);
        if (RetStatus == E_OK)
        {
            *OrgUniqueIdPtr = ETHTRCV_ORG_UNIQUE_ID(PhyId1, PhyId2);
            *ModelNrPtr     = (uint8)ETHTRCV_MODEL_NUMBER(PhyId2);
            *RevisionNrPtr  = (uint8)ETHTRCV_REVISION_NUMBER(PhyId2);
        }
    }

    return RetStatus;
}
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
                                                             EthTrcv_MacMethodType     *MacModePtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    /* [SWS_EthTrcv_00174] If EthTrcvDuplexMode is not set to ETHTRCV_DUPLEX_MODE_HALF
     * the function  return E_NOT_OK.
     */
    if (ETHTRCV_CFG_TRCV_DUPLEX_MODE(TrcvCfgPtr) == ETHTRCV_DUPLEX_MODE_HALF)
    {
        /* PRQA S 3119 ++
           3119: This statement has no side-effect - it can be removed.
           REASON:These parameters are not used yet,the codes are designed to avoid warnings
        */
        (void)TrcvIdx;
        /* PRQA S 3119 -- */
        *MacModePtr = ETHTRCV_MAC_TYPE_CSMA_CD;
    }

    return RetStatus;
}

/**
 * @brief                        Ethernet Transceiver scheduled function.
 * @details                      Used for polling state changes and wakeup reasons. Calls
 *                               EthIf_TrcvModeIndication when the transceiver mode changed.
 *                               Stores wakeup events if EthTrcvWakeUpSupport is set to
 *                               ETHTRCV_WAKEUP_BY_POLLING.
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvCfgPtr         Pointer to the transceiver configuration.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_Hal_MainFunction(uint8                      TrcvIdx,
                                                   const EthTrcv_TrcvCfgType *TrcvCfgPtr)
{
    Std_ReturnType        RetStatus = E_OK;
    EthTrcv_LinkStateType LinkStatus;

#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
    if (ETHTRCV_CABLEDIAG_PENDING != EthTrcv_CableDiagState[TrcvIdx])
    {
        if (EthTrcv_RequestModeStored[TrcvIdx] == ETHTRCV_TRUE_FLAG)
        {
            if (EthTrcv_CurrMode[TrcvIdx] != EthTrcv_RequestMode[TrcvIdx])
            {
                RetStatus = EthTrcv_Hal_handleRequestMode(TrcvIdx, TrcvCfgPtr);
            }
            EthTrcv_RequestModeStored[TrcvIdx] = ETHTRCV_FLASE_FLAG;
        }

        if ((E_OK == RetStatus) && (EthTrcv_RequestLinkStored[TrcvIdx] == ETHTRCV_TRUE_FLAG))
        {
            if (EthTrcv_RequestLinkState[TrcvIdx] != EthTrcv_CurrLinkState[TrcvIdx])
            {
                RetStatus = EthTrcv_Hal_HandleLinkStateRequest(TrcvIdx, TrcvCfgPtr);
            }
            EthTrcv_RequestLinkStored[TrcvIdx] = ETHTRCV_FLASE_FLAG;
        }
#else
    {
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */

        if ((RetStatus == E_OK) && (EthTrcv_ModeChangeReport[TrcvIdx] == ETHTRCV_TRUE_FLAG))
        {
            if (EthTrcv_CurrMode[TrcvIdx] == ETH_MODE_DOWN)
            {
                EthIf_TrcvModeIndication(ETHTRCV_CFG_ETHIF_TRCVIDX(TrcvCfgPtr), ETH_MODE_DOWN);
                EthTrcv_ModeChangeReport[TrcvIdx] = ETHTRCV_FLASE_FLAG;
            }
            else
            {
                (void)EthTrcv_Hal_GetLinkState(TrcvIdx, TrcvCfgPtr, &LinkStatus);
                if (LinkStatus == ETHTRCV_LINK_STATE_ACTIVE)
                {
                    EthTrcv_CurrLinkState[TrcvIdx]    = ETHTRCV_LINK_STATE_ACTIVE;
                    EthTrcv_ModeChangeReport[TrcvIdx] = ETHTRCV_FLASE_FLAG;
                    EthIf_TrcvModeIndication(ETHTRCV_CFG_ETHIF_TRCVIDX(TrcvCfgPtr),
                                             EthTrcv_CurrMode[TrcvIdx]);
                }
                else
                {
                    /* After link state request, the transceiver can not get linked for severl
                     * repetitions, set the transceiver mode down, and report the down state to
                     * EthIf layer.
                     */
                    --EthTrcv_WaitLinkRepetitions[TrcvIdx];
                    if (EthTrcv_WaitLinkRepetitions[TrcvIdx] == 0U)
                    {
                        EthTrcv_ModeChangeReport[TrcvIdx] = ETHTRCV_FLASE_FLAG;
                        EthTrcv_CurrMode[TrcvIdx]         = ETH_MODE_DOWN;
                        EthTrcv_Hw_SetTransceiverUpDown(ETHTRCV_CFG_TRCV_DERIVATE(TrcvCfgPtr),
                                                        ETHTRCV_CFG_TRCV_MII_INTERFACE(TrcvCfgPtr),
                                                        (boolean)FALSE);
                        EthIf_TrcvModeIndication(ETHTRCV_CFG_ETHIF_TRCVIDX(TrcvCfgPtr),
                                                 ETH_MODE_DOWN);
                    }
                }
            }
        }
    }

#if (ETHTRCV_WAKEUP_BY_POLLING == ETHTRCV_WAKEUP_SUPPORT_TYPE)

#endif /* ETHTRCV_WAKEUP_BY_POLLING == ETHTRCV_WAKEUP_SUPPORT_TYPE */
#if (ETHTRCV_WAKEUP_BY_ASYNCHRONOUS_CHECK == ETHTRCV_WAKEUP_SUPPORT_TYPE)

#endif /* ETHTRCV_WAKEUP_BY_ASYNCHRONOUS_CHECK == ETHTRCV_WAKEUP_SUPPORT_TYPE */
}

#define ETHTRCV_STOP_SEC_CODE
#include "EthTrcv_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
