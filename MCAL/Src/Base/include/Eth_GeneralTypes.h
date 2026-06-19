/**
*   @file Eth_GeneralTypes.h
*   @implements Eth_GeneralTypes.h_Artifact
*   @version 1.5.1

*   @brief   AUTOSAR Base Eth driver type definitions header file.
*   @details This file contains the Eth Autosar driver hardware specific type definition.
*
*   @addtogroup Common
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

/* PRQA S 1535 EOF #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 *  1535:The typedef is declared but not used within this project.
 *  REASON: The Eth_GeneralTypes.h is the common header file for multiple source files, and some
 *  of the type definitions may be not used, but it is necessary to define them here.
 */

#ifndef ETH_GENERALTYPES_H
#define ETH_GENERALTYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "ComStack_Types.h" /* Mandatory include - see the SWS */

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief            The Ethernet driver state.
 * @details          Status supervision used for Development Error Detection. The state shall be
 *                   available for debugging.
 * @implements       [SWS_Eth_00159]
 */
typedef enum
{
    ETH_STATE_UNINIT = 0U, /**< @brief Driver is not yet configured. */
    ETH_STATE_INIT         /**< @brief Driver is configured. */
} Eth_StateType;

/**
 * @brief            This type defines the controller modes.
 * @details          This is an generic type and used in the layers of the Ethernet communication
 *                   stack(e.g. EthIf, Eth, EthSwt, EthTrcv) to enable and disable, respectively,
 * the Ethernet communcation channel and set the corresponding hardware (e.g. Ethernet
 * controller,Ethernet Switch port, Ethernet transceiver) to an lowpower sleep and power on
 * mode,respectively. The type also support to transfer a wake-up request from the services layer
 * (ComM) to the communication drivers (EthTrcv). This could be used e.g. for Ethernet hardware that
 * has the capability to wake-up and sleep on data line (see OATC10).
 * @implements       [SWS_Eth_91008]
 */
typedef enum
{
    ETH_MODE_DOWN = 0U,                 /**< @brief Disable the Ethernet Rx/Tx communication and set
                                             its corresponding hardware to a lowpower sleep mode and
                                             initiate a sleep process, if the Ethernet hardware
                                             provide such a feature. E.g. request a sleep on data
                                             line for OATC10 compatible Ethernet hardware. */
    ETH_MODE_ACTIVE,                    /**< @brief Enable the Ethernet Rx/Tx communication and set
                                             its corresponding hardware to an power on mode. */
    ETH_MODE_ACTIVE_WITH_WAKEUP_REQUEST /**< @brief Enable the Ethernet Rx/Tx communication and set
                                             its corresponding hardware to an power on mode and
                                             request an wake-up on the network, if the Ethernet
                                             hardware provide a wake-up feature. E.g. wake-up on
                                             data line for OA TC10 compatible Ethernet hardware. */
} Eth_ModeType;

/**
 * @brief            The Ethernet reception status
 * @details          This status is the out parameter of the Eth_Receive() function to indicate
 *                   whether a frame has been received and if so, whether more frames are available
 *                   or frames got lost.
 * @implements       [SWS_Eth_00162]
 */
typedef enum
{
    ETH_RECEIVED = 0U,               /**< @brief Ethernet frame has been received, no further
                                                 frames available */
    ETH_NOT_RECEIVED,                /**< @brief Ethernet frame has not been received,no further
                                                 frames available */
    ETH_RECEIVED_MORE_DATA_AVAILABLE /**< @brief Ethernet frame has been received, more frames
                                                 are available */
} Eth_RxStatusType;

/**
 * @brief            Action type for MAC address filtering
 * @details          This type describes the filter action(add or remove) for the MAC address.
 * @implements       [SWS_Eth_00163]
 */
typedef enum
{
    ETH_ADD_TO_FILTER = 0U, /**< @brief Add MAC address to the filter */
    ETH_REMOVE_FROM_FILTER  /**< @brief Remove MAC address from the filter */
} Eth_FilterActionType;

/**
 * @brief            The Ethernet quality of timestamp type
 * @details          Depending on the HW, quality information regarding the evaluated time stamp
 *                   might be supported. If not supported, the value shall be always Valid. For
 *                   Uncertain and Invalid values, the upper layer shall discard the time stamp.
 * @implements       [SWS_Eth_00177]
 */
typedef enum
{
    ETH_VALID = 0U, /**< @brief Timestamp valid. */
    ETH_INVALID,    /**< @brief Timestamp invalid. */
    ETH_UNCERTAIN   /**< @brief Timestamp uncertain. */
} Eth_TimeStampQualType;

