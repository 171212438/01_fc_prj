
/**
*   @file    Port_Cfg.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - Module configuration interface for Port driver.
*   @details Contains the module configuration interface for Port driver.
*
*   @addtogroup PORT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : PORT
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       14/07/2023    QXW0071       N/A          PORT Initial Version
*   0.2.0       15/09/2023    QXW0121       N/A          Add multicore support
*   0.3.0       10/10/2023    QXW0121       N/A          Multicore support optimization
*   0.4.0       11/10/2023    QXW0121       N/A          Multicore support optimization
*   0.5.0       18/03/2024    QXW0122       N/A          Add support for FC7240
==================================================================================================*/
#ifndef PORT_CFG_H
#define PORT_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
                                         INCLUDE FILES
=================================================================================================*/
#include "Mcal.h"
#include "Port_Hw_Types.h"


/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION        4U
#define PORT_CFG_AR_RELEASE_MINOR_VERSION        6U
#define PORT_CFG_AR_RELEASE_REVISION_VERSION     0U
#define PORT_CFG_SW_MAJOR_VERSION                1U
#define PORT_CFG_SW_MINOR_VERSION                5U
#define PORT_CFG_SW_PATCH_VERSION                1U
#define PORT_CFG_VENDOR_ID                       174U

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/** @brief Port Alternate 0 Mode */
#define PORT_ALT0_FUNC_MODE             ((Port_PinModeType)0)
/** @brief Port GPIO Mode */
#define PORT_GPIO_MODE                  ((Port_PinModeType)1)
/** @brief Port Alternate 2 Mode */
#define PORT_ALT2_FUNC_MODE             ((Port_PinModeType)2)
/** @brief Port Alternate 3 Mode */
#define PORT_ALT3_FUNC_MODE             ((Port_PinModeType)3)
/** @brief Port Alternate 4 Mode */
#define PORT_ALT4_FUNC_MODE             ((Port_PinModeType)4)
/** @brief Port Alternate 5 Mode */
#define PORT_ALT5_FUNC_MODE             ((Port_PinModeType)5)
/** @brief Port Alternate 6 Mode */
#define PORT_ALT6_FUNC_MODE             ((Port_PinModeType)6)
/** @brief Port Alternate 7 Mode */
#define PORT_ALT7_FUNC_MODE             ((Port_PinModeType)7)




