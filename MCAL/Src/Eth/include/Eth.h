/**
*   @file    Eth.h
*   @implements      Eth.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR ETH - driver API and definition header file.
*   @details This file contains the implementation of ethernet driver API and definition.
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

#ifndef ETH_H
#define ETH_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth_Version.h"
#include "Std_Types.h"
#include "Eth_Types.h"        /* [SWDESG_ETH_180] */
#include "Eth_GeneralTypes.h" /* Mandatory include - see the SWS */
#include "Eth_Cfg.h"          /* Mandatory include - see the SWS */

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#define ETH_START_SEC_CODE
#include "Eth_MemMap.h"

/**
 * @brief    Services defined in AUROSAR EthernetDriver module.
 */

/**
 * @brief                        Initializes the Ethernet Driver.
 * @details                      This function is AUTOSAR standard API which is used to initialize
 *                               ethernet controller.
 *                               [SWS_Eth_00027][SWDESG_ETH_001]void Eth_Init(const Eth_ConfigType
 *                                              *CfgPtr)
 *                               [SWS_Eth_00031]The API has to be called during initialization.
 *
 * @param[in] CfgPtr             Points to the implementation specific structure.
 *
 */
ETH_TEXT_SECTION void Eth_Init(const Eth_ConfigType *CfgPtr);

/**
 * @brief                        Enables / Disables Rx/Tx communication of the indexed controller.
 * @details                      This function is AUTOSAR standard API which is used to enable or
 *                               disable Rx/Tx communication of the indexed ethernet controller.
 *                               [SWS_Eth_91009][SWDESG_ETH_005]Std_ReturnType Eth_SetControllerMode
 *                                              (uint8 CtrlIdx, Eth_ModeType CtrlMode)
 *                               [SWS_Eth_00045]The function requires previous controller
 *                                              initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] CtrlMode           ETH_MODE_DOWN: Disable Rx/Tx communication of the Eth controller.
 *                               ETH_MODE_ACTIVE: Enable Rx/Tx communication of the Eth controller.
 * @return                       E_OK: success.
 *                               E_NOT_OK: controller mode could not be changed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_SetControllerMode(uint8 CtrlIdx, Eth_ModeType CtrlMode);

/**
 * @brief                        Obtains the communication state of the indexed controller.
 * @details                      This function is AUTOSAR standard API which is used to get the
 *                               communication state of the indexed ethernet controller.
 *                               [SWS_Eth_91010][SWDESG_ETH_008]Std_ReturnType Eth_GetControllerMode
 *                                              (uint8 CtrlIdx, Eth_ModeType *CtrlModePtr)
 *                               [SWS_Eth_00051]The function requires previous controller
 *                                              initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[out] CtrlModePtr       ETH_MODE_DOWN:   The Rx/Tx communication of the Ethernet controller
 *                                                is disabled.
 *                               ETH_MODE_ACTIVE: The Rx/Tx communication of the Ethernet controller
 *                                                is enabled.
 * @return                       E_OK: success.
 *                               E_NOT_OK: controller mode could not be obtained.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetControllerMode(uint8 CtrlIdx, Eth_ModeType *CtrlModePtr);

/**
 * @brief                        Obtains the physical source address used by the indexed controller.
 * @details                      This function is AUTOSAR standard API which is used to get the
 *                               MAC address of the indexed ethernet controller.
 *                               [SWS_Eth_00052][SWDESG_ETH_012]void Eth_GetPhysAddr(uint8 CtrlIdx,
 *                                              uint8 *PhysAddrPtr)
 *                               [SWS_Eth_00057]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[out] PhysAddrPtr       Physical source address (MAC address) in network byte order.
 *
 */
ETH_TEXT_SECTION void Eth_GetPhysAddr(uint8 CtrlIdx, uint8 *PhysAddrPtr);

/**
 * @brief                        Sets the physical source address used by the indexed controller.
 * @details                      This function is AUTOSAR standard API which is used to set the
 *                               MAC address of the indexed ethernet controller.
 *                               [SWS_Eth_00151][SWDESG_ETH_016]void Eth_SetPhysAddr(uint8 CtrlIdx,
 *                                              const uint8 *PhysAddrPtr)
 *                               [SWS_Eth_00143]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical source address
 *                               (MAC address) in network byte order.
 *
 */
ETH_TEXT_SECTION void Eth_SetPhysAddr(uint8 CtrlIdx, const uint8 *PhysAddrPtr);