/**
 * @brief            This type defines the Ethernet link state.
 * @details          The link state changes after an Ethernet cable gets plugged in and the
 *                   transceivers on both ends negotiated the transmission parameters.
 * @implements       [SWS_EthTrcv_00100]
 */
typedef enum
{
    ETHTRCV_LINK_STATE_DOWN = 0U, /**< @brief No physical Ethernet connection established. */
    ETHTRCV_LINK_STATE_ACTIVE     /**< @brief Physical Ethernet connection established. */
} EthTrcv_LinkStateType;

/**
 * @brief            This type defines the transceiver state.
 * @details          Status supervision used for Development Error Detection. The state shall be
 *                   available for debugging.
 * @implements       [SWS_EthTrcv_00101]
 */
typedef enum
{
    ETHTRCV_STATE_UNINIT = 0U, /**< @brief Driver is not yet configured */
    ETHTRCV_STATE_INIT         /**< @brief Driver is configured. */
} EthTrcv_StateType;

/**
 * @brief            This type defines the Ethernet baud rate.
 * @details          The baud rate gets either negotiated between the connected transceivers or has
 * to be configured.
 * @implements       [SWS_EthTrcv_00102]
 */
typedef enum
{
    ETHTRCV_BAUD_RATE_10MBIT = 0U, /**< @brief 10MBIT Ethernet connection */
    ETHTRCV_BAUD_RATE_100MBIT,     /**< @brief 100MBIT Ethernet connection */
    ETHTRCV_BAUD_RATE_1000MBIT,    /**< @brief 1000MBIT Ethernet connection */
    ETHTRCV_BAUD_RATE_2500MBIT     /**< @brief 2500MBIT Ethernet connection */
} EthTrcv_BaudRateType;

/**
 * @brief            This type defines the Ethernet duplex modes.
 * @details          The duplex mode gets either negotiated between the connected transceivers or
 * has to be configured.
 * @implements       [SWS_EthTrcv_00103]
 */
typedef enum
{
    ETHTRCV_DUPLEX_MODE_HALF = 0U, /**< @brief Half duplex Ethernet connection */
    ETHTRCV_DUPLEX_MODE_FULL       /**< @brief Full duplex Ethernet connection */
} EthTrcv_DuplexModeType;

/**
 * @brief          This type defines the transceiver wake up modes.
 * @details        This type controls the transceiver wake up modes and/or clears the wake-up reason.
 * @implements     [SWS_EthTrcv_00113]
 */
typedef enum
{
    ETHTRCV_WUM_DISABLE = 0U, /**< @brief Transceiver wake up disabled */
    ETHTRCV_WUM_ENABLE,       /**< @brief Transceiver wake up enabled */
    ETHTRCV_WUM_CLEAR         /**< @brief Transceiver wake up reason cleared. */
} EthTrcv_WakeupModeType;

/**
 * @brief            This type defines the transceiver wake up reasons.
 * @details          This type defines the transceiver wake up reasons.
 * @implements       [SWS_EthTrcv_00114]
 */
typedef enum
{
    ETHTRCV_WUR_NONE = 0U, /**< @brief No wake up reason detected. */
    ETHTRCV_WUR_GENERAL,   /**< @brief General wake up detected, no distinct reason supported by
                                       hardware. */
    ETHTRCV_WUR_BUS,       /**< @brief Bus wake up detected. Available if supported by hardware. */
    ETHTRCV_WUR_INTERNAL,  /**< @brief Internal wake up detected. Available if supported by
                                       hardware. */
    ETHTRCV_WUR_RESET,     /**< @brief Reset wake up detected. Available if supported by
                                       hardware. */
    ETHTRCV_WUR_POWER_ON,  /**< @brief Power on wake up detected. Available if supported by
                                       hardware. */
    ETHTRCV_WUR_PIN,       /**< @brief Pin wake up detected. Available if supported by hardware. */
    ETHTRCV_WUR_SYSERR,    /**< @brief System error wake up detected. Available if supported by
                                       hardware. */
    ETHTRCV_WUR_WODL_WUP,  /**< @brief Wake-up on data line (WUP = wake up pulse) detected while
                                       link is down of the corresponding Ethernet hardware
                                       (e.g. PHY). Only available if
                                       EthTrcvWakeupSleepOnDatalineEnabled is set to TRUE. */
    ETHTRCV_WUR_WODL_WUR,  /**< @brief Wake-up on data line (WUR = wake up request)) detected while
                                       link is active of the used Ethernet hardware (e.g. PHY).
                                       Only available if EthTrcvWakeupSleepOnDatalineEnabled is set
                                       to TRUE. */
    ETHTRCV_WUR_TRANSFER   /**< @brief Device internal transfer of wake-up on data line from a
                                       neighboring PHY. Only possible if Ethernet hardware is
                                       compliant to OA TC10.*/
} EthTrcv_WakeupReasonType;

