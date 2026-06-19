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
        (1 <<  PORT0_TRGSEL_OUT3)  ),

        /* PTA1 */
        (uint8)( (1 <<  PORT1_GPIO) | \
        (1 <<  PORT1_FTU4_CH4) | \
        (1 <<  PORT1_FCUART15_RX) | \
        (1 <<  PORT1_SENT1_RXD0) | \
        (1 <<  PORT1_FTU1_QD_PHA) | \
        (1 <<  PORT1_FCUART0_RTS) | \
        (1 <<  PORT1_TRGSEL_OUT0)  ),

        /* PTA2 */
        (uint8)( (1 <<  PORT2_GPIO) | \
        (1 <<  PORT2_FTU2_CH3) | \
        (1 <<  PORT2_FCIIC0_SDA) | \
        (1 <<  PORT2_MSC1_FCLP) | \
        (1 <<  PORT2_FCUART0_RX)  ),

        /* PTA3 */
        (uint8)( (1 <<  PORT3_GPIO) | \
        (1 <<  PORT3_FTU2_CH2) | \
        (1 <<  PORT3_FCIIC0_SCL) | \
        (1 <<  PORT3_FCUART0_TX)  ),

        /* PTA4 */
        (uint8)( (1 <<  PORT4_GPIO) | \
        (1 <<  PORT4_CMP0_OUT) | \
        (1 <<  PORT4_JTAG_TMS_SWD_DIO)  ),

        (uint8)0x00,

        /* PTA6 */
        (uint8)( (1 <<  PORT6_ADC2_SE13) | \
        (1 <<  PORT6_GPIO) | \
        (1 <<  PORT6_FTU5_CH0) | \
        (1 <<  PORT6_FTU_FLT13) | \
        (1 <<  PORT6_FCUART1_CTS) | \
        (1 <<  PORT6_TRGSEL_OUT4) | \
        (1 <<  PORT6_SDDF0_CH0) | \
        (1 <<  PORT6_FCSPI7_SIN)  ),

        /* PTA7 */
        (uint8)( (1 <<  PORT7_ADC2_SE11) | \
        (1 <<  PORT7_GPIO) | \
        (1 <<  PORT7_FTU7_CH6) | \
        (1 <<  PORT7_FTU_FLT12) | \
        (1 <<  PORT7_FCUART1_RTS) | \
        (1 <<  PORT7_FCSPI4_SIN)  ),

        /* PTA8 */
        (uint8)( (1 <<  PORT8_ADC1_SE14) | \
        (1 <<  PORT8_GPIO) | \
        (1 <<  PORT8_FCUART2_RX)  ),

        /* PTA9 */
        (uint8)( (1 <<  PORT9_ADC1_SE15) | \
        (1 <<  PORT9_GPIO) | \
        (1 <<  PORT9_FCUART2_TX) | \
        (1 <<  PORT9_RTC_CLKOUT)  ),

        /* PTA10 */
        (uint8)( (1 <<  PORT10_GPIO) | \
        (1 <<  PORT10_FTU3_CH1) | \
        (1 <<  PORT10_JTAG_TDO)  ),

        /* PTA11 */
        (uint8)( (1 <<  PORT11_GPIO) | \
        (1 <<  PORT11_FTU3_CH0) | \
        (1 <<  PORT11_FLEXCAN1_TX) | \
        (1 <<  PORT11_FCSPI0_PCS3) | \
        (1 <<  PORT11_NMI_b)  ),

        /* PTA12 */
        (uint8)( (1 <<  PORT12_ADC1_SE18) | \
        (1 <<  PORT12_GPIO) | \
        (1 <<  PORT12_FTU0_CH7) | \
        (1 <<  PORT12_FLEXCAN1_RX) | \
        (1 <<  PORT12_CMP2_OUT) | \
        (1 <<  PORT12_FCSPI0_SOUT) | \
        (1 <<  PORT12_FTU2_QD_PHB)  ),

        /* PTA13 */
        (uint8)( (1 <<  PORT13_GPIO) | \
        (1 <<  PORT13_FTU0_CH3) | \
        (1 <<  PORT13_CMP1_OUT) | \
        (1 <<  PORT13_FCUART0_RX) | \
        (1 <<  PORT13_FTU2_QD_PHA)  ),

        /* PTA14 */
        (uint8)( (1 <<  PORT14_GPIO) | \
        (1 <<  PORT14_FTU_FLT17) | \
        (1 <<  PORT14_AONTIMER0_CLK1) | \
        (1 <<  PORT14_CMP1_OUT) | \
        (1 <<  PORT14_FCUART0_TX)  ),

        /* PTA15 */
        (uint8)( (1 <<  PORT15_ADC1_SE28) | \
        (1 <<  PORT15_GPIO) | \
        (1 <<  PORT15_FTU6_CH4) | \
        (1 <<  PORT15_FTU5_QD_PHB) | \
        (1 <<  PORT15_FCUART10_TX) | \
        (1 <<  PORT15_TRGSEL_OUT0) | \
        (1 <<  PORT15_FLEXCAN3_RX)  ),

        /* PTA16 */
        (uint8)( (1 <<  PORT16_GPIO) | \
        (1 <<  PORT16_FTU6_CH2) | \
        (1 <<  PORT16_FCSMU_PIN0)  ),

        /* PTA17 */
        (uint8)( (1 <<  PORT17_ADC2_SE19) | \
        (1 <<  PORT17_GPIO) | \
        (1 <<  PORT17_FTU5_CH5) | \
        (1 <<  PORT17_FTU_FLT15) | \
        (1 <<  PORT17_FCSPI1_PCS2) | \
        (1 <<  PORT17_FLEXCAN4_TX)  ),

        /* PTA18 */
        (uint8)( (1 <<  PORT18_ADC1_SE7) | \
        (1 <<  PORT18_GPIO) | \
        (1 <<  PORT18_FTU3_CH6) | \
        (1 <<  PORT18_FCUART1_TX)  ),

        /* PTA19 */
        (uint8)( (1 <<  PORT19_ADC1_SE3) | \
        (1 <<  PORT19_GPIO) | \
        (1 <<  PORT19_FCUART1_RX) | \
        (1 <<  PORT19_FTU6_CH7)  ),

        /* PTA20 */
        (uint8)( (1 <<  PORT20_ADC1_SE6) | \
        (1 <<  PORT20_GPIO) | \
        (1 <<  PORT20_FTU3_CH7) | \
        (1 <<  PORT20_FCUART3_RTS)  ),

        /* PTA21 */
        (uint8)( (1 <<  PORT21_ADC0_SE2) | \
        (1 <<  PORT21_GPIO) | \
        (1 <<  PORT21_FCUART6_RX) | \
        (1 <<  PORT21_FCUART3_CTS) | \
        (1 <<  PORT21_FTU2_CH5)  ),

        /* PTA22 */
        (uint8)( (1 <<  PORT22_ADC0_SE1) | \
        (1 <<  PORT22_GPIO) | \
        (1 <<  PORT22_FTU2_CH3) | \
        (1 <<  PORT22_FTU2_QD_PHA) | \
        (1 <<  PORT22_FCUART7_RX)  ),

        /* PTA23 */
        (uint8)( (1 <<  PORT23_ADC0_SE14_CMP0_IN6) | \
        (1 <<  PORT23_GPIO) | \
        (1 <<  PORT23_FTU4_CH1) | \
        (1 <<  PORT23_FCUART3_RX) | \
        (1 <<  PORT23_TRACE_D0) | \
        (1 <<  PORT23_FTU4_QD_PHA)  ),

        /* PTA24 */
        (uint8)( (1 <<  PORT24_ADC0_SE15_CMP0_IN7) | \
        (1 <<  PORT24_GPIO) | \
        (1 <<  PORT24_FTU4_CH0) | \
        (1 <<  PORT24_FCUART3_TX) | \
        (1 <<  PORT24_TRACE_D1) | \
        (1 <<  PORT24_FTU4_QD_PHB)  ),

        /* PTA25 */
        (uint8)( (1 <<  PORT25_ADC0_SE11) | \
        (1 <<  PORT25_GPIO) | \
        (1 <<  PORT25_FTU4_CH3) | \
        (1 <<  PORT25_FCSPI2_SOUT)  ),

        /* PTA26 */
        (uint8)( (1 <<  PORT26_CMP0_IN1) | \
        (1 <<  PORT26_GPIO) | \
        (1 <<  PORT26_FTU2_CH2)  ),

        /* PTA27 */
        (uint8)( (1 <<  PORT27_ADC0_SE16) | \
        (1 <<  PORT27_GPIO) | \
        (1 <<  PORT27_FTU5_CH7) | \
        (1 <<  PORT27_FCUART0_TX) | \
        (1 <<  PORT27_TRACE_D2) | \
        (1 <<  PORT27_FCSPI1_PCS0)  ),

        /* PTA28 */
        (uint8)( (1 <<  PORT28_ADC0_SE18) | \
        (1 <<  PORT28_GPIO) | \
        (1 <<  PORT28_FTU5_CH5) | \
        (1 <<  PORT28_FCUART0_RX) | \
        (1 <<  PORT28_FCSPI1_SCK)  ),

        /* PTA29 */
        (uint8)( (1 <<  PORT29_ADC0_SE19) | \
        (1 <<  PORT29_GPIO) | \
        (1 <<  PORT29_FTU5_CH4) | \
        (1 <<  PORT29_FCSPI1_SIN)  ),

        /* PTA30 */
        (uint8)( (1 <<  PORT30_ADC0_SE25) | \
        (1 <<  PORT30_GPIO) | \
        (1 <<  PORT30_FTU5_CH2) | \
        (1 <<  PORT30_FCUART2_RX) | \
        (1 <<  PORT30_TRACE_D5) | \
        (1 <<  PORT30_FCSPI1_PCS2) | \
        (1 <<  PORT30_FTU5_QD_PHB)  ),

        /* PTA31 */
        (uint8)( (1 <<  PORT31_ADC0_SE29) | \
        (1 <<  PORT31_GPIO) | \
        (1 <<  PORT31_FTU0_CH6) | \
        (1 <<  PORT31_FCUART5_TX) | \
        (1 <<  PORT31_FTU_FLT3) | \
        (1 <<  PORT31_FLEXCAN3_TX)  ),

        /* PTB0 */
        (uint8)( (1 <<  PORT32_ADC3_SE18) | \
        (1 <<  PORT32_GPIO) | \
        (1 <<  PORT32_SDDF0_BREAK3) | \
        (1 <<  PORT32_FCUART14_TX) | \
        (1 <<  PORT32_FLEXCAN0_RX) | \
        (1 <<  PORT32_FTU3_CH6)  ),

        /* PTB1 */
        (uint8)( (1 <<  PORT33_ADC3_SE17) | \
        (1 <<  PORT33_GPIO) | \
        (1 <<  PORT33_SDDF0_BREAK2) | \
        (1 <<  PORT33_FTU_TCK0) | \
        (1 <<  PORT33_FCUART14_RX) | \
        (1 <<  PORT33_FLEXCAN0_TX) | \
        (1 <<  PORT33_FTU3_CH5)  ),

        (uint8)0x00,

        /* PTB3 */
        (uint8)( (1 <<  PORT35_ADC3_SE20) | \
        (1 <<  PORT35_GPIO) | \
        (1 <<  PORT35_FTU1_QD_PHA) | \
        (1 <<  PORT35_FCSPI2_SCK) | \
        (1 <<  PORT35_FTU3_CH7)  ),

        /* PTB4 */
        (uint8)( (1 <<  PORT36_GPIO) | \
        (1 <<  PORT36_FTU7_CH7) | \
        (1 <<  PORT36_FCUART9_RX) | \
        (1 <<  PORT36_ENET_MDIO)  ),

        /* PTB5 */
        (uint8)( (1 <<  PORT37_GPIO) | \
        (1 <<  PORT37_FTU6_CH2) | \
        (1 <<  PORT37_FCIIC1_SDA) | \
        (1 <<  PORT37_ENET_MDC)  ),

        /* PTB6 */
        (uint8)( (1 <<  PORT38_XTAL) | \
        (1 <<  PORT38_GPIO)  ),

        /* PTB7 */
        (uint8)( (1 <<  PORT39_EXTAL) | \
        (1 <<  PORT39_GPIO)  ),

        /* PTB8 */
        (uint8)( (1 <<  PORT40_GPIO) | \
        (1 <<  PORT40_FTU4_CH2) | \
        (1 <<  PORT40_FLEXCAN4_TX) | \
        (1 <<  PORT40_FCUART11_RX) | \
        (1 <<  PORT40_MSC1_SDI0) | \
        (1 <<  PORT40_FCUART1_CTS)  ),

        /* PTB9 */
        (uint8)( (1 <<  PORT41_GPIO) | \
        (1 <<  PORT41_FTU2_CH7) | \
        (1 <<  PORT41_FCUART12_TX) | \
        (1 <<  PORT41_TRGSEL_OUT1)  ),

        /* PTB10 */
        (uint8)( (1 <<  PORT42_GPIO) | \
        (1 <<  PORT42_FTU2_CH5) | \
        (1 <<  PORT42_TRGSEL_OUT2) | \
        (1 <<  PORT42_FLEXCAN7_RX)  ),

        (uint8)0x00,

        /* PTB12 */
        (uint8)( (1 <<  PORT44_ADC2_SE29) | \
        (1 <<  PORT44_GPIO) | \
        (1 <<  PORT44_FTU9_CH3) | \
        (1 <<  PORT44_FLEXCAN2_RX)  ),

        /* PTB13 */
        (uint8)( (1 <<  PORT45_ADC2_SE28) | \
        (1 <<  PORT45_GPIO) | \
        (1 <<  PORT45_FTU3_CH2) | \
        (1 <<  PORT45_MSC1_SDI3) | \
        (1 <<  PORT45_FCUART16_TX)  ),

        /* PTB14 */
        (uint8)( (1 <<  PORT46_ADC2_SE27) | \
        (1 <<  PORT46_GPIO) | \
        (1 <<  PORT46_FTU3_CH1) | \
        (1 <<  PORT46_FCUART4_RX) | \
        (1 <<  PORT46_MSC1_EN3)  ),

        /* PTB15 */
        (uint8)( (1 <<  PORT47_ADC2_SE26) | \
        (1 <<  PORT47_GPIO) | \
        (1 <<  PORT47_FTU3_CH0) | \
        (1 <<  PORT47_FCUART4_TX) | \
        (1 <<  PORT47_MSC1_SDI2)  ),

        /* PTB16 */
        (uint8)( (1 <<  PORT48_ADC2_SE25) | \
        (1 <<  PORT48_GPIO) | \
        (1 <<  PORT48_FTU5_CH7) | \
        (1 <<  PORT48_FCUART5_CTS) | \
        (1 <<  PORT48_MSC1_EN2)  ),

        /* PTB17 */
        (uint8)( (1 <<  PORT49_ADC2_SE20) | \
        (1 <<  PORT49_GPIO) | \
        (1 <<  PORT49_FTU5_CH6) | \
        (1 <<  PORT49_FCSPI1_PCS3) | \
        (1 <<  PORT49_FLEXCAN4_RX) | \
        (1 <<  PORT49_SDDF0_CLK3)  ),

        /* PTB18 */
        (uint8)( (1 <<  PORT50_ADC0_SE30) | \
        (1 <<  PORT50_GPIO) | \
        (1 <<  PORT50_FTU0_CH5) | \
        (1 <<  PORT50_FCUART5_RX) | \
        (1 <<  PORT50_FLEXCAN3_RX)  ),

        /* PTB19 */
        (uint8)( (1 <<  PORT51_ADC0_SE31) | \
        (1 <<  PORT51_GPIO) | \
        (1 <<  PORT51_FTU0_CH4)  ),

        /* PTB20 */
        (uint8)( (1 <<  PORT52_ADC3_SE31_CMP2_IN0) | \
        (1 <<  PORT52_GPIO) | \
        (1 <<  PORT52_FTU1_CH0) | \
        (1 <<  PORT52_FCUART1_TX) | \
        (1 <<  PORT52_ENET_PPS0) | \
        (1 <<  PORT52_SCG_CLKOUT)  ),

        /* PTB21 */
        (uint8)( (1 <<  PORT53_ADC3_SE30_CMP2_IN1) | \
        (1 <<  PORT53_GPIO) | \
        (1 <<  PORT53_FTU1_CH1) | \
        (1 <<  PORT53_FCUART1_RX) | \
        (1 <<  PORT53_ENET_PPS1) | \
        (1 <<  PORT53_RTC_CLKOUT)  ),

        /* PTB22 */
        (uint8)( (1 <<  PORT54_GPIO) | \
        (1 <<  PORT54_FTU8_CH3) | \
        (1 <<  PORT54_FCUART1_TX) | \
        (1 <<  PORT54_TRACE_D5) | \
        (1 <<  PORT54_OSPI_A_IO0) | \
        (1 <<  PORT54_FCSPI3_PCS2)  ),

        /* PTB23 */
        (uint8)( (1 <<  PORT55_GPIO) | \
        (1 <<  PORT55_FTU_FLT9) | \
        (1 <<  PORT55_FCSPI2_PCS0) | \
        (1 <<  PORT55_FTU7_CH3) | \
        (1 <<  PORT55_ENET_RXD3)  ),

        /* PTB24 */
        (uint8)( (1 <<  PORT56_ADC3_SE29_CMP2_IN2) | \
        (1 <<  PORT56_GPIO) | \
        (1 <<  PORT56_FTU1_CH2)  ),

        /* PTB25 */
        (uint8)( (1 <<  PORT57_ADC3_SE19) | \
        (1 <<  PORT57_GPIO) | \
        (1 <<  PORT57_FCSPI2_PCS0) | \
        (1 <<  PORT57_FTU3_CH6)  ),

        /* PTB26 */
        (uint8)( (1 <<  PORT58_GPIO) | \
        (1 <<  PORT58_FTU6_CH0) | \
        (1 <<  PORT58_ENET_COL) | \
        (1 <<  PORT58_FCSPI3_SIN)  ),

        /* PTB27 */
        (uint8)( (1 <<  PORT59_ADC3_SE21) | \
        (1 <<  PORT59_GPIO) | \
        (1 <<  PORT59_FTU7_CH0) | \
        (1 <<  PORT59_FTU1_QD_PHB) | \
        (1 <<  PORT59_FCSPI2_SOUT)  ),

        /* PTB28 */
        (uint8)( (1 <<  PORT60_ADC3_SE22) | \
        (1 <<  PORT60_GPIO) | \
        (1 <<  PORT60_FTU7_CH1) | \
        (1 <<  PORT60_FCSPI2_SIN)  ),

        /* PTB29 */
        (uint8)( (1 <<  PORT61_ADC3_SE0) | \
        (1 <<  PORT61_GPIO) | \
        (1 <<  PORT61_FTU1_CH3) | \
        (1 <<  PORT61_FCUART12_RX) | \
        (1 <<  PORT61_MSC0_FCLP)  ),

        /* PTB30 */
        (uint8)( (1 <<  PORT62_GPIO) | \
        (1 <<  PORT62_FTU6_CH1) | \
        (1 <<  PORT62_FCIIC1_SCL) | \
        (1 <<  PORT62_FCUART12_TX) | \
        (1 <<  PORT62_ENET_CRS) | \
        (1 <<  PORT62_FCSPI3_SOUT)  ),

        /* PTB31 */
        (uint8)( (1 <<  PORT63_GPIO) | \
        (1 <<  PORT63_FTU7_CH1) | \
        (1 <<  PORT63_FCSPI2_SCK) | \
        (1 <<  PORT63_ENET_RXD1)  ),

        /* PTC0 */
        (uint8)( (1 <<  PORT64_GPIO) | \
        (1 <<  PORT64_FTU8_CH6) | \
        (1 <<  PORT64_TRACE_D6) | \
        (1 <<  PORT64_ENET_RXD1) | \
        (1 <<  PORT64_OSPI_A_IO3) | \
        (1 <<  PORT64_FCSPI3_PCS1)  ),

        /* PTC1 */
        (uint8)( (1 <<  PORT65_GPIO) | \
        (1 <<  PORT65_FTU7_CH5) | \
        (1 <<  PORT65_ENET_RXD0) | \
        (1 <<  PORT65_OSPI_A_IO2) | \
        (1 <<  PORT65_FCSPI3_PCS0)  ),

        /* PTC2 */
        (uint8)( (1 <<  PORT66_GPIO) | \
        (1 <<  PORT66_FTU6_CH3) | \
        (1 <<  PORT66_FCUART0_RX) | \
        (1 <<  PORT66_TRACE_CLKOUT) | \
        (1 <<  PORT66_ENET_TXD0)  ),

        /* PTC3 */
        (uint8)( (1 <<  PORT67_GPIO) | \
        (1 <<  PORT67_FTU6_CH2) | \
        (1 <<  PORT67_FCUART0_TX) | \
        (1 <<  PORT67_FCSPI3_PCS0)  ),

        /* PTC4 */
        (uint8)( (1 <<  PORT68_GPIO) | \
        (1 <<  PORT68_FTU3_CH4) | \
        (1 <<  PORT68_FTU1_QD_PHB) | \
        (1 <<  PORT68_JTAG_TCLK_SWD_CLK)  ),

        /* PTC5 */
        (uint8)( (1 <<  PORT69_GPIO) | \
        (1 <<  PORT69_FTU3_CH3) | \
        (1 <<  PORT69_FTU1_QD_PHA) | \
        (1 <<  PORT69_JTAG_TDI)  ),

        /* PTC6 */
        (uint8)( (1 <<  PORT70_GPIO) | \
        (1 <<  PORT70_FCUART1_RX) | \
        (1 <<  PORT70_FTU3_CH2) | \
        (1 <<  PORT70_FTU1_QD_PHB)  ),

        /* PTC7 */
        (uint8)( (1 <<  PORT71_ADC1_SE30) | \
        (1 <<  PORT71_GPIO) | \
        (1 <<  PORT71_FCUART1_TX) | \
        (1 <<  PORT71_FTU3_CH3)  ),

        /* PTC8 */
        (uint8)( (1 <<  PORT72_ADC2_SE9) | \
        (1 <<  PORT72_GPIO) | \
        (1 <<  PORT72_FTU7_CH4) | \
        (1 <<  PORT72_FTU_FLT11) | \
        (1 <<  PORT72_FTU4_QD_PHB) | \
        (1 <<  PORT72_FCSPI4_PCS0) | \
        (1 <<  PORT72_FCUART0_CTS)  ),

        /* PTC9 */
        (uint8)( (1 <<  PORT73_ADC2_SE8) | \
        (1 <<  PORT73_GPIO) | \
        (1 <<  PORT73_FTU7_CH3) | \
        (1 <<  PORT73_FTU_FLT10) | \
        (1 <<  PORT73_FTU4_QD_PHA) | \
        (1 <<  PORT73_FCSPI4_SCK) | \
        (1 <<  PORT73_FCUART0_RTS)  ),

        /* PTC10 */
        (uint8)( (1 <<  PORT74_ADC2_SE3) | \
        (1 <<  PORT74_GPIO) | \
        (1 <<  PORT74_FTU3_CH4) | \
        (1 <<  PORT74_FLEXCAN4_RX) | \
        (1 <<  PORT74_FCUART13_TX) | \
        (1 <<  PORT74_MSC0_EN1)  ),

        /* PTC11 */
        (uint8)( (1 <<  PORT75_ADC2_SE6) | \
        (1 <<  PORT75_GPIO) | \
        (1 <<  PORT75_FTU3_CH3) | \
        (1 <<  PORT75_FLEXCAN4_TX) | \
        (1 <<  PORT75_FCUART13_RX) | \
        (1 <<  PORT75_MSC0_EN0)  ),

        /* PTC12 */
        (uint8)( (1 <<  PORT76_ADC3_SE1) | \
        (1 <<  PORT76_GPIO) | \
        (1 <<  PORT76_FTU1_CH5) | \
        (1 <<  PORT76_TRGSEL_OUT5) | \
        (1 <<  PORT76_FLEXCAN5_RX) | \
        (1 <<  PORT76_MSC0_EN2)  ),

        /* PTC13 */
        (uint8)( (1 <<  PORT77_ADC3_SE4) | \
        (1 <<  PORT77_GPIO) | \
        (1 <<  PORT77_FTU1_CH4) | \
        (1 <<  PORT77_TRGSEL_OUT6) | \
        (1 <<  PORT77_FLEXCAN5_TX) | \
        (1 <<  PORT77_MSC0_SOP)  ),

        /* PTC14 */
        (uint8)( (1 <<  PORT78_GPIO) | \
        (1 <<  PORT78_FTU7_CH4) | \
        (1 <<  PORT78_FCUART1_RX) | \
        (1 <<  PORT78_FCIIC1_SDA) | \
        (1 <<  PORT78_OSPI_A_RWDS)  ),

        /* PTC15 */
        (uint8)( (1 <<  PORT79_GPIO) | \
        (1 <<  PORT79_FTU8_CH4) | \
        (1 <<  PORT79_FCSPI2_PCS3) | \
        (1 <<  PORT79_SCG_CLKOUT) | \
        (1 <<  PORT79_ENET_RXD3) | \
        (1 <<  PORT79_OSPI_A_IO1) | \
        (1 <<  PORT79_FCSPI3_PCS3)  ),

        /* PTC16 */
        (uint8)( (1 <<  PORT80_GPIO) | \
        (1 <<  PORT80_FTU_FLT7) | \
        (1 <<  PORT80_FCSPI2_SOUT) | \
        (1 <<  PORT80_TRGSEL_OUT7) | \
        (1 <<  PORT80_ENET_RXD0) | \
        (1 <<  PORT80_FCUART5_RX)  ),

        /* PTC17 */
        (uint8)( (1 <<  PORT81_GPIO) | \
        (1 <<  PORT81_FTU_FLT6) | \
        (1 <<  PORT81_TRGSEL_OUT6) | \
        (1 <<  PORT81_ENET_RX_ER) | \
        (1 <<  PORT81_FCUART5_TX)  ),

        /* PTC18 */
        (uint8)( (1 <<  PORT82_GPIO) | \
        (1 <<  PORT82_FTU7_CH2) | \
        (1 <<  PORT82_FCSPI2_SIN) | \
        (1 <<  PORT82_ENET_RXD2)  ),

        /* PTC19 */
        (uint8)( (1 <<  PORT83_ADC3_SE5) | \
        (1 <<  PORT83_GPIO) | \
        (1 <<  PORT83_FTU1_CH6) | \
        (1 <<  PORT83_FLEXCAN6_TX) | \
        (1 <<  PORT83_MSC0_EN3)  ),

        /* PTC20 */
        (uint8)( (1 <<  PORT84_ADC3_SE2) | \
        (1 <<  PORT84_GPIO) | \
        (1 <<  PORT84_FTU1_CH7) | \
        (1 <<  PORT84_FLEXCAN9_TX) | \
        (1 <<  PORT84_MSC0_SDI2)  ),

        /* PTC21 */
        (uint8)( (1 <<  PORT85_ADC3_SE6) | \
        (1 <<  PORT85_GPIO) | \
        (1 <<  PORT85_FTU3_CH0) | \
        (1 <<  PORT85_FLEXCAN9_RX) | \
        (1 <<  PORT85_MSC0_SDI3)  ),

        /* PTC22 */
        (uint8)( (1 <<  PORT86_ADC3_SE10) | \
        (1 <<  PORT86_GPIO) | \
        (1 <<  PORT86_FTU3_CH1) | \
        (1 <<  PORT86_FCUART17_RTS) | \
        (1 <<  PORT86_MSC0_SDI1)  ),

        /* PTC23 */
        (uint8)( (1 <<  PORT87_ADC2_SE0) | \
        (1 <<  PORT87_GPIO) | \
        (1 <<  PORT87_FTU6_CH6) | \
        (1 <<  PORT87_FCUART2_RTS) | \
        (1 <<  PORT87_FCUART12_TX) | \
        (1 <<  PORT87_MSC0_SDI0)  ),

        /* PTC24 */
        (uint8)( (1 <<  PORT88_ADC2_SE2) | \
        (1 <<  PORT88_GPIO) | \
        (1 <<  PORT88_FTU3_CH2) | \
        (1 <<  PORT88_FLEXCAN6_RX) | \
        (1 <<  PORT88_FCUART2_CTS)  ),

        /* PTC25 */
        (uint8)( (1 <<  PORT89_GPIO) | \
        (1 <<  PORT89_FTU3_CH3) | \
        (1 <<  PORT89_FCUART5_RTS) | \
        (1 <<  PORT89_FCSPI5_PCS0) | \
        (1 <<  PORT89_FLEXCAN2_TX)  ),

        /* PTC26 */
        (uint8)( (1 <<  PORT90_GPIO) | \
        (1 <<  PORT90_FTU9_CH7) | \
        (1 <<  PORT90_FLEXCAN2_TX)  ),

        /* PTC27 */
        (uint8)( (1 <<  PORT91_ADC2_SE7) | \
        (1 <<  PORT91_GPIO) | \
        (1 <<  PORT91_FTU10_CH5) | \
        (1 <<  PORT91_FCSPI2_PCS1) | \
        (1 <<  PORT91_FCUART5_RX)  ),

        /* PTC28 */
        (uint8)( (1 <<  PORT92_ADC3_SE23) | \
        (1 <<  PORT92_GPIO) | \
        (1 <<  PORT92_FTU7_CH2) | \
        (1 <<  PORT92_FLEXCAN3_TX) | \
        (1 <<  PORT92_SDDF0_CLK0)  ),

        /* PTC29 */
        (uint8)( (1 <<  PORT93_ADC2_SE10) | \
        (1 <<  PORT93_GPIO) | \
        (1 <<  PORT93_FTU7_CH5) | \
        (1 <<  PORT93_FLEXCAN3_RX) | \
        (1 <<  PORT93_SDDF0_CLK1)  ),

        /* PTC30 */
        (uint8)( (1 <<  PORT94_ADC2_SE12) | \
        (1 <<  PORT94_GPIO) | \
        (1 <<  PORT94_FTU7_CH7) | \
        (1 <<  PORT94_FTU5_QD_PHA) | \
        (1 <<  PORT94_FCSPI4_SOUT)  ),

        /* PTC31 */
        (uint8)( (1 <<  PORT95_ADC2_SE14) | \
        (1 <<  PORT95_GPIO) | \
        (1 <<  PORT95_FTU5_CH1) | \
        (1 <<  PORT95_FTU5_QD_PHB) | \
        (1 <<  PORT95_TRGSEL_OUT3) | \
        (1 <<  PORT95_SDDF0_CH1) | \
        (1 <<  PORT95_FCSPI7_SCK)  ),

        /* PTD0 */
        (uint8)( (1 <<  PORT96_ADC0_SE13) | \
        (1 <<  PORT96_GPIO) | \
        (1 <<  PORT96_FTU4_CH2) | \
        (1 <<  PORT96_FCUART17_TX) | \
        (1 <<  PORT96_TRGSEL_OUT1)  ),

        /* PTD1 */
        (uint8)( (1 <<  PORT97_ADC0_SE6) | \
        (1 <<  PORT97_GPIO) | \
        (1 <<  PORT97_FCUART6_TX) | \
        (1 <<  PORT97_FTU2_CH4) | \
        (1 <<  PORT97_TRGSEL_OUT2)  ),

        /* PTD2 */
        (uint8)( (1 <<  PORT98_GPIO) | \
        (1 <<  PORT98_FTU2_CH0) | \
        (1 <<  PORT98_FCSPI1_SCK)  ),

        /* PTD3 */
        (uint8)( (1 <<  PORT99_GPIO) | \
        (1 <<  PORT99_FTU3_CH7) | \
        (1 <<  PORT99_FCSPI1_SIN)  ),

        /* PTD4 */
        (uint8)( (1 <<  PORT100_GPIO) | \
        (1 <<  PORT100_FTU3_CH6) | \
        (1 <<  PORT100_FCSPI1_SOUT) | \
        (1 <<  PORT100_FTU_FLT16)  ),

        /* PTD5 */
        (uint8)( (1 <<  PORT101_GPIO) | \
        (1 <<  PORT101_FTU6_CH4) | \
        (1 <<  PORT101_FCUART2_CTS) | \
        (1 <<  PORT101_TRACE_D2) | \
        (1 <<  PORT101_ENET_TXD3) | \
        (1 <<  PORT101_OSPI_A_IO5) | \
        (1 <<  PORT101_FCSPI3_SIN)  ),

        /* PTD6 */
        (uint8)( (1 <<  PORT102_GPIO) | \
        (1 <<  PORT102_FCUART2_RX) | \
        (1 <<  PORT102_FLEXCAN3_RX) | \
        (1 <<  PORT102_TRACE_D1) | \
        (1 <<  PORT102_ENET_TXD2) | \
        (1 <<  PORT102_OSPI_A_IO4) | \
        (1 <<  PORT102_FCSPI3_SCK)  ),

        /* PTD7 */
        (uint8)( (1 <<  PORT103_GPIO) | \
        (1 <<  PORT103_FCUART2_TX) | \
        (1 <<  PORT103_FLEXCAN3_TX) | \
        (1 <<  PORT103_TRACE_D0) | \
        (1 <<  PORT103_ENET_TXD1)  ),

        /* PTD8 */
        (uint8)( (1 <<  PORT104_GPIO) | \
        (1 <<  PORT104_FTU7_CH0) | \
        (1 <<  PORT104_FCSPI2_PCS2) | \
        (1 <<  PORT104_FTU1_CH6) | \
        (1 <<  PORT104_ENET_RX_DV_CTL) | \
        (1 <<  PORT104_FCUART4_RX)  ),

        /* PTD9 */
        (uint8)( (1 <<  PORT105_GPIO) | \
        (1 <<  PORT105_FTU8_CH7) | \
        (1 <<  PORT105_FCSPI2_PCS1) | \
        (1 <<  PORT105_TRACE_D7) | \
        (1 <<  PORT105_ENET_RXD2) | \
        (1 <<  PORT105_OSPI_A_SCK) | \
        (1 <<  PORT105_FCUART4_TX)  ),

        /* PTD10 */
        (uint8)( (1 <<  PORT106_GPIO) | \
        (1 <<  PORT106_FTU6_CH7) | \
        (1 <<  PORT106_FTU2_QD_PHB) | \
        (1 <<  PORT106_ENET_RX_CLK)  ),

        /* PTD11 */
        (uint8)( (1 <<  PORT107_GPIO) | \
        (1 <<  PORT107_FTU6_CH6) | \
        (1 <<  PORT107_FTU2_QD_PHA) | \
        (1 <<  PORT107_TRACE_D4) | \
        (1 <<  PORT107_ENET_TX_CLK) | \
        (1 <<  PORT107_OSPI_A_IO7)  ),

        /* PTD12 */
        (uint8)( (1 <<  PORT108_GPIO) | \
        (1 <<  PORT108_FTU6_CH5) | \
        (1 <<  PORT108_FCUART2_RTS) | \
        (1 <<  PORT108_TRACE_D3) | \
        (1 <<  PORT108_ENET_TX_EN_CTL) | \
        (1 <<  PORT108_OSPI_A_IO6) | \
        (1 <<  PORT108_FCSPI3_SOUT)  ),

        (uint8)0x00,

        (uint8)0x00,

        /* PTD15 */
        (uint8)( (1 <<  PORT111_ADC0_SE27) | \
        (1 <<  PORT111_GPIO) | \
        (1 <<  PORT111_FTU5_CH0) | \
        (1 <<  PORT111_FLEXCAN2_RX) | \
        (1 <<  PORT111_TRACE_D7) | \
        (1 <<  PORT111_ENET_PPS2) | \
        (1 <<  PORT111_FCUART2_RTS)  ),

        /* PTD16 */
        (uint8)( (1 <<  PORT112_ADC0_SE26) | \
        (1 <<  PORT112_GPIO) | \
        (1 <<  PORT112_FTU5_CH1) | \
        (1 <<  PORT112_FLEXCAN2_TX) | \
        (1 <<  PORT112_TRACE_D6) | \
        (1 <<  PORT112_FCSPI1_PCS3)  ),

        /* PTD17 */
        (uint8)( (1 <<  PORT113_ADC0_SE24) | \
        (1 <<  PORT113_GPIO) | \
        (1 <<  PORT113_FTU5_CH3) | \
        (1 <<  PORT113_FCUART2_TX) | \
        (1 <<  PORT113_TRACE_D4) | \
        (1 <<  PORT113_FCSPI1_PCS1) | \
        (1 <<  PORT113_FTU5_QD_PHA)  ),

        /* PTD18 */
        (uint8)( (1 <<  PORT114_ADC2_SE16) | \
        (1 <<  PORT114_GPIO) | \
        (1 <<  PORT114_FTU5_CH3) | \
        (1 <<  PORT114_FCIIC1_SDA) | \
        (1 <<  PORT114_SDDF0_CH3) | \
        (1 <<  PORT114_FCSPI7_PCS0)  ),

        /* PTD19 */
        (uint8)( (1 <<  PORT115_ADC2_SE17) | \
        (1 <<  PORT115_GPIO) | \
        (1 <<  PORT115_FTU5_CH4) | \
        (1 <<  PORT115_FCIIC1_SCL) | \
        (1 <<  PORT115_SDDF0_CLK2)  ),

        /* PTD20 */
        (uint8)( (1 <<  PORT116_ADC2_SE30) | \
        (1 <<  PORT116_GPIO) | \
        (1 <<  PORT116_FTU3_CH4) | \
        (1 <<  PORT116_FCUART5_RX) | \
        (1 <<  PORT116_FCSPI1_PCS1)  ),

        /* PTD21 */
        (uint8)( (1 <<  PORT117_GPIO) | \
        (1 <<  PORT117_FTU3_CH5) | \
        (1 <<  PORT117_FCUART5_TX) | \
        (1 <<  PORT117_FTU9_CH7)  ),

        /* PTD22 */
        (uint8)( (1 <<  PORT118_GPIO) | \
        (1 <<  PORT118_FTU9_CH4) | \
        (1 <<  PORT118_FCSPI5_SCK)  ),

        /* PTD23 */
        (uint8)( (1 <<  PORT119_ADC2_SE31) | \
        (1 <<  PORT119_GPIO) | \
        (1 <<  PORT119_FTU2_CH1) | \
        (1 <<  PORT119_FCSPI1_PCS0)  ),

        /* PTD24 */
        (uint8)( (1 <<  PORT120_GPIO) | \
        (1 <<  PORT120_FTU2_CH4) | \
        (1 <<  PORT120_MSC1_SOP) | \
        (1 <<  PORT120_FCUART16_RX)  ),

        /* PTD25 */
        (uint8)( (1 <<  PORT121_GPIO) | \
        (1 <<  PORT121_FTU2_CH6) | \
        (1 <<  PORT121_FCUART12_TX) | \
        (1 <<  PORT121_FCUART4_RTS) | \
        (1 <<  PORT121_FLEXCAN7_TX)  ),

        /* PTD26 */
        (uint8)( (1 <<  PORT122_GPIO) | \
        (1 <<  PORT122_FTU4_CH0) | \
        (1 <<  PORT122_FLEXCAN0_TX) | \
        (1 <<  PORT122_FCUART4_CTS)  ),

        /* PTD27 */
        (uint8)( (1 <<  PORT123_GPIO) | \
        (1 <<  PORT123_FTU4_CH1) | \
        (1 <<  PORT123_FLEXCAN0_RX) | \
        (1 <<  PORT123_MSC1_EN0)  ),

        /* PTD28 */
        (uint8)( (1 <<  PORT124_GPIO) | \
        (1 <<  PORT124_FTU4_CH3) | \
        (1 <<  PORT124_FLEXCAN4_RX) | \
        (1 <<  PORT124_FCUART11_TX)  ),

        /* PTD29 */
        (uint8)( (1 <<  PORT125_GPIO) | \
        (1 <<  PORT125_FTU4_CH5) | \
        (1 <<  PORT125_FCUART15_TX) | \
        (1 <<  PORT125_SENT1_RXD1) | \
        (1 <<  PORT125_FTU1_QD_PHB) | \
        (1 <<  PORT125_MSC1_EN1)  ),

        /* PTD30 */
        (uint8)( (1 <<  PORT126_GPIO) | \
        (1 <<  PORT126_FTU4_CH7) | \
        (1 <<  PORT126_FLEXCAN5_TX) | \
        (1 <<  PORT126_SENT1_RXD3) | \
        (1 <<  PORT126_FTU2_QD_PHB) | \
        (1 <<  PORT126_MSC1_SDI1)  ),

        /* PTD31 */
        (uint8)( (1 <<  PORT127_ADC1_SE31) | \
        (1 <<  PORT127_GPIO) | \
        (1 <<  PORT127_FTU6_CH0) | \
        (1 <<  PORT127_MSC1_SDI3) | \
        (1 <<  PORT127_FTU1_QD_PHA)  ),

        /* PTE0 */
        (uint8)( (1 <<  PORT128_CMP1_IN4) | \
        (1 <<  PORT128_GPIO) | \
        (1 <<  PORT128_FCUART0_CTS) | \
        (1 <<  PORT128_FTU_TCK1) | \
        (1 <<  PORT128_FCIIC1_SDA) | \
        (1 <<  PORT128_FCSPI0_SCK) | \
        (1 <<  PORT128_FTU_FLT19)  ),

        /* PTE1 */
        (uint8)( (1 <<  PORT129_CMP1_IN5) | \
        (1 <<  PORT129_GPIO) | \
        (1 <<  PORT129_FCUART0_RTS) | \
        (1 <<  PORT129_FCIIC1_SCL) | \
        (1 <<  PORT129_FCSPI0_SIN) | \
        (1 <<  PORT129_FTU_FLT18)  ),

        /* PTE2 */
        (uint8)( (1 <<  PORT130_ADC1_SE24) | \
        (1 <<  PORT130_GPIO) | \
        (1 <<  PORT130_FTU6_CH6) | \
        (1 <<  PORT130_FLEXCAN1_RX) | \
        (1 <<  PORT130_FCUART1_CTS)  ),

        /* PTE3 */
        (uint8)( (1 <<  PORT131_OSC32K_EXTAL) | \
        (1 <<  PORT131_GPIO) | \
        (1 <<  PORT131_FTU0_CH2) | \
        (1 <<  PORT131_FTU_FLT1) | \
        (1 <<  PORT131_FTU_TCK0)  ),

        /* PTE4 */
        (uint8)( (1 <<  PORT132_CMP0_IN0) | \
        (1 <<  PORT132_GPIO) | \
        (1 <<  PORT132_FTU2_QD_PHB) | \
        (1 <<  PORT132_FTU10_CH7) | \
        (1 <<  PORT132_FCUART7_TX)  ),

        /* PTE5 */
        (uint8)( (1 <<  PORT133_ADC0_SE12) | \
        (1 <<  PORT133_GPIO) | \
        (1 <<  PORT133_FTU_TCK2) | \
        (1 <<  PORT133_FTU4_CH3) | \
        (1 <<  PORT133_FCSPI2_PCS1) | \
        (1 <<  PORT133_FCUART17_RX)  ),

        /* PTE6 */
        (uint8)( (1 <<  PORT134_ADC1_SE25) | \
        (1 <<  PORT134_GPIO) | \
        (1 <<  PORT134_FTU6_CH5) | \
        (1 <<  PORT134_FLEXCAN1_TX) | \
        (1 <<  PORT134_FCUART1_RTS)  ),

        /* PTE7 */
        (uint8)( (1 <<  PORT135_ADC2_SE15) | \
        (1 <<  PORT135_GPIO) | \
        (1 <<  PORT135_FTU5_CH2) | \
        (1 <<  PORT135_FTU_FLT14) | \
        (1 <<  PORT135_SDDF0_CH2) | \
        (1 <<  PORT135_FCSPI7_SOUT)  ),

        /* PTE8 */
        (uint8)( (1 <<  PORT136_GPIO) | \
        (1 <<  PORT136_FTU6_CH1) | \
        (1 <<  PORT136_FCUART9_RX) | \
        (1 <<  PORT136_ENET_MDC) | \
        (1 <<  PORT136_FCSPI3_SCK)  ),

        /* PTE9 */
        (uint8)( (1 <<  PORT137_ADC0_SE28) | \
        (1 <<  PORT137_GPIO) | \
        (1 <<  PORT137_FTU0_CH7) | \
        (1 <<  PORT137_TRACE_CLKOUT) | \
        (1 <<  PORT137_ENET_PPS3) | \
        (1 <<  PORT137_FCUART2_CTS)  ),

        /* PTE10 */
        (uint8)( (1 <<  PORT138_ADC0_SE9) | \
        (1 <<  PORT138_GPIO) | \
        (1 <<  PORT138_SCG_CLKOUT) | \
        (1 <<  PORT138_FTU6_CH0) | \
        (1 <<  PORT138_FCSPI2_SIN) | \
        (1 <<  PORT138_TRGSEL_OUT4)  ),

        /* PTE11 */
        (uint8)( (1 <<  PORT139_ADC0_SE8) | \
        (1 <<  PORT139_GPIO) | \
        (1 <<  PORT139_FTU2_CH1) | \
        (1 <<  PORT139_FCSPI2_PCS0) | \
        (1 <<  PORT139_TRGSEL_OUT5)  ),

        /* PTE12 */
        (uint8)( (1 <<  PORT140_ADC0_SE17) | \
        (1 <<  PORT140_GPIO) | \
        (1 <<  PORT140_FTU5_CH6) | \
        (1 <<  PORT140_FTU_FLT2) | \
        (1 <<  PORT140_TRACE_D3) | \
        (1 <<  PORT140_FCSPI1_SOUT)  ),

        /* PTE13 */
        (uint8)( (1 <<  PORT141_ADC0_SE10) | \
        (1 <<  PORT141_GPIO) | \
        (1 <<  PORT141_FTU2_CH0) | \
        (1 <<  PORT141_FCSPI2_SCK)  ),

        /* PTE14 */
        (uint8)( (1 <<  PORT142_OSC32K_XTAL) | \
        (1 <<  PORT142_GPIO) | \
        (1 <<  PORT142_FTU0_CH3) | \
        (1 <<  PORT142_FTU_FLT0)  ),

        /* PTE15 */
        (uint8)( (1 <<  PORT143_ADC0_SE5) | \
        (1 <<  PORT143_GPIO) | \
        (1 <<  PORT143_FCUART1_CTS) | \
        (1 <<  PORT143_FLEXCAN5_RX) | \
        (1 <<  PORT143_FTU2_CH6) | \
        (1 <<  PORT143_TRGSEL_OUT6)  ),

        /* PTE16 */
        (uint8)( (1 <<  PORT144_ADC1_SE2) | \
        (1 <<  PORT144_GPIO) | \
        (1 <<  PORT144_FCUART1_RTS) | \
        (1 <<  PORT144_FLEXCAN5_TX) | \
        (1 <<  PORT144_FTU2_CH7) | \
        (1 <<  PORT144_TRGSEL_OUT7)  ),

        /* PTE17 */
        (uint8)( (1 <<  PORT145_GPIO) | \
        (1 <<  PORT145_FTU6_CH1) | \
        (1 <<  PORT145_FCSMU_PIN1)  ),

        /* PTE18 */
        (uint8)( (1 <<  PORT146_ADC1_SE29) | \
        (1 <<  PORT146_GPIO) | \
        (1 <<  PORT146_FTU6_CH3) | \
        (1 <<  PORT146_FTU5_QD_PHA) | \
        (1 <<  PORT146_FCUART10_RX) | \
        (1 <<  PORT146_FLEXCAN3_TX)  ),

        /* PTE19 */
        (uint8)( (1 <<  PORT147_ADC1_SE23) | \
        (1 <<  PORT147_GPIO) | \
        (1 <<  PORT147_SCG_CLKOUT) | \
        (1 <<  PORT147_FCIIC0_SCL) | \
        (1 <<  PORT147_SENT0_RXD2) | \
        (1 <<  PORT147_CMP0_OUT)  ),

        /* PTE20 */
        (uint8)( (1 <<  PORT148_ADC1_SE22) | \
        (1 <<  PORT148_GPIO) | \
        (1 <<  PORT148_FTU0_CH0) | \
        (1 <<  PORT148_FCIIC0_SDA) | \
        (1 <<  PORT148_SENT0_RXD3)  ),

        /* PTE21 */
        (uint8)( (1 <<  PORT149_ADC1_SE21) | \
        (1 <<  PORT149_GPIO) | \
        (1 <<  PORT149_FTU0_CH1) | \
        (1 <<  PORT149_FLEXCAN0_TX) | \
        (1 <<  PORT149_FCUART0_RTS)  ),

        /* PTE22 */
        (uint8)( (1 <<  PORT150_ADC1_SE20) | \
        (1 <<  PORT150_GPIO) | \
        (1 <<  PORT150_FTU0_CH2) | \
        (1 <<  PORT150_FLEXCAN0_RX) | \
        (1 <<  PORT150_FCUART0_CTS)  ),

        /* PTE23 */
        (uint8)( (1 <<  PORT151_CMP1_IN6) | \
        (1 <<  PORT151_GPIO) | \
        (1 <<  PORT151_FTU0_CH4) | \
        (1 <<  PORT151_FLEXCAN1_RX) | \
        (1 <<  PORT151_CMP2_OUT) | \
        (1 <<  PORT151_FCSPI0_PCS2)  ),

        /* PTE24 */
        (uint8)( (1 <<  PORT152_CMP1_IN7) | \
        (1 <<  PORT152_GPIO) | \
        (1 <<  PORT152_FTU0_CH5) | \
        (1 <<  PORT152_FLEXCAN1_TX) | \
        (1 <<  PORT152_FCSPI0_PCS1)  ),

        /* PTE25 */
        (uint8)( (1 <<  PORT153_ADC1_SE19) | \
        (1 <<  PORT153_GPIO) | \
        (1 <<  PORT153_FTU0_CH6) | \
        (1 <<  PORT153_AONTIMER0_CLK0) | \
        (1 <<  PORT153_FCSPI0_PCS0) | \
        (1 <<  PORT153_TRGSEL_OUT7)  ),

        /* PTE26 */
        (uint8)( (1 <<  PORT154_ADC1_SE17) | \
        (1 <<  PORT154_GPIO) | \
        (1 <<  PORT154_FTU3_CH2) | \
        (1 <<  PORT154_AONTIMER0_CLK2) | \
        (1 <<  PORT154_SENT0_RXD0)  ),

        /* PTE27 */
        (uint8)( (1 <<  PORT155_ADC1_SE16) | \
        (1 <<  PORT155_GPIO) | \
        (1 <<  PORT155_FTU3_CH5) | \
        (1 <<  PORT155_SENT0_RXD1)  ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTF0 */
        (uint8)( (1 <<  PORT160_ADC1_SE13) | \
        (1 <<  PORT160_GPIO) | \
        (1 <<  PORT160_FCUART6_RX) | \
        (1 <<  PORT160_FTU2_QD_PHA)  ),

        /* PTF1 */
        (uint8)( (1 <<  PORT161_ADC1_SE12) | \
        (1 <<  PORT161_GPIO) | \
        (1 <<  PORT161_FCUART6_TX) | \
        (1 <<  PORT161_FTU2_QD_PHB)  ),

        /* PTF2 */
        (uint8)( (1 <<  PORT162_GPIO) | \
        (1 <<  PORT162_FCUART6_RTS) | \
        (1 <<  PORT162_FTU8_CH0) | \
        (1 <<  PORT162_FCUART8_RX)  ),

        /* PTF3 */
        (uint8)( (1 <<  PORT163_ADC0_SE7) | \
        (1 <<  PORT163_GPIO) | \
        (1 <<  PORT163_FCUART8_RTS) | \
        (1 <<  PORT163_FTU10_CH4) | \
        (1 <<  PORT163_FCSPI6_SIN)  ),

        /* PTF4 */
        (uint8)( (1 <<  PORT164_GPIO) | \
        (1 <<  PORT164_FCUART8_CTS) | \
        (1 <<  PORT164_FTU10_CH5) | \
        (1 <<  PORT164_FCSPI6_SCK)  ),

        /* PTF5 */
        (uint8)( (1 <<  PORT165_GPIO) | \
        (1 <<  PORT165_FTU10_CH6) | \
        (1 <<  PORT165_FCSPI6_SOUT)  ),

        /* PTF6 */
        (uint8)( (1 <<  PORT166_GPIO) | \
        (1 <<  PORT166_FCUART11_TX) | \
        (1 <<  PORT166_FTU6_CH4)  ),

        /* PTF7 */
        (uint8)( (1 <<  PORT167_ADC2_SE4) | \
        (1 <<  PORT167_GPIO) | \
        (1 <<  PORT167_FTU6_CH5) | \
        (1 <<  PORT167_FTU1_QD_PHA)  ),

        /* PTF8 */
        (uint8)( (1 <<  PORT168_GPIO) | \
        (1 <<  PORT168_FTU11_CH5) | \
        (1 <<  PORT168_FCSPI3_SIN) | \
        (1 <<  PORT168_FTU_FLT5) | \
        (1 <<  PORT168_TRGSEL_OUT4)  ),

        /* PTF9 */
        (uint8)( (1 <<  PORT169_ADC3_SE25) | \
        (1 <<  PORT169_GPIO) | \
        (1 <<  PORT169_FCUART13_RTS) | \
        (1 <<  PORT169_FTU0_CH3) | \
        (1 <<  PORT169_MSC0_SDI0)  ),

        /* PTF10 */
        (uint8)( (1 <<  PORT170_ADC3_SE24) | \
        (1 <<  PORT170_GPIO) | \
        (1 <<  PORT170_FTU0_CH4) | \
        (1 <<  PORT170_MSC0_SDI1)  ),

        /* PTF11 */
        (uint8)( (1 <<  PORT171_ADC3_SE3) | \
        (1 <<  PORT171_GPIO) | \
        (1 <<  PORT171_FLEXCAN6_TX) | \
        (1 <<  PORT171_FTU0_CH5) | \
        (1 <<  PORT171_MSC0_SDI2)  ),

        /* PTF12 */
        (uint8)( (1 <<  PORT172_ADC3_SE14_CMP2_IN5) | \
        (1 <<  PORT172_GPIO) | \
        (1 <<  PORT172_SDDF0_CLK0) | \
        (1 <<  PORT172_FTU10_CH7) | \
        (1 <<  PORT172_FCUART17_TX)  ),

        /* PTF13 */
        (uint8)( (1 <<  PORT173_ADC3_SE13_CMP2_IN4) | \
        (1 <<  PORT173_GPIO) | \
        (1 <<  PORT173_FTU10_CH6) | \
        (1 <<  PORT173_FCSPI2_PCS2) | \
        (1 <<  PORT173_FCUART17_RX)  ),

        /* PTF14 */
        (uint8)( (1 <<  PORT174_ADC3_SE15_CMP2_IN6) | \
        (1 <<  PORT174_GPIO) | \
        (1 <<  PORT174_SDDF0_BREAK0) | \
        (1 <<  PORT174_FLEXCAN9_TX) | \
        (1 <<  PORT174_FCSPI2_PCS3) | \
        (1 <<  PORT174_FCUART5_TX)  ),

        /* PTF15 */
        (uint8)( (1 <<  PORT175_ADC2_SE18) | \
        (1 <<  PORT175_GPIO) | \
        (1 <<  PORT175_SDDF0_CLK3) | \
        (1 <<  PORT175_FTU11_CH6)  ),

        /* PTF16 */
        (uint8)( (1 <<  PORT176_GPIO) | \
        (1 <<  PORT176_FTU9_CH5) | \
        (1 <<  PORT176_FCSPI5_SIN)  ),

        /* PTF17 */
        (uint8)( (1 <<  PORT177_GPIO) | \
        (1 <<  PORT177_FTU_FLT21) | \
        (1 <<  PORT177_FTU9_CH6) | \
        (1 <<  PORT177_FCSPI5_SOUT)  ),

        /* PTF18 */
        (uint8)( (1 <<  PORT178_GPIO) | \
        (1 <<  PORT178_FCSPI4_PCS3) | \
        (1 <<  PORT178_FTU8_CH7) | \
        (1 <<  PORT178_FCUART1_TX) | \
        (1 <<  PORT178_MSC1_EN2)  ),

        /* PTF19 */
        (uint8)( (1 <<  PORT179_GPIO) | \
        (1 <<  PORT179_FCSPI4_PCS2) | \
        (1 <<  PORT179_FTU6_CH1) | \
        (1 <<  PORT179_FCUART1_RX) | \
        (1 <<  PORT179_MSC1_SDI2)  ),

        /* PTF20 */
        (uint8)( (1 <<  PORT180_GPIO) | \
        (1 <<  PORT180_FCSPI4_PCS1) | \
        (1 <<  PORT180_FTU6_CH2) | \
        (1 <<  PORT180_FLEXCAN2_RX) | \
        (1 <<  PORT180_MSC1_EN3)  ),

        /* PTF21 */
        (uint8)( (1 <<  PORT181_GPIO) | \
        (1 <<  PORT181_FTU3_CH6) | \
        (1 <<  PORT181_FCIIC1_SCL) | \
        (1 <<  PORT181_CMP0_OUT) | \
        (1 <<  PORT181_RTC_CLKOUT)  ),

        /* PTF22 */
        (uint8)( (1 <<  PORT182_GPIO) | \
        (1 <<  PORT182_FTU3_CH7) | \
        (1 <<  PORT182_FCIIC1_SDA) | \
        (1 <<  PORT182_CMP1_OUT)  ),

        /* PTF23 */
        (uint8)( (1 <<  PORT183_ADC1_SE11_CMP1_IN3) | \
        (1 <<  PORT183_GPIO) | \
        (1 <<  PORT183_SENT0_RXD0) | \
        (1 <<  PORT183_FCUART0_TX) | \
        (1 <<  PORT183_FCSPI0_SOUT) | \
        (1 <<  PORT183_CMP2_OUT)  ),

        /* PTF24 */
        (uint8)( (1 <<  PORT184_CMP0_IN3) | \
        (1 <<  PORT184_GPIO) | \
        (1 <<  PORT184_FTU4_CH6) | \
        (1 <<  PORT184_FCSPI2_PCS3) | \
        (1 <<  PORT184_FCUART16_RTS)  ),

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
        (1 <<  PORT192_FTU8_CH1) | \
        (1 <<  PORT192_FCUART8_TX)  ),

        /* PTG1 */
        (uint8)( (1 <<  PORT193_ADC0_SE0) | \
        (1 <<  PORT193_GPIO) | \
        (1 <<  PORT193_FTU10_CH0) | \
        (1 <<  PORT193_FLEXCAN5_TX)  ),

        /* PTG2 */
        (uint8)( (1 <<  PORT194_ADC0_SE4) | \
        (1 <<  PORT194_GPIO) | \
        (1 <<  PORT194_FTU10_CH1) | \
        (1 <<  PORT194_FLEXCAN5_RX)  ),

        /* PTG3 */
        (uint8)( (1 <<  PORT195_ADC0_SE20) | \
        (1 <<  PORT195_GPIO) | \
        (1 <<  PORT195_FCUART9_RX) | \
        (1 <<  PORT195_FTU9_CH3) | \
        (1 <<  PORT195_TRACE_D8)  ),

        /* PTG4 */
        (uint8)( (1 <<  PORT196_ADC0_SE21) | \
        (1 <<  PORT196_GPIO) | \
        (1 <<  PORT196_FCUART9_TX) | \
        (1 <<  PORT196_FTU9_CH2) | \
        (1 <<  PORT196_TRACE_D9)  ),

        /* PTG5 */
        (uint8)( (1 <<  PORT197_ADC0_SE22) | \
        (1 <<  PORT197_GPIO) | \
        (1 <<  PORT197_FCUART9_RTS) | \
        (1 <<  PORT197_FTU9_CH1) | \
        (1 <<  PORT197_TRACE_D10)  ),

        /* PTG6 */
        (uint8)( (1 <<  PORT198_GPIO) | \
        (1 <<  PORT198_FTU11_CH6) | \
        (1 <<  PORT198_FCSPI3_SOUT) | \
        (1 <<  PORT198_TRGSEL_OUT3)  ),

        /* PTG7 */
        (uint8)( (1 <<  PORT199_GPIO) | \
        (1 <<  PORT199_FTU11_CH7) | \
        (1 <<  PORT199_FCSPI3_PCS0) | \
        (1 <<  PORT199_TRGSEL_OUT2)  ),

        /* PTG8 */
        (uint8)( (1 <<  PORT200_GPIO) | \
        (1 <<  PORT200_FCUART12_CTS) | \
        (1 <<  PORT200_FTU8_CH0) | \
        (1 <<  PORT200_FCUART3_TX) | \
        (1 <<  PORT200_ENET_REF_CLK)  ),

        /* PTG9 */
        (uint8)( (1 <<  PORT201_ADC3_SE7) | \
        (1 <<  PORT201_GPIO) | \
        (1 <<  PORT201_FLEXCAN6_RX) | \
        (1 <<  PORT201_FTU0_CH6) | \
        (1 <<  PORT201_MSC0_SDI3)  ),

        /* PTG10 */
        (uint8)( (1 <<  PORT202_ADC3_SE8) | \
        (1 <<  PORT202_GPIO) | \
        (1 <<  PORT202_FTU0_CH7) | \
        (1 <<  PORT202_FTU2_QD_PHA)  ),

        /* PTG11 */
        (uint8)( (1 <<  PORT203_ADC3_SE9) | \
        (1 <<  PORT203_GPIO) | \
        (1 <<  PORT203_FTU10_CH0) | \
        (1 <<  PORT203_FTU2_QD_PHB)  ),

        /* PTG12 */
        (uint8)( (1 <<  PORT204_ADC3_SE16_CMP2_IN7) | \
        (1 <<  PORT204_GPIO) | \
        (1 <<  PORT204_SDDF0_BREAK1) | \
        (1 <<  PORT204_FLEXCAN9_RX) | \
        (1 <<  PORT204_FTU6_CH7)  ),

        /* PTG13 */
        (uint8)( (1 <<  PORT205_GPIO) | \
        (1 <<  PORT205_SDDF0_CH0) | \
        (1 <<  PORT205_FTU11_CH4) | \
        (1 <<  PORT205_FLEXCAN4_TX)  ),

        /* PTG14 */
        (uint8)( (1 <<  PORT206_GPIO) | \
        (1 <<  PORT206_SDDF0_CH1) | \
        (1 <<  PORT206_FTU11_CH5) | \
        (1 <<  PORT206_FLEXCAN4_RX)  ),

        /* PTG15 */
        (uint8)( (1 <<  PORT207_GPIO) | \
        (1 <<  PORT207_FCUART15_RX) | \
        (1 <<  PORT207_FCIIC0_SCL) | \
        (1 <<  PORT207_MSC1_EN0) | \
        (1 <<  PORT207_TRGSEL_OUT2)  ),

        /* PTG16 */
        (uint8)( (1 <<  PORT208_GPIO) | \
        (1 <<  PORT208_FCUART15_TX) | \
        (1 <<  PORT208_FCIIC0_SDA) | \
        (1 <<  PORT208_MSC1_SDI0) | \
        (1 <<  PORT208_TRGSEL_OUT3)  ),

        /* PTG17 */
        (uint8)( (1 <<  PORT209_GPIO) | \
        (1 <<  PORT209_FCUART15_CTS) | \
        (1 <<  PORT209_FLEXCAN7_TX) | \
        (1 <<  PORT209_MSC1_EN1) | \
        (1 <<  PORT209_FTU5_QD_PHA)  ),

        /* PTG18 */
        (uint8)( (1 <<  PORT210_GPIO) | \
        (1 <<  PORT210_FCSPI4_PCS0) | \
        (1 <<  PORT210_FTU1_CH0) | \
        (1 <<  PORT210_FCUART10_RX)  ),

        /* PTG19 */
        (uint8)( (1 <<  PORT211_GPIO) | \
        (1 <<  PORT211_FCSPI4_SCK) | \
        (1 <<  PORT211_FTU1_CH1) | \
        (1 <<  PORT211_FCUART10_TX)  ),

        /* PTG20 */
        (uint8)( (1 <<  PORT212_GPIO) | \
        (1 <<  PORT212_FCSPI4_SIN) | \
        (1 <<  PORT212_FTU1_CH2) | \
        (1 <<  PORT212_FCUART10_CTS) | \
        (1 <<  PORT212_FLEXCAN3_TX)  ),

        /* PTG21 */
        (uint8)( (1 <<  PORT213_ADC1_SE10_CMP1_IN2) | \
        (1 <<  PORT213_GPIO) | \
        (1 <<  PORT213_SENT0_RXD1) | \
        (1 <<  PORT213_FCUART0_RX) | \
        (1 <<  PORT213_FCSPI0_PCS0)  ),

        /* PTG22 */
        (uint8)( (1 <<  PORT214_ADC1_SE9_CMP1_IN1) | \
        (1 <<  PORT214_GPIO) | \
        (1 <<  PORT214_SENT0_RXD2) | \
        (1 <<  PORT214_FTU1_QD_PHA) | \
        (1 <<  PORT214_FCSPI0_SIN)  ),

        /* PTG23 */
        (uint8)( (1 <<  PORT215_ADC1_SE8_CMP1_IN0) | \
        (1 <<  PORT215_GPIO) | \
        (1 <<  PORT215_SENT0_RXD3) | \
        (1 <<  PORT215_FTU1_QD_PHB) | \
        (1 <<  PORT215_FCSPI0_SCK)  ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTH0 */
        (uint8)( (1 <<  PORT224_ADC1_SE5) | \
        (1 <<  PORT224_GPIO) | \
        (1 <<  PORT224_FCUART7_RTS) | \
        (1 <<  PORT224_FTU9_CH7)  ),

        /* PTH1 */
        (uint8)( (1 <<  PORT225_ADC1_SE1) | \
        (1 <<  PORT225_GPIO) | \
        (1 <<  PORT225_FCUART7_CTS) | \
        (1 <<  PORT225_FTU9_CH6)  ),

        /* PTH2 */
        (uint8)( (1 <<  PORT226_ADC1_SE4) | \
        (1 <<  PORT226_GPIO) | \
        (1 <<  PORT226_FCUART7_RX) | \
        (1 <<  PORT226_FTU9_CH5)  ),

        /* PTH3 */
        (uint8)( (1 <<  PORT227_ADC0_SE23) | \
        (1 <<  PORT227_GPIO) | \
        (1 <<  PORT227_FCUART9_CTS) | \
        (1 <<  PORT227_FTU9_CH0) | \
        (1 <<  PORT227_TRACE_D11)  ),

        /* PTH4 */
        (uint8)( (1 <<  PORT228_GPIO) | \
        (1 <<  PORT228_FTU4_QD_PHA) | \
        (1 <<  PORT228_FTU11_CH0) | \
        (1 <<  PORT228_ENET_PPS0) | \
        (1 <<  PORT228_TRACE_D12) | \
        (1 <<  PORT228_FCSPI6_SIN)  ),

        /* PTH5 */
        (uint8)( (1 <<  PORT229_GPIO) | \
        (1 <<  PORT229_FTU4_QD_PHB) | \
        (1 <<  PORT229_FTU11_CH1) | \
        (1 <<  PORT229_ENET_PPS1) | \
        (1 <<  PORT229_TRACE_D13) | \
        (1 <<  PORT229_FCSPI6_SCK)  ),

        /* PTH6 */
        (uint8)( (1 <<  PORT230_GPIO) | \
        (1 <<  PORT230_FCUART12_RTS) | \
        (1 <<  PORT230_FTU8_CH1) | \
        (1 <<  PORT230_FCUART3_RX)  ),

        /* PTH7 */
        (uint8)( (1 <<  PORT231_GPIO) | \
        (1 <<  PORT231_FTU_FLT8) | \
        (1 <<  PORT231_FTU8_CH2) | \
        (1 <<  PORT231_FCUART12_RX) | \
        (1 <<  PORT231_ENET_COL)  ),

        /* PTH8 */
        (uint8)( (1 <<  PORT232_GPIO) | \
        (1 <<  PORT232_FTU8_CH5) | \
        (1 <<  PORT232_ENET_CRS)  ),

        /* PTH9 */
        (uint8)( (1 <<  PORT233_ADC2_SE1) | \
        (1 <<  PORT233_GPIO) | \
        (1 <<  PORT233_FTU10_CH1) | \
        (1 <<  PORT233_MSC0_FCLP) | \
        (1 <<  PORT233_FTU1_QD_PHB)  ),

        /* PTH10 */
        (uint8)( (1 <<  PORT234_ADC2_SE5) | \
        (1 <<  PORT234_GPIO) | \
        (1 <<  PORT234_FTU10_CH2) | \
        (1 <<  PORT234_MSC0_SOP) | \
        (1 <<  PORT234_FCUART17_CTS)  ),

        /* PTH11 */
        (uint8)( (1 <<  PORT235_GPIO) | \
        (1 <<  PORT235_FCUART14_RX) | \
        (1 <<  PORT235_FTU11_CH0) | \
        (1 <<  PORT235_FCSPI7_SIN) | \
        (1 <<  PORT235_MSC0_FCLP)  ),

        /* PTH12 */
        (uint8)( (1 <<  PORT236_ADC2_SE21) | \
        (1 <<  PORT236_GPIO) | \
        (1 <<  PORT236_SDDF0_CH2) | \
        (1 <<  PORT236_FTU11_CH7) | \
        (1 <<  PORT236_FCUART1_TX)  ),

        /* PTH13 */
        (uint8)( (1 <<  PORT237_ADC2_SE22) | \
        (1 <<  PORT237_GPIO) | \
        (1 <<  PORT237_SDDF0_CH3) | \
        (1 <<  PORT237_FTU9_CH0) | \
        (1 <<  PORT237_FCUART1_RX)  ),

        /* PTH14 */
        (uint8)( (1 <<  PORT238_ADC2_SE23) | \
        (1 <<  PORT238_GPIO) | \
        (1 <<  PORT238_SDDF0_CLK1) | \
        (1 <<  PORT238_FTU9_CH1) | \
        (1 <<  PORT238_FCUART3_TX)  ),

        /* PTH15 */
        (uint8)( (1 <<  PORT239_GPIO) | \
        (1 <<  PORT239_FCUART15_RTS) | \
        (1 <<  PORT239_FLEXCAN7_RX) | \
        (1 <<  PORT239_MSC1_SDI1) | \
        (1 <<  PORT239_FTU5_QD_PHB)  ),

        /* PTH16 */
        (uint8)( (1 <<  PORT240_GPIO) | \
        (1 <<  PORT240_FCSPI5_PCS0) | \
        (1 <<  PORT240_FTU8_CH2) | \
        (1 <<  PORT240_MSC1_FCLP)  ),

        /* PTH17 */
        (uint8)( (1 <<  PORT241_GPIO) | \
        (1 <<  PORT241_FCSPI5_SCK) | \
        (1 <<  PORT241_FTU8_CH3) | \
        (1 <<  PORT241_MSC1_SOP)  ),

        /* PTH18 */
        (uint8)( (1 <<  PORT242_GPIO) | \
        (1 <<  PORT242_FCSPI4_SOUT) | \
        (1 <<  PORT242_FTU1_CH3) | \
        (1 <<  PORT242_FCUART10_RTS) | \
        (1 <<  PORT242_FLEXCAN3_RX)  ),

        /* PTH19 */
        (uint8)( (1 <<  PORT243_ADC1_SE27) | \
        (1 <<  PORT243_GPIO) | \
        (1 <<  PORT243_SENT1_RXD0) | \
        (1 <<  PORT243_FTU1_CH4) | \
        (1 <<  PORT243_FCUART10_RX) | \
        (1 <<  PORT243_TRGSEL_OUT0)  ),

        /* PTH20 */
        (uint8)( (1 <<  PORT244_ADC1_SE26) | \
        (1 <<  PORT244_GPIO) | \
        (1 <<  PORT244_SENT1_RXD1) | \
        (1 <<  PORT244_FTU1_CH5) | \
        (1 <<  PORT244_FCUART10_TX) | \
        (1 <<  PORT244_TRGSEL_OUT1)  ),

        /* PTH21 */
        (uint8)( (1 <<  PORT245_GPIO) | \
        (1 <<  PORT245_FTU11_CH4) | \
        (1 <<  PORT245_FCSPI3_SCK) | \
        (1 <<  PORT245_FTU_FLT4) | \
        (1 <<  PORT245_TRGSEL_OUT5)  ),

        /* PTH22 */
        (uint8)( (1 <<  PORT246_GPIO) | \
        (1 <<  PORT246_FTU7_CH6) | \
        (1 <<  PORT246_FCIIC1_SCL) | \
        (1 <<  PORT246_OSPI_A_CS)  ),

        /* PTH23 */
        (uint8)( (1 <<  PORT247_GPIO) | \
        (1 <<  PORT247_FTU9_CH6) | \
        (1 <<  PORT247_FLEXCAN2_RX)  ),

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        (uint8)0x00,

        /* PTI0 */
        (uint8)( (1 <<  PORT256_ADC1_SE0) | \
        (1 <<  PORT256_GPIO) | \
        (1 <<  PORT256_FCUART7_TX) | \
        (1 <<  PORT256_FTU9_CH4)  ),

        /* PTI1 */
        (uint8)( (1 <<  PORT257_GPIO) | \
        (1 <<  PORT257_FCUART8_RX) | \
        (1 <<  PORT257_FTU10_CH2) | \
        (1 <<  PORT257_FCSPI6_PCS0)  ),

        /* PTI2 */
        (uint8)( (1 <<  PORT258_ADC0_SE3) | \
        (1 <<  PORT258_GPIO) | \
        (1 <<  PORT258_FCUART8_TX) | \
        (1 <<  PORT258_FTU10_CH3)  ),

        /* PTI3 */
        (uint8)( (1 <<  PORT259_GPIO) | \
        (1 <<  PORT259_FCUART11_CTS) | \
        (1 <<  PORT259_FTU11_CH2) | \
        (1 <<  PORT259_FLEXCAN8_TX) | \
        (1 <<  PORT259_TRACE_D14) | \
        (1 <<  PORT259_FCSPI6_SOUT)  ),

        /* PTI4 */
        (uint8)( (1 <<  PORT260_GPIO) | \
        (1 <<  PORT260_FCUART11_RTS) | \
        (1 <<  PORT260_FTU11_CH3) | \
        (1 <<  PORT260_FLEXCAN8_RX) | \
        (1 <<  PORT260_TRACE_D15) | \
        (1 <<  PORT260_FCSPI6_PCS0)  ),

        /* PTI5 */
        (uint8)( (1 <<  PORT261_GPIO) | \
        (1 <<  PORT261_FCUART11_RX) | \
        (1 <<  PORT261_FTU6_CH3)  ),

        /* PTI6 */
        (uint8)( (1 <<  PORT262_ADC3_SE28_CMP2_IN3) | \
        (1 <<  PORT262_GPIO) | \
        (1 <<  PORT262_FCUART13_RX) | \
        (1 <<  PORT262_FTU0_CH0)  ),

        /* PTI7 */
        (uint8)( (1 <<  PORT263_ADC3_SE27) | \
        (1 <<  PORT263_GPIO) | \
        (1 <<  PORT263_FCUART13_TX) | \
        (1 <<  PORT263_FTU0_CH1) | \
        (1 <<  PORT263_MSC0_EN0)  ),

        /* PTI8 */
        (uint8)( (1 <<  PORT264_ADC3_SE26) | \
        (1 <<  PORT264_GPIO) | \
        (1 <<  PORT264_FCUART13_CTS) | \
        (1 <<  PORT264_FTU0_CH2) | \
        (1 <<  PORT264_MSC0_EN1)  ),

        /* PTI9 */
        (uint8)( (1 <<  PORT265_GPIO) | \
        (1 <<  PORT265_FCUART14_TX) | \
        (1 <<  PORT265_FTU11_CH1) | \
        (1 <<  PORT265_FCSPI7_SCK) | \
        (1 <<  PORT265_MSC0_SOP)  ),

        /* PTI10 */
        (uint8)( (1 <<  PORT266_GPIO) | \
        (1 <<  PORT266_FCUART14_CTS) | \
        (1 <<  PORT266_FTU11_CH2) | \
        (1 <<  PORT266_FCUART4_TX) | \
        (1 <<  PORT266_FCSPI7_SOUT)  ),

        /* PTI11 */
        (uint8)( (1 <<  PORT267_GPIO) | \
        (1 <<  PORT267_FCUART14_RTS) | \
        (1 <<  PORT267_FTU11_CH3) | \
        (1 <<  PORT267_FCUART4_RX) | \
        (1 <<  PORT267_FCSPI7_PCS0)  ),

        /* PTI12 */
        (uint8)( (1 <<  PORT268_ADC2_SE24) | \
        (1 <<  PORT268_GPIO) | \
        (1 <<  PORT268_SDDF0_CLK2) | \
        (1 <<  PORT268_FTU9_CH2) | \
        (1 <<  PORT268_FCUART3_RX)  ),

        /* PTI13 */
        (uint8)( (1 <<  PORT269_ADC3_SE11) | \
        (1 <<  PORT269_GPIO) | \
        (1 <<  PORT269_FTU10_CH3) | \
        (1 <<  PORT269_FLEXCAN8_TX)  ),

        /* PTI14 */
        (uint8)( (1 <<  PORT270_ADC3_SE12) | \
        (1 <<  PORT270_GPIO) | \
        (1 <<  PORT270_FTU10_CH4) | \
        (1 <<  PORT270_FLEXCAN8_RX)  ),

        /* PTI15 */
        (uint8)( (1 <<  PORT271_GPIO) | \
        (1 <<  PORT271_FCSPI5_SIN) | \
        (1 <<  PORT271_FTU8_CH4) | \
        (1 <<  PORT271_MSC1_EN0) | \
        (1 <<  PORT271_FLEXCAN1_TX)  ),

        /* PTI16 */
        (uint8)( (1 <<  PORT272_GPIO) | \
        (1 <<  PORT272_FCSPI5_SOUT) | \
        (1 <<  PORT272_FTU8_CH5) | \
        (1 <<  PORT272_MSC1_EN1) | \
        (1 <<  PORT272_FLEXCAN1_RX)  ),

        /* PTI17 */
        (uint8)( (1 <<  PORT273_GPIO) | \
        (1 <<  PORT273_FTU8_CH6) | \
        (1 <<  PORT273_FLEXCAN2_TX)  ),

        /* PTI18 */
        (uint8)( (1 <<  PORT274_GPIO) | \
        (1 <<  PORT274_SENT1_RXD2) | \
        (1 <<  PORT274_FTU1_CH6) | \
        (1 <<  PORT274_FCUART2_TX)  ),

        /* PTI19 */
        (uint8)( (1 <<  PORT275_GPIO) | \
        (1 <<  PORT275_SENT1_RXD3) | \
        (1 <<  PORT275_FTU1_CH7) | \
        (1 <<  PORT275_FCUART2_RX)  ),

        /* PTI20 */
        (uint8)( (1 <<  PORT276_GPIO) | \
        (1 <<  PORT276_FTU_TCK2) | \
        (1 <<  PORT276_FTU_FLT20) | \
        (1 <<  PORT276_FTU6_CH7)  ),

        /* PTI21 */
        (uint8)( (1 <<  PORT277_CMP0_IN4) | \
        (1 <<  PORT277_GPIO) | \
        (1 <<  PORT277_FTU4_CH5) | \
        (1 <<  PORT277_FCSPI2_PCS2) | \
        (1 <<  PORT277_FCUART16_CTS)  ),

        /* PTI22 */
        (uint8)( (1 <<  PORT278_CMP0_IN5) | \
        (1 <<  PORT278_GPIO) | \
        (1 <<  PORT278_FTU4_CH4) | \
        (1 <<  PORT278_FCUART16_RX)  ),

        /* PTI23 */
        (uint8)( (1 <<  PORT279_CMP0_IN2) | \
        (1 <<  PORT279_GPIO) | \
        (1 <<  PORT279_FTU4_CH7) | \
        (1 <<  PORT279_FCUART16_TX)  )
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
