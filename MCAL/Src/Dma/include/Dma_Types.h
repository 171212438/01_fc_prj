/**
 *   @file    Dma_Types.h
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Dma - DMA driver type header file.
 *   @details DMA driver type header file.
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
*   0.4.0       10/11/2023    QXW0099       N/A          Change function names
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
==================================================================================================*/

#ifndef DMA_TYPES_H
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
/* PRQA S 0602 ++ #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be
 * declared Reason: It is common definition in h files */
#define DMA_TYPES_H
/* PRQA S 0602 -- */
/* PRQA S 0603 -- */
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
*
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "CDD_DMA_Cfg.h"
#include "Mcal.h"
#include "Common_Cfg.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_TYPES_VENDOR_ID                   174
#define DMA_TYPES_MODULE_ID                   27
#define DMA_TYPES_AR_RELEASE_MAJOR_VERSION    4
#define DMA_TYPES_AR_RELEASE_MINOR_VERSION    6
#define DMA_TYPES_AR_RELEASE_REVISION_VERSION 0
#define DMA_TYPES_SW_MAJOR_VERSION            1
#define DMA_TYPES_SW_MINOR_VERSION            5
#define DMA_TYPES_SW_PATCH_VERSION            1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/

/** Get core id interface. */

#define DMA_GET_CPU_ID()                      GET_CPU_ID()

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/
/**
 * @brief Available DMA Instances
 *
 */
typedef enum
{
    DMA_INSTANCE_0   = 0U,
    DMA_INSTANCE_1   = 1U,
    DMA_INSTANCE_MAX = DMA_INSTANCE_COUNT
} Dma_InstanceType;

/**
 * @brief DMA running status
 *
 */
typedef enum
{
    DMA_RUNNING_STATUS_IDLE   = 0x0U, /*!< The DMA engine is idle */
    DMA_RUNNING_STATUS_ACTIVE = 0x1U  /*!< The DMA engine is transferring data */
} Dma_RunningStatusType;

/**
 * @brief DMA channel arbitration algorithm used in the channel arbitration phase
 *
 */
typedef enum
{
    DMA_ARBITRATION_ALGORITHM_FIXED_PRIORITY = 0U, /*!< Use the fixed priority for arbitration */
    DMA_ARBITRATION_ALGORITHM_ROUND_ROBIN    = 1U  /*!< Use the channel number for arbitration,
                                                        higher channel number has higher priority */
} Dma_ArbitrationAlgorithmType;

/**
 * @brief   Driver states list
 * @details Enumeration listing the different states of the driver.
 */
typedef enum
{
    DMA_NOT_INITIALIZED,
    DMA_INITIALIZED,
    DMA_INITIAL_ERROR,
} Dma_DriverStateType;

/**
 * @brief Defines the size of data in one transfer
 *
 * One transfer can contain multiple block, and one block may contain multiple
 * data, this parameter specifies the size of data which the DMA engine will
 * access one time in the memory.
 *
 */
typedef enum
{
    DMA_TRAN_SIZE_1B  = 0x0U,
    DMA_TRAN_SIZE_2B  = 0x1U,
    DMA_TRAN_SIZE_4B  = 0x2U,
    DMA_TRAN_SIZE_8B  = 0x3U,
    DMA_TRAN_SIZE_32B = 0x5U
} Dma_TranSizeType;

/**
 * @brief DMA data increment size
 *
 * Specify the data increment size after DMA engine transferred a datum
 *
 */
typedef enum
{
    DMA_INCREMENT_DISABLE                 = 0x0U, /*!< The data address not increase */
    DMA_INCREMENT_DATA_SIZE               = 0x1U, /*!< The data address increase by the data size */
    DMA_INCREMENT_DATA_SIZE_4BYTE_ALIGNED = 0x2U  /*!< The data address increase by the data size,
                                                       and is 4 byte aligned */
} Dma_IncrementModeType;

