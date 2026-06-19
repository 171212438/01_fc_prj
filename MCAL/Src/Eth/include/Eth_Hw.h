/**
*   @file    Eth_Hw.h
*   @version 1.5.1

*   @brief   AUTOSAR ETH - Eth hardware access header file.
*   @details This file contains the ETH hardware access API and definition.
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

#ifndef ETH_HW_H
#define ETH_HW_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Eth_Hw_Types.h"
#include "Scm_Reg.h"

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/* Tx DESC control and status bits */
/** @brief Enhanced Normal Descriptor Launch Time Valid in descriptor read/write format */
#define ENET_ETDES4_LTV_MASK                (0x80000000u)
/** @brief Enhanced Normal Descriptor GCL Slot Number in descriptor read/write format */
#define ENET_ETDES4_GSN_MASK                (0x00000F00u)
/** @brief Enhanced Normal Descriptor Launch Time in descriptor read/write format */
#define ENET_ETDES4_LT_MASK                 (0x000000FFu)
/** @brief ETDES Launch Time Valid in enhanced normal descriptor read/write format */
#define ENET_ETDES4_LTV(x)                  (((uint32)(((uint32)(x)) << 31u)) & ENET_ETDES4_LTV_MASK)
/** @brief ETDES GCL slot number in enhanced normal descriptor read/write format */
#define ENET_ETDES4_GSN(x)                  (((uint32)(((uint32)(x)) << 8u)) & ENET_ETDES4_GSN_MASK)
/** @brief ETDES Launch Time in enhanced normal descriptor read/write format */
#define ENET_ETDES4_LT(x)                   (((uint32)(((uint32)(x)) << 0u)) & ENET_ETDES4_LT_MASK)
/** @brief Enhanced Normal Descriptor Launch Time in descriptor read format */
#define ENET_ETDES5_LT_MASK                 (0xFFFFFF00u)
/** @brief ETDES Launch Time in enhanced normal descriptor read/write format */
#define ENET_ETDES5_LT(x)                   (((uint32)((uint32)(x))) & ENET_ETDES5_LT_MASK)

/* TDESC2 (read format) */
/** @brief DMA TX descriptor Transmit Complete Interrupt Enable */
#define ENET_TDES2_IOC_MASK                 (0x80000000U)
/** @brief DMA TX descriptor TX Timestamp Enable */
#define ENET_TDES2_TTSE_MASK                (0x40000000U)
/** @brief DMA TX descriptor TX VLAN Tag Control */
#define ENET_TDES2_VTIR(x)                  (((uint32)(((uint32)(x)) << 14U)) & 0x0000C000U)
/** @brief DMA TX descriptor TX Buffer1 Length */
#define ENET_TDES2_BUFFER1_LEN(x)           (((uint32)(((uint32)(x)) << 0U)) & 0x00003FFFU)
/** @brief DMA TX descriptor TX Buffer2 Length */
#define ENET_TDES2_BUFFER2_LEN(x)           (((uint32)(((uint32)(x)) << 16U)) & 0x3FFF0000U)

/* TDESC3 (read format) */
/** @brief DMA TX descriptor CRC Pad Control */
#define ENET_TDES3_CPC(x)                   (((uint32)(((uint32)(x)) << 26U)) & 0x0C000000U)
/** @brief DMA TX descriptor Checksum Insertion Control */
#define ENET_TDES3_CIC(x)                   (((uint32)(((uint32)(x)) << 16U)) & 0x00030000U)
/** @brief DMA TX descriptor First Descriptor */
#define ENET_TDES3_FD_MASK                  (0x20000000U)
/** @brief DMA TX descriptor Last Descriptor */
#define ENET_TDES3_LD_MASK                  (0x10000000U)
/** @brief DMA TX descriptor TCP/UDP Header Length */
#define ENET_TDES3_THL(x)                   (((uint32)(((uint32)(x)) << 19U)) & 0x00780000U)
/** @brief DMA TX descriptor TCP Segmentation Enable */
#define ENET_TDES3_TSE_MASK                 (0x00040000U)
/** @brief DMA TX descriptor TCP Payload Length Mask */
#define ENET_TDES3_TPL_MASK                 (0x0003FFFFU)
/** @brief DMA TX descriptor TCP Payload Length */
#define ENET_TDES3_TPL(x)                   (((uint32)(((uint32)(x)) << 0U)) & 0x0003FFFFU)
/** @brief DMA TX descriptor Frame Length Mask */
#define ENET_TDES3_FL_MASK                  (0x00007FFFU)
/** @brief DMA TX descriptor Frame Length */
#define ENET_TDES3_FL(x)                    (((uint32)(((uint32)(x)) << 0U)) & 0x00007FFFU)

/* TDESC3 (write back format) */
/** @brief DMA TX descriptor Tx Timestamp Status  */
#define ENET_TDES3_TTSS_MASK                (0x00020000U)

/* TDESC2 (context format) */
/** @brief DMA TX descriptor Inner VLAN Tag */
#define ENET_TDES2_IVT(x)                   (((uint32)(((uint32)(x)) << 16U)) & 0xFFFF0000U)
/** @brief DMA TX descriptor Maximum Segment Size */
#define ENET_TDES2_MSS(x)                   (((uint32)(((uint32)(x)) << 0U)) & 0x00003FFFU)

/* TDESC3 (context format) */
/** @brief DMA TX descriptor One-Step Timestamp Correction Input or MSS Valid  */
#define ENET_TDES3_TCMSSV_MASK              (0x04000000U)
/** @brief DMA TX descriptor Inner VLAN Tag Control */
#define ENET_TDES3_IVTIR(x)                 (((uint32)(((uint32)(x)) << 18U)) & 0x000C0000U)
/** @brief DMA TX descriptor Inner VLAN Tag Valid */
#define ENET_TDES3_IVLTV_MASK               (0x00020000U)
/** @brief DMA TX descriptor VLAN Tag Valid */
#define ENET_TDES3_VLTV_MASK                (0x00010000U)
/** @brief DMA TX descriptor VLAN Tag */
#define ENET_TDES3_VT(x)                    (((uint32)(((uint32)(x)) << 0U)) & 0x0000FFFFU)

/* Rx DESC control and status bits */
/* RDES3 (read format) */
/** @brief DMA RX descriptor Interrupt Enabled on Completion  */
#define ENET_RDES3_IOC_MASK                 (0x40000000U)
/** @brief DMA RX descriptor Buffer 1 Address Valid */
#define ENET_RDES3_BUFFER1_VALID_MASK       (0x01000000U)
/** @brief DMA RX descriptor Buffer 2 Address Valid */
#define ENET_RDES3_BUFFER2_VALID_MASK       (0x02000000U)

/* RDES0 (write back format) */
/** @brief DMA RX descriptor Inner VLAN Tag Mask */
#define ENET_RDES0_INNER_VLAN_TAG_MASK      (0xFFFF0000U)
/** @brief DMA RX descriptor Inner VLAN Tag Shift */
#define ENET_RDES0_INNER_VLAN_TAG_SHIFT     (16U)
/** @brief DMA RX descriptor Outer VLAN Tag */
#define ENET_RDES0_OUTER_VLAN_TAG_MASK      (0x0000FFFFU)

/* RDES1 (write back format) */
/** @brief DMA RX descriptor Timestamp Available */
#define ENET_RDES1_TIMESTAMP_AVAILABLE_MASK (0x00004000U)
/** @brief DMA RX descriptor IP Payload Error */
#define ENET_RDES1_IP_PAYLOAD_ERROR_MASK    (0x00000080U)
/** @brief DMA RX descriptor IPv6 header Present */
#define ENET_RDES1_IPV6_HEADER_MASK         (0x00000020U)
/** @brief DMA RX descriptor IPV4 Header Present */
#define ENET_RDES1_IPV4_HEADER_MASK         (0x00000010U)
/** @brief DMA RX descriptor IP Header Error */
#define ENET_RDES1_IP_HEADER_ERROR_MASK     (0x00000008U)
/** @brief DMA RX descriptor Payload Type */
#define ENET_RDES1_IP_PAYLOAD_TYPE_MASK     (0x00000007U)

/* RDES3 (write-back format) */
/** @brief DMA RX descriptor First Descriptor */
#define ENET_RDES3_FD_MASK                  (0x20000000U)
/** @brief DMA RX descriptor Last Descriptor */
#define ENET_RDES3_LD_MASK                  (0x10000000U)
/** @brief DMA RX descriptor Packet Length */
#define ENET_RDES3_PACKET_LENGTH_MASK       (0x00007FFFU)
/** @brief DMA RX descriptor Receive Status RDES0 Valid */
#define ENET_RDES3_RDES0_VALID_MASK         (0x02000000U)
/** @brief DMA RX descriptor Receive Status RDES1 Valid */
#define ENET_RDES3_RDES1_VALID_MASK         (0x04000000U)
/** @brief DMA RX descriptor Receive Status RDES2 Valid */
#define ENET_RDES3_RDES2_VALID_MASK         (0x08000000U)

/* DESC owner bit for all format */
/** @brief DMA descriptor Own Bit */
#define ENET_DES3_OWN_MASK                  (0x80000000U)
/** @brief DMA descriptor Context Descriptor bit */
#define ENET_DES3_CTXT_MASK                 (0x40000000U)

/** @brief ENET GCL interval time width */
#define ENET_EST_INTERVAL_WIDTH             (24U)
/** @brief ENET GCL interval time mask */
#define ENET_EST_INTERVAL_MASK              (0xFFFFFFU)
/** @brief ENET GCL gate mask */
#define ENET_EST_GATE_MASK                  (0x3U)

/*==================================================================================================
*                                   LOCAL INLINE FUNCTION PROTOTYPES
==================================================================================================*/

/**
 * @brief Set ENET TX clock source
 *
 * @param [in] pScm the base address of the SCM instance
 * @param [in] u8Clk ENET TX clock source
 */
LOCAL_INLINE void ENET_HWA_SCM_TxClkSelect(SCM_Type *const pScm, uint8 u8Clk)
{
    pScm->SCM_ENET = (pScm->SCM_ENET & ~SCM_ENET_ENET_TXCLK_SEL_MASK) |
                     SCM_ENET_ENET_TXCLK_SEL(u8Clk);
}

/**
 * @brief Set ENET TX clock divider source
 *
 * @param [in] pScm the base address of the SCM instance
 * @param [in] u8Clk ENET TX clock divider source
 */
LOCAL_INLINE void ENET_HWA_SCM_TxClkSrcSelect(SCM_Type *const pScm, uint8 u8Clk)
{
#if (DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B)
    (void)pScm;
    (void)u8Clk;
#else
    pScm->PERI_CLKDIV = (pScm->PERI_CLKDIV & ~SCM_PERI_CLKDIV_ENET_CLK_SEL_MASK) |
                        SCM_PERI_CLKDIV_ENET_CLK_SEL(u8Clk);
#endif
}

/**
 * @brief Set ENET TX clock source divider value
 *
 * @param [in] pScm the base address of the SCM instance
 * @param [in] u8Div ENET TX clock divider value
 */
LOCAL_INLINE void ENET_HWA_SCM_TxClkSrcDivider(SCM_Type *const pScm, uint8 u8Div)
{
#if (DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B)
    pScm->PERI_CLKDIV = (pScm->PERI_CLKDIV & ~SCM_PERI_CLKDIV_ENET_PLL0_DIV_MASK) |
                        SCM_PERI_CLKDIV_ENET_PLL0_DIV(u8Div);
#else
    pScm->PERI_CLKDIV = (pScm->PERI_CLKDIV & ~SCM_PERI_CLKDIV_ENET_CLKDIV_MASK) |
                        SCM_PERI_CLKDIV_ENET_CLKDIV(u8Div);
#endif
}

/**
 * @brief Set ENET TX clock source divider enable
 *
 * @param [in] pScm the base address of the SCM instance
 * @param [in] bEnable Enable or disable ENET TX clock source divider
 */