#if (STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER)
/**
 * @brief                        Update the physical address receive filter.
 * @details                      Update the physical source address to/from the indexed controller
 *                               filter. If the Ethernet Controller is not capable to do the
 *                               filtering, the software has to do this.
 *                               [SWS_Eth_00152][SWDESG_ETH_020]Std_ReturnType
 *                                              Eth_UpdatePhysAddrFilter(uint8 CtrlIdx, const uint8*
 *                                              PhysAddrPtr, Eth_FilterActionType Action)
 *                               [SWS_Eth_00167]The function requires previous controller
 *                                              initialization (Eth_Init).
 *                               [SWS_Eth_00146]The controller support hardware filtering.
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical destination address
 *                               (MAC address) in network byte order. This is the multicast
 *                               destination address of the layer 2 Ethernet packet.
 * @param[in] Action             Add or remove the address from the Ethernet controllers filter.
 * @return                       E_OK: filter was successfully changed.
 *                               E_NOT_OK: filter could not be changed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_UpdatePhysAddrFilter(uint8                CtrlIdx,
                                                         const uint8         *PhysAddrPtr,
                                                         Eth_FilterActionType Action);
#endif /* STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER */

#if (STD_ON == ETH_CTRL_ENABLE_MII)
/**
 * @brief                        Configures a transceiver register or triggers a function offered by
 *                               the receiver.
 * @details                      [SWS_Eth_00058][SWDESG_ETH_027] Std_ReturnType Eth_WriteMii(uint8
 *                                              CtrlIdx, uint8 TrcvIdx, uint8 RegIdx, uint16 RegVal)
 *                               [SWS_Eth_00062]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00063]The function requires previous controller
 *                                              initialization (Eth_Init).
 *                               [SWS_Eth_00273]Clause 45 registers can be accessed by Eth_WriteMmd
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[in] RegVal             Value to be written into the indexed register.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_WriteMii(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx, uint16 RegVal);

/**
 * @brief                        Configures a transceiver register or triggers a function offered by
 *                               the receiver.
 * @details                      [SWS_Eth_00064][SWDESG_ETH_030]Std_ReturnType Eth_ReadMii(uint8
 *                                              CtrlIdx,uint8 TrcvIdx,uint8 RegIdx,uint16* RegValPtr)
 *                               [SWS_Eth_00069]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00070]The function requires previous controller
 *                                              initialization (Eth_Init).
 *                               [SWS_Eth_00274]Clause 45 registers can be accessed by Eth_ReadMmd
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[out] RegValPtr         Filled with the register content of the indexed register.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_ReadMii(uint8   CtrlIdx,
                                            uint8   TrcvIdx,
                                            uint8   RegIdx,
                                            uint16 *RegValPtr);
#endif /* STD_ON == ETH_CTRL_ENABLE_MII */

#if (STD_ON == ETH_CTRL_ENABLE_MMD)
/**
 * @brief                        Configures a transceiver register via MII clause 45 protocol.
 * @details                      [FUNC_Eth_00008][SWDESG_ETH_034]Std_ReturnType Eth_WriteMmd(uint8
 *                                               CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx,
 *                                               uint16 RegVal)
 *                               [FUNC_Eth_00012]The function is pre-compile time configurable
 * On/Off [FUNC_Eth_00013]The function requires previous controller initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] Mmd                (MMD)Device address.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[in] RegVal             Value to be written into the indexed register.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 *
 */
ETH_TEXT_SECTION Std_ReturnType
    Eth_WriteMmd(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, uint16 RegVal);

/**
 * @brief                        Read a transceiver register via MII clause 45 protocol.
 * @details                      [FUNC_Eth_00014][SWDESG_ETH_037]Std_ReturnType Eth_ReadMmd(uint8
 *                                               CtrlIdx, uint8 TrcvIdx,uint8 Mmd, uint16 RegIdx,
 *                                               uint16* RegValPtr)
 *                               [FUNC_Eth_00019]The function is pre-compile time configurable
 * On/Off [FUNC_Eth_00020]The function requires previous controller initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] Mmd                (MMD)Device address.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[out] RegValPtr         Filled with the register content of the indexed register.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 *
 */
ETH_TEXT_SECTION Std_ReturnType
    Eth_ReadMmd(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, uint16 *RegValPtr);