/**
 * @brief          Describes the possible PHY test modes.
 * @details        Describes the possible PHY test modes.
 * @implements     [SWS_EthTrcv_91002]
 */
typedef enum
{
    ETHTRCV_PHYTESTMODE_NONE = 0U, /**< @brief Normal operation */
    ETHTRCV_PHYTESTMODE_1,         /**< @brief Test transmitter droop */
    ETHTRCV_PHYTESTMODE_2,         /**< @brief Test master timing jitter */
    ETHTRCV_PHYTESTMODE_3,         /**< @brief Test slave timing jitter */
    ETHTRCV_PHYTESTMODE_4,         /**< @brief Test transmitter distortion */
    ETHTRCV_PHYTESTMODE_5          /**< @brief Test power spectral density (PSD) mask */
} EthTrcv_PhyTestModeType;

/**
 * @brief            Describes the possible PHY loopback modes.
 * @details          Describes the possible PHY loopback modes.
 * @implements       [SWS_EthTrcv_91004]
 */
typedef enum
{
    ETHTRCV_PHYLOOPBACK_NONE = 0U, /**< @brief Normal operation */
    ETHTRCV_PHYLOOPBACK_INTERNAL,  /**< @brief Internal loopback */
    ETHTRCV_PHYLOOPBACK_EXTERNAL,  /**< @brief External loopback */
    ETHTRCV_PHYLOOPBACK_REMOTE     /**< @brief Remote loopback */
} EthTrcv_PhyLoopbackModeType;

/**
 * @brief            Describes the possible PHY transmit modes.
 * @details          Describes the possible PHY transmit modes.
 * @implements       [SWS_EthTrcv_91006]
 */
typedef enum
{
    ETHTRCV_PHYTXMODE_NORMAL = 0U,  /**< @brief Normal operation */
    ETHTRCV_PHYTXMODE_TX_OFF,       /**< @brief Transmitter disabled */
    ETHTRCV_PHYTXMODE_SCRAMBLER_OFF /**< @brief Scrambler disabled */
} EthTrcv_PhyTxModeType;

/**
 * @brief            Describes the results of the cable diagnostics.
 * @details          Describes the results of the cable diagnostics.
 * @implements       [SWS_EthTrcv_91008]
 */
typedef enum
{
    ETHTRCV_CABLEDIAG_OK = 0U,       /**< @brief Cable diagnostic ok */
    ETHTRCV_CABLEDIAG_ERROR,         /**< @brief Cable diagnostic failed */
    ETHTRCV_CABLEDIAG_SHORT,         /**< @brief Short circuit detected */
    ETHTRCV_CABLEDIAG_OPEN,          /**< @brief Open circuit detected */
    ETHTRCV_CABLEDIAG_PENDING,       /**< @brief Cable diagnostic is still running */
    ETHTRCV_CABLEDIAG_WRONG_POLARITY /**< @brief Cable diagnostics has detected wrong polarity of
                                         the "Ethernet physical+" or "Ethernet physical-"lines */
} EthTrcv_CableDiagResultType;

/**
 * @brief            This type defines the media access control type in half duplex.
 * @details          If ETHTRCV_MAC_TYPE_PLCA is configured, PLCA is supported and the parameters
 *                   listed in ECUC_EthTrcv_00055 have to be configured.
 * @implements       [SWS_EthTrcv_91013]
 */
typedef enum
{
    ETHTRCV_MAC_TYPE_CSMA_CD = 0U, /**< @brief Carrier sence multiple access with collision
                                               detection. */
    ETHTRCV_MAC_TYPE_PLCA          /**< @brief Physical layer collision avoidance. */
} EthTrcv_MacMethodType;

/**
 * @brief            The switch driver state.
 * @details          Status supervision used for Development Error Detection. The state shall be
 *                   available for debugging..
 * @implements       [SWS_EthSwt_00123]
 */
