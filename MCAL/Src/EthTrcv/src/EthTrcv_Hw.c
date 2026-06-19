/**
*   @file    EthTrcv_Hw.c
*   @version 1.5.1

*   @brief   AUTOSAR EthTrcv - EthTrcv hardware implementation source file.
*   @details This file contains the implementation of EthTrcv hardware layer API.
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

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthTrcv_Hw.h"

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

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_ReadExtRegister(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint16                   RegIdx,
    uint16                  *RegValPtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_WriteExtRegister(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint16                   RegIdx,
    uint16                   RegVal);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_ReadSpecialRegister(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint16                   RegIdx,
    uint16                  *RegValPtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_WriteSpecialRegister(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint16                   RegIdx,
    uint16                   RegVal);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_SoftwareReset(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SoftwareReset(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_CheckResetComplete(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint32                   TyrTimes);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_CheckResetComplete(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint32                   TyrTimes);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_GetPowerUpDown(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    Eth_ModeType            *TrcvModePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_GetPowerUpDown(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    Eth_ModeType            *TrcvModePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_SetPowerUpDown(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  UpDown);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetPowerUpDown(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  UpDown);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetMiiMode(const EthTrcv_MiiIfType *MiiIfPtr,
                                                                     EthTrcv_PhyIfType PhyIf,
                                                                     uint32            TryTimes);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8010A_SetMiiMode(const EthTrcv_MiiIfType *MiiIfPtr,
                                                                      EthTrcv_PhyIfType PhyIf,
                                                                      uint32            TryTimes);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SetRgmiiTxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SetRgmiiTxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetRgmiiTxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SetRgmiiRxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SetRgmiiRxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetRgmiiRxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue);

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API)
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetTestMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_PhysLayerType    PhysLayer,
    EthTrcv_PhyTestModeType  Mode);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetTestMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_PhysLayerType    PhysLayer,
    EthTrcv_PhyTestModeType  Mode);
#endif /* STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API */

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetPcsLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  Sgmii,
    boolean                  Enable);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetPmaRemoteLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  PmaEnable,
    boolean                  RemoteEnable);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetLoopbackMode(
    const EthTrcv_MiiIfType    *MiiIfPtr,
    uint8                       MiiIdx,
    boolean                     Sgmii,
    EthTrcv_PhyLoopbackModeType Mode);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetPcsLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  Enable);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetPmaLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  Enable);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetRemoteLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  Enable);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetLoopbackMode(
    const EthTrcv_MiiIfType    *MiiIfPtr,
    uint8                       MiiIdx,
    EthTrcv_PhyLoopbackModeType Mode);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SetClockOutput(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_ClkOutPutType    ClkOutMode);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SetClockOutput(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_ClkOutPutType    ClkOutMode);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SetAutoNegtiationAbility(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType     MaxSpeed);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SetAutoNegtiationAbility(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType     MaxSpeed);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_ForceLinkup(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType   DuplexMode,
    EthTrcv_BaudRateType     SpeedMode,
    EthTrcv_ConnNegType      ConnNeg);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8010A_ForceLinkup(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType   DuplexMode,
    EthTrcv_BaudRateType     SpeedMode,
    EthTrcv_ConnNegType      ConnNeg);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_ForceLinkup(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType   DuplexMode,
    EthTrcv_BaudRateType     SpeedMode,
    EthTrcv_ConnNegType      ConnNeg);

#if (STD_ON == ETHTRCV_GET_LINK_STATE_API)
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8512H_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr);
#endif /* STD_ON == ETHTRCV_GET_LINK_STATE_API */

#if (STD_ON == ETHTRCV_GET_BAUD_RATE_API)
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8512H_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr);
#endif /* STD_ON == ETHTRCV_GET_BAUD_RATE_API */

#if (STD_ON == ETHTRCV_GET_DUPLEX_MODE_API)
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8512H_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr);
#endif /* STD_ON == ETHTRCV_GET_DUPLEX_MODE_API */

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SgmiiPhyConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SgmiiPhyConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_SgmiiPhyConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SgmiiMacConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SgmiiMacConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SgmiiMacConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_RTL9010AA_BridgeConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_JL311X_BridgeConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_JL311X_BridgeConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_General_BridgeConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/**
 * @brief                        Read the extend register of transceiver YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] RegIdx             Address of the register to be read.
 * @param[out] RegValPtr         Pointer to the address to save the register value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_ReadExtRegister(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint16                   RegIdx,
    uint16                  *RegValPtr)
{
    Std_ReturnType RetStatus;
    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_EXTREG_ADDRESS, RegIdx);
    if (RetStatus == E_OK)
    {
        RetStatus =
            MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_EXTREG_DATA, RegValPtr);
    }
    return RetStatus;
}

/**
 * @brief                        Write the extend register of transceiver YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] RegIdx             Address of the register to be read.
 * @param[in] RegVal             Value to write.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Write failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_WriteExtRegister(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint16                   RegIdx,
    uint16                   RegVal)
{
    Std_ReturnType RetStatus;
    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_EXTREG_ADDRESS, RegIdx);
    if (RetStatus == E_OK)
    {
        RetStatus =
            MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_EXTREG_DATA, RegVal);
    }
    return RetStatus;
}

/**
 * @brief                        Read the special register of transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] RegIdx             Address of the register to be read.
 * @param[out] RegValPtr         Pointer to the address to save the register value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_ReadSpecialRegister(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint16                   RegIdx,
    uint16                  *RegValPtr)
{
    Std_ReturnType RetStatus;
    RetStatus =
        MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL9010AA_SPECIAL_ADDRESS, RegIdx);
    if (RetStatus == E_OK)
    {
        RetStatus =
            MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL9010AA_SPECIAL_DATA, RegValPtr);
    }
    return RetStatus;
}

/**
 * @brief                        Write the special register of transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] RegIdx             Address of the register to be read.
 * @param[in] RegVal             Value to write.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Write failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_WriteSpecialRegister(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint16                   RegIdx,
    uint16                   RegVal)
{
    Std_ReturnType RetStatus;
    RetStatus =
        MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL9010AA_SPECIAL_ADDRESS, RegIdx);
    if (RetStatus == E_OK)
    {
        RetStatus =
            MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL9010AA_SPECIAL_DATA, RegVal);
    }
    return RetStatus;
}

/**
 * @brief                        Perform software reset for general transceivers.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_SoftwareReset(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal |= ETHTRCV_UTP_BCR_SOFT_RESET;
        RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, RegVal);
    }
    return RetStatus;
}

/**
 * @brief                        Perform software reset for JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SoftwareReset(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIdx,
                                  ETHTRCV_JL311X_MMD_PMA_PMD,
                                  ETHTRCV_JL311X_BASIC_CONTROL,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal |= ETHTRCV_JL311X_RESET_MASK;
        RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                       MiiIdx,
                                       ETHTRCV_JL311X_MMD_PMA_PMD,
                                       ETHTRCV_JL311X_BASIC_CONTROL,
                                       RegVal);
    }
    return RetStatus;
}

/**
 * @brief                        Check reset complete for general transceivers.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] TyrTimes           Try times to wait reset complete.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_CheckResetComplete(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint32                   TyrTimes)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    do
    {
        RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, &RegVal);
        if ((RetStatus != E_OK) || (TyrTimes == 0U))
        {
            RetStatus = E_NOT_OK;
            break;
        }
        /* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be modified
         *  1338:The parameter 'TyrTimes' is being modified.
         *  Reason: The value passed in for this parameter is used as the timeout count.
         */
        --TyrTimes;
        /* PRQA S 1338 -- */
    }
    while ((RegVal & ETHTRCV_UTP_BCR_SOFT_RESET) != 0U);

    return RetStatus;
}

/**
 * @brief                        Check reset complete for transceiver JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] TyrTimes           Try times to wait reset complete.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_CheckResetComplete(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    uint32                   TyrTimes)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    do
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_JL311X_MMD_PMA_PMD,
                                      ETHTRCV_JL311X_BASIC_CONTROL,
                                      &RegVal);
        if ((RetStatus != E_OK) || (TyrTimes == 0U))
        {
            RetStatus = E_NOT_OK;
            break;
        }
        /* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be modified
         *  1338:The parameter 'TyrTimes' is being modified.
         *  Reason: The value passed in for this parameter is used as the timeout count.
         */
        --TyrTimes;
        /* PRQA S 1338 -- */
    }
    while ((RegVal & ETHTRCV_JL311X_RESET_MASK) != 0U);

    return RetStatus;
}