#endif /* STD_ON == ETH_CTRL_ENABLE_MMD */

#if (STD_ON == ETH_GET_COUNTER_VALUES_API)
/**
 * @brief                        Reads a list with drop counter values of the corresponding
 *                               controller. The meaning of these values is described at
 *                               Eth_CounterType.
 * @details                      [SWS_Eth_00226][SWDESG_ETH_041]Std_ReturnType Eth_GetCounterValues(
 *                                              uint8 CtrlIdx, Eth_CounterType *CounterPtr)
 *                               [SWS_Eth_00231]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00232]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] CounterPtr        counter values according to IETF RFC 1757, RFC 1643 and RFC 2233.
 * @return                       E_OK: success.
 *                               E_NOT_OK: counter values read failure.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetCounterValues(uint8 CtrlIdx, Eth_CounterType *CounterPtr);
#endif /* STD_ON == ETH_GET_COUNTER_VALUES_API */

#if (STD_ON == ETH_GET_RX_STATS_API)
/**
 * @brief                        Get the receive statistics counters.
 * @details                      Returns the following list according to IETF RFC2819, where the
 *                               maximal possible value shall denote an invalid value,
 *                               e.g. if this counter is not available:
 *                               1. etherStatsDropEvents
 *                               2. etherStatsOctets
 *                               3. etherStatsPkts
 *                               4. etherStatsBroadcastPkts
 *                               5. etherStatsMulticastPkts
 *                               6. etherStatsCrcAlignErrors
 *                               7. etherStatsUndersizePkts
 *                               8. etherStatsOversizePkts
 *                               9. etherStatsFragments
 *                               10. etherStatsJabbers
 *                               11. etherStatsCollisions
 *                               12. etherStatsPkts64Octets
 *                               13. etherStatsPkts65to127Octets
 *                               14. etherStatsPkts128to255Octets
 *                               15. etherStatsPkts256to511Octets
 *                               16. etherStatsPkts512to1023Octets
 *                               17. etherStatsPkts1024to1518Octets
 *                               [SWS_Eth_00233][SWDESG_ETH_045]Std_ReturnType Eth_GetRxStats(uint8
 *                                              CtrlIdx, Eth_RxStatsType *RxStats)
 *                               [SWS_Eth_00238]The function is pre-compile time configurable On/Off
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] RxStats           List of values according to IETF RFC 2819 (Remote Network
 * Monitoring Management Information Base).
 * @return                       E_OK: success.
 *                               E_NOT_OK: drop counter could not be obtained.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetRxStats(uint8 CtrlIdx, Eth_RxStatsType *RxStats);
#endif /* STD_ON == ETH_GET_RX_STATS_API */

#if (STD_ON == ETH_GET_TX_STATS_API)
/**
 * @brief                        Returns the list of Transmission Statistics out of IETF RFC1213
 *                               defined with Eth_TxStatsType, where the maximal possible value
 *                               shall denote an invalid value,
 *                               e.g. this counter is not available.
 * @details                      [SWS_Eth_91005][SWDESG_ETH_049]Std_ReturnType Eth_GetTxStats(uint8
 *                                              CtrlIdx, Eth_TxStatsType *TxStats)
 *                               [SWS_Eth_00251]The function is pre-compile time configurable On/Off
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] TxStats           List of values to read statistic values for transmission.
 * @return                       E_OK: success.
 *                               E_NOT_OK: Tx-statistics could not be obtained.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetTxStats(uint8 CtrlIdx, Eth_TxStatsType *TxStats);
#endif /* STD_ON == ETH_GET_TX_STATS_API */

