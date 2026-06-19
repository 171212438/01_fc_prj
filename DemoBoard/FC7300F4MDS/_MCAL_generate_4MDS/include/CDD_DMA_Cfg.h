/**
*   @file    CDD_DMA_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR DMA - contains the configuration data of the DMA driver
*   @details Contains the configuration data of the DMA driver
*
*   @addtogroup DMA
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : DMA
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
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
*   0.1.0       07/06/2023    QXW0099       N/A          DMA Initial Version
*   0.2.0       18/09/2023    QXW0099       N/A          DMA Second Version
*   0.3.0       12/10/2023    QXW0099       N/A          Add multicore support
*   0.4.0       10/11/2023    QXW0099       N/A          Update version
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
*   0.9.0       23/12/2024    QXW0099       N/A          Add FC7300DQ MCU
==================================================================================================*/

#ifndef CDD_DMA_CFG_H
#define CDD_DMA_CFG_H

#ifdef __cplusplus
extern "C"{
#endif
/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Mcal.h"
#include "Common_Cfg.h"
/* Inclusion of Variant-aware headers */
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_VENDOR_ID_CFG                       174

#define DMA_AR_RELEASE_MAJOR_VERSION_CFG        4
#define DMA_AR_RELEASE_MINOR_VERSION_CFG        6
#define DMA_AR_RELEASE_REVISION_VERSION_CFG     0

#define DMA_SW_MAJOR_VERSION_CFG                1
#define DMA_SW_MINOR_VERSION_CFG                5
#define DMA_SW_PATCH_VERSION_CFG                1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/* DMA Pre Compile Switch */
#define DMA_PRECOMPILE_SUPPORT (STD_ON)

/**
*   @brief  Switches the Development Error Detection and Notification on or off.
*        STD_ON: Enabled. STD_OFF: Disabled.
*
*/
#define DMA_DEV_ERROR_DETECT                  (STD_ON)

/**
* @{
*   @brief Configuration of Optional API's
*/
/**
*   @brief  Adds or removes the service Dma_GetVersionInfo() from the code.
*        STD_ON: Dma_GetVersionInfo() can be used. STD_OFF: Dma_GetVersionInfo() can not be used.
*
*/
#define DMA_GET_VERSION_INFO_API              (STD_ON)

/**
* @{
*   @brief Configuration of Optional API's
*/
/**
*   @brief  Adds or removes the service Dma_DeInit() from the code.
*        STD_ON: Dma_DeInit() can be used. STD_OFF: Dma_DeInit() can not be used.
*
*/
#define DMA_DEINIT_API                        (STD_ON)

/**
* @brief define the DMA channel number
*/
#define DMA_MAX_CHANNEL                       (32U)

/**
* @brief define whether the DMA0 have moncheck
*/
#define DMA_CORE_HAVE_TCM_BACKDOOR               (STD_ON)

/**
* @brief define the Dma partitions used
*/
#define DMA_MAX_CORE_USED_U8                     (2U)

/**
* @brief define whether the DMA0 have moncheck
*/
#define DMA0_HAVE_LOCKSTEP                       (STD_ON)


/**
* @brief define the Dma cancel transfer waiting time
*/
#define DMA_CANCEL_TRANS_WAITING_TIME         (15000000U)

/**
* @brief define if support Dma Cancel API
*/
#define DMA_CANCEL_TransferAPI                (STD_ON)

/**
* @brief define if support Dma Cancel With Error API
*/
#define DMA_ERROR_CANCEL_TransferAPI          (STD_ON)

/**
* @brief define if support Dma Cancel With Error API
*/
#define DMA_HALT_API                          (STD_ON)

/**
* @brief define if enable Dma Multicore Support
*/
#define DMA_MULTICORE_ENABLE                  (STD_OFF)

/**
* @brief define if enable Dma Multicore Support Error Detect
*/
#define DMA_MULTICORE_ERRDETECT               (STD_OFF)

/**
* @brief define if enable Dma Monitor when it does not have locksteop
*/
#define DMA_USE_SHADOW_CFGRAM                 (STD_OFF)


/**
* @brief define the number of channels configured
*/
#define DMA_0_USED_CHANNEL_NUM   (1U)

#define DMA_1_USED_CHANNEL_NUM   (0U)
/**
* @brief define if DMA0 channel is used
*/
#define DMA_0_CHANNEL0_USED    STD_ON

#define DMA_0_CHANNEL0_IRQ     STD_ON

#define DMA_0_CHANNEL0_ERROR_IRQ     STD_OFF

#define DMA_0_CHANNEL1_USED    STD_OFF

#define DMA_0_CHANNEL2_USED    STD_OFF

#define DMA_0_CHANNEL3_USED    STD_OFF

#define DMA_0_CHANNEL4_USED    STD_OFF

#define DMA_0_CHANNEL5_USED    STD_OFF

#define DMA_0_CHANNEL6_USED    STD_OFF

#define DMA_0_CHANNEL7_USED    STD_OFF

#define DMA_0_CHANNEL8_USED    STD_OFF

#define DMA_0_CHANNEL9_USED    STD_OFF

#define DMA_0_CHANNEL10_USED    STD_OFF

#define DMA_0_CHANNEL11_USED    STD_OFF

#define DMA_0_CHANNEL12_USED    STD_OFF

#define DMA_0_CHANNEL13_USED    STD_OFF

#define DMA_0_CHANNEL14_USED    STD_OFF

#define DMA_0_CHANNEL15_USED    STD_OFF

#define DMA_0_CHANNEL16_USED    STD_OFF

#define DMA_0_CHANNEL17_USED    STD_OFF

#define DMA_0_CHANNEL18_USED    STD_OFF

#define DMA_0_CHANNEL19_USED    STD_OFF

#define DMA_0_CHANNEL20_USED    STD_OFF

#define DMA_0_CHANNEL21_USED    STD_OFF

#define DMA_0_CHANNEL22_USED    STD_OFF

#define DMA_0_CHANNEL23_USED    STD_OFF

#define DMA_0_CHANNEL24_USED    STD_OFF

#define DMA_0_CHANNEL25_USED    STD_OFF

#define DMA_0_CHANNEL26_USED    STD_OFF

#define DMA_0_CHANNEL27_USED    STD_OFF

#define DMA_0_CHANNEL28_USED    STD_OFF

#define DMA_0_CHANNEL29_USED    STD_OFF

#define DMA_0_CHANNEL30_USED    STD_OFF

#define DMA_0_CHANNEL31_USED    STD_OFF

/**
* @brief define if DMA1 channel is used
*/
#define DMA_1_CHANNEL0_USED    STD_OFF

#define DMA_1_CHANNEL1_USED    STD_OFF

#define DMA_1_CHANNEL2_USED    STD_OFF

#define DMA_1_CHANNEL3_USED    STD_OFF

#define DMA_1_CHANNEL4_USED    STD_OFF

#define DMA_1_CHANNEL5_USED    STD_OFF

#define DMA_1_CHANNEL6_USED    STD_OFF

#define DMA_1_CHANNEL7_USED    STD_OFF

#define DMA_1_CHANNEL8_USED    STD_OFF

#define DMA_1_CHANNEL9_USED    STD_OFF

#define DMA_1_CHANNEL10_USED    STD_OFF

#define DMA_1_CHANNEL11_USED    STD_OFF

#define DMA_1_CHANNEL12_USED    STD_OFF

#define DMA_1_CHANNEL13_USED    STD_OFF

#define DMA_1_CHANNEL14_USED    STD_OFF

#define DMA_1_CHANNEL15_USED    STD_OFF

#define DMA_1_CHANNEL16_USED    STD_OFF

#define DMA_1_CHANNEL17_USED    STD_OFF

#define DMA_1_CHANNEL18_USED    STD_OFF

#define DMA_1_CHANNEL19_USED    STD_OFF

#define DMA_1_CHANNEL20_USED    STD_OFF

#define DMA_1_CHANNEL21_USED    STD_OFF

#define DMA_1_CHANNEL22_USED    STD_OFF

#define DMA_1_CHANNEL23_USED    STD_OFF

#define DMA_1_CHANNEL24_USED    STD_OFF

#define DMA_1_CHANNEL25_USED    STD_OFF

#define DMA_1_CHANNEL26_USED    STD_OFF

#define DMA_1_CHANNEL27_USED    STD_OFF

#define DMA_1_CHANNEL28_USED    STD_OFF

#define DMA_1_CHANNEL29_USED    STD_OFF

#define DMA_1_CHANNEL30_USED    STD_OFF

#define DMA_1_CHANNEL31_USED    STD_OFF

#define DMA_CHANNEL_INVALID   (0xFFU)

/**
* @brief define the master core of DMA instance0
*/
#define DMA_MASTERCORE_INSTANCE0   (0U)
#define DMA_SLAVECORE_INSTANCE0    (1U)

/**
* @brief define the max partition numbers
*/
#define DMA_ECUC_PARTITIONS_MAX     (1U)

/**
* @brief The characteristic by different MCU series
*
*/
#define DMA_UMS_OTRGCH_CONFLICT               (STD_OFF)

/**
* @brief The SMP/AMP features by different MCU series
*
*/
#define DMA_MCU_HAVE_SMP                      (STD_ON)

/**
* @brief define the Dma instance number
*/
#define DMA_INSTANCE_COUNT          (1U)

#if (((defined DMA_0_CHANNEL0_IRQ) && (STD_ON == DMA_0_CHANNEL0_IRQ)) ||\
     ((defined DMA_1_CHANNEL0_IRQ) && (STD_ON == DMA_1_CHANNEL0_IRQ)))
