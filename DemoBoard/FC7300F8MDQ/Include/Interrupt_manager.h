#ifndef _DRIVER_INTERRUPT_MANAGER_H_
#define _DRIVER_INTERRUPT_MANAGER_H_

#include "Mcu_CM7_Regs.h"

/*! @addtogroup interrupt_manager*/
/*! @{*/

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* clang-format off */
/**< peripheral interrupt start index in vector table, 0-15 is core interrupt */
#define FC7XXX_PERI_VECTOR_START             16U

/**< NVIC priority bits */
#define FC7XXX_NVIC_PRIO_BITS                3U

/** Interrupt Number Definitions */
/**< Number of interrupts in the Vector table */
#define NUMBER_OF_INT_VECTORS                170U

/**< peripheral interrupt start index in vector table, 0-15 is core interrupt */
#define DEVICE_VECTOR_NUMBER_STARTINDEX      16U

/**
 * @brief Defines the Interrupt Numbers definitions
 *
 * This enumeration is used to configure the interrupts.
 *
 * Implements : IRQn_Type_Class
 */
typedef enum
{
    /* Auxiliary constants */
    NotAvail_IRQn                      = -128,   /**< Not available device specific interrupt */

    /* Core interrupts */
    NonMaskableInt_IRQn                = -14,    /**< Non Maskable Interrupt */
    HardFault_IRQn                     = -13,    /**< Cortex-M7 SV Hard Fault Interrupt */
    MemoryManagement_IRQn              = -12,    /**< Cortex-M7 Memory Management Interrupt */
    BusFault_IRQn                      = -11,    /**< Cortex-M7 Bus Fault Interrupt */
    UsageFault_IRQn                    = -10,    /**< Cortex-M7 Usage Fault Interrupt */
    SVCall_IRQn                        = -5,     /**< Cortex-M7 SV Call Interrupt */
    DebugMonitor_IRQn                  = -4,     /**< Cortex-M7 Debug Monitor Interrupt */
    PendSV_IRQn                        = -2,     /**< Cortex-M7 Pend SV Interrupt */
    SysTick_IRQn                       = -1,     /**< Cortex-M7 System Tick Interrupt */

    /* FC7300F8MDQxxxxT1B Device specific interrupts */
    DMA0_IRQn                          = 0U,     /**< DMA channel 0 transfer complete */
    DMA1_IRQn                          = 1U,     /**< DMA channel 1 transfer complete */
    DMA2_IRQn                          = 2U,     /**< DMA channel 2 transfer complete */
    DMA3_IRQn                          = 3U,     /**< DMA channel 3 transfer complete */
    DMA4_IRQn                          = 4U,     /**< DMA channel 4 transfer complete */
    DMA5_IRQn                          = 5U,     /**< DMA channel 5 transfer complete */
    DMA6_IRQn                          = 6U,     /**< DMA channel 6 transfer complete */
    DMA7_IRQn                          = 7U,     /**< DMA channel 7 transfer complete */
    DMA8_IRQn                          = 8U,     /**< DMA channel 8 transfer complete */
    DMA9_IRQn                          = 9U,     /**< DMA channel 9 transfer complete */
    DMA10_IRQn                         = 10U,    /**< DMA channel 10 transfer complete */
    DMA11_IRQn                         = 11U,    /**< DMA channel 11 transfer complete */
    DMA12_IRQn                         = 12U,    /**< DMA channel 12 transfer complete */
    DMA13_IRQn                         = 13U,    /**< DMA channel 13 transfer complete */
    DMA14_IRQn                         = 14U,    /**< DMA channel 14 transfer complete */
    DMA15_IRQn                         = 15U,    /**< DMA channel 15 transfer complete */
    DMA16_IRQn                         = 16U,    /**< DMA channel 16 transfer complete */
    DMA17_IRQn                         = 17U,    /**< DMA channel 17 transfer complete */
    DMA18_IRQn                         = 18U,    /**< DMA channel 18 transfer complete */
    DMA19_IRQn                         = 19U,    /**< DMA channel 19 transfer complete */
    DMA20_IRQn                         = 20U,    /**< DMA channel 20 transfer complete */
    DMA21_IRQn                         = 21U,    /**< DMA channel 21 transfer complete */
    DMA22_IRQn                         = 22U,    /**< DMA channel 22 transfer complete */
    DMA23_IRQn                         = 23U,    /**< DMA channel 23 transfer complete */
    DMA24_IRQn                         = 24U,    /**< DMA channel 24 transfer complete */
    DMA25_IRQn                         = 25U,    /**< DMA channel 25 transfer complete */
    DMA26_IRQn                         = 26U,    /**< DMA channel 26 transfer complete */
    DMA27_IRQn                         = 27U,    /**< DMA channel 27 transfer complete */
    DMA28_IRQn                         = 28U,    /**< DMA channel 28 transfer complete */
    DMA29_IRQn                         = 29U,    /**< DMA channel 29 transfer complete */
    DMA30_IRQn                         = 30U,    /**< DMA channel 30 transfer complete */
    DMA31_IRQn                         = 31U,    /**< DMA channel 31 transfer complete */
    DMA_Error_IRQn                     = 32U,    /**< DMA error interrupt channels 0-13 */
    CPM_IRQn                           = 33U,    /**< FPU etc. interrupt */
    FC_IRQn                            = 34U,    /**< FC Command complete */
    LVD_LVW_IRQn                       = 35U,    /**< PMC Low voltage detect interrupt */
    TMU_IRQn                           = 36U,    /**< Temperature Monitor Unit interrupt */
    WDOG0_IRQn                         = 37U,    /**< interrupt request out before wdg reset out */
    WDOG1_IRQn                         = 38U,    /**< interrupt request out before wdg reset out */
    WDOG2_IRQn                         = 39U,    /**< interrupt request out before wdg reset out */
    FCSMU0_IRQn                        = 40U,    /**< Fault Control and Safety Manage Unit */
    STCU0_IRQn                         = 41U,    /**< Safety Control Unit interrupt */
    ERM_fault_IRQn                     = 42U,    /**< ERM single/double bit error correction */
    MAM0_IRQn                          = 43U,    /**< Matrix Access Monitor interrupt */
    MAM1_IRQn                          = 44U,    /**< Matrix Access Monitor interrupt */
    WDOG3_IRQn                         = 45U,    /**< interrupt request out before wdg reset out */
    RESERVED_62_IRQn                   = 46U,    /**< Reserved */
    RGM_Pre_IRQn                       = 47U,    /**< RGM pre-reset Interrupt */
    RGM_Other_IRQn                     = 48U,    /**< RGM other CPU exit reset Interrupt */
    INTM0_IRQn                         = 49U,    /**< INTM alarm interrupt */
    ISM0_IRQn                          = 50U,    /**< ISM0 interrupt */
    MB_IRQn                            = 51U,    /**< Mail Box interrupt */
    SCG_IRQn                           = 52U,    /**< SCG bus interrupt request */
    CMU0_IRQn                          = 53U,    /**< CMU0 interrupt */
    CMU1_IRQn                          = 54U,    /**< CMU1 interrupt */
    CMU2_IRQn                          = 55U,    /**< CMU2 interrupt */
    CMU3_IRQn                          = 56U,    /**< CMU3 interrupt */
    TSTMP0_IRQn                        = 57U,    /**< TimerStamp0 interrupt */
    TSTMP1_IRQn                        = 58U,    /**< TimerStamp1 interrupt */
    TSTMP2_IRQn                        = 59U,    /**< TimerStamp2 interrupt */
    TSTMP3_IRQn                        = 60U,    /**< TimerStamp3 interrupt */
    CORDIC_IRQn                        = 61U,    /**< CORDIC Accelerator interrupt */
    FLEXHSM_Error_IRQn                 = 62U,    /**< Flexhsm error interrupt */
    FCPIT0_IRQn                        = 63U,    /**< FCPIT0 interrupt */
    FCPIT1_IRQn                        = 64U,    /**< FCPIT0 interrupt */
    RTC_IRQn                           = 65U,    /**< RTC alarm or seconds interrupt  */
    ENET_Tx0_IRQn                      = 66U,    /**< ENET 1588 Timer Interrupt - synchronous */
    ENET_Tx1_IRQn                      = 67U,    /**< ENET Data transfer done */
    ENET_Rx0_IRQn                      = 68U,    /**< ENET Receive Buffer Done for Ring/Queue 0 */
    ENET_Rx1_IRQn                      = 69U,    /**< ENET Receive Buffer Done for Ring/Queue 0 */
    ENET_System_IRQn                   = 70U,    /**< ENET System interrupt */
    AONTIMER_IRQn                      = 71U,    /**< AONTIMER interrupt request */
    SWI_IRQn                           = 72U,    /**< Software interrupt */
    TSTMP4_IRQn                        = 73U,    /**< TimerStamp4 interrupt */
    FREQM_IRQn                         = 74U,    /**< FREQM interrupt */
    PORTA_IRQn                         = 75U,    /**< Port A pin detect interrupt */
    PORTB_IRQn                         = 76U,    /**< Port B pin detect interrupt */
    PORTC_IRQn                         = 77U,    /**< Port C pin detect interrupt */
    PORTD_IRQn                         = 78U,    /**< Port D pin detect interrupt */
    PORTE_IRQn                         = 79U,    /**< Port E pin detect interrupt */
    PORTF_IRQn                         = 80U,    /**< Port F pin detect interrupt */
    PORTG_IRQn                         = 81U,    /**< Port G pin detect interrupt */
    PORTH_IRQn                         = 82U,    /**< Port H pin detect interrupt */
    PORTI_IRQn                         = 83U,    /**< Port I pin detect interrupt */
    FlexCAN0_IRQn                      = 84U,    /**< CAN0 Interrupt */
    FlexCAN1_IRQn                      = 85U,    /**< CAN1 Interrupt */
    FlexCAN2_IRQn                      = 86U,    /**< CAN2 Interrupt */
    FlexCAN3_IRQn                      = 87U,    /**< CAN3 Interrupt */
    FlexCAN4_IRQn                      = 88U,    /**< CAN4 Interrupt */
    FlexCAN5_IRQn                      = 89U,    /**< CAN5 Interrupt */
    FlexCAN6_IRQn                      = 90U,    /**< CAN6 Interrupt */
    FlexCAN7_IRQn                      = 91U,    /**< CAN7 Interrupt */
    FCIIC0_IRQn                        = 92U,    /**< FCIIC0 Interrupt */
    FCIIC1_IRQn                        = 93U,    /**< FCIIC1 Interrupt */
    FCSPI0_IRQn                        = 94U,    /**< FCSPI0 Interrupt */
    FCSPI1_IRQn                        = 95U,    /**< FCSPI1 Interrupt */
    FCSPI2_IRQn                        = 96U,    /**< FCSPI2 Interrupt */
    FCSPI3_IRQn                        = 97U,    /**< FCSPI0 Interrupt */
    FCSPI4_IRQn                        = 98U,    /**< FCSPI1 Interrupt */
    FCSPI5_IRQn                        = 99U,    /**< FCSPI2 Interrupt */
    FCUART0_IRQn                       = 100,    /**< FCUART0 Transmit / Receive Interrupt */
    FCUART1_IRQn                       = 101U,   /**< FCUART1 Transmit / Receive  Interrupt */
    FCUART2_IRQn                       = 102U,   /**< FCUART2 Transmit / Receive  Interrupt */
    FCUART3_IRQn                       = 103U,   /**< FCUART3 Transmit / Receive Interrupt */
    FCUART4_IRQn                       = 104U,   /**< FCUART4 Transmit / Receive  Interrupt */
    FCUART5_IRQn                       = 105U,   /**< FCUART5 Transmit / Receive  Interrupt */
    FCUART6_IRQn                       = 106U,   /**< FCUART6 Transmit / Receive Interrupt */
    FCUART7_IRQn                       = 107U,   /**< FCUART7 Transmit / Receive  Interrupt */
    FCUART8_IRQn                       = 108U,   /**< FCUART8 Transmit / Receive  Interrupt */
    FCUART9_IRQn                       = 109U,   /**< FCUART9 Transmit / Receive Interrupt */
    FCUART10_IRQn                      = 110U,   /**< FCUART10 Transmit / Receive  Interrupt */
    FCUART11_IRQn                      = 111U,   /**< FCUART11 Transmit / Receive  Interrupt */
    FCUART12_IRQn                      = 112U,   /**< FCUART12 Transmit / Receive  Interrupt */
    FCUART13_IRQn                      = 113U,   /**< FCUART13 Transmit / Receive  Interrupt */
    FlexCAN12_IRQn                     = 114U,   /**< CAN12 Interrupt */
    FlexCAN13_IRQn                     = 115U,   /**< CAN13 Interrupt */
    FTU0_IRQn                          = 116U,   /**< FTU0 all source interrupt */
    FTU1_IRQn                          = 117U,   /**< FTU1 all source interrupt */
    FTU2_IRQn                          = 118U,   /**< FTU2 all source interrupt */
    FTU3_IRQn                          = 119U,   /**< FTU3 all source interrupt */
    FTU4_IRQn                          = 120U,   /**< FTU4 all source interrupt */
    FTU5_IRQn                          = 121U,   /**< FTU5 all source interrupt */
    FTU6_IRQn                          = 122U,   /**< FTU6 all source interrupt */
    FTU7_IRQn                          = 123U,   /**< FTU7 all source interrupt */
    HSADC0_IRQn                        = 124U,   /**< HSADC0 interrupt */
    HSADC1_IRQn                        = 125U,   /**< HSADC1 interrupt */
    HSADC2_IRQn                        = 126U,   /**< HSADC2 interrupt */
    HSADC3_IRQn                        = 127U,   /**< HSADC3 interrupt */
    CMP0_IRQn                          = 128U,   /**< CMP0 interrupt request  */
    RESERVED_145_IRQn                  = 129U,   /**< Reserved  */
    ADC4_IRQn                          = 130U,   /**< ADC4 interrupt request  */
    ADC0_IRQn                          = 131U,   /**< ADC0 interrupt request. */
    ADC1_IRQn                          = 132U,   /**< ADC1 interrupt request. */
    ADC2_IRQn                          = 133U,   /**< ADC2 interrupt request. */
    ADC3_IRQn                          = 134U,   /**< ADC3 interrupt request. */
    PTIMER0_IRQn                       = 135U,   /**< PTIMER0 interrupt */
    PTIMER1_IRQn                       = 136U,   /**< PTIMER1 interrupt */
    PTIMER2_IRQn                       = 137U,   /**< PTIMER2 interrupt */
    PTIMER3_IRQn                       = 138U,   /**< PTIMER3 interrupt */
    ADC5_IRQn                          = 139U,   /**< ADC5 interrupt request */
    MSC0_IRQn                          = 140U,   /**< MSC0 interrupt */
    MSC1_IRQn                          = 141U,   /**< MSC1 interrupt */
    FlexCAN8_IRQn                      = 142U,   /**< CAN8 Interrupt */
    FlexCAN9_IRQn                      = 143U,   /**< CAN9 Interrupt */
    SENT0_IRQn                         = 144U,   /**< SENT0 all interrupt (fast or slow) */
    SENT1_IRQn                         = 145U,   /**< SENT1 all interrupt (fast or slow) */
    FCSPI6_IRQn                        = 146U,   /**< FCSPI6 Interrupt */
    FCSPI7_IRQn                        = 147U,   /**< FCSPI7 Interrupt */
    FlexCAN10_IRQn                     = 148U,   /**< CAN10 Interrupt */
    FlexCAN11_IRQn                     = 149U,   /**< CAN11 Interrupt */
    CTI0_IRQn                          = 150U,   /**< CTI0 Interrupt */
    CTI1_IRQn                          = 151U,   /**< CTI1 Interrupt */
    CTI2_IRQn                          = 152U,   /**< CTI2 Interrupt */
    CMU4_IRQn                          = 153U,   /**< CMU4 Interrupt */
    CTI3_IRQn                          = 154U,   /**< CIT3 Interrupt */
    SSI_IRQn                           = 155U,   /**< SSI Interrupt */
    SDADC0_CH0_IRQn                    = 156U,   /**< SDADC0_CH0 Interrupt */
    SDADC0_CH1_IRQn                    = 157U,   /**< SDADC0_CH1 Interrupt */
    SDADC0_CH2_IRQn                    = 158U,   /**< SDADC0_CH2 Interrupt */
    SDADC1_CH0_IRQn                    = 159U,   /**< SDADC1_CH0 Interrupt */
    SDADC1_CH1_IRQn                    = 160U,   /**< SDADC1_CH1 Interrupt */
    SDADC1_CH2_IRQn                    = 161U,   /**< SDADC1_CH2 Interrupt */
    eFTU0_All_Error_IRQn               = 162U,   /**< eFTU0 All Error Interrupt */
    eFTU1_All_Error_IRQn               = 163U,   /**< eFTU1 All Error Interrupt */
    eFTU2_All_Error_IRQn               = 164U,   /**< eFTU2 All Error Interrupt */
    eFTU0_TIM_0TO3_IRQn                = 165U,   /**< eFTU0 TIM 0 TO 3 Interrupt */
    eFTU1_TIM_0TO3_IRQn                = 166U,   /**< eFTU1 TIM 0 TO 3 Interrupt */
    eFTU2_TIM_0TO3_IRQn                = 167U,   /**< eFTU2 TIM 0 TO 3 Interrupt */
    eFTU0_TIM_4TO7_IRQn                = 168U,   /**< eFTU0 TIM 4 TO 7 Interrupt */
    eFTU1_TIM_4TO7_IRQn                = 169U,   /**< eFTU1 TIM 4 TO 7 Interrupt */
    eFTU2_TIM_4TO7_IRQn                = 170U,   /**< eFTU2 TIM 4 TO 7 Interrupt */
    eFTU0_TOM_0TO7_IRQn                = 171U,   /**< eFTU0 TOM 0 TO 7 Interrupt */
    eFTU1_TOM_0TO7_IRQn                = 172U,   /**< eFTU1 TOM 0 TO 7 Interrupt */
    eFTU2_TOM_0TO7_IRQn                = 173U,   /**< eFTU2 TOM 0 TO 7 Interrupt */
    eFTU0_TOM_8TO15_IRQn               = 174U,   /**< eFTU0 TOM 8 TO 15 Interrupt */
    eFTU1_TOM_8TO15_IRQn               = 175U,   /**< eFTU1 TOM 8 TO 15 Interrupt */
    eFTU2_TOM_8TO15_IRQn               = 176U,   /**< eFTU2 TOM 8 TO 15 Interrupt */
    FlexCAN0_Error_IRQn                = 177U,   /**< CAN0 Error Interrupt */
    FlexCAN1_Error_IRQn                = 178U,   /**< CAN1 Error Interrupt */
    FlexCAN2_Error_IRQn                = 179U,   /**< CAN2 Error Interrupt */
    FlexCAN3_Error_IRQn                = 180U,   /**< CAN3 Error Interrupt */
    FlexCAN4_Error_IRQn                = 181U,   /**< CAN4 Error Interrupt */
    FlexCAN5_Error_IRQn                = 182U,   /**< CAN5 Error Interrupt */
    FlexCAN6_Error_IRQn                = 183U,   /**< CAN6 Error Interrupt */
    FlexCAN7_Error_IRQn                = 184U,   /**< CAN7 Error Interrupt */
    FlexCAN8_Error_IRQn                = 185U,   /**< CAN8 Error Interrupt */
    FlexCAN9_Error_IRQn                = 186U,   /**< CAN9 Error Interrupt */
    FlexCAN10_Error_IRQn               = 187U,   /**< CAN10 Error Interrupt */
    FlexCAN11_Error_IRQn               = 188U,   /**< CAN11 Error Interrupt */
    FlexCAN12_Error_IRQn               = 189U,   /**< CAN12 Error Interrupt */
    FlexCAN13_Error_IRQn               = 190U,   /**< CAN13 Error Interrupt */
    QDT0_IRQn                          = 191U,   /**< QDT0 Interrupt */
    QDT1_IRQn                          = 192U,   /**< QDT1 Interrupt */
    QDT2_IRQn                          = 193U,   /**< QDT2 Interrupt */
    QDT3_IRQn                          = 194U,   /**< QDT3 Interrupt */
    LU0_IRQn                           = 195U,   /**< LU0 Interrupt */
    LU1_IRQn                           = 196U,   /**< LU1 Interrupt */
    TPU0_CH0_7_IRQn                    = 197U,   /**< TPU0 CH0-7 interrupt */
    TPU0_CH8_15_IRQn                   = 198U,   /**< TPU0 CH8-15 interrupt */
    TPU0_CH16_23_IRQn                  = 199U,   /**< TPU0 CH16-23 interrupt */
    TPU0_CH24_31_IRQn                  = 200U,   /**< TPU0 CH24-31 interrupt */
    CE_IRQn                            = 201U,   /**< Crypto Engine Interrupt */
    IRQn_MAX                           = 202U
} IRQn_Type;
/* clang-format on */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C"
{
#endif /* __cplusplus*/

void IntMgr_EnableInterrupt(IRQn_Type eIrqNumber);
void IntMgr_DisableInterrupt(IRQn_Type eIrqNumber);
void IntMgr_SetPriority(IRQn_Type eIrqNumber, uint8 u8Priority);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*! @}*/

#endif