typedef enum
{
    ETHSWT_STATE_UNINIT = 0U,        /**< @brief Switch is not yet configured. */
    ETHSWT_STATE_INIT,               /**< @brief Switch is configured. */
    ETHSWT_STATE_PORTINIT_COMPLETED, /**< @brief Port initialization is completed. */
    ETHSWT_STATE_ACTIVE              /**< @brief Switch is active. */
} EthSwt_StateType;

/**
 * @brief            MAC addresses learning type.
 * @details          This type defines the MAC addresses learning modes.
 * @implements       [SWS_EthSwt_00227]
 */
typedef enum
{
    ETHSWT_MACLEARNING_HWDISABLED = 0U, /**< @brief If hardware learning disabled, the switch must
                                                    not learn new MAC addresses */
    ETHSWT_MACLEARNING_HWENABLED,       /**< @brief If hardware learning enabled, the switch learns
                                                    new MAC addresses */
    ETHSWT_MACLEARNING_SWENABLED        /**< @brief If software learning enabled, the hardware
                                                    learning is disabled and the switch forwards
                                                    packets with an unknown source address to a
                                                    host CPU. */
} EthSwt_MacLearningType;

/**
 * @brief            Switch port mirror state type.
 * @details          Type to request or obtain the port mirroring state (enable/disable) for a
 *                   particular port mirror configuration per Ethernet switch.
 * @implements       [SWS_EthSwt_91020]
 */
typedef enum
{
    ETHSWT_PORT_MIRRORING_DISABLED = 0U,              /**< @brief Port mirroring disabled. */
    ETHSWT_PORT_MIRRORING_ENABLED,                    /**< @brief Port mirroring enabled. */
    ETHSWT_PORT_MIRRORING_CONFIGURATION_NOT_SUPPORTED /**< @brief Port mirroring configuration is
                                                           not supported by Ethernet switch driver
                                                           or by the Ethernet switch hardware. */
} EthSwt_PortMirrorStateType;

/**
 * @brief            EthSwt_MgmtOwner type.
 * @details          Holds information if upper layer or EthSwt is owner of mgmt_obj.
 * @implements       [SWS_EthSwt_91035]
 */
typedef enum
{
    ETHSWT_MGMT_OBJ_UNUSED = 0U,         /**< @brief Object unused. */
    ETHSWT_MGMT_OBJ_OWNED_BY_ETHSWT,     /**< @brief Object used and EthSwt collects needed
                                             data. */
    ETHSWT_MGMT_OBJ_OWNED_BY_UPPER_LAYER /**< @brief Object used and the upper layer does
                                             calculations. */
} EthSwt_MgmtOwner;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
 * @brief         Frame type.
 * @details       This type is used to pass the uint16 value of type or length field in the Ethernet
 *                frame header.
 *                - Values less than or equal to 1500 represent the length.
 *                - Values grater than 1500 represent the type
 *                (i.e. 0x0800 = IPv4 protocol).
 * @implements    Eth_FrameType_typedef [SWS_Eth_00160]
 */
typedef uint16 Eth_FrameType;

/**
 * @brief         Type used to pass transmit or receive data to or from the driver.
 * @details       This type was defined as uint8 type.
 * @implements    Eth_DataType_typedef [SWS_Eth_00161]
 */
typedef uint8 Eth_DataType;

/**
 * @brief         Ethernet buffer identifier type.
 * @details       This type indicate the index of buffer used in transmitted and received data.
 * @implements    Eth_BufIdxType_typedef [SWS_Eth_00175]
 */
typedef uint32 Eth_BufIdxType;

/**
 * @brief         Timestamp value type.
 * @details       Variables of this type are used for expressing time stamps including relative time
 *                and absolute calendar time. The absolute time starts at 1970-01-01.
 *                seconds: 0 to 281474976710655s
 *                nanoseconds: 0 to 999999999ns
 * @implements    Eth_TimeStampType_struct [SWS_Eth_00178]
 */
typedef struct
{
    uint32 nanoseconds; /**< @brief Nanoseconds part of the timestamp */
    uint32 seconds;     /**< @brief Lower 32 bits of the 48 bits Seconds field */
    uint16 secondsHi;   /**< @brief Upper 16 bits of the 48 bits Seconds field */
} Eth_TimeStampType;

/**
 * @brief         Timestamp diff type.
 * @details       Variables of this type are used to express time differences.
 * @implements    Eth_TimeIntDiffType_struct [SWS_Eth_00179]
 */
typedef struct
{
    Eth_TimeStampType diff; /**< @brief Time difference */
    boolean           sign; /**< @brief Positive (True) Or negative (False) time */
} Eth_TimeIntDiffType;