#define DMA_CHANNEL0_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL1_IRQ) && (STD_ON == DMA_0_CHANNEL1_IRQ)) ||\
     ((defined DMA_1_CHANNEL1_IRQ) && (STD_ON == DMA_1_CHANNEL1_IRQ)))
#define DMA_CHANNEL1_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL2_IRQ) && (STD_ON == DMA_0_CHANNEL2_IRQ)) ||\
     ((defined DMA_1_CHANNEL2_IRQ) && (STD_ON == DMA_1_CHANNEL2_IRQ)))
#define DMA_CHANNEL2_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL3_IRQ) && (STD_ON == DMA_0_CHANNEL3_IRQ)) ||\
     ((defined DMA_1_CHANNEL3_IRQ) && (STD_ON == DMA_1_CHANNEL3_IRQ)))
#define DMA_CHANNEL3_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL4_IRQ) && (STD_ON == DMA_0_CHANNEL4_IRQ)) ||\
     ((defined DMA_1_CHANNEL4_IRQ) && (STD_ON == DMA_1_CHANNEL4_IRQ)))
#define DMA_CHANNEL4_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL5_IRQ) && (STD_ON == DMA_0_CHANNEL5_IRQ)) ||\
     ((defined DMA_1_CHANNEL5_IRQ) && (STD_ON == DMA_1_CHANNEL5_IRQ)))
