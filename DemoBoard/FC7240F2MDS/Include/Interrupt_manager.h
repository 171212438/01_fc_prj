#ifndef _DRIVER_INTERRUPT_MANAGER_H_
#define _DRIVER_INTERRUPT_MANAGER_H_

#include "Mcu_CM7_Regs.h"

/*! @addtogroup interrupt_manager*/
/*! @{*/

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/* clang-format off */
/**< peripheral vector start */
#define FC7XXX_PERI_VECTOR_START             16U

/**< NVIC priority bits */
#define FC7XXX_NVIC_PRIO_BITS                3U

/** Interrupt Number Definitions */
/**< Number of interrupts in the Vector table */
#define NUMBER_OF_INT_VECTORS                170u

/**< peripheral interrupt start index in vector table, 0-15 is core interrupt */
#define DEVICE_VECTOR_NUMBER_STARTINDEX      16u

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

    /* FC7240F2MDSxxxxT1A Device specific interrupts */
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
    DMA_Error_IRQn                     = 16U,    /**< DMA error interrupt channels 0-63 */
    CPM_IRQn                           = 17U,    /**< FPU etc. interrupt */
    FC_IRQn                            = 18U,    /**< Flash Controller Command complete, time out etc. interrupt  */
    LVD_LVW_IRQn                       = 19U,    /**< HVD/LVD etc. interrupt */
    TMU_IRQn                           = 20U,    /**< Temperature Monitor Unit interrupt */
    WDOG0_IRQn                         = 21U,    /**< Interrupt request out before wdg0 reset out */
    WDOG1_IRQn                         = 22U,    /**< Interrupt request out before wdg1 reset out */
    FCSMU0_IRQn                        = 23U,    /**< Fault Control and Safety Manage Unit */
    STCU0_IRQn                         = 24U,    /**< Safety Control Unit interrupt */
    ERM_fault_IRQn                     = 25U,    /**< ERM single- or double-bit error interrupt */
    MAM0_IRQn                          = 26U,    /**< Matrix Access Monitor interrupt */
    RGM_Pre_IRQn                       = 27U,    /**< RGM pre-reset Interrupt */
    INTM0_IRQn                         = 28U,    /**< INTM0 timeout interrupt */
    ISM0_IRQn                          = 29U,    /**< ISM0 interrupt */
    MB_IRQn                            = 30U,    /**< Mail Box interrupt */
    SCG_IRQn                           = 31U,    /**< SCG bus interrupt request  */
    CMU0_IRQn                          = 32U,    /**< CMU0 interrupt */
    CMU1_IRQn                          = 33U,    /**< CMU1 interrupt */
    CMU2_IRQn                          = 34U,    /**< CMU2 interrupt */
    CMU3_IRQn                          = 35U,    /**< CMU3 interrupt */
    CMU4_IRQn                          = 36U,    /**< CMU4 interrupt */
    TSTMP0_IRQn                        = 37U,    /**< TimerStamp0 interrupt */
    TSTMP1_IRQn                        = 38U,    /**< TimerStamp1 interrupt */
    CORDIC_IRQn                        = 39U,    /**< CORDIC Accelerator interrupt */
    HSM0_ERR_IRQn                      = 40U,    /**< HSM error interrupt */
    FCPIT0_IRQn                        = 41U,    /**< FCPIT interrupt */
    RTC_IRQn                           = 42U,    /**< RTC alarm or seconds interrupt */
    AONTIMER_IRQn                      = 43U,    /**< AONTIMER interrupt request */
    SWI_IRQn                           = 44U,    /**< Software interrupt  */
    FREQM_IRQn                         = 45U,    /**< FREQM interrupt */
    ADC0_IRQn                          = 46U,    /**< ADC0 interrupt request */
    ADC1_IRQn                          = 47U,    /**< ADC1 interrupt request */
    PTIMER0_IRQn                       = 48U,    /**< PTIMER0 interrupt */
    PTIMER1_IRQn                       = 49U,    /**< PTIMER1 interrupt */
    FlexCAN0_IRQn                      = 50U,    /**< FLEXCAN0 interrupt */
    FlexCAN1_IRQn                      = 51U,    /**< FLEXCAN1 interrupt */
    FlexCAN2_IRQn                      = 52U,    /**< FLEXCAN2 interrupt */
    FlexCAN3_IRQn                      = 53U,    /**< FLEXCAN3 interrupt */
    FCIIC0_IRQn                        = 54U,    /**< FCIIC0 Interrupt */
    FCIIC1_IRQn                        = 55U,    /**< FCIIC1 Interrupt */
    FCSPI0_IRQn                        = 56U,    /**< FCSPI0 Interrupt */
    FCSPI1_IRQn                        = 57U,    /**< FCSPI1 Interrupt */
    FCSPI2_IRQn                        = 58U,    /**< FCSPI2 Interrupt */
    FCSPI3_IRQn                        = 59U,    /**< FCSPI3 Interrupt */
    FCSPI4_IRQn                        = 60U,    /**< FCSPI4 Interrupt */
    FCSPI5_IRQn                        = 61U,    /**< FCSPI5 Interrupt */
    FCUART0_IRQn                       = 62U,    /**< FCUART0 Interrupt */
    FCUART1_IRQn                       = 63U,    /**< FCUART1 Interrupt */
    FCUART2_IRQn                       = 64U,    /**< FCUART2 Interrupt */
    FCUART3_IRQn                       = 65U,    /**< FCUART3 Interrupt */
    FCUART4_IRQn                       = 66U,    /**< FCUART4 Interrupt */
    FCUART5_IRQn                       = 67U,    /**< FCUART5 Interrupt */
    FCUART6_IRQn                       = 68U,    /**< FCUART6 Interrupt */
    FCUART7_IRQn                       = 69U,    /**< FCUART7 Interrupt */
    FTU0_IRQn                          = 70U,    /**< FTU0 all source interrupt */
    FTU1_IRQn                          = 71U,    /**< FTU1 all source interrupt */
    FTU2_IRQn                          = 72U,    /**< FTU2 all source interrupt */
    FTU3_IRQn                          = 73U,    /**< FTU3 all source interrupt */
    FTU4_IRQn                          = 74U,    /**< FTU4 all source interrupt */
    FTU5_IRQn                          = 75U,    /**< FTU5 all source interrupt */
    FTU6_IRQn                          = 76U,    /**< FTU6 all source interrupt */
    FTU7_IRQn                          = 77U,    /**< FTU7 all source interrupt */
    CMP0_IRQn                          = 78U,    /**< CMP0 all source interrupt */
    CMP1_IRQn                          = 79U,    /**< CMP1 all source interrupt */
    PORTA_IRQn                         = 80U,    /**< Port A pin detect interrupt */
    PORTB_IRQn                         = 81U,    /**< Port B pin detect interrupt */
    PORTC_IRQn                         = 82U,    /**< Port C pin detect interrupt */
    PORTD_IRQn                         = 83U,    /**< Port D pin detect interrupt */
    PORTE_IRQn                         = 84U,    /**< Port E pin detect interrupt */
    MSC0_IRQn                          = 85U,    /**< MSC Interrupt */
    SENT0_IRQn                         = 86U,    /**< SENT all interrupt (fast or slow) */
    TPU0_CH0_7_IRQn                    = 87U,    /**< TPU0 CH0-7 interrupt */
    TPU0_CH8_15_IRQn                   = 88U,    /**< TPU0 CH8-15 interrupt */
    TPU0_CH16_23_IRQn                  = 89U,    /**< TPU0 CH16-23 interrupt */
    TPU0_CH24_31_IRQn                  = 90U,    /**< TPU0 CH24-31 interrupt */
    HSM0_IRQn                          = 91U,    /**< HSM crypto interrupt */
    IRQn_MAX                           = 92U
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
