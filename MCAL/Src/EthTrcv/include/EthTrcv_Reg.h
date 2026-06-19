/**
*   @file    EthTrcv_Reg.h
*   @version 1.5.1

*   @brief   AUTOSAR EthTrcv - module register and macro definitions..
*   @details EthTrcv module registers, and macrodefinitions used to manipulate the module registers.
*
*   @addtogroup EthTrcv
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

/* PRQA S 0791 EOF
   0791:Macro identifier does not differ from other macro identifier(s) (e.g. '%1s') within the
    specified number of significant characters.
   REASON:These macros are distinct.
*/

#ifndef ETHTRCV_REG_H
#define ETHTRCV_REG_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/* UTP */
#define ETHTRCV_UTP_BASIC_CONTROL                        (0U)

#define ETHTRCV_UTP_BCR_SOFT_RESET                       (0x8000U)

#define ETHTRCV_UTP_BCR_LOOPBACK                         (0x4000U)

#define ETHTRCV_UTP_BCR_AUTONEG_ENABLE                   (0x1000U)

#define ETHTRCV_UTP_BCR_POWER_DOWN                       (0x0800U)

#define ETHTRCV_UTP_BCR_AUTONEG_RESTART                  (0x0200U)

#define ETHTRCV_UTP_BCR_DUPLEX_MODE                      (0x0100U)

#define ETHTRCV_UTP_BCR_SPEED_MASK                       (0x2040U)

#define ETHTRCV_UTP_BCR_SPEED_10M                        (0x0U)

#define ETHTRCV_UTP_BCR_SPEED_100M                       (0x2000U)

#define ETHTRCV_UTP_BCR_SPEED_1000M                      (0x0040U)

#define ETHTRCV_UTP_BASIC_STATUS                         (1U)

#define ETHTRCV_UTP_BSR_AUTONEG_COMPLETE                 (0x20U)

#define ETHTRCV_UTP_BSR_LINK_STATUS                      (0x4U)

#define ETHTRCV_UTP_IDENTIFIER1                          (2U)

#define ETHTRCV_UTP_ID1_OUI_MASK                         (0xFFFFU)

#define ETHTRCV_UTP_ID1_OUI_SHIFT                        (0x6U)

#define ETHTRCV_UTP_IDENTIFIER2                          (3U)

#define ETHTRCV_UTP_ID2_OUI_MASK                         (0xFC00U)

#define ETHTRCV_UTP_ID2_OUI_SHIFT                        (0xAU)

#define ETHTRCV_UTP_ID2_MODEL_MASK                       (0x03F0U)

#define ETHTRCV_UTP_ID2_MODEL_SHIFT                      (4U)

#define ETHTRCV_UTP_ID2_REVISION_MASK                    (0x000FU)

#define ETHTRCV_UTP_ID2_REVISION_SHIFT                   (0x0000U)

/* YT8531SH special registers */
#define ETHTRCV_YT8531SH_AUTONEG_ABLITY1                 (0x4U)

#define ETHTRCV_YT8531SH_AN_ABLITY1_10BASETE_HALF_MASK   (0x20U)

#define ETHTRCV_YT8531SH_AN_ABLITY1_10BASETE_FULL_MASK   (0x40U)

#define ETHTRCV_YT8531SH_AN_ABLITY1_100BASETX_HALF_MASK  (0x80U)

#define ETHTRCV_YT8531SH_AN_ABLITY1_100BASETX_FULL_MASK  (0x100U)

#define ETHTRCV_YT8531SH_AUTONEG_ABLITY2                 (0x9U)

#define ETHTRCV_YT8531SH_AN_ABLITY1_1000BASET_HALF_MASK  (0x100U)

#define ETHTRCV_YT8531SH_AN_ABLITY1_1000BASET_FULL_MASK  (0x200U)

#define ETHTRCV_YT8531SH_SPECIFIC_STATUS                 (0x11U)

#define ETHTRCV_YT8531SH_SPECIFIC_SPEED_MASK             (0xC000U)

#define ETHTRCV_YT8531SH_LINK_SPEED_10M                  (0x0U)

#define ETHTRCV_YT8531SH_LINK_SPEED_100M                 (0x4000U)

#define ETHTRCV_YT8531SH_LINK_SPEED_1000M                (0x8000U)

#define ETHTRCV_YT8531SH_SPECIFIC_DUPLEX_MASK            (0x2000U)

#define ETHTRCV_YT8531SH_SPECIFIC_RESOLVED_MASK          (0x0800U)

