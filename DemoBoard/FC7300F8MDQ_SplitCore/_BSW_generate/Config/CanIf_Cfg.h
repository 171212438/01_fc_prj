/**
 * @addtogroup CANIF
 * @{
 */

/**
 * @file CanIf_Cfg.h
 * @author Flagchip
 * @brief AUTOSAR CANIF - driver API and development errors implemention.
 * @version 0.3.0
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023 Flagchip Semiconductors Co., Ltd.
 *
 */
#ifndef CANIF_CFG_H
#define CANIF_CFG_H

/*******************************************************************************
*   Common Macro
*******************************************************************************/
#define CANIF_FILTER_TYPE_BINARY                            1
#define CANIF_FILTER_TYPE_INDEX                             2
#define CANIF_FILTER_TYPE_LINEAR                            3
#define CANIF_FILTER_TYPE_TABLE                             4
/* CanIf Dlc Check Type*/
#define CANIF_DLC_CHECK_AUTOSAR                             0
#define CANIF_DLC_CHECK_USER                                1
/*******************************************************************************
*   Non Autosar Standard
*******************************************************************************/
#define CANIF_CONFIG_VARIANTS                               STD_CONFIG_VARIANTS_PRECOMPILE
#define CANIF_MAX_CONTROLLER_NUM                            1
#define CANIF_MAX_TRCV_NUM                                  0
#define CANIF_MAX_TXPDU_NUM                                 3
#define CANIF_MAX_RXPDU_NUM                                 4
#define CANIF_MAX_HTH_NUM                                   3
#define CANIF_MAX_HRH_NUM                                   4
#define CANIF_MAX_TXBUF_NUM                                 0
#define CANIF_MAX_DYNTXPDU_NUM                              0
#define CANIF_MAX_TXNOTIFY_NUM                              0
#define CANIF_MAX_RXBUF_NUM                                 0
#define CANIF_MAX_RXNOTIFY_NUM                              0
#define CANIF_MAX_TXTRIGGER_NUM                             0

#define CANIF_DLC_CHECK_TYPE                                CANIF_DLC_CHECK_AUTOSAR
#define CANIF_HRH_RANGE_FILTER_SUPPORT                      STD_ON
#define CANIF_PRIVATE_VERSION_CHECK                         STD_ON
#define CANIF_HOH_OPTIMIZE_SUPPORT                          STD_OFF
#define CANIF_PUBLIC_MULTIPLE_TRCVDRV_SUPPORT               STD_OFF
#define CANIF_PRIVATE_CANFD_SUPPORT                         STD_OFF