/**
 * @brief                        Get power up or power down status for general transceivers.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] TrcvModePtr        Power status, (ETH_MODE_ACTIVE or ETH_MODE_DOWN).
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_GetPowerUpDown(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    Eth_ModeType            *TrcvModePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, &RegVal);
    if (RetStatus == E_OK)
    {
        *TrcvModePtr = ((RegVal & ETHTRCV_UTP_BCR_POWER_DOWN) == 0U) ? ETH_MODE_ACTIVE :
                                                                       ETH_MODE_DOWN;
    }
    return RetStatus;
}

/**
 * @brief                        Get power up or power down status for JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] TrcvModePtr        Power status, (ETH_MODE_ACTIVE or ETH_MODE_DOWN).
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_GetPowerUpDown(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    Eth_ModeType            *TrcvModePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIdx,
                                  ETHTRCV_JL311X_MMD_PMA_PMD,
                                  ETHTRCV_JL311X_BASIC_CONTROL,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        *TrcvModePtr = ((RegVal & ETHTRCV_JL311X_POWER_DOWN) == 0U) ? ETH_MODE_ACTIVE : ETH_MODE_DOWN;
    }
    return RetStatus;
}

/**
 * @brief                        Set power up or power down for general transceivers.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] UpDown             TRUE: Set power up, FALSE: Set power down.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_SetPowerUpDown(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  UpDown)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal = (uint16)(((uint32)RegVal & (~ETHTRCV_UTP_BCR_POWER_DOWN)) |
                          ((UpDown == (boolean)TRUE) ? 0U : ETHTRCV_UTP_BCR_POWER_DOWN));
        RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, RegVal);
    }
    return RetStatus;
}

/**
 * @brief                        Set power up or power down for transceiver JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             MII index of the transceiver.
 * @param[in] UpDown             TRUE: Set power up, FALSE: Set power down.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetPowerUpDown(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  UpDown)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIdx,
                                  ETHTRCV_JL311X_MMD_PMA_PMD,
                                  ETHTRCV_JL311X_BASIC_CONTROL,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_JL311X_POWER_DOWN)) |
                          ((UpDown == (boolean)TRUE) ? 0U : ETHTRCV_JL311X_POWER_DOWN));
        RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                       MiiIdx,
                                       ETHTRCV_JL311X_MMD_PMA_PMD,
                                       ETHTRCV_JL311X_BASIC_CONTROL,
                                       RegVal);
    }
    return RetStatus;
}

/**
 * @brief                        Set MII Interface for JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] PhyIf              MII mode.
 * @param[out] TryTimes          Try times to wait reset complete.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set PHY TX mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetMiiMode(const EthTrcv_MiiIfType *MiiIfPtr,
                                                                     EthTrcv_PhyIfType PhyIf,
                                                                     uint32            TryTimes)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    uint16         MiiMode;

    switch (PhyIf)
    {
        case ETHTRCV_PHYIF_MII:
            MiiMode   = ETHTRCV_JL311X_COMM_UCFG0_MODE_MII;
            RetStatus = E_OK;
            break;
        case ETHTRCV_PHYIF_RMII:
            MiiMode   = ETHTRCV_JL311X_COMM_UCFG0_MODE_RMII;
            RetStatus = E_OK;
            break;
        case ETHTRCV_PHYIF_RGMII:
            MiiMode   = ETHTRCV_JL311X_COMM_UCFG0_MODE_RGMII;
            RetStatus = E_OK;
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }
    if (RetStatus == E_OK)
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIfPtr->MiiIdx,
                                      ETHTRCV_JL311X_MMD_PCS,
                                      ETHTRCV_JL311X_COMM_UCFG0,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal = (uint16)(((uint32)RegVal & (~ETHTRCV_JL311X_COMM_UCFG0_MODE_MASK)) | MiiMode);
            RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                           MiiIfPtr->MiiIdx,
                                           ETHTRCV_JL311X_MMD_PCS,
                                           ETHTRCV_JL311X_COMM_UCFG0,
                                           RegVal);
            if (RetStatus == E_OK)
            {
                EthTrcv_JL311X_SoftwareReset(MiiIfPtr, MiiIfPtr->MiiIdx);
                RetStatus = EthTrcv_JL311X_CheckResetComplete(MiiIfPtr, MiiIfPtr->MiiIdx, TryTimes);
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set MII Interface for YT8010A.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] PhyIf              MII mode.
 * @param[out] TryTimes          Try times to wait reset complete.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set PHY TX mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8010A_SetMiiMode(const EthTrcv_MiiIfType *MiiIfPtr,
                                                                      EthTrcv_PhyIfType PhyIf,
                                                                      uint32            TryTimes)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    uint16         MiiMode;

    switch (PhyIf)
    {
        case ETHTRCV_PHYIF_MII:
            MiiMode   = ETHTRCV_YT8010A_MODE_SEL_MII;
            RetStatus = E_OK;
            break;
        case ETHTRCV_PHYIF_RMII:
            MiiMode   = ETHTRCV_YT8010A_MODE_SEL_RMII2;
            RetStatus = E_OK;
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }
    if (RetStatus == E_OK)
    {
        RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                       MiiIfPtr->MiiIdx,
                                       ETHTRCV_YT8010A_EXTREG_ADDRESS,
                                       ETHTRCV_YT8010A_EXTCOMBO_CTRL);
        if (RetStatus == E_OK)
        {
            RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_YT8010A_EXTREG_DATA,
                                          &RegVal);
            if (RetStatus == E_OK)
            {
                RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_YT8010A_MODE_SEL_MASK)) | MiiMode);
                RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                               MiiIfPtr->MiiIdx,
                                               ETHTRCV_YT8010A_EXTREG_ADDRESS,
                                               ETHTRCV_YT8010A_EXTCOMBO_CTRL);
                if (RetStatus == E_OK)
                {
                    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                                   MiiIfPtr->MiiIdx,
                                                   ETHTRCV_YT8010A_EXTREG_DATA,
                                                   RegVal);
                    if (RetStatus == E_OK)
                    {
                        EthTrcv_General_SoftwareReset(MiiIfPtr, MiiIfPtr->MiiIdx);
                        RetStatus =
                            EthTrcv_General_CheckResetComplete(MiiIfPtr, MiiIfPtr->MiiIdx, TryTimes);
                    }
                }
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set RGMII TX clock delay of transceiver type YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue         TX clock delay value.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SetRgmiiTxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
    RetStatus = EthTrcv_YT8531SH_ReadExtRegister(MiiIfPtr,
                                                 MiiIfPtr->MiiIdx,
                                                 ETHTRCV_YT8531SH_RGMII_CONFIG,
                                                 &RegVal);
    if (RetStatus == E_OK)
    {
        /* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be modified
         *  1338:The parameter 'DelayValue' is being modified.
         *  Reason: There is no risk of this variable being modified..
         */
        DelayValue = (uint16)((uint32)DelayValue / 15U);
        /* PRQA S 1338 -- */
        RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_YT8531SH_RGMII_TX_DELAY_MASK)) |
                          (DelayValue & ETHTRCV_YT8531SH_RGMII_TX_DELAY_MASK));
        RetStatus = EthTrcv_YT8531SH_WriteExtRegister(MiiIfPtr,
                                                      MiiIfPtr->MiiIdx,
                                                      ETHTRCV_YT8531SH_RGMII_CONFIG,
                                                      RegVal);
    }

    return RetStatus;
}

/**
 * @brief                        Set RGMII TX clock delay of transceiver type RTL8211FS.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue         TX clock delay value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SetRgmiiTxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                   MiiIfPtr->MiiIdx,
                                   ETHTRCV_RTL8211FS_PAGE_SELECT,
                                   ETHTRCV_RTL8211FS_RGMII_DELAY_PAGE);
    if (RetStatus == E_OK)
    {
        RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                      MiiIfPtr->MiiIdx,
                                      ETHTRCV_RTL8211FS_RGMII_TXDELAY_CFG,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_RTL8211FS_RGMII_TXDELAY_ENABLE_MASK)) |
                              ((DelayValue != 0U) ? ETHTRCV_RTL8211FS_RGMII_TXDELAY_ENABLE_MASK : 0U));
            RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                           MiiIfPtr->MiiIdx,
                                           ETHTRCV_RTL8211FS_RGMII_TXDELAY_CFG,
                                           RegVal);
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set RGMII TX clock delay of transceiver type JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue         TX clock delay value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetRgmiiTxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIfPtr->MiiIdx,
                                  ETHTRCV_JL311X_MMD_PCS,
                                  ETHTRCV_JL311X_XMII_UCFG,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal = (uint16)((uint32)RegVal & (~(ETHTRCV_JL311X_RGMII_TXDELAY_EN |
                                              ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_MASK)));
        if (DelayValue > 160U)
        {
            RegVal |= (uint16)(ETHTRCV_JL311X_RGMII_TXDELAY_EN |
                               ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_18);
        }
        else if (DelayValue > 130U)
        {
            RegVal |= (uint16)(ETHTRCV_JL311X_RGMII_TXDELAY_EN |
                               ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_15);
        }
        else if (DelayValue > 110U)
        {
            RegVal |= (uint16)(ETHTRCV_JL311X_RGMII_TXDELAY_EN |
                               ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_12);
        }
        else
        {
            if (DelayValue != 0u)
            {
                RegVal |= (uint16)ETHTRCV_JL311X_RGMII_TXDELAY_EN;
            }
        }

        RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                       MiiIfPtr->MiiIdx,
                                       ETHTRCV_JL311X_MMD_PCS,
                                       ETHTRCV_JL311X_XMII_UCFG,
                                       RegVal);
    }

    return RetStatus;
}

/**
 * @brief                        Set RGMII RX clock delay of transceiver type YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue         RX clock delay value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SetRgmiiRxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
    RetStatus = EthTrcv_YT8531SH_ReadExtRegister(MiiIfPtr,
                                                 MiiIfPtr->MiiIdx,
                                                 ETHTRCV_YT8531SH_RGMII_CONFIG,
                                                 &RegVal);
    if (RetStatus == E_OK)
    {
        /* PRQA S 1338 ++ #Misra-C:2012 Rule-17.8 A function parameter should not be modified
         *  1338:The parameter 'DelayValue' is being modified.
         *  Reason: There is no risk of this variable being modified..
         */
        DelayValue = (uint16)((uint32)DelayValue / 15U);
        /* PRQA S 1338 -- */
        RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_YT8531SH_RGMII_RX_DELAY_MASK)) |
                          (((uint32)DelayValue << ETHTRCV_YT8531SH_RGMII_RX_DELAY_SHIFT) &
                           ETHTRCV_YT8531SH_RGMII_RX_DELAY_MASK));
        RetStatus = EthTrcv_YT8531SH_WriteExtRegister(MiiIfPtr,
                                                      MiiIfPtr->MiiIdx,
                                                      ETHTRCV_YT8531SH_RGMII_CONFIG,
                                                      RegVal);
    }
    return RetStatus;
}

/**
 * @brief                        Set RGMII RX clock delay of transceiver type RTL8211FS.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue         RX clock delay value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SetRgmiiRxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue)
{
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)MiiIfPtr;
    (void)DelayValue;
    /* PRQA S 3119 -- */

    return E_OK;
}

/**
 * @brief                        Set RGMII RX clock delay of transceiver type JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue         RX clock delay value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetRgmiiRxDelay(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    DelayValue)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIfPtr->MiiIdx,
                                  ETHTRCV_JL311X_MMD_PCS,
                                  ETHTRCV_JL311X_XMII_UCFG,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_JL311X_RGMII_RXDELAY_EN)) |
                          ((DelayValue != 0U) ? ETHTRCV_JL311X_RGMII_RXDELAY_EN : 0U));
        RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                       MiiIfPtr->MiiIdx,
                                       ETHTRCV_JL311X_MMD_PCS,
                                       ETHTRCV_JL311X_XMII_UCFG,
                                       RegVal);
    }

    return RetStatus;
}

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API)
/**
 * @brief                        Set PHY JL311X test mode.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Transceiver index used for MII access to the transceiver.
 * @param[in] PhysLayer          The physical layer type of the Transceiver.
 * @param[in] Mode               Test mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set test mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetTestMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_PhysLayerType    PhysLayer,
    EthTrcv_PhyTestModeType  Mode)
{
    uint16         RegVal;
    Std_ReturnType RetStatus = E_NOT_OK;

    if (MiiIfPtr->MiiMux != NULL_PTR)
    {
        MiiIfPtr->MiiMux((boolean)TRUE);
    }
    if (PhysLayer == ETHTRCV_PHYS_LAYER_TYPE_1000BASE_T1)
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_JL311X_MMD_PMA_PMD,
                                      ETHTRCV_JL311X_1000BASET1_TESTMODE,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_JL311X_TESTMODE_MASK)) |
                              (((uint32)Mode << ETHTRCV_JL311X_TESTMODE_SHIFT) &
                               ETHTRCV_JL311X_TESTMODE_MASK));
            RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_JL311X_MMD_PMA_PMD,
                                           ETHTRCV_JL311X_1000BASET1_TESTMODE,
                                           RegVal);
        }
    }
    else if (PhysLayer == ETHTRCV_PHYS_LAYER_TYPE_100BASE_T1)
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_JL311X_MMD_PMA_PMD,
                                      ETHTRCV_JL311X_100BASET1_TESTMODE,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_JL311X_TESTMODE_MASK)) |
                              (((uint32)Mode << ETHTRCV_JL311X_TESTMODE_SHIFT) &
                               ETHTRCV_JL311X_TESTMODE_MASK));
            RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_JL311X_MMD_PMA_PMD,
                                           ETHTRCV_JL311X_100BASET1_TESTMODE,
                                           RegVal);
        }
    }
    else
    {
        /* Test mode not supported */
    }

    return RetStatus;
}

/**
 * @brief                        Set PHY RTL9010AA test mode.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Transceiver index used for MII access to the transceiver.
 * @param[in] PhysLayer          The physical layer type of the Transceiver.
 * @param[in] Mode               Test mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set test mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetTestMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_PhysLayerType    PhysLayer,
    EthTrcv_PhyTestModeType  Mode)
{
    uint16         RegVal;
    Std_ReturnType RetStatus = E_NOT_OK;

    if (MiiIfPtr->MiiMux != NULL_PTR)
    {
        MiiIfPtr->MiiMux((boolean)TRUE);
    }
    if (PhysLayer == ETHTRCV_PHYS_LAYER_TYPE_1000BASE_T1)
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_RTL9010AA_MMD_PMA_PMD,
                                      ETHTRCV_RTL9010AA_1000BASET1_TESTMODE,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_RTL9010AA_TESTMODE_MASK)) |
                              (((uint32)Mode << ETHTRCV_RTL9010AA_TESTMODE_SHIFT) &
                               ETHTRCV_RTL9010AA_TESTMODE_MASK));
            RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_RTL9010AA_MMD_PMA_PMD,
                                           ETHTRCV_RTL9010AA_1000BASET1_TESTMODE,
                                           RegVal);
        }
    }
    else if (PhysLayer == ETHTRCV_PHYS_LAYER_TYPE_100BASE_T1)
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_RTL9010AA_MMD_PMA_PMD,
                                      ETHTRCV_RTL9010AA_100BASET1_TESTMODE,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_RTL9010AA_TESTMODE_MASK)) |
                              (((uint32)Mode << ETHTRCV_RTL9010AA_TESTMODE_SHIFT) &
                               ETHTRCV_RTL9010AA_TESTMODE_MASK));
            RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_RTL9010AA_MMD_PMA_PMD,
                                           ETHTRCV_RTL9010AA_100BASET1_TESTMODE,
                                           RegVal);
        }
    }
    else
    {
        /* Test mode not supported */
    }

    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API */

