
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



#define    PORT12_ADC1_SE18                  (PORT_ALT0_FUNC_MODE)         /* PTA12 */
#define    PORT15_ADC1_SE28                  (PORT_ALT0_FUNC_MODE)         /* PTA15 */
#define    PORT17_ADC2_SE19                  (PORT_ALT0_FUNC_MODE)         /* PTA17 */
#define    PORT18_ADC1_SE7                   (PORT_ALT0_FUNC_MODE)         /* PTA18 */
#define    PORT19_ADC1_SE3                   (PORT_ALT0_FUNC_MODE)         /* PTA19 */
#define    PORT20_ADC1_SE6                   (PORT_ALT0_FUNC_MODE)         /* PTA20 */
#define    PORT21_ADC0_SE2                   (PORT_ALT0_FUNC_MODE)         /* PTA21 */
#define    PORT22_ADC0_SE1                   (PORT_ALT0_FUNC_MODE)         /* PTA22 */
#define    PORT23_ADC0_SE14_CMP0_IN6         (PORT_ALT0_FUNC_MODE)         /* PTA23 */
#define    PORT24_ADC0_SE15_CMP0_IN7         (PORT_ALT0_FUNC_MODE)         /* PTA24 */
#define    PORT25_ADC0_SE11                  (PORT_ALT0_FUNC_MODE)         /* PTA25 */
#define    PORT26_CMP0_IN1                   (PORT_ALT0_FUNC_MODE)         /* PTA26 */
#define    PORT27_ADC0_SE16                  (PORT_ALT0_FUNC_MODE)         /* PTA27 */
#define    PORT28_ADC0_SE18                  (PORT_ALT0_FUNC_MODE)         /* PTA28 */
#define    PORT29_ADC0_SE19                  (PORT_ALT0_FUNC_MODE)         /* PTA29 */
#define    PORT30_ADC0_SE25                  (PORT_ALT0_FUNC_MODE)         /* PTA30 */
#define    PORT31_ADC0_SE29                  (PORT_ALT0_FUNC_MODE)         /* PTA31 */
#define    PORT6_ADC2_SE13                   (PORT_ALT0_FUNC_MODE)          /* PTA6 */
#define    PORT7_ADC2_SE11                   (PORT_ALT0_FUNC_MODE)          /* PTA7 */
#define    PORT8_ADC1_SE14                   (PORT_ALT0_FUNC_MODE)          /* PTA8 */
#define    PORT9_ADC1_SE15                   (PORT_ALT0_FUNC_MODE)          /* PTA9 */
#define    PORT32_ADC3_SE18                  (PORT_ALT0_FUNC_MODE)          /* PTB0 */
#define    PORT33_ADC3_SE17                  (PORT_ALT0_FUNC_MODE)          /* PTB1 */
#define    PORT44_ADC2_SE29                  (PORT_ALT0_FUNC_MODE)         /* PTB12 */
#define    PORT45_ADC2_SE28                  (PORT_ALT0_FUNC_MODE)         /* PTB13 */
#define    PORT46_ADC2_SE27                  (PORT_ALT0_FUNC_MODE)         /* PTB14 */
#define    PORT47_ADC2_SE26                  (PORT_ALT0_FUNC_MODE)         /* PTB15 */
#define    PORT48_ADC2_SE25                  (PORT_ALT0_FUNC_MODE)         /* PTB16 */
#define    PORT49_ADC2_SE20                  (PORT_ALT0_FUNC_MODE)         /* PTB17 */
#define    PORT50_ADC0_SE30                  (PORT_ALT0_FUNC_MODE)         /* PTB18 */
#define    PORT51_ADC0_SE31                  (PORT_ALT0_FUNC_MODE)         /* PTB19 */
#define    PORT52_ADC3_SE31_CMP2_IN0         (PORT_ALT0_FUNC_MODE)
#define    PORT52_ADC3_SE31                  (PORT_ALT0_FUNC_MODE)       /* PTB20 */
#define    PORT53_ADC3_SE30_CMP2_IN1         (PORT_ALT0_FUNC_MODE)       /* PTB21 */
#define    PORT53_ADC3_SE30                  (PORT_ALT0_FUNC_MODE)       /* PTB21 */
#define    PORT56_ADC3_SE29_CMP2_IN2         (PORT_ALT0_FUNC_MODE)         /* PTB24 */
#define    PORT56_ADC3_SE29                  (PORT_ALT0_FUNC_MODE)         /* PTB24 */
#define    PORT57_ADC3_SE19                  (PORT_ALT0_FUNC_MODE)         /* PTB25 */
#define    PORT59_ADC3_SE21                  (PORT_ALT0_FUNC_MODE)         /* PTB27 */
#define    PORT60_ADC3_SE22                  (PORT_ALT0_FUNC_MODE)         /* PTB28 */
#define    PORT61_ADC3_SE0                   (PORT_ALT0_FUNC_MODE)         /* PTB29 */
#define    PORT35_ADC3_SE20                  (PORT_ALT0_FUNC_MODE)          /* PTB3 */
#define    PORT38_XTAL                       (PORT_ALT0_FUNC_MODE)          /* PTB6 */
#define    PORT39_EXTAL                      (PORT_ALT0_FUNC_MODE)          /* PTB7 */
#define    PORT74_ADC2_SE3                   (PORT_ALT0_FUNC_MODE)         /* PTC10 */
#define    PORT75_ADC2_SE6                   (PORT_ALT0_FUNC_MODE)         /* PTC11 */
#define    PORT76_ADC3_SE1                   (PORT_ALT0_FUNC_MODE)         /* PTC12 */
#define    PORT77_ADC3_SE4                   (PORT_ALT0_FUNC_MODE)         /* PTC13 */
#define    PORT83_ADC3_SE5                   (PORT_ALT0_FUNC_MODE)         /* PTC19 */
#define    PORT84_ADC3_SE2                   (PORT_ALT0_FUNC_MODE)         /* PTC20 */
#define    PORT85_ADC3_SE6                   (PORT_ALT0_FUNC_MODE)         /* PTC21 */
#define    PORT86_ADC3_SE10                  (PORT_ALT0_FUNC_MODE)         /* PTC22 */
#define    PORT87_ADC2_SE0                   (PORT_ALT0_FUNC_MODE)         /* PTC23 */
#define    PORT88_ADC2_SE2                   (PORT_ALT0_FUNC_MODE)         /* PTC24 */
#define    PORT91_ADC2_SE7                   (PORT_ALT0_FUNC_MODE)         /* PTC27 */
#define    PORT92_ADC3_SE23                  (PORT_ALT0_FUNC_MODE)         /* PTC28 */
#define    PORT93_ADC2_SE10                  (PORT_ALT0_FUNC_MODE)         /* PTC29 */
#define    PORT94_ADC2_SE12                  (PORT_ALT0_FUNC_MODE)         /* PTC30 */
#define    PORT95_ADC2_SE14                  (PORT_ALT0_FUNC_MODE)         /* PTC31 */
#define    PORT71_ADC1_SE30                  (PORT_ALT0_FUNC_MODE)          /* PTC7 */
#define    PORT72_ADC2_SE9                   (PORT_ALT0_FUNC_MODE)          /* PTC8 */
#define    PORT73_ADC2_SE8                   (PORT_ALT0_FUNC_MODE)          /* PTC9 */
#define    PORT96_ADC0_SE13                  (PORT_ALT0_FUNC_MODE)          /* PTD0 */
#define    PORT97_ADC0_SE6                   (PORT_ALT0_FUNC_MODE)          /* PTD1 */
#define    PORT111_ADC0_SE27                 (PORT_ALT0_FUNC_MODE)         /* PTD15 */
#define    PORT112_ADC0_SE26                 (PORT_ALT0_FUNC_MODE)         /* PTD16 */
#define    PORT113_ADC0_SE24                 (PORT_ALT0_FUNC_MODE)         /* PTD17 */
#define    PORT114_ADC2_SE16                 (PORT_ALT0_FUNC_MODE)         /* PTD18 */
#define    PORT115_ADC2_SE17                 (PORT_ALT0_FUNC_MODE)         /* PTD19 */
#define    PORT116_ADC2_SE30                 (PORT_ALT0_FUNC_MODE)         /* PTD20 */
#define    PORT119_ADC2_SE31                 (PORT_ALT0_FUNC_MODE)         /* PTD23 */
#define    PORT127_ADC1_SE31                 (PORT_ALT0_FUNC_MODE)         /* PTD31 */
#define    PORT128_CMP1_IN4                  (PORT_ALT0_FUNC_MODE)          /* PTE0 */
#define    PORT129_CMP1_IN5                  (PORT_ALT0_FUNC_MODE)          /* PTE1 */
#define    PORT138_ADC0_SE9                  (PORT_ALT0_FUNC_MODE)         /* PTE10 */
#define    PORT139_ADC0_SE8                  (PORT_ALT0_FUNC_MODE)         /* PTE11 */
#define    PORT140_ADC0_SE17                 (PORT_ALT0_FUNC_MODE)         /* PTE12 */
#define    PORT141_ADC0_SE10                 (PORT_ALT0_FUNC_MODE)         /* PTE13 */
#define    PORT142_OSC32K_XTAL               (PORT_ALT0_FUNC_MODE)         /* PTE14 */
#define    PORT143_ADC0_SE5                  (PORT_ALT0_FUNC_MODE)         /* PTE15 */
#define    PORT144_ADC1_SE2                  (PORT_ALT0_FUNC_MODE)         /* PTE16 */
#define    PORT146_ADC1_SE29                 (PORT_ALT0_FUNC_MODE)         /* PTE18 */
#define    PORT147_ADC1_SE23                 (PORT_ALT0_FUNC_MODE)         /* PTE19 */
#define    PORT130_ADC1_SE24                 (PORT_ALT0_FUNC_MODE)          /* PTE2 */
#define    PORT148_ADC1_SE22                 (PORT_ALT0_FUNC_MODE)         /* PTE20 */
#define    PORT149_ADC1_SE21                 (PORT_ALT0_FUNC_MODE)         /* PTE21 */
#define    PORT150_ADC1_SE20                 (PORT_ALT0_FUNC_MODE)         /* PTE22 */
#define    PORT151_CMP1_IN6                  (PORT_ALT0_FUNC_MODE)         /* PTE23 */
#define    PORT152_CMP1_IN7                  (PORT_ALT0_FUNC_MODE)         /* PTE24 */
#define    PORT153_ADC1_SE19                 (PORT_ALT0_FUNC_MODE)         /* PTE25 */
#define    PORT154_ADC1_SE17                 (PORT_ALT0_FUNC_MODE)         /* PTE26 */
#define    PORT155_ADC1_SE16                 (PORT_ALT0_FUNC_MODE)         /* PTE27 */
#define    PORT131_OSC32K_EXTAL              (PORT_ALT0_FUNC_MODE)          /* PTE3 */
#define    PORT132_CMP0_IN0                  (PORT_ALT0_FUNC_MODE)          /* PTE4 */
#define    PORT133_ADC0_SE12                 (PORT_ALT0_FUNC_MODE)          /* PTE5 */
#define    PORT134_ADC1_SE25                 (PORT_ALT0_FUNC_MODE)          /* PTE6 */
#define    PORT135_ADC2_SE15                 (PORT_ALT0_FUNC_MODE)          /* PTE7 */
#define    PORT137_ADC0_SE28                 (PORT_ALT0_FUNC_MODE)          /* PTE9 */
#define    PORT160_ADC1_SE13                 (PORT_ALT0_FUNC_MODE)          /* PTF0 */
#define    PORT161_ADC1_SE12                 (PORT_ALT0_FUNC_MODE)          /* PTF1 */
#define    PORT170_ADC3_SE24                 (PORT_ALT0_FUNC_MODE)         /* PTF10 */
#define    PORT171_ADC3_SE3                  (PORT_ALT0_FUNC_MODE)         /* PTF11 */
#define    PORT172_ADC3_SE14_CMP2_IN5        (PORT_ALT0_FUNC_MODE)         /* PTF12 */
#define    PORT172_ADC3_SE14                 (PORT_ALT0_FUNC_MODE)         /* PTF12 */
#define    PORT173_ADC3_SE13_CMP2_IN4        (PORT_ALT0_FUNC_MODE)         /* PTF13 */
#define    PORT173_ADC3_SE13                 (PORT_ALT0_FUNC_MODE)         /* PTF13 */
#define    PORT174_ADC3_SE15_CMP2_IN6        (PORT_ALT0_FUNC_MODE)         /* PTF14 */
#define    PORT174_ADC3_SE15                 (PORT_ALT0_FUNC_MODE)         /* PTF14 */
#define    PORT175_ADC2_SE18                 (PORT_ALT0_FUNC_MODE)         /* PTF15 */
#define    PORT183_ADC1_SE11_CMP1_IN3        (PORT_ALT0_FUNC_MODE)         /* PTF23 */
#define    PORT183_ADC1_SE11                 (PORT_ALT0_FUNC_MODE)         /* PTF23 */
#define    PORT184_CMP0_IN3                  (PORT_ALT0_FUNC_MODE)         /* PTF24 */
#define    PORT163_ADC0_SE7                  (PORT_ALT0_FUNC_MODE)          /* PTF3 */
#define    PORT167_ADC2_SE4                  (PORT_ALT0_FUNC_MODE)          /* PTF7 */
#define    PORT169_ADC3_SE25                 (PORT_ALT0_FUNC_MODE)          /* PTF9 */
#define    PORT193_ADC0_SE0                  (PORT_ALT0_FUNC_MODE)          /* PTG1 */
#define    PORT202_ADC3_SE8                  (PORT_ALT0_FUNC_MODE)         /* PTG10 */
#define    PORT203_ADC3_SE9                  (PORT_ALT0_FUNC_MODE)         /* PTG11 */
#define    PORT204_ADC3_SE16_CMP2_IN7        (PORT_ALT0_FUNC_MODE)         /* PTG12 */
#define    PORT204_ADC3_SE16                 (PORT_ALT0_FUNC_MODE)         /* PTG12 */
#define    PORT194_ADC0_SE4                  (PORT_ALT0_FUNC_MODE)          /* PTG2 */
#define    PORT213_ADC1_SE10_CMP1_IN2        (PORT_ALT0_FUNC_MODE)         /* PTG21 */
#define    PORT213_ADC1_SE10                 (PORT_ALT0_FUNC_MODE)         /* PTG21 */
#define    PORT214_ADC1_SE9_CMP1_IN1         (PORT_ALT0_FUNC_MODE)         /* PTG22 */
#define    PORT214_ADC1_SE9                  (PORT_ALT0_FUNC_MODE)         /* PTG22 */
#define    PORT215_ADC1_SE8_CMP1_IN0         (PORT_ALT0_FUNC_MODE)         /* PTG23 */
#define    PORT215_ADC1_SE8                  (PORT_ALT0_FUNC_MODE)         /* PTG23 */
#define    PORT195_ADC0_SE20                 (PORT_ALT0_FUNC_MODE)          /* PTG3 */
#define    PORT196_ADC0_SE21                 (PORT_ALT0_FUNC_MODE)          /* PTG4 */
#define    PORT197_ADC0_SE22                 (PORT_ALT0_FUNC_MODE)          /* PTG5 */
#define    PORT201_ADC3_SE7                  (PORT_ALT0_FUNC_MODE)          /* PTG9 */
#define    PORT224_ADC1_SE5                  (PORT_ALT0_FUNC_MODE)          /* PTH0 */
#define    PORT225_ADC1_SE1                  (PORT_ALT0_FUNC_MODE)          /* PTH1 */
#define    PORT234_ADC2_SE5                  (PORT_ALT0_FUNC_MODE)         /* PTH10 */
#define    PORT236_ADC2_SE21                 (PORT_ALT0_FUNC_MODE)         /* PTH12 */
#define    PORT237_ADC2_SE22                 (PORT_ALT0_FUNC_MODE)         /* PTH13 */
#define    PORT238_ADC2_SE23                 (PORT_ALT0_FUNC_MODE)         /* PTH14 */
#define    PORT243_ADC1_SE27                 (PORT_ALT0_FUNC_MODE)         /* PTH19 */
#define    PORT226_ADC1_SE4                  (PORT_ALT0_FUNC_MODE)          /* PTH2 */
#define    PORT244_ADC1_SE26                 (PORT_ALT0_FUNC_MODE)         /* PTH20 */
#define    PORT227_ADC0_SE23                 (PORT_ALT0_FUNC_MODE)          /* PTH3 */
#define    PORT233_ADC2_SE1                  (PORT_ALT0_FUNC_MODE)          /* PTH9 */
#define    PORT256_ADC1_SE0                  (PORT_ALT0_FUNC_MODE)          /* PTI0 */
#define    PORT268_ADC2_SE24                 (PORT_ALT0_FUNC_MODE)         /* PTI12 */
#define    PORT269_ADC3_SE11                 (PORT_ALT0_FUNC_MODE)         /* PTI13 */
#define    PORT270_ADC3_SE12                 (PORT_ALT0_FUNC_MODE)         /* PTI14 */
#define    PORT258_ADC0_SE3                  (PORT_ALT0_FUNC_MODE)          /* PTI2 */
#define    PORT277_CMP0_IN4                  (PORT_ALT0_FUNC_MODE)         /* PTI21 */
#define    PORT278_CMP0_IN5                  (PORT_ALT0_FUNC_MODE)         /* PTI22 */
#define    PORT279_CMP0_IN2                  (PORT_ALT0_FUNC_MODE)         /* PTI23 */
#define    PORT262_ADC3_SE28_CMP2_IN3        (PORT_ALT0_FUNC_MODE)          /* PTI6 */
#define    PORT262_ADC3_SE28                 (PORT_ALT0_FUNC_MODE)          /* PTI6 */
#define    PORT263_ADC3_SE27                 (PORT_ALT0_FUNC_MODE)          /* PTI7 */
#define    PORT264_ADC3_SE26                 (PORT_ALT0_FUNC_MODE)          /* PTI8 */
#define    PORT0_GPIO                             (PORT_GPIO_MODE)          /* PTA0 */
#define    PORT1_GPIO                             (PORT_GPIO_MODE)          /* PTA1 */
#define    PORT10_GPIO                            (PORT_GPIO_MODE)         /* PTA10 */
#define    PORT11_GPIO                            (PORT_GPIO_MODE)         /* PTA11 */
#define    PORT12_GPIO                            (PORT_GPIO_MODE)         /* PTA12 */
#define    PORT13_GPIO                            (PORT_GPIO_MODE)         /* PTA13 */
#define    PORT14_GPIO                            (PORT_GPIO_MODE)         /* PTA14 */
#define    PORT15_GPIO                            (PORT_GPIO_MODE)         /* PTA15 */
#define    PORT16_GPIO                            (PORT_GPIO_MODE)         /* PTA16 */
#define    PORT17_GPIO                            (PORT_GPIO_MODE)         /* PTA17 */
#define    PORT18_GPIO                            (PORT_GPIO_MODE)         /* PTA18 */
#define    PORT19_GPIO                            (PORT_GPIO_MODE)         /* PTA19 */
#define    PORT2_GPIO                             (PORT_GPIO_MODE)          /* PTA2 */
#define    PORT20_GPIO                            (PORT_GPIO_MODE)         /* PTA20 */
#define    PORT21_GPIO                            (PORT_GPIO_MODE)         /* PTA21 */
#define    PORT22_GPIO                            (PORT_GPIO_MODE)         /* PTA22 */
#define    PORT23_GPIO                            (PORT_GPIO_MODE)         /* PTA23 */
#define    PORT24_GPIO                            (PORT_GPIO_MODE)         /* PTA24 */
#define    PORT25_GPIO                            (PORT_GPIO_MODE)         /* PTA25 */
#define    PORT26_GPIO                            (PORT_GPIO_MODE)         /* PTA26 */
#define    PORT27_GPIO                            (PORT_GPIO_MODE)         /* PTA27 */
#define    PORT28_GPIO                            (PORT_GPIO_MODE)         /* PTA28 */
#define    PORT29_GPIO                            (PORT_GPIO_MODE)         /* PTA29 */
#define    PORT3_GPIO                             (PORT_GPIO_MODE)          /* PTA3 */
#define    PORT30_GPIO                            (PORT_GPIO_MODE)         /* PTA30 */
#define    PORT31_GPIO                            (PORT_GPIO_MODE)         /* PTA31 */
#define    PORT4_GPIO                             (PORT_GPIO_MODE)          /* PTA4 */
#define    PORT6_GPIO                             (PORT_GPIO_MODE)          /* PTA6 */
#define    PORT7_GPIO                             (PORT_GPIO_MODE)          /* PTA7 */
#define    PORT8_GPIO                             (PORT_GPIO_MODE)          /* PTA8 */
#define    PORT9_GPIO                             (PORT_GPIO_MODE)          /* PTA9 */
#define    PORT32_GPIO                            (PORT_GPIO_MODE)          /* PTB0 */
#define    PORT33_GPIO                            (PORT_GPIO_MODE)          /* PTB1 */
#define    PORT42_GPIO                            (PORT_GPIO_MODE)         /* PTB10 */
#define    PORT44_GPIO                            (PORT_GPIO_MODE)         /* PTB12 */
#define    PORT45_GPIO                            (PORT_GPIO_MODE)         /* PTB13 */
#define    PORT46_GPIO                            (PORT_GPIO_MODE)         /* PTB14 */
#define    PORT47_GPIO                            (PORT_GPIO_MODE)         /* PTB15 */
#define    PORT48_GPIO                            (PORT_GPIO_MODE)         /* PTB16 */
#define    PORT49_GPIO                            (PORT_GPIO_MODE)         /* PTB17 */
#define    PORT50_GPIO                            (PORT_GPIO_MODE)         /* PTB18 */
#define    PORT51_GPIO                            (PORT_GPIO_MODE)         /* PTB19 */
#define    PORT52_GPIO                            (PORT_GPIO_MODE)         /* PTB20 */
#define    PORT53_GPIO                            (PORT_GPIO_MODE)         /* PTB21 */
#define    PORT54_GPIO                            (PORT_GPIO_MODE)         /* PTB22 */
#define    PORT55_GPIO                            (PORT_GPIO_MODE)         /* PTB23 */
#define    PORT56_GPIO                            (PORT_GPIO_MODE)         /* PTB24 */
#define    PORT57_GPIO                            (PORT_GPIO_MODE)         /* PTB25 */
#define    PORT58_GPIO                            (PORT_GPIO_MODE)         /* PTB26 */
#define    PORT59_GPIO                            (PORT_GPIO_MODE)         /* PTB27 */
#define    PORT60_GPIO                            (PORT_GPIO_MODE)         /* PTB28 */
#define    PORT61_GPIO                            (PORT_GPIO_MODE)         /* PTB29 */
#define    PORT35_GPIO                            (PORT_GPIO_MODE)          /* PTB3 */
#define    PORT62_GPIO                            (PORT_GPIO_MODE)         /* PTB30 */
#define    PORT63_GPIO                            (PORT_GPIO_MODE)         /* PTB31 */
#define    PORT36_GPIO                            (PORT_GPIO_MODE)          /* PTB4 */
#define    PORT37_GPIO                            (PORT_GPIO_MODE)          /* PTB5 */
#define    PORT38_GPIO                            (PORT_GPIO_MODE)          /* PTB6 */
#define    PORT39_GPIO                            (PORT_GPIO_MODE)          /* PTB7 */
#define    PORT40_GPIO                            (PORT_GPIO_MODE)          /* PTB8 */
#define    PORT41_GPIO                            (PORT_GPIO_MODE)          /* PTB9 */
#define    PORT64_GPIO                            (PORT_GPIO_MODE)          /* PTC0 */
#define    PORT65_GPIO                            (PORT_GPIO_MODE)          /* PTC1 */
#define    PORT74_GPIO                            (PORT_GPIO_MODE)         /* PTC10 */
#define    PORT75_GPIO                            (PORT_GPIO_MODE)         /* PTC11 */
#define    PORT76_GPIO                            (PORT_GPIO_MODE)         /* PTC12 */
#define    PORT77_GPIO                            (PORT_GPIO_MODE)         /* PTC13 */
#define    PORT78_GPIO                            (PORT_GPIO_MODE)         /* PTC14 */
#define    PORT79_GPIO                            (PORT_GPIO_MODE)         /* PTC15 */
#define    PORT80_GPIO                            (PORT_GPIO_MODE)         /* PTC16 */
#define    PORT81_GPIO                            (PORT_GPIO_MODE)         /* PTC17 */
#define    PORT82_GPIO                            (PORT_GPIO_MODE)         /* PTC18 */
#define    PORT83_GPIO                            (PORT_GPIO_MODE)         /* PTC19 */
#define    PORT66_GPIO                            (PORT_GPIO_MODE)          /* PTC2 */
#define    PORT84_GPIO                            (PORT_GPIO_MODE)         /* PTC20 */
#define    PORT85_GPIO                            (PORT_GPIO_MODE)         /* PTC21 */
#define    PORT86_GPIO                            (PORT_GPIO_MODE)         /* PTC22 */
#define    PORT87_GPIO                            (PORT_GPIO_MODE)         /* PTC23 */
#define    PORT88_GPIO                            (PORT_GPIO_MODE)         /* PTC24 */
#define    PORT89_GPIO                            (PORT_GPIO_MODE)         /* PTC25 */
#define    PORT90_GPIO                            (PORT_GPIO_MODE)         /* PTC26 */
#define    PORT91_GPIO                            (PORT_GPIO_MODE)         /* PTC27 */
#define    PORT92_GPIO                            (PORT_GPIO_MODE)         /* PTC28 */
#define    PORT93_GPIO                            (PORT_GPIO_MODE)         /* PTC29 */
#define    PORT67_GPIO                            (PORT_GPIO_MODE)          /* PTC3 */
#define    PORT94_GPIO                            (PORT_GPIO_MODE)         /* PTC30 */
#define    PORT95_GPIO                            (PORT_GPIO_MODE)         /* PTC31 */
#define    PORT68_GPIO                            (PORT_GPIO_MODE)          /* PTC4 */
#define    PORT69_GPIO                            (PORT_GPIO_MODE)          /* PTC5 */
#define    PORT70_GPIO                            (PORT_GPIO_MODE)          /* PTC6 */
#define    PORT71_GPIO                            (PORT_GPIO_MODE)          /* PTC7 */
#define    PORT72_GPIO                            (PORT_GPIO_MODE)          /* PTC8 */
#define    PORT73_GPIO                            (PORT_GPIO_MODE)          /* PTC9 */
#define    PORT96_GPIO                            (PORT_GPIO_MODE)          /* PTD0 */
#define    PORT97_GPIO                            (PORT_GPIO_MODE)          /* PTD1 */
#define    PORT106_GPIO                           (PORT_GPIO_MODE)         /* PTD10 */
#define    PORT107_GPIO                           (PORT_GPIO_MODE)         /* PTD11 */
#define    PORT108_GPIO                           (PORT_GPIO_MODE)         /* PTD12 */
#define    PORT111_GPIO                           (PORT_GPIO_MODE)         /* PTD15 */
#define    PORT112_GPIO                           (PORT_GPIO_MODE)         /* PTD16 */
#define    PORT113_GPIO                           (PORT_GPIO_MODE)         /* PTD17 */
#define    PORT114_GPIO                           (PORT_GPIO_MODE)         /* PTD18 */
#define    PORT115_GPIO                           (PORT_GPIO_MODE)         /* PTD19 */
#define    PORT98_GPIO                            (PORT_GPIO_MODE)          /* PTD2 */
#define    PORT116_GPIO                           (PORT_GPIO_MODE)         /* PTD20 */
#define    PORT117_GPIO                           (PORT_GPIO_MODE)         /* PTD21 */
#define    PORT118_GPIO                           (PORT_GPIO_MODE)         /* PTD22 */
#define    PORT119_GPIO                           (PORT_GPIO_MODE)         /* PTD23 */
#define    PORT120_GPIO                           (PORT_GPIO_MODE)         /* PTD24 */
#define    PORT121_GPIO                           (PORT_GPIO_MODE)         /* PTD25 */
#define    PORT122_GPIO                           (PORT_GPIO_MODE)         /* PTD26 */
#define    PORT123_GPIO                           (PORT_GPIO_MODE)         /* PTD27 */
#define    PORT124_GPIO                           (PORT_GPIO_MODE)         /* PTD28 */
#define    PORT125_GPIO                           (PORT_GPIO_MODE)         /* PTD29 */
#define    PORT99_GPIO                            (PORT_GPIO_MODE)          /* PTD3 */
#define    PORT126_GPIO                           (PORT_GPIO_MODE)         /* PTD30 */
#define    PORT127_GPIO                           (PORT_GPIO_MODE)         /* PTD31 */
#define    PORT100_GPIO                           (PORT_GPIO_MODE)          /* PTD4 */
#define    PORT101_GPIO                           (PORT_GPIO_MODE)          /* PTD5 */
#define    PORT102_GPIO                           (PORT_GPIO_MODE)          /* PTD6 */
#define    PORT103_GPIO                           (PORT_GPIO_MODE)          /* PTD7 */
#define    PORT104_GPIO                           (PORT_GPIO_MODE)          /* PTD8 */
#define    PORT105_GPIO                           (PORT_GPIO_MODE)          /* PTD9 */
#define    PORT128_GPIO                           (PORT_GPIO_MODE)          /* PTE0 */
#define    PORT129_GPIO                           (PORT_GPIO_MODE)          /* PTE1 */
#define    PORT138_GPIO                           (PORT_GPIO_MODE)         /* PTE10 */
#define    PORT139_GPIO                           (PORT_GPIO_MODE)         /* PTE11 */
#define    PORT140_GPIO                           (PORT_GPIO_MODE)         /* PTE12 */
#define    PORT141_GPIO                           (PORT_GPIO_MODE)         /* PTE13 */
#define    PORT142_GPIO                           (PORT_GPIO_MODE)         /* PTE14 */
#define    PORT143_GPIO                           (PORT_GPIO_MODE)         /* PTE15 */
#define    PORT144_GPIO                           (PORT_GPIO_MODE)         /* PTE16 */
#define    PORT145_GPIO                           (PORT_GPIO_MODE)         /* PTE17 */
#define    PORT146_GPIO                           (PORT_GPIO_MODE)         /* PTE18 */
#define    PORT147_GPIO                           (PORT_GPIO_MODE)         /* PTE19 */
#define    PORT130_GPIO                           (PORT_GPIO_MODE)          /* PTE2 */
#define    PORT148_GPIO                           (PORT_GPIO_MODE)         /* PTE20 */
#define    PORT149_GPIO                           (PORT_GPIO_MODE)         /* PTE21 */
#define    PORT150_GPIO                           (PORT_GPIO_MODE)         /* PTE22 */
#define    PORT151_GPIO                           (PORT_GPIO_MODE)         /* PTE23 */
#define    PORT152_GPIO                           (PORT_GPIO_MODE)         /* PTE24 */
#define    PORT153_GPIO                           (PORT_GPIO_MODE)         /* PTE25 */
#define    PORT154_GPIO                           (PORT_GPIO_MODE)         /* PTE26 */
#define    PORT155_GPIO                           (PORT_GPIO_MODE)         /* PTE27 */
#define    PORT131_GPIO                           (PORT_GPIO_MODE)          /* PTE3 */
#define    PORT132_GPIO                           (PORT_GPIO_MODE)          /* PTE4 */
#define    PORT133_GPIO                           (PORT_GPIO_MODE)          /* PTE5 */
#define    PORT134_GPIO                           (PORT_GPIO_MODE)          /* PTE6 */
#define    PORT135_GPIO                           (PORT_GPIO_MODE)          /* PTE7 */
#define    PORT136_GPIO                           (PORT_GPIO_MODE)          /* PTE8 */
#define    PORT137_GPIO                           (PORT_GPIO_MODE)          /* PTE9 */
#define    PORT160_GPIO                           (PORT_GPIO_MODE)          /* PTF0 */
#define    PORT161_GPIO                           (PORT_GPIO_MODE)          /* PTF1 */
#define    PORT170_GPIO                           (PORT_GPIO_MODE)         /* PTF10 */
#define    PORT171_GPIO                           (PORT_GPIO_MODE)         /* PTF11 */
#define    PORT172_GPIO                           (PORT_GPIO_MODE)         /* PTF12 */
#define    PORT173_GPIO                           (PORT_GPIO_MODE)         /* PTF13 */
#define    PORT174_GPIO                           (PORT_GPIO_MODE)         /* PTF14 */
#define    PORT175_GPIO                           (PORT_GPIO_MODE)         /* PTF15 */
#define    PORT176_GPIO                           (PORT_GPIO_MODE)         /* PTF16 */
#define    PORT177_GPIO                           (PORT_GPIO_MODE)         /* PTF17 */
#define    PORT178_GPIO                           (PORT_GPIO_MODE)         /* PTF18 */
#define    PORT179_GPIO                           (PORT_GPIO_MODE)         /* PTF19 */
#define    PORT162_GPIO                           (PORT_GPIO_MODE)          /* PTF2 */
#define    PORT180_GPIO                           (PORT_GPIO_MODE)         /* PTF20 */
#define    PORT181_GPIO                           (PORT_GPIO_MODE)         /* PTF21 */
#define    PORT182_GPIO                           (PORT_GPIO_MODE)         /* PTF22 */
#define    PORT183_GPIO                           (PORT_GPIO_MODE)         /* PTF23 */
#define    PORT184_GPIO                           (PORT_GPIO_MODE)         /* PTF24 */
#define    PORT163_GPIO                           (PORT_GPIO_MODE)          /* PTF3 */
#define    PORT164_GPIO                           (PORT_GPIO_MODE)          /* PTF4 */
#define    PORT165_GPIO                           (PORT_GPIO_MODE)          /* PTF5 */
#define    PORT166_GPIO                           (PORT_GPIO_MODE)          /* PTF6 */
#define    PORT167_GPIO                           (PORT_GPIO_MODE)          /* PTF7 */
#define    PORT168_GPIO                           (PORT_GPIO_MODE)          /* PTF8 */
#define    PORT169_GPIO                           (PORT_GPIO_MODE)          /* PTF9 */
#define    PORT192_GPIO                           (PORT_GPIO_MODE)          /* PTG0 */
#define    PORT193_GPIO                           (PORT_GPIO_MODE)          /* PTG1 */
#define    PORT202_GPIO                           (PORT_GPIO_MODE)         /* PTG10 */
#define    PORT203_GPIO                           (PORT_GPIO_MODE)         /* PTG11 */
#define    PORT204_GPIO                           (PORT_GPIO_MODE)         /* PTG12 */
#define    PORT205_GPIO                           (PORT_GPIO_MODE)         /* PTG13 */
#define    PORT206_GPIO                           (PORT_GPIO_MODE)         /* PTG14 */
#define    PORT207_GPIO                           (PORT_GPIO_MODE)         /* PTG15 */
#define    PORT208_GPIO                           (PORT_GPIO_MODE)         /* PTG16 */
#define    PORT209_GPIO                           (PORT_GPIO_MODE)         /* PTG17 */
#define    PORT210_GPIO                           (PORT_GPIO_MODE)         /* PTG18 */
#define    PORT211_GPIO                           (PORT_GPIO_MODE)         /* PTG19 */
#define    PORT194_GPIO                           (PORT_GPIO_MODE)          /* PTG2 */
#define    PORT212_GPIO                           (PORT_GPIO_MODE)         /* PTG20 */
#define    PORT213_GPIO                           (PORT_GPIO_MODE)         /* PTG21 */
#define    PORT214_GPIO                           (PORT_GPIO_MODE)         /* PTG22 */
#define    PORT215_GPIO                           (PORT_GPIO_MODE)         /* PTG23 */
#define    PORT195_GPIO                           (PORT_GPIO_MODE)          /* PTG3 */
#define    PORT196_GPIO                           (PORT_GPIO_MODE)          /* PTG4 */
#define    PORT197_GPIO                           (PORT_GPIO_MODE)          /* PTG5 */
#define    PORT198_GPIO                           (PORT_GPIO_MODE)          /* PTG6 */
#define    PORT199_GPIO                           (PORT_GPIO_MODE)          /* PTG7 */
#define    PORT200_GPIO                           (PORT_GPIO_MODE)          /* PTG8 */
#define    PORT201_GPIO                           (PORT_GPIO_MODE)          /* PTG9 */
#define    PORT224_GPIO                           (PORT_GPIO_MODE)          /* PTH0 */
#define    PORT225_GPIO                           (PORT_GPIO_MODE)          /* PTH1 */
#define    PORT234_GPIO                           (PORT_GPIO_MODE)         /* PTH10 */
#define    PORT235_GPIO                           (PORT_GPIO_MODE)         /* PTH11 */
#define    PORT236_GPIO                           (PORT_GPIO_MODE)         /* PTH12 */
#define    PORT237_GPIO                           (PORT_GPIO_MODE)         /* PTH13 */
#define    PORT238_GPIO                           (PORT_GPIO_MODE)         /* PTH14 */
#define    PORT239_GPIO                           (PORT_GPIO_MODE)         /* PTH15 */
#define    PORT240_GPIO                           (PORT_GPIO_MODE)         /* PTH16 */
#define    PORT241_GPIO                           (PORT_GPIO_MODE)         /* PTH17 */
#define    PORT242_GPIO                           (PORT_GPIO_MODE)         /* PTH18 */
#define    PORT243_GPIO                           (PORT_GPIO_MODE)         /* PTH19 */
#define    PORT226_GPIO                           (PORT_GPIO_MODE)          /* PTH2 */
#define    PORT244_GPIO                           (PORT_GPIO_MODE)         /* PTH20 */
#define    PORT245_GPIO                           (PORT_GPIO_MODE)         /* PTH21 */
#define    PORT246_GPIO                           (PORT_GPIO_MODE)         /* PTH22 */
#define    PORT247_GPIO                           (PORT_GPIO_MODE)         /* PTH23 */
#define    PORT227_GPIO                           (PORT_GPIO_MODE)          /* PTH3 */
#define    PORT228_GPIO                           (PORT_GPIO_MODE)          /* PTH4 */
#define    PORT229_GPIO                           (PORT_GPIO_MODE)          /* PTH5 */
#define    PORT230_GPIO                           (PORT_GPIO_MODE)          /* PTH6 */
#define    PORT231_GPIO                           (PORT_GPIO_MODE)          /* PTH7 */
#define    PORT232_GPIO                           (PORT_GPIO_MODE)          /* PTH8 */
#define    PORT233_GPIO                           (PORT_GPIO_MODE)          /* PTH9 */
#define    PORT256_GPIO                           (PORT_GPIO_MODE)          /* PTI0 */
#define    PORT257_GPIO                           (PORT_GPIO_MODE)          /* PTI1 */
#define    PORT266_GPIO                           (PORT_GPIO_MODE)         /* PTI10 */
#define    PORT267_GPIO                           (PORT_GPIO_MODE)         /* PTI11 */
#define    PORT268_GPIO                           (PORT_GPIO_MODE)         /* PTI12 */
#define    PORT269_GPIO                           (PORT_GPIO_MODE)         /* PTI13 */
#define    PORT270_GPIO                           (PORT_GPIO_MODE)         /* PTI14 */
#define    PORT271_GPIO                           (PORT_GPIO_MODE)         /* PTI15 */
#define    PORT272_GPIO                           (PORT_GPIO_MODE)         /* PTI16 */
#define    PORT273_GPIO                           (PORT_GPIO_MODE)         /* PTI17 */
#define    PORT274_GPIO                           (PORT_GPIO_MODE)         /* PTI18 */
#define    PORT275_GPIO                           (PORT_GPIO_MODE)         /* PTI19 */
#define    PORT258_GPIO                           (PORT_GPIO_MODE)          /* PTI2 */
#define    PORT276_GPIO                           (PORT_GPIO_MODE)         /* PTI20 */
#define    PORT277_GPIO                           (PORT_GPIO_MODE)         /* PTI21 */
#define    PORT278_GPIO                           (PORT_GPIO_MODE)         /* PTI22 */
#define    PORT279_GPIO                           (PORT_GPIO_MODE)         /* PTI23 */
#define    PORT259_GPIO                           (PORT_GPIO_MODE)          /* PTI3 */
#define    PORT260_GPIO                           (PORT_GPIO_MODE)          /* PTI4 */
#define    PORT261_GPIO                           (PORT_GPIO_MODE)          /* PTI5 */
#define    PORT262_GPIO                           (PORT_GPIO_MODE)          /* PTI6 */
#define    PORT263_GPIO                           (PORT_GPIO_MODE)          /* PTI7 */
#define    PORT264_GPIO                           (PORT_GPIO_MODE)          /* PTI8 */
#define    PORT265_GPIO                           (PORT_GPIO_MODE)          /* PTI9 */
#define    PORT0_FTU4_CH6                    (PORT_ALT2_FUNC_MODE)          /* PTA0 */
#define    PORT1_FTU4_CH4                    (PORT_ALT2_FUNC_MODE)          /* PTA1 */
#define    PORT10_FTU3_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTA10 */
#define    PORT11_FTU3_CH0                   (PORT_ALT2_FUNC_MODE)         /* PTA11 */
#define    PORT12_FTU0_CH7                   (PORT_ALT2_FUNC_MODE)         /* PTA12 */
#define    PORT13_FTU0_CH3                   (PORT_ALT2_FUNC_MODE)         /* PTA13 */
#define    PORT14_FTU_FLT17                  (PORT_ALT2_FUNC_MODE)         /* PTA14 */
#define    PORT15_FTU6_CH4                   (PORT_ALT2_FUNC_MODE)         /* PTA15 */
#define    PORT16_FTU6_CH2                   (PORT_ALT2_FUNC_MODE)         /* PTA16 */
#define    PORT17_FTU5_CH5                   (PORT_ALT2_FUNC_MODE)         /* PTA17 */
#define    PORT18_FTU3_CH6                   (PORT_ALT2_FUNC_MODE)         /* PTA18 */
#define    PORT2_FTU2_CH3                    (PORT_ALT2_FUNC_MODE)          /* PTA2 */
#define    PORT20_FTU3_CH7                   (PORT_ALT2_FUNC_MODE)         /* PTA20 */
#define    PORT21_FCUART6_RX                 (PORT_ALT2_FUNC_MODE)         /* PTA21 */
#define    PORT22_FTU2_CH3                   (PORT_ALT2_FUNC_MODE)         /* PTA22 */
#define    PORT23_FTU4_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTA23 */
#define    PORT24_FTU4_CH0                   (PORT_ALT2_FUNC_MODE)         /* PTA24 */
#define    PORT25_FTU4_CH3                   (PORT_ALT2_FUNC_MODE)         /* PTA25 */
#define    PORT26_FTU2_CH2                   (PORT_ALT2_FUNC_MODE)         /* PTA26 */
#define    PORT27_FTU5_CH7                   (PORT_ALT2_FUNC_MODE)         /* PTA27 */
#define    PORT28_FTU5_CH5                   (PORT_ALT2_FUNC_MODE)         /* PTA28 */
#define    PORT29_FTU5_CH4                   (PORT_ALT2_FUNC_MODE)         /* PTA29 */
#define    PORT3_FTU2_CH2                    (PORT_ALT2_FUNC_MODE)          /* PTA3 */
#define    PORT30_FTU5_CH2                   (PORT_ALT2_FUNC_MODE)         /* PTA30 */
#define    PORT31_FTU0_CH6                   (PORT_ALT2_FUNC_MODE)         /* PTA31 */
#define    PORT4_CMP0_OUT                    (PORT_ALT2_FUNC_MODE)          /* PTA4 */
#define    PORT6_FTU5_CH0                    (PORT_ALT2_FUNC_MODE)          /* PTA6 */
#define    PORT7_FTU7_CH6                    (PORT_ALT2_FUNC_MODE)          /* PTA7 */
#define    PORT8_FCUART2_RX                  (PORT_ALT2_FUNC_MODE)          /* PTA8 */
#define    PORT9_FCUART2_TX                  (PORT_ALT2_FUNC_MODE)          /* PTA9 */
#define    PORT32_SDDF0_BREAK3               (PORT_ALT2_FUNC_MODE)          /* PTB0 */
#define    PORT33_SDDF0_BREAK2               (PORT_ALT2_FUNC_MODE)          /* PTB1 */
#define    PORT42_FTU2_CH5                   (PORT_ALT2_FUNC_MODE)         /* PTB10 */
#define    PORT45_FTU3_CH2                   (PORT_ALT2_FUNC_MODE)         /* PTB13 */
#define    PORT46_FTU3_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTB14 */
#define    PORT47_FTU3_CH0                   (PORT_ALT2_FUNC_MODE)         /* PTB15 */
#define    PORT48_FTU5_CH7                   (PORT_ALT2_FUNC_MODE)         /* PTB16 */
#define    PORT49_FTU5_CH6                   (PORT_ALT2_FUNC_MODE)         /* PTB17 */
#define    PORT50_FTU0_CH5                   (PORT_ALT2_FUNC_MODE)         /* PTB18 */
#define    PORT51_FTU0_CH4                   (PORT_ALT2_FUNC_MODE)         /* PTB19 */
#define    PORT52_FTU1_CH0                   (PORT_ALT2_FUNC_MODE)         /* PTB20 */
#define    PORT53_FTU1_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTB21 */
#define    PORT54_FTU8_CH3                   (PORT_ALT2_FUNC_MODE)         /* PTB22 */
#define    PORT55_FTU_FLT9                   (PORT_ALT2_FUNC_MODE)         /* PTB23 */
#define    PORT56_FTU1_CH2                   (PORT_ALT2_FUNC_MODE)         /* PTB24 */
#define    PORT58_FTU6_CH0                   (PORT_ALT2_FUNC_MODE)         /* PTB26 */
#define    PORT59_FTU7_CH0                   (PORT_ALT2_FUNC_MODE)         /* PTB27 */
#define    PORT60_FTU7_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTB28 */
#define    PORT61_FTU1_CH3                   (PORT_ALT2_FUNC_MODE)         /* PTB29 */
#define    PORT62_FTU6_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTB30 */
#define    PORT63_FTU7_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTB31 */
#define    PORT36_FTU7_CH7                   (PORT_ALT2_FUNC_MODE)          /* PTB4 */
#define    PORT37_FTU6_CH2                   (PORT_ALT2_FUNC_MODE)          /* PTB5 */
#define    PORT40_FTU4_CH2                   (PORT_ALT2_FUNC_MODE)          /* PTB8 */
#define    PORT41_FTU2_CH7                   (PORT_ALT2_FUNC_MODE)          /* PTB9 */
#define    PORT64_FTU8_CH6                   (PORT_ALT2_FUNC_MODE)          /* PTC0 */
#define    PORT65_FTU7_CH5                   (PORT_ALT2_FUNC_MODE)          /* PTC1 */
#define    PORT74_FTU3_CH4                   (PORT_ALT2_FUNC_MODE)         /* PTC10 */
#define    PORT75_FTU3_CH3                   (PORT_ALT2_FUNC_MODE)         /* PTC11 */
#define    PORT76_FTU1_CH5                   (PORT_ALT2_FUNC_MODE)         /* PTC12 */
#define    PORT77_FTU1_CH4                   (PORT_ALT2_FUNC_MODE)         /* PTC13 */
#define    PORT78_FTU7_CH4                   (PORT_ALT2_FUNC_MODE)         /* PTC14 */
#define    PORT79_FTU8_CH4                   (PORT_ALT2_FUNC_MODE)         /* PTC15 */
#define    PORT80_FTU_FLT7                   (PORT_ALT2_FUNC_MODE)         /* PTC16 */
#define    PORT81_FTU_FLT6                   (PORT_ALT2_FUNC_MODE)         /* PTC17 */
#define    PORT82_FTU7_CH2                   (PORT_ALT2_FUNC_MODE)         /* PTC18 */
#define    PORT83_FTU1_CH6                   (PORT_ALT2_FUNC_MODE)         /* PTC19 */
#define    PORT66_FTU6_CH3                   (PORT_ALT2_FUNC_MODE)          /* PTC2 */
#define    PORT84_FTU1_CH7                   (PORT_ALT2_FUNC_MODE)         /* PTC20 */
#define    PORT85_FTU3_CH0                   (PORT_ALT2_FUNC_MODE)         /* PTC21 */
#define    PORT86_FTU3_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTC22 */
#define    PORT88_FTU3_CH2                   (PORT_ALT2_FUNC_MODE)         /* PTC24 */
#define    PORT89_FTU3_CH3                   (PORT_ALT2_FUNC_MODE)         /* PTC25 */
#define    PORT90_FTU9_CH7                   (PORT_ALT2_FUNC_MODE)         /* PTC26 */
#define    PORT92_FTU7_CH2                   (PORT_ALT2_FUNC_MODE)         /* PTC28 */
#define    PORT93_FTU7_CH5                   (PORT_ALT2_FUNC_MODE)         /* PTC29 */
#define    PORT67_FTU6_CH2                   (PORT_ALT2_FUNC_MODE)          /* PTC3 */
#define    PORT94_FTU7_CH7                   (PORT_ALT2_FUNC_MODE)         /* PTC30 */
#define    PORT95_FTU5_CH1                   (PORT_ALT2_FUNC_MODE)         /* PTC31 */
#define    PORT68_FTU3_CH4                   (PORT_ALT2_FUNC_MODE)          /* PTC4 */
#define    PORT69_FTU3_CH3                   (PORT_ALT2_FUNC_MODE)          /* PTC5 */
#define    PORT70_FCUART1_RX                 (PORT_ALT2_FUNC_MODE)          /* PTC6 */
#define    PORT71_FCUART1_TX                 (PORT_ALT2_FUNC_MODE)          /* PTC7 */
#define    PORT72_FTU7_CH4                   (PORT_ALT2_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU7_CH3                   (PORT_ALT2_FUNC_MODE)          /* PTC9 */
#define    PORT96_FTU4_CH2                   (PORT_ALT2_FUNC_MODE)          /* PTD0 */
#define    PORT97_FCUART6_TX                 (PORT_ALT2_FUNC_MODE)          /* PTD1 */
#define    PORT106_FTU6_CH7                  (PORT_ALT2_FUNC_MODE)         /* PTD10 */
#define    PORT107_FTU6_CH6                  (PORT_ALT2_FUNC_MODE)         /* PTD11 */
#define    PORT108_FTU6_CH5                  (PORT_ALT2_FUNC_MODE)         /* PTD12 */
#define    PORT111_FTU5_CH0                  (PORT_ALT2_FUNC_MODE)         /* PTD15 */
#define    PORT112_FTU5_CH1                  (PORT_ALT2_FUNC_MODE)         /* PTD16 */
#define    PORT113_FTU5_CH3                  (PORT_ALT2_FUNC_MODE)         /* PTD17 */
#define    PORT114_FTU5_CH3                  (PORT_ALT2_FUNC_MODE)         /* PTD18 */
#define    PORT115_FTU5_CH4                  (PORT_ALT2_FUNC_MODE)         /* PTD19 */
#define    PORT98_FTU2_CH0                   (PORT_ALT2_FUNC_MODE)          /* PTD2 */
#define    PORT116_FTU3_CH4                  (PORT_ALT2_FUNC_MODE)         /* PTD20 */
#define    PORT117_FTU3_CH5                  (PORT_ALT2_FUNC_MODE)         /* PTD21 */
#define    PORT119_FTU2_CH1                  (PORT_ALT2_FUNC_MODE)         /* PTD23 */
#define    PORT120_FTU2_CH4                  (PORT_ALT2_FUNC_MODE)         /* PTD24 */
#define    PORT121_FTU2_CH6                  (PORT_ALT2_FUNC_MODE)         /* PTD25 */
#define    PORT122_FTU4_CH0                  (PORT_ALT2_FUNC_MODE)         /* PTD26 */
#define    PORT123_FTU4_CH1                  (PORT_ALT2_FUNC_MODE)         /* PTD27 */
#define    PORT124_FTU4_CH3                  (PORT_ALT2_FUNC_MODE)         /* PTD28 */
#define    PORT125_FTU4_CH5                  (PORT_ALT2_FUNC_MODE)         /* PTD29 */
#define    PORT99_FTU3_CH7                   (PORT_ALT2_FUNC_MODE)          /* PTD3 */
#define    PORT126_FTU4_CH7                  (PORT_ALT2_FUNC_MODE)         /* PTD30 */
#define    PORT127_FTU6_CH0                  (PORT_ALT2_FUNC_MODE)         /* PTD31 */
#define    PORT100_FTU3_CH6                  (PORT_ALT2_FUNC_MODE)          /* PTD4 */
#define    PORT101_FTU6_CH4                  (PORT_ALT2_FUNC_MODE)          /* PTD5 */
#define    PORT102_FCUART2_RX                (PORT_ALT2_FUNC_MODE)          /* PTD6 */
#define    PORT103_FCUART2_TX                (PORT_ALT2_FUNC_MODE)          /* PTD7 */
#define    PORT104_FTU7_CH0                  (PORT_ALT2_FUNC_MODE)          /* PTD8 */
#define    PORT105_FTU8_CH7                  (PORT_ALT2_FUNC_MODE)          /* PTD9 */
#define    PORT128_FCUART0_CTS               (PORT_ALT2_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCUART0_RTS               (PORT_ALT2_FUNC_MODE)          /* PTE1 */
#define    PORT138_SCG_CLKOUT                (PORT_ALT2_FUNC_MODE)         /* PTE10 */
#define    PORT139_FTU2_CH1                  (PORT_ALT2_FUNC_MODE)         /* PTE11 */
#define    PORT140_FTU5_CH6                  (PORT_ALT2_FUNC_MODE)         /* PTE12 */
#define    PORT141_FTU2_CH0                  (PORT_ALT2_FUNC_MODE)         /* PTE13 */
#define    PORT142_FTU0_CH3                  (PORT_ALT2_FUNC_MODE)         /* PTE14 */
#define    PORT143_FCUART1_CTS               (PORT_ALT2_FUNC_MODE)         /* PTE15 */
#define    PORT144_FCUART1_RTS               (PORT_ALT2_FUNC_MODE)         /* PTE16 */
#define    PORT145_FTU6_CH1                  (PORT_ALT2_FUNC_MODE)         /* PTE17 */
#define    PORT146_FTU6_CH3                  (PORT_ALT2_FUNC_MODE)         /* PTE18 */
#define    PORT147_SCG_CLKOUT                (PORT_ALT2_FUNC_MODE)         /* PTE19 */
#define    PORT130_FTU6_CH6                  (PORT_ALT2_FUNC_MODE)          /* PTE2 */
#define    PORT148_FTU0_CH0                  (PORT_ALT2_FUNC_MODE)         /* PTE20 */
#define    PORT149_FTU0_CH1                  (PORT_ALT2_FUNC_MODE)         /* PTE21 */
#define    PORT150_FTU0_CH2                  (PORT_ALT2_FUNC_MODE)         /* PTE22 */
#define    PORT151_FTU0_CH4                  (PORT_ALT2_FUNC_MODE)         /* PTE23 */
#define    PORT152_FTU0_CH5                  (PORT_ALT2_FUNC_MODE)         /* PTE24 */
#define    PORT153_FTU0_CH6                  (PORT_ALT2_FUNC_MODE)         /* PTE25 */
#define    PORT154_FTU3_CH2                  (PORT_ALT2_FUNC_MODE)         /* PTE26 */
#define    PORT155_FTU3_CH5                  (PORT_ALT2_FUNC_MODE)         /* PTE27 */
#define    PORT131_FTU0_CH2                  (PORT_ALT2_FUNC_MODE)          /* PTE3 */
#define    PORT132_FTU2_QD_PHB               (PORT_ALT2_FUNC_MODE)          /* PTE4 */
#define    PORT133_FTU_TCK2                  (PORT_ALT2_FUNC_MODE)          /* PTE5 */
#define    PORT134_FTU6_CH5                  (PORT_ALT2_FUNC_MODE)          /* PTE6 */
#define    PORT135_FTU5_CH2                  (PORT_ALT2_FUNC_MODE)          /* PTE7 */
#define    PORT136_FTU6_CH1                  (PORT_ALT2_FUNC_MODE)          /* PTE8 */
#define    PORT137_FTU0_CH7                  (PORT_ALT2_FUNC_MODE)          /* PTE9 */
#define    PORT160_FCUART6_RX                (PORT_ALT2_FUNC_MODE)          /* PTF0 */
#define    PORT161_FCUART6_TX                (PORT_ALT2_FUNC_MODE)          /* PTF1 */
#define    PORT171_FLEXCAN6_TX               (PORT_ALT2_FUNC_MODE)         /* PTF11 */
#define    PORT172_SDDF0_CLK0                (PORT_ALT2_FUNC_MODE)         /* PTF12 */
#define    PORT174_SDDF0_BREAK0              (PORT_ALT2_FUNC_MODE)         /* PTF14 */
#define    PORT175_SDDF0_CLK3                (PORT_ALT2_FUNC_MODE)         /* PTF15 */
#define    PORT177_FTU_FLT21                 (PORT_ALT2_FUNC_MODE)         /* PTF17 */
#define    PORT178_FCSPI4_PCS3               (PORT_ALT2_FUNC_MODE)         /* PTF18 */
#define    PORT179_FCSPI4_PCS2               (PORT_ALT2_FUNC_MODE)         /* PTF19 */
#define    PORT162_FCUART6_RTS               (PORT_ALT2_FUNC_MODE)          /* PTF2 */
#define    PORT180_FCSPI4_PCS1               (PORT_ALT2_FUNC_MODE)         /* PTF20 */
#define    PORT181_FTU3_CH6                  (PORT_ALT2_FUNC_MODE)         /* PTF21 */
#define    PORT182_FTU3_CH7                  (PORT_ALT2_FUNC_MODE)         /* PTF22 */
#define    PORT183_SENT0_RXD0                (PORT_ALT2_FUNC_MODE)         /* PTF23 */
#define    PORT184_FTU4_CH6                  (PORT_ALT2_FUNC_MODE)         /* PTF24 */
#define    PORT163_FCUART8_RTS               (PORT_ALT2_FUNC_MODE)          /* PTF3 */
#define    PORT164_FCUART8_CTS               (PORT_ALT2_FUNC_MODE)          /* PTF4 */
#define    PORT166_FCUART11_TX               (PORT_ALT2_FUNC_MODE)          /* PTF6 */
#define    PORT169_FCUART13_RTS              (PORT_ALT2_FUNC_MODE)          /* PTF9 */
#define    PORT192_FCUART6_CTS               (PORT_ALT2_FUNC_MODE)          /* PTG0 */
#define    PORT204_SDDF0_BREAK1              (PORT_ALT2_FUNC_MODE)         /* PTG12 */
#define    PORT205_SDDF0_CH0                 (PORT_ALT2_FUNC_MODE)         /* PTG13 */
#define    PORT206_SDDF0_CH1                 (PORT_ALT2_FUNC_MODE)         /* PTG14 */
#define    PORT207_FCUART15_RX               (PORT_ALT2_FUNC_MODE)         /* PTG15 */
#define    PORT208_FCUART15_TX               (PORT_ALT2_FUNC_MODE)         /* PTG16 */
#define    PORT209_FCUART15_CTS              (PORT_ALT2_FUNC_MODE)         /* PTG17 */
#define    PORT210_FCSPI4_PCS0               (PORT_ALT2_FUNC_MODE)         /* PTG18 */
#define    PORT211_FCSPI4_SCK                (PORT_ALT2_FUNC_MODE)         /* PTG19 */
#define    PORT212_FCSPI4_SIN                (PORT_ALT2_FUNC_MODE)         /* PTG20 */
#define    PORT213_SENT0_RXD1                (PORT_ALT2_FUNC_MODE)         /* PTG21 */
#define    PORT214_SENT0_RXD2                (PORT_ALT2_FUNC_MODE)         /* PTG22 */
#define    PORT215_SENT0_RXD3                (PORT_ALT2_FUNC_MODE)         /* PTG23 */
#define    PORT195_FCUART9_RX                (PORT_ALT2_FUNC_MODE)          /* PTG3 */
#define    PORT196_FCUART9_TX                (PORT_ALT2_FUNC_MODE)          /* PTG4 */
#define    PORT197_FCUART9_RTS               (PORT_ALT2_FUNC_MODE)          /* PTG5 */
#define    PORT200_FCUART12_CTS              (PORT_ALT2_FUNC_MODE)          /* PTG8 */
#define    PORT201_FLEXCAN6_RX               (PORT_ALT2_FUNC_MODE)          /* PTG9 */
#define    PORT224_FCUART7_RTS               (PORT_ALT2_FUNC_MODE)          /* PTH0 */
#define    PORT225_FCUART7_CTS               (PORT_ALT2_FUNC_MODE)          /* PTH1 */
#define    PORT235_FCUART14_RX               (PORT_ALT2_FUNC_MODE)         /* PTH11 */
#define    PORT236_SDDF0_CH2                 (PORT_ALT2_FUNC_MODE)         /* PTH12 */
#define    PORT237_SDDF0_CH3                 (PORT_ALT2_FUNC_MODE)         /* PTH13 */
#define    PORT238_SDDF0_CLK1                (PORT_ALT2_FUNC_MODE)         /* PTH14 */
#define    PORT239_FCUART15_RTS              (PORT_ALT2_FUNC_MODE)         /* PTH15 */
#define    PORT240_FCSPI5_PCS0               (PORT_ALT2_FUNC_MODE)         /* PTH16 */
#define    PORT241_FCSPI5_SCK                (PORT_ALT2_FUNC_MODE)         /* PTH17 */
#define    PORT242_FCSPI4_SOUT               (PORT_ALT2_FUNC_MODE)         /* PTH18 */
#define    PORT243_SENT1_RXD0                (PORT_ALT2_FUNC_MODE)         /* PTH19 */
#define    PORT226_FCUART7_RX                (PORT_ALT2_FUNC_MODE)          /* PTH2 */
#define    PORT244_SENT1_RXD1                (PORT_ALT2_FUNC_MODE)         /* PTH20 */
#define    PORT246_FTU7_CH6                  (PORT_ALT2_FUNC_MODE)         /* PTH22 */
#define    PORT247_FTU9_CH6                  (PORT_ALT2_FUNC_MODE)         /* PTH23 */
#define    PORT227_FCUART9_CTS               (PORT_ALT2_FUNC_MODE)          /* PTH3 */
#define    PORT228_FTU4_QD_PHA               (PORT_ALT2_FUNC_MODE)          /* PTH4 */
#define    PORT229_FTU4_QD_PHB               (PORT_ALT2_FUNC_MODE)          /* PTH5 */
#define    PORT230_FCUART12_RTS              (PORT_ALT2_FUNC_MODE)          /* PTH6 */
#define    PORT231_FTU_FLT8                  (PORT_ALT2_FUNC_MODE)          /* PTH7 */
#define    PORT232_FTU8_CH5                  (PORT_ALT2_FUNC_MODE)          /* PTH8 */
#define    PORT256_FCUART7_TX                (PORT_ALT2_FUNC_MODE)          /* PTI0 */
#define    PORT257_FCUART8_RX                (PORT_ALT2_FUNC_MODE)          /* PTI1 */
#define    PORT266_FCUART14_CTS              (PORT_ALT2_FUNC_MODE)         /* PTI10 */
#define    PORT267_FCUART14_RTS              (PORT_ALT2_FUNC_MODE)         /* PTI11 */
#define    PORT268_SDDF0_CLK2                (PORT_ALT2_FUNC_MODE)         /* PTI12 */
#define    PORT271_FCSPI5_SIN                (PORT_ALT2_FUNC_MODE)         /* PTI15 */
#define    PORT272_FCSPI5_SOUT               (PORT_ALT2_FUNC_MODE)         /* PTI16 */
#define    PORT274_SENT1_RXD2                (PORT_ALT2_FUNC_MODE)         /* PTI18 */
#define    PORT275_SENT1_RXD3                (PORT_ALT2_FUNC_MODE)         /* PTI19 */
#define    PORT258_FCUART8_TX                (PORT_ALT2_FUNC_MODE)          /* PTI2 */
#define    PORT276_FTU_TCK2                  (PORT_ALT2_FUNC_MODE)         /* PTI20 */
#define    PORT277_FTU4_CH5                  (PORT_ALT2_FUNC_MODE)         /* PTI21 */
#define    PORT278_FTU4_CH4                  (PORT_ALT2_FUNC_MODE)         /* PTI22 */
#define    PORT279_FTU4_CH7                  (PORT_ALT2_FUNC_MODE)         /* PTI23 */
#define    PORT259_FCUART11_CTS              (PORT_ALT2_FUNC_MODE)          /* PTI3 */
#define    PORT260_FCUART11_RTS              (PORT_ALT2_FUNC_MODE)          /* PTI4 */
#define    PORT261_FCUART11_RX               (PORT_ALT2_FUNC_MODE)          /* PTI5 */
#define    PORT262_FCUART13_RX               (PORT_ALT2_FUNC_MODE)          /* PTI6 */
#define    PORT263_FCUART13_TX               (PORT_ALT2_FUNC_MODE)          /* PTI7 */
#define    PORT264_FCUART13_CTS              (PORT_ALT2_FUNC_MODE)          /* PTI8 */
#define    PORT265_FCUART14_TX               (PORT_ALT2_FUNC_MODE)          /* PTI9 */
#define    PORT0_FLEXCAN5_RX                 (PORT_ALT3_FUNC_MODE)          /* PTA0 */
#define    PORT1_FCUART15_RX                 (PORT_ALT3_FUNC_MODE)          /* PTA1 */
#define    PORT11_FLEXCAN1_TX                (PORT_ALT3_FUNC_MODE)         /* PTA11 */
#define    PORT12_FLEXCAN1_RX                (PORT_ALT3_FUNC_MODE)         /* PTA12 */
#define    PORT14_AONTIMER0_CLK1             (PORT_ALT3_FUNC_MODE)         /* PTA14 */
#define    PORT15_FTU5_QD_PHB                (PORT_ALT3_FUNC_MODE)         /* PTA15 */
#define    PORT16_FCSMU_PIN0                 (PORT_ALT3_FUNC_MODE)         /* PTA16 */
#define    PORT17_FTU_FLT15                  (PORT_ALT3_FUNC_MODE)         /* PTA17 */
#define    PORT18_FCUART1_TX                 (PORT_ALT3_FUNC_MODE)         /* PTA18 */
#define    PORT19_FCUART1_RX                 (PORT_ALT3_FUNC_MODE)         /* PTA19 */
#define    PORT2_FCIIC0_SDA                  (PORT_ALT3_FUNC_MODE)          /* PTA2 */
#define    PORT20_FCUART3_RTS                (PORT_ALT3_FUNC_MODE)         /* PTA20 */
#define    PORT21_FCUART3_CTS                (PORT_ALT3_FUNC_MODE)         /* PTA21 */
#define    PORT22_FTU2_QD_PHA                (PORT_ALT3_FUNC_MODE)         /* PTA22 */
#define    PORT23_FCUART3_RX                 (PORT_ALT3_FUNC_MODE)         /* PTA23 */
#define    PORT24_FCUART3_TX                 (PORT_ALT3_FUNC_MODE)         /* PTA24 */
#define    PORT27_FCUART0_TX                 (PORT_ALT3_FUNC_MODE)         /* PTA27 */
#define    PORT28_FCUART0_RX                 (PORT_ALT3_FUNC_MODE)         /* PTA28 */
#define    PORT3_FCIIC0_SCL                  (PORT_ALT3_FUNC_MODE)          /* PTA3 */
#define    PORT30_FCUART2_RX                 (PORT_ALT3_FUNC_MODE)         /* PTA30 */
#define    PORT31_FCUART5_TX                 (PORT_ALT3_FUNC_MODE)         /* PTA31 */
#define    PORT6_FTU_FLT13                   (PORT_ALT3_FUNC_MODE)          /* PTA6 */
#define    PORT7_FTU_FLT12                   (PORT_ALT3_FUNC_MODE)          /* PTA7 */
#define    PORT9_RTC_CLKOUT                  (PORT_ALT3_FUNC_MODE)          /* PTA9 */
#define    PORT33_FTU_TCK0                   (PORT_ALT3_FUNC_MODE)          /* PTB1 */
#define    PORT42_TRGSEL_OUT2                (PORT_ALT3_FUNC_MODE)         /* PTB10 */
#define    PORT44_FTU9_CH3                   (PORT_ALT3_FUNC_MODE)         /* PTB12 */
#define    PORT46_FCUART4_RX                 (PORT_ALT3_FUNC_MODE)         /* PTB14 */
#define    PORT47_FCUART4_TX                 (PORT_ALT3_FUNC_MODE)         /* PTB15 */
#define    PORT48_FCUART5_CTS                (PORT_ALT3_FUNC_MODE)         /* PTB16 */
#define    PORT50_FCUART5_RX                 (PORT_ALT3_FUNC_MODE)         /* PTB18 */
#define    PORT52_FCUART1_TX                 (PORT_ALT3_FUNC_MODE)         /* PTB20 */
#define    PORT53_FCUART1_RX                 (PORT_ALT3_FUNC_MODE)         /* PTB21 */
#define    PORT54_FCUART1_TX                 (PORT_ALT3_FUNC_MODE)         /* PTB22 */
#define    PORT55_FCSPI2_PCS0                (PORT_ALT3_FUNC_MODE)         /* PTB23 */
#define    PORT59_FTU1_QD_PHB                (PORT_ALT3_FUNC_MODE)         /* PTB27 */
#define    PORT35_FTU1_QD_PHA                (PORT_ALT3_FUNC_MODE)          /* PTB3 */
#define    PORT62_FCIIC1_SCL                 (PORT_ALT3_FUNC_MODE)         /* PTB30 */
#define    PORT63_FCSPI2_SCK                 (PORT_ALT3_FUNC_MODE)         /* PTB31 */
#define    PORT37_FCIIC1_SDA                 (PORT_ALT3_FUNC_MODE)          /* PTB5 */
#define    PORT40_FLEXCAN4_TX                (PORT_ALT3_FUNC_MODE)          /* PTB8 */
#define    PORT41_FCUART12_TX                (PORT_ALT3_FUNC_MODE)          /* PTB9 */
#define    PORT78_FCUART1_RX                 (PORT_ALT3_FUNC_MODE)         /* PTC14 */
#define    PORT79_FCSPI2_PCS3                (PORT_ALT3_FUNC_MODE)         /* PTC15 */
#define    PORT80_FCSPI2_SOUT                (PORT_ALT3_FUNC_MODE)         /* PTC16 */
#define    PORT82_FCSPI2_SIN                 (PORT_ALT3_FUNC_MODE)         /* PTC18 */
#define    PORT83_FLEXCAN6_TX                (PORT_ALT3_FUNC_MODE)         /* PTC19 */
#define    PORT66_FCUART0_RX                 (PORT_ALT3_FUNC_MODE)          /* PTC2 */
#define    PORT87_FTU6_CH6                   (PORT_ALT3_FUNC_MODE)         /* PTC23 */
#define    PORT88_FLEXCAN6_RX                (PORT_ALT3_FUNC_MODE)         /* PTC24 */
#define    PORT89_FCUART5_RTS                (PORT_ALT3_FUNC_MODE)         /* PTC25 */
#define    PORT91_FTU10_CH5                  (PORT_ALT3_FUNC_MODE)         /* PTC27 */
#define    PORT67_FCUART0_TX                 (PORT_ALT3_FUNC_MODE)          /* PTC3 */
#define    PORT72_FTU_FLT11                  (PORT_ALT3_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU_FLT10                  (PORT_ALT3_FUNC_MODE)          /* PTC9 */
#define    PORT106_FTU2_QD_PHB               (PORT_ALT3_FUNC_MODE)         /* PTD10 */
#define    PORT107_FTU2_QD_PHA               (PORT_ALT3_FUNC_MODE)         /* PTD11 */
#define    PORT108_FCUART2_RTS               (PORT_ALT3_FUNC_MODE)         /* PTD12 */
#define    PORT111_FLEXCAN2_RX               (PORT_ALT3_FUNC_MODE)         /* PTD15 */
#define    PORT112_FLEXCAN2_TX               (PORT_ALT3_FUNC_MODE)         /* PTD16 */
#define    PORT113_FCUART2_TX                (PORT_ALT3_FUNC_MODE)         /* PTD17 */
#define    PORT116_FCUART5_RX                (PORT_ALT3_FUNC_MODE)         /* PTD20 */
#define    PORT117_FCUART5_TX                (PORT_ALT3_FUNC_MODE)         /* PTD21 */
#define    PORT118_FTU9_CH4                  (PORT_ALT3_FUNC_MODE)         /* PTD22 */
#define    PORT121_FCUART12_TX               (PORT_ALT3_FUNC_MODE)         /* PTD25 */
#define    PORT122_FLEXCAN0_TX               (PORT_ALT3_FUNC_MODE)         /* PTD26 */
#define    PORT123_FLEXCAN0_RX               (PORT_ALT3_FUNC_MODE)         /* PTD27 */
#define    PORT124_FLEXCAN4_RX               (PORT_ALT3_FUNC_MODE)         /* PTD28 */
#define    PORT125_FCUART15_TX               (PORT_ALT3_FUNC_MODE)         /* PTD29 */
#define    PORT126_FLEXCAN5_TX               (PORT_ALT3_FUNC_MODE)         /* PTD30 */
#define    PORT101_FCUART2_CTS               (PORT_ALT3_FUNC_MODE)          /* PTD5 */
#define    PORT102_FLEXCAN3_RX               (PORT_ALT3_FUNC_MODE)          /* PTD6 */
#define    PORT103_FLEXCAN3_TX               (PORT_ALT3_FUNC_MODE)          /* PTD7 */
#define    PORT104_FCSPI2_PCS2               (PORT_ALT3_FUNC_MODE)          /* PTD8 */
#define    PORT105_FCSPI2_PCS1               (PORT_ALT3_FUNC_MODE)          /* PTD9 */
#define    PORT128_FTU_TCK1                  (PORT_ALT3_FUNC_MODE)          /* PTE0 */
#define    PORT138_FTU6_CH0                  (PORT_ALT3_FUNC_MODE)         /* PTE10 */
#define    PORT140_FTU_FLT2                  (PORT_ALT3_FUNC_MODE)         /* PTE12 */
#define    PORT143_FLEXCAN5_RX               (PORT_ALT3_FUNC_MODE)         /* PTE15 */
#define    PORT144_FLEXCAN5_TX               (PORT_ALT3_FUNC_MODE)         /* PTE16 */
#define    PORT145_FCSMU_PIN1                (PORT_ALT3_FUNC_MODE)         /* PTE17 */
#define    PORT146_FTU5_QD_PHA               (PORT_ALT3_FUNC_MODE)         /* PTE18 */
#define    PORT147_FCIIC0_SCL                (PORT_ALT3_FUNC_MODE)         /* PTE19 */
#define    PORT148_FCIIC0_SDA                (PORT_ALT3_FUNC_MODE)         /* PTE20 */
#define    PORT151_FLEXCAN1_RX               (PORT_ALT3_FUNC_MODE)         /* PTE23 */
#define    PORT152_FLEXCAN1_TX               (PORT_ALT3_FUNC_MODE)         /* PTE24 */
#define    PORT153_AONTIMER0_CLK0            (PORT_ALT3_FUNC_MODE)         /* PTE25 */
#define    PORT154_AONTIMER0_CLK2            (PORT_ALT3_FUNC_MODE)         /* PTE26 */
#define    PORT132_FTU10_CH7                 (PORT_ALT3_FUNC_MODE)          /* PTE4 */
#define    PORT133_FTU4_CH3                  (PORT_ALT3_FUNC_MODE)          /* PTE5 */
#define    PORT135_FTU_FLT14                 (PORT_ALT3_FUNC_MODE)          /* PTE7 */
#define    PORT160_FTU2_QD_PHA               (PORT_ALT3_FUNC_MODE)          /* PTF0 */
#define    PORT161_FTU2_QD_PHB               (PORT_ALT3_FUNC_MODE)          /* PTF1 */
#define    PORT170_FTU0_CH4                  (PORT_ALT3_FUNC_MODE)         /* PTF10 */
#define    PORT171_FTU0_CH5                  (PORT_ALT3_FUNC_MODE)         /* PTF11 */
#define    PORT172_FTU10_CH7                 (PORT_ALT3_FUNC_MODE)         /* PTF12 */
#define    PORT173_FTU10_CH6                 (PORT_ALT3_FUNC_MODE)         /* PTF13 */
#define    PORT174_FLEXCAN9_TX               (PORT_ALT3_FUNC_MODE)         /* PTF14 */
#define    PORT175_FTU11_CH6                 (PORT_ALT3_FUNC_MODE)         /* PTF15 */
#define    PORT176_FTU9_CH5                  (PORT_ALT3_FUNC_MODE)         /* PTF16 */
#define    PORT177_FTU9_CH6                  (PORT_ALT3_FUNC_MODE)         /* PTF17 */
#define    PORT178_FTU8_CH7                  (PORT_ALT3_FUNC_MODE)         /* PTF18 */
#define    PORT179_FTU6_CH1                  (PORT_ALT3_FUNC_MODE)         /* PTF19 */
#define    PORT162_FTU8_CH0                  (PORT_ALT3_FUNC_MODE)          /* PTF2 */
#define    PORT180_FTU6_CH2                  (PORT_ALT3_FUNC_MODE)         /* PTF20 */
#define    PORT181_FCIIC1_SCL                (PORT_ALT3_FUNC_MODE)         /* PTF21 */
#define    PORT182_FCIIC1_SDA                (PORT_ALT3_FUNC_MODE)         /* PTF22 */
#define    PORT183_FCUART0_TX                (PORT_ALT3_FUNC_MODE)         /* PTF23 */
#define    PORT163_FTU10_CH4                 (PORT_ALT3_FUNC_MODE)          /* PTF3 */
#define    PORT164_FTU10_CH5                 (PORT_ALT3_FUNC_MODE)          /* PTF4 */
#define    PORT165_FTU10_CH6                 (PORT_ALT3_FUNC_MODE)          /* PTF5 */
#define    PORT166_FTU6_CH4                  (PORT_ALT3_FUNC_MODE)          /* PTF6 */
#define    PORT167_FTU6_CH5                  (PORT_ALT3_FUNC_MODE)          /* PTF7 */
#define    PORT168_FTU11_CH5                 (PORT_ALT3_FUNC_MODE)          /* PTF8 */
#define    PORT169_FTU0_CH3                  (PORT_ALT3_FUNC_MODE)          /* PTF9 */
#define    PORT192_FTU8_CH1                  (PORT_ALT3_FUNC_MODE)          /* PTG0 */
#define    PORT193_FTU10_CH0                 (PORT_ALT3_FUNC_MODE)          /* PTG1 */
#define    PORT202_FTU0_CH7                  (PORT_ALT3_FUNC_MODE)         /* PTG10 */
#define    PORT203_FTU10_CH0                 (PORT_ALT3_FUNC_MODE)         /* PTG11 */
#define    PORT204_FLEXCAN9_RX               (PORT_ALT3_FUNC_MODE)         /* PTG12 */
#define    PORT205_FTU11_CH4                 (PORT_ALT3_FUNC_MODE)         /* PTG13 */
#define    PORT206_FTU11_CH5                 (PORT_ALT3_FUNC_MODE)         /* PTG14 */
#define    PORT207_FCIIC0_SCL                (PORT_ALT3_FUNC_MODE)         /* PTG15 */
#define    PORT208_FCIIC0_SDA                (PORT_ALT3_FUNC_MODE)         /* PTG16 */
#define    PORT209_FLEXCAN7_TX               (PORT_ALT3_FUNC_MODE)         /* PTG17 */
#define    PORT210_FTU1_CH0                  (PORT_ALT3_FUNC_MODE)         /* PTG18 */
#define    PORT211_FTU1_CH1                  (PORT_ALT3_FUNC_MODE)         /* PTG19 */
#define    PORT194_FTU10_CH1                 (PORT_ALT3_FUNC_MODE)          /* PTG2 */
#define    PORT212_FTU1_CH2                  (PORT_ALT3_FUNC_MODE)         /* PTG20 */
#define    PORT213_FCUART0_RX                (PORT_ALT3_FUNC_MODE)         /* PTG21 */
#define    PORT214_FTU1_QD_PHA               (PORT_ALT3_FUNC_MODE)         /* PTG22 */
#define    PORT215_FTU1_QD_PHB               (PORT_ALT3_FUNC_MODE)         /* PTG23 */
#define    PORT195_FTU9_CH3                  (PORT_ALT3_FUNC_MODE)          /* PTG3 */
#define    PORT196_FTU9_CH2                  (PORT_ALT3_FUNC_MODE)          /* PTG4 */
#define    PORT197_FTU9_CH1                  (PORT_ALT3_FUNC_MODE)          /* PTG5 */
#define    PORT198_FTU11_CH6                 (PORT_ALT3_FUNC_MODE)          /* PTG6 */
#define    PORT199_FTU11_CH7                 (PORT_ALT3_FUNC_MODE)          /* PTG7 */
#define    PORT200_FTU8_CH0                  (PORT_ALT3_FUNC_MODE)          /* PTG8 */
#define    PORT201_FTU0_CH6                  (PORT_ALT3_FUNC_MODE)          /* PTG9 */
#define    PORT224_FTU9_CH7                  (PORT_ALT3_FUNC_MODE)          /* PTH0 */
#define    PORT225_FTU9_CH6                  (PORT_ALT3_FUNC_MODE)          /* PTH1 */
#define    PORT234_FTU10_CH2                 (PORT_ALT3_FUNC_MODE)         /* PTH10 */
#define    PORT235_FTU11_CH0                 (PORT_ALT3_FUNC_MODE)         /* PTH11 */
#define    PORT236_FTU11_CH7                 (PORT_ALT3_FUNC_MODE)         /* PTH12 */
#define    PORT237_FTU9_CH0                  (PORT_ALT3_FUNC_MODE)         /* PTH13 */
#define    PORT238_FTU9_CH1                  (PORT_ALT3_FUNC_MODE)         /* PTH14 */
#define    PORT239_FLEXCAN7_RX               (PORT_ALT3_FUNC_MODE)         /* PTH15 */
#define    PORT240_FTU8_CH2                  (PORT_ALT3_FUNC_MODE)         /* PTH16 */
#define    PORT241_FTU8_CH3                  (PORT_ALT3_FUNC_MODE)         /* PTH17 */
#define    PORT242_FTU1_CH3                  (PORT_ALT3_FUNC_MODE)         /* PTH18 */
#define    PORT243_FTU1_CH4                  (PORT_ALT3_FUNC_MODE)         /* PTH19 */
#define    PORT226_FTU9_CH5                  (PORT_ALT3_FUNC_MODE)          /* PTH2 */
#define    PORT244_FTU1_CH5                  (PORT_ALT3_FUNC_MODE)         /* PTH20 */
#define    PORT245_FTU11_CH4                 (PORT_ALT3_FUNC_MODE)         /* PTH21 */
#define    PORT227_FTU9_CH0                  (PORT_ALT3_FUNC_MODE)          /* PTH3 */
#define    PORT228_FTU11_CH0                 (PORT_ALT3_FUNC_MODE)          /* PTH4 */
#define    PORT229_FTU11_CH1                 (PORT_ALT3_FUNC_MODE)          /* PTH5 */
#define    PORT230_FTU8_CH1                  (PORT_ALT3_FUNC_MODE)          /* PTH6 */
#define    PORT231_FTU8_CH2                  (PORT_ALT3_FUNC_MODE)          /* PTH7 */
#define    PORT233_FTU10_CH1                 (PORT_ALT3_FUNC_MODE)          /* PTH9 */
#define    PORT256_FTU9_CH4                  (PORT_ALT3_FUNC_MODE)          /* PTI0 */
#define    PORT257_FTU10_CH2                 (PORT_ALT3_FUNC_MODE)          /* PTI1 */
#define    PORT266_FTU11_CH2                 (PORT_ALT3_FUNC_MODE)         /* PTI10 */
#define    PORT267_FTU11_CH3                 (PORT_ALT3_FUNC_MODE)         /* PTI11 */
#define    PORT268_FTU9_CH2                  (PORT_ALT3_FUNC_MODE)         /* PTI12 */
#define    PORT269_FTU10_CH3                 (PORT_ALT3_FUNC_MODE)         /* PTI13 */
#define    PORT270_FTU10_CH4                 (PORT_ALT3_FUNC_MODE)         /* PTI14 */
#define    PORT271_FTU8_CH4                  (PORT_ALT3_FUNC_MODE)         /* PTI15 */
#define    PORT272_FTU8_CH5                  (PORT_ALT3_FUNC_MODE)         /* PTI16 */
#define    PORT273_FTU8_CH6                  (PORT_ALT3_FUNC_MODE)         /* PTI17 */
#define    PORT274_FTU1_CH6                  (PORT_ALT3_FUNC_MODE)         /* PTI18 */
#define    PORT275_FTU1_CH7                  (PORT_ALT3_FUNC_MODE)         /* PTI19 */
#define    PORT258_FTU10_CH3                 (PORT_ALT3_FUNC_MODE)          /* PTI2 */
#define    PORT276_FTU_FLT20                 (PORT_ALT3_FUNC_MODE)         /* PTI20 */
#define    PORT259_FTU11_CH2                 (PORT_ALT3_FUNC_MODE)          /* PTI3 */
#define    PORT260_FTU11_CH3                 (PORT_ALT3_FUNC_MODE)          /* PTI4 */
#define    PORT261_FTU6_CH3                  (PORT_ALT3_FUNC_MODE)          /* PTI5 */
#define    PORT262_FTU0_CH0                  (PORT_ALT3_FUNC_MODE)          /* PTI6 */
#define    PORT263_FTU0_CH1                  (PORT_ALT3_FUNC_MODE)          /* PTI7 */
#define    PORT264_FTU0_CH2                  (PORT_ALT3_FUNC_MODE)          /* PTI8 */
#define    PORT265_FTU11_CH1                 (PORT_ALT3_FUNC_MODE)          /* PTI9 */
#define    PORT0_SENT1_RXD2                  (PORT_ALT4_FUNC_MODE)          /* PTA0 */
#define    PORT1_SENT1_RXD0                  (PORT_ALT4_FUNC_MODE)          /* PTA1 */
#define    PORT12_CMP2_OUT                   (PORT_ALT4_FUNC_MODE)         /* PTA12 */
#define    PORT13_CMP1_OUT                   (PORT_ALT4_FUNC_MODE)         /* PTA13 */
#define    PORT14_CMP1_OUT                   (PORT_ALT4_FUNC_MODE)         /* PTA14 */
#define    PORT15_FCUART10_TX                (PORT_ALT4_FUNC_MODE)         /* PTA15 */
#define    PORT17_FCSPI1_PCS2                (PORT_ALT4_FUNC_MODE)         /* PTA17 */
#define    PORT19_FTU6_CH7                   (PORT_ALT4_FUNC_MODE)         /* PTA19 */
#define    PORT2_MSC1_FCLP                   (PORT_ALT4_FUNC_MODE)          /* PTA2 */
#define    PORT21_FTU2_CH5                   (PORT_ALT4_FUNC_MODE)         /* PTA21 */
#define    PORT22_FCUART7_RX                 (PORT_ALT4_FUNC_MODE)         /* PTA22 */
#define    PORT23_TRACE_D0               (PORT_ALT4_FUNC_MODE)         /* PTA23 */
#define    PORT24_TRACE_D1               (PORT_ALT4_FUNC_MODE)         /* PTA24 */
#define    PORT27_TRACE_D2               (PORT_ALT4_FUNC_MODE)         /* PTA27 */
#define    PORT30_TRACE_D5               (PORT_ALT4_FUNC_MODE)         /* PTA30 */
#define    PORT31_FTU_FLT3                   (PORT_ALT4_FUNC_MODE)         /* PTA31 */
#define    PORT6_FCUART1_CTS                 (PORT_ALT4_FUNC_MODE)          /* PTA6 */
#define    PORT7_FCUART1_RTS                 (PORT_ALT4_FUNC_MODE)          /* PTA7 */
#define    PORT32_FCUART14_TX                (PORT_ALT4_FUNC_MODE)          /* PTB0 */
#define    PORT33_FCUART14_RX                (PORT_ALT4_FUNC_MODE)          /* PTB1 */
#define    PORT45_MSC1_SDI3                  (PORT_ALT4_FUNC_MODE)         /* PTB13 */
#define    PORT46_MSC1_EN3                   (PORT_ALT4_FUNC_MODE)         /* PTB14 */
#define    PORT47_MSC1_SDI2                  (PORT_ALT4_FUNC_MODE)         /* PTB15 */
#define    PORT48_MSC1_EN2                   (PORT_ALT4_FUNC_MODE)         /* PTB16 */
#define    PORT49_FCSPI1_PCS3                (PORT_ALT4_FUNC_MODE)         /* PTB17 */
#define    PORT54_TRACE_D5               (PORT_ALT4_FUNC_MODE)         /* PTB22 */
#define    PORT55_FTU7_CH3                   (PORT_ALT4_FUNC_MODE)         /* PTB23 */
#define    PORT57_FCSPI2_PCS0                (PORT_ALT4_FUNC_MODE)         /* PTB25 */
#define    PORT59_FCSPI2_SOUT                (PORT_ALT4_FUNC_MODE)         /* PTB27 */
#define    PORT60_FCSPI2_SIN                 (PORT_ALT4_FUNC_MODE)         /* PTB28 */
#define    PORT35_FCSPI2_SCK                 (PORT_ALT4_FUNC_MODE)          /* PTB3 */
#define    PORT62_FCUART12_TX                (PORT_ALT4_FUNC_MODE)         /* PTB30 */
#define    PORT36_FCUART9_RX                 (PORT_ALT4_FUNC_MODE)          /* PTB4 */
#define    PORT40_FCUART11_RX                (PORT_ALT4_FUNC_MODE)          /* PTB8 */
#define    PORT64_TRACE_D6               (PORT_ALT4_FUNC_MODE)          /* PTC0 */
#define    PORT74_FLEXCAN4_RX                (PORT_ALT4_FUNC_MODE)         /* PTC10 */
#define    PORT75_FLEXCAN4_TX                (PORT_ALT4_FUNC_MODE)         /* PTC11 */
#define    PORT78_FCIIC1_SDA                 (PORT_ALT4_FUNC_MODE)         /* PTC14 */
#define    PORT79_SCG_CLKOUT                 (PORT_ALT4_FUNC_MODE)         /* PTC15 */
#define    PORT80_TRGSEL_OUT7                (PORT_ALT4_FUNC_MODE)         /* PTC16 */
#define    PORT81_TRGSEL_OUT6                (PORT_ALT4_FUNC_MODE)         /* PTC17 */
#define    PORT66_TRACE_CLKOUT           (PORT_ALT4_FUNC_MODE)          /* PTC2 */
#define    PORT87_FCUART2_RTS                (PORT_ALT4_FUNC_MODE)         /* PTC23 */
#define    PORT88_FCUART2_CTS                (PORT_ALT4_FUNC_MODE)         /* PTC24 */
#define    PORT89_FCSPI5_PCS0                (PORT_ALT4_FUNC_MODE)         /* PTC25 */
#define    PORT90_FLEXCAN2_TX                (PORT_ALT4_FUNC_MODE)         /* PTC26 */
#define    PORT91_FCSPI2_PCS1                (PORT_ALT4_FUNC_MODE)         /* PTC27 */
#define    PORT92_FLEXCAN3_TX                (PORT_ALT4_FUNC_MODE)         /* PTC28 */
#define    PORT93_FLEXCAN3_RX                (PORT_ALT4_FUNC_MODE)         /* PTC29 */
#define    PORT94_FTU5_QD_PHA                (PORT_ALT4_FUNC_MODE)         /* PTC30 */
#define    PORT95_FTU5_QD_PHB                (PORT_ALT4_FUNC_MODE)         /* PTC31 */
#define    PORT70_FTU3_CH2                   (PORT_ALT4_FUNC_MODE)          /* PTC6 */
#define    PORT71_FTU3_CH3                   (PORT_ALT4_FUNC_MODE)          /* PTC7 */
#define    PORT72_FTU4_QD_PHB                (PORT_ALT4_FUNC_MODE)          /* PTC8 */
#define    PORT73_FTU4_QD_PHA                (PORT_ALT4_FUNC_MODE)          /* PTC9 */
#define    PORT97_FTU2_CH4                   (PORT_ALT4_FUNC_MODE)          /* PTD1 */
#define    PORT107_TRACE_D4              (PORT_ALT4_FUNC_MODE)         /* PTD11 */
#define    PORT108_TRACE_D3              (PORT_ALT4_FUNC_MODE)         /* PTD12 */
#define    PORT111_TRACE_D7              (PORT_ALT4_FUNC_MODE)         /* PTD15 */
#define    PORT112_TRACE_D6              (PORT_ALT4_FUNC_MODE)         /* PTD16 */
#define    PORT113_TRACE_D4              (PORT_ALT4_FUNC_MODE)         /* PTD17 */
#define    PORT114_FCIIC1_SDA                (PORT_ALT4_FUNC_MODE)         /* PTD18 */
#define    PORT115_FCIIC1_SCL                (PORT_ALT4_FUNC_MODE)         /* PTD19 */
#define    PORT98_FCSPI1_SCK                 (PORT_ALT4_FUNC_MODE)          /* PTD2 */
#define    PORT116_FCSPI1_PCS1               (PORT_ALT4_FUNC_MODE)         /* PTD20 */
#define    PORT117_FTU9_CH7                  (PORT_ALT4_FUNC_MODE)         /* PTD21 */
#define    PORT118_FCSPI5_SCK                (PORT_ALT4_FUNC_MODE)         /* PTD22 */
#define    PORT119_FCSPI1_PCS0               (PORT_ALT4_FUNC_MODE)         /* PTD23 */
#define    PORT120_MSC1_SOP                  (PORT_ALT4_FUNC_MODE)         /* PTD24 */
#define    PORT121_FCUART4_RTS               (PORT_ALT4_FUNC_MODE)         /* PTD25 */
#define    PORT122_FCUART4_CTS               (PORT_ALT4_FUNC_MODE)         /* PTD26 */
#define    PORT124_FCUART11_TX               (PORT_ALT4_FUNC_MODE)         /* PTD28 */
#define    PORT125_SENT1_RXD1                (PORT_ALT4_FUNC_MODE)         /* PTD29 */
#define    PORT99_FCSPI1_SIN                 (PORT_ALT4_FUNC_MODE)          /* PTD3 */
#define    PORT126_SENT1_RXD3                (PORT_ALT4_FUNC_MODE)         /* PTD30 */
#define    PORT100_FCSPI1_SOUT               (PORT_ALT4_FUNC_MODE)          /* PTD4 */
#define    PORT101_TRACE_D2                  (PORT_ALT4_FUNC_MODE)          /* PTD5 */
#define    PORT102_TRACE_D1                  (PORT_ALT4_FUNC_MODE)          /* PTD6 */
#define    PORT103_TRACE_D0                  (PORT_ALT4_FUNC_MODE)          /* PTD7 */
#define    PORT104_FTU1_CH6                  (PORT_ALT4_FUNC_MODE)          /* PTD8 */
#define    PORT105_TRACE_D7                  (PORT_ALT4_FUNC_MODE)          /* PTD9 */
#define    PORT128_FCIIC1_SDA                (PORT_ALT4_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCIIC1_SCL                (PORT_ALT4_FUNC_MODE)          /* PTE1 */
#define    PORT140_TRACE_D3                  (PORT_ALT4_FUNC_MODE)         /* PTE12 */
#define    PORT142_FTU_FLT0                  (PORT_ALT4_FUNC_MODE)         /* PTE14 */
#define    PORT143_FTU2_CH6                  (PORT_ALT4_FUNC_MODE)         /* PTE15 */
#define    PORT144_FTU2_CH7                  (PORT_ALT4_FUNC_MODE)         /* PTE16 */
#define    PORT146_FCUART10_RX               (PORT_ALT4_FUNC_MODE)         /* PTE18 */
#define    PORT147_SENT0_RXD2                (PORT_ALT4_FUNC_MODE)         /* PTE19 */
#define    PORT148_SENT0_RXD3                (PORT_ALT4_FUNC_MODE)         /* PTE20 */
#define    PORT149_FLEXCAN0_TX               (PORT_ALT4_FUNC_MODE)         /* PTE21 */
#define    PORT150_FLEXCAN0_RX               (PORT_ALT4_FUNC_MODE)         /* PTE22 */
#define    PORT151_CMP2_OUT                  (PORT_ALT4_FUNC_MODE)         /* PTE23 */
#define    PORT154_SENT0_RXD0                (PORT_ALT4_FUNC_MODE)         /* PTE26 */
#define    PORT155_SENT0_RXD1                (PORT_ALT4_FUNC_MODE)         /* PTE27 */
#define    PORT131_FTU_FLT1                  (PORT_ALT4_FUNC_MODE)          /* PTE3 */
#define    PORT132_FCUART7_TX                (PORT_ALT4_FUNC_MODE)          /* PTE4 */
#define    PORT136_FCUART9_RX                (PORT_ALT4_FUNC_MODE)          /* PTE8 */
#define    PORT137_TRACE_CLKOUT              (PORT_ALT4_FUNC_MODE)          /* PTE9 */
#define    PORT170_MSC0_SDI1                 (PORT_ALT4_FUNC_MODE)         /* PTF10 */
#define    PORT171_MSC0_SDI2                 (PORT_ALT4_FUNC_MODE)         /* PTF11 */
#define    PORT173_FCSPI2_PCS2               (PORT_ALT4_FUNC_MODE)         /* PTF13 */
#define    PORT174_FCSPI2_PCS3               (PORT_ALT4_FUNC_MODE)         /* PTF14 */
#define    PORT176_FCSPI5_SIN                (PORT_ALT4_FUNC_MODE)         /* PTF16 */
#define    PORT177_FCSPI5_SOUT               (PORT_ALT4_FUNC_MODE)         /* PTF17 */
#define    PORT178_FCUART1_TX                (PORT_ALT4_FUNC_MODE)         /* PTF18 */
#define    PORT179_FCUART1_RX                (PORT_ALT4_FUNC_MODE)         /* PTF19 */
#define    PORT162_FCUART8_RX                (PORT_ALT4_FUNC_MODE)          /* PTF2 */
#define    PORT180_FLEXCAN2_RX               (PORT_ALT4_FUNC_MODE)         /* PTF20 */
#define    PORT181_CMP0_OUT                  (PORT_ALT4_FUNC_MODE)         /* PTF21 */
#define    PORT182_CMP1_OUT                  (PORT_ALT4_FUNC_MODE)         /* PTF22 */
#define    PORT183_FCSPI0_SOUT               (PORT_ALT4_FUNC_MODE)         /* PTF23 */
#define    PORT163_FCSPI6_SIN                (PORT_ALT4_FUNC_MODE)          /* PTF3 */
#define    PORT164_FCSPI6_SCK                (PORT_ALT4_FUNC_MODE)          /* PTF4 */
#define    PORT165_FCSPI6_SOUT               (PORT_ALT4_FUNC_MODE)          /* PTF5 */
#define    PORT168_FCSPI3_SIN                (PORT_ALT4_FUNC_MODE)          /* PTF8 */
#define    PORT169_MSC0_SDI0                 (PORT_ALT4_FUNC_MODE)          /* PTF9 */
#define    PORT192_FCUART8_TX                (PORT_ALT4_FUNC_MODE)          /* PTG0 */
#define    PORT193_FLEXCAN5_TX               (PORT_ALT4_FUNC_MODE)          /* PTG1 */
#define    PORT204_FTU6_CH7                  (PORT_ALT4_FUNC_MODE)         /* PTG12 */
#define    PORT205_FLEXCAN4_TX               (PORT_ALT4_FUNC_MODE)         /* PTG13 */
#define    PORT206_FLEXCAN4_RX               (PORT_ALT4_FUNC_MODE)         /* PTG14 */
#define    PORT207_MSC1_EN0                  (PORT_ALT4_FUNC_MODE)         /* PTG15 */
#define    PORT208_MSC1_SDI0                 (PORT_ALT4_FUNC_MODE)         /* PTG16 */
#define    PORT209_MSC1_EN1                  (PORT_ALT4_FUNC_MODE)         /* PTG17 */
#define    PORT210_FCUART10_RX               (PORT_ALT4_FUNC_MODE)         /* PTG18 */
#define    PORT211_FCUART10_TX               (PORT_ALT4_FUNC_MODE)         /* PTG19 */
#define    PORT194_FLEXCAN5_RX               (PORT_ALT4_FUNC_MODE)          /* PTG2 */
#define    PORT212_FCUART10_CTS              (PORT_ALT4_FUNC_MODE)         /* PTG20 */
#define    PORT213_FCSPI0_PCS0               (PORT_ALT4_FUNC_MODE)         /* PTG21 */
#define    PORT214_FCSPI0_SIN                (PORT_ALT4_FUNC_MODE)         /* PTG22 */
#define    PORT215_FCSPI0_SCK                (PORT_ALT4_FUNC_MODE)         /* PTG23 */
#define    PORT198_FCSPI3_SOUT               (PORT_ALT4_FUNC_MODE)          /* PTG6 */
#define    PORT199_FCSPI3_PCS0               (PORT_ALT4_FUNC_MODE)          /* PTG7 */
#define    PORT200_FCUART3_TX                (PORT_ALT4_FUNC_MODE)          /* PTG8 */
#define    PORT201_MSC0_SDI3                 (PORT_ALT4_FUNC_MODE)          /* PTG9 */
#define    PORT234_MSC0_SOP                  (PORT_ALT4_FUNC_MODE)         /* PTH10 */
#define    PORT236_FCUART1_TX                (PORT_ALT4_FUNC_MODE)         /* PTH12 */
#define    PORT237_FCUART1_RX                (PORT_ALT4_FUNC_MODE)         /* PTH13 */
#define    PORT238_FCUART3_TX                (PORT_ALT4_FUNC_MODE)         /* PTH14 */
#define    PORT239_MSC1_SDI1                 (PORT_ALT4_FUNC_MODE)         /* PTH15 */
#define    PORT240_MSC1_FCLP                 (PORT_ALT4_FUNC_MODE)         /* PTH16 */
#define    PORT241_MSC1_SOP                  (PORT_ALT4_FUNC_MODE)         /* PTH17 */
#define    PORT242_FCUART10_RTS              (PORT_ALT4_FUNC_MODE)         /* PTH18 */
#define    PORT243_FCUART10_RX               (PORT_ALT4_FUNC_MODE)         /* PTH19 */
#define    PORT244_FCUART10_TX               (PORT_ALT4_FUNC_MODE)         /* PTH20 */
#define    PORT245_FCSPI3_SCK                (PORT_ALT4_FUNC_MODE)         /* PTH21 */
#define    PORT246_FCIIC1_SCL                (PORT_ALT4_FUNC_MODE)         /* PTH22 */
#define    PORT247_FLEXCAN2_RX               (PORT_ALT4_FUNC_MODE)         /* PTH23 */
#define    PORT228_ENET_PPS0                 (PORT_ALT4_FUNC_MODE)          /* PTH4 */
#define    PORT229_ENET_PPS1                 (PORT_ALT4_FUNC_MODE)          /* PTH5 */
#define    PORT230_FCUART3_RX                (PORT_ALT4_FUNC_MODE)          /* PTH6 */
#define    PORT231_FCUART12_RX               (PORT_ALT4_FUNC_MODE)          /* PTH7 */
#define    PORT233_MSC0_FCLP                 (PORT_ALT4_FUNC_MODE)          /* PTH9 */
#define    PORT257_FCSPI6_PCS0               (PORT_ALT4_FUNC_MODE)          /* PTI1 */
#define    PORT266_FCUART4_TX                (PORT_ALT4_FUNC_MODE)         /* PTI10 */
#define    PORT267_FCUART4_RX                (PORT_ALT4_FUNC_MODE)         /* PTI11 */
#define    PORT268_FCUART3_RX                (PORT_ALT4_FUNC_MODE)         /* PTI12 */
#define    PORT269_FLEXCAN8_TX               (PORT_ALT4_FUNC_MODE)         /* PTI13 */
#define    PORT270_FLEXCAN8_RX               (PORT_ALT4_FUNC_MODE)         /* PTI14 */
#define    PORT271_MSC1_EN0                  (PORT_ALT4_FUNC_MODE)         /* PTI15 */
#define    PORT272_MSC1_EN1                  (PORT_ALT4_FUNC_MODE)         /* PTI16 */
#define    PORT273_FLEXCAN2_TX               (PORT_ALT4_FUNC_MODE)         /* PTI17 */
#define    PORT274_FCUART2_TX                (PORT_ALT4_FUNC_MODE)         /* PTI18 */
#define    PORT275_FCUART2_RX                (PORT_ALT4_FUNC_MODE)         /* PTI19 */
#define    PORT276_FTU6_CH7                  (PORT_ALT4_FUNC_MODE)         /* PTI20 */
#define    PORT259_FLEXCAN8_TX               (PORT_ALT4_FUNC_MODE)          /* PTI3 */
#define    PORT260_FLEXCAN8_RX               (PORT_ALT4_FUNC_MODE)          /* PTI4 */
#define    PORT263_MSC0_EN0                  (PORT_ALT4_FUNC_MODE)          /* PTI7 */
#define    PORT264_MSC0_EN1                  (PORT_ALT4_FUNC_MODE)          /* PTI8 */
#define    PORT0_FTU2_QD_PHA                 (PORT_ALT5_FUNC_MODE)          /* PTA0 */
#define    PORT1_FTU1_QD_PHA                 (PORT_ALT5_FUNC_MODE)          /* PTA1 */
#define    PORT11_FCSPI0_PCS3                (PORT_ALT5_FUNC_MODE)         /* PTA11 */
#define    PORT12_FCSPI0_SOUT                (PORT_ALT5_FUNC_MODE)         /* PTA12 */
#define    PORT13_FCUART0_RX                 (PORT_ALT5_FUNC_MODE)         /* PTA13 */
#define    PORT14_FCUART0_TX                 (PORT_ALT5_FUNC_MODE)         /* PTA14 */
#define    PORT15_TRGSEL_OUT0                (PORT_ALT5_FUNC_MODE)         /* PTA15 */
#define    PORT17_FLEXCAN4_TX                (PORT_ALT5_FUNC_MODE)         /* PTA17 */
#define    PORT23_FTU4_QD_PHA                (PORT_ALT5_FUNC_MODE)         /* PTA23 */
#define    PORT24_FTU4_QD_PHB                (PORT_ALT5_FUNC_MODE)         /* PTA24 */
#define    PORT25_FCSPI2_SOUT                (PORT_ALT5_FUNC_MODE)         /* PTA25 */
#define    PORT27_FCSPI1_PCS0                (PORT_ALT5_FUNC_MODE)         /* PTA27 */
#define    PORT28_FCSPI1_SCK                 (PORT_ALT5_FUNC_MODE)         /* PTA28 */
#define    PORT29_FCSPI1_SIN                 (PORT_ALT5_FUNC_MODE)         /* PTA29 */
#define    PORT30_FCSPI1_PCS2                (PORT_ALT5_FUNC_MODE)         /* PTA30 */
#define    PORT31_FLEXCAN3_TX                (PORT_ALT5_FUNC_MODE)         /* PTA31 */
#define    PORT6_TRGSEL_OUT4                 (PORT_ALT5_FUNC_MODE)          /* PTA6 */
#define    PORT7_FCSPI4_SIN                  (PORT_ALT5_FUNC_MODE)          /* PTA7 */
#define    PORT32_FLEXCAN0_RX                (PORT_ALT5_FUNC_MODE)          /* PTB0 */
#define    PORT33_FLEXCAN0_TX                (PORT_ALT5_FUNC_MODE)          /* PTB1 */
#define    PORT42_FLEXCAN7_RX                (PORT_ALT5_FUNC_MODE)         /* PTB10 */
#define    PORT44_FLEXCAN2_RX                (PORT_ALT5_FUNC_MODE)         /* PTB12 */
#define    PORT45_FCUART16_TX                (PORT_ALT5_FUNC_MODE)         /* PTB13 */
#define    PORT49_FLEXCAN4_RX                (PORT_ALT5_FUNC_MODE)         /* PTB17 */
#define    PORT50_FLEXCAN3_RX                (PORT_ALT5_FUNC_MODE)         /* PTB18 */
#define    PORT52_ENET_PPS0                  (PORT_ALT5_FUNC_MODE)         /* PTB20 */
#define    PORT53_ENET_PPS1                  (PORT_ALT5_FUNC_MODE)         /* PTB21 */
#define    PORT55_ENET_RXD3                  (PORT_ALT5_FUNC_MODE)         /* PTB23 */
#define    PORT58_ENET_COL                   (PORT_ALT5_FUNC_MODE)         /* PTB26 */
#define    PORT61_FCUART12_RX                (PORT_ALT5_FUNC_MODE)         /* PTB29 */
#define    PORT62_ENET_CRS                   (PORT_ALT5_FUNC_MODE)         /* PTB30 */
#define    PORT63_ENET_RXD1                  (PORT_ALT5_FUNC_MODE)         /* PTB31 */
#define    PORT36_ENET_MDIO                  (PORT_ALT5_FUNC_MODE)          /* PTB4 */
#define    PORT37_ENET_MDC                   (PORT_ALT5_FUNC_MODE)          /* PTB5 */
#define    PORT40_MSC1_SDI0                  (PORT_ALT5_FUNC_MODE)          /* PTB8 */
#define    PORT41_TRGSEL_OUT1                (PORT_ALT5_FUNC_MODE)          /* PTB9 */
#define    PORT64_ENET_RXD1                  (PORT_ALT5_FUNC_MODE)          /* PTC0 */
#define    PORT65_ENET_RXD0                  (PORT_ALT5_FUNC_MODE)          /* PTC1 */
#define    PORT74_FCUART13_TX                (PORT_ALT5_FUNC_MODE)         /* PTC10 */
#define    PORT75_FCUART13_RX                (PORT_ALT5_FUNC_MODE)         /* PTC11 */
#define    PORT76_TRGSEL_OUT5                (PORT_ALT5_FUNC_MODE)         /* PTC12 */
#define    PORT77_TRGSEL_OUT6                (PORT_ALT5_FUNC_MODE)         /* PTC13 */
#define    PORT79_ENET_RXD3                  (PORT_ALT5_FUNC_MODE)         /* PTC15 */
#define    PORT80_ENET_RXD0                  (PORT_ALT5_FUNC_MODE)         /* PTC16 */
#define    PORT81_ENET_RX_ER                 (PORT_ALT5_FUNC_MODE)         /* PTC17 */
#define    PORT82_ENET_RXD2                  (PORT_ALT5_FUNC_MODE)         /* PTC18 */
#define    PORT66_ENET_TXD0                  (PORT_ALT5_FUNC_MODE)          /* PTC2 */
#define    PORT84_FLEXCAN9_TX                (PORT_ALT5_FUNC_MODE)         /* PTC20 */
#define    PORT85_FLEXCAN9_RX                (PORT_ALT5_FUNC_MODE)         /* PTC21 */
#define    PORT87_FCUART12_TX                (PORT_ALT5_FUNC_MODE)         /* PTC23 */
#define    PORT89_FLEXCAN2_TX                (PORT_ALT5_FUNC_MODE)         /* PTC25 */
#define    PORT94_FCSPI4_SOUT                (PORT_ALT5_FUNC_MODE)         /* PTC30 */
#define    PORT95_TRGSEL_OUT3                (PORT_ALT5_FUNC_MODE)         /* PTC31 */
#define    PORT72_FCSPI4_PCS0                (PORT_ALT5_FUNC_MODE)          /* PTC8 */
#define    PORT73_FCSPI4_SCK                 (PORT_ALT5_FUNC_MODE)          /* PTC9 */
#define    PORT106_ENET_RX_CLK               (PORT_ALT5_FUNC_MODE)         /* PTD10 */
#define    PORT107_ENET_TX_CLK               (PORT_ALT5_FUNC_MODE)         /* PTD11 */
#define    PORT108_ENET_TX_EN_CTL            (PORT_ALT5_FUNC_MODE)         /* PTD12 */
#define    PORT111_ENET_PPS2                 (PORT_ALT5_FUNC_MODE)         /* PTD15 */
#define    PORT112_FCSPI1_PCS3               (PORT_ALT5_FUNC_MODE)         /* PTD16 */
#define    PORT113_FCSPI1_PCS1               (PORT_ALT5_FUNC_MODE)         /* PTD17 */
#define    PORT120_FCUART16_RX               (PORT_ALT5_FUNC_MODE)         /* PTD24 */
#define    PORT121_FLEXCAN7_TX               (PORT_ALT5_FUNC_MODE)         /* PTD25 */
#define    PORT123_MSC1_EN0                  (PORT_ALT5_FUNC_MODE)         /* PTD27 */
#define    PORT125_FTU1_QD_PHB               (PORT_ALT5_FUNC_MODE)         /* PTD29 */
#define    PORT126_FTU2_QD_PHB               (PORT_ALT5_FUNC_MODE)         /* PTD30 */
#define    PORT127_MSC1_SDI3                 (PORT_ALT5_FUNC_MODE)         /* PTD31 */
#define    PORT100_FTU_FLT16                 (PORT_ALT5_FUNC_MODE)          /* PTD4 */
#define    PORT101_ENET_TXD3                 (PORT_ALT5_FUNC_MODE)          /* PTD5 */
#define    PORT102_ENET_TXD2                 (PORT_ALT5_FUNC_MODE)          /* PTD6 */
#define    PORT103_ENET_TXD1                 (PORT_ALT5_FUNC_MODE)          /* PTD7 */
#define    PORT104_ENET_RX_DV_CTL            (PORT_ALT5_FUNC_MODE)          /* PTD8 */
#define    PORT105_ENET_RXD2                 (PORT_ALT5_FUNC_MODE)          /* PTD9 */
#define    PORT128_FCSPI0_SCK                (PORT_ALT5_FUNC_MODE)          /* PTE0 */
#define    PORT129_FCSPI0_SIN                (PORT_ALT5_FUNC_MODE)          /* PTE1 */
#define    PORT138_FCSPI2_SIN                (PORT_ALT5_FUNC_MODE)         /* PTE10 */
#define    PORT139_FCSPI2_PCS0               (PORT_ALT5_FUNC_MODE)         /* PTE11 */
#define    PORT140_FCSPI1_SOUT               (PORT_ALT5_FUNC_MODE)         /* PTE12 */
#define    PORT141_FCSPI2_SCK                (PORT_ALT5_FUNC_MODE)         /* PTE13 */
#define    PORT147_CMP0_OUT                  (PORT_ALT5_FUNC_MODE)         /* PTE19 */
#define    PORT130_FLEXCAN1_RX               (PORT_ALT5_FUNC_MODE)          /* PTE2 */
#define    PORT149_FCUART0_RTS               (PORT_ALT5_FUNC_MODE)         /* PTE21 */
#define    PORT150_FCUART0_CTS               (PORT_ALT5_FUNC_MODE)         /* PTE22 */
#define    PORT151_FCSPI0_PCS2               (PORT_ALT5_FUNC_MODE)         /* PTE23 */
#define    PORT152_FCSPI0_PCS1               (PORT_ALT5_FUNC_MODE)         /* PTE24 */
#define    PORT153_FCSPI0_PCS0               (PORT_ALT5_FUNC_MODE)         /* PTE25 */
#define    PORT133_FCSPI2_PCS1               (PORT_ALT5_FUNC_MODE)          /* PTE5 */
#define    PORT134_FLEXCAN1_TX               (PORT_ALT5_FUNC_MODE)          /* PTE6 */
#define    PORT136_ENET_MDC                  (PORT_ALT5_FUNC_MODE)          /* PTE8 */
#define    PORT137_ENET_PPS3                 (PORT_ALT5_FUNC_MODE)          /* PTE9 */
#define    PORT172_FCUART17_TX               (PORT_ALT5_FUNC_MODE)         /* PTF12 */
#define    PORT173_FCUART17_RX               (PORT_ALT5_FUNC_MODE)         /* PTF13 */
#define    PORT178_MSC1_EN2                  (PORT_ALT5_FUNC_MODE)         /* PTF18 */
#define    PORT179_MSC1_SDI2                 (PORT_ALT5_FUNC_MODE)         /* PTF19 */
#define    PORT180_MSC1_EN3                  (PORT_ALT5_FUNC_MODE)         /* PTF20 */
#define    PORT181_RTC_CLKOUT                (PORT_ALT5_FUNC_MODE)         /* PTF21 */
#define    PORT183_CMP2_OUT                  (PORT_ALT5_FUNC_MODE)         /* PTF23 */
#define    PORT184_FCSPI2_PCS3               (PORT_ALT5_FUNC_MODE)         /* PTF24 */
#define    PORT167_FTU1_QD_PHA               (PORT_ALT5_FUNC_MODE)          /* PTF7 */
#define    PORT168_FTU_FLT5                  (PORT_ALT5_FUNC_MODE)          /* PTF8 */
#define    PORT202_FTU2_QD_PHA               (PORT_ALT5_FUNC_MODE)         /* PTG10 */
#define    PORT203_FTU2_QD_PHB               (PORT_ALT5_FUNC_MODE)         /* PTG11 */
#define    PORT207_TRGSEL_OUT2               (PORT_ALT5_FUNC_MODE)         /* PTG15 */
#define    PORT208_TRGSEL_OUT3               (PORT_ALT5_FUNC_MODE)         /* PTG16 */
#define    PORT209_FTU5_QD_PHA               (PORT_ALT5_FUNC_MODE)         /* PTG17 */
#define    PORT212_FLEXCAN3_TX               (PORT_ALT5_FUNC_MODE)         /* PTG20 */
#define    PORT195_TRACE_D8                  (PORT_ALT5_FUNC_MODE)          /* PTG3 */
#define    PORT196_TRACE_D9                  (PORT_ALT5_FUNC_MODE)          /* PTG4 */
#define    PORT197_TRACE_D10                 (PORT_ALT5_FUNC_MODE)          /* PTG5 */
#define    PORT200_ENET_REF_CLK              (PORT_ALT5_FUNC_MODE)          /* PTG8 */
#define    PORT235_FCSPI7_SIN                (PORT_ALT5_FUNC_MODE)         /* PTH11 */
#define    PORT239_FTU5_QD_PHB               (PORT_ALT5_FUNC_MODE)         /* PTH15 */
#define    PORT242_FLEXCAN3_RX               (PORT_ALT5_FUNC_MODE)         /* PTH18 */
#define    PORT245_FTU_FLT4                  (PORT_ALT5_FUNC_MODE)         /* PTH21 */
#define    PORT227_TRACE_D11                 (PORT_ALT5_FUNC_MODE)          /* PTH3 */
#define    PORT228_TRACE_D12                 (PORT_ALT5_FUNC_MODE)          /* PTH4 */
#define    PORT229_TRACE_D13                 (PORT_ALT5_FUNC_MODE)          /* PTH5 */
#define    PORT231_ENET_COL                  (PORT_ALT5_FUNC_MODE)          /* PTH7 */
#define    PORT232_ENET_CRS                  (PORT_ALT5_FUNC_MODE)          /* PTH8 */
#define    PORT233_FTU1_QD_PHB               (PORT_ALT5_FUNC_MODE)          /* PTH9 */
#define    PORT266_FCSPI7_SOUT               (PORT_ALT5_FUNC_MODE)         /* PTI10 */
#define    PORT267_FCSPI7_PCS0               (PORT_ALT5_FUNC_MODE)         /* PTI11 */
#define    PORT271_FLEXCAN1_TX               (PORT_ALT5_FUNC_MODE)         /* PTI15 */
#define    PORT272_FLEXCAN1_RX               (PORT_ALT5_FUNC_MODE)         /* PTI16 */
#define    PORT277_FCSPI2_PCS2               (PORT_ALT5_FUNC_MODE)         /* PTI21 */
#define    PORT259_TRACE_D14                 (PORT_ALT5_FUNC_MODE)          /* PTI3 */
#define    PORT260_TRACE_D15                 (PORT_ALT5_FUNC_MODE)          /* PTI4 */
#define    PORT265_FCSPI7_SCK                (PORT_ALT5_FUNC_MODE)          /* PTI9 */
#define    PORT0_FCUART0_CTS                 (PORT_ALT6_FUNC_MODE)          /* PTA0 */
#define    PORT1_FCUART0_RTS                 (PORT_ALT6_FUNC_MODE)          /* PTA1 */
#define    PORT12_FTU2_QD_PHB                (PORT_ALT6_FUNC_MODE)         /* PTA12 */
#define    PORT13_FTU2_QD_PHA                (PORT_ALT6_FUNC_MODE)         /* PTA13 */
#define    PORT15_FLEXCAN3_RX                (PORT_ALT6_FUNC_MODE)         /* PTA15 */
#define    PORT2_FCUART0_RX                  (PORT_ALT6_FUNC_MODE)          /* PTA2 */
#define    PORT3_FCUART0_TX                  (PORT_ALT6_FUNC_MODE)          /* PTA3 */
#define    PORT30_FTU5_QD_PHB                (PORT_ALT6_FUNC_MODE)         /* PTA30 */
#define    PORT6_SDDF0_CH0                   (PORT_ALT6_FUNC_MODE)          /* PTA6 */
#define    PORT32_FTU3_CH6                   (PORT_ALT6_FUNC_MODE)          /* PTB0 */
#define    PORT33_FTU3_CH5                   (PORT_ALT6_FUNC_MODE)          /* PTB1 */
#define    PORT49_SDDF0_CLK3                 (PORT_ALT6_FUNC_MODE)         /* PTB17 */
#define    PORT54_OSPI_A_IO0                 (PORT_ALT6_FUNC_MODE)         /* PTB22 */
#define    PORT57_FTU3_CH6                   (PORT_ALT6_FUNC_MODE)         /* PTB25 */
#define    PORT35_FTU3_CH7                   (PORT_ALT6_FUNC_MODE)          /* PTB3 */
#define    PORT40_FCUART1_CTS                (PORT_ALT6_FUNC_MODE)          /* PTB8 */
#define    PORT64_OSPI_A_IO3                 (PORT_ALT6_FUNC_MODE)          /* PTC0 */
#define    PORT65_OSPI_A_IO2                 (PORT_ALT6_FUNC_MODE)          /* PTC1 */
#define    PORT76_FLEXCAN5_RX                (PORT_ALT6_FUNC_MODE)         /* PTC12 */
#define    PORT77_FLEXCAN5_TX                (PORT_ALT6_FUNC_MODE)         /* PTC13 */
#define    PORT78_OSPI_A_RWDS                (PORT_ALT6_FUNC_MODE)         /* PTC14 */
#define    PORT79_OSPI_A_IO1                 (PORT_ALT6_FUNC_MODE)         /* PTC15 */
#define    PORT86_FCUART17_RTS               (PORT_ALT6_FUNC_MODE)         /* PTC22 */
#define    PORT91_FCUART5_RX                 (PORT_ALT6_FUNC_MODE)         /* PTC27 */
#define    PORT92_SDDF0_CLK0                 (PORT_ALT6_FUNC_MODE)         /* PTC28 */
#define    PORT93_SDDF0_CLK1                 (PORT_ALT6_FUNC_MODE)         /* PTC29 */
#define    PORT95_SDDF0_CH1                  (PORT_ALT6_FUNC_MODE)         /* PTC31 */
#define    PORT68_FTU1_QD_PHB                (PORT_ALT6_FUNC_MODE)          /* PTC4 */
#define    PORT69_FTU1_QD_PHA                (PORT_ALT6_FUNC_MODE)          /* PTC5 */
#define    PORT70_FTU1_QD_PHB                (PORT_ALT6_FUNC_MODE)          /* PTC6 */
#define    PORT72_FCUART0_CTS                (PORT_ALT6_FUNC_MODE)          /* PTC8 */
#define    PORT73_FCUART0_RTS                (PORT_ALT6_FUNC_MODE)          /* PTC9 */
#define    PORT96_FCUART17_TX                (PORT_ALT6_FUNC_MODE)          /* PTD0 */
#define    PORT107_OSPI_A_IO7                (PORT_ALT6_FUNC_MODE)         /* PTD11 */
#define    PORT108_OSPI_A_IO6                (PORT_ALT6_FUNC_MODE)         /* PTD12 */
#define    PORT111_FCUART2_RTS               (PORT_ALT6_FUNC_MODE)         /* PTD15 */
#define    PORT113_FTU5_QD_PHA               (PORT_ALT6_FUNC_MODE)         /* PTD17 */
#define    PORT114_SDDF0_CH3                 (PORT_ALT6_FUNC_MODE)         /* PTD18 */
#define    PORT115_SDDF0_CLK2                (PORT_ALT6_FUNC_MODE)         /* PTD19 */
#define    PORT125_MSC1_EN1                  (PORT_ALT6_FUNC_MODE)         /* PTD29 */
#define    PORT126_MSC1_SDI1                 (PORT_ALT6_FUNC_MODE)         /* PTD30 */
#define    PORT127_FTU1_QD_PHA               (PORT_ALT6_FUNC_MODE)         /* PTD31 */
#define    PORT101_OSPI_A_IO5                (PORT_ALT6_FUNC_MODE)          /* PTD5 */
#define    PORT102_OSPI_A_IO4                (PORT_ALT6_FUNC_MODE)          /* PTD6 */
#define    PORT105_OSPI_A_SCK                (PORT_ALT6_FUNC_MODE)          /* PTD9 */
#define    PORT128_FTU_FLT19                 (PORT_ALT6_FUNC_MODE)          /* PTE0 */
#define    PORT129_FTU_FLT18                 (PORT_ALT6_FUNC_MODE)          /* PTE1 */
#define    PORT146_FLEXCAN3_TX               (PORT_ALT6_FUNC_MODE)         /* PTE18 */
#define    PORT130_FCUART1_CTS               (PORT_ALT6_FUNC_MODE)          /* PTE2 */
#define    PORT131_FTU_TCK0                  (PORT_ALT6_FUNC_MODE)          /* PTE3 */
#define    PORT133_FCUART17_RX               (PORT_ALT6_FUNC_MODE)          /* PTE5 */
#define    PORT134_FCUART1_RTS               (PORT_ALT6_FUNC_MODE)          /* PTE6 */
#define    PORT135_SDDF0_CH2                 (PORT_ALT6_FUNC_MODE)          /* PTE7 */
#define    PORT137_FCUART2_CTS               (PORT_ALT6_FUNC_MODE)          /* PTE9 */
#define    PORT174_FCUART5_TX                (PORT_ALT6_FUNC_MODE)         /* PTF14 */
#define    PORT184_FCUART16_RTS              (PORT_ALT6_FUNC_MODE)         /* PTF24 */
#define    PORT168_TRGSEL_OUT4               (PORT_ALT6_FUNC_MODE)          /* PTF8 */
#define    PORT198_TRGSEL_OUT3               (PORT_ALT6_FUNC_MODE)          /* PTG6 */
#define    PORT199_TRGSEL_OUT2               (PORT_ALT6_FUNC_MODE)          /* PTG7 */
#define    PORT234_FCUART17_CTS              (PORT_ALT6_FUNC_MODE)         /* PTH10 */
#define    PORT235_MSC0_FCLP                 (PORT_ALT6_FUNC_MODE)         /* PTH11 */
#define    PORT243_TRGSEL_OUT0               (PORT_ALT6_FUNC_MODE)         /* PTH19 */
#define    PORT244_TRGSEL_OUT1               (PORT_ALT6_FUNC_MODE)         /* PTH20 */
#define    PORT245_TRGSEL_OUT5               (PORT_ALT6_FUNC_MODE)         /* PTH21 */
#define    PORT246_OSPI_A_CS                 (PORT_ALT6_FUNC_MODE)         /* PTH22 */
#define    PORT228_FCSPI6_SIN                (PORT_ALT6_FUNC_MODE)          /* PTH4 */
#define    PORT229_FCSPI6_SCK                (PORT_ALT6_FUNC_MODE)          /* PTH5 */
#define    PORT277_FCUART16_CTS              (PORT_ALT6_FUNC_MODE)         /* PTI21 */
#define    PORT278_FCUART16_RX               (PORT_ALT6_FUNC_MODE)         /* PTI22 */
#define    PORT279_FCUART16_TX               (PORT_ALT6_FUNC_MODE)         /* PTI23 */
#define    PORT259_FCSPI6_SOUT               (PORT_ALT6_FUNC_MODE)          /* PTI3 */
#define    PORT260_FCSPI6_PCS0               (PORT_ALT6_FUNC_MODE)          /* PTI4 */
#define    PORT265_MSC0_SOP                  (PORT_ALT6_FUNC_MODE)          /* PTI9 */
#define    PORT0_TRGSEL_OUT3                 (PORT_ALT7_FUNC_MODE)          /* PTA0 */
#define    PORT1_TRGSEL_OUT0                 (PORT_ALT7_FUNC_MODE)          /* PTA1 */
#define    PORT10_JTAG_TDO                   (PORT_ALT7_FUNC_MODE)         /* PTA10 */
#define    PORT11_NMI_b                      (PORT_ALT7_FUNC_MODE)         /* PTA11 */
#define    PORT4_JTAG_TMS_SWD_DIO            (PORT_ALT7_FUNC_MODE)          /* PTA4 */
#define    PORT6_FCSPI7_SIN                  (PORT_ALT7_FUNC_MODE)          /* PTA6 */
#define    PORT52_SCG_CLKOUT                 (PORT_ALT7_FUNC_MODE)         /* PTB20 */
#define    PORT53_RTC_CLKOUT                 (PORT_ALT7_FUNC_MODE)         /* PTB21 */
#define    PORT54_FCSPI3_PCS2                (PORT_ALT7_FUNC_MODE)         /* PTB22 */
#define    PORT58_FCSPI3_SIN                 (PORT_ALT7_FUNC_MODE)         /* PTB26 */
#define    PORT61_MSC0_FCLP                  (PORT_ALT7_FUNC_MODE)         /* PTB29 */
#define    PORT62_FCSPI3_SOUT                (PORT_ALT7_FUNC_MODE)         /* PTB30 */
#define    PORT64_FCSPI3_PCS1                (PORT_ALT7_FUNC_MODE)          /* PTC0 */
#define    PORT65_FCSPI3_PCS0                (PORT_ALT7_FUNC_MODE)          /* PTC1 */
#define    PORT74_MSC0_EN1                   (PORT_ALT7_FUNC_MODE)         /* PTC10 */
#define    PORT75_MSC0_EN0                   (PORT_ALT7_FUNC_MODE)         /* PTC11 */
#define    PORT76_MSC0_EN2                   (PORT_ALT7_FUNC_MODE)         /* PTC12 */
#define    PORT77_MSC0_SOP                   (PORT_ALT7_FUNC_MODE)         /* PTC13 */
#define    PORT79_FCSPI3_PCS3                (PORT_ALT7_FUNC_MODE)         /* PTC15 */
#define    PORT80_FCUART5_RX                 (PORT_ALT7_FUNC_MODE)         /* PTC16 */
#define    PORT81_FCUART5_TX                 (PORT_ALT7_FUNC_MODE)         /* PTC17 */
#define    PORT83_MSC0_EN3                   (PORT_ALT7_FUNC_MODE)         /* PTC19 */
#define    PORT84_MSC0_SDI2                  (PORT_ALT7_FUNC_MODE)         /* PTC20 */
#define    PORT85_MSC0_SDI3                  (PORT_ALT7_FUNC_MODE)         /* PTC21 */
#define    PORT86_MSC0_SDI1                  (PORT_ALT7_FUNC_MODE)         /* PTC22 */
#define    PORT87_MSC0_SDI0                  (PORT_ALT7_FUNC_MODE)         /* PTC23 */
#define    PORT67_FCSPI3_PCS0                (PORT_ALT7_FUNC_MODE)          /* PTC3 */
#define    PORT95_FCSPI7_SCK                 (PORT_ALT7_FUNC_MODE)         /* PTC31 */
#define    PORT68_JTAG_TCLK_SWD_CLK          (PORT_ALT7_FUNC_MODE)          /* PTC4 */
#define    PORT69_JTAG_TDI                   (PORT_ALT7_FUNC_MODE)          /* PTC5 */
#define    PORT96_TRGSEL_OUT1                (PORT_ALT7_FUNC_MODE)          /* PTD0 */
#define    PORT97_TRGSEL_OUT2                (PORT_ALT7_FUNC_MODE)          /* PTD1 */
#define    PORT108_FCSPI3_SOUT               (PORT_ALT7_FUNC_MODE)         /* PTD12 */
#define    PORT114_FCSPI7_PCS0               (PORT_ALT7_FUNC_MODE)         /* PTD18 */
#define    PORT101_FCSPI3_SIN                (PORT_ALT7_FUNC_MODE)          /* PTD5 */
#define    PORT102_FCSPI3_SCK                (PORT_ALT7_FUNC_MODE)          /* PTD6 */
#define    PORT104_FCUART4_RX                (PORT_ALT7_FUNC_MODE)          /* PTD8 */
#define    PORT105_FCUART4_TX                (PORT_ALT7_FUNC_MODE)          /* PTD9 */
#define    PORT138_TRGSEL_OUT4               (PORT_ALT7_FUNC_MODE)         /* PTE10 */
#define    PORT139_TRGSEL_OUT5               (PORT_ALT7_FUNC_MODE)         /* PTE11 */
#define    PORT143_TRGSEL_OUT6               (PORT_ALT7_FUNC_MODE)         /* PTE15 */
#define    PORT144_TRGSEL_OUT7               (PORT_ALT7_FUNC_MODE)         /* PTE16 */
#define    PORT153_TRGSEL_OUT7               (PORT_ALT7_FUNC_MODE)         /* PTE25 */
#define    PORT135_FCSPI7_SOUT               (PORT_ALT7_FUNC_MODE)          /* PTE7 */
#define    PORT136_FCSPI3_SCK                (PORT_ALT7_FUNC_MODE)          /* PTE8 */




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
#define PortConf_PortContainer_0_PortPin_0  (Port_PinType)0
#define PortConf_PortContainer_0_PortPin_1  (Port_PinType)1
#define PortConf_PortContainer_0_PortPin_2  (Port_PinType)2
#define PortConf_PortContainer_0_PortPin_3  (Port_PinType)3
#define PortConf_PortContainer_0_PortPin_4  (Port_PinType)4
#define PortConf_PortContainer_0_PortPin_5  (Port_PinType)6
#define PortConf_PortContainer_0_PortPin_6  (Port_PinType)7
#define PortConf_PortContainer_0_PortPin_7  (Port_PinType)8
#define PortConf_PortContainer_0_PortPin_8  (Port_PinType)9
#define PortConf_PortContainer_0_PortPin_9  (Port_PinType)10
#define PortConf_PortContainer_0_KEY3  (Port_PinType)11
#define PortConf_PortContainer_0_PortPin_11  (Port_PinType)12
#define PortConf_PortContainer_0_PortPin_12  (Port_PinType)13
#define PortConf_PortContainer_0_LED3  (Port_PinType)14
#define PortConf_PortContainer_0_PortPin_14  (Port_PinType)15
#define PortConf_PortContainer_0_PortPin_15  (Port_PinType)16
#define PortConf_PortContainer_0_PortPin_16  (Port_PinType)17
#define PortConf_PortContainer_0_PortPin_17  (Port_PinType)18
#define PortConf_PortContainer_0_PortPin_18  (Port_PinType)19
#define PortConf_PortContainer_0_PortPin_19  (Port_PinType)20
#define PortConf_PortContainer_0_PortPin_20  (Port_PinType)21
#define PortConf_PortContainer_0_PortPin_21  (Port_PinType)22
#define PortConf_PortContainer_0_PortPin_22  (Port_PinType)23
#define PortConf_PortContainer_0_PortPin_23  (Port_PinType)24
#define PortConf_PortContainer_0_PortPin_24  (Port_PinType)25
#define PortConf_PortContainer_0_LED1  (Port_PinType)26
#define PortConf_PortContainer_0_PortPin_26  (Port_PinType)27
#define PortConf_PortContainer_0_PortPin_27  (Port_PinType)28
#define PortConf_PortContainer_0_PortPin_28  (Port_PinType)29
#define PortConf_PortContainer_0_PortPin_29  (Port_PinType)30
#define PortConf_PortContainer_0_PortPin_30  (Port_PinType)31
#define PortConf_PortContainer_1_PortPin_0  (Port_PinType)32
#define PortConf_PortContainer_1_PortPin_1  (Port_PinType)33
#define PortConf_PortContainer_1_PortPin_2  (Port_PinType)35
#define PortConf_PortContainer_1_ETH_MDIO  (Port_PinType)36
#define PortConf_PortContainer_1_ETH_MDC  (Port_PinType)37
#define PortConf_PortContainer_1_XTAL  (Port_PinType)38
#define PortConf_PortContainer_1_EXTAL  (Port_PinType)39
#define PortConf_PortContainer_1_PortPin_7  (Port_PinType)40
#define PortConf_PortContainer_1_PortPin_8  (Port_PinType)41
#define PortConf_PortContainer_1_PortPin_9  (Port_PinType)42
#define PortConf_PortContainer_1_PortPin_10  (Port_PinType)44
#define PortConf_PortContainer_1_PortPin_11  (Port_PinType)45
#define PortConf_PortContainer_1_PortPin_12  (Port_PinType)46
#define PortConf_PortContainer_1_PortPin_13  (Port_PinType)47
#define PortConf_PortContainer_1_PortPin_14  (Port_PinType)48
#define PortConf_PortContainer_1_PortPin_15  (Port_PinType)49
#define PortConf_PortContainer_1_PortPin_16  (Port_PinType)50
#define PortConf_PortContainer_1_ETH_BASET1_WAKE  (Port_PinType)51
#define PortConf_PortContainer_1_PortPin_18  (Port_PinType)52
#define PortConf_PortContainer_1_PortPin_19  (Port_PinType)53
#define PortConf_PortContainer_1_PortPin_20  (Port_PinType)54
#define PortConf_PortContainer_1_SPI2_PCS0  (Port_PinType)55
#define PortConf_PortContainer_1_PortPin_22  (Port_PinType)56
#define PortConf_PortContainer_1_PortPin_23  (Port_PinType)57
#define PortConf_PortContainer_1_ETH_BASET1_EN  (Port_PinType)58
#define PortConf_PortContainer_1_PortPin_25  (Port_PinType)59
#define PortConf_PortContainer_1_PortPin_26  (Port_PinType)60
#define PortConf_PortContainer_1_PortPin_27  (Port_PinType)61
#define PortConf_PortContainer_1_ETH_BASET1_INT_N  (Port_PinType)62
#define PortConf_PortContainer_1_SPI2_SCK  (Port_PinType)63
#define PortConf_PortContainer_2_ETH_RXD1  (Port_PinType)64
#define PortConf_PortContainer_2_ETH_RXD0  (Port_PinType)65
#define PortConf_PortContainer_2_ETH_TXD0  (Port_PinType)66
#define PortConf_PortContainer_2_Flash_WP  (Port_PinType)67
#define PortConf_PortContainer_2_PortPin_4  (Port_PinType)68
#define PortConf_PortContainer_2_PortPin_5  (Port_PinType)69
#define PortConf_PortContainer_2_PortPin_6  (Port_PinType)70
#define PortConf_PortContainer_2_PortPin_7  (Port_PinType)71
#define PortConf_PortContainer_2_PortPin_8  (Port_PinType)72
#define PortConf_PortContainer_2_PortPin_9  (Port_PinType)73
#define PortConf_PortContainer_2_PortPin_10  (Port_PinType)74
#define PortConf_PortContainer_2_PortPin_11  (Port_PinType)75
#define PortConf_PortContainer_2_PortPin_12  (Port_PinType)76
#define PortConf_PortContainer_2_PortPin_13  (Port_PinType)77
#define PortConf_PortContainer_2_ETH_MDIOSEL  (Port_PinType)78
#define PortConf_PortContainer_2_ETH_RXD3  (Port_PinType)79
#define PortConf_PortContainer_2_SPI2_SO  (Port_PinType)80
#define PortConf_PortContainer_2_Flash_HOLD  (Port_PinType)81
#define PortConf_PortContainer_2_SPI2_SI  (Port_PinType)82
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
#define PortConf_PortContainer_3_PortPin_0  (Port_PinType)96
#define PortConf_PortContainer_3_PortPin_1  (Port_PinType)97
#define PortConf_PortContainer_3_PortPin_2  (Port_PinType)98
#define PortConf_PortContainer_3_PortPin_3  (Port_PinType)99
#define PortConf_PortContainer_3_PortPin_4  (Port_PinType)100
#define PortConf_PortContainer_3_ETH_TXD3  (Port_PinType)101
#define PortConf_PortContainer_3_ETH_TXD2  (Port_PinType)102
#define PortConf_PortContainer_3_ETH_TXD1  (Port_PinType)103
#define PortConf_PortContainer_3_ETH_RXDV  (Port_PinType)104
#define PortConf_PortContainer_3_ETH_RXD2  (Port_PinType)105
#define PortConf_PortContainer_3_ETH_RXCLK  (Port_PinType)106
#define PortConf_PortContainer_3_ETH_TXCLK  (Port_PinType)107
#define PortConf_PortContainer_3_ETH_TXEN  (Port_PinType)108
#define PortConf_PortContainer_3_PortPin_13  (Port_PinType)111
#define PortConf_PortContainer_3_PortPin_14  (Port_PinType)112
#define PortConf_PortContainer_3_PortPin_15  (Port_PinType)113
#define PortConf_PortContainer_3_PortPin_16  (Port_PinType)114
#define PortConf_PortContainer_3_PortPin_17  (Port_PinType)115
#define PortConf_PortContainer_3_kEY1  (Port_PinType)116
#define PortConf_PortContainer_3_PortPin_19  (Port_PinType)117
#define PortConf_PortContainer_3_PortPin_20  (Port_PinType)118
#define PortConf_PortContainer_3_PortPin_21  (Port_PinType)119
#define PortConf_PortContainer_3_PortPin_22  (Port_PinType)120
#define PortConf_PortContainer_3_PortPin_23  (Port_PinType)121
#define PortConf_PortContainer_3_KEY2  (Port_PinType)122
#define PortConf_PortContainer_3_PortPin_25  (Port_PinType)123
#define PortConf_PortContainer_3_PortPin_26  (Port_PinType)124
#define PortConf_PortContainer_3_PortPin_27  (Port_PinType)125
#define PortConf_PortContainer_3_PortPin_28  (Port_PinType)126
#define PortConf_PortContainer_3_LED2  (Port_PinType)127
#define PortConf_PortContainer_4_PortPin_0  (Port_PinType)128
#define PortConf_PortContainer_4_PortPin_1  (Port_PinType)129
#define PortConf_PortContainer_4_PortPin_2  (Port_PinType)130
#define PortConf_PortContainer_4_PortPin_3  (Port_PinType)131
#define PortConf_PortContainer_4_PortPin_4  (Port_PinType)132
#define PortConf_PortContainer_4_PortPin_5  (Port_PinType)133
#define PortConf_PortContainer_4_PortPin_6  (Port_PinType)134
#define PortConf_PortContainer_4_PortPin_7  (Port_PinType)135
#define PortConf_PortContainer_4_ETH_PHYRESET  (Port_PinType)136
#define PortConf_PortContainer_4_PortPin_9  (Port_PinType)137
#define PortConf_PortContainer_4_PortPin_10  (Port_PinType)138
#define PortConf_PortContainer_4_PortPin_11  (Port_PinType)139
#define PortConf_PortContainer_4_PortPin_12  (Port_PinType)140
#define PortConf_PortContainer_4_PortPin_13  (Port_PinType)141
#define PortConf_PortContainer_4_PortPin_14  (Port_PinType)142
#define PortConf_PortContainer_4_PortPin_15  (Port_PinType)143
#define PortConf_PortContainer_4_PortPin_16  (Port_PinType)144
#define PortConf_PortContainer_4_PortPin_17  (Port_PinType)145
#define PortConf_PortContainer_4_PortPin_18  (Port_PinType)146
#define PortConf_PortContainer_4_PortPin_19  (Port_PinType)147
#define PortConf_PortContainer_4_PortPin_20  (Port_PinType)148
#define PortConf_PortContainer_4_PortPin_21  (Port_PinType)149
#define PortConf_PortContainer_4_PortPin_22  (Port_PinType)150
#define PortConf_PortContainer_4_PortPin_23  (Port_PinType)151
#define PortConf_PortContainer_4_PortPin_24  (Port_PinType)152
#define PortConf_PortContainer_4_PortPin_25  (Port_PinType)153
#define PortConf_PortContainer_4_PortPin_26  (Port_PinType)154
#define PortConf_PortContainer_4_PortPin_27  (Port_PinType)155
#define PortConf_PortContainer_5_PortPin_0  (Port_PinType)160
#define PortConf_PortContainer_5_PortPin_1  (Port_PinType)161
#define PortConf_PortContainer_5_PortPin_2  (Port_PinType)162
#define PortConf_PortContainer_5_PortPin_3  (Port_PinType)163
#define PortConf_PortContainer_5_PortPin_4  (Port_PinType)164
#define PortConf_PortContainer_5_SPI6_SO  (Port_PinType)165
#define PortConf_PortContainer_5_PortPin_6  (Port_PinType)166
#define PortConf_PortContainer_5_PortPin_7  (Port_PinType)167
#define PortConf_PortContainer_5_SPI3_SI  (Port_PinType)168
#define PortConf_PortContainer_5_PortPin_9  (Port_PinType)169
#define PortConf_PortContainer_5_PortPin_10  (Port_PinType)170
#define PortConf_PortContainer_5_PortPin_11  (Port_PinType)171
#define PortConf_PortContainer_5_PortPin_12  (Port_PinType)172
#define PortConf_PortContainer_5_PortPin_13  (Port_PinType)173
#define PortConf_PortContainer_5_PortPin_14  (Port_PinType)174
#define PortConf_PortContainer_5_PortPin_15  (Port_PinType)175
#define PortConf_PortContainer_5_PortPin_16  (Port_PinType)176
#define PortConf_PortContainer_5_PortPin_17  (Port_PinType)177
#define PortConf_PortContainer_5_PortPin_18  (Port_PinType)178
#define PortConf_PortContainer_5_PortPin_19  (Port_PinType)179
#define PortConf_PortContainer_5_PortPin_20  (Port_PinType)180
#define PortConf_PortContainer_5_PortPin_21  (Port_PinType)181
#define PortConf_PortContainer_5_PortPin_22  (Port_PinType)182
#define PortConf_PortContainer_5_PortPin_23  (Port_PinType)183
#define PortConf_PortContainer_5_PortPin_24  (Port_PinType)184
#define PortConf_PortContainer_6_PortPin_0  (Port_PinType)192
#define PortConf_PortContainer_6_PortPin_1  (Port_PinType)193
#define PortConf_PortContainer_6_PortPin_2  (Port_PinType)194
#define PortConf_PortContainer_6_PortPin_3  (Port_PinType)195
#define PortConf_PortContainer_6_PortPin_4  (Port_PinType)196
#define PortConf_PortContainer_6_PortPin_5  (Port_PinType)197
#define PortConf_PortContainer_6_SPI3_SO  (Port_PinType)198
#define PortConf_PortContainer_6_SPI3_PCS0  (Port_PinType)199
#define PortConf_PortContainer_6_ETH_REFCLK  (Port_PinType)200
#define PortConf_PortContainer_6_PortPin_9  (Port_PinType)201
#define PortConf_PortContainer_6_PortPin_10  (Port_PinType)202
#define PortConf_PortContainer_6_PortPin_11  (Port_PinType)203
#define PortConf_PortContainer_6_PortPin_12  (Port_PinType)204
#define PortConf_PortContainer_6_PortPin_13  (Port_PinType)205
#define PortConf_PortContainer_6_PortPin_14  (Port_PinType)206
#define PortConf_PortContainer_6_PortPin_15  (Port_PinType)207
#define PortConf_PortContainer_6_PortPin_16  (Port_PinType)208
#define PortConf_PortContainer_6_PortPin_17  (Port_PinType)209
#define PortConf_PortContainer_6_PortPin_18  (Port_PinType)210
#define PortConf_PortContainer_6_PortPin_19  (Port_PinType)211
#define PortConf_PortContainer_6_PortPin_20  (Port_PinType)212
#define PortConf_PortContainer_6_PortPin_21  (Port_PinType)213
#define PortConf_PortContainer_6_PortPin_22  (Port_PinType)214
#define PortConf_PortContainer_6_PortPin_23  (Port_PinType)215
#define PortConf_PortContainer_7_PortPin_0  (Port_PinType)224
#define PortConf_PortContainer_7_PortPin_1  (Port_PinType)225
#define PortConf_PortContainer_7_PortPin_2  (Port_PinType)226
#define PortConf_PortContainer_7_PortPin_3  (Port_PinType)227
#define PortConf_PortContainer_7_PortPin_4  (Port_PinType)228
#define PortConf_PortContainer_7_PortPin_5  (Port_PinType)229
#define PortConf_PortContainer_7_PortPin_6  (Port_PinType)230
#define PortConf_PortContainer_7_PortPin_7  (Port_PinType)231
#define PortConf_PortContainer_7_PortPin_8  (Port_PinType)232
#define PortConf_PortContainer_7_PortPin_9  (Port_PinType)233
#define PortConf_PortContainer_7_PortPin_10  (Port_PinType)234
#define PortConf_PortContainer_7_SPI7_SIN  (Port_PinType)235
#define PortConf_PortContainer_7_PortPin_12  (Port_PinType)236
#define PortConf_PortContainer_7_PortPin_13  (Port_PinType)237
#define PortConf_PortContainer_7_PortPin_14  (Port_PinType)238
#define PortConf_PortContainer_7_PortPin_15  (Port_PinType)239
#define PortConf_PortContainer_7_SPI5_PCS0  (Port_PinType)240
#define PortConf_PortContainer_7_SPI5_SCK  (Port_PinType)241
#define PortConf_PortContainer_7_PortPin_18  (Port_PinType)242
#define PortConf_PortContainer_7_PortPin_19  (Port_PinType)243
#define PortConf_PortContainer_7_PortPin_20  (Port_PinType)244
#define PortConf_PortContainer_7_SPI3_SCK  (Port_PinType)245
#define PortConf_PortContainer_7_PortPin_22  (Port_PinType)246
#define PortConf_PortContainer_7_PortPin_23  (Port_PinType)247
#define PortConf_PortContainer_8_PortPin_0  (Port_PinType)256
#define PortConf_PortContainer_8_SPI6_PCS0  (Port_PinType)257
#define PortConf_PortContainer_8_PortPin_2  (Port_PinType)258
#define PortConf_PortContainer_8_PortPin_3  (Port_PinType)259
#define PortConf_PortContainer_8_PortPin_4  (Port_PinType)260
#define PortConf_PortContainer_8_PortPin_5  (Port_PinType)261
#define PortConf_PortContainer_8_PortPin_6  (Port_PinType)262
#define PortConf_PortContainer_8_PortPin_7  (Port_PinType)263
#define PortConf_PortContainer_8_PortPin_8  (Port_PinType)264
#define PortConf_PortContainer_8_SPI7_SCK  (Port_PinType)265
#define PortConf_PortContainer_8_SPI7_SOUT  (Port_PinType)266
#define PortConf_PortContainer_8_SPI7_PCS0  (Port_PinType)267
#define PortConf_PortContainer_8_PortPin_12  (Port_PinType)268
#define PortConf_PortContainer_8_PortPin_13  (Port_PinType)269
#define PortConf_PortContainer_8_PortPin_14  (Port_PinType)270
#define PortConf_PortContainer_8_SPI5_SIN  (Port_PinType)271
#define PortConf_PortContainer_8_SPI5_SOUT  (Port_PinType)272
#define PortConf_PortContainer_8_PortPin_17  (Port_PinType)273
#define PortConf_PortContainer_8_PortPin_18  (Port_PinType)274
#define PortConf_PortContainer_8_PortPin_19  (Port_PinType)275
#define PortConf_PortContainer_8_PortPin_20  (Port_PinType)276
#define PortConf_PortContainer_8_PortPin_21  (Port_PinType)277
#define PortConf_PortContainer_8_PortPin_22  (Port_PinType)278
#define PortConf_PortContainer_8_PortPin_23  (Port_PinType)279

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


#define MAX_CONFIGURED_PORTB_U8  ((uint8)30)


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
#define MAX_CONFIGURED_PINS_U16                        ((uint16)248)

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