/**
 * @brief         Frequency ratio type.
 * @details       Variables of this type are used to express frequency ratios.
 * @implements    Eth_RateRatioType_struct [SWS_Eth_00180]
 */
typedef struct
{
    Eth_TimeIntDiffType IngressTimeStampDelta; /**< @brief IngressTimeStampSync2 -
                                                           IngressTimeStampSync1 */
    Eth_TimeIntDiffType OriginTimeStampDelta;  /**< @brief OriginTimeStampSync2[FUP2] -
                                                           OriginTimeStampSync1[FUP1] */
} Eth_RateRatioType;

/**
 * @brief        Eth_MacVlanType type definition
 * @details      This type is used to read out addresses from the address resolution logic (ARL)
 *               table of the switch.In case of Macaddr contains a Multicast Address MacVlanType.
 *               SwitchPort shall be handled as Bitmask, each bit represents a Switch Port, Bit 0
 *               represents EthSwichtPortIdx = 0 , Bit 1 represents EthSwichtPortIdx = 1 and so on.
 *               In case of Macaddr contains not a Multicast Address MacVlanType.SwitchPort shall be
 *               handled as a value representing the EthSwitchPortIdx.
 * @implements   Eth_MacVlanType_struct [SWS_Eth_91001]
 */
typedef struct
{
    uint8 MacAddr[6U]; /** @brief Specifies the MAC address
                                  [0..255,0..255,0..255,0..255,0..255,0..255] */
    uint16 VlanId;     /** @brief Specifies the VLAN address 0..65535 */
    uint32 SwitchPort; /** @brief Specifies the ports of the switch as bit mask.
                                  (0x00000001->Port0,0x80000001->Port31+Port0) */
} Eth_MacVlanType;

/**
 * @brief         Eth statistics counter type
 * @details       Counter values according to IETF RFC 1757, RFC 1643 and RFC 2233
 * @implements    Eth_CounterType_struct [SWS_Eth_91007]
 */
typedef struct
{
    uint32 DropPktBufOverrun; /**< @brief Dropped packets due to buffer overrun */
    uint32 DropPktCrc;        /**< @brief Dropped packets due to CRC errors */
    uint32 UndersizePkt;      /**< @brief Number of undersize packets which were less than 64
                                          octets long (excluding framing bits, but including FCS
                                          octets) and were otherwise well formed. */
    uint32 OversizePkt;       /**< @brief Number of oversize packets which are longer than 1518
                                          octets (excluding framing bits, but including FCS
                                          octets) and were otherwise well formed. */
    uint32 AlgnmtErr;         /**< @brief Number of alignment errors, i.e. packets which are
                                          received and are not an integral number of octets in
                                          length and do not pass the CRC. */
    uint32 SqeTestErr;        /**< @brief SQE test error according to
                                          IETF RFC1643 dot3StatsSQETestErrors */
    uint32 DiscInbdPkt;       /**< @brief The number of inbound packets which were chosen to be
                                          discarded even though no errors had been detected to
                                          prevent their being deliverable to a higher-layer
                                          protocol. One possible reason for discarding such a
                                          packet could be to free up buffer space. */
    uint32 ErrInbdPkt;        /**< @brief Total number of erroneous inbound packets */
    uint32 DiscOtbdPkt;       /**< @brief The number of outbound packets which were chosen to be
                                          discarded even though no errors had been detected to
                                          prevent their being transmitted.One possible reason for
                                          discarding such a packet could be to free up buffer
                                          space. */
    uint32 ErrOtbdPkt;        /**< @brief Total number of erroneous outbound packets */
    uint32 SnglCollPkt;       /**< @brief Single collision frames: A count of successfully
                                          transmitted frames on a particular interface for which
                                          transmission is inhibited by exactly one */
    uint32 MultCollPkt;       /**< @brief Multiple collision frames: A count of successfully
                                          transmitted frames on a particular interface for which
                                          transmission is inhibited by more than one collision. */
    uint32 DfrdPkt;           /**< @brief Number of deferred transmission: A count of frames for
                                          which the first transmission attempt on a particular
                                          interface is delayed because the medium is busy. */
    uint32 LatCollPkt;        /**< @brief Number of late collisions: The number of times that a
                                          collision is detected on a particular interface later
                                          than 512 bittimes into the transmission of a packet. */
    uint32 HwDepCtr0;         /**< @brief Hardware dependent counter value */
    uint32 HwDepCtr1;         /**< @brief Hardware dependent counter value */
    uint32 HwDepCtr2;         /**< @brief Hardware dependent counter value */
    uint32 HwDepCtr3;         /**< @brief Hardware dependent counter value */
} Eth_CounterType;

