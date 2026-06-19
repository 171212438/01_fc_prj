/**
*   @file    Port_Cfg.c
*   @version 1.5.1
*
*   @brief   AUTOSAR Port - Pre-Compile configurations for Port driver.
*   @details Pre-Compile configuration file for Port driver.
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
#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Port.h"


/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

#define PORT_START_SEC_CONST_16
#include "Port_MemMap.h"

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief Port Pin description data
*/
/* PRQA S 4542,4543 ++ #Misra-C:2012 Rule-10.1 The value of an expression of integer type shall not be implicitly converted to
                        a different underlying type if  it is not a conversion to a wider integer type of the same signedness
* Reason: The program will guarantee the legality of these type usage */
PORT_DATA_SECTION const uint8 kPortPinsDescription[MAX_PORT_PIN_NUM_U16] =
{

        /* PTA0 */
        (uint8)( (1 <<  PORT0_ADC1_SE30) | \
        (1 <<  PORT0_GPIO) | \
        (1 <<  PORT0_FTU2_CH1) | \
        (1 <<  PORT0_AONTIMER0_CLK1) | \
        (1 <<  PORT0_SENT0_RXD3) | \
        (1 <<  PORT0_TPU_CH1) | \
        (1 <<  PORT0_FCUART0_CTS) | \
        (1 <<  PORT0_TRGSEL_OUT3) ),

        /* PTA1 */
        (uint8)( (1 <<  PORT1_ADC1_SE29) | \
        (1 <<  PORT1_GPIO) | \
        (1 <<  PORT1_FTU1_CH1) | \
        (1 <<  PORT1_AONTIMER0_CLK2) | \
        (1 <<  PORT1_SENT0_RXD2) | \
        (1 <<  PORT1_FTU1_QD_PHB) | \
        (1 <<  PORT1_FCUART0_RTS) | \
        (1 <<  PORT1_TRGSEL_OUT0) ),

        /* PTA2 */
        (uint8)( (1 <<  PORT2_GPIO) | \
        (1 <<  PORT2_FTU3_CH0) | \
        (1 <<  PORT2_FCIIC0_SDA) | \
        (1 <<  PORT2_TPU_CH1) | \
        (1 <<  PORT2_FCSPI5_SOUT) | \
        (1 <<  PORT2_FCUART0_RX) ),

        /* PTA3 */
        (uint8)( (1 <<  PORT3_GPIO) | \
        (1 <<  PORT3_FTU3_CH1) | \
        (1 <<  PORT3_FCIIC0_SCL) | \
        (1 <<  PORT3_TPU_CH2) | \
        (1 <<  PORT3_FCSPI5_SCK) | \
        (1 <<  PORT3_FCUART0_TX) ),

        /* PTA4 */
        (uint8)( (1 <<  PORT4_GPIO) | \
        (1 <<  PORT4_FTU1_CH0) | \
        (1 <<  PORT4_TRGSEL_OUT7) | \
        (1 <<  PORT4_CMP0_OUT) | \
        (1 <<  PORT4_LP_WAKEUP4) | \
        (1 <<  PORT4_JTAG_TMS_SWD_DIO) ),

        (uint8)0x00,

        /* PTA6 */
        (uint8)( (1 <<  PORT6_ADC1_SE9) | \
        (1 <<  PORT6_GPIO) | \
        (1 <<  PORT6_FTU_FLT13) | \
        (1 <<  PORT6_FCSPI1_PCS1) | \
        (1 <<  PORT6_FTU5_CH5) | \
        (1 <<  PORT6_TRGSEL_OUT4) | \
        (1 <<  PORT6_FCUART1_CTS) | \
        (1 <<  PORT6_FTU4_CH7) ),

        /* PTA7 */
        (uint8)( (1 <<  PORT7_GPIO) | \
        (1 <<  PORT7_FTU_FLT12) | \
        (1 <<  PORT7_FTU3_CH1) | \
        (1 <<  PORT7_FTU5_CH3) | \
        (1 <<  PORT7_FCSPI1_SCK) | \
        (1 <<  PORT7_FCUART1_RTS) | \
        (1 <<  PORT7_MSC0_EN0) ),

        /* PTA8 */
        (uint8)( (1 <<  PORT8_ADC1_SE3_ADC1_DIFF_P3) | \
        (1 <<  PORT8_GPIO) | \
        (1 <<  PORT8_FCUART2_RX) | \
        (1 <<  PORT8_FTU1_CH0) | \
        (1 <<  PORT8_CMP0_OUT) | \
        (1 <<  PORT8_FTU_FLT21) | \
        (1 <<  PORT8_FCUART0_RX) | \
        (1 <<  PORT8_TPU_CH13) ),

        /* PTA9 */
        (uint8)( (1 <<  PORT9_ADC1_SE7_ADC1_DIFF_N3) | \
        (1 <<  PORT9_GPIO) | \
        (1 <<  PORT9_FCUART2_TX) | \
        (1 <<  PORT9_FTU4_CH4) | \
        (1 <<  PORT9_FTU_FLT20) | \
        (1 <<  PORT9_FCUART0_TX) | \
        (1 <<  PORT9_TPU_CH12) ),

        /* PTA10 */
        (uint8)( (1 <<  PORT10_GPIO) | \
        (1 <<  PORT10_FTU1_CH4) | \
        (1 <<  PORT10_AONTIMER0_CLK0) | \
        (1 <<  PORT10_TPU_CH30) | \
        (1 <<  PORT10_FCIIC0_SCL) | \
        (1 <<  PORT10_JTAG_TDO) ),

        /* PTA11 */
        (uint8)( (1 <<  PORT11_GPIO) | \
        (1 <<  PORT11_FTU1_CH5) | \
        (1 <<  PORT11_LP_WAKEUP2) | \
        (1 <<  PORT11_TPU_CH29) | \
        (1 <<  PORT11_FCSPI0_PCS0) | \
        (1 <<  PORT11_NMI_b) ),

        /* PTA12 */
        (uint8)( (1 <<  PORT12_GPIO) | \
        (1 <<  PORT12_FTU1_CH6) | \
        (1 <<  PORT12_FLEXCAN1_RX) | \
        (1 <<  PORT12_FCSPI0_SOUT) | \
        (1 <<  PORT12_FTU1_QD_PHB) | \
        (1 <<  PORT12_TPU_CH9) ),

        /* PTA13 */
        (uint8)( (1 <<  PORT13_ADC0_SE20) | \
        (1 <<  PORT13_GPIO) | \
        (1 <<  PORT13_FTU1_CH7) | \
        (1 <<  PORT13_FLEXCAN1_TX) | \
        (1 <<  PORT13_CMP1_OUT) | \
        (1 <<  PORT13_FCUART0_RX) | \
        (1 <<  PORT13_FTU1_QD_PHA) | \
        (1 <<  PORT13_TPU_CH8) ),

        /* PTA14 */
        (uint8)( (1 <<  PORT14_ADC0_SE21) | \
        (1 <<  PORT14_GPIO) | \
        (1 <<  PORT14_FTU_FLT17) | \
        (1 <<  PORT14_AONTIMER0_CLK1) | \
        (1 <<  PORT14_FCUART0_TX) | \
        (1 <<  PORT14_TPU_CH7) ),

        /* PTA15 */
        (uint8)( (1 <<  PORT15_ADC0_SE26) | \
        (1 <<  PORT15_GPIO) | \
        (1 <<  PORT15_FTU1_CH2) | \
        (1 <<  PORT15_TRGSEL_OUT0) | \
        (1 <<  PORT15_FLEXCAN3_RX) | \
        (1 <<  PORT15_TPU_CH5) ),

        /* PTA16 */
        (uint8)( (1 <<  PORT16_ADC0_SE28) | \
        (1 <<  PORT16_GPIO) | \
        (1 <<  PORT16_FTU1_CH3) | \
        (1 <<  PORT16_FCSPI1_PCS2) | \
        (1 <<  PORT16_FTU1_QD_PHA) | \
        (1 <<  PORT16_SENT0_RXD1) | \
        (1 <<  PORT16_FLEXCAN3_TX) | \
        (1 <<  PORT16_TPU_CH4) ),

        /* PTA17 */
        (uint8)( (1 <<  PORT17_GPIO) | \
        (1 <<  PORT17_FTU0_CH6) | \
        (1 <<  PORT17_FTU7_CH0) | \
        (1 <<  PORT17_FLEXCAN2_TX) | \
        (1 <<  PORT17_FCSPI5_PCS0) | \
        (1 <<  PORT17_FTU_FLT15) | \
        (1 <<  PORT17_FCUART3_RX) ),

        /* PTA18 */
        (uint8)( (1 <<  PORT18_GPIO) | \
        (1 <<  PORT18_FTU4_CH0) | \
        (1 <<  PORT18_FCUART1_TX) | \
        (1 <<  PORT18_TPU_CH0) | \
        (1 <<  PORT18_TPU_TCRCLK) | \
        (1 <<  PORT18_FCSPI4_PCS1) ),

        /* PTA19 */
        (uint8)( (1 <<  PORT19_GPIO) | \
        (1 <<  PORT19_FTU4_CH1) | \
        (1 <<  PORT19_FCUART1_RX) | \
        (1 <<  PORT19_TPU_CH1) | \
        (1 <<  PORT19_FCSPI4_PCS2) ),

        /* PTA20 */
        (uint8)( (1 <<  PORT20_GPIO) | \
        (1 <<  PORT20_FTU4_CH2) | \
        (1 <<  PORT20_FCUART3_RTS) | \
        (1 <<  PORT20_TPU_CH2) | \
        (1 <<  PORT20_FLEXCAN2_RX) | \
        (1 <<  PORT20_FCSPI4_PCS3) ),

        /* PTA21 */
        (uint8)( (1 <<  PORT21_GPIO) | \
        (1 <<  PORT21_FTU4_CH3) | \
        (1 <<  PORT21_FCUART3_CTS) | \
        (1 <<  PORT21_TPU_CH3) | \
        (1 <<  PORT21_FLEXCAN2_TX) ),

        (uint8)0x00,

        /* PTA23 */
        (uint8)( (1 <<  PORT23_GPIO) | \
        (1 <<  PORT23_FTU4_CH6) | \
        (1 <<  PORT23_FCUART3_RX) | \
        (1 <<  PORT23_TPU_CH25) | \
        (1 <<  PORT23_FCSPI4_SCK) ),

        /* PTA24 */
        (uint8)( (1 <<  PORT24_GPIO) | \
        (1 <<  PORT24_FTU4_CH7) | \
        (1 <<  PORT24_FCUART3_TX) | \
        (1 <<  PORT24_TPU_CH4) | \
        (1 <<  PORT24_FCSPI4_SIN) ),

        /* PTA25 */
        (uint8)( (1 <<  PORT25_ADC0_SE0_ADC0_DIFF_P0) | \
        (1 <<  PORT25_GPIO) | \
        (1 <<  PORT25_FTU5_CH0) | \
        (1 <<  PORT25_FCSPI2_PCS2) | \
        (1 <<  PORT25_FTU2_CH5) | \
        (1 <<  PORT25_FCUART2_RX) | \
        (1 <<  PORT25_TPU_TCRCLK) | \
        (1 <<  PORT25_TPU_CH0) ),

        /* PTA26 */
        (uint8)( (1 <<  PORT26_ADC0_SE2_ADC0_DIFF_P2) | \
        (1 <<  PORT26_GPIO) | \
        (1 <<  PORT26_FTU5_CH1) | \
        (1 <<  PORT26_FTU2_CH4) | \
        (1 <<  PORT26_FCSPI1_PCS0) | \
        (1 <<  PORT26_TPU_CH1) ),

        /* PTA27 */
        (uint8)( (1 <<  PORT27_ADC0_SE6_ADC0_DIFF_N2) | \
        (1 <<  PORT27_GPIO) | \
        (1 <<  PORT27_FTU5_CH2) | \
        (1 <<  PORT27_FLEXCAN0_TX) | \
        (1 <<  PORT27_FCUART0_TX) | \
        (1 <<  PORT27_FCSPI1_SOUT) | \
        (1 <<  PORT27_TPU_CH2) ),

        /* PTA28 */
        (uint8)( (1 <<  PORT28_ADC0_SE7_ADC0_DIFF_N3) | \
        (1 <<  PORT28_GPIO) | \
        (1 <<  PORT28_FTU5_CH3) | \
        (1 <<  PORT28_FLEXCAN0_RX) | \
        (1 <<  PORT28_FCUART0_RX) | \
        (1 <<  PORT28_FCSPI1_SCK) | \
        (1 <<  PORT28_TPU_CH4) ),

        /* PTA29 */
        (uint8)( (1 <<  PORT29_ADC0_SE9) | \
        (1 <<  PORT29_GPIO) | \
        (1 <<  PORT29_FTU5_CH4) | \
        (1 <<  PORT29_FCUART2_TX) | \
        (1 <<  PORT29_FCSPI1_SIN) | \
        (1 <<  PORT29_TPU_CH6) ),

        /* PTA30 */
        (uint8)( (1 <<  PORT30_GPIO) | \
        (1 <<  PORT30_FTU5_CH5) | \
        (1 <<  PORT30_FCUART2_RX) | \
        (1 <<  PORT30_TPU_CH7) ),

        /* PTA31 */
        (uint8)( (1 <<  PORT31_ADC0_SE13_CMP0_IN3) | \
        (1 <<  PORT31_GPIO) | \
        (1 <<  PORT31_FTU5_CH6) | \
        (1 <<  PORT31_FLEXCAN3_TX) | \
        (1 <<  PORT31_TPU_CH8) | \
        (1 <<  PORT31_FCSPI0_PCS1) ),

        /* PTB0 */
        (uint8)( (1 <<  PORT32_ADC1_SE10) | \
        (1 <<  PORT32_GPIO) | \
        (1 <<  PORT32_FCUART0_RX) | \
        (1 <<  PORT32_FCSPI0_PCS0) | \
        (1 <<  PORT32_FTU1_CH5) | \
        (1 <<  PORT32_FLEXCAN0_RX) | \
        (1 <<  PORT32_FTU4_CH6) | \
        (1 <<  PORT32_MSC0_SDI1) ),

        /* PTB1 */
        (uint8)( (1 <<  PORT33_ADC1_SE11) | \
        (1 <<  PORT33_GPIO) | \
        (1 <<  PORT33_FCUART0_TX) | \
        (1 <<  PORT33_FCSPI0_SOUT) | \
        (1 <<  PORT33_FTU_TCK0) | \
        (1 <<  PORT33_FLEXCAN0_TX) | \
        (1 <<  PORT33_FTU4_CH5) | \
        (1 <<  PORT33_MSC0_EN1) ),

        (uint8)0x00,

        /* PTB3 */
        (uint8)( (1 <<  PORT35_GPIO) | \
        (1 <<  PORT35_FTU1_CH1) | \
        (1 <<  PORT35_FCSPI0_SIN) | \
        (1 <<  PORT35_FTU1_QD_PHA) | \
        (1 <<  PORT35_FTU7_CH3) | \
        (1 <<  PORT35_TPU_CH10) | \
        (1 <<  PORT35_FCUART5_RX) ),

        /* PTB4 */
        (uint8)( (1 <<  PORT36_GPIO) | \
        (1 <<  PORT36_FTU0_CH4) | \
        (1 <<  PORT36_FCIIC1_SDA) | \
        (1 <<  PORT36_FCSPI4_SOUT) | \
        (1 <<  PORT36_FTU7_CH6) | \
        (1 <<  PORT36_TRACE_D6) | \
        (1 <<  PORT36_TRGSEL_OUT4) ),

        /* PTB5 */
        (uint8)( (1 <<  PORT37_GPIO) | \
        (1 <<  PORT37_FTU0_CH5) | \
        (1 <<  PORT37_FCIIC1_SCL) | \
        (1 <<  PORT37_FCSPI4_PCS0) | \
        (1 <<  PORT37_SCG_CLKOUT) | \
        (1 <<  PORT37_TRACE_D5) | \
        (1 <<  PORT37_TRGSEL_OUT5) ),

        /* PTB6 */
        (uint8)( (1 <<  PORT38_XTAL) | \
        (1 <<  PORT38_GPIO) | \
        (1 <<  PORT38_FCIIC0_SDA) ),

        /* PTB7 */
        (uint8)( (1 <<  PORT39_EXTAL) | \
        (1 <<  PORT39_GPIO) | \
        (1 <<  PORT39_FCIIC0_SCL) ),

        /* PTB8 */
        (uint8)( (1 <<  PORT40_ADC1_SE28) | \
        (1 <<  PORT40_GPIO) | \
        (1 <<  PORT40_FTU3_CH0) | \
        (1 <<  PORT40_FLEXCAN0_RX) | \
        (1 <<  PORT40_SENT0_RXD1) | \
        (1 <<  PORT40_TPU_CH0) | \
        (1 <<  PORT40_FCUART1_CTS) ),

        /* PTB9 */
        (uint8)( (1 <<  PORT41_ADC1_SE25) | \
        (1 <<  PORT41_GPIO) | \
        (1 <<  PORT41_FTU3_CH1) | \
        (1 <<  PORT41_FTU1_CH6) | \
        (1 <<  PORT41_TRGSEL_OUT1) | \
        (1 <<  PORT41_TPU_CH29) | \
        (1 <<  PORT41_FCSPI5_PCS0) ),

        /* PTB10 */
        (uint8)( (1 <<  PORT42_GPIO) | \
        (1 <<  PORT42_FTU3_CH2) | \
        (1 <<  PORT42_FLEXCAN0_TX) | \
        (1 <<  PORT42_SENT0_RXD0) | \
        (1 <<  PORT42_TRGSEL_OUT2) | \
        (1 <<  PORT42_TPU_CH0) | \
        (1 <<  PORT42_TPU_TCRCLK) ),

        /* PTB11 */
        (uint8)( (1 <<  PORT43_V15_BASE_DRIVER) | \
        (1 <<  PORT43_GPIO) | \
        (1 <<  PORT43_FTU6_CH0) | \
        (1 <<  PORT43_FCUART2_TX) | \
        (1 <<  PORT43_FLEXCAN0_TX) ),

        /* PTB12 */
        (uint8)( (1 <<  PORT44_GPIO) | \
        (1 <<  PORT44_FTU0_CH0) | \
        (1 <<  PORT44_TPU_CH26) | \
        (1 <<  PORT44_FCSMU_PIN0) ),

        /* PTB13 */
        (uint8)( (1 <<  PORT45_GPIO) | \
        (1 <<  PORT45_FTU0_CH1) | \
        (1 <<  PORT45_FCUART6_CTS) | \
        (1 <<  PORT45_TPU_CH25) | \
        (1 <<  PORT45_FCSMU_PIN1) ),

        /* PTB14 */
        (uint8)( (1 <<  PORT46_ADC1_SE18) | \
        (1 <<  PORT46_GPIO) | \
        (1 <<  PORT46_FTU0_CH2) | \
        (1 <<  PORT46_FCSPI1_SCK) | \
        (1 <<  PORT46_TPU_CH5) | \
        (1 <<  PORT46_FTU5_CH4) | \
        (1 <<  PORT46_FLEXCAN2_RX) ),

        /* PTB15 */
        (uint8)( (1 <<  PORT47_ADC1_SE17) | \
        (1 <<  PORT47_GPIO) | \
        (1 <<  PORT47_FTU0_CH3) | \
        (1 <<  PORT47_FCSPI1_SIN) | \
        (1 <<  PORT47_TPU_CH6) | \
        (1 <<  PORT47_FTU5_CH5) | \
        (1 <<  PORT47_FLEXCAN2_TX) ),

        /* PTB16 */
        (uint8)( (1 <<  PORT48_ADC1_SE16) | \
        (1 <<  PORT48_GPIO) | \
        (1 <<  PORT48_FTU0_CH4) | \
        (1 <<  PORT48_FCSPI1_SOUT) | \
        (1 <<  PORT48_TPU_CH7) | \
        (1 <<  PORT48_FTU5_CH6) ),

        /* PTB17 */
        (uint8)( (1 <<  PORT49_GPIO) | \
        (1 <<  PORT49_FTU0_CH5) | \
        (1 <<  PORT49_FCSPI1_PCS3) | \
        (1 <<  PORT49_FLEXCAN2_RX) | \
        (1 <<  PORT49_TRGSEL_OUT3) | \
        (1 <<  PORT49_FTU5_CH7) | \
        (1 <<  PORT49_FCUART3_TX) ),

        /* PTB18 */
        (uint8)( (1 <<  PORT50_GPIO) | \
        (1 <<  PORT50_FTU5_CH7) | \
        (1 <<  PORT50_FLEXCAN3_RX) | \
        (1 <<  PORT50_FCSPI4_PCS2) | \
        (1 <<  PORT50_FCSPI1_PCS1) | \
        (1 <<  PORT50_TPU_CH9) ),

        /* PTB19 */
        (uint8)( (1 <<  PORT51_CMP0_IN4) | \
        (1 <<  PORT51_GPIO) | \
        (1 <<  PORT51_FTU6_CH2) | \
        (1 <<  PORT51_FCUART4_RX) | \
        (1 <<  PORT51_FLEXCAN3_TX) | \
        (1 <<  PORT51_TPU_CH5) ),

        /* PTB20 */
        (uint8)( (1 <<  PORT52_ADC0_SE14) | \
        (1 <<  PORT52_GPIO) | \
        (1 <<  PORT52_FTU2_CH5) | \
        (1 <<  PORT52_FCUART1_TX) | \
        (1 <<  PORT52_FTU6_CH2) | \
        (1 <<  PORT52_TPU_CH10) | \
        (1 <<  PORT52_SCG_CLKOUT) ),

        /* PTB21 */
        (uint8)( (1 <<  PORT53_ADC0_SE15) | \
        (1 <<  PORT53_GPIO) | \
        (1 <<  PORT53_FTU2_CH4) | \
        (1 <<  PORT53_FCUART1_RX) | \
        (1 <<  PORT53_FTU6_CH3) | \
        (1 <<  PORT53_TPU_CH11) ),

        /* PTB22 */
        (uint8)( (1 <<  PORT54_GPIO) | \
        (1 <<  PORT54_FTU_FLT8) | \
        (1 <<  PORT54_FLEXCAN2_TX) | \
        (1 <<  PORT54_TPU_CH12) | \
        (1 <<  PORT54_FTU6_CH6) | \
        (1 <<  PORT54_MSC0_EN0) | \
        (1 <<  PORT54_FCSPI3_PCS1) ),

        /* PTB23 */
        (uint8)( (1 <<  PORT55_CMP1_IN6) | \
        (1 <<  PORT55_GPIO) | \
        (1 <<  PORT55_FTU_FLT9) | \
        (1 <<  PORT55_FCUART1_RX) | \
        (1 <<  PORT55_FTU4_CH7) | \
        (1 <<  PORT55_FTU7_CH7) | \
        (1 <<  PORT55_TPU_CH13) | \
        (1 <<  PORT55_MSC0_FCLP) ),

        /* PTB24 */
        (uint8)( (1 <<  PORT56_CMP0_IN5) | \
        (1 <<  PORT56_GPIO) | \
        (1 <<  PORT56_FTU6_CH3) | \
        (1 <<  PORT56_FCUART4_TX) | \
        (1 <<  PORT56_FLEXCAN3_RX) | \
        (1 <<  PORT56_TPU_CH6) ),

        /* PTB25 */
        (uint8)( (1 <<  PORT57_GPIO) | \
        (1 <<  PORT57_FTU1_CH2) | \
        (1 <<  PORT57_FTU1_QD_PHB) | \
        (1 <<  PORT57_FCSPI2_PCS0) | \
        (1 <<  PORT57_FTU6_CH7) | \
        (1 <<  PORT57_FCUART3_TX) ),

        /* PTB26 */
        (uint8)( (1 <<  PORT58_CMP0_IN6) | \
        (1 <<  PORT58_GPIO) | \
        (1 <<  PORT58_FTU6_CH4) | \
        (1 <<  PORT58_FCSPI3_SCK) | \
        (1 <<  PORT58_FCUART3_TX) | \
        (1 <<  PORT58_TPU_CH7) ),

        /* PTB27 */
        (uint8)( (1 <<  PORT59_GPIO) | \
        (1 <<  PORT59_FTU7_CH5) | \
        (1 <<  PORT59_FTU2_CH2) | \
        (1 <<  PORT59_FCSPI2_SOUT) | \
        (1 <<  PORT59_FCUART5_RTS) | \
        (1 <<  PORT59_TPU_CH14) ),

        /* PTB28 */
        (uint8)( (1 <<  PORT60_GPIO) | \
        (1 <<  PORT60_FTU7_CH4) | \
        (1 <<  PORT60_FTU2_CH1) | \
        (1 <<  PORT60_FCSPI2_SIN) | \
        (1 <<  PORT60_FCUART5_CTS) | \
        (1 <<  PORT60_TPU_CH15) ),

        /* PTB29 */
        (uint8)( (1 <<  PORT61_GPIO) | \
        (1 <<  PORT61_FTU1_CH0) | \
        (1 <<  PORT61_FCUART5_TX) | \
        (1 <<  PORT61_FCSPI2_SCK) | \
        (1 <<  PORT61_FTU1_QD_PHB) | \
        (1 <<  PORT61_FCUART7_RTS) | \
        (1 <<  PORT61_TPU_CH16) ),

        /* PTB30 */
        (uint8)( (1 <<  PORT62_CMP0_IN7) | \
        (1 <<  PORT62_GPIO) | \
        (1 <<  PORT62_FTU6_CH5) | \
        (1 <<  PORT62_FCSPI3_SIN) | \
        (1 <<  PORT62_FCUART3_RX) | \
        (1 <<  PORT62_TPU_CH8) ),

        /* PTB31 */
        (uint8)( (1 <<  PORT63_CMP1_IN0) | \
        (1 <<  PORT63_GPIO) | \
        (1 <<  PORT63_FTU7_CH7) | \
        (1 <<  PORT63_FCSPI3_SOUT) | \
        (1 <<  PORT63_FCUART5_TX) | \
        (1 <<  PORT63_TPU_CH9) ),

        /* PTC0 */
        (uint8)( (1 <<  PORT64_GPIO) | \
        (1 <<  PORT64_FTU0_CH0) | \
        (1 <<  PORT64_FLEXCAN2_RX) | \
        (1 <<  PORT64_TPU_CH15) | \
        (1 <<  PORT64_FlexCore_TCLK) | \
        (1 <<  PORT64_FTU1_CH6) | \
        (1 <<  PORT64_FCSPI3_PCS2) ),

        /* PTC1 */
        (uint8)( (1 <<  PORT65_GPIO) | \
        (1 <<  PORT65_FTU0_CH1) | \
        (1 <<  PORT65_TPU_CH16) | \
        (1 <<  PORT65_FCSPI2_SOUT) | \
        (1 <<  PORT65_FlexCore_TDI) | \
        (1 <<  PORT65_FTU1_CH7) | \
        (1 <<  PORT65_FCUART3_TX) ),

        /* PTC2 */
        (uint8)( (1 <<  PORT66_DEBUGMUX_P2) | \
        (1 <<  PORT66_GPIO) | \
        (1 <<  PORT66_FTU0_CH2) | \
        (1 <<  PORT66_FLEXCAN0_RX) | \
        (1 <<  PORT66_FCUART0_RX) | \
        (1 <<  PORT66_FTU5_CH4) | \
        (1 <<  PORT66_TRACE_CLKOUT) | \
        (1 <<  PORT66_FCSPI0_PCS2) ),

        /* PTC3 */
        (uint8)( (1 <<  PORT67_GPIO) | \
        (1 <<  PORT67_FTU0_CH3) | \
        (1 <<  PORT67_FLEXCAN0_TX) | \
        (1 <<  PORT67_FCUART0_TX) | \
        (1 <<  PORT67_FTU5_CH2) | \
        (1 <<  PORT67_TRACE_D7) | \
        (1 <<  PORT67_FCSPI0_SOUT) ),

        /* PTC4 */
        (uint8)( (1 <<  PORT68_GPIO) | \
        (1 <<  PORT68_JTAG_TCLK_SWD_CLK) ),

        /* PTC5 */
        (uint8)( (1 <<  PORT69_GPIO) | \
        (1 <<  PORT69_FTU2_CH0) | \
        (1 <<  PORT69_RTC_CLKOUT) | \
        (1 <<  PORT69_CMP1_OUT) | \
        (1 <<  PORT69_FCIIC0_SDA) | \
        (1 <<  PORT69_FTU2_QD_PHB) | \
        (1 <<  PORT69_JTAG_TDI) ),

        /* PTC6 */
        (uint8)( (1 <<  PORT70_ADC0_SE29) | \
        (1 <<  PORT70_GPIO) | \
        (1 <<  PORT70_FCUART1_RX) | \
        (1 <<  PORT70_FLEXCAN1_RX) | \
        (1 <<  PORT70_FTU3_CH2) | \
        (1 <<  PORT70_SENT0_RXD0) | \
        (1 <<  PORT70_TPU_CH3) ),

        /* PTC7 */
        (uint8)( (1 <<  PORT71_ADC0_SE30) | \
        (1 <<  PORT71_GPIO) | \
        (1 <<  PORT71_FCUART1_TX) | \
        (1 <<  PORT71_FLEXCAN1_TX) | \
        (1 <<  PORT71_FTU3_CH3) | \
        (1 <<  PORT71_TPU_CH2) ),

        /* PTC8 */
        (uint8)( (1 <<  PORT72_GPIO) | \
        (1 <<  PORT72_FCUART1_RX) | \
        (1 <<  PORT72_FTU_FLT11) | \
        (1 <<  PORT72_FTU5_CH1) | \
        (1 <<  PORT72_FCSPI1_SIN) | \
        (1 <<  PORT72_FCUART0_CTS) | \
        (1 <<  PORT72_MSC0_EN1) ),

        /* PTC9 */
        (uint8)( (1 <<  PORT73_GPIO) | \
        (1 <<  PORT73_FCUART1_TX) | \
        (1 <<  PORT73_FTU_FLT10) | \
        (1 <<  PORT73_FTU5_CH0) | \
        (1 <<  PORT73_FCSPI1_SOUT) | \
        (1 <<  PORT73_FCUART0_RTS) | \
        (1 <<  PORT73_FCUART5_TX) ),

        /* PTC10 */
        (uint8)( (1 <<  PORT74_ADC1_SE12) | \
        (1 <<  PORT74_GPIO) | \
        (1 <<  PORT74_FTU3_CH4) | \
        (1 <<  PORT74_FTU0_CH5) | \
        (1 <<  PORT74_FCUART6_RX) | \
        (1 <<  PORT74_FTU7_CH1) | \
        (1 <<  PORT74_TPU_CH8) ),

        /* PTC11 */
        (uint8)( (1 <<  PORT75_ADC1_SE13) | \
        (1 <<  PORT75_GPIO) | \
        (1 <<  PORT75_FTU3_CH5) | \
        (1 <<  PORT75_FTU4_CH2) | \
        (1 <<  PORT75_FCUART6_TX) | \
        (1 <<  PORT75_FCSPI1_PCS0) | \
        (1 <<  PORT75_FTU7_CH2) | \
        (1 <<  PORT75_TPU_CH9) ),

        /* PTC12 */
        (uint8)( (1 <<  PORT76_ADC1_SE14) | \
        (1 <<  PORT76_GPIO) | \
        (1 <<  PORT76_FTU3_CH6) | \
        (1 <<  PORT76_FTU2_CH6) | \
        (1 <<  PORT76_FCUART2_CTS) | \
        (1 <<  PORT76_TRGSEL_OUT5) | \
        (1 <<  PORT76_FCUART7_RX) | \
        (1 <<  PORT76_MSC0_SOP) ),

        /* PTC13 */
        (uint8)( (1 <<  PORT77_ADC1_SE15) | \
        (1 <<  PORT77_GPIO) | \
        (1 <<  PORT77_FTU3_CH7) | \
        (1 <<  PORT77_FTU2_CH7) | \
        (1 <<  PORT77_FCUART2_RTS) | \
        (1 <<  PORT77_TRGSEL_OUT6) | \
        (1 <<  PORT77_FCUART7_TX) | \
        (1 <<  PORT77_MSC0_FCLP) ),

        /* PTC14 */
        (uint8)( (1 <<  PORT78_CMP1_IN7) | \
        (1 <<  PORT78_GPIO) | \
        (1 <<  PORT78_FTU1_CH2) | \
        (1 <<  PORT78_TPU_CH11) | \
        (1 <<  PORT78_FCSPI2_PCS0) | \
        (1 <<  PORT78_FTU1_QD_PHA) | \
        (1 <<  PORT78_TRGSEL_OUT6) ),

        /* PTC15 */
        (uint8)( (1 <<  PORT79_CMP1_IN5) | \
        (1 <<  PORT79_GPIO) | \
        (1 <<  PORT79_FTU1_CH3) | \
        (1 <<  PORT79_TPU_CH12) | \
        (1 <<  PORT79_FCSPI2_SCK) | \
        (1 <<  PORT79_FTU6_CH1) | \
        (1 <<  PORT79_TRGSEL_OUT7) | \
        (1 <<  PORT79_FCUART5_TX) ),

        /* PTC16 */
        (uint8)( (1 <<  PORT80_CMP1_IN4) | \
        (1 <<  PORT80_GPIO) | \
        (1 <<  PORT80_FTU_FLT7) | \
        (1 <<  PORT80_FTU4_CH0) | \
        (1 <<  PORT80_FCSPI2_SIN) | \
        (1 <<  PORT80_FTU7_CH4) | \
        (1 <<  PORT80_TPU_CH13) | \
        (1 <<  PORT80_FCUART5_RX) ),

        /* PTC17 */
        (uint8)( (1 <<  PORT81_DEBUGMUX_P1) | \
        (1 <<  PORT81_GPIO) | \
        (1 <<  PORT81_FTU_FLT6) | \
        (1 <<  PORT81_FTU4_CH1) | \
        (1 <<  PORT81_FCSPI2_PCS3) | \
        (1 <<  PORT81_FTU6_CH2) | \
        (1 <<  PORT81_TPU_CH14) | \
        (1 <<  PORT81_FCUART4_TX) ),

        /* PTC18 */
        (uint8)( (1 <<  PORT82_CMP1_IN1) | \
        (1 <<  PORT82_GPIO) | \
        (1 <<  PORT82_FTU7_CH6) | \
        (1 <<  PORT82_FCSPI3_PCS0) | \
        (1 <<  PORT82_FCUART5_RX) | \
        (1 <<  PORT82_TPU_CH10) ),

        /* PTC19 */
        (uint8)( (1 <<  PORT83_GPIO) | \
        (1 <<  PORT83_FTU7_CH3) | \
        (1 <<  PORT83_FCSPI2_PCS1) | \
        (1 <<  PORT83_TPU_CH17) | \
        (1 <<  PORT83_FCUART3_RX) ),

        /* PTC20 */
        (uint8)( (1 <<  PORT84_GPIO) | \
        (1 <<  PORT84_FTU7_CH2) | \
        (1 <<  PORT84_FCSPI2_SCK) | \
        (1 <<  PORT84_FCUART3_RTS) | \
        (1 <<  PORT84_TPU_CH12) | \
        (1 <<  PORT84_MSC0_FCLP) ),

        /* PTC21 */
        (uint8)( (1 <<  PORT85_GPIO) | \
        (1 <<  PORT85_FTU7_CH1) | \
        (1 <<  PORT85_FCSPI2_SIN) | \
        (1 <<  PORT85_FCUART3_CTS) | \
        (1 <<  PORT85_TPU_CH13) | \
        (1 <<  PORT85_MSC0_SOP) ),

        /* PTC22 */
        (uint8)( (1 <<  PORT86_GPIO) | \
        (1 <<  PORT86_FTU6_CH4) | \
        (1 <<  PORT86_FCSPI0_SCK) | \
        (1 <<  PORT86_FCUART5_RX) | \
        (1 <<  PORT86_FTU7_CH6) | \
        (1 <<  PORT86_TPU_CH18) | \
        (1 <<  PORT86_MSC0_EN2) ),

        /* PTC23 */
        (uint8)( (1 <<  PORT87_GPIO) | \
        (1 <<  PORT87_FTU7_CH0) | \
        (1 <<  PORT87_FCUART6_TX) | \
        (1 <<  PORT87_FCSPI2_SOUT) | \
        (1 <<  PORT87_TPU_CH14) | \
        (1 <<  PORT87_MSC0_EN3) ),

        /* PTC24 */
        (uint8)( (1 <<  PORT88_GPIO) | \
        (1 <<  PORT88_FTU4_CH3) | \
        (1 <<  PORT88_FCUART6_RX) | \
        (1 <<  PORT88_FCSPI2_PCS0) | \
        (1 <<  PORT88_TPU_CH15) | \
        (1 <<  PORT88_MSC0_SDI2) ),

        /* PTC25 */
        (uint8)( (1 <<  PORT89_ADC1_SE20) | \
        (1 <<  PORT89_GPIO) | \
        (1 <<  PORT89_FTU4_CH1) | \
        (1 <<  PORT89_FCUART5_RTS) | \
        (1 <<  PORT89_FCUART6_TX) | \
        (1 <<  PORT89_FTU0_CH6) | \
        (1 <<  PORT89_SENT0_RXD0) | \
        (1 <<  PORT89_FCSPI4_SCK) ),

        /* PTC26 */
        (uint8)( (1 <<  PORT90_ADC1_SE21) | \
        (1 <<  PORT90_GPIO) | \
        (1 <<  PORT90_FTU4_CH0) | \
        (1 <<  PORT90_FCUART5_CTS) | \
        (1 <<  PORT90_FCUART6_RX) | \
        (1 <<  PORT90_FTU1_CH4) | \
        (1 <<  PORT90_SENT0_RXD1) | \
        (1 <<  PORT90_FCSPI4_PCS0) ),

        /* PTC27 */
        (uint8)( (1 <<  PORT91_GPIO) | \
        (1 <<  PORT91_FTU4_CH4) | \
        (1 <<  PORT91_FTU3_CH3) | \
        (1 <<  PORT91_FCSPI4_SOUT) | \
        (1 <<  PORT91_TPU_CH19) | \
        (1 <<  PORT91_MSC0_EN0) ),

        /* PTC28 */
        (uint8)( (1 <<  PORT92_GPIO) | \
        (1 <<  PORT92_FTU4_CH7) | \
        (1 <<  PORT92_FLEXCAN3_TX) | \
        (1 <<  PORT92_FTU3_CH2) | \
        (1 <<  PORT92_TPU_CH20) | \
        (1 <<  PORT92_MSC0_SDI0) ),

        /* PTC29 */
        (uint8)( (1 <<  PORT93_GPIO) | \
        (1 <<  PORT93_FTU5_CH2) | \
        (1 <<  PORT93_FLEXCAN3_RX) | \
        (1 <<  PORT93_FCSPI4_SIN) | \
        (1 <<  PORT93_TPU_CH21) ),

        /* PTC30 */
        (uint8)( (1 <<  PORT94_GPIO) | \
        (1 <<  PORT94_FTU5_CH4) | \
        (1 <<  PORT94_FTU3_CH0) | \
        (1 <<  PORT94_FCSPI4_PCS0) | \
        (1 <<  PORT94_TPU_CH22) ),

        /* PTC31 */
        (uint8)( (1 <<  PORT95_GPIO) | \
        (1 <<  PORT95_FTU5_CH6) | \
        (1 <<  PORT95_FTU3_CH4) | \
        (1 <<  PORT95_FCIIC1_SDA) | \
        (1 <<  PORT95_FLEXCAN1_RX) | \
        (1 <<  PORT95_TPU_CH23) ),

        /* PTD0 */
        (uint8)( (1 <<  PORT96_ADC1_SE1_ADC1_DIFF_P1) | \
        (1 <<  PORT96_GPIO) | \
        (1 <<  PORT96_FTU0_CH2) | \
        (1 <<  PORT96_FTU2_CH0) | \
        (1 <<  PORT96_FCSPI1_SCK) | \
        (1 <<  PORT96_TPU_CH28) | \
        (1 <<  PORT96_TRACE_D0) | \
        (1 <<  PORT96_TRGSEL_OUT1) ),

        /* PTD1 */
        (uint8)( (1 <<  PORT97_ADC1_SE5_ADC1_DIFF_N1) | \
        (1 <<  PORT97_GPIO) | \
        (1 <<  PORT97_FTU0_CH3) | \
        (1 <<  PORT97_FTU2_CH1) | \
        (1 <<  PORT97_FCSPI1_SIN) | \
        (1 <<  PORT97_TPU_CH29) | \
        (1 <<  PORT97_TRGSEL_OUT2) ),

        /* PTD2 */
        (uint8)( (1 <<  PORT98_GPIO) | \
        (1 <<  PORT98_FTU3_CH4) | \
        (1 <<  PORT98_FTU6_CH5) | \
        (1 <<  PORT98_FCUART6_RX) | \
        (1 <<  PORT98_FCSPI5_PCS2) | \
        (1 <<  PORT98_FTU1_CH1) | \
        (1 <<  PORT98_ISP_EN_B) ),

        /* PTD3 */
        (uint8)( (1 <<  PORT99_GPIO) | \
        (1 <<  PORT99_FTU3_CH5) | \
        (1 <<  PORT99_FCSPI1_PCS0) | \
        (1 <<  PORT99_FCSPI5_PCS0) | \
        (1 <<  PORT99_FTU1_CH2) | \
        (1 <<  PORT99_TPU_CH3) ),

        /* PTD4 */
        (uint8)( (1 <<  PORT100_ADC1_SE23) | \
        (1 <<  PORT100_GPIO) | \
        (1 <<  PORT100_FTU_FLT16) | \
        (1 <<  PORT100_FTU6_CH4) | \
        (1 <<  PORT100_FCUART6_TX) | \
        (1 <<  PORT100_FCSPI5_SIN) | \
        (1 <<  PORT100_FTU1_CH3) | \
        (1 <<  PORT100_TPU_CH4) ),

        /* PTD5 */
        (uint8)( (1 <<  PORT101_GPIO) | \
        (1 <<  PORT101_FTU2_CH3) | \
        (1 <<  PORT101_FCUART4_TX) | \
        (1 <<  PORT101_FTU_FLT5) | \
        (1 <<  PORT101_FTU7_CH5) | \
        (1 <<  PORT101_TPU_CH20) | \
        (1 <<  PORT101_FCSPI3_SIN) ),

        /* PTD6 */
        (uint8)( (1 <<  PORT102_GPIO) | \
        (1 <<  PORT102_FCUART2_RX) | \
        (1 <<  PORT102_FLEXCAN3_RX) | \
        (1 <<  PORT102_FTU_FLT4) | \
        (1 <<  PORT102_FTU2_CH4) | \
        (1 <<  PORT102_TPU_CH21) | \
        (1 <<  PORT102_FCSPI3_SCK) ),

        /* PTD7 */
        (uint8)( (1 <<  PORT103_GPIO) | \
        (1 <<  PORT103_FCUART2_TX) | \
        (1 <<  PORT103_FLEXCAN3_TX) | \
        (1 <<  PORT103_FCSPI4_SIN) | \
        (1 <<  PORT103_FTU2_CH5) | \
        (1 <<  PORT103_TRACE_D0) ),

        /* PTD8 */
        (uint8)( (1 <<  PORT104_CMP1_IN3) | \
        (1 <<  PORT104_GPIO) | \
        (1 <<  PORT104_FCIIC1_SDA) | \
        (1 <<  PORT104_FTU4_CH2) | \
        (1 <<  PORT104_FCSPI2_PCS2) | \
        (1 <<  PORT104_FlexCore_TRST) | \
        (1 <<  PORT104_FTU1_CH4) | \
        (1 <<  PORT104_FCUART4_RX) ),

        /* PTD9 */
        (uint8)( (1 <<  PORT105_CMP1_IN2) | \
        (1 <<  PORT105_GPIO) | \
        (1 <<  PORT105_FCIIC1_SCL) | \
        (1 <<  PORT105_FTU4_CH3) | \
        (1 <<  PORT105_FCSPI2_PCS1) | \
        (1 <<  PORT105_FlexCore_TDO) | \
        (1 <<  PORT105_FTU1_CH5) | \
        (1 <<  PORT105_FCUART3_RX) ),

        /* PTD10 */
        (uint8)( (1 <<  PORT106_GPIO) | \
        (1 <<  PORT106_FTU2_CH0) | \
        (1 <<  PORT106_FTU2_QD_PHB) | \
        (1 <<  PORT106_SCG_CLKOUT) | \
        (1 <<  PORT106_FlexCore_TMS) | \
        (1 <<  PORT106_TRACE_D3) | \
        (1 <<  PORT106_FCSPI3_PCS3) ),

        /* PTD11 */
        (uint8)( (1 <<  PORT107_GPIO) | \
        (1 <<  PORT107_FTU2_CH1) | \
        (1 <<  PORT107_FTU2_QD_PHA) | \
        (1 <<  PORT107_FCSPI4_PCS1) | \
        (1 <<  PORT107_FCUART2_CTS) | \
        (1 <<  PORT107_TRACE_D2) | \
        (1 <<  PORT107_FCSPI3_PCS0) ),

        /* PTD12 */
        (uint8)( (1 <<  PORT108_GPIO) | \
        (1 <<  PORT108_FTU2_CH2) | \
        (1 <<  PORT108_FCUART4_RX) | \
        (1 <<  PORT108_FTU6_CH7) | \
        (1 <<  PORT108_FCUART2_RTS) | \
        (1 <<  PORT108_TRACE_D1) | \
        (1 <<  PORT108_FCSPI3_SOUT) ),

        /* PTD13 */
        (uint8)( (1 <<  PORT109_GPIO) | \
        (1 <<  PORT109_FTU6_CH3) | \
        (1 <<  PORT109_FCUART1_TX) | \
        (1 <<  PORT109_TPU_CH11) | \
        (1 <<  PORT109_FCUART7_CTS) | \
        (1 <<  PORT109_MSC0_SOP) ),

        (uint8)0x00,

        /* PTD15 */
        (uint8)( (1 <<  PORT111_ADC0_SE11_CMP0_IN1) | \
        (1 <<  PORT111_GPIO) | \
        (1 <<  PORT111_FTU0_CH0) | \
        (1 <<  PORT111_FCUART2_RTS) | \
        (1 <<  PORT111_TPU_CH18) | \
        (1 <<  PORT111_TRACE_D3) | \
        (1 <<  PORT111_FCSPI0_SCK) ),

        /* PTD16 */
        (uint8)( (1 <<  PORT112_ADC0_SE10_CMP0_IN0) | \
        (1 <<  PORT112_GPIO) | \
        (1 <<  PORT112_FTU0_CH1) | \
        (1 <<  PORT112_TPU_CH19) | \
        (1 <<  PORT112_TRACE_D2) | \
        (1 <<  PORT112_FCSPI0_SIN) ),

        /* PTD17 */
        (uint8)( (1 <<  PORT113_ADC0_SE8) | \
        (1 <<  PORT113_GPIO) | \
        (1 <<  PORT113_FTU6_CH1) | \
        (1 <<  PORT113_FCUART7_RX) | \
        (1 <<  PORT113_FTU_FLT3) | \
        (1 <<  PORT113_FCSPI4_PCS0) | \
        (1 <<  PORT113_TPU_CH5) ),

        /* PTD18 */
        (uint8)( (1 <<  PORT114_GPIO) | \
        (1 <<  PORT114_FTU5_CH7) | \
        (1 <<  PORT114_FTU3_CH5) | \
        (1 <<  PORT114_FCSPI4_SCK) | \
        (1 <<  PORT114_TPU_CH24) ),

        /* PTD19 */
        (uint8)( (1 <<  PORT115_GPIO) | \
        (1 <<  PORT115_FTU6_CH0) | \
        (1 <<  PORT115_FCSPI1_PCS2) | \
        (1 <<  PORT115_FCIIC1_SCL) | \
        (1 <<  PORT115_FLEXCAN1_TX) | \
        (1 <<  PORT115_SENT0_RXD2) ),

        /* PTD20 */
        (uint8)( (1 <<  PORT116_GPIO) | \
        (1 <<  PORT116_FTU6_CH2) | \
        (1 <<  PORT116_FCUART5_RX) | \
        (1 <<  PORT116_TPU_CH16) | \
        (1 <<  PORT116_SENT0_RXD2) | \
        (1 <<  PORT116_FCSPI4_SIN) ),

        /* PTD21 */
        (uint8)( (1 <<  PORT117_ADC1_SE22) | \
        (1 <<  PORT117_GPIO) | \
        (1 <<  PORT117_FTU6_CH3) | \
        (1 <<  PORT117_FCUART5_TX) | \
        (1 <<  PORT117_TPU_CH17) | \
        (1 <<  PORT117_SENT0_RXD3) | \
        (1 <<  PORT117_FCSPI4_SOUT) ),

        /* PTD22 */
        (uint8)( (1 <<  PORT118_ADC1_SE19) | \
        (1 <<  PORT118_GPIO) | \
        (1 <<  PORT118_FTU6_CH1) | \
        (1 <<  PORT118_FTU0_CH1) | \
        (1 <<  PORT118_TPU_TCRCLK) | \
        (1 <<  PORT118_FCSPI5_PCS3) | \
        (1 <<  PORT118_FLEXCAN1_RX) ),

        /* PTD23 */
        (uint8)( (1 <<  PORT119_GPIO) | \
        (1 <<  PORT119_FTU6_CH5) | \
        (1 <<  PORT119_FLEXCAN3_TX) | \
        (1 <<  PORT119_TPU_CH27) | \
        (1 <<  PORT119_FTU1_CH0) ),

        /* PTD24 */
        (uint8)( (1 <<  PORT120_GPIO) | \
        (1 <<  PORT120_FTU3_CH3) | \
        (1 <<  PORT120_TPU_CH28) | \
        (1 <<  PORT120_FCUART6_RTS) | \
        (1 <<  PORT120_FCSPI5_PCS1) | \
        (1 <<  PORT120_FLEXCAN1_TX) ),

        /* PTD25 */
        (uint8)( (1 <<  PORT121_ADC1_SE24) | \
        (1 <<  PORT121_GPIO) | \
        (1 <<  PORT121_FTU6_CH6) | \
        (1 <<  PORT121_FTU0_CH0) | \
        (1 <<  PORT121_FCUART4_RTS) | \
        (1 <<  PORT121_TPU_CH18) | \
        (1 <<  PORT121_FCSPI5_SCK) ),

        /* PTD26 */
        (uint8)( (1 <<  PORT122_ADC1_SE26) | \
        (1 <<  PORT122_GPIO) | \
        (1 <<  PORT122_FTU6_CH7) | \
        (1 <<  PORT122_FTU3_CH7) | \
        (1 <<  PORT122_FCUART4_CTS) | \
        (1 <<  PORT122_SENT0_RXD3) | \
        (1 <<  PORT122_TPU_CH19) | \
        (1 <<  PORT122_FCSPI5_SIN) ),

        /* PTD27 */
        (uint8)( (1 <<  PORT123_ADC1_SE27) | \
        (1 <<  PORT123_GPIO) | \
        (1 <<  PORT123_FTU7_CH0) | \
        (1 <<  PORT123_FCUART6_TX) | \
        (1 <<  PORT123_FLEXCAN3_RX) | \
        (1 <<  PORT123_TPU_CH30) ),

        /* PTD28 */
        (uint8)( (1 <<  PORT124_GPIO) | \
        (1 <<  PORT124_FTU7_CH1) | \
        (1 <<  PORT124_FCUART6_RX) | \
        (1 <<  PORT124_TPU_CH31) | \
        (1 <<  PORT124_FCSPI5_PCS1) ),

        /* PTD29 */
        (uint8)( (1 <<  PORT125_GPIO) | \
        (1 <<  PORT125_FTU7_CH2) | \
        (1 <<  PORT125_FCUART7_RX) | \
        (1 <<  PORT125_TPU_CH14) ),

        /* PTD30 */
        (uint8)( (1 <<  PORT126_ADC1_SE31) | \
        (1 <<  PORT126_GPIO) | \
        (1 <<  PORT126_FTU7_CH3) | \
        (1 <<  PORT126_FCUART7_TX) | \
        (1 <<  PORT126_TPU_CH15) ),

        /* PTD31 */
        (uint8)( (1 <<  PORT127_ADC0_SE31) | \
        (1 <<  PORT127_GPIO) | \
        (1 <<  PORT127_FTU7_CH4) | \
        (1 <<  PORT127_AONTIMER0_CLK0) | \
        (1 <<  PORT127_SENT0_RXD2) | \
        (1 <<  PORT127_FCUART7_RX) | \
        (1 <<  PORT127_TPU_CH20) | \
        (1 <<  PORT127_FCSPI5_PCS2) ),

        /* PTE0 */
        (uint8)( (1 <<  PORT128_ADC0_SE16) | \
        (1 <<  PORT128_GPIO) | \
        (1 <<  PORT128_FCUART0_CTS) | \
        (1 <<  PORT128_FTU_TCK1) | \
        (1 <<  PORT128_FCIIC1_SDA) | \
        (1 <<  PORT128_FCSPI0_SCK) | \
        (1 <<  PORT128_FTU_FLT19) | \
        (1 <<  PORT128_TPU_CH11) ),

        /* PTE1 */
        (uint8)( (1 <<  PORT129_ADC0_SE17) | \
        (1 <<  PORT129_GPIO) | \
        (1 <<  PORT129_FCUART0_RTS) | \
        (1 <<  PORT129_FCIIC1_SCL) | \
        (1 <<  PORT129_FCSPI0_SIN) | \
        (1 <<  PORT129_FTU_FLT18) | \
        (1 <<  PORT129_TPU_CH10) ),

        /* PTE2 */
        (uint8)( (1 <<  PORT130_ADC0_SE24) | \
        (1 <<  PORT130_GPIO) | \
        (1 <<  PORT130_FTU6_CH6) | \
        (1 <<  PORT130_AONTIMER0_CLK2) | \
        (1 <<  PORT130_FTU3_CH6) | \
        (1 <<  PORT130_SENT0_RXD3) | \
        (1 <<  PORT130_FCUART1_CTS) | \
        (1 <<  PORT130_FTU1_CH7) ),

        /* PTE3 */
        (uint8)( (1 <<  PORT131_OSC32K_EXTAL) | \
        (1 <<  PORT131_GPIO) | \
        (1 <<  PORT131_FTU2_CH6) | \
        (1 <<  PORT131_FCUART2_RX) | \
        (1 <<  PORT131_FTU_FLT1) | \
        (1 <<  PORT131_FTU2_QD_PHB) | \
        (1 <<  PORT131_FTU_TCK0) ),

        /* PTE4 */
        (uint8)( (1 <<  PORT132_ADC0_SE4_ADC0_DIFF_N0) | \
        (1 <<  PORT132_GPIO) | \
        (1 <<  PORT132_FTU6_CH0) | \
        (1 <<  PORT132_FTU2_QD_PHB) | \
        (1 <<  PORT132_FCSPI1_PCS0) | \
        (1 <<  PORT132_FTU2_CH2) | \
        (1 <<  PORT132_TRACE_D1) | \
        (1 <<  PORT132_TPU_CH22) ),

        /* PTE5 */
        (uint8)( (1 <<  PORT133_ADC0_SE1_ADC0_DIFF_P1) | \
        (1 <<  PORT133_GPIO) | \
        (1 <<  PORT133_FTU_TCK2) | \
        (1 <<  PORT133_FTU2_QD_PHA) | \
        (1 <<  PORT133_FCSPI1_SOUT) | \
        (1 <<  PORT133_FTU2_CH3) | \
        (1 <<  PORT133_TPU_CH23) ),

        /* PTE6 */
        (uint8)( (1 <<  PORT134_ADC0_SE25) | \
        (1 <<  PORT134_GPIO) | \
        (1 <<  PORT134_FTU7_CH7) | \
        (1 <<  PORT134_FTU6_CH3) | \
        (1 <<  PORT134_FTU3_CH7) | \
        (1 <<  PORT134_SENT0_RXD2) | \
        (1 <<  PORT134_FCUART1_RTS) | \
        (1 <<  PORT134_TPU_CH6) ),

        /* PTE7 */
        (uint8)( (1 <<  PORT135_ADC1_SE8) | \
        (1 <<  PORT135_GPIO) | \
        (1 <<  PORT135_FTU0_CH7) | \
        (1 <<  PORT135_FTU_FLT14) | \
        (1 <<  PORT135_FTU5_CH6) | \
        (1 <<  PORT135_TRGSEL_OUT3) | \
        (1 <<  PORT135_SENT0_RXD3) | \
        (1 <<  PORT135_MSC0_SDI3) ),

        /* PTE8 */
        (uint8)( (1 <<  PORT136_GPIO) | \
        (1 <<  PORT136_FTU0_CH6) | \
        (1 <<  PORT136_FCSPI4_SCK) | \
        (1 <<  PORT136_FTU7_CH7) | \
        (1 <<  PORT136_TRACE_D4) | \
        (1 <<  PORT136_FCSPI0_PCS3) ),

        /* PTE9 */
        (uint8)( (1 <<  PORT137_ADC0_SE12_CMP0_IN2) | \
        (1 <<  PORT137_GPIO) | \
        (1 <<  PORT137_FTU0_CH7) | \
        (1 <<  PORT137_FCUART2_CTS) | \
        (1 <<  PORT137_TPU_CH17) | \
        (1 <<  PORT137_TRACE_CLKOUT) | \
        (1 <<  PORT137_FCSPI0_PCS0) ),

        /* PTE10 */
        (uint8)( (1 <<  PORT138_ADC1_SE0_ADC1_DIFF_P0) | \
        (1 <<  PORT138_GPIO) | \
        (1 <<  PORT138_FTU2_CH4) | \
        (1 <<  PORT138_FCSPI2_PCS1) | \
        (1 <<  PORT138_TPU_CH26) | \
        (1 <<  PORT138_FCUART2_TX) | \
        (1 <<  PORT138_SCG_CLKOUT) | \
        (1 <<  PORT138_TRGSEL_OUT4) ),

        /* PTE11 */
        (uint8)( (1 <<  PORT139_ADC1_SE4_ADC1_DIFF_N0) | \
        (1 <<  PORT139_GPIO) | \
        (1 <<  PORT139_FTU2_CH5) | \
        (1 <<  PORT139_FCSPI2_PCS0) | \
        (1 <<  PORT139_TPU_CH27) | \
        (1 <<  PORT139_TRGSEL_OUT5) ),

        /* PTE12 */
        (uint8)( (1 <<  PORT140_ADC0_SE3_ADC0_DIFF_P3) | \
        (1 <<  PORT140_GPIO) | \
        (1 <<  PORT140_FTU6_CH0) | \
        (1 <<  PORT140_FCUART7_TX) | \
        (1 <<  PORT140_FTU_FLT2) | \
        (1 <<  PORT140_FCSPI4_SOUT) | \
        (1 <<  PORT140_TPU_CH3) ),

        /* PTE13 */
        (uint8)( (1 <<  PORT141_ADC0_SE5_ADC0_DIFF_N1) | \
        (1 <<  PORT141_GPIO) | \
        (1 <<  PORT141_FTU4_CH5) | \
        (1 <<  PORT141_FCSPI2_SOUT) | \
        (1 <<  PORT141_TPU_CH24) | \
        (1 <<  PORT141_FTU3_CH3) ),

        /* PTE14 */
        (uint8)( (1 <<  PORT142_OSC32K_XTAL) | \
        (1 <<  PORT142_GPIO) | \
        (1 <<  PORT142_FTU2_CH7) | \
        (1 <<  PORT142_FTU2_QD_PHA) | \
        (1 <<  PORT142_FTU_FLT0) | \
        (1 <<  PORT142_FLEXCAN0_RX) | \
        (1 <<  PORT142_TPU_TCRCLK) ),

        /* PTE15 */
        (uint8)( (1 <<  PORT143_ADC1_SE2_ADC1_DIFF_P2) | \
        (1 <<  PORT143_GPIO) | \
        (1 <<  PORT143_FTU2_CH6) | \
        (1 <<  PORT143_FCSPI2_SCK) | \
        (1 <<  PORT143_TPU_CH30) | \
        (1 <<  PORT143_FCUART1_CTS) | \
        (1 <<  PORT143_TRGSEL_OUT6) ),

        /* PTE16 */
        (uint8)( (1 <<  PORT144_ADC1_SE6_ADC1_DIFF_N2) | \
        (1 <<  PORT144_GPIO) | \
        (1 <<  PORT144_FTU2_CH7) | \
        (1 <<  PORT144_FCSPI2_SIN) | \
        (1 <<  PORT144_TPU_CH31) | \
        (1 <<  PORT144_FCUART1_RTS) | \
        (1 <<  PORT144_TRGSEL_OUT7) ),

        /* PTE17 */
        (uint8)( (1 <<  PORT145_GPIO) | \
        (1 <<  PORT145_FTU7_CH5) | \
        (1 <<  PORT145_SENT0_RXD0) | \
        (1 <<  PORT145_TPU_CH21) | \
        (1 <<  PORT145_FCSPI5_SOUT) ),

        /* PTE18 */
        (uint8)( (1 <<  PORT146_ADC0_SE27) | \
        (1 <<  PORT146_GPIO) | \
        (1 <<  PORT146_FTU7_CH6) | \
        (1 <<  PORT146_FTU6_CH7) | \
        (1 <<  PORT146_SENT0_RXD1) | \
        (1 <<  PORT146_FCUART7_TX) | \
        (1 <<  PORT146_TPU_CH22) | \
        (1 <<  PORT146_FCSPI5_PCS3) ),

        /* PTE19 */
        (uint8)( (1 <<  PORT147_ADC0_SE23) | \
        (1 <<  PORT147_GPIO) | \
        (1 <<  PORT147_SCG_CLKOUT) | \
        (1 <<  PORT147_FCIIC0_SCL) | \
        (1 <<  PORT147_RTC_CLKOUT) | \
        (1 <<  PORT147_FLEXCAN2_RX) | \
        (1 <<  PORT147_TPU_CH31) ),

        /* PTE20 */
        (uint8)( (1 <<  PORT148_ADC0_SE22) | \
        (1 <<  PORT148_GPIO) | \
        (1 <<  PORT148_FTU4_CH0) | \
        (1 <<  PORT148_FCIIC0_SDA) | \
        (1 <<  PORT148_FTU1_CH3) | \
        (1 <<  PORT148_FCSPI0_PCS0) ),

        /* PTE21 */
        (uint8)( (1 <<  PORT149_GPIO) | \
        (1 <<  PORT149_FTU4_CH1) | \
        (1 <<  PORT149_AONTIMER0_CLK2) | \
        (1 <<  PORT149_FLEXCAN0_TX) | \
        (1 <<  PORT149_FCUART0_RTS) ),

        /* PTE22 */
        (uint8)( (1 <<  PORT150_GPIO) | \
        (1 <<  PORT150_FTU4_CH2) | \
        (1 <<  PORT150_LP_WAKEUP0) | \
        (1 <<  PORT150_FLEXCAN0_RX) | \
        (1 <<  PORT150_FCUART0_CTS) ),

        /* PTE23 */
        (uint8)( (1 <<  PORT151_ADC0_SE19) | \
        (1 <<  PORT151_GPIO) | \
        (1 <<  PORT151_FTU4_CH3) | \
        (1 <<  PORT151_FCUART0_TX) | \
        (1 <<  PORT151_TPU_CH26) | \
        (1 <<  PORT151_FCSPI0_PCS3) | \
        (1 <<  PORT151_LP_WAKEUP1) ),

        /* PTE24 */
        (uint8)( (1 <<  PORT152_ADC0_SE18) | \
        (1 <<  PORT152_GPIO) | \
        (1 <<  PORT152_FTU4_CH4) | \
        (1 <<  PORT152_FLEXCAN2_TX) | \
        (1 <<  PORT152_TPU_CH27) | \
        (1 <<  PORT152_FCSPI0_PCS2) ),

        /* PTE25 */
        (uint8)( (1 <<  PORT153_DEBUGMUX_P0) | \
        (1 <<  PORT153_GPIO) | \
        (1 <<  PORT153_FTU4_CH5) | \
        (1 <<  PORT153_FCUART0_RX) | \
        (1 <<  PORT153_TPU_CH28) | \
        (1 <<  PORT153_FCSPI0_PCS1) ),

        /* PTE26 */
        (uint8)( (1 <<  PORT154_GPIO) | \
        (1 <<  PORT154_FTU4_CH6) | \
        (1 <<  PORT154_LP_WAKEUP3) | \
        (1 <<  PORT154_FTU1_CH2) | \
        (1 <<  PORT154_FCUART1_TX) | \
        (1 <<  PORT154_TPU_CH23) ),

        /* PTE27 */
        (uint8)( (1 <<  PORT155_GPIO) | \
        (1 <<  PORT155_FTU4_CH7) | \
        (1 <<  PORT155_FLEXCAN2_RX) | \
        (1 <<  PORT155_FTU1_CH0) | \
        (1 <<  PORT155_FCUART1_RX) | \
        (1 <<  PORT155_TPU_CH24) ),

        (uint8)0x00,

        /* PTE29 */
        (uint8)( (1 <<  PORT157_GPIO) | \
        (1 <<  PORT157_FTU2_CH0) | \
        (1 <<  PORT157_RTC_CLKOUT) | \
        (1 <<  PORT157_FTU1_CH1) | \
        (1 <<  PORT157_FLEXCAN2_TX) | \
        (1 <<  PORT157_FTU2_QD_PHA) | \
        (1 <<  PORT157_TPU_CH25) )

};
/* PRQA S 4542,4543 -- */
#endif

#define PORT_STOP_SEC_CONST_16
#include "Port_MemMap.h"
/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

#ifdef __cplusplus
}
#endif
/** @} */

/* End of File */