/**
 * @brief The Request Source of the DMA
 *
 *
 */
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1C))
#if (DEVICE_SERIES == FC7300F4MDDxxxxT1C)
typedef enum
{
    DMA_REQ_DISABLED                 = 0U,
    DMA_REQ_FCIIC0_RX                = 1U,
    DMA_REQ_FCIIC0_TX                = 2U,
    DMA_REQ_FCIIC1_RX                = 3U,
    DMA_REQ_FCIIC1_TX                = 4U,
    DMA_REQ_FCSPI0_RX                = 5U,
    DMA_REQ_FCSPI0_TX                = 6U,
    DMA_REQ_FCSPI1_RX                = 7U,
    DMA_REQ_FCSPI1_TX                = 8U,
    DMA_REQ_FCSPI2_RX                = 9U,
    DMA_REQ_FCSPI2_TX                = 10U,
    DMA_REQ_FCSPI3_RX                = 11U,
    DMA_REQ_FCSPI3_TX                = 12U,
    DMA_REQ_FCSPI4_RX                = 13U,
    DMA_REQ_FCSPI4_TX                = 14U,
    DMA_REQ_FCSPI5_RX                = 15U,
    DMA_REQ_FCSPI5_TX                = 16U,
    DMA_REQ_FTU0_CH0_OR_CRM0_CH0     = 17U,
    DMA_REQ_FTU0_CH2_OR_CRM0_CH1     = 18U,
    DMA_REQ_FTU0_CH4_OR_CRM0_CH2     = 19U,
    DMA_REQ_FTU0_CH6_OR_CRM0_CH3     = 20U,
    DMA_REQ_eFTU0_SRC8_OR_CRM0_CH4   = 21U,
    DMA_REQ_eFTU0_SRC9_OR_CRM0_CH5   = 22U,
    DMA_REQ_FLEXCAN0                 = 23U,
    DMA_REQ_FLEXCAN1                 = 24U,
    DMA_REQ_FLEXCAN2                 = 25U,
    DMA_REQ_FLEXCAN3                 = 26U,
    DMA_REQ_FLEXCAN4                 = 27U,
    DMA_REQ_FLEXCAN5                 = 28U,
    DMA_REQ_FLEXCAN6                 = 29U,
    DMA_REQ_FLEXCAN7                 = 30U,
    DMA_REQ_CRM0_CH6                 = 31U,
    DMA_REQ_CRM0_CH7                 = 32U,
    DMA_REQ_ADC0                     = 33U,
    DMA_REQ_ADC1                     = 34U,
    DMA_REQ_ADC2                     = 35U,
    DMA_REQ_ADC3                     = 36U,
    DMA_REQ_SDADC0_CH0               = 37U,
    DMA_REQ_SDADC0_CH1               = 38U,
    DMA_REQ_eFTU0_SRC10              = 39U,
    DMA_REQ_eFTU0_SRC11              = 40U,
    DMA_REQ_FCUART0_RX               = 41U,
    DMA_REQ_FCUART0_TX               = 42U,
    DMA_REQ_FCUART1_RX               = 43U,
    DMA_REQ_FCUART1_TX               = 44U,
    DMA_REQ_FCUART2_RX               = 45U,
    DMA_REQ_FCUART2_TX               = 46U,
    DMA_REQ_FCUART3_RX               = 47U,
    DMA_REQ_FCUART3_TX               = 48U,
    DMA_REQ_FCUART4_RX               = 49U,
    DMA_REQ_FCUART4_TX               = 50U,
    DMA_REQ_FCUART5_RX               = 51U,
    DMA_REQ_FCUART5_TX               = 52U,
    DMA_REQ_FCUART6_RX               = 53U,
    DMA_REQ_FCUART6_TX               = 54U,
    DMA_REQ_FCUART7_RX               = 55U,
    DMA_REQ_FCUART7_TX               = 56U,
    DMA_REQ_FTU3_CH0                 = 57U,
    DMA_REQ_FTU3_CH2                 = 58U,
    DMA_REQ_FTU3_CH4                 = 59U,
    DMA_REQ_FTU3_CH6                 = 60U,
    DMA_REQ_Flash_ADDR               = 61U,
    DMA_REQ_Flash_DATA               = 62U,
    DMA_REQ_LU0                      = 63U,
    DMA_REQ_LU1                      = 64U,
    DMA_REQ_eFTU0_SRC12_OR_CRM0_CH8  = 65U,
    DMA_REQ_eFTU0_SRC13_OR_CRM0_CH9  = 66U,
    DMA_REQ_eFTU0_SRC14_OR_CRM0_CH10 = 67U,
    DMA_REQ_eFTU0_SRC0               = 68U,
    DMA_REQ_eFTU0_SRC1               = 69U,
    DMA_REQ_eFTU0_SRC2               = 70U,
    DMA_REQ_eFTU0_SRC3               = 71U,
    DMA_REQ_eFTU0_SRC4               = 72U,
    DMA_REQ_eFTU0_SRC5               = 73U,
    DMA_REQ_eFTU0_SRC6               = 74U,
    DMA_REQ_eFTU0_SRC7               = 75U,
    DMA_REQ_CRM0_CH11                = 76U,
    DMA_REQ_PORTA                    = 77U,
    DMA_REQ_PORTB                    = 78U,
    DMA_REQ_PORTC                    = 79U,
    DMA_REQ_PORTD                    = 80U,
    DMA_REQ_PORTE                    = 81U,
    DMA_REQ_PORTF                    = 82U,
    DMA_REQ_PORTG                    = 83U,
    DMA_REQ_PORTH                    = 84U,
    DMA_REQ_PORTI                    = 85U,
    DMA_REQ_AONTIMER0                = 86U,
    DMA_REQ_CMP0                     = 87U,
    DMA_REQ_eFTU0_SRC15_OR_CRM0_CH12 = 88U,
    DMA_REQ_CRM0_CH13                = 89U,
    DMA_REQ_PTIMER0                  = 90U,
    DMA_REQ_PTIMER1                  = 91U,
    DMA_REQ_PTIMER2                  = 92U,
    DMA_REQ_PTIMER3                  = 93U,
    DMA_REQ_ENET_CH0_OR_CRM0_CH14    = 94U,
    DMA_REQ_ENET_CH1_OR_CRM0_CH15    = 95U,
    DMA_REQ_ENET_CH2_OR_LDI0_TX      = 96U,
    DMA_REQ_ENET_CH3                 = 97U,
    DMA_REQ_FTU0                     = 98U,
    DMA_REQ_FTU1                     = 99U,
    DMA_REQ_FTU2                     = 100U,
    DMA_REQ_FTU3                     = 101U,
    DMA_REQ_FTU4                     = 102U,
    DMA_REQ_FTU5                     = 103U,
    DMA_REQ_FTU6                     = 104U,
    DMA_REQ_FTU7                     = 105U,
    DMA_REQ_FTU4_CH0                 = 106U,
    DMA_REQ_FTU4_CH2                 = 107U,
    DMA_REQ_FTU4_CH4                 = 108U,
    DMA_REQ_FTU4_CH6                 = 109U,
    DMA_REQ_SENT0_FAST_CH0           = 110U,
    DMA_REQ_SENT0_FAST_CH1           = 111U,
    DMA_REQ_SENT0_FAST_CH2           = 112U,
    DMA_REQ_SENT0_FAST_CH3           = 113U,
    DMA_REQ_SENT1_FAST_CH0           = 114U,
    DMA_REQ_SENT1_FAST_CH1           = 115U,
    DMA_REQ_SENT1_FAST_CH2           = 116U,
    DMA_REQ_SENT1_FAST_CH3           = 117U,
    DMA_REQ_SENT0_SLOW_CH0           = 118U,
    DMA_REQ_SENT0_SLOW_CH1           = 119U,
    DMA_REQ_SENT0_SLOW_CH2           = 120U,
    DMA_REQ_SENT0_SLOW_CH3           = 121U,
    DMA_REQ_SENT1_SLOW_CH0           = 122U,
    DMA_REQ_SENT1_SLOW_CH1           = 123U,
    DMA_REQ_SENT1_SLOW_CH2           = 124U,
    DMA_REQ_SENT1_SLOW_CH3           = 125U,
    DMA_REQ_ALWAYS_ENABLED_0         = 126U,
    DMA_REQ_ALWAYS_ENABLED_1         = 127U
} Dma_MuxRequestSourceType;
#elif (DEVICE_SERIES == FC7300F4MDSxxxxT1C)
typedef enum
{
    DMA_REQ_DISABLED                 = 0U,
    DMA_REQ_FCIIC0_RX                = 1U,
    DMA_REQ_FCIIC0_TX                = 2U,
    DMA_REQ_FCIIC1_RX                = 3U,
    DMA_REQ_FCIIC1_TX                = 4U,
    DMA_REQ_FCSPI0_RX                = 5U,
    DMA_REQ_FCSPI0_TX                = 6U,
    DMA_REQ_FCSPI1_RX                = 7U,
    DMA_REQ_FCSPI1_TX                = 8U,
    DMA_REQ_FCSPI2_RX                = 9U,
    DMA_REQ_FCSPI2_TX                = 10U,
    DMA_REQ_FCSPI3_RX                = 11U,
    DMA_REQ_FCSPI3_TX                = 12U,
    DMA_REQ_FCSPI4_RX                = 13U,
    DMA_REQ_FCSPI4_TX                = 14U,
    DMA_REQ_FCSPI5_RX                = 15U,
    DMA_REQ_FCSPI5_TX                = 16U,
    DMA_REQ_FTU0_CH0_OR_CRM0_CH0     = 17U,
    DMA_REQ_FTU0_CH2_OR_CRM0_CH1     = 18U,
    DMA_REQ_FTU0_CH4_OR_CRM0_CH2     = 19U,
    DMA_REQ_FTU0_CH6_OR_CRM0_CH3     = 20U,
    DMA_REQ_eFTU0_SRC8_OR_CRM0_CH4   = 21U,
    DMA_REQ_eFTU0_SRC9_OR_CRM0_CH5   = 22U,
    DMA_REQ_FLEXCAN0                 = 23U,
    DMA_REQ_FLEXCAN1                 = 24U,
    DMA_REQ_FLEXCAN2                 = 25U,
    DMA_REQ_FLEXCAN3                 = 26U,
    DMA_REQ_FLEXCAN4                 = 27U,
    DMA_REQ_FLEXCAN5                 = 28U,
    DMA_REQ_ADC0                     = 33U,
    DMA_REQ_ADC1                     = 34U,
    DMA_REQ_ADC2                     = 35U,
    DMA_REQ_eFTU0_SRC10              = 39U,
    DMA_REQ_eFTU0_SRC11              = 40U,
    DMA_REQ_FCUART0_RX               = 41U,
    DMA_REQ_FCUART0_TX               = 42U,
    DMA_REQ_FCUART1_RX               = 43U,
    DMA_REQ_FCUART1_TX               = 44U,
    DMA_REQ_FCUART2_RX               = 45U,
    DMA_REQ_FCUART2_TX               = 46U,
    DMA_REQ_FCUART3_RX               = 47U,
    DMA_REQ_FCUART3_TX               = 48U,
    DMA_REQ_FCUART4_RX               = 49U,
    DMA_REQ_FCUART4_TX               = 50U,
    DMA_REQ_FCUART5_RX               = 51U,
    DMA_REQ_FCUART5_TX               = 52U,
    DMA_REQ_FCUART6_RX               = 53U,
    DMA_REQ_FCUART6_TX               = 54U,
    DMA_REQ_FCUART7_RX               = 55U,
    DMA_REQ_FCUART7_TX               = 56U,
    DMA_REQ_FTU3_CH0                 = 57U,
    DMA_REQ_FTU3_CH2                 = 58U,
    DMA_REQ_FTU3_CH4                 = 59U,
    DMA_REQ_FTU3_CH6                 = 60U,
    DMA_REQ_Flash_ADDR               = 61U,
    DMA_REQ_Flash_DATA               = 62U,
    DMA_REQ_LU0                      = 63U,
    DMA_REQ_LU1                      = 64U,
    DMA_REQ_eFTU0_SRC12_OR_CRM0_CH8  = 65U,
    DMA_REQ_eFTU0_SRC13_OR_CRM0_CH9  = 66U,
    DMA_REQ_eFTU0_SRC14_OR_CRM0_CH10 = 67U,
    DMA_REQ_eFTU0_SRC0               = 68U,
    DMA_REQ_eFTU0_SRC1               = 69U,
    DMA_REQ_eFTU0_SRC2               = 70U,
    DMA_REQ_eFTU0_SRC3               = 71U,
    DMA_REQ_eFTU0_SRC4               = 72U,
    DMA_REQ_eFTU0_SRC5               = 73U,
    DMA_REQ_eFTU0_SRC6               = 74U,
    DMA_REQ_eFTU0_SRC7               = 75U,
    DMA_REQ_PORTA                    = 77U,
    DMA_REQ_PORTB                    = 78U,
    DMA_REQ_PORTC                    = 79U,
    DMA_REQ_PORTD                    = 80U,
    DMA_REQ_PORTE                    = 81U,
    DMA_REQ_PORTF                    = 82U,
    DMA_REQ_PORTG                    = 83U,
    DMA_REQ_PORTH                    = 84U,
    DMA_REQ_PORTI                    = 85U,
    DMA_REQ_AONTIMER0                = 86U,
    DMA_REQ_eFTU0_SRC15_OR_CRM0_CH12 = 88U,
    DMA_REQ_ADC3                     = 89U,
    DMA_REQ_PTIMER0                  = 90U,
    DMA_REQ_PTIMER1                  = 91U,
    DMA_REQ_PTIMER2                  = 92U,
    DMA_REQ_FTU0                     = 98U,
    DMA_REQ_FTU1                     = 99U,
    DMA_REQ_FTU2                     = 100U,
    DMA_REQ_FTU3                     = 101U,
    DMA_REQ_FTU4                     = 102U,
    DMA_REQ_FTU5                     = 103U,
    DMA_REQ_FTU4_CH0                 = 106U,
    DMA_REQ_FTU4_CH2                 = 107U,
    DMA_REQ_FTU4_CH4                 = 108U,
    DMA_REQ_FTU4_CH6                 = 109U,
    DMA_REQ_SENT0_FAST_CH0           = 110U,
    DMA_REQ_SENT0_FAST_CH1           = 111U,
    DMA_REQ_SENT0_FAST_CH2           = 112U,
    DMA_REQ_SENT0_FAST_CH3           = 113U,
    DMA_REQ_SENT1_FAST_CH0           = 114U,
    DMA_REQ_SENT1_FAST_CH1           = 115U,
    DMA_REQ_SENT1_FAST_CH2           = 116U,
    DMA_REQ_SENT1_FAST_CH3           = 117U,
    DMA_REQ_SENT0_SLOW_CH0           = 118U,
    DMA_REQ_SENT0_SLOW_CH1           = 119U,
    DMA_REQ_SENT0_SLOW_CH2           = 120U,
    DMA_REQ_SENT0_SLOW_CH3           = 121U,
    DMA_REQ_SENT1_SLOW_CH0           = 122U,
    DMA_REQ_SENT1_SLOW_CH1           = 123U,
    DMA_REQ_SENT1_SLOW_CH2           = 124U,
    DMA_REQ_SENT1_SLOW_CH3           = 125U,
    DMA_REQ_ALWAYS_ENABLED_0         = 126U,
    DMA_REQ_ALWAYS_ENABLED_1         = 127U
} Dma_MuxRequestSourceType;
#else
typedef enum
{
    DMA_REQ_DISABLED  = 0U,
    DMA_REQ_FCIIC0_RX = 1U,
    DMA_REQ_FCIIC0_TX = 2U,
    DMA_REQ_FCIIC1_RX = 3U,
    DMA_REQ_FCIIC1_TX = 4U,
    DMA_REQ_FCSPI0_RX = 5U,
    DMA_REQ_FCSPI0_TX = 6U,
    DMA_REQ_FCSPI1_RX = 7U,
    DMA_REQ_FCSPI1_TX = 8U,
    DMA_REQ_FCSPI2_RX = 9U,
    DMA_REQ_FCSPI2_TX = 10U,
    DMA_REQ_FCSPI3_RX = 11U,
    DMA_REQ_FCSPI3_TX = 12U,
    DMA_REQ_FCSPI4_RX = 13U,
    DMA_REQ_FCSPI4_TX = 14U,
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDD3A320T1B) || (DEVICE_TYPE == FC7300F4MDD1P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDS2A320T1B) || (DEVICE_TYPE == FC7300F4MDS2P176T1B))
    DMA_REQ_FCSPI5_RX = 15U,
    DMA_REQ_FCSPI5_TX = 16U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B))
    DMA_REQ_FCSPI6_RX = 17U,
    DMA_REQ_FCSPI6_TX = 18U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDD1A320T1B) || (DEVICE_TYPE == FC7300F4MDD2A320T1B) || \
     (DEVICE_TYPE == FC7300F4MDD2P176T1B))
    DMA_REQ_FCSPI7_RX = 19U,
    DMA_REQ_FCSPI7_TX = 20U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B))
    DMA_REQ_OSPI_RX = 21U,
    DMA_REQ_OSPI_TX = 22U,