#define    PORT0_ADC1_SE30                                  (PORT_ALT0_FUNC_MODE)          /* PTA0 */
#define    PORT1_ADC1_SE29                                  (PORT_ALT0_FUNC_MODE)          /* PTA1 */
#define    PORT6_ADC1_SE9                                   (PORT_ALT0_FUNC_MODE)          /* PTA6 */
#define    PORT8_ADC1_SE3_ADC1_DIFF_P3                      (PORT_ALT0_FUNC_MODE)          /* PTA8 */
#define    PORT9_ADC1_SE7_ADC1_DIFF_N3                      (PORT_ALT0_FUNC_MODE)          /* PTA9 */
#define    PORT13_ADC0_SE20                                 (PORT_ALT0_FUNC_MODE)         /* PTA13 */
#define    PORT14_ADC0_SE21                                 (PORT_ALT0_FUNC_MODE)         /* PTA14 */
#define    PORT15_ADC0_SE26                                 (PORT_ALT0_FUNC_MODE)         /* PTA15 */
#define    PORT16_ADC0_SE28                                 (PORT_ALT0_FUNC_MODE)         /* PTA16 */
#define    PORT25_ADC0_SE0_ADC0_DIFF_P0                     (PORT_ALT0_FUNC_MODE)         /* PTA25 */
#define    PORT26_ADC0_SE2_ADC0_DIFF_P2                     (PORT_ALT0_FUNC_MODE)         /* PTA26 */
#define    PORT27_ADC0_SE6_ADC0_DIFF_N2                     (PORT_ALT0_FUNC_MODE)         /* PTA27 */
#define    PORT28_ADC0_SE7_ADC0_DIFF_N3                     (PORT_ALT0_FUNC_MODE)         /* PTA28 */
#define    PORT29_ADC0_SE9                                  (PORT_ALT0_FUNC_MODE)         /* PTA29 */
#define    PORT31_ADC0_SE13_CMP0_IN3                        (PORT_ALT0_FUNC_MODE)         /* PTA31 */
#define    PORT32_ADC1_SE10                                 (PORT_ALT0_FUNC_MODE)          /* PTB0 */
#define    PORT33_ADC1_SE11                                 (PORT_ALT0_FUNC_MODE)          /* PTB1 */
#define    PORT38_XTAL                                      (PORT_ALT0_FUNC_MODE)          /* PTB6 */
#define    PORT39_EXTAL                                     (PORT_ALT0_FUNC_MODE)          /* PTB7 */
#define    PORT40_ADC1_SE28                                 (PORT_ALT0_FUNC_MODE)          /* PTB8 */
#define    PORT41_ADC1_SE25                                 (PORT_ALT0_FUNC_MODE)          /* PTB9 */
#define    PORT43_V15_BASE_DRIVER                           (PORT_ALT0_FUNC_MODE)         /* PTB11 */
#define    PORT46_ADC1_SE18                                 (PORT_ALT0_FUNC_MODE)         /* PTB14 */
#define    PORT47_ADC1_SE17                                 (PORT_ALT0_FUNC_MODE)         /* PTB15 */
#define    PORT48_ADC1_SE16                                 (PORT_ALT0_FUNC_MODE)         /* PTB16 */
#define    PORT51_CMP0_IN4                                  (PORT_ALT0_FUNC_MODE)         /* PTB19 */
#define    PORT52_ADC0_SE14                                 (PORT_ALT0_FUNC_MODE)         /* PTB20 */
#define    PORT53_ADC0_SE15                                 (PORT_ALT0_FUNC_MODE)         /* PTB21 */
#define    PORT55_CMP1_IN6                                  (PORT_ALT0_FUNC_MODE)         /* PTB23 */
#define    PORT56_CMP0_IN5                                  (PORT_ALT0_FUNC_MODE)         /* PTB24 */
#define    PORT58_CMP0_IN6                                  (PORT_ALT0_FUNC_MODE)         /* PTB26 */
#define    PORT62_CMP0_IN7                                  (PORT_ALT0_FUNC_MODE)         /* PTB30 */
#define    PORT63_CMP1_IN0                                  (PORT_ALT0_FUNC_MODE)         /* PTB31 */
#define    PORT66_DEBUGMUX_P2                               (PORT_ALT0_FUNC_MODE)          /* PTC2 */
#define    PORT70_ADC0_SE29                                 (PORT_ALT0_FUNC_MODE)          /* PTC6 */
#define    PORT71_ADC0_SE30                                 (PORT_ALT0_FUNC_MODE)          /* PTC7 */
#define    PORT74_ADC1_SE12                                 (PORT_ALT0_FUNC_MODE)         /* PTC10 */
#define    PORT75_ADC1_SE13                                 (PORT_ALT0_FUNC_MODE)         /* PTC11 */
#define    PORT76_ADC1_SE14                                 (PORT_ALT0_FUNC_MODE)         /* PTC12 */
#define    PORT77_ADC1_SE15                                 (PORT_ALT0_FUNC_MODE)         /* PTC13 */
#define    PORT78_CMP1_IN7                                  (PORT_ALT0_FUNC_MODE)         /* PTC14 */
#define    PORT79_CMP1_IN5                                  (PORT_ALT0_FUNC_MODE)         /* PTC15 */
#define    PORT80_CMP1_IN4                                  (PORT_ALT0_FUNC_MODE)         /* PTC16 */
#define    PORT81_DEBUGMUX_P1                               (PORT_ALT0_FUNC_MODE)         /* PTC17 */
#define    PORT82_CMP1_IN1                                  (PORT_ALT0_FUNC_MODE)         /* PTC18 */
#define    PORT89_ADC1_SE20                                 (PORT_ALT0_FUNC_MODE)         /* PTC25 */
#define    PORT90_ADC1_SE21                                 (PORT_ALT0_FUNC_MODE)         /* PTC26 */
#define    PORT96_ADC1_SE1_ADC1_DIFF_P1                     (PORT_ALT0_FUNC_MODE)          /* PTD0 */
#define    PORT97_ADC1_SE5_ADC1_DIFF_N1                     (PORT_ALT0_FUNC_MODE)          /* PTD1 */
#define    PORT100_ADC1_SE23                                (PORT_ALT0_FUNC_MODE)          /* PTD4 */
#define    PORT104_CMP1_IN3                                 (PORT_ALT0_FUNC_MODE)          /* PTD8 */
#define    PORT105_CMP1_IN2                                 (PORT_ALT0_FUNC_MODE)          /* PTD9 */
#define    PORT111_ADC0_SE11_CMP0_IN1                       (PORT_ALT0_FUNC_MODE)         /* PTD15 */
#define    PORT112_ADC0_SE10_CMP0_IN0                       (PORT_ALT0_FUNC_MODE)         /* PTD16 */
#define    PORT113_ADC0_SE8                                 (PORT_ALT0_FUNC_MODE)         /* PTD17 */
#define    PORT117_ADC1_SE22                                (PORT_ALT0_FUNC_MODE)         /* PTD21 */
#define    PORT118_ADC1_SE19                                (PORT_ALT0_FUNC_MODE)         /* PTD22 */
#define    PORT121_ADC1_SE24                                (PORT_ALT0_FUNC_MODE)         /* PTD25 */
#define    PORT122_ADC1_SE26                                (PORT_ALT0_FUNC_MODE)         /* PTD26 */
#define    PORT123_ADC1_SE27                                (PORT_ALT0_FUNC_MODE)         /* PTD27 */
#define    PORT126_ADC1_SE31                                (PORT_ALT0_FUNC_MODE)         /* PTD30 */
#define    PORT127_ADC0_SE31                                (PORT_ALT0_FUNC_MODE)         /* PTD31 */
#define    PORT128_ADC0_SE16                                (PORT_ALT0_FUNC_MODE)          /* PTE0 */
#define    PORT129_ADC0_SE17                                (PORT_ALT0_FUNC_MODE)          /* PTE1 */
#define    PORT130_ADC0_SE24                                (PORT_ALT0_FUNC_MODE)          /* PTE2 */
#define    PORT131_OSC32K_EXTAL                             (PORT_ALT0_FUNC_MODE)          /* PTE3 */
#define    PORT132_ADC0_SE4_ADC0_DIFF_N0                    (PORT_ALT0_FUNC_MODE)          /* PTE4 */
#define    PORT133_ADC0_SE1_ADC0_DIFF_P1                    (PORT_ALT0_FUNC_MODE)          /* PTE5 */
#define    PORT134_ADC0_SE25                                (PORT_ALT0_FUNC_MODE)          /* PTE6 */
#define    PORT135_ADC1_SE8                                 (PORT_ALT0_FUNC_MODE)          /* PTE7 */
#define    PORT137_ADC0_SE12_CMP0_IN2                       (PORT_ALT0_FUNC_MODE)          /* PTE9 */
#define    PORT138_ADC1_SE0_ADC1_DIFF_P0                    (PORT_ALT0_FUNC_MODE)         /* PTE10 */
#define    PORT139_ADC1_SE4_ADC1_DIFF_N0                    (PORT_ALT0_FUNC_MODE)         /* PTE11 */
#define    PORT140_ADC0_SE3_ADC0_DIFF_P3                    (PORT_ALT0_FUNC_MODE)         /* PTE12 */
#define    PORT141_ADC0_SE5_ADC0_DIFF_N1                    (PORT_ALT0_FUNC_MODE)         /* PTE13 */
#define    PORT142_OSC32K_XTAL                              (PORT_ALT0_FUNC_MODE)         /* PTE14 */
#define    PORT143_ADC1_SE2_ADC1_DIFF_P2                    (PORT_ALT0_FUNC_MODE)         /* PTE15 */
#define    PORT144_ADC1_SE6_ADC1_DIFF_N2                    (PORT_ALT0_FUNC_MODE)         /* PTE16 */
#define    PORT146_ADC0_SE27                                (PORT_ALT0_FUNC_MODE)         /* PTE18 */
#define    PORT147_ADC0_SE23                                (PORT_ALT0_FUNC_MODE)         /* PTE19 */
#define    PORT148_ADC0_SE22                                (PORT_ALT0_FUNC_MODE)         /* PTE20 */
#define    PORT151_ADC0_SE19                                (PORT_ALT0_FUNC_MODE)         /* PTE23 */
#define    PORT152_ADC0_SE18                                (PORT_ALT0_FUNC_MODE)         /* PTE24 */
#define    PORT153_DEBUGMUX_P0                              (PORT_ALT0_FUNC_MODE)         /* PTE25 */
#define    PORT0_GPIO                                            (PORT_GPIO_MODE)          /* PTA0 */
#define    PORT1_GPIO                                            (PORT_GPIO_MODE)          /* PTA1 */
#define    PORT2_GPIO                                            (PORT_GPIO_MODE)          /* PTA2 */
#define    PORT3_GPIO                                            (PORT_GPIO_MODE)          /* PTA3 */
#define    PORT4_GPIO                                            (PORT_GPIO_MODE)          /* PTA4 */
#define    PORT6_GPIO                                            (PORT_GPIO_MODE)          /* PTA6 */
#define    PORT7_GPIO                                            (PORT_GPIO_MODE)          /* PTA7 */
#define    PORT8_GPIO                                            (PORT_GPIO_MODE)          /* PTA8 */
#define    PORT9_GPIO                                            (PORT_GPIO_MODE)          /* PTA9 */
#define    PORT10_GPIO                                           (PORT_GPIO_MODE)         /* PTA10 */
#define    PORT11_GPIO                                           (PORT_GPIO_MODE)         /* PTA11 */
#define    PORT12_GPIO                                           (PORT_GPIO_MODE)         /* PTA12 */
#define    PORT13_GPIO                                           (PORT_GPIO_MODE)         /* PTA13 */
#define    PORT14_GPIO                                           (PORT_GPIO_MODE)         /* PTA14 */
#define    PORT15_GPIO                                           (PORT_GPIO_MODE)         /* PTA15 */
#define    PORT16_GPIO                                           (PORT_GPIO_MODE)         /* PTA16 */
#define    PORT17_GPIO                                           (PORT_GPIO_MODE)         /* PTA17 */
#define    PORT18_GPIO                                           (PORT_GPIO_MODE)         /* PTA18 */
#define    PORT19_GPIO                                           (PORT_GPIO_MODE)         /* PTA19 */
#define    PORT20_GPIO                                           (PORT_GPIO_MODE)         /* PTA20 */
#define    PORT21_GPIO                                           (PORT_GPIO_MODE)         /* PTA21 */
#define    PORT23_GPIO                                           (PORT_GPIO_MODE)         /* PTA23 */
#define    PORT24_GPIO                                           (PORT_GPIO_MODE)         /* PTA24 */
#define    PORT25_GPIO                                           (PORT_GPIO_MODE)         /* PTA25 */
#define    PORT26_GPIO                                           (PORT_GPIO_MODE)         /* PTA26 */
#define    PORT27_GPIO                                           (PORT_GPIO_MODE)         /* PTA27 */
#define    PORT28_GPIO                                           (PORT_GPIO_MODE)         /* PTA28 */
#define    PORT29_GPIO                                           (PORT_GPIO_MODE)         /* PTA29 */
#define    PORT30_GPIO                                           (PORT_GPIO_MODE)         /* PTA30 */
#define    PORT31_GPIO                                           (PORT_GPIO_MODE)         /* PTA31 */
#define    PORT32_GPIO                                           (PORT_GPIO_MODE)          /* PTB0 */
#define    PORT33_GPIO                                           (PORT_GPIO_MODE)          /* PTB1 */
#define    PORT35_GPIO                                           (PORT_GPIO_MODE)          /* PTB3 */
#define    PORT36_GPIO                                           (PORT_GPIO_MODE)          /* PTB4 */
#define    PORT37_GPIO                                           (PORT_GPIO_MODE)          /* PTB5 */
#define    PORT38_GPIO                                           (PORT_GPIO_MODE)          /* PTB6 */
#define    PORT39_GPIO                                           (PORT_GPIO_MODE)          /* PTB7 */
#define    PORT40_GPIO                                           (PORT_GPIO_MODE)          /* PTB8 */
#define    PORT41_GPIO                                           (PORT_GPIO_MODE)          /* PTB9 */
#define    PORT42_GPIO                                           (PORT_GPIO_MODE)         /* PTB10 */
#define    PORT43_GPIO                                           (PORT_GPIO_MODE)         /* PTB11 */
#define    PORT44_GPIO                                           (PORT_GPIO_MODE)         /* PTB12 */
#define    PORT45_GPIO                                           (PORT_GPIO_MODE)         /* PTB13 */
#define    PORT46_GPIO                                           (PORT_GPIO_MODE)         /* PTB14 */
#define    PORT47_GPIO                                           (PORT_GPIO_MODE)         /* PTB15 */
#define    PORT48_GPIO                                           (PORT_GPIO_MODE)         /* PTB16 */
#define    PORT49_GPIO                                           (PORT_GPIO_MODE)         /* PTB17 */
#define    PORT50_GPIO                                           (PORT_GPIO_MODE)         /* PTB18 */
#define    PORT51_GPIO                                           (PORT_GPIO_MODE)         /* PTB19 */
#define    PORT52_GPIO                                           (PORT_GPIO_MODE)         /* PTB20 */
#define    PORT53_GPIO                                           (PORT_GPIO_MODE)         /* PTB21 */
#define    PORT54_GPIO                                           (PORT_GPIO_MODE)         /* PTB22 */
#define    PORT55_GPIO                                           (PORT_GPIO_MODE)         /* PTB23 */
#define    PORT56_GPIO                                           (PORT_GPIO_MODE)         /* PTB24 */
#define    PORT57_GPIO                                           (PORT_GPIO_MODE)         /* PTB25 */
#define    PORT58_GPIO                                           (PORT_GPIO_MODE)         /* PTB26 */
#define    PORT59_GPIO                                           (PORT_GPIO_MODE)         /* PTB27 */
#define    PORT60_GPIO                                           (PORT_GPIO_MODE)         /* PTB28 */
#define    PORT61_GPIO                                           (PORT_GPIO_MODE)         /* PTB29 */
#define    PORT62_GPIO                                           (PORT_GPIO_MODE)         /* PTB30 */
#define    PORT63_GPIO                                           (PORT_GPIO_MODE)         /* PTB31 */
#define    PORT64_GPIO                                           (PORT_GPIO_MODE)          /* PTC0 */
#define    PORT65_GPIO                                           (PORT_GPIO_MODE)          /* PTC1 */
#define    PORT66_GPIO                                           (PORT_GPIO_MODE)          /* PTC2 */
#define    PORT67_GPIO                                           (PORT_GPIO_MODE)          /* PTC3 */
#define    PORT68_GPIO                                           (PORT_GPIO_MODE)          /* PTC4 */
#define    PORT69_GPIO                                           (PORT_GPIO_MODE)          /* PTC5 */
#define    PORT70_GPIO                                           (PORT_GPIO_MODE)          /* PTC6 */
#define    PORT71_GPIO                                           (PORT_GPIO_MODE)          /* PTC7 */
#define    PORT72_GPIO                                           (PORT_GPIO_MODE)          /* PTC8 */
#define    PORT73_GPIO                                           (PORT_GPIO_MODE)          /* PTC9 */
#define    PORT74_GPIO                                           (PORT_GPIO_MODE)         /* PTC10 */
#define    PORT75_GPIO                                           (PORT_GPIO_MODE)         /* PTC11 */
#define    PORT76_GPIO                                           (PORT_GPIO_MODE)         /* PTC12 */
#define    PORT77_GPIO                                           (PORT_GPIO_MODE)         /* PTC13 */
#define    PORT78_GPIO                                           (PORT_GPIO_MODE)         /* PTC14 */
#define    PORT79_GPIO                                           (PORT_GPIO_MODE)         /* PTC15 */
#define    PORT80_GPIO                                           (PORT_GPIO_MODE)         /* PTC16 */
#define    PORT81_GPIO                                           (PORT_GPIO_MODE)         /* PTC17 */
#define    PORT82_GPIO                                           (PORT_GPIO_MODE)         /* PTC18 */
#define    PORT83_GPIO                                           (PORT_GPIO_MODE)         /* PTC19 */
#define    PORT84_GPIO                                           (PORT_GPIO_MODE)         /* PTC20 */
#define    PORT85_GPIO                                           (PORT_GPIO_MODE)         /* PTC21 */
#define    PORT86_GPIO                                           (PORT_GPIO_MODE)         /* PTC22 */
#define    PORT87_GPIO                                           (PORT_GPIO_MODE)         /* PTC23 */
#define    PORT88_GPIO                                           (PORT_GPIO_MODE)         /* PTC24 */
#define    PORT89_GPIO                                           (PORT_GPIO_MODE)         /* PTC25 */
#define    PORT90_GPIO                                           (PORT_GPIO_MODE)         /* PTC26 */
#define    PORT91_GPIO                                           (PORT_GPIO_MODE)         /* PTC27 */
#define    PORT92_GPIO                                           (PORT_GPIO_MODE)         /* PTC28 */
#define    PORT93_GPIO                                           (PORT_GPIO_MODE)         /* PTC29 */
#define    PORT94_GPIO                                           (PORT_GPIO_MODE)         /* PTC30 */
#define    PORT95_GPIO                                           (PORT_GPIO_MODE)         /* PTC31 */
#define    PORT96_GPIO                                           (PORT_GPIO_MODE)          /* PTD0 */
#define    PORT97_GPIO                                           (PORT_GPIO_MODE)          /* PTD1 */
#define    PORT98_GPIO                                           (PORT_GPIO_MODE)          /* PTD2 */
#define    PORT99_GPIO                                           (PORT_GPIO_MODE)          /* PTD3 */
#define    PORT100_GPIO                                          (PORT_GPIO_MODE)          /* PTD4 */
#define    PORT101_GPIO                                          (PORT_GPIO_MODE)          /* PTD5 */
#define    PORT102_GPIO                                          (PORT_GPIO_MODE)          /* PTD6 */
#define    PORT103_GPIO                                          (PORT_GPIO_MODE)          /* PTD7 */
#define    PORT104_GPIO                                          (PORT_GPIO_MODE)          /* PTD8 */
#define    PORT105_GPIO                                          (PORT_GPIO_MODE)          /* PTD9 */
#define    PORT106_GPIO                                          (PORT_GPIO_MODE)         /* PTD10 */
#define    PORT107_GPIO                                          (PORT_GPIO_MODE)         /* PTD11 */
#define    PORT108_GPIO                                          (PORT_GPIO_MODE)         /* PTD12 */
#define    PORT109_GPIO                                          (PORT_GPIO_MODE)         /* PTD13 */
#define    PORT111_GPIO                                          (PORT_GPIO_MODE)         /* PTD15 */
#define    PORT112_GPIO                                          (PORT_GPIO_MODE)         /* PTD16 */
#define    PORT113_GPIO                                          (PORT_GPIO_MODE)         /* PTD17 */
#define    PORT114_GPIO                                          (PORT_GPIO_MODE)         /* PTD18 */
#define    PORT115_GPIO                                          (PORT_GPIO_MODE)         /* PTD19 */
#define    PORT116_GPIO                                          (PORT_GPIO_MODE)         /* PTD20 */
#define    PORT117_GPIO                                          (PORT_GPIO_MODE)         /* PTD21 */
#define    PORT118_GPIO                                          (PORT_GPIO_MODE)         /* PTD22 */
#define    PORT119_GPIO                                          (PORT_GPIO_MODE)         /* PTD23 */
#define    PORT120_GPIO                                          (PORT_GPIO_MODE)         /* PTD24 */
#define    PORT121_GPIO                                          (PORT_GPIO_MODE)         /* PTD25 */
#define    PORT122_GPIO                                          (PORT_GPIO_MODE)         /* PTD26 */
#define    PORT123_GPIO                                          (PORT_GPIO_MODE)         /* PTD27 */
#define    PORT124_GPIO                                          (PORT_GPIO_MODE)         /* PTD28 */
#define    PORT125_GPIO                                          (PORT_GPIO_MODE)         /* PTD29 */
#define    PORT126_GPIO                                          (PORT_GPIO_MODE)         /* PTD30 */
#define    PORT127_GPIO                                          (PORT_GPIO_MODE)         /* PTD31 */
#define    PORT128_GPIO                                          (PORT_GPIO_MODE)          /* PTE0 */
#define    PORT129_GPIO                                          (PORT_GPIO_MODE)          /* PTE1 */
#define    PORT130_GPIO                                          (PORT_GPIO_MODE)          /* PTE2 */
#define    PORT131_GPIO                                          (PORT_GPIO_MODE)          /* PTE3 */
#define    PORT132_GPIO                                          (PORT_GPIO_MODE)          /* PTE4 */
#define    PORT133_GPIO                                          (PORT_GPIO_MODE)          /* PTE5 */
#define    PORT134_GPIO                                          (PORT_GPIO_MODE)          /* PTE6 */
#define    PORT135_GPIO                                          (PORT_GPIO_MODE)          /* PTE7 */
#define    PORT136_GPIO                                          (PORT_GPIO_MODE)          /* PTE8 */
#define    PORT137_GPIO                                          (PORT_GPIO_MODE)          /* PTE9 */
#define    PORT138_GPIO                                          (PORT_GPIO_MODE)         /* PTE10 */
#define    PORT139_GPIO                                          (PORT_GPIO_MODE)         /* PTE11 */
#define    PORT140_GPIO                                          (PORT_GPIO_MODE)         /* PTE12 */
#define    PORT141_GPIO                                          (PORT_GPIO_MODE)         /* PTE13 */
#define    PORT142_GPIO                                          (PORT_GPIO_MODE)         /* PTE14 */
#define    PORT143_GPIO                                          (PORT_GPIO_MODE)         /* PTE15 */
#define    PORT144_GPIO                                          (PORT_GPIO_MODE)         /* PTE16 */
#define    PORT145_GPIO                                          (PORT_GPIO_MODE)         /* PTE17 */
#define    PORT146_GPIO                                          (PORT_GPIO_MODE)         /* PTE18 */
#define    PORT147_GPIO                                          (PORT_GPIO_MODE)         /* PTE19 */
#define    PORT148_GPIO                                          (PORT_GPIO_MODE)         /* PTE20 */
#define    PORT149_GPIO                                          (PORT_GPIO_MODE)         /* PTE21 */
#define    PORT150_GPIO                                          (PORT_GPIO_MODE)         /* PTE22 */
#define    PORT151_GPIO                                          (PORT_GPIO_MODE)         /* PTE23 */
#define    PORT152_GPIO                                          (PORT_GPIO_MODE)         /* PTE24 */
#define    PORT153_GPIO                                          (PORT_GPIO_MODE)         /* PTE25 */
#define    PORT154_GPIO                                          (PORT_GPIO_MODE)         /* PTE26 */
#define    PORT155_GPIO                                          (PORT_GPIO_MODE)         /* PTE27 */
#define    PORT157_GPIO                                          (PORT_GPIO_MODE)         /* PTE29 */
#define    PORT0_FTU2_CH1                                   (PORT_ALT2_FUNC_MODE)          /* PTA0 */
#define    PORT1_FTU1_CH1                                   (PORT_ALT2_FUNC_MODE)          /* PTA1 */
#define    PORT2_FTU3_CH0                                   (PORT_ALT2_FUNC_MODE)          /* PTA2 */
#define    PORT3_FTU3_CH1                                   (PORT_ALT2_FUNC_MODE)          /* PTA3 */
#define    PORT4_FTU1_CH0                                   (PORT_ALT2_FUNC_MODE)          /* PTA4 */
#define    PORT6_FTU_FLT13                                  (PORT_ALT2_FUNC_MODE)          /* PTA6 */
#define    PORT7_FTU_FLT12                                  (PORT_ALT2_FUNC_MODE)          /* PTA7 */
#define    PORT8_FCUART2_RX                                 (PORT_ALT2_FUNC_MODE)          /* PTA8 */
#define    PORT9_FCUART2_TX                                 (PORT_ALT2_FUNC_MODE)          /* PTA9 */
#define    PORT10_FTU1_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTA10 */
#define    PORT11_FTU1_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTA11 */
#define    PORT12_FTU1_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTA12 */
#define    PORT13_FTU1_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTA13 */
#define    PORT14_FTU_FLT17                                 (PORT_ALT2_FUNC_MODE)         /* PTA14 */
#define    PORT15_FTU1_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTA15 */
#define    PORT16_FTU1_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTA16 */
#define    PORT17_FTU0_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTA17 */
#define    PORT18_FTU4_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTA18 */
#define    PORT19_FTU4_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTA19 */
#define    PORT20_FTU4_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTA20 */
#define    PORT21_FTU4_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTA21 */
#define    PORT23_FTU4_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTA23 */
#define    PORT24_FTU4_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTA24 */
#define    PORT25_FTU5_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTA25 */
#define    PORT26_FTU5_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTA26 */
#define    PORT27_FTU5_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTA27 */
#define    PORT28_FTU5_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTA28 */
#define    PORT29_FTU5_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTA29 */
#define    PORT30_FTU5_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTA30 */
#define    PORT31_FTU5_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTA31 */
#define    PORT32_FCUART0_RX                                (PORT_ALT2_FUNC_MODE)          /* PTB0 */
#define    PORT33_FCUART0_TX                                (PORT_ALT2_FUNC_MODE)          /* PTB1 */
#define    PORT35_FTU1_CH1                                  (PORT_ALT2_FUNC_MODE)          /* PTB3 */
#define    PORT36_FTU0_CH4                                  (PORT_ALT2_FUNC_MODE)          /* PTB4 */
#define    PORT37_FTU0_CH5                                  (PORT_ALT2_FUNC_MODE)          /* PTB5 */
#define    PORT38_FCIIC0_SDA                                (PORT_ALT2_FUNC_MODE)          /* PTB6 */
#define    PORT39_FCIIC0_SCL                                (PORT_ALT2_FUNC_MODE)          /* PTB7 */
#define    PORT40_FTU3_CH0                                  (PORT_ALT2_FUNC_MODE)          /* PTB8 */
#define    PORT41_FTU3_CH1                                  (PORT_ALT2_FUNC_MODE)          /* PTB9 */
#define    PORT42_FTU3_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTB10 */
#define    PORT43_FTU6_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTB11 */
#define    PORT44_FTU0_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTB12 */
#define    PORT45_FTU0_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTB13 */
#define    PORT46_FTU0_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTB14 */
#define    PORT47_FTU0_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTB15 */
#define    PORT48_FTU0_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTB16 */
#define    PORT49_FTU0_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTB17 */
#define    PORT50_FTU5_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTB18 */
#define    PORT51_FTU6_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTB19 */
#define    PORT52_FTU2_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTB20 */
#define    PORT53_FTU2_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTB21 */
#define    PORT54_FTU_FLT8                                  (PORT_ALT2_FUNC_MODE)         /* PTB22 */
#define    PORT55_FTU_FLT9                                  (PORT_ALT2_FUNC_MODE)         /* PTB23 */
#define    PORT56_FTU6_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTB24 */
#define    PORT57_FTU1_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTB25 */
#define    PORT58_FTU6_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTB26 */
#define    PORT59_FTU7_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTB27 */
#define    PORT60_FTU7_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTB28 */
#define    PORT61_FTU1_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTB29 */
#define    PORT62_FTU6_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTB30 */
#define    PORT63_FTU7_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTB31 */
#define    PORT64_FTU0_CH0                                  (PORT_ALT2_FUNC_MODE)          /* PTC0 */
#define    PORT65_FTU0_CH1                                  (PORT_ALT2_FUNC_MODE)          /* PTC1 */
#define    PORT66_FTU0_CH2                                  (PORT_ALT2_FUNC_MODE)          /* PTC2 */
#define    PORT67_FTU0_CH3                                  (PORT_ALT2_FUNC_MODE)          /* PTC3 */
#define    PORT69_FTU2_CH0                                  (PORT_ALT2_FUNC_MODE)          /* PTC5 */
#define    PORT70_FCUART1_RX                                (PORT_ALT2_FUNC_MODE)          /* PTC6 */
#define    PORT71_FCUART1_TX                                (PORT_ALT2_FUNC_MODE)          /* PTC7 */
#define    PORT72_FCUART1_RX                                (PORT_ALT2_FUNC_MODE)          /* PTC8 */
#define    PORT73_FCUART1_TX                                (PORT_ALT2_FUNC_MODE)          /* PTC9 */
#define    PORT74_FTU3_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTC10 */
#define    PORT75_FTU3_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTC11 */
#define    PORT76_FTU3_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTC12 */
#define    PORT77_FTU3_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTC13 */
#define    PORT78_FTU1_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTC14 */
#define    PORT79_FTU1_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTC15 */
#define    PORT80_FTU_FLT7                                  (PORT_ALT2_FUNC_MODE)         /* PTC16 */
#define    PORT81_FTU_FLT6                                  (PORT_ALT2_FUNC_MODE)         /* PTC17 */
#define    PORT82_FTU7_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTC18 */
#define    PORT83_FTU7_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTC19 */
#define    PORT84_FTU7_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTC20 */
#define    PORT85_FTU7_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTC21 */
#define    PORT86_FTU6_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTC22 */
#define    PORT87_FTU7_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTC23 */
#define    PORT88_FTU4_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTC24 */
#define    PORT89_FTU4_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTC25 */
#define    PORT90_FTU4_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTC26 */
#define    PORT91_FTU4_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTC27 */
#define    PORT92_FTU4_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTC28 */
#define    PORT93_FTU5_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTC29 */
#define    PORT94_FTU5_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTC30 */
#define    PORT95_FTU5_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTC31 */
#define    PORT96_FTU0_CH2                                  (PORT_ALT2_FUNC_MODE)          /* PTD0 */
#define    PORT97_FTU0_CH3                                  (PORT_ALT2_FUNC_MODE)          /* PTD1 */
#define    PORT98_FTU3_CH4                                  (PORT_ALT2_FUNC_MODE)          /* PTD2 */
#define    PORT99_FTU3_CH5                                  (PORT_ALT2_FUNC_MODE)          /* PTD3 */
#define    PORT100_FTU_FLT16                                (PORT_ALT2_FUNC_MODE)          /* PTD4 */
#define    PORT101_FTU2_CH3                                 (PORT_ALT2_FUNC_MODE)          /* PTD5 */
#define    PORT102_FCUART2_RX                               (PORT_ALT2_FUNC_MODE)          /* PTD6 */
#define    PORT103_FCUART2_TX                               (PORT_ALT2_FUNC_MODE)          /* PTD7 */
#define    PORT104_FCIIC1_SDA                               (PORT_ALT2_FUNC_MODE)          /* PTD8 */
#define    PORT105_FCIIC1_SCL                               (PORT_ALT2_FUNC_MODE)          /* PTD9 */
#define    PORT106_FTU2_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTD10 */
#define    PORT107_FTU2_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTD11 */
#define    PORT108_FTU2_CH2                                 (PORT_ALT2_FUNC_MODE)         /* PTD12 */
#define    PORT109_FTU6_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTD13 */
#define    PORT111_FTU0_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTD15 */
#define    PORT112_FTU0_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTD16 */
#define    PORT113_FTU6_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTD17 */
#define    PORT114_FTU5_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTD18 */
#define    PORT115_FTU6_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTD19 */
#define    PORT116_FTU6_CH2                                 (PORT_ALT2_FUNC_MODE)         /* PTD20 */
#define    PORT117_FTU6_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTD21 */
#define    PORT118_FTU6_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTD22 */
#define    PORT119_FTU6_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTD23 */
#define    PORT120_FTU3_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTD24 */
#define    PORT121_FTU6_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTD25 */
#define    PORT122_FTU6_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTD26 */
#define    PORT123_FTU7_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTD27 */
#define    PORT124_FTU7_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTD28 */
#define    PORT125_FTU7_CH2                                 (PORT_ALT2_FUNC_MODE)         /* PTD29 */
#define    PORT126_FTU7_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTD30 */
#define    PORT127_FTU7_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTD31 */
#define    PORT128_FCUART0_CTS                              (PORT_ALT2_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCUART0_RTS                              (PORT_ALT2_FUNC_MODE)          /* PTE1 */
#define    PORT130_FTU6_CH6                                 (PORT_ALT2_FUNC_MODE)          /* PTE2 */
#define    PORT131_FTU2_CH6                                 (PORT_ALT2_FUNC_MODE)          /* PTE3 */
#define    PORT132_FTU6_CH0                                 (PORT_ALT2_FUNC_MODE)          /* PTE4 */
#define    PORT133_FTU_TCK2                                 (PORT_ALT2_FUNC_MODE)          /* PTE5 */
#define    PORT134_FTU7_CH7                                 (PORT_ALT2_FUNC_MODE)          /* PTE6 */
#define    PORT135_FTU0_CH7                                 (PORT_ALT2_FUNC_MODE)          /* PTE7 */
#define    PORT136_FTU0_CH6                                 (PORT_ALT2_FUNC_MODE)          /* PTE8 */
#define    PORT137_FTU0_CH7                                 (PORT_ALT2_FUNC_MODE)          /* PTE9 */
#define    PORT138_FTU2_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTE10 */
#define    PORT139_FTU2_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTE11 */
#define    PORT140_FTU6_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTE12 */
#define    PORT141_FTU4_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTE13 */
#define    PORT142_FTU2_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTE14 */
#define    PORT143_FTU2_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTE15 */
#define    PORT144_FTU2_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTE16 */
#define    PORT145_FTU7_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTE17 */
#define    PORT146_FTU7_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTE18 */
#define    PORT147_SCG_CLKOUT                               (PORT_ALT2_FUNC_MODE)         /* PTE19 */
#define    PORT148_FTU4_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTE20 */
#define    PORT149_FTU4_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTE21 */
#define    PORT150_FTU4_CH2                                 (PORT_ALT2_FUNC_MODE)         /* PTE22 */
#define    PORT151_FTU4_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTE23 */
#define    PORT152_FTU4_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTE24 */
#define    PORT153_FTU4_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTE25 */
#define    PORT154_FTU4_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTE26 */
#define    PORT155_FTU4_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTE27 */
#define    PORT157_FTU2_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTE29 */
#define    PORT0_AONTIMER0_CLK1                             (PORT_ALT3_FUNC_MODE)          /* PTA0 */
#define    PORT1_AONTIMER0_CLK2                             (PORT_ALT3_FUNC_MODE)          /* PTA1 */
#define    PORT2_FCIIC0_SDA                                 (PORT_ALT3_FUNC_MODE)          /* PTA2 */
#define    PORT3_FCIIC0_SCL                                 (PORT_ALT3_FUNC_MODE)          /* PTA3 */
#define    PORT4_TRGSEL_OUT7                                (PORT_ALT3_FUNC_MODE)          /* PTA4 */
#define    PORT6_FCSPI1_PCS1                                (PORT_ALT3_FUNC_MODE)          /* PTA6 */
#define    PORT7_FTU3_CH1                                   (PORT_ALT3_FUNC_MODE)          /* PTA7 */
#define    PORT8_FTU1_CH0                                   (PORT_ALT3_FUNC_MODE)          /* PTA8 */
#define    PORT9_FTU4_CH4                                   (PORT_ALT3_FUNC_MODE)          /* PTA9 */
#define    PORT10_AONTIMER0_CLK0                            (PORT_ALT3_FUNC_MODE)         /* PTA10 */
#define    PORT11_LP_WAKEUP2                                (PORT_ALT3_FUNC_MODE)         /* PTA11 */
#define    PORT12_FLEXCAN1_RX                               (PORT_ALT3_FUNC_MODE)         /* PTA12 */
#define    PORT13_FLEXCAN1_TX                               (PORT_ALT3_FUNC_MODE)         /* PTA13 */
#define    PORT14_AONTIMER0_CLK1                            (PORT_ALT3_FUNC_MODE)         /* PTA14 */
#define    PORT16_FCSPI1_PCS2                               (PORT_ALT3_FUNC_MODE)         /* PTA16 */
#define    PORT17_FTU7_CH0                                  (PORT_ALT3_FUNC_MODE)         /* PTA17 */
#define    PORT18_FCUART1_TX                                (PORT_ALT3_FUNC_MODE)         /* PTA18 */
#define    PORT19_FCUART1_RX                                (PORT_ALT3_FUNC_MODE)         /* PTA19 */
#define    PORT20_FCUART3_RTS                               (PORT_ALT3_FUNC_MODE)         /* PTA20 */
#define    PORT21_FCUART3_CTS                               (PORT_ALT3_FUNC_MODE)         /* PTA21 */
#define    PORT23_FCUART3_RX                                (PORT_ALT3_FUNC_MODE)         /* PTA23 */
#define    PORT24_FCUART3_TX                                (PORT_ALT3_FUNC_MODE)         /* PTA24 */
#define    PORT25_FCSPI2_PCS2                               (PORT_ALT3_FUNC_MODE)         /* PTA25 */
#define    PORT27_FLEXCAN0_TX                               (PORT_ALT3_FUNC_MODE)         /* PTA27 */
#define    PORT28_FLEXCAN0_RX                               (PORT_ALT3_FUNC_MODE)         /* PTA28 */
#define    PORT29_FCUART2_TX                                (PORT_ALT3_FUNC_MODE)         /* PTA29 */
#define    PORT30_FCUART2_RX                                (PORT_ALT3_FUNC_MODE)         /* PTA30 */
#define    PORT31_FLEXCAN3_TX                               (PORT_ALT3_FUNC_MODE)         /* PTA31 */
#define    PORT32_FCSPI0_PCS0                               (PORT_ALT3_FUNC_MODE)          /* PTB0 */
#define    PORT33_FCSPI0_SOUT                               (PORT_ALT3_FUNC_MODE)          /* PTB1 */
#define    PORT35_FCSPI0_SIN                                (PORT_ALT3_FUNC_MODE)          /* PTB3 */
#define    PORT36_FCIIC1_SDA                                (PORT_ALT3_FUNC_MODE)          /* PTB4 */
#define    PORT37_FCIIC1_SCL                                (PORT_ALT3_FUNC_MODE)          /* PTB5 */
#define    PORT40_FLEXCAN0_RX                               (PORT_ALT3_FUNC_MODE)          /* PTB8 */
#define    PORT41_FTU1_CH6                                  (PORT_ALT3_FUNC_MODE)          /* PTB9 */
#define    PORT42_FLEXCAN0_TX                               (PORT_ALT3_FUNC_MODE)         /* PTB10 */
#define    PORT43_FCUART2_TX                                (PORT_ALT3_FUNC_MODE)         /* PTB11 */
#define    PORT46_FCSPI1_SCK                                (PORT_ALT3_FUNC_MODE)         /* PTB14 */
#define    PORT47_FCSPI1_SIN                                (PORT_ALT3_FUNC_MODE)         /* PTB15 */
#define    PORT48_FCSPI1_SOUT                               (PORT_ALT3_FUNC_MODE)         /* PTB16 */
#define    PORT49_FCSPI1_PCS3                               (PORT_ALT3_FUNC_MODE)         /* PTB17 */
#define    PORT50_FLEXCAN3_RX                               (PORT_ALT3_FUNC_MODE)         /* PTB18 */
#define    PORT51_FCUART4_RX                                (PORT_ALT3_FUNC_MODE)         /* PTB19 */
#define    PORT52_FCUART1_TX                                (PORT_ALT3_FUNC_MODE)         /* PTB20 */
#define    PORT53_FCUART1_RX                                (PORT_ALT3_FUNC_MODE)         /* PTB21 */
#define    PORT54_FLEXCAN2_TX                               (PORT_ALT3_FUNC_MODE)         /* PTB22 */
#define    PORT55_FCUART1_RX                                (PORT_ALT3_FUNC_MODE)         /* PTB23 */
#define    PORT56_FCUART4_TX                                (PORT_ALT3_FUNC_MODE)         /* PTB24 */
#define    PORT57_FTU1_QD_PHB                               (PORT_ALT3_FUNC_MODE)         /* PTB25 */
#define    PORT58_FCSPI3_SCK                                (PORT_ALT3_FUNC_MODE)         /* PTB26 */
#define    PORT59_FTU2_CH2                                  (PORT_ALT3_FUNC_MODE)         /* PTB27 */
#define    PORT60_FTU2_CH1                                  (PORT_ALT3_FUNC_MODE)         /* PTB28 */
#define    PORT61_FCUART5_TX                                (PORT_ALT3_FUNC_MODE)         /* PTB29 */
#define    PORT62_FCSPI3_SIN                                (PORT_ALT3_FUNC_MODE)         /* PTB30 */
#define    PORT63_FCSPI3_SOUT                               (PORT_ALT3_FUNC_MODE)         /* PTB31 */
#define    PORT64_FLEXCAN2_RX                               (PORT_ALT3_FUNC_MODE)          /* PTC0 */
#define    PORT65_TPU_CH16                                  (PORT_ALT3_FUNC_MODE)          /* PTC1 */
#define    PORT66_FLEXCAN0_RX                               (PORT_ALT3_FUNC_MODE)          /* PTC2 */
#define    PORT67_FLEXCAN0_TX                               (PORT_ALT3_FUNC_MODE)          /* PTC3 */
#define    PORT69_RTC_CLKOUT                                (PORT_ALT3_FUNC_MODE)          /* PTC5 */
#define    PORT70_FLEXCAN1_RX                               (PORT_ALT3_FUNC_MODE)          /* PTC6 */
#define    PORT71_FLEXCAN1_TX                               (PORT_ALT3_FUNC_MODE)          /* PTC7 */
#define    PORT72_FTU_FLT11                                 (PORT_ALT3_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU_FLT10                                 (PORT_ALT3_FUNC_MODE)          /* PTC9 */
#define    PORT74_FTU0_CH5                                  (PORT_ALT3_FUNC_MODE)         /* PTC10 */
#define    PORT75_FTU4_CH2                                  (PORT_ALT3_FUNC_MODE)         /* PTC11 */
#define    PORT76_FTU2_CH6                                  (PORT_ALT3_FUNC_MODE)         /* PTC12 */
#define    PORT77_FTU2_CH7                                  (PORT_ALT3_FUNC_MODE)         /* PTC13 */
#define    PORT78_TPU_CH11                                  (PORT_ALT3_FUNC_MODE)         /* PTC14 */
#define    PORT79_TPU_CH12                                  (PORT_ALT3_FUNC_MODE)         /* PTC15 */
#define    PORT80_FTU4_CH0                                  (PORT_ALT3_FUNC_MODE)         /* PTC16 */
#define    PORT81_FTU4_CH1                                  (PORT_ALT3_FUNC_MODE)         /* PTC17 */
#define    PORT82_FCSPI3_PCS0                               (PORT_ALT3_FUNC_MODE)         /* PTC18 */
#define    PORT86_FCSPI0_SCK                                (PORT_ALT3_FUNC_MODE)         /* PTC22 */
#define    PORT87_FCUART6_TX                                (PORT_ALT3_FUNC_MODE)         /* PTC23 */
#define    PORT88_FCUART6_RX                                (PORT_ALT3_FUNC_MODE)         /* PTC24 */
#define    PORT89_FCUART5_RTS                               (PORT_ALT3_FUNC_MODE)         /* PTC25 */
#define    PORT90_FCUART5_CTS                               (PORT_ALT3_FUNC_MODE)         /* PTC26 */
#define    PORT91_FTU3_CH3                                  (PORT_ALT3_FUNC_MODE)         /* PTC27 */
#define    PORT92_FLEXCAN3_TX                               (PORT_ALT3_FUNC_MODE)         /* PTC28 */
#define    PORT93_FLEXCAN3_RX                               (PORT_ALT3_FUNC_MODE)         /* PTC29 */
#define    PORT94_FTU3_CH0                                  (PORT_ALT3_FUNC_MODE)         /* PTC30 */
#define    PORT95_FTU3_CH4                                  (PORT_ALT3_FUNC_MODE)         /* PTC31 */
#define    PORT96_FTU2_CH0                                  (PORT_ALT3_FUNC_MODE)          /* PTD0 */
#define    PORT97_FTU2_CH1                                  (PORT_ALT3_FUNC_MODE)          /* PTD1 */
#define    PORT98_FTU6_CH5                                  (PORT_ALT3_FUNC_MODE)          /* PTD2 */
#define    PORT99_FCSPI1_PCS0                               (PORT_ALT3_FUNC_MODE)          /* PTD3 */
#define    PORT100_FTU6_CH4                                 (PORT_ALT3_FUNC_MODE)          /* PTD4 */
#define    PORT101_FCUART4_TX                               (PORT_ALT3_FUNC_MODE)          /* PTD5 */
#define    PORT102_FLEXCAN3_RX                              (PORT_ALT3_FUNC_MODE)          /* PTD6 */
#define    PORT103_FLEXCAN3_TX                              (PORT_ALT3_FUNC_MODE)          /* PTD7 */
#define    PORT104_FTU4_CH2                                 (PORT_ALT3_FUNC_MODE)          /* PTD8 */
#define    PORT105_FTU4_CH3                                 (PORT_ALT3_FUNC_MODE)          /* PTD9 */
#define    PORT106_FTU2_QD_PHB                              (PORT_ALT3_FUNC_MODE)         /* PTD10 */
#define    PORT107_FTU2_QD_PHA                              (PORT_ALT3_FUNC_MODE)         /* PTD11 */
#define    PORT108_FCUART4_RX                               (PORT_ALT3_FUNC_MODE)         /* PTD12 */
#define    PORT109_FCUART1_TX                               (PORT_ALT3_FUNC_MODE)         /* PTD13 */
#define    PORT111_FCUART2_RTS                              (PORT_ALT3_FUNC_MODE)         /* PTD15 */
#define    PORT113_FCUART7_RX                               (PORT_ALT3_FUNC_MODE)         /* PTD17 */
#define    PORT114_FTU3_CH5                                 (PORT_ALT3_FUNC_MODE)         /* PTD18 */
#define    PORT115_FCSPI1_PCS2                              (PORT_ALT3_FUNC_MODE)         /* PTD19 */
#define    PORT116_FCUART5_RX                               (PORT_ALT3_FUNC_MODE)         /* PTD20 */
#define    PORT117_FCUART5_TX                               (PORT_ALT3_FUNC_MODE)         /* PTD21 */
#define    PORT118_FTU0_CH1                                 (PORT_ALT3_FUNC_MODE)         /* PTD22 */
#define    PORT120_TPU_CH28                                 (PORT_ALT3_FUNC_MODE)         /* PTD24 */
#define    PORT121_FTU0_CH0                                 (PORT_ALT3_FUNC_MODE)         /* PTD25 */
#define    PORT122_FTU3_CH7                                 (PORT_ALT3_FUNC_MODE)         /* PTD26 */
#define    PORT123_FCUART6_TX                               (PORT_ALT3_FUNC_MODE)         /* PTD27 */
#define    PORT124_FCUART6_RX                               (PORT_ALT3_FUNC_MODE)         /* PTD28 */
#define    PORT125_FCUART7_RX                               (PORT_ALT3_FUNC_MODE)         /* PTD29 */
#define    PORT126_FCUART7_TX                               (PORT_ALT3_FUNC_MODE)         /* PTD30 */
#define    PORT127_AONTIMER0_CLK0                           (PORT_ALT3_FUNC_MODE)         /* PTD31 */
#define    PORT128_FTU_TCK1                                 (PORT_ALT3_FUNC_MODE)          /* PTE0 */
#define    PORT130_AONTIMER0_CLK2                           (PORT_ALT3_FUNC_MODE)          /* PTE2 */
#define    PORT131_FCUART2_RX                               (PORT_ALT3_FUNC_MODE)          /* PTE3 */
#define    PORT132_FTU2_QD_PHB                              (PORT_ALT3_FUNC_MODE)          /* PTE4 */
#define    PORT133_FTU2_QD_PHA                              (PORT_ALT3_FUNC_MODE)          /* PTE5 */
#define    PORT134_FTU6_CH3                                 (PORT_ALT3_FUNC_MODE)          /* PTE6 */
#define    PORT135_FTU_FLT14                                (PORT_ALT3_FUNC_MODE)          /* PTE7 */
#define    PORT137_FCUART2_CTS                              (PORT_ALT3_FUNC_MODE)          /* PTE9 */
#define    PORT138_FCSPI2_PCS1                              (PORT_ALT3_FUNC_MODE)         /* PTE10 */
#define    PORT139_FCSPI2_PCS0                              (PORT_ALT3_FUNC_MODE)         /* PTE11 */
#define    PORT140_FCUART7_TX                               (PORT_ALT3_FUNC_MODE)         /* PTE12 */
#define    PORT141_FCSPI2_SOUT                              (PORT_ALT3_FUNC_MODE)         /* PTE13 */
#define    PORT142_FTU2_QD_PHA                              (PORT_ALT3_FUNC_MODE)         /* PTE14 */
#define    PORT143_FCSPI2_SCK                               (PORT_ALT3_FUNC_MODE)         /* PTE15 */
#define    PORT144_FCSPI2_SIN                               (PORT_ALT3_FUNC_MODE)         /* PTE16 */
#define    PORT146_FTU6_CH7                                 (PORT_ALT3_FUNC_MODE)         /* PTE18 */
#define    PORT147_FCIIC0_SCL                               (PORT_ALT3_FUNC_MODE)         /* PTE19 */
#define    PORT148_FCIIC0_SDA                               (PORT_ALT3_FUNC_MODE)         /* PTE20 */
#define    PORT149_AONTIMER0_CLK2                           (PORT_ALT3_FUNC_MODE)         /* PTE21 */
#define    PORT150_LP_WAKEUP0                               (PORT_ALT3_FUNC_MODE)         /* PTE22 */
#define    PORT151_FCUART0_TX                               (PORT_ALT3_FUNC_MODE)         /* PTE23 */
#define    PORT152_FLEXCAN2_TX                              (PORT_ALT3_FUNC_MODE)         /* PTE24 */
#define    PORT153_FCUART0_RX                               (PORT_ALT3_FUNC_MODE)         /* PTE25 */
#define    PORT154_LP_WAKEUP3                               (PORT_ALT3_FUNC_MODE)         /* PTE26 */
#define    PORT155_FLEXCAN2_RX                              (PORT_ALT3_FUNC_MODE)         /* PTE27 */
#define    PORT157_RTC_CLKOUT                               (PORT_ALT3_FUNC_MODE)         /* PTE29 */
#define    PORT0_SENT0_RXD3                                 (PORT_ALT4_FUNC_MODE)          /* PTA0 */
#define    PORT1_SENT0_RXD2                                 (PORT_ALT4_FUNC_MODE)          /* PTA1 */
#define    PORT2_TPU_CH1                                    (PORT_ALT4_FUNC_MODE)          /* PTA2 */
#define    PORT3_TPU_CH2                                    (PORT_ALT4_FUNC_MODE)          /* PTA3 */
#define    PORT4_CMP0_OUT                                   (PORT_ALT4_FUNC_MODE)          /* PTA4 */
#define    PORT6_FTU5_CH5                                   (PORT_ALT4_FUNC_MODE)          /* PTA6 */
#define    PORT7_FTU5_CH3                                   (PORT_ALT4_FUNC_MODE)          /* PTA7 */
#define    PORT8_CMP0_OUT                                   (PORT_ALT4_FUNC_MODE)          /* PTA8 */
#define    PORT10_TPU_CH30                                  (PORT_ALT4_FUNC_MODE)         /* PTA10 */
#define    PORT11_TPU_CH29                                  (PORT_ALT4_FUNC_MODE)         /* PTA11 */
#define    PORT13_CMP1_OUT                                  (PORT_ALT4_FUNC_MODE)         /* PTA13 */
#define    PORT16_FTU1_QD_PHA                               (PORT_ALT4_FUNC_MODE)         /* PTA16 */
#define    PORT17_FLEXCAN2_TX                               (PORT_ALT4_FUNC_MODE)         /* PTA17 */
#define    PORT18_TPU_CH0                                   (PORT_ALT4_FUNC_MODE)         /* PTA18 */
#define    PORT19_TPU_CH1                                   (PORT_ALT4_FUNC_MODE)         /* PTA19 */
#define    PORT20_TPU_CH2                                   (PORT_ALT4_FUNC_MODE)         /* PTA20 */
#define    PORT21_TPU_CH3                                   (PORT_ALT4_FUNC_MODE)         /* PTA21 */
#define    PORT23_TPU_CH25                                  (PORT_ALT4_FUNC_MODE)         /* PTA23 */
#define    PORT24_TPU_CH4                                   (PORT_ALT4_FUNC_MODE)         /* PTA24 */
#define    PORT25_FTU2_CH5                                  (PORT_ALT4_FUNC_MODE)         /* PTA25 */
#define    PORT26_FTU2_CH4                                  (PORT_ALT4_FUNC_MODE)         /* PTA26 */
#define    PORT27_FCUART0_TX                                (PORT_ALT4_FUNC_MODE)         /* PTA27 */
#define    PORT28_FCUART0_RX                                (PORT_ALT4_FUNC_MODE)         /* PTA28 */
#define    PORT32_FTU1_CH5                                  (PORT_ALT4_FUNC_MODE)          /* PTB0 */
#define    PORT33_FTU_TCK0                                  (PORT_ALT4_FUNC_MODE)          /* PTB1 */
#define    PORT35_FTU1_QD_PHA                               (PORT_ALT4_FUNC_MODE)          /* PTB3 */
#define    PORT36_FCSPI4_SOUT                               (PORT_ALT4_FUNC_MODE)          /* PTB4 */
#define    PORT37_FCSPI4_PCS0                               (PORT_ALT4_FUNC_MODE)          /* PTB5 */
#define    PORT40_SENT0_RXD1                                (PORT_ALT4_FUNC_MODE)          /* PTB8 */
#define    PORT42_SENT0_RXD0                                (PORT_ALT4_FUNC_MODE)         /* PTB10 */
#define    PORT43_FLEXCAN0_TX                               (PORT_ALT4_FUNC_MODE)         /* PTB11 */
#define    PORT45_FCUART6_CTS                               (PORT_ALT4_FUNC_MODE)         /* PTB13 */
#define    PORT46_TPU_CH5                                   (PORT_ALT4_FUNC_MODE)         /* PTB14 */
#define    PORT47_TPU_CH6                                   (PORT_ALT4_FUNC_MODE)         /* PTB15 */
#define    PORT48_TPU_CH7                                   (PORT_ALT4_FUNC_MODE)         /* PTB16 */
#define    PORT49_FLEXCAN2_RX                               (PORT_ALT4_FUNC_MODE)         /* PTB17 */
#define    PORT50_FCSPI4_PCS2                               (PORT_ALT4_FUNC_MODE)         /* PTB18 */
#define    PORT51_FLEXCAN3_TX                               (PORT_ALT4_FUNC_MODE)         /* PTB19 */
#define    PORT52_FTU6_CH2                                  (PORT_ALT4_FUNC_MODE)         /* PTB20 */
#define    PORT53_FTU6_CH3                                  (PORT_ALT4_FUNC_MODE)         /* PTB21 */
#define    PORT54_TPU_CH12                                  (PORT_ALT4_FUNC_MODE)         /* PTB22 */
#define    PORT55_FTU4_CH7                                  (PORT_ALT4_FUNC_MODE)         /* PTB23 */
#define    PORT56_FLEXCAN3_RX                               (PORT_ALT4_FUNC_MODE)         /* PTB24 */
#define    PORT57_FCSPI2_PCS0                               (PORT_ALT4_FUNC_MODE)         /* PTB25 */
#define    PORT58_FCUART3_TX                                (PORT_ALT4_FUNC_MODE)         /* PTB26 */
#define    PORT59_FCSPI2_SOUT                               (PORT_ALT4_FUNC_MODE)         /* PTB27 */
#define    PORT60_FCSPI2_SIN                                (PORT_ALT4_FUNC_MODE)         /* PTB28 */
#define    PORT61_FCSPI2_SCK                                (PORT_ALT4_FUNC_MODE)         /* PTB29 */
#define    PORT62_FCUART3_RX                                (PORT_ALT4_FUNC_MODE)         /* PTB30 */
#define    PORT63_FCUART5_TX                                (PORT_ALT4_FUNC_MODE)         /* PTB31 */
#define    PORT64_TPU_CH15                                  (PORT_ALT4_FUNC_MODE)          /* PTC0 */
#define    PORT65_FCSPI2_SOUT                               (PORT_ALT4_FUNC_MODE)          /* PTC1 */
#define    PORT66_FCUART0_RX                                (PORT_ALT4_FUNC_MODE)          /* PTC2 */
#define    PORT67_FCUART0_TX                                (PORT_ALT4_FUNC_MODE)          /* PTC3 */
#define    PORT69_CMP1_OUT                                  (PORT_ALT4_FUNC_MODE)          /* PTC5 */
#define    PORT70_FTU3_CH2                                  (PORT_ALT4_FUNC_MODE)          /* PTC6 */
#define    PORT71_FTU3_CH3                                  (PORT_ALT4_FUNC_MODE)          /* PTC7 */
#define    PORT72_FTU5_CH1                                  (PORT_ALT4_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU5_CH0                                  (PORT_ALT4_FUNC_MODE)          /* PTC9 */
#define    PORT74_FCUART6_RX                                (PORT_ALT4_FUNC_MODE)         /* PTC10 */
#define    PORT75_FCUART6_TX                                (PORT_ALT4_FUNC_MODE)         /* PTC11 */
#define    PORT76_FCUART2_CTS                               (PORT_ALT4_FUNC_MODE)         /* PTC12 */
#define    PORT77_FCUART2_RTS                               (PORT_ALT4_FUNC_MODE)         /* PTC13 */
#define    PORT78_FCSPI2_PCS0                               (PORT_ALT4_FUNC_MODE)         /* PTC14 */
#define    PORT79_FCSPI2_SCK                                (PORT_ALT4_FUNC_MODE)         /* PTC15 */
#define    PORT80_FCSPI2_SIN                                (PORT_ALT4_FUNC_MODE)         /* PTC16 */
#define    PORT81_FCSPI2_PCS3                               (PORT_ALT4_FUNC_MODE)         /* PTC17 */
#define    PORT82_FCUART5_RX                                (PORT_ALT4_FUNC_MODE)         /* PTC18 */
#define    PORT83_FCSPI2_PCS1                               (PORT_ALT4_FUNC_MODE)         /* PTC19 */
#define    PORT84_FCSPI2_SCK                                (PORT_ALT4_FUNC_MODE)         /* PTC20 */
#define    PORT85_FCSPI2_SIN                                (PORT_ALT4_FUNC_MODE)         /* PTC21 */
#define    PORT86_FCUART5_RX                                (PORT_ALT4_FUNC_MODE)         /* PTC22 */
#define    PORT87_FCSPI2_SOUT                               (PORT_ALT4_FUNC_MODE)         /* PTC23 */
#define    PORT88_FCSPI2_PCS0                               (PORT_ALT4_FUNC_MODE)         /* PTC24 */
#define    PORT89_FCUART6_TX                                (PORT_ALT4_FUNC_MODE)         /* PTC25 */
#define    PORT90_FCUART6_RX                                (PORT_ALT4_FUNC_MODE)         /* PTC26 */
#define    PORT91_FCSPI4_SOUT                               (PORT_ALT4_FUNC_MODE)         /* PTC27 */
#define    PORT92_FTU3_CH2                                  (PORT_ALT4_FUNC_MODE)         /* PTC28 */
#define    PORT93_FCSPI4_SIN                                (PORT_ALT4_FUNC_MODE)         /* PTC29 */
#define    PORT94_FCSPI4_PCS0                               (PORT_ALT4_FUNC_MODE)         /* PTC30 */
#define    PORT95_FCIIC1_SDA                                (PORT_ALT4_FUNC_MODE)         /* PTC31 */
#define    PORT96_FCSPI1_SCK                                (PORT_ALT4_FUNC_MODE)          /* PTD0 */
#define    PORT97_FCSPI1_SIN                                (PORT_ALT4_FUNC_MODE)          /* PTD1 */
#define    PORT98_FCUART6_RX                                (PORT_ALT4_FUNC_MODE)          /* PTD2 */
#define    PORT100_FCUART6_TX                               (PORT_ALT4_FUNC_MODE)          /* PTD4 */
#define    PORT101_FTU_FLT5                                 (PORT_ALT4_FUNC_MODE)          /* PTD5 */
#define    PORT102_FTU_FLT4                                 (PORT_ALT4_FUNC_MODE)          /* PTD6 */
#define    PORT103_FCSPI4_SIN                               (PORT_ALT4_FUNC_MODE)          /* PTD7 */
#define    PORT104_FCSPI2_PCS2                              (PORT_ALT4_FUNC_MODE)          /* PTD8 */
#define    PORT105_FCSPI2_PCS1                              (PORT_ALT4_FUNC_MODE)          /* PTD9 */
#define    PORT106_SCG_CLKOUT                               (PORT_ALT4_FUNC_MODE)         /* PTD10 */
#define    PORT107_FCSPI4_PCS1                              (PORT_ALT4_FUNC_MODE)         /* PTD11 */
#define    PORT108_FTU6_CH7                                 (PORT_ALT4_FUNC_MODE)         /* PTD12 */
#define    PORT109_TPU_CH11                                 (PORT_ALT4_FUNC_MODE)         /* PTD13 */
#define    PORT111_TPU_CH18                                 (PORT_ALT4_FUNC_MODE)         /* PTD15 */
#define    PORT112_TPU_CH19                                 (PORT_ALT4_FUNC_MODE)         /* PTD16 */
#define    PORT113_FTU_FLT3                                 (PORT_ALT4_FUNC_MODE)         /* PTD17 */
#define    PORT114_FCSPI4_SCK                               (PORT_ALT4_FUNC_MODE)         /* PTD18 */
#define    PORT115_FCIIC1_SCL                               (PORT_ALT4_FUNC_MODE)         /* PTD19 */
#define    PORT116_TPU_CH16                                 (PORT_ALT4_FUNC_MODE)         /* PTD20 */
#define    PORT117_TPU_CH17                                 (PORT_ALT4_FUNC_MODE)         /* PTD21 */
#define    PORT118_TPU_TCRCLK                               (PORT_ALT4_FUNC_MODE)         /* PTD22 */
#define    PORT119_FLEXCAN3_TX                              (PORT_ALT4_FUNC_MODE)         /* PTD23 */
#define    PORT120_FCUART6_RTS                              (PORT_ALT4_FUNC_MODE)         /* PTD24 */
#define    PORT121_FCUART4_RTS                              (PORT_ALT4_FUNC_MODE)         /* PTD25 */
#define    PORT122_FCUART4_CTS                              (PORT_ALT4_FUNC_MODE)         /* PTD26 */
#define    PORT123_FLEXCAN3_RX                              (PORT_ALT4_FUNC_MODE)         /* PTD27 */
#define    PORT127_SENT0_RXD2                               (PORT_ALT4_FUNC_MODE)         /* PTD31 */
#define    PORT128_FCIIC1_SDA                               (PORT_ALT4_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCIIC1_SCL                               (PORT_ALT4_FUNC_MODE)          /* PTE1 */
#define    PORT130_FTU3_CH6                                 (PORT_ALT4_FUNC_MODE)          /* PTE2 */
#define    PORT131_FTU_FLT1                                 (PORT_ALT4_FUNC_MODE)          /* PTE3 */
#define    PORT132_FCSPI1_PCS0                              (PORT_ALT4_FUNC_MODE)          /* PTE4 */
#define    PORT133_FCSPI1_SOUT                              (PORT_ALT4_FUNC_MODE)          /* PTE5 */
#define    PORT134_FTU3_CH7                                 (PORT_ALT4_FUNC_MODE)          /* PTE6 */
#define    PORT135_FTU5_CH6                                 (PORT_ALT4_FUNC_MODE)          /* PTE7 */
#define    PORT136_FCSPI4_SCK                               (PORT_ALT4_FUNC_MODE)          /* PTE8 */
#define    PORT137_TPU_CH17                                 (PORT_ALT4_FUNC_MODE)          /* PTE9 */
#define    PORT138_TPU_CH26                                 (PORT_ALT4_FUNC_MODE)         /* PTE10 */
#define    PORT140_FTU_FLT2                                 (PORT_ALT4_FUNC_MODE)         /* PTE12 */
#define    PORT141_TPU_CH24                                 (PORT_ALT4_FUNC_MODE)         /* PTE13 */
#define    PORT142_FTU_FLT0                                 (PORT_ALT4_FUNC_MODE)         /* PTE14 */
#define    PORT143_TPU_CH30                                 (PORT_ALT4_FUNC_MODE)         /* PTE15 */
#define    PORT144_TPU_CH31                                 (PORT_ALT4_FUNC_MODE)         /* PTE16 */
#define    PORT145_SENT0_RXD0                               (PORT_ALT4_FUNC_MODE)         /* PTE17 */
#define    PORT146_SENT0_RXD1                               (PORT_ALT4_FUNC_MODE)         /* PTE18 */
#define    PORT147_RTC_CLKOUT                               (PORT_ALT4_FUNC_MODE)         /* PTE19 */
#define    PORT148_FTU1_CH3                                 (PORT_ALT4_FUNC_MODE)         /* PTE20 */
#define    PORT149_FLEXCAN0_TX                              (PORT_ALT4_FUNC_MODE)         /* PTE21 */
#define    PORT150_FLEXCAN0_RX                              (PORT_ALT4_FUNC_MODE)         /* PTE22 */
#define    PORT151_TPU_CH26                                 (PORT_ALT4_FUNC_MODE)         /* PTE23 */
#define    PORT152_TPU_CH27                                 (PORT_ALT4_FUNC_MODE)         /* PTE24 */
#define    PORT153_TPU_CH28                                 (PORT_ALT4_FUNC_MODE)         /* PTE25 */
#define    PORT154_FTU1_CH2                                 (PORT_ALT4_FUNC_MODE)         /* PTE26 */
#define    PORT155_FTU1_CH0                                 (PORT_ALT4_FUNC_MODE)         /* PTE27 */
#define    PORT157_FTU1_CH1                                 (PORT_ALT4_FUNC_MODE)         /* PTE29 */
#define    PORT0_TPU_CH1                                    (PORT_ALT5_FUNC_MODE)          /* PTA0 */
#define    PORT1_FTU1_QD_PHB                                (PORT_ALT5_FUNC_MODE)          /* PTA1 */
#define    PORT2_FCSPI5_SOUT                                (PORT_ALT5_FUNC_MODE)          /* PTA2 */
#define    PORT3_FCSPI5_SCK                                 (PORT_ALT5_FUNC_MODE)          /* PTA3 */
#define    PORT4_LP_WAKEUP4                                 (PORT_ALT5_FUNC_MODE)          /* PTA4 */
#define    PORT6_TRGSEL_OUT4                                (PORT_ALT5_FUNC_MODE)          /* PTA6 */
#define    PORT7_FCSPI1_SCK                                 (PORT_ALT5_FUNC_MODE)          /* PTA7 */
#define    PORT8_FTU_FLT21                                  (PORT_ALT5_FUNC_MODE)          /* PTA8 */
#define    PORT9_FTU_FLT20                                  (PORT_ALT5_FUNC_MODE)          /* PTA9 */
#define    PORT10_FCIIC0_SCL                                (PORT_ALT5_FUNC_MODE)         /* PTA10 */
#define    PORT11_FCSPI0_PCS0                               (PORT_ALT5_FUNC_MODE)         /* PTA11 */
#define    PORT12_FCSPI0_SOUT                               (PORT_ALT5_FUNC_MODE)         /* PTA12 */
#define    PORT13_FCUART0_RX                                (PORT_ALT5_FUNC_MODE)         /* PTA13 */
#define    PORT14_FCUART0_TX                                (PORT_ALT5_FUNC_MODE)         /* PTA14 */
#define    PORT15_TRGSEL_OUT0                               (PORT_ALT5_FUNC_MODE)         /* PTA15 */
#define    PORT16_SENT0_RXD1                                (PORT_ALT5_FUNC_MODE)         /* PTA16 */
#define    PORT17_FCSPI5_PCS0                               (PORT_ALT5_FUNC_MODE)         /* PTA17 */
#define    PORT18_TPU_TCRCLK                                (PORT_ALT5_FUNC_MODE)         /* PTA18 */
#define    PORT20_FLEXCAN2_RX                               (PORT_ALT5_FUNC_MODE)         /* PTA20 */
#define    PORT21_FLEXCAN2_TX                               (PORT_ALT5_FUNC_MODE)         /* PTA21 */
#define    PORT25_FCUART2_RX                                (PORT_ALT5_FUNC_MODE)         /* PTA25 */
#define    PORT26_FCSPI1_PCS0                               (PORT_ALT5_FUNC_MODE)         /* PTA26 */
#define    PORT27_FCSPI1_SOUT                               (PORT_ALT5_FUNC_MODE)         /* PTA27 */
#define    PORT28_FCSPI1_SCK                                (PORT_ALT5_FUNC_MODE)         /* PTA28 */
#define    PORT29_FCSPI1_SIN                                (PORT_ALT5_FUNC_MODE)         /* PTA29 */
#define    PORT32_FLEXCAN0_RX                               (PORT_ALT5_FUNC_MODE)          /* PTB0 */
#define    PORT33_FLEXCAN0_TX                               (PORT_ALT5_FUNC_MODE)          /* PTB1 */
#define    PORT35_FTU7_CH3                                  (PORT_ALT5_FUNC_MODE)          /* PTB3 */
#define    PORT36_FTU7_CH6                                  (PORT_ALT5_FUNC_MODE)          /* PTB4 */
#define    PORT37_SCG_CLKOUT                                (PORT_ALT5_FUNC_MODE)          /* PTB5 */
#define    PORT40_TPU_CH0                                   (PORT_ALT5_FUNC_MODE)          /* PTB8 */
#define    PORT41_TRGSEL_OUT1                               (PORT_ALT5_FUNC_MODE)          /* PTB9 */
#define    PORT42_TRGSEL_OUT2                               (PORT_ALT5_FUNC_MODE)         /* PTB10 */
#define    PORT44_TPU_CH26                                  (PORT_ALT5_FUNC_MODE)         /* PTB12 */
#define    PORT45_TPU_CH25                                  (PORT_ALT5_FUNC_MODE)         /* PTB13 */
#define    PORT49_TRGSEL_OUT3                               (PORT_ALT5_FUNC_MODE)         /* PTB17 */
#define    PORT50_FCSPI1_PCS1                               (PORT_ALT5_FUNC_MODE)         /* PTB18 */
#define    PORT54_FTU6_CH6                                  (PORT_ALT5_FUNC_MODE)         /* PTB22 */
#define    PORT55_FTU7_CH7                                  (PORT_ALT5_FUNC_MODE)         /* PTB23 */
#define    PORT57_FTU6_CH7                                  (PORT_ALT5_FUNC_MODE)         /* PTB25 */
#define    PORT59_FCUART5_RTS                               (PORT_ALT5_FUNC_MODE)         /* PTB27 */
#define    PORT60_FCUART5_CTS                               (PORT_ALT5_FUNC_MODE)         /* PTB28 */
#define    PORT61_FTU1_QD_PHB                               (PORT_ALT5_FUNC_MODE)         /* PTB29 */
#define    PORT63_TPU_CH9                                   (PORT_ALT5_FUNC_MODE)         /* PTB31 */
#define    PORT64_FlexCore_TCLK                             (PORT_ALT5_FUNC_MODE)          /* PTC0 */
#define    PORT65_FlexCore_TDI                              (PORT_ALT5_FUNC_MODE)          /* PTC1 */
#define    PORT66_FTU5_CH4                                  (PORT_ALT5_FUNC_MODE)          /* PTC2 */
#define    PORT67_FTU5_CH2                                  (PORT_ALT5_FUNC_MODE)          /* PTC3 */
#define    PORT69_FCIIC0_SDA                                (PORT_ALT5_FUNC_MODE)          /* PTC5 */
#define    PORT70_SENT0_RXD0                                (PORT_ALT5_FUNC_MODE)          /* PTC6 */
#define    PORT72_FCSPI1_SIN                                (PORT_ALT5_FUNC_MODE)          /* PTC8 */
#define    PORT73_FCSPI1_SOUT                               (PORT_ALT5_FUNC_MODE)          /* PTC9 */
#define    PORT75_FCSPI1_PCS0                               (PORT_ALT5_FUNC_MODE)         /* PTC11 */
#define    PORT76_TRGSEL_OUT5                               (PORT_ALT5_FUNC_MODE)         /* PTC12 */
#define    PORT77_TRGSEL_OUT6                               (PORT_ALT5_FUNC_MODE)         /* PTC13 */
#define    PORT78_FTU1_QD_PHA                               (PORT_ALT5_FUNC_MODE)         /* PTC14 */
#define    PORT79_FTU6_CH1                                  (PORT_ALT5_FUNC_MODE)         /* PTC15 */
#define    PORT80_FTU7_CH4                                  (PORT_ALT5_FUNC_MODE)         /* PTC16 */
#define    PORT81_FTU6_CH2                                  (PORT_ALT5_FUNC_MODE)         /* PTC17 */
#define    PORT82_TPU_CH10                                  (PORT_ALT5_FUNC_MODE)         /* PTC18 */
#define    PORT83_TPU_CH17                                  (PORT_ALT5_FUNC_MODE)         /* PTC19 */
#define    PORT84_FCUART3_RTS                               (PORT_ALT5_FUNC_MODE)         /* PTC20 */
#define    PORT85_FCUART3_CTS                               (PORT_ALT5_FUNC_MODE)         /* PTC21 */
#define    PORT86_FTU7_CH6                                  (PORT_ALT5_FUNC_MODE)         /* PTC22 */
#define    PORT89_FTU0_CH6                                  (PORT_ALT5_FUNC_MODE)         /* PTC25 */
#define    PORT90_FTU1_CH4                                  (PORT_ALT5_FUNC_MODE)         /* PTC26 */
#define    PORT95_FLEXCAN1_RX                               (PORT_ALT5_FUNC_MODE)         /* PTC31 */
#define    PORT96_TPU_CH28                                  (PORT_ALT5_FUNC_MODE)          /* PTD0 */
#define    PORT97_TPU_CH29                                  (PORT_ALT5_FUNC_MODE)          /* PTD1 */
#define    PORT98_FCSPI5_PCS2                               (PORT_ALT5_FUNC_MODE)          /* PTD2 */
#define    PORT99_FCSPI5_PCS0                               (PORT_ALT5_FUNC_MODE)          /* PTD3 */
#define    PORT100_FCSPI5_SIN                               (PORT_ALT5_FUNC_MODE)          /* PTD4 */
#define    PORT101_FTU7_CH5                                 (PORT_ALT5_FUNC_MODE)          /* PTD5 */
#define    PORT102_FTU2_CH4                                 (PORT_ALT5_FUNC_MODE)          /* PTD6 */
#define    PORT103_FTU2_CH5                                 (PORT_ALT5_FUNC_MODE)          /* PTD7 */
#define    PORT104_FlexCore_TRST                            (PORT_ALT5_FUNC_MODE)          /* PTD8 */
#define    PORT105_FlexCore_TDO                             (PORT_ALT5_FUNC_MODE)          /* PTD9 */
#define    PORT106_FlexCore_TMS                             (PORT_ALT5_FUNC_MODE)         /* PTD10 */
#define    PORT107_FCUART2_CTS                              (PORT_ALT5_FUNC_MODE)         /* PTD11 */
#define    PORT108_FCUART2_RTS                              (PORT_ALT5_FUNC_MODE)         /* PTD12 */
#define    PORT115_FLEXCAN1_TX                              (PORT_ALT5_FUNC_MODE)         /* PTD19 */
#define    PORT118_FCSPI5_PCS3                              (PORT_ALT5_FUNC_MODE)         /* PTD22 */
#define    PORT119_TPU_CH27                                 (PORT_ALT5_FUNC_MODE)         /* PTD23 */
#define    PORT120_FCSPI5_PCS1                              (PORT_ALT5_FUNC_MODE)         /* PTD24 */
#define    PORT122_SENT0_RXD3                               (PORT_ALT5_FUNC_MODE)         /* PTD26 */
#define    PORT127_FCUART7_RX                               (PORT_ALT5_FUNC_MODE)         /* PTD31 */
#define    PORT128_FCSPI0_SCK                               (PORT_ALT5_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCSPI0_SIN                               (PORT_ALT5_FUNC_MODE)          /* PTE1 */
#define    PORT130_SENT0_RXD3                               (PORT_ALT5_FUNC_MODE)          /* PTE2 */
#define    PORT131_FTU2_QD_PHB                              (PORT_ALT5_FUNC_MODE)          /* PTE3 */
#define    PORT132_FTU2_CH2                                 (PORT_ALT5_FUNC_MODE)          /* PTE4 */
#define    PORT133_FTU2_CH3                                 (PORT_ALT5_FUNC_MODE)          /* PTE5 */
#define    PORT134_SENT0_RXD2                               (PORT_ALT5_FUNC_MODE)          /* PTE6 */
#define    PORT135_TRGSEL_OUT3                              (PORT_ALT5_FUNC_MODE)          /* PTE7 */
#define    PORT136_FTU7_CH7                                 (PORT_ALT5_FUNC_MODE)          /* PTE8 */
#define    PORT138_FCUART2_TX                               (PORT_ALT5_FUNC_MODE)         /* PTE10 */
#define    PORT139_TPU_CH27                                 (PORT_ALT5_FUNC_MODE)         /* PTE11 */
#define    PORT141_FTU3_CH3                                 (PORT_ALT5_FUNC_MODE)         /* PTE13 */
#define    PORT142_FLEXCAN0_RX                              (PORT_ALT5_FUNC_MODE)         /* PTE14 */
#define    PORT146_FCUART7_TX                               (PORT_ALT5_FUNC_MODE)         /* PTE18 */
#define    PORT147_FLEXCAN2_RX                              (PORT_ALT5_FUNC_MODE)         /* PTE19 */
#define    PORT148_FCSPI0_PCS0                              (PORT_ALT5_FUNC_MODE)         /* PTE20 */
#define    PORT149_FCUART0_RTS                              (PORT_ALT5_FUNC_MODE)         /* PTE21 */
#define    PORT150_FCUART0_CTS                              (PORT_ALT5_FUNC_MODE)         /* PTE22 */
#define    PORT151_FCSPI0_PCS3                              (PORT_ALT5_FUNC_MODE)         /* PTE23 */
#define    PORT152_FCSPI0_PCS2                              (PORT_ALT5_FUNC_MODE)         /* PTE24 */
#define    PORT153_FCSPI0_PCS1                              (PORT_ALT5_FUNC_MODE)         /* PTE25 */
#define    PORT154_FCUART1_TX                               (PORT_ALT5_FUNC_MODE)         /* PTE26 */
#define    PORT155_FCUART1_RX                               (PORT_ALT5_FUNC_MODE)         /* PTE27 */
#define    PORT157_FLEXCAN2_TX                              (PORT_ALT5_FUNC_MODE)         /* PTE29 */
#define    PORT0_FCUART0_CTS                                (PORT_ALT6_FUNC_MODE)          /* PTA0 */
#define    PORT1_FCUART0_RTS                                (PORT_ALT6_FUNC_MODE)          /* PTA1 */
#define    PORT2_FCUART0_RX                                 (PORT_ALT6_FUNC_MODE)          /* PTA2 */
#define    PORT3_FCUART0_TX                                 (PORT_ALT6_FUNC_MODE)          /* PTA3 */
#define    PORT6_FCUART1_CTS                                (PORT_ALT6_FUNC_MODE)          /* PTA6 */
#define    PORT7_FCUART1_RTS                                (PORT_ALT6_FUNC_MODE)          /* PTA7 */
#define    PORT8_FCUART0_RX                                 (PORT_ALT6_FUNC_MODE)          /* PTA8 */
#define    PORT9_FCUART0_TX                                 (PORT_ALT6_FUNC_MODE)          /* PTA9 */
#define    PORT12_FTU1_QD_PHB                               (PORT_ALT6_FUNC_MODE)         /* PTA12 */
#define    PORT13_FTU1_QD_PHA                               (PORT_ALT6_FUNC_MODE)         /* PTA13 */
#define    PORT14_TPU_CH7                                   (PORT_ALT6_FUNC_MODE)         /* PTA14 */
#define    PORT15_FLEXCAN3_RX                               (PORT_ALT6_FUNC_MODE)         /* PTA15 */
#define    PORT16_FLEXCAN3_TX                               (PORT_ALT6_FUNC_MODE)         /* PTA16 */
#define    PORT17_FTU_FLT15                                 (PORT_ALT6_FUNC_MODE)         /* PTA17 */
#define    PORT18_FCSPI4_PCS1                               (PORT_ALT6_FUNC_MODE)         /* PTA18 */
#define    PORT19_FCSPI4_PCS2                               (PORT_ALT6_FUNC_MODE)         /* PTA19 */
#define    PORT20_FCSPI4_PCS3                               (PORT_ALT6_FUNC_MODE)         /* PTA20 */
#define    PORT23_FCSPI4_SCK                                (PORT_ALT6_FUNC_MODE)         /* PTA23 */
#define    PORT24_FCSPI4_SIN                                (PORT_ALT6_FUNC_MODE)         /* PTA24 */
#define    PORT25_TPU_TCRCLK                                (PORT_ALT6_FUNC_MODE)         /* PTA25 */
#define    PORT31_TPU_CH8                                   (PORT_ALT6_FUNC_MODE)         /* PTA31 */
#define    PORT32_FTU4_CH6                                  (PORT_ALT6_FUNC_MODE)          /* PTB0 */
#define    PORT33_FTU4_CH5                                  (PORT_ALT6_FUNC_MODE)          /* PTB1 */
#define    PORT35_TPU_CH10                                  (PORT_ALT6_FUNC_MODE)          /* PTB3 */
#define    PORT36_TRACE_D6                                  (PORT_ALT6_FUNC_MODE)          /* PTB4 */
#define    PORT37_TRACE_D5                                  (PORT_ALT6_FUNC_MODE)          /* PTB5 */
#define    PORT40_FCUART1_CTS                               (PORT_ALT6_FUNC_MODE)          /* PTB8 */
#define    PORT41_TPU_CH29                                  (PORT_ALT6_FUNC_MODE)          /* PTB9 */
#define    PORT42_TPU_CH0                                   (PORT_ALT6_FUNC_MODE)         /* PTB10 */
#define    PORT46_FTU5_CH4                                  (PORT_ALT6_FUNC_MODE)         /* PTB14 */
#define    PORT47_FTU5_CH5                                  (PORT_ALT6_FUNC_MODE)         /* PTB15 */
#define    PORT48_FTU5_CH6                                  (PORT_ALT6_FUNC_MODE)         /* PTB16 */
#define    PORT49_FTU5_CH7                                  (PORT_ALT6_FUNC_MODE)         /* PTB17 */
#define    PORT50_TPU_CH9                                   (PORT_ALT6_FUNC_MODE)         /* PTB18 */
#define    PORT51_TPU_CH5                                   (PORT_ALT6_FUNC_MODE)         /* PTB19 */
#define    PORT52_TPU_CH10                                  (PORT_ALT6_FUNC_MODE)         /* PTB20 */
#define    PORT53_TPU_CH11                                  (PORT_ALT6_FUNC_MODE)         /* PTB21 */
#define    PORT54_MSC0_EN0                                  (PORT_ALT6_FUNC_MODE)         /* PTB22 */
#define    PORT55_TPU_CH13                                  (PORT_ALT6_FUNC_MODE)         /* PTB23 */
#define    PORT56_TPU_CH6                                   (PORT_ALT6_FUNC_MODE)         /* PTB24 */
#define    PORT57_FCUART3_TX                                (PORT_ALT6_FUNC_MODE)         /* PTB25 */
#define    PORT58_TPU_CH7                                   (PORT_ALT6_FUNC_MODE)         /* PTB26 */
#define    PORT59_TPU_CH14                                  (PORT_ALT6_FUNC_MODE)         /* PTB27 */
#define    PORT60_TPU_CH15                                  (PORT_ALT6_FUNC_MODE)         /* PTB28 */
#define    PORT61_FCUART7_RTS                               (PORT_ALT6_FUNC_MODE)         /* PTB29 */
#define    PORT62_TPU_CH8                                   (PORT_ALT6_FUNC_MODE)         /* PTB30 */
#define    PORT64_FTU1_CH6                                  (PORT_ALT6_FUNC_MODE)          /* PTC0 */
#define    PORT65_FTU1_CH7                                  (PORT_ALT6_FUNC_MODE)          /* PTC1 */
#define    PORT66_TRACE_CLKOUT                              (PORT_ALT6_FUNC_MODE)          /* PTC2 */
#define    PORT67_TRACE_D7                                  (PORT_ALT6_FUNC_MODE)          /* PTC3 */
#define    PORT69_FTU2_QD_PHB                               (PORT_ALT6_FUNC_MODE)          /* PTC5 */
#define    PORT70_TPU_CH3                                   (PORT_ALT6_FUNC_MODE)          /* PTC6 */
#define    PORT71_TPU_CH2                                   (PORT_ALT6_FUNC_MODE)          /* PTC7 */
#define    PORT72_FCUART0_CTS                               (PORT_ALT6_FUNC_MODE)          /* PTC8 */
#define    PORT73_FCUART0_RTS                               (PORT_ALT6_FUNC_MODE)          /* PTC9 */
#define    PORT74_FTU7_CH1                                  (PORT_ALT6_FUNC_MODE)         /* PTC10 */
#define    PORT75_FTU7_CH2                                  (PORT_ALT6_FUNC_MODE)         /* PTC11 */
#define    PORT76_FCUART7_RX                                (PORT_ALT6_FUNC_MODE)         /* PTC12 */
#define    PORT77_FCUART7_TX                                (PORT_ALT6_FUNC_MODE)         /* PTC13 */
#define    PORT78_TRGSEL_OUT6                               (PORT_ALT6_FUNC_MODE)         /* PTC14 */
#define    PORT79_TRGSEL_OUT7                               (PORT_ALT6_FUNC_MODE)         /* PTC15 */
#define    PORT80_TPU_CH13                                  (PORT_ALT6_FUNC_MODE)         /* PTC16 */
#define    PORT81_TPU_CH14                                  (PORT_ALT6_FUNC_MODE)         /* PTC17 */
#define    PORT83_FCUART3_RX                                (PORT_ALT6_FUNC_MODE)         /* PTC19 */
#define    PORT84_TPU_CH12                                  (PORT_ALT6_FUNC_MODE)         /* PTC20 */
#define    PORT85_TPU_CH13                                  (PORT_ALT6_FUNC_MODE)         /* PTC21 */
#define    PORT86_TPU_CH18                                  (PORT_ALT6_FUNC_MODE)         /* PTC22 */
#define    PORT87_TPU_CH14                                  (PORT_ALT6_FUNC_MODE)         /* PTC23 */
#define    PORT88_TPU_CH15                                  (PORT_ALT6_FUNC_MODE)         /* PTC24 */
#define    PORT89_SENT0_RXD0                                (PORT_ALT6_FUNC_MODE)         /* PTC25 */
#define    PORT90_SENT0_RXD1                                (PORT_ALT6_FUNC_MODE)         /* PTC26 */
#define    PORT91_TPU_CH19                                  (PORT_ALT6_FUNC_MODE)         /* PTC27 */
#define    PORT92_TPU_CH20                                  (PORT_ALT6_FUNC_MODE)         /* PTC28 */
#define    PORT93_TPU_CH21                                  (PORT_ALT6_FUNC_MODE)         /* PTC29 */
#define    PORT94_TPU_CH22                                  (PORT_ALT6_FUNC_MODE)         /* PTC30 */
#define    PORT95_TPU_CH23                                  (PORT_ALT6_FUNC_MODE)         /* PTC31 */
#define    PORT96_TRACE_D0                                  (PORT_ALT6_FUNC_MODE)          /* PTD0 */
#define    PORT98_FTU1_CH1                                  (PORT_ALT6_FUNC_MODE)          /* PTD2 */
#define    PORT99_FTU1_CH2                                  (PORT_ALT6_FUNC_MODE)          /* PTD3 */
#define    PORT100_FTU1_CH3                                 (PORT_ALT6_FUNC_MODE)          /* PTD4 */
#define    PORT101_TPU_CH20                                 (PORT_ALT6_FUNC_MODE)          /* PTD5 */
#define    PORT102_TPU_CH21                                 (PORT_ALT6_FUNC_MODE)          /* PTD6 */
#define    PORT103_TRACE_D0                                 (PORT_ALT6_FUNC_MODE)          /* PTD7 */
#define    PORT104_FTU1_CH4                                 (PORT_ALT6_FUNC_MODE)          /* PTD8 */
#define    PORT105_FTU1_CH5                                 (PORT_ALT6_FUNC_MODE)          /* PTD9 */
#define    PORT106_TRACE_D3                                 (PORT_ALT6_FUNC_MODE)         /* PTD10 */
#define    PORT107_TRACE_D2                                 (PORT_ALT6_FUNC_MODE)         /* PTD11 */
#define    PORT108_TRACE_D1                                 (PORT_ALT6_FUNC_MODE)         /* PTD12 */
#define    PORT109_FCUART7_CTS                              (PORT_ALT6_FUNC_MODE)         /* PTD13 */
#define    PORT111_TRACE_D3                                 (PORT_ALT6_FUNC_MODE)         /* PTD15 */
#define    PORT112_TRACE_D2                                 (PORT_ALT6_FUNC_MODE)         /* PTD16 */
#define    PORT113_FCSPI4_PCS0                              (PORT_ALT6_FUNC_MODE)         /* PTD17 */
#define    PORT114_TPU_CH24                                 (PORT_ALT6_FUNC_MODE)         /* PTD18 */
#define    PORT115_SENT0_RXD2                               (PORT_ALT6_FUNC_MODE)         /* PTD19 */
#define    PORT116_SENT0_RXD2                               (PORT_ALT6_FUNC_MODE)         /* PTD20 */
#define    PORT117_SENT0_RXD3                               (PORT_ALT6_FUNC_MODE)         /* PTD21 */
#define    PORT118_FLEXCAN1_RX                              (PORT_ALT6_FUNC_MODE)         /* PTD22 */
#define    PORT119_FTU1_CH0                                 (PORT_ALT6_FUNC_MODE)         /* PTD23 */
#define    PORT120_FLEXCAN1_TX                              (PORT_ALT6_FUNC_MODE)         /* PTD24 */
#define    PORT121_TPU_CH18                                 (PORT_ALT6_FUNC_MODE)         /* PTD25 */
#define    PORT122_TPU_CH19                                 (PORT_ALT6_FUNC_MODE)         /* PTD26 */
#define    PORT123_TPU_CH30                                 (PORT_ALT6_FUNC_MODE)         /* PTD27 */
#define    PORT124_TPU_CH31                                 (PORT_ALT6_FUNC_MODE)         /* PTD28 */
#define    PORT125_TPU_CH14                                 (PORT_ALT6_FUNC_MODE)         /* PTD29 */
#define    PORT126_TPU_CH15                                 (PORT_ALT6_FUNC_MODE)         /* PTD30 */
#define    PORT127_TPU_CH20                                 (PORT_ALT6_FUNC_MODE)         /* PTD31 */
#define    PORT128_FTU_FLT19                                (PORT_ALT6_FUNC_MODE)          /* PTE0 */
#define    PORT129_FTU_FLT18                                (PORT_ALT6_FUNC_MODE)          /* PTE1 */
#define    PORT130_FCUART1_CTS                              (PORT_ALT6_FUNC_MODE)          /* PTE2 */
#define    PORT131_FTU_TCK0                                 (PORT_ALT6_FUNC_MODE)          /* PTE3 */
#define    PORT132_TRACE_D1                                 (PORT_ALT6_FUNC_MODE)          /* PTE4 */
#define    PORT133_TPU_CH23                                 (PORT_ALT6_FUNC_MODE)          /* PTE5 */
#define    PORT134_FCUART1_RTS                              (PORT_ALT6_FUNC_MODE)          /* PTE6 */
#define    PORT135_SENT0_RXD3                               (PORT_ALT6_FUNC_MODE)          /* PTE7 */
#define    PORT136_TRACE_D4                                 (PORT_ALT6_FUNC_MODE)          /* PTE8 */
#define    PORT137_TRACE_CLKOUT                             (PORT_ALT6_FUNC_MODE)          /* PTE9 */
#define    PORT138_SCG_CLKOUT                               (PORT_ALT6_FUNC_MODE)         /* PTE10 */
#define    PORT140_FCSPI4_SOUT                              (PORT_ALT6_FUNC_MODE)         /* PTE12 */
#define    PORT142_TPU_TCRCLK                               (PORT_ALT6_FUNC_MODE)         /* PTE14 */
#define    PORT143_FCUART1_CTS                              (PORT_ALT6_FUNC_MODE)         /* PTE15 */
#define    PORT144_FCUART1_RTS                              (PORT_ALT6_FUNC_MODE)         /* PTE16 */
#define    PORT145_TPU_CH21                                 (PORT_ALT6_FUNC_MODE)         /* PTE17 */
#define    PORT146_TPU_CH22                                 (PORT_ALT6_FUNC_MODE)         /* PTE18 */
#define    PORT147_TPU_CH31                                 (PORT_ALT6_FUNC_MODE)         /* PTE19 */
#define    PORT151_LP_WAKEUP1                               (PORT_ALT6_FUNC_MODE)         /* PTE23 */
#define    PORT154_TPU_CH23                                 (PORT_ALT6_FUNC_MODE)         /* PTE26 */
#define    PORT155_TPU_CH24                                 (PORT_ALT6_FUNC_MODE)         /* PTE27 */
#define    PORT157_FTU2_QD_PHA                              (PORT_ALT6_FUNC_MODE)         /* PTE29 */
#define    PORT0_TRGSEL_OUT3                                (PORT_ALT7_FUNC_MODE)          /* PTA0 */
#define    PORT1_TRGSEL_OUT0                                (PORT_ALT7_FUNC_MODE)          /* PTA1 */
#define    PORT4_JTAG_TMS_SWD_DIO                           (PORT_ALT7_FUNC_MODE)          /* PTA4 */
#define    PORT6_FTU4_CH7                                   (PORT_ALT7_FUNC_MODE)          /* PTA6 */
#define    PORT7_MSC0_EN0                                   (PORT_ALT7_FUNC_MODE)          /* PTA7 */
#define    PORT8_TPU_CH13                                   (PORT_ALT7_FUNC_MODE)          /* PTA8 */
#define    PORT9_TPU_CH12                                   (PORT_ALT7_FUNC_MODE)          /* PTA9 */
#define    PORT10_JTAG_TDO                                  (PORT_ALT7_FUNC_MODE)         /* PTA10 */
#define    PORT11_NMI_b                                     (PORT_ALT7_FUNC_MODE)         /* PTA11 */
#define    PORT12_TPU_CH9                                   (PORT_ALT7_FUNC_MODE)         /* PTA12 */
#define    PORT13_TPU_CH8                                   (PORT_ALT7_FUNC_MODE)         /* PTA13 */
#define    PORT15_TPU_CH5                                   (PORT_ALT7_FUNC_MODE)         /* PTA15 */
#define    PORT16_TPU_CH4                                   (PORT_ALT7_FUNC_MODE)         /* PTA16 */
#define    PORT17_FCUART3_RX                                (PORT_ALT7_FUNC_MODE)         /* PTA17 */
#define    PORT25_TPU_CH0                                   (PORT_ALT7_FUNC_MODE)         /* PTA25 */
#define    PORT26_TPU_CH1                                   (PORT_ALT7_FUNC_MODE)         /* PTA26 */
#define    PORT27_TPU_CH2                                   (PORT_ALT7_FUNC_MODE)         /* PTA27 */
#define    PORT28_TPU_CH4                                   (PORT_ALT7_FUNC_MODE)         /* PTA28 */
#define    PORT29_TPU_CH6                                   (PORT_ALT7_FUNC_MODE)         /* PTA29 */
#define    PORT30_TPU_CH7                                   (PORT_ALT7_FUNC_MODE)         /* PTA30 */
#define    PORT31_FCSPI0_PCS1                               (PORT_ALT7_FUNC_MODE)         /* PTA31 */
#define    PORT32_MSC0_SDI1                                 (PORT_ALT7_FUNC_MODE)          /* PTB0 */
#define    PORT33_MSC0_EN1                                  (PORT_ALT7_FUNC_MODE)          /* PTB1 */
#define    PORT35_FCUART5_RX                                (PORT_ALT7_FUNC_MODE)          /* PTB3 */
#define    PORT36_TRGSEL_OUT4                               (PORT_ALT7_FUNC_MODE)          /* PTB4 */
#define    PORT37_TRGSEL_OUT5                               (PORT_ALT7_FUNC_MODE)          /* PTB5 */
#define    PORT41_FCSPI5_PCS0                               (PORT_ALT7_FUNC_MODE)          /* PTB9 */
#define    PORT42_TPU_TCRCLK                                (PORT_ALT7_FUNC_MODE)         /* PTB10 */
#define    PORT44_FCSMU_PIN0                                (PORT_ALT7_FUNC_MODE)         /* PTB12 */
#define    PORT45_FCSMU_PIN1                                (PORT_ALT7_FUNC_MODE)         /* PTB13 */
#define    PORT46_FLEXCAN2_RX                               (PORT_ALT7_FUNC_MODE)         /* PTB14 */
#define    PORT47_FLEXCAN2_TX                               (PORT_ALT7_FUNC_MODE)         /* PTB15 */
#define    PORT49_FCUART3_TX                                (PORT_ALT7_FUNC_MODE)         /* PTB17 */
#define    PORT52_SCG_CLKOUT                                (PORT_ALT7_FUNC_MODE)         /* PTB20 */
#define    PORT54_FCSPI3_PCS1                               (PORT_ALT7_FUNC_MODE)         /* PTB22 */
#define    PORT55_MSC0_FCLP                                 (PORT_ALT7_FUNC_MODE)         /* PTB23 */
#define    PORT61_TPU_CH16                                  (PORT_ALT7_FUNC_MODE)         /* PTB29 */
#define    PORT64_FCSPI3_PCS2                               (PORT_ALT7_FUNC_MODE)          /* PTC0 */
#define    PORT65_FCUART3_TX                                (PORT_ALT7_FUNC_MODE)          /* PTC1 */
#define    PORT66_FCSPI0_PCS2                               (PORT_ALT7_FUNC_MODE)          /* PTC2 */
#define    PORT67_FCSPI0_SOUT                               (PORT_ALT7_FUNC_MODE)          /* PTC3 */
#define    PORT68_JTAG_TCLK_SWD_CLK                         (PORT_ALT7_FUNC_MODE)          /* PTC4 */
#define    PORT69_JTAG_TDI                                  (PORT_ALT7_FUNC_MODE)          /* PTC5 */
#define    PORT72_MSC0_EN1                                  (PORT_ALT7_FUNC_MODE)          /* PTC8 */
#define    PORT73_FCUART5_TX                                (PORT_ALT7_FUNC_MODE)          /* PTC9 */
#define    PORT74_TPU_CH8                                   (PORT_ALT7_FUNC_MODE)         /* PTC10 */
#define    PORT75_TPU_CH9                                   (PORT_ALT7_FUNC_MODE)         /* PTC11 */
#define    PORT76_MSC0_SOP                                  (PORT_ALT7_FUNC_MODE)         /* PTC12 */
#define    PORT77_MSC0_FCLP                                 (PORT_ALT7_FUNC_MODE)         /* PTC13 */
#define    PORT79_FCUART5_TX                                (PORT_ALT7_FUNC_MODE)         /* PTC15 */
#define    PORT80_FCUART5_RX                                (PORT_ALT7_FUNC_MODE)         /* PTC16 */
#define    PORT81_FCUART4_TX                                (PORT_ALT7_FUNC_MODE)         /* PTC17 */
#define    PORT84_MSC0_FCLP                                 (PORT_ALT7_FUNC_MODE)         /* PTC20 */
#define    PORT85_MSC0_SOP                                  (PORT_ALT7_FUNC_MODE)         /* PTC21 */
#define    PORT86_MSC0_EN2                                  (PORT_ALT7_FUNC_MODE)         /* PTC22 */
#define    PORT87_MSC0_EN3                                  (PORT_ALT7_FUNC_MODE)         /* PTC23 */
#define    PORT88_MSC0_SDI2                                 (PORT_ALT7_FUNC_MODE)         /* PTC24 */
#define    PORT89_FCSPI4_SCK                                (PORT_ALT7_FUNC_MODE)         /* PTC25 */
#define    PORT90_FCSPI4_PCS0                               (PORT_ALT7_FUNC_MODE)         /* PTC26 */
#define    PORT91_MSC0_EN0                                  (PORT_ALT7_FUNC_MODE)         /* PTC27 */
#define    PORT92_MSC0_SDI0                                 (PORT_ALT7_FUNC_MODE)         /* PTC28 */
#define    PORT96_TRGSEL_OUT1                               (PORT_ALT7_FUNC_MODE)          /* PTD0 */
#define    PORT97_TRGSEL_OUT2                               (PORT_ALT7_FUNC_MODE)          /* PTD1 */
#define    PORT98_ISP_EN_B                                  (PORT_ALT7_FUNC_MODE)          /* PTD2 */
#define    PORT99_TPU_CH3                                   (PORT_ALT7_FUNC_MODE)          /* PTD3 */
#define    PORT100_TPU_CH4                                  (PORT_ALT7_FUNC_MODE)          /* PTD4 */
#define    PORT101_FCSPI3_SIN                               (PORT_ALT7_FUNC_MODE)          /* PTD5 */
#define    PORT102_FCSPI3_SCK                               (PORT_ALT7_FUNC_MODE)          /* PTD6 */
#define    PORT104_FCUART4_RX                               (PORT_ALT7_FUNC_MODE)          /* PTD8 */
#define    PORT105_FCUART3_RX                               (PORT_ALT7_FUNC_MODE)          /* PTD9 */
#define    PORT106_FCSPI3_PCS3                              (PORT_ALT7_FUNC_MODE)         /* PTD10 */
#define    PORT107_FCSPI3_PCS0                              (PORT_ALT7_FUNC_MODE)         /* PTD11 */
#define    PORT108_FCSPI3_SOUT                              (PORT_ALT7_FUNC_MODE)         /* PTD12 */
#define    PORT109_MSC0_SOP                                 (PORT_ALT7_FUNC_MODE)         /* PTD13 */
#define    PORT111_FCSPI0_SCK                               (PORT_ALT7_FUNC_MODE)         /* PTD15 */
#define    PORT112_FCSPI0_SIN                               (PORT_ALT7_FUNC_MODE)         /* PTD16 */
#define    PORT113_TPU_CH5                                  (PORT_ALT7_FUNC_MODE)         /* PTD17 */
#define    PORT116_FCSPI4_SIN                               (PORT_ALT7_FUNC_MODE)         /* PTD20 */
#define    PORT117_FCSPI4_SOUT                              (PORT_ALT7_FUNC_MODE)         /* PTD21 */
#define    PORT121_FCSPI5_SCK                               (PORT_ALT7_FUNC_MODE)         /* PTD25 */
#define    PORT122_FCSPI5_SIN                               (PORT_ALT7_FUNC_MODE)         /* PTD26 */
#define    PORT124_FCSPI5_PCS1                              (PORT_ALT7_FUNC_MODE)         /* PTD28 */
#define    PORT127_FCSPI5_PCS2                              (PORT_ALT7_FUNC_MODE)         /* PTD31 */
#define    PORT128_TPU_CH11                                 (PORT_ALT7_FUNC_MODE)          /* PTE0 */
#define    PORT129_TPU_CH10                                 (PORT_ALT7_FUNC_MODE)          /* PTE1 */
#define    PORT130_FTU1_CH7                                 (PORT_ALT7_FUNC_MODE)          /* PTE2 */
#define    PORT132_TPU_CH22                                 (PORT_ALT7_FUNC_MODE)          /* PTE4 */
#define    PORT134_TPU_CH6                                  (PORT_ALT7_FUNC_MODE)          /* PTE6 */
#define    PORT135_MSC0_SDI3                                (PORT_ALT7_FUNC_MODE)          /* PTE7 */
#define    PORT136_FCSPI0_PCS3                              (PORT_ALT7_FUNC_MODE)          /* PTE8 */
#define    PORT137_FCSPI0_PCS0                              (PORT_ALT7_FUNC_MODE)          /* PTE9 */
#define    PORT138_TRGSEL_OUT4                              (PORT_ALT7_FUNC_MODE)         /* PTE10 */
#define    PORT139_TRGSEL_OUT5                              (PORT_ALT7_FUNC_MODE)         /* PTE11 */
#define    PORT140_TPU_CH3                                  (PORT_ALT7_FUNC_MODE)         /* PTE12 */
#define    PORT143_TRGSEL_OUT6                              (PORT_ALT7_FUNC_MODE)         /* PTE15 */
#define    PORT144_TRGSEL_OUT7                              (PORT_ALT7_FUNC_MODE)         /* PTE16 */
#define    PORT145_FCSPI5_SOUT                              (PORT_ALT7_FUNC_MODE)         /* PTE17 */
#define    PORT146_FCSPI5_PCS3                              (PORT_ALT7_FUNC_MODE)         /* PTE18 */
#define    PORT157_TPU_CH25                                 (PORT_ALT7_FUNC_MODE)         /* PTE29 */