#define ETHTRCV_YT8531SH_SPECIFIC_LINK_MASK              (0x0400U)

#define ETHTRCV_YT8531SH_EXTREG_ADDRESS                  (0x1EU)

#define ETHTRCV_YT8531SH_EXTREG_DATA                     (0x1FU)

#define ETHTRCV_YT8531SH_RGMII_CONFIG                    (0xA003U)

#define ETHTRCV_YT8531SH_RGMII_TX_DELAY_MASK             (0xFU)

#define ETHTRCV_YT8531SH_RGMII_TX_DELAY_SHIFT            (0U)

#define ETHTRCV_YT8531SH_RGMII_RX_DELAY_MASK             (0x3C00U)

#define ETHTRCV_YT8531SH_RGMII_RX_DELAY_SHIFT            (10U)

#define ETHTRCV_YT8531SH_SYNCE_CFG                       (0xA012U)

#define ETHTRCV_YT8531SH_SYNCE_ENABLE_MASK               (0x40U)

#define ETHTRCV_YT8531SH_SYNCE_SEL_125M_MASK             (0x10U)

#define ETHTRCV_YT8531SH_SYNCE_SRC_MASK                  (0xEU)

#define ETHTRCV_YT8531SH_SYNCE_SRC_SHIFT                 (1U)

#define ETHTRCV_YT8531SH_SYNCE_SRC_PLL125M               (0U)

#define ETHTRCV_YT8531SH_SYNCE_SRC_REFCLK                (4U)

#define ETHTRCV_YT8531SH_SPACE_SELECT_REG                (0xA000U)

#define ETHTRCV_YT8531SH_SPACE_SELECT_MASK               (0x2U)

#define ETHTRCV_YT8531SH_SPACE_SELECT_UTP                (0x0U)

#define ETHTRCV_YT8531SH_SPACE_SELECT_SDS                (0x2U)

#define ETHTRCV_YT8531SH_SDS_BASIC_CONTROL               (0U)

#define ETHTRCV_YT8531SH_SDS_RESET_MASK                  (0x8000U)

#define ETHTRCV_YT8531SH_SDS_AUTO_NEGOTIATION_MASK       (0x1000U)

#define ETHTRCV_YT8531SH_SDS_AN_RESTART_MASK             (0x0200U)

#define ETHTRCV_YT8531SH_SDS_DUPLEX_MASK                 (0x0100U)

#define ETHTRCV_YT8531SH_SDS_FORCE_SPEED_MASK            (0x2040U)

#define ETHTRCV_YT8531SH_SDS_FORCE_SPEED_10M             (0x0U)

#define ETHTRCV_YT8531SH_SDS_FORCE_SPEED_100M            (0x2000U)

#define ETHTRCV_YT8531SH_SDS_FORCE_SPEED_1000M           (0x0040U)

#define ETHTRCV_YT8531SH_MODE_SELECT_REG                 (0xA001U)

#define ETHTRCV_YT8531SH_MODE_SELECT_MASK                (0x7U)

#define ETHTRCV_YT8531SH_MODE_SELECT_SHIFT               (0U)

#define ETHTRCV_YT8531SH_MODE_SGMAC_TO_RGPHY             (0x5U)

/* YT8512H special registers */
#define ETHTRCV_YT8512H_AUTONEG_ABLITY                   (0x4U)

#define ETHTRCV_YT8512H_AN_ABLITY_10BASETE_HALF_MASK     (0x20U)

#define ETHTRCV_YT8512H_AN_ABLITY_10BASETE_FULL_MASK     (0x40U)

#define ETHTRCV_YT8512H_AN_ABLITY_100BASETX_HALF_MASK    (0x80U)

#define ETHTRCV_YT8512H_AN_ABLITY_100BASETX_FULL_MASK    (0x100U)

#define ETHTRCV_YT8512H_SPECIFIC_STATUS                  (0x11U)

#define ETHTRCV_YT8512H_SPECIFIC_SPEED_MASK              (0xC000U)

#define ETHTRCV_YT8512H_LINK_SPEED_10M                   (0x0U)

#define ETHTRCV_YT8512H_LINK_SPEED_100M                  (0x4000U)

#define ETHTRCV_YT8512H_LINK_SPEED_1000M                 (0x8000U)

#define ETHTRCV_YT8512H_SPECIFIC_DUPLEX_MASK             (0x2000U)

#define ETHTRCV_YT8512H_SPECIFIC_RESOLVED_MASK           (0x0800U)

