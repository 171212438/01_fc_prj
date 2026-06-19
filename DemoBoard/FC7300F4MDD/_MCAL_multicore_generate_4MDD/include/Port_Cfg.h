
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




#define    PORT6_ADC2_SE13                                  (PORT_ALT0_FUNC_MODE)          /* PTA6 */
#define    PORT7_ADC2_SE11                                  (PORT_ALT0_FUNC_MODE)          /* PTA7 */
#define    PORT8_ADC1_SE14                                  (PORT_ALT0_FUNC_MODE)          /* PTA8 */
#define    PORT9_ADC1_SE15                                  (PORT_ALT0_FUNC_MODE)          /* PTA9 */
#define    PORT12_ADC1_SE18                                 (PORT_ALT0_FUNC_MODE)         /* PTA12 */
#define    PORT15_ADC1_SE28                                 (PORT_ALT0_FUNC_MODE)         /* PTA15 */
#define    PORT17_ADC2_SE19                                 (PORT_ALT0_FUNC_MODE)         /* PTA17 */
#define    PORT18_ADC1_SE7_ADC1_DIFF_N3                     (PORT_ALT0_FUNC_MODE)         /* PTA18 */
#define    PORT19_ADC1_SE3_ADC1_DIFF_P3                     (PORT_ALT0_FUNC_MODE)         /* PTA19 */
#define    PORT20_ADC1_SE6_ADC1_DIFF_N2                     (PORT_ALT0_FUNC_MODE)         /* PTA20 */
#define    PORT21_ADC0_SE2_ADC0_DIFF_P2                     (PORT_ALT0_FUNC_MODE)         /* PTA21 */
#define    PORT22_ADC0_SE1_ADC0_DIFF_P1                     (PORT_ALT0_FUNC_MODE)         /* PTA22 */
#define    PORT23_ADC0_SE14_CMP0_IN6                        (PORT_ALT0_FUNC_MODE)         /* PTA23 */
#define    PORT24_ADC0_SE15_CMP0_IN7                        (PORT_ALT0_FUNC_MODE)         /* PTA24 */
#define    PORT25_ADC0_SE11                                 (PORT_ALT0_FUNC_MODE)         /* PTA25 */
#define    PORT26_CMP0_IN1                                  (PORT_ALT0_FUNC_MODE)         /* PTA26 */
#define    PORT27_ADC0_SE16                                 (PORT_ALT0_FUNC_MODE)         /* PTA27 */
#define    PORT28_ADC0_SE18                                 (PORT_ALT0_FUNC_MODE)         /* PTA28 */
#define    PORT29_ADC0_SE19                                 (PORT_ALT0_FUNC_MODE)         /* PTA29 */
#define    PORT30_ADC0_SE25                                 (PORT_ALT0_FUNC_MODE)         /* PTA30 */
#define    PORT31_ADC0_SE29                                 (PORT_ALT0_FUNC_MODE)         /* PTA31 */
#define    PORT32_SDADC0_CH0_N0                             (PORT_ALT0_FUNC_MODE)          /* PTB0 */
#define    PORT33_SDADC0_CH0_P0                             (PORT_ALT0_FUNC_MODE)          /* PTB1 */
#define    PORT35_ADC3_SE20                                 (PORT_ALT0_FUNC_MODE)          /* PTB3 */
#define    PORT38_XTAL                                      (PORT_ALT0_FUNC_MODE)          /* PTB6 */
#define    PORT39_EXTAL                                     (PORT_ALT0_FUNC_MODE)          /* PTB7 */
#define    PORT43_V15_BASE_DRIVER                           (PORT_ALT0_FUNC_MODE)         /* PTB11 */
#define    PORT44_ADC2_SE29                                 (PORT_ALT0_FUNC_MODE)         /* PTB12 */
#define    PORT45_ADC2_SE28                                 (PORT_ALT0_FUNC_MODE)         /* PTB13 */
#define    PORT46_ADC2_SE27                                 (PORT_ALT0_FUNC_MODE)         /* PTB14 */
#define    PORT47_ADC2_SE26                                 (PORT_ALT0_FUNC_MODE)         /* PTB15 */
#define    PORT48_ADC2_SE25                                 (PORT_ALT0_FUNC_MODE)         /* PTB16 */
#define    PORT49_ADC2_SE20                                 (PORT_ALT0_FUNC_MODE)         /* PTB17 */
#define    PORT50_ADC0_SE30                                 (PORT_ALT0_FUNC_MODE)         /* PTB18 */
#define    PORT51_ADC0_SE31                                 (PORT_ALT0_FUNC_MODE)         /* PTB19 */
#define    PORT52_ADC3_SE31                                 (PORT_ALT0_FUNC_MODE)         /* PTB20 */
#define    PORT53_ADC3_SE30                                 (PORT_ALT0_FUNC_MODE)         /* PTB21 */
#define    PORT56_ADC3_SE29                                 (PORT_ALT0_FUNC_MODE)         /* PTB24 */
#define    PORT57_ADC3_SE19                                 (PORT_ALT0_FUNC_MODE)         /* PTB25 */
#define    PORT59_ADC3_SE21                                 (PORT_ALT0_FUNC_MODE)         /* PTB27 */
#define    PORT60_ADC3_SE22                                 (PORT_ALT0_FUNC_MODE)         /* PTB28 */
#define    PORT61_ADC3_SE0_ADC3_DIFF_P0                     (PORT_ALT0_FUNC_MODE)         /* PTB29 */
#define    PORT71_ADC1_SE30                                 (PORT_ALT0_FUNC_MODE)          /* PTC7 */
#define    PORT72_ADC2_SE9                                  (PORT_ALT0_FUNC_MODE)          /* PTC8 */
#define    PORT73_ADC2_SE8                                  (PORT_ALT0_FUNC_MODE)          /* PTC9 */
#define    PORT74_ADC2_SE3_ADC2_DIFF_P3                     (PORT_ALT0_FUNC_MODE)         /* PTC10 */
#define    PORT75_SDADC0_CH1_N0                             (PORT_ALT0_FUNC_MODE)         /* PTC11 */
#define    PORT76_ADC3_SE1_ADC3_DIFF_P1                     (PORT_ALT0_FUNC_MODE)         /* PTC12 */
#define    PORT77_ADC3_SE4_ADC3_DIFF_N0                     (PORT_ALT0_FUNC_MODE)         /* PTC13 */
#define    PORT83_ADC3_SE5_ADC3_DIFF_N1                     (PORT_ALT0_FUNC_MODE)         /* PTC19 */
#define    PORT84_ADC3_SE2_ADC3_DIFF_P2                     (PORT_ALT0_FUNC_MODE)         /* PTC20 */
#define    PORT85_ADC3_SE6_ADC3_DIFF_N2                     (PORT_ALT0_FUNC_MODE)         /* PTC21 */
#define    PORT86_SDADC0_CH_P3_ADC3_SE10_SENSE_BUS_SDADC     (PORT_ALT0_FUNC_MODE)         /* PTC22 */
#define    PORT87_SDADC0_CH_N3_ADC2_SE0_ADC2_DIFF_P0        (PORT_ALT0_FUNC_MODE)         /* PTC23 */
#define    PORT88_SDADC0_CH1_P0                             (PORT_ALT0_FUNC_MODE)         /* PTC24 */
#define    PORT91_ADC2_SE7_ADC2_DIFF_N3                     (PORT_ALT0_FUNC_MODE)         /* PTC27 */
#define    PORT92_ADC3_SE23                                 (PORT_ALT0_FUNC_MODE)         /* PTC28 */
#define    PORT93_ADC2_SE10                                 (PORT_ALT0_FUNC_MODE)         /* PTC29 */
#define    PORT94_ADC2_SE12                                 (PORT_ALT0_FUNC_MODE)         /* PTC30 */
#define    PORT95_ADC2_SE14                                 (PORT_ALT0_FUNC_MODE)         /* PTC31 */
#define    PORT96_ADC0_SE13                                 (PORT_ALT0_FUNC_MODE)          /* PTD0 */
#define    PORT97_ADC0_SE6_ADC0_DIFF_N2                     (PORT_ALT0_FUNC_MODE)          /* PTD1 */
#define    PORT111_ADC0_SE27                                (PORT_ALT0_FUNC_MODE)         /* PTD15 */
#define    PORT112_ADC0_SE26                                (PORT_ALT0_FUNC_MODE)         /* PTD16 */
#define    PORT113_ADC0_SE24                                (PORT_ALT0_FUNC_MODE)         /* PTD17 */
#define    PORT114_ADC2_SE16                                (PORT_ALT0_FUNC_MODE)         /* PTD18 */
#define    PORT115_ADC2_SE17                                (PORT_ALT0_FUNC_MODE)         /* PTD19 */
#define    PORT116_ADC2_SE30                                (PORT_ALT0_FUNC_MODE)         /* PTD20 */
#define    PORT119_ADC2_SE31                                (PORT_ALT0_FUNC_MODE)         /* PTD23 */
#define    PORT127_ADC1_SE31                                (PORT_ALT0_FUNC_MODE)         /* PTD31 */
#define    PORT130_ADC1_SE24                                (PORT_ALT0_FUNC_MODE)          /* PTE2 */
#define    PORT131_OSC32K_EXTAL                             (PORT_ALT0_FUNC_MODE)          /* PTE3 */
#define    PORT132_CMP0_IN0                                 (PORT_ALT0_FUNC_MODE)          /* PTE4 */
#define    PORT133_ADC0_SE12                                (PORT_ALT0_FUNC_MODE)          /* PTE5 */
#define    PORT134_ADC1_SE25                                (PORT_ALT0_FUNC_MODE)          /* PTE6 */
#define    PORT135_ADC2_SE15                                (PORT_ALT0_FUNC_MODE)          /* PTE7 */
#define    PORT137_ADC0_SE28                                (PORT_ALT0_FUNC_MODE)          /* PTE9 */
#define    PORT138_ADC0_SE9                                 (PORT_ALT0_FUNC_MODE)         /* PTE10 */
#define    PORT139_ADC0_SE8                                 (PORT_ALT0_FUNC_MODE)         /* PTE11 */
#define    PORT140_ADC0_SE17                                (PORT_ALT0_FUNC_MODE)         /* PTE12 */
#define    PORT141_ADC0_SE10                                (PORT_ALT0_FUNC_MODE)         /* PTE13 */
#define    PORT142_OSC32K_XTAL                              (PORT_ALT0_FUNC_MODE)         /* PTE14 */
#define    PORT143_ADC0_SE5_ADC0_DIFF_N1                    (PORT_ALT0_FUNC_MODE)         /* PTE15 */
#define    PORT144_ADC1_SE2_ADC1_DIFF_P2                    (PORT_ALT0_FUNC_MODE)         /* PTE16 */
#define    PORT146_ADC1_SE29                                (PORT_ALT0_FUNC_MODE)         /* PTE18 */
#define    PORT147_ADC1_SE23                                (PORT_ALT0_FUNC_MODE)         /* PTE19 */
#define    PORT148_ADC1_SE22                                (PORT_ALT0_FUNC_MODE)         /* PTE20 */
#define    PORT149_ADC1_SE21                                (PORT_ALT0_FUNC_MODE)         /* PTE21 */
#define    PORT150_ADC1_SE20                                (PORT_ALT0_FUNC_MODE)         /* PTE22 */
#define    PORT153_ADC1_SE19                                (PORT_ALT0_FUNC_MODE)         /* PTE25 */
#define    PORT154_ADC1_SE17                                (PORT_ALT0_FUNC_MODE)         /* PTE26 */
#define    PORT155_ADC1_SE16                                (PORT_ALT0_FUNC_MODE)         /* PTE27 */
#define    PORT160_ADC1_SE13                                (PORT_ALT0_FUNC_MODE)          /* PTF0 */
#define    PORT161_ADC1_SE12                                (PORT_ALT0_FUNC_MODE)          /* PTF1 */
#define    PORT163_ADC0_SE7_ADC0_DIFF_N3                    (PORT_ALT0_FUNC_MODE)          /* PTF3 */
#define    PORT167_ADC2_SE4_ADC2_DIFF_N0                    (PORT_ALT0_FUNC_MODE)          /* PTF7 */
#define    PORT169_ADC3_SE25                                (PORT_ALT0_FUNC_MODE)          /* PTF9 */
#define    PORT170_ADC3_SE24                                (PORT_ALT0_FUNC_MODE)         /* PTF10 */
#define    PORT171_ADC3_SE3_ADC3_DIFF_P3                    (PORT_ALT0_FUNC_MODE)         /* PTF11 */
#define    PORT172_SDADC0_CH_N1_ADC3_SE14                   (PORT_ALT0_FUNC_MODE)         /* PTF12 */
#define    PORT173_SDADC0_CH_P1_ADC3_SE13                   (PORT_ALT0_FUNC_MODE)         /* PTF13 */
#define    PORT174_ADC3_SE15                                (PORT_ALT0_FUNC_MODE)         /* PTF14 */
#define    PORT175_ADC2_SE18                                (PORT_ALT0_FUNC_MODE)         /* PTF15 */
#define    PORT183_ADC1_SE11                                (PORT_ALT0_FUNC_MODE)         /* PTF23 */
#define    PORT184_CMP0_IN3                                 (PORT_ALT0_FUNC_MODE)         /* PTF24 */
#define    PORT193_ADC0_SE0_ADC0_DIFF_P0                    (PORT_ALT0_FUNC_MODE)          /* PTG1 */
#define    PORT194_ADC0_SE4_ADC0_DIFF_N0                    (PORT_ALT0_FUNC_MODE)          /* PTG2 */
#define    PORT195_ADC0_SE20                                (PORT_ALT0_FUNC_MODE)          /* PTG3 */
#define    PORT196_ADC0_SE21                                (PORT_ALT0_FUNC_MODE)          /* PTG4 */
#define    PORT197_ADC0_SE22                                (PORT_ALT0_FUNC_MODE)          /* PTG5 */
#define    PORT201_ADC3_SE7_ADC3_DIFF_N3                    (PORT_ALT0_FUNC_MODE)          /* PTG9 */
#define    PORT202_SDADC0_CH_P2_ADC3_SE8                    (PORT_ALT0_FUNC_MODE)         /* PTG10 */
#define    PORT203_SDADC0_CH_N2_ADC3_SE9                    (PORT_ALT0_FUNC_MODE)         /* PTG11 */
#define    PORT204_ADC3_SE16                                (PORT_ALT0_FUNC_MODE)         /* PTG12 */
#define    PORT213_ADC1_SE10                                (PORT_ALT0_FUNC_MODE)         /* PTG21 */
#define    PORT214_ADC1_SE9                                 (PORT_ALT0_FUNC_MODE)         /* PTG22 */
#define    PORT215_ADC1_SE8                                 (PORT_ALT0_FUNC_MODE)         /* PTG23 */
#define    PORT224_ADC1_SE5_ADC1_DIFF_N1                    (PORT_ALT0_FUNC_MODE)          /* PTH0 */
#define    PORT225_ADC1_SE1_ADC1_DIFF_P1                    (PORT_ALT0_FUNC_MODE)          /* PTH1 */
#define    PORT226_ADC1_SE4_ADC1_DIFF_N0                    (PORT_ALT0_FUNC_MODE)          /* PTH2 */
#define    PORT227_ADC0_SE23                                (PORT_ALT0_FUNC_MODE)          /* PTH3 */
#define    PORT233_ADC2_SE1_ADC2_DIFF_P1                    (PORT_ALT0_FUNC_MODE)          /* PTH9 */
#define    PORT234_ADC2_SE5_ADC2_DIFF_N1                    (PORT_ALT0_FUNC_MODE)         /* PTH10 */
#define    PORT236_ADC2_SE21                                (PORT_ALT0_FUNC_MODE)         /* PTH12 */
#define    PORT237_ADC2_SE22                                (PORT_ALT0_FUNC_MODE)         /* PTH13 */
#define    PORT238_ADC2_SE23                                (PORT_ALT0_FUNC_MODE)         /* PTH14 */
#define    PORT243_ADC1_SE27                                (PORT_ALT0_FUNC_MODE)         /* PTH19 */
#define    PORT244_ADC1_SE26                                (PORT_ALT0_FUNC_MODE)         /* PTH20 */
#define    PORT256_ADC1_SE0_ADC1_DIFF_P0                    (PORT_ALT0_FUNC_MODE)          /* PTI0 */
#define    PORT258_ADC0_SE3_ADC0_DIFF_P3                    (PORT_ALT0_FUNC_MODE)          /* PTI2 */
#define    PORT262_ADC3_SE28                                (PORT_ALT0_FUNC_MODE)          /* PTI6 */
#define    PORT263_ADC3_SE27                                (PORT_ALT0_FUNC_MODE)          /* PTI7 */
#define    PORT264_ADC3_SE26                                (PORT_ALT0_FUNC_MODE)          /* PTI8 */
#define    PORT268_ADC2_SE24                                (PORT_ALT0_FUNC_MODE)         /* PTI12 */
#define    PORT269_ADC3_SE11                                (PORT_ALT0_FUNC_MODE)         /* PTI13 */
#define    PORT270_ADC3_SE12                                (PORT_ALT0_FUNC_MODE)         /* PTI14 */
#define    PORT277_CMP0_IN4                                 (PORT_ALT0_FUNC_MODE)         /* PTI21 */
#define    PORT278_CMP0_IN5                                 (PORT_ALT0_FUNC_MODE)         /* PTI22 */
#define    PORT279_CMP0_IN2                                 (PORT_ALT0_FUNC_MODE)         /* PTI23 */
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
#define    PORT22_GPIO                                           (PORT_GPIO_MODE)         /* PTA22 */
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
#define    PORT160_GPIO                                          (PORT_GPIO_MODE)          /* PTF0 */
#define    PORT161_GPIO                                          (PORT_GPIO_MODE)          /* PTF1 */
#define    PORT162_GPIO                                          (PORT_GPIO_MODE)          /* PTF2 */
#define    PORT163_GPIO                                          (PORT_GPIO_MODE)          /* PTF3 */
#define    PORT164_GPIO                                          (PORT_GPIO_MODE)          /* PTF4 */
#define    PORT165_GPIO                                          (PORT_GPIO_MODE)          /* PTF5 */
#define    PORT166_GPIO                                          (PORT_GPIO_MODE)          /* PTF6 */
#define    PORT167_GPIO                                          (PORT_GPIO_MODE)          /* PTF7 */
#define    PORT168_GPIO                                          (PORT_GPIO_MODE)          /* PTF8 */
#define    PORT169_GPIO                                          (PORT_GPIO_MODE)          /* PTF9 */
#define    PORT170_GPIO                                          (PORT_GPIO_MODE)         /* PTF10 */
#define    PORT171_GPIO                                          (PORT_GPIO_MODE)         /* PTF11 */
#define    PORT172_GPIO                                          (PORT_GPIO_MODE)         /* PTF12 */
#define    PORT173_GPIO                                          (PORT_GPIO_MODE)         /* PTF13 */
#define    PORT174_GPIO                                          (PORT_GPIO_MODE)         /* PTF14 */
#define    PORT175_GPIO                                          (PORT_GPIO_MODE)         /* PTF15 */
#define    PORT176_GPIO                                          (PORT_GPIO_MODE)         /* PTF16 */
#define    PORT177_GPIO                                          (PORT_GPIO_MODE)         /* PTF17 */
#define    PORT178_GPIO                                          (PORT_GPIO_MODE)         /* PTF18 */
#define    PORT179_GPIO                                          (PORT_GPIO_MODE)         /* PTF19 */
#define    PORT180_GPIO                                          (PORT_GPIO_MODE)         /* PTF20 */
#define    PORT181_GPIO                                          (PORT_GPIO_MODE)         /* PTF21 */
#define    PORT182_GPIO                                          (PORT_GPIO_MODE)         /* PTF22 */
#define    PORT183_GPIO                                          (PORT_GPIO_MODE)         /* PTF23 */
#define    PORT184_GPIO                                          (PORT_GPIO_MODE)         /* PTF24 */
#define    PORT192_GPIO                                          (PORT_GPIO_MODE)          /* PTG0 */
#define    PORT193_GPIO                                          (PORT_GPIO_MODE)          /* PTG1 */
#define    PORT194_GPIO                                          (PORT_GPIO_MODE)          /* PTG2 */
#define    PORT195_GPIO                                          (PORT_GPIO_MODE)          /* PTG3 */
#define    PORT196_GPIO                                          (PORT_GPIO_MODE)          /* PTG4 */
#define    PORT197_GPIO                                          (PORT_GPIO_MODE)          /* PTG5 */
#define    PORT198_GPIO                                          (PORT_GPIO_MODE)          /* PTG6 */
#define    PORT199_GPIO                                          (PORT_GPIO_MODE)          /* PTG7 */
#define    PORT200_GPIO                                          (PORT_GPIO_MODE)          /* PTG8 */
#define    PORT201_GPIO                                          (PORT_GPIO_MODE)          /* PTG9 */
#define    PORT202_GPIO                                          (PORT_GPIO_MODE)         /* PTG10 */
#define    PORT203_GPIO                                          (PORT_GPIO_MODE)         /* PTG11 */
#define    PORT204_GPIO                                          (PORT_GPIO_MODE)         /* PTG12 */
#define    PORT205_GPIO                                          (PORT_GPIO_MODE)         /* PTG13 */
#define    PORT206_GPIO                                          (PORT_GPIO_MODE)         /* PTG14 */
#define    PORT207_GPIO                                          (PORT_GPIO_MODE)         /* PTG15 */
#define    PORT208_GPIO                                          (PORT_GPIO_MODE)         /* PTG16 */
#define    PORT209_GPIO                                          (PORT_GPIO_MODE)         /* PTG17 */
#define    PORT210_GPIO                                          (PORT_GPIO_MODE)         /* PTG18 */
#define    PORT211_GPIO                                          (PORT_GPIO_MODE)         /* PTG19 */
#define    PORT212_GPIO                                          (PORT_GPIO_MODE)         /* PTG20 */
#define    PORT213_GPIO                                          (PORT_GPIO_MODE)         /* PTG21 */
#define    PORT214_GPIO                                          (PORT_GPIO_MODE)         /* PTG22 */
#define    PORT215_GPIO                                          (PORT_GPIO_MODE)         /* PTG23 */
#define    PORT224_GPIO                                          (PORT_GPIO_MODE)          /* PTH0 */
#define    PORT225_GPIO                                          (PORT_GPIO_MODE)          /* PTH1 */
#define    PORT226_GPIO                                          (PORT_GPIO_MODE)          /* PTH2 */
#define    PORT227_GPIO                                          (PORT_GPIO_MODE)          /* PTH3 */
#define    PORT228_GPIO                                          (PORT_GPIO_MODE)          /* PTH4 */
#define    PORT229_GPIO                                          (PORT_GPIO_MODE)          /* PTH5 */
#define    PORT230_GPIO                                          (PORT_GPIO_MODE)          /* PTH6 */
#define    PORT231_GPIO                                          (PORT_GPIO_MODE)          /* PTH7 */
#define    PORT232_GPIO                                          (PORT_GPIO_MODE)          /* PTH8 */
#define    PORT233_GPIO                                          (PORT_GPIO_MODE)          /* PTH9 */
#define    PORT234_GPIO                                          (PORT_GPIO_MODE)         /* PTH10 */
#define    PORT235_GPIO                                          (PORT_GPIO_MODE)         /* PTH11 */
#define    PORT236_GPIO                                          (PORT_GPIO_MODE)         /* PTH12 */
#define    PORT237_GPIO                                          (PORT_GPIO_MODE)         /* PTH13 */
#define    PORT238_GPIO                                          (PORT_GPIO_MODE)         /* PTH14 */
#define    PORT239_GPIO                                          (PORT_GPIO_MODE)         /* PTH15 */
#define    PORT240_GPIO                                          (PORT_GPIO_MODE)         /* PTH16 */
#define    PORT241_GPIO                                          (PORT_GPIO_MODE)         /* PTH17 */
#define    PORT242_GPIO                                          (PORT_GPIO_MODE)         /* PTH18 */
#define    PORT243_GPIO                                          (PORT_GPIO_MODE)         /* PTH19 */
#define    PORT244_GPIO                                          (PORT_GPIO_MODE)         /* PTH20 */
#define    PORT245_GPIO                                          (PORT_GPIO_MODE)         /* PTH21 */
#define    PORT246_GPIO                                          (PORT_GPIO_MODE)         /* PTH22 */
#define    PORT247_GPIO                                          (PORT_GPIO_MODE)         /* PTH23 */
#define    PORT256_GPIO                                          (PORT_GPIO_MODE)          /* PTI0 */
#define    PORT257_GPIO                                          (PORT_GPIO_MODE)          /* PTI1 */
#define    PORT258_GPIO                                          (PORT_GPIO_MODE)          /* PTI2 */
#define    PORT259_GPIO                                          (PORT_GPIO_MODE)          /* PTI3 */
#define    PORT260_GPIO                                          (PORT_GPIO_MODE)          /* PTI4 */
#define    PORT261_GPIO                                          (PORT_GPIO_MODE)          /* PTI5 */
#define    PORT262_GPIO                                          (PORT_GPIO_MODE)          /* PTI6 */
#define    PORT263_GPIO                                          (PORT_GPIO_MODE)          /* PTI7 */
#define    PORT264_GPIO                                          (PORT_GPIO_MODE)          /* PTI8 */
#define    PORT265_GPIO                                          (PORT_GPIO_MODE)          /* PTI9 */
#define    PORT266_GPIO                                          (PORT_GPIO_MODE)         /* PTI10 */
#define    PORT267_GPIO                                          (PORT_GPIO_MODE)         /* PTI11 */
#define    PORT268_GPIO                                          (PORT_GPIO_MODE)         /* PTI12 */
#define    PORT269_GPIO                                          (PORT_GPIO_MODE)         /* PTI13 */
#define    PORT270_GPIO                                          (PORT_GPIO_MODE)         /* PTI14 */
#define    PORT271_GPIO                                          (PORT_GPIO_MODE)         /* PTI15 */
#define    PORT272_GPIO                                          (PORT_GPIO_MODE)         /* PTI16 */
#define    PORT273_GPIO                                          (PORT_GPIO_MODE)         /* PTI17 */
#define    PORT274_GPIO                                          (PORT_GPIO_MODE)         /* PTI18 */
#define    PORT275_GPIO                                          (PORT_GPIO_MODE)         /* PTI19 */
#define    PORT276_GPIO                                          (PORT_GPIO_MODE)         /* PTI20 */
#define    PORT277_GPIO                                          (PORT_GPIO_MODE)         /* PTI21 */
#define    PORT278_GPIO                                          (PORT_GPIO_MODE)         /* PTI22 */
#define    PORT279_GPIO                                          (PORT_GPIO_MODE)         /* PTI23 */
#define    PORT0_FTU4_CH6                                   (PORT_ALT2_FUNC_MODE)          /* PTA0 */
#define    PORT1_FTU4_CH4                                   (PORT_ALT2_FUNC_MODE)          /* PTA1 */
#define    PORT2_FTU2_CH3                                   (PORT_ALT2_FUNC_MODE)          /* PTA2 */
#define    PORT3_FTU2_CH2                                   (PORT_ALT2_FUNC_MODE)          /* PTA3 */
#define    PORT4_CMP0_OUT                                   (PORT_ALT2_FUNC_MODE)          /* PTA4 */
#define    PORT6_FTU5_CH0                                   (PORT_ALT2_FUNC_MODE)          /* PTA6 */
#define    PORT7_FTU7_CH6                                   (PORT_ALT2_FUNC_MODE)          /* PTA7 */
#define    PORT8_FCUART2_RX                                 (PORT_ALT2_FUNC_MODE)          /* PTA8 */
#define    PORT9_FCUART2_TX                                 (PORT_ALT2_FUNC_MODE)          /* PTA9 */
#define    PORT10_FTU3_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTA10 */
#define    PORT11_FTU3_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTA11 */
#define    PORT12_FTU0_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTA12 */
#define    PORT13_FTU0_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTA13 */
#define    PORT14_FTU_FLT17                                 (PORT_ALT2_FUNC_MODE)         /* PTA14 */
#define    PORT15_FTU6_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTA15 */
#define    PORT16_FTU6_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTA16 */
#define    PORT17_FTU5_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTA17 */
#define    PORT18_FTU3_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTA18 */
#define    PORT20_FTU3_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTA20 */
#define    PORT21_FCUART6_RX                                (PORT_ALT2_FUNC_MODE)         /* PTA21 */
#define    PORT22_FTU2_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTA22 */
#define    PORT23_FTU4_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTA23 */
#define    PORT24_FTU4_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTA24 */
#define    PORT25_FTU4_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTA25 */
#define    PORT26_FTU2_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTA26 */
#define    PORT27_FTU5_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTA27 */
#define    PORT28_FTU5_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTA28 */
#define    PORT29_FTU5_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTA29 */
#define    PORT30_FTU5_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTA30 */
#define    PORT31_FTU0_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTA31 */
#define    PORT36_FTU7_CH7                                  (PORT_ALT2_FUNC_MODE)          /* PTB4 */
#define    PORT37_FTU6_CH2                                  (PORT_ALT2_FUNC_MODE)          /* PTB5 */
#define    PORT40_FTU4_CH2                                  (PORT_ALT2_FUNC_MODE)          /* PTB8 */
#define    PORT41_FTU2_CH7                                  (PORT_ALT2_FUNC_MODE)          /* PTB9 */
#define    PORT42_FTU2_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTB10 */
#define    PORT43_FTU6_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTB11 */
#define    PORT45_FTU3_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTB13 */
#define    PORT46_FTU3_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTB14 */
#define    PORT47_FTU3_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTB15 */
#define    PORT48_FTU5_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTB16 */
#define    PORT49_FTU5_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTB17 */
#define    PORT50_FTU0_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTB18 */
#define    PORT51_FTU0_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTB19 */
#define    PORT52_FTU1_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTB20 */
#define    PORT53_FTU1_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTB21 */
#define    PORT54_eFTU0_IN3                                 (PORT_ALT2_FUNC_MODE)         /* PTB22 */
#define    PORT55_FTU_FLT9                                  (PORT_ALT2_FUNC_MODE)         /* PTB23 */
#define    PORT56_FTU1_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTB24 */
#define    PORT57_SDADC0_BREAK1                             (PORT_ALT2_FUNC_MODE)         /* PTB25 */
#define    PORT58_FTU6_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTB26 */
#define    PORT59_FTU7_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTB27 */
#define    PORT60_FTU7_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTB28 */
#define    PORT61_FTU1_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTB29 */
#define    PORT62_FTU6_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTB30 */
#define    PORT63_FTU7_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTB31 */
#define    PORT64_eFTU0_IN6                                 (PORT_ALT2_FUNC_MODE)          /* PTC0 */
#define    PORT65_FTU7_CH5                                  (PORT_ALT2_FUNC_MODE)          /* PTC1 */
#define    PORT66_FTU6_CH3                                  (PORT_ALT2_FUNC_MODE)          /* PTC2 */
#define    PORT67_FTU6_CH2                                  (PORT_ALT2_FUNC_MODE)          /* PTC3 */
#define    PORT68_FTU3_CH4                                  (PORT_ALT2_FUNC_MODE)          /* PTC4 */
#define    PORT69_FTU3_CH3                                  (PORT_ALT2_FUNC_MODE)          /* PTC5 */
#define    PORT70_FCUART1_RX                                (PORT_ALT2_FUNC_MODE)          /* PTC6 */
#define    PORT71_FCUART1_TX                                (PORT_ALT2_FUNC_MODE)          /* PTC7 */
#define    PORT72_FTU7_CH4                                  (PORT_ALT2_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU7_CH3                                  (PORT_ALT2_FUNC_MODE)          /* PTC9 */
#define    PORT74_FTU3_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTC10 */
#define    PORT75_FTU3_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTC11 */
#define    PORT76_FTU1_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTC12 */
#define    PORT77_FTU1_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTC13 */
#define    PORT78_FTU7_CH4                                  (PORT_ALT2_FUNC_MODE)         /* PTC14 */
#define    PORT79_eFTU_GTOM6                                (PORT_ALT2_FUNC_MODE)         /* PTC15 */
#define    PORT80_FTU_FLT7                                  (PORT_ALT2_FUNC_MODE)         /* PTC16 */
#define    PORT81_FTU_FLT6                                  (PORT_ALT2_FUNC_MODE)         /* PTC17 */
#define    PORT82_FTU7_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTC18 */
#define    PORT83_FTU1_CH6                                  (PORT_ALT2_FUNC_MODE)         /* PTC19 */
#define    PORT84_FTU1_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTC20 */
#define    PORT85_FTU3_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTC21 */
#define    PORT86_FTU3_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTC22 */
#define    PORT87_FTU0_CH0                                  (PORT_ALT2_FUNC_MODE)         /* PTC23 */
#define    PORT88_FTU3_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTC24 */
#define    PORT89_FTU3_CH3                                  (PORT_ALT2_FUNC_MODE)         /* PTC25 */
#define    PORT92_FTU7_CH2                                  (PORT_ALT2_FUNC_MODE)         /* PTC28 */
#define    PORT93_FTU7_CH5                                  (PORT_ALT2_FUNC_MODE)         /* PTC29 */
#define    PORT94_FTU7_CH7                                  (PORT_ALT2_FUNC_MODE)         /* PTC30 */
#define    PORT95_FTU5_CH1                                  (PORT_ALT2_FUNC_MODE)         /* PTC31 */
#define    PORT96_FTU4_CH2                                  (PORT_ALT2_FUNC_MODE)          /* PTD0 */
#define    PORT97_FCUART6_TX                                (PORT_ALT2_FUNC_MODE)          /* PTD1 */
#define    PORT98_FTU2_CH0                                  (PORT_ALT2_FUNC_MODE)          /* PTD2 */
#define    PORT99_FTU3_CH7                                  (PORT_ALT2_FUNC_MODE)          /* PTD3 */
#define    PORT100_FTU3_CH6                                 (PORT_ALT2_FUNC_MODE)          /* PTD4 */
#define    PORT101_FTU6_CH4                                 (PORT_ALT2_FUNC_MODE)          /* PTD5 */
#define    PORT102_FCUART2_RX                               (PORT_ALT2_FUNC_MODE)          /* PTD6 */
#define    PORT103_FCUART2_TX                               (PORT_ALT2_FUNC_MODE)          /* PTD7 */
#define    PORT104_FTU7_CH0                                 (PORT_ALT2_FUNC_MODE)          /* PTD8 */
#define    PORT105_eFTU0_IN7                                (PORT_ALT2_FUNC_MODE)          /* PTD9 */
#define    PORT106_FTU6_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTD10 */
#define    PORT107_FTU6_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTD11 */
#define    PORT108_FTU6_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTD12 */
#define    PORT111_FTU5_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTD15 */
#define    PORT112_FTU5_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTD16 */
#define    PORT113_FTU5_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTD17 */
#define    PORT114_FTU5_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTD18 */
#define    PORT115_FTU5_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTD19 */
#define    PORT116_FTU3_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTD20 */
#define    PORT117_FTU3_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTD21 */
#define    PORT119_FTU2_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTD23 */
#define    PORT120_FTU2_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTD24 */
#define    PORT121_FTU2_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTD25 */
#define    PORT122_FTU4_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTD26 */
#define    PORT123_FTU4_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTD27 */
#define    PORT124_FTU4_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTD28 */
#define    PORT125_FTU4_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTD29 */
#define    PORT126_FTU4_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTD30 */
#define    PORT127_FTU6_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTD31 */
#define    PORT128_FCUART0_CTS                              (PORT_ALT2_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCUART0_RTS                              (PORT_ALT2_FUNC_MODE)          /* PTE1 */
#define    PORT130_FTU6_CH6                                 (PORT_ALT2_FUNC_MODE)          /* PTE2 */
#define    PORT131_FTU0_CH2                                 (PORT_ALT2_FUNC_MODE)          /* PTE3 */
#define    PORT132_FTU2_QD_PHB                              (PORT_ALT2_FUNC_MODE)          /* PTE4 */
#define    PORT133_FTU_TCK2                                 (PORT_ALT2_FUNC_MODE)          /* PTE5 */
#define    PORT134_FTU6_CH5                                 (PORT_ALT2_FUNC_MODE)          /* PTE6 */
#define    PORT135_FTU5_CH2                                 (PORT_ALT2_FUNC_MODE)          /* PTE7 */
#define    PORT136_FTU6_CH1                                 (PORT_ALT2_FUNC_MODE)          /* PTE8 */
#define    PORT137_FTU0_CH7                                 (PORT_ALT2_FUNC_MODE)          /* PTE9 */
#define    PORT138_SCG_CLKOUT                               (PORT_ALT2_FUNC_MODE)         /* PTE10 */
#define    PORT139_FTU2_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTE11 */
#define    PORT140_FTU5_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTE12 */
#define    PORT141_FTU2_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTE13 */
#define    PORT142_FTU0_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTE14 */
#define    PORT143_FCUART1_CTS                              (PORT_ALT2_FUNC_MODE)         /* PTE15 */
#define    PORT144_FCUART1_RTS                              (PORT_ALT2_FUNC_MODE)         /* PTE16 */
#define    PORT145_FTU6_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTE17 */
#define    PORT146_FTU6_CH3                                 (PORT_ALT2_FUNC_MODE)         /* PTE18 */
#define    PORT147_SCG_CLKOUT                               (PORT_ALT2_FUNC_MODE)         /* PTE19 */
#define    PORT148_FTU0_CH0                                 (PORT_ALT2_FUNC_MODE)         /* PTE20 */
#define    PORT149_FTU0_CH1                                 (PORT_ALT2_FUNC_MODE)         /* PTE21 */
#define    PORT150_FTU0_CH2                                 (PORT_ALT2_FUNC_MODE)         /* PTE22 */
#define    PORT151_FTU0_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTE23 */
#define    PORT152_FTU0_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTE24 */
#define    PORT153_FTU0_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTE25 */
#define    PORT154_FTU3_CH2                                 (PORT_ALT2_FUNC_MODE)         /* PTE26 */
#define    PORT155_FTU3_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTE27 */
#define    PORT160_FCUART6_RX                               (PORT_ALT2_FUNC_MODE)          /* PTF0 */
#define    PORT161_FCUART6_TX                               (PORT_ALT2_FUNC_MODE)          /* PTF1 */
#define    PORT162_FCUART6_RTS                              (PORT_ALT2_FUNC_MODE)          /* PTF2 */
#define    PORT164_FCUART7_RX                               (PORT_ALT2_FUNC_MODE)          /* PTF4 */
#define    PORT165_FCUART7_TX                               (PORT_ALT2_FUNC_MODE)          /* PTF5 */
#define    PORT167_FTU0_CH1                                 (PORT_ALT2_FUNC_MODE)          /* PTF7 */
#define    PORT171_FLEXCAN6_TX                              (PORT_ALT2_FUNC_MODE)         /* PTF11 */
#define    PORT172_SDADC0_CLK0                              (PORT_ALT2_FUNC_MODE)         /* PTF12 */
#define    PORT174_SDADC0_BREAK0                            (PORT_ALT2_FUNC_MODE)         /* PTF14 */
#define    PORT175_SDADC0_EXT_SIGN                          (PORT_ALT2_FUNC_MODE)         /* PTF15 */
#define    PORT177_FTU_FLT21                                (PORT_ALT2_FUNC_MODE)         /* PTF17 */
#define    PORT178_FCSPI4_PCS3                              (PORT_ALT2_FUNC_MODE)         /* PTF18 */
#define    PORT179_FCSPI4_PCS2                              (PORT_ALT2_FUNC_MODE)         /* PTF19 */
#define    PORT180_FCSPI4_PCS1                              (PORT_ALT2_FUNC_MODE)         /* PTF20 */
#define    PORT181_FTU3_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTF21 */
#define    PORT182_FTU3_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTF22 */
#define    PORT183_SENT0_RXD0                               (PORT_ALT2_FUNC_MODE)         /* PTF23 */
#define    PORT184_FTU4_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTF24 */
#define    PORT192_FCUART6_CTS                              (PORT_ALT2_FUNC_MODE)          /* PTG0 */
#define    PORT193_FTU0_CH0                                 (PORT_ALT2_FUNC_MODE)          /* PTG1 */
#define    PORT194_FTU0_CH1                                 (PORT_ALT2_FUNC_MODE)          /* PTG2 */
#define    PORT195_eFTU0_IN7                                (PORT_ALT2_FUNC_MODE)          /* PTG3 */
#define    PORT196_eFTU0_IN3                                (PORT_ALT2_FUNC_MODE)          /* PTG4 */
#define    PORT197_SSI0_DIG_28_CH2                          (PORT_ALT2_FUNC_MODE)          /* PTG5 */
#define    PORT201_FLEXCAN6_RX                              (PORT_ALT2_FUNC_MODE)          /* PTG9 */
#define    PORT204_SDADC0_BREAK1                            (PORT_ALT2_FUNC_MODE)         /* PTG12 */
#define    PORT205_SDADC0_CH0                               (PORT_ALT2_FUNC_MODE)         /* PTG13 */
#define    PORT206_SDADC0_CH1                               (PORT_ALT2_FUNC_MODE)         /* PTG14 */
#define    PORT207_FTU1_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTG15 */
#define    PORT208_FTU1_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTG16 */
#define    PORT209_FCUART6_RTS                              (PORT_ALT2_FUNC_MODE)         /* PTG17 */
#define    PORT210_FCSPI4_PCS0                              (PORT_ALT2_FUNC_MODE)         /* PTG18 */
#define    PORT211_FCSPI4_SCK                               (PORT_ALT2_FUNC_MODE)         /* PTG19 */
#define    PORT212_FCSPI4_SIN                               (PORT_ALT2_FUNC_MODE)         /* PTG20 */
#define    PORT213_SENT0_RXD1                               (PORT_ALT2_FUNC_MODE)         /* PTG21 */
#define    PORT214_SENT0_RXD2                               (PORT_ALT2_FUNC_MODE)         /* PTG22 */
#define    PORT215_SENT0_RXD3                               (PORT_ALT2_FUNC_MODE)         /* PTG23 */
#define    PORT224_FCUART7_RTS                              (PORT_ALT2_FUNC_MODE)          /* PTH0 */
#define    PORT225_FCUART7_CTS                              (PORT_ALT2_FUNC_MODE)          /* PTH1 */
#define    PORT226_FCUART7_RX                               (PORT_ALT2_FUNC_MODE)          /* PTH2 */
#define    PORT227_SSI0_DIG_14_CH2                          (PORT_ALT2_FUNC_MODE)          /* PTH3 */
#define    PORT228_FTU4_QD_PHA                              (PORT_ALT2_FUNC_MODE)          /* PTH4 */
#define    PORT229_FTU4_QD_PHB                              (PORT_ALT2_FUNC_MODE)          /* PTH5 */
#define    PORT231_FTU_FLT8                                 (PORT_ALT2_FUNC_MODE)          /* PTH7 */
#define    PORT232_eFTU0_IN5                                (PORT_ALT2_FUNC_MODE)          /* PTH8 */
#define    PORT234_FTU0_CH2                                 (PORT_ALT2_FUNC_MODE)         /* PTH10 */
#define    PORT239_FCUART6_CTS                              (PORT_ALT2_FUNC_MODE)         /* PTH15 */
#define    PORT240_FCSPI5_PCS0                              (PORT_ALT2_FUNC_MODE)         /* PTH16 */
#define    PORT241_FCSPI5_SCK                               (PORT_ALT2_FUNC_MODE)         /* PTH17 */
#define    PORT242_FCSPI4_SOUT                              (PORT_ALT2_FUNC_MODE)         /* PTH18 */
#define    PORT243_SENT1_RXD0                               (PORT_ALT2_FUNC_MODE)         /* PTH19 */
#define    PORT244_SENT1_RXD1                               (PORT_ALT2_FUNC_MODE)         /* PTH20 */
#define    PORT246_FTU7_CH6                                 (PORT_ALT2_FUNC_MODE)         /* PTH22 */
#define    PORT256_FCUART7_TX                               (PORT_ALT2_FUNC_MODE)          /* PTI0 */
#define    PORT257_FCUART7_CTS                              (PORT_ALT2_FUNC_MODE)          /* PTI1 */
#define    PORT266_SDADC0_PWM_P                             (PORT_ALT2_FUNC_MODE)         /* PTI10 */
#define    PORT267_SDADC0_PWM_N                             (PORT_ALT2_FUNC_MODE)         /* PTI11 */
#define    PORT269_FTU0_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTI13 */
#define    PORT271_FCSPI5_SIN                               (PORT_ALT2_FUNC_MODE)         /* PTI15 */
#define    PORT272_FCSPI5_SOUT                              (PORT_ALT2_FUNC_MODE)         /* PTI16 */
#define    PORT273_FTU_TCK2                                 (PORT_ALT2_FUNC_MODE)         /* PTI17 */
#define    PORT274_SENT1_RXD2                               (PORT_ALT2_FUNC_MODE)         /* PTI18 */
#define    PORT275_SENT1_RXD3                               (PORT_ALT2_FUNC_MODE)         /* PTI19 */
#define    PORT276_FTU_TCK2                                 (PORT_ALT2_FUNC_MODE)         /* PTI20 */
#define    PORT277_FTU4_CH5                                 (PORT_ALT2_FUNC_MODE)         /* PTI21 */
#define    PORT278_FTU4_CH4                                 (PORT_ALT2_FUNC_MODE)         /* PTI22 */
#define    PORT279_FTU4_CH7                                 (PORT_ALT2_FUNC_MODE)         /* PTI23 */
#define    PORT0_FLEXCAN5_RX                                (PORT_ALT3_FUNC_MODE)          /* PTA0 */
#define    PORT2_FCIIC0_SDA                                 (PORT_ALT3_FUNC_MODE)          /* PTA2 */
#define    PORT3_FCIIC0_SCL                                 (PORT_ALT3_FUNC_MODE)          /* PTA3 */
#define    PORT6_FTU_FLT13                                  (PORT_ALT3_FUNC_MODE)          /* PTA6 */
#define    PORT7_FTU_FLT12                                  (PORT_ALT3_FUNC_MODE)          /* PTA7 */
#define    PORT9_RTC_CLKOUT                                 (PORT_ALT3_FUNC_MODE)          /* PTA9 */
#define    PORT11_FLEXCAN1_TX                               (PORT_ALT3_FUNC_MODE)         /* PTA11 */
#define    PORT12_FLEXCAN1_RX                               (PORT_ALT3_FUNC_MODE)         /* PTA12 */
#define    PORT14_AONTIMER0_CLK1                            (PORT_ALT3_FUNC_MODE)         /* PTA14 */
#define    PORT15_FTU5_QD_PHB                               (PORT_ALT3_FUNC_MODE)         /* PTA15 */
#define    PORT16_FCSMU_PIN0                                (PORT_ALT3_FUNC_MODE)         /* PTA16 */
#define    PORT17_FTU_FLT15                                 (PORT_ALT3_FUNC_MODE)         /* PTA17 */
#define    PORT18_FCUART1_TX                                (PORT_ALT3_FUNC_MODE)         /* PTA18 */
#define    PORT19_FCUART1_RX                                (PORT_ALT3_FUNC_MODE)         /* PTA19 */
#define    PORT20_FCUART3_RTS                               (PORT_ALT3_FUNC_MODE)         /* PTA20 */
#define    PORT21_FCUART3_CTS                               (PORT_ALT3_FUNC_MODE)         /* PTA21 */
#define    PORT22_FTU2_QD_PHA                               (PORT_ALT3_FUNC_MODE)         /* PTA22 */
#define    PORT23_FCUART3_RX                                (PORT_ALT3_FUNC_MODE)         /* PTA23 */
#define    PORT24_FCUART3_TX                                (PORT_ALT3_FUNC_MODE)         /* PTA24 */
#define    PORT26_SSI0_DIG_28_CH0                           (PORT_ALT3_FUNC_MODE)         /* PTA26 */
#define    PORT27_FCUART0_TX                                (PORT_ALT3_FUNC_MODE)         /* PTA27 */
#define    PORT28_FCUART0_RX                                (PORT_ALT3_FUNC_MODE)         /* PTA28 */
#define    PORT30_FCUART2_RX                                (PORT_ALT3_FUNC_MODE)         /* PTA30 */
#define    PORT31_FCUART5_TX                                (PORT_ALT3_FUNC_MODE)         /* PTA31 */
#define    PORT33_FTU_TCK0                                  (PORT_ALT3_FUNC_MODE)          /* PTB1 */
#define    PORT35_FTU1_QD_PHA                               (PORT_ALT3_FUNC_MODE)          /* PTB3 */
#define    PORT36_FTU_FLT4                                  (PORT_ALT3_FUNC_MODE)          /* PTB4 */
#define    PORT37_FCIIC1_SDA                                (PORT_ALT3_FUNC_MODE)          /* PTB5 */
#define    PORT40_FLEXCAN4_TX                               (PORT_ALT3_FUNC_MODE)          /* PTB8 */
#define    PORT42_TRGSEL_OUT2                               (PORT_ALT3_FUNC_MODE)         /* PTB10 */
#define    PORT44_SENT0_RXD0                                (PORT_ALT3_FUNC_MODE)         /* PTB12 */
#define    PORT45_TCR_CLK                                   (PORT_ALT3_FUNC_MODE)         /* PTB13 */
#define    PORT46_FCUART4_RX                                (PORT_ALT3_FUNC_MODE)         /* PTB14 */
#define    PORT47_FCUART4_TX                                (PORT_ALT3_FUNC_MODE)         /* PTB15 */
#define    PORT48_FCUART5_CTS                               (PORT_ALT3_FUNC_MODE)         /* PTB16 */
#define    PORT50_FCUART5_RX                                (PORT_ALT3_FUNC_MODE)         /* PTB18 */
#define    PORT52_FCUART1_TX                                (PORT_ALT3_FUNC_MODE)         /* PTB20 */
#define    PORT53_FCUART1_RX                                (PORT_ALT3_FUNC_MODE)         /* PTB21 */
#define    PORT54_FCUART1_TX                                (PORT_ALT3_FUNC_MODE)         /* PTB22 */
#define    PORT55_FCSPI2_PCS0                               (PORT_ALT3_FUNC_MODE)         /* PTB23 */
#define    PORT58_FTU_FLT5                                  (PORT_ALT3_FUNC_MODE)         /* PTB26 */
#define    PORT59_FTU1_QD_PHB                               (PORT_ALT3_FUNC_MODE)         /* PTB27 */
#define    PORT61_SSI0_DIG_28_CH1                           (PORT_ALT3_FUNC_MODE)         /* PTB29 */
#define    PORT62_FCIIC1_SCL                                (PORT_ALT3_FUNC_MODE)         /* PTB30 */
#define    PORT63_FCSPI2_SCK                                (PORT_ALT3_FUNC_MODE)         /* PTB31 */
#define    PORT64_eFTU_GTOM2                                (PORT_ALT3_FUNC_MODE)          /* PTC0 */
#define    PORT66_FCUART0_RX                                (PORT_ALT3_FUNC_MODE)          /* PTC2 */
#define    PORT67_FCUART0_TX                                (PORT_ALT3_FUNC_MODE)          /* PTC3 */
#define    PORT70_SENT1_RXD3                                (PORT_ALT3_FUNC_MODE)          /* PTC6 */
#define    PORT71_SENT1_RXD2                                (PORT_ALT3_FUNC_MODE)          /* PTC7 */
#define    PORT72_FTU_FLT11                                 (PORT_ALT3_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU_FLT10                                 (PORT_ALT3_FUNC_MODE)          /* PTC9 */
#define    PORT77_SSI0_DIG_14_CH1                           (PORT_ALT3_FUNC_MODE)         /* PTC13 */
#define    PORT78_FCUART1_RX                                (PORT_ALT3_FUNC_MODE)         /* PTC14 */
#define    PORT79_FCSPI2_PCS3                               (PORT_ALT3_FUNC_MODE)         /* PTC15 */
#define    PORT80_FCSPI2_SOUT                               (PORT_ALT3_FUNC_MODE)         /* PTC16 */
#define    PORT81_FTU0_CH2                                  (PORT_ALT3_FUNC_MODE)         /* PTC17 */
#define    PORT82_FCSPI2_SIN                                (PORT_ALT3_FUNC_MODE)         /* PTC18 */
#define    PORT83_FLEXCAN6_TX                               (PORT_ALT3_FUNC_MODE)         /* PTC19 */
#define    PORT84_eFTU0_OUT_S8                              (PORT_ALT3_FUNC_MODE)         /* PTC20 */
#define    PORT85_eFTU0_OUT_S9                              (PORT_ALT3_FUNC_MODE)         /* PTC21 */
#define    PORT86_eFTU0_OUT_S16                             (PORT_ALT3_FUNC_MODE)         /* PTC22 */
#define    PORT87_FTU6_CH6                                  (PORT_ALT3_FUNC_MODE)         /* PTC23 */
#define    PORT88_FLEXCAN6_RX                               (PORT_ALT3_FUNC_MODE)         /* PTC24 */
#define    PORT89_FCUART5_RTS                               (PORT_ALT3_FUNC_MODE)         /* PTC25 */
#define    PORT91_FTU1_CH3                                  (PORT_ALT3_FUNC_MODE)         /* PTC27 */
#define    PORT92_SDADC0_PWM_P                              (PORT_ALT3_FUNC_MODE)         /* PTC28 */
#define    PORT93_SDADC0_PWM_N                              (PORT_ALT3_FUNC_MODE)         /* PTC29 */
#define    PORT95_SDADC0_PWM_P                              (PORT_ALT3_FUNC_MODE)         /* PTC31 */
#define    PORT101_FCUART2_CTS                              (PORT_ALT3_FUNC_MODE)          /* PTD5 */
#define    PORT102_FLEXCAN3_RX                              (PORT_ALT3_FUNC_MODE)          /* PTD6 */
#define    PORT103_FLEXCAN3_TX                              (PORT_ALT3_FUNC_MODE)          /* PTD7 */
#define    PORT104_FCSPI2_PCS2                              (PORT_ALT3_FUNC_MODE)          /* PTD8 */
#define    PORT105_FCSPI2_PCS1                              (PORT_ALT3_FUNC_MODE)          /* PTD9 */
#define    PORT106_FTU2_QD_PHB                              (PORT_ALT3_FUNC_MODE)         /* PTD10 */
#define    PORT107_FTU2_QD_PHA                              (PORT_ALT3_FUNC_MODE)         /* PTD11 */
#define    PORT108_FCUART2_RTS                              (PORT_ALT3_FUNC_MODE)         /* PTD12 */
#define    PORT111_FLEXCAN2_RX                              (PORT_ALT3_FUNC_MODE)         /* PTD15 */
#define    PORT112_FLEXCAN2_TX                              (PORT_ALT3_FUNC_MODE)         /* PTD16 */
#define    PORT113_FCUART2_TX                               (PORT_ALT3_FUNC_MODE)         /* PTD17 */
#define    PORT114_SDADC0_PWM_N                             (PORT_ALT3_FUNC_MODE)         /* PTD18 */
#define    PORT116_FCUART5_RX                               (PORT_ALT3_FUNC_MODE)         /* PTD20 */
#define    PORT117_FCUART5_TX                               (PORT_ALT3_FUNC_MODE)         /* PTD21 */
#define    PORT118_SENT0_RXD1                               (PORT_ALT3_FUNC_MODE)         /* PTD22 */
#define    PORT120_TCR_CLK                                  (PORT_ALT3_FUNC_MODE)         /* PTD24 */
#define    PORT122_FLEXCAN0_TX                              (PORT_ALT3_FUNC_MODE)         /* PTD26 */
#define    PORT123_FLEXCAN0_RX                              (PORT_ALT3_FUNC_MODE)         /* PTD27 */
#define    PORT124_FLEXCAN4_RX                              (PORT_ALT3_FUNC_MODE)         /* PTD28 */
#define    PORT126_FLEXCAN5_TX                              (PORT_ALT3_FUNC_MODE)         /* PTD30 */
#define    PORT128_FTU_TCK1                                 (PORT_ALT3_FUNC_MODE)          /* PTE0 */
#define    PORT130_FCUART6_TX                               (PORT_ALT3_FUNC_MODE)          /* PTE2 */
#define    PORT131_eFTU0_IN1                                (PORT_ALT3_FUNC_MODE)          /* PTE3 */
#define    PORT132_FTU0_CH1                                 (PORT_ALT3_FUNC_MODE)          /* PTE4 */
#define    PORT133_FTU4_CH3                                 (PORT_ALT3_FUNC_MODE)          /* PTE5 */
#define    PORT134_FCUART6_RX                               (PORT_ALT3_FUNC_MODE)          /* PTE6 */
#define    PORT135_FTU_FLT14                                (PORT_ALT3_FUNC_MODE)          /* PTE7 */
#define    PORT138_FTU6_CH0                                 (PORT_ALT3_FUNC_MODE)         /* PTE10 */
#define    PORT140_FTU_FLT2                                 (PORT_ALT3_FUNC_MODE)         /* PTE12 */
#define    PORT142_eFTU0_IN0                                (PORT_ALT3_FUNC_MODE)         /* PTE14 */
#define    PORT143_FLEXCAN5_RX                              (PORT_ALT3_FUNC_MODE)         /* PTE15 */
#define    PORT144_FLEXCAN5_TX                              (PORT_ALT3_FUNC_MODE)         /* PTE16 */
#define    PORT145_FCSMU_PIN1                               (PORT_ALT3_FUNC_MODE)         /* PTE17 */
#define    PORT146_FTU5_QD_PHA                              (PORT_ALT3_FUNC_MODE)         /* PTE18 */
#define    PORT147_FCIIC0_SCL                               (PORT_ALT3_FUNC_MODE)         /* PTE19 */
#define    PORT148_FCIIC0_SDA                               (PORT_ALT3_FUNC_MODE)         /* PTE20 */
#define    PORT149_LP_WAKEUP0                               (PORT_ALT3_FUNC_MODE)         /* PTE21 */
#define    PORT151_FLEXCAN1_RX                              (PORT_ALT3_FUNC_MODE)         /* PTE23 */
#define    PORT152_FLEXCAN1_TX                              (PORT_ALT3_FUNC_MODE)         /* PTE24 */
#define    PORT153_AONTIMER0_CLK0                           (PORT_ALT3_FUNC_MODE)         /* PTE25 */
#define    PORT154_AONTIMER0_CLK2                           (PORT_ALT3_FUNC_MODE)         /* PTE26 */
#define    PORT160_FTU2_QD_PHA                              (PORT_ALT3_FUNC_MODE)          /* PTF0 */
#define    PORT161_FTU2_QD_PHB                              (PORT_ALT3_FUNC_MODE)          /* PTF1 */
#define    PORT162_eFTU0_IN4                                (PORT_ALT3_FUNC_MODE)          /* PTF2 */
#define    PORT163_FLEXCAN4_RX                              (PORT_ALT3_FUNC_MODE)          /* PTF3 */
#define    PORT164_FTU6_CH3                                 (PORT_ALT3_FUNC_MODE)          /* PTF4 */
#define    PORT165_FTU6_CH4                                 (PORT_ALT3_FUNC_MODE)          /* PTF5 */
#define    PORT166_FTU6_CH4                                 (PORT_ALT3_FUNC_MODE)          /* PTF6 */
#define    PORT167_FTU6_CH5                                 (PORT_ALT3_FUNC_MODE)          /* PTF7 */
#define    PORT168_eFTU0_IN5                                (PORT_ALT3_FUNC_MODE)          /* PTF8 */
#define    PORT169_FTU0_CH3                                 (PORT_ALT3_FUNC_MODE)          /* PTF9 */
#define    PORT170_FTU0_CH4                                 (PORT_ALT3_FUNC_MODE)         /* PTF10 */
#define    PORT171_FTU0_CH5                                 (PORT_ALT3_FUNC_MODE)         /* PTF11 */
#define    PORT173_FTU1_CH2                                 (PORT_ALT3_FUNC_MODE)         /* PTF13 */
#define    PORT175_TCR_CLK                                  (PORT_ALT3_FUNC_MODE)         /* PTF15 */
#define    PORT176_SENT0_RXD2                               (PORT_ALT3_FUNC_MODE)         /* PTF16 */
#define    PORT177_SENT0_RXD3                               (PORT_ALT3_FUNC_MODE)         /* PTF17 */
#define    PORT179_FTU6_CH1                                 (PORT_ALT3_FUNC_MODE)         /* PTF19 */
#define    PORT180_FTU6_CH2                                 (PORT_ALT3_FUNC_MODE)         /* PTF20 */
#define    PORT181_FCIIC1_SCL                               (PORT_ALT3_FUNC_MODE)         /* PTF21 */
#define    PORT182_FCIIC1_SDA                               (PORT_ALT3_FUNC_MODE)         /* PTF22 */
#define    PORT183_FCUART0_TX                               (PORT_ALT3_FUNC_MODE)         /* PTF23 */
#define    PORT184_SSI0_DIG_28_CH1                          (PORT_ALT3_FUNC_MODE)         /* PTF24 */
#define    PORT192_eFTU0_IN5                                (PORT_ALT3_FUNC_MODE)          /* PTG0 */
#define    PORT197_FTU6_CH3                                 (PORT_ALT3_FUNC_MODE)          /* PTG5 */
#define    PORT198_eFTU0_IN6                                (PORT_ALT3_FUNC_MODE)          /* PTG6 */
#define    PORT199_eFTU0_IN7                                (PORT_ALT3_FUNC_MODE)          /* PTG7 */
#define    PORT200_eFTU0_IN0                                (PORT_ALT3_FUNC_MODE)          /* PTG8 */
#define    PORT201_FTU0_CH6                                 (PORT_ALT3_FUNC_MODE)          /* PTG9 */
#define    PORT202_FTU0_CH7                                 (PORT_ALT3_FUNC_MODE)         /* PTG10 */
#define    PORT203_eFTU0_OUT_S24                            (PORT_ALT3_FUNC_MODE)         /* PTG11 */
#define    PORT207_FCIIC0_SCL                               (PORT_ALT3_FUNC_MODE)         /* PTG15 */
#define    PORT208_FCIIC0_SDA                               (PORT_ALT3_FUNC_MODE)         /* PTG16 */
#define    PORT209_FLEXCAN7_TX                              (PORT_ALT3_FUNC_MODE)         /* PTG17 */
#define    PORT210_FTU1_CH0                                 (PORT_ALT3_FUNC_MODE)         /* PTG18 */
#define    PORT211_FTU1_CH1                                 (PORT_ALT3_FUNC_MODE)         /* PTG19 */
#define    PORT212_FTU1_CH2                                 (PORT_ALT3_FUNC_MODE)         /* PTG20 */
#define    PORT213_FCUART0_RX                               (PORT_ALT3_FUNC_MODE)         /* PTG21 */
#define    PORT214_FTU1_QD_PHA                              (PORT_ALT3_FUNC_MODE)         /* PTG22 */
#define    PORT215_FTU1_QD_PHB                              (PORT_ALT3_FUNC_MODE)         /* PTG23 */
#define    PORT226_FTU6_CH3                                 (PORT_ALT3_FUNC_MODE)          /* PTH2 */
#define    PORT227_FTU6_CH4                                 (PORT_ALT3_FUNC_MODE)          /* PTH3 */
#define    PORT228_eFTU0_IN0                                (PORT_ALT3_FUNC_MODE)          /* PTH4 */
#define    PORT229_eFTU0_IN1                                (PORT_ALT3_FUNC_MODE)          /* PTH5 */
#define    PORT230_eFTU0_IN1                                (PORT_ALT3_FUNC_MODE)          /* PTH6 */
#define    PORT231_eFTU0_IN2                                (PORT_ALT3_FUNC_MODE)          /* PTH7 */
#define    PORT232_FTU0_CH4                                 (PORT_ALT3_FUNC_MODE)          /* PTH8 */
#define    PORT239_FLEXCAN7_RX                              (PORT_ALT3_FUNC_MODE)         /* PTH15 */
#define    PORT240_eFTU0_IN2                                (PORT_ALT3_FUNC_MODE)         /* PTH16 */
#define    PORT241_eFTU0_IN3                                (PORT_ALT3_FUNC_MODE)         /* PTH17 */
#define    PORT242_FTU1_CH3                                 (PORT_ALT3_FUNC_MODE)         /* PTH18 */
#define    PORT243_FTU1_CH4                                 (PORT_ALT3_FUNC_MODE)         /* PTH19 */
#define    PORT244_FTU1_CH5                                 (PORT_ALT3_FUNC_MODE)         /* PTH20 */
#define    PORT245_eFTU0_IN4                                (PORT_ALT3_FUNC_MODE)         /* PTH21 */
#define    PORT246_eFTU0_IN7                                (PORT_ALT3_FUNC_MODE)         /* PTH22 */
#define    PORT256_FTU6_CH4                                 (PORT_ALT3_FUNC_MODE)          /* PTI0 */
#define    PORT258_FLEXCAN4_TX                              (PORT_ALT3_FUNC_MODE)          /* PTI2 */
#define    PORT261_FTU6_CH3                                 (PORT_ALT3_FUNC_MODE)          /* PTI5 */
#define    PORT262_FTU0_CH0                                 (PORT_ALT3_FUNC_MODE)          /* PTI6 */
#define    PORT263_FTU0_CH1                                 (PORT_ALT3_FUNC_MODE)          /* PTI7 */
#define    PORT264_FTU0_CH2                                 (PORT_ALT3_FUNC_MODE)          /* PTI8 */
#define    PORT265_FTU6_CH7                                 (PORT_ALT3_FUNC_MODE)          /* PTI9 */
#define    PORT269_eFTU0_OUT_S17                            (PORT_ALT3_FUNC_MODE)         /* PTI13 */
#define    PORT271_eFTU0_IN4                                (PORT_ALT3_FUNC_MODE)         /* PTI15 */
#define    PORT272_eFTU0_IN5                                (PORT_ALT3_FUNC_MODE)         /* PTI16 */
#define    PORT273_eFTU0_IN6                                (PORT_ALT3_FUNC_MODE)         /* PTI17 */
#define    PORT274_FTU1_CH6                                 (PORT_ALT3_FUNC_MODE)         /* PTI18 */
#define    PORT275_FTU1_CH7                                 (PORT_ALT3_FUNC_MODE)         /* PTI19 */
#define    PORT276_FTU_FLT20                                (PORT_ALT3_FUNC_MODE)         /* PTI20 */
#define    PORT277_SSI0_DIG_14_CH1                          (PORT_ALT3_FUNC_MODE)         /* PTI21 */
#define    PORT279_SSI0_DIG_14_CH0                          (PORT_ALT3_FUNC_MODE)         /* PTI23 */
#define    PORT0_SENT1_RXD2                                 (PORT_ALT4_FUNC_MODE)          /* PTA0 */
#define    PORT1_SENT1_RXD0                                 (PORT_ALT4_FUNC_MODE)          /* PTA1 */
#define    PORT2_eFTU0_OUT_S28                              (PORT_ALT4_FUNC_MODE)          /* PTA2 */
#define    PORT3_eFTU0_OUT_S27                              (PORT_ALT4_FUNC_MODE)          /* PTA3 */
#define    PORT6_FCUART1_CTS                                (PORT_ALT4_FUNC_MODE)          /* PTA6 */
#define    PORT7_FCUART1_RTS                                (PORT_ALT4_FUNC_MODE)          /* PTA7 */
#define    PORT8_CMP0_OUT                                   (PORT_ALT4_FUNC_MODE)          /* PTA8 */
#define    PORT13_FCIIC1_SCL                                (PORT_ALT4_FUNC_MODE)         /* PTA13 */
#define    PORT14_LP_WAKEUP2                                (PORT_ALT4_FUNC_MODE)         /* PTA14 */
#define    PORT15_FCUART2_RX                                (PORT_ALT4_FUNC_MODE)         /* PTA15 */
#define    PORT17_FCSPI1_PCS2                               (PORT_ALT4_FUNC_MODE)         /* PTA17 */
#define    PORT19_FTU6_CH7                                  (PORT_ALT4_FUNC_MODE)         /* PTA19 */
#define    PORT21_FTU2_CH5                                  (PORT_ALT4_FUNC_MODE)         /* PTA21 */
#define    PORT22_FCUART7_RX                                (PORT_ALT4_FUNC_MODE)         /* PTA22 */
#define    PORT23_ETM_TRACE_D0                              (PORT_ALT4_FUNC_MODE)         /* PTA23 */
#define    PORT24_ETM_TRACE_D1                              (PORT_ALT4_FUNC_MODE)         /* PTA24 */
#define    PORT25_SSI0_DIG_14_CH3                           (PORT_ALT4_FUNC_MODE)         /* PTA25 */
#define    PORT27_ETM_TRACE_D2                              (PORT_ALT4_FUNC_MODE)         /* PTA27 */
#define    PORT28_SSI0_DIG_28_CH3                           (PORT_ALT4_FUNC_MODE)         /* PTA28 */
#define    PORT29_SSI0_DIG_14_CH3                           (PORT_ALT4_FUNC_MODE)         /* PTA29 */
#define    PORT30_ETM_TRACE_D5                              (PORT_ALT4_FUNC_MODE)         /* PTA30 */
#define    PORT31_FTU_FLT3                                  (PORT_ALT4_FUNC_MODE)         /* PTA31 */
#define    PORT32_eFTU0_OUT_S23                             (PORT_ALT4_FUNC_MODE)          /* PTB0 */
#define    PORT33_eFTU0_OUT_S22                             (PORT_ALT4_FUNC_MODE)          /* PTB1 */
#define    PORT35_FCSPI2_SCK                                (PORT_ALT4_FUNC_MODE)          /* PTB3 */
#define    PORT48_SDADC0_EXT_SIGN                           (PORT_ALT4_FUNC_MODE)         /* PTB16 */
#define    PORT49_FCSPI1_PCS3                               (PORT_ALT4_FUNC_MODE)         /* PTB17 */
#define    PORT50_ETM_TRACE_D14                             (PORT_ALT4_FUNC_MODE)         /* PTB18 */
#define    PORT51_ETM_TRACE_D15                             (PORT_ALT4_FUNC_MODE)         /* PTB19 */
#define    PORT52_FCSPI5_SCK                                (PORT_ALT4_FUNC_MODE)         /* PTB20 */
#define    PORT53_FCSPI5_SIN                                (PORT_ALT4_FUNC_MODE)         /* PTB21 */
#define    PORT54_ETM_TRACE_D5                              (PORT_ALT4_FUNC_MODE)         /* PTB22 */
#define    PORT55_FTU7_CH3                                  (PORT_ALT4_FUNC_MODE)         /* PTB23 */
#define    PORT56_FCSPI5_SOUT                               (PORT_ALT4_FUNC_MODE)         /* PTB24 */
#define    PORT57_FCSPI2_PCS0                               (PORT_ALT4_FUNC_MODE)         /* PTB25 */
#define    PORT58_LDI0_DOE                                  (PORT_ALT4_FUNC_MODE)         /* PTB26 */
#define    PORT59_FCSPI2_SOUT                               (PORT_ALT4_FUNC_MODE)         /* PTB27 */
#define    PORT60_FCSPI2_SIN                                (PORT_ALT4_FUNC_MODE)         /* PTB28 */
#define    PORT62_LDI0_SDI                                  (PORT_ALT4_FUNC_MODE)         /* PTB30 */
#define    PORT63_eFTU0_IN5                                 (PORT_ALT4_FUNC_MODE)         /* PTB31 */
#define    PORT64_ETM_TRACE_D6                              (PORT_ALT4_FUNC_MODE)          /* PTC0 */
#define    PORT66_ETM_TRACE_CLKOUT                          (PORT_ALT4_FUNC_MODE)          /* PTC2 */
#define    PORT70_FTU3_CH2                                  (PORT_ALT4_FUNC_MODE)          /* PTC6 */
#define    PORT71_FTU3_CH3                                  (PORT_ALT4_FUNC_MODE)          /* PTC7 */
#define    PORT72_FTU4_QD_PHB                               (PORT_ALT4_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU4_QD_PHA                               (PORT_ALT4_FUNC_MODE)          /* PTC9 */
#define    PORT74_FLEXCAN4_RX                               (PORT_ALT4_FUNC_MODE)         /* PTC10 */
#define    PORT75_FLEXCAN4_TX                               (PORT_ALT4_FUNC_MODE)         /* PTC11 */
#define    PORT76_eFTU0_OUT_S29                             (PORT_ALT4_FUNC_MODE)         /* PTC12 */
#define    PORT77_FCSPI5_PCS0                               (PORT_ALT4_FUNC_MODE)         /* PTC13 */
#define    PORT78_FCIIC1_SDA                                (PORT_ALT4_FUNC_MODE)         /* PTC14 */
#define    PORT79_SCG_CLKOUT                                (PORT_ALT4_FUNC_MODE)         /* PTC15 */
#define    PORT80_TRGSEL_OUT7                               (PORT_ALT4_FUNC_MODE)         /* PTC16 */
#define    PORT81_TRGSEL_OUT6                               (PORT_ALT4_FUNC_MODE)         /* PTC17 */
#define    PORT82_eFTU0_IN6                                 (PORT_ALT4_FUNC_MODE)         /* PTC18 */
#define    PORT83_FCSPI5_PCS1                               (PORT_ALT4_FUNC_MODE)         /* PTC19 */
#define    PORT84_FCSPI5_PCS2                               (PORT_ALT4_FUNC_MODE)         /* PTC20 */
#define    PORT85_FCSPI5_PCS3                               (PORT_ALT4_FUNC_MODE)         /* PTC21 */
#define    PORT87_FCUART2_RTS                               (PORT_ALT4_FUNC_MODE)         /* PTC23 */
#define    PORT88_FCUART2_CTS                               (PORT_ALT4_FUNC_MODE)         /* PTC24 */
#define    PORT89_FCSPI5_PCS0                               (PORT_ALT4_FUNC_MODE)         /* PTC25 */
#define    PORT90_FLEXCAN2_TX                               (PORT_ALT4_FUNC_MODE)         /* PTC26 */
#define    PORT91_FCSPI2_PCS1                               (PORT_ALT4_FUNC_MODE)         /* PTC27 */
#define    PORT92_FLEXCAN3_TX                               (PORT_ALT4_FUNC_MODE)         /* PTC28 */
#define    PORT93_FLEXCAN3_RX                               (PORT_ALT4_FUNC_MODE)         /* PTC29 */
#define    PORT94_FTU5_QD_PHA                               (PORT_ALT4_FUNC_MODE)         /* PTC30 */
#define    PORT95_FTU5_QD_PHB                               (PORT_ALT4_FUNC_MODE)         /* PTC31 */
#define    PORT97_FTU2_CH4                                  (PORT_ALT4_FUNC_MODE)          /* PTD1 */
#define    PORT98_FCSPI1_SCK                                (PORT_ALT4_FUNC_MODE)          /* PTD2 */
#define    PORT99_FCSPI1_SIN                                (PORT_ALT4_FUNC_MODE)          /* PTD3 */
#define    PORT100_FCSPI1_SOUT                              (PORT_ALT4_FUNC_MODE)          /* PTD4 */
#define    PORT101_ETM_TRACE_D2                             (PORT_ALT4_FUNC_MODE)          /* PTD5 */
#define    PORT102_ETM_TRACE_D1                             (PORT_ALT4_FUNC_MODE)          /* PTD6 */
#define    PORT103_ETM_TRACE_D0                             (PORT_ALT4_FUNC_MODE)          /* PTD7 */
#define    PORT104_FTU1_CH6                                 (PORT_ALT4_FUNC_MODE)          /* PTD8 */
#define    PORT105_ETM_TRACE_D7                             (PORT_ALT4_FUNC_MODE)          /* PTD9 */
#define    PORT106_FTU7_CH6                                 (PORT_ALT4_FUNC_MODE)         /* PTD10 */
#define    PORT107_ETM_TRACE_D4                             (PORT_ALT4_FUNC_MODE)         /* PTD11 */
#define    PORT108_ETM_TRACE_D3                             (PORT_ALT4_FUNC_MODE)         /* PTD12 */
#define    PORT111_ETM_TRACE_D7                             (PORT_ALT4_FUNC_MODE)         /* PTD15 */
#define    PORT112_ETM_TRACE_D6                             (PORT_ALT4_FUNC_MODE)         /* PTD16 */
#define    PORT113_ETM_TRACE_D4                             (PORT_ALT4_FUNC_MODE)         /* PTD17 */
#define    PORT114_FCIIC1_SDA                               (PORT_ALT4_FUNC_MODE)         /* PTD18 */
#define    PORT115_FCIIC1_SCL                               (PORT_ALT4_FUNC_MODE)         /* PTD19 */
#define    PORT116_FCSPI1_PCS1                              (PORT_ALT4_FUNC_MODE)         /* PTD20 */
#define    PORT117_eFTU0_IN0                                (PORT_ALT4_FUNC_MODE)         /* PTD21 */
#define    PORT118_FCSPI5_SCK                               (PORT_ALT4_FUNC_MODE)         /* PTD22 */
#define    PORT119_FCSPI1_PCS0                              (PORT_ALT4_FUNC_MODE)         /* PTD23 */
#define    PORT120_eFTU0_IN1                                (PORT_ALT4_FUNC_MODE)         /* PTD24 */
#define    PORT121_FCUART4_RTS                              (PORT_ALT4_FUNC_MODE)         /* PTD25 */
#define    PORT122_FCUART4_CTS                              (PORT_ALT4_FUNC_MODE)         /* PTD26 */
#define    PORT125_SENT1_RXD1                               (PORT_ALT4_FUNC_MODE)         /* PTD29 */
#define    PORT126_SENT1_RXD3                               (PORT_ALT4_FUNC_MODE)         /* PTD30 */
#define    PORT127_eFTU0_IN2                                (PORT_ALT4_FUNC_MODE)         /* PTD31 */
#define    PORT128_FCIIC1_SDA                               (PORT_ALT4_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCIIC1_SCL                               (PORT_ALT4_FUNC_MODE)          /* PTE1 */
#define    PORT131_FTU_FLT1                                 (PORT_ALT4_FUNC_MODE)          /* PTE3 */
#define    PORT132_FCUART7_TX                               (PORT_ALT4_FUNC_MODE)          /* PTE4 */
#define    PORT136_eFTU0_IN4                                (PORT_ALT4_FUNC_MODE)          /* PTE8 */
#define    PORT137_ETM_TRACE_CLKOUT                         (PORT_ALT4_FUNC_MODE)          /* PTE9 */
#define    PORT138_SSI0_DIG_14_CH2                          (PORT_ALT4_FUNC_MODE)         /* PTE10 */
#define    PORT139_SSI0_DIG_28_CH2                          (PORT_ALT4_FUNC_MODE)         /* PTE11 */
#define    PORT140_ETM_TRACE_D3                             (PORT_ALT4_FUNC_MODE)         /* PTE12 */
#define    PORT141_SSI0_DIG_28_CH3                          (PORT_ALT4_FUNC_MODE)         /* PTE13 */
#define    PORT142_FTU_FLT0                                 (PORT_ALT4_FUNC_MODE)         /* PTE14 */
#define    PORT143_FTU2_CH6                                 (PORT_ALT4_FUNC_MODE)         /* PTE15 */
#define    PORT144_FTU2_CH7                                 (PORT_ALT4_FUNC_MODE)         /* PTE16 */
#define    PORT145_FTU_FLT20                                (PORT_ALT4_FUNC_MODE)         /* PTE17 */
#define    PORT146_FCUART2_TX                               (PORT_ALT4_FUNC_MODE)         /* PTE18 */
#define    PORT147_SENT0_RXD2                               (PORT_ALT4_FUNC_MODE)         /* PTE19 */
#define    PORT148_SENT0_RXD3                               (PORT_ALT4_FUNC_MODE)         /* PTE20 */
#define    PORT149_FLEXCAN0_TX                              (PORT_ALT4_FUNC_MODE)         /* PTE21 */
#define    PORT150_FLEXCAN0_RX                              (PORT_ALT4_FUNC_MODE)         /* PTE22 */
#define    PORT154_SENT0_RXD0                               (PORT_ALT4_FUNC_MODE)         /* PTE26 */
#define    PORT155_SENT0_RXD1                               (PORT_ALT4_FUNC_MODE)         /* PTE27 */
#define    PORT167_MSC0_SDI2                                (PORT_ALT4_FUNC_MODE)          /* PTF7 */
#define    PORT168_FCSPI3_SIN                               (PORT_ALT4_FUNC_MODE)          /* PTF8 */
#define    PORT169_MSC0_SDI0                                (PORT_ALT4_FUNC_MODE)          /* PTF9 */
#define    PORT170_MSC0_SDI1                                (PORT_ALT4_FUNC_MODE)         /* PTF10 */
#define    PORT171_MSC0_SDI2                                (PORT_ALT4_FUNC_MODE)         /* PTF11 */
#define    PORT173_FCSPI2_PCS2                              (PORT_ALT4_FUNC_MODE)         /* PTF13 */
#define    PORT174_FCSPI2_PCS3                              (PORT_ALT4_FUNC_MODE)         /* PTF14 */
#define    PORT176_FCSPI5_SIN                               (PORT_ALT4_FUNC_MODE)         /* PTF16 */
#define    PORT177_FCSPI5_SOUT                              (PORT_ALT4_FUNC_MODE)         /* PTF17 */
#define    PORT178_FCUART1_TX                               (PORT_ALT4_FUNC_MODE)         /* PTF18 */
#define    PORT179_FCUART1_RX                               (PORT_ALT4_FUNC_MODE)         /* PTF19 */
#define    PORT180_FLEXCAN2_RX                              (PORT_ALT4_FUNC_MODE)         /* PTF20 */
#define    PORT181_CMP0_OUT                                 (PORT_ALT4_FUNC_MODE)         /* PTF21 */
#define    PORT183_FCSPI0_SOUT                              (PORT_ALT4_FUNC_MODE)         /* PTF23 */
#define    PORT184_ETM_TRACE_D9                             (PORT_ALT4_FUNC_MODE)         /* PTF24 */
#define    PORT193_FLEXCAN5_TX                              (PORT_ALT4_FUNC_MODE)          /* PTG1 */
#define    PORT194_FLEXCAN5_RX                              (PORT_ALT4_FUNC_MODE)          /* PTG2 */
#define    PORT198_FCSPI3_SOUT                              (PORT_ALT4_FUNC_MODE)          /* PTG6 */
#define    PORT199_FCSPI3_PCS0                              (PORT_ALT4_FUNC_MODE)          /* PTG7 */
#define    PORT200_FCUART3_TX                               (PORT_ALT4_FUNC_MODE)          /* PTG8 */
#define    PORT201_MSC0_SDI3                                (PORT_ALT4_FUNC_MODE)          /* PTG9 */
#define    PORT202_MSC0_SDI3                                (PORT_ALT4_FUNC_MODE)         /* PTG10 */
#define    PORT204_FTU6_CH7                                 (PORT_ALT4_FUNC_MODE)         /* PTG12 */
#define    PORT205_FLEXCAN4_TX                              (PORT_ALT4_FUNC_MODE)         /* PTG13 */
#define    PORT206_FLEXCAN4_RX                              (PORT_ALT4_FUNC_MODE)         /* PTG14 */
#define    PORT213_FCSPI0_PCS0                              (PORT_ALT4_FUNC_MODE)         /* PTG21 */
#define    PORT214_FCSPI0_SIN                               (PORT_ALT4_FUNC_MODE)         /* PTG22 */
#define    PORT215_FCSPI0_SCK                               (PORT_ALT4_FUNC_MODE)         /* PTG23 */
#define    PORT228_ENET_PPS0                                (PORT_ALT4_FUNC_MODE)          /* PTH4 */
#define    PORT229_ENET_PPS1                                (PORT_ALT4_FUNC_MODE)          /* PTH5 */
#define    PORT230_FCUART3_RX                               (PORT_ALT4_FUNC_MODE)          /* PTH6 */
#define    PORT233_MSC0_FCLP                                (PORT_ALT4_FUNC_MODE)          /* PTH9 */
#define    PORT234_MSC0_SOP                                 (PORT_ALT4_FUNC_MODE)         /* PTH10 */
#define    PORT236_FCUART1_TX                               (PORT_ALT4_FUNC_MODE)         /* PTH12 */
#define    PORT237_FCUART1_RX                               (PORT_ALT4_FUNC_MODE)         /* PTH13 */
#define    PORT238_FCUART3_TX                               (PORT_ALT4_FUNC_MODE)         /* PTH14 */
#define    PORT240_FLEXCAN2_RX                              (PORT_ALT4_FUNC_MODE)         /* PTH16 */
#define    PORT242_RTC_CLKOUT                               (PORT_ALT4_FUNC_MODE)         /* PTH18 */
#define    PORT245_FCSPI3_SCK                               (PORT_ALT4_FUNC_MODE)         /* PTH21 */
#define    PORT246_FCIIC1_SCL                               (PORT_ALT4_FUNC_MODE)         /* PTH22 */
#define    PORT247_FLEXCAN2_RX                              (PORT_ALT4_FUNC_MODE)         /* PTH23 */
#define    PORT263_MSC0_EN0                                 (PORT_ALT4_FUNC_MODE)          /* PTI7 */
#define    PORT264_MSC0_EN1                                 (PORT_ALT4_FUNC_MODE)          /* PTI8 */
#define    PORT265_eFTU0_OUT_S28                            (PORT_ALT4_FUNC_MODE)          /* PTI9 */
#define    PORT266_FCUART4_TX                               (PORT_ALT4_FUNC_MODE)         /* PTI10 */
#define    PORT267_FCUART4_RX                               (PORT_ALT4_FUNC_MODE)         /* PTI11 */
#define    PORT268_FCUART3_RX                               (PORT_ALT4_FUNC_MODE)         /* PTI12 */
#define    PORT273_FLEXCAN2_TX                              (PORT_ALT4_FUNC_MODE)         /* PTI17 */
#define    PORT274_FCUART2_TX                               (PORT_ALT4_FUNC_MODE)         /* PTI18 */
#define    PORT275_FCUART2_RX                               (PORT_ALT4_FUNC_MODE)         /* PTI19 */
#define    PORT276_FTU6_CH7                                 (PORT_ALT4_FUNC_MODE)         /* PTI20 */
#define    PORT277_ETM_TRACE_D14                            (PORT_ALT4_FUNC_MODE)         /* PTI21 */
#define    PORT278_ETM_TRACE_D15                            (PORT_ALT4_FUNC_MODE)         /* PTI22 */
#define    PORT0_FTU2_QD_PHA                                (PORT_ALT5_FUNC_MODE)          /* PTA0 */
#define    PORT1_FTU1_QD_PHA                                (PORT_ALT5_FUNC_MODE)          /* PTA1 */
#define    PORT2_SENT1_RXD1                                 (PORT_ALT5_FUNC_MODE)          /* PTA2 */
#define    PORT3_SENT1_RXD0                                 (PORT_ALT5_FUNC_MODE)          /* PTA3 */
#define    PORT6_TRGSEL_OUT4                                (PORT_ALT5_FUNC_MODE)          /* PTA6 */
#define    PORT7_FCSPI4_SIN                                 (PORT_ALT5_FUNC_MODE)          /* PTA7 */
#define    PORT11_FCSPI0_PCS3                               (PORT_ALT5_FUNC_MODE)         /* PTA11 */
#define    PORT12_FCSPI0_SOUT                               (PORT_ALT5_FUNC_MODE)         /* PTA12 */
#define    PORT13_FCUART0_RX                                (PORT_ALT5_FUNC_MODE)         /* PTA13 */
#define    PORT14_FCUART0_TX                                (PORT_ALT5_FUNC_MODE)         /* PTA14 */
#define    PORT15_TRGSEL_OUT0                               (PORT_ALT5_FUNC_MODE)         /* PTA15 */
#define    PORT17_FLEXCAN4_TX                               (PORT_ALT5_FUNC_MODE)         /* PTA17 */
#define    PORT18_FLEXCAN4_TX                               (PORT_ALT5_FUNC_MODE)         /* PTA18 */
#define    PORT19_FLEXCAN4_RX                               (PORT_ALT5_FUNC_MODE)         /* PTA19 */
#define    PORT20_FCUART7_RTS                               (PORT_ALT5_FUNC_MODE)         /* PTA20 */
#define    PORT21_SSI0_DIG_28_CH1                           (PORT_ALT5_FUNC_MODE)         /* PTA21 */
#define    PORT22_SSI0_DIG_28_CH0                           (PORT_ALT5_FUNC_MODE)         /* PTA22 */
#define    PORT23_FTU4_QD_PHA                               (PORT_ALT5_FUNC_MODE)         /* PTA23 */
#define    PORT24_FTU4_QD_PHB                               (PORT_ALT5_FUNC_MODE)         /* PTA24 */
#define    PORT25_FCSPI2_SOUT                               (PORT_ALT5_FUNC_MODE)         /* PTA25 */
#define    PORT26_FCUART7_RTS                               (PORT_ALT5_FUNC_MODE)         /* PTA26 */
#define    PORT27_FCSPI1_PCS0                               (PORT_ALT5_FUNC_MODE)         /* PTA27 */
#define    PORT28_FCSPI1_SCK                                (PORT_ALT5_FUNC_MODE)         /* PTA28 */
#define    PORT29_FCSPI1_SIN                                (PORT_ALT5_FUNC_MODE)         /* PTA29 */
#define    PORT30_FCSPI1_PCS2                               (PORT_ALT5_FUNC_MODE)         /* PTA30 */
#define    PORT31_FLEXCAN3_TX                               (PORT_ALT5_FUNC_MODE)         /* PTA31 */
#define    PORT32_FLEXCAN0_RX                               (PORT_ALT5_FUNC_MODE)          /* PTB0 */
#define    PORT33_FLEXCAN0_TX                               (PORT_ALT5_FUNC_MODE)          /* PTB1 */
#define    PORT35_eFTU0_OUT_S25                             (PORT_ALT5_FUNC_MODE)          /* PTB3 */
#define    PORT36_ENET_MDIO                                 (PORT_ALT5_FUNC_MODE)          /* PTB4 */
#define    PORT37_ENET_MDC                                  (PORT_ALT5_FUNC_MODE)          /* PTB5 */
#define    PORT41_TRGSEL_OUT1                               (PORT_ALT5_FUNC_MODE)          /* PTB9 */
#define    PORT42_FLEXCAN7_RX                               (PORT_ALT5_FUNC_MODE)         /* PTB10 */
#define    PORT44_FLEXCAN2_RX                               (PORT_ALT5_FUNC_MODE)         /* PTB12 */
#define    PORT49_FLEXCAN4_RX                               (PORT_ALT5_FUNC_MODE)         /* PTB17 */
#define    PORT50_FLEXCAN3_RX                               (PORT_ALT5_FUNC_MODE)         /* PTB18 */
#define    PORT52_ENET_PPS0                                 (PORT_ALT5_FUNC_MODE)         /* PTB20 */
#define    PORT53_ENET_PPS1                                 (PORT_ALT5_FUNC_MODE)         /* PTB21 */
#define    PORT54_eFTU0_OUT_S11                             (PORT_ALT5_FUNC_MODE)         /* PTB22 */
#define    PORT55_ENET_RXD3                                 (PORT_ALT5_FUNC_MODE)         /* PTB23 */
#define    PORT56_eFTU0_OUT_S24                             (PORT_ALT5_FUNC_MODE)         /* PTB24 */
#define    PORT57_eFTU0_OUT_S24                             (PORT_ALT5_FUNC_MODE)         /* PTB25 */
#define    PORT58_ENET_COL                                  (PORT_ALT5_FUNC_MODE)         /* PTB26 */
#define    PORT59_eFTU0_OUT_S26                             (PORT_ALT5_FUNC_MODE)         /* PTB27 */
#define    PORT60_eFTU0_OUT_S27                             (PORT_ALT5_FUNC_MODE)         /* PTB28 */
#define    PORT61_eFTU0_OUT_S27                             (PORT_ALT5_FUNC_MODE)         /* PTB29 */
#define    PORT62_ENET_CRS                                  (PORT_ALT5_FUNC_MODE)         /* PTB30 */
#define    PORT63_ENET_RXD1                                 (PORT_ALT5_FUNC_MODE)         /* PTB31 */
#define    PORT64_ENET_RXD1                                 (PORT_ALT5_FUNC_MODE)          /* PTC0 */
#define    PORT65_ENET_RXD0                                 (PORT_ALT5_FUNC_MODE)          /* PTC1 */
#define    PORT66_ENET_TXD0                                 (PORT_ALT5_FUNC_MODE)          /* PTC2 */
#define    PORT70_eFTU0_IN4                                 (PORT_ALT5_FUNC_MODE)          /* PTC6 */
#define    PORT71_eFTU0_IN3                                 (PORT_ALT5_FUNC_MODE)          /* PTC7 */
#define    PORT72_FCSPI4_PCS0                               (PORT_ALT5_FUNC_MODE)          /* PTC8 */
#define    PORT73_FCSPI4_SCK                                (PORT_ALT5_FUNC_MODE)          /* PTC9 */
#define    PORT74_eFTU0_OUT_S21                             (PORT_ALT5_FUNC_MODE)         /* PTC10 */
#define    PORT75_eFTU0_OUT_S20                             (PORT_ALT5_FUNC_MODE)         /* PTC11 */
#define    PORT76_TRGSEL_OUT5                               (PORT_ALT5_FUNC_MODE)         /* PTC12 */
#define    PORT77_TRGSEL_OUT6                               (PORT_ALT5_FUNC_MODE)         /* PTC13 */
#define    PORT79_ENET_RXD3                                 (PORT_ALT5_FUNC_MODE)         /* PTC15 */
#define    PORT80_ENET_RXD0                                 (PORT_ALT5_FUNC_MODE)         /* PTC16 */
#define    PORT81_ENET_RX_ER                                (PORT_ALT5_FUNC_MODE)         /* PTC17 */
#define    PORT82_ENET_RXD2                                 (PORT_ALT5_FUNC_MODE)         /* PTC18 */
#define    PORT83_eFTU0_OUT_S7                              (PORT_ALT5_FUNC_MODE)         /* PTC19 */
#define    PORT87_eFTU0_OUT_S18                             (PORT_ALT5_FUNC_MODE)         /* PTC23 */
#define    PORT88_eFTU0_OUT_S19                             (PORT_ALT5_FUNC_MODE)         /* PTC24 */
#define    PORT89_FLEXCAN2_TX                               (PORT_ALT5_FUNC_MODE)         /* PTC25 */
#define    PORT94_FCSPI4_SOUT                               (PORT_ALT5_FUNC_MODE)         /* PTC30 */
#define    PORT95_TRGSEL_OUT3                               (PORT_ALT5_FUNC_MODE)         /* PTC31 */
#define    PORT97_SSI0_DIG_14_CH1                           (PORT_ALT5_FUNC_MODE)          /* PTD1 */
#define    PORT98_FCUART1_TX                                (PORT_ALT5_FUNC_MODE)          /* PTD2 */
#define    PORT100_FTU_FLT16                                (PORT_ALT5_FUNC_MODE)          /* PTD4 */
#define    PORT101_ENET_TXD3                                (PORT_ALT5_FUNC_MODE)          /* PTD5 */
#define    PORT102_ENET_TXD2                                (PORT_ALT5_FUNC_MODE)          /* PTD6 */
#define    PORT103_ENET_TXD1                                (PORT_ALT5_FUNC_MODE)          /* PTD7 */
#define    PORT104_ENET_RX_DV_CTL                           (PORT_ALT5_FUNC_MODE)          /* PTD8 */
#define    PORT105_ENET_RXD2                                (PORT_ALT5_FUNC_MODE)          /* PTD9 */
#define    PORT106_ENET_RX_CLK                              (PORT_ALT5_FUNC_MODE)         /* PTD10 */
#define    PORT107_ENET_TX_CLK                              (PORT_ALT5_FUNC_MODE)         /* PTD11 */
#define    PORT108_ENET_TX_EN_CTL                           (PORT_ALT5_FUNC_MODE)         /* PTD12 */
#define    PORT111_ENET_PPS2                                (PORT_ALT5_FUNC_MODE)         /* PTD15 */
#define    PORT112_FCSPI1_PCS3                              (PORT_ALT5_FUNC_MODE)         /* PTD16 */
#define    PORT113_FCSPI1_PCS1                              (PORT_ALT5_FUNC_MODE)         /* PTD17 */
#define    PORT114_eFTU0_OUT_S17                            (PORT_ALT5_FUNC_MODE)         /* PTD18 */
#define    PORT119_FCUART1_RX                               (PORT_ALT5_FUNC_MODE)         /* PTD23 */
#define    PORT121_FLEXCAN7_TX                              (PORT_ALT5_FUNC_MODE)         /* PTD25 */
#define    PORT125_FTU1_QD_PHB                              (PORT_ALT5_FUNC_MODE)         /* PTD29 */
#define    PORT126_FTU2_QD_PHB                              (PORT_ALT5_FUNC_MODE)         /* PTD30 */
#define    PORT128_FCSPI0_SCK                               (PORT_ALT5_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCSPI0_SIN                               (PORT_ALT5_FUNC_MODE)          /* PTE1 */
#define    PORT130_FLEXCAN1_RX                              (PORT_ALT5_FUNC_MODE)          /* PTE2 */
#define    PORT133_FCSPI2_PCS1                              (PORT_ALT5_FUNC_MODE)          /* PTE5 */
#define    PORT134_FLEXCAN1_TX                              (PORT_ALT5_FUNC_MODE)          /* PTE6 */
#define    PORT135_eFTU0_OUT_S16                            (PORT_ALT5_FUNC_MODE)          /* PTE7 */
#define    PORT136_ENET_MDC                                 (PORT_ALT5_FUNC_MODE)          /* PTE8 */
#define    PORT137_ENET_PPS3                                (PORT_ALT5_FUNC_MODE)          /* PTE9 */
#define    PORT138_FCSPI2_SIN                               (PORT_ALT5_FUNC_MODE)         /* PTE10 */
#define    PORT139_FCSPI2_PCS0                              (PORT_ALT5_FUNC_MODE)         /* PTE11 */
#define    PORT140_FCSPI1_SOUT                              (PORT_ALT5_FUNC_MODE)         /* PTE12 */
#define    PORT141_FCSPI2_SCK                               (PORT_ALT5_FUNC_MODE)         /* PTE13 */
#define    PORT143_SSI0_DIG_14_CH0                          (PORT_ALT5_FUNC_MODE)         /* PTE15 */
#define    PORT147_CMP0_OUT                                 (PORT_ALT5_FUNC_MODE)         /* PTE19 */
#define    PORT148_FLEXCAN6_TX                              (PORT_ALT5_FUNC_MODE)         /* PTE20 */
#define    PORT149_FCUART0_RTS                              (PORT_ALT5_FUNC_MODE)         /* PTE21 */
#define    PORT150_FCUART0_CTS                              (PORT_ALT5_FUNC_MODE)         /* PTE22 */
#define    PORT151_FCSPI0_PCS2                              (PORT_ALT5_FUNC_MODE)         /* PTE23 */
#define    PORT152_FCSPI0_PCS1                              (PORT_ALT5_FUNC_MODE)         /* PTE24 */
#define    PORT153_FCSPI0_PCS0                              (PORT_ALT5_FUNC_MODE)         /* PTE25 */
#define    PORT154_LP_WAKEUP3                               (PORT_ALT5_FUNC_MODE)         /* PTE26 */
#define    PORT163_FCUART7_TX                               (PORT_ALT5_FUNC_MODE)          /* PTF3 */
#define    PORT166_eFTU0_IN0                                (PORT_ALT5_FUNC_MODE)          /* PTF6 */
#define    PORT167_FTU1_QD_PHA                              (PORT_ALT5_FUNC_MODE)          /* PTF7 */
#define    PORT168_FTU_FLT5                                 (PORT_ALT5_FUNC_MODE)          /* PTF8 */
#define    PORT169_eFTU0_OUT_S25                            (PORT_ALT5_FUNC_MODE)          /* PTF9 */
#define    PORT170_eFTU0_OUT_S26                            (PORT_ALT5_FUNC_MODE)         /* PTF10 */
#define    PORT173_FLEXCAN6_TX                              (PORT_ALT5_FUNC_MODE)         /* PTF13 */
#define    PORT174_FLEXCAN6_RX                              (PORT_ALT5_FUNC_MODE)         /* PTF14 */
#define    PORT181_RTC_CLKOUT                               (PORT_ALT5_FUNC_MODE)         /* PTF21 */
#define    PORT183_LP_WAKEUP4                               (PORT_ALT5_FUNC_MODE)         /* PTF23 */
#define    PORT184_FCSPI2_PCS3                              (PORT_ALT5_FUNC_MODE)         /* PTF24 */
#define    PORT195_ETM_TRACE_D8                             (PORT_ALT5_FUNC_MODE)          /* PTG3 */
#define    PORT196_ETM_TRACE_D9                             (PORT_ALT5_FUNC_MODE)          /* PTG4 */
#define    PORT197_ETM_TRACE_D10                            (PORT_ALT5_FUNC_MODE)          /* PTG5 */
#define    PORT202_FTU2_QD_PHA                              (PORT_ALT5_FUNC_MODE)         /* PTG10 */
#define    PORT203_FTU2_QD_PHB                              (PORT_ALT5_FUNC_MODE)         /* PTG11 */
#define    PORT205_FCSPI4_PCS2                              (PORT_ALT5_FUNC_MODE)         /* PTG13 */
#define    PORT206_FCSPI4_PCS3                              (PORT_ALT5_FUNC_MODE)         /* PTG14 */
#define    PORT207_TRGSEL_OUT2                              (PORT_ALT5_FUNC_MODE)         /* PTG15 */
#define    PORT208_TRGSEL_OUT3                              (PORT_ALT5_FUNC_MODE)         /* PTG16 */
#define    PORT209_FTU5_QD_PHA                              (PORT_ALT5_FUNC_MODE)         /* PTG17 */
#define    PORT210_FLEXCAN2_RX                              (PORT_ALT5_FUNC_MODE)         /* PTG18 */
#define    PORT211_FLEXCAN2_TX                              (PORT_ALT5_FUNC_MODE)         /* PTG19 */
#define    PORT212_FLEXCAN3_TX                              (PORT_ALT5_FUNC_MODE)         /* PTG20 */
#define    PORT214_FLEXCAN7_TX                              (PORT_ALT5_FUNC_MODE)         /* PTG22 */
#define    PORT215_FLEXCAN7_RX                              (PORT_ALT5_FUNC_MODE)         /* PTG23 */
#define    PORT227_ETM_TRACE_D11                            (PORT_ALT5_FUNC_MODE)          /* PTH3 */
#define    PORT228_ETM_TRACE_D12                            (PORT_ALT5_FUNC_MODE)          /* PTH4 */
#define    PORT229_ETM_TRACE_D13                            (PORT_ALT5_FUNC_MODE)          /* PTH5 */
#define    PORT231_ENET_COL                                 (PORT_ALT5_FUNC_MODE)          /* PTH7 */
#define    PORT232_ENET_CRS                                 (PORT_ALT5_FUNC_MODE)          /* PTH8 */
#define    PORT233_FTU1_QD_PHB                              (PORT_ALT5_FUNC_MODE)          /* PTH9 */
#define    PORT239_FTU5_QD_PHB                              (PORT_ALT5_FUNC_MODE)         /* PTH15 */
#define    PORT242_FLEXCAN3_RX                              (PORT_ALT5_FUNC_MODE)         /* PTH18 */
#define    PORT245_FTU_FLT4                                 (PORT_ALT5_FUNC_MODE)         /* PTH21 */
#define    PORT258_FCUART7_RX                               (PORT_ALT5_FUNC_MODE)          /* PTI2 */
#define    PORT259_ETM_TRACE_D14                            (PORT_ALT5_FUNC_MODE)          /* PTI3 */
#define    PORT260_ETM_TRACE_D15                            (PORT_ALT5_FUNC_MODE)          /* PTI4 */
#define    PORT261_eFTU0_IN4                                (PORT_ALT5_FUNC_MODE)          /* PTI5 */
#define    PORT265_FCSPI4_PCS1                              (PORT_ALT5_FUNC_MODE)          /* PTI9 */
#define    PORT271_FLEXCAN1_TX                              (PORT_ALT5_FUNC_MODE)         /* PTI15 */
#define    PORT272_FLEXCAN1_RX                              (PORT_ALT5_FUNC_MODE)         /* PTI16 */
#define    PORT273_FTU_FLT20                                (PORT_ALT5_FUNC_MODE)         /* PTI17 */
#define    PORT274_eFTU0_IN2                                (PORT_ALT5_FUNC_MODE)         /* PTI18 */
#define    PORT275_eFTU0_IN3                                (PORT_ALT5_FUNC_MODE)         /* PTI19 */
#define    PORT277_FCSPI2_PCS2                              (PORT_ALT5_FUNC_MODE)         /* PTI21 */
#define    PORT279_FCUART7_CTS                              (PORT_ALT5_FUNC_MODE)         /* PTI23 */
#define    PORT0_FCUART0_CTS                                (PORT_ALT6_FUNC_MODE)          /* PTA0 */
#define    PORT1_FCUART0_RTS                                (PORT_ALT6_FUNC_MODE)          /* PTA1 */
#define    PORT2_FCUART0_RX                                 (PORT_ALT6_FUNC_MODE)          /* PTA2 */
#define    PORT3_FCUART0_TX                                 (PORT_ALT6_FUNC_MODE)          /* PTA3 */
#define    PORT6_SDADC0_CH0                                 (PORT_ALT6_FUNC_MODE)          /* PTA6 */
#define    PORT7_FCUART4_TX                                 (PORT_ALT6_FUNC_MODE)          /* PTA7 */
#define    PORT12_FTU2_QD_PHB                               (PORT_ALT6_FUNC_MODE)         /* PTA12 */
#define    PORT13_FTU2_QD_PHA                               (PORT_ALT6_FUNC_MODE)         /* PTA13 */
#define    PORT14_FCIIC1_SDA                                (PORT_ALT6_FUNC_MODE)         /* PTA14 */
#define    PORT15_FLEXCAN3_RX                               (PORT_ALT6_FUNC_MODE)         /* PTA15 */
#define    PORT21_FLEXCAN2_TX                               (PORT_ALT6_FUNC_MODE)         /* PTA21 */
#define    PORT22_FLEXCAN7_TX                               (PORT_ALT6_FUNC_MODE)         /* PTA22 */
#define    PORT23_eFTU0_OUT_S5                              (PORT_ALT6_FUNC_MODE)         /* PTA23 */
#define    PORT24_eFTU0_OUT_S6                              (PORT_ALT6_FUNC_MODE)         /* PTA24 */
#define    PORT26_eFTU0_OUT_S0                              (PORT_ALT6_FUNC_MODE)         /* PTA26 */
#define    PORT30_FTU5_QD_PHB                               (PORT_ALT6_FUNC_MODE)         /* PTA30 */
#define    PORT31_eFTU0_OUT_S13                             (PORT_ALT6_FUNC_MODE)         /* PTA31 */
#define    PORT32_FTU3_CH6                                  (PORT_ALT6_FUNC_MODE)          /* PTB0 */
#define    PORT33_FTU3_CH5                                  (PORT_ALT6_FUNC_MODE)          /* PTB1 */
#define    PORT35_FTU3_CH7                                  (PORT_ALT6_FUNC_MODE)          /* PTB3 */
#define    PORT36_eFTU0_OUT_S2                              (PORT_ALT6_FUNC_MODE)          /* PTB4 */
#define    PORT37_eFTU0_OUT_S1                              (PORT_ALT6_FUNC_MODE)          /* PTB5 */
#define    PORT40_FCUART1_CTS                               (PORT_ALT6_FUNC_MODE)          /* PTB8 */
#define    PORT41_FCUART1_TX                                (PORT_ALT6_FUNC_MODE)          /* PTB9 */
#define    PORT42_eFTU0_OUT_S22                             (PORT_ALT6_FUNC_MODE)         /* PTB10 */
#define    PORT49_SDADC0_CLK0                               (PORT_ALT6_FUNC_MODE)         /* PTB17 */
#define    PORT50_eFTU0_OUT_S14                             (PORT_ALT6_FUNC_MODE)         /* PTB18 */
#define    PORT51_eFTU0_OUT_S15                             (PORT_ALT6_FUNC_MODE)         /* PTB19 */
#define    PORT52_SSI0_DIG_28_CH0                           (PORT_ALT6_FUNC_MODE)         /* PTB20 */
#define    PORT53_SSI0_DIG_14_CH0                           (PORT_ALT6_FUNC_MODE)         /* PTB21 */
#define    PORT54_LDI0_LE                                   (PORT_ALT6_FUNC_MODE)         /* PTB22 */
#define    PORT55_TRGSEL_OUT3                               (PORT_ALT6_FUNC_MODE)         /* PTB23 */
#define    PORT57_FTU3_CH6                                  (PORT_ALT6_FUNC_MODE)         /* PTB25 */
#define    PORT58_eFTU0_OUT_S3                              (PORT_ALT6_FUNC_MODE)         /* PTB26 */
#define    PORT59_FTU1_CH4                                  (PORT_ALT6_FUNC_MODE)         /* PTB27 */
#define    PORT60_FTU1_CH5                                  (PORT_ALT6_FUNC_MODE)         /* PTB28 */
#define    PORT62_eFTU0_OUT_S4                              (PORT_ALT6_FUNC_MODE)         /* PTB30 */
#define    PORT63_TRGSEL_OUT5                               (PORT_ALT6_FUNC_MODE)         /* PTB31 */
#define    PORT64_LDI0_DCLK                                 (PORT_ALT6_FUNC_MODE)          /* PTC0 */
#define    PORT65_LDI0_DATA0                                (PORT_ALT6_FUNC_MODE)          /* PTC1 */
#define    PORT66_eFTU0_OUT_S6                              (PORT_ALT6_FUNC_MODE)          /* PTC2 */
#define    PORT67_eFTU0_OUT_S5                              (PORT_ALT6_FUNC_MODE)          /* PTC3 */
#define    PORT68_FTU1_QD_PHB                               (PORT_ALT6_FUNC_MODE)          /* PTC4 */
#define    PORT69_FTU1_QD_PHA                               (PORT_ALT6_FUNC_MODE)          /* PTC5 */
#define    PORT70_FTU1_QD_PHB                               (PORT_ALT6_FUNC_MODE)          /* PTC6 */
#define    PORT71_FTU6_CH7                                  (PORT_ALT6_FUNC_MODE)          /* PTC7 */
#define    PORT72_FCUART0_CTS                               (PORT_ALT6_FUNC_MODE)          /* PTC8 */
#define    PORT73_FCUART0_RTS                               (PORT_ALT6_FUNC_MODE)          /* PTC9 */
#define    PORT74_SSI0_DIG_14_CH3                           (PORT_ALT6_FUNC_MODE)         /* PTC10 */
#define    PORT75_SSI0_DIG_28_CH3                           (PORT_ALT6_FUNC_MODE)         /* PTC11 */
#define    PORT76_FLEXCAN5_RX                               (PORT_ALT6_FUNC_MODE)         /* PTC12 */
#define    PORT77_FLEXCAN5_TX                               (PORT_ALT6_FUNC_MODE)         /* PTC13 */
#define    PORT78_TRGSEL_OUT2                               (PORT_ALT6_FUNC_MODE)         /* PTC14 */
#define    PORT79_LDI0_SOE                                  (PORT_ALT6_FUNC_MODE)         /* PTC15 */
#define    PORT80_eFTU0_OUT_S11                             (PORT_ALT6_FUNC_MODE)         /* PTC16 */
#define    PORT81_eFTU0_OUT_S10                             (PORT_ALT6_FUNC_MODE)         /* PTC17 */
#define    PORT82_TRGSEL_OUT4                               (PORT_ALT6_FUNC_MODE)         /* PTC18 */
#define    PORT83_SSI0_DIG_28_CH2                           (PORT_ALT6_FUNC_MODE)         /* PTC19 */
#define    PORT84_SSI0_DIG_14_CH2                           (PORT_ALT6_FUNC_MODE)         /* PTC20 */
#define    PORT91_FCUART5_RX                                (PORT_ALT6_FUNC_MODE)         /* PTC27 */
#define    PORT92_FTU1_CH6                                  (PORT_ALT6_FUNC_MODE)         /* PTC28 */
#define    PORT95_SDADC0_CH1                                (PORT_ALT6_FUNC_MODE)         /* PTC31 */
#define    PORT96_eFTU0_IN6                                 (PORT_ALT6_FUNC_MODE)          /* PTD0 */
#define    PORT97_FLEXCAN2_RX                               (PORT_ALT6_FUNC_MODE)          /* PTD1 */
#define    PORT101_LDI0_DATA2                               (PORT_ALT6_FUNC_MODE)          /* PTD5 */
#define    PORT102_LDI0_DATA3                               (PORT_ALT6_FUNC_MODE)          /* PTD6 */
#define    PORT103_eFTU0_OUT_S7                             (PORT_ALT6_FUNC_MODE)          /* PTD7 */
#define    PORT105_LDI0_GCLK                                (PORT_ALT6_FUNC_MODE)          /* PTD9 */
#define    PORT106_LDI0_DATA1                               (PORT_ALT6_FUNC_MODE)         /* PTD10 */
#define    PORT111_FCUART2_RTS                              (PORT_ALT6_FUNC_MODE)         /* PTD15 */
#define    PORT113_FTU5_QD_PHA                              (PORT_ALT6_FUNC_MODE)         /* PTD17 */
#define    PORT121_eFTU0_OUT_S23                            (PORT_ALT6_FUNC_MODE)         /* PTD25 */
#define    PORT122_eFTU0_IN7                                (PORT_ALT6_FUNC_MODE)         /* PTD26 */
#define    PORT123_eFTU0_IN6                                (PORT_ALT6_FUNC_MODE)         /* PTD27 */
#define    PORT124_eFTU0_IN5                                (PORT_ALT6_FUNC_MODE)         /* PTD28 */
#define    PORT127_FTU1_QD_PHA                              (PORT_ALT6_FUNC_MODE)         /* PTD31 */
#define    PORT128_FTU_FLT19                                (PORT_ALT6_FUNC_MODE)          /* PTE0 */
#define    PORT129_FTU_FLT18                                (PORT_ALT6_FUNC_MODE)          /* PTE1 */
#define    PORT130_FCUART1_CTS                              (PORT_ALT6_FUNC_MODE)          /* PTE2 */
#define    PORT131_FTU_TCK0                                 (PORT_ALT6_FUNC_MODE)          /* PTE3 */
#define    PORT132_eFTU_GTOM13                              (PORT_ALT6_FUNC_MODE)          /* PTE4 */
#define    PORT133_eFTU0_IN5                                (PORT_ALT6_FUNC_MODE)          /* PTE5 */
#define    PORT134_FCUART1_RTS                              (PORT_ALT6_FUNC_MODE)          /* PTE6 */
#define    PORT135_FCUART4_RX                               (PORT_ALT6_FUNC_MODE)          /* PTE7 */
#define    PORT136_eFTU0_OUT_S0                             (PORT_ALT6_FUNC_MODE)          /* PTE8 */
#define    PORT137_FCUART2_CTS                              (PORT_ALT6_FUNC_MODE)          /* PTE9 */
#define    PORT142_FLEXCAN7_RX                              (PORT_ALT6_FUNC_MODE)         /* PTE14 */
#define    PORT143_eFTU0_IN2                                (PORT_ALT6_FUNC_MODE)         /* PTE15 */
#define    PORT146_FLEXCAN3_TX                              (PORT_ALT6_FUNC_MODE)         /* PTE18 */
#define    PORT147_FLEXCAN6_RX                              (PORT_ALT6_FUNC_MODE)         /* PTE19 */
#define    PORT152_LP_WAKEUP1                               (PORT_ALT6_FUNC_MODE)         /* PTE24 */
#define    PORT154_FTU2_QD_PHA                              (PORT_ALT6_FUNC_MODE)         /* PTE26 */
#define    PORT155_FTU2_QD_PHB                              (PORT_ALT6_FUNC_MODE)         /* PTE27 */
#define    PORT163_eFTU0_IN4                                (PORT_ALT6_FUNC_MODE)          /* PTF3 */
#define    PORT164_eFTU_GTOM5                               (PORT_ALT6_FUNC_MODE)          /* PTF4 */
#define    PORT165_eFTU_GTOM6                               (PORT_ALT6_FUNC_MODE)          /* PTF5 */
#define    PORT166_eFTU0_OUT_S10                            (PORT_ALT6_FUNC_MODE)          /* PTF6 */
#define    PORT168_TRGSEL_OUT4                              (PORT_ALT6_FUNC_MODE)          /* PTF8 */
#define    PORT173_MSC0_SDI1                                (PORT_ALT6_FUNC_MODE)         /* PTF13 */
#define    PORT174_FCUART5_TX                               (PORT_ALT6_FUNC_MODE)         /* PTF14 */
#define    PORT178_eFTU0_IN0                                (PORT_ALT6_FUNC_MODE)         /* PTF18 */
#define    PORT179_eFTU0_IN1                                (PORT_ALT6_FUNC_MODE)         /* PTF19 */
#define    PORT180_eFTU0_IN2                                (PORT_ALT6_FUNC_MODE)         /* PTF20 */
#define    PORT184_eFTU0_OUT_S2                             (PORT_ALT6_FUNC_MODE)         /* PTF24 */
#define    PORT195_eFTU0_OUT_S8                             (PORT_ALT6_FUNC_MODE)          /* PTG3 */
#define    PORT196_eFTU_GTOM7                               (PORT_ALT6_FUNC_MODE)          /* PTG4 */
#define    PORT197_eFTU0_OUT_S9                             (PORT_ALT6_FUNC_MODE)          /* PTG5 */
#define    PORT198_TRGSEL_OUT3                              (PORT_ALT6_FUNC_MODE)          /* PTG6 */
#define    PORT199_TRGSEL_OUT2                              (PORT_ALT6_FUNC_MODE)          /* PTG7 */
#define    PORT200_LDI0_DOE                                 (PORT_ALT6_FUNC_MODE)          /* PTG8 */
#define    PORT202_eFTU0_OUT_S28                            (PORT_ALT6_FUNC_MODE)         /* PTG10 */
#define    PORT203_MSC0_EN0                                 (PORT_ALT6_FUNC_MODE)         /* PTG11 */
#define    PORT204_MSC0_SDI1                                (PORT_ALT6_FUNC_MODE)         /* PTG12 */
#define    PORT205_MSC0_FCLP                                (PORT_ALT6_FUNC_MODE)         /* PTG13 */
#define    PORT207_FCUART1_RX                               (PORT_ALT6_FUNC_MODE)         /* PTG15 */
#define    PORT209_FTU6_CH1                                 (PORT_ALT6_FUNC_MODE)         /* PTG17 */
#define    PORT224_eFTU_GTOM0                               (PORT_ALT6_FUNC_MODE)          /* PTH0 */
#define    PORT225_eFTU_GTOM1                               (PORT_ALT6_FUNC_MODE)          /* PTH1 */
#define    PORT226_eFTU_GTOM2                               (PORT_ALT6_FUNC_MODE)          /* PTH2 */
#define    PORT227_eFTU0_OUT_S10                            (PORT_ALT6_FUNC_MODE)          /* PTH3 */
#define    PORT228_FCUART3_TX                               (PORT_ALT6_FUNC_MODE)          /* PTH4 */
#define    PORT229_FCUART3_RX                               (PORT_ALT6_FUNC_MODE)          /* PTH5 */
#define    PORT230_LDI0_SDI                                 (PORT_ALT6_FUNC_MODE)          /* PTH6 */
#define    PORT231_eFTU_GTOM5                               (PORT_ALT6_FUNC_MODE)          /* PTH7 */
#define    PORT235_MSC0_FCLP                                (PORT_ALT6_FUNC_MODE)         /* PTH11 */
#define    PORT239_FTU6_CH2                                 (PORT_ALT6_FUNC_MODE)         /* PTH15 */
#define    PORT240_FCUART3_TX                               (PORT_ALT6_FUNC_MODE)         /* PTH16 */
#define    PORT241_FCUART3_RX                               (PORT_ALT6_FUNC_MODE)         /* PTH17 */
#define    PORT243_TRGSEL_OUT0                              (PORT_ALT6_FUNC_MODE)         /* PTH19 */
#define    PORT244_TRGSEL_OUT1                              (PORT_ALT6_FUNC_MODE)         /* PTH20 */
#define    PORT245_TRGSEL_OUT5                              (PORT_ALT6_FUNC_MODE)         /* PTH21 */
#define    PORT256_eFTU_GTOM9                               (PORT_ALT6_FUNC_MODE)          /* PTI0 */
#define    PORT257_eFTU_GTOM4                               (PORT_ALT6_FUNC_MODE)          /* PTI1 */
#define    PORT258_eFTU0_IN3                                (PORT_ALT6_FUNC_MODE)          /* PTI2 */
#define    PORT261_eFTU0_OUT_S7                             (PORT_ALT6_FUNC_MODE)          /* PTI5 */
#define    PORT265_MSC0_SOP                                 (PORT_ALT6_FUNC_MODE)          /* PTI9 */
#define    PORT269_MSC0_EN1                                 (PORT_ALT6_FUNC_MODE)         /* PTI13 */
#define    PORT273_FTU6_CH7                                 (PORT_ALT6_FUNC_MODE)         /* PTI17 */
#define    PORT274_FLEXCAN0_TX                              (PORT_ALT6_FUNC_MODE)         /* PTI18 */
#define    PORT275_FLEXCAN0_RX                              (PORT_ALT6_FUNC_MODE)         /* PTI19 */
#define    PORT277_eFTU0_OUT_S3                             (PORT_ALT6_FUNC_MODE)         /* PTI21 */
#define    PORT278_eFTU0_OUT_S4                             (PORT_ALT6_FUNC_MODE)         /* PTI22 */
#define    PORT279_eFTU0_OUT_S1                             (PORT_ALT6_FUNC_MODE)         /* PTI23 */
#define    PORT0_TRGSEL_OUT3                                (PORT_ALT7_FUNC_MODE)          /* PTA0 */
#define    PORT1_TRGSEL_OUT0                                (PORT_ALT7_FUNC_MODE)          /* PTA1 */
#define    PORT2_FLEXCORE_TDO                               (PORT_ALT7_FUNC_MODE)          /* PTA2 */
#define    PORT3_FLEXCORE_TCLK                              (PORT_ALT7_FUNC_MODE)          /* PTA3 */
#define    PORT4_JTAG_TMS_SWD_DIO                           (PORT_ALT7_FUNC_MODE)          /* PTA4 */
#define    PORT6_FCSPI5_SIN                                 (PORT_ALT7_FUNC_MODE)          /* PTA6 */
#define    PORT7_eFTU0_OUT_S29                              (PORT_ALT7_FUNC_MODE)          /* PTA7 */
#define    PORT8_eFTU_GTOM13                                (PORT_ALT7_FUNC_MODE)          /* PTA8 */
#define    PORT9_eFTU_GTOM12                                (PORT_ALT7_FUNC_MODE)          /* PTA9 */
#define    PORT10_JTAG_TDO                                  (PORT_ALT7_FUNC_MODE)         /* PTA10 */
#define    PORT11_NMI_b                                     (PORT_ALT7_FUNC_MODE)         /* PTA11 */
#define    PORT13_eFTU_GTOM5                                (PORT_ALT7_FUNC_MODE)         /* PTA13 */
#define    PORT14_eFTU_GTOM2                                (PORT_ALT7_FUNC_MODE)         /* PTA14 */
#define    PORT15_eFTU_GTOM11                               (PORT_ALT7_FUNC_MODE)         /* PTA15 */
#define    PORT32_FCSPI5_PCS2                               (PORT_ALT7_FUNC_MODE)          /* PTB0 */
#define    PORT33_FCSPI5_PCS1                               (PORT_ALT7_FUNC_MODE)          /* PTB1 */
#define    PORT40_eFTU_GTOM0                                (PORT_ALT7_FUNC_MODE)          /* PTB8 */
#define    PORT41_eFTU0_OUT_S30                             (PORT_ALT7_FUNC_MODE)          /* PTB9 */
#define    PORT44_eFTU0_OUT_S4                              (PORT_ALT7_FUNC_MODE)         /* PTB12 */
#define    PORT45_eFTU0_OUT_S3                              (PORT_ALT7_FUNC_MODE)         /* PTB13 */
#define    PORT46_eFTU0_OUT_S2                              (PORT_ALT7_FUNC_MODE)         /* PTB14 */
#define    PORT47_eFTU0_OUT_S1                              (PORT_ALT7_FUNC_MODE)         /* PTB15 */
#define    PORT48_eFTU0_OUT_S0                              (PORT_ALT7_FUNC_MODE)         /* PTB16 */
#define    PORT52_SCG_CLKOUT                                (PORT_ALT7_FUNC_MODE)         /* PTB20 */
#define    PORT53_RTC_CLKOUT                                (PORT_ALT7_FUNC_MODE)         /* PTB21 */
#define    PORT54_FCSPI3_PCS2                               (PORT_ALT7_FUNC_MODE)         /* PTB22 */
#define    PORT55_eFTU0_OUT_S14                             (PORT_ALT7_FUNC_MODE)         /* PTB23 */
#define    PORT58_FCSPI3_SIN                                (PORT_ALT7_FUNC_MODE)         /* PTB26 */
#define    PORT61_MSC0_FCLP                                 (PORT_ALT7_FUNC_MODE)         /* PTB29 */
#define    PORT62_FCSPI3_SOUT                               (PORT_ALT7_FUNC_MODE)         /* PTB30 */
#define    PORT63_eFTU0_OUT_S12                             (PORT_ALT7_FUNC_MODE)         /* PTB31 */
#define    PORT64_FCSPI3_PCS1                               (PORT_ALT7_FUNC_MODE)          /* PTC0 */
#define    PORT65_FCSPI3_PCS0                               (PORT_ALT7_FUNC_MODE)          /* PTC1 */
#define    PORT67_FCSPI3_PCS0                               (PORT_ALT7_FUNC_MODE)          /* PTC3 */
#define    PORT68_JTAG_TCLK_SWD_CLK                         (PORT_ALT7_FUNC_MODE)          /* PTC4 */
#define    PORT69_JTAG_TDI                                  (PORT_ALT7_FUNC_MODE)          /* PTC5 */
#define    PORT70_eFTU0_OUT_S8                              (PORT_ALT7_FUNC_MODE)          /* PTC6 */
#define    PORT71_eFTU0_OUT_S7                              (PORT_ALT7_FUNC_MODE)          /* PTC7 */
#define    PORT72_eFTU0_OUT_S31                             (PORT_ALT7_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU1_CH7                                  (PORT_ALT7_FUNC_MODE)          /* PTC9 */
#define    PORT74_MSC0_EN1                                  (PORT_ALT7_FUNC_MODE)         /* PTC10 */
#define    PORT75_MSC0_EN0                                  (PORT_ALT7_FUNC_MODE)         /* PTC11 */
#define    PORT76_MSC0_EN2                                  (PORT_ALT7_FUNC_MODE)         /* PTC12 */
#define    PORT77_MSC0_SOP                                  (PORT_ALT7_FUNC_MODE)         /* PTC13 */
#define    PORT78_eFTU0_OUT_S15                             (PORT_ALT7_FUNC_MODE)         /* PTC14 */
#define    PORT79_FCSPI3_PCS3                               (PORT_ALT7_FUNC_MODE)         /* PTC15 */
#define    PORT80_FCUART5_RX                                (PORT_ALT7_FUNC_MODE)         /* PTC16 */
#define    PORT81_FCUART5_TX                                (PORT_ALT7_FUNC_MODE)         /* PTC17 */
#define    PORT82_eFTU0_OUT_S13                             (PORT_ALT7_FUNC_MODE)         /* PTC18 */
#define    PORT83_MSC0_EN3                                  (PORT_ALT7_FUNC_MODE)         /* PTC19 */
#define    PORT84_MSC0_SDI2                                 (PORT_ALT7_FUNC_MODE)         /* PTC20 */
#define    PORT85_MSC0_SDI3                                 (PORT_ALT7_FUNC_MODE)         /* PTC21 */
#define    PORT86_MSC0_SDI1                                 (PORT_ALT7_FUNC_MODE)         /* PTC22 */
#define    PORT87_MSC0_SDI0                                 (PORT_ALT7_FUNC_MODE)         /* PTC23 */
#define    PORT89_eFTU0_OUT_S17                             (PORT_ALT7_FUNC_MODE)         /* PTC25 */
#define    PORT90_eFTU0_OUT_S3                              (PORT_ALT7_FUNC_MODE)         /* PTC26 */
#define    PORT91_eFTU_GTOM9                                (PORT_ALT7_FUNC_MODE)         /* PTC27 */
#define    PORT92_eFTU0_OUT_S31                             (PORT_ALT7_FUNC_MODE)         /* PTC28 */
#define    PORT93_eFTU0_OUT_S28                             (PORT_ALT7_FUNC_MODE)         /* PTC29 */
#define    PORT94_eFTU0_OUT_S30                             (PORT_ALT7_FUNC_MODE)         /* PTC30 */
#define    PORT95_FCSPI5_SCK                                (PORT_ALT7_FUNC_MODE)         /* PTC31 */
#define    PORT96_TRGSEL_OUT1                               (PORT_ALT7_FUNC_MODE)          /* PTD0 */
#define    PORT97_TRGSEL_OUT2                               (PORT_ALT7_FUNC_MODE)          /* PTD1 */
#define    PORT98_FLEXCORE_TMS                              (PORT_ALT7_FUNC_MODE)          /* PTD2 */
#define    PORT99_eFTU0_OUT_S21                             (PORT_ALT7_FUNC_MODE)          /* PTD3 */
#define    PORT100_eFTU0_OUT_S20                            (PORT_ALT7_FUNC_MODE)          /* PTD4 */
#define    PORT101_FCSPI3_SIN                               (PORT_ALT7_FUNC_MODE)          /* PTD5 */
#define    PORT102_FCSPI3_SCK                               (PORT_ALT7_FUNC_MODE)          /* PTD6 */
#define    PORT104_FCUART4_RX                               (PORT_ALT7_FUNC_MODE)          /* PTD8 */
#define    PORT105_FCUART4_TX                               (PORT_ALT7_FUNC_MODE)          /* PTD9 */
#define    PORT106_eFTU0_OUT_S9                             (PORT_ALT7_FUNC_MODE)         /* PTD10 */
#define    PORT107_eFTU0_OUT_S8                             (PORT_ALT7_FUNC_MODE)         /* PTD11 */
#define    PORT108_FCSPI3_SOUT                              (PORT_ALT7_FUNC_MODE)         /* PTD12 */
#define    PORT111_eFTU0_OUT_S11                            (PORT_ALT7_FUNC_MODE)         /* PTD15 */
#define    PORT112_eFTU0_OUT_S4                             (PORT_ALT7_FUNC_MODE)         /* PTD16 */
#define    PORT114_FCSPI5_PCS0                              (PORT_ALT7_FUNC_MODE)         /* PTD18 */
#define    PORT115_eFTU0_OUT_S27                            (PORT_ALT7_FUNC_MODE)         /* PTD19 */
#define    PORT116_eFTU0_OUT_S18                            (PORT_ALT7_FUNC_MODE)         /* PTD20 */
#define    PORT117_eFTU0_OUT_S19                            (PORT_ALT7_FUNC_MODE)         /* PTD21 */
#define    PORT118_eFTU0_OUT_S5                             (PORT_ALT7_FUNC_MODE)         /* PTD22 */
#define    PORT119_FLEXCORE_TDI                             (PORT_ALT7_FUNC_MODE)         /* PTD23 */
#define    PORT120_FLEXCORE_TRST                            (PORT_ALT7_FUNC_MODE)         /* PTD24 */
#define    PORT122_eFTU0_OUT_S25                            (PORT_ALT7_FUNC_MODE)         /* PTD26 */
#define    PORT123_eFTU0_OUT_S26                            (PORT_ALT7_FUNC_MODE)         /* PTD27 */
#define    PORT124_eFTU_GTOM1                               (PORT_ALT7_FUNC_MODE)         /* PTD28 */
#define    PORT125_eFTU_GTOM2                               (PORT_ALT7_FUNC_MODE)         /* PTD29 */
#define    PORT126_eFTU_GTOM3                               (PORT_ALT7_FUNC_MODE)         /* PTD30 */
#define    PORT127_eFTU_GTOM4                               (PORT_ALT7_FUNC_MODE)         /* PTD31 */
#define    PORT128_eFTU_GTOM9                               (PORT_ALT7_FUNC_MODE)          /* PTE0 */
#define    PORT129_eFTU_GTOM8                               (PORT_ALT7_FUNC_MODE)          /* PTE1 */
#define    PORT130_eFTU_GTOM15                              (PORT_ALT7_FUNC_MODE)          /* PTE2 */
#define    PORT133_eFTU0_OUT_S10                            (PORT_ALT7_FUNC_MODE)          /* PTE5 */
#define    PORT134_eFTU_GTOM14                              (PORT_ALT7_FUNC_MODE)          /* PTE6 */
#define    PORT135_FCSPI5_SOUT                              (PORT_ALT7_FUNC_MODE)          /* PTE7 */
#define    PORT136_FCSPI3_SCK                               (PORT_ALT7_FUNC_MODE)          /* PTE8 */
#define    PORT137_eFTU0_OUT_S12                            (PORT_ALT7_FUNC_MODE)          /* PTE9 */
#define    PORT138_TRGSEL_OUT4                              (PORT_ALT7_FUNC_MODE)         /* PTE10 */
#define    PORT139_TRGSEL_OUT5                              (PORT_ALT7_FUNC_MODE)         /* PTE11 */
#define    PORT143_TRGSEL_OUT6                              (PORT_ALT7_FUNC_MODE)         /* PTE15 */
#define    PORT144_TRGSEL_OUT7                              (PORT_ALT7_FUNC_MODE)         /* PTE16 */
#define    PORT145_eFTU_GTOM9                               (PORT_ALT7_FUNC_MODE)         /* PTE17 */
#define    PORT146_eFTU_GTOM10                              (PORT_ALT7_FUNC_MODE)         /* PTE18 */
#define    PORT147_eFTU_GTOM0                               (PORT_ALT7_FUNC_MODE)         /* PTE19 */
#define    PORT148_eFTU_GTOM1                               (PORT_ALT7_FUNC_MODE)         /* PTE20 */
#define    PORT149_eFTU_GTOM3                               (PORT_ALT7_FUNC_MODE)         /* PTE21 */
#define    PORT150_eFTU_GTOM4                               (PORT_ALT7_FUNC_MODE)         /* PTE22 */
#define    PORT151_eFTU_GTOM6                               (PORT_ALT7_FUNC_MODE)         /* PTE23 */
#define    PORT152_eFTU_GTOM7                               (PORT_ALT7_FUNC_MODE)         /* PTE24 */
#define    PORT153_TRGSEL_OUT7                              (PORT_ALT7_FUNC_MODE)         /* PTE25 */
#define    PORT154_eFTU_GTOM10                              (PORT_ALT7_FUNC_MODE)         /* PTE26 */
#define    PORT155_eFTU_GTOM11                              (PORT_ALT7_FUNC_MODE)         /* PTE27 */
#define    PORT162_eFTU0_OUT_S28                            (PORT_ALT7_FUNC_MODE)          /* PTF2 */
#define    PORT167_eFTU0_OUT_S18                            (PORT_ALT7_FUNC_MODE)          /* PTF7 */
#define    PORT171_eFTU_GTOM15                              (PORT_ALT7_FUNC_MODE)         /* PTF11 */
#define    PORT172_FTU0_CH6                                 (PORT_ALT7_FUNC_MODE)         /* PTF12 */
#define    PORT173_FTU0_CH5                                 (PORT_ALT7_FUNC_MODE)         /* PTF13 */
#define    PORT174_FTU1_CH1                                 (PORT_ALT7_FUNC_MODE)         /* PTF14 */
#define    PORT175_eFTU_GTOM5                               (PORT_ALT7_FUNC_MODE)         /* PTF15 */
#define    PORT176_eFTU_GTOM12                              (PORT_ALT7_FUNC_MODE)         /* PTF16 */
#define    PORT177_eFTU0_OUT_S6                             (PORT_ALT7_FUNC_MODE)         /* PTF17 */
#define    PORT178_eFTU0_OUT_S24                            (PORT_ALT7_FUNC_MODE)         /* PTF18 */
#define    PORT179_eFTU0_OUT_S25                            (PORT_ALT7_FUNC_MODE)         /* PTF19 */
#define    PORT180_eFTU0_OUT_S4                             (PORT_ALT7_FUNC_MODE)         /* PTF20 */
#define    PORT183_eFTU_GTOM14                              (PORT_ALT7_FUNC_MODE)         /* PTF23 */
#define    PORT192_eFTU0_OUT_S29                            (PORT_ALT7_FUNC_MODE)          /* PTG0 */
#define    PORT200_eFTU_GTOM10                              (PORT_ALT7_FUNC_MODE)          /* PTG8 */
#define    PORT201_eFTU_GTOM0                               (PORT_ALT7_FUNC_MODE)          /* PTG9 */
#define    PORT204_FTU1_CH0                                 (PORT_ALT7_FUNC_MODE)         /* PTG12 */
#define    PORT205_eFTU0_OUT_S29                            (PORT_ALT7_FUNC_MODE)         /* PTG13 */
#define    PORT206_eFTU0_OUT_S30                            (PORT_ALT7_FUNC_MODE)         /* PTG14 */
#define    PORT207_eFTU0_OUT_S31                            (PORT_ALT7_FUNC_MODE)         /* PTG15 */
#define    PORT210_eFTU_GTOM5                               (PORT_ALT7_FUNC_MODE)         /* PTG18 */
#define    PORT211_eFTU_GTOM6                               (PORT_ALT7_FUNC_MODE)         /* PTG19 */
#define    PORT212_eFTU_GTOM7                               (PORT_ALT7_FUNC_MODE)         /* PTG20 */
#define    PORT213_eFTU_GTOM15                              (PORT_ALT7_FUNC_MODE)         /* PTG21 */
#define    PORT230_eFTU_GTOM11                              (PORT_ALT7_FUNC_MODE)          /* PTH6 */
#define    PORT231_FTU0_CH0                                 (PORT_ALT7_FUNC_MODE)          /* PTH7 */
#define    PORT232_eFTU_GTOM3                               (PORT_ALT7_FUNC_MODE)          /* PTH8 */
#define    PORT233_eFTU0_OUT_S19                            (PORT_ALT7_FUNC_MODE)          /* PTH9 */
#define    PORT234_eFTU0_OUT_S20                            (PORT_ALT7_FUNC_MODE)         /* PTH10 */
#define    PORT235_eFTU_GTOM2                               (PORT_ALT7_FUNC_MODE)         /* PTH11 */
#define    PORT237_eFTU_GTOM10                              (PORT_ALT7_FUNC_MODE)         /* PTH13 */
#define    PORT238_eFTU_GTOM11                              (PORT_ALT7_FUNC_MODE)         /* PTH14 */
#define    PORT240_eFTU0_OUT_S20                            (PORT_ALT7_FUNC_MODE)         /* PTH16 */
#define    PORT241_eFTU0_OUT_S21                            (PORT_ALT7_FUNC_MODE)         /* PTH17 */
#define    PORT242_eFTU_GTOM8                               (PORT_ALT7_FUNC_MODE)         /* PTH18 */
#define    PORT243_eFTU_GTOM12                              (PORT_ALT7_FUNC_MODE)         /* PTH19 */
#define    PORT244_eFTU_GTOM13                              (PORT_ALT7_FUNC_MODE)         /* PTH20 */
#define    PORT246_eFTU0_OUT_S10                            (PORT_ALT7_FUNC_MODE)         /* PTH22 */
#define    PORT247_eFTU0_OUT_S2                             (PORT_ALT7_FUNC_MODE)         /* PTH23 */
#define    PORT259_eFTU_GTOM8                               (PORT_ALT7_FUNC_MODE)          /* PTI3 */
#define    PORT260_eFTU_GTOM9                               (PORT_ALT7_FUNC_MODE)          /* PTI4 */
#define    PORT262_eFTU_GTOM12                              (PORT_ALT7_FUNC_MODE)          /* PTI6 */
#define    PORT263_eFTU_GTOM13                              (PORT_ALT7_FUNC_MODE)          /* PTI7 */
#define    PORT264_eFTU_GTOM14                              (PORT_ALT7_FUNC_MODE)          /* PTI8 */
#define    PORT265_FCSPI5_PCS3                              (PORT_ALT7_FUNC_MODE)          /* PTI9 */
#define    PORT266_eFTU_GTOM3                               (PORT_ALT7_FUNC_MODE)         /* PTI10 */
#define    PORT267_eFTU_GTOM4                               (PORT_ALT7_FUNC_MODE)         /* PTI11 */
#define    PORT268_eFTU_GTOM13                              (PORT_ALT7_FUNC_MODE)         /* PTI12 */
#define    PORT270_eFTU_GTOM1                               (PORT_ALT7_FUNC_MODE)         /* PTI14 */
#define    PORT271_eFTU0_OUT_S22                            (PORT_ALT7_FUNC_MODE)         /* PTI15 */
#define    PORT272_eFTU0_OUT_S23                            (PORT_ALT7_FUNC_MODE)         /* PTI16 */
#define    PORT273_eFTU_GTOM7                               (PORT_ALT7_FUNC_MODE)         /* PTI17 */
#define    PORT274_eFTU0_OUT_S26                            (PORT_ALT7_FUNC_MODE)         /* PTI18 */
#define    PORT275_eFTU0_OUT_S27                            (PORT_ALT7_FUNC_MODE)         /* PTI19 */




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
#define PortConf_PortContainer_0_Port_A_Pin_0  (Port_PinType)0
#define PortConf_PortContainer_0_Port_A_Pin_1  (Port_PinType)1
#define PortConf_PortContainer_0_Port_A_Pin_2  (Port_PinType)2
#define PortConf_PortContainer_0_Port_A_Pin_3  (Port_PinType)3
#define PortConf_PortContainer_0_Port_A_Pin_4  (Port_PinType)4
#define PortConf_PortContainer_0_Port_A_Pin_5  (Port_PinType)6
#define PortConf_PortContainer_0_Port_A_Pin_6  (Port_PinType)7
#define PortConf_PortContainer_0_Port_A_Pin_7  (Port_PinType)8
#define PortConf_PortContainer_0_Port_A_Pin_8  (Port_PinType)9
#define PortConf_PortContainer_0_Port_A_Pin_9  (Port_PinType)10
#define PortConf_PortContainer_0_KEY3  (Port_PinType)11
#define PortConf_PortContainer_0_Port_A_Pin_11  (Port_PinType)12
#define PortConf_PortContainer_0_Port_A_Pin_12  (Port_PinType)13
#define PortConf_PortContainer_0_LED3  (Port_PinType)14
#define PortConf_PortContainer_0_Port_A_Pin_14  (Port_PinType)15
#define PortConf_PortContainer_0_Port_A_Pin_15  (Port_PinType)16
#define PortConf_PortContainer_0_Port_A_Pin_16  (Port_PinType)17
#define PortConf_PortContainer_0_Port_A_Pin_17  (Port_PinType)18
#define PortConf_PortContainer_0_Port_A_Pin_18  (Port_PinType)19
#define PortConf_PortContainer_0_Port_A_Pin_19  (Port_PinType)20
#define PortConf_PortContainer_0_Port_A_Pin_20  (Port_PinType)21
#define PortConf_PortContainer_0_Port_A_Pin_21  (Port_PinType)22
#define PortConf_PortContainer_0_Port_A_Pin_22  (Port_PinType)23
#define PortConf_PortContainer_0_Port_A_Pin_23  (Port_PinType)24
#define PortConf_PortContainer_0_Port_A_Pin_24  (Port_PinType)25
#define PortConf_PortContainer_0_LED1  (Port_PinType)26
#define PortConf_PortContainer_0_Port_A_Pin_26  (Port_PinType)27
#define PortConf_PortContainer_0_Port_A_Pin_27  (Port_PinType)28
#define PortConf_PortContainer_0_Port_A_Pin_28  (Port_PinType)29
#define PortConf_PortContainer_0_Port_A_Pin_29  (Port_PinType)30
#define PortConf_PortContainer_0_Port_A_Pin_30  (Port_PinType)31
#define PortConf_PortContainer_1_Port_B_Pin_0  (Port_PinType)32
#define PortConf_PortContainer_1_Port_B_Pin_1  (Port_PinType)33
#define PortConf_PortContainer_1_Port_B_Pin_2  (Port_PinType)35
#define PortConf_PortContainer_1_ETH_MDIO  (Port_PinType)36
#define PortConf_PortContainer_1_ETH_MDC  (Port_PinType)37
#define PortConf_PortContainer_1_XTAL  (Port_PinType)38
#define PortConf_PortContainer_1_EXTAL  (Port_PinType)39
#define PortConf_PortContainer_1_Port_B_Pin_10  (Port_PinType)44
#define PortConf_PortContainer_1_Port_B_Pin_11  (Port_PinType)45
#define PortConf_PortContainer_1_Port_B_Pin_12  (Port_PinType)46
#define PortConf_PortContainer_1_Port_B_Pin_13  (Port_PinType)47
#define PortConf_PortContainer_1_Port_B_Pin_14  (Port_PinType)48
#define PortConf_PortContainer_1_Port_B_Pin_15  (Port_PinType)49
#define PortConf_PortContainer_1_Port_B_Pin_16  (Port_PinType)50
#define PortConf_PortContainer_1_ETH_BASET1_WAKE  (Port_PinType)51
#define PortConf_PortContainer_1_Port_B_Pin_18  (Port_PinType)52
#define PortConf_PortContainer_1_Port_B_Pin_19  (Port_PinType)53
#define PortConf_PortContainer_1_Port_B_Pin_20  (Port_PinType)54
#define PortConf_PortContainer_1_SPI2_PCS0  (Port_PinType)55
#define PortConf_PortContainer_1_Port_B_Pin_22  (Port_PinType)56
#define PortConf_PortContainer_1_Port_B_Pin_23  (Port_PinType)57
#define PortConf_PortContainer_1_ETH_BASET1_EN  (Port_PinType)58
#define PortConf_PortContainer_1_Port_B_Pin_25  (Port_PinType)59
#define PortConf_PortContainer_1_Port_B_Pin_26  (Port_PinType)60
#define PortConf_PortContainer_1_Port_B_Pin_27  (Port_PinType)61
#define PortConf_PortContainer_1_ETH_BASET1_INT_N  (Port_PinType)62
#define PortConf_PortContainer_1_SPI2_SCK  (Port_PinType)63
#define PortConf_PortContainer_1_PortPin_27  (Port_PinType)40
#define PortConf_PortContainer_1_PortPin_28  (Port_PinType)41
#define PortConf_PortContainer_1_PortPin_29  (Port_PinType)42
#define PortConf_PortContainer_1_PortPin_30  (Port_PinType)43
#define PortConf_PortContainer_2_ETH_RXD1  (Port_PinType)64
#define PortConf_PortContainer_2_ETH_RXD0  (Port_PinType)65
#define PortConf_PortContainer_2_ETH_TXD0  (Port_PinType)66
#define PortConf_PortContainer_2_Flash_WP  (Port_PinType)67
#define PortConf_PortContainer_2_Port_C_Pin_4  (Port_PinType)68
#define PortConf_PortContainer_2_Port_C_Pin_5  (Port_PinType)69
#define PortConf_PortContainer_2_Port_C_Pin_6  (Port_PinType)70
#define PortConf_PortContainer_2_Port_C_Pin_7  (Port_PinType)71
#define PortConf_PortContainer_2_Port_C_Pin_8  (Port_PinType)72
#define PortConf_PortContainer_2_Port_C_Pin_9  (Port_PinType)73
#define PortConf_PortContainer_2_Port_C_Pin_10  (Port_PinType)74
#define PortConf_PortContainer_2_Port_C_Pin_11  (Port_PinType)75
#define PortConf_PortContainer_2_Port_C_Pin_12  (Port_PinType)76
#define PortConf_PortContainer_2_Port_C_Pin_13  (Port_PinType)77
#define PortConf_PortContainer_2_ETH_MDIOSEL  (Port_PinType)78
#define PortConf_PortContainer_2_ETH_RXD3  (Port_PinType)79
#define PortConf_PortContainer_2_SPI2_SO  (Port_PinType)80
#define PortConf_PortContainer_2_Flash_HOLD  (Port_PinType)81
#define PortConf_PortContainer_2_SPI2_SI  (Port_PinType)82
#define PortConf_PortContainer_2_Port_C_Pin_19  (Port_PinType)83
#define PortConf_PortContainer_2_Port_C_Pin_20  (Port_PinType)84
#define PortConf_PortContainer_2_Port_C_Pin_21  (Port_PinType)85
#define PortConf_PortContainer_2_Port_C_Pin_22  (Port_PinType)86
#define PortConf_PortContainer_2_Port_C_Pin_23  (Port_PinType)87
#define PortConf_PortContainer_2_Port_C_Pin_24  (Port_PinType)88
#define PortConf_PortContainer_2_Port_C_Pin_25  (Port_PinType)89
#define PortConf_PortContainer_2_Port_C_Pin_26  (Port_PinType)90
#define PortConf_PortContainer_2_Port_C_Pin_27  (Port_PinType)91
#define PortConf_PortContainer_2_Port_C_Pin_28  (Port_PinType)92
#define PortConf_PortContainer_2_Port_C_Pin_29  (Port_PinType)93
#define PortConf_PortContainer_2_Port_C_Pin_30  (Port_PinType)94
#define PortConf_PortContainer_2_Port_C_Pin_31  (Port_PinType)95
#define PortConf_PortContainer_3_Port_D_Pin_0  (Port_PinType)96
#define PortConf_PortContainer_3_Port_D_Pin_1  (Port_PinType)97
#define PortConf_PortContainer_3_Port_D_Pin_2  (Port_PinType)98
#define PortConf_PortContainer_3_Port_D_Pin_3  (Port_PinType)99
#define PortConf_PortContainer_3_Port_D_Pin_4  (Port_PinType)100
#define PortConf_PortContainer_3_ETH_TXD3  (Port_PinType)101
#define PortConf_PortContainer_3_ETH_TXD2  (Port_PinType)102
#define PortConf_PortContainer_3_ETH_TXD1  (Port_PinType)103
#define PortConf_PortContainer_3_ETH_RXDV  (Port_PinType)104
#define PortConf_PortContainer_3_ETH_RXD2  (Port_PinType)105
#define PortConf_PortContainer_3_ETH_RXCLK  (Port_PinType)106
#define PortConf_PortContainer_3_ETH_TXCLK  (Port_PinType)107
#define PortConf_PortContainer_3_ETH_TXEN  (Port_PinType)108
#define PortConf_PortContainer_3_Port_D_Pin_13  (Port_PinType)111
#define PortConf_PortContainer_3_Port_D_Pin_14  (Port_PinType)112
#define PortConf_PortContainer_3_Port_D_Pin_15  (Port_PinType)113
#define PortConf_PortContainer_3_Port_D_Pin_16  (Port_PinType)114
#define PortConf_PortContainer_3_Port_D_Pin_17  (Port_PinType)115
#define PortConf_PortContainer_3_kEY1  (Port_PinType)116
#define PortConf_PortContainer_3_Port_D_Pin_19  (Port_PinType)117
#define PortConf_PortContainer_3_Port_D_Pin_20  (Port_PinType)118
#define PortConf_PortContainer_3_Port_D_Pin_21  (Port_PinType)119
#define PortConf_PortContainer_3_Port_D_Pin_22  (Port_PinType)120
#define PortConf_PortContainer_3_KEY2  (Port_PinType)122
#define PortConf_PortContainer_3_Port_D_Pin_25  (Port_PinType)123
#define PortConf_PortContainer_3_Port_D_Pin_27  (Port_PinType)125
#define PortConf_PortContainer_3_Port_D_Pin_28  (Port_PinType)126
#define PortConf_PortContainer_3_LED2  (Port_PinType)127
#define PortConf_PortContainer_3_PortPin_28  (Port_PinType)121
#define PortConf_PortContainer_3_PortPin_29  (Port_PinType)124
#define PortConf_PortContainer_4_Port_E_Pin_0  (Port_PinType)128
#define PortConf_PortContainer_4_Port_E_Pin_1  (Port_PinType)129
#define PortConf_PortContainer_4_Port_E_Pin_2  (Port_PinType)130
#define PortConf_PortContainer_4_Port_E_Pin_3  (Port_PinType)131
#define PortConf_PortContainer_4_Port_E_Pin_4  (Port_PinType)132
#define PortConf_PortContainer_4_Port_E_Pin_5  (Port_PinType)133
#define PortConf_PortContainer_4_Port_E_Pin_6  (Port_PinType)134
#define PortConf_PortContainer_4_Port_E_Pin_7  (Port_PinType)135
#define PortConf_PortContainer_4_ETH_PHYRESET  (Port_PinType)136
#define PortConf_PortContainer_4_Port_E_Pin_9  (Port_PinType)137
#define PortConf_PortContainer_4_Port_E_Pin_10  (Port_PinType)138
#define PortConf_PortContainer_4_Port_E_Pin_11  (Port_PinType)139
#define PortConf_PortContainer_4_Port_E_Pin_12  (Port_PinType)140
#define PortConf_PortContainer_4_Port_E_Pin_13  (Port_PinType)141
#define PortConf_PortContainer_4_Port_E_Pin_14  (Port_PinType)142
#define PortConf_PortContainer_4_Port_E_Pin_15  (Port_PinType)143
#define PortConf_PortContainer_4_Port_E_Pin_16  (Port_PinType)144
#define PortConf_PortContainer_4_Port_E_Pin_17  (Port_PinType)145
#define PortConf_PortContainer_4_Port_E_Pin_18  (Port_PinType)146
#define PortConf_PortContainer_4_Port_E_Pin_19  (Port_PinType)147
#define PortConf_PortContainer_4_Port_E_Pin_20  (Port_PinType)148
#define PortConf_PortContainer_4_Port_E_Pin_21  (Port_PinType)149
#define PortConf_PortContainer_4_Port_E_Pin_22  (Port_PinType)150
#define PortConf_PortContainer_4_Port_E_Pin_23  (Port_PinType)151
#define PortConf_PortContainer_4_Port_E_Pin_24  (Port_PinType)152
#define PortConf_PortContainer_4_Port_E_Pin_25  (Port_PinType)153
#define PortConf_PortContainer_4_Port_E_Pin_26  (Port_PinType)154
#define PortConf_PortContainer_4_Port_E_Pin_27  (Port_PinType)155
#define PortConf_PortContainer_5_Port_F_Pin_0  (Port_PinType)160
#define PortConf_PortContainer_5_Port_F_Pin_1  (Port_PinType)161
#define PortConf_PortContainer_5_Port_F_Pin_2  (Port_PinType)162
#define PortConf_PortContainer_5_Port_F_Pin_7  (Port_PinType)167
#define PortConf_PortContainer_5_Port_F_Pin_9  (Port_PinType)169
#define PortConf_PortContainer_5_Port_F_Pin_10  (Port_PinType)170
#define PortConf_PortContainer_5_Port_F_Pin_11  (Port_PinType)171
#define PortConf_PortContainer_5_Port_F_Pin_12  (Port_PinType)172
#define PortConf_PortContainer_5_Port_F_Pin_13  (Port_PinType)173
#define PortConf_PortContainer_5_Port_F_Pin_14  (Port_PinType)174
#define PortConf_PortContainer_5_Port_F_Pin_15  (Port_PinType)175
#define PortConf_PortContainer_5_Port_F_Pin_16  (Port_PinType)176
#define PortConf_PortContainer_5_Port_F_Pin_17  (Port_PinType)177
#define PortConf_PortContainer_5_Port_F_Pin_18  (Port_PinType)178
#define PortConf_PortContainer_5_Port_F_Pin_19  (Port_PinType)179
#define PortConf_PortContainer_5_Port_F_Pin_20  (Port_PinType)180
#define PortConf_PortContainer_5_Port_F_Pin_21  (Port_PinType)181
#define PortConf_PortContainer_5_Port_F_Pin_22  (Port_PinType)182
#define PortConf_PortContainer_5_Port_F_Pin_23  (Port_PinType)183
#define PortConf_PortContainer_5_Port_F_Pin_24  (Port_PinType)184
#define PortConf_PortContainer_5_Port_F_Pin_25  (Port_PinType)163
#define PortConf_PortContainer_5_PortPin_21  (Port_PinType)164
#define PortConf_PortContainer_5_PortPin_22  (Port_PinType)165
#define PortConf_PortContainer_5_PortPin_23  (Port_PinType)166
#define PortConf_PortContainer_5_PortPin_24  (Port_PinType)168
#define PortConf_PortContainer_6_Port_G_Pin_0  (Port_PinType)192
#define PortConf_PortContainer_6_Port_G_Pin_1  (Port_PinType)193
#define PortConf_PortContainer_6_Port_G_Pin_2  (Port_PinType)194
#define PortConf_PortContainer_6_Port_G_Pin_3  (Port_PinType)195
#define PortConf_PortContainer_6_Port_G_Pin_4  (Port_PinType)196
#define PortConf_PortContainer_6_Port_G_Pin_5  (Port_PinType)197
#define PortConf_PortContainer_6_ETH_REFCLK  (Port_PinType)200
#define PortConf_PortContainer_6_Port_G_Pin_9  (Port_PinType)201
#define PortConf_PortContainer_6_Port_G_Pin_10  (Port_PinType)202
#define PortConf_PortContainer_6_Port_G_Pin_11  (Port_PinType)203
#define PortConf_PortContainer_6_Port_G_Pin_12  (Port_PinType)204
#define PortConf_PortContainer_6_Port_G_Pin_15  (Port_PinType)207
#define PortConf_PortContainer_6_Port_G_Pin_16  (Port_PinType)208
#define PortConf_PortContainer_6_Port_G_Pin_21  (Port_PinType)213
#define PortConf_PortContainer_6_Port_G_Pin_22  (Port_PinType)214
#define PortConf_PortContainer_6_Port_G_Pin_23  (Port_PinType)215
#define PortConf_PortContainer_6_PortPin_16  (Port_PinType)198
#define PortConf_PortContainer_6_PortPin_17  (Port_PinType)199
#define PortConf_PortContainer_6_PortPin_18  (Port_PinType)205
#define PortConf_PortContainer_6_PortPin_19  (Port_PinType)206
#define PortConf_PortContainer_6_PortPin_20  (Port_PinType)209
#define PortConf_PortContainer_6_PortPin_21  (Port_PinType)210
#define PortConf_PortContainer_6_PortPin_22  (Port_PinType)211
#define PortConf_PortContainer_6_PortPin_23  (Port_PinType)212
#define PortConf_PortContainer_7_Port_H_Pin_0  (Port_PinType)224
#define PortConf_PortContainer_7_Port_H_Pin_1  (Port_PinType)225
#define PortConf_PortContainer_7_Port_H_Pin_2  (Port_PinType)226
#define PortConf_PortContainer_7_Port_H_Pin_3  (Port_PinType)227
#define PortConf_PortContainer_7_Port_H_Pin_6  (Port_PinType)230
#define PortConf_PortContainer_7_Port_H_Pin_7  (Port_PinType)231
#define PortConf_PortContainer_7_Port_H_Pin_8  (Port_PinType)232
#define PortConf_PortContainer_7_Port_H_Pin_9  (Port_PinType)233
#define PortConf_PortContainer_7_Port_H_Pin_10  (Port_PinType)234
#define PortConf_PortContainer_7_Port_H_Pin_12  (Port_PinType)236
#define PortConf_PortContainer_7_Port_H_Pin_13  (Port_PinType)237
#define PortConf_PortContainer_7_Port_H_Pin_14  (Port_PinType)238
#define PortConf_PortContainer_7_Port_H_Pin_19  (Port_PinType)243
#define PortConf_PortContainer_7_Port_H_Pin_20  (Port_PinType)244
#define PortConf_PortContainer_7_Port_H_Pin_23  (Port_PinType)247
#define PortConf_PortContainer_7_Port_H_Pin_24  (Port_PinType)240
#define PortConf_PortContainer_7_Port_H_Pin_25  (Port_PinType)241
#define PortConf_PortContainer_7_PortPin_17  (Port_PinType)228
#define PortConf_PortContainer_7_PortPin_18  (Port_PinType)229
#define PortConf_PortContainer_7_PortPin_19  (Port_PinType)235
#define PortConf_PortContainer_7_PortPin_20  (Port_PinType)239
#define PortConf_PortContainer_7_PortPin_21  (Port_PinType)242
#define PortConf_PortContainer_7_PortPin_22  (Port_PinType)245
#define PortConf_PortContainer_7_PortPin_23  (Port_PinType)246
#define PortConf_PortContainer_8_Port_I_Pin_0  (Port_PinType)256
#define PortConf_PortContainer_8_Port_I_Pin_2  (Port_PinType)258
#define PortConf_PortContainer_8_Port_I_Pin_6  (Port_PinType)262
#define PortConf_PortContainer_8_Port_I_Pin_7  (Port_PinType)263
#define PortConf_PortContainer_8_Port_I_Pin_8  (Port_PinType)264
#define PortConf_PortContainer_8_Port_I_Pin_12  (Port_PinType)268
#define PortConf_PortContainer_8_Port_I_Pin_13  (Port_PinType)269
#define PortConf_PortContainer_8_Port_I_Pin_14  (Port_PinType)270
#define PortConf_PortContainer_8_Port_I_Pin_17  (Port_PinType)273
#define PortConf_PortContainer_8_Port_I_Pin_18  (Port_PinType)274
#define PortConf_PortContainer_8_Port_I_Pin_19  (Port_PinType)275
#define PortConf_PortContainer_8_Port_I_Pin_20  (Port_PinType)276
#define PortConf_PortContainer_8_Port_I_Pin_21  (Port_PinType)277
#define PortConf_PortContainer_8_Port_I_Pin_22  (Port_PinType)278
#define PortConf_PortContainer_8_Port_I_Pin_23  (Port_PinType)279
#define PortConf_PortContainer_8_Port_I_Pin_27  (Port_PinType)271
#define PortConf_PortContainer_8_Port_I_Pin_28  (Port_PinType)272
#define PortConf_PortContainer_8_PortPin_17  (Port_PinType)257
#define PortConf_PortContainer_8_PortPin_18  (Port_PinType)259
#define PortConf_PortContainer_8_PortPin_19  (Port_PinType)260
#define PortConf_PortContainer_8_PortPin_20  (Port_PinType)261
#define PortConf_PortContainer_8_PortPin_21  (Port_PinType)265
#define PortConf_PortContainer_8_PortPin_22  (Port_PinType)266
#define PortConf_PortContainer_8_PortPin_23  (Port_PinType)267