/**
 * @brief                        Set PCS loop back mode for transceiver JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Mii index of the transceiver.
 * @param[in] Sgmii              SGMII mode link or MII/RMII/RGMII mode link.
 * @param[in] Enable             Enable or disable PCS loop back mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set loopback mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetPcsLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  Sgmii,
    boolean                  Enable)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    boolean        AlreayEnabled;

    if (Sgmii == (boolean)TRUE)
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_JL311X_MMD_PCS,
                                      ETHTRCV_JL311X_PCS_SGMII_LB_REG,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            AlreayEnabled = (boolean)((RegVal & ETHTRCV_JL311X_PCS_SGMII_LB_MASK) >>
                                      ETHTRCV_JL311X_PCS_SGMII_LB_SHIFT);
            if (AlreayEnabled != Enable)
            {
                RegVal    = (uint16)(((uint16)RegVal & (~ETHTRCV_JL311X_PCS_SGMII_LB_MASK)) |
                                  (((uint32)Enable << ETHTRCV_JL311X_PCS_SGMII_LB_SHIFT) &
                                   ETHTRCV_JL311X_PCS_SGMII_LB_MASK));
                RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                               MiiIdx,
                                               ETHTRCV_JL311X_MMD_PCS,
                                               ETHTRCV_JL311X_PCS_SGMII_LB_REG,
                                               RegVal);
                if (RetStatus == E_OK)
                {
                    RetStatus = EthTrcv_JL311X_SoftwareReset(MiiIfPtr, MiiIdx);
                }
            }
        }
    }
    else
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_JL311X_MMD_PCS,
                                      ETHTRCV_JL311X_PCS_XMII_LB_REG,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            AlreayEnabled = (boolean)((RegVal & ETHTRCV_JL311X_PCS_XMII_LB_MASK) >>
                                      ETHTRCV_JL311X_PCS_XMII_LB_SHIFT);
            if (AlreayEnabled != Enable)
            {
                RegVal    = (uint16)(((uint16)RegVal & (~ETHTRCV_JL311X_PCS_XMII_LB_MASK)) |
                                  (((uint32)Enable << ETHTRCV_JL311X_PCS_XMII_LB_SHIFT) &
                                   ETHTRCV_JL311X_PCS_XMII_LB_MASK));
                RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                               MiiIdx,
                                               ETHTRCV_JL311X_MMD_PCS,
                                               ETHTRCV_JL311X_PCS_XMII_LB_REG,
                                               RegVal);
                if (RetStatus == E_OK)
                {
                    RetStatus = EthTrcv_JL311X_SoftwareReset(MiiIfPtr, MiiIdx);
                }
            }
        }
    }
    return RetStatus;
}

/**
 * @brief                        Set PMA or remote loop back mode for transceiver JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Mii index of the transceiver.
 * @param[in] PmaEnable          Enable or disable PMA loop back mode.
 * @param[in] RemoteEnable       Enable or disable remote loop back mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set loopback mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetPmaRemoteLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  PmaEnable,
    boolean                  RemoteEnable)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    uint16         AlreayEnabled;
    uint16         EnabledVal;

    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIdx,
                                  ETHTRCV_JL311X_MMD_PMA_PMD,
                                  ETHTRCV_JL311X_BASIC_CONTROL,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        AlreayEnabled = (boolean)((RegVal & ETHTRCV_JL311X_PMA_REMOTE_LB_MASK) >>
                                  ETHTRCV_JL311X_PMA_REMOTE_LB_SHIFT);
        EnabledVal    = (uint16)((uint32)PmaEnable | ((uint32)RemoteEnable << 1U));
        if (AlreayEnabled != EnabledVal)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_JL311X_PMA_REMOTE_LB_MASK)) |
                              (((uint32)EnabledVal << ETHTRCV_JL311X_PMA_REMOTE_LB_SHIFT) &
                               ETHTRCV_JL311X_PMA_REMOTE_LB_MASK));
            RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_JL311X_MMD_PMA_PMD,
                                           ETHTRCV_JL311X_BASIC_CONTROL,
                                           RegVal);
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set loopback mode for transceiver JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Mii index of the transceiver.
 * @param[in] Sgmii              SGMII mode link or MII/RMII/RGMII mode link.
 * @param[in] Mode               Loopback mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set loopback mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SetLoopbackMode(
    const EthTrcv_MiiIfType    *MiiIfPtr,
    uint8                       MiiIdx,
    boolean                     Sgmii,
    EthTrcv_PhyLoopbackModeType Mode)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    if (MiiIfPtr->MiiMux != NULL_PTR)
    {
        MiiIfPtr->MiiMux((boolean)TRUE);
    }
    switch (Mode)
    {
        case ETHTRCV_PHYLOOPBACK_NONE:
            RetStatus = EthTrcv_JL311X_SetPcsLoopback(MiiIfPtr, MiiIdx, Sgmii, (boolean)FALSE);
            if (RetStatus == E_OK)
            {
                RetStatus = EthTrcv_JL311X_SetPmaRemoteLoopback(MiiIfPtr,
                                                                MiiIdx,
                                                                (boolean)FALSE,
                                                                (boolean)FALSE);
            }
            break;
        case ETHTRCV_PHYLOOPBACK_INTERNAL:
            RetStatus = EthTrcv_JL311X_SetPcsLoopback(MiiIfPtr, MiiIdx, Sgmii, (boolean)TRUE);
            break;
        case ETHTRCV_PHYLOOPBACK_EXTERNAL:
            RetStatus =
                EthTrcv_JL311X_SetPmaRemoteLoopback(MiiIfPtr, MiiIdx, (boolean)TRUE, (boolean)FALSE);
            break;
        case ETHTRCV_PHYLOOPBACK_REMOTE:
            RetStatus =
                EthTrcv_JL311X_SetPmaRemoteLoopback(MiiIfPtr, MiiIdx, (boolean)FALSE, (boolean)TRUE);
            break;
        default:
            /* Do Nothing */
            break;
    }
    return RetStatus;
}

/**
 * @brief                        Set PCS loop back mode for transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Mii index of the transceiver.
 * @param[in] Enable             Enable or disable PCS loop back mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set loopback mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetPcsLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  Enable)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    boolean        AlreayEnabled;

    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL9010AA_BASIC_CONTROL, &RegVal);
    if (RetStatus == E_OK)
    {
        AlreayEnabled = (boolean)((RegVal & ETHTRCV_RTL9010AA_PCS_LB_MASK) >>
                                  ETHTRCV_RTL9010AA_PCS_LB_SHIFT);
        if (AlreayEnabled != Enable)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_RTL9010AA_PCS_LB_MASK)) |
                              (((uint32)Enable << ETHTRCV_RTL9010AA_PCS_LB_SHIFT) &
                               ETHTRCV_RTL9010AA_PCS_LB_MASK));
            RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_RTL9010AA_BASIC_CONTROL,
                                           RegVal);
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set PMA loop back mode for transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Mii index of the transceiver.
 * @param[in] Enable             Enable or disable PMA loop back mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set loopback mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetPmaLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  Enable)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    boolean        AlreayEnabled;

    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIdx,
                                  ETHTRCV_RTL9010AA_MMD_PMA_PMD,
                                  ETHTRCV_RTL9010AA_PMA_CONTROL,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        AlreayEnabled = (boolean)((RegVal & ETHTRCV_RTL9010AA_PMA_LB_MASK) >>
                                  ETHTRCV_RTL9010AA_PMA_LB_SHIFT);
        if (AlreayEnabled != Enable)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_RTL9010AA_PMA_LB_MASK)) |
                              (((uint32)Enable << ETHTRCV_RTL9010AA_PMA_LB_SHIFT) &
                               ETHTRCV_RTL9010AA_PMA_LB_MASK));
            RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_RTL9010AA_MMD_PMA_PMD,
                                           ETHTRCV_RTL9010AA_PMA_CONTROL,
                                           RegVal);
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set remote loop back mode for transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Mii index of the transceiver.
 * @param[in] Enable             Enable or disable remote loop back mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set loopback mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetRemoteLoopback(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    boolean                  Enable)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    boolean        AlreayEnabled;

    RetStatus =
        EthTrcv_RTL9010AA_ReadSpecialRegister(MiiIfPtr, MiiIdx, ETHTRCV_RTL9010AA_IPGR1_REG, &RegVal);
    if (RetStatus == E_OK)
    {
        AlreayEnabled = (boolean)((RegVal & ETHTRCV_RTL9010AA_REMOTE_LB_MASK) >>
                                  ETHTRCV_RTL9010AA_REMOTE_LB_SHIFT);
        if (AlreayEnabled != Enable)
        {
            RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_RTL9010AA_REMOTE_LB_MASK)) |
                              (((uint32)Enable << ETHTRCV_RTL9010AA_REMOTE_LB_SHIFT) &
                               ETHTRCV_RTL9010AA_REMOTE_LB_MASK));
            RetStatus = EthTrcv_RTL9010AA_WriteSpecialRegister(MiiIfPtr,
                                                               MiiIdx,
                                                               ETHTRCV_RTL9010AA_IPGR1_REG,
                                                               RegVal);
        }
    }
    return RetStatus;
}

/**
 * @brief                        Set loopback mode for transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MiiIdx             Mii index of the transceiver.
 * @param[in] Mode               Loopback mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set loopback mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SetLoopbackMode(
    const EthTrcv_MiiIfType    *MiiIfPtr,
    uint8                       MiiIdx,
    EthTrcv_PhyLoopbackModeType Mode)
{
    Std_ReturnType RetStatus;

    if (MiiIfPtr->MiiMux != NULL_PTR)
    {
        MiiIfPtr->MiiMux((boolean)TRUE);
    }
    switch (Mode)
    {
        case ETHTRCV_PHYLOOPBACK_NONE:
            RetStatus = EthTrcv_RTL9010AA_SetPcsLoopback(MiiIfPtr, MiiIdx, (boolean)FALSE);
            if (RetStatus == E_OK)
            {
                RetStatus = EthTrcv_RTL9010AA_SetPmaLoopback(MiiIfPtr, MiiIdx, (boolean)FALSE);
                if (RetStatus == E_OK)
                {
                    RetStatus = EthTrcv_RTL9010AA_SetRemoteLoopback(MiiIfPtr, MiiIdx, (boolean)FALSE);
                }
            }
            break;
        case ETHTRCV_PHYLOOPBACK_INTERNAL:
            RetStatus = EthTrcv_RTL9010AA_SetPcsLoopback(MiiIfPtr, MiiIdx, (boolean)TRUE);
            break;
        case ETHTRCV_PHYLOOPBACK_EXTERNAL:
            RetStatus = EthTrcv_RTL9010AA_SetPmaLoopback(MiiIfPtr, MiiIdx, (boolean)TRUE);
            break;
        case ETHTRCV_PHYLOOPBACK_REMOTE:
            RetStatus = EthTrcv_RTL9010AA_SetRemoteLoopback(MiiIfPtr, MiiIdx, (boolean)TRUE);
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }
    return RetStatus;
}

/**
 * @brief                        Set clock output mode of transceiver type YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] ClkOutMode         Clock output mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SetClockOutput(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_ClkOutPutType    ClkOutMode)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus =
        EthTrcv_YT8531SH_ReadExtRegister(MiiIfPtr, MiiIdx, ETHTRCV_YT8531SH_SYNCE_CFG, &RegVal);
    if (RetStatus == E_OK)
    {
        if (ClkOutMode == ETHTRCV_CLK_OUTPUT_25M)
        {
            RegVal =
                (uint16)(((uint32)RegVal & (~(ETHTRCV_YT8531SH_SYNCE_SRC_MASK |
                                              ETHTRCV_YT8531SH_SYNCE_SEL_125M_MASK))) |
                         (ETHTRCV_YT8531SH_SYNCE_ENABLE_MASK |
                          ((ETHTRCV_YT8531SH_SYNCE_SRC_REFCLK << ETHTRCV_YT8531SH_SYNCE_SRC_SHIFT) &
                           ETHTRCV_YT8531SH_SYNCE_SRC_MASK)));
        }
        else if (ClkOutMode == ETHTRCV_CLK_OUTPUT_125M)
        {
            RegVal =
                (uint16)(((uint32)RegVal & (~ETHTRCV_YT8531SH_SYNCE_SRC_MASK)) |
                         (ETHTRCV_YT8531SH_SYNCE_ENABLE_MASK | ETHTRCV_YT8531SH_SYNCE_SEL_125M_MASK |
                          ((ETHTRCV_YT8531SH_SYNCE_SRC_PLL125M << ETHTRCV_YT8531SH_SYNCE_SRC_SHIFT) &
                           ETHTRCV_YT8531SH_SYNCE_SRC_MASK)));
        }
        else
        {
            /* Disable output clok */
            RegVal = (uint16)((uint32)RegVal & (~ETHTRCV_YT8531SH_SYNCE_ENABLE_MASK));
        }
        RetStatus =
            EthTrcv_YT8531SH_WriteExtRegister(MiiIfPtr, MiiIdx, ETHTRCV_YT8531SH_SYNCE_CFG, RegVal);
    }
    return RetStatus;
}

