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
        (uint8)( (1 <<  PORT0_GPIO) | \
        (1 <<  PORT0_FTU4_CH6) | \
        (1 <<  PORT0_FLEXCAN5_RX) | \
        (1 <<  PORT0_SENT1_RXD2) | \
        (1 <<  PORT0_FTU2_QD_PHA) | \
        (1 <<  PORT0_FCUART0_CTS) | \
        (1 <<  PORT0_TRGSEL_OUT3) ),

        /* PTA1 */
        (uint8)( (1 <<  PORT1_GPIO) | \
        (1 <<  PORT1_FTU4_CH4) | \
        (1 <<  PORT1_SENT1_RXD0) | \
        (1 <<  PORT1_FTU1_QD_PHA) | \
        (1 <<  PORT1_FCUART0_RTS) | \
        (1 <<  PORT1_TRGSEL_OUT0) ),

        /* PTA2 */
        (uint8)( (1 <<  PORT2_GPIO) | \
        (1 <<  PORT2_FTU2_CH3) | \
        (1 <<  PORT2_FCIIC0_SDA) | \
        (1 <<  PORT2_eFTU0_OUT_S28) | \
        (1 <<  PORT2_SENT1_RXD1) | \
        (1 <<  PORT2_FCUART0_RX) | \
        (1 <<  PORT2_FLEXCORE_TDO) ),

        /* PTA3 */
        (uint8)( (1 <<  PORT3_GPIO) | \
        (1 <<  PORT3_FTU2_CH2) | \
        (1 <<  PORT3_FCIIC0_SCL) | \
        (1 <<  PORT3_eFTU0_OUT_S27) | \
        (1 <<  PORT3_SENT1_RXD0) | \
        (1 <<  PORT3_FCUART0_TX) | \
        (1 <<  PORT3_FLEXCORE_TCLK) ),

        /* PTA4 */
        (uint8)( (1 <<  PORT4_GPIO) | \
        (1 <<  PORT4_CMP0_OUT) | \
        (1 <<  PORT4_JTAG_TMS_SWD_DIO) ),

        (uint8)0x00,

        /* PTA6 */
        (uint8)( (1 <<  PORT6_ADC2_SE13) | \
        (1 <<  PORT6_GPIO) | \
        (1 <<  PORT6_FTU5_CH0) | \
        (1 <<  PORT6_FTU_FLT13) | \
        (1 <<  PORT6_FCUART1_CTS) | \
        (1 <<  PORT6_TRGSEL_OUT4) | \
        (1 <<  PORT6_SDADC0_CH0) | \
        (1 <<  PORT6_FCSPI5_SIN) ),

        /* PTA7 */
        (uint8)( (1 <<  PORT7_ADC2_SE11) | \
        (1 <<  PORT7_GPIO) | \
        (1 <<  PORT7_FTU7_CH6) | \
        (1 <<  PORT7_FTU_FLT12) | \
        (1 <<  PORT7_FCUART1_RTS) | \
        (1 <<  PORT7_FCSPI4_SIN) | \
        (1 <<  PORT7_FCUART4_TX) | \
        (1 <<  PORT7_eFTU0_OUT_S29) ),

        /* PTA8 */
        (uint8)( (1 <<  PORT8_ADC1_SE14) | \
        (1 <<  PORT8_GPIO) | \
        (1 <<  PORT8_FCUART2_RX) | \
        (1 <<  PORT8_CMP0_OUT) | \
        (1 <<  PORT8_eFTU_GTOM13) ),

        /* PTA9 */
        (uint8)( (1 <<  PORT9_ADC1_SE15) | \
        (1 <<  PORT9_GPIO) | \
        (1 <<  PORT9_FCUART2_TX) | \
        (1 <<  PORT9_RTC_CLKOUT) | \
        (1 <<  PORT9_eFTU_GTOM12) ),

        /* PTA10 */
        (uint8)( (1 <<  PORT10_GPIO) | \
        (1 <<  PORT10_FTU3_CH1) | \
        (1 <<  PORT10_JTAG_TDO) ),

        /* PTA11 */
        (uint8)( (1 <<  PORT11_GPIO) | \
        (1 <<  PORT11_FTU3_CH0) | \
        (1 <<  PORT11_FLEXCAN1_TX) | \
        (1 <<  PORT11_FCSPI0_PCS3) | \
        (1 <<  PORT11_NMI_b) ),

        /* PTA12 */
        (uint8)( (1 <<  PORT12_ADC1_SE18) | \
        (1 <<  PORT12_GPIO) | \
        (1 <<  PORT12_FTU0_CH7) | \
        (1 <<  PORT12_FLEXCAN1_RX) | \
        (1 <<  PORT12_FCSPI0_SOUT) | \
        (1 <<  PORT12_FTU2_QD_PHB) ),

        /* PTA13 */
        (uint8)( (1 <<  PORT13_GPIO) | \
        (1 <<  PORT13_FTU0_CH3) | \
        (1 <<  PORT13_FCIIC1_SCL) | \
        (1 <<  PORT13_FCUART0_RX) | \
        (1 <<  PORT13_FTU2_QD_PHA) | \
        (1 <<  PORT13_eFTU_GTOM5) ),

        /* PTA14 */
        (uint8)( (1 <<  PORT14_GPIO) | \
        (1 <<  PORT14_FTU_FLT17) | \
        (1 <<  PORT14_AONTIMER0_CLK1) | \
        (1 <<  PORT14_LP_WAKEUP2) | \
        (1 <<  PORT14_FCUART0_TX) | \
        (1 <<  PORT14_FCIIC1_SDA) | \
        (1 <<  PORT14_eFTU_GTOM2) ),

        /* PTA15 */
        (uint8)( (1 <<  PORT15_ADC1_SE28) | \
        (1 <<  PORT15_GPIO) | \
        (1 <<  PORT15_FTU6_CH4) | \
        (1 <<  PORT15_FTU5_QD_PHB) | \
        (1 <<  PORT15_FCUART2_RX) | \
        (1 <<  PORT15_TRGSEL_OUT0) | \
        (1 <<  PORT15_FLEXCAN3_RX) | \
        (1 <<  PORT15_eFTU_GTOM11) ),

        /* PTA16 */
        (uint8)( (1 <<  PORT16_GPIO) | \
        (1 <<  PORT16_FTU6_CH2) | \
        (1 <<  PORT16_FCSMU_PIN0) ),

        /* PTA17 */
        (uint8)( (1 <<  PORT17_ADC2_SE19) | \
        (1 <<  PORT17_GPIO) | \
        (1 <<  PORT17_FTU5_CH5) | \
        (1 <<  PORT17_FTU_FLT15) | \
        (1 <<  PORT17_FCSPI1_PCS2) | \
        (1 <<  PORT17_FLEXCAN4_TX) ),

        /* PTA18 */
        (uint8)( (1 <<  PORT18_ADC1_SE7_ADC1_DIFF_N3) | \
        (1 <<  PORT18_GPIO) | \
        (1 <<  PORT18_FTU3_CH6) | \
        (1 <<  PORT18_FCUART1_TX) | \
        (1 <<  PORT18_FLEXCAN4_TX) ),

        /* PTA19 */
        (uint8)( (1 <<  PORT19_ADC1_SE3_ADC1_DIFF_P3) | \
        (1 <<  PORT19_GPIO) | \
        (1 <<  PORT19_FCUART1_RX) | \
        (1 <<  PORT19_FTU6_CH7) | \
        (1 <<  PORT19_FLEXCAN4_RX) ),

        /* PTA20 */
        (uint8)( (1 <<  PORT20_ADC1_SE6_ADC1_DIFF_N2) | \
        (1 <<  PORT20_GPIO) | \
        (1 <<  PORT20_FTU3_CH7) | \
        (1 <<  PORT20_FCUART3_RTS) | \
        (1 <<  PORT20_FCUART7_RTS) ),

        /* PTA21 */
        (uint8)( (1 <<  PORT21_ADC0_SE2_ADC0_DIFF_P2) | \
        (1 <<  PORT21_GPIO) | \
        (1 <<  PORT21_FCUART6_RX) | \
        (1 <<  PORT21_FCUART3_CTS) | \
        (1 <<  PORT21_FTU2_CH5) | \
        (1 <<  PORT21_SSI0_DIG_28_CH1) | \
        (1 <<  PORT21_FLEXCAN2_TX) ),

        /* PTA22 */
        (uint8)( (1 <<  PORT22_ADC0_SE1_ADC0_DIFF_P1) | \
        (1 <<  PORT22_GPIO) | \
        (1 <<  PORT22_FTU2_CH3) | \
        (1 <<  PORT22_FTU2_QD_PHA) | \
        (1 <<  PORT22_FCUART7_RX) | \
        (1 <<  PORT22_SSI0_DIG_28_CH0) | \
        (1 <<  PORT22_FLEXCAN7_TX) ),

        /* PTA23 */
        (uint8)( (1 <<  PORT23_ADC0_SE14_CMP0_IN6) | \
        (1 <<  PORT23_GPIO) | \
        (1 <<  PORT23_FTU4_CH1) | \
        (1 <<  PORT23_FCUART3_RX) | \
        (1 <<  PORT23_ETM_TRACE_D0) | \
        (1 <<  PORT23_FTU4_QD_PHA) | \
        (1 <<  PORT23_eFTU0_OUT_S5) ),

        /* PTA24 */
        (uint8)( (1 <<  PORT24_ADC0_SE15_CMP0_IN7) | \
        (1 <<  PORT24_GPIO) | \
        (1 <<  PORT24_FTU4_CH0) | \
        (1 <<  PORT24_FCUART3_TX) | \
        (1 <<  PORT24_ETM_TRACE_D1) | \
        (1 <<  PORT24_FTU4_QD_PHB) | \
        (1 <<  PORT24_eFTU0_OUT_S6) ),

        /* PTA25 */
        (uint8)( (1 <<  PORT25_ADC0_SE11) | \
        (1 <<  PORT25_GPIO) | \
        (1 <<  PORT25_FTU4_CH3) | \
        (1 <<  PORT25_SSI0_DIG_14_CH3) | \
        (1 <<  PORT25_FCSPI2_SOUT) ),

        /* PTA26 */
        (uint8)( (1 <<  PORT26_CMP0_IN1) | \
        (1 <<  PORT26_GPIO) | \
        (1 <<  PORT26_FTU2_CH2) | \
        (1 <<  PORT26_SSI0_DIG_28_CH0) | \
        (1 <<  PORT26_FCUART7_RTS) | \
        (1 <<  PORT26_eFTU0_OUT_S0) ),

        /* PTA27 */
        (uint8)( (1 <<  PORT27_ADC0_SE16) | \
        (1 <<  PORT27_GPIO) | \
        (1 <<  PORT27_FTU5_CH7) | \
        (1 <<  PORT27_FCUART0_TX) | \
        (1 <<  PORT27_ETM_TRACE_D2) | \
        (1 <<  PORT27_FCSPI1_PCS0) ),

        /* PTA28 */
        (uint8)( (1 <<  PORT28_ADC0_SE18) | \
        (1 <<  PORT28_GPIO) | \
        (1 <<  PORT28_FTU5_CH5) | \
        (1 <<  PORT28_FCUART0_RX) | \
        (1 <<  PORT28_SSI0_DIG_28_CH3) | \
        (1 <<  PORT28_FCSPI1_SCK) ),

        /* PTA29 */
        (uint8)( (1 <<  PORT29_ADC0_SE19) | \
        (1 <<  PORT29_GPIO) | \
        (1 <<  PORT29_FTU5_CH4) | \
        (1 <<  PORT29_SSI0_DIG_14_CH3) | \
        (1 <<  PORT29_FCSPI1_SIN) ),

        /* PTA30 */
        (uint8)( (1 <<  PORT30_ADC0_SE25) | \
        (1 <<  PORT30_GPIO) | \
        (1 <<  PORT30_FTU5_CH2) | \
        (1 <<  PORT30_FCUART2_RX) | \
        (1 <<  PORT30_ETM_TRACE_D5) | \
        (1 <<  PORT30_FCSPI1_PCS2) | \
        (1 <<  PORT30_FTU5_QD_PHB) ),

        /* PTA31 */
        (uint8)( (1 <<  PORT31_ADC0_SE29) | \
        (1 <<  PORT31_GPIO) | \
        (1 <<  PORT31_FTU0_CH6) | \
        (1 <<  PORT31_FCUART5_TX) | \
        (1 <<  PORT31_FTU_FLT3) | \
        (1 <<  PORT31_FLEXCAN3_TX) | \
        (1 <<  PORT31_eFTU0_OUT_S13) ),

        /* PTB0 */
        (uint8)( (1 <<  PORT32_SDADC0_CH0_N0) | \
        (1 <<  PORT32_GPIO) | \
        (1 <<  PORT32_eFTU0_OUT_S23) | \
        (1 <<  PORT32_FLEXCAN0_RX) | \
        (1 <<  PORT32_FTU3_CH6) | \
        (1 <<  PORT32_FCSPI5_PCS2) ),

        /* PTB1 */
        (uint8)( (1 <<  PORT33_SDADC0_CH0_P0) | \
        (1 <<  PORT33_GPIO) | \
        (1 <<  PORT33_FTU_TCK0) | \
        (1 <<  PORT33_eFTU0_OUT_S22) | \
        (1 <<  PORT33_FLEXCAN0_TX) | \
        (1 <<  PORT33_FTU3_CH5) | \
        (1 <<  PORT33_FCSPI5_PCS1) ),

        (uint8)0x00,

        /* PTB3 */
        (uint8)( (1 <<  PORT35_ADC3_SE20) | \
        (1 <<  PORT35_GPIO) | \
        (1 <<  PORT35_FTU1_QD_PHA) | \
        (1 <<  PORT35_FCSPI2_SCK) | \
        (1 <<  PORT35_eFTU0_OUT_S25) | \
        (1 <<  PORT35_FTU3_CH7) ),

        /* PTB4 */
        (uint8)( (1 <<  PORT36_GPIO) | \
        (1 <<  PORT36_FTU7_CH7) | \
        (1 <<  PORT36_FTU_FLT4) | \
        (1 <<  PORT36_ENET_MDIO) | \
        (1 <<  PORT36_eFTU0_OUT_S2) ),

        /* PTB5 */
        (uint8)( (1 <<  PORT37_GPIO) | \
        (1 <<  PORT37_FTU6_CH2) | \
        (1 <<  PORT37_FCIIC1_SDA) | \
        (1 <<  PORT37_ENET_MDC) | \
        (1 <<  PORT37_eFTU0_OUT_S1) ),

        /* PTB6 */
        (uint8)( (1 <<  PORT38_XTAL) | \
        (1 <<  PORT38_GPIO) ),

        /* PTB7 */
        (uint8)( (1 <<  PORT39_EXTAL) | \
        (1 <<  PORT39_GPIO) ),

        /* PTB8 */
        (uint8)( (1 <<  PORT40_GPIO) | \
        (1 <<  PORT40_FTU4_CH2) | \
        (1 <<  PORT40_FLEXCAN4_TX) | \
        (1 <<  PORT40_FCUART1_CTS) | \
        (1 <<  PORT40_eFTU_GTOM0) ),

        /* PTB9 */
        (uint8)( (1 <<  PORT41_GPIO) | \
        (1 <<  PORT41_FTU2_CH7) | \
        (1 <<  PORT41_TRGSEL_OUT1) | \
        (1 <<  PORT41_FCUART1_TX) | \
        (1 <<  PORT41_eFTU0_OUT_S30) ),

        /* PTB10 */
        (uint8)( (1 <<  PORT42_GPIO) | \
        (1 <<  PORT42_FTU2_CH5) | \
        (1 <<  PORT42_TRGSEL_OUT2) | \
        (1 <<  PORT42_FLEXCAN7_RX) | \
        (1 <<  PORT42_eFTU0_OUT_S22) ),

        /* PTB11 */
        (uint8)( (1 <<  PORT43_V15_BASE_DRIVER) | \
        (1 <<  PORT43_GPIO) | \
        (1 <<  PORT43_FTU6_CH0) ),

        /* PTB12 */
        (uint8)( (1 <<  PORT44_ADC2_SE29) | \
        (1 <<  PORT44_GPIO) | \
        (1 <<  PORT44_SENT0_RXD0) | \
        (1 <<  PORT44_FLEXCAN2_RX) | \
        (1 <<  PORT44_eFTU0_OUT_S4) ),

        /* PTB13 */
        (uint8)( (1 <<  PORT45_ADC2_SE28) | \
        (1 <<  PORT45_GPIO) | \
        (1 <<  PORT45_FTU3_CH2) | \
        (1 <<  PORT45_TCR_CLK) | \
        (1 <<  PORT45_eFTU0_OUT_S3) ),

        /* PTB14 */
        (uint8)( (1 <<  PORT46_ADC2_SE27) | \
        (1 <<  PORT46_GPIO) | \
        (1 <<  PORT46_FTU3_CH1) | \
        (1 <<  PORT46_FCUART4_RX) | \
        (1 <<  PORT46_eFTU0_OUT_S2) ),

        /* PTB15 */
        (uint8)( (1 <<  PORT47_ADC2_SE26) | \
        (1 <<  PORT47_GPIO) | \
        (1 <<  PORT47_FTU3_CH0) | \
        (1 <<  PORT47_FCUART4_TX) | \
        (1 <<  PORT47_eFTU0_OUT_S1) ),

        /* PTB16 */
        (uint8)( (1 <<  PORT48_ADC2_SE25) | \
        (1 <<  PORT48_GPIO) | \
        (1 <<  PORT48_FTU5_CH7) | \
        (1 <<  PORT48_FCUART5_CTS) | \
        (1 <<  PORT48_SDADC0_EXT_SIGN) | \
        (1 <<  PORT48_eFTU0_OUT_S0) ),

        /* PTB17 */
        (uint8)( (1 <<  PORT49_ADC2_SE20) | \
        (1 <<  PORT49_GPIO) | \
        (1 <<  PORT49_FTU5_CH6) | \
        (1 <<  PORT49_FCSPI1_PCS3) | \
        (1 <<  PORT49_FLEXCAN4_RX) | \
        (1 <<  PORT49_SDADC0_CLK0) ),

        /* PTB18 */
        (uint8)( (1 <<  PORT50_ADC0_SE30) | \
        (1 <<  PORT50_GPIO) | \
        (1 <<  PORT50_FTU0_CH5) | \
        (1 <<  PORT50_FCUART5_RX) | \
        (1 <<  PORT50_ETM_TRACE_D14) | \
        (1 <<  PORT50_FLEXCAN3_RX) | \
        (1 <<  PORT50_eFTU0_OUT_S14) ),

        /* PTB19 */
        (uint8)( (1 <<  PORT51_ADC0_SE31) | \
        (1 <<  PORT51_GPIO) | \
        (1 <<  PORT51_FTU0_CH4) | \
        (1 <<  PORT51_ETM_TRACE_D15) | \
        (1 <<  PORT51_eFTU0_OUT_S15) ),

        /* PTB20 */
        (uint8)( (1 <<  PORT52_ADC3_SE31) | \
        (1 <<  PORT52_GPIO) | \
        (1 <<  PORT52_FTU1_CH0) | \
        (1 <<  PORT52_FCUART1_TX) | \
        (1 <<  PORT52_FCSPI5_SCK) | \
        (1 <<  PORT52_ENET_PPS0) | \
        (1 <<  PORT52_SSI0_DIG_28_CH0) | \
        (1 <<  PORT52_SCG_CLKOUT) ),

        /* PTB21 */
        (uint8)( (1 <<  PORT53_ADC3_SE30) | \
        (1 <<  PORT53_GPIO) | \
        (1 <<  PORT53_FTU1_CH1) | \
        (1 <<  PORT53_FCUART1_RX) | \
        (1 <<  PORT53_FCSPI5_SIN) | \
        (1 <<  PORT53_ENET_PPS1) | \
        (1 <<  PORT53_SSI0_DIG_14_CH0) | \
        (1 <<  PORT53_RTC_CLKOUT) ),

        /* PTB22 */
        (uint8)( (1 <<  PORT54_GPIO) | \
        (1 <<  PORT54_eFTU0_IN3) | \
        (1 <<  PORT54_FCUART1_TX) | \
        (1 <<  PORT54_ETM_TRACE_D5) | \
        (1 <<  PORT54_eFTU0_OUT_S11) | \
        (1 <<  PORT54_LDI0_LE) | \
        (1 <<  PORT54_FCSPI3_PCS2) ),

        /* PTB23 */
        (uint8)( (1 <<  PORT55_GPIO) | \
        (1 <<  PORT55_FTU_FLT9) | \
        (1 <<  PORT55_FCSPI2_PCS0) | \
        (1 <<  PORT55_FTU7_CH3) | \
        (1 <<  PORT55_ENET_RXD3) | \
        (1 <<  PORT55_TRGSEL_OUT3) | \
        (1 <<  PORT55_eFTU0_OUT_S14) ),

        /* PTB24 */
        (uint8)( (1 <<  PORT56_ADC3_SE29) | \
        (1 <<  PORT56_GPIO) | \
        (1 <<  PORT56_FTU1_CH2) | \
        (1 <<  PORT56_FCSPI5_SOUT) | \
        (1 <<  PORT56_eFTU0_OUT_S24) ),

        /* PTB25 */
        (uint8)( (1 <<  PORT57_ADC3_SE19) | \
        (1 <<  PORT57_GPIO) | \
        (1 <<  PORT57_SDADC0_BREAK1) | \
        (1 <<  PORT57_FCSPI2_PCS0) | \
        (1 <<  PORT57_eFTU0_OUT_S24) | \
        (1 <<  PORT57_FTU3_CH6) ),

        /* PTB26 */
        (uint8)( (1 <<  PORT58_GPIO) | \
        (1 <<  PORT58_FTU6_CH0) | \
        (1 <<  PORT58_FTU_FLT5) | \
        (1 <<  PORT58_LDI0_DOE) | \
        (1 <<  PORT58_ENET_COL) | \
        (1 <<  PORT58_eFTU0_OUT_S3) | \
        (1 <<  PORT58_FCSPI3_SIN) ),

        /* PTB27 */
        (uint8)( (1 <<  PORT59_ADC3_SE21) | \
        (1 <<  PORT59_GPIO) | \
        (1 <<  PORT59_FTU7_CH0) | \
        (1 <<  PORT59_FTU1_QD_PHB) | \
        (1 <<  PORT59_FCSPI2_SOUT) | \
        (1 <<  PORT59_eFTU0_OUT_S26) | \
        (1 <<  PORT59_FTU1_CH4) ),

        /* PTB28 */
        (uint8)( (1 <<  PORT60_ADC3_SE22) | \
        (1 <<  PORT60_GPIO) | \
        (1 <<  PORT60_FTU7_CH1) | \
        (1 <<  PORT60_FCSPI2_SIN) | \
        (1 <<  PORT60_eFTU0_OUT_S27) | \
        (1 <<  PORT60_FTU1_CH5) ),

        /* PTB29 */
        (uint8)( (1 <<  PORT61_ADC3_SE0_ADC3_DIFF_P0) | \
        (1 <<  PORT61_GPIO) | \
        (1 <<  PORT61_FTU1_CH3) | \
        (1 <<  PORT61_SSI0_DIG_28_CH1) | \
        (1 <<  PORT61_eFTU0_OUT_S27) | \
        (1 <<  PORT61_MSC0_FCLP) ),

        /* PTB30 */
        (uint8)( (1 <<  PORT62_GPIO) | \
        (1 <<  PORT62_FTU6_CH1) | \
        (1 <<  PORT62_FCIIC1_SCL) | \
        (1 <<  PORT62_LDI0_SDI) | \
        (1 <<  PORT62_ENET_CRS) | \
        (1 <<  PORT62_eFTU0_OUT_S4) | \
        (1 <<  PORT62_FCSPI3_SOUT) ),

        /* PTB31 */
        (uint8)( (1 <<  PORT63_GPIO) | \
        (1 <<  PORT63_FTU7_CH1) | \
        (1 <<  PORT63_FCSPI2_SCK) | \
        (1 <<  PORT63_eFTU0_IN5) | \
        (1 <<  PORT63_ENET_RXD1) | \
        (1 <<  PORT63_TRGSEL_OUT5) | \
        (1 <<  PORT63_eFTU0_OUT_S12) ),

        /* PTC0 */
        (uint8)( (1 <<  PORT64_GPIO) | \
        (1 <<  PORT64_eFTU0_IN6) | \
        (1 <<  PORT64_eFTU_GTOM2) | \
        (1 <<  PORT64_ETM_TRACE_D6) | \
        (1 <<  PORT64_ENET_RXD1) | \
        (1 <<  PORT64_LDI0_DCLK) | \
        (1 <<  PORT64_FCSPI3_PCS1) ),

        /* PTC1 */
        (uint8)( (1 <<  PORT65_GPIO) | \
        (1 <<  PORT65_FTU7_CH5) | \
        (1 <<  PORT65_ENET_RXD0) | \
        (1 <<  PORT65_LDI0_DATA0) | \
        (1 <<  PORT65_FCSPI3_PCS0) ),

        /* PTC2 */
        (uint8)( (1 <<  PORT66_GPIO) | \
        (1 <<  PORT66_FTU6_CH3) | \
        (1 <<  PORT66_FCUART0_RX) | \
        (1 <<  PORT66_ETM_TRACE_CLKOUT) | \
        (1 <<  PORT66_ENET_TXD0) | \
        (1 <<  PORT66_eFTU0_OUT_S6) ),

        /* PTC3 */
        (uint8)( (1 <<  PORT67_GPIO) | \
        (1 <<  PORT67_FTU6_CH2) | \
        (1 <<  PORT67_FCUART0_TX) | \
        (1 <<  PORT67_eFTU0_OUT_S5) | \
        (1 <<  PORT67_FCSPI3_PCS0) ),

        /* PTC4 */
        (uint8)( (1 <<  PORT68_GPIO) | \
        (1 <<  PORT68_FTU3_CH4) | \
        (1 <<  PORT68_FTU1_QD_PHB) | \
        (1 <<  PORT68_JTAG_TCLK_SWD_CLK) ),

        /* PTC5 */
        (uint8)( (1 <<  PORT69_GPIO) | \
        (1 <<  PORT69_FTU3_CH3) | \
        (1 <<  PORT69_FTU1_QD_PHA) | \
        (1 <<  PORT69_JTAG_TDI) ),

        /* PTC6 */
        (uint8)( (1 <<  PORT70_GPIO) | \
        (1 <<  PORT70_FCUART1_RX) | \
        (1 <<  PORT70_SENT1_RXD3) | \
        (1 <<  PORT70_FTU3_CH2) | \
        (1 <<  PORT70_eFTU0_IN4) | \
        (1 <<  PORT70_FTU1_QD_PHB) | \
        (1 <<  PORT70_eFTU0_OUT_S8) ),

        /* PTC7 */
        (uint8)( (1 <<  PORT71_ADC1_SE30) | \
        (1 <<  PORT71_GPIO) | \
        (1 <<  PORT71_FCUART1_TX) | \
        (1 <<  PORT71_SENT1_RXD2) | \
        (1 <<  PORT71_FTU3_CH3) | \
        (1 <<  PORT71_eFTU0_IN3) | \
        (1 <<  PORT71_FTU6_CH7) | \
        (1 <<  PORT71_eFTU0_OUT_S7) ),

        /* PTC8 */
        (uint8)( (1 <<  PORT72_ADC2_SE9) | \
        (1 <<  PORT72_GPIO) | \
        (1 <<  PORT72_FTU7_CH4) | \
        (1 <<  PORT72_FTU_FLT11) | \
        (1 <<  PORT72_FTU4_QD_PHB) | \
        (1 <<  PORT72_FCSPI4_PCS0) | \
        (1 <<  PORT72_FCUART0_CTS) | \
        (1 <<  PORT72_eFTU0_OUT_S31) ),

        /* PTC9 */
        (uint8)( (1 <<  PORT73_ADC2_SE8) | \
        (1 <<  PORT73_GPIO) | \
        (1 <<  PORT73_FTU7_CH3) | \
        (1 <<  PORT73_FTU_FLT10) | \
        (1 <<  PORT73_FTU4_QD_PHA) | \
        (1 <<  PORT73_FCSPI4_SCK) | \
        (1 <<  PORT73_FCUART0_RTS) | \
        (1 <<  PORT73_FTU1_CH7) ),

        /* PTC10 */
        (uint8)( (1 <<  PORT74_ADC2_SE3_ADC2_DIFF_P3) | \
        (1 <<  PORT74_GPIO) | \
        (1 <<  PORT74_FTU3_CH4) | \
        (1 <<  PORT74_FLEXCAN4_RX) | \
        (1 <<  PORT74_eFTU0_OUT_S21) | \
        (1 <<  PORT74_SSI0_DIG_14_CH3) | \
        (1 <<  PORT74_MSC0_EN1) ),

        /* PTC11 */
        (uint8)( (1 <<  PORT75_SDADC0_CH1_N0) | \
        (1 <<  PORT75_GPIO) | \
        (1 <<  PORT75_FTU3_CH3) | \
        (1 <<  PORT75_FLEXCAN4_TX) | \
        (1 <<  PORT75_eFTU0_OUT_S20) | \
        (1 <<  PORT75_SSI0_DIG_28_CH3) | \
        (1 <<  PORT75_MSC0_EN0) ),

        /* PTC12 */
        (uint8)( (1 <<  PORT76_ADC3_SE1_ADC3_DIFF_P1) | \
        (1 <<  PORT76_GPIO) | \
        (1 <<  PORT76_FTU1_CH5) | \
        (1 <<  PORT76_eFTU0_OUT_S29) | \
        (1 <<  PORT76_TRGSEL_OUT5) | \
        (1 <<  PORT76_FLEXCAN5_RX) | \
        (1 <<  PORT76_MSC0_EN2) ),

        /* PTC13 */
        (uint8)( (1 <<  PORT77_ADC3_SE4_ADC3_DIFF_N0) | \
        (1 <<  PORT77_GPIO) | \
        (1 <<  PORT77_FTU1_CH4) | \
        (1 <<  PORT77_SSI0_DIG_14_CH1) | \
        (1 <<  PORT77_FCSPI5_PCS0) | \
        (1 <<  PORT77_TRGSEL_OUT6) | \
        (1 <<  PORT77_FLEXCAN5_TX) | \
        (1 <<  PORT77_MSC0_SOP) ),

        /* PTC14 */
        (uint8)( (1 <<  PORT78_GPIO) | \
        (1 <<  PORT78_FTU7_CH4) | \
        (1 <<  PORT78_FCUART1_RX) | \
        (1 <<  PORT78_FCIIC1_SDA) | \
        (1 <<  PORT78_TRGSEL_OUT2) | \
        (1 <<  PORT78_eFTU0_OUT_S15) ),

        /* PTC15 */
        (uint8)( (1 <<  PORT79_GPIO) | \
        (1 <<  PORT79_eFTU_GTOM6) | \
        (1 <<  PORT79_FCSPI2_PCS3) | \
        (1 <<  PORT79_SCG_CLKOUT) | \
        (1 <<  PORT79_ENET_RXD3) | \
        (1 <<  PORT79_LDI0_SOE) | \
        (1 <<  PORT79_FCSPI3_PCS3) ),

        /* PTC16 */
        (uint8)( (1 <<  PORT80_GPIO) | \
        (1 <<  PORT80_FTU_FLT7) | \
        (1 <<  PORT80_FCSPI2_SOUT) | \
        (1 <<  PORT80_TRGSEL_OUT7) | \
        (1 <<  PORT80_ENET_RXD0) | \
        (1 <<  PORT80_eFTU0_OUT_S11) | \
        (1 <<  PORT80_FCUART5_RX) ),

        /* PTC17 */
        (uint8)( (1 <<  PORT81_GPIO) | \
        (1 <<  PORT81_FTU_FLT6) | \
        (1 <<  PORT81_FTU0_CH2) | \
        (1 <<  PORT81_TRGSEL_OUT6) | \
        (1 <<  PORT81_ENET_RX_ER) | \
        (1 <<  PORT81_eFTU0_OUT_S10) | \
        (1 <<  PORT81_FCUART5_TX) ),

        /* PTC18 */
        (uint8)( (1 <<  PORT82_GPIO) | \
        (1 <<  PORT82_FTU7_CH2) | \
        (1 <<  PORT82_FCSPI2_SIN) | \
        (1 <<  PORT82_eFTU0_IN6) | \
        (1 <<  PORT82_ENET_RXD2) | \
        (1 <<  PORT82_TRGSEL_OUT4) | \
        (1 <<  PORT82_eFTU0_OUT_S13) ),

        /* PTC19 */
        (uint8)( (1 <<  PORT83_ADC3_SE5_ADC3_DIFF_N1) | \
        (1 <<  PORT83_GPIO) | \
        (1 <<  PORT83_FTU1_CH6) | \
        (1 <<  PORT83_FLEXCAN6_TX) | \
        (1 <<  PORT83_FCSPI5_PCS1) | \
        (1 <<  PORT83_eFTU0_OUT_S7) | \
        (1 <<  PORT83_SSI0_DIG_28_CH2) | \
        (1 <<  PORT83_MSC0_EN3) ),

        /* PTC20 */
        (uint8)( (1 <<  PORT84_ADC3_SE2_ADC3_DIFF_P2) | \
        (1 <<  PORT84_GPIO) | \
        (1 <<  PORT84_FTU1_CH7) | \
        (1 <<  PORT84_eFTU0_OUT_S8) | \
        (1 <<  PORT84_FCSPI5_PCS2) | \
        (1 <<  PORT84_SSI0_DIG_14_CH2) | \
        (1 <<  PORT84_MSC0_SDI2) ),

        /* PTC21 */
        (uint8)( (1 <<  PORT85_ADC3_SE6_ADC3_DIFF_N2) | \
        (1 <<  PORT85_GPIO) | \
        (1 <<  PORT85_FTU3_CH0) | \
        (1 <<  PORT85_eFTU0_OUT_S9) | \
        (1 <<  PORT85_FCSPI5_PCS3) | \
        (1 <<  PORT85_MSC0_SDI3) ),

        /* PTC22 */
        (uint8)( (1 <<  PORT86_SDADC0_CH_P3_ADC3_SE10_SENSE_BUS_SDADC) | \
        (1 <<  PORT86_GPIO) | \
        (1 <<  PORT86_FTU3_CH1) | \
        (1 <<  PORT86_eFTU0_OUT_S16) | \
        (1 <<  PORT86_MSC0_SDI1) ),

        /* PTC23 */
        (uint8)( (1 <<  PORT87_SDADC0_CH_N3_ADC2_SE0_ADC2_DIFF_P0) | \
        (1 <<  PORT87_GPIO) | \
        (1 <<  PORT87_FTU0_CH0) | \
        (1 <<  PORT87_FTU6_CH6) | \
        (1 <<  PORT87_FCUART2_RTS) | \
        (1 <<  PORT87_eFTU0_OUT_S18) | \
        (1 <<  PORT87_MSC0_SDI0) ),

        /* PTC24 */
        (uint8)( (1 <<  PORT88_SDADC0_CH1_P0) | \
        (1 <<  PORT88_GPIO) | \
        (1 <<  PORT88_FTU3_CH2) | \
        (1 <<  PORT88_FLEXCAN6_RX) | \
        (1 <<  PORT88_FCUART2_CTS) | \
        (1 <<  PORT88_eFTU0_OUT_S19) ),

        /* PTC25 */
        (uint8)( (1 <<  PORT89_GPIO) | \
        (1 <<  PORT89_FTU3_CH3) | \
        (1 <<  PORT89_FCUART5_RTS) | \
        (1 <<  PORT89_FCSPI5_PCS0) | \
        (1 <<  PORT89_FLEXCAN2_TX) | \
        (1 <<  PORT89_eFTU0_OUT_S17) ),

        /* PTC26 */
        (uint8)( (1 <<  PORT90_GPIO) | \
        (1 <<  PORT90_FLEXCAN2_TX) | \
        (1 <<  PORT90_eFTU0_OUT_S3) ),

        /* PTC27 */
        (uint8)( (1 <<  PORT91_ADC2_SE7_ADC2_DIFF_N3) | \
        (1 <<  PORT91_GPIO) | \
        (1 <<  PORT91_FTU1_CH3) | \
        (1 <<  PORT91_FCSPI2_PCS1) | \
        (1 <<  PORT91_FCUART5_RX) | \
        (1 <<  PORT91_eFTU_GTOM9) ),

        /* PTC28 */
        (uint8)( (1 <<  PORT92_ADC3_SE23) | \
        (1 <<  PORT92_GPIO) | \
        (1 <<  PORT92_FTU7_CH2) | \
        (1 <<  PORT92_SDADC0_PWM_P) | \
        (1 <<  PORT92_FLEXCAN3_TX) | \
        (1 <<  PORT92_FTU1_CH6) | \
        (1 <<  PORT92_eFTU0_OUT_S31) ),

        /* PTC29 */
        (uint8)( (1 <<  PORT93_ADC2_SE10) | \
        (1 <<  PORT93_GPIO) | \
        (1 <<  PORT93_FTU7_CH5) | \
        (1 <<  PORT93_SDADC0_PWM_N) | \
        (1 <<  PORT93_FLEXCAN3_RX) | \
        (1 <<  PORT93_eFTU0_OUT_S28) ),

        /* PTC30 */
        (uint8)( (1 <<  PORT94_ADC2_SE12) | \
        (1 <<  PORT94_GPIO) | \
        (1 <<  PORT94_FTU7_CH7) | \
        (1 <<  PORT94_FTU5_QD_PHA) | \
        (1 <<  PORT94_FCSPI4_SOUT) | \
        (1 <<  PORT94_eFTU0_OUT_S30) ),

        /* PTC31 */
        (uint8)( (1 <<  PORT95_ADC2_SE14) | \
        (1 <<  PORT95_GPIO) | \
        (1 <<  PORT95_FTU5_CH1) | \
        (1 <<  PORT95_SDADC0_PWM_P) | \
        (1 <<  PORT95_FTU5_QD_PHB) | \
        (1 <<  PORT95_TRGSEL_OUT3) | \
        (1 <<  PORT95_SDADC0_CH1) | \
        (1 <<  PORT95_FCSPI5_SCK) ),

        /* PTD0 */
        (uint8)( (1 <<  PORT96_ADC0_SE13) | \
        (1 <<  PORT96_GPIO) | \
        (1 <<  PORT96_FTU4_CH2) | \
        (1 <<  PORT96_eFTU0_IN6) | \
        (1 <<  PORT96_TRGSEL_OUT1) ),

        /* PTD1 */
        (uint8)( (1 <<  PORT97_ADC0_SE6_ADC0_DIFF_N2) | \
        (1 <<  PORT97_GPIO) | \
        (1 <<  PORT97_FCUART6_TX) | \
        (1 <<  PORT97_FTU2_CH4) | \
        (1 <<  PORT97_SSI0_DIG_14_CH1) | \
        (1 <<  PORT97_FLEXCAN2_RX) | \
        (1 <<  PORT97_TRGSEL_OUT2) ),

        /* PTD2 */
        (uint8)( (1 <<  PORT98_GPIO) | \
        (1 <<  PORT98_FTU2_CH0) | \
        (1 <<  PORT98_FCSPI1_SCK) | \
        (1 <<  PORT98_FCUART1_TX) | \
        (1 <<  PORT98_FLEXCORE_TMS) ),

        /* PTD3 */
        (uint8)( (1 <<  PORT99_GPIO) | \
        (1 <<  PORT99_FTU3_CH7) | \
        (1 <<  PORT99_FCSPI1_SIN) | \
        (1 <<  PORT99_eFTU0_OUT_S21) ),

        /* PTD4 */
        (uint8)( (1 <<  PORT100_GPIO) | \
        (1 <<  PORT100_FTU3_CH6) | \
        (1 <<  PORT100_FCSPI1_SOUT) | \
        (1 <<  PORT100_FTU_FLT16) | \
        (1 <<  PORT100_eFTU0_OUT_S20) ),

        /* PTD5 */
        (uint8)( (1 <<  PORT101_GPIO) | \
        (1 <<  PORT101_FTU6_CH4) | \
        (1 <<  PORT101_FCUART2_CTS) | \
        (1 <<  PORT101_ETM_TRACE_D2) | \
        (1 <<  PORT101_ENET_TXD3) | \
        (1 <<  PORT101_LDI0_DATA2) | \
        (1 <<  PORT101_FCSPI3_SIN) ),

        /* PTD6 */
        (uint8)( (1 <<  PORT102_GPIO) | \
        (1 <<  PORT102_FCUART2_RX) | \
        (1 <<  PORT102_FLEXCAN3_RX) | \
        (1 <<  PORT102_ETM_TRACE_D1) | \
        (1 <<  PORT102_ENET_TXD2) | \
        (1 <<  PORT102_LDI0_DATA3) | \
        (1 <<  PORT102_FCSPI3_SCK) ),

        /* PTD7 */
        (uint8)( (1 <<  PORT103_GPIO) | \
        (1 <<  PORT103_FCUART2_TX) | \
        (1 <<  PORT103_FLEXCAN3_TX) | \
        (1 <<  PORT103_ETM_TRACE_D0) | \
        (1 <<  PORT103_ENET_TXD1) | \
        (1 <<  PORT103_eFTU0_OUT_S7) ),

        /* PTD8 */
        (uint8)( (1 <<  PORT104_GPIO) | \
        (1 <<  PORT104_FTU7_CH0) | \
        (1 <<  PORT104_FCSPI2_PCS2) | \
        (1 <<  PORT104_FTU1_CH6) | \
        (1 <<  PORT104_ENET_RX_DV_CTL) | \
        (1 <<  PORT104_FCUART4_RX) ),

        /* PTD9 */
        (uint8)( (1 <<  PORT105_GPIO) | \
        (1 <<  PORT105_eFTU0_IN7) | \
        (1 <<  PORT105_FCSPI2_PCS1) | \
        (1 <<  PORT105_ETM_TRACE_D7) | \
        (1 <<  PORT105_ENET_RXD2) | \
        (1 <<  PORT105_LDI0_GCLK) | \
        (1 <<  PORT105_FCUART4_TX) ),

        /* PTD10 */
        (uint8)( (1 <<  PORT106_GPIO) | \
        (1 <<  PORT106_FTU6_CH7) | \
        (1 <<  PORT106_FTU2_QD_PHB) | \
        (1 <<  PORT106_FTU7_CH6) | \
        (1 <<  PORT106_ENET_RX_CLK) | \
        (1 <<  PORT106_LDI0_DATA1) | \
        (1 <<  PORT106_eFTU0_OUT_S9) ),

        /* PTD11 */
        (uint8)( (1 <<  PORT107_GPIO) | \
        (1 <<  PORT107_FTU6_CH6) | \
        (1 <<  PORT107_FTU2_QD_PHA) | \
        (1 <<  PORT107_ETM_TRACE_D4) | \
        (1 <<  PORT107_ENET_TX_CLK) | \
        (1 <<  PORT107_eFTU0_OUT_S8) ),

        /* PTD12 */
        (uint8)( (1 <<  PORT108_GPIO) | \
        (1 <<  PORT108_FTU6_CH5) | \
        (1 <<  PORT108_FCUART2_RTS) | \
        (1 <<  PORT108_ETM_TRACE_D3) | \
        (1 <<  PORT108_ENET_TX_EN_CTL) | \
        (1 <<  PORT108_FCSPI3_SOUT) ),

        (uint8)0x00,

        (uint8)0x00,

        /* PTD15 */
        (uint8)( (1 <<  PORT111_ADC0_SE27) | \
        (1 <<  PORT111_GPIO) | \
        (1 <<  PORT111_FTU5_CH0) | \
        (1 <<  PORT111_FLEXCAN2_RX) | \
        (1 <<  PORT111_ETM_TRACE_D7) | \
        (1 <<  PORT111_ENET_PPS2) | \
        (1 <<  PORT111_FCUART2_RTS) | \
        (1 <<  PORT111_eFTU0_OUT_S11) ),

        /* PTD16 */
        (uint8)( (1 <<  PORT112_ADC0_SE26) | \
        (1 <<  PORT112_GPIO) | \
        (1 <<  PORT112_FTU5_CH1) | \
        (1 <<  PORT112_FLEXCAN2_TX) | \
        (1 <<  PORT112_ETM_TRACE_D6) | \
        (1 <<  PORT112_FCSPI1_PCS3) | \
        (1 <<  PORT112_eFTU0_OUT_S4) ),

        /* PTD17 */
        (uint8)( (1 <<  PORT113_ADC0_SE24) | \
        (1 <<  PORT113_GPIO) | \
        (1 <<  PORT113_FTU5_CH3) | \
        (1 <<  PORT113_FCUART2_TX) | \
        (1 <<  PORT113_ETM_TRACE_D4) | \
        (1 <<  PORT113_FCSPI1_PCS1) | \
        (1 <<  PORT113_FTU5_QD_PHA) ),

        /* PTD18 */
        (uint8)( (1 <<  PORT114_ADC2_SE16) | \
        (1 <<  PORT114_GPIO) | \
        (1 <<  PORT114_FTU5_CH3) | \
        (1 <<  PORT114_SDADC0_PWM_N) | \
        (1 <<  PORT114_FCIIC1_SDA) | \
        (1 <<  PORT114_eFTU0_OUT_S17) | \
        (1 <<  PORT114_FCSPI5_PCS0) ),

        /* PTD19 */
        (uint8)( (1 <<  PORT115_ADC2_SE17) | \
        (1 <<  PORT115_GPIO) | \
        (1 <<  PORT115_FTU5_CH4) | \
        (1 <<  PORT115_FCIIC1_SCL) | \
        (1 <<  PORT115_eFTU0_OUT_S27) ),

        /* PTD20 */
        (uint8)( (1 <<  PORT116_ADC2_SE30) | \
        (1 <<  PORT116_GPIO) | \
        (1 <<  PORT116_FTU3_CH4) | \
        (1 <<  PORT116_FCUART5_RX) | \
        (1 <<  PORT116_FCSPI1_PCS1) | \
        (1 <<  PORT116_eFTU0_OUT_S18) ),

        /* PTD21 */
        (uint8)( (1 <<  PORT117_GPIO) | \
        (1 <<  PORT117_FTU3_CH5) | \
        (1 <<  PORT117_FCUART5_TX) | \
        (1 <<  PORT117_eFTU0_IN0) | \
        (1 <<  PORT117_eFTU0_OUT_S19) ),

        /* PTD22 */
        (uint8)( (1 <<  PORT118_GPIO) | \
        (1 <<  PORT118_SENT0_RXD1) | \
        (1 <<  PORT118_FCSPI5_SCK) | \
        (1 <<  PORT118_eFTU0_OUT_S5) ),

        /* PTD23 */
        (uint8)( (1 <<  PORT119_ADC2_SE31) | \
        (1 <<  PORT119_GPIO) | \
        (1 <<  PORT119_FTU2_CH1) | \
        (1 <<  PORT119_FCSPI1_PCS0) | \
        (1 <<  PORT119_FCUART1_RX) | \
        (1 <<  PORT119_FLEXCORE_TDI) ),

        /* PTD24 */
        (uint8)( (1 <<  PORT120_GPIO) | \
        (1 <<  PORT120_FTU2_CH4) | \
        (1 <<  PORT120_TCR_CLK) | \
        (1 <<  PORT120_eFTU0_IN1) | \
        (1 <<  PORT120_FLEXCORE_TRST) ),

        /* PTD25 */
        (uint8)( (1 <<  PORT121_GPIO) | \
        (1 <<  PORT121_FTU2_CH6) | \
        (1 <<  PORT121_FCUART4_RTS) | \
        (1 <<  PORT121_FLEXCAN7_TX) | \
        (1 <<  PORT121_eFTU0_OUT_S23) ),

        /* PTD26 */
        (uint8)( (1 <<  PORT122_GPIO) | \
        (1 <<  PORT122_FTU4_CH0) | \
        (1 <<  PORT122_FLEXCAN0_TX) | \
        (1 <<  PORT122_FCUART4_CTS) | \
        (1 <<  PORT122_eFTU0_IN7) | \
        (1 <<  PORT122_eFTU0_OUT_S25) ),

        /* PTD27 */
        (uint8)( (1 <<  PORT123_GPIO) | \
        (1 <<  PORT123_FTU4_CH1) | \
        (1 <<  PORT123_FLEXCAN0_RX) | \
        (1 <<  PORT123_eFTU0_IN6) | \
        (1 <<  PORT123_eFTU0_OUT_S26) ),

        /* PTD28 */
        (uint8)( (1 <<  PORT124_GPIO) | \
        (1 <<  PORT124_FTU4_CH3) | \
        (1 <<  PORT124_FLEXCAN4_RX) | \
        (1 <<  PORT124_eFTU0_IN5) | \
        (1 <<  PORT124_eFTU_GTOM1) ),

        /* PTD29 */
        (uint8)( (1 <<  PORT125_GPIO) | \
        (1 <<  PORT125_FTU4_CH5) | \
        (1 <<  PORT125_SENT1_RXD1) | \
        (1 <<  PORT125_FTU1_QD_PHB) | \
        (1 <<  PORT125_eFTU_GTOM2) ),

        /* PTD30 */
        (uint8)( (1 <<  PORT126_GPIO) | \
        (1 <<  PORT126_FTU4_CH7) | \
        (1 <<  PORT126_FLEXCAN5_TX) | \
        (1 <<  PORT126_SENT1_RXD3) | \
        (1 <<  PORT126_FTU2_QD_PHB) | \
        (1 <<  PORT126_eFTU_GTOM3) ),

        /* PTD31 */
        (uint8)( (1 <<  PORT127_ADC1_SE31) | \
        (1 <<  PORT127_GPIO) | \
        (1 <<  PORT127_FTU6_CH0) | \
        (1 <<  PORT127_eFTU0_IN2) | \
        (1 <<  PORT127_FTU1_QD_PHA) | \
        (1 <<  PORT127_eFTU_GTOM4) ),

        /* PTE0 */
        (uint8)( (1 <<  PORT128_GPIO) | \
        (1 <<  PORT128_FCUART0_CTS) | \
        (1 <<  PORT128_FTU_TCK1) | \
        (1 <<  PORT128_FCIIC1_SDA) | \
        (1 <<  PORT128_FCSPI0_SCK) | \
        (1 <<  PORT128_FTU_FLT19) | \
        (1 <<  PORT128_eFTU_GTOM9) ),

        /* PTE1 */
        (uint8)( (1 <<  PORT129_GPIO) | \
        (1 <<  PORT129_FCUART0_RTS) | \
        (1 <<  PORT129_FCIIC1_SCL) | \
        (1 <<  PORT129_FCSPI0_SIN) | \
        (1 <<  PORT129_FTU_FLT18) | \
        (1 <<  PORT129_eFTU_GTOM8) ),

        /* PTE2 */
        (uint8)( (1 <<  PORT130_ADC1_SE24) | \
        (1 <<  PORT130_GPIO) | \
        (1 <<  PORT130_FTU6_CH6) | \
        (1 <<  PORT130_FCUART6_TX) | \
        (1 <<  PORT130_FLEXCAN1_RX) | \
        (1 <<  PORT130_FCUART1_CTS) | \
        (1 <<  PORT130_eFTU_GTOM15) ),

        /* PTE3 */
        (uint8)( (1 <<  PORT131_OSC32K_EXTAL) | \
        (1 <<  PORT131_GPIO) | \
        (1 <<  PORT131_FTU0_CH2) | \
        (1 <<  PORT131_eFTU0_IN1) | \
        (1 <<  PORT131_FTU_FLT1) | \
        (1 <<  PORT131_FTU_TCK0) ),

        /* PTE4 */
        (uint8)( (1 <<  PORT132_CMP0_IN0) | \
        (1 <<  PORT132_GPIO) | \
        (1 <<  PORT132_FTU2_QD_PHB) | \
        (1 <<  PORT132_FTU0_CH1) | \
        (1 <<  PORT132_FCUART7_TX) | \
        (1 <<  PORT132_eFTU_GTOM13) ),

        /* PTE5 */
        (uint8)( (1 <<  PORT133_ADC0_SE12) | \
        (1 <<  PORT133_GPIO) | \
        (1 <<  PORT133_FTU_TCK2) | \
        (1 <<  PORT133_FTU4_CH3) | \
        (1 <<  PORT133_FCSPI2_PCS1) | \
        (1 <<  PORT133_eFTU0_IN5) | \
        (1 <<  PORT133_eFTU0_OUT_S10) ),

        /* PTE6 */
        (uint8)( (1 <<  PORT134_ADC1_SE25) | \
        (1 <<  PORT134_GPIO) | \
        (1 <<  PORT134_FTU6_CH5) | \
        (1 <<  PORT134_FCUART6_RX) | \
        (1 <<  PORT134_FLEXCAN1_TX) | \
        (1 <<  PORT134_FCUART1_RTS) | \
        (1 <<  PORT134_eFTU_GTOM14) ),

        /* PTE7 */
        (uint8)( (1 <<  PORT135_ADC2_SE15) | \
        (1 <<  PORT135_GPIO) | \
        (1 <<  PORT135_FTU5_CH2) | \
        (1 <<  PORT135_FTU_FLT14) | \
        (1 <<  PORT135_eFTU0_OUT_S16) | \
        (1 <<  PORT135_FCUART4_RX) | \
        (1 <<  PORT135_FCSPI5_SOUT) ),

        /* PTE8 */
        (uint8)( (1 <<  PORT136_GPIO) | \
        (1 <<  PORT136_FTU6_CH1) | \
        (1 <<  PORT136_eFTU0_IN4) | \
        (1 <<  PORT136_ENET_MDC) | \
        (1 <<  PORT136_eFTU0_OUT_S0) | \
        (1 <<  PORT136_FCSPI3_SCK) ),

        /* PTE9 */
        (uint8)( (1 <<  PORT137_ADC0_SE28) | \
        (1 <<  PORT137_GPIO) | \
        (1 <<  PORT137_FTU0_CH7) | \
        (1 <<  PORT137_ETM_TRACE_CLKOUT) | \
        (1 <<  PORT137_ENET_PPS3) | \
        (1 <<  PORT137_FCUART2_CTS) | \
        (1 <<  PORT137_eFTU0_OUT_S12) ),

        /* PTE10 */
        (uint8)( (1 <<  PORT138_ADC0_SE9) | \
        (1 <<  PORT138_GPIO) | \
        (1 <<  PORT138_SCG_CLKOUT) | \
        (1 <<  PORT138_FTU6_CH0) | \
        (1 <<  PORT138_SSI0_DIG_14_CH2) | \
        (1 <<  PORT138_FCSPI2_SIN) | \
        (1 <<  PORT138_TRGSEL_OUT4) ),

        /* PTE11 */
        (uint8)( (1 <<  PORT139_ADC0_SE8) | \
        (1 <<  PORT139_GPIO) | \
        (1 <<  PORT139_FTU2_CH1) | \
        (1 <<  PORT139_SSI0_DIG_28_CH2) | \
        (1 <<  PORT139_FCSPI2_PCS0) | \
        (1 <<  PORT139_TRGSEL_OUT5) ),

        /* PTE12 */
        (uint8)( (1 <<  PORT140_ADC0_SE17) | \
        (1 <<  PORT140_GPIO) | \
        (1 <<  PORT140_FTU5_CH6) | \
        (1 <<  PORT140_FTU_FLT2) | \
        (1 <<  PORT140_ETM_TRACE_D3) | \
        (1 <<  PORT140_FCSPI1_SOUT) ),

        /* PTE13 */
        (uint8)( (1 <<  PORT141_ADC0_SE10) | \
        (1 <<  PORT141_GPIO) | \
        (1 <<  PORT141_FTU2_CH0) | \
        (1 <<  PORT141_SSI0_DIG_28_CH3) | \
        (1 <<  PORT141_FCSPI2_SCK) ),

        /* PTE14 */
        (uint8)( (1 <<  PORT142_OSC32K_XTAL) | \
        (1 <<  PORT142_GPIO) | \
        (1 <<  PORT142_FTU0_CH3) | \
        (1 <<  PORT142_eFTU0_IN0) | \
        (1 <<  PORT142_FTU_FLT0) | \
        (1 <<  PORT142_FLEXCAN7_RX) ),

        /* PTE15 */
        (uint8)( (1 <<  PORT143_ADC0_SE5_ADC0_DIFF_N1) | \
        (1 <<  PORT143_GPIO) | \
        (1 <<  PORT143_FCUART1_CTS) | \
        (1 <<  PORT143_FLEXCAN5_RX) | \
        (1 <<  PORT143_FTU2_CH6) | \
        (1 <<  PORT143_SSI0_DIG_14_CH0) | \
        (1 <<  PORT143_eFTU0_IN2) | \
        (1 <<  PORT143_TRGSEL_OUT6) ),

        /* PTE16 */
        (uint8)( (1 <<  PORT144_ADC1_SE2_ADC1_DIFF_P2) | \
        (1 <<  PORT144_GPIO) | \
        (1 <<  PORT144_FCUART1_RTS) | \
        (1 <<  PORT144_FLEXCAN5_TX) | \
        (1 <<  PORT144_FTU2_CH7) | \
        (1 <<  PORT144_TRGSEL_OUT7) ),

        /* PTE17 */
        (uint8)( (1 <<  PORT145_GPIO) | \
        (1 <<  PORT145_FTU6_CH1) | \
        (1 <<  PORT145_FCSMU_PIN1) | \
        (1 <<  PORT145_FTU_FLT20) | \
        (1 <<  PORT145_eFTU_GTOM9) ),

        /* PTE18 */
        (uint8)( (1 <<  PORT146_ADC1_SE29) | \
        (1 <<  PORT146_GPIO) | \
        (1 <<  PORT146_FTU6_CH3) | \
        (1 <<  PORT146_FTU5_QD_PHA) | \
        (1 <<  PORT146_FCUART2_TX) | \
        (1 <<  PORT146_FLEXCAN3_TX) | \
        (1 <<  PORT146_eFTU_GTOM10) ),

        /* PTE19 */
        (uint8)( (1 <<  PORT147_ADC1_SE23) | \
        (1 <<  PORT147_GPIO) | \
        (1 <<  PORT147_SCG_CLKOUT) | \
        (1 <<  PORT147_FCIIC0_SCL) | \
        (1 <<  PORT147_SENT0_RXD2) | \
        (1 <<  PORT147_CMP0_OUT) | \
        (1 <<  PORT147_FLEXCAN6_RX) | \
        (1 <<  PORT147_eFTU_GTOM0) ),

        /* PTE20 */
        (uint8)( (1 <<  PORT148_ADC1_SE22) | \
        (1 <<  PORT148_GPIO) | \
        (1 <<  PORT148_FTU0_CH0) | \
        (1 <<  PORT148_FCIIC0_SDA) | \
        (1 <<  PORT148_SENT0_RXD3) | \
        (1 <<  PORT148_FLEXCAN6_TX) | \
        (1 <<  PORT148_eFTU_GTOM1) ),

        /* PTE21 */
        (uint8)( (1 <<  PORT149_ADC1_SE21) | \
        (1 <<  PORT149_GPIO) | \
        (1 <<  PORT149_FTU0_CH1) | \
        (1 <<  PORT149_LP_WAKEUP0) | \
        (1 <<  PORT149_FLEXCAN0_TX) | \
        (1 <<  PORT149_FCUART0_RTS) | \
        (1 <<  PORT149_eFTU_GTOM3) ),

        /* PTE22 */
        (uint8)( (1 <<  PORT150_ADC1_SE20) | \
        (1 <<  PORT150_GPIO) | \
        (1 <<  PORT150_FTU0_CH2) | \
        (1 <<  PORT150_FLEXCAN0_RX) | \
        (1 <<  PORT150_FCUART0_CTS) | \
        (1 <<  PORT150_eFTU_GTOM4) ),

        /* PTE23 */
        (uint8)( (1 <<  PORT151_GPIO) | \
        (1 <<  PORT151_FTU0_CH4) | \
        (1 <<  PORT151_FLEXCAN1_RX) | \
        (1 <<  PORT151_FCSPI0_PCS2) | \
        (1 <<  PORT151_eFTU_GTOM6) ),

        /* PTE24 */
        (uint8)( (1 <<  PORT152_GPIO) | \
        (1 <<  PORT152_FTU0_CH5) | \
        (1 <<  PORT152_FLEXCAN1_TX) | \
        (1 <<  PORT152_FCSPI0_PCS1) | \
        (1 <<  PORT152_LP_WAKEUP1) | \
        (1 <<  PORT152_eFTU_GTOM7) ),

        /* PTE25 */
        (uint8)( (1 <<  PORT153_ADC1_SE19) | \
        (1 <<  PORT153_GPIO) | \
        (1 <<  PORT153_FTU0_CH6) | \
        (1 <<  PORT153_AONTIMER0_CLK0) | \
        (1 <<  PORT153_FCSPI0_PCS0) | \
        (1 <<  PORT153_TRGSEL_OUT7) ),

        /* PTE26 */
        (uint8)( (1 <<  PORT154_ADC1_SE17) | \
        (1 <<  PORT154_GPIO) | \
        (1 <<  PORT154_FTU3_CH2) | \
        (1 <<  PORT154_AONTIMER0_CLK2) | \
        (1 <<  PORT154_SENT0_RXD0) | \
        (1 <<  PORT154_LP_WAKEUP3) | \
        (1 <<  PORT154_FTU2_QD_PHA) | \
        (1 <<  PORT154_eFTU_GTOM10) ),

        /* PTE27 */
        (uint8)( (1 <<  PORT155_ADC1_SE16) | \
        (1 <<  PORT155_GPIO) | \
        (1 <<  PORT155_FTU3_CH5) | \
        (1 <<  PORT155_SENT0_RXD1) | \
        (1 <<  PORT155_FTU2_QD_PHB) | \
        (1 <<  PORT155_eFTU_GTOM11) ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTF0 */
        (uint8)( (1 <<  PORT160_ADC1_SE13) | \
        (1 <<  PORT160_GPIO) | \
        (1 <<  PORT160_FCUART6_RX) | \
        (1 <<  PORT160_FTU2_QD_PHA) ),

        /* PTF1 */
        (uint8)( (1 <<  PORT161_ADC1_SE12) | \
        (1 <<  PORT161_GPIO) | \
        (1 <<  PORT161_FCUART6_TX) | \
        (1 <<  PORT161_FTU2_QD_PHB) ),

        /* PTF2 */
        (uint8)( (1 <<  PORT162_GPIO) | \
        (1 <<  PORT162_FCUART6_RTS) | \
        (1 <<  PORT162_eFTU0_IN4) | \
        (1 <<  PORT162_eFTU0_OUT_S28) ),

        /* PTF3 */
        (uint8)( (1 <<  PORT163_ADC0_SE7_ADC0_DIFF_N3) | \
        (1 <<  PORT163_GPIO) | \
        (1 <<  PORT163_FLEXCAN4_RX) | \
        (1 <<  PORT163_FCUART7_TX) | \
        (1 <<  PORT163_eFTU0_IN4) ),

        /* PTF4 */
        (uint8)( (1 <<  PORT164_GPIO) | \
        (1 <<  PORT164_FCUART7_RX) | \
        (1 <<  PORT164_FTU6_CH3) | \
        (1 <<  PORT164_eFTU_GTOM5) ),

        /* PTF5 */
        (uint8)( (1 <<  PORT165_GPIO) | \
        (1 <<  PORT165_FCUART7_TX) | \
        (1 <<  PORT165_FTU6_CH4) | \
        (1 <<  PORT165_eFTU_GTOM6) ),

        /* PTF6 */
        (uint8)( (1 <<  PORT166_GPIO) | \
        (1 <<  PORT166_FTU6_CH4) | \
        (1 <<  PORT166_eFTU0_IN0) | \
        (1 <<  PORT166_eFTU0_OUT_S10) ),

        /* PTF7 */
        (uint8)( (1 <<  PORT167_ADC2_SE4_ADC2_DIFF_N0) | \
        (1 <<  PORT167_GPIO) | \
        (1 <<  PORT167_FTU0_CH1) | \
        (1 <<  PORT167_FTU6_CH5) | \
        (1 <<  PORT167_MSC0_SDI2) | \
        (1 <<  PORT167_FTU1_QD_PHA) | \
        (1 <<  PORT167_eFTU0_OUT_S18) ),

        /* PTF8 */
        (uint8)( (1 <<  PORT168_GPIO) | \
        (1 <<  PORT168_eFTU0_IN5) | \
        (1 <<  PORT168_FCSPI3_SIN) | \
        (1 <<  PORT168_FTU_FLT5) | \
        (1 <<  PORT168_TRGSEL_OUT4) ),

        /* PTF9 */
        (uint8)( (1 <<  PORT169_ADC3_SE25) | \
        (1 <<  PORT169_GPIO) | \
        (1 <<  PORT169_FTU0_CH3) | \
        (1 <<  PORT169_MSC0_SDI0) | \
        (1 <<  PORT169_eFTU0_OUT_S25) ),

        /* PTF10 */
        (uint8)( (1 <<  PORT170_ADC3_SE24) | \
        (1 <<  PORT170_GPIO) | \
        (1 <<  PORT170_FTU0_CH4) | \
        (1 <<  PORT170_MSC0_SDI1) | \
        (1 <<  PORT170_eFTU0_OUT_S26) ),

        /* PTF11 */
        (uint8)( (1 <<  PORT171_ADC3_SE3_ADC3_DIFF_P3) | \
        (1 <<  PORT171_GPIO) | \
        (1 <<  PORT171_FLEXCAN6_TX) | \
        (1 <<  PORT171_FTU0_CH5) | \
        (1 <<  PORT171_MSC0_SDI2) | \
        (1 <<  PORT171_eFTU_GTOM15) ),

        /* PTF12 */
        (uint8)( (1 <<  PORT172_SDADC0_CH_N1_ADC3_SE14) | \
        (1 <<  PORT172_GPIO) | \
        (1 <<  PORT172_SDADC0_CLK0) | \
        (1 <<  PORT172_FTU0_CH6) ),

        /* PTF13 */
        (uint8)( (1 <<  PORT173_SDADC0_CH_P1_ADC3_SE13) | \
        (1 <<  PORT173_GPIO) | \
        (1 <<  PORT173_FTU1_CH2) | \
        (1 <<  PORT173_FCSPI2_PCS2) | \
        (1 <<  PORT173_FLEXCAN6_TX) | \
        (1 <<  PORT173_MSC0_SDI1) | \
        (1 <<  PORT173_FTU0_CH5) ),

        /* PTF14 */
        (uint8)( (1 <<  PORT174_ADC3_SE15) | \
        (1 <<  PORT174_GPIO) | \
        (1 <<  PORT174_SDADC0_BREAK0) | \
        (1 <<  PORT174_FCSPI2_PCS3) | \
        (1 <<  PORT174_FLEXCAN6_RX) | \
        (1 <<  PORT174_FCUART5_TX) | \
        (1 <<  PORT174_FTU1_CH1) ),

        /* PTF15 */
        (uint8)( (1 <<  PORT175_ADC2_SE18) | \
        (1 <<  PORT175_GPIO) | \
        (1 <<  PORT175_SDADC0_EXT_SIGN) | \
        (1 <<  PORT175_TCR_CLK) | \
        (1 <<  PORT175_eFTU_GTOM5) ),

        /* PTF16 */
        (uint8)( (1 <<  PORT176_GPIO) | \
        (1 <<  PORT176_SENT0_RXD2) | \
        (1 <<  PORT176_FCSPI5_SIN) | \
        (1 <<  PORT176_eFTU_GTOM12) ),

        /* PTF17 */
        (uint8)( (1 <<  PORT177_GPIO) | \
        (1 <<  PORT177_FTU_FLT21) | \
        (1 <<  PORT177_SENT0_RXD3) | \
        (1 <<  PORT177_FCSPI5_SOUT) | \
        (1 <<  PORT177_eFTU0_OUT_S6) ),

        /* PTF18 */
        (uint8)( (1 <<  PORT178_GPIO) | \
        (1 <<  PORT178_FCSPI4_PCS3) | \
        (1 <<  PORT178_FCUART1_TX) | \
        (1 <<  PORT178_eFTU0_IN0) | \
        (1 <<  PORT178_eFTU0_OUT_S24) ),

        /* PTF19 */
        (uint8)( (1 <<  PORT179_GPIO) | \
        (1 <<  PORT179_FCSPI4_PCS2) | \
        (1 <<  PORT179_FTU6_CH1) | \
        (1 <<  PORT179_FCUART1_RX) | \
        (1 <<  PORT179_eFTU0_IN1) | \
        (1 <<  PORT179_eFTU0_OUT_S25) ),

        /* PTF20 */
        (uint8)( (1 <<  PORT180_GPIO) | \
        (1 <<  PORT180_FCSPI4_PCS1) | \
        (1 <<  PORT180_FTU6_CH2) | \
        (1 <<  PORT180_FLEXCAN2_RX) | \
        (1 <<  PORT180_eFTU0_IN2) | \
        (1 <<  PORT180_eFTU0_OUT_S4) ),

        /* PTF21 */
        (uint8)( (1 <<  PORT181_GPIO) | \
        (1 <<  PORT181_FTU3_CH6) | \
        (1 <<  PORT181_FCIIC1_SCL) | \
        (1 <<  PORT181_CMP0_OUT) | \
        (1 <<  PORT181_RTC_CLKOUT) ),

        /* PTF22 */
        (uint8)( (1 <<  PORT182_GPIO) | \
        (1 <<  PORT182_FTU3_CH7) | \
        (1 <<  PORT182_FCIIC1_SDA) ),

        /* PTF23 */
        (uint8)( (1 <<  PORT183_ADC1_SE11) | \
        (1 <<  PORT183_GPIO) | \
        (1 <<  PORT183_SENT0_RXD0) | \
        (1 <<  PORT183_FCUART0_TX) | \
        (1 <<  PORT183_FCSPI0_SOUT) | \
        (1 <<  PORT183_LP_WAKEUP4) | \
        (1 <<  PORT183_eFTU_GTOM14) ),

        /* PTF24 */
        (uint8)( (1 <<  PORT184_CMP0_IN3) | \
        (1 <<  PORT184_GPIO) | \
        (1 <<  PORT184_FTU4_CH6) | \
        (1 <<  PORT184_SSI0_DIG_28_CH1) | \
        (1 <<  PORT184_ETM_TRACE_D9) | \
        (1 <<  PORT184_FCSPI2_PCS3) | \
        (1 <<  PORT184_eFTU0_OUT_S2) ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTG0 */
        (uint8)( (1 <<  PORT192_GPIO) | \
        (1 <<  PORT192_FCUART6_CTS) | \
        (1 <<  PORT192_eFTU0_IN5) | \
        (1 <<  PORT192_eFTU0_OUT_S29) ),

        /* PTG1 */
        (uint8)( (1 <<  PORT193_ADC0_SE0_ADC0_DIFF_P0) | \
        (1 <<  PORT193_GPIO) | \
        (1 <<  PORT193_FTU0_CH0) | \
        (1 <<  PORT193_FLEXCAN5_TX) ),

        /* PTG2 */
        (uint8)( (1 <<  PORT194_ADC0_SE4_ADC0_DIFF_N0) | \
        (1 <<  PORT194_GPIO) | \
        (1 <<  PORT194_FTU0_CH1) | \
        (1 <<  PORT194_FLEXCAN5_RX) ),

        /* PTG3 */
        (uint8)( (1 <<  PORT195_ADC0_SE20) | \
        (1 <<  PORT195_GPIO) | \
        (1 <<  PORT195_eFTU0_IN7) | \
        (1 <<  PORT195_ETM_TRACE_D8) | \
        (1 <<  PORT195_eFTU0_OUT_S8) ),

        /* PTG4 */
        (uint8)( (1 <<  PORT196_ADC0_SE21) | \
        (1 <<  PORT196_GPIO) | \
        (1 <<  PORT196_eFTU0_IN3) | \
        (1 <<  PORT196_ETM_TRACE_D9) | \
        (1 <<  PORT196_eFTU_GTOM7) ),

        /* PTG5 */
        (uint8)( (1 <<  PORT197_ADC0_SE22) | \
        (1 <<  PORT197_GPIO) | \
        (1 <<  PORT197_SSI0_DIG_28_CH2) | \
        (1 <<  PORT197_FTU6_CH3) | \
        (1 <<  PORT197_ETM_TRACE_D10) | \
        (1 <<  PORT197_eFTU0_OUT_S9) ),

        /* PTG6 */
        (uint8)( (1 <<  PORT198_GPIO) | \
        (1 <<  PORT198_eFTU0_IN6) | \
        (1 <<  PORT198_FCSPI3_SOUT) | \
        (1 <<  PORT198_TRGSEL_OUT3) ),

        /* PTG7 */
        (uint8)( (1 <<  PORT199_GPIO) | \
        (1 <<  PORT199_eFTU0_IN7) | \
        (1 <<  PORT199_FCSPI3_PCS0) | \
        (1 <<  PORT199_TRGSEL_OUT2) ),

        /* PTG8 */
        (uint8)( (1 <<  PORT200_GPIO) | \
        (1 <<  PORT200_eFTU0_IN0) | \
        (1 <<  PORT200_FCUART3_TX) | \
        (1 <<  PORT200_LDI0_DOE) | \
        (1 <<  PORT200_eFTU_GTOM10) ),

        /* PTG9 */
        (uint8)( (1 <<  PORT201_ADC3_SE7_ADC3_DIFF_N3) | \
        (1 <<  PORT201_GPIO) | \
        (1 <<  PORT201_FLEXCAN6_RX) | \
        (1 <<  PORT201_FTU0_CH6) | \
        (1 <<  PORT201_MSC0_SDI3) | \
        (1 <<  PORT201_eFTU_GTOM0) ),

        /* PTG10 */
        (uint8)( (1 <<  PORT202_SDADC0_CH_P2_ADC3_SE8) | \
        (1 <<  PORT202_GPIO) | \
        (1 <<  PORT202_FTU0_CH7) | \
        (1 <<  PORT202_MSC0_SDI3) | \
        (1 <<  PORT202_FTU2_QD_PHA) | \
        (1 <<  PORT202_eFTU0_OUT_S28) ),

        /* PTG11 */
        (uint8)( (1 <<  PORT203_SDADC0_CH_N2_ADC3_SE9) | \
        (1 <<  PORT203_GPIO) | \
        (1 <<  PORT203_eFTU0_OUT_S24) | \
        (1 <<  PORT203_FTU2_QD_PHB) | \
        (1 <<  PORT203_MSC0_EN0) ),

        /* PTG12 */
        (uint8)( (1 <<  PORT204_ADC3_SE16) | \
        (1 <<  PORT204_GPIO) | \
        (1 <<  PORT204_SDADC0_BREAK1) | \
        (1 <<  PORT204_FTU6_CH7) | \
        (1 <<  PORT204_MSC0_SDI1) | \
        (1 <<  PORT204_FTU1_CH0) ),

        /* PTG13 */
        (uint8)( (1 <<  PORT205_GPIO) | \
        (1 <<  PORT205_SDADC0_CH0) | \
        (1 <<  PORT205_FLEXCAN4_TX) | \
        (1 <<  PORT205_FCSPI4_PCS2) | \
        (1 <<  PORT205_MSC0_FCLP) | \
        (1 <<  PORT205_eFTU0_OUT_S29) ),

        /* PTG14 */
        (uint8)( (1 <<  PORT206_GPIO) | \
        (1 <<  PORT206_SDADC0_CH1) | \
        (1 <<  PORT206_FLEXCAN4_RX) | \
        (1 <<  PORT206_FCSPI4_PCS3) | \
        (1 <<  PORT206_eFTU0_OUT_S30) ),

        /* PTG15 */
        (uint8)( (1 <<  PORT207_GPIO) | \
        (1 <<  PORT207_FTU1_CH6) | \
        (1 <<  PORT207_FCIIC0_SCL) | \
        (1 <<  PORT207_TRGSEL_OUT2) | \
        (1 <<  PORT207_FCUART1_RX) | \
        (1 <<  PORT207_eFTU0_OUT_S31) ),

        /* PTG16 */
        (uint8)( (1 <<  PORT208_GPIO) | \
        (1 <<  PORT208_FTU1_CH7) | \
        (1 <<  PORT208_FCIIC0_SDA) | \
        (1 <<  PORT208_TRGSEL_OUT3) ),

        /* PTG17 */
        (uint8)( (1 <<  PORT209_GPIO) | \
        (1 <<  PORT209_FCUART6_RTS) | \
        (1 <<  PORT209_FLEXCAN7_TX) | \
        (1 <<  PORT209_FTU5_QD_PHA) | \
        (1 <<  PORT209_FTU6_CH1) ),

        /* PTG18 */
        (uint8)( (1 <<  PORT210_GPIO) | \
        (1 <<  PORT210_FCSPI4_PCS0) | \
        (1 <<  PORT210_FTU1_CH0) | \
        (1 <<  PORT210_FLEXCAN2_RX) | \
        (1 <<  PORT210_eFTU_GTOM5) ),

        /* PTG19 */
        (uint8)( (1 <<  PORT211_GPIO) | \
        (1 <<  PORT211_FCSPI4_SCK) | \
        (1 <<  PORT211_FTU1_CH1) | \
        (1 <<  PORT211_FLEXCAN2_TX) | \
        (1 <<  PORT211_eFTU_GTOM6) ),

        /* PTG20 */
        (uint8)( (1 <<  PORT212_GPIO) | \
        (1 <<  PORT212_FCSPI4_SIN) | \
        (1 <<  PORT212_FTU1_CH2) | \
        (1 <<  PORT212_FLEXCAN3_TX) | \
        (1 <<  PORT212_eFTU_GTOM7) ),

        /* PTG21 */
        (uint8)( (1 <<  PORT213_ADC1_SE10) | \
        (1 <<  PORT213_GPIO) | \
        (1 <<  PORT213_SENT0_RXD1) | \
        (1 <<  PORT213_FCUART0_RX) | \
        (1 <<  PORT213_FCSPI0_PCS0) | \
        (1 <<  PORT213_eFTU_GTOM15) ),

        /* PTG22 */
        (uint8)( (1 <<  PORT214_ADC1_SE9) | \
        (1 <<  PORT214_GPIO) | \
        (1 <<  PORT214_SENT0_RXD2) | \
        (1 <<  PORT214_FTU1_QD_PHA) | \
        (1 <<  PORT214_FCSPI0_SIN) | \
        (1 <<  PORT214_FLEXCAN7_TX) ),

        /* PTG23 */
        (uint8)( (1 <<  PORT215_ADC1_SE8) | \
        (1 <<  PORT215_GPIO) | \
        (1 <<  PORT215_SENT0_RXD3) | \
        (1 <<  PORT215_FTU1_QD_PHB) | \
        (1 <<  PORT215_FCSPI0_SCK) | \
        (1 <<  PORT215_FLEXCAN7_RX) ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTH0 */
        (uint8)( (1 <<  PORT224_ADC1_SE5_ADC1_DIFF_N1) | \
        (1 <<  PORT224_GPIO) | \
        (1 <<  PORT224_FCUART7_RTS) | \
        (1 <<  PORT224_eFTU_GTOM0) ),

        /* PTH1 */
        (uint8)( (1 <<  PORT225_ADC1_SE1_ADC1_DIFF_P1) | \
        (1 <<  PORT225_GPIO) | \
        (1 <<  PORT225_FCUART7_CTS) | \
        (1 <<  PORT225_eFTU_GTOM1) ),

        /* PTH2 */
        (uint8)( (1 <<  PORT226_ADC1_SE4_ADC1_DIFF_N0) | \
        (1 <<  PORT226_GPIO) | \
        (1 <<  PORT226_FCUART7_RX) | \
        (1 <<  PORT226_FTU6_CH3) | \
        (1 <<  PORT226_eFTU_GTOM2) ),

        /* PTH3 */
        (uint8)( (1 <<  PORT227_ADC0_SE23) | \
        (1 <<  PORT227_GPIO) | \
        (1 <<  PORT227_SSI0_DIG_14_CH2) | \
        (1 <<  PORT227_FTU6_CH4) | \
        (1 <<  PORT227_ETM_TRACE_D11) | \
        (1 <<  PORT227_eFTU0_OUT_S10) ),

        /* PTH4 */
        (uint8)( (1 <<  PORT228_GPIO) | \
        (1 <<  PORT228_FTU4_QD_PHA) | \
        (1 <<  PORT228_eFTU0_IN0) | \
        (1 <<  PORT228_ENET_PPS0) | \
        (1 <<  PORT228_ETM_TRACE_D12) | \
        (1 <<  PORT228_FCUART3_TX) ),

        /* PTH5 */
        (uint8)( (1 <<  PORT229_GPIO) | \
        (1 <<  PORT229_FTU4_QD_PHB) | \
        (1 <<  PORT229_eFTU0_IN1) | \
        (1 <<  PORT229_ENET_PPS1) | \
        (1 <<  PORT229_ETM_TRACE_D13) | \
        (1 <<  PORT229_FCUART3_RX) ),

        /* PTH6 */
        (uint8)( (1 <<  PORT230_GPIO) | \
        (1 <<  PORT230_eFTU0_IN1) | \
        (1 <<  PORT230_FCUART3_RX) | \
        (1 <<  PORT230_LDI0_SDI) | \
        (1 <<  PORT230_eFTU_GTOM11) ),

        /* PTH7 */
        (uint8)( (1 <<  PORT231_GPIO) | \
        (1 <<  PORT231_FTU_FLT8) | \
        (1 <<  PORT231_eFTU0_IN2) | \
        (1 <<  PORT231_ENET_COL) | \
        (1 <<  PORT231_eFTU_GTOM5) | \
        (1 <<  PORT231_FTU0_CH0) ),

        /* PTH8 */
        (uint8)( (1 <<  PORT232_GPIO) | \
        (1 <<  PORT232_eFTU0_IN5) | \
        (1 <<  PORT232_FTU0_CH4) | \
        (1 <<  PORT232_ENET_CRS) | \
        (1 <<  PORT232_eFTU_GTOM3) ),

        /* PTH9 */
        (uint8)( (1 <<  PORT233_ADC2_SE1_ADC2_DIFF_P1) | \
        (1 <<  PORT233_GPIO) | \
        (1 <<  PORT233_MSC0_FCLP) | \
        (1 <<  PORT233_FTU1_QD_PHB) | \
        (1 <<  PORT233_eFTU0_OUT_S19) ),

        /* PTH10 */
        (uint8)( (1 <<  PORT234_ADC2_SE5_ADC2_DIFF_N1) | \
        (1 <<  PORT234_GPIO) | \
        (1 <<  PORT234_FTU0_CH2) | \
        (1 <<  PORT234_MSC0_SOP) | \
        (1 <<  PORT234_eFTU0_OUT_S20) ),

        /* PTH11 */
        (uint8)( (1 <<  PORT235_GPIO) | \
        (1 <<  PORT235_MSC0_FCLP) | \
        (1 <<  PORT235_eFTU_GTOM2) ),

        /* PTH12 */
        (uint8)( (1 <<  PORT236_ADC2_SE21) | \
        (1 <<  PORT236_GPIO) | \
        (1 <<  PORT236_FCUART1_TX) ),

        /* PTH13 */
        (uint8)( (1 <<  PORT237_ADC2_SE22) | \
        (1 <<  PORT237_GPIO) | \
        (1 <<  PORT237_FCUART1_RX) | \
        (1 <<  PORT237_eFTU_GTOM10) ),

        /* PTH14 */
        (uint8)( (1 <<  PORT238_ADC2_SE23) | \
        (1 <<  PORT238_GPIO) | \
        (1 <<  PORT238_FCUART3_TX) | \
        (1 <<  PORT238_eFTU_GTOM11) ),

        /* PTH15 */
        (uint8)( (1 <<  PORT239_GPIO) | \
        (1 <<  PORT239_FCUART6_CTS) | \
        (1 <<  PORT239_FLEXCAN7_RX) | \
        (1 <<  PORT239_FTU5_QD_PHB) | \
        (1 <<  PORT239_FTU6_CH2) ),

        /* PTH16 */
        (uint8)( (1 <<  PORT240_GPIO) | \
        (1 <<  PORT240_FCSPI5_PCS0) | \
        (1 <<  PORT240_eFTU0_IN2) | \
        (1 <<  PORT240_FLEXCAN2_RX) | \
        (1 <<  PORT240_FCUART3_TX) | \
        (1 <<  PORT240_eFTU0_OUT_S20) ),

        /* PTH17 */
        (uint8)( (1 <<  PORT241_GPIO) | \
        (1 <<  PORT241_FCSPI5_SCK) | \
        (1 <<  PORT241_eFTU0_IN3) | \
        (1 <<  PORT241_FCUART3_RX) | \
        (1 <<  PORT241_eFTU0_OUT_S21) ),

        /* PTH18 */
        (uint8)( (1 <<  PORT242_GPIO) | \
        (1 <<  PORT242_FCSPI4_SOUT) | \
        (1 <<  PORT242_FTU1_CH3) | \
        (1 <<  PORT242_RTC_CLKOUT) | \
        (1 <<  PORT242_FLEXCAN3_RX) | \
        (1 <<  PORT242_eFTU_GTOM8) ),

        /* PTH19 */
        (uint8)( (1 <<  PORT243_ADC1_SE27) | \
        (1 <<  PORT243_GPIO) | \
        (1 <<  PORT243_SENT1_RXD0) | \
        (1 <<  PORT243_FTU1_CH4) | \
        (1 <<  PORT243_TRGSEL_OUT0) | \
        (1 <<  PORT243_eFTU_GTOM12) ),

        /* PTH20 */
        (uint8)( (1 <<  PORT244_ADC1_SE26) | \
        (1 <<  PORT244_GPIO) | \
        (1 <<  PORT244_SENT1_RXD1) | \
        (1 <<  PORT244_FTU1_CH5) | \
        (1 <<  PORT244_TRGSEL_OUT1) | \
        (1 <<  PORT244_eFTU_GTOM13) ),

        /* PTH21 */
        (uint8)( (1 <<  PORT245_GPIO) | \
        (1 <<  PORT245_eFTU0_IN4) | \
        (1 <<  PORT245_FCSPI3_SCK) | \
        (1 <<  PORT245_FTU_FLT4) | \
        (1 <<  PORT245_TRGSEL_OUT5) ),

        /* PTH22 */
        (uint8)( (1 <<  PORT246_GPIO) | \
        (1 <<  PORT246_FTU7_CH6) | \
        (1 <<  PORT246_eFTU0_IN7) | \
        (1 <<  PORT246_FCIIC1_SCL) | \
        (1 <<  PORT246_eFTU0_OUT_S10) ),

        /* PTH23 */
        (uint8)( (1 <<  PORT247_GPIO) | \
        (1 <<  PORT247_FLEXCAN2_RX) | \
        (1 <<  PORT247_eFTU0_OUT_S2) ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTI0 */
        (uint8)( (1 <<  PORT256_ADC1_SE0_ADC1_DIFF_P0) | \
        (1 <<  PORT256_GPIO) | \
        (1 <<  PORT256_FCUART7_TX) | \
        (1 <<  PORT256_FTU6_CH4) | \
        (1 <<  PORT256_eFTU_GTOM9) ),

        /* PTI1 */
        (uint8)( (1 <<  PORT257_GPIO) | \
        (1 <<  PORT257_FCUART7_CTS) | \
        (1 <<  PORT257_eFTU_GTOM4) ),

        /* PTI2 */
        (uint8)( (1 <<  PORT258_ADC0_SE3_ADC0_DIFF_P3) | \
        (1 <<  PORT258_GPIO) | \
        (1 <<  PORT258_FLEXCAN4_TX) | \
        (1 <<  PORT258_FCUART7_RX) | \
        (1 <<  PORT258_eFTU0_IN3) ),

        /* PTI3 */
        (uint8)( (1 <<  PORT259_GPIO) | \
        (1 <<  PORT259_ETM_TRACE_D14) | \
        (1 <<  PORT259_eFTU_GTOM8) ),

        /* PTI4 */
        (uint8)( (1 <<  PORT260_GPIO) | \
        (1 <<  PORT260_ETM_TRACE_D15) | \
        (1 <<  PORT260_eFTU_GTOM9) ),

        /* PTI5 */
        (uint8)( (1 <<  PORT261_GPIO) | \
        (1 <<  PORT261_FTU6_CH3) | \
        (1 <<  PORT261_eFTU0_IN4) | \
        (1 <<  PORT261_eFTU0_OUT_S7) ),

        /* PTI6 */
        (uint8)( (1 <<  PORT262_ADC3_SE28) | \
        (1 <<  PORT262_GPIO) | \
        (1 <<  PORT262_FTU0_CH0) | \
        (1 <<  PORT262_eFTU_GTOM12) ),

        /* PTI7 */
        (uint8)( (1 <<  PORT263_ADC3_SE27) | \
        (1 <<  PORT263_GPIO) | \
        (1 <<  PORT263_FTU0_CH1) | \
        (1 <<  PORT263_MSC0_EN0) | \
        (1 <<  PORT263_eFTU_GTOM13) ),

        /* PTI8 */
        (uint8)( (1 <<  PORT264_ADC3_SE26) | \
        (1 <<  PORT264_GPIO) | \
        (1 <<  PORT264_FTU0_CH2) | \
        (1 <<  PORT264_MSC0_EN1) | \
        (1 <<  PORT264_eFTU_GTOM14) ),

        /* PTI9 */
        (uint8)( (1 <<  PORT265_GPIO) | \
        (1 <<  PORT265_FTU6_CH7) | \
        (1 <<  PORT265_eFTU0_OUT_S28) | \
        (1 <<  PORT265_FCSPI4_PCS1) | \
        (1 <<  PORT265_MSC0_SOP) | \
        (1 <<  PORT265_FCSPI5_PCS3) ),

        /* PTI10 */
        (uint8)( (1 <<  PORT266_GPIO) | \
        (1 <<  PORT266_SDADC0_PWM_P) | \
        (1 <<  PORT266_FCUART4_TX) | \
        (1 <<  PORT266_eFTU_GTOM3) ),

        /* PTI11 */
        (uint8)( (1 <<  PORT267_GPIO) | \
        (1 <<  PORT267_SDADC0_PWM_N) | \
        (1 <<  PORT267_FCUART4_RX) | \
        (1 <<  PORT267_eFTU_GTOM4) ),

        /* PTI12 */
        (uint8)( (1 <<  PORT268_ADC2_SE24) | \
        (1 <<  PORT268_GPIO) | \
        (1 <<  PORT268_FCUART3_RX) | \
        (1 <<  PORT268_eFTU_GTOM13) ),

        /* PTI13 */
        (uint8)( (1 <<  PORT269_ADC3_SE11) | \
        (1 <<  PORT269_GPIO) | \
        (1 <<  PORT269_FTU0_CH4) | \
        (1 <<  PORT269_eFTU0_OUT_S17) | \
        (1 <<  PORT269_MSC0_EN1) ),

        /* PTI14 */
        (uint8)( (1 <<  PORT270_ADC3_SE12) | \
        (1 <<  PORT270_GPIO) | \
        (1 <<  PORT270_eFTU_GTOM1) ),

        /* PTI15 */
        (uint8)( (1 <<  PORT271_GPIO) | \
        (1 <<  PORT271_FCSPI5_SIN) | \
        (1 <<  PORT271_eFTU0_IN4) | \
        (1 <<  PORT271_FLEXCAN1_TX) | \
        (1 <<  PORT271_eFTU0_OUT_S22) ),

        /* PTI16 */
        (uint8)( (1 <<  PORT272_GPIO) | \
        (1 <<  PORT272_FCSPI5_SOUT) | \
        (1 <<  PORT272_eFTU0_IN5) | \
        (1 <<  PORT272_FLEXCAN1_RX) | \
        (1 <<  PORT272_eFTU0_OUT_S23) ),

        /* PTI17 */
        (uint8)( (1 <<  PORT273_GPIO) | \
        (1 <<  PORT273_FTU_TCK2) | \
        (1 <<  PORT273_eFTU0_IN6) | \
        (1 <<  PORT273_FLEXCAN2_TX) | \
        (1 <<  PORT273_FTU_FLT20) | \
        (1 <<  PORT273_FTU6_CH7) | \
        (1 <<  PORT273_eFTU_GTOM7) ),

        /* PTI18 */
        (uint8)( (1 <<  PORT274_GPIO) | \
        (1 <<  PORT274_SENT1_RXD2) | \
        (1 <<  PORT274_FTU1_CH6) | \
        (1 <<  PORT274_FCUART2_TX) | \
        (1 <<  PORT274_eFTU0_IN2) | \
        (1 <<  PORT274_FLEXCAN0_TX) | \
        (1 <<  PORT274_eFTU0_OUT_S26) ),

        /* PTI19 */
        (uint8)( (1 <<  PORT275_GPIO) | \
        (1 <<  PORT275_SENT1_RXD3) | \
        (1 <<  PORT275_FTU1_CH7) | \
        (1 <<  PORT275_FCUART2_RX) | \
        (1 <<  PORT275_eFTU0_IN3) | \
        (1 <<  PORT275_FLEXCAN0_RX) | \
        (1 <<  PORT275_eFTU0_OUT_S27) ),

        /* PTI20 */
        (uint8)( (1 <<  PORT276_GPIO) | \
        (1 <<  PORT276_FTU_TCK2) | \
        (1 <<  PORT276_FTU_FLT20) | \
        (1 <<  PORT276_FTU6_CH7) ),

        /* PTI21 */
        (uint8)( (1 <<  PORT277_CMP0_IN4) | \
        (1 <<  PORT277_GPIO) | \
        (1 <<  PORT277_FTU4_CH5) | \
        (1 <<  PORT277_SSI0_DIG_14_CH1) | \
        (1 <<  PORT277_ETM_TRACE_D14) | \
        (1 <<  PORT277_FCSPI2_PCS2) | \
        (1 <<  PORT277_eFTU0_OUT_S3) ),

        /* PTI22 */
        (uint8)( (1 <<  PORT278_CMP0_IN5) | \
        (1 <<  PORT278_GPIO) | \
        (1 <<  PORT278_FTU4_CH4) | \
        (1 <<  PORT278_ETM_TRACE_D15) | \
        (1 <<  PORT278_eFTU0_OUT_S4) ),

        /* PTI23 */
        (uint8)( (1 <<  PORT279_CMP0_IN2) | \
        (1 <<  PORT279_GPIO) | \
        (1 <<  PORT279_FTU4_CH7) | \
        (1 <<  PORT279_SSI0_DIG_14_CH0) | \
        (1 <<  PORT279_FCUART7_CTS) | \
        (1 <<  PORT279_eFTU0_OUT_S1) )

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
