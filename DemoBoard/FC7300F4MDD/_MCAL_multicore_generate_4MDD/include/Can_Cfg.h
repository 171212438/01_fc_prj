/**
*   @file    Can_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR CAN Pre-Compile configuration - API
*   @details AUTOSAR CAN Pre-Compile configuration - API
*
*   @addtogroup CAN
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : FlexCAN
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       2023-07-05    QXW0054       N/A           First version for FC7300
*   0.3.0       2023-10-17    QXW0073       N/A           Update Autosar Version to V4.6.0
*   0.4.0       2023-11-21    QXW0073       N/A           Add HRH index for Fifo feature
*   0.5.0       2024-2-5      QXW0112       N/A           -Fix ECC RAM not init bug
                                                          -support for CANFD baud rate expansion register
                                                          -Increase support for the second sampling point
*   0.6.0       2024-03-31    QXW0112       N/A           Add FC7240 platform support
*   0.7.1       2024-7-5      QXW0038       N/A           Fix QAC warnings
==================================================================================================*/
#ifndef CAN_CFG_H
#define CAN_CFG_H

#ifdef __cplusplus
extern "C"{
#endif
/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: Some macro length are more than 31 */
/* PRQA S 0779 ++ #Misra-C:2012 Rule-5.2 Identifiers declared in the same scope and name space shall be distinct
 * Reason: Some macro length are more than 31 */


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"
#include "Mcal.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CAN_VENDOR_ID_PCCFG_CUR                    174
#define CAN_MODULE_ID_PCCFG_CUR                    80
#define CAN_AR_RELEASE_MAJOR_VERSION_PCCFG_CUR     4
#define CAN_AR_RELEASE_MINOR_VERSION_PCCFG_CUR     6
#define CAN_AR_RELEASE_REVISION_VERSION_PCCFG_CUR  0
#define CAN_SW_MAJOR_VERSION_PCCFG_CUR             1
#define CAN_SW_MINOR_VERSION_PCCFG_CUR             5
#define CAN_SW_PATCH_VERSION_PCCFG_CUR             1



/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

#define CAN_PUBLIC_ICOM_SUPPORT  STD_OFF


/* CAN_ENABLE_WAKEUP_SUPPORT is for Special Customer */
#define CAN_ENABLE_WAKEUP_SUPPORT   (STD_ON)

#define CAN_MAXMASKCOUNT            (Can_HwHandleType)65535U




#define CanConf_CanController_CanController_0 ((uint8)0U)
#define CanConf_CanController_CanController_1 ((uint8)1U)
#define CanConf_CanController_CanController_2 ((uint8)2U)
#define CanConf_CanController_CanController_3 ((uint8)3U)
#define CanConf_CanController_CanController_4 ((uint8)4U)
#define CanConf_CanController_CanController_5 ((uint8)5U)

#define CanConf_CanController_List  {CanConf_CanController_CanController_0, CanConf_CanController_CanController_1, CanConf_CanController_CanController_2, CanConf_CanController_CanController_3, CanConf_CanController_CanController_4, CanConf_CanController_CanController_5 } 



#define CanController0_Receive0             0U
#define CanController1_Receive0             1U
#define CanController1_Receive1             2U
#define CanController1_Receive2             3U
#define CanController1_Receive3             4U
#define CanController2_Receive0             5U
#define CanController3_Receive0             6U
#define CanController4_Receive0             7U
#define CanController5_Receive0             8U
#define CanController0_EFifo0             9U
#define CanController1_EFifo0             10U
#define CanController2_EFifo0             11U
#define CanController3_EFifo0             12U
#define CanController4_EFifo0             13U
#define CanController0_Transmit0             14U
#define CanController1_Transmit0             15U
#define CanController2_Transmit0             16U
#define CanController3_Transmit0             17U
#define CanController4_Transmit0             18U
#define CanController5_Transmit0             19U

#define CAN_LPDU_NOTIFICATION_ENABLE     (STD_OFF)


#define CAN_PRECOMPILE_SUPPORT           (STD_OFF)

#define CAN_EXTENDEDID                   (STD_ON)

#define CAN_SET_BAUDRATE_API             (STD_ON)

#define CAN_DEV_ERROR_DETECT             (STD_OFF)
#define CAN_DEM_SUPPORT                  (STD_ON)

#define CAN_MULTIPLE_INTERRUPTS_SUPPORT  (STD_ON)

#define CAN_MBCOUNTEXTENSION             (STD_ON)

#define CAN_VERSION_INFO_API             (STD_ON)

#define CAN_MULTIPLEXED_TRANSMISSION     (STD_ON)

#define CAN_HW_TRANSMIT_CANCELLATION     (STD_OFF)

#define CAN_API_ENABLE_ABORT_MB          (STD_OFF)

#define CAN_ABORT_ONLY_ONE_MB (STD_OFF)

#define CAN_INSTANCE 0U

#define CAN_TRIGGER_TRANSMIT_EN (STD_OFF)

#define CAN_MIX_MB_SUPPORT (STD_OFF)

#define CAN_MEMORY_ECC_SUPPORT (STD_OFF)

#define CAN_MAXMBCOUNT_0  17U
#define CAN_HTH_START_ID  14U
#define CAN_HTH_CNT       6U
#define CAN_MAXMB_SUPPORTED 96U
#define CAN_IFLAG_IMASK_NUM 3U


#define CAN_CONTROLLER_0_MAXMB_CONFIGURED  2U

#define CAN_CONTROLLER_1_MAXMB_CONFIGURED  7U

#define CAN_CONTROLLER_2_MAXMB_CONFIGURED  2U

#define CAN_CONTROLLER_3_MAXMB_CONFIGURED  2U

#define CAN_CONTROLLER_4_MAXMB_CONFIGURED  2U

#define CAN_CONTROLLER_5_MAXMB_CONFIGURED  2U

#define CAN_MAXMB_CONFIGURED  96U



#define CAN_MAXCTRL_SUPPORTED 8U

#define FLEXCAN0_BASEADDR      0x40080000U
#define FLEXCAN1_BASEADDR      0x40084000U
#define FLEXCAN2_BASEADDR      0x40088000U
#define FLEXCAN3_BASEADDR      0x4008C000U
#define FLEXCAN4_BASEADDR      0x40090000U
#define FLEXCAN5_BASEADDR      0x40480000U
#define FLEXCAN6_BASEADDR      0x40484000U
#define FLEXCAN7_BASEADDR      0x40488000U

#define FLEXCAN0_ERROR_ISR      STD_ON
#define FLEXCAN1_ERROR_ISR      STD_ON
#define FLEXCAN2_ERROR_ISR      STD_ON
#define FLEXCAN3_ERROR_ISR      STD_ON
#define FLEXCAN4_ERROR_ISR      STD_ON
#define FLEXCAN5_ERROR_ISR      STD_ON
#define FLEXCAN6_ERROR_ISR      STD_ON
#define FLEXCAN7_ERROR_ISR      STD_ON

#define CAN_MAXCONTROLLERCOUNT_0  6U

#define CAN_MAXCTRL_CONFIGURED 6U


#define CAN_MAXFILTERCOUNT_0  9U

#define CAN_CFGSET0_MAX_BAUDRATE_FC_0_0    1U

#define CAN_CFGSET0_MAX_BAUDRATE_FC_1_1    1U

#define CAN_CFGSET0_MAX_BAUDRATE_FC_2_2    1U

#define CAN_CFGSET0_MAX_BAUDRATE_FC_3_3    1U

#define CAN_CFGSET0_MAX_BAUDRATE_FC_4_4    1U

#define CAN_CFGSET0_MAX_BAUDRATE_FC_5_5    1U

#define CAN_FD_MODE_ENABLE          (STD_ON)

#define CAN_CONTROLLER_FD_ISO_CANFD (STD_ON)

#define CAN_CONTROLLER_FD_PREXCEN   (STD_ON)

#define CAN_CONTROLLER_FD_EDFLTDIS  (STD_ON)


#define CAN_LEGACY_RXFIFO_ENABLE (STD_OFF)

#define CAN_ENHANCED_FIFO_MAX_TABLEID_0  10U


#define CAN_ENHANCED_RXFIFO_ENABLE (STD_ON)

#define CAN_ENHANCED_RXFIFO_ERFFEL_LIST {78,78,78,78,78,78,46,46}
#define CAN_ENHANCED_RXFIFO_ERFFEL_LIST_LEN 8
#define CAN_ENHANCED_RXFIFO_DEPTH_LIST {20,20,20,20,20,20,12,12}
#define CAN_ENHANCED_RXFIFO_DEPTH_LIST_LEN 8
#define CAN_HW_RAM_INIT_REGION_COUNT 12U
#define CAN_HW_RAM_INIT_WORD_CONFIG_LEN 8U
#define CAN_HW_RAM_INIT_WORD_CONFIG_LIST {{{384,96,8,4,4,4,4,18,18,18,400,78}},{{384,96,8,4,4,4,4,18,18,18,400,78}},{{384,96,8,4,4,4,4,18,18,18,400,78}},{{384,96,8,4,4,4,4,18,18,18,400,78}},{{384,96,8,4,4,4,4,18,18,18,400,78}},{{384,96,8,4,4,4,4,18,18,18,400,78}},{{128,32,8,4,4,4,4,18,18,18,240,46}},{{128,32,8,4,4,4,4,18,18,18,240,46}}}

#define CAN_ERROR_NOTIFICATION_ENABLE (STD_OFF)
#define CAN_ERROR_POLLING_ENABLE (STD_ON)

/*----------------------- CAN0 ---------------------*/
#define CAN_CAN0_CONTROLLER_ID            ((uint8)0U)
#define FLEXCAN_0_INDEX                   ((uint8)0U)
#define CAN_0_LEGACY_FIFO_EN              (STD_OFF)
#define CAN_0_ENHANCED_FIFO_EN            (STD_ON)
#define CAN_0_FD_EN                       (STD_ON)
#define CAN_0_ISOFD_EN                    (STD_ON)
#define CAN_0_ERROR_NOTIFICATION_ENABLE   (STD_OFF)
#define CAN_0_MB_BUF_SIZE                 16U

#define CAN_0_BUSOFFINT_SUPPORTED         (STD_OFF)
#define CAN_0_TXINT_SUPPORTED             (STD_ON)
#define CAN_0_RXINT_SUPPORTED             (STD_ON)

#ifdef CAN_CAN0_CONTROLLER_ID
    extern ISR(Can_IsrCAN0_All);
    #if FLEXCAN0_ERROR_ISR == STD_ON
        extern ISR(Can_IsrErrorCAN0_All);
    #endif
#endif




/*----------------------- CAN1 ---------------------*/
#define CAN_CAN1_CONTROLLER_ID            ((uint8)1U)
#define FLEXCAN_1_INDEX                   ((uint8)1U)
#define CAN_1_LEGACY_FIFO_EN              (STD_OFF)
#define CAN_1_ENHANCED_FIFO_EN            (STD_ON)
#define CAN_1_FD_EN                       (STD_ON)
#define CAN_1_ISOFD_EN                    (STD_ON)
#define CAN_1_ERROR_NOTIFICATION_ENABLE   (STD_OFF)
#define CAN_1_MB_BUF_SIZE                 64U

#define CAN_1_BUSOFFINT_SUPPORTED         (STD_OFF)
#define CAN_1_TXINT_SUPPORTED             (STD_ON)
#define CAN_1_RXINT_SUPPORTED             (STD_ON)

#ifdef CAN_CAN1_CONTROLLER_ID
    extern ISR(Can_IsrCAN1_All);
    #if FLEXCAN1_ERROR_ISR == STD_ON
        extern ISR(Can_IsrErrorCAN1_All);
    #endif
#endif




/*----------------------- CAN2 ---------------------*/
#define CAN_CAN2_CONTROLLER_ID            ((uint8)2U)
#define FLEXCAN_2_INDEX                   ((uint8)2U)
#define CAN_2_LEGACY_FIFO_EN              (STD_OFF)
#define CAN_2_ENHANCED_FIFO_EN            (STD_ON)
#define CAN_2_FD_EN                       (STD_OFF)
#define CAN_2_ISOFD_EN                    (STD_ON)
#define CAN_2_ERROR_NOTIFICATION_ENABLE   (STD_OFF)
#define CAN_2_MB_BUF_SIZE                 8U

#define CAN_2_BUSOFFINT_SUPPORTED         (STD_OFF)
#define CAN_2_TXINT_SUPPORTED             (STD_ON)
#define CAN_2_RXINT_SUPPORTED             (STD_ON)

#ifdef CAN_CAN2_CONTROLLER_ID
    extern ISR(Can_IsrCAN2_All);
    #if FLEXCAN2_ERROR_ISR == STD_ON
        extern ISR(Can_IsrErrorCAN2_All);
    #endif
#endif




/*----------------------- CAN3 ---------------------*/
#define CAN_CAN3_CONTROLLER_ID            ((uint8)3U)
#define FLEXCAN_3_INDEX                   ((uint8)3U)
#define CAN_3_LEGACY_FIFO_EN              (STD_OFF)
#define CAN_3_ENHANCED_FIFO_EN            (STD_ON)
#define CAN_3_FD_EN                       (STD_OFF)
#define CAN_3_ISOFD_EN                    (STD_ON)
#define CAN_3_ERROR_NOTIFICATION_ENABLE   (STD_OFF)
#define CAN_3_MB_BUF_SIZE                 8U

#define CAN_3_BUSOFFINT_SUPPORTED         (STD_OFF)
#define CAN_3_TXINT_SUPPORTED             (STD_ON)
#define CAN_3_RXINT_SUPPORTED             (STD_ON)

#ifdef CAN_CAN3_CONTROLLER_ID
    extern ISR(Can_IsrCAN3_All);
    #if FLEXCAN3_ERROR_ISR == STD_ON
        extern ISR(Can_IsrErrorCAN3_All);
    #endif
#endif




/*----------------------- CAN4 ---------------------*/
#define CAN_CAN4_CONTROLLER_ID            ((uint8)4U)
#define FLEXCAN_4_INDEX                   ((uint8)4U)
#define CAN_4_LEGACY_FIFO_EN              (STD_OFF)
#define CAN_4_ENHANCED_FIFO_EN            (STD_ON)
#define CAN_4_FD_EN                       (STD_OFF)
#define CAN_4_ISOFD_EN                    (STD_ON)
#define CAN_4_ERROR_NOTIFICATION_ENABLE   (STD_OFF)
#define CAN_4_MB_BUF_SIZE                 8U

#define CAN_4_BUSOFFINT_SUPPORTED         (STD_OFF)
#define CAN_4_TXINT_SUPPORTED             (STD_ON)
#define CAN_4_RXINT_SUPPORTED             (STD_ON)

#ifdef CAN_CAN4_CONTROLLER_ID
    extern ISR(Can_IsrCAN4_All);
    #if FLEXCAN4_ERROR_ISR == STD_ON
        extern ISR(Can_IsrErrorCAN4_All);
    #endif
#endif




/*----------------------- CAN5 ---------------------*/
#define CAN_CAN5_CONTROLLER_ID            ((uint8)5U)
#define FLEXCAN_5_INDEX                   ((uint8)5U)
#define CAN_5_LEGACY_FIFO_EN              (STD_OFF)
#define CAN_5_ENHANCED_FIFO_EN            (STD_OFF)
#define CAN_5_FD_EN                       (STD_OFF)
#define CAN_5_ISOFD_EN                    (STD_ON)
#define CAN_5_ERROR_NOTIFICATION_ENABLE   (STD_OFF)
#define CAN_5_MB_BUF_SIZE                 8U

#define CAN_5_BUSOFFINT_SUPPORTED         (STD_OFF)
#define CAN_5_TXINT_SUPPORTED             (STD_OFF)
#define CAN_5_RXINT_SUPPORTED             (STD_OFF)

#ifdef CAN_CAN5_CONTROLLER_ID
    extern ISR(Can_IsrCAN5_All);
    #if FLEXCAN5_ERROR_ISR == STD_ON
        extern ISR(Can_IsrErrorCAN5_All);
    #endif
#endif





#define CAN_TXPOLL_SUPPORTED (STD_ON)
#define CAN_TXINT_SUPPORTED (STD_ON)

#define CAN_RXPOLL_SUPPORTED (STD_ON)
#define CAN_RXINT_SUPPORTED (STD_ON)

#define CAN_TX_RX_INTRRUPT_SUPPORTED    (STD_ON)

#define CAN_BUSOFFPOLL_SUPPORTED (STD_ON)

#define CAN_BUSOFFINT_SUPPORTED (STD_OFF)


#define CAN_ISROPTCODESIZE (STD_OFF)

#define CAN_TIMEOUT_DURATION 5000U

#define CAN_TIMEOUT_AS_LOOP   (STD_ON)




#define CAN_MAINFUNCTION_PERIOD         (0.001F)
#define CAN_MAINFUNCTION_PERIOD_READ     (0.001F)
#define CAN_MAINFUNCTION_MULTIPLE_READ   (STD_OFF)
#define CAN_MAINFUNCTION_PERIOD_WRITE    (0.001F)
#define CAN_MAINFUNCTION_MULTIPLE_WRITE  (STD_OFF)

#define CAN_MAINFUNCTION_MODE_PERIOD    0.001F


#define CAN_BCC_SUPPORT_ENABLE (STD_OFF)


#define CAN_MAX_OBJECT_ID ((uint32)20U)

#define CAN_ECUC_PARTITIONS_NUM   (2U)

#define CAN_ECUC_CORES_NUM   (2U)

#define CAN_SUPPORT_MULTICORE (STD_ON)

#define CAN_USE_LEGACY_CANIF_API (STD_OFF)

#define CAN_USE_SHORT_CAN_IDTYPE (STD_OFF)

#define CAN_USE_LEGACY_PDUINFOTYPE (STD_OFF)

#define CAN_CONTROLLER_REFERENCE_COUNTER 8

#define CAN_CTRL_CONFIGURED (6U)

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

#define CAN_MB_CONTROLLER_1     96U
#define CAN_MB_CONTROLLER_2     96U
#define CAN_MB_CONTROLLER_3     96U
#define CAN_MB_CONTROLLER_4     96U
#define CAN_MB_CONTROLLER_5     96U
#define CAN_MB_CONTROLLER_6     96U
#define CAN_MB_CONTROLLER_7     32U
#define CAN_MB_CONTROLLER_8     32U

/* PRQA S 0779 -- */
/* PRQA S 0791 -- */

#ifdef __cplusplus
}
#endif

#endif /* _CAN_CFG_H_ */
/** @} */