/**
* @brief Enable/Disable Development Error Detection
*
* @implements   PORT_DEV_ERROR_DETECT_define
*/
#define PORT_DEV_ERROR_DETECT           (STD_ON)

/**
* @brief Use/remove Port_SetPinDirection function from the compiled driver
*
* @implements   PORT_SET_PIN_DIRECTION_API_define
*/
#define PORT_SET_PIN_DIRECTION_API      (STD_ON)

/**
* @brief Use/remove Port_SetPinMode function from the compiled driver
*
* @implements   PORT_SET_PIN_MODE_API_define
*/
#define PORT_SET_PIN_MODE_API           (STD_ON)

/**
* @brief  Enable /disable the configuration of Jtag and reset Pins(PTA4,PTA5,PTA10，PTC4,PTC5)
*
* @implements   
*/
#define PORT_FREEZE_JTAG_PINS           (STD_ON)

/**
* @brief Use/remove Port_GetVersionInfo function from the compiled driver
*
* @implements   PORT_VERSION_INFO_API_define
*/
#define PORT_VERSION_INFO_API           (STD_ON)

/**
* @brief Port Pin symbolic names
* @details Get All Symbolic Names from configuration tool
*
*/
/* PRQA S 0791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct 
 * Reason: These macros have the same first 30 characters,but they are differrent in follow characters.Modern compiler will recognize the difference. */