/**
 * @brief                        Set clock output mode of transceiver type RTL8211FS.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] ClkOutMode         Clock output mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SetClockOutput(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_ClkOutPutType    ClkOutMode)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                   MiiIdx,
                                   ETHTRCV_RTL8211FS_PAGE_SELECT,
                                   ETHTRCV_RTL8211FS_SPECIFIC_PAGE);
    if (RetStatus == E_OK)
    {
        RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL8211FS_PHYCR2, &RegVal);
        if (RetStatus == E_OK)
        {
            if (ClkOutMode == ETHTRCV_CLK_OUTPUT_125M)
            {
                RegVal |= ETHTRCV_RTL8211FS_PHYCR2_PLL125M_MASK |
                          ETHTRCV_RTL8211FS_PHYCR2_CLKOUT_ENABLE_MASK;
            }
            else if (ClkOutMode == ETHTRCV_CLK_OUTPUT_25M)
            {
                RegVal = (uint16)(((uint32)RegVal & (~ETHTRCV_RTL8211FS_PHYCR2_PLL125M_MASK)) |
                                  ETHTRCV_RTL8211FS_PHYCR2_CLKOUT_ENABLE_MASK);
            }
            else
            {
                RegVal = (uint16)((uint32)RegVal & (~ETHTRCV_RTL8211FS_PHYCR2_CLKOUT_ENABLE_MASK));
            }
            RetStatus =
                MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL8211FS_PHYCR2, RegVal);
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set Auto-Negotiation advertise ability of transceiver type YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MaxSpeed           The maximum speed advertised for Auto-Negotiation.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set Auto-Negotiation ability failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SetAutoNegtiationAbility(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType     MaxSpeed)
{
    Std_ReturnType RetStatus;
    uint16         RegVal1, RegVal2;

    RetStatus =
        MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_AUTONEG_ABLITY1, &RegVal1);
    if (RetStatus == E_OK)
    {
        RetStatus =
            MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_AUTONEG_ABLITY2, &RegVal2);
        if (RetStatus == E_OK)
        {
            if (ETHTRCV_BAUD_RATE_1000MBIT == MaxSpeed)
            {
                RegVal1 |= ETHTRCV_YT8531SH_AN_ABLITY1_10BASETE_HALF_MASK |
                           ETHTRCV_YT8531SH_AN_ABLITY1_10BASETE_FULL_MASK |
                           ETHTRCV_YT8531SH_AN_ABLITY1_100BASETX_HALF_MASK |
                           ETHTRCV_YT8531SH_AN_ABLITY1_100BASETX_FULL_MASK;
                RegVal2 |= ETHTRCV_YT8531SH_AN_ABLITY1_1000BASET_HALF_MASK |
                           ETHTRCV_YT8531SH_AN_ABLITY1_1000BASET_FULL_MASK;
            }
            else if (ETHTRCV_BAUD_RATE_100MBIT == MaxSpeed)
            {
                RegVal1 |= ETHTRCV_YT8531SH_AN_ABLITY1_10BASETE_HALF_MASK |
                           ETHTRCV_YT8531SH_AN_ABLITY1_10BASETE_FULL_MASK |
                           ETHTRCV_YT8531SH_AN_ABLITY1_100BASETX_HALF_MASK |
                           ETHTRCV_YT8531SH_AN_ABLITY1_100BASETX_FULL_MASK;
                RegVal2 = (uint16)((uint32)RegVal2 &
                                   (~(ETHTRCV_YT8531SH_AN_ABLITY1_1000BASET_HALF_MASK |
                                      ETHTRCV_YT8531SH_AN_ABLITY1_1000BASET_FULL_MASK)));
            }
            else if (ETHTRCV_BAUD_RATE_10MBIT == MaxSpeed)
            {
                RegVal1 = (uint16)(((uint32)RegVal1 &
                                    (~(ETHTRCV_YT8531SH_AN_ABLITY1_100BASETX_HALF_MASK |
                                       ETHTRCV_YT8531SH_AN_ABLITY1_100BASETX_FULL_MASK))) |
                                   (ETHTRCV_YT8531SH_AN_ABLITY1_10BASETE_HALF_MASK |
                                    ETHTRCV_YT8531SH_AN_ABLITY1_10BASETE_FULL_MASK));
                RegVal2 = (uint16)((uint32)RegVal2 &
                                   (~(ETHTRCV_YT8531SH_AN_ABLITY1_1000BASET_HALF_MASK |
                                      ETHTRCV_YT8531SH_AN_ABLITY1_1000BASET_FULL_MASK)));
            }
            else
            {
                RetStatus = E_NOT_OK;
            }

            if (RetStatus == E_OK)
            {
                RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                               MiiIdx,
                                               ETHTRCV_YT8531SH_AUTONEG_ABLITY1,
                                               RegVal1);
                RetStatus |= MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                                MiiIdx,
                                                ETHTRCV_YT8531SH_AUTONEG_ABLITY2,
                                                RegVal2);
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set Auto-Negotiation advertise ability of transceiver type YT8512H.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MaxSpeed           The maximum speed advertised for Auto-Negotiation.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set Auto-Negotiation ability failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8512H_SetAutoNegtiationAbility(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType     MaxSpeed)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8512H_AUTONEG_ABLITY, &RegVal);
    if (RetStatus == E_OK)
    {
        if (ETHTRCV_BAUD_RATE_100MBIT == MaxSpeed)
        {
            RegVal |= ETHTRCV_YT8512H_AN_ABLITY_10BASETE_HALF_MASK |
                      ETHTRCV_YT8512H_AN_ABLITY_10BASETE_FULL_MASK |
                      ETHTRCV_YT8512H_AN_ABLITY_100BASETX_HALF_MASK |
                      ETHTRCV_YT8512H_AN_ABLITY_100BASETX_FULL_MASK;
        }
        else if (ETHTRCV_BAUD_RATE_10MBIT == MaxSpeed)
        {
            RegVal = (uint16)(((uint32)RegVal & (~(ETHTRCV_YT8512H_AN_ABLITY_100BASETX_HALF_MASK |
                                                   ETHTRCV_YT8512H_AN_ABLITY_100BASETX_FULL_MASK))) |
                              (ETHTRCV_YT8512H_AN_ABLITY_10BASETE_HALF_MASK |
                               ETHTRCV_YT8512H_AN_ABLITY_10BASETE_FULL_MASK));
        }
        else
        {
            RetStatus = E_NOT_OK;
        }

        if (RetStatus == E_OK)
        {
            RetStatus =
                MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8512H_AUTONEG_ABLITY, RegVal);
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set Auto-Negotiation advertise ability of transceiver type RTL8211FS.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] MaxSpeed           The maximum speed advertised for Auto-Negotiation.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set Auto-Negotiation ability failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SetAutoNegtiationAbility(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType     MaxSpeed)
{
    Std_ReturnType RetStatus;
    uint16         RegVal1, RegVal2;

    RetStatus =
        MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL8211FS_AUTONEG_ABLITY1, &RegVal1);
    if (RetStatus == E_OK)
    {
        RetStatus |=
            MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL8211FS_AUTONEG_ABLITY2, &RegVal2);
        if (RetStatus == E_OK)
        {
            if (ETHTRCV_BAUD_RATE_1000MBIT == MaxSpeed)
            {
                RegVal1 |= ETHTRCV_RTL8211FS_AN_ABLITY1_10BASETE_HALF_MASK |
                           ETHTRCV_RTL8211FS_AN_ABLITY1_10BASETE_FULL_MASK |
                           ETHTRCV_RTL8211FS_AN_ABLITY1_100BASETX_HALF_MASK |
                           ETHTRCV_RTL8211FS_AN_ABLITY1_100BASETX_FULL_MASK;
                RegVal2 |= ETHTRCV_RTL8211FS_AN_ABLITY1_1000BASET_FULL_MASK;
            }
            else if (ETHTRCV_BAUD_RATE_100MBIT == MaxSpeed)
            {
                RegVal1 |= ETHTRCV_RTL8211FS_AN_ABLITY1_10BASETE_HALF_MASK |
                           ETHTRCV_RTL8211FS_AN_ABLITY1_10BASETE_FULL_MASK |
                           ETHTRCV_RTL8211FS_AN_ABLITY1_100BASETX_HALF_MASK |
                           ETHTRCV_RTL8211FS_AN_ABLITY1_100BASETX_FULL_MASK;
                RegVal2 = (uint16)((uint32)RegVal2 &
                                   (~ETHTRCV_RTL8211FS_AN_ABLITY1_1000BASET_FULL_MASK));
            }
            else if (ETHTRCV_BAUD_RATE_10MBIT == MaxSpeed)
            {
                RegVal1 = (uint16)(((uint32)RegVal1 &
                                    (~(ETHTRCV_RTL8211FS_AN_ABLITY1_100BASETX_HALF_MASK |
                                       ETHTRCV_RTL8211FS_AN_ABLITY1_100BASETX_FULL_MASK))) |
                                   (ETHTRCV_RTL8211FS_AN_ABLITY1_10BASETE_HALF_MASK |
                                    ETHTRCV_RTL8211FS_AN_ABLITY1_10BASETE_FULL_MASK));
                RegVal2 = (uint16)((uint32)RegVal2 &
                                   (~ETHTRCV_RTL8211FS_AN_ABLITY1_1000BASET_FULL_MASK));
            }
            else
            {
                RetStatus = E_NOT_OK;
            }

            if (RetStatus == E_OK)
            {
                RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                               MiiIdx,
                                               ETHTRCV_RTL8211FS_AUTONEG_ABLITY1,
                                               RegVal1);
                RetStatus |= MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                                MiiIdx,
                                                ETHTRCV_RTL8211FS_AUTONEG_ABLITY2,
                                                RegVal2);
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set force link up via mii clause 22 interface.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @return                       E_OK: link is up.
 *                               E_NOT_OK: link is down.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_ForceLinkup(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType   DuplexMode,
    EthTrcv_BaudRateType     SpeedMode,
    EthTrcv_ConnNegType      ConnNeg)
{
    Std_ReturnType RetStatus = E_OK;
    uint16         RegVal;

    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)ConnNeg;
    /* PRQA S 3119 -- */

    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal = (uint16)((uint32)RegVal &
                          (~(ETHTRCV_UTP_BCR_AUTONEG_ENABLE | ETHTRCV_UTP_BCR_AUTONEG_RESTART |
                             ETHTRCV_UTP_BCR_DUPLEX_MODE | ETHTRCV_UTP_BCR_SPEED_MASK)));
        if (ETHTRCV_DUPLEX_MODE_FULL == DuplexMode)
        {
            RegVal |= ETHTRCV_UTP_BCR_DUPLEX_MODE;
        }

        if (SpeedMode == ETHTRCV_BAUD_RATE_1000MBIT)
        {
            RegVal |= ETHTRCV_UTP_BCR_SPEED_1000M;
        }
        else if (SpeedMode == ETHTRCV_BAUD_RATE_100MBIT)
        {
            RegVal |= ETHTRCV_UTP_BCR_SPEED_100M;
        }
        else
        {
            /* Nothing to do */
        }

        RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, RegVal);
    }

    return RetStatus;
}