#if (STD_ON == ETH_GET_TX_ERROR_COUNTER_VALUES_API)
/**
 * @brief                        Returns the list of Transmission Error Counters out of IETF RFC1213
 *                               and RFC1643 defined with Eth_TxErrorCounterValuesType, where the
 *                               maximal possible value shall denote an invalid value,
 *                               e.g. this counter is not available.
 * @details                      [SWS_Eth_91006][SWDESG_ETH_053]Std_ReturnType
 *                                              Eth_GetTxErrorCounterValues(uint8 CtrlIdx,
 *                                              Eth_TxErrorCounterValuesType* TxErrorCounterValues)
 *                               [SWS_Eth_00255]The function is pre-compile time configurable On/Off
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] TxErrorCounterValues List of values to read statistic error counter values for
 *                               transmission.
 * @return                       E_OK: success.
 *                               E_NOT_OK: Tx-statistics could not be obtained.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetTxErrorCounterValues(
    uint8                         CtrlIdx,
    Eth_TxErrorCounterValuesType *TxErrorCounterValues);
#endif /* STD_ON == ETH_GET_TX_ERROR_COUNTER_VALUES_API */

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
/**
 * @brief                        Returns a time value out of the HW registers according to the
 *                               capability of the HW. Is the HW resolution is lower than the
 *                               Eth_TimeStampType resolution resp. range, than an the remaining
 * bits will be filled with 0.
 * @details                      [SWS_Eth_00181][SWDESG_ETH_057]Std_ReturnType Eth_GetCurrentTime(
 *                                              uint8 CtrlIdx, Eth_TimeStampQualType* timeQualPtr,
 *                                              Eth_TimeStampType* timeStampPtr)
 *                               [SWS_Eth_00185]The function requires previous controller
 *                                              initialization (Eth_Init).
 *                               [SWS_Eth_00210]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00262]This API can be called by all partitions that have
 *                                              called Eth_Init.
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] timeQualPtr       quality of HW time stamp, e.g. based on current drift.
 * @param[out] timeStampPtr      current time stamp.
 * @return                       E_OK: success.
 *                               E_NOT_OK: ailed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetCurrentTime(uint8                  CtrlIdx,
                                                   Eth_TimeStampQualType *timeQualPtr,
                                                   Eth_TimeStampType     *timeStampPtr);

/**
 * @brief                        Activates egress time stamping on a dedicated message object.
 *                               Some HW does store once the egress time stamp marker and some HW
 *                               needs it always before transmission. There will be no "disable"
 *                               functionality, due to the fact, that the message type is always "
 *                               time stamped" by network design.
 * @details                      [SWS_Eth_00186][SWDESG_ETH_061]void Eth_EnableEgressTimeStamp(uint8
 *                                              CtrlIdx, Eth_BufIdxType BufIdx)
 *                               [SWS_Eth_00211]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00189]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] BufIdx             Index of the message buffer, where Application expects egress time
 *                               stampings.
 *
 */
ETH_TEXT_SECTION void Eth_EnableEgressTimeStamp(uint8 CtrlIdx, Eth_BufIdxType BufIdx);