LOCAL_INLINE void ENET_HWA_SCM_TxClkSrcDivEnable(SCM_Type *const pScm, boolean bEnable)
{
#if (DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B)
    pScm->PERI_CLKDIV = (pScm->PERI_CLKDIV & ~SCM_PERI_CLKDIV_ENET_PLL0_DIVEN_MASK) |
                        SCM_PERI_CLKDIV_ENET_PLL0_DIVEN(bEnable);
#else
    pScm->PERI_CLKDIV = (pScm->PERI_CLKDIV & ~SCM_PERI_CLKDIV_ENET_CLKDIV_EN_MASK) |
                        SCM_PERI_CLKDIV_ENET_CLKDIV_EN(bEnable);
#endif
}

/**
 * @brief Set ENET TX clock output enable
 *
 * @param [in] pScm the base address of the SCM instance
 * @param [in] bEnable Enable or disable TX clock output
 */
LOCAL_INLINE void ENET_HWA_SCM_TxClkOutputEnable(SCM_Type *const pScm, boolean bEnable)
{
    pScm->SCM_ENET = (pScm->SCM_ENET & ~SCM_ENET_MII_TX_CLK_OBE_MASK) |
                     SCM_ENET_MII_TX_CLK_OBE(bEnable);
}

/**
 * @brief Set ENET RGMII clock source
 *
 * @param [in] pScm the base address of the SCM instance
 * @param [in] u8Clk ENET RGMII clock source
 */
LOCAL_INLINE void ENET_HWA_SCM_RgmiiClkSelect(SCM_Type *const pScm, uint8 u8Clk)
{
#if (DEVICE_SERIES == FC7300F4MDDxxxxT1C)
    (void)pScm;
    (void)u8Clk;
#else
    pScm->SCM_ENET = (pScm->SCM_ENET & ~SCM_ENET_ENET_RGMII_CLK_SEL_MASK) |
                     SCM_ENET_ENET_RGMII_CLK_SEL(u8Clk);
#endif
}

/**
 * @brief Set PTP clock source
 *
 * @param [in] pScm the base address of the SCM instance
 * @param [in] u8Clk PTP clock source
 */
LOCAL_INLINE void ENET_HWA_SCM_PtpClkSelect(SCM_Type *const pScm, uint8 u8Clk)
{
    pScm->SCM_ENET = (pScm->SCM_ENET & ~SCM_ENET_PTPCLK_SEL_MASK) | SCM_ENET_PTPCLK_SEL(u8Clk);
}

/**
 * @brief Set phy interface mii mode
 *
 * @param [in] pScm the base address of the SCM instance
 * @param [in] eMode phy interface mode
 */
LOCAL_INLINE void ENET_HWA_MAC_SetPhyMiiMode(SCM_Type *const pScm, ENET_MAC_MiiModeType eMode)
{
    pScm->SCM_ENET = (pScm->SCM_ENET & ~SCM_ENET_PHY_SEL_MASK) | SCM_ENET_PHY_SEL(eMode);
}

/**
 * @brief Get the MAC Configuration Register value.
 *
 * @param [in] pEnet The base address of the ENET instance
 * @return  The Register value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetConfiguration(const ENET_Type *const pEnet)
{
    return pEnet->MAC_CONFIGURATION;
}

/**
 * @brief Set the MAC Configuration Register value.
 *
 * @param [in] pEnet The base address of the ENET instance
 * @param [in] u32Config The Configuration Register value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetConfiguration(ENET_Type *const pEnet, uint32 u32Config)
{
    pEnet->MAC_CONFIGURATION = u32Config;
}

/**
 * @brief Set checksum offload function enable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] bEnable 1U Enable or 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetIPChecksumOffloadEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_CONFIGURATION = (pEnet->MAC_CONFIGURATION & ~ENET_MAC_CONFIGURATION_IPC_MASK) |
                               ENET_MAC_CONFIGURATION_IPC(bEnable);
}

/**
 * @brief Set transmitter enable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] bEnable 1U Enable , 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTxEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_CONFIGURATION = (pEnet->MAC_CONFIGURATION & ~ENET_MAC_CONFIGURATION_TE_MASK) |
                               ENET_MAC_CONFIGURATION_TE(bEnable);
}

/**
 * @brief Set receiver enable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] bEnable 1U Enable , 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetRxEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_CONFIGURATION = (pEnet->MAC_CONFIGURATION & ~ENET_MAC_CONFIGURATION_RE_MASK) |
                               ENET_MAC_CONFIGURATION_RE(bEnable);
}

/**
 * @brief Set the MAC extended configuration register value
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] u32Configuration The configuration register value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetExtConfiguration(ENET_Type *const pEnet, uint32 u32Configuration)
{
    pEnet->MAC_EXT_CONFIGURATION = u32Configuration;
}

/**
 * @brief Set the MAC packet filter register value
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] u32FilterCtrl The filter control value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetPacketFilter(ENET_Type *const pEnet, uint32 u32FilterCtrl)
{
    pEnet->MAC_PACKET_FILTER = u32FilterCtrl;
}

/**
 * @brief Set receive all packets enable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] bEnable Enable or disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetReceiveAllEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_PACKET_FILTER = (pEnet->MAC_PACKET_FILTER & ~ENET_MAC_PACKET_FILTER_RA_MASK) |
                               ENET_MAC_PACKET_FILTER_RA(bEnable);
}

/**
 * @brief Set hash or perfect filter enable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] bEnable 1U Enable , 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetHashOrPerfectFilterEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_PACKET_FILTER = (pEnet->MAC_PACKET_FILTER & ~ENET_MAC_PACKET_FILTER_HPF_MASK) |
                               ENET_MAC_PACKET_FILTER_HPF(bEnable);
}

/**
 * @brief Set broadcast packets disable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] bDisable 1U disable , 0U enable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetBroadcastPacketDisableFlag(ENET_Type *const pEnet, uint8 bDisable)
{
    pEnet->MAC_PACKET_FILTER = (pEnet->MAC_PACKET_FILTER & (~ENET_MAC_PACKET_FILTER_DBF_MASK)) |
                               ENET_MAC_PACKET_FILTER_DBF(bDisable);
}

/**
 * @brief Set pass all the received multicast packets enable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] bEnable 1U enable , 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetPassAllMulticastEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_PACKET_FILTER = (pEnet->MAC_PACKET_FILTER & (~ENET_MAC_PACKET_FILTER_PM_MASK)) |
                               ENET_MAC_PACKET_FILTER_PM(bEnable);
}

/**
 * @brief Set hash or perfect multicast filter mode
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param eMode Hash or perfect multicast filter mode
 */
LOCAL_INLINE void ENET_HWA_MAC_SetHashOrPerfectMulticastMode(ENET_Type *const               pEnet,
                                                             ENET_MAC_HashOrPerfectModeType eMode)
{
    pEnet->MAC_PACKET_FILTER = (pEnet->MAC_PACKET_FILTER & ~ENET_MAC_PACKET_FILTER_HMC_MASK) |
                               ENET_MAC_PACKET_FILTER_HMC(eMode);
}

/**
 * @brief Set promiscuous mode enable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] bEnable 1U enable , 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetPromiscuousModeEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_PACKET_FILTER = (pEnet->MAC_PACKET_FILTER & ~ENET_MAC_PACKET_FILTER_PR_MASK) |
                               ENET_MAC_PACKET_FILTER_PR(bEnable);
}

/**
 * @brief Get the hash table first 32 bits value
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @return Hash table first 32 bits value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetHashTableFirst32Bits(const ENET_Type *const pEnet)
{
    return pEnet->MAC_HASH_TABLE_REG0;
}

/**
 * @brief Set the hash table first 32 bits value
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param u32Hash0 Hash table first 32 bits value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetHashTableFirst32Bits(ENET_Type *const pEnet, uint32 u32Hash0)
{
    pEnet->MAC_HASH_TABLE_REG0 = u32Hash0;
}

/**
 * @brief Get the hash table second 32 bits value
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @return Hash table second 32 bits value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetHashTableSecond32Bits(const ENET_Type *const pEnet)
{
    return pEnet->MAC_HASH_TABLE_REG1;
}

/**
 * @brief Set the hash table second 32 bits value
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] u32Hash1 Hash table second 32 bits value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetHashTableSecond32Bits(ENET_Type *const pEnet, uint32 u32Hash1)
{
    pEnet->MAC_HASH_TABLE_REG1 = u32Hash1;
}

/**
 * @brief Set Receive queue enable flag
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] eQueue Index of the queue.
 * @param [in] eEnable receive queue enable mode
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxQueueEnStatus(ENET_Type *const         pEnet,
                                                  ENET_MTL_QueueType       eQueue,
                                                  ENET_MTL_QueueEnableType eEnable)
{
    /* PRQA S 1891 ++ #Misra-C:2012 Rule-10.7 If a composite expression is used as one operand of
     *  an operator in which the usual arithmetic conversions are performed then the other operand
     *  shall not have wider essential type
     *  1891:A composite expression of 'essentially unsigned' type is being implicitly converted
     *  to a wider unsigned type.
     *  Reason: These conversion are needed here,because the eQueue id is defined as an enum type.
     */
    pEnet->MAC_RXQ_CTRL0 =
        ((pEnet->MAC_RXQ_CTRL0) &
         (~(ENET_MAC_RXQ_CTRL0_RXQ0EN_MASK
            << ((ENET_MAC_RXQ_CTRL0_RXQ1EN_SHIFT - ENET_MAC_RXQ_CTRL0_RXQ0EN_SHIFT) *
                ((uint32)eQueue))))) |
        (ENET_MAC_RXQ_CTRL0_RXQ0EN(eEnable)
         << ((ENET_MAC_RXQ_CTRL0_RXQ1EN_SHIFT - ENET_MAC_RXQ_CTRL0_RXQ0EN_SHIFT) * ((uint32)eQueue)));
    /* PRQA S 1891 -- */
}

/**
 * @brief Set receive queue priorities
 *
 * @param [in] pEnet the base address of the Ethernet instance
 * @param [in] eQueue queue id
 * @param [in] u8SelPrio priorities value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetRxQueueSelectedPriorities(ENET_Type *const   pEnet,
                                                            ENET_MTL_QueueType eQueue,
                                                            uint8              u8SelPrio)
{
    /* PRQA S 1891 ++ #Misra-C:2012 Rule-10.7 If a composite expression is used as one operand of
     *  an operator in which the usual arithmetic conversions are performed then the other operand
     *  shall not have wider essential type
     *  1891:A composite expression of 'essentially unsigned' type is being implicitly converted
     *  to a wider unsigned type.
     *  Reason: These conversion are needed here,because the eQueue id is defined as an enum type.
     */
    pEnet->MAC_RXQ_CTRL2 =
        ((pEnet->MAC_RXQ_CTRL2) &
         (~(ENET_MAC_RXQ_CTRL2_PSRQ0_MASK
            << ((ENET_MAC_RXQ_CTRL2_PSRQ1_SHIFT - ENET_MAC_RXQ_CTRL2_PSRQ0_SHIFT) *
                ((uint32)eQueue))))) |
        (ENET_MAC_RXQ_CTRL2_PSRQ0(u8SelPrio)
         << ((ENET_MAC_RXQ_CTRL2_PSRQ1_SHIFT - ENET_MAC_RXQ_CTRL2_PSRQ0_SHIFT) * ((uint32)eQueue)));
    /* PRQA S 1891 -- */
}

/**
 * @brief Set the MAC interrupts enable register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32IntEnable interrupts enable value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetInterruptEnable(ENET_Type *const pEnet, uint32 u32IntEnable)
{
    pEnet->MAC_INTERRUPT_ENABLE = u32IntEnable;
}

/**
 * @brief Set timestamp interrupt enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U Enable , 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampInterruptEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_INTERRUPT_ENABLE = (pEnet->MAC_INTERRUPT_ENABLE &
                                   (~ENET_MAC_INTERRUPT_ENABLE_TSIE_MASK)) |
                                  ENET_MAC_INTERRUPT_ENABLE_TSIE(bEnable);
}

/**
 * @brief Get MAC_DPP_FSM_Interrupt_Status register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MAC_DPP_FSM_Interrupt_Status value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetDppFsmIntStatus(const ENET_Type *const pEnet)
{
    return pEnet->MAC_DPP_FSM_INTERRUPT_STATUS;
}

/**
 * @brief Get FSM state parity feature enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return TRUE FSM state parity is enabled
 * @return FALSE FSM state parity is disabled
 */