/**
 * @brief         Reception statistics values type.
 * @details       Reception statistics values according to IETF RFC 2819.
 * @implements    Eth_RxStatsType_struct [SWS_Eth_91002]
 */
typedef struct
{
    uint32 RxStatsDropEvents;           /**< @brief The total number of events in which packets were
                                                    dropped by the probe due to lack of resources.*/
    uint32 RxStatsOctets;               /**< @brief The total number of octets of data (including
                                                    those in bad packets) received on the network
                                                    (excluding framing bits but including FCS
                                                    octets). */
    uint32 RxStatsPkts;                 /**< @brief The total number of packets (including bad
                                                    packets, broadcast packets, and multicast
                                                    packets) received. */
    uint32 RxStatsBroadcastPkts;        /**< @brief The total number of good packets received that
                                                    were directed to the broadcast address. */
    uint32 RxStatsMulticastPkts;        /**< @brief The total number of good packets received that
                                                    were directed to a multicast address. */
    uint32 RxStatsCrcAlignErrors;       /**< @brief The total number of packets received that had a
                                                    length of bertween 64 and 1518 octets that had
                                                    either a bad Frame Check Sequence (FCS) with an
                                                    integral number of octets (FCS Error) or a bad
                                                    FCS with a non-integral number of octets
                                                    (Alignment Error). */
    uint32 RxStatsUndersizePkts;        /**< @brief The total number of packets received that were
                                                    less than 64 octets long (excluding framing
                                                    bits, but including FCS octets) and were
                                                    otherwise well formed. */
    uint32 RxStatsOversizePkts;         /**< @brief The total number of packets received that were
                                                    longer than 1518 octets (excluding framing bits,
                                                    but including FCS octets) and were otherwise
                                                    well formed. */
    uint32 RxStatsFragments;            /**< @brief The total number of packets received that were
                                                    less than 64 octets in length (excluding framing
                                                    bits but including FCS octets) and had either a
                                                    bad Frame Check Sequence (FCS) with an integral
                                                    number of octets (FCS Error) or a bad FCS with a
                                                    non-integralnumber of octets (Alignment Error)*/
    uint32 RxStatsJabbers;              /**< @brief The total number of packets received that were
                                                    longer than 1518 octets, and had either a bad
                                                    Frame Check Sequence (FCS) with an integral
                                                    number of octets (FCS Error) or a bad FCS with a
                                                    nonintegral number of octets (Alignment Error)*/
    uint32 RxStatsCollisions;           /**< @brief The best estimate of the total number of
                                                    collisions on this Ethernet segment. */
    uint32 RxStatsPkts64Octets;         /**< @brief The total number of packets (including bad
                                                    packets) received that were 64 octets in
                                                    length. */
    uint32 RxStatsPkts65to127Octets;    /**< @brief The total number of packets (including bad
                                                    packets) received that were between 65 and 127
                                                    octets in length. */
    uint32 RxStatsPkts128to255Octets;   /**< @brief The total number of packets (including bad
                                                    packets) received that were between 128 and 255
                                                    octets in length. */
    uint32 RxStatsPkts256to511Octets;   /**< @brief The total number of packets (including bad
                                                    packets) received that were between 256 and 511
                                                    octets in length. */
    uint32 RxStatsPkts512to1023Octets;  /**< @brief The total number of packets (including bad
                                                    packets) received that were between 512 and 1023
                                                    octets in length. */
    uint32 RxStatsPkts1024to1518Octets; /**< @brief The total number of packets (including bad
                                                    packets) received that were between 1024 and
                                                    1518 octets in length. */
    uint32 RxUnicastFrames;             /**< @brief The number of subnetwork-unicast packets
                                                    delivered to a higher-layer protocol. */
} Eth_RxStatsType;

/**
 * @brief            Transmission statistics values type.
 * @details          Statistic values for transmission.
 * @implements       Eth_TxStatsType_struct [SWS_Eth_91003]
 */
typedef struct
{
    uint32 TxNumberOfOctets; /**< @brief The total number of octets transmitted out of the
                                         interface, including framing characters */
    uint32 TxNUcastPkts;     /**< @brief The total number of packets that higherlevel protocols
                                         requested be transmitted to a non-unicast (i.e., a
                                         subnetworkbroadcast or subnetwork-multicast) address,
                                         including those that were discarded or not sent */
    uint32 TxUniCastPkts;    /**< @brief The total number of packets that higherlevel protocols
                                         requested be transmitted to a subnetwork-unicast
                                         address, including those that were discarded or
                                         not sent */
} Eth_TxStatsType;

