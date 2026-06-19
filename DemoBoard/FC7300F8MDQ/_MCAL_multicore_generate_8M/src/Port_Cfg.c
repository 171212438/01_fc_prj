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
        (1 <<  PORT1_FLEXCAN11_RX) | \
        (1 <<  PORT1_SENT1_RXD0) | \
        (1 <<  PORT1_FTU1_QD_PHA) | \
        (1 <<  PORT1_FCUART0_RTS) | \
        (1 <<  PORT1_TRGSEL_OUT0) ),

        /* PTA2 */
        (uint8)( (1 <<  PORT2_ADC5_SE22) | \
        (1 <<  PORT2_GPIO) | \
        (1 <<  PORT2_FTU2_CH3) | \
        (1 <<  PORT2_FCIIC0_SDA) | \
        (1 <<  PORT2_MSC1_FCLP) | \
        (1 <<  PORT2_eFTU_GTOM15) | \
        (1 <<  PORT2_FCUART0_RX) | \
        (1 <<  PORT2_FLEXCORE_TDO) ),

        /* PTA3 */
        (uint8)( (1 <<  PORT3_ADC3_SE21) | \
        (1 <<  PORT3_GPIO) | \
        (1 <<  PORT3_FTU2_CH2) | \
        (1 <<  PORT3_FCIIC0_SCL) | \
        (1 <<  PORT3_TPU0_CH14) | \
        (1 <<  PORT3_eFTU_GTOM14) | \
        (1 <<  PORT3_FCUART0_TX) | \
        (1 <<  PORT3_FLEXCORE_TCLK) ),

        /* PTA4 */
        (uint8)( (1 <<  PORT4_GPIO) | \
        (1 <<  PORT4_CMP0_OUT) | \
        (1 <<  PORT4_JTAG_TMS_SWD_DIO) ),

        (uint8)0x00,

        /* PTA6 */
        (uint8)( (1 <<  PORT6_ADC5_SE13) | \
        (1 <<  PORT6_GPIO) | \
        (1 <<  PORT6_FTU5_CH0) | \
        (1 <<  PORT6_FTU_FLT13) | \
        (1 <<  PORT6_FCUART1_CTS) | \
        (1 <<  PORT6_TRGSEL_OUT4) | \
        (1 <<  PORT6_eFTU1_OUT_S30) | \
        (1 <<  PORT6_FCSPI7_SIN) ),

        /* PTA7 */
        (uint8)( (1 <<  PORT7_ADC4_SE12) | \
        (1 <<  PORT7_GPIO) | \
        (1 <<  PORT7_FTU7_CH6) | \
        (1 <<  PORT7_FTU_FLT12) | \
        (1 <<  PORT7_FCUART1_RTS) | \
        (1 <<  PORT7_FCSPI4_SIN) | \
        (1 <<  PORT7_eFTU1_OUT_S28) | \
        (1 <<  PORT7_TPU0_CH11) ),

        /* PTA8 */
        (uint8)( (1 <<  PORT8_HSADC3_CH0) | \
        (1 <<  PORT8_GPIO) | \
        (1 <<  PORT8_FCUART2_RX) | \
        (1 <<  PORT8_eFTU2_IN5) | \
        (1 <<  PORT8_FTU1_QD_PHB) | \
        (1 <<  PORT8_eFTU0_OUT_S13) ),

        /* PTA9 */
        (uint8)( (1 <<  PORT9_HSADC3_CH1) | \
        (1 <<  PORT9_GPIO) | \
        (1 <<  PORT9_FCUART2_TX) | \
        (1 <<  PORT9_RTC_CLKOUT) | \
        (1 <<  PORT9_SENT0_RXD0) | \
        (1 <<  PORT9_eFTU2_IN4) | \
        (1 <<  PORT9_eFTU2_OUT_S30) ),

        /* PTA10 */
        (uint8)( (1 <<  PORT10_GPIO) | \
        (1 <<  PORT10_FTU3_CH1) | \
        (1 <<  PORT10_JTAG_TDO) ),

        /* PTA11 */
        (uint8)( (1 <<  PORT11_GPIO) | \
        (1 <<  PORT11_FTU3_CH0) | \
        (1 <<  PORT11_FLEXCAN1_TX) | \
        (1 <<  PORT11_FCSPI0_PCS3) | \
        (1 <<  PORT11_eFTU0_OUT_S11) | \
        (1 <<  PORT11_NMI_b) ),

        /* PTA12 */
        (uint8)( (1 <<  PORT12_HSADC2_CH4) | \
        (1 <<  PORT12_GPIO) | \
        (1 <<  PORT12_FTU0_CH7) | \
        (1 <<  PORT12_FLEXCAN1_RX) | \
        (1 <<  PORT12_SENT0_RXD1) | \
        (1 <<  PORT12_FCSPI0_SOUT) | \
        (1 <<  PORT12_FTU2_QD_PHB) | \
        (1 <<  PORT12_eFTU0_OUT_S10) ),

        /* PTA13 */
        (uint8)( (1 <<  PORT13_GPIO) | \
        (1 <<  PORT13_FTU0_CH3) | \
        (1 <<  PORT13_eFTU1_IN6) | \
        (1 <<  PORT13_FCUART0_RX) | \
        (1 <<  PORT13_FTU2_QD_PHA) | \
        (1 <<  PORT13_eFTU0_OUT_S5) ),

        /* PTA14 */
        (uint8)( (1 <<  PORT14_GPIO) | \
        (1 <<  PORT14_FTU_FLT17) | \
        (1 <<  PORT14_AONTIMER0_CLK1) | \
        (1 <<  PORT14_LP_WAKEUP2) | \
        (1 <<  PORT14_FCUART0_TX) | \
        (1 <<  PORT14_eFTU1_IN3) | \
        (1 <<  PORT14_eFTU0_OUT_S2) ),

        /* PTA15 */
        (uint8)( (1 <<  PORT15_ADC2_SE17) | \
        (1 <<  PORT15_GPIO) | \
        (1 <<  PORT15_FTU6_CH4) | \
        (1 <<  PORT15_QDT1_PHB) | \
        (1 <<  PORT15_FCUART10_TX) | \
        (1 <<  PORT15_TRGSEL_OUT0) | \
        (1 <<  PORT15_FLEXCAN6_RX) | \
        (1 <<  PORT15_SDADC1_EXT_SIGN) ),

        /* PTA16 */
        (uint8)( (1 <<  PORT16_GPIO) | \
        (1 <<  PORT16_FTU6_CH2) | \
        (1 <<  PORT16_FCSMU_PIN0) | \
        (1 <<  PORT16_eFTU1_IN1) | \
        (1 <<  PORT16_eFTU2_OUT_S5) ),

        /* PTA17 */
        (uint8)( (1 <<  PORT17_ADC5_SE15) | \
        (1 <<  PORT17_GPIO) | \
        (1 <<  PORT17_FTU5_CH5) | \
        (1 <<  PORT17_FTU_FLT15) | \
        (1 <<  PORT17_FCSPI1_PCS2) | \
        (1 <<  PORT17_FLEXCAN4_TX) | \
        (1 <<  PORT17_eFTU2_OUT_S25) | \
        (1 <<  PORT17_eFTU0_OUT_S30) ),

        /* PTA18 */
        (uint8)( (1 <<  PORT18_HSADC0_CH0) | \
        (1 <<  PORT18_GPIO) | \
        (1 <<  PORT18_FTU3_CH6) | \
        (1 <<  PORT18_FCUART1_TX) | \
        (1 <<  PORT18_eFTU_GTOM8) ),

        /* PTA19 */
        (uint8)( (1 <<  PORT19_HSADC0_CH1) | \
        (1 <<  PORT19_GPIO) | \
        (1 <<  PORT19_FCUART1_RX) | \
        (1 <<  PORT19_FTU6_CH7) | \
        (1 <<  PORT19_eFTU_GTOM9) | \
        (1 <<  PORT19_FLEXCAN8_TX) ),

        /* PTA20 */
        (uint8)( (1 <<  PORT20_HSADC1_CH0) | \
        (1 <<  PORT20_GPIO) | \
        (1 <<  PORT20_FTU3_CH7) | \
        (1 <<  PORT20_FCUART3_RTS) | \
        (1 <<  PORT20_eFTU_GTOM10) | \
        (1 <<  PORT20_FLEXCAN8_RX) ),

        /* PTA21 */
        (uint8)( (1 <<  PORT21_ADC1_SE4_ADC1_DIFF_N0) | \
        (1 <<  PORT21_GPIO) | \
        (1 <<  PORT21_FCUART6_RX) | \
        (1 <<  PORT21_FCUART3_CTS) | \
        (1 <<  PORT21_FTU2_CH5) | \
        (1 <<  PORT21_eFTU2_OUT_S8) | \
        (1 <<  PORT21_FLEXCAN13_TX) | \
        (1 <<  PORT21_eFTU_GTOM10) ),

        /* PTA22 */
        (uint8)( (1 <<  PORT22_ADC1_SE0_ADC1_DIFF_P0) | \
        (1 <<  PORT22_GPIO) | \
        (1 <<  PORT22_FTU2_CH3) | \
        (1 <<  PORT22_FTU2_QD_PHA) | \
        (1 <<  PORT22_FCUART7_RX) | \
        (1 <<  PORT22_eFTU2_OUT_S6) | \
        (1 <<  PORT22_eFTU_GTOM8) ),

        /* PTA23 */
        (uint8)( (1 <<  PORT23_ADC1_SE8_CMP0_IN0) | \
        (1 <<  PORT23_GPIO) | \
        (1 <<  PORT23_FTU4_CH1) | \
        (1 <<  PORT23_FCUART3_RX) | \
        (1 <<  PORT23_ETM_TRACE_D0) | \
        (1 <<  PORT23_eFTU1_OUT_S11) | \
        (1 <<  PORT23_QDT0_PHA) | \
        (1 <<  PORT23_TPU0_CH3) ),

        /* PTA24 */
        (uint8)( (1 <<  PORT24_ADC0_SE9_CMP0_IN1) | \
        (1 <<  PORT24_GPIO) | \
        (1 <<  PORT24_FTU4_CH0) | \
        (1 <<  PORT24_FCUART3_TX) | \
        (1 <<  PORT24_ETM_TRACE_D1) | \
        (1 <<  PORT24_eFTU1_OUT_S12) | \
        (1 <<  PORT24_QDT0_PHB) | \
        (1 <<  PORT24_TPU0_CH4) ),

        /* PTA25 */
        (uint8)( (1 <<  PORT25_ADC1_SE3_ADC1_DIFF_P3) | \
        (1 <<  PORT25_GPIO) | \
        (1 <<  PORT25_FTU4_CH3) | \
        (1 <<  PORT25_TPU0_CH22) | \
        (1 <<  PORT25_HRPWM0_CH6) | \
        (1 <<  PORT25_FCSPI2_SOUT) | \
        (1 <<  PORT25_eFTU1_OUT_S8) | \
        (1 <<  PORT25_HSADC2_BFL) ),

        /* PTA26 */
        (uint8)( (1 <<  PORT26_ADC0_SE2_ADC0_DIFF_P2) | \
        (1 <<  PORT26_GPIO) | \
        (1 <<  PORT26_FTU2_CH2) | \
        (1 <<  PORT26_TPU0_CH0) | \
        (1 <<  PORT26_SSI0_DIG_14_CH3) | \
        (1 <<  PORT26_eFTU2_OUT_S2) | \
        (1 <<  PORT26_FLEXCAN12_TX) | \
        (1 <<  PORT26_eFTU1_OUT_S0) ),

        /* PTA27 */
        (uint8)( (1 <<  PORT27_ADC1_SE9) | \
        (1 <<  PORT27_GPIO) | \
        (1 <<  PORT27_FTU5_CH7) | \
        (1 <<  PORT27_FCUART0_TX) | \
        (1 <<  PORT27_ETM_TRACE_D2) | \
        (1 <<  PORT27_FCSPI1_PCS0) | \
        (1 <<  PORT27_TPU0_CH13) | \
        (1 <<  PORT27_eFTU2_OUT_S16) ),

        /* PTA28 */
        (uint8)( (1 <<  PORT28_ADC1_SE10) | \
        (1 <<  PORT28_GPIO) | \
        (1 <<  PORT28_FTU5_CH5) | \
        (1 <<  PORT28_FCUART0_RX) | \
        (1 <<  PORT28_eFTU_GTOM12) | \
        (1 <<  PORT28_FCSPI1_SCK) | \
        (1 <<  PORT28_TPU0_CH15) | \
        (1 <<  PORT28_eFTU2_OUT_S18) ),

        /* PTA29 */
        (uint8)( (1 <<  PORT29_ADC0_SE11) | \
        (1 <<  PORT29_GPIO) | \
        (1 <<  PORT29_FTU5_CH4) | \
        (1 <<  PORT29_HSADC3_BFL) | \
        (1 <<  PORT29_eFTU_GTOM13) | \
        (1 <<  PORT29_FCSPI1_SIN) | \
        (1 <<  PORT29_TPU0_CH16) | \
        (1 <<  PORT29_eFTU2_OUT_S19) ),

        /* PTA30 */
        (uint8)( (1 <<  PORT30_ADC0_SE15_CMP0_IN4) | \
        (1 <<  PORT30_GPIO) | \
        (1 <<  PORT30_FTU5_CH2) | \
        (1 <<  PORT30_FCUART2_RX) | \
        (1 <<  PORT30_ETM_TRACE_D5) | \
        (1 <<  PORT30_FCSPI1_PCS2) | \
        (1 <<  PORT30_eFTU0_OUT_S19) | \
        (1 <<  PORT30_QDT1_PHB) ),

        /* PTA31 */
        (uint8)( (1 <<  PORT31_ADC0_SE17_ADC1_SE17) | \
        (1 <<  PORT31_GPIO) | \
        (1 <<  PORT31_FTU0_CH6) | \
        (1 <<  PORT31_FCUART5_TX) | \
        (1 <<  PORT31_FTU_FLT3) | \
        (1 <<  PORT31_FLEXCAN3_TX) | \
        (1 <<  PORT31_eFTU0_OUT_S21) | \
        (1 <<  PORT31_eFTU1_OUT_S1) ),

        /* PTB0 */
        (uint8)( (1 <<  PORT32_ADC3_SE3_ADC3_DIFF_P3) | \
        (1 <<  PORT32_GPIO) | \
        (1 <<  PORT32_QDT3_INDEX) | \
        (1 <<  PORT32_HSADC2_BFL) | \
        (1 <<  PORT32_eFTU0_OUT_S17) | \
        (1 <<  PORT32_FLEXCAN0_RX) | \
        (1 <<  PORT32_FTU3_CH6) | \
        (1 <<  PORT32_eFTU1_OUT_S23) ),

        /* PTB1 */
        (uint8)( (1 <<  PORT33_ADC4_SE7_ADC4_DIFF_N3) | \
        (1 <<  PORT33_GPIO) | \
        (1 <<  PORT33_QDT3_HOME) | \
        (1 <<  PORT33_FTU_TCK0) | \
        (1 <<  PORT33_eFTU0_OUT_S16) | \
        (1 <<  PORT33_FLEXCAN0_TX) | \
        (1 <<  PORT33_FTU3_CH5) | \
        (1 <<  PORT33_eFTU1_OUT_S31) ),

        (uint8)0x00,

        /* PTB3 */
        (uint8)( (1 <<  PORT35_ADC5_SE8) | \
        (1 <<  PORT35_GPIO) | \
        (1 <<  PORT35_QDT3_PHB) | \
        (1 <<  PORT35_FTU1_QD_PHA) | \
        (1 <<  PORT35_FCSPI2_SCK) | \
        (1 <<  PORT35_eFTU0_OUT_S19) | \
        (1 <<  PORT35_FTU3_CH7) | \
        (1 <<  PORT35_TPU0_CH3) ),

        /* PTB4 */
        (uint8)( (1 <<  PORT36_GPIO) | \
        (1 <<  PORT36_FTU7_CH7) | \
        (1 <<  PORT36_TPU0_CH6) | \
        (1 <<  PORT36_FCUART9_RX) | \
        (1 <<  PORT36_ENET_MDIO) | \
        (1 <<  PORT36_eFTU2_IN2) | \
        (1 <<  PORT36_eFTU0_OUT_S2) ),

        /* PTB5 */
        (uint8)( (1 <<  PORT37_GPIO) | \
        (1 <<  PORT37_FTU6_CH2) | \
        (1 <<  PORT37_FCIIC1_SDA) | \
        (1 <<  PORT37_TPU0_CH5) | \
        (1 <<  PORT37_ENET_MDC) | \
        (1 <<  PORT37_eFTU2_IN1) | \
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
        (1 <<  PORT40_QDT1_HOME) | \
        (1 <<  PORT40_FCUART11_RX) | \
        (1 <<  PORT40_MSC1_SDI0) | \
        (1 <<  PORT40_FCUART1_CTS) | \
        (1 <<  PORT40_eFTU_GTOM0) ),

        /* PTB9 */
        (uint8)( (1 <<  PORT41_GPIO) | \
        (1 <<  PORT41_FTU2_CH7) | \
        (1 <<  PORT41_FCUART12_RX) | \
        (1 <<  PORT41_TPU0_CH11) | \
        (1 <<  PORT41_TRGSEL_OUT1) | \
        (1 <<  PORT41_eFTU2_IN2) | \
        (1 <<  PORT41_eFTU_GTOM7) ),

        /* PTB10 */
        (uint8)( (1 <<  PORT42_ADC4_SE23) | \
        (1 <<  PORT42_GPIO) | \
        (1 <<  PORT42_FTU2_CH5) | \
        (1 <<  PORT42_TRGSEL_OUT2) | \
        (1 <<  PORT42_TPU0_CH12) | \
        (1 <<  PORT42_FLEXCAN7_RX) | \
        (1 <<  PORT42_eFTU2_IN0) | \
        (1 <<  PORT42_eFTU_GTOM12) ),

        /* PTB11 */
        (uint8)( (1 <<  PORT43_V11_BASE_DRIVER) | \
        (1 <<  PORT43_GPIO) | \
        (1 <<  PORT43_FTU6_CH0) | \
        (1 <<  PORT43_eFTU2_IN0) | \
        (1 <<  PORT43_TPU0_CH24) | \
        (1 <<  PORT43_eFTU2_OUT_S15) ),

        /* PTB12 */
        (uint8)( (1 <<  PORT44_ADC4_SE18) | \
        (1 <<  PORT44_GPIO) | \
        (1 <<  PORT44_eFTU1_IN3) | \
        (1 <<  PORT44_FCSPI5_PCS1) | \
        (1 <<  PORT44_FLEXCAN2_RX) | \
        (1 <<  PORT44_eFTU2_OUT_S30) | \
        (1 <<  PORT44_eFTU0_OUT_S30) ),

        /* PTB13 */
        (uint8)( (1 <<  PORT45_ADC5_SE18) | \
        (1 <<  PORT45_GPIO) | \
        (1 <<  PORT45_FTU3_CH2) | \
        (1 <<  PORT45_MSC1_SDI3) | \
        (1 <<  PORT45_QDT2_PHB) | \
        (1 <<  PORT45_eFTU0_OUT_S27) | \
        (1 <<  PORT45_eFTU1_OUT_S19) ),

        /* PTB14 */
        (uint8)( (1 <<  PORT46_ADC3_SE17) | \
        (1 <<  PORT46_GPIO) | \
        (1 <<  PORT46_FTU3_CH1) | \
        (1 <<  PORT46_FCUART4_RX) | \
        (1 <<  PORT46_MSC1_EN3) | \
        (1 <<  PORT46_QDT2_PHA) | \
        (1 <<  PORT46_eFTU0_OUT_S26) | \
        (1 <<  PORT46_eFTU1_OUT_S18) ),

        /* PTB15 */
        (uint8)( (1 <<  PORT47_ADC4_SE17) | \
        (1 <<  PORT47_GPIO) | \
        (1 <<  PORT47_FTU3_CH0) | \
        (1 <<  PORT47_FCUART4_TX) | \
        (1 <<  PORT47_MSC1_SDI2) | \
        (1 <<  PORT47_QDT2_INDEX) | \
        (1 <<  PORT47_FLEXCAN12_RX) | \
        (1 <<  PORT47_eFTU1_OUT_S17) ),

        /* PTB16 */
        (uint8)( (1 <<  PORT48_ADC5_SE17) | \
        (1 <<  PORT48_GPIO) | \
        (1 <<  PORT48_FTU5_CH7) | \
        (1 <<  PORT48_FCUART5_CTS) | \
        (1 <<  PORT48_MSC1_EN2) | \
        (1 <<  PORT48_QDT2_HOME) | \
        (1 <<  PORT48_FLEXCAN12_TX) | \
        (1 <<  PORT48_eFTU1_OUT_S16) ),

        /* PTB17 */
        (uint8)( (1 <<  PORT49_ADC4_SE15) | \
        (1 <<  PORT49_GPIO) | \
        (1 <<  PORT49_FTU5_CH6) | \
        (1 <<  PORT49_eFTU0_OUT_S31) | \
        (1 <<  PORT49_FCSPI1_PCS3) | \
        (1 <<  PORT49_FLEXCAN4_RX) | \
        (1 <<  PORT49_eFTU0_OUT_S25) | \
        (1 <<  PORT49_eFTU1_OUT_S26) ),

        /* PTB18 */
        (uint8)( (1 <<  PORT50_ADC0_SE18_ADC1_SE18) | \
        (1 <<  PORT50_GPIO) | \
        (1 <<  PORT50_FTU0_CH5) | \
        (1 <<  PORT50_FCUART5_RX) | \
        (1 <<  PORT50_SSI0_DIG_14_CH2) | \
        (1 <<  PORT50_FLEXCAN3_RX) | \
        (1 <<  PORT50_eFTU0_OUT_S22) | \
        (1 <<  PORT50_eFTU1_OUT_S2) ),

        /* PTB19 */
        (uint8)( (1 <<  PORT51_ADC0_SE19_ADC1_SE19) | \
        (1 <<  PORT51_GPIO) | \
        (1 <<  PORT51_FTU0_CH4) | \
        (1 <<  PORT51_TPU0_CH9) | \
        (1 <<  PORT51_SSI0_DIG_28_CH2) | \
        (1 <<  PORT51_eFTU2_OUT_S27) | \
        (1 <<  PORT51_eFTU0_OUT_S23) | \
        (1 <<  PORT51_eFTU1_OUT_S3) ),

        /* PTB20 */
        (uint8)( (1 <<  PORT52_ADC5_SE0_ADC5_DIFF_P0) | \
        (1 <<  PORT52_GPIO) | \
        (1 <<  PORT52_FTU1_CH0) | \
        (1 <<  PORT52_FCUART1_TX) | \
        (1 <<  PORT52_SDADC0_PWM_P) | \
        (1 <<  PORT52_ENET_PPS0) | \
        (1 <<  PORT52_eFTU2_OUT_S0) | \
        (1 <<  PORT52_SCG_CLKOUT) ),

        /* PTB21 */
        (uint8)( (1 <<  PORT53_ADC5_SE4_ADC5_DIFF_N0) | \
        (1 <<  PORT53_GPIO) | \
        (1 <<  PORT53_FTU1_CH1) | \
        (1 <<  PORT53_FCUART1_RX) | \
        (1 <<  PORT53_SDADC0_PWM_N) | \
        (1 <<  PORT53_ENET_PPS1) | \
        (1 <<  PORT53_eFTU2_OUT_S1) | \
        (1 <<  PORT53_RTC_CLKOUT) ),

        /* PTB22 */
        (uint8)( (1 <<  PORT54_GPIO) | \
        (1 <<  PORT54_eFTU0_IN3) | \
        (1 <<  PORT54_FCUART1_TX) | \
        (1 <<  PORT54_ETM_TRACE_D5) | \
        (1 <<  PORT54_HSADC1_IO2) | \
        (1 <<  PORT54_eFTU0_OUT_S11) | \
        (1 <<  PORT54_FCSPI3_PCS0) ),

        /* PTB23 */
        (uint8)( (1 <<  PORT55_GPIO) | \
        (1 <<  PORT55_FTU_FLT9) | \
        (1 <<  PORT55_FCSPI2_PCS0) | \
        (1 <<  PORT55_FTU7_CH3) | \
        (1 <<  PORT55_ENET_RXD3) | \
        (1 <<  PORT55_QDT2_INDEX) | \
        (1 <<  PORT55_eFTU1_OUT_S0) ),

        /* PTB24 */
        (uint8)( (1 <<  PORT56_ADC5_SE1_ADC5_DIFF_P1) | \
        (1 <<  PORT56_GPIO) | \
        (1 <<  PORT56_FTU1_CH2) | \
        (1 <<  PORT56_SDADC0_PWM_P) | \
        (1 <<  PORT56_MSC0_FCLP) | \
        (1 <<  PORT56_eFTU0_OUT_S24) | \
        (1 <<  PORT56_eFTU2_OUT_S2) | \
        (1 <<  PORT56_TPU0_CH25) ),

        /* PTB25 */
        (uint8)( (1 <<  PORT57_ADC3_SE7_ADC3_DIFF_N3) | \
        (1 <<  PORT57_GPIO) | \
        (1 <<  PORT57_QDT3_PHA) | \
        (1 <<  PORT57_HSADC3_BFL) | \
        (1 <<  PORT57_FCSPI2_PCS0) | \
        (1 <<  PORT57_eFTU0_OUT_S18) | \
        (1 <<  PORT57_FTU3_CH6) | \
        (1 <<  PORT57_TPU0_CH2) ),

        /* PTB26 */
        (uint8)( (1 <<  PORT58_GPIO) | \
        (1 <<  PORT58_FTU6_CH0) | \
        (1 <<  PORT58_HSADC3_IO2) | \
        (1 <<  PORT58_HSADC0_IO0) | \
        (1 <<  PORT58_ENET_COL) | \
        (1 <<  PORT58_eFTU2_IN3) | \
        (1 <<  PORT58_eFTU0_OUT_S3) ),

        /* PTB27 */
        (uint8)( (1 <<  PORT59_ADC4_SE8) | \
        (1 <<  PORT59_GPIO) | \
        (1 <<  PORT59_FTU7_CH0) | \
        (1 <<  PORT59_FTU1_QD_PHB) | \
        (1 <<  PORT59_FCSPI2_SOUT) | \
        (1 <<  PORT59_eFTU0_OUT_S20) | \
        (1 <<  PORT59_eFTU1_OUT_S21) | \
        (1 <<  PORT59_TPU0_CH4) ),

        /* PTB28 */
        (uint8)( (1 <<  PORT60_ADC3_SE8) | \
        (1 <<  PORT60_GPIO) | \
        (1 <<  PORT60_FTU7_CH1) | \
        (1 <<  PORT60_SDADC0_EXT_SIGN) | \
        (1 <<  PORT60_FCSPI2_SIN) | \
        (1 <<  PORT60_eFTU0_OUT_S21) | \
        (1 <<  PORT60_eFTU1_OUT_S22) | \
        (1 <<  PORT60_TPU0_CH5) ),

        /* PTB29 */
        (uint8)( (1 <<  PORT61_ADC3_SE0_ADC3_DIFF_P0) | \
        (1 <<  PORT61_GPIO) | \
        (1 <<  PORT61_FTU1_CH3) | \
        (1 <<  PORT61_SDADC0_PWM_N) | \
        (1 <<  PORT61_eFTU0_OUT_S28) | \
        (1 <<  PORT61_FCUART12_RX) | \
        (1 <<  PORT61_eFTU2_OUT_S6) | \
        (1 <<  PORT61_MSC0_FCLP) ),

        /* PTB30 */
        (uint8)( (1 <<  PORT62_GPIO) | \
        (1 <<  PORT62_FTU6_CH1) | \
        (1 <<  PORT62_FCIIC1_SCL) | \
        (1 <<  PORT62_FCUART12_TX) | \
        (1 <<  PORT62_ENET_CRS) | \
        (1 <<  PORT62_eFTU2_IN4) | \
        (1 <<  PORT62_eFTU0_OUT_S4) ),

        /* PTB31 */
        (uint8)( (1 <<  PORT63_GPIO) | \
        (1 <<  PORT63_FTU7_CH1) | \
        (1 <<  PORT63_FCSPI2_SCK) | \
        (1 <<  PORT63_TPU0_CH21) | \
        (1 <<  PORT63_ENET_RXD1) | \
        (1 <<  PORT63_HSADC3_IO0) | \
        (1 <<  PORT63_eFTU1_OUT_S16) ),

        /* PTC0 */
        (uint8)( (1 <<  PORT64_GPIO) | \
        (1 <<  PORT64_eFTU0_IN6) | \
        (1 <<  PORT64_TPU0_CH18) | \
        (1 <<  PORT64_ETM_TRACE_D6) | \
        (1 <<  PORT64_ENET_RXD1) | \
        (1 <<  PORT64_eFTU1_OUT_S20) | \
        (1 <<  PORT64_FCSPI3_PCS3) ),

        /* PTC1 */
        (uint8)( (1 <<  PORT65_GPIO) | \
        (1 <<  PORT65_FTU7_CH5) | \
        (1 <<  PORT65_TPU0_CH17) | \
        (1 <<  PORT65_FCUART2_CTS) | \
        (1 <<  PORT65_ENET_RXD0) | \
        (1 <<  PORT65_eFTU0_OUT_S15) | \
        (1 <<  PORT65_FCSPI3_PCS2) ),

        /* PTC2 */
        (uint8)( (1 <<  PORT66_GPIO) | \
        (1 <<  PORT66_FTU6_CH3) | \
        (1 <<  PORT66_FCUART0_RX) | \
        (1 <<  PORT66_ETM_TRACE_CLKOUT) | \
        (1 <<  PORT66_ENET_TXD0) | \
        (1 <<  PORT66_eFTU2_IN6) | \
        (1 <<  PORT66_eFTU0_OUT_S6) ),

        /* PTC3 */
        (uint8)( (1 <<  PORT67_GPIO) | \
        (1 <<  PORT67_FTU6_CH2) | \
        (1 <<  PORT67_FCUART0_TX) | \
        (1 <<  PORT67_HSADC0_IO1) | \
        (1 <<  PORT67_eFTU2_IN5) | \
        (1 <<  PORT67_eFTU0_OUT_S5) ),

        /* PTC4 */
        (uint8)( (1 <<  PORT68_GPIO) | \
        (1 <<  PORT68_FTU3_CH4) | \
        (1 <<  PORT68_JTAG_TCLK_SWD_CLK) ),

        /* PTC5 */
        (uint8)( (1 <<  PORT69_GPIO) | \
        (1 <<  PORT69_FTU3_CH3) | \
        (1 <<  PORT69_FTU1_QD_PHA) | \
        (1 <<  PORT69_JTAG_TDI) ),

        /* PTC6 */
        (uint8)( (1 <<  PORT70_GPIO) | \
        (1 <<  PORT70_FCUART1_RX) | \
        (1 <<  PORT70_TPU0_CH0) | \
        (1 <<  PORT70_FTU3_CH2) | \
        (1 <<  PORT70_eFTU0_IN4) | \
        (1 <<  PORT70_FTU1_QD_PHB) | \
        (1 <<  PORT70_eFTU1_OUT_S5) ),

        /* PTC7 */
        (uint8)( (1 <<  PORT71_GPIO) | \
        (1 <<  PORT71_FCUART1_TX) | \
        (1 <<  PORT71_TPU0_CH1) | \
        (1 <<  PORT71_FTU3_CH3) | \
        (1 <<  PORT71_eFTU0_IN3) | \
        (1 <<  PORT71_HSADC0_IO1) | \
        (1 <<  PORT71_eFTU1_OUT_S4) ),

        /* PTC8 */
        (uint8)( (1 <<  PORT72_ADC3_SE11) | \
        (1 <<  PORT72_GPIO) | \
        (1 <<  PORT72_FTU7_CH4) | \
        (1 <<  PORT72_FTU_FLT11) | \
        (1 <<  PORT72_QDT0_PHB) | \
        (1 <<  PORT72_FCSPI4_PCS0) | \
        (1 <<  PORT72_FCUART0_CTS) | \
        (1 <<  PORT72_eFTU2_OUT_S20) ),

        /* PTC9 */
        (uint8)( (1 <<  PORT73_ADC4_SE11) | \
        (1 <<  PORT73_GPIO) | \
        (1 <<  PORT73_FTU7_CH3) | \
        (1 <<  PORT73_FTU_FLT10) | \
        (1 <<  PORT73_QDT0_PHA) | \
        (1 <<  PORT73_FCSPI4_SCK) | \
        (1 <<  PORT73_FCUART0_RTS) | \
        (1 <<  PORT73_eFTU2_OUT_S19) ),

        /* PTC10 */
        (uint8)( (1 <<  PORT74_SDADC_CH_N3_ADC3_SE6_ADC3_DIFF_N2) | \
        (1 <<  PORT74_GPIO) | \
        (1 <<  PORT74_FTU3_CH4) | \
        (1 <<  PORT74_SDADC1_PWM_N) | \
        (1 <<  PORT74_FLEXCAN4_RX) | \
        (1 <<  PORT74_FCUART13_TX) | \
        (1 <<  PORT74_eFTU2_OUT_S13) | \
        (1 <<  PORT74_MSC0_EN1) ),

        /* PTC11 */
        (uint8)( (1 <<  PORT75_SDADC_CH_P3_ADC3_SE2_ADC3_DIFF_P2) | \
        (1 <<  PORT75_GPIO) | \
        (1 <<  PORT75_FTU3_CH3) | \
        (1 <<  PORT75_SDADC1_PWM_P) | \
        (1 <<  PORT75_FLEXCAN4_TX) | \
        (1 <<  PORT75_FCUART13_RX) | \
        (1 <<  PORT75_eFTU2_OUT_S12) | \
        (1 <<  PORT75_MSC0_EN0) ),

        /* PTC12 */
        (uint8)( (1 <<  PORT76_SDADC0_CH0_N0) | \
        (1 <<  PORT76_GPIO) | \
        (1 <<  PORT76_FTU1_CH5) | \
        (1 <<  PORT76_SDADC0_CLK0) | \
        (1 <<  PORT76_eFTU1_OUT_S17) | \
        (1 <<  PORT76_TRGSEL_OUT5) | \
        (1 <<  PORT76_FLEXCAN5_RX) | \
        (1 <<  PORT76_MSC0_EN2) ),

        /* PTC13 */
        (uint8)( (1 <<  PORT77_SDADC0_CH0_P0) | \
        (1 <<  PORT77_GPIO) | \
        (1 <<  PORT77_FTU1_CH4) | \
        (1 <<  PORT77_SDADC0_BREAK0) | \
        (1 <<  PORT77_eFTU1_OUT_S16) | \
        (1 <<  PORT77_TRGSEL_OUT6) | \
        (1 <<  PORT77_FLEXCAN5_TX) | \
        (1 <<  PORT77_MSC0_SOP) ),

        /* PTC14 */
        (uint8)( (1 <<  PORT78_GPIO) | \
        (1 <<  PORT78_FTU7_CH4) | \
        (1 <<  PORT78_FCUART1_RX) | \
        (1 <<  PORT78_FCIIC1_SDA) | \
        (1 <<  PORT78_TPU0_CH23) | \
        (1 <<  PORT78_QDT2_PHA) | \
        (1 <<  PORT78_eFTU1_OUT_S1) ),

        /* PTC15 */
        (uint8)( (1 <<  PORT79_GPIO) | \
        (1 <<  PORT79_eFTU0_IN4) | \
        (1 <<  PORT79_FCSPI2_PCS3) | \
        (1 <<  PORT79_SCG_CLKOUT) | \
        (1 <<  PORT79_ENET_RXD3) | \
        (1 <<  PORT79_QDT3_PHA) | \
        (1 <<  PORT79_FCSPI3_PCS1) ),

        /* PTC16 */
        (uint8)( (1 <<  PORT80_GPIO) | \
        (1 <<  PORT80_FTU_FLT7) | \
        (1 <<  PORT80_FCSPI2_SOUT) | \
        (1 <<  PORT80_TRGSEL_OUT7) | \
        (1 <<  PORT80_ENET_RXD0) | \
        (1 <<  PORT80_eFTU0_OUT_S12) | \
        (1 <<  PORT80_FCUART5_RX) ),

        /* PTC17 */
        (uint8)( (1 <<  PORT81_GPIO) | \
        (1 <<  PORT81_FTU_FLT6) | \
        (1 <<  PORT81_TPU0_CH20) | \
        (1 <<  PORT81_TRGSEL_OUT6) | \
        (1 <<  PORT81_ENET_RX_ER) | \
        (1 <<  PORT81_eFTU0_OUT_S14) | \
        (1 <<  PORT81_FCUART5_TX) ),

        /* PTC18 */
        (uint8)( (1 <<  PORT82_GPIO) | \
        (1 <<  PORT82_FTU7_CH2) | \
        (1 <<  PORT82_FCSPI2_SIN) | \
        (1 <<  PORT82_TPU0_CH22) | \
        (1 <<  PORT82_ENET_RXD2) | \
        (1 <<  PORT82_QDT2_HOME) | \
        (1 <<  PORT82_eFTU1_OUT_S17) ),

        /* PTC19 */
        (uint8)( (1 <<  PORT83_ADC3_SE4_ADC3_DIFF_N0) | \
        (1 <<  PORT83_GPIO) | \
        (1 <<  PORT83_FTU1_CH6) | \
        (1 <<  PORT83_FLEXCAN6_TX) | \
        (1 <<  PORT83_eFTU0_OUT_S29) | \
        (1 <<  PORT83_SDADC0_CH2) | \
        (1 <<  PORT83_eFTU2_OUT_S7) | \
        (1 <<  PORT83_MSC0_EN3) ),

        /* PTC20 */
        (uint8)( (1 <<  PORT84_SDADC0_CH1_P0) | \
        (1 <<  PORT84_GPIO) | \
        (1 <<  PORT84_FTU1_CH7) | \
        (1 <<  PORT84_eFTU1_OUT_S18) | \
        (1 <<  PORT84_FLEXCAN9_TX) | \
        (1 <<  PORT84_TPU0_CH25) | \
        (1 <<  PORT84_MSC0_SDI2) ),

        /* PTC21 */
        (uint8)( (1 <<  PORT85_SDADC0_CH1_N0) | \
        (1 <<  PORT85_GPIO) | \
        (1 <<  PORT85_FTU3_CH0) | \
        (1 <<  PORT85_SDADC0_BREAK1) | \
        (1 <<  PORT85_eFTU1_OUT_S19) | \
        (1 <<  PORT85_FLEXCAN9_RX) | \
        (1 <<  PORT85_TPU0_CH26) | \
        (1 <<  PORT85_MSC0_SDI3) ),

        /* PTC22 */
        (uint8)( (1 <<  PORT86_SDADC_CH_P2_ADC5_SE6_ADC5_DIFF_N2) | \
        (1 <<  PORT86_GPIO) | \
        (1 <<  PORT86_FTU3_CH1) | \
        (1 <<  PORT86_eFTU0_OUT_S25) | \
        (1 <<  PORT86_eFTU2_OUT_S11) | \
        (1 <<  PORT86_SDADC1_CH0) | \
        (1 <<  PORT86_FLEXCAN13_TX) | \
        (1 <<  PORT86_MSC0_SDI1) ),

        /* PTC23 */
        (uint8)( (1 <<  PORT87_SDADC_CH_N2_ADC4_SE6_ADC4_DIFF_N2) | \
        (1 <<  PORT87_GPIO) | \
        (1 <<  PORT87_SDADC1_BREAK0) | \
        (1 <<  PORT87_FTU6_CH6) | \
        (1 <<  PORT87_FCUART2_RTS) | \
        (1 <<  PORT87_FCUART12_TX) | \
        (1 <<  PORT87_eFTU1_OUT_S21) | \
        (1 <<  PORT87_MSC0_SDI0) ),

        /* PTC24 */
        (uint8)( (1 <<  PORT88_SDADC1_CH1_N0) | \
        (1 <<  PORT88_GPIO) | \
        (1 <<  PORT88_FTU3_CH2) | \
        (1 <<  PORT88_FLEXCAN6_RX) | \
        (1 <<  PORT88_FCUART2_CTS) | \
        (1 <<  PORT88_eFTU1_OUT_S25) | \
        (1 <<  PORT88_TPU0_CH28) | \
        (1 <<  PORT88_eFTU2_OUT_S3) ),

        /* PTC25 */
        (uint8)( (1 <<  PORT89_ADC3_SE19) | \
        (1 <<  PORT89_GPIO) | \
        (1 <<  PORT89_FTU3_CH3) | \
        (1 <<  PORT89_FCUART5_RTS) | \
        (1 <<  PORT89_FCSPI5_PCS0) | \
        (1 <<  PORT89_FLEXCAN2_TX) | \
        (1 <<  PORT89_TPU0_CH21) | \
        (1 <<  PORT89_eFTU1_OUT_S20) ),

        /* PTC26 */
        (uint8)( (1 <<  PORT90_ADC2_SE19) | \
        (1 <<  PORT90_GPIO) | \
        (1 <<  PORT90_eFTU1_IN7) | \
        (1 <<  PORT90_QDT1_INDEX) | \
        (1 <<  PORT90_FLEXCAN2_TX) | \
        (1 <<  PORT90_eFTU2_OUT_S7) | \
        (1 <<  PORT90_eFTU1_OUT_S11) ),

        /* PTC27 */
        (uint8)( (1 <<  PORT91_ADC5_SE3_ADC5_DIFF_P3) | \
        (1 <<  PORT91_GPIO) | \
        (1 <<  PORT91_eFTU0_OUT_S28) | \
        (1 <<  PORT91_FCSPI2_PCS1) | \
        (1 <<  PORT91_QDT3_HOME) | \
        (1 <<  PORT91_FCUART5_RX) | \
        (1 <<  PORT91_eFTU1_OUT_S26) ),

        /* PTC28 */
        (uint8)( (1 <<  PORT92_ADC5_SE11) | \
        (1 <<  PORT92_GPIO) | \
        (1 <<  PORT92_FTU7_CH2) | \
        (1 <<  PORT92_QDT1_INDEX) | \
        (1 <<  PORT92_FLEXCAN3_TX) | \
        (1 <<  PORT92_eFTU0_OUT_S24) | \
        (1 <<  PORT92_TPU0_CH9) | \
        (1 <<  PORT92_eFTU2_OUT_S18) ),

        /* PTC29 */
        (uint8)( (1 <<  PORT93_ADC5_SE12) | \
        (1 <<  PORT93_GPIO) | \
        (1 <<  PORT93_FTU7_CH5) | \
        (1 <<  PORT93_QDT1_HOME) | \
        (1 <<  PORT93_FLEXCAN3_RX) | \
        (1 <<  PORT93_TPU0_CH31) | \
        (1 <<  PORT93_eFTU1_OUT_S27) | \
        (1 <<  PORT93_eFTU2_OUT_S21) ),

        /* PTC30 */
        (uint8)( (1 <<  PORT94_ADC3_SE12) | \
        (1 <<  PORT94_GPIO) | \
        (1 <<  PORT94_FTU7_CH7) | \
        (1 <<  PORT94_QDT1_PHA) | \
        (1 <<  PORT94_SDADC1_EXT_SIGN) | \
        (1 <<  PORT94_FCSPI4_SOUT) | \
        (1 <<  PORT94_eFTU1_OUT_S29) | \
        (1 <<  PORT94_TPU0_CH12) ),

        /* PTC31 */
        (uint8)( (1 <<  PORT95_ADC4_SE13) | \
        (1 <<  PORT95_GPIO) | \
        (1 <<  PORT95_FTU5_CH1) | \
        (1 <<  PORT95_QDT1_PHB) | \
        (1 <<  PORT95_eFTU0_OUT_S22) | \
        (1 <<  PORT95_TRGSEL_OUT3) | \
        (1 <<  PORT95_TPU0_CH10) | \
        (1 <<  PORT95_FCSPI7_SCK) ),

        /* PTD0 */
        (uint8)( (1 <<  PORT96_ADC0_SE8) | \
        (1 <<  PORT96_GPIO) | \
        (1 <<  PORT96_FTU4_CH2) | \
        (1 <<  PORT96_TPU0_CH2) | \
        (1 <<  PORT96_HSADC0_BFL) | \
        (1 <<  PORT96_eFTU1_OUT_S10) | \
        (1 <<  PORT96_FLEXCAN13_RX) | \
        (1 <<  PORT96_TRGSEL_OUT1) ),

        /* PTD1 */
        (uint8)( (1 <<  PORT97_HSADC0_CH4) | \
        (1 <<  PORT97_GPIO) | \
        (1 <<  PORT97_FCUART6_TX) | \
        (1 <<  PORT97_TPU0_CH27) | \
        (1 <<  PORT97_FTU2_CH4) | \
        (1 <<  PORT97_eFTU2_OUT_S9) | \
        (1 <<  PORT97_FLEXCAN13_RX) | \
        (1 <<  PORT97_TRGSEL_OUT2) ),

        /* PTD2 */
        (uint8)( (1 <<  PORT98_ADC5_SE21) | \
        (1 <<  PORT98_GPIO) | \
        (1 <<  PORT98_FTU2_CH0) | \
        (1 <<  PORT98_TPU0_CH16) | \
        (1 <<  PORT98_FCSPI1_SCK) | \
        (1 <<  PORT98_FLEXCAN7_RX) | \
        (1 <<  PORT98_eFTU1_OUT_S25) | \
        (1 <<  PORT98_FLEXCORE_TMS) ),

        /* PTD3 */
        (uint8)( (1 <<  PORT99_ADC3_SE20) | \
        (1 <<  PORT99_GPIO) | \
        (1 <<  PORT99_FTU3_CH7) | \
        (1 <<  PORT99_TPU0_CH17) | \
        (1 <<  PORT99_FCSPI1_SIN) | \
        (1 <<  PORT99_HSADC2_IO0) | \
        (1 <<  PORT99_eFTU0_OUT_S29) | \
        (1 <<  PORT99_eFTU1_OUT_S24) ),

        /* PTD4 */
        (uint8)( (1 <<  PORT100_ADC4_SE20) | \
        (1 <<  PORT100_GPIO) | \
        (1 <<  PORT100_FTU3_CH6) | \
        (1 <<  PORT100_TPU0_CH18) | \
        (1 <<  PORT100_FCSPI1_SOUT) | \
        (1 <<  PORT100_FTU_FLT16) | \
        (1 <<  PORT100_HSADC2_IO1) | \
        (1 <<  PORT100_eFTU1_OUT_S23) ),

        /* PTD5 */
        (uint8)( (1 <<  PORT101_GPIO) | \
        (1 <<  PORT101_FTU6_CH4) | \
        (1 <<  PORT101_FLEXCAN3_TX) | \
        (1 <<  PORT101_ETM_TRACE_D2) | \
        (1 <<  PORT101_ENET_TXD3) | \
        (1 <<  PORT101_QDT3_INDEX) | \
        (1 <<  PORT101_FCSPI3_SIN) ),

        /* PTD6 */
        (uint8)( (1 <<  PORT102_GPIO) | \
        (1 <<  PORT102_FCUART2_RX) | \
        (1 <<  PORT102_FLEXCAN3_RX) | \
        (1 <<  PORT102_ETM_TRACE_D1) | \
        (1 <<  PORT102_ENET_TXD2) | \
        (1 <<  PORT102_QDT3_HOME) | \
        (1 <<  PORT102_FCSPI3_SCK) ),

        /* PTD7 */
        (uint8)( (1 <<  PORT103_GPIO) | \
        (1 <<  PORT103_FCUART2_TX) | \
        (1 <<  PORT103_HSADC3_IO1) | \
        (1 <<  PORT103_ETM_TRACE_D0) | \
        (1 <<  PORT103_ENET_TXD1) | \
        (1 <<  PORT103_eFTU2_IN7) | \
        (1 <<  PORT103_eFTU0_OUT_S7) ),

        /* PTD8 */
        (uint8)( (1 <<  PORT104_GPIO) | \
        (1 <<  PORT104_FTU7_CH0) | \
        (1 <<  PORT104_FCSPI2_PCS2) | \
        (1 <<  PORT104_FTU1_CH6) | \
        (1 <<  PORT104_ENET_RX_DV_CTL) | \
        (1 <<  PORT104_eFTU0_OUT_S13) | \
        (1 <<  PORT104_FCUART4_RX) ),

        /* PTD9 */
        (uint8)( (1 <<  PORT105_GPIO) | \
        (1 <<  PORT105_eFTU0_IN7) | \
        (1 <<  PORT105_FCSPI2_PCS1) | \
        (1 <<  PORT105_TPU0_CH19) | \
        (1 <<  PORT105_ENET_RXD2) | \
        (1 <<  PORT105_QDT3_PHB) | \
        (1 <<  PORT105_FCUART4_TX) ),

        /* PTD10 */
        (uint8)( (1 <<  PORT106_GPIO) | \
        (1 <<  PORT106_FTU6_CH7) | \
        (1 <<  PORT106_FTU2_QD_PHB) | \
        (1 <<  PORT106_ETM_TRACE_D7) | \
        (1 <<  PORT106_ENET_RX_CLK) | \
        (1 <<  PORT106_eFTU0_OUT_S10) | \
        (1 <<  PORT106_FCSPI3_SOUT) ),

        /* PTD11 */
        (uint8)( (1 <<  PORT107_GPIO) | \
        (1 <<  PORT107_FTU6_CH6) | \
        (1 <<  PORT107_FTU2_QD_PHA) | \
        (1 <<  PORT107_ETM_TRACE_D4) | \
        (1 <<  PORT107_ENET_TX_CLK) | \
        (1 <<  PORT107_eFTU0_OUT_S9) | \
        (1 <<  PORT107_HSADC1_IO1) ),

        /* PTD12 */
        (uint8)( (1 <<  PORT108_GPIO) | \
        (1 <<  PORT108_FTU6_CH5) | \
        (1 <<  PORT108_FCUART2_RTS) | \
        (1 <<  PORT108_ETM_TRACE_D3) | \
        (1 <<  PORT108_ENET_TX_EN_CTL) | \
        (1 <<  PORT108_eFTU0_OUT_S8) | \
        (1 <<  PORT108_HSADC1_IO0) ),

        (uint8)0x00,

        (uint8)0x00,

        /* PTD15 */
        (uint8)( (1 <<  PORT111_ADC0_SE16_CMP0_IN6) | \
        (1 <<  PORT111_GPIO) | \
        (1 <<  PORT111_FTU5_CH0) | \
        (1 <<  PORT111_FLEXCAN2_RX) | \
        (1 <<  PORT111_ETM_TRACE_D7) | \
        (1 <<  PORT111_ENET_PPS2) | \
        (1 <<  PORT111_FCUART2_RTS) | \
        (1 <<  PORT111_QDT1_HOME) ),

        /* PTD16 */
        (uint8)( (1 <<  PORT112_ADC1_SE15_CMP0_IN5) | \
        (1 <<  PORT112_GPIO) | \
        (1 <<  PORT112_FTU5_CH1) | \
        (1 <<  PORT112_FLEXCAN2_TX) | \
        (1 <<  PORT112_ETM_TRACE_D6) | \
        (1 <<  PORT112_FCSPI1_PCS3) | \
        (1 <<  PORT112_eFTU0_OUT_S20) | \
        (1 <<  PORT112_TPU0_CH7) ),

        /* PTD17 */
        (uint8)( (1 <<  PORT113_ADC1_SE14_CMP0_IN3) | \
        (1 <<  PORT113_GPIO) | \
        (1 <<  PORT113_FTU5_CH3) | \
        (1 <<  PORT113_FCUART2_TX) | \
        (1 <<  PORT113_ETM_TRACE_D4) | \
        (1 <<  PORT113_FCSPI1_PCS1) | \
        (1 <<  PORT113_eFTU0_OUT_S18) | \
        (1 <<  PORT113_QDT1_PHA) ),

        /* PTD18 */
        (uint8)( (1 <<  PORT114_ADC5_SE14) | \
        (1 <<  PORT114_GPIO) | \
        (1 <<  PORT114_FTU5_CH3) | \
        (1 <<  PORT114_SDADC1_PWM_P) | \
        (1 <<  PORT114_FCIIC1_SDA) | \
        (1 <<  PORT114_TPU0_CH29) | \
        (1 <<  PORT114_eFTU2_OUT_S22) | \
        (1 <<  PORT114_FCSPI7_PCS0) ),

        /* PTD19 */
        (uint8)( (1 <<  PORT115_ADC4_SE14) | \
        (1 <<  PORT115_GPIO) | \
        (1 <<  PORT115_FTU5_CH4) | \
        (1 <<  PORT115_SDADC1_PWM_N) | \
        (1 <<  PORT115_FCIIC1_SCL) | \
        (1 <<  PORT115_TPU0_TCRCLK) | \
        (1 <<  PORT115_eFTU2_OUT_S23) | \
        (1 <<  PORT115_FCSPI7_PCS1) ),

        /* PTD20 */
        (uint8)( (1 <<  PORT116_ADC5_SE20) | \
        (1 <<  PORT116_GPIO) | \
        (1 <<  PORT116_FTU3_CH4) | \
        (1 <<  PORT116_FCUART5_RX) | \
        (1 <<  PORT116_FCSPI1_PCS1) | \
        (1 <<  PORT116_eFTU0_OUT_S28) | \
        (1 <<  PORT116_TPU0_CH20) | \
        (1 <<  PORT116_eFTU1_OUT_S21) ),

        /* PTD21 */
        (uint8)( (1 <<  PORT117_GPIO) | \
        (1 <<  PORT117_FTU3_CH5) | \
        (1 <<  PORT117_FCUART5_TX) | \
        (1 <<  PORT117_eFTU1_IN7) | \
        (1 <<  PORT117_HSADC2_IO2) | \
        (1 <<  PORT117_TPU0_CH19) | \
        (1 <<  PORT117_eFTU1_OUT_S22) ),

        /* PTD22 */
        (uint8)( (1 <<  PORT118_ADC3_SE18) | \
        (1 <<  PORT118_GPIO) | \
        (1 <<  PORT118_eFTU1_IN4) | \
        (1 <<  PORT118_FCSPI5_SCK) | \
        (1 <<  PORT118_TPU0_CH18) | \
        (1 <<  PORT118_eFTU2_OUT_S31) | \
        (1 <<  PORT118_eFTU0_OUT_S31) ),

        /* PTD23 */
        (uint8)( (1 <<  PORT119_ADC4_SE21) | \
        (1 <<  PORT119_GPIO) | \
        (1 <<  PORT119_FTU2_CH1) | \
        (1 <<  PORT119_TPU0_CH15) | \
        (1 <<  PORT119_FCSPI1_PCS0) | \
        (1 <<  PORT119_FLEXCAN7_TX) | \
        (1 <<  PORT119_eFTU1_OUT_S26) | \
        (1 <<  PORT119_FLEXCORE_TDI) ),

        /* PTD24 */
        (uint8)( (1 <<  PORT120_ADC4_SE22) | \
        (1 <<  PORT120_GPIO) | \
        (1 <<  PORT120_FTU2_CH4) | \
        (1 <<  PORT120_TPU0_CH13) | \
        (1 <<  PORT120_MSC1_SOP) | \
        (1 <<  PORT120_eFTU2_OUT_S15) | \
        (1 <<  PORT120_eFTU2_IN7) | \
        (1 <<  PORT120_FLEXCORE_TRST) ),

        /* PTD25 */
        (uint8)( (1 <<  PORT121_ADC3_SE23) | \
        (1 <<  PORT121_GPIO) | \
        (1 <<  PORT121_FTU2_CH6) | \
        (1 <<  PORT121_FCUART12_TX) | \
        (1 <<  PORT121_FCUART4_RTS) | \
        (1 <<  PORT121_FLEXCAN7_TX) | \
        (1 <<  PORT121_eFTU2_IN1) | \
        (1 <<  PORT121_eFTU_GTOM13) ),

        /* PTD26 */
        (uint8)( (1 <<  PORT122_GPIO) | \
        (1 <<  PORT122_FTU4_CH0) | \
        (1 <<  PORT122_FLEXCAN0_TX) | \
        (1 <<  PORT122_FCUART4_CTS) | \
        (1 <<  PORT122_TPU0_TCRCLK) | \
        (1 <<  PORT122_eFTU0_IN7) | \
        (1 <<  PORT122_eFTU_GTOM2) ),

        /* PTD27 */
        (uint8)( (1 <<  PORT123_GPIO) | \
        (1 <<  PORT123_FTU4_CH1) | \
        (1 <<  PORT123_FLEXCAN0_RX) | \
        (1 <<  PORT123_TPU0_CH8) | \
        (1 <<  PORT123_MSC1_EN0) | \
        (1 <<  PORT123_eFTU0_IN6) | \
        (1 <<  PORT123_eFTU_GTOM1) ),

        /* PTD28 */
        (uint8)( (1 <<  PORT124_GPIO) | \
        (1 <<  PORT124_FTU4_CH3) | \
        (1 <<  PORT124_QDT1_INDEX) | \
        (1 <<  PORT124_FCUART11_TX) | \
        (1 <<  PORT124_TPU0_CH7) | \
        (1 <<  PORT124_eFTU0_IN5) | \
        (1 <<  PORT124_eFTU_GTOM7) ),

        /* PTD29 */
        (uint8)( (1 <<  PORT125_GPIO) | \
        (1 <<  PORT125_FTU4_CH5) | \
        (1 <<  PORT125_FLEXCAN11_TX) | \
        (1 <<  PORT125_SENT1_RXD1) | \
        (1 <<  PORT125_FTU1_QD_PHB) | \
        (1 <<  PORT125_MSC1_EN1) | \
        (1 <<  PORT125_eFTU_GTOM1) ),

        /* PTD30 */
        (uint8)( (1 <<  PORT126_GPIO) | \
        (1 <<  PORT126_FTU4_CH7) | \
        (1 <<  PORT126_FLEXCAN5_TX) | \
        (1 <<  PORT126_SENT1_RXD3) | \
        (1 <<  PORT126_FTU2_QD_PHB) | \
        (1 <<  PORT126_MSC1_SDI1) | \
        (1 <<  PORT126_eFTU_GTOM0) ),

        /* PTD31 */
        (uint8)( (1 <<  PORT127_GPIO) | \
        (1 <<  PORT127_FTU6_CH0) | \
        (1 <<  PORT127_TPU0_CH2) | \
        (1 <<  PORT127_eFTU0_IN2) | \
        (1 <<  PORT127_MSC1_SDI3) | \
        (1 <<  PORT127_FTU1_QD_PHA) | \
        (1 <<  PORT127_eFTU1_OUT_S3) ),

        /* PTE0 */
        (uint8)( (1 <<  PORT128_HSADC3_CH2) | \
        (1 <<  PORT128_GPIO) | \
        (1 <<  PORT128_FCUART0_CTS) | \
        (1 <<  PORT128_FTU_TCK1) | \
        (1 <<  PORT128_FCIIC1_SDA) | \
        (1 <<  PORT128_FCSPI0_SCK) | \
        (1 <<  PORT128_FTU_FLT19) | \
        (1 <<  PORT128_eFTU0_OUT_S12) ),

        /* PTE1 */
        (uint8)( (1 <<  PORT129_HSADC3_CH3) | \
        (1 <<  PORT129_GPIO) | \
        (1 <<  PORT129_FCUART0_RTS) | \
        (1 <<  PORT129_LP_GOOD) | \
        (1 <<  PORT129_FCIIC1_SCL) | \
        (1 <<  PORT129_FCSPI0_SIN) | \
        (1 <<  PORT129_FTU_FLT18) | \
        (1 <<  PORT129_eFTU0_OUT_S11) ),

        /* PTE2 */
        (uint8)( (1 <<  PORT130_ADC2_SE11) | \
        (1 <<  PORT130_GPIO) | \
        (1 <<  PORT130_FTU6_CH6) | \
        (1 <<  PORT130_SDADC0_EXT_SIGN) | \
        (1 <<  PORT130_eFTU1_IN1) | \
        (1 <<  PORT130_FLEXCAN1_RX) | \
        (1 <<  PORT130_FCUART1_CTS) | \
        (1 <<  PORT130_eFTU1_OUT_S14) ),

        /* PTE3 */
        (uint8)( (1 <<  PORT131_OSC32K_EXTAL) | \
        (1 <<  PORT131_GPIO) | \
        (1 <<  PORT131_FTU0_CH2) | \
        (1 <<  PORT131_eFTU0_IN0) | \
        (1 <<  PORT131_FTU_FLT1) | \
        (1 <<  PORT131_FTU_TCK0) ),

        /* PTE4 */
        (uint8)( (1 <<  PORT132_ADC0_SE5_ADC0_DIFF_N1) | \
        (1 <<  PORT132_GPIO) | \
        (1 <<  PORT132_FTU2_QD_PHB) | \
        (1 <<  PORT132_eFTU2_IN7) | \
        (1 <<  PORT132_FCUART7_TX) | \
        (1 <<  PORT132_eFTU2_OUT_S14) | \
        (1 <<  PORT132_FLEXCAN9_RX) | \
        (1 <<  PORT132_eFTU_GTOM11) ),

        /* PTE5 */
        (uint8)( (1 <<  PORT133_ADC1_SE7_ADC1_DIFF_N3) | \
        (1 <<  PORT133_GPIO) | \
        (1 <<  PORT133_FTU_TCK2) | \
        (1 <<  PORT133_FTU4_CH3) | \
        (1 <<  PORT133_HRPWM0_CH7) | \
        (1 <<  PORT133_FCSPI2_PCS1) | \
        (1 <<  PORT133_FLEXCAN13_TX) | \
        (1 <<  PORT133_eFTU1_OUT_S9) ),

        /* PTE6 */
        (uint8)( (1 <<  PORT134_ADC2_SE12) | \
        (1 <<  PORT134_GPIO) | \
        (1 <<  PORT134_FTU6_CH5) | \
        (1 <<  PORT134_TPU0_TCRCLK) | \
        (1 <<  PORT134_eFTU1_IN0) | \
        (1 <<  PORT134_FLEXCAN1_TX) | \
        (1 <<  PORT134_FCUART1_RTS) | \
        (1 <<  PORT134_eFTU1_OUT_S13) ),

        /* PTE7 */
        (uint8)( (1 <<  PORT135_ADC3_SE13) | \
        (1 <<  PORT135_GPIO) | \
        (1 <<  PORT135_FTU5_CH2) | \
        (1 <<  PORT135_FTU_FLT14) | \
        (1 <<  PORT135_eFTU0_OUT_S23) | \
        (1 <<  PORT135_TPU0_CH30) | \
        (1 <<  PORT135_eFTU1_OUT_S31) | \
        (1 <<  PORT135_FCSPI7_SOUT) ),

        /* PTE8 */
        (uint8)( (1 <<  PORT136_GPIO) | \
        (1 <<  PORT136_FTU6_CH1) | \
        (1 <<  PORT136_HSADC0_IO2) | \
        (1 <<  PORT136_FCUART9_TX) | \
        (1 <<  PORT136_ENET_MDC) | \
        (1 <<  PORT136_eFTU2_IN0) | \
        (1 <<  PORT136_eFTU0_OUT_S0) ),

        /* PTE9 */
        (uint8)( (1 <<  PORT137_ADC1_SE16_CMP0_IN7) | \
        (1 <<  PORT137_GPIO) | \
        (1 <<  PORT137_FTU0_CH7) | \
        (1 <<  PORT137_TPU0_CH8) | \
        (1 <<  PORT137_ETM_TRACE_CLKOUT) | \
        (1 <<  PORT137_ENET_PPS3) | \
        (1 <<  PORT137_FCUART2_CTS) | \
        (1 <<  PORT137_QDT1_INDEX) ),

        /* PTE10 */
        (uint8)( (1 <<  PORT138_ADC0_SE3_ADC0_DIFF_P3) | \
        (1 <<  PORT138_GPIO) | \
        (1 <<  PORT138_SCG_CLKOUT) | \
        (1 <<  PORT138_FTU6_CH0) | \
        (1 <<  PORT138_HRPWM0_CH4) | \
        (1 <<  PORT138_FCSPI2_SIN) | \
        (1 <<  PORT138_eFTU1_OUT_S6) | \
        (1 <<  PORT138_TRGSEL_OUT4) ),

        /* PTE11 */
        (uint8)( (1 <<  PORT139_ADC1_SE6_ADC1_DIFF_N2) | \
        (1 <<  PORT139_GPIO) | \
        (1 <<  PORT139_FTU2_CH1) | \
        (1 <<  PORT139_TPU0_CH20) | \
        (1 <<  PORT139_HRPWM0_CH3) | \
        (1 <<  PORT139_FCSPI2_PCS0) | \
        (1 <<  PORT139_eFTU1_OUT_S5) | \
        (1 <<  PORT139_TRGSEL_OUT5) ),

        /* PTE12 */
        (uint8)( (1 <<  PORT140_ADC0_SE10) | \
        (1 <<  PORT140_GPIO) | \
        (1 <<  PORT140_FTU5_CH6) | \
        (1 <<  PORT140_FTU_FLT2) | \
        (1 <<  PORT140_ETM_TRACE_D3) | \
        (1 <<  PORT140_FCSPI1_SOUT) | \
        (1 <<  PORT140_TPU0_CH14) | \
        (1 <<  PORT140_eFTU2_OUT_S17) ),

        /* PTE13 */
        (uint8)( (1 <<  PORT141_ADC0_SE7_ADC0_DIFF_N3) | \
        (1 <<  PORT141_GPIO) | \
        (1 <<  PORT141_FTU2_CH0) | \
        (1 <<  PORT141_TPU0_CH21) | \
        (1 <<  PORT141_HRPWM0_CH5) | \
        (1 <<  PORT141_FCSPI2_SCK) | \
        (1 <<  PORT141_eFTU1_OUT_S7) | \
        (1 <<  PORT141_HSADC1_BFL) ),

        /* PTE14 */
        (uint8)( (1 <<  PORT142_OSC32K_XTAL) | \
        (1 <<  PORT142_GPIO) | \
        (1 <<  PORT142_FTU0_CH3) | \
        (1 <<  PORT142_eFTU0_IN1) | \
        (1 <<  PORT142_FTU_FLT0) | \
        (1 <<  PORT142_FLEXCAN10_RX) ),

        /* PTE15 */
        (uint8)( (1 <<  PORT143_HSADC1_CH3) | \
        (1 <<  PORT143_GPIO) | \
        (1 <<  PORT143_FCUART1_CTS) | \
        (1 <<  PORT143_FLEXCAN5_RX) | \
        (1 <<  PORT143_FTU2_CH6) | \
        (1 <<  PORT143_eFTU2_OUT_S7) | \
        (1 <<  PORT143_eFTU_GTOM9) | \
        (1 <<  PORT143_TRGSEL_OUT6) ),

        /* PTE16 */
        (uint8)( (1 <<  PORT144_HSADC1_CH1) | \
        (1 <<  PORT144_GPIO) | \
        (1 <<  PORT144_FCUART1_RTS) | \
        (1 <<  PORT144_FLEXCAN5_TX) | \
        (1 <<  PORT144_FTU2_CH7) | \
        (1 <<  PORT144_eFTU_GTOM11) | \
        (1 <<  PORT144_TRGSEL_OUT7) ),

        /* PTE17 */
        (uint8)( (1 <<  PORT145_GPIO) | \
        (1 <<  PORT145_FTU6_CH1) | \
        (1 <<  PORT145_FCSMU_PIN1) | \
        (1 <<  PORT145_eFTU1_IN0) | \
        (1 <<  PORT145_eFTU2_OUT_S4) | \
        (1 <<  PORT145_HSADC0_IO2) ),

        /* PTE18 */
        (uint8)( (1 <<  PORT146_ADC2_SE18) | \
        (1 <<  PORT146_GPIO) | \
        (1 <<  PORT146_FTU6_CH3) | \
        (1 <<  PORT146_QDT1_PHA) | \
        (1 <<  PORT146_FCUART10_RX) | \
        (1 <<  PORT146_eFTU2_OUT_S8) | \
        (1 <<  PORT146_FLEXCAN6_TX) | \
        (1 <<  PORT146_eFTU1_OUT_S12) ),

        /* PTE19 */
        (uint8)( (1 <<  PORT147_ADC2_SE9) | \
        (1 <<  PORT147_GPIO) | \
        (1 <<  PORT147_SCG_CLKOUT) | \
        (1 <<  PORT147_FCIIC0_SCL) | \
        (1 <<  PORT147_SENT0_RXD2) | \
        (1 <<  PORT147_CMP0_OUT) | \
        (1 <<  PORT147_eFTU1_IN2) | \
        (1 <<  PORT147_eFTU0_OUT_S0) ),

        /* PTE20 */
        (uint8)( (1 <<  PORT148_ADC2_SE8) | \
        (1 <<  PORT148_GPIO) | \
        (1 <<  PORT148_FTU0_CH0) | \
        (1 <<  PORT148_FCIIC0_SDA) | \
        (1 <<  PORT148_SENT0_RXD3) | \
        (1 <<  PORT148_eFTU2_OUT_S14) | \
        (1 <<  PORT148_LP_GOOD) | \
        (1 <<  PORT148_eFTU0_OUT_S1) ),

        /* PTE21 */
        (uint8)( (1 <<  PORT149_GPIO) | \
        (1 <<  PORT149_FTU0_CH1) | \
        (1 <<  PORT149_LP_WAKEUP0) | \
        (1 <<  PORT149_FLEXCAN0_TX) | \
        (1 <<  PORT149_FCUART0_RTS) | \
        (1 <<  PORT149_eFTU1_IN4) | \
        (1 <<  PORT149_eFTU0_OUT_S3) ),

        /* PTE22 */
        (uint8)( (1 <<  PORT150_GPIO) | \
        (1 <<  PORT150_FTU0_CH2) | \
        (1 <<  PORT150_LP_GOOD) | \
        (1 <<  PORT150_FLEXCAN0_RX) | \
        (1 <<  PORT150_FCUART0_CTS) | \
        (1 <<  PORT150_eFTU1_IN5) | \
        (1 <<  PORT150_eFTU0_OUT_S4) ),

        /* PTE23 */
        (uint8)( (1 <<  PORT151_ADC2_SE7_ADC2_DIFF_N3) | \
        (1 <<  PORT151_GPIO) | \
        (1 <<  PORT151_FTU0_CH4) | \
        (1 <<  PORT151_FLEXCAN1_RX) | \
        (1 <<  PORT151_eFTU2_IN1) | \
        (1 <<  PORT151_FCSPI0_PCS2) | \
        (1 <<  PORT151_eFTU0_OUT_S8) ),

        /* PTE24 */
        (uint8)( (1 <<  PORT152_ADC2_SE3_ADC2_DIFF_P3) | \
        (1 <<  PORT152_GPIO) | \
        (1 <<  PORT152_FTU0_CH5) | \
        (1 <<  PORT152_FLEXCAN1_TX) | \
        (1 <<  PORT152_eFTU2_IN6) | \
        (1 <<  PORT152_FCSPI0_PCS1) | \
        (1 <<  PORT152_LP_WAKEUP1) | \
        (1 <<  PORT152_eFTU0_OUT_S9) ),

        /* PTE25 */
        (uint8)( (1 <<  PORT153_HSADC2_CH5) | \
        (1 <<  PORT153_GPIO) | \
        (1 <<  PORT153_FTU0_CH6) | \
        (1 <<  PORT153_AONTIMER0_CLK0) | \
        (1 <<  PORT153_FCSPI0_PCS0) | \
        (1 <<  PORT153_eFTU0_OUT_S10) | \
        (1 <<  PORT153_TRGSEL_OUT7) ),

        /* PTE26 */
        (uint8)( (1 <<  PORT154_HSADC2_CH1) | \
        (1 <<  PORT154_GPIO) | \
        (1 <<  PORT154_FTU3_CH2) | \
        (1 <<  PORT154_AONTIMER0_CLK2) | \
        (1 <<  PORT154_SENT0_RXD0) | \
        (1 <<  PORT154_LP_WAKEUP3) | \
        (1 <<  PORT154_eFTU0_OUT_S12) ),

        /* PTE27 */
        (uint8)( (1 <<  PORT155_HSADC2_CH0) | \
        (1 <<  PORT155_GPIO) | \
        (1 <<  PORT155_FTU3_CH5) | \
        (1 <<  PORT155_SENT0_RXD1) | \
        (1 <<  PORT155_eFTU2_IN3) | \
        (1 <<  PORT155_eFTU2_OUT_S31) ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTF0 */
        (uint8)( (1 <<  PORT160_HSADC2_CH3) | \
        (1 <<  PORT160_GPIO) | \
        (1 <<  PORT160_FCUART6_RX) | \
        (1 <<  PORT160_FTU2_QD_PHA) | \
        (1 <<  PORT160_SENT0_RXD2) | \
        (1 <<  PORT160_eFTU2_IN6) | \
        (1 <<  PORT160_eFTU0_OUT_S14) ),

        /* PTF1 */
        (uint8)( (1 <<  PORT161_HSADC2_CH2) | \
        (1 <<  PORT161_GPIO) | \
        (1 <<  PORT161_FCUART6_TX) | \
        (1 <<  PORT161_FTU2_QD_PHB) | \
        (1 <<  PORT161_SENT0_RXD3) | \
        (1 <<  PORT161_eFTU2_IN7) | \
        (1 <<  PORT161_eFTU0_OUT_S15) ),

        /* PTF2 */
        (uint8)( (1 <<  PORT162_ADC3_SE22) | \
        (1 <<  PORT162_GPIO) | \
        (1 <<  PORT162_FCUART6_RTS) | \
        (1 <<  PORT162_eFTU0_IN0) | \
        (1 <<  PORT162_FCUART8_RX) | \
        (1 <<  PORT162_FLEXCAN12_TX) | \
        (1 <<  PORT162_HSADC2_IO0) | \
        (1 <<  PORT162_eFTU1_OUT_S27) ),

        /* PTF3 */
        (uint8)( (1 <<  PORT163_ADC0_SE1_ADC0_DIFF_P1) | \
        (1 <<  PORT163_GPIO) | \
        (1 <<  PORT163_FCUART8_RTS) | \
        (1 <<  PORT163_eFTU2_IN4) | \
        (1 <<  PORT163_FCSPI6_SIN) | \
        (1 <<  PORT163_eFTU2_OUT_S11) ),

        /* PTF4 */
        (uint8)( (1 <<  PORT164_HSADC1_CH4) | \
        (1 <<  PORT164_GPIO) | \
        (1 <<  PORT164_FCUART8_CTS) | \
        (1 <<  PORT164_eFTU2_IN5) | \
        (1 <<  PORT164_FCSPI6_SCK) | \
        (1 <<  PORT164_eFTU2_OUT_S12) ),

        /* PTF5 */
        (uint8)( (1 <<  PORT165_HSADC1_CH5) | \
        (1 <<  PORT165_GPIO) | \
        (1 <<  PORT165_eFTU2_IN6) | \
        (1 <<  PORT165_FCSPI6_SOUT) | \
        (1 <<  PORT165_eFTU2_OUT_S13) ),

        /* PTF6 */
        (uint8)( (1 <<  PORT166_ADC0_SE14) | \
        (1 <<  PORT166_GPIO) | \
        (1 <<  PORT166_FCUART11_TX) | \
        (1 <<  PORT166_FTU6_CH4) | \
        (1 <<  PORT166_SSI0_DIG_28_CH1) | \
        (1 <<  PORT166_eFTU2_OUT_S17) | \
        (1 <<  PORT166_eFTU0_OUT_S17) | \
        (1 <<  PORT166_TPU0_CH24) ),

        /* PTF7 */
        (uint8)( (1 <<  PORT167_SDADC1_CH0_N0) | \
        (1 <<  PORT167_GPIO) | \
        (1 <<  PORT167_SDADC1_CLK0) | \
        (1 <<  PORT167_FTU6_CH5) | \
        (1 <<  PORT167_FTU1_QD_PHA) | \
        (1 <<  PORT167_eFTU1_OUT_S22) | \
        (1 <<  PORT167_eFTU2_OUT_S0) ),

        /* PTF8 */
        (uint8)( (1 <<  PORT168_GPIO) | \
        (1 <<  PORT168_TPU0_CH11) | \
        (1 <<  PORT168_eFTU0_IN5) | \
        (1 <<  PORT168_FCSPI3_SIN) | \
        (1 <<  PORT168_FTU_FLT5) | \
        (1 <<  PORT168_TRGSEL_OUT4) | \
        (1 <<  PORT168_eFTU1_OUT_S5) ),

        /* PTF9 */
        (uint8)( (1 <<  PORT169_ADC4_SE1_ADC4_DIFF_P1) | \
        (1 <<  PORT169_GPIO) | \
        (1 <<  PORT169_FCUART13_RTS) | \
        (1 <<  PORT169_FTU0_CH3) | \
        (1 <<  PORT169_MSC0_SDI0) | \
        (1 <<  PORT169_FLEXCAN9_RX) | \
        (1 <<  PORT169_eFTU2_OUT_S5) | \
        (1 <<  PORT169_TPU0_CH29) ),

        /* PTF10 */
        (uint8)( (1 <<  PORT170_ADC4_SE5_ADC4_DIFF_N1) | \
        (1 <<  PORT170_GPIO) | \
        (1 <<  PORT170_FTU0_CH4) | \
        (1 <<  PORT170_MSC0_SDI1) | \
        (1 <<  PORT170_eFTU0_OUT_S27) | \
        (1 <<  PORT170_SDADC1_PWM_N) | \
        (1 <<  PORT170_TPU0_CH30) ),

        /* PTF11 */
        (uint8)( (1 <<  PORT171_SDADC_CH_P1_ADC5_SE2_ADC5_DIFF_P2) | \
        (1 <<  PORT171_GPIO) | \
        (1 <<  PORT171_FLEXCAN6_TX) | \
        (1 <<  PORT171_FTU0_CH5) | \
        (1 <<  PORT171_MSC0_SDI2) | \
        (1 <<  PORT171_SDADC0_CH0) | \
        (1 <<  PORT171_eFTU2_OUT_S8) | \
        (1 <<  PORT171_eFTU0_OUT_S30) ),

        /* PTF12 */
        (uint8)( (1 <<  PORT172_ADC5_SE7_ADC5_DIFF_N3) | \
        (1 <<  PORT172_GPIO) | \
        (1 <<  PORT172_SDADC0_PWM_P) | \
        (1 <<  PORT172_eFTU0_OUT_S30) | \
        (1 <<  PORT172_QDT3_PHA) | \
        (1 <<  PORT172_TPU0_CH30) | \
        (1 <<  PORT172_eFTU1_OUT_S28) ),

        /* PTF13 */
        (uint8)( (1 <<  PORT173_SDADC1_CH2_P0) | \
        (1 <<  PORT173_GPIO) | \
        (1 <<  PORT173_SDADC1_BREAK2) | \
        (1 <<  PORT173_eFTU0_OUT_S29) | \
        (1 <<  PORT173_FCSPI2_PCS2) | \
        (1 <<  PORT173_QDT3_INDEX) | \
        (1 <<  PORT173_TPU0_CH29) | \
        (1 <<  PORT173_eFTU1_OUT_S27) ),

        /* PTF14 */
        (uint8)( (1 <<  PORT174_SDADC1_CH2_N0) | \
        (1 <<  PORT174_GPIO) | \
        (1 <<  PORT174_TPU0_CH31) | \
        (1 <<  PORT174_FLEXCAN9_TX) | \
        (1 <<  PORT174_FCSPI2_PCS3) | \
        (1 <<  PORT174_QDT3_PHB) | \
        (1 <<  PORT174_FCUART5_TX) | \
        (1 <<  PORT174_eFTU1_OUT_S29) ),

        /* PTF15 */
        (uint8)( (1 <<  PORT175_ADC3_SE14) | \
        (1 <<  PORT175_GPIO) | \
        (1 <<  PORT175_TPU0_CH28) | \
        (1 <<  PORT175_eFTU1_IN6) | \
        (1 <<  PORT175_eFTU2_OUT_S24) | \
        (1 <<  PORT175_FCSPI7_PCS2) ),

        /* PTF16 */
        (uint8)( (1 <<  PORT176_ADC5_SE19) | \
        (1 <<  PORT176_GPIO) | \
        (1 <<  PORT176_eFTU1_IN5) | \
        (1 <<  PORT176_FCSPI5_SIN) | \
        (1 <<  PORT176_eFTU2_OUT_S11) | \
        (1 <<  PORT176_TPU0_CH23) | \
        (1 <<  PORT176_eFTU1_OUT_S29) ),

        /* PTF17 */
        (uint8)( (1 <<  PORT177_ADC4_SE19) | \
        (1 <<  PORT177_GPIO) | \
        (1 <<  PORT177_FTU_FLT21) | \
        (1 <<  PORT177_eFTU1_IN6) | \
        (1 <<  PORT177_FCSPI5_SOUT) | \
        (1 <<  PORT177_eFTU2_OUT_S12) | \
        (1 <<  PORT177_TPU0_CH22) | \
        (1 <<  PORT177_eFTU1_OUT_S30) ),

        /* PTF18 */
        (uint8)( (1 <<  PORT178_GPIO) | \
        (1 <<  PORT178_FCSPI4_PCS3) | \
        (1 <<  PORT178_eFTU0_IN7) | \
        (1 <<  PORT178_FCUART1_TX) | \
        (1 <<  PORT178_MSC1_EN2) | \
        (1 <<  PORT178_TPU0_CH3) | \
        (1 <<  PORT178_eFTU1_OUT_S0) ),

        /* PTF19 */
        (uint8)( (1 <<  PORT179_GPIO) | \
        (1 <<  PORT179_FCSPI4_PCS2) | \
        (1 <<  PORT179_FTU6_CH1) | \
        (1 <<  PORT179_FCUART1_RX) | \
        (1 <<  PORT179_MSC1_SDI2) | \
        (1 <<  PORT179_eFTU0_IN0) | \
        (1 <<  PORT179_eFTU1_OUT_S1) ),

        /* PTF20 */
        (uint8)( (1 <<  PORT180_GPIO) | \
        (1 <<  PORT180_FCSPI4_PCS1) | \
        (1 <<  PORT180_FTU6_CH2) | \
        (1 <<  PORT180_FLEXCAN2_RX) | \
        (1 <<  PORT180_MSC1_EN3) | \
        (1 <<  PORT180_eFTU0_IN1) | \
        (1 <<  PORT180_eFTU1_OUT_S2) ),

        /* PTF21 */
        (uint8)( (1 <<  PORT181_HSADC3_CH5) | \
        (1 <<  PORT181_GPIO) | \
        (1 <<  PORT181_FTU3_CH6) | \
        (1 <<  PORT181_FCIIC1_SCL) | \
        (1 <<  PORT181_CMP0_OUT) | \
        (1 <<  PORT181_RTC_CLKOUT) | \
        (1 <<  PORT181_eFTU1_IN7) | \
        (1 <<  PORT181_eFTU0_OUT_S6) ),

        /* PTF22 */
        (uint8)( (1 <<  PORT182_HSADC3_CH4) | \
        (1 <<  PORT182_GPIO) | \
        (1 <<  PORT182_FTU3_CH7) | \
        (1 <<  PORT182_FCIIC1_SDA) | \
        (1 <<  PORT182_eFTU2_IN0) | \
        (1 <<  PORT182_eFTU2_OUT_S15) | \
        (1 <<  PORT182_eFTU0_OUT_S7) ),

        /* PTF23 */
        (uint8)( (1 <<  PORT183_ADC2_SE6_ADC2_DIFF_N2) | \
        (1 <<  PORT183_GPIO) | \
        (1 <<  PORT183_SENT0_RXD0) | \
        (1 <<  PORT183_FCUART0_TX) | \
        (1 <<  PORT183_FCSPI0_SOUT) | \
        (1 <<  PORT183_LP_WAKEUP4) | \
        (1 <<  PORT183_eFTU2_OUT_S28) ),

        /* PTF24 */
        (uint8)( (1 <<  PORT184_ADC1_SE1_ADC1_DIFF_P1) | \
        (1 <<  PORT184_GPIO) | \
        (1 <<  PORT184_FTU4_CH6) | \
        (1 <<  PORT184_QDT0_HOME) | \
        (1 <<  PORT184_HRPWM0_CH0) | \
        (1 <<  PORT184_FCSPI2_PCS3) | \
        (1 <<  PORT184_HSADC0_BFL) | \
        (1 <<  PORT184_eFTU1_OUT_S2) ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTG0 */
        (uint8)( (1 <<  PORT192_ADC5_SE23) | \
        (1 <<  PORT192_GPIO) | \
        (1 <<  PORT192_FCUART6_CTS) | \
        (1 <<  PORT192_eFTU0_IN1) | \
        (1 <<  PORT192_FCUART8_TX) | \
        (1 <<  PORT192_FLEXCAN12_RX) | \
        (1 <<  PORT192_HSADC2_IO1) | \
        (1 <<  PORT192_eFTU1_OUT_S28) ),

        /* PTG1 */
        (uint8)( (1 <<  PORT193_ADC0_SE0_ADC0_DIFF_P0) | \
        (1 <<  PORT193_GPIO) | \
        (1 <<  PORT193_eFTU2_IN0) | \
        (1 <<  PORT193_FLEXCAN5_TX) | \
        (1 <<  PORT193_eFTU2_OUT_S4) ),

        /* PTG2 */
        (uint8)( (1 <<  PORT194_ADC0_SE4_ADC0_DIFF_N0) | \
        (1 <<  PORT194_GPIO) | \
        (1 <<  PORT194_eFTU2_IN1) | \
        (1 <<  PORT194_FLEXCAN5_RX) | \
        (1 <<  PORT194_eFTU2_OUT_S5) ),

        /* PTG3 */
        (uint8)( (1 <<  PORT195_ADC1_SE11) | \
        (1 <<  PORT195_GPIO) | \
        (1 <<  PORT195_FCUART9_RX) | \
        (1 <<  PORT195_eFTU1_IN3) | \
        (1 <<  PORT195_eFTU_GTOM14) | \
        (1 <<  PORT195_ETM_TRACE_D8) | \
        (1 <<  PORT195_TPU0_CH17) | \
        (1 <<  PORT195_eFTU2_OUT_S20) ),

        /* PTG4 */
        (uint8)( (1 <<  PORT196_ADC0_SE12_CMP0_IN2) | \
        (1 <<  PORT196_GPIO) | \
        (1 <<  PORT196_FCUART9_TX) | \
        (1 <<  PORT196_eFTU1_IN2) | \
        (1 <<  PORT196_eFTU_GTOM15) | \
        (1 <<  PORT196_ETM_TRACE_D9) | \
        (1 <<  PORT196_TPU0_CH18) | \
        (1 <<  PORT196_eFTU2_OUT_S21) ),

        /* PTG5 */
        (uint8)( (1 <<  PORT197_ADC1_SE12) | \
        (1 <<  PORT197_GPIO) | \
        (1 <<  PORT197_FCUART9_RTS) | \
        (1 <<  PORT197_eFTU1_IN1) | \
        (1 <<  PORT197_SSI0_DIG_14_CH0) | \
        (1 <<  PORT197_ETM_TRACE_D10) | \
        (1 <<  PORT197_QDT0_HOME) | \
        (1 <<  PORT197_eFTU2_OUT_S22) ),

        /* PTG6 */
        (uint8)( (1 <<  PORT198_GPIO) | \
        (1 <<  PORT198_TPU0_CH12) | \
        (1 <<  PORT198_eFTU0_IN6) | \
        (1 <<  PORT198_FCSPI3_SOUT) | \
        (1 <<  PORT198_HSADC0_IO0) | \
        (1 <<  PORT198_TRGSEL_OUT3) | \
        (1 <<  PORT198_eFTU1_OUT_S6) ),

        /* PTG7 */
        (uint8)( (1 <<  PORT199_GPIO) | \
        (1 <<  PORT199_TPU0_CH13) | \
        (1 <<  PORT199_eFTU0_IN7) | \
        (1 <<  PORT199_FCSPI3_PCS0) | \
        (1 <<  PORT199_HSADC0_IO1) | \
        (1 <<  PORT199_TRGSEL_OUT2) | \
        (1 <<  PORT199_eFTU1_OUT_S7) ),

        /* PTG8 */
        (uint8)( (1 <<  PORT200_GPIO) | \
        (1 <<  PORT200_FCUART12_CTS) | \
        (1 <<  PORT200_eFTU0_IN0) | \
        (1 <<  PORT200_FCUART3_TX) | \
        (1 <<  PORT200_ENET_REF_CLK) | \
        (1 <<  PORT200_TPU0_CH14) | \
        (1 <<  PORT200_FLEXCAN6_TX) ),

        /* PTG9 */
        (uint8)( (1 <<  PORT201_SDADC_CH_N1_ADC4_SE2_ADC4_DIFF_P2) | \
        (1 <<  PORT201_GPIO) | \
        (1 <<  PORT201_FLEXCAN6_RX) | \
        (1 <<  PORT201_FTU0_CH6) | \
        (1 <<  PORT201_MSC0_SDI3) | \
        (1 <<  PORT201_SDADC0_CH1) | \
        (1 <<  PORT201_eFTU2_OUT_S9) | \
        (1 <<  PORT201_eFTU0_OUT_S31) ),

        /* PTG10 */
        (uint8)( (1 <<  PORT202_SDADC0_CH2_P0) | \
        (1 <<  PORT202_GPIO) | \
        (1 <<  PORT202_SDADC0_BREAK2) | \
        (1 <<  PORT202_FTU0_CH7) | \
        (1 <<  PORT202_FTU2_QD_PHA) | \
        (1 <<  PORT202_eFTU2_OUT_S10) ),

        /* PTG11 */
        (uint8)( (1 <<  PORT203_SDADC0_CH2_N0) | \
        (1 <<  PORT203_GPIO) | \
        (1 <<  PORT203_eFTU0_OUT_S24) | \
        (1 <<  PORT203_eFTU1_OUT_S20) | \
        (1 <<  PORT203_FTU2_QD_PHB) | \
        (1 <<  PORT203_TPU0_CH27) ),

        /* PTG12 */
        (uint8)( (1 <<  PORT204_ADC4_SE3_ADC4_DIFF_P3) | \
        (1 <<  PORT204_GPIO) | \
        (1 <<  PORT204_SDADC0_PWM_N) | \
        (1 <<  PORT204_FLEXCAN9_RX) | \
        (1 <<  PORT204_FTU6_CH7) | \
        (1 <<  PORT204_SDADC1_EXT_SIGN) | \
        (1 <<  PORT204_eFTU1_OUT_S30) ),

        /* PTG13 */
        (uint8)( (1 <<  PORT205_ADC4_SE10) | \
        (1 <<  PORT205_GPIO) | \
        (1 <<  PORT205_TPU0_CH7) | \
        (1 <<  PORT205_eFTU1_IN4) | \
        (1 <<  PORT205_FLEXCAN4_TX) | \
        (1 <<  PORT205_SDADC0_PWM_P) | \
        (1 <<  PORT205_QDT0_HOME) | \
        (1 <<  PORT205_eFTU2_OUT_S16) ),

        /* PTG14 */
        (uint8)( (1 <<  PORT206_ADC3_SE10) | \
        (1 <<  PORT206_GPIO) | \
        (1 <<  PORT206_TPU0_CH8) | \
        (1 <<  PORT206_eFTU1_IN5) | \
        (1 <<  PORT206_FLEXCAN4_RX) | \
        (1 <<  PORT206_SDADC0_PWM_N) | \
        (1 <<  PORT206_QDT0_INDEX) | \
        (1 <<  PORT206_eFTU2_OUT_S17) ),

        /* PTG15 */
        (uint8)( (1 <<  PORT207_GPIO) | \
        (1 <<  PORT207_FLEXCAN10_TX) | \
        (1 <<  PORT207_FCIIC0_SCL) | \
        (1 <<  PORT207_MSC1_EN0) | \
        (1 <<  PORT207_TRGSEL_OUT2) | \
        (1 <<  PORT207_eFTU2_IN3) | \
        (1 <<  PORT207_eFTU_GTOM6) ),

        /* PTG16 */
        (uint8)( (1 <<  PORT208_GPIO) | \
        (1 <<  PORT208_FLEXCAN10_RX) | \
        (1 <<  PORT208_FCIIC0_SDA) | \
        (1 <<  PORT208_MSC1_SDI0) | \
        (1 <<  PORT208_TRGSEL_OUT3) | \
        (1 <<  PORT208_eFTU2_IN4) | \
        (1 <<  PORT208_eFTU_GTOM5) ),

        /* PTG17 */
        (uint8)( (1 <<  PORT209_GPIO) | \
        (1 <<  PORT209_TPU0_CH10) | \
        (1 <<  PORT209_FLEXCAN7_TX) | \
        (1 <<  PORT209_MSC1_EN1) | \
        (1 <<  PORT209_QDT1_PHA) | \
        (1 <<  PORT209_eFTU2_IN5) | \
        (1 <<  PORT209_eFTU_GTOM4) ),

        /* PTG18 */
        (uint8)( (1 <<  PORT210_GPIO) | \
        (1 <<  PORT210_FCSPI4_PCS0) | \
        (1 <<  PORT210_FTU1_CH0) | \
        (1 <<  PORT210_FCUART10_RX) | \
        (1 <<  PORT210_FLEXCAN7_RX) | \
        (1 <<  PORT210_SENT1_RXD0) | \
        (1 <<  PORT210_eFTU1_OUT_S6) ),

        /* PTG19 */
        (uint8)( (1 <<  PORT211_ADC2_SE23) | \
        (1 <<  PORT211_GPIO) | \
        (1 <<  PORT211_FCSPI4_SCK) | \
        (1 <<  PORT211_FTU1_CH1) | \
        (1 <<  PORT211_FCUART10_TX) | \
        (1 <<  PORT211_FLEXCAN7_TX) | \
        (1 <<  PORT211_SENT1_RXD1) | \
        (1 <<  PORT211_eFTU1_OUT_S7) ),

        /* PTG20 */
        (uint8)( (1 <<  PORT212_ADC2_SE22) | \
        (1 <<  PORT212_GPIO) | \
        (1 <<  PORT212_FCSPI4_SIN) | \
        (1 <<  PORT212_FTU1_CH2) | \
        (1 <<  PORT212_FCUART10_CTS) | \
        (1 <<  PORT212_FLEXCAN3_TX) | \
        (1 <<  PORT212_SENT1_RXD2) | \
        (1 <<  PORT212_eFTU1_OUT_S8) ),

        /* PTG21 */
        (uint8)( (1 <<  PORT213_ADC2_SE2_ADC2_DIFF_P2) | \
        (1 <<  PORT213_GPIO) | \
        (1 <<  PORT213_SENT0_RXD1) | \
        (1 <<  PORT213_FCUART0_RX) | \
        (1 <<  PORT213_FCSPI0_PCS0) | \
        (1 <<  PORT213_eFTU2_OUT_S29) ),

        /* PTG22 */
        (uint8)( (1 <<  PORT214_ADC2_SE5_ADC2_DIFF_N1) | \
        (1 <<  PORT214_GPIO) | \
        (1 <<  PORT214_SENT0_RXD2) | \
        (1 <<  PORT214_FTU1_QD_PHA) | \
        (1 <<  PORT214_FCSPI0_SIN) | \
        (1 <<  PORT214_eFTU2_OUT_S27) | \
        (1 <<  PORT214_eFTU2_OUT_S0) ),

        /* PTG23 */
        (uint8)( (1 <<  PORT215_ADC2_SE1_ADC2_DIFF_P1) | \
        (1 <<  PORT215_GPIO) | \
        (1 <<  PORT215_SENT0_RXD3) | \
        (1 <<  PORT215_FTU1_QD_PHB) | \
        (1 <<  PORT215_FCSPI0_SCK) | \
        (1 <<  PORT215_eFTU2_OUT_S26) | \
        (1 <<  PORT215_eFTU2_OUT_S1) ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTH0 */
        (uint8)( (1 <<  PORT224_HSADC0_CH2) | \
        (1 <<  PORT224_GPIO) | \
        (1 <<  PORT224_FCUART7_RTS) | \
        (1 <<  PORT224_eFTU1_IN7) | \
        (1 <<  PORT224_FLEXCAN4_TX) | \
        (1 <<  PORT224_eFTU2_OUT_S25) ),

        /* PTH1 */
        (uint8)( (1 <<  PORT225_HSADC0_CH3) | \
        (1 <<  PORT225_GPIO) | \
        (1 <<  PORT225_FCUART7_CTS) | \
        (1 <<  PORT225_eFTU1_IN6) | \
        (1 <<  PORT225_FLEXCAN4_RX) | \
        (1 <<  PORT225_eFTU2_OUT_S24) ),

        /* PTH2 */
        (uint8)( (1 <<  PORT226_ADC2_SE4_ADC2_DIFF_N0) | \
        (1 <<  PORT226_GPIO) | \
        (1 <<  PORT226_FCUART7_RX) | \
        (1 <<  PORT226_eFTU1_IN5) | \
        (1 <<  PORT226_FCSPI6_PCS3) | \
        (1 <<  PORT226_eFTU2_OUT_S23) | \
        (1 <<  PORT226_FLEXCAN10_TX) ),

        /* PTH3 */
        (uint8)( (1 <<  PORT227_ADC0_SE13) | \
        (1 <<  PORT227_GPIO) | \
        (1 <<  PORT227_FCUART9_CTS) | \
        (1 <<  PORT227_eFTU1_IN0) | \
        (1 <<  PORT227_SSI0_DIG_28_CH0) | \
        (1 <<  PORT227_ETM_TRACE_D11) | \
        (1 <<  PORT227_QDT0_INDEX) | \
        (1 <<  PORT227_eFTU2_OUT_S23) ),

        /* PTH4 */
        (uint8)( (1 <<  PORT228_SSI0_ANA_CH0) | \
        (1 <<  PORT228_GPIO) | \
        (1 <<  PORT228_QDT0_PHA) | \
        (1 <<  PORT228_eFTU0_IN0) | \
        (1 <<  PORT228_ENET_PPS0) | \
        (1 <<  PORT228_ETM_TRACE_D12) | \
        (1 <<  PORT228_FCSPI6_SIN) | \
        (1 <<  PORT228_eFTU1_OUT_S13) ),

        /* PTH5 */
        (uint8)( (1 <<  PORT229_SSI0_ANA_CH1) | \
        (1 <<  PORT229_GPIO) | \
        (1 <<  PORT229_QDT0_PHB) | \
        (1 <<  PORT229_eFTU0_IN1) | \
        (1 <<  PORT229_ENET_PPS1) | \
        (1 <<  PORT229_ETM_TRACE_D13) | \
        (1 <<  PORT229_FCSPI6_SCK) | \
        (1 <<  PORT229_eFTU1_OUT_S14) ),

        /* PTH6 */
        (uint8)( (1 <<  PORT230_GPIO) | \
        (1 <<  PORT230_FCUART12_RTS) | \
        (1 <<  PORT230_eFTU0_IN1) | \
        (1 <<  PORT230_FCUART3_RX) | \
        (1 <<  PORT230_HSADC3_IO0) | \
        (1 <<  PORT230_TPU0_CH15) | \
        (1 <<  PORT230_FLEXCAN6_RX) ),

        /* PTH7 */
        (uint8)( (1 <<  PORT231_GPIO) | \
        (1 <<  PORT231_FTU_FLT8) | \
        (1 <<  PORT231_eFTU0_IN2) | \
        (1 <<  PORT231_FCUART12_RX) | \
        (1 <<  PORT231_ENET_COL) | \
        (1 <<  PORT231_TPU0_CH16) | \
        (1 <<  PORT231_HSADC0_IO2) ),

        /* PTH8 */
        (uint8)( (1 <<  PORT232_GPIO) | \
        (1 <<  PORT232_eFTU0_IN5) | \
        (1 <<  PORT232_eFTU1_OUT_S18) | \
        (1 <<  PORT232_TPU0_CH24) | \
        (1 <<  PORT232_ENET_CRS) | \
        (1 <<  PORT232_QDT2_PHB) | \
        (1 <<  PORT232_eFTU1_OUT_S2) ),

        /* PTH9 */
        (uint8)( (1 <<  PORT233_ADC3_SE5_ADC3_DIFF_N1) | \
        (1 <<  PORT233_GPIO) | \
        (1 <<  PORT233_SDADC0_EXT_SIGN) | \
        (1 <<  PORT233_eFTU2_IN1) | \
        (1 <<  PORT233_TPU0_TCRCLK) | \
        (1 <<  PORT233_FTU1_QD_PHB) | \
        (1 <<  PORT233_eFTU1_OUT_S23) | \
        (1 <<  PORT233_eFTU2_OUT_S1) ),

        /* PTH10 */
        (uint8)( (1 <<  PORT234_SDADC1_CH1_P0) | \
        (1 <<  PORT234_GPIO) | \
        (1 <<  PORT234_SDADC1_BREAK1) | \
        (1 <<  PORT234_eFTU2_IN2) | \
        (1 <<  PORT234_eFTU1_OUT_S24) | \
        (1 <<  PORT234_FLEXCAN13_RX) | \
        (1 <<  PORT234_eFTU2_OUT_S2) ),

        /* PTH11 */
        (uint8)( (1 <<  PORT235_ADC5_SE9) | \
        (1 <<  PORT235_GPIO) | \
        (1 <<  PORT235_FLEXCAN10_TX) | \
        (1 <<  PORT235_eFTU1_IN0) | \
        (1 <<  PORT235_TPU0_TCRCLK) | \
        (1 <<  PORT235_FCSPI7_SIN) | \
        (1 <<  PORT235_MSC0_FCLP) | \
        (1 <<  PORT235_TPU0_CH0) ),

        /* PTH12 */
        (uint8)( (1 <<  PORT236_ADC3_SE15) | \
        (1 <<  PORT236_GPIO) | \
        (1 <<  PORT236_TPU0_CH27) | \
        (1 <<  PORT236_eFTU1_IN7) | \
        (1 <<  PORT236_FCUART1_TX) | \
        (1 <<  PORT236_eFTU2_OUT_S26) | \
        (1 <<  PORT236_FCSPI7_PCS3) ),

        /* PTH13 */
        (uint8)( (1 <<  PORT237_ADC5_SE16) | \
        (1 <<  PORT237_GPIO) | \
        (1 <<  PORT237_TPU0_CH26) | \
        (1 <<  PORT237_eFTU1_IN0) | \
        (1 <<  PORT237_FCUART1_RX) | \
        (1 <<  PORT237_eFTU2_OUT_S27) ),

        /* PTH14 */
        (uint8)( (1 <<  PORT238_ADC4_SE16) | \
        (1 <<  PORT238_GPIO) | \
        (1 <<  PORT238_TPU0_CH25) | \
        (1 <<  PORT238_eFTU1_IN1) | \
        (1 <<  PORT238_FCSPI5_PCS3) | \
        (1 <<  PORT238_FCUART3_TX) | \
        (1 <<  PORT238_eFTU2_OUT_S28) ),

        /* PTH15 */
        (uint8)( (1 <<  PORT239_GPIO) | \
        (1 <<  PORT239_TPU0_CH9) | \
        (1 <<  PORT239_FLEXCAN7_RX) | \
        (1 <<  PORT239_MSC1_SDI1) | \
        (1 <<  PORT239_QDT1_PHB) | \
        (1 <<  PORT239_eFTU2_IN6) | \
        (1 <<  PORT239_eFTU_GTOM3) ),

        /* PTH16 */
        (uint8)( (1 <<  PORT240_GPIO) | \
        (1 <<  PORT240_FCSPI5_PCS0) | \
        (1 <<  PORT240_eFTU0_IN2) | \
        (1 <<  PORT240_MSC1_FCLP) | \
        (1 <<  PORT240_TPU0_CH6) | \
        (1 <<  PORT240_QDT3_HOME) | \
        (1 <<  PORT240_eFTU_GTOM6) ),

        /* PTH17 */
        (uint8)( (1 <<  PORT241_GPIO) | \
        (1 <<  PORT241_FCSPI5_SCK) | \
        (1 <<  PORT241_eFTU0_IN3) | \
        (1 <<  PORT241_MSC1_SOP) | \
        (1 <<  PORT241_TPU0_CH5) | \
        (1 <<  PORT241_QDT3_INDEX) | \
        (1 <<  PORT241_eFTU_GTOM5) ),

        /* PTH18 */
        (uint8)( (1 <<  PORT242_ADC2_SE21) | \
        (1 <<  PORT242_GPIO) | \
        (1 <<  PORT242_FCSPI4_SOUT) | \
        (1 <<  PORT242_FTU1_CH3) | \
        (1 <<  PORT242_FCUART10_RTS) | \
        (1 <<  PORT242_FLEXCAN3_RX) | \
        (1 <<  PORT242_SENT1_RXD3) | \
        (1 <<  PORT242_eFTU1_OUT_S9) ),

        /* PTH19 */
        (uint8)( (1 <<  PORT243_ADC2_SE16) | \
        (1 <<  PORT243_GPIO) | \
        (1 <<  PORT243_SENT1_RXD0) | \
        (1 <<  PORT243_FTU1_CH4) | \
        (1 <<  PORT243_FCUART10_RX) | \
        (1 <<  PORT243_eFTU2_OUT_S9) | \
        (1 <<  PORT243_TRGSEL_OUT0) | \
        (1 <<  PORT243_eFTU1_OUT_S10) ),

        /* PTH20 */
        (uint8)( (1 <<  PORT244_ADC2_SE15) | \
        (1 <<  PORT244_GPIO) | \
        (1 <<  PORT244_SENT1_RXD1) | \
        (1 <<  PORT244_FTU1_CH5) | \
        (1 <<  PORT244_FCUART10_TX) | \
        (1 <<  PORT244_eFTU2_OUT_S10) | \
        (1 <<  PORT244_TRGSEL_OUT1) | \
        (1 <<  PORT244_eFTU1_OUT_S11) ),

        /* PTH21 */
        (uint8)( (1 <<  PORT245_GPIO) | \
        (1 <<  PORT245_TPU0_CH10) | \
        (1 <<  PORT245_eFTU0_IN4) | \
        (1 <<  PORT245_FCSPI3_SCK) | \
        (1 <<  PORT245_FTU_FLT4) | \
        (1 <<  PORT245_TRGSEL_OUT5) | \
        (1 <<  PORT245_eFTU1_OUT_S4) ),

        /* PTH22 */
        (uint8)( (1 <<  PORT246_GPIO) | \
        (1 <<  PORT246_FTU7_CH6) | \
        (1 <<  PORT246_eFTU1_OUT_S19) | \
        (1 <<  PORT246_FCIIC1_SCL) | \
        (1 <<  PORT246_TPU0_CH25) | \
        (1 <<  PORT246_HSADC1_IO2) | \
        (1 <<  PORT246_eFTU1_OUT_S3) ),

        /* PTH23 */
        (uint8)( (1 <<  PORT247_ADC2_SE20) | \
        (1 <<  PORT247_GPIO) | \
        (1 <<  PORT247_eFTU1_IN6) | \
        (1 <<  PORT247_QDT1_HOME) | \
        (1 <<  PORT247_FLEXCAN2_RX) | \
        (1 <<  PORT247_eFTU2_OUT_S6) | \
        (1 <<  PORT247_eFTU1_OUT_S10) ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTI0 */
        (uint8)( (1 <<  PORT256_ADC2_SE0_ADC2_DIFF_P0) | \
        (1 <<  PORT256_GPIO) | \
        (1 <<  PORT256_FCUART7_TX) | \
        (1 <<  PORT256_eFTU1_IN3) | \
        (1 <<  PORT256_FCSPI6_PCS2) | \
        (1 <<  PORT256_eFTU2_OUT_S22) | \
        (1 <<  PORT256_FLEXCAN10_RX) ),

        /* PTI1 */
        (uint8)( (1 <<  PORT257_HSADC1_CH2) | \
        (1 <<  PORT257_GPIO) | \
        (1 <<  PORT257_FCUART8_RX) | \
        (1 <<  PORT257_eFTU2_IN2) | \
        (1 <<  PORT257_FCSPI6_PCS0) | \
        (1 <<  PORT257_eFTU2_OUT_S19) ),

        /* PTI2 */
        (uint8)( (1 <<  PORT258_HSADC0_CH5) | \
        (1 <<  PORT258_GPIO) | \
        (1 <<  PORT258_FCUART8_TX) | \
        (1 <<  PORT258_eFTU2_IN3) | \
        (1 <<  PORT258_FCSPI6_PCS1) | \
        (1 <<  PORT258_eFTU2_OUT_S10) | \
        (1 <<  PORT258_FLEXCAN9_TX) ),

        /* PTI3 */
        (uint8)( (1 <<  PORT259_SSI0_ANA_CH2) | \
        (1 <<  PORT259_GPIO) | \
        (1 <<  PORT259_FCUART11_CTS) | \
        (1 <<  PORT259_eFTU0_IN2) | \
        (1 <<  PORT259_FLEXCAN8_TX) | \
        (1 <<  PORT259_ETM_TRACE_D14) | \
        (1 <<  PORT259_FCSPI6_SOUT) | \
        (1 <<  PORT259_eFTU1_OUT_S15) ),

        /* PTI4 */
        (uint8)( (1 <<  PORT260_SSI0_ANA_CH3) | \
        (1 <<  PORT260_GPIO) | \
        (1 <<  PORT260_FCUART11_RTS) | \
        (1 <<  PORT260_eFTU0_IN3) | \
        (1 <<  PORT260_FLEXCAN8_RX) | \
        (1 <<  PORT260_ETM_TRACE_D15) | \
        (1 <<  PORT260_FCSPI6_PCS0) | \
        (1 <<  PORT260_eFTU1_OUT_S0) ),

        /* PTI5 */
        (uint8)( (1 <<  PORT261_ADC1_SE13) | \
        (1 <<  PORT261_GPIO) | \
        (1 <<  PORT261_FCUART11_RX) | \
        (1 <<  PORT261_FTU6_CH3) | \
        (1 <<  PORT261_SSI0_DIG_14_CH1) | \
        (1 <<  PORT261_eFTU2_OUT_S18) | \
        (1 <<  PORT261_eFTU0_OUT_S16) | \
        (1 <<  PORT261_TPU0_CH23) ),

        /* PTI6 */
        (uint8)( (1 <<  PORT262_ADC5_SE5_ADC5_DIFF_N1) | \
        (1 <<  PORT262_GPIO) | \
        (1 <<  PORT262_FCUART13_RX) | \
        (1 <<  PORT262_FTU0_CH0) | \
        (1 <<  PORT262_MSC0_SOP) | \
        (1 <<  PORT262_eFTU0_OUT_S25) | \
        (1 <<  PORT262_eFTU2_OUT_S3) | \
        (1 <<  PORT262_TPU0_CH26) ),

        /* PTI7 */
        (uint8)( (1 <<  PORT263_ADC4_SE0_ADC4_DIFF_P0) | \
        (1 <<  PORT263_GPIO) | \
        (1 <<  PORT263_FCUART13_TX) | \
        (1 <<  PORT263_FTU0_CH1) | \
        (1 <<  PORT263_MSC0_EN0) | \
        (1 <<  PORT263_eFTU0_OUT_S26) | \
        (1 <<  PORT263_eFTU2_OUT_S4) | \
        (1 <<  PORT263_TPU0_CH27) ),

        /* PTI8 */
        (uint8)( (1 <<  PORT264_ADC4_SE4_ADC4_DIFF_N0) | \
        (1 <<  PORT264_GPIO) | \
        (1 <<  PORT264_FCUART13_CTS) | \
        (1 <<  PORT264_FTU0_CH2) | \
        (1 <<  PORT264_MSC0_EN1) | \
        (1 <<  PORT264_FLEXCAN9_TX) | \
        (1 <<  PORT264_SDADC1_PWM_P) | \
        (1 <<  PORT264_TPU0_CH28) ),

        /* PTI9 */
        (uint8)( (1 <<  PORT265_ADC4_SE9) | \
        (1 <<  PORT265_GPIO) | \
        (1 <<  PORT265_FLEXCAN10_RX) | \
        (1 <<  PORT265_eFTU1_IN1) | \
        (1 <<  PORT265_eFTU0_OUT_S31) | \
        (1 <<  PORT265_FCSPI7_SCK) | \
        (1 <<  PORT265_MSC0_SOP) | \
        (1 <<  PORT265_TPU0_CH1) ),

        /* PTI10 */
        (uint8)( (1 <<  PORT266_ADC3_SE9) | \
        (1 <<  PORT266_GPIO) | \
        (1 <<  PORT266_FLEXCAN11_TX) | \
        (1 <<  PORT266_eFTU1_IN2) | \
        (1 <<  PORT266_FCUART4_TX) | \
        (1 <<  PORT266_FCSPI7_SOUT) | \
        (1 <<  PORT266_eFTU1_OUT_S24) | \
        (1 <<  PORT266_TPU0_CH6) ),

        /* PTI11 */
        (uint8)( (1 <<  PORT267_ADC5_SE10) | \
        (1 <<  PORT267_GPIO) | \
        (1 <<  PORT267_FLEXCAN11_RX) | \
        (1 <<  PORT267_eFTU1_IN3) | \
        (1 <<  PORT267_FCUART4_RX) | \
        (1 <<  PORT267_FCSPI7_PCS0) | \
        (1 <<  PORT267_eFTU1_OUT_S25) ),

        /* PTI12 */
        (uint8)( (1 <<  PORT268_ADC3_SE16) | \
        (1 <<  PORT268_GPIO) | \
        (1 <<  PORT268_TPU0_CH24) | \
        (1 <<  PORT268_eFTU1_IN2) | \
        (1 <<  PORT268_FCSPI5_PCS2) | \
        (1 <<  PORT268_FCUART3_RX) | \
        (1 <<  PORT268_eFTU2_OUT_S29) ),

        /* PTI13 */
        (uint8)( (1 <<  PORT269_SDADC1_CH0_P0) | \
        (1 <<  PORT269_GPIO) | \
        (1 <<  PORT269_eFTU0_OUT_S26) | \
        (1 <<  PORT269_FLEXCAN8_TX) | \
        (1 <<  PORT269_SDADC1_CH1) | \
        (1 <<  PORT269_eFTU2_OUT_S14) ),

        /* PTI14 */
        (uint8)( (1 <<  PORT270_ADC3_SE1_ADC3_DIFF_P1) | \
        (1 <<  PORT270_GPIO) | \
        (1 <<  PORT270_eFTU0_OUT_S27) | \
        (1 <<  PORT270_FLEXCAN8_RX) | \
        (1 <<  PORT270_SDADC1_CH2) | \
        (1 <<  PORT270_eFTU2_OUT_S15) | \
        (1 <<  PORT270_TPU0_CH31) ),

        /* PTI15 */
        (uint8)( (1 <<  PORT271_GPIO) | \
        (1 <<  PORT271_FCSPI5_SIN) | \
        (1 <<  PORT271_eFTU0_IN4) | \
        (1 <<  PORT271_MSC1_EN0) | \
        (1 <<  PORT271_FLEXCAN1_TX) | \
        (1 <<  PORT271_QDT3_PHA) | \
        (1 <<  PORT271_eFTU_GTOM4) ),

        /* PTI16 */
        (uint8)( (1 <<  PORT272_GPIO) | \
        (1 <<  PORT272_FCSPI5_SOUT) | \
        (1 <<  PORT272_eFTU0_IN5) | \
        (1 <<  PORT272_MSC1_EN1) | \
        (1 <<  PORT272_FLEXCAN1_RX) | \
        (1 <<  PORT272_QDT3_PHB) | \
        (1 <<  PORT272_eFTU_GTOM3) ),

        /* PTI17 */
        (uint8)( (1 <<  PORT273_GPIO) | \
        (1 <<  PORT273_FCSPI5_PCS1) | \
        (1 <<  PORT273_eFTU0_IN6) | \
        (1 <<  PORT273_FLEXCAN2_TX) | \
        (1 <<  PORT273_TPU0_CH4) | \
        (1 <<  PORT273_HSADC0_IO0) | \
        (1 <<  PORT273_eFTU_GTOM2) ),

        /* PTI18 */
        (uint8)( (1 <<  PORT274_ADC2_SE14) | \
        (1 <<  PORT274_GPIO) | \
        (1 <<  PORT274_SENT1_RXD2) | \
        (1 <<  PORT274_FTU1_CH6) | \
        (1 <<  PORT274_FCUART2_TX) | \
        (1 <<  PORT274_FLEXCAN11_TX) ),

        /* PTI19 */
        (uint8)( (1 <<  PORT275_ADC2_SE13) | \
        (1 <<  PORT275_GPIO) | \
        (1 <<  PORT275_SENT1_RXD3) | \
        (1 <<  PORT275_FTU1_CH7) | \
        (1 <<  PORT275_FCUART2_RX) | \
        (1 <<  PORT275_FLEXCAN11_RX) ),

        /* PTI20 */
        (uint8)( (1 <<  PORT276_ADC2_SE10) | \
        (1 <<  PORT276_GPIO) | \
        (1 <<  PORT276_FTU_TCK2) | \
        (1 <<  PORT276_FTU_FLT20) | \
        (1 <<  PORT276_FTU6_CH7) | \
        (1 <<  PORT276_eFTU2_OUT_S13) | \
        (1 <<  PORT276_LP_GOOD) | \
        (1 <<  PORT276_eFTU1_OUT_S15) ),

        /* PTI21 */
        (uint8)( (1 <<  PORT277_ADC1_SE5_ADC1_DIFF_N1) | \
        (1 <<  PORT277_GPIO) | \
        (1 <<  PORT277_FTU4_CH5) | \
        (1 <<  PORT277_QDT0_INDEX) | \
        (1 <<  PORT277_HRPWM0_CH1) | \
        (1 <<  PORT277_FCSPI2_PCS2) | \
        (1 <<  PORT277_FLEXCAN13_TX) | \
        (1 <<  PORT277_eFTU1_OUT_S3) ),

        /* PTI22 */
        (uint8)( (1 <<  PORT278_ADC1_SE2_ADC1_DIFF_P2) | \
        (1 <<  PORT278_GPIO) | \
        (1 <<  PORT278_FTU4_CH4) | \
        (1 <<  PORT278_TPU0_CH19) | \
        (1 <<  PORT278_HRPWM0_CH2) | \
        (1 <<  PORT278_HSADC1_BFL) | \
        (1 <<  PORT278_FLEXCAN13_RX) | \
        (1 <<  PORT278_eFTU1_OUT_S4) ),

        /* PTI23 */
        (uint8)( (1 <<  PORT279_ADC0_SE6_ADC0_DIFF_N2) | \
        (1 <<  PORT279_GPIO) | \
        (1 <<  PORT279_FTU4_CH7) | \
        (1 <<  PORT279_TPU0_CH1) | \
        (1 <<  PORT279_SSI0_DIG_28_CH3) | \
        (1 <<  PORT279_eFTU2_OUT_S3) | \
        (1 <<  PORT279_FLEXCAN12_RX) | \
        (1 <<  PORT279_eFTU1_OUT_S1) )

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