LOCAL_INLINE boolean ENET_HWA_MAC_GetFsmControlParityEnFlag(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MAC_FSM_CONTROL & ENET_MAC_FSM_CONTROL_PRTYEN_MASK) >>
                       ENET_MAC_FSM_CONTROL_PRTYEN_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief Set FSM state parity feature enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U Enable , 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetFsmControlParityEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_FSM_CONTROL = (pEnet->MAC_FSM_CONTROL & (~ENET_MAC_FSM_CONTROL_PRTYEN_MASK)) |
                             ENET_MAC_FSM_CONTROL_PRTYEN(bEnable);
}

/**
 * @brief Get FSM timeout feature enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return TRUE FSM timeout is enabled
 * @return FALSE FSM timeout is disabled
 */
LOCAL_INLINE boolean ENET_HWA_MAC_GetFsmControlTimeoutEnFlag(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MAC_FSM_CONTROL & ENET_MAC_FSM_CONTROL_TMOUTEN_MASK) >>
                       ENET_MAC_FSM_CONTROL_TMOUTEN_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief Set FSM timeout feature enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U Enable , 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetFsmControlTimeoutEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_FSM_CONTROL = (pEnet->MAC_FSM_CONTROL & (~ENET_MAC_FSM_CONTROL_TMOUTEN_MASK)) |
                             ENET_MAC_FSM_CONTROL_TMOUTEN(bEnable);
}

/**
 * @brief Set normal mode FSM and other interface timeouts.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u8Timeout 0:Timer disabled, 1:1 us, 2:1.024 ms, 3:16.384 ms, 4:65.536 ms
 */
LOCAL_INLINE void ENET_HWA_MAC_SetFsmActTimerNormalTimeout(ENET_Type *const pEnet, uint8 u8Timeout)
{
    pEnet->MAC_FSM_ACT_TIMER = (pEnet->MAC_FSM_ACT_TIMER & (~ENET_MAC_FSM_ACT_TIMER_NTMRMD_MASK)) |
                               ENET_MAC_FSM_ACT_TIMER_NTMRMD(u8Timeout);
}

/**
 * @brief Set the CSR clocks required to generate 1 us tic.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u16Cycle CSR clock cycles.
 */
LOCAL_INLINE void ENET_HWA_MAC_SetFsmActTimerCsrClockCycle(ENET_Type *const pEnet, uint16 u16Cycle)
{
    pEnet->MAC_FSM_ACT_TIMER = (pEnet->MAC_FSM_ACT_TIMER & (~ENET_MAC_FSM_ACT_TIMER_TMR_MASK)) |
                               ENET_MAC_FSM_ACT_TIMER_TMR(u16Cycle);
}

/**
 * @brief Get MAC MDIO address register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MDIO address register value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetMDIOAddress(const ENET_Type *const pEnet)
{
    return pEnet->MAC_MDIO_ADDRESS;
}

/**
 * @brief Set MAC MDIO address register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32MDIOAddr MDIO address register value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetMDIOAddress(ENET_Type *const pEnet, uint32 u32MDIOAddr)
{
    pEnet->MAC_MDIO_ADDRESS = u32MDIOAddr;
}

/**
 * @brief Get MDIO data register value
 *
 * @param [in] pEnet the base address of the ENET instance
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetMDIOData(const ENET_Type *const pEnet)
{
    return pEnet->MAC_MDIO_DATA;
}

/**
 * @brief Set MDIO data register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Data data register value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetMDIOData(ENET_Type *const pEnet, uint32 u32Data)
{
    pEnet->MAC_MDIO_DATA = u32Data;
}

/**
 * @brief Enable TX frame preemption
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable or 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetFramePreemptionEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_FPE_CTRL_STS = (pEnet->MAC_FPE_CTRL_STS & ~ENET_MAC_FPE_CTRL_STS_EFPE_MASK) |
                              ENET_MAC_FPE_CTRL_STS_EFPE(bEnable);
}

/**
 * @brief Get MAC address0 high register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MAC address0 high register value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetMacAddr0High(const ENET_Type *const pEnet)
{
    return pEnet->MAC_ADDRESS0_HIGH;
}

/**
 * @brief Set MAC address0 high register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32AddrHigh MAC address0 high register value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetAddr0High(ENET_Type *const pEnet, uint32 u32AddrHigh)
{
    pEnet->MAC_ADDRESS0_HIGH = u32AddrHigh;
}

/**
 * @brief Get MAC address0 low register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MAC address0 low register value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetMacAddr0Low(const ENET_Type *const pEnet)
{
    return pEnet->MAC_ADDRESS0_LOW;
}

/**
 * @brief Set MAC address0 low register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32AddrLow MAC address0 low register value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetMacAddr0Low(ENET_Type *const pEnet, uint32 u32AddrLow)
{
    pEnet->MAC_ADDRESS0_LOW = u32AddrLow;
}

/* ================================================================ *
 *                 ENET MAC Management Counters (MMC)               *
 * ================================================================ */

/**
 * @brief Set MMC counters reset on read enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable or 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetMmcCounterResetOnReadEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MMC_CONTROL = (pEnet->MMC_CONTROL & ~ENET_MMC_CONTROL_RSTONRD_MASK) |
                         ENET_MMC_CONTROL_RSTONRD(bEnable);
}

/**
 * @brief Set MMC counters stop rollover enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable or 0U disable
 */
LOCAL_INLINE void ENET_HWA_MAC_SetMmcCounterStopRolloverEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MMC_CONTROL = (pEnet->MMC_CONTROL & ~ENET_MMC_CONTROL_CNTSTOPRO_MASK) |
                         ENET_MMC_CONTROL_CNTSTOPRO(bEnable);
}

/**
 * @brief Reset all MMC counters
 *
 * @param [in] pEnet the base address of the ENET instance
 */
LOCAL_INLINE void ENET_HWA_MAC_ResetMmcCounters(ENET_Type *const pEnet)
{
    pEnet->MMC_CONTROL |= ENET_MMC_CONTROL_CNTRST_MASK;
}

/**
 * @brief Set MMC interrupts mask of receive statistics counters
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Mask MMC interrupts mask value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetMmcRxInterruptMask(ENET_Type *const pEnet, uint32 u32Mask)
{
    pEnet->MMC_RX_INTERRUPT_MASK = u32Mask;
}

/**
 * @brief Set MMC interrupts mask of transmit statistics counters
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Mask MMC interrupts mask value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetMmcTxInterruptMask(ENET_Type *const pEnet, uint32 u32Mask)
{
    pEnet->MMC_TX_INTERRUPT_MASK = u32Mask;
}

/**
 * @brief Get transmitted bytes of good and bad packets
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxOctetCntGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->TX_OCTET_COUNT_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad packets transmitted
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->TX_PACKET_COUNT_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad unicast packets transmitted
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxUnicastPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->TX_UNICAST_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad multicast packets transmitted
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxMulticastPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->TX_MULTICAST_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad broadcast packets transmitted
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxBroadcastPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->TX_BROADCAST_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of successfully transmitted packets after a single collision in half-duplex
 *           mode.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxSingleCollisionGoodPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->TX_SINGLE_COLLISION_GOOD_PACKETS;
}

/**
 * @brief Get the number of successfully transmitted packets after a multiple collision in
 *           half-duplex mode.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxMultipleCollisionGoodPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->TX_MULTIPLE_COLLISION_GOOD_PACKETS;
}

/**
 * @brief Get the number of successfully transmitted packets after a deferral in half-duplex mode.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxDeferredPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->TX_DEFERRED_PACKETS;
}

/**
 * @brief Get the number of packets with transmit late collision error
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxLateCollisionPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->TX_LATE_COLLISION_PACKETS;
}

/**
 * @brief Get the number of packets with transmit excessive collision errors
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxExcessiveCollisionPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->TX_EXCESSIVE_COLLISION_PACKETS;
}

/**
 * @brief Get the number of good packets transmitted
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTxPacketCntGood(const ENET_Type *const pEnet)
{
    return pEnet->TX_PACKET_COUNT_GOOD;
}

/**
 * @brief Get the number of good and bad packets received
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxPacketCntGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->RX_PACKETS_COUNT_GOOD_BAD;
}

/**
 * @brief Get the number of bytes received in good and bad packets
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxOctetCntGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->RX_OCTET_COUNT_GOOD_BAD;
}

/**
 * @brief Get the number of good broadcast packets received
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxBroadcastPacketGood(const ENET_Type *const pEnet)
{
    return pEnet->RX_BROADCAST_PACKETS_GOOD;
}

/**
 * @brief Get the number of good multicast packets received
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxMulticastPacketGood(const ENET_Type *const pEnet)
{
    return pEnet->RX_MULTICAST_PACKETS_GOOD;
}

/**
 * @brief Get the number of packets received with CRC error
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxCRCErrorPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->RX_CRC_ERROR_PACKETS;
}

/**
 * @brief Get the number of packets received with alignment error
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxAlignmentErrorPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->RX_ALIGNMENT_ERROR_PACKETS;
}

/**
 * @brief Get the number of packets received with runt error
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxRuntErrorPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->RX_RUNT_ERROR_PACKETS;
}

/**
 * @brief Get the number of packets received with jabber error
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxJabberErrorPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->RX_JABBER_ERROR_PACKETS;
}

/**
 * @brief Get the number of packets received with length less than 64 bytes, without any errors
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxUndersizePacketGood(const ENET_Type *const pEnet)
{
    return pEnet->RX_UNDERSIZE_PACKETS_GOOD;
}

/**
 * @brief Get the number of packets received withouterrors and with length greater than maxsize
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxOverSizeGood(const ENET_Type *const pEnet)
{
    return pEnet->RX_OVERSIZE_PACKETS_GOOD;
}
/**
 * @brief Get the number of good and bad packets received with length 64 bytes
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRx64OctetPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->RX_64OCTETS_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad packets received with length between 65 and 127 bytes
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRx65To127OctetPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->RX_65TO127OCTETS_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad packets received with length between 128 and 255 bytes
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRx128To255OctetPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->RX_128TO255OCTETS_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad packets received with length between 256 and 511 bytes
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRx256To511OctetPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->RX_256TO511OCTETS_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad packets received with length between 512 and 1023 bytes
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRx512To1023OctetPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->RX_512TO1023OCTETS_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of good and bad packets received with length 1024 to maxsize bytes
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRx1024ToMaxOctetPacketGoodBad(const ENET_Type *const pEnet)
{
    return pEnet->RX_1024TOMAXOCTETS_PACKETS_GOOD_BAD;
}

/**
 * @brief Get the number of good unicast packets received
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxUnicastPacketGood(const ENET_Type *const pEnet)
{
    return pEnet->RX_UNICAST_PACKETS_GOOD;
}

/**
 * @brief Get the number of missed received packets because of FIFO overflow
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxFIFOOverflowPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->RX_FIFO_OVERFLOW_PACKETS;
}

/**
 * @brief Get the number of packets received with receive error or Packet Extension error
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return MMC counter value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetRxReceiveErrorPacketCnt(const ENET_Type *const pEnet)
{
    return pEnet->RX_RECEIVE_ERROR_PACKETS;
}

/* ================================================================ *
 *                     ENET MAC Timestamp Control                   *
 * ================================================================ */

/**
 * @brief Set time stamp control register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Ctrl time stamp control value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampControl(ENET_Type *const pEnet, uint32 u32Ctrl)
{
    pEnet->MAC_TIMESTAMP_CONTROL = u32Ctrl;
}

/**
 * @brief Set PTP timestamp rollover mode
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eCtrl timestamp rollover mode
 */