#define ETHTRCV_YT8512H_SPECIFIC_LINK_MASK               (0x0400U)

/* YT8010A special registers */
#define ETHTRCV_YT8010A_EXTREG_ADDRESS                   (0x1EU)

#define ETHTRCV_YT8010A_EXTREG_DATA                      (0x1FU)

#define ETHTRCV_YT8010A_AUTO100_CTRL                     (0x1000U)

#define ETHTRCV_YT8010A_ROLE_MASTER_MASK                 (0x0200U)

#define ETHTRCV_YT8010A_EXTCOMBO_CTRL                    (0x4000U)

#define ETHTRCV_YT8010A_MODE_SEL_MASK                    (0xE000U)

#define ETHTRCV_YT8010A_MODE_SEL_MII                     (0x0000U)

#define ETHTRCV_YT8010A_MODE_SEL_RMII1                   (0x4000U)

#define ETHTRCV_YT8010A_MODE_SEL_RMII2                   (0x2000U)

#define ETHTRCV_YT8010A_MODE_SEL_RGMII                   (0xC000U)

#define ETHTRCV_YT8010A_MODE_SEL_REMII                   (0x8000U)

/* RTL8211FS special registers */
#define ETHTRCV_RTL8211FS_AUTONEG_ABLITY1                (0x4U)

#define ETHTRCV_RTL8211FS_AN_ABLITY1_10BASETE_HALF_MASK  (0x20U)

#define ETHTRCV_RTL8211FS_AN_ABLITY1_10BASETE_FULL_MASK  (0x40U)

#define ETHTRCV_RTL8211FS_AN_ABLITY1_100BASETX_HALF_MASK (0x80U)

#define ETHTRCV_RTL8211FS_AN_ABLITY1_100BASETX_FULL_MASK (0x100U)

#define ETHTRCV_RTL8211FS_AUTONEG_ABLITY2                (0x9U)

#define ETHTRCV_RTL8211FS_AN_ABLITY1_1000BASET_FULL_MASK (0x200U)

#define ETHTRCV_RTL8211FS_PAGE_SELECT                    (0x1FU)

#define ETHTRCV_RTL8211FS_RGMII_DELAY_PAGE               (0xD08U)

#define ETHTRCV_RTL8211FS_SGMII_ANAR_PAGE                (0xD08U)

#define ETHTRCV_RTL8211FS_SPECIFIC_PAGE                  (0xA43U)

#define ETHTRCV_RTL8211FS_RGMII_TXDELAY_CFG              (0x11U)

#define ETHTRCV_RTL8211FS_RGMII_TXDELAY_ENABLE_MASK      (0x100U)

#define ETHTRCV_RTL8211FS_PHYCR1                         (0x18U)

#define ETHTRCV_RTL8211FS_PHYCR2                         (0x19U)

#define ETHTRCV_RTL8211FS_PHYCR2_PLL125M_MASK            (0x800U)

#define ETHTRCV_RTL8211FS_PHYCR2_CLKOUT_ENABLE_MASK      (0x1U)

#define ETHTRCV_RTL8211FS_SPECIFIC_STATUS                (0x1AU)

#define ETHTRCV_RTL8211FS_LINKED_MASK                    (0x4U)

#define ETHTRCV_RTL8211FS_DUPLEX_MASK                    (0x8U)

#define ETHTRCV_RTL8211FS_LINK_SPEED_MASK                (0x0030U)

#define ETHTRCV_RTL8211FS_LINK_SPEED_10M                 (0x00U)

#define ETHTRCV_RTL8211FS_LINK_SPEED_100M                (0x10U)

#define ETHTRCV_RTL8211FS_LINK_SPEED_1000M               (0x20U)

#define ETHTRCV_RTL8211FS_SGMII_ANAR_REG                 (0x10U)

#define ETHTRCV_RTL8211FS_SGMII_LINK_MASK                (0x8U)

#define ETHTRCV_RTL8211FS_SGMII_DUPLEX_MASK              (0x4U)

#define ETHTRCV_RTL8211FS_SGMII_SPEED_MASK               (0x3U)

#define ETHTRCV_RTL8211FS_SGMII_SPEED_10M_MASK           (0x0U)

#define ETHTRCV_RTL8211FS_SGMII_SPEED_100M_MASK          (0x1U)

#define ETHTRCV_RTL8211FS_SGMII_SPEED_1000M_MASK         (0x2U)

/* RTL9010AA special registers */
#define ETHTRCV_RTL9010AA_MMD_PMA_PMD                    (1U)