#endif
    DMA_REQ_FLEXCAN0 = 23U,
    DMA_REQ_FLEXCAN1 = 24U,
    DMA_REQ_FLEXCAN2 = 25U,
    DMA_REQ_FLEXCAN3 = 26U,
#if ((DEVICE_TYPE != FC7300F4MDS1A320T1B) && (DEVICE_TYPE != FC7300F4MDS1P176T1B))
    DMA_REQ_FLEXCAN4 = 27U,
    DMA_REQ_FLEXCAN5 = 28U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDD3A320T1B) || (DEVICE_TYPE == FC7300F4MDD1P176T1B))
    DMA_REQ_FLEXCAN6 = 29U,
    DMA_REQ_FLEXCAN7 = 30U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B))
    DMA_REQ_FLEXCAN8 = 31U,
    DMA_REQ_FLEXCAN9 = 32U,
#endif
    DMA_REQ_ADC0 = 33U,
    DMA_REQ_ADC1 = 34U,
    DMA_REQ_ADC2 = 35U,
#if ((DEVICE_TYPE != FC7300F4MDS1A320T1B) && (DEVICE_TYPE != FC7300F4MDS1P176T1B) && \
     (DEVICE_TYPE != FC7300F4MDS2A320T1B) && (DEVICE_TYPE != FC7300F4MDS2P176T1B))
    DMA_REQ_ADC3     = 36U,
    DMA_REQ_SDDF_CH0 = 37U,
    DMA_REQ_SDDF_CH1 = 38U,
    DMA_REQ_SDDF_CH2 = 39U,
    DMA_REQ_SDDF_CH3 = 40U,