LOCAL_INLINE void ENET_HWA_MAC_SetIimestampRolloverCtrl(ENET_Type *const               pEnet,
                                                        ENET_MAC_TimestampRolloverType eCtrl)
{
    pEnet->MAC_TIMESTAMP_CONTROL =
        (pEnet->MAC_TIMESTAMP_CONTROL &
         ~(ENET_MAC_TIMESTAMP_CONTROL_TSCTRLSSR_MASK | ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_MASK |
           ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_MASK | ENET_MAC_TIMESTAMP_CONTROL_TSINIT_MASK)) |
        ENET_MAC_TIMESTAMP_CONTROL_TSCTRLSSR(eCtrl);
}

/**
 * @brief Get PTP addend register update status
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return ENET_MAC_StatusType
 */
LOCAL_INLINE ENET_MAC_StatusType ENET_HWA_MAC_GetAddendRegisterUpdateStatus(
    const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MAC_TIMESTAMP_CONTROL & ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_MASK) >>
                       ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     *  inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON: No problem doing these conversions as the values are within range of the cast type.
     */
    return (ENET_MAC_StatusType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Initiate the  addend register update operation
 *
 * @param [in] pEnet the base address of the ENET instance
 */
LOCAL_INLINE void ENET_HWA_MAC_UpdateAddendRegister(ENET_Type *const pEnet)
{
    pEnet->MAC_TIMESTAMP_CONTROL = (pEnet->MAC_TIMESTAMP_CONTROL &
                                    ~(ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_MASK |
                                      ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_MASK |
                                      ENET_MAC_TIMESTAMP_CONTROL_TSINIT_MASK)) |
                                   ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_MASK;
}

/**
 * @brief Get timestamp update status
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return ENET_MAC_StatusType
 */
LOCAL_INLINE ENET_MAC_StatusType ENET_HWA_MAC_GetTimestampUpdateStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MAC_TIMESTAMP_CONTROL & ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_MASK) >>
                       ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     *  inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON: No problem doing these conversions as the values are within range of the cast type.
     */
    return (ENET_MAC_StatusType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Initiate the timestamp update operation
 *
 * @param [in] pEnet the base address of the ENET instance
 */
LOCAL_INLINE void ENET_HWA_MAC_UpdateTimestamp(ENET_Type *const pEnet)
{
    pEnet->MAC_TIMESTAMP_CONTROL = (pEnet->MAC_TIMESTAMP_CONTROL &
                                    ~(ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_MASK |
                                      ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_MASK |
                                      ENET_MAC_TIMESTAMP_CONTROL_TSINIT_MASK)) |
                                   ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_MASK;
}

/**
 * @brief Get timestamp initialize status
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return ENET_MAC_StatusType
 */
LOCAL_INLINE ENET_MAC_StatusType ENET_HWA_MAC_GetTimestampInitStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MAC_TIMESTAMP_CONTROL & ENET_MAC_TIMESTAMP_CONTROL_TSINIT_MASK) >>
                       ENET_MAC_TIMESTAMP_CONTROL_TSINIT_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     *  inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON: No problem doing these conversions as the values are within range of the cast type.
     */
    return (ENET_MAC_StatusType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Initialize PTP timestamp
 *
 * @param [in] pEnet the base address of the ENET instance
 */
LOCAL_INLINE void ENET_HWA_MAC_InitTimestamp(ENET_Type *const pEnet)
{
    pEnet->MAC_TIMESTAMP_CONTROL = (pEnet->MAC_TIMESTAMP_CONTROL &
                                    ~(ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_MASK |
                                      ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_MASK |
                                      ENET_MAC_TIMESTAMP_CONTROL_TSINIT_MASK)) |
                                   ENET_MAC_TIMESTAMP_CONTROL_TSINIT_MASK;
}

/**
 * @brief Set timestamp update method (fine or coarse)
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eMethod (fine update or coarse update)
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampUpdateMethod(ENET_Type *const                   pEnet,
                                                        ENET_MAC_TimestampUpdateMethodType eMethod)
{
    pEnet->MAC_TIMESTAMP_CONTROL =
        (pEnet->MAC_TIMESTAMP_CONTROL &
         ~(ENET_MAC_TIMESTAMP_CONTROL_TSCFUPDT_MASK | ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_MASK |
           ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_MASK | ENET_MAC_TIMESTAMP_CONTROL_TSINIT_MASK)) |
        ENET_MAC_TIMESTAMP_CONTROL_TSCFUPDT(eMethod);
}

/**
 * @brief Set timestamp processing enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable or 0U disable timestamp processing
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MAC_TIMESTAMP_CONTROL =
        (pEnet->MAC_TIMESTAMP_CONTROL &
         ~(ENET_MAC_TIMESTAMP_CONTROL_TSENA_MASK | ENET_MAC_TIMESTAMP_CONTROL_TSADDREG_MASK |
           ENET_MAC_TIMESTAMP_CONTROL_TSUPDT_MASK | ENET_MAC_TIMESTAMP_CONTROL_TSINIT_MASK)) |
        ENET_MAC_TIMESTAMP_CONTROL_TSENA(bEnable);
}

/**
 * @brief Get timestamp processing enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return     TRUE: Timestamp processing is enabled
 *             FALSE: Timestamp processing is disabled
 */
LOCAL_INLINE boolean ENET_HWA_MAC_GetTimestampEnFlag(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MAC_TIMESTAMP_CONTROL & ENET_MAC_TIMESTAMP_CONTROL_TSENA_MASK) >>
                       ENET_MAC_TIMESTAMP_CONTROL_TSENA_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief Set PTP sub-second increment register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Increment increment value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetSubSecondIncrementReg(ENET_Type *const pEnet, uint32 u32Increment)
{
    pEnet->MAC_SUB_SECOND_INCREMENT = u32Increment;
}

/**
 * @brief Get PTP system time seconds
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return seconds value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetSystemTimeSeconds(const ENET_Type *const pEnet)
{
    return pEnet->MAC_SYSTEM_TIME_SECONDS;
}

/**
 * @brief Get PTP system time nanoseconds
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return nanoseconds value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetSystemTimeNanoSeconds(const ENET_Type *const pEnet)
{
    return pEnet->MAC_SYSTEM_TIME_NANOSECONDS;
}

/**
 * @brief Set PTP system time seconds update register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Seconds seconds update register value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetSystemTimeSecondsUpdateValue(ENET_Type *const pEnet,
                                                               uint32           u32Seconds)
{
    pEnet->MAC_SYSTEM_TIME_SECONDS_UPDATE = u32Seconds;
}

/**
 * @brief Set PTP system time update operation,add or subtract time
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eOperation add or subtract time
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimeUpdateOperation(ENET_Type *const                 pEnet,
                                                      ENET_MAC_SystemTimeOperationType eOperation)
{
    pEnet->MAC_SYSTEM_TIME_NANOSECONDS_UPDATE =
        (pEnet->MAC_SYSTEM_TIME_NANOSECONDS_UPDATE &
         ~ENET_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE_ADDSUB_MASK) |
        ENET_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE_ADDSUB(eOperation);
}

/**
 * @brief Set PTP system time nanoseconds update value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32NanoSeconds nanoseconds update value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetSystemTimeNanoSecondsUpdateValue(ENET_Type *const pEnet,
                                                                   uint32           u32NanoSeconds)
{
    pEnet->MAC_SYSTEM_TIME_NANOSECONDS_UPDATE =
        (pEnet->MAC_SYSTEM_TIME_NANOSECONDS_UPDATE &
         ~ENET_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE_TSSS_MASK) |
        ENET_MAC_SYSTEM_TIME_NANOSECONDS_UPDATE_TSSS(u32NanoSeconds);
}

/**
 * @brief Get PTP timestamp addend register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return timestamp addend value
 */
LOCAL_INLINE uint32 ENET_HWA_MAC_GetTimestampAddend(const ENET_Type *const pEnet)
{
    return pEnet->MAC_TIMESTAMP_ADDEND;
}

/**
 * @brief Set PTP timestamp addend register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Time timestamp addend value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampAddend(ENET_Type *const pEnet, uint32 u32Time)
{
    pEnet->MAC_TIMESTAMP_ADDEND = u32Time;
}

/**
 * @brief Get PTP system time seconds bits[47:32] value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return seconds bits[47:32] value
 */
LOCAL_INLINE uint16 ENET_HWA_MAC_GetSystemTimeHigherWordSeconds(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS &
                        ENET_MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS_TSHWR_MASK) >>
                       ENET_MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS_TSHWR_SHIFT;
    return (uint16)u32TmpVal;
}

/**
 * @brief Set PTP system time seconds bits[47:32] value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u16Seconds seconds bits[47:32] value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetSystemTimeHigherWordSeconds(ENET_Type *const pEnet,
                                                              uint16           u16Seconds)
{
    pEnet->MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS = ENET_MAC_SYSTEM_TIME_HIGHER_WORD_SECONDS_TSHWR(
        u16Seconds);
}

/**
 * @brief  Set timestamp ingress correction in nanoseconds, used for timestamp in ingress path
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] s32NanoSec  correction value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampIngressCorrectionInNanoseconds(ENET_Type *const pEnet,
                                                                          sint32 s32NanoSec)
{
    pEnet->MAC_TIMESTAMP_INGRESS_CORR_NANOSECOND = (uint32)s32NanoSec;
}

/**
 * @brief  Set timestamp egress correction in nanoseconds, used for timestamp in egress path
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] s32NanoSec  correction value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampEgressCorrectionInNanoseconds(ENET_Type *const pEnet,
                                                                         sint32 s32NanoSec)
{
    pEnet->MAC_TIMESTAMP_EGRESS_CORR_NANOSECOND = (uint32)s32NanoSec;
}

/**
 * @brief  Set timestamp ingress correction in sub-nanoseconds, used for timestamp in ingress path
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] s8SubNanoSec  correction value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampIngressCorrectionInSubNanoseconds(ENET_Type *const pEnet,
                                                                             sint8 s8SubNanoSec)
{
    pEnet->MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC =
        ENET_MAC_TIMESTAMP_INGRESS_CORR_SUBNANOSEC_TSICSNS(s8SubNanoSec);
}

/**
 * @brief  Set timestamp egress correction in sub-nanoseconds, used for timestamp in egress path
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] s8SubNanoSec  correction value
 */
LOCAL_INLINE void ENET_HWA_MAC_SetTimestampEgressCorrectionInSubNanoseconds(ENET_Type *const pEnet,
                                                                            sint8 s8SubNanoSec)
{
    pEnet->MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC = ENET_MAC_TIMESTAMP_EGRESS_CORR_SUBNANOSEC_TSECSNS(
        s8SubNanoSec);
}

/* ================================================================ *
 *                  ENET MTL Configuration and Status               *
 * ================================================================ */

/**
 * @brief  Set MTL operation mode register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32OpMode MTL operation mode
 */
LOCAL_INLINE void ENET_HWA_MTL_SetOperationMode(ENET_Type *const pEnet, uint32 u32OpMode)
{
    pEnet->MTL.OPERATION_MODE = u32OpMode;
}

/**
 * @brief  Set DA-based DMA channel selection enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] bEnable 1U enable or 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxDABasedDMAChannelSelectionEnFlag(ENET_Type *const   pEnet,
                                                                     ENET_MTL_QueueType eQueue,
                                                                     uint8              bEnable)
{
    /* PRQA S 1891 ++ #Misra-C:2012 Rule-10.7 If a composite expression is used as one operand of
     *  an operator in which the usual arithmetic conversions are performed then the other operand
     *  shall not have wider essential type
     *  1891:A composite expression of 'essentially unsigned' type is being implicitly converted
     *  to a wider unsigned type.
     *  Reason: These conversion are needed here,because the eQueue id is defined as an enum type.
     */
    pEnet->MTL.RXQ_DMA_MAP0 =
        ((pEnet->MTL.RXQ_DMA_MAP0) &
         (~(ENET_MTL_RXQ_DMA_MAP0_Q0DDMACH_MASK
            << ((ENET_MTL_RXQ_DMA_MAP0_Q1DDMACH_SHIFT - ENET_MTL_RXQ_DMA_MAP0_Q0DDMACH_SHIFT) *
                ((uint32)eQueue))))) |
        (ENET_MTL_RXQ_DMA_MAP0_Q0DDMACH(bEnable)
         << ((ENET_MTL_RXQ_DMA_MAP0_Q1DDMACH_SHIFT - ENET_MTL_RXQ_DMA_MAP0_Q0DDMACH_SHIFT) *
             ((uint32)eQueue)));
    /* PRQA S 1891 -- */
}