#define DMA_CHANNEL5_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL6_IRQ) && (STD_ON == DMA_0_CHANNEL6_IRQ)) ||\
     ((defined DMA_1_CHANNEL6_IRQ) && (STD_ON == DMA_1_CHANNEL6_IRQ)))
#define DMA_CHANNEL6_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL7_IRQ) && (STD_ON == DMA_0_CHANNEL7_IRQ)) ||\
     ((defined DMA_1_CHANNEL7_IRQ) && (STD_ON == DMA_1_CHANNEL7_IRQ)))
#define DMA_CHANNEL7_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL8_IRQ) && (STD_ON == DMA_0_CHANNEL8_IRQ)) ||\
     ((defined DMA_1_CHANNEL8_IRQ) && (STD_ON == DMA_1_CHANNEL8_IRQ)))
#define DMA_CHANNEL8_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL9_IRQ) && (STD_ON == DMA_0_CHANNEL9_IRQ)) ||\
     ((defined DMA_1_CHANNEL9_IRQ) && (STD_ON == DMA_1_CHANNEL9_IRQ)))
#define DMA_CHANNEL9_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL10_IRQ) && (STD_ON == DMA_0_CHANNEL10_IRQ)) ||\
     ((defined DMA_1_CHANNEL10_IRQ) && (STD_ON == DMA_1_CHANNEL10_IRQ)))
#define DMA_CHANNEL10_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL11_IRQ) && (STD_ON == DMA_0_CHANNEL11_IRQ)) ||\
     ((defined DMA_1_CHANNEL11_IRQ) && (STD_ON == DMA_1_CHANNEL11_IRQ)))
#define DMA_CHANNEL11_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL12_IRQ) && (STD_ON == DMA_0_CHANNEL12_IRQ)) ||\
     ((defined DMA_1_CHANNEL12_IRQ) && (STD_ON == DMA_1_CHANNEL12_IRQ)))
#define DMA_CHANNEL12_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL13_IRQ) && (STD_ON == DMA_0_CHANNEL13_IRQ)) ||\
     ((defined DMA_1_CHANNEL13_IRQ) && (STD_ON == DMA_1_CHANNEL13_IRQ)))