#endif
    DMA_REQ_FCUART0_RX = 41U,
    DMA_REQ_FCUART0_TX = 42U,
    DMA_REQ_FCUART1_RX = 43U,
    DMA_REQ_FCUART1_TX = 44U,
    DMA_REQ_FCUART2_RX = 45U,
    DMA_REQ_FCUART2_TX = 46U,
    DMA_REQ_FCUART3_RX = 47U,
    DMA_REQ_FCUART3_TX = 48U,
    DMA_REQ_FCUART4_RX = 49U,
    DMA_REQ_FCUART4_TX = 50U,
    DMA_REQ_FCUART5_RX = 51U,
    DMA_REQ_FCUART5_TX = 52U,
    DMA_REQ_FCUART6_RX = 53U,
    DMA_REQ_FCUART6_TX = 54U,
    DMA_REQ_FCUART7_RX = 55U,
    DMA_REQ_FCUART7_TX = 56U,
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B))
    DMA_REQ_FCUART8_RX = 57U,
    DMA_REQ_FCUART8_TX = 58U,
    DMA_REQ_FCUART9_RX = 59U,
    DMA_REQ_FCUART9_TX = 60U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDD1A320T1B) || (DEVICE_TYPE == FC7300F4MDD2A320T1B) || \
     (DEVICE_TYPE == FC7300F4MDD2P176T1B))
    DMA_REQ_FCUART10_RX = 61U,
    DMA_REQ_FCUART10_TX = 62U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B))
    DMA_REQ_FCUART11_RX = 63U,
    DMA_REQ_FCUART11_TX = 64U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDD1A320T1B) || (DEVICE_TYPE == FC7300F4MDD2A320T1B) || \
     (DEVICE_TYPE == FC7300F4MDD2P176T1B))
    DMA_REQ_FCUART12_RX = 65U,
    DMA_REQ_FCUART12_TX = 66U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B))
    DMA_REQ_FCUART13_RX = 67U,
    DMA_REQ_FCUART13_TX = 68U,
    DMA_REQ_FCUART14_RX = 69U,
    DMA_REQ_FCUART14_TX = 70U,
    DMA_REQ_FCUART15_RX = 71U,
    DMA_REQ_FCUART15_TX = 72U,
    DMA_REQ_FCUART16_RX = 73U,
    DMA_REQ_FCUART16_TX = 74U,
    DMA_REQ_FCUART17_RX = 75U,
    DMA_REQ_FCUART17_TX = 76U,
#endif
    DMA_REQ_PORTA     = 77U,
    DMA_REQ_PORTB     = 78U,
    DMA_REQ_PORTC     = 79U,
    DMA_REQ_PORTD     = 80U,
    DMA_REQ_PORTE     = 81U,
    DMA_REQ_PORTF     = 82U,
    DMA_REQ_PORTG     = 83U,
    DMA_REQ_PORTH     = 84U,
    DMA_REQ_PORTI     = 85U,
    DMA_REQ_AONTIMER0 = 86U,
    DMA_REQ_CMP0      = 87U,
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDD1A320T1B) || (DEVICE_TYPE == FC7300F4MDD2A320T1B) || \
     (DEVICE_TYPE == FC7300F4MDD2P176T1B) || (DEVICE_TYPE == FC7300F4MDS1A320T1B) || \
     (DEVICE_TYPE == FC7300F4MDS1P176T1B))
    DMA_REQ_CMP1 = 88U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDD1A320T1B) || (DEVICE_TYPE == FC7300F4MDD2A320T1B) || \
     (DEVICE_TYPE == FC7300F4MDD2P176T1B))
    DMA_REQ_CMP2 = 89U,