/**
 * @brief  Set DMA channel mapped to eQueue
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxDMAChannelMap(ENET_Type *const     pEnet,
                                                  ENET_MTL_QueueType   eQueue,
                                                  ENET_DMA_ChannelType eDMAChannel)
{
    /* PRQA S 1891 ++ #Misra-C:2012 Rule-10.7 If a composite expression is used as one operand of
     *  an operator in which the usual arithmetic conversions are performed then the other operand
     *  shall not have wider essential type
     *  1891:A composite expression of 'essentially unsigned' type is being implicitly converted
     *  to a wider unsigned type.
     *  Reason: These conversion are needed here,because the eQueue id is defined as an enum type.
     */
    pEnet->MTL.RXQ_DMA_MAP0 =
        ((pEnet->MTL.RXQ_DMA_MAP0) &
         (~(ENET_MTL_RXQ_DMA_MAP0_Q0MDMACH_MASK
            << ((ENET_MTL_RXQ_DMA_MAP0_Q1MDMACH_SHIFT - ENET_MTL_RXQ_DMA_MAP0_Q0MDMACH_SHIFT) *
                ((uint32)eQueue))))) |
        (ENET_MTL_RXQ_DMA_MAP0_Q0MDMACH(eDMAChannel)
         << ((ENET_MTL_RXQ_DMA_MAP0_Q1MDMACH_SHIFT - ENET_MTL_RXQ_DMA_MAP0_Q0MDMACH_SHIFT) *
             ((uint32)eQueue)));
    /* PRQA S 1891 -- */
}

/**
 * @brief  Get enhancements to scheduled transmission control register value

 * @param [in] pEnet the base address of the ENET instance
 * @return uint32 EST control value
 */
LOCAL_INLINE uint32 ENET_HWA_MTL_GetEstControl(const ENET_Type *const pEnet)
{
    return pEnet->MTL.EST_CONTROL;
}

/**
 * @brief  Set enhancements to scheduled transmission control register value
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32EstControl EST control value
 */
LOCAL_INLINE void ENET_HWA_MTL_SetEstControl(ENET_Type *const pEnet, uint32 u32EstControl)
{
    pEnet->MTL.EST_CONTROL = u32EstControl;
}

/**
 * @brief Set GCL address or GCL related registers address depend on GCRR bit

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u16Address GCL address or GCL related registers address
 */
LOCAL_INLINE void ENET_HWA_MTL_SetEstGateControlListAddress(ENET_Type *const pEnet, uint16 u16Address)
{
    pEnet->MTL.EST_GCL_CONTROL = (pEnet->MTL.EST_GCL_CONTROL & (~ENET_MTL_EST_GCL_CONTROL_ADDR_MASK)) |
                                 ENET_MTL_EST_GCL_CONTROL_ADDR(u16Address);
}

/**
 * @brief Set gate control releated registers enable flag

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable or 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetGateControlReleatedRegistersEnFlag(ENET_Type *const pEnet,
                                                                     uint8            bEnable)
{
    pEnet->MTL.EST_GCL_CONTROL = (pEnet->MTL.EST_GCL_CONTROL & (~ENET_MTL_EST_GCL_CONTROL_GCRR_MASK)) |
                                 ENET_MTL_EST_GCL_CONTROL_GCRR(bEnable);
}

/**
 * @brief Set GCL operation mode (read or write)

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eOperation (read or write)
 */
LOCAL_INLINE void ENET_HWA_MTL_SetGclOperation(ENET_Type *const          pEnet,
                                               ENET_MTL_GclOperationType eOperation)
{
    pEnet->MTL.EST_GCL_CONTROL = (pEnet->MTL.EST_GCL_CONTROL & (~ENET_MTL_EST_GCL_CONTROL_R1W0_MASK)) |
                                 ENET_MTL_EST_GCL_CONTROL_R1W0(eOperation);
}

/**
 * @brief Get GCL operation busy status

 * @param [in] pEnet the base address of the ENET instance
 * @return 1U  Start Read/Write operation is enabled,status is busy
 * @return 0U Start Read/Write operation is disabled,status is idle
 */
LOCAL_INLINE uint8 ENET_HWA_MTL_GetGclOperationBusyState(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MTL.EST_GCL_CONTROL & ENET_MTL_EST_GCL_CONTROL_SRWO_MASK) >>
                       ENET_MTL_EST_GCL_CONTROL_SRWO_SHIFT;
    return (uint8)u32TmpVal;
}

/**
 * @brief Start GCL Read/Write operation

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U start operation, 0U no effect
 */
LOCAL_INLINE void ENET_HWA_MTL_SetGclOperationStartFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.EST_GCL_CONTROL = (pEnet->MTL.EST_GCL_CONTROL & (~ENET_MTL_EST_GCL_CONTROL_SRWO_MASK)) |
                                 ENET_MTL_EST_GCL_CONTROL_SRWO(bEnable);
}

/**
 * @brief Set GCL data register value

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Data data to set
 */
LOCAL_INLINE void ENET_HWA_MTL_SetGclData(ENET_Type *const pEnet, uint32 u32Data)
{
    pEnet->MTL.EST_GCL_DATA = u32Data;
}

/**
 * @brief  Set the corresponding Queue classified as express or preemptable.
 * @details Set the Classification of Queues.A bit indicates a queue, when '1' indicates the
 *             corresponding Queue must be classified as preemptable, when '0' Queue is classified
 *             as express.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u8value Preemption classification value
 */
LOCAL_INLINE void ENET_HWA_MTL_SetPreemptionClassification(ENET_Type *const pEnet, uint8 u8value)
{
    pEnet->MTL.FPE_CTRL_STS = (pEnet->MTL.FPE_CTRL_STS & ~ENET_MTL_FPE_CTRL_STS_PEC_MASK) |
                              ENET_MTL_FPE_CTRL_STS_PEC(u8value);
}

/**
 * @brief  Set the maximum time in nanoseconds that can elapse between issuing a RELEASE to the MAC
 *            and the MAC being ready to resume transmission of preemptable frames.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u16value Release Advance time value
 */
LOCAL_INLINE void ENET_HWA_MTL_SetPreemptionReleaseAdvance(ENET_Type *const pEnet, uint16 u16value)
{
    pEnet->MTL.FPE_ADVANCE = (pEnet->MTL.FPE_ADVANCE & ~ENET_MTL_FPE_ADVANCE_RADV_MASK) |
                             ENET_MTL_FPE_ADVANCE_RADV(u16value);
}

/**
 * @brief  Set the maximum time in nanoseconds that can elapse between issuing a HOLD to the MAC
 *            and the MAC ceasing to transmit any preemptable frame.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u16value Hold Advance time value
 */
LOCAL_INLINE void ENET_HWA_MTL_SetPreemptionHoldAdvance(ENET_Type *const pEnet, uint16 u16value)
{
    pEnet->MTL.FPE_ADVANCE = (pEnet->MTL.FPE_ADVANCE & ~ENET_MTL_FPE_ADVANCE_HADV_MASK) |
                             ENET_MTL_FPE_ADVANCE_HADV(u16value);
}

/**
 * @brief  Get the ECC Control register value.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return  ECC Control register value.
 */
LOCAL_INLINE uint32 ENET_HWA_MTL_GetEccControl(const ENET_Type *const pEnet)
{
    return pEnet->MTL.ECC_CONTROL;
}

/**
 * @brief  Enable the ECC protection for EST Gate Control List memory.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable, 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetEccControlEstEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.ECC_CONTROL = (pEnet->MTL.ECC_CONTROL & ~ENET_MTL_ECC_CONTROL_MESTEE_MASK) |
                             ENET_MTL_ECC_CONTROL_MESTEE(bEnable);
}

/**
 * @brief  Enable the ECC protection for MTL RX FIFO memory.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable, 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetEccControlRxFifoEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.ECC_CONTROL = (pEnet->MTL.ECC_CONTROL & ~ENET_MTL_ECC_CONTROL_MRXEE_MASK) |
                             ENET_MTL_ECC_CONTROL_MRXEE(bEnable);
}

/**
 * @brief  Enable the ECC protection for MTL TX FIFO memory.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable, 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetEccControlTxFifoEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.ECC_CONTROL = (pEnet->MTL.ECC_CONTROL & ~ENET_MTL_ECC_CONTROL_MTXEE_MASK) |
                             ENET_MTL_ECC_CONTROL_MTXEE(bEnable);
}

/**
 * @brief Enable correctable error interrupt for EST memory ECC protection.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable, 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetEstMemCorrectableErrIntEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.ECC_INTERRUPT_ENABLE = (pEnet->MTL.ECC_INTERRUPT_ENABLE &
                                       (~ENET_MTL_ECC_INTERRUPT_ENABLE_ECEIE_MASK)) |
                                      ENET_MTL_ECC_INTERRUPT_ENABLE_ECEIE(bEnable);
}

/**
 * @brief Enable correctable error interrupt for Rx memory ECC protection.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable, 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxMemCorrectableErrIntEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.ECC_INTERRUPT_ENABLE = (pEnet->MTL.ECC_INTERRUPT_ENABLE &
                                       (~ENET_MTL_ECC_INTERRUPT_ENABLE_RXCEIE_MASK)) |
                                      ENET_MTL_ECC_INTERRUPT_ENABLE_RXCEIE(bEnable);
}

/**
 * @brief  Enable correctable error interrupt for Tx memory ECC protection.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable, 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTxMemCorrectableErrIntEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.ECC_INTERRUPT_ENABLE = (pEnet->MTL.ECC_INTERRUPT_ENABLE &
                                       (~ENET_MTL_ECC_INTERRUPT_ENABLE_TXCEIE_MASK)) |
                                      ENET_MTL_ECC_INTERRUPT_ENABLE_TXCEIE(bEnable);
}

/**
 * @brief  Get MTL ECC interrupt status.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return  MTL ECC interrupt status.
 */
LOCAL_INLINE uint32 ENET_HWA_MTL_GetEccInterruptStatus(const ENET_Type *const pEnet)
{
    return pEnet->MTL.ECC_INTERRUPT_STATUS;
}

/**
 * @brief  Clear MTL ECC interrupt status.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Status The status bits to be cleared.
 */
LOCAL_INLINE void ENET_HWA_MTL_ClearEccInterruptStatus(ENET_Type *const pEnet, uint32 u32Status)
{
    pEnet->MTL.ECC_INTERRUPT_STATUS =
        (pEnet->MTL.ECC_INTERRUPT_STATUS & (~ENET_MTL_ECC_INTERRUPT_STATUS_MASK)) | u32Status;
}

/**
 * @brief  Set the MTL Data Path Odd Parity enable flag.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable, 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetDppOddParityEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.DPP_CONTROL = (pEnet->MTL.DPP_CONTROL & ~ENET_MTL_DPP_CONTROL_OPE_MASK) |
                             ENET_MTL_DPP_CONTROL_OPE(bEnable);
}

/**
 * @brief  Get MTL Data Path Parity Protection enable flag.
 *
 * @param [in] pEnet the base address of the ENET instance.
 * @return TRUE Data Path Parity Protection is enabled.
 * @return FALSE Data Path Parity Protection is not enabled.
 */