#define PortConf_PortContainer_3_KEY2  (Port_PinType)96
#define PortConf_PortContainer_3_PortPin_1  (Port_PinType)97
#define PortConf_PortContainer_3_RGB1_G  (Port_PinType)98
#define PortConf_PortContainer_3_PortPin_3  (Port_PinType)99
#define PortConf_PortContainer_3_PortPin_4  (Port_PinType)100
#define PortConf_PortContainer_3_PortPin_5  (Port_PinType)101
#define PortConf_PortContainer_3_PortPin_6  (Port_PinType)102
#define PortConf_PortContainer_3_PortPin_7  (Port_PinType)103
#define PortConf_PortContainer_3_PortPin_8  (Port_PinType)104
#define PortConf_PortContainer_3_PortPin_9  (Port_PinType)105
#define PortConf_PortContainer_3_PortPin_10  (Port_PinType)106
#define PortConf_PortContainer_3_PortPin_11  (Port_PinType)107
#define PortConf_PortContainer_3_PortPin_12  (Port_PinType)108
#define PortConf_PortContainer_3_PortPin_13  (Port_PinType)109
#define PortConf_PortContainer_3_PortPin_14  (Port_PinType)111
#define PortConf_PortContainer_3_PortPin_15  (Port_PinType)112
#define PortConf_PortContainer_3_PortPin_16  (Port_PinType)113
#define PortConf_PortContainer_3_LIN1_EN  (Port_PinType)114
#define PortConf_PortContainer_3_LIN2_EN  (Port_PinType)115
#define PortConf_PortContainer_3_PortPin_19  (Port_PinType)116
#define PortConf_PortContainer_3_PortPin_20  (Port_PinType)117
#define PortConf_PortContainer_3_PortPin_21  (Port_PinType)118
#define PortConf_PortContainer_3_PortPin_22  (Port_PinType)119
#define PortConf_PortContainer_3_PortPin_23  (Port_PinType)120
#define PortConf_PortContainer_3_PortPin_24  (Port_PinType)121
#define PortConf_PortContainer_3_PortPin_25  (Port_PinType)122
#define PortConf_PortContainer_3_PortPin_26  (Port_PinType)123
#define PortConf_PortContainer_3_PortPin_27  (Port_PinType)124
#define PortConf_PortContainer_3_PortPin_28  (Port_PinType)125
#define PortConf_PortContainer_3_PortPin_29  (Port_PinType)126
#define PortConf_PortContainer_3_PortPin_30  (Port_PinType)127
#define PortConf_PortContainer_1_PortPin_0  (Port_PinType)128
#define PortConf_PortContainer_1_PortPin_1  (Port_PinType)129
#define PortConf_PortContainer_1_RGB_R  (Port_PinType)130
#define PortConf_PortContainer_1_PortPin_3  (Port_PinType)131
#define PortConf_PortContainer_1_PortPin_4  (Port_PinType)132
#define PortConf_PortContainer_1_PortPin_5  (Port_PinType)133
#define PortConf_PortContainer_1_PortPin_6  (Port_PinType)134
#define PortConf_PortContainer_1_PortPin_7  (Port_PinType)135
#define PortConf_PortContainer_1_PortPin_8  (Port_PinType)136
#define PortConf_PortContainer_1_PortPin_9  (Port_PinType)137
#define PortConf_PortContainer_1_SPI2_PCS1  (Port_PinType)138
#define PortConf_PortContainer_1_PortPin_11  (Port_PinType)139
#define PortConf_PortContainer_1_PortPin_12  (Port_PinType)140
#define PortConf_PortContainer_1_SPI2_SOUT  (Port_PinType)141
#define PortConf_PortContainer_1_PortPin_14  (Port_PinType)142
#define PortConf_PortContainer_1_SPI2_SCK  (Port_PinType)143
#define PortConf_PortContainer_1_SPI2_SIN  (Port_PinType)144
#define PortConf_PortContainer_1_SPI5_SOUT  (Port_PinType)145
#define PortConf_PortContainer_1_PortPin_18  (Port_PinType)146
#define PortConf_PortContainer_1_PortPin_19  (Port_PinType)147
#define PortConf_PortContainer_1_PortPin_20  (Port_PinType)148
#define PortConf_PortContainer_1_PortPin_21  (Port_PinType)149
#define PortConf_PortContainer_1_PortPin_22  (Port_PinType)150
#define PortConf_PortContainer_1_PortPin_23  (Port_PinType)151
#define PortConf_PortContainer_1_PortPin_24  (Port_PinType)152
#define PortConf_PortContainer_1_PortPin_25  (Port_PinType)153
#define PortConf_PortContainer_1_PortPin_26  (Port_PinType)154
#define PortConf_PortContainer_1_PortPin_27  (Port_PinType)155
#define PortConf_PortContainer_1_PortPin_28  (Port_PinType)157
#define PortConf_PortContainer_2_PortPin_0  (Port_PinType)64
#define PortConf_PortContainer_2_PortPin_1  (Port_PinType)65
#define PortConf_PortContainer_2_PortPin_2  (Port_PinType)66
#define PortConf_PortContainer_2_PortPin_3  (Port_PinType)67
#define PortConf_PortContainer_2_PortPin_4  (Port_PinType)68
#define PortConf_PortContainer_2_PortPin_5  (Port_PinType)69
#define PortConf_PortContainer_2_PortPin_6  (Port_PinType)70
#define PortConf_PortContainer_2_PortPin_7  (Port_PinType)71
#define PortConf_PortContainer_2_SPI1_SIN  (Port_PinType)72
#define PortConf_PortContainer_2_SPI1_SOUT  (Port_PinType)73
#define PortConf_PortContainer_2_PortPin_10  (Port_PinType)74
#define PortConf_PortContainer_2_PortPin_11  (Port_PinType)75
#define PortConf_PortContainer_2_PortPin_12  (Port_PinType)76
#define PortConf_PortContainer_2_PortPin_13  (Port_PinType)77
#define PortConf_PortContainer_2_PortPin_14  (Port_PinType)78
#define PortConf_PortContainer_2_PortPin_15  (Port_PinType)79
#define PortConf_PortContainer_2_PortPin_16  (Port_PinType)80
#define PortConf_PortContainer_2_PortPin_17  (Port_PinType)81
#define PortConf_PortContainer_2_PortPin_18  (Port_PinType)82
#define PortConf_PortContainer_2_PortPin_19  (Port_PinType)83
#define PortConf_PortContainer_2_PortPin_20  (Port_PinType)84
#define PortConf_PortContainer_2_PortPin_21  (Port_PinType)85
#define PortConf_PortContainer_2_PortPin_22  (Port_PinType)86
#define PortConf_PortContainer_2_PortPin_23  (Port_PinType)87
#define PortConf_PortContainer_2_PortPin_24  (Port_PinType)88
#define PortConf_PortContainer_2_PortPin_25  (Port_PinType)89
#define PortConf_PortContainer_2_PortPin_26  (Port_PinType)90
#define PortConf_PortContainer_2_PortPin_27  (Port_PinType)91
#define PortConf_PortContainer_2_PortPin_28  (Port_PinType)92
#define PortConf_PortContainer_2_PortPin_29  (Port_PinType)93
#define PortConf_PortContainer_2_PortPin_30  (Port_PinType)94
#define PortConf_PortContainer_2_PortPin_31  (Port_PinType)95
#define PortConf_PortContainer_4_PortPin_0  (Port_PinType)32
#define PortConf_PortContainer_4_PortPin_1  (Port_PinType)33
#define PortConf_PortContainer_4_PortPin_2  (Port_PinType)35
#define PortConf_PortContainer_4_PortPin_3  (Port_PinType)36
#define PortConf_PortContainer_4_PortPin_4  (Port_PinType)37
#define PortConf_PortContainer_4_PortPin_5  (Port_PinType)38
#define PortConf_PortContainer_4_PortPin_6  (Port_PinType)39
#define PortConf_PortContainer_4_PortPin_7  (Port_PinType)40
#define PortConf_PortContainer_4_PortPin_8  (Port_PinType)41
#define PortConf_PortContainer_4_PortPin_9  (Port_PinType)42
#define PortConf_PortContainer_4_PortPin_10  (Port_PinType)43
#define PortConf_PortContainer_4_RGB2_B  (Port_PinType)44
#define PortConf_PortContainer_4_PortPin_12  (Port_PinType)45
#define PortConf_PortContainer_4_RGB2_G  (Port_PinType)46
#define PortConf_PortContainer_4_PortPin_14  (Port_PinType)47
#define PortConf_PortContainer_4_KEY3  (Port_PinType)48
#define PortConf_PortContainer_4_SPI1_FLASH_HOLD  (Port_PinType)49
#define PortConf_PortContainer_4_PortPin_17  (Port_PinType)50
#define PortConf_PortContainer_4_PortPin_18  (Port_PinType)51
#define PortConf_PortContainer_4_PortPin_19  (Port_PinType)52
#define PortConf_PortContainer_4_PortPin_20  (Port_PinType)53
#define PortConf_PortContainer_4_PortPin_21  (Port_PinType)54
#define PortConf_PortContainer_4_PortPin_22  (Port_PinType)55
#define PortConf_PortContainer_4_PortPin_23  (Port_PinType)56
#define PortConf_PortContainer_4_PortPin_24  (Port_PinType)57
#define PortConf_PortContainer_4_PortPin_25  (Port_PinType)58
#define PortConf_PortContainer_4_PortPin_26  (Port_PinType)59
#define PortConf_PortContainer_4_PortPin_27  (Port_PinType)60
#define PortConf_PortContainer_4_PortPin_28  (Port_PinType)61
#define PortConf_PortContainer_4_PortPin_29  (Port_PinType)62
#define PortConf_PortContainer_4_PortPin_30  (Port_PinType)63
#define PortConf_PortContainer_5_PortPin_0  (Port_PinType)0
#define PortConf_PortContainer_5_PortPin_1  (Port_PinType)1
#define PortConf_PortContainer_5_RGB1_B  (Port_PinType)2
#define PortConf_PortContainer_5_PortPin_3  (Port_PinType)3
#define PortConf_PortContainer_5_PortPin_4  (Port_PinType)4
#define PortConf_PortContainer_5_SPI1_PCS1  (Port_PinType)6
#define PortConf_PortContainer_5_SPI1_SCK  (Port_PinType)7
#define PortConf_PortContainer_5_LED1  (Port_PinType)8
#define PortConf_PortContainer_5_KEY1  (Port_PinType)9
#define PortConf_PortContainer_5_PortPin_9  (Port_PinType)10
#define PortConf_PortContainer_5_LED2  (Port_PinType)11
#define PortConf_PortContainer_5_PortPin_11  (Port_PinType)12
#define PortConf_PortContainer_5_PortPin_12  (Port_PinType)13
#define PortConf_PortContainer_5_PortPin_13  (Port_PinType)14
#define PortConf_PortContainer_5_LED3  (Port_PinType)15
#define PortConf_PortContainer_5_SPI1_FLASH_WP  (Port_PinType)16
#define PortConf_PortContainer_5_RGB2_R  (Port_PinType)17
#define PortConf_PortContainer_5_PortPin_17  (Port_PinType)18
#define PortConf_PortContainer_5_PortPin_18  (Port_PinType)19
#define PortConf_PortContainer_5_PortPin_19  (Port_PinType)20
#define PortConf_PortContainer_5_PortPin_20  (Port_PinType)21
#define PortConf_PortContainer_5_PortPin_21  (Port_PinType)23
#define PortConf_PortContainer_5_PortPin_22  (Port_PinType)24
#define PortConf_PortContainer_5_PortPin_23  (Port_PinType)25
#define PortConf_PortContainer_5_PortPin_24  (Port_PinType)26
#define PortConf_PortContainer_5_PortPin_25  (Port_PinType)27
#define PortConf_PortContainer_5_PortPin_26  (Port_PinType)28
#define PortConf_PortContainer_5_PortPin_27  (Port_PinType)29
#define PortConf_PortContainer_5_PortPin_28  (Port_PinType)30
#define PortConf_PortContainer_5_PortPin_29  (Port_PinType)31