#endif
    DMA_REQ_PTIMER0 = 90U,
    DMA_REQ_PTIMER1 = 91U,
    DMA_REQ_PTIMER2 = 92U,
#if ((DEVICE_TYPE != FC7300F4MDS2A320T1B) && (DEVICE_TYPE != FC7300F4MDS2P176T1B))
    DMA_REQ_PTIMER3 = 93U,
#endif
#if ((DEVICE_TYPE != FC7300F4MDS1A320T1B) && (DEVICE_TYPE != FC7300F4MDS1P176T1B) && \
     (DEVICE_TYPE != FC7300F4MDS2A320T1B) && (DEVICE_TYPE != FC7300F4MDS2P176T1B))
    DMA_REQ_ENET_PPS_TIMER_CH0 = 94U,
    DMA_REQ_ENET_PPS_TIMER_CH1 = 95U,
    DMA_REQ_ENET_PPS_TIMER_CH2 = 96U,
    DMA_REQ_ENET_PPS_TIMER_CH3 = 97U,
#endif
    DMA_REQ_FTU0_ALL_CH_OR = 98U,
    DMA_REQ_FTU1_ALL_CH_OR = 99U,
    DMA_REQ_FTU2_ALL_CH_OR = 100U,
    DMA_REQ_FTU3_ALL_CH_OR = 101U,
    DMA_REQ_FTU4_ALL_CH_OR = 102U,
    DMA_REQ_FTU5_ALL_CH_OR = 103U,
#if ((DEVICE_TYPE != FC7300F4MDS2A320T1B) && (DEVICE_TYPE != FC7300F4MDS2P176T1B))
    DMA_REQ_FTU6_ALL_CH_OR = 104U,
    DMA_REQ_FTU7_ALL_CH_OR = 105U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B) || \
     (DEVICE_TYPE == FC7300F4MDD1A320T1B) || (DEVICE_TYPE == FC7300F4MDD2A320T1B) || \
     (DEVICE_TYPE == FC7300F4MDD2P176T1B))
    DMA_REQ_FTU8_ALL_CH_OR = 106U,
    DMA_REQ_FTU9_ALL_CH_OR = 107U,
#endif
#if ((DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B))
    DMA_REQ_FTU10_ALL_CH_OR = 108U,
    DMA_REQ_FTU11_ALL_CH_OR = 109U,
#endif
    DMA_REQ_SENT0_CH0_FAST = 110U,
    DMA_REQ_SENT0_CH1_FAST = 111U,
    DMA_REQ_SENT0_CH2_FAST = 112U,
    DMA_REQ_SENT0_CH3_FAST = 113U,
#if ((DEVICE_TYPE != FC7300F4MDS1A320T1B) && (DEVICE_TYPE != FC7300F4MDS1P176T1B))
    DMA_REQ_SENT1_CH0_FAST = 114U,
    DMA_REQ_SENT1_CH1_FAST = 115U,
    DMA_REQ_SENT1_CH2_FAST = 116U,
    DMA_REQ_SENT1_CH3_FAST = 117U,
#endif
    DMA_REQ_SENT0_CH0_SLOW = 118U,
    DMA_REQ_SENT0_CH1_SLOW = 119U,
    DMA_REQ_SENT0_CH2_SLOW = 120U,
    DMA_REQ_SENT0_CH3_SLOW = 121U,
#if ((DEVICE_TYPE != FC7300F4MDS1A320T1B) && (DEVICE_TYPE != FC7300F4MDS1P176T1B))
    DMA_REQ_SENT1_CH0_SLOW = 122U,
    DMA_REQ_SENT1_CH1_SLOW = 123U,
    DMA_REQ_SENT1_CH2_SLOW = 124U,
    DMA_REQ_SENT1_CH3_SLOW = 125U,