LOCAL_INLINE boolean ENET_HWA_MTL_GetDppProtectionEnFlag(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MTL.DPP_CONTROL & ENET_MTL_DPP_CONTROL_EDPP_MASK) >>
                       ENET_MTL_DPP_CONTROL_EDPP_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief  Set MTL Data Path Parity Protection enable flag.
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] bEnable 1U enable, 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetDppProtectionEnFlag(ENET_Type *const pEnet, uint8 bEnable)
{
    pEnet->MTL.DPP_CONTROL = (pEnet->MTL.DPP_CONTROL & ~ENET_MTL_DPP_CONTROL_EDPP_MASK) |
                             ENET_MTL_DPP_CONTROL_EDPP(bEnable);
}

/**
 * @brief Set MTL transmit queue size

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] u8QueueSize  queue size in blocks of 256 bytes,range(0~15)
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTxQueueSize(ENET_Type *const   pEnet,
                                              ENET_MTL_QueueType eQueue,
                                              uint8              u8QueueSize)
{
    pEnet->MTL.QUEUE[eQueue].TX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].TX_OPERATION_MODE &
                                                  ~ENET_MTL_TXQ0_OPERATION_MODE_TQS_MASK) |
                                                 ENET_MTL_TXQ0_OPERATION_MODE_TQS(u8QueueSize);
}

/**
 * @brief Set the threshold level of the MTL Tx Queue
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] eThreshold  threshold level
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTxThreshold(ENET_Type *const         pEnet,
                                              ENET_MTL_QueueType       eQueue,
                                              ENET_MTL_TxThresholdType eThreshold)
{
    pEnet->MTL.QUEUE[eQueue].TX_OPERATION_MODE =
        (pEnet->MTL.QUEUE[eQueue].TX_OPERATION_MODE &
         ~(ENET_MTL_TXQ0_OPERATION_MODE_TTC_MASK | ENET_MTL_TXQ0_OPERATION_MODE_TSF_MASK)) |
        (ENET_MTL_TXQ0_OPERATION_MODE_TTC(eThreshold) |
         ENET_MTL_TXQ0_OPERATION_MODE_TSF((uint32)eThreshold >>
                                          ENET_MTL_TXQ0_OPERATION_MODE_TTC_WIDTH));
}

/**
 * @brief Set the transmit queue enable mode

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] eEnable  queue enable mode
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTxQueueEnStatus(ENET_Type *const         pEnet,
                                                  ENET_MTL_QueueType       eQueue,
                                                  ENET_MTL_QueueEnableType eEnable)
{
    pEnet->MTL.QUEUE[eQueue].TX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].TX_OPERATION_MODE &
                                                  ~ENET_MTL_TXQ0_OPERATION_MODE_TXQEN_MASK) |
                                                 ENET_MTL_TXQ0_OPERATION_MODE_TXQEN(eEnable);
}

/**
 * @brief Flush transmit queue
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 */
LOCAL_INLINE void ENET_HWA_MTL_FlushTxQueue(ENET_Type *const pEnet, ENET_MTL_QueueType eQueue)
{
    pEnet->MTL.QUEUE[eQueue].TX_OPERATION_MODE |= ENET_MTL_TXQ0_OPERATION_MODE_FTQ_MASK;
}

/**
 * @brief Set AV algorithm for strict priority or credit based shaper.

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] bEnable 1U use credit based shaper or 0U use strict priority.
 */
LOCAL_INLINE void ENET_HWA_MTL_SetAVAlgorithmCBSEnFlag(ENET_Type *const   pEnet,
                                                       ENET_MTL_QueueType eQueue,
                                                       uint8              bEnable)
{
    pEnet->MTL.QUEUE[eQueue].TX_ETS_CONTROL = (pEnet->MTL.QUEUE[eQueue].TX_ETS_CONTROL &
                                               ~ENET_MTL_TXQ1_ETS_CONTROL_AVALG_MASK) |
                                              ENET_MTL_TXQ1_ETS_CONTROL_AVALG(bEnable);
}

/**
 * @brief Set the quantum or weights for transmit algorithm (DWRR WRR WFQ)
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] u32QuantumWeight quantum or weights
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTxQueueQuantumOrWeight(ENET_Type *const   pEnet,
                                                         ENET_MTL_QueueType eQueue,
                                                         uint32             u32QuantumWeight)
{
    pEnet->MTL.QUEUE[eQueue].TX_QUANTUM_WEIGHT = ENET_MTL_TXQ0_QUANTUM_WEIGHT_ISCQW(u32QuantumWeight);
}

/**
 * @brief Set the sendSlope credit value required for the credit-based shaper algorithm for the
 *           Queue

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] u32SendSlopeCredit sendSlope credit credit based shaper.
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTxQueueSendSlopeCredit(ENET_Type *const   pEnet,
                                                         ENET_MTL_QueueType eQueue,
                                                         uint32             u32SendSlopeCredit)
{
    pEnet->MTL.QUEUE[eQueue].TX_SEND_SLOPE_CREDIT = ENET_MTL_TXQ1_SEND_SLOPE_CREDIT_SSC(
        u32SendSlopeCredit);
}

/**
 * @brief Set hiCredit value required for the credit-based shaper algorithm for the Queue

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] u32hiCredit hiCredit credit based shaper.
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTxQueueHiCredit(ENET_Type *const   pEnet,
                                                  ENET_MTL_QueueType eQueue,
                                                  uint32             u32hiCredit)
{
    pEnet->MTL.QUEUE[eQueue].TX_HICREDIT = ENET_MTL_TXQ1_HICREDIT_HC(u32hiCredit);
}

/**
 * @brief Set the loCredit value required for the credit-based shaper algorithm for the Queue

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] u32LoCredit loCredit credit based shaper.
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTxQueueLoCredit(ENET_Type *const   pEnet,
                                                  ENET_MTL_QueueType eQueue,
                                                  uint32             u32LoCredit)
{
    pEnet->MTL.QUEUE[eQueue].TX_LOCREDIT = ENET_MTL_TXQ1_LOCREDIT_LC(u32LoCredit);
}

/**
 * @brief Set receive queue size

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] uint8 receive queues size in blocks of 256 bytes, range(0~15)
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxQueueSize(ENET_Type *const   pEnet,
                                              ENET_MTL_QueueType eQueue,
                                              uint8              u8QueueSize)
{
    pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE &
                                                  ~ENET_MTL_RXQ0_OPERATION_MODE_RQS_MASK) |
                                                 ENET_MTL_RXQ0_OPERATION_MODE_RQS(u8QueueSize);
}

/**
 * @brief Set the threshold of receive queue at which the flow control is deactivated

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] eThreshold flow control deactivating threshold
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxDeactivateFlowCtrlThres(ENET_Type *const   pEnet,
                                                            ENET_MTL_QueueType eQueue,
                                                            ENET_MTL_RxFlowCtrlThresholdType eThreshold)
{
    pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE &
                                                  ~ENET_MTL_RXQ0_OPERATION_MODE_RFD_MASK) |
                                                 ENET_MTL_RXQ0_OPERATION_MODE_RFD(eThreshold);
}

/**
 * @brief Set the threshold of receive queue at which the flow control is activated

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] eThreshold flow control activating threshold
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxActivateFlowCtrlThres(ENET_Type *const   pEnet,
                                                          ENET_MTL_QueueType eQueue,
                                                          ENET_MTL_RxFlowCtrlThresholdType eThreshold)
{
    pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE &
                                                  ~ENET_MTL_RXQ0_OPERATION_MODE_RFA_MASK) |
                                                 ENET_MTL_RXQ0_OPERATION_MODE_RFA(eThreshold);
}

/**
 * @brief Set receive queue hardware flow control enable flag

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] bEnable 1U enable or 0U disable hardware flow control
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxHwFlowCtrlEnFlag(ENET_Type *const   pEnet,
                                                     ENET_MTL_QueueType eQueue,
                                                     uint8              bEnable)
{
    pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE &
                                                  ~ENET_MTL_RXQ0_OPERATION_MODE_EHFC_MASK) |
                                                 ENET_MTL_RXQ0_OPERATION_MODE_EHFC(bEnable);
}

/**
 * @brief Set forwarding of TCP/IP checksum error packets enable flag

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] bEnable 1U forward or 0U drop TCP/IP checksum error packets
 */
LOCAL_INLINE void ENET_HWA_MTL_SetForwardTCPChecksumErrorPacketEnFlag(ENET_Type *const   pEnet,
                                                                      ENET_MTL_QueueType eQueue,
                                                                      uint8              bEnable)
{
    pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE &
                                                  ~ENET_MTL_RXQ0_OPERATION_MODE_DIS_TCP_EF_MASK) |
                                                 ENET_MTL_RXQ0_OPERATION_MODE_DIS_TCP_EF(bEnable);
}

/**
 * @brief Set forward error packets enable flag

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] bEnable 1U forward or 0U drop error packets
 */
LOCAL_INLINE void ENET_HWA_MTL_SetForwardErrorPacketEnFlag(ENET_Type *const   pEnet,
                                                           ENET_MTL_QueueType eQueue,
                                                           uint8              bEnable)
{
    pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE &
                                                  ~ENET_MTL_RXQ0_OPERATION_MODE_FEP_MASK) |
                                                 ENET_MTL_RXQ0_OPERATION_MODE_FEP(bEnable);
}

/**
 * @brief Set forward undersized good packets enable flag

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] bEnable 1U forward or 0U drop undersize good packets
 */
LOCAL_INLINE void ENET_HWA_MTL_SetForwardUndersizedPacketEnFlag(ENET_Type *const   pEnet,
                                                                ENET_MTL_QueueType eQueue,
                                                                uint8              bEnable)
{
    pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE = (pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE &
                                                  ~ENET_MTL_RXQ0_OPERATION_MODE_FUP_MASK) |
                                                 ENET_MTL_RXQ0_OPERATION_MODE_FUP(bEnable);
}

/**
 * @brief Set the receive queue threshold

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] eThreshold receive queue threshold
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxThreshold(ENET_Type *const         pEnet,
                                              ENET_MTL_QueueType       eQueue,
                                              ENET_MTL_RxThresholdType eThreshold)
{
    pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE =
        (pEnet->MTL.QUEUE[eQueue].RX_OPERATION_MODE &
         ~(ENET_MTL_RXQ0_OPERATION_MODE_RTC_MASK | ENET_MTL_RXQ0_OPERATION_MODE_RSF_MASK)) |
        (ENET_MTL_RXQ0_OPERATION_MODE_RTC(eThreshold) |
         ENET_MTL_RXQ0_OPERATION_MODE_RSF((uint32)eThreshold >>
                                          ENET_MTL_RXQ0_OPERATION_MODE_RTC_WIDTH));
}

/**
 * @brief Set receive queue packet arbitration enable flag

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] bEnable 1U enable or 0U disable
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxQueuePacketArbitrationEnFlag(ENET_Type *const   pEnet,
                                                                 ENET_MTL_QueueType eQueue,
                                                                 uint8              bEnable)
{
    pEnet->MTL.QUEUE[eQueue].RX_CONTROL = (pEnet->MTL.QUEUE[eQueue].RX_CONTROL &
                                           ~ENET_MTL_RXQ0_CONTROL_RXQ_FRM_ARBIT_MASK) |
                                          ENET_MTL_RXQ0_CONTROL_RXQ_FRM_ARBIT(bEnable);
}

/**
 * @brief Set receive queue weight

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eQueue MTL queue id
 * @param [in] u8Weight receive queue weight
 */
LOCAL_INLINE void ENET_HWA_MTL_SetRxQueueWeight(ENET_Type *const   pEnet,
                                                ENET_MTL_QueueType eQueue,
                                                uint8              u8Weight)
{
    pEnet->MTL.QUEUE[eQueue].RX_CONTROL = (pEnet->MTL.QUEUE[eQueue].RX_CONTROL &
                                           ~ENET_MTL_RXQ0_CONTROL_RXQ_WEGT_MASK) |
                                          ENET_MTL_RXQ0_CONTROL_RXQ_WEGT((uint32)u8Weight);
}