#define ETHTRCV_RTL9010AA_MMD_PCS                        (3U)

#define ETHTRCV_RTL9010AA_BASIC_CONTROL                  (0U)

#define ETHTRCV_RTL9010AA_RESET_MASK                     (0x8000U)

#define ETHTRCV_RTL9010AA_AUTO_NEGOTIATION_MASK          (0x1000U)

#define ETHTRCV_RTL9010AA_AN_RESTART_MASK                (0x0200U)

#define ETHTRCV_RTL9010AA_FORCE_DUPLEX_MASK              (0x0100U)

#define ETHTRCV_RTL9010AA_FORCE_SPEED_MASK               (0x2040U)

#define ETHTRCV_RTL9010AA_FORCE_SPEED_10M                (0x0U)

#define ETHTRCV_RTL9010AA_FORCE_SPEED_100M               (0x2000U)

#define ETHTRCV_RTL9010AA_FORCE_SPEED_1000M              (0x0040U)

#define ETHTRCV_RTL9010AA_SPECIFIC_STATUS                (0x1AU)

#define ETHTRCV_RTL9010AA_LINKED_MASK                    (0x4U)

#define ETHTRCV_RTL9010AA_LINK_SPEED_MASK                   0x0030U)

#define ETHTRCV_RTL9010AA_LINK_SPEED_10M               (0x0U)

#define ETHTRCV_RTL9010AA_LINK_SPEED_100M              (0x10U)

#define ETHTRCV_RTL9010AA_LINK_SPEED_1000M             (0x20U)

#define ETHTRCV_RTL9010AA_SPECIAL_ADDRESS              (0x1BU)

#define ETHTRCV_RTL9010AA_SPECIAL_DATA                 (0x1CU)

#define ETHTRCV_RTL9010AA_SQI_REG                      (0xD106U)

#define ETHTRCV_RTL9010AA_SQI_MASK                     (0xEU)

#define ETHTRCV_RTL9010AA_SQI_SHIFT                    (1U)

#define ETHTRCV_RTL9010AA_1000BASET1_TESTMODE          (0x904U)

#define ETHTRCV_RTL9010AA_100BASET1_TESTMODE           (0x836U)

#define ETHTRCV_RTL9010AA_TESTMODE_MASK                (0xE000U)

#define ETHTRCV_RTL9010AA_TESTMODE_SHIFT               (13U)

#define ETHTRCV_RTL9010AA_1000BASET1_TESTMODE_SUP      (0xF7U)

#define ETHTRCV_RTL9010AA_100BASET1_TESTMODE_SUP       (0x37U)

#define ETHTRCV_RTL9010AA_PCS_LB_MASK                  (0x4000U)

#define ETHTRCV_RTL9010AA_PCS_LB_SHIFT                 (14U)

#define ETHTRCV_RTL9010AA_PMA_CONTROL                  (0U)

#define ETHTRCV_RTL9010AA_PMA_LB_MASK                  (0x1U)

#define ETHTRCV_RTL9010AA_PMA_LB_SHIFT                 (0U)

#define ETHTRCV_RTL9010AA_IPGR1_REG                    (0xC800U)

#define ETHTRCV_RTL9010AA_REMOTE_LB_MASK               (0x30U)

#define ETHTRCV_RTL9010AA_REMOTE_LB_SHIFT              (4U)

#define ETHTRCV_RTL9010AA_REMOTE_LB_VAL                (0x01U)

/* JL311X special registers */
#define ETHTRCV_JL311X_MMD_PMA_PMD                     (1U)

#define ETHTRCV_JL311X_MMD_PCS                         (3U)

#define ETHTRCV_JL311X_MMD_CTRL                        (31U)

#define ETHTRCV_JL311X_BASIC_CONTROL                   (0U)

#define ETHTRCV_JL311X_RESET_MASK                      (0x8000U)

#define ETHTRCV_JL311X_POWER_DOWN                      (0x0800U)

#define ETHTRCV_JL311X_FORCE_SPEED_MASK                (0x2040U)

#define ETHTRCV_JL311X_FORCE_SPEED_100M                (0x2000U)

#define ETHTRCV_JL311X_FORCE_SPEED_1000M               (0x0040U)

#define ETHTRCV_JL311X_LOCAL_LOOPBACK                  (0x1U)

#define ETHTRCV_JL311X_BASIC_STATUS                    (1U)

#define ETHTRCV_JL311X_LINKED_MASK                     (0x4U)