/* PRQA S 0791 -- */
/**
* @brief Number of available pad modes options
* @details Platform constant
*/
#define PIN_MODE_OPTIONS_U8         ((uint8)8)
/**
 * @brief The last supported pin number
 */
#define MAX_PORT_PIN_NUM_U16    ((uint16)280)

#define MAX_CONFIGURED_PORTA_U8  ((uint8)29)


#define MAX_CONFIGURED_PORTB_U8  ((uint8)31)


#define MAX_CONFIGURED_PORTC_U8  ((uint8)30)


#define MAX_CONFIGURED_PORTD_U8  ((uint8)30)


#define MAX_CONFIGURED_PORTE_U8  ((uint8)28)


#define MAX_CONFIGURED_PORTF_U8  ((uint8)25)


#define MAX_CONFIGURED_PORTG_U8  ((uint8)24)


#define MAX_CONFIGURED_PORTH_U8  ((uint8)24)


#define MAX_CONFIGURED_PORTI_U8  ((uint8)24)

/**
* @brief The maximum channel number of configured pins
*/
#define MAX_CONFIGURED_PINS_U16                        ((uint16)249)

/**
* @brief The number of configured Digital Filter Ports
*/
#define MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8         (0U)

/**
* @brief Port driver Post-build configuration switch
*/
#define PORT_PRECOMPILE_SUPPORT     (STD_OFF)

/**
* @brief Port driver support multicore
*/
#define PORT_SUPPORT_MULTICORE     (STD_ON)

/**
* @brief Port max number
*/
#define PORT_MAX_NUMBER     (9u)

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
    const Port_PinConfigType *pConfigPortFPins;
    const Port_PinConfigType *pConfigPortGPins;
    const Port_PinConfigType *pConfigPortHPins;
    const Port_PinConfigType *pConfigPortIPins;
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