/* ================================================================ *
 *                  ENET DMA Configuration and Status               *
 * ================================================================ */

/**
 * @brief Set DMA bus mode register value

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Mode DMA bus mode value
 */
LOCAL_INLINE void ENET_HWA_DMA_SetMode(ENET_Type *const pEnet, uint32 u32Mode)
{
    pEnet->ENET_DMA.MODE = u32Mode;
}

/**
 * @brief Get DMA software reset status

 * @param [in] pEnet the base address of the ENET instance
 * @return ENET_DMA_StatusType
 */
LOCAL_INLINE ENET_DMA_StatusType ENET_HWA_DMA_GetSwResetStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->ENET_DMA.MODE & ENET_DMA_MODE_SWR_MASK) >> ENET_DMA_MODE_SWR_SHIFT;
    /* PRQA S 4342 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     *  inappropriate essential type
     *  4342:An expression of 'essentially unsigned' type is being cast to enum type.
     *  REASON: No problem doing these conversions as the values are within range of the cast type.
     */
    return (ENET_DMA_StatusType)u32TmpVal;
    /* PRQA S 4342 -- */
}

/**
 * @brief Initiate DMA software reset

 * @param [in] pEnet the base address of the ENET instance
 */
LOCAL_INLINE void ENET_HWA_DMA_SwReset(ENET_Type *const pEnet)
{
    pEnet->ENET_DMA.MODE |= ENET_DMA_MODE_SWR_MASK;
}

/**
 * @brief Set DMA interrupt mode

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eIntMode DMA interrupt mode
 */
LOCAL_INLINE void ENET_HWA_DMA_SetInterruptMode(ENET_Type *const pEnet, ENET_DMA_IntModeType eIntMode)
{
    pEnet->ENET_DMA.MODE = (pEnet->ENET_DMA.MODE & ~ENET_DMA_MODE_INTM_MASK) |
                           ENET_DMA_MODE_INTM(eIntMode);
}

/**
 * @brief Set DMA sys bus mode register value

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] u32Mode DMA sys bus mode value
 */
LOCAL_INLINE void ENET_HWA_DMA_SetSysBusMode(ENET_Type *const pEnet, uint32 u32Mode)
{
    pEnet->ENET_DMA.SYSBUS_MODE = u32Mode;
}

/**
 * @brief Get MAC interrupt event in DMA interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @return true MAC interrupt event detected
 * @return false MAC interrupt event not detected
 */
LOCAL_INLINE boolean ENET_HWA_DMA_GetMACIntStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->ENET_DMA.INTERRUPT_STATUS & ENET_DMA_INTERRUPT_STATUS_MACIS_MASK) >>
                       ENET_DMA_INTERRUPT_STATUS_MACIS_SHIFT;
    return (u32TmpVal != 0U) ? (boolean)TRUE : (boolean)FALSE;
}

/**
 * @brief Get MTL interrupt event in DMA interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @return true MTL interrupt event detected
 * @return false MTL interrupt event not detected
 */
LOCAL_INLINE boolean ENET_HWA_DMA_GetMTLIntStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->ENET_DMA.INTERRUPT_STATUS & ENET_DMA_INTERRUPT_STATUS_MTLIS_MASK) >>
                       ENET_DMA_INTERRUPT_STATUS_MTLIS_SHIFT;
    return (u32TmpVal != 0U) ? (boolean)TRUE : (boolean)FALSE;
}

/**
 * @brief Get DMA channel interrupt event in DMA interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eChannel DMA channel
 * @return true eChannel interrupt event detected
 * @return false eChannel interrupt event not detected
 */
LOCAL_INLINE boolean ENET_HWA_DMA_GetDMAChannelIntStatus(const ENET_Type *const pEnet,
                                                         ENET_DMA_ChannelType   eChannel)
{
    uint32 u32TmpVal = pEnet->ENET_DMA.INTERRUPT_STATUS & ((uint32)1U << (uint32)eChannel);
    return (u32TmpVal != 0U) ? (boolean)TRUE : (boolean)FALSE;
}

/**
 * @brief Get MAC safety uncorrectable error event in DMA safety interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @return true MAC safety uncorrectable error event detected
 * @return false MAC safety uncorrectable error event not detected
 */
LOCAL_INLINE boolean ENET_HWA_DMA_GetMACSafetyUncorrectableIntStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->ENET_DMA.SAFETY_INTERRUPT_STATUS &
                        ENET_DMA_SAFETY_INTERRUPT_STATUS_MCSIS_MASK) >>
                       ENET_DMA_SAFETY_INTERRUPT_STATUS_MCSIS_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief Get MTL safety uncorrectable error event in DMA safety interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @return true MTL safety uncorrectable error event detected
 * @return false MTL safety uncorrectable error event not detected
 */
LOCAL_INLINE boolean ENET_HWA_DMA_GetMTLSafetyUncorrectableIntStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->ENET_DMA.SAFETY_INTERRUPT_STATUS &
                        ENET_DMA_SAFETY_INTERRUPT_STATUS_MSUIS_MASK) >>
                       ENET_DMA_SAFETY_INTERRUPT_STATUS_MSUIS_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief Get MTL safety correctable error event in DMA safety interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @return true MTL safety correctable error event detected
 * @return false MTL safety correctable error event not detected
 */
LOCAL_INLINE boolean ENET_HWA_DMA_GetMTLSafetyCorrectableIntStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->ENET_DMA.SAFETY_INTERRUPT_STATUS &
                        ENET_DMA_SAFETY_INTERRUPT_STATUS_MSCIS_MASK) >>
                       ENET_DMA_SAFETY_INTERRUPT_STATUS_MSCIS_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief Get DMA ECC uncorrectable error event in DMA safety interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @return true MTL safety uncorrectable error event detected
 * @return false MTL safety uncorrectable error event not detected
 */
LOCAL_INLINE boolean ENET_HWA_DMA_GetDMAEccUncorrectableIntStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->ENET_DMA.SAFETY_INTERRUPT_STATUS &
                        ENET_DMA_SAFETY_INTERRUPT_STATUS_DEUIS_MASK) >>
                       ENET_DMA_SAFETY_INTERRUPT_STATUS_DEUIS_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief Get DMA ECC correctable error event in DMA safety interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @return true MTL safety correctable error event detected
 * @return false MTL safety correctable error event not detected
 */
LOCAL_INLINE boolean ENET_HWA_DMA_GetDMAEccCorrectableIntStatus(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->ENET_DMA.SAFETY_INTERRUPT_STATUS &
                        ENET_DMA_SAFETY_INTERRUPT_STATUS_DECIS_MASK) >>
                       ENET_DMA_SAFETY_INTERRUPT_STATUS_DECIS_SHIFT;
    return (boolean)u32TmpVal;
}

/**
 * @brief Set DMA channel control register value

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32ChannelCtrl control value
 */
LOCAL_INLINE void ENET_HWA_DMA_SetChannelCtrl(ENET_Type *const     pEnet,
                                              ENET_DMA_ChannelType eDMAChannel,
                                              uint32               u32ChannelCtrl)
{
    pEnet->ENET_DMA.CH[eDMAChannel].CONTROL = u32ChannelCtrl;
}

/**
 * @brief Set DMA descriptor skip length

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u8Length descriptor skip length
 */
LOCAL_INLINE void ENET_HWA_DMA_SetDescriptorSkipLength(ENET_Type *const     pEnet,
                                                       ENET_DMA_ChannelType eDMAChannel,
                                                       uint8                u8Length)
{
    pEnet->ENET_DMA.CH[eDMAChannel].CONTROL = (pEnet->ENET_DMA.CH[eDMAChannel].CONTROL &
                                               ~ENET_DMA_CH0_CONTROL_DSL_MASK) |
                                              ENET_DMA_CH0_CONTROL_DSL(u8Length);
}

/**
 * @brief Set DMA burst length multiply by 8 mode

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] bEnable 1U enable or 0U disable x8 mode
 */
LOCAL_INLINE void ENET_HWA_DMA_Set8xPBLModeEnFlag(ENET_Type *const     pEnet,
                                                  ENET_DMA_ChannelType eDMAChannel,
                                                  uint8                bEnable)
{
    pEnet->ENET_DMA.CH[eDMAChannel].CONTROL = (pEnet->ENET_DMA.CH[eDMAChannel].CONTROL &
                                               ~ENET_DMA_CH0_CONTROL_PBLX8_MASK) |
                                              ENET_DMA_CH0_CONTROL_PBLX8(bEnable);
}

/**
 * @brief Set DMA transmit channel control register value

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32ChannelCtrl control value
 */
LOCAL_INLINE void ENET_HWA_DMA_SetChannelTxCtrl(ENET_Type *const     pEnet,
                                                ENET_DMA_ChannelType eDMAChannel,
                                                uint32               u32TxCtrl)
{
    pEnet->ENET_DMA.CH[eDMAChannel].TX_CONTROL = u32TxCtrl;
}

/**
 * @brief Start DMA transmission

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_StartTx(ENET_Type *const pEnet, ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].TX_CONTROL |= ENET_DMA_CH0_TX_CONTROL_ST_MASK;
}

/**
 * @brief Stop DMA transmission

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_StopTx(ENET_Type *const pEnet, ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].TX_CONTROL &= ~ENET_DMA_CH0_TX_CONTROL_ST_MASK;
}

/**
 * @brief Set DMA receive channel control register value

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32RxCtrl control value
 */
LOCAL_INLINE void ENET_HWA_DMA_SetChannelRxCtrl(ENET_Type *const     pEnet,
                                                ENET_DMA_ChannelType eDMAChannel,
                                                uint32               u32RxCtrl)
{
    pEnet->ENET_DMA.CH[eDMAChannel].RX_CONTROL = u32RxCtrl;
}

/**
 * @brief Set DMA receive packet flush enable flag

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] bEnable 1U enable or 0U disable flush receive queues when RX DMA stopped
 */
LOCAL_INLINE void ENET_HWA_DMA_SetRxPacketFlushEnFlag(ENET_Type *const     pEnet,
                                                      ENET_DMA_ChannelType eDMAChannel,
                                                      uint8                bEnable)
{
    pEnet->ENET_DMA.CH[eDMAChannel].RX_CONTROL = (pEnet->ENET_DMA.CH[eDMAChannel].RX_CONTROL &
                                                  ~ENET_DMA_CH0_RX_CONTROL_RPF_MASK) |
                                                 ENET_DMA_CH0_RX_CONTROL_RPF(bEnable);
}

/**
 * @brief Set DMA receive buffer size

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u16BufferSize receive buffer size
 */
LOCAL_INLINE void ENET_HWA_DMA_SetRxBufferSize(ENET_Type *const     pEnet,
                                               ENET_DMA_ChannelType eDMAChannel,
                                               uint16               u16BufferSize)
{
    pEnet->ENET_DMA.CH[eDMAChannel].RX_CONTROL =
        (pEnet->ENET_DMA.CH[eDMAChannel].RX_CONTROL & ~ENET_DMA_CH0_RX_CONTROL_RBSZ_13_Y_MASK) |
        ENET_DMA_CH0_RX_CONTROL_RBSZ_13_Y(
            ((uint32)u16BufferSize >>
             (ENET_DMA_CH0_RX_CONTROL_RBSZ_13_Y_SHIFT - ENET_DMA_CH0_RX_CONTROL_RBSZ_X_0_SHIFT)));
}

/**
 * @brief Start DMA reception

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_StartRx(ENET_Type *const pEnet, ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].RX_CONTROL |= ENET_DMA_CH0_RX_CONTROL_SR_MASK;
}

/**
 * @brief Stop DMA reception

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_StopRx(ENET_Type *const pEnet, ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].RX_CONTROL &= ~ENET_DMA_CH0_RX_CONTROL_SR_MASK;
}

/**
 * @brief Set DMA channel Tx descriptor list header address

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32TxAddr Tx descriptor list header address
 */