/**
 * @brief                        Set force link up for transceiver YT8010A.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @return                       E_OK: link is up.
 *                               E_NOT_OK: link is down.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8010A_ForceLinkup(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType   DuplexMode,
    EthTrcv_BaudRateType     SpeedMode,
    EthTrcv_ConnNegType      ConnNeg)
{
    Std_ReturnType RetStatus = E_OK;
    uint16         RegVal;

    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)SpeedMode;
    (void)DuplexMode;
    /* PRQA S 3119 -- */

    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                   MiiIdx,
                                   ETHTRCV_YT8010A_EXTREG_ADDRESS,
                                   ETHTRCV_YT8010A_AUTO100_CTRL);
    if (RetStatus == E_OK)
    {
        RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8010A_EXTREG_DATA, &RegVal);
        if (RetStatus == E_OK)
        {
            if (ConnNeg == ETHTRCV_CONN_NEG_MASTER)
            {
                RegVal |= ETHTRCV_YT8010A_ROLE_MASTER_MASK;
            }
            else if (ConnNeg == ETHTRCV_CONN_NEG_SLAVE)
            {
                RegVal &= ~ETHTRCV_YT8010A_ROLE_MASTER_MASK;
            }
            else
            {
                /* Nothing needed */
            }
            RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_YT8010A_EXTREG_ADDRESS,
                                           ETHTRCV_YT8010A_AUTO100_CTRL);
            if (RetStatus == E_OK)
            {
                RetStatus =
                    MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, RegVal);
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Set force link up via mii clause 45 interface for JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @return                       E_OK: link is up.
 *                               E_NOT_OK: link is down.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_ForceLinkup(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType   DuplexMode,
    EthTrcv_BaudRateType     SpeedMode,
    EthTrcv_ConnNegType      ConnNeg)
{
    Std_ReturnType RetStatus = E_OK;
    uint16         RegVal;

    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)ConnNeg;
    (void)DuplexMode;
    /* PRQA S 3119 -- */

    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIdx,
                                  ETHTRCV_JL311X_MMD_PMA_PMD,
                                  ETHTRCV_JL311X_BASIC_CONTROL,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal = (uint16)((uint32)RegVal & (~ETHTRCV_JL311X_FORCE_SPEED_MASK));
        if (SpeedMode == ETHTRCV_BAUD_RATE_1000MBIT)
        {
            RegVal |= ETHTRCV_JL311X_FORCE_SPEED_1000M;
        }
        else if (SpeedMode == ETHTRCV_BAUD_RATE_100MBIT)
        {
            RegVal |= ETHTRCV_JL311X_FORCE_SPEED_100M;
        }
        else
        {
            /* 10 MBPS not supported */
            RetStatus = E_NOT_OK;
        }

        if (RetStatus == E_OK)
        {
            RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                           MiiIdx,
                                           ETHTRCV_JL311X_MMD_PMA_PMD,
                                           ETHTRCV_JL311X_BASIC_CONTROL,
                                           RegVal);
            if (RetStatus == E_OK)
            {
                RetStatus = EthTrcv_JL311X_SoftwareReset(MiiIfPtr, MiiIdx);
            }
        }
    }

    return RetStatus;
}

#if (STD_ON == ETHTRCV_GET_LINK_STATE_API)
/**
 * @brief                        Read current link status of transceiver.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] LinkStatePtr       Pointer to the address to save the link state.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read link state failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;
    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_STATUS, &RegVal);
    if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_UTP_BSR_LINK_STATUS) != 0U))
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_ACTIVE;
    }
    else
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_DOWN;
    }

    return RetStatus;
}

/**
 * @brief                        Read current link status of transceiver YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] LinkStatePtr       Pointer to the address to save the link state.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read link state failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus =
        MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_SPECIFIC_STATUS, &RegVal);
    if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_YT8531SH_SPECIFIC_RESOLVED_MASK) != 0U) &&
        ((RegVal & ETHTRCV_YT8531SH_SPECIFIC_LINK_MASK) != 0U))
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_ACTIVE;
    }
    else
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_DOWN;
    }
    return RetStatus;
}

/**
 * @brief                        Read current link status of transceiver YT8512H.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] LinkStatePtr       Pointer to the address to save the link state.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read link state failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8512H_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8512H_SPECIFIC_STATUS, &RegVal);
    if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_YT8512H_SPECIFIC_RESOLVED_MASK) != 0U) &&
        ((RegVal & ETHTRCV_YT8512H_SPECIFIC_LINK_MASK) != 0U))
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_ACTIVE;
    }
    else
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_DOWN;
    }
    return RetStatus;
}

/**
 * @brief                        Read current link status of transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] LinkStatePtr       Pointer to the address to save the link state.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read link state failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus =
        MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL9010AA_SPECIFIC_STATUS, &RegVal);
    if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_RTL9010AA_LINKED_MASK) != 0U))
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_ACTIVE;
    }
    else
    {
        *LinkStatePtr = ETHTRCV_LINK_STATE_DOWN;
    }

    return RetStatus;
}

/**
 * @brief                        Read current link status of transceiver JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] LinkStatePtr       Pointer to the address to save the link state.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read link state failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_ReadLinkState(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_LinkStateType   *LinkStatePtr)
{
    Std_ReturnType RetStatus = E_OK;
    uint16         RegVal;

    if (MiiIfPtr->ReadMmd != NULL_PTR)
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_JL311X_MMD_PMA_PMD,
                                      ETHTRCV_JL311X_BASIC_STATUS,
                                      &RegVal);
        if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_JL311X_LINKED_MASK) != 0U))
        {
            *LinkStatePtr = ETHTRCV_LINK_STATE_ACTIVE;
        }
        else
        {
            *LinkStatePtr = ETHTRCV_LINK_STATE_DOWN;
        }
    }
    else
    {
        RetStatus = E_NOT_OK;
    }

    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_LINK_STATE_API */

#if (STD_ON == ETHTRCV_GET_BAUD_RATE_API)
/**
 * @brief                        Read current baud rate of transceiver YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] BaudRatePtr        Pointer to the address to save the baud rate.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read baud rate failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus =
        MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_SPECIFIC_STATUS, &RegVal);
    if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_YT8531SH_SPECIFIC_RESOLVED_MASK) != 0U))
    {
        RegVal &= ETHTRCV_YT8531SH_SPECIFIC_SPEED_MASK;
        if (RegVal == ETHTRCV_YT8531SH_LINK_SPEED_1000M)
        {
            *BaudRatePtr = ETHTRCV_BAUD_RATE_1000MBIT;
        }
        else if (RegVal == ETHTRCV_YT8531SH_LINK_SPEED_100M)
        {
            *BaudRatePtr = ETHTRCV_BAUD_RATE_100MBIT;
        }
        else if (RegVal == ETHTRCV_YT8531SH_LINK_SPEED_10M)
        {
            *BaudRatePtr = ETHTRCV_BAUD_RATE_10MBIT;
        }
        else
        {
            /* Reserved */
            RetStatus = E_NOT_OK;
        }
    }
    else
    {
        RetStatus = E_NOT_OK;
    }
    return RetStatus;
}

/**
 * @brief                        Read current baud rate of transceiver RTL8211FS.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] BaudRatePtr        Pointer to the address to save the baud rate.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read baud rate failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                   MiiIdx,
                                   ETHTRCV_RTL8211FS_PAGE_SELECT,
                                   ETHTRCV_RTL8211FS_SPECIFIC_PAGE);

    if (RetStatus == E_OK)
    {
        RetStatus =
            MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL8211FS_SPECIFIC_STATUS, &RegVal);

        if (RetStatus == E_OK)
        {
            RegVal &= ETHTRCV_RTL8211FS_LINK_SPEED_MASK;

            if (RegVal == ETHTRCV_RTL8211FS_LINK_SPEED_1000M)
            {
                *BaudRatePtr = ETHTRCV_BAUD_RATE_1000MBIT;
            }
            else if (RegVal == ETHTRCV_RTL8211FS_LINK_SPEED_100M)
            {
                *BaudRatePtr = ETHTRCV_BAUD_RATE_100MBIT;
            }
            else if (RegVal == ETHTRCV_RTL8211FS_LINK_SPEED_10M)
            {
                *BaudRatePtr = ETHTRCV_BAUD_RATE_10MBIT;
            }
            else
            {
                /* Reserved */
                RetStatus = E_NOT_OK;
            }
        }
    }
    return RetStatus;
}

/**
 * @brief                        Read current baud rate of transceiver YT8512H.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] BaudRatePtr        Pointer to the address to save the baud rate.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read baud rate failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8512H_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    *BaudRatePtr = ETHTRCV_BAUD_RATE_10MBIT;
    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8512H_SPECIFIC_STATUS, &RegVal);
    if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_YT8512H_SPECIFIC_RESOLVED_MASK) != 0U) &&
        ((RegVal & ETHTRCV_YT8512H_SPECIFIC_LINK_MASK) != 0U))
    {
        if ((RegVal & ETHTRCV_YT8512H_SPECIFIC_SPEED_MASK) == ETHTRCV_YT8512H_LINK_SPEED_100M)
        {
            *BaudRatePtr = ETHTRCV_BAUD_RATE_100MBIT;
        }
    }
    return RetStatus;
}

/**
 * @brief                        Read current baud rate of transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] BaudRatePtr        Pointer to the address to save the baud rate.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read baud rate failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr)
{
    Std_ReturnType RetStatus = E_OK;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_UTP_BASIC_CONTROL, &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal &= ETHTRCV_UTP_BCR_SPEED_MASK;

        if (RegVal == ETHTRCV_UTP_BCR_SPEED_1000M)
        {
            *BaudRatePtr = ETHTRCV_BAUD_RATE_1000MBIT;
        }
        else if (RegVal == ETHTRCV_UTP_BCR_SPEED_100M)
        {
            *BaudRatePtr = ETHTRCV_BAUD_RATE_100MBIT;
        }
        else if (RegVal == ETHTRCV_RTL8211FS_LINK_SPEED_10M)
        {
            *BaudRatePtr = ETHTRCV_BAUD_RATE_10MBIT;
        }
        else
        {
            /* Reserved */
            RetStatus = E_NOT_OK;
        }
    }
    return RetStatus;
}

/**
 * @brief                        Read current baud rate of transceiver JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] BaudRatePtr        Pointer to the address to save the baud rate.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read baud rate failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_ReadBaudRate(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_BaudRateType    *BaudRatePtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;
    uint16         RegVal;

    if (MiiIfPtr->ReadMmd != NULL_PTR)
    {
        RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                      MiiIdx,
                                      ETHTRCV_JL311X_MMD_PMA_PMD,
                                      ETHTRCV_JL311X_BASIC_CONTROL,
                                      &RegVal);

        if (RetStatus == E_OK)
        {
            RegVal &= ETHTRCV_JL311X_FORCE_SPEED_MASK;

            if (RegVal == ETHTRCV_JL311X_FORCE_SPEED_1000M)
            {
                *BaudRatePtr = ETHTRCV_BAUD_RATE_1000MBIT;
            }
            else if (RegVal == ETHTRCV_JL311X_FORCE_SPEED_100M)
            {
                *BaudRatePtr = ETHTRCV_BAUD_RATE_100MBIT;
            }
            else
            {
                /* Reserved */
                RetStatus = E_NOT_OK;
            }
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_BAUD_RATE_API */