/**
 * @brief            Statistics of error counter values for transmission
 * @details          Statistics of error counter values for transmission
 * @implements       Eth_TxErrorCounterValuesType_struct [SWS_Eth_91004]
 */
typedef struct
{
    uint32 TxDroppedNoErrorPkts; /**< @brief The number of outbound packets which were chosen to
                                             be discarded even though no errors had been detected
                                             to prevent their being transmitted. One possible
                                             reason for discarding such a packet could be to free
                                             up buffer space. */
    uint32 TxDroppedErrorPkts;   /**< @brief transmitted because of errors */
    uint32 TxDeferredTrans;      /**< @brief A count of frames for which the first transmission
                                             attempt on a particular interface is delayed because
                                             the medium is busy. The count represented by an
                                             instance of this object does not include frames
                                             involved in collisions */
    uint32 TxSingleCollision;    /**< @brief A count of successfully transmitted frames on a
                                             particular interface for which transmission is
                                             inhibited by exactly one collision. A frame that is
                                             counted by an instance of this object is also counted
                                             by the corresponding instance of either the
                                             TxUniCastPkts and TxNUcastPkts and is not counted by
                                             the corresponding instance of the
                                             TxMultipleCollision object. */
    uint32 TxMultipleCollision;  /**< @brief A count of successfully transmitted frames on a
                                             particular interface for which transmission is
                                             inhibited by more than one collision. A frame that
                                             is counted by an instance of this object is also
                                             counted by the corresponding instance of either the
                                             TxUniCastPkts and TxNUcastPkts and is not counted by
                                             the corresponding instance of the TxSingleCollision
                                             object. */
    uint32 TxLateCollision;      /**< @brief The number of times that a collision is detected on
                                             a particular interface later than 512 bit-times into
                                             the transmission of a packet. Five hundred and
                                             twelve bit-times corresponds to 51.2 microseconds on
                                             a 10 Mbit/s system. A (late) collision included in a
                                             count represented by an instance of this object is
                                             also considered as a (generic) collision for
                                             purposes of other collision-related statistics. */
    uint32 TxExcessiveCollison;  /**< @brief A count of frames for which transmission on a
                                              particular interface fails due to excessive
                                              collisions. */
} Eth_TxErrorCounterValuesType;

/**
 * @brief       Type for holding the management information received/transmitted on Switches (ports).
 * @details     Contains the switch index and the port index.
 * @implements  EthSwt_MgmtInfoType_struct [SWS_EthSwt_91002]
 */
typedef struct
{
    uint8 SwitchIdx;     /**< @brief Switch index */
    uint8 SwitchPortIdx; /**< @brief Port index of the switch */
} EthSwt_MgmtInfoType;

/**
 * @brief        Port mirroring configurations type.
 * @details      The EthSwt_PortMirrorCfgType specify the port mirror configuration which is set up
 *               per Ethernet switch. The configuration is written to the Ethernet switch driver by
 *               calling EthSwt_WritePortMirror Configuration. One port mirror configuration is
 *               maintained per Ethernet Switch.
 * @implements   EthSwt_PortMirrorCfgType_struct [SWS_EthSwt_91017]
 */
