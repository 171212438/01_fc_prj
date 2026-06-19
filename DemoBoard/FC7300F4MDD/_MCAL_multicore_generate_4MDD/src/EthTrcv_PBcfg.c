/**
*   @file    EthTrcv_PBcfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR EthTrcv - Post Build configuration EthTrcv source file.
*   @details Post Build configuration file for EthTrcv driver.
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
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of EthTrcv Driver
*   0.4.0       17/11/2023    QXW0085       N/A          Update version
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix
*   0.6.0       21/03/2024    QXW0085       N/A          Update version
==================================================================================================*/

/* PRQA S 2071,5087 EOF
   2071:This attribute syntax is a language extension.
   5087:Use of #include directive after code fragment.
   REASON: Variables and text need to be placed in the specified location.
*/

/* PRQA S 0777,0779 EOF
   0777:External identifier does not differ from other identifier(s) (e.g. '%1s') within the
    specified number of significant characters.
   0779:Identifier does not differ from other identifier(s) (e.g. '%1s') within the specified
    number of significant characters.
   REASON: These identifiers are automatically generated, and they are distinct.
*/

/* PRQA S 3408,1504 EOF
   3408:'%1s' has external linkage and is being defined without any previous declaration.
   1504:The object '%1s' is only referenced in the translation unit where it is defined.
   REASON: These variables are automatically generated global configurations of EthTrcv driver.
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthTrcv_Cfg.h"
#include "Eth.h"


/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/

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

#define ETHTRCV_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "EthTrcv_MemMap.h"

/* EthTrcv MII interface */
ETHTRCV_DATA_SECTION static const EthTrcv_MiiIfType EthTrcvConfig_0_MiiIfConfig =
{
    /* .WriteMii = */ Eth_WriteMii,
    /* .ReadMii = */ Eth_ReadMii,
    /* .WriteMmd = */ Eth_WriteMmd,
    /* .ReadMmd = */ Eth_ReadMmd,
    /* .CtrlIdx = */ 0U,
    /* .MiiIdx = */ 3U,
    /* .ExtraMiiIdx = */ 1U,
    /* .MiiMux = */ NULL_PTR
};

/* Eth transceivers configurations */
ETHTRCV_DATA_SECTION static const EthTrcv_TrcvCfgType EthTrcv_Transceivers_Configs[1U] =
{
    {
        /* .EcucPartition = */ 0U,
        /* .EthIfTrcvIdx = */ 0U,
        /* .ActAsSlavePassiveEnabled = */ (boolean)FALSE,
        /* .ForceSleepEnabled = */ (boolean)FALSE,
        /* .SoftRestOnInit = */ (boolean)TRUE,
        /* .SoftResetReadRepetitions = */ 3000U,
        /* .ConnNeg = */ ETHTRCV_CONN_NEG_AUTO,
        /* .DuplexMode = */ ETHTRCV_DUPLEX_MODE_FULL,
        /* .MacLayerSpeed = */ ETHTRCV_BAUD_RATE_100MBIT,
        /* .PhyIf = */ ETHTRCV_PHYIF_RMII,
        /* .PhysLayer = */ ETHTRCV_PHYS_LAYER_TYPE_100BASE_TX,
#if (STD_ON == ETHTRCV_ENABLE_PLCA)
        /* .PlcaLocalNodeId = */ 0U,
        /* .PlcaMaxBurstCount = */ 0U,
        /* .PlcaMaxBurstTimer = */ 0U,
        /* .PlcaNodeCount = */ 0U,
        /* .PlcaTransmitOpportunityTimer = */ 0U,
#endif  /* STD_ON == ETHTRCV_ENABLE_PLCA */
        /* .SleepRequestNumberOfRepetitions = */ 0U,
        /* .SleepRequestRepetitionPeriod = */ 0U,
        /* .SleepModeExecutionDelay = */ 0U,
        /* .TrcvSpeed = */ ETHTRCV_BAUD_RATE_100MBIT,
        /* .WakeupLocalEnabled = */ (boolean)FALSE,
        /* .WakeupRemoteEnabled = */ (boolean)FALSE,
        /* .WakeupForwardLocalEnabled = */ (boolean)FALSE,
        /* .WakeupForwardRemoteEnabled = */ (boolean)FALSE,
        /* .WakeupLocalDetectionTime = */ 0U,
        /* .WakeupLocalDurationTime = */ 0U,
        /* .WakeupSleepOnDatalineEnabled = */ (boolean)FALSE,
        /* .WakeupRequestNumberOfRepetitions = */ 0U,
        /* .WakeUpRequestRepetitionPeriod = */ 0U,
        /* .DerivateType = */ ETHTRCV_YT8512H,
        /* .RgmiiTxDelayEnabled = */ (boolean)TRUE,
        /* .RgmiiTxDelayValue = */ 180U,
        /* .RgmiiRxDelayEnabled = */ (boolean)FALSE,
        /* .RgmiiRxDelayValue = */ 0U,
        /* .ClkOutPut = */ ETHTRCV_CLK_OUTPUT_DISABLE,
        /* .WaitLinkupRepetitions = */ 1000U,
        /* .MiiIfPtr = */ &EthTrcvConfig_0_MiiIfConfig,
        /* .SwtIfPrt = */ NULL_PTR,

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
        /* .WakeupCallout = */ NULL_PTR,
        /* .IcuChannel = */ 0,
#endif  /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

#if (STD_ON == ETHTRCV_DEM_EVENT_DETECT)
        {
            /* .state = */ STD_OFF,
            /* .id = */ 0
        },
#endif  /* STD_ON == ETHTRCV_DEM_EVENT_DETECT */
    }
};

/* EthTrcv Configuration */
ETHTRCV_DATA_SECTION const EthTrcv_ConfigType EthTrcv_Config =
{
    /* .NumTransceivers = */ 1U,
    /* .TrcvCfgPtr = */ EthTrcv_Transceivers_Configs
};

#define ETHTRCV_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "EthTrcv_MemMap.h"
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