#if (STD_ON == ETHTRCV_GET_DUPLEX_MODE_API)
/**
 * @brief                        Read current duplex mode  of transceiver YT8531SH.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DuplexModePtr      Pointer to the address to save the duplex mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read duplex mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus =
        MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8531SH_SPECIFIC_STATUS, &RegVal);
    if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_YT8531SH_SPECIFIC_RESOLVED_MASK) != 0U) &&
        ((RegVal & ETHTRCV_YT8531SH_SPECIFIC_DUPLEX_MASK) != 0U))
    {
        *DuplexModePtr = ETHTRCV_DUPLEX_MODE_FULL;
    }
    else
    {
        *DuplexModePtr = ETHTRCV_DUPLEX_MODE_HALF;
    }
    return RetStatus;
}

/**
 * @brief                        Read current duplex mode  of transceiver RTL8211FS.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DuplexModePtr      Pointer to the address to save the duplex mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read duplex mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr)
{
    Std_ReturnType RetStatus = E_OK;
    uint16         RegVal;

    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                   MiiIdx,
                                   ETHTRCV_RTL8211FS_PAGE_SELECT,
                                   ETHTRCV_RTL8211FS_SPECIFIC_PAGE);

    if (RetStatus == E_OK)
    {
        RetStatus =
            MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_RTL8211FS_SPECIFIC_STATUS, &RegVal);
        if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_RTL8211FS_DUPLEX_MASK) != 0U))
        {
            *DuplexModePtr = ETHTRCV_DUPLEX_MODE_FULL;
        }
        else
        {
            *DuplexModePtr = ETHTRCV_DUPLEX_MODE_HALF;
        }
    }

    return RetStatus;
}

/**
 * @brief                        Read current duplex mode of transceiver YT8512H.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[out] DuplexModePtr     Pointer to the address to save the duplex mode.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read baud rate failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8512H_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    *DuplexModePtr = ETHTRCV_DUPLEX_MODE_HALF;
    RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx, MiiIdx, ETHTRCV_YT8512H_SPECIFIC_STATUS, &RegVal);
    if ((RetStatus == E_OK) && ((RegVal & ETHTRCV_YT8512H_SPECIFIC_RESOLVED_MASK) != 0U) &&
        ((RegVal & ETHTRCV_YT8512H_SPECIFIC_LINK_MASK) != 0U))
    {
        if ((RegVal & ETHTRCV_YT8512H_SPECIFIC_DUPLEX_MASK) != 0u)
        {
            *DuplexModePtr = ETHTRCV_DUPLEX_MODE_FULL;
        }
    }
    return RetStatus;
}

/**
 * @brief                        Read current duplex mode  of transceiver RTL9010AA.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DuplexModePtr      Pointer to the address to save the duplex mode .
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read duplex mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr)
{
    /* Only full duplex supported. */
    *DuplexModePtr = ETHTRCV_DUPLEX_MODE_FULL;
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)MiiIfPtr;
    (void)MiiIdx;
    /* PRQA S 3119 -- */
    return E_OK;
}

/**
 * @brief                        Read current duplex mode  of transceiver JL311X.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DuplexModePtr      Pointer to the address to save the duplex mode .
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Read duplex mode failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_ReadDuplexMode(
    const EthTrcv_MiiIfType *MiiIfPtr,
    uint8                    MiiIdx,
    EthTrcv_DuplexModeType  *DuplexModePtr)
{
    /* Only full duplex supported. */
    *DuplexModePtr = ETHTRCV_DUPLEX_MODE_FULL;
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)MiiIfPtr;
    (void)MiiIdx;
    /* PRQA S 3119 -- */
    return E_OK;
}
#endif /* STD_ON == ETHTRCV_GET_DUPLEX_MODE_API */

/**
 * @brief                        Configuration of bridged RTL9010AA through Sgmii.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Configure failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL9010AA_SgmiiPhyConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus = E_OK;

    /* Software reset */
    RetStatus = EthTrcv_General_SoftwareReset(MiiIfPtr, MiiIfPtr->ExtraMiiIdx);
    if (RetStatus == E_OK)
    {
        /* Wait until the PHY is out of reset */
        if (RetStatus == E_OK)
        {
            RetStatus = EthTrcv_General_CheckResetComplete(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, 3000U);
            /* Set force mode */
            if (RetStatus == E_OK)
            {
                RetStatus = EthTrcv_General_ForceLinkup(MiiIfPtr,
                                                        MiiIfPtr->ExtraMiiIdx,
                                                        Duplex,
                                                        Speed,
                                                        ETHTRCV_CONN_NEG_NONE);
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Configuration of bridged JL311X through Sgmii.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Configure failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SgmiiPhyConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus = E_NOT_OK;
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)Duplex;
    /* PRQA S 3119 -- */

    if ((MiiIfPtr->ReadMmd != NULL_PTR) && (MiiIfPtr->WriteMmd != NULL_PTR))
    {
        /* Software reset */
        RetStatus = EthTrcv_JL311X_SoftwareReset(MiiIfPtr, MiiIfPtr->ExtraMiiIdx);
        if (RetStatus == E_OK)
        {
            /* Wait until the PHY is out of reset */
            RetStatus = EthTrcv_JL311X_CheckResetComplete(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, 3000U);

            /* Set force mode */
            if (RetStatus == E_OK)
            {
                RetStatus = EthTrcv_JL311X_ForceLinkup(MiiIfPtr,
                                                       MiiIfPtr->ExtraMiiIdx,
                                                       Duplex,
                                                       Speed,
                                                       ETHTRCV_CONN_NEG_NONE);
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Configuration of general bridged transceiver on Sgmii phy side.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Configure failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_General_SgmiiPhyConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    /* Software reset */
    RetStatus = EthTrcv_General_SoftwareReset(MiiIfPtr, MiiIfPtr->ExtraMiiIdx);
    /* Wait until the PHY is out of reset */
    if (RetStatus == E_OK)
    {
        RetStatus = EthTrcv_General_CheckResetComplete(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, 3000U);
        if (RetStatus == E_OK)
        {
            /* Start auto negotiation */
            RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->ExtraMiiIdx,
                                          ETHTRCV_UTP_BASIC_CONTROL,
                                          &RegVal);
            if (RetStatus == E_OK)
            {
                RegVal |= ETHTRCV_UTP_BCR_AUTONEG_ENABLE | ETHTRCV_UTP_BCR_AUTONEG_RESTART;
                RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                               MiiIfPtr->ExtraMiiIdx,
                                               ETHTRCV_UTP_BASIC_CONTROL,
                                               RegVal);
            }
        }
    }
    (void)Speed;
    (void)Duplex;

    return RetStatus;
}

/**
 * @brief                        Configuration of RTL8211FS in RGMII to SGMII bridged mode.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Configure failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_SgmiiMacConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus = E_OK;
    uint16         RegVal;

    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                   MiiIfPtr->MiiIdx,
                                   ETHTRCV_RTL8211FS_PAGE_SELECT,
                                   ETHTRCV_RTL8211FS_SGMII_ANAR_PAGE);

    if (RetStatus == E_OK)
    {
        RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                      MiiIfPtr->MiiIdx,
                                      ETHTRCV_RTL8211FS_SGMII_ANAR_REG,
                                      &RegVal);
        if (RetStatus == E_OK)
        {
            RegVal = (uint16)(((uint32)RegVal & (~(ETHTRCV_RTL8211FS_SGMII_DUPLEX_MASK |
                                                   ETHTRCV_RTL8211FS_SGMII_SPEED_MASK))) |
                              (ETHTRCV_RTL8211FS_SGMII_LINK_MASK |
                               ((Duplex != ETHTRCV_DUPLEX_MODE_HALF) ?
                                    ETHTRCV_RTL8211FS_SGMII_DUPLEX_MASK :
                                    0U)));

            if (Speed == ETHTRCV_BAUD_RATE_1000MBIT)
            {
                RegVal |= ETHTRCV_RTL8211FS_SGMII_SPEED_1000M_MASK;
            }
            else if (Speed == ETHTRCV_BAUD_RATE_100MBIT)
            {
                RegVal |= ETHTRCV_RTL8211FS_SGMII_SPEED_100M_MASK;
            }
            else
            {
                /* Default 10Mbps */
            }

            RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                           MiiIfPtr->MiiIdx,
                                           ETHTRCV_RTL8211FS_SGMII_ANAR_REG,
                                           RegVal);
        }
    }
    return RetStatus;
}

/**
 * @brief                        Configuration of YT8531SH in RGMII to SGMII bridged mode.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Configure failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_SgmiiMacConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus = E_OK;
    uint16         RegVal;
    uint16         mode;

    RegVal    = 0U;
    RetStatus = EthTrcv_YT8531SH_ReadExtRegister(MiiIfPtr,
                                                 MiiIfPtr->MiiIdx,
                                                 ETHTRCV_YT8531SH_MODE_SELECT_REG,
                                                 &RegVal);
    if (RetStatus == E_OK)
    {
        mode = RegVal & ETHTRCV_YT8531SH_MODE_SELECT_MASK;
        if (mode != ETHTRCV_YT8531SH_MODE_SGMAC_TO_RGPHY)
        {
            RetStatus = EthTrcv_YT8531SH_WriteExtRegister(MiiIfPtr,
                                                          MiiIfPtr->MiiIdx,
                                                          ETHTRCV_YT8531SH_MODE_SELECT_REG,
                                                          ETHTRCV_YT8531SH_MODE_SGMAC_TO_RGPHY);
        }

        if (RetStatus == E_OK)
        {
            RetStatus = EthTrcv_YT8531SH_WriteExtRegister(MiiIfPtr,
                                                          MiiIfPtr->MiiIdx,
                                                          ETHTRCV_YT8531SH_SPACE_SELECT_REG,
                                                          ETHTRCV_YT8531SH_SPACE_SELECT_SDS);

            if (RetStatus == E_OK)
            {
                RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                              MiiIfPtr->MiiIdx,
                                              ETHTRCV_YT8531SH_SDS_BASIC_CONTROL,
                                              &RegVal);
                if (RetStatus == E_OK)
                {
                    RegVal |= ETHTRCV_YT8531SH_SDS_RESET_MASK |
                              ETHTRCV_YT8531SH_SDS_AUTO_NEGOTIATION_MASK |
                              ETHTRCV_YT8531SH_SDS_AN_RESTART_MASK;

                    RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                                   MiiIfPtr->MiiIdx,
                                                   ETHTRCV_YT8531SH_SDS_BASIC_CONTROL,
                                                   RegVal);

                    (void)EthTrcv_YT8531SH_WriteExtRegister(MiiIfPtr,
                                                            MiiIfPtr->MiiIdx,
                                                            ETHTRCV_YT8531SH_SPACE_SELECT_REG,
                                                            ETHTRCV_YT8531SH_SPACE_SELECT_UTP);
                }
            }
        }
    }
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)Speed;
    (void)Duplex;
    /* PRQA S 3119 -- */
    return RetStatus;
}

/**
 * @brief                        Configuration of RTL8211FS in RGMII to SGMII bridged mode.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Configure failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_SgmiiMacConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                  MiiIfPtr->MiiIdx,
                                  ETHTRCV_JL311X_MMD_PCS,
                                  ETHTRCV_JL311X_COMM_UCFG0,
                                  &RegVal);
    if (RetStatus == E_OK)
    {
        RegVal    = (uint16)(((uint32)RegVal & (~ETHTRCV_JL311X_COMM_UCFG0_MODE_MASK)) |
                          ETHTRCV_JL311X_COMM_UCFG0_MODE_RGMII_SGMII_MAC);
        RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                       MiiIfPtr->MiiIdx,
                                       ETHTRCV_JL311X_MMD_PCS,
                                       ETHTRCV_JL311X_COMM_UCFG0,
                                       RegVal);

        /* do not check AN status when PHY mode (force link with fiber) turns off by default */
        if (RetStatus == E_OK)
        {
            RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_JL311X_MMD_PCS,
                                          ETHTRCV_JL311X_SGMII_UCFG,
                                          &RegVal);
            if (RetStatus == E_OK)
            {
                RegVal |= ETHTRCV_JL311X_SGMII_UCFG_NOCHECK_AN;
                RetStatus = MiiIfPtr->WriteMmd(MiiIfPtr->CtrlIdx,
                                               MiiIfPtr->MiiIdx,
                                               ETHTRCV_JL311X_MMD_PCS,
                                               ETHTRCV_JL311X_SGMII_UCFG,
                                               RegVal);
            }
        }
    }
    (void)Speed;
    (void)Duplex;

    return RetStatus;
}