#endif
    DMA_REQ_ALWAYS_ENABLE_0 = 126U,
    DMA_REQ_ALWAYS_ENABLE_1 = 127U
} Dma_MuxRequestSourceType;
#endif
#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)
typedef enum
{
    DMA_REQ_DISABLED                             = 0U,
    DMA_REQ_FCIIC0_RX                            = 1U,
    DMA_REQ_FCIIC0_TX                            = 2U,
    DMA_REQ_FCIIC1_RX                            = 3U,
    DMA_REQ_FCIIC1_TX                            = 4U,
    DMA_REQ_FCSPI0_RX                            = 5U,
    DMA_REQ_FCSPI0_TX                            = 6U,
    DMA_REQ_FCSPI1_RX                            = 7U,
    DMA_REQ_FCSPI1_TX                            = 8U,
    DMA_REQ_FCSPI2_RX                            = 9U,
    DMA_REQ_FCSPI2_TX                            = 10U,
    DMA_REQ_FCSPI3_RX                            = 11U,
    DMA_REQ_FCSPI3_TX                            = 12U,
    DMA_REQ_FCSPI4_RX                            = 13U,
    DMA_REQ_FCSPI4_TX                            = 14U,
    DMA_REQ_FCSPI5_RX                            = 15U,
    DMA_REQ_FCSPI5_TX                            = 16U,
    DMA_REQ_FCSPI6_RX                            = 17U,
    DMA_REQ_FCSPI6_TX                            = 18U,
    DMA_REQ_FCSPI7_RX                            = 19U,
    DMA_REQ_FCSPI7_TX                            = 20U,
    DMA_REQ_EFTU0_SRC1                           = 21U,
    DMA_REQ_EFTU0_SRC2                           = 22U,
    DMA_REQ_FLEXCAN0                             = 23U,
    DMA_REQ_FLEXCAN1                             = 24U,
    DMA_REQ_FLEXCAN2                             = 25U,
    DMA_REQ_FLEXCAN3                             = 26U,
    DMA_REQ_FLEXCAN4                             = 27U,
    DMA_REQ_FLEXCAN5                             = 28U,
    DMA_REQ_FLEXCAN6                             = 29U,
    DMA_REQ_FLEXCAN7                             = 30U,
    DMA_REQ_FLEXCAN8                             = 31U,
    DMA_REQ_FLEXCAN9                             = 32U,
    DMA_REQ_ADC0                                 = 33U,
    DMA_REQ_ADC1                                 = 34U,
    DMA_REQ_ADC2                                 = 35U,
    DMA_REQ_ADC3                                 = 36U,
    DMA_REQ_SDADC0_CH0                           = 37U,
    DMA_REQ_SDADC0_CH1                           = 38U,
    DMA_REQ_SDADC0_CH2                           = 39U,
    DMA_REQ_EFTU0_SRC4                           = 40U,
    DMA_REQ_FCUART0_RX                           = 41U,
    DMA_REQ_FCUART0_TX                           = 42U,
    DMA_REQ_FCUART1_RX                           = 43U,
    DMA_REQ_FCUART1_TX                           = 44U,
    DMA_REQ_FCUART2_RX                           = 45U,
    DMA_REQ_FCUART2_TX                           = 46U,
    DMA_REQ_FCUART3_RX                           = 47U,
    DMA_REQ_FCUART3_TX                           = 48U,
    DMA_REQ_FCUART4_RX                           = 49U,
    DMA_REQ_FCUART4_TX                           = 50U,
    DMA_REQ_FCUART5_RX                           = 51U,
    DMA_REQ_FCUART5_TX                           = 52U,
    DMA_REQ_FCUART6_RX                           = 53U,
    DMA_REQ_FCUART6_TX                           = 54U,
    DMA_REQ_FCUART7_RX                           = 55U,
    DMA_REQ_FCUART7_TX                           = 56U,
    DMA_REQ_FCUART8_RX                           = 57U,
    DMA_REQ_FCUART8_TX                           = 58U,
    DMA_REQ_FCUART9_RX                           = 59U,
    DMA_REQ_FCUART9_TX                           = 60U,
    DMA_REQ_FCUART10_RX                          = 61U,
    DMA_REQ_FCUART10_TX                          = 62U,
    DMA_REQ_FCUART11_RX_OR_LU0                   = 63U,
    DMA_REQ_FCUART11_TX_OR_LU1                   = 64U,
    DMA_REQ_FCUART12_RX_OR_TPU0_CH8_11           = 65U,
    DMA_REQ_FCUART12_TX_OR_TPU0_CH12_15          = 66U,
    DMA_REQ_FCUART13_RX_OR_TPU0_CH16_19          = 67U,
    DMA_REQ_FCUART13_TX_OR_TPU0_CH20_23          = 68U,
    DMA_REQ_ADC4                                 = 69U,
    DMA_REQ_ADC5                                 = 70U,
    DMA_REQ_HSADC2                               = 71U,
    DMA_REQ_HSADC3                               = 72U,
    DMA_REQ_SDADC1_CH0                           = 73U,
    DMA_REQ_SDADC1_CH1                           = 74U,
    DMA_REQ_SDADC1_CH2                           = 75U,
    DMA_REQ_EFTU0_SRC5                           = 76U,
    DMA_REQ_PORTA_OR_TPU0_CH0_3                  = 77U,
    DMA_REQ_PORTB_OR_TPU0_CH4_7                  = 78U,
    DMA_REQ_PORTC_OR_EFTU1_SRC1                  = 79U,
    DMA_REQ_PORTD_OR_EFTU1_SRC2                  = 80U,
    DMA_REQ_PORTE_OR_EFTU1_SRC4                  = 81U,
    DMA_REQ_PORTF_OR_EFTU1_SRC5                  = 82U,
    DMA_REQ_PORTG_OR_EFTU2_SRC1                  = 83U,
    DMA_REQ_PORTH_OR_EFTU2_SRC2                  = 84U,
    DMA_REQ_PORTI_OR_EFTU2_SRC4                  = 85U,
    DMA_REQ_AONTIMER0_OR_EFTU2_SRC5_OR_TPU0_CH24 = 86U,
    DMA_REQ_CMP0_OR_EFTU0_SRC0_OR_TPU0_CH25      = 87U,
    DMA_REQ_HSADC0                               = 88U,
    DMA_REQ_HSADC1                               = 89U,
    DMA_REQ_PTIMER0_OR_TPU0_CH26_OR_EFTU0_SRC3   = 90U,
    DMA_REQ_PTIMER1_OR_TPU0_CH27_OR_EFTU1_SRC0   = 91U,
    DMA_REQ_PTIMER2_OR_EFTU1_SRC3                = 92U,
    DMA_REQ_PTIMER3_OR_EFTU2_SRC0                = 93U,
    DMA_REQ_ENET_PPS_TIMER_CH0                   = 94U,
    DMA_REQ_ENET_PPS_TIMER_CH1_OR_EFTU2_SRC3     = 95U,
    DMA_REQ_ENET_PPS_TIMER_CH2_OR_FLASH          = 96U,
    DMA_REQ_ENET_PPS_TIMER_CH3_OR_FLASH          = 97U,
    DMA_REQ_FTU0_ALL_CH_OR                       = 98U,
    DMA_REQ_FTU1_ALL_CH_OR                       = 99U,
    DMA_REQ_FTU2_ALL_CH_OR                       = 100U,
    DMA_REQ_FTU3_ALL_CH_OR                       = 101U,
    DMA_REQ_FTU4_ALL_CH_OR_TPU0_CH28             = 102U,
    DMA_REQ_FTU5_ALL_CH_OR_TPU0_CH29             = 103U,
    DMA_REQ_FTU6_ALL_CH_OR_TPU0_CH30             = 104U,
    DMA_REQ_FTU7_ALL_CH_OR_TPU0_CH31             = 105U,
    DMA_REQ_FTU0_CH0_OR_FLEXCAN10                = 106U,
    DMA_REQ_FTU0_CH2_OR_FLEXCAN11                = 107U,
    DMA_REQ_FTU0_CH4_OR_FLEXCAN12                = 108U,
    DMA_REQ_FTU0_CH6_OR_FLEXCAN13                = 109U,
    DMA_REQ_SENT0_CH0_FAST                       = 110U,
    DMA_REQ_SENT0_CH1_FAST                       = 111U,
    DMA_REQ_SENT0_CH2_FAST                       = 112U,
    DMA_REQ_SENT0_CH3_FAST                       = 113U,
    DMA_REQ_SENT1_CH0_FAST                       = 114U,
    DMA_REQ_SENT1_CH1_FAST                       = 115U,
    DMA_REQ_SENT1_CH2_FAST                       = 116U,
    DMA_REQ_SENT1_CH3_FAST                       = 117U,
    DMA_REQ_SENT0_CH0_SLOW_OR_FTU3_CH0           = 118U,
    DMA_REQ_SENT0_CH1_SLOW_OR_FTU3_CH2           = 119U,
    DMA_REQ_SENT0_CH2_SLOW_OR_FTU3_CH4           = 120U,
    DMA_REQ_SENT0_CH3_SLOW_OR_FTU3_CH6           = 121U,
    DMA_REQ_SENT1_CH0_SLOW_OR_FTU4_CH0           = 122U,
    DMA_REQ_SENT1_CH1_SLOW_OR_FTU4_CH2           = 123U,
    DMA_REQ_SENT1_CH2_SLOW_OR_FTU4_CH4           = 124U,
    DMA_REQ_SENT1_CH3_SLOW_OR_FTU4_CH6           = 125U,
    DMA_REQ_ALWAYS_ENABLE_0                      = 126U,
    DMA_REQ_ALWAYS_ENABLE_1                      = 127U
} Dma_MuxRequestSourceType;
#elif (DEVICE_SERIES == FC7240F2MDSxxxxT1A)
typedef enum
{
    DMA_REQ_DISABLED        = 0U,
    DMA_REQ_FCIIC0_RX       = 1U,
    DMA_REQ_FCIIC0_TX       = 2U,
    DMA_REQ_FCIIC1_RX       = 3U,
    DMA_REQ_FCIIC1_TX       = 4U,
    DMA_REQ_FCSPI0_RX       = 5U,
    DMA_REQ_FCSPI0_TX       = 6U,
    DMA_REQ_FCSPI1_RX       = 7U,
    DMA_REQ_FCSPI1_TX       = 8U,
    DMA_REQ_FCSPI2_RX       = 9U,
    DMA_REQ_FCSPI2_TX       = 10U,
    DMA_REQ_FCSPI3_RX       = 11U,
    DMA_REQ_FCSPI3_TX       = 12U,
    DMA_REQ_FCSPI4_RX       = 13U,
    DMA_REQ_FCSPI4_TX       = 14U,
    DMA_REQ_FCSPI5_RX       = 15U,
    DMA_REQ_FCSPI5_TX       = 16U,
    DMA_REQ_FLEXCAN0        = 23U,
    DMA_REQ_FLEXCAN1        = 24U,
    DMA_REQ_FLEXCAN2        = 25U,
    DMA_REQ_FLEXCAN3        = 26U,
    DMA_REQ_ADC0            = 33U,
    DMA_REQ_ADC1            = 34U,
    DMA_REQ_FCUART0_RX      = 41U,
    DMA_REQ_FCUART0_TX      = 42U,
    DMA_REQ_FCUART1_RX      = 43U,
    DMA_REQ_FCUART1_TX      = 44U,
    DMA_REQ_FCUART2_RX      = 45U,
    DMA_REQ_FCUART2_TX      = 46U,
    DMA_REQ_FCUART3_RX      = 47U,
    DMA_REQ_FCUART3_TX      = 48U,
    DMA_REQ_FCUART4_RX      = 49U,
    DMA_REQ_FCUART4_TX      = 50U,
    DMA_REQ_FCUART5_RX      = 51U,
    DMA_REQ_FCUART5_TX      = 52U,
    DMA_REQ_FCUART6_RX      = 53U,
    DMA_REQ_FCUART6_TX      = 54U,
    DMA_REQ_FCUART7_RX      = 55U,
    DMA_REQ_FCUART7_TX      = 56U,
    DMA_REQ_TPU0            = 59U,
    DMA_REQ_TPU1            = 60U,
    DMA_REQ_TPU2            = 61U,
    DMA_REQ_TPU3            = 62U,
    DMA_REQ_TPU4            = 63U,
    DMA_REQ_TPU5            = 64U,
    DMA_REQ_TPU6            = 65U,
    DMA_REQ_TPU7            = 66U,
    DMA_REQ_TPU8            = 67U,
    DMA_REQ_TPU9            = 68U,
    DMA_REQ_TPU10           = 69U,
    DMA_REQ_TPU11           = 70U,
    DMA_REQ_TPU12           = 71U,
    DMA_REQ_TPU13           = 72U,
    DMA_REQ_TPU14           = 73U,
    DMA_REQ_TPU15           = 74U,
    DMA_REQ_TPU16TO23       = 75U,
    DMA_REQ_TPU24TO31       = 76U,
    DMA_REQ_PORTA           = 77U,
    DMA_REQ_PORTB           = 78U,
    DMA_REQ_PORTC           = 79U,
    DMA_REQ_PORTD           = 80U,
    DMA_REQ_PORTE           = 81U,
    DMA_REQ_AONTIMER0       = 86U,
    DMA_REQ_CMP0            = 87U,
    DMA_REQ_CMP1            = 88U,
    DMA_REQ_PTIMER0         = 90U,
    DMA_REQ_PTIMER1         = 91U,
    DMA_REQ_FTU0_ALL_CH_OR  = 98U,
    DMA_REQ_FTU1_ALL_CH_OR  = 99U,
    DMA_REQ_FTU2_ALL_CH_OR  = 100U,
    DMA_REQ_FTU3_ALL_CH_OR  = 101U,
    DMA_REQ_FTU4_ALL_CH_OR  = 102U,
    DMA_REQ_FTU5_ALL_CH_OR  = 103U,
    DMA_REQ_FTU6_ALL_CH_OR  = 104U,
    DMA_REQ_FTU7_ALL_CH_OR  = 105U,
    DMA_REQ_SENT0_CH0_FAST  = 110U,
    DMA_REQ_SENT0_CH1_FAST  = 111U,
    DMA_REQ_SENT0_CH2_FAST  = 112U,
    DMA_REQ_SENT0_CH3_FAST  = 113U,
    DMA_REQ_SENT0_CH0_SLOW  = 118U,
    DMA_REQ_SENT0_CH1_SLOW  = 119U,
    DMA_REQ_SENT0_CH2_SLOW  = 120U,
    DMA_REQ_SENT0_CH3_SLOW  = 121U,
    DMA_REQ_ALWAYS_ENABLE_0 = 126U,
    DMA_REQ_ALWAYS_ENABLE_1 = 127U
} Dma_MuxRequestSourceType;
#endif

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/
/**
 * @brief DMA transfer complete callback function prototype
 *
 */