#define CANIF_SW_MAJOR_VERSION_CFG                          0
#define CANIF_SW_MINOR_VERSION_CFG                          3
#define CANIF_SW_PATCH_VERSION_CFG                          0
#define CANIF_AR_RELEASE_MAJOR_VERSION_CFG                  4
#define CANIF_AR_RELEASE_MINOR_VERSION_CFG                  6
#define CANIF_AR_RELEASE_REVISION_VERSION_CFG               0
/*******************************************************************************
*   CanIfPrivateCfg
*******************************************************************************/
#define CANIF_PRIVATE_DLC_CHECK                             STD_OFF
#define CANIF_PRIVATE_SOFTWARE_FILTER_TYPE                  CANIF_FILTER_TYPE_INDEX
#define CANIF_SUPPORT_TTCAN                                 STD_OFF
#define CANIF_FIXED_BUFFER                                  STD_ON
#define CANIF_OSEKNM_SUPPORT                                STD_OFF
/*******************************************************************************
*   CanIfPublicCfg
*******************************************************************************/
#define CANIF_METADATA_SUPPORT                              STD_OFF
#define CANIF_PUBLIC_CANCEL_TRANSMIT_SUPPORT                STD_ON
#define CANIF_SET_BAUDRATE_API                              STD_OFF
#define CANIF_PUBLIC_DEV_ERROR_DETECT                       STD_ON
#define CANIF_PUBLIC_MULTIPLE_DRV_SUPPORT                   STD_OFF
#define CANIF_PUBLIC_NUMBER_OF_CAN_HW_UNITS                 1
#define CANIF_PUBLIC_READRXPDU_DATA_API                     STD_OFF
#define CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API            STD_OFF
#define CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API            STD_OFF
#define CANIF_PUBLIC_SETDYNAMICTXID_API                     STD_OFF
#define CANIF_PUBLIC_TX_BUFFERING                           STD_OFF
#define CANIF_PUBLIC_VERSION_INFO_API                       STD_OFF
#define CANIF_PUBLIC_WAKEUP_CHECK_VALIDATION_SUPPORT        STD_OFF
#define CANIF_PUBLIC_PN_SUPPORT                             STD_OFF
#define CANIF_PUBLIC_TXCONFIRM_POLLING_SUPPORT              STD_OFF
#define CANIF_PUBLIC_WAKEUP_CHECK_VALID_BY_NM               STD_OFF
#define CANIF_PUBLIC_WAKEUP_CHECK_VALID_BY_OSEKNM           STD_OFF
#define CANIF_PUBLIC_ICOM_SUPPORT                           STD_OFF
#define CANIF_TRIGGER_TRANSMIT_SUPPORT                      STD_OFF
#define CANIF_TXOFF_ACTIVE_SUPPORT                          STD_OFF
#define CANIF_WAKEUP_SUPPORT                                STD_OFF
/*******************************************************************************
*   ConfigSet handle
*******************************************************************************/
#define CanIf_CanConfigSet                                  ((uint8)0)
/*******************************************************************************
*   CanIfTxPduCfg
*******************************************************************************/
/*CanConfigSet*/
#define CanIf_CanConfigSet_Tx_EAS_Can0_ComTx_a              ((PduIdType)0)
#define CanIf_CanConfigSet_Tx_EAS_Can0_Nm_Tx                ((PduIdType)1)
#define CanIf_CanConfigSet_Tx_EAS_Can0_Diag_Response        ((PduIdType)2)
/*******************************************************************************
*   CanIfRxPduCfg
*******************************************************************************/
/*CanConfigSet*/
#define CanIf_CanConfigSet_Rx_EAS_Can0_ComRx_a              ((PduIdType)0)
#define CanIf_CanConfigSet_Rx_EAS_Can0_NM_Rx                ((PduIdType)1)
#define CanIf_CanConfigSet_Rx_EAS_Can0_Diag_PhyReq          ((PduIdType)2)
#define CanIf_CanConfigSet_Rx_EAS_Can0_Diag_FunReq          ((PduIdType)3)
/*******************************************************************************
*   CanIfCtrl Trcv Cfg
*******************************************************************************/
#define CANIF_CTRL_WAKEUP_SUPPORT                           STD_OFF
#define CANIF_TRCV_WAKEUP_SUPPORT                           STD_OFF
/*Ctrl Handles*/
#define CanIf_CanIf_CanCtrl_0                               ((uint8)0)
/*Trcv Handles*/
/*******************************************************************************
*   Access macro
*******************************************************************************/
#define CANIF_USED_CONTROLLER_NUM                           ((uint8)1)
#define CANIF_USED_TRCV_NUM                                 ((uint8)0)
#define CANIF_USED_TXPDU_NUM                                ((PduIdType)3)
#define CANIF_USED_RXPDU_NUM                                ((PduIdType)4)
#define CANIF_USED_HTH_NUM                                  ((Can_HwHandleType)3)
#define CANIF_USED_HRH_NUM                                  ((Can_HwHandleType)4)
#define CANIF_USED_TXBUF_NUM                                ((PduIdType)0)
#define CANIF_USED_DYNTXPDU_NUM                             ((PduIdType)0)
#define CANIF_USED_TXNOTIFY_NUM                             ((PduIdType)0)
#define CANIF_USED_RXBUF_NUM                                ((PduIdType)0)
#define CANIF_USED_RXNOTIFY_NUM                             ((PduIdType)0)
#define CANIF_USED_WAKRUPSRC_NUM                            ((uint8)0)
#define CANIF_DISPATCH_USERCTRLBUSOFF_NAME                  CanSM_ControllerBusOff(ControllerId)
#define CANIF_DISPATCH_USERCTRLMODEINDICATION_NAME          CanSM_ControllerModeIndication(ControllerId, ControllerMode)

#endif /* CANIF_CFG_H */

/** @} */
