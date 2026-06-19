/**
*   @file    Common_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Common configuration - API
*   @details This file contains the Common configurations
*
*   @addtogroup Common
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : Common
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

#ifndef COMMON_CFG_H
#define COMMON_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

/**
* @file        Common_Cfg.h
* @brief Include Standard types & defines
*/
#include "Std_Types.h"

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/**
* @brief This constant used for indicate max core numbers for the chip.
*/
#define MAX_CORE_NUM                        (2U)

/**
* @brief This constant used for indicate the device type.
*/
#define FC7300F8MDQ1A320T1B                 (0x01U)
#define FC7300F8MDQ1A257T1B                 (0x02U)
#define FC7300F8MDQ1P176T1B                 (0x03U)
#define FC7300F8MDT2A320T1B                 (0x04U)
#define FC7300F8MDT2P176T1B                 (0x05U)
#define FC7300F4MDD1A320T1B                 (0x06U)
#define FC7300F4MDD2A320T1B                 (0x07U)
#define FC7300F4MDD3A320T1B                 (0x08U)
#define FC7300F4MDD1P176T1B                 (0x09U)
#define FC7300F4MDD2P176T1B                 (0x0AU)
#define FC7300F4MDS1A320T1B                 (0x0BU)
#define FC7300F4MDS2A320T1B                 (0x0CU)
#define FC7300F4MDS1P176T1B                 (0x0DU)
#define FC7300F4MDS2P176T1B                 (0x0EU)
#define FC7240F2MDS1P100T1A                 (0x0FU)
#define FC7240F2MDS1P144T1A                 (0x10U)
#define FC7240F2MDS1P176T1A                 (0x11U)
#define FC7240F2MDS2P100T1A                 (0x12U)
#define FC7240F2MDS2P144T1A                 (0x13U)
#define FC7240F2MDS2P176T1A                 (0x14U)
#define FC7300F4MDD1A180T1C                 (0x15U)
#define FC7300F4MDD1A320T1C                 (0x16U)
#define FC7300F4MDS1P144T1C                 (0x17U)
#define FC7300F4MDS1A180T1C                 (0x18U)
#define FC7300F4MDS1A320T1C                 (0x19U)
#define DEVICE_TYPE                         FC7300F4MDS1A320T1C


/**
* @brief This constant used for indicate the chip series.
*/
#define FC7300F8MDQxxxxT1B                  (0x01U)
#define FC7300F8MDTxxxxT1B                  (0x02U)
#define FC7300F4MDDxxxxT1B                  (0x03U)
#define FC7300F4MDSxxxxT1B                  (0x04U)
#define FC7300F4MDDxxxxT1C                  (0x05U)
#define FC7300F4MDSxxxxT1C                  (0x06U)
#define FC7240F2MDSxxxxT1A                  (0x07U)
#define DEVICE_SERIES                       FC7300F4MDSxxxxT1C

/**
* @brief This constant used for other modules to check if ADC is present in the project.
*/
#define USE_ADC_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if CAN is present in the project.
*/
#define USE_CAN_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if CRC is present in the project.
*/
#define USE_CRC_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if CRYPTO is present in the project.
*/
#define USE_CRYPTO_MODULE                   (STD_ON)

/**
* @brief This constant used for other modules to check if DIO is present in the project.
*/
#define USE_DIO_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if DMA is present in the project.
*/
#define USE_DMA_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if EFTU is present in the project.
*/
#define USE_EFTU_MODULE                     (STD_ON)

/**
* @brief This constant used for other modules to check if ETH is present in the project.
*/
#define USE_ETH_MODULE                      (STD_OFF)

/**
* @brief This constant used for other modules to check if ETHTRCV is present in the project.
*/
#define USE_ETHTRCV_MODULE                  (STD_OFF)

/**
* @brief This constant used for other modules to check if FEE is present in the project.
*/
#define USE_FEE_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if FLS is present in the project.
*/
#define USE_FLS_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if GPT is present in the project.
*/
#define USE_GPT_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if I2C is present in the project.
*/
#define USE_I2C_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if ICU is present in the project.
*/
#define USE_ICU_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if LIN is present in the project.
*/
#define USE_LIN_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if MB is present in the project.
*/
#define USE_MB_MODULE                       (STD_ON)

/**
* @brief This constant used for other modules to check if MCU is present in the project.
*/
#define USE_MCU_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if MSC is present in the project.
*/
#define USE_MSC_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if OCU is present in the project.
*/
#define USE_OCU_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if OSPI is present in the project.
*/
#define USE_OSPI_MODULE                     (STD_OFF)

/**
* @brief This constant used for other modules to check if PFLS is present in the project.
*/
#define USE_PFLS_MODULE                     (STD_ON)

/**
* @brief This constant used for other modules to check if PORT is present in the project.
*/
#define USE_PORT_MODULE                     (STD_ON)

/**
* @brief This constant used for other modules to check if PWM is present in the project.
*/
#define USE_PWM_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if QDT is present in the project.
*/
#define USE_QDT_MODULE                      (STD_OFF)

/**
* @brief This constant used for other modules to check if Sdadc is present in the project.
*/
#define USE_SDADC_MODULE                    (STD_OFF)

/**
* @brief This constant used for other modules to check if SENT is present in the project.
*/
#define USE_SENT_MODULE                     (STD_ON)

/**
* @brief This constant used for other modules to check if SPI is present in the project.
*/
#define USE_SPI_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if Ssi is present in the project.
*/
#define USE_SSI_MODULE                      (STD_ON)

/**
* @brief This constant used for other modules to check if TrgSel is present in the project.
*/
#define USE_TRGSEL_MODULE                   (STD_ON)

/**
* @brief This constant used for other modules to check if UART is present in the project.
*/
#define USE_UART_MODULE                     (STD_ON)

/**
* @brief This constant used for other modules to check if WDG is present in the project.
*/
#define USE_WDG_MODULE                      (STD_ON)

/**
* @brief Use Sema module for spin lock
*/
#define SPIN_LOCK_USE_SEMA

/**
* @brief The default resource ID for the spin lock
*/
#define SPIN_LOCK_DEFAULT_SEMA_RES          (255U)

#ifdef __cplusplus
}
#endif

#endif /* COMMON_CFG_H */


/** @} */