typedef struct
{
    uint8 srcMacAddrFilter[6U];   /**< @brief Specifies the source MAC address
                                             [0..255,0..255,0..255,0..255,0..255,0..255] that
                                             should be mirrored.If set to 0,0,0,0,0,0, no source
                                             MAC address filtering shall take place. */
    uint8 dstMacAddrFilter[6U];   /**< @brief Specifies the destination MAC address
                                             [0..255,0..255,0..255,0..255,0..255,0..255] that
                                             should be mirrored.If set to 0,0,0,0,0,0, no
                                             destination MAC address filtering shall take place.*/
    uint16 VlanIdFilter;          /**< @brief Specifies the VLAN address 0..4094 that should be
                                             mirrored. If set to 65535, no VLAN filtering shall
                                             take place.*/
    uint8 MirroringPacketDivider; /**< @brief Divider if only a subset of received frames should
                                             be mirrored. E.g. MirroringPacketDivider = 2 means
                                             every second frames is mirrored */
    uint8 MirroringMode;          /**< @brief Specifies the mode how the mirrored traffic should
                                             be tagged : 0x00 == No VLAN retagging;
                                             0x01 == VLAN retagging;0x03 == VLAN Double tagging */
    uint32 TrafficDirectionIngressBitMask; /**< @brief Specifies the bit mask of Ethernet switch
                                                ingress port traffic direction to be mirrored. The
                                                bit mask is calculated depending of the values of
                                              Eth SwtPortIdx. (e.g. set EthSwtPortIdx == 2 =>
                                                TrafficDirectionIngressBit Mask =
                                                0b0000 0000 0000 0000 0000 0000 0000 0100).
                                                0b0 == enable ingress port mirroring 0b1 == disable
                                                ingress port mirroring.
                                                Example: TrafficDirectionIngressBitMask = 0b0000
                                              0000 0000 0000 0000 0000 0000 0100 => Ingress traffic
                                                mirroring is enabled of Ethernet switch port with
                                                EthSwtPortIdx=2. */
    uint32 TrafficDirectionEgressBitMask;  /**< @brief Specifies the bit mask of Ethernet switch
                                                 egress port traffic direction to be mirrored. The
                                                 bit mask is calculated depending of the values of
                                              Eth  SwtPortIdx. (e.g. set EthSwtPortIdx == 2 =>
                                                 TrafficDirectionEgressBitMask Mask =
                                                 0b0000 0000 0000 0000 0000 0000 0000 0100).
                                                 0b0 == enable egress port mirroring 0b1 == disable
                                                 egress port mirroring.
                                                 Example: TrafficDirectionEgressBitMask = 0b0000 0000
                                                 0000 0000 0000 0000 0000 0001 => Ingress traffic
                                                 mirroring is enabled of Ethernet switch port with
                                                 EthSwtPortIdx=0. */
    uint8 CapturePortIdx;       /**< @brief Specifies the Ethernet switch port which capture the
                                           mirrored traffic. */
    uint16 ReTaggingVlanId;     /**< @brief Specifies the VLAN address 0..4094 which shall be
                                           used for re-tagging if MirroringMode is set to 0x01
                                           (VLAN re-tagging). If the value is set to 65535, the
                                           value shall be ignored, because the VLAN address for
                                           re-tagging is provided by the Ethernet switch
                                           configuration. */
    uint16 DoubleTaggingVlanId; /**< @brief Specifies the VLAN address 0..4094 which shall
                                           be used for double-tagging if MirroringMode is set to
                                           0x02 (VLAN double tagging).If the value is set to
                                           65535, the value shall be ignored, because the VLAN
                                           address for double tagging is provided by the
                                           Ethernet switch configuration. */
} EthSwt_PortMirrorCfgType;

/**
 * @brief       Switch management object valid type.
 * @details     Will be set from EthSwt and marks EthSwt_MgmtObject as valid or not.So the upper
 *              layer will be able to detect inconsistencies.
 * @implements  EthSwt_MgmtObjectValidType_struct [SWS_EthSwt_91036]
 */
typedef struct
{
    Std_ReturnType IngressTimestampValid; /**< @brief IngressTimestampValid shall be set to
                                               E_NOT_OK if ingress timestamp is not available. */
    Std_ReturnType EgressTimestampValid;  /**< @brief EgressTimestampValid shall be set to
                                               E_NOT_OK if ingress timestamp is not available. */
    Std_ReturnType MgmtInfoValid;         /**< @brief MgmtInfoValid shall be set to E_NOT_OK if
                                                      MgmtInfo is not available(e.g. timeout).*/
} EthSwt_MgmtObjectValidType;

/**
 * @brief       Switch management object type.
 * @details     Provides information about all struct member elements. The ownership gives
 *              information whether EthSwt has finished its activities in providing all struct
 *              member elements.
 * @implements  EthSwt_MgmtObjectType_struct [SWS_EthSwt_91037]
 */
typedef struct
{
    EthSwt_MgmtObjectValidType Validation; /**< @brief The validation information for the
                                                       mgmt_obj. */
    Eth_TimeStampType IngressTimestamp;    /**< @brief The ingress timestamp value out of the
                                                       switch. */
    Eth_TimeStampType EgressTimestamp;     /**< @brief The egress timestamp value out of the
                                                       switch. */
    EthSwt_MgmtInfoType MgmtInfo;          /**< @brief Received/Transmitted Management information
                                                       of the switches. */
    EthSwt_MgmtOwner Ownership;            /**< @brief The ownership of MgmtObj. */
} EthSwt_MgmtObjectType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* ETH_GENERALTYPES_H */
/** @} */