LOCAL_INLINE void ENET_HWA_DMA_SetTxDescListHeadAddr(ENET_Type *const     pEnet,
                                                     ENET_DMA_ChannelType eDMAChannel,
                                                     uint32               u32TxAddr)
{
    pEnet->ENET_DMA.CH[eDMAChannel].TXDESC_LIST_ADDRESS = ENET_DMA_CH0_TXDESC_LIST_ADDRESS_TDESLA(
        u32TxAddr >> ENET_DMA_CH0_TXDESC_LIST_ADDRESS_TDESLA_SHIFT);
}

/**
 * @brief Set DMA channel Rx descriptor list header address

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32TxAddr Rx descriptor list header address
 */
LOCAL_INLINE void ENET_HWA_DMA_SetRxDescListHeadAddr(ENET_Type *const     pEnet,
                                                     ENET_DMA_ChannelType eDMAChannel,
                                                     uint32               u32RxAddr)
{
    pEnet->ENET_DMA.CH[eDMAChannel].RXDESC_LIST_ADDRESS = ENET_DMA_CH0_RXDESC_LIST_ADDRESS_RDESLA(
        u32RxAddr >> ENET_DMA_CH0_RXDESC_LIST_ADDRESS_RDESLA_SHIFT);
}

/**
 * @brief Get DMA channel Tx descriptor list tail address

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @return uint32 Tx descriptor list tail address
 */
LOCAL_INLINE uint32 ENET_HWA_DMA_GetTxDescListTailAddr(const ENET_Type *const pEnet,
                                                       ENET_DMA_ChannelType   eDMAChannel)
{
    return pEnet->ENET_DMA.CH[eDMAChannel].TXDESC_TAIL_POINTER;
}

/**
 * @brief Set DMA channel Tx descriptor list tail address

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32TxAddr Tx descriptor list tail address
 */
LOCAL_INLINE void ENET_HWA_DMA_SetTxDescListTailAddr(ENET_Type *const     pEnet,
                                                     ENET_DMA_ChannelType eDMAChannel,
                                                     uint32               u32TxAddr)
{
    pEnet->ENET_DMA.CH[eDMAChannel].TXDESC_TAIL_POINTER = ENET_DMA_CH0_TXDESC_TAIL_POINTER_TDTP(
        u32TxAddr >> ENET_DMA_CH0_TXDESC_TAIL_POINTER_TDTP_SHIFT);
}

/**
 * @brief Get DMA channel Rx descriptor list tail address

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @return uint32 Rx descriptor list tail address
 */
LOCAL_INLINE uint32 ENET_HWA_DMA_GetRxDescListTailAddr(const ENET_Type *const pEnet,
                                                       ENET_DMA_ChannelType   eDMAChannel)
{
    return pEnet->ENET_DMA.CH[eDMAChannel].RXDESC_TAIL_POINTER;
}

/**
 * @brief Set DMA channel Rx descriptor list tail address

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32TxAddr Rx descriptor list tail address
 */
LOCAL_INLINE void ENET_HWA_DMA_SetRxDescListTailAddr(ENET_Type *const     pEnet,
                                                     ENET_DMA_ChannelType eDMAChannel,
                                                     uint32               u32RxAddr)
{
    pEnet->ENET_DMA.CH[eDMAChannel].RXDESC_TAIL_POINTER = ENET_DMA_CH0_RXDESC_TAIL_POINTER_RDTP(
        u32RxAddr >> ENET_DMA_CH0_RXDESC_TAIL_POINTER_RDTP_SHIFT);
}

/**
 * @brief Set DMA channel Tx descriptor ring length

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u16Length Tx descriptor ring length
 */
LOCAL_INLINE void ENET_HWA_DMA_SetTxDescRingLength(ENET_Type *const     pEnet,
                                                   ENET_DMA_ChannelType eDMAChannel,
                                                   uint16               u16Length)
{
    pEnet->ENET_DMA.CH[eDMAChannel].TXDESC_RING_LENGTH = ENET_DMA_CH0_TXDESC_RING_LENGTH_TDRL(
        u16Length);
}

/**
 * @brief Set DMA channel Rx descriptor ring length

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32TxAddr Rx descriptor ring length
 */
LOCAL_INLINE void ENET_HWA_DMA_SetRxDescRingLength(ENET_Type *const     pEnet,
                                                   ENET_DMA_ChannelType eDMAChannel,
                                                   uint16               u16Length)
{
    pEnet->ENET_DMA.CH[eDMAChannel].RXDESC_RING_LENGTH = ENET_DMA_CH0_RXDESC_RING_LENGTH_RDRL(
        u16Length);
}

/**
 * @brief Get DMA channel enabled interrupts

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @return uint32 enabled interrupts
 */
LOCAL_INLINE uint32 ENET_HWA_DMA_GetEnabledInterrupts(const ENET_Type *const pEnet,
                                                      ENET_DMA_ChannelType   eDMAChannel)
{
    return pEnet->ENET_DMA.CH[eDMAChannel].INTERRUPT_ENABLE;
}

/**
 * @brief Set DMA channel interrupts enable state

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] u32IntEnable interrupts to be enabled
 */
LOCAL_INLINE void ENET_HWA_DMA_SetEnabledInterrupts(ENET_Type *const     pEnet,
                                                    ENET_DMA_ChannelType eDMAChannel,
                                                    uint32               u32IntEnable)
{
    pEnet->ENET_DMA.CH[eDMAChannel].INTERRUPT_ENABLE = u32IntEnable;
}

/**
 * @brief Enable one of the DMA channel interrupts

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] eIntFlag interrupt to be enabled
 */
LOCAL_INLINE void ENET_HWA_DMA_EnableInterrupt(ENET_Type *const           pEnet,
                                               ENET_DMA_ChannelType       eDMAChannel,
                                               ENET_DMA_InterruptFlagType eIntFlag)
{
    pEnet->ENET_DMA.CH[eDMAChannel].INTERRUPT_ENABLE |= (uint32)eIntFlag;
}

/**
 * @brief Disable one of the DMA channel interrupts

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @param [in] eIntFlag interrupt to be disbled
 */
LOCAL_INLINE void ENET_HWA_DMA_DisableInterrupt(ENET_Type *const           pEnet,
                                                ENET_DMA_ChannelType       eDMAChannel,
                                                ENET_DMA_InterruptFlagType eIntFlag)
{
    pEnet->ENET_DMA.CH[eDMAChannel].INTERRUPT_ENABLE &= ~(uint32)eIntFlag;
}

/**
 * @brief Get DMA current status

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 * @return uint32 DMA status
 */
LOCAL_INLINE uint32 ENET_HWA_DMA_GetCurrentStatus(const ENET_Type *const pEnet,
                                                  ENET_DMA_ChannelType   eDMAChannel)
{
    return pEnet->ENET_DMA.CH[eDMAChannel].STATUS;
}

/**
 * @brief Clear all DMA abnormal interrupts

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_ClearAllAbnormalInterruptFlags(ENET_Type *const     pEnet,
                                                              ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].STATUS =
        (pEnet->ENET_DMA.CH[eDMAChannel].STATUS &
         (ENET_DMA_CH0_STATUS_REB_MASK | ENET_DMA_CH0_STATUS_TEB_MASK)) |
        ENET_DMA_CH0_STATUS_AIS_MASK | ENET_DMA_CH0_STATUS_CDE_MASK | ENET_DMA_CH0_STATUS_FBE_MASK |
        ENET_DMA_CH0_STATUS_ETI_MASK | ENET_DMA_CH0_STATUS_RPS_MASK | ENET_DMA_CH0_STATUS_RBU_MASK |
        ENET_DMA_CH0_STATUS_TPS_MASK;
}

/**
 * @brief Clear all DMA normal interrupts

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_ClearAllNormalInterruptFlags(ENET_Type *const     pEnet,
                                                            ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].STATUS =
        (pEnet->ENET_DMA.CH[eDMAChannel].STATUS &
         (ENET_DMA_CH0_STATUS_REB_MASK | ENET_DMA_CH0_STATUS_TEB_MASK)) |
        ENET_DMA_CH0_STATUS_NIS_MASK | ENET_DMA_CH0_STATUS_ERI_MASK | ENET_DMA_CH0_STATUS_RI_MASK |
        ENET_DMA_CH0_STATUS_TBU_MASK | ENET_DMA_CH0_STATUS_TI_MASK;
}

/**
 * @brief Clear DMA receive process stopped status

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_ClearRxProcessStoppedFlag(ENET_Type *const     pEnet,
                                                         ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].STATUS = (pEnet->ENET_DMA.CH[eDMAChannel].STATUS &
                                              (ENET_DMA_CH0_STATUS_REB_MASK |
                                               ENET_DMA_CH0_STATUS_TEB_MASK)) |
                                             ENET_DMA_CH0_STATUS_RPS_MASK;
}

/**
 * @brief Clear DMA receive interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_ClearRxInterruptFlag(ENET_Type *const     pEnet,
                                                    ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].STATUS = (pEnet->ENET_DMA.CH[eDMAChannel].STATUS &
                                              (ENET_DMA_CH0_STATUS_REB_MASK |
                                               ENET_DMA_CH0_STATUS_TEB_MASK)) |
                                             ENET_DMA_CH0_STATUS_RI_MASK;
}

/**
 * @brief Clear DMA transmit process stopped status

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_ClearTxProcessStoppedFlag(ENET_Type *const     pEnet,
                                                         ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].STATUS = (pEnet->ENET_DMA.CH[eDMAChannel].STATUS &
                                              (ENET_DMA_CH0_STATUS_REB_MASK |
                                               ENET_DMA_CH0_STATUS_TEB_MASK)) |
                                             ENET_DMA_CH0_STATUS_TPS_MASK;
}

/**
 * @brief Clear DMA transmit interrupt status

 * @param [in] pEnet the base address of the ENET instance
 * @param [in] eDMAChannel DMA channel
 */
LOCAL_INLINE void ENET_HWA_DMA_ClearTxInterruptFlag(ENET_Type *const     pEnet,
                                                    ENET_DMA_ChannelType eDMAChannel)
{
    pEnet->ENET_DMA.CH[eDMAChannel].STATUS = (pEnet->ENET_DMA.CH[eDMAChannel].STATUS &
                                              (ENET_DMA_CH0_STATUS_REB_MASK |
                                               ENET_DMA_CH0_STATUS_TEB_MASK)) |
                                             ENET_DMA_CH0_STATUS_TI_MASK;
}

/**
 * @brief Get EST offset Mode enable flag
 *
 * @param [in] pEnet the base address of the ENET instance
 * @return true EST offset Mode is enabled
 * @return false EST offset Mode is disabled
 */
LOCAL_INLINE boolean ENET_HWA_MTL_GetEstOffsetModeEnFlag(const ENET_Type *const pEnet)
{
    uint32 u32TmpVal = (pEnet->MTL.TBS_CTRL & ENET_MTL_TBS_CTRL_ESTM_MASK) >>
                       ENET_MTL_TBS_CTRL_ESTM_SHIFT;
    return (u32TmpVal != 0u) ? TRUE : FALSE;
}

/**
 * @brief Set EST tbs ctrl regsiter
 *
 * @param [in] pEnet the base address of the ENET instance
 * @param [in] value tbs value
 */
LOCAL_INLINE void ENET_HWA_MTL_SetTBSCtrl(ENET_Type *const pEnet, uint32 u32Value)
{
    pEnet->MTL.TBS_CTRL = u32Value;
}

/**
 * @brief  Get enhancements to scheduled transmission Status register value

 * @param [in] pEnet the base address of the ENET instance
 * @return uint32 EST Status value
 */
LOCAL_INLINE uint32 ENET_HWA_MTL_GetEstCGSN(const ENET_Type *const pEnet)
{
    return (pEnet->MTL.EST_STATUS & ENET_MTL_EST_STATUS_CGSN_MASK) >> ENET_MTL_EST_STATUS_CGSN_SHIFT;
}

#ifdef __cplusplus
}
#endif

#endif /*ETH_HW_H*/

/** @} */