typedef void (*Dma_TransferCompleteCallbackType)(void);

/**
 * @brief DMA transfer error callback function prototype
 *
 */
typedef void (*Dma_TransferErrorCallbackType)(void);

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*
 * @brief Used to configure the DMAMUX and DMA channel register.
 */
typedef struct
{
    uint8 u8PartitionId;        /*!< Specify which CPU this channel belongs to. */
    uint8 u8Dmachannelid;       /*!< Dma channel number being configured. */
    uint8 u8DmaChannelPriority; /*!< DMA channel priority, it is only valid in fixed arbitration mode. */
    boolean bDmaMuxPeriodModeEnable; /*!< Enables the periodic trigger capability for the triggered
                                        DMA channel, just channel 0 to channel 3 supported. */
    boolean bDmaDoneInterruptEnable; /*!< Enable the DMA channel complete Interrupt. */
    boolean bDmaHalfDoneInterruptEnable; /*!< Enable the DMA channel half complete Interrupt. */
    boolean bDmaErrorInterruptEnable;    /*!< Enable the DMA channel error Interrupt. */
    Dma_MuxRequestSourceType eDmaMuxRequestSource; /*!< Select the hardware DMA request source. */
    Dma_TransferCompleteCallbackType pDmaDoneISRCallBack; /*!< Pointer to callback notification for
                                                             DMA channel complete interrupt. */
    Dma_TransferErrorCallbackType pDmaErrorISRCallBack;   /*!< Pointer to callback notification for
                                                             DMA channel error interrupt */
    uint8   u8DmaISRRouter;                               /*!< Dma isr route to core */
    boolean bInnerChannelSelfChain; /*!< Dma innerloop channel chain enable. */
} Dma_ChannelConfigType;