/**
 * @brief                        Reads back the egress time stamp on a dedicated message object.
 *                               It must be called within the TxConfirmation() function.
 * @details                      [SWS_Eth_00190][SWDESG_ETH_065]Std_ReturnType
 * Eth_GetEgressTimeStamp (uint8 CtrlIdx, Eth_BufIdxType BufIdx, Eth_TimeStampQualType* timeQualPtr,
 *                                              Eth_TimeStampType* timeStampPtr)
 *                               [SWS_Eth_00212]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00194]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] BufIdx             Index of the message buffer, where Application expects egress time
 *                               stamping.
 * @param[out] timeQualPtr       quality of HW time stamp, e.g. based on current drift.
 * @param[out] timeStampPtr      The egress time stamp.
 * @return                       E_OK: Obtaining the timestamp is succeeded.
 *                               E_NOT_OK: Obtaining the timestamp is failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetEgressTimeStamp(uint8                  CtrlIdx,
                                                       Eth_BufIdxType         BufIdx,
                                                       Eth_TimeStampQualType *timeQualPtr,
                                                       Eth_TimeStampType     *timeStampPtr);

/**
 * @brief                        Reads back the ingress time stamp on a dedicated message object.
 *                               It must be called within the RxIndication() function.
 * @details                      [SWS_Eth_00195][SWDESG_ETH_070]Std_ReturnType
 *                                              Eth_GetIngressTimeStamp(uint8 CtrlIdx,
 *                                              const Eth_DataType* DataPtr, Eth_TimeStampQualType*
 *                                              timeQualPtr, Eth_TimeStampType* timeStampPtr)
 *                               [SWS_Eth_00213]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00199]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] DataPtr            Pointer to the message buffer, where Application expects ingress
 *                               time stamping.
 * @param[out] timeQualPtr       quality of HW time stamp, e.g. based on current drift.
 * @param[out] timeStampPtr      The ingress time stamp.
 * @return                       E_OK: Obtaining the timestamp is succeeded.
 *                               E_NOT_OK: Obtaining the timestamp is failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetIngressTimeStamp(uint8                  CtrlIdx,
                                                        const Eth_DataType    *DataPtr,
                                                        Eth_TimeStampQualType *timeQualPtr,
                                                        Eth_TimeStampType     *timeStampPtr);

/**
 * @brief                        Allows the Time Slave node to synchronize the local time and the
 *                               local Eth reference clock.
 * @details                      This API allows the Time Slave node to correct the local time and
 *                               the local Eth reference clock ratio. If the secondsHi field of
 *                               timeOffsetPtr or rateRatioPtr is nonzero value, that is, the time
 *                               difference or time ratio is too large,this API will return
 * E_NOT_OK, please call Eth_Hal_SetGlobalTime first. [FUNC_Eth_00058][SWDESG_ETH_074]Std_ReturnType
 * Eth_SetCorrectionTime (uint8 CtrlIdx,const Eth_TimeIntDiffType* timeOffsetPtr,const
 * Eth_RateRatioType* rateRatioPtr) [FUNC_Eth_00064]The function is pre-compile time configurable
 * On/Off [FUNC_Eth_00065]The function requires previous controller initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] timeOffsetPtr      The global time offset value.
 * @param[in] rateRatioPtr       The global time ratio bias.
 * @return                       E_OK: Time synchronization is succeeded.
 *                               E_NOT_OK: Time synchronization is failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_SetCorrectionTime(uint8                      CtrlIdx,
                                                      const Eth_TimeIntDiffType *timeOffsetPtr,
                                                      const Eth_RateRatioType   *rateRatioPtr);

/**
 * @brief                        Set the global time in hardware.
 * @details                      This API allows the user to set the local time in hardware.
 *                               [FUNC_Eth_00066][SWDESG_ETH_078]Std_ReturnType Eth_SetGlobalTime(
 *                                               uint8 CtrlIdx,const Eth_TimeStampType*
 * timeStampPtr) [FUNC_Eth_00071]The function is pre-compile time configurable On/Off
 * [FUNC_Eth_00072]The function requires previous controller initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] timeStampPtr       The global time value to set.
 * @return                       E_OK: Set global time successfully.
 *                               E_NOT_OK: Set global time failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_SetGlobalTime(uint8                    CtrlIdx,
                                                  const Eth_TimeStampType *timeStampPtr);
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

/**
 * @brief                        Provides access to a transmit buffer of the FIFO related to the
 *                               specified priority.
 * @details                      [SWS_Eth_00077][SWDESG_ETH_082]BufReq_ReturnType Eth_ProvideTxBuffer
 *                                              (uint8 CtrlIdx, uint8 Priority, Eth_BufIdxType*
 *                                              BufIdxPtr, uint8** BufPtr, uint16* LenBytePtr)
 *                               [SWS_Eth_00086]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] Priority           Frame priority for transmit buffer FIFO selection.
 * @param[out] BufIdxPtr         Index to the granted buffer resource. To be used for subsequent
 *                               requests.[SWS_Eth_00004]
 * @param[out] BufPtr            Pointer to the granted buffer.
 * @param[inout] LenBytePtr      In: desired length in bytes, out: granted length in bytes.
 * @return                       BUFREQ_OK: success.
 *                               BUFREQ_E_NOT_OK: development error detected.
 *                               BUFREQ_E_BUSY: all buffers in use.
 *                               BUFREQ_E_OVFL: requested buffer too large.
 *
 */
ETH_TEXT_SECTION BufReq_ReturnType Eth_ProvideTxBuffer(uint8           CtrlIdx,
                                                       uint8           Priority,
                                                       Eth_BufIdxType *BufIdxPtr,
                                                       uint8         **BufPtr,
                                                       uint16         *LenBytePtr);

