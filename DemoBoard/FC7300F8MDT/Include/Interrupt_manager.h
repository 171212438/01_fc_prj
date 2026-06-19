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
    NotAvail_IRQn                      = -128,       /**< Not available device specific interrupt */

    /* Core interrupts */
    NonMaskableInt_IRQn                = -14,   /**< Non Maskable Interrupt */
    HardFault_IRQn                     = -13,   /**< Cortex-M7 SV Hard Fault Interrupt */
    MemoryManagement_IRQn              = -12,   /**< Cortex-M7 Memory Management Interrupt */
    BusFault_IRQn                      = -11,   /**< Cortex-M7 Bus Fault Interrupt */
    UsageFault_IRQn                    = -10,   /**< Cortex-M7 Usage Fault Interrupt */
    SVCall_IRQn                        = -5,    /**< Cortex-M7 SV Call Interrupt */
    DebugMonitor_IRQn                  = -4,    /**< Cortex-M7 Debug Monitor Interrupt */
    PendSV_IRQn                        = -2,    /**< Cortex-M7 Pend SV Interrupt */
    SysTick_IRQn                       = -1,    /**< Cortex-M7 System Tick Interrupt */

    /* FC7300F8MDTxxxxT1B Device specific interrupts */
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
    DMA16_IRQn                         = 16U,    /**<  DMA channel 16 transfer complete */
    DMA17_IRQn                         = 17U,    /**<  DMA channel 17 transfer complete */
    DMA18_IRQn                         = 18U,    /**<  DMA channel 18 transfer complete */
    DMA19_IRQn                         = 19U,    /**<  DMA channel 19 transfer complete */
    DMA20_IRQn                         = 20U,    /**<  DMA channel 20 transfer complete */
    DMA21_IRQn                         = 21U,    /**<  DMA channel 21 transfer complete */
    DMA22_IRQn                         = 22U,    /**<  DMA channel 22 transfer complete */
    DMA23_IRQn                         = 23U,    /**<  DMA channel 23 transfer complete */
    DMA24_IRQn                         = 24U,    /**<  DMA channel 24 transfer complete */
    DMA25_IRQn                         = 25U,    /**<  DMA channel 25 transfer complete */
    DMA26_IRQn                         = 26U,    /**<  DMA channel 26 transfer complete */
    DMA27_IRQn                         = 27U,    /**<  DMA channel 27 transfer complete */
    DMA28_IRQn                         = 28U,    /**<  DMA channel 28 transfer complete */
    DMA29_IRQn                         = 29U,    /**<  DMA channel 29 transfer complete */
    DMA30_IRQn                         = 30U,    /**<  DMA channel 30 transfer complete */
    DMA31_IRQn                         = 31U,    /**<  DMA channel 31 transfer complete */
    DMA_Error_IRQn                     = 32U,    /**<  DMA error interrupt channels 0-63 */
    CPM_IRQn                           = 33U,    /**<  FPU etc. interrupt */
    FC_IRQn                            = 34U,    /**<  FC Command complete */
    LVD_LVW_IRQn                       = 35U,    /**<  PMC Low voltage detect interrupt */
    TMU_IRQn                           = 36U,    /**<  Temperature Monitor Unit interrupt */
    WDOG0_IRQn                         = 37U,    /**<  interrupt request out before wdg reset out */
    WDOG1_IRQn                         = 38U,    /**<  interrupt request out before wdg reset out */
    WDOG2_IRQn                         = 39U,    /**<  interrupt request out before wdg reset out */
    FCSMU0_IRQn                        = 40U,    /**<  Fault Control and Safety Manage Unit */
    STCU0_IRQn                         = 41U,    /**<  Safety Control Unit interrupt */
    ERM_fault_IRQn                     = 42U,    /**<  ERM single/double bit error correction */
    MAM0_IRQn                          = 43U,    /**<  Matrix Access Monitor interrupt */
    MAM1_IRQn                          = 44U,    /**<  Matrix Access Monitor interrupt */
    MAM2_IRQn                          = 45U,    /**<  Matrix Access Monitor interrupt */
    RESERVED_62_IRQn                   = 46U,    /**<  Reserved */
    RGM_Pre_IRQn                       = 47U,    /**<  RGM pre-reset Interrupt */
    RGM_Other_IRQn                     = 48U,    /**<  RGM other CPU exit reset Interrupt */
    INTM0_IRQn                         = 49U,    /**<   INTM alarm interrupt */
    ISM0_IRQn                          = 50U,    /**<  ISM0 interrupt */
    MB_IRQn                            = 51U,    /**<  Mail Box interrupt */
    SCG_IRQn                           = 52U,    /**<  SCG bus interrupt request */
    CMU0_IRQn                          = 53U,    /**<  CMU0 interrupt */
    CMU1_IRQn                          = 54U,    /**<  CMU1 interrupt */
    CMU2_IRQn                          = 55U,    /**<  CMU2 interrupt */
    CMU3_IRQn                          = 56U,    /**<  CMU3 interrupt */
    TSTMP0_IRQn                        = 57U,    /**<  TimerStamp0 interrupt */
    TSTMP1_IRQn                        = 58U,    /**<  TimerStamp1 interrupt */
    TSTMP2_IRQn                        = 59U,    /**<  TimerStamp2 interrupt */
    TSTMP3_IRQn                        = 60U,    /**<  TimerStamp3 interrupt */
    CORDIC_IRQn                        = 61U,    /**<  CORDIC Accelerator interrupt */
    HSM0_IRQn                          = 62U,    /**<  Crypto interrupt */
    FCPIT0_IRQn                        = 63U,    /**<  FCPIT0 interrupt */
    FCPIT1_IRQn                        = 64U,    /**<  FCPIT0 interrupt */
    RTC_IRQn                           = 65U,    /**<  RTC alarm or seconds interrupt  */
    ENET_Tx0_IRQn                      = 66U,    /**<  ENET TX channel 0 interrupt */
    ENET_Tx1_IRQn                      = 67U,    /**<  ENET TX channel 1 interrupt */
    ENET_Rx0_IRQn                      = 68U,    /**<  ENET RX channel 0 interrupt */
    ENET_Rx1_IRQn                      = 69U,    /**<  ENET RX channel 1 interrupt */
    ENET_System_IRQn                   = 70U,    /**<  ENET System interrupt */
    AONTIMER_IRQn                      = 71U,    /**<  AONTIMER interrupt request */
    SWI_IRQn                           = 72U,    /**<  Software interrupt */
    OSPI_IRQn                          = 73U,    /**<  All OSPI interrupts */
    FREQM_IRQn                         = 74U,    /**<  FREQM interrupt */
    PORTA_IRQn                         = 75U,    /**<  Port A pin detect interrupt */
    PORTB_IRQn                         = 76U,    /**<  Port B pin detect interrupt */
    PORTC_IRQn                         = 77U,    /**<  Port C pin detect interrupt */
    PORTD_IRQn                         = 78U,    /**<  Port D pin detect interrupt */
    PORTE_IRQn                         = 79U,    /**<  Port E pin detect interrupt */
    PORTF_IRQn                         = 80U,    /**<  Port F pin detect interrupt */
    PORTG_IRQn                         = 81U,    /**<  Port G pin detect interrupt */
    PORTH_IRQn                         = 82U,    /**<  Port H pin detect interrupt */
    PORTI_IRQn                         = 83U,    /**<  Port I pin detect interrupt */
    FlexCAN0_IRQn                      = 84U,    /**<  CAN0 Interrupt */
    FlexCAN1_IRQn                      = 85U,    /**<  CAN1 Interrupt */
    FlexCAN2_IRQn                      = 86U,    /**<  CAN2 Interrupt */
    FlexCAN3_IRQn                      = 87U,    /**<  CAN3 Interrupt */
    FlexCAN4_IRQn                      = 88U,    /**<  CAN4 Interrupt */
    FlexCAN5_IRQn                      = 89U,    /**<  CAN5 Interrupt */
    FlexCAN6_IRQn                      = 90U,    /**<  CAN6 Interrupt */
    FlexCAN7_IRQn                      = 91U,    /**<  CAN7 Interrupt */
    FCIIC0_IRQn                        = 92U,    /**<  FCIIC0 Interrupt */
    FCIIC1_IRQn                        = 93U,    /**<  FCIIC1 Interrupt */
    FCSPI0_IRQn                        = 94U,    /**<  FCSPI0 Interrupt */
    FCSPI1_IRQn                        = 95U,    /**<  FCSPI1 Interrupt */
    FCSPI2_IRQn                        = 96U,    /**<  FCSPI2 Interrupt */
    FCSPI3_IRQn                        = 97U,    /**<  FCSPI0 Interrupt */
    FCSPI4_IRQn                        = 98U,    /**<  FCSPI1 Interrupt */
    FCSPI5_IRQn                        = 99U,    /**<  FCSPI2 Interrupt */
    FCUART0_IRQn                       = 100,    /**<  FCUART0 Transmit / Receive Interrupt */
    FCUART1_IRQn                       = 101U,   /**<  FCUART1 Transmit / Receive  Interrupt */
    FCUART2_IRQn                       = 102U,   /**<  FCUART2 Transmit / Receive  Interrupt */
    FCUART3_IRQn                       = 103U,   /**<  FCUART3 Transmit / Receive Interrupt */
    FCUART4_IRQn                       = 104U,   /**<  FCUART4 Transmit / Receive  Interrupt */
    FCUART5_IRQn                       = 105U,   /**<  FCUART5 Transmit / Receive  Interrupt */
    FCUART6_IRQn                       = 106U,   /**<  FCUART6 Transmit / Receive Interrupt */
    FCUART7_IRQn                       = 107U,   /**<  FCUART7 Transmit / Receive  Interrupt */
    FCUART8_IRQn                       = 108U,   /**<  FCUART8 Transmit / Receive  Interrupt */
    FCUART9_IRQn                       = 109U,   /**<  FCUART9 Transmit / Receive Interrupt */
    FCUART10_IRQn                      = 110U,   /**<  FCUART10 Transmit / Receive  Interrupt */
    FCUART11_IRQn                      = 111U,   /**<  FCUART11 Transmit / Receive  Interrupt */
    FCUART12_IRQn                      = 112U,   /**<  FCUART12 Transmit / Receive  Interrupt */
    FCUART13_IRQn                      = 113U,   /**<  FCUART13 Transmit / Receive  Interrupt */
    FCUART14_IRQn                      = 114U,   /**<  FCUART14 Transmit / Receive Interrupt */
    FCUART15_IRQn                      = 115U,   /**<  FCUART15 Transmit / Receive  Interrupt */
    FTU0_IRQn                          = 116U,   /**<  FTU0 all source interrupt */
    FTU1_IRQn                          = 117U,   /**<  FTU1 all source interrupt */
    FTU2_IRQn                          = 118U,   /**<  FTU2 all source interrupt */
    FTU3_IRQn                          = 119U,   /**<  FTU3 all source interrupt */
    FTU4_IRQn                          = 120U,   /**<  FTU4 all source interrupt */
    FTU5_IRQn                          = 121U,   /**<  FTU5 all source interrupt */
    FTU6_IRQn                          = 122U,   /**<  FTU6 all source interrupt */
    FTU7_IRQn                          = 123U,   /**<  FTU7 all source interrupt */
    FTU8_IRQn                          = 124U,   /**<  FTU4 all source interrupt */
    FTU9_IRQn                          = 125U,   /**<  FTU5 all source interrupt */
    FTU10_IRQn                         = 126U,   /**<  FTU6 all source interrupt */
    FTU11_IRQn                         = 127U,   /**<  FTU7 all source interrupt */
    CMP0_IRQn                          = 128U,   /**<  CMP0 interrupt request  */
    CMP1_IRQn                          = 129U,   /**<  CMP1 interrupt request  */
    CMP2_IRQn                          = 130U,   /**<  CMP2 interrupt request  */
    ADC0_IRQn                          = 131U,   /**<  ADC0 interrupt request. */
    ADC1_IRQn                          = 132U,   /**<  ADC1 interrupt request. */
    ADC2_IRQn                          = 133U,   /**<  ADC2 interrupt request. */
    ADC3_IRQn                          = 134U,   /**<  ADC3 interrupt request. */
    PTIMER0_IRQn                       = 135U,   /**<  PTIMER0 interrupt */
    PTIMER1_IRQn                       = 136U,   /**<  PTIMER1 interrupt */
    PTIMER2_IRQn                       = 137U,   /**<  PTIMER2 interrupt */
    PTIMER3_IRQn                       = 138U,   /**<  PTIMER3 interrupt */
    SDDF0_IRQn                         = 139U,   /**<  SD Digital Filter interrupt request */
    MSC0_IRQn                          = 140U,   /**<  MSC interrupt */
    MSC1_IRQn                          = 141U,   /**<  MSC interrupt */
    FlexCAN8_IRQn                      = 142U,   /**<  CAN6 Interrupt */
    FlexCAN9_IRQn                      = 143U,   /**<  CAN7 Interrupt */
    SENT0_IRQn                         = 144U,   /**<  SENT all interrupt (fast or slow) */
    SENT1_IRQn                         = 145U,   /**<  SENT all interrupt (fast or slow) */
    FCSPI6_IRQn                        = 146U,   /**<  FCSPI6 Interrupt */
    FCSPI7_IRQn                        = 147U,   /**<  FCSPI7 Interrupt */
    FCUART16_IRQn                      = 148U,   /**<  FCUART16 Transmit / Receive Interrupt */
    FCUART17_IRQn                      = 149U,   /**<  FCUART17 Transmit / Receive  Interrupt */
    CTI0_IRQn                          = 150U,   /**<  CTI Interrupt */
    CTI1_IRQn                          = 151U,   /**<  CTI Interrupt */
    CTI2_IRQn                          = 152U,   /**<  CTI Interrupt */
    CMU4_IRQn                          = 153U,   /**<  CMU4 Interrupt */
    IRQn_MAX                           = 154U
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
