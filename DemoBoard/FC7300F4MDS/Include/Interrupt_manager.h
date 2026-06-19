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
    NotAvail_IRQn                      = -128,  /**< Not available device specific interrupt */

    /* Core interrupts */
    NonMaskableInt_IRQn                = -14,   /**< Non Maskable Interrupt */
    HardFault_IRQn                     = -13,   /**< Cortex-M7 Hard Fault Interrupt */
    MemoryManagement_IRQn              = -12,   /**< Cortex-M7 Memory Management Interrupt */
    BusFault_IRQn                      = -11,   /**< Cortex-M7 Bus Fault Interrupt */
    UsageFault_IRQn                    = -10,   /**< Cortex-M7 Usage Fault Interrupt */
    SVCall_IRQn                        = -5,    /**< Cortex-M7 SV Call Interrupt */
    DebugMonitor_IRQn                  = -4,    /**< Cortex-M7 Debug Monitor Interrupt */
    PendSV_IRQn                        = -2,    /**< Cortex-M7 Pend SV Interrupt */
    SysTick_IRQn                       = -1,    /**< Cortex-M7 System Tick Interrupt */

    /* FC7300F4MDSxxxxT1C Device specific interrupts */
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
    DMA_Error_IRQn                     = 32U,    /**< DMA error interrupt channels 0-31 */
    CPM0_IRQn                          = 33U,    /**< FPU etc. interrupt */
    FC0_IRQn                           = 34U,    /**< Flash Controller Command complete, time out etc. interrupt */
    PMC0_IRQn                          = 35U,    /**< HVD/LVD etc. interrupt */
    TMU0_IRQn                          = 36U,    /**< Temperature Monitor Unit interrupt */
    WDOG0_IRQn                         = 37U,    /**< interrupt request out before wdg reset out */
    WDOG1_IRQn                         = 38U,    /**< interrupt request out before wdg reset out */
    FCSMU0_IRQn                        = 39U,    /**< Fault Control and Safety Manage Unit */
    STCU0_IRQn                         = 40U,    /**< Safety Control Unit interrupt */
    ERM0_IRQn                          = 41U,    /**< ERM single or double bit error interrupt */
    MAM0_IRQn                          = 42U,    /**< Matrix Access Monitor interrupt */
    MAM1_IRQn                          = 43U,    /**< Matrix Access Monitor interrupt */
    CTI0_IRQn                          = 44U,    /**< CTI Interrupt */
    CTI1_IRQn                          = 45U,    /**< CTI Interrupt */
    RGM0_Pre_IRQn                      = 46U,    /**< RGM pre-reset Interrupt */
    RGM0_Exit_IRQn                     = 47U,    /**< RGM other cpu exit reset Interrupt */
    INTM0_IRQn                         = 48U,    /**< INTM timeout interrupt */
    ISM0_IRQn                          = 49U,    /**< ISM0 interrupt */
    MB0_IRQn                           = 50U,    /**< Mail Box interrupt */
    SCG0_IRQn                          = 51U,    /**< SCG bus interrupt request */
    CMU0_IRQn                          = 52U,    /**< CMU0 interrupt */
    CMU1_IRQn                          = 53U,    /**< CMU1 interrupt */
    CMU2_IRQn                          = 54U,    /**< CMU2 interrupt */
    CMU3_IRQn                          = 55U,    /**< CMU3 interrupt */
    TSTMP0_IRQn                        = 56U,    /**< TimerStamp interrupt */
    TSTMP1_IRQn                        = 57U,    /**< TimerStamp interrupt */
    TSTMP2_IRQn                        = 58U,    /**< TimerStamp interrupt */
    CMU4_IRQn                          = 59U,    /**< CMU4 interrupt */
    CORDIC0_IRQn                       = 60U,    /**< CORDIC Accelerator interrupt */
    HSM0_Error_IRQn                    = 61U,    /**< HSM error interrupt */
    FCPIT0_IRQn                        = 62U,    /**< FCPIT interrupt */
    RTC0_IRQn                          = 63U,    /**< RTC alarm or seconds interrupt */
    AONTIMER0_IRQn                     = 64U,    /**< AONTIMER interrupt request */
    SWI_IRQn                           = 65U,    /**< Software interrupt */
    FREQM0_IRQn                        = 66U,    /**< FREQM interrupt */
    PORTA_IRQn                         = 67U,    /**< PORTA Interrupt */
    PORTB_IRQn                         = 68U,    /**< PORTB Interrupt */
    PORTC_IRQn                         = 69U,    /**< PORTC Interrupt */
    PORTD_IRQn                         = 70U,    /**< PORTD Interrupt */
    PORTE_IRQn                         = 71U,    /**< PORTE Interrupt */
    PORTF_IRQn                         = 72U,    /**< PORTF Interrupt */
    PORTG_IRQn                         = 73U,    /**< PORTG Interrupt */
    PORTH_IRQn                         = 74U,    /**< PORTH Interrupt */
    PORTI_IRQn                         = 75U,    /**< PORTI Interrupt */
    FlexCAN0_IRQn                      = 76U,    /**< FLEXCAN interrupt */
    FlexCAN0_ERROR_IRQn                = 77U,    /**< FLEXCAN Error interrupt */
    FlexCAN1_IRQn                      = 78U,    /**< FLEXCAN interrupt */
    FlexCAN1_ERROR_IRQn                = 79U,    /**< FLEXCAN Error interrupt */
    FlexCAN2_IRQn                      = 80U,    /**< FLEXCAN interrupt */
    FlexCAN2_ERROR_IRQn                = 81U,    /**< FLEXCAN Error interrupt */
    FlexCAN3_IRQn                      = 82U,    /**< FLEXCAN interrupt */
    FlexCAN3_ERROR_IRQn                = 83U,    /**< FLEXCAN Error interrupt */
    FlexCAN4_IRQn                      = 84U,    /**< FLEXCAN interrupt */
    FlexCAN4_ERROR_IRQn                = 85U,    /**< FLEXCAN Error interrupt */
    FlexCAN5_IRQn                      = 86U,    /**< FLEXCAN interrupt */
    FlexCAN5_ERROR_IRQn                = 87U,    /**< FLEXCAN Error interrupt */
    FCIIC0_IRQn                        = 88U,    /**< FCIIC Interrupt */
    FCIIC1_IRQn                        = 89U,    /**< FCIIC Interrupt */
    FCSPI0_IRQn                        = 90U,    /**< FCSPI Interrupt */
    FCSPI1_IRQn                        = 91U,    /**< FCSPI Interrupt */
    FCSPI2_IRQn                        = 92U,    /**< FCSPI Interrupt */
    FCSPI3_IRQn                        = 93U,    /**< FCSPI Interrupt */
    FCSPI4_IRQn                        = 94U,    /**< FCSPI Interrupt */
    FCSPI5_IRQn                        = 95U,    /**< FCSPI Interrupt */
    FCUART0_IRQn                       = 96U,    /**< FCUART Interrupt */
    FCUART1_IRQn                       = 97U,    /**< FCUART Interrupt */
    FCUART2_IRQn                       = 98U,    /**< FCUART Interrupt */
    FCUART3_IRQn                       = 99U,    /**< FCUART Interrupt */
    FCUART4_IRQn                       = 100U,   /**< FCUART Interrupt */
    FCUART5_IRQn                       = 101U,   /**< FCUART Interrupt */
    FCUART6_IRQn                       = 102U,   /**< FCUART Interrupt */
    FCUART7_IRQn                       = 103U,   /**< FCUART Interrupt */
    FTU0_IRQn                          = 104U,   /**< FTU all source interrupt */
    FTU1_IRQn                          = 105U,   /**< FTU all source interrupt */
    FTU2_IRQn                          = 106U,   /**< FTU all source interrupt */
    FTU3_IRQn                          = 107U,   /**< FTU all source interrupt */
    FTU4_IRQn                          = 108U,   /**< FTU all source interrupt */
    FTU5_IRQn                          = 109U,   /**< FTU all source interrupt */
    ADC0_IRQn                          = 110U,   /**< ADC interrupt request */
    ADC1_IRQn                          = 111U,   /**< ADC interrupt request */
    ADC2_IRQn                          = 112U,   /**< ADC interrupt request */
    ADC3_IRQn                          = 113U,   /**< ADC interrupt request */
    PTIMER0_IRQn                       = 114U,   /**< PTIMER interrupt */
    PTIMER1_IRQn                       = 115U,   /**< PTIMER interrupt */
    PTIMER2_IRQn                       = 116U,   /**< PTIMER interrupt */
    MSC0_IRQn                          = 117U,   /**< MSC interrupt */
    SENT0_IRQn                         = 118U,   /**< SENT all interrupt (fast or slow) */
    SENT1_IRQn                         = 119U,   /**< SENT all interrupt (fast or slow) */
    SSI0_IRQn                          = 120U,   /**< SSI interrupt OR interrupt */
    LU0_IRQn                           = 121U,   /**< LU interrupt */
    LU1_IRQn                           = 122U,   /**< LU interrupt */
    HSM0_Crypto_IRQn                   = 123U,   /**< Crypto interrupt */
    EFTU0_Error_IRQn                   = 124U,   /**< eFTU all error source interrupt */
    EFTU0_TIM0_3_IRQn                  = 125U,   /**< eFTU TIM 0-3 source interrupt */
    EFTU0_TIM4_7_IRQn                  = 126U,   /**< eFTU TIM 4-7 source interrupt */
    EFTU0_TOM0_7_IRQn                  = 127U,   /**< eFTU TOM 0-7 source interrupt */
    EFTU0_TOM8_15_IRQn                 = 128U,   /**< eFTU TOM 8-15 source interrupt */

    IRQn_MAX                           = 129U
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