#define DMA_CHANNEL13_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL14_IRQ) && (STD_ON == DMA_0_CHANNEL14_IRQ)) ||\
     ((defined DMA_1_CHANNEL14_IRQ) && (STD_ON == DMA_1_CHANNEL14_IRQ)))
#define DMA_CHANNEL14_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL15_IRQ) && (STD_ON == DMA_0_CHANNEL15_IRQ)) ||\
     ((defined DMA_1_CHANNEL15_IRQ) && (STD_ON == DMA_1_CHANNEL15_IRQ)))
#define DMA_CHANNEL15_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL16_IRQ) && (STD_ON == DMA_0_CHANNEL16_IRQ)) ||\
     ((defined DMA_1_CHANNEL16_IRQ) && (STD_ON == DMA_1_CHANNEL16_IRQ)))
#define DMA_CHANNEL16_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL17_IRQ) && (STD_ON == DMA_0_CHANNEL17_IRQ)) ||\
     ((defined DMA_1_CHANNEL17_IRQ) && (STD_ON == DMA_1_CHANNEL17_IRQ)))
#define DMA_CHANNEL17_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL18_IRQ) && (STD_ON == DMA_0_CHANNEL18_IRQ)) ||\
     ((defined DMA_1_CHANNEL18_IRQ) && (STD_ON == DMA_1_CHANNEL18_IRQ)))
#define DMA_CHANNEL18_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL19_IRQ) && (STD_ON == DMA_0_CHANNEL19_IRQ)) ||\
     ((defined DMA_1_CHANNEL19_IRQ) && (STD_ON == DMA_1_CHANNEL19_IRQ)))
#define DMA_CHANNEL19_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL20_IRQ) && (STD_ON == DMA_0_CHANNEL20_IRQ)) ||\
     ((defined DMA_1_CHANNEL20_IRQ) && (STD_ON == DMA_1_CHANNEL20_IRQ)))
#define DMA_CHANNEL20_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL21_IRQ) && (STD_ON == DMA_0_CHANNEL21_IRQ)) ||\
     ((defined DMA_1_CHANNEL21_IRQ) && (STD_ON == DMA_1_CHANNEL21_IRQ)))
#define DMA_CHANNEL21_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL22_IRQ) && (STD_ON == DMA_0_CHANNEL22_IRQ)) ||\
     ((defined DMA_1_CHANNEL22_IRQ) && (STD_ON == DMA_1_CHANNEL22_IRQ)))
#define DMA_CHANNEL22_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL23_IRQ) && (STD_ON == DMA_0_CHANNEL23_IRQ)) ||\
     ((defined DMA_1_CHANNEL23_IRQ) && (STD_ON == DMA_1_CHANNEL23_IRQ)))
#define DMA_CHANNEL23_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL24_IRQ) && (STD_ON == DMA_0_CHANNEL24_IRQ)) ||\
     ((defined DMA_1_CHANNEL24_IRQ) && (STD_ON == DMA_1_CHANNEL24_IRQ)))
#define DMA_CHANNEL24_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL25_IRQ) && (STD_ON == DMA_0_CHANNEL25_IRQ)) ||\
     ((defined DMA_1_CHANNEL25_IRQ) && (STD_ON == DMA_1_CHANNEL25_IRQ)))
#define DMA_CHANNEL25_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL26_IRQ) && (STD_ON == DMA_0_CHANNEL26_IRQ)) ||\
     ((defined DMA_1_CHANNEL26_IRQ) && (STD_ON == DMA_1_CHANNEL26_IRQ)))
#define DMA_CHANNEL26_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL27_IRQ) && (STD_ON == DMA_0_CHANNEL27_IRQ)) ||\
     ((defined DMA_1_CHANNEL27_IRQ) && (STD_ON == DMA_1_CHANNEL27_IRQ)))
#define DMA_CHANNEL27_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL28_IRQ) && (STD_ON == DMA_0_CHANNEL28_IRQ)) ||\
     ((defined DMA_1_CHANNEL28_IRQ) && (STD_ON == DMA_1_CHANNEL28_IRQ)))
#define DMA_CHANNEL28_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL29_IRQ) && (STD_ON == DMA_0_CHANNEL29_IRQ)) ||\
     ((defined DMA_1_CHANNEL29_IRQ) && (STD_ON == DMA_1_CHANNEL29_IRQ)))
#define DMA_CHANNEL29_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL30_IRQ) && (STD_ON == DMA_0_CHANNEL30_IRQ)) ||\
     ((defined DMA_1_CHANNEL30_IRQ) && (STD_ON == DMA_1_CHANNEL30_IRQ)))