/* PRQA S 0791 -- */
/**
* @brief Number of available pad modes options
* @details Platform constant
*/
#define PIN_MODE_OPTIONS_U8         ((uint8)8)
/**
 * @brief The last supported pin number
 */
#define MAX_PORT_PIN_NUM_U16    ((uint16)158)

#define MAX_CONFIGURED_PORTA_U8  ((uint8)28)


#define MAX_CONFIGURED_PORTB_U8  ((uint8)31)


#define MAX_CONFIGURED_PORTC_U8  ((uint8)30)


#define MAX_CONFIGURED_PORTD_U8  ((uint8)31)


#define MAX_CONFIGURED_PORTE_U8  ((uint8)29)





/**
* @brief The maximum channel number of configured pins
*/
#define MAX_CONFIGURED_PINS_U16                        ((uint16)153)

/**
* @brief The number of configured Digital Filter Ports
*/
#define MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8         (0U)

/**
* @brief Port driver Post-build configuration switch
*/
#define PORT_PRECOMPILE_SUPPORT     (STD_OFF)

/**
* @brief Port driver not support multicore
*/
#define PORT_SUPPORT_MULTICORE     (STD_OFF)

/**
* @brief Port max number
*/
#define PORT_MAX_NUMBER     (5u)

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/
typedef struct
{
    const Port_PinConfigType *pConfigPortAPins;
    const Port_PinConfigType *pConfigPortBPins;
    const Port_PinConfigType *pConfigPortCPins;
    const Port_PinConfigType *pConfigPortDPins;
    const Port_PinConfigType *pConfigPortEPins;
} Port_ConfigPortPins;

/**
* @brief   Structure needed by @p Port_Init().
* @details The structure @p Port_ConfigType is a type for the external data
*          structure containing the initialization data for the PORT Driver.
* @note    The user must use the symbolic names defined in the configuration
*          tool.
*
* @implements Port_ConfigType_struct
*
* @api
*/
typedef struct
{
    const Port_ConfigPortPins kConfigPortPins;
    const Port_DigitalFilterConfigType *pConfigDigitalFilterPorts;
} Port_ConfigType;

/*=================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/

#define PORT_START_SEC_CONST_16
#include "Port_MemMap.h"

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief External declaration of the Port pin description array
*/
PORT_DATA_SECTION extern const uint8 kPortPinsDescription[MAX_PORT_PIN_NUM_U16];

#endif

#define PORT_STOP_SEC_CONST_16
#include "Port_MemMap.h"

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

#if (STD_OFF == PORT_PRECOMPILE_SUPPORT)
PORT_DATA_SECTION extern const Port_ConfigType Port_Config;
#endif

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* PORT_CFG_H */

/** @} */

/* End of File */