/*
 * @brief Contains the basic info for DMA channel, should be filled by user.
 */
typedef struct
{
    uint32 u32DmaSADDR;         /*!< Memory address pointing to the source data */
    uint32 u32DmaDADDR;         /*!< Memory address pointing to the destination data  */
    boolean bDmaAutoStopEnable; /*!< Enable the DMA request automatically when outer loop is completed. */
    boolean          bDmaSrcCircularBufferEn;  /*!< Source circular buffer enable */
    uint32           u32DmaSrcCircBufferSize;  /*!< Source circular buffer size */
    boolean          bDmaDestCircularBufferEn; /*!< Destination circular buffer enable */
    uint32           u32DmaDestCircBufferSize; /*!< Destination circular buffer size */
    Dma_TranSizeType eDmaSSIZE;                /*!< Source data transfer size */
    Dma_TranSizeType eDmaDSIZE;                /*!< Destination data transfer size */
    sint16 s16SrcDataOffset; /*!< Source data increment offset after DMA engine transferred a datum */
    sint16 s16DestDataOffset; /*!< Destination data increment offset after DMA engine transferred a datum */
    sint32 s32DmaSLAST;            /*!< Last source address adjustment */
    sint32 s32DmaDLAST;            /*!< Last destination address adjustment */
    uint32 u32DmaNBYTES;           /*!< Innerloop bytes total transfer count */
    uint16 u16DmaOuterLoopCounter; /*!< The number of outerloops in one transfer */
    sint32 s32DmaILOFF; /*!< A sign-extended offset applied to the source or destination address to
                           form the next-state value after the inner loop completes */
    boolean bDmaSILOE;  /*!< Source innerloop offset enable */
    boolean bDmaDILOE;  /*!< Destination innerloop Offset enable */
} Dma_ChannelType;

/*
 * @brief Contains the information related to the hardware setup for DMA and DMAMux
 */
typedef struct
{
    Dma_InstanceType DmaInstanceNumber;

    /* Number of DMA channel configured */
    uint8 DmaNumberofChConfiguredPerCore;

    /* Pointer to channel config list */
    const Dma_ChannelConfigType *pDma_pChConfig; /*!< Config DMA and DMAMUX in each channel, refer
                                                    to Dma_ChannelConfigType structure */
} Dma_CoreSpecificChConfigType;

typedef struct
{
    boolean bDmaEnableInnerLoopMap;      /*!< Enable DMA Inner loop mapping */
    boolean bDmaEnableContinousLinkMode; /*!< Enable continuous trig mode.  */
    boolean bDmaEnableHaltOnError;       /*!< If enable, Any error causes the HALT bit to set. */
    boolean bDmaEnableRoundRobinMode;    /*!< If enable, Round robin arbitration is used for channel
                                            selection. */
    boolean bDmaEnableDebugStopMode;  /*!< If enable, The DMA stalls the start of a new channel when
                                         in debug mode. */
    boolean bDmaEnableMonitorChecker; /*!< If enable, The DMA enables Monitor Checker. */
    uint8   bDmaMastercore;           /*!< Dma instance master core. */
} Dma_CoreSpecificHwUnitConfigType;

typedef struct
{
    const Dma_CoreSpecificChConfigType     *pDmaCoreConfig[DMA_MAX_CORE_USED_U8];
    const Dma_CoreSpecificHwUnitConfigType *pDmaHwunitConfig;
    boolean                                 DmaPartitionsUsed[DMA_MAX_CORE_USED_U8];
} Dma_ConfigType;

#if (DMA_USE_SHADOW_CFGRAM == STD_ON)
typedef struct
{

    uint32 SADDR; /* CFG Source Address */

    uint16 SOFF; /* CFG Signed Source Address */

    uint16 ATTR; /* CFG Transfer Attributes */

    union /* offset: 0x1008, array step: 0x20 */
    {

        uint32 ILNO; /* CFG Inner Byte Transfer Count (Inner Loop Mapping Disabled), array offset:
                        0x1008, array step: 0x20 */

        uint32 ILOFFNO; /* CFG Signed Inner Loop Offset (Inner Loop Mapping Enabled and Offset
                           Disabled), array offset: 0x1008, array step: 0x20 */

        uint32 ILOFFYES; /* CFG Signed Inner Loop Offset (Inner Loop Mapping and Offset Enabled),
                            array offset: 0x1008, array step: 0x20 */

    } NBYTES;

    uint32 SLAST; /* CFG Last Source Address Adjustment, array offset: 0x100C, array step: 0x20 */

    uint32 DADDR; /* CFG Destination Address, array offset: 0x1010, array step: 0x20 */

    uint16 DOFF; /* CFG Signed Destination Address Offset, array offset: 0x1014, array step: 0x20 */

    union /* offset: 0x1016, array step: 0x20 */
    {

        uint16 CHTRGENNO; /* CFG Current Inner Loop Trig, Outer Loop Count (Channel Trig Disabled),
                             array offset: 0x1016, array step: 0x20 */

        uint16 CHTRGENYES; /* CFG Current Inner Loop Trig, Outer Loop Count (Channel Trig Enabled),
                              array offset: 0x1016, array step: 0x20 */

    } CLC;

    uint32 DLAST; /* CFG Last Destination Address Adjustment, array offset: 0x1018, array step: 0x20 */

    uint16 CSR; /* CFG Control and Status, array offset: 0x101C, array step: 0x20 */

    union /* offset: 0x101E, array step: 0x20 */
    {

        uint16 CHTRGENNO; /* CFG Beginning Inner Loop Trig, Outer Loop Count (Channel Trig
                             Disabled), array offset: 0x101E, array step: 0x20 */

        uint16 CHTRGENYES; /* CFG Beginning Inner Loop Trig, Outer Loop Count (Channel Trig
                              Enabled), array offset: 0x101E, array step: 0x20 */

    } BLC;

} CFG_REG;
#endif

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* DMA_TYPES_H */
/** @} */