#define DMA_CHANNEL30_IRQ            STD_ON
#endif
#if (((defined DMA_0_CHANNEL31_IRQ) && (STD_ON == DMA_0_CHANNEL31_IRQ)) ||\
     ((defined DMA_1_CHANNEL31_IRQ) && (STD_ON == DMA_1_CHANNEL31_IRQ)))
#define DMA_CHANNEL31_IRQ            STD_ON
#endif

#if (((defined DMA_0_CHANNEL0_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL0_ERROR_IRQ)) || ((defined DMA_1_CHANNEL0_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL0_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL1_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL1_ERROR_IRQ)) || ((defined DMA_1_CHANNEL1_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL1_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL2_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL2_ERROR_IRQ)) || ((defined DMA_1_CHANNEL2_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL2_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL3_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL3_ERROR_IRQ)) || ((defined DMA_1_CHANNEL3_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL3_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL4_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL4_ERROR_IRQ)) || ((defined DMA_1_CHANNEL4_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL4_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL5_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL5_ERROR_IRQ)) || ((defined DMA_1_CHANNEL5_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL5_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL6_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL6_ERROR_IRQ)) || ((defined DMA_1_CHANNEL6_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL6_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL7_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL7_ERROR_IRQ)) || ((defined DMA_1_CHANNEL7_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL7_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL8_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL8_ERROR_IRQ)) || ((defined DMA_1_CHANNEL8_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL8_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL9_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL9_ERROR_IRQ)) || ((defined DMA_1_CHANNEL9_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL9_ERROR_IRQ)))  ||\
    (((defined DMA_0_CHANNEL10_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL10_ERROR_IRQ)) || ((defined DMA_1_CHANNEL10_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL10_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL11_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL11_ERROR_IRQ)) || ((defined DMA_1_CHANNEL11_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL11_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL12_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL12_ERROR_IRQ)) || ((defined DMA_1_CHANNEL12_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL12_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL13_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL13_ERROR_IRQ)) || ((defined DMA_1_CHANNEL13_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL13_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL14_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL14_ERROR_IRQ)) || ((defined DMA_1_CHANNEL14_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL14_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL15_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL15_ERROR_IRQ)) || ((defined DMA_1_CHANNEL15_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL15_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL16_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL16_ERROR_IRQ)) || ((defined DMA_1_CHANNEL16_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL16_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL17_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL17_ERROR_IRQ)) || ((defined DMA_1_CHANNEL17_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL17_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL18_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL18_ERROR_IRQ)) || ((defined DMA_1_CHANNEL18_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL18_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL19_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL19_ERROR_IRQ)) || ((defined DMA_1_CHANNEL19_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL19_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL20_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL20_ERROR_IRQ)) || ((defined DMA_1_CHANNEL20_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL20_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL21_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL21_ERROR_IRQ)) || ((defined DMA_1_CHANNEL21_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL21_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL22_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL22_ERROR_IRQ)) || ((defined DMA_1_CHANNEL22_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL22_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL23_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL23_ERROR_IRQ)) || ((defined DMA_1_CHANNEL23_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL23_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL24_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL24_ERROR_IRQ)) || ((defined DMA_1_CHANNEL24_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL24_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL25_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL25_ERROR_IRQ)) || ((defined DMA_1_CHANNEL25_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL25_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL26_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL26_ERROR_IRQ)) || ((defined DMA_1_CHANNEL26_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL26_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL27_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL27_ERROR_IRQ)) || ((defined DMA_1_CHANNEL27_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL27_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL28_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL28_ERROR_IRQ)) || ((defined DMA_1_CHANNEL28_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL28_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL29_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL29_ERROR_IRQ)) || ((defined DMA_1_CHANNEL29_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL29_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL30_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL30_ERROR_IRQ)) || ((defined DMA_1_CHANNEL30_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL30_ERROR_IRQ)))||\
    (((defined DMA_0_CHANNEL31_ERROR_IRQ) && (STD_ON == DMA_0_CHANNEL31_ERROR_IRQ)) || ((defined DMA_1_CHANNEL31_ERROR_IRQ) && (STD_ON == DMA_1_CHANNEL31_ERROR_IRQ)))
#define DMA_CHANNEL_ERROR_IRQ        STD_ON
#endif
/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif    /* CDD_DMA_CFG_H */
/**@}*/