/**
 * @brief                        Hardware bridge configuration of RTL8211FS bridged RTL9010AA
 * through SGMII.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_RTL9010AA_BridgeConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
    RetStatus = EthTrcv_RTL8211FS_SgmiiMacConfig(MiiIfPtr, Speed, Duplex);
    if (RetStatus == E_OK)
    {
        ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
        RetStatus = EthTrcv_RTL9010AA_SgmiiPhyConfig(MiiIfPtr, Speed, Duplex);
    }

    return RetStatus;
}

/**
 * @brief                        Hardware bridge configuration of RTL8211FS bridged JL311X through
 * SGMII.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_RTL8211FS_JL311X_BridgeConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
    RetStatus = EthTrcv_RTL8211FS_SgmiiMacConfig(MiiIfPtr, Speed, Duplex);

    if (RetStatus == E_OK)
    {
        ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
        RetStatus = EthTrcv_JL311X_SgmiiPhyConfig(MiiIfPtr, Speed, Duplex);
    }

    return RetStatus;
}

/**
 * @brief                        Hardware bridge configuration of YT8531SH bridged JL311X through SGMII.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_YT8531SH_JL311X_BridgeConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
    RetStatus = EthTrcv_YT8531SH_SgmiiMacConfig(MiiIfPtr, Speed, Duplex);

    if (RetStatus == E_OK)
    {
        ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
        RetStatus = EthTrcv_JL311X_SgmiiPhyConfig(MiiIfPtr, Speed, Duplex);
    }

    return RetStatus;
}

/**
 * @brief                        Hardware bridge configuration of JL311X bridged general phy through
 * SGMII.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Speed to configure.
 * @param[in] Duplex             Duplex mode to configure.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION static Std_ReturnType EthTrcv_JL311X_General_BridgeConfig(
    const EthTrcv_MiiIfType *MiiIfPtr,
    EthTrcv_BaudRateType     Speed,
    EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus;

    ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
    RetStatus = EthTrcv_JL311X_SgmiiMacConfig(MiiIfPtr, Speed, Duplex);
    if (RetStatus == E_OK)
    {
        RetStatus = EthTrcv_JL311X_ForceLinkup(MiiIfPtr,
                                               MiiIfPtr->MiiIdx,
                                               Duplex,
                                               Speed,
                                               ETHTRCV_CONN_NEG_NONE);

        if (RetStatus == E_OK)
        {
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_SgmiiPhyConfig(MiiIfPtr, Speed, Duplex);
        }
    }

    return RetStatus;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

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
                                                          uint16                  *RegValPtr)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_JL311X_MMD_PMA_PMD,
                                          ETHTRCV_UTP_IDENTIFIER1,
                                          RegValPtr);
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_UTP_IDENTIFIER1,
                                          RegValPtr);
            break;
    }
    return RetStatus;
}

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
                                                          uint16                  *RegValPtr)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_JL311X_MMD_PMA_PMD,
                                          ETHTRCV_UTP_IDENTIFIER2,
                                          RegValPtr);
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_UTP_IDENTIFIER2,
                                          RegValPtr);
            break;
    }
    return RetStatus;
}
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
                                                         const EthTrcv_MiiIfType *MiiIfPtr)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_SoftwareReset(MiiIfPtr, MiiIfPtr->MiiIdx);
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_SoftwareReset(MiiIfPtr, MiiIfPtr->MiiIdx);
            break;
    }

    return RetStatus;
}

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
                                                                  uint32                   TryTimes)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_CheckResetComplete(MiiIfPtr, MiiIfPtr->MiiIdx, TryTimes);
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_CheckResetComplete(MiiIfPtr, MiiIfPtr->MiiIdx, TryTimes);
            break;
    }

    return RetStatus;
}

/**
 * @brief                        Set RGMII TX clock delay.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] DelayValue       TX clock delay value.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Request failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetRgmiiTxDelay(EthTrcv_DerivateType     Derivate,
                                                               const EthTrcv_MiiIfType *MiiIfPtr,
                                                               uint8                    DelayValue)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_YT8531SH:
        case ETHTRCV_YT8531SH_JL311X:
            RetStatus = EthTrcv_YT8531SH_SetRgmiiTxDelay(MiiIfPtr, DelayValue);
            break;
        case ETHTRCV_RTL8211FS:
        case ETHTRCV_RTL8211FS_RTL9010AA:
        case ETHTRCV_RTL8211FS_JL311X:
            RetStatus = EthTrcv_RTL8211FS_SetRgmiiTxDelay(MiiIfPtr, DelayValue);
            break;
        case ETHTRCV_JL311X:
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            RetStatus = EthTrcv_JL311X_SetRgmiiTxDelay(MiiIfPtr, DelayValue);
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}

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
                                                               uint8                    DelayValue)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_YT8531SH:
        case ETHTRCV_YT8531SH_JL311X:
            RetStatus = EthTrcv_YT8531SH_SetRgmiiRxDelay(MiiIfPtr, DelayValue);
            break;
        case ETHTRCV_RTL8211FS:
        case ETHTRCV_RTL8211FS_RTL9010AA:
        case ETHTRCV_RTL8211FS_JL311X:
            RetStatus = EthTrcv_RTL8211FS_SetRgmiiRxDelay(MiiIfPtr, DelayValue);
            break;
        case ETHTRCV_JL311X:
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            RetStatus = EthTrcv_JL311X_SetRgmiiRxDelay(MiiIfPtr, DelayValue);
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}

/**
 * @brief                        Hardware specific configuration.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] Speed              Baud Rate from configuration.
 * @param[in] Duplex             Duplex mode from configuration.
 * @return                       E_OK: success.
 *                               E_NOT_OK: failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SpecificConfig(EthTrcv_DerivateType     Derivate,
                                                              const EthTrcv_MiiIfType *MiiIfPtr,
                                                              EthTrcv_BaudRateType     Speed,
                                                              EthTrcv_DuplexModeType   Duplex)
{
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)Derivate;
    (void)MiiIfPtr;
    (void)Speed;
    (void)Duplex;
    /* PRQA S 3119 -- */
    return E_OK;
}

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
                                                            EthTrcv_DuplexModeType   Duplex)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_RTL8211FS_RTL9010AA:
            RetStatus = EthTrcv_RTL8211FS_RTL9010AA_BridgeConfig(MiiIfPtr, Speed, Duplex);
            break;
        case ETHTRCV_RTL8211FS_JL311X:
            RetStatus = EthTrcv_RTL8211FS_JL311X_BridgeConfig(MiiIfPtr, Speed, Duplex);
            break;
        case ETHTRCV_YT8531SH_JL311X:
            RetStatus = EthTrcv_YT8531SH_JL311X_BridgeConfig(MiiIfPtr, Speed, Duplex);
            break;
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            RetStatus = EthTrcv_JL311X_General_BridgeConfig(MiiIfPtr, Speed, Duplex);
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }
    return RetStatus;
}

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
                                                              EthTrcv_ClkOutPutType    ClkOutMode)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8531SH_SetClockOutput(MiiIfPtr, MiiIfPtr->MiiIdx, ClkOutMode);
            break;
        case ETHTRCV_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_RTL8211FS_SetClockOutput(MiiIfPtr, MiiIfPtr->MiiIdx, ClkOutMode);
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_RTL8211FS_SetClockOutput(MiiIfPtr, MiiIfPtr->MiiIdx, ClkOutMode);
            break;
        case ETHTRCV_RTL8211FS_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_RTL8211FS_SetClockOutput(MiiIfPtr, MiiIfPtr->MiiIdx, ClkOutMode);
            break;
        case ETHTRCV_YT8531SH_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8531SH_SetClockOutput(MiiIfPtr, MiiIfPtr->MiiIdx, ClkOutMode);
            break;
        case ETHTRCV_JL311X_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8531SH_SetClockOutput(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, ClkOutMode);
            break;
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_RTL8211FS_SetClockOutput(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, ClkOutMode);
            break;
        default:
            RetStatus = E_OK;
            break;
    }

    return RetStatus;
}

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
                                                                    boolean EnableAutoNeg)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_YT8010A:
            RetStatus = (EnableAutoNeg == FALSE) ? E_OK : E_NOT_OK;
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_UTP_BASIC_CONTROL,
                                          &RegVal);
            if (RetStatus == E_OK)
            {
                if ((boolean)TRUE == EnableAutoNeg)
                {
                    RegVal |= ETHTRCV_UTP_BCR_AUTONEG_ENABLE | ETHTRCV_UTP_BCR_AUTONEG_RESTART;
                }
                else
                {
                    RegVal = (uint16)((uint32)RegVal & (~(ETHTRCV_UTP_BCR_AUTONEG_ENABLE |
                                                          ETHTRCV_UTP_BCR_AUTONEG_RESTART)));
                }
                RetStatus = MiiIfPtr->WriteMii(MiiIfPtr->CtrlIdx,
                                               MiiIfPtr->MiiIdx,
                                               ETHTRCV_UTP_BASIC_CONTROL,
                                               RegVal);
            }
            break;
    }

    return RetStatus;
}

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
    boolean                 *CompleteStatusPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;
    uint16         RegVal;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_YT8010A:
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = MiiIfPtr->ReadMii(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_UTP_BASIC_STATUS,
                                          &RegVal);
            if (RetStatus == E_OK)
            {
                *CompleteStatusPtr = ((RegVal & ETHTRCV_UTP_BSR_AUTONEG_COMPLETE) != 0U) ?
                                         (boolean)TRUE :
                                         (boolean)FALSE;
            }
            break;
    }

    return RetStatus;
}

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
    EthTrcv_BaudRateType     MaxSpeed)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus =
                EthTrcv_YT8531SH_SetAutoNegtiationAbility(MiiIfPtr, MiiIfPtr->MiiIdx, MaxSpeed);
            break;
        case ETHTRCV_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus =
                EthTrcv_RTL8211FS_SetAutoNegtiationAbility(MiiIfPtr, MiiIfPtr->MiiIdx, MaxSpeed);
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus =
                EthTrcv_RTL8211FS_SetAutoNegtiationAbility(MiiIfPtr, MiiIfPtr->MiiIdx, MaxSpeed);
            break;
        case ETHTRCV_RTL8211FS_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus =
                EthTrcv_RTL8211FS_SetAutoNegtiationAbility(MiiIfPtr, MiiIfPtr->MiiIdx, MaxSpeed);
            break;
        case ETHTRCV_YT8531SH_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus =
                EthTrcv_YT8531SH_SetAutoNegtiationAbility(MiiIfPtr, MiiIfPtr->MiiIdx, MaxSpeed);
            break;
        case ETHTRCV_JL311X:
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            RetStatus = E_OK;
            break;
        case ETHTRCV_YT8512H:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8512H_SetAutoNegtiationAbility(MiiIfPtr, MiiIfPtr->MiiIdx, MaxSpeed);
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}

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
                                                         EthTrcv_ConnNegType      ConnNeg)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus =
                EthTrcv_JL311X_ForceLinkup(MiiIfPtr, MiiIfPtr->MiiIdx, DuplexMode, SpeedMode, ConnNeg);
            break;
        case ETHTRCV_YT8512H:
            RetStatus = E_NOT_OK;
            break;
        case ETHTRCV_YT8010A:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus =
                EthTrcv_YT8010A_ForceLinkup(MiiIfPtr, MiiIfPtr->MiiIdx, DuplexMode, SpeedMode, ConnNeg);
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus =
                EthTrcv_General_ForceLinkup(MiiIfPtr, MiiIfPtr->MiiIdx, DuplexMode, SpeedMode, ConnNeg);
            break;
    }

    return RetStatus;
}

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
                                                             EthTrcv_LinkStateType   *LinkStatePtr)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8531SH_ReadLinkState(MiiIfPtr, MiiIfPtr->MiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_ReadLinkState(MiiIfPtr, MiiIfPtr->MiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_RTL9010AA_ReadLinkState(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_RTL8211FS_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadLinkState(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_YT8531SH_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadLinkState(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadLinkState(MiiIfPtr, MiiIfPtr->MiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_JL311X_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8531SH_ReadLinkState(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_ReadLinkState(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_YT8512H:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8512H_ReadLinkState(MiiIfPtr, MiiIfPtr->MiiIdx, LinkStatePtr);
            break;
        case ETHTRCV_YT8010A:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_General_ReadLinkState(MiiIfPtr, MiiIfPtr->MiiIdx, LinkStatePtr);
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}
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
                                                            EthTrcv_BaudRateType    *BaudRatePtr)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8531SH_ReadBaudRate(MiiIfPtr, MiiIfPtr->MiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_RTL8211FS_ReadBaudRate(MiiIfPtr, MiiIfPtr->MiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_RTL9010AA_ReadBaudRate(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_RTL8211FS_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadBaudRate(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_YT8531SH_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadBaudRate(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadBaudRate(MiiIfPtr, MiiIfPtr->MiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_JL311X_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8531SH_ReadBaudRate(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_RTL8211FS_ReadBaudRate(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_YT8512H:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8512H_ReadBaudRate(MiiIfPtr, MiiIfPtr->MiiIdx, BaudRatePtr);
            break;
        case ETHTRCV_YT8010A:
            *BaudRatePtr = ETHTRCV_BAUD_RATE_100MBIT;
            RetStatus    = E_OK;
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}
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
                                                              EthTrcv_DuplexModeType *DuplexModePtr)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8531SH_ReadDuplexMode(MiiIfPtr, MiiIfPtr->MiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_RTL8211FS_ReadDuplexMode(MiiIfPtr, MiiIfPtr->MiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus =
                EthTrcv_RTL9010AA_ReadDuplexMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_RTL8211FS_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadDuplexMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_YT8531SH_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadDuplexMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_ReadDuplexMode(MiiIfPtr, MiiIfPtr->MiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_JL311X_YT8531SH:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus =
                EthTrcv_YT8531SH_ReadDuplexMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus =
                EthTrcv_RTL8211FS_ReadDuplexMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_YT8512H:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_YT8512H_ReadDuplexMode(MiiIfPtr, MiiIfPtr->MiiIdx, DuplexModePtr);
            break;
        case ETHTRCV_YT8010A:
            *DuplexModePtr = ETHTRCV_DUPLEX_MODE_FULL;
            RetStatus      = E_OK;
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}
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
                                                                  Eth_ModeType *TrcvModePtr)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_GetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, TrcvModePtr);
            break;
        case ETHTRCV_YT8010A:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_General_GetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, TrcvModePtr);
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_GetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, TrcvModePtr);
            break;
    }

    return RetStatus;
}

/**
 * @brief                        Set transceiver mode up or down.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @param[in] PowerUp            TRUE: set power down, FALSE: set power up.
 * @return                       E_OK: Success.
 *                               E_NOT_OK: Set transceiver down failed.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_SetTransceiverUpDown(EthTrcv_DerivateType Derivate,
                                                                    const EthTrcv_MiiIfType *MiiIfPtr,
                                                                    boolean PowerUp)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_SetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, PowerUp);
            break;
        case ETHTRCV_JL311X_YT8531SH:
        case ETHTRCV_JL311X_RTL8211FS:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_SetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, PowerUp);
            if (RetStatus == E_OK)
            {
                ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
                RetStatus = EthTrcv_General_SetPowerUpDown(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, PowerUp);
            }
            break;
        case ETHTRCV_YT8531SH_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_SetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, PowerUp);
            if (RetStatus == E_OK)
            {
                ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
                RetStatus = EthTrcv_JL311X_SetPowerUpDown(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, PowerUp);
            }
            break;
        case ETHTRCV_RTL8211FS_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_SetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, PowerUp);
            if (RetStatus == E_OK)
            {
                ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
                RetStatus = EthTrcv_JL311X_SetPowerUpDown(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, PowerUp);
            }
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_SetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, PowerUp);
            if (RetStatus == E_OK)
            {
                ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
                RetStatus = EthTrcv_General_SetPowerUpDown(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, PowerUp);
            }
            break;
        case ETHTRCV_YT8010A:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_General_SetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, PowerUp);
            break;
        default:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, FALSE);
            RetStatus = EthTrcv_General_SetPowerUpDown(MiiIfPtr, MiiIfPtr->MiiIdx, PowerUp);
            break;
    }

    return RetStatus;
}

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
                                                                 EthTrcv_PhyTestModeType Mode)
{
    uint32 TestModeMask;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_RTL8211FS_JL311X:
        case ETHTRCV_YT8531SH_JL311X:
            if (PhysLayer == ETHTRCV_PHYS_LAYER_TYPE_1000BASE_T1)
            {
                TestModeMask = ETHTRCV_JL311X_1000BASET1_TESTMODE_SUP;
            }
            else if (PhysLayer == ETHTRCV_PHYS_LAYER_TYPE_100BASE_T1)
            {
                TestModeMask = ETHTRCV_JL311X_100BASET1_TESTMODE_SUP;
            }
            else
            {
                TestModeMask = 0U;
            }
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            if (PhysLayer == ETHTRCV_PHYS_LAYER_TYPE_1000BASE_T1)
            {
                TestModeMask = ETHTRCV_RTL9010AA_1000BASET1_TESTMODE_SUP;
            }
            else if (PhysLayer == ETHTRCV_PHYS_LAYER_TYPE_100BASE_T1)
            {
                TestModeMask = ETHTRCV_RTL9010AA_100BASET1_TESTMODE_SUP;
            }
            else
            {
                TestModeMask = 0U;
            }
            break;
        default:
            TestModeMask = 0U;
            break;
    }

    return ((TestModeMask & (1U << (uint32)Mode)) != 0U) ? E_OK : E_NOT_OK;
}

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
                                                           EthTrcv_PhyTestModeType  Mode)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
            RetStatus = EthTrcv_JL311X_SetTestMode(MiiIfPtr, MiiIfPtr->MiiIdx, PhysLayer, Mode);
            break;
        case ETHTRCV_RTL8211FS_JL311X:
        case ETHTRCV_YT8531SH_JL311X:
            RetStatus = EthTrcv_JL311X_SetTestMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, PhysLayer, Mode);
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            RetStatus =
                EthTrcv_RTL9010AA_SetTestMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, PhysLayer, Mode);
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}
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
                                                                     EthTrcv_PhyLoopbackModeType Mode)
{
    Std_ReturnType RetStatus;

    if ((uint32)Mode > (uint32)ETHTRCV_PHYLOOPBACK_REMOTE)
    {
        RetStatus = E_NOT_OK;
    }
    else if (ETHTRCV_PHYLOOPBACK_NONE == Mode)
    {
        RetStatus = E_OK;
    }
    else
    {
        switch (Derivate)
        {
            case ETHTRCV_JL311X:
            case ETHTRCV_RTL8211FS_JL311X:
            case ETHTRCV_YT8531SH_JL311X:
                RetStatus = E_OK;
                break;
            case ETHTRCV_RTL8211FS_RTL9010AA:
                RetStatus = E_OK;
                break;
            default:
                RetStatus = E_NOT_OK;
                break;
        }
    }

    return RetStatus;
}

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
                                                               EthTrcv_PhyLoopbackModeType Mode)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
            RetStatus =
                EthTrcv_JL311X_SetLoopbackMode(MiiIfPtr, MiiIfPtr->MiiIdx, (boolean)FALSE, Mode);
            break;
        case ETHTRCV_RTL8211FS_JL311X:
        case ETHTRCV_YT8531SH_JL311X:
            RetStatus =
                EthTrcv_JL311X_SetLoopbackMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, (boolean)TRUE, Mode);
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            RetStatus = EthTrcv_RTL9010AA_SetLoopbackMode(MiiIfPtr, MiiIfPtr->ExtraMiiIdx, Mode);
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}

/**
 * @brief                        Check the Signal Quality is supported by the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] MiiIfPtr           Pointer to the MII interface structure.
 * @return                       TRUE: Signal Quality is supported.
 *                               FALSE: Signal Quality not supported.
 *
 */
ETHTRCV_TEXT_SECTION boolean EthTrcv_Hw_SignalQualitySupported(EthTrcv_DerivateType Derivate)
{
    boolean RetVal;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
        case ETHTRCV_RTL8211FS_JL311X:
        case ETHTRCV_YT8531SH_JL311X:
        case ETHTRCV_RTL8211FS_RTL9010AA:
            RetVal = (boolean)TRUE;
            break;
        default:
            RetVal = (boolean)FALSE;
            break;
    }

    return RetVal;
}

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
                                                                uint32 *SignalQualityPtr)
{
    Std_ReturnType RetStatus;
    uint16         RegVal;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
            if (MiiIfPtr->MiiMux != NULL_PTR)
            {
                MiiIfPtr->MiiMux((boolean)TRUE);
            }
            RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->MiiIdx,
                                          ETHTRCV_JL311X_MMD_PMA_PMD,
                                          ETHTRCV_JL311X_SQI_REG,
                                          &RegVal);
            if (RetStatus == E_OK)
            {
                *SignalQualityPtr = ((uint32)RegVal & ETHTRCV_JL311X_SQI_MASK) >>
                                    ETHTRCV_JL311X_SQI_SHIFT;
            }
            break;
        case ETHTRCV_RTL8211FS_JL311X:
        case ETHTRCV_YT8531SH_JL311X:
            if (MiiIfPtr->MiiMux != NULL_PTR)
            {
                MiiIfPtr->MiiMux((boolean)TRUE);
            }
            RetStatus = MiiIfPtr->ReadMmd(MiiIfPtr->CtrlIdx,
                                          MiiIfPtr->ExtraMiiIdx,
                                          ETHTRCV_JL311X_MMD_PMA_PMD,
                                          ETHTRCV_JL311X_SQI_REG,
                                          &RegVal);
            if (RetStatus == E_OK)
            {
                *SignalQualityPtr = ((uint32)RegVal & ETHTRCV_JL311X_SQI_MASK) >>
                                    ETHTRCV_JL311X_SQI_SHIFT;
            }
            break;
        case ETHTRCV_RTL8211FS_RTL9010AA:
            if (MiiIfPtr->MiiMux != NULL_PTR)
            {
                MiiIfPtr->MiiMux((boolean)TRUE);
            }
            RetStatus = EthTrcv_RTL9010AA_ReadSpecialRegister(MiiIfPtr,
                                                              MiiIfPtr->ExtraMiiIdx,
                                                              ETHTRCV_RTL9010AA_SQI_REG,
                                                              &RegVal);
            if (RetStatus == E_OK)
            {
                *SignalQualityPtr = ((uint32)RegVal & ETHTRCV_RTL9010AA_SQI_MASK) >>
                                    ETHTRCV_RTL9010AA_SQI_SHIFT;
            }
            break;
        default:
            RetStatus = E_NOT_OK;
            break;
    }

    return RetStatus;
}

/**
 * @brief                        Check the TX mode is available on the transceiver.
 * @param[in] Derivate           Derivate type of the hardware configuration.
 * @param[in] Mode               TX mode.
 * @return                       E_OK: Test mode is available.
 *                               E_NOT_OK: Test mode is not available.
 *
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_Hw_TxModeAvailable(EthTrcv_DerivateType  Derivate,
                                                               EthTrcv_PhyTxModeType Mode)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    if ((uint32)Mode > (uint32)ETHTRCV_PHYTXMODE_SCRAMBLER_OFF)
    {
        RetStatus = E_NOT_OK;
    }
    else if (ETHTRCV_PHYTXMODE_NORMAL == Mode)
    {
        RetStatus = E_OK;
    }
    else
    {
        RetStatus = E_NOT_OK;
    }
    (void)Derivate;

    return RetStatus;
}

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
                                                            EthTrcv_PhyTxModeType    Mode)
{
    /* PHY TX not supported,return failed. */
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    (void)MiiIfPtr;
    (void)Mode;
    (void)Derivate;
    /* PRQA S 3119 -- */
    return E_NOT_OK;
}

/**
 * @brief                        Set MII interface.
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
                                                               uint32                   TryTimes)
{
    Std_ReturnType RetStatus;

    switch (Derivate)
    {
        case ETHTRCV_JL311X:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_JL311X_SetMiiMode(MiiIfPtr, PhyIf, TryTimes);
            break;
        case ETHTRCV_YT8010A:
            ETHTRCV_MII_MUX_SELECT(MiiIfPtr, TRUE);
            RetStatus = EthTrcv_YT8010A_SetMiiMode(MiiIfPtr, PhyIf, TryTimes);
            break;
        default:
            RetStatus = E_OK;
            break;
    }

    return RetStatus;
}

#define ETHTRCV_STOP_SEC_CODE
#include "EthTrcv_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