#define ETHTRCV_JL311X_SQI_REG                         (0x8B10U)

#define ETHTRCV_JL311X_SQI_MASK                        (0x3FFU)

#define ETHTRCV_JL311X_SQI_SHIFT                       (0U)

#define ETHTRCV_JL311X_COMM_UCFG0                      (0x8000U)

#define ETHTRCV_JL311X_COMM_UCFG0_SYNCE_RATE           (0x0200U)

#define ETHTRCV_JL311X_COMM_UCFG0_SYNCE_EN             (0x0100U)

#define ETHTRCV_JL311X_COMM_UCFG0_MODE_MASK            (0x000FU)

#define ETHTRCV_JL311X_COMM_UCFG0_MODE_RGMII           (0U)

#define ETHTRCV_JL311X_COMM_UCFG0_MODE_SGMII           (1U)

#define ETHTRCV_JL311X_COMM_UCFG0_MODE_MII             (2U)

#define ETHTRCV_JL311X_COMM_UCFG0_MODE_REVMII          (3U)

#define ETHTRCV_JL311X_COMM_UCFG0_MODE_RGMII_SGMII_PHY (4U)

#define ETHTRCV_JL311X_COMM_UCFG0_MODE_RGMII_SGMII_MAC (5U)

#define ETHTRCV_JL311X_COMM_UCFG0_MODE_RMII            (6U)

#define ETHTRCV_JL311X_COMM_UCFG1                      (0x8001U)

#define ETHTRCV_JL311X_COMM_UCFG1_GPIO_FUNC_MASK       (0x7U)

#define ETHTRCV_JL311X_COMM_UCFG1_GPIO_FUNC_GPIO0      (0U)

#define ETHTRCV_JL311X_COMM_UCFG1_GPIO_FUNC_LED0       (1U)

#define ETHTRCV_JL311X_COMM_UCFG1_GPIO_FUNC_SYNCE      (2U)

#define ETHTRCV_JL311X_COMM_UCFG1_GPIO_FUNC_PTPEVENT   (3U)

#define ETHTRCV_JL311X_COMM_UCFG1_GPIO_FUNC_PTPTRIGGER (4U)

#define ETHTRCV_JL311X_XMII_UCFG                       (0x8800U)

#define ETHTRCV_JL311X_RGMII_TXDELAY_EN                (0x8000U)

#define ETHTRCV_JL311X_RGMII_RXDELAY_EN                (0x4000U)

#define ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_MASK        (0x0C00U)

#define ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_18          (0x0C00U)

#define ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_15          (0x0800U)

#define ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_12          (0x0400U)

#define ETHTRCV_JL311X_RGMII_TXDELAY_LEVEL_10          (0x0000U)

#define ETHTRCV_JL311X_RMII_CLOCK_IN                   (0x2U)

#define ETHTRCV_JL311X_SGMII_UCFG                      (0x8810U)

#define ETHTRCV_JL311X_SGMII_UCFG_NOCHECK_AN           (0x4U)

#define ETHTRCV_JL311X_1000BASET1_TESTMODE             (0x904U)

#define ETHTRCV_JL311X_100BASET1_TESTMODE              (0x836U)

#define ETHTRCV_JL311X_TESTMODE_MASK                   (0xE000U)

#define ETHTRCV_JL311X_TESTMODE_SHIFT                  (13U)

#define ETHTRCV_JL311X_1000BASET1_TESTMODE_SUP         (0xF7U)

#define ETHTRCV_JL311X_100BASET1_TESTMODE_SUP          (0x37U)

#define ETHTRCV_JL311X_PCS_XMII_LB_REG                 (0x8800U)

#define ETHTRCV_JL311X_PCS_XMII_LB_MASK                (0x4U)

#define ETHTRCV_JL311X_PCS_XMII_LB_SHIFT               (2U)

#define ETHTRCV_JL311X_PCS_SGMII_LB_REG                (0x8810U)

#define ETHTRCV_JL311X_PCS_SGMII_LB_MASK               (0x1U)

#define ETHTRCV_JL311X_PCS_SGMII_LB_SHIFT              (0U)

#define ETHTRCV_JL311X_PMA_REMOTE_LB_MASK              (0x3U)

#define ETHTRCV_JL311X_PMA_REMOTE_LB_SHIFT             (0U)

/*!

 * @addtogroup ETHTRCV_Register_Masks ETHTRCV Register Masks

 * @{

 */

#ifdef __cplusplus
}
#endif

#endif /*ETHTRCV_REG_H*/

/** @} */