/**
 * @brief                        Triggers transmission of a previously filled transmit buffer.
 * @details                      [SWS_Eth_00087][SWDESG_ETH_089]Std_ReturnType Eth_Transmit(uint8
 *                                              CtrlIdx, Eth_BufIdxType BufIdx, Eth_FrameType
 *                                              FrameType, boolean TxConfirmation, uint16 LenByte,
 *                                              const uint8* PhysAddrPtr)
 *                               [SWS_Eth_00094]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] BufIdx             Index of the buffer resource.[SWS_Eth_00004]
 * @param[in] FrameType          Ethernet frame type.
 * @param[in] TxConfirmation     Activates transmission confirmation.
 * @param[in] LenByte            Data length in byte.
 * @param[in] PhysAddrPtr        Physical target address (MAC address) in network byte order.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transmission failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Transmit(uint8          CtrlIdx,
                                             Eth_BufIdxType BufIdx,
                                             Eth_FrameType  FrameType,
                                             boolean        TxConfirmation,
                                             uint16         LenByte,
                                             const uint8   *PhysAddrPtr);

/**
 * @brief                        Receive a frame from the related fifo.
 * @details                      [SWS_Eth_00095][SWDESG_ETH_097]void Eth_Receive(uint8 CtrlIdx,
 * uint8 FifoIdx, Eth_RxStatusType *RxStatusPtr) [SWS_Eth_00099]The function requires previous
 * controller initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] FifoIdx            Specifies the related fifo.
 * @param[out] RxStatusPtr       Indicates whether a frame has been received and if so, whether more
 *                               frames are available for the related fifo.
 *
 */
ETH_TEXT_SECTION void Eth_Receive(uint8 CtrlIdx, uint8 FifoIdx, Eth_RxStatusType *RxStatusPtr);

/**
 * @brief                        Triggers frame transmission confirmation.
 * @details                      [SWS_Eth_00100][SWDESG_ETH_103]void Eth_TxConfirmation(uint8
 * CtrlIdx) [SWS_Eth_00105]The function requires previous controller initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 *
 */
ETH_TEXT_SECTION void Eth_TxConfirmation(uint8 CtrlIdx);

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
/**
 * @brief                        Initialize the time-aware shaper on the egress side.
 * @details                      The time-aware shaper is based on the time sensitive network(TSN)
 *                               feature of the ethernet controller. If the gptp is in slave mode,
 *                               the time-aware shaper should be initialized after the global time
 *                               synchronization.
 *                               [FUNC_Eth_00130][SWDESG_ETH_349]Std_ReturnType
 *                                               Eth_TimeAwareShaperInit(uint8 CtrlIdx,
 *                                               uint8 TimeAwareShaperIdx)
 *                               [FUNC_Eth_00134]The function requires previous controller
 *                                              initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] TimeAwareShaperIdx Index of the time aware shaper configurations.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_TimeAwareShaperInit(uint8 CtrlIdx, uint8 TimeAwareShaperIdx);
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
/**
 * @brief                        Configure Time Based Scheduling control register.
 * @details                      Configures the EST (Ethernet Scheduled Traffic) Time Based
 * Scheduling control register with the provided parameters. This function should be called after
 * controller initialization (Eth_Init) and after Eth_TimeAwareShaperInit if EST mode is enabled.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TBSCfgPtr          Pointer to the TBS configuration structure.
 * @return Std_ReturnType        Operation status (E_OK if successful, E_NOT_OK otherwise).
 */
ETH_TEXT_SECTION Std_ReturnType Eth_TBSConfigureCtrl(uint8 CtrlIdx, const Eth_TBSCfgType *TBSCfgPtr);

/**
 * @brief                        Set launch time of the indexed buffer resource.
 * @details                      Configures the launch time of the Time Based Scheduling Enchanced
 * DMA descriptor with the provided parameters. This function should be called after the calling of
 * Eth_ProvideTxBuffer and before the calling of Eth_Transmit.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] BufIdx             Index of the buffer resource to be transmitted.
 * @param[in] LaunchTimePtr      Pointer to the TBS launch time structure.
 * @return Std_ReturnType        Operation status (E_OK if successful, E_NOT_OK otherwise).
 */
ETH_TEXT_SECTION Std_ReturnType Eth_TBSSetLaunchTime(uint8                        CtrlIdx,
                                                     Eth_BufIdxType               BufIdx,
                                                     const Eth_TBSLaunchTimeType *LaunchTimePtr);
#endif /* STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT */

#if (STD_ON == ETH_VERSION_INFO_API)
/**
 * @brief                        Returns the version information of this module.
 * @details                      [SWS_Eth_00106][SWDESG_ETH_106]void Eth_GetVersionInfo
 *                                              (Std_VersionInfoType *VersionInfoPtr)
 *
 * @param[out] VersionInfoPtr    Version information of this module.
 *
 */
ETH_TEXT_SECTION void Eth_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr);
#endif /* STD_ON == ETH_VERSION_INFO_API */

#define ETH_STOP_SEC_CODE
#include "Eth_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /*ETH_H*/

/** @} */
