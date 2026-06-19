/* ================================================================================================== */
/*    BRIEF             : Startup - Startup file for FC7300                                           */
/*    PERIPHERAL        : N/A                                                                         */
/*    PLATFORM          : Flagchip FC7300                                                             */
/*    SOFTWARE VERSION  : 0.2.0                                                                       */
/*    VENDOR            : Flagchip                                                                    */
/*    Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.                                           */
/*    All Rights Reserved.                                                                            */
/* ================================================================================================== */
/* ================================================================================================== */
/*    Revision History                                                                                */
/*    Version     Date          Initials      CR#          Descriptions                               */
/*    ---------   ----------    ------------- ----------   ---------------                            */
/*    0.1.0       14/06/2023    qxw0030       N/A          Initial version                            */
/*    0.2.0       14/11/2023    qxw0038       N/A          Update Multicore adapt                     */
/* ================================================================================================== */

    .syntax unified
    .arch armv7-m

    .extern   __stack_top_core1
    .extern   NMI_Handler
    .extern   HardFault_Handler
    .extern   MemManage_Handler
    .extern   BusFault_Handler
    .extern   UsageFault_Handler
    .extern   SVC_Handler
    .extern   DebugMon_Handler
    .extern   PendSV_Handler
    .extern   SysTick_Handler
    .extern   DMA0_IRQHandler
    .extern   DMA1_IRQHandler
    .extern   DMA2_IRQHandler
    .extern   DMA3_IRQHandler
    .extern   DMA4_IRQHandler
    .extern   DMA5_IRQHandler
    .extern   DMA6_IRQHandler
    .extern   DMA7_IRQHandler
    .extern   DMA8_IRQHandler
    .extern   DMA9_IRQHandler
    .extern   DMA10_IRQHandler
    .extern   DMA11_IRQHandler
    .extern   DMA12_IRQHandler
    .extern   DMA13_IRQHandler
    .extern   DMA14_IRQHandler
    .extern   DMA15_IRQHandler
    .extern   DMA16_IRQHandler
    .extern   DMA17_IRQHandler
    .extern   DMA18_IRQHandler
    .extern   DMA19_IRQHandler
    .extern   DMA20_IRQHandler
    .extern   DMA21_IRQHandler
    .extern   DMA22_IRQHandler
    .extern   DMA23_IRQHandler
    .extern   DMA24_IRQHandler
    .extern   DMA25_IRQHandler
    .extern   DMA26_IRQHandler
    .extern   DMA27_IRQHandler
    .extern   DMA28_IRQHandler
    .extern   DMA29_IRQHandler
    .extern   DMA30_IRQHandler
    .extern   DMA31_IRQHandler
    .extern   DMA_Error_IRQHandler
    .extern   CPM_IRQHandler
    .extern   FC_IRQHandler
    .extern   PMC_IRQHandler
    .extern   TMU_IRQHandler
    .extern   WDOG0_IRQHandler
    .extern   WDOG1_IRQHandler
    .extern   WDOG2_IRQHandler
    .extern   FCSMU0_IRQHandler
    .extern   STCU0_IRQHandler
    .extern   ERM_fault_IRQHandler
    .extern   MAM0_IRQHandler
    .extern   MAM1_IRQHandler
    .extern   WDOG3_IRQHandler
    .extern   RESERVED_62_IRQHandler
    .extern   RGM_Pre_IRQHandler
    .extern   RGM_Other_IRQHandler
    .extern   INTM0_IRQHandler
    .extern   ISM0_IRQHandler
    .extern   MB_IRQHandler
    .extern   SCG_IRQHandler
    .extern   CMU0_IRQHandler
    .extern   CMU1_IRQHandler
    .extern   CMU2_IRQHandler
    .extern   CMU3_IRQHandler
    .extern   TSTMP0_IRQHandler
    .extern   TSTMP1_IRQHandler
    .extern   TSTMP2_IRQHandler
    .extern   TSTMP3_IRQHandler
    .extern   CORDIC_IRQHandler
    .extern   HSM0_IRQHandler
    .extern   FCPIT0_IRQHandler
    .extern   FCPIT1_IRQHandler
    .extern   RTC_IRQHandler
    .extern   ENET_Tx0_IRQHandler
    .extern   ENET_Tx1_IRQHandler
    .extern   ENET_Rx0_IRQHandler
    .extern   ENET_Rx1_IRQHandler
    .extern   ENET_System_IRQHandler
    .extern   AONTIMER_IRQHandler
    .extern   SWI_IRQHandler
    .extern   TSTMP4_IRQHandler
    .extern   FREQM_IRQHandler
    .extern   PORTA_IRQHandler
    .extern   PORTB_IRQHandler
    .extern   PORTC_IRQHandler
    .extern   PORTD_IRQHandler
    .extern   PORTE_IRQHandler
    .extern   PORTF_IRQHandler
    .extern   PORTG_IRQHandler
    .extern   PORTH_IRQHandler
    .extern   PORTI_IRQHandler
    .extern   Can_IsrCAN0_All
    .extern   Can_IsrCAN1_All
    .extern   Can_IsrCAN2_All
    .extern   Can_IsrCAN3_All
    .extern   Can_IsrCAN4_All
    .extern   Can_IsrCAN5_All
    .extern   Can_IsrCAN6_All
    .extern   Can_IsrCAN7_All
    .extern   FCIIC0_IRQHandler
    .extern   FCIIC1_IRQHandler
    .extern   FCSPI0_IRQHandler
    .extern   FCSPI1_IRQHandler
    .extern   FCSPI2_IRQHandler
    .extern   FCSPI3_IRQHandler
    .extern   FCSPI4_IRQHandler
    .extern   FCSPI5_IRQHandler
    .extern   FCUART0_RxTx_IRQHandler
    .extern   FCUART1_RxTx_IRQHandler
    .extern   FCUART2_RxTx_IRQHandler
    .extern   FCUART3_RxTx_IRQHandler
    .extern   FCUART4_RxTx_IRQHandler
    .extern   FCUART5_RxTx_IRQHandler
    .extern   FCUART6_RxTx_IRQHandler
    .extern   FCUART7_RxTx_IRQHandler
    .extern   FCUART8_RxTx_IRQHandler
    .extern   FCUART9_RxTx_IRQHandler
    .extern   FCUART10_RxTx_IRQHandler
    .extern   FCUART11_RxTx_IRQHandler
    .extern   FCUART12_RxTx_IRQHandler
    .extern   FCUART13_RxTx_IRQHandler
    .extern   Can_IsrCAN12_All
    .extern   Can_IsrCAN13_All
    .extern   FTU0_IRQHandler
    .extern   FTU1_IRQHandler
    .extern   FTU2_IRQHandler
    .extern   FTU3_IRQHandler
    .extern   FTU4_IRQHandler
    .extern   FTU5_IRQHandler
    .extern   FTU6_IRQHandler
    .extern   FTU7_IRQHandler
    .extern   HSADC0_IRQHandler
    .extern   HSADC1_IRQHandler
    .extern   HSADC2_IRQHandler
    .extern   HSADC3_IRQHandler
    .extern   CMP0_IRQHandler
    .extern   RESERVED_145_IRQHandler
    .extern   ADC4_IRQHandler
    .extern   ADC0_IRQHandler
    .extern   ADC1_IRQHandler
    .extern   ADC2_IRQHandler
    .extern   ADC3_IRQHandler
    .extern   PTIMER0_IRQHandler
    .extern   PTIMER1_IRQHandler
    .extern   PTIMER2_IRQHandler
    .extern   PTIMER3_IRQHandler
    .extern   ADC5_IRQHandler
    .extern   MSC0_IRQHandler
    .extern   MSC1_IRQHandler
    .extern   Can_IsrCAN8_All
    .extern   Can_IsrCAN9_All
    .extern   SENT0_IRQHandler
    .extern   SENT1_IRQHandler
    .extern   FCSPI6_IRQHandler
    .extern   FCSPI7_IRQHandler
    .extern   Can_IsrCAN10_All
    .extern   Can_IsrCAN11_All
    .extern   CTI0_IRQHandler
    .extern   CTI1_IRQHandler
    .extern   CTI2_IRQHandler
    .extern   CMU4_IRQHandler
    .extern   CTI3_IRQHandler
    .extern   SSI_IRQHandler
    .extern   SDADC0_0_IRQHandler
    .extern   SDADC0_1_IRQHandler
    .extern   SDADC0_2_IRQHandler
    .extern   SDADC1_0_IRQHandler
    .extern   SDADC1_1_IRQHandler
    .extern   SDADC1_2_IRQHandler
    .extern   EFTU0_Error_IRQHandler
    .extern   EFTU1_Error_IRQHandler
    .extern   EFTU2_Error_IRQHandler
    .extern   EFTU0_TIM_0_3_IRQHandler
    .extern   EFTU1_TIM_0_3_IRQHandler
    .extern   EFTU2_TIM_0_3_IRQHandler
    .extern   EFTU0_TIM_4_7_IRQHandler
    .extern   EFTU1_TIM_4_7_IRQHandler
    .extern   EFTU2_TIM_4_7_IRQHandler
    .extern   EFTU0_TOM_0_7_IRQHandler
    .extern   EFTU1_TOM_0_7_IRQHandler
    .extern   EFTU2_TOM_0_7_IRQHandler
    .extern   EFTU0_TOM_8_15_IRQHandler
    .extern   EFTU1_TOM_8_15_IRQHandler
    .extern   EFTU2_TOM_8_15_IRQHandler
    .extern   CAN0_Error_IRQHandler
    .extern   CAN1_Error_IRQHandler
    .extern   CAN2_Error_IRQHandler
    .extern   CAN3_Error_IRQHandler
    .extern   CAN4_Error_IRQHandler
    .extern   CAN5_Error_IRQHandler
    .extern   CAN6_Error_IRQHandler
    .extern   CAN7_Error_IRQHandler
    .extern   CAN8_Error_IRQHandler
    .extern   CAN9_Error_IRQHandler
    .extern   CAN10_Error_IRQHandler
    .extern   CAN11_Error_IRQHandler
    .extern   CAN12_Error_IRQHandler
    .extern   CAN13_Error_IRQHandler
    .extern   QDT0_IRQHandler
    .extern   QDT1_IRQHandler
    .extern   QDT2_IRQHandler
    .extern   QDT3_IRQHandler
    .extern   LU0_IRQHandler
    .extern   LU1_IRQHandler
    .extern   TPU0_CH0_7_IRQHandler
    .extern   TPU0_CH8_15_IRQHandler
    .extern   TPU0_CH16_23_IRQHandler
    .extern   TPU0_CH24_31_IRQHandler
    .extern   HSM0_CRYPTO_IRQHandler
    .extern   DefaultISR

/* ================================================================================================== */
/*                                        Set vector table                                            */
/* ================================================================================================== */
    .section .isr_vector_core1, "a"
    .align 2

    /* vector table */
__isr_vector_core1:
    .long   __stack_top_core1                               /* Top of Stack */
    .long   Reset_Handler_Core1                             /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler */
    .long   HardFault_Handler                               /* Hard Fault Handler */
    .long   MemManage_Handler                               /* MPU Fault Handler */
    .long   BusFault_Handler                                /* Bus Fault Handler */
    .long   UsageFault_Handler                              /* Usage Fault Handler */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   SVC_Handler                                     /* SVCall Handler */
    .long   DebugMon_Handler                                /* Debug Monitor Handler */
    .long   0                                               /* Reserved */
    .long   PendSV_Handler                                  /* PendSV Handler */
    .long   SysTick_Handler                                 /* SysTick Handler */

                                                            /* External Interrupts*/
    .long   DMA0_IRQHandler                                 /*  DMA channel 0 transfer complete */
    .long   DMA1_IRQHandler                                 /*  DMA channel 1 transfer complete */
    .long   DMA2_IRQHandler                                 /*  DMA channel 2 transfer complete */
    .long   DMA3_IRQHandler                                 /*  DMA channel 3 transfer complete */
    .long   DMA4_IRQHandler                                 /*  DMA channel 4 transfer complete */
    .long   DMA5_IRQHandler                                 /*  DMA channel 5 transfer complete */
    .long   DMA6_IRQHandler                                 /*  DMA channel 6 transfer complete */
    .long   DMA7_IRQHandler                                 /*  DMA channel 7 transfer complete */
    .long   DMA8_IRQHandler                                 /*  DMA channel 8 transfer complete */
    .long   DMA9_IRQHandler                                 /*  DMA channel 9 transfer complete */
    .long   DMA10_IRQHandler                                /*  DMA channel 10 transfer complete */
    .long   DMA11_IRQHandler                                /*  DMA channel 11 transfer complete */
    .long   DMA12_IRQHandler                                /*  DMA channel 12 transfer complete */
    .long   DMA13_IRQHandler                                /*  DMA channel 13 transfer complete */
    .long   DMA14_IRQHandler                                /*  DMA channel 14 transfer complete */
    .long   DMA15_IRQHandler                                /*  DMA channel 15 transfer complete */
    .long   DMA16_IRQHandler                                /*  DMA channel 16 transfer complete */
    .long   DMA17_IRQHandler                                /*  DMA channel 17 transfer complete */
    .long   DMA18_IRQHandler                                /*  DMA channel 18 transfer complete */
    .long   DMA19_IRQHandler                                /*  DMA channel 19 transfer complete */
    .long   DMA20_IRQHandler                                /*  DMA channel 20 transfer complete */
    .long   DMA21_IRQHandler                                /*  DMA channel 21 transfer complete */
    .long   DMA22_IRQHandler                                /*  DMA channel 22 transfer complete */
    .long   DMA23_IRQHandler                                /*  DMA channel 23 transfer complete */
    .long   DMA24_IRQHandler                                /*  DMA channel 24 transfer complete */
    .long   DMA25_IRQHandler                                /*  DMA channel 25 transfer complete */
    .long   DMA26_IRQHandler                                /*  DMA channel 26 transfer complete */
    .long   DMA27_IRQHandler                                /*  DMA channel 27 transfer complete */
    .long   DMA28_IRQHandler                                /*  DMA channel 28 transfer complete */
    .long   DMA29_IRQHandler                                /*  DMA channel 29 transfer complete */
    .long   DMA30_IRQHandler                                /*  DMA channel 30 transfer complete */
    .long   DMA31_IRQHandler                                /*  DMA channel 31 transfer complete */
    .long   DMA_Error_IRQHandler                            /*  DMA error interrupt channels 0-63 */
    .long   CPM_IRQHandler                                  /*  FPU etc. interrupt */
    .long   FC_IRQHandler                                   /*  FC Command complete */
    .long   PMC_IRQHandler                                  /*  PMC Low voltage detect interrupt */
    .long   TMU_IRQHandler                                  /*  Temperature Monitor Unit interrupt */
    .long   WDOG0_IRQHandler                                /*  interrupt request out before wdg reset out */
    .long   WDOG1_IRQHandler                                /*  interrupt request out before wdg reset out */
    .long   WDOG2_IRQHandler                                /*  interrupt request out before wdg reset out */
    .long   FCSMU0_IRQHandler                               /*  Fault Control and Safety Manage Unit */
    .long   STCU0_IRQHandler                                /*  Safety Control Unit interrupt */
    .long   ERM_fault_IRQHandler                            /*  ERM single/double bit error correction */
    .long   MAM0_IRQHandler                                 /*  Matrix Access Monitor interrupt */
    .long   MAM1_IRQHandler                                 /*  Matrix Access Monitor interrupt */
    .long   WDOG3_IRQHandler                                /*  interrupt request out before wdg reset out */
    .long   RESERVED_62_IRQHandler                          /*  Reserved */
    .long   RGM_Pre_IRQHandler                              /*  RGM pre-reset Interrupt */
    .long   RGM_Other_IRQHandler                            /*  RGM other CPU exit reset Interrupt */
    .long   INTM0_IRQHandler                                /*  INTM alarm interrupt */
    .long   ISM0_IRQHandler                                 /*  ISM0 interrupt */
    .long   MB_IRQHandler                                   /*  Mail Box interrupt */
    .long   SCG_IRQHandler                                  /*  SCG bus interrupt request */
    .long   CMU0_IRQHandler                                 /*  CMU0 interrupt */
    .long   CMU1_IRQHandler                                 /*  CMU1 interrupt */
    .long   CMU2_IRQHandler                                 /*  CMU2 interrupt */
    .long   CMU3_IRQHandler                                 /*  CMU3 interrupt */
    .long   TSTMP0_IRQHandler                               /*  TimerStamp0 interrupt */
    .long   TSTMP1_IRQHandler                               /*  TimerStamp1 interrupt */
    .long   TSTMP2_IRQHandler                               /*  TimerStamp2 interrupt */
    .long   TSTMP3_IRQHandler                               /*  TimerStamp3 interrupt */
    .long   CORDIC_IRQHandler                               /*  CORDIC Accelerator interrupt */
    .long   HSM0_IRQHandler                                 /*  Crypto interrupt */
    .long   FCPIT0_IRQHandler                               /*  FCPIT0 interrupt */
    .long   FCPIT1_IRQHandler                               /*  FCPIT0 interrupt */
    .long   RTC_IRQHandler                                  /*  RTC alarm or seconds interrupt  */
    .long   ENET_Tx0_IRQHandler                             /*  ENET TX channel 0 interrupt */
    .long   ENET_Tx1_IRQHandler                             /*  ENET TX channel 1 interrupt */
    .long   ENET_Rx0_IRQHandler                             /*  ENET RX channel 0 interrupt */
    .long   ENET_Rx1_IRQHandler                             /*  ENET RX channel 1 interrupt 0 */
    .long   ENET_System_IRQHandler                          /*  ENET System interrupt  */
    .long   AONTIMER_IRQHandler                             /*  AONTIMER interrupt request */
    .long   SWI_IRQHandler                                  /*  Software interrupt */
    .long   TSTMP4_IRQHandler                               /*  TimerStamp4 interrupt */
    .long   FREQM_IRQHandler                                /*  FREQM interrupt */
    .long   PORTA_IRQHandler                                /*  Port A pin detect interrupt */
    .long   PORTB_IRQHandler                                /*  Port B pin detect interrupt */
    .long   PORTC_IRQHandler                                /*  Port C pin detect interrupt */
    .long   PORTD_IRQHandler                                /*  Port D pin detect interrupt */
    .long   PORTE_IRQHandler                                /*  Port E pin detect interrupt */
    .long   PORTF_IRQHandler                                /*  Port F pin detect interrupt */
    .long   PORTG_IRQHandler                                /*  Port G pin detect interrupt */
    .long   PORTH_IRQHandler                                /*  Port H pin detect interrupt */
    .long   PORTI_IRQHandler                                /*  Port I pin detect interrupt */
    .long   Can_IsrCAN0_All                                 /*  CAN0 Interrupt */
    .long   Can_IsrCAN1_All                                 /*  CAN1 Interrupt */
    .long   Can_IsrCAN2_All                                 /*  CAN2 Interrupt */
    .long   Can_IsrCAN3_All                                 /*  CAN3 Interrupt */
    .long   Can_IsrCAN4_All                                 /*  CAN4 Interrupt */
    .long   Can_IsrCAN5_All                                 /*  CAN5 Interrupt */
    .long   Can_IsrCAN6_All                                 /*  CAN6 Interrupt */
    .long   Can_IsrCAN7_All                                 /*  CAN7 Interrupt */
    .long   FCIIC0_IRQHandler                               /*  FCIIC0 Interrupt */
    .long   FCIIC1_IRQHandler                               /*  FCIIC1 Interrupt */
    .long   FCSPI0_IRQHandler                               /*  FCSPI0 Interrupt */
    .long   FCSPI1_IRQHandler                               /*  FCSPI1 Interrupt */
    .long   FCSPI2_IRQHandler                               /*  FCSPI2 Interrupt */
    .long   FCSPI3_IRQHandler                               /*  FCSPI0 Interrupt */
    .long   FCSPI4_IRQHandler                               /*  FCSPI1 Interrupt */
    .long   FCSPI5_IRQHandler                               /*  FCSPI2 Interrupt */
    .long   FCUART0_RxTx_IRQHandler                         /*  FCUART0 Transmit / Receive Interrupt */
    .long   FCUART1_RxTx_IRQHandler                         /*  FCUART1 Transmit / Receive  Interrupt */
    .long   FCUART2_RxTx_IRQHandler                         /*  FCUART2 Transmit / Receive  Interrupt */
    .long   FCUART3_RxTx_IRQHandler                         /*  FCUART3 Transmit / Receive Interrupt */
    .long   FCUART4_RxTx_IRQHandler                         /*  FCUART4 Transmit / Receive  Interrupt */
    .long   FCUART5_RxTx_IRQHandler                         /*  FCUART5 Transmit / Receive  Interrupt */
    .long   FCUART6_RxTx_IRQHandler                         /*  FCUART6 Transmit / Receive Interrupt */
    .long   FCUART7_RxTx_IRQHandler                         /*  FCUART7 Transmit / Receive  Interrupt */
    .long   FCUART8_RxTx_IRQHandler                         /*  FCUART8 Transmit / Receive  Interrupt */
    .long   FCUART9_RxTx_IRQHandler                         /*  FCUART9 Transmit / Receive Interrupt */
    .long   FCUART10_RxTx_IRQHandler                        /*  FCUART10 Transmit / Receive  Interrupt */
    .long   FCUART11_RxTx_IRQHandler                        /*  FCUART11 Transmit / Receive  Interrupt */
    .long   FCUART12_RxTx_IRQHandler                        /*  FCUART12 Transmit / Receive  Interrupt */
    .long   FCUART13_RxTx_IRQHandler                        /*  FCUART13 Transmit / Receive  Interrupt */
    .long   Can_IsrCAN12_All                                /*  CAN12 Interrupt */
    .long   Can_IsrCAN13_All                                /*  CAN13 Interrupt */
    .long   FTU0_IRQHandler                                 /*  FTU0 all source interrupt */
    .long   FTU1_IRQHandler                                 /*  FTU1 all source interrupt */
    .long   FTU2_IRQHandler                                 /*  FTU2 all source interrupt */
    .long   FTU3_IRQHandler                                 /*  FTU3 all source interrupt */
    .long   FTU4_IRQHandler                                 /*  FTU4 all source interrupt */
    .long   FTU5_IRQHandler                                 /*  FTU5 all source interrupt */
    .long   FTU6_IRQHandler                                 /*  FTU6 all source interrupt */
    .long   FTU7_IRQHandler                                 /*  FTU7 all source interrupt */
    .long   HSADC0_IRQHandler                               /*  HSADC0 interrupt request */
    .long   HSADC1_IRQHandler                               /*  HSADC1 interrupt request */
    .long   HSADC2_IRQHandler                               /*  HSADC2 interrupt request */
    .long   HSADC3_IRQHandler                               /*  HSADC3 interrupt request */
    .long   CMP0_IRQHandler                                 /*  CMP0 interrupt request  */
    .long   RESERVED_145_IRQHandler                         /*  Reserved  */
    .long   ADC4_IRQHandler                                 /*  ADC4 interrupt request  */
    .long   ADC0_IRQHandler                                 /*  ADC0 interrupt request. */
    .long   ADC1_IRQHandler                                 /*  ADC1 interrupt request. */
    .long   ADC2_IRQHandler                                 /*  ADC2 interrupt request. */
    .long   ADC3_IRQHandler                                 /*  ADC3 interrupt request. */
    .long   PTIMER0_IRQHandler                              /*  PTIMER0 interrupt */
    .long   PTIMER1_IRQHandler                              /*  PTIMER1 interrupt */
    .long   PTIMER2_IRQHandler                              /*  PTIMER2 interrupt */
    .long   PTIMER3_IRQHandler                              /*  PTIMER3 interrupt */
    .long   ADC5_IRQHandler                                 /*  ADC5 interrupt request */
    .long   MSC0_IRQHandler                                 /*  MSC interrupt */
    .long   MSC1_IRQHandler                                 /*  MSC interrupt */
    .long   Can_IsrCAN8_All                                 /*  CAN6 Interrupt */
    .long   Can_IsrCAN9_All                                 /*  CAN7 Interrupt */
    .long   SENT0_IRQHandler                                /*  SENT all interrupt (fast or slow) */
    .long   SENT1_IRQHandler                                /*  SENT all interrupt (fast or slow) */
    .long   FCSPI6_IRQHandler                               /*  FCSPI6 Interrupt */
    .long   FCSPI7_IRQHandler                               /*  FCSPI7 Interrupt */
    .long   Can_IsrCAN10_All                                /*  CAN10 Interrupt */
    .long   Can_IsrCAN11_All                                /*  CAN11 Interrupt */
    .long   CTI0_IRQHandler                                 /*  CTI Interrupt */
    .long   CTI1_IRQHandler                                 /*  CTI Interrupt */
    .long   CTI2_IRQHandler                                 /*  CTI Interrupt */
    .long   CMU4_IRQHandler                                 /*  CMU4 Interrupt */
    .long   CTI3_IRQHandler                                 /*  CTI Interrupt */
    .long   SSI_IRQHandler                                  /*  SSI0 Interrupt ORed interrupt */
    .long   SDADC0_0_IRQHandler                             /*  SDADC0 channel 0 Interrupt */
    .long   SDADC0_1_IRQHandler                             /*  SDADC0 channel 1 Interrupt */
    .long   SDADC0_2_IRQHandler                             /*  SDADC0 channel 2 Interrupt */
    .long   SDADC1_0_IRQHandler                             /*  SDADC1 channel 0 Interrupt */
    .long   SDADC1_1_IRQHandler                             /*  SDADC1 channel 1 Interrupt */
    .long   SDADC1_2_IRQHandler                             /*  SDADC1 channel 2 Interrupt */
    .long   EFTU0_Error_IRQHandler                          /*  eFTU0 Error Interrupt */
    .long   EFTU1_Error_IRQHandler                          /*  eFTU1 Error Interrupt */
    .long   EFTU2_Error_IRQHandler                          /*  eFTU2 Error Interrupt */
    .long   EFTU0_TIM_0_3_IRQHandler                        /*  eFTU0 TIM 0-3 source Interrupt */
    .long   EFTU1_TIM_0_3_IRQHandler                        /*  eFTU1 TIM 0-3 source Interrupt */
    .long   EFTU2_TIM_0_3_IRQHandler                        /*  eFTU2 TIM 0-3 source Interrupt */
    .long   EFTU0_TIM_4_7_IRQHandler                        /*  eFTU0 TIM 4-7 source Interrupt */
    .long   EFTU1_TIM_4_7_IRQHandler                        /*  eFTU1 TIM 4-7 source Interrupt */
    .long   EFTU2_TIM_4_7_IRQHandler                        /*  eFTU2 TIM 4-7 source Interrupt */
    .long   EFTU0_TOM_0_7_IRQHandler                        /*  eFTU0 TOM 0-7 source Interrupt */
    .long   EFTU1_TOM_0_7_IRQHandler                        /*  eFTU1 TOM 0-7 source Interrupt */
    .long   EFTU2_TOM_0_7_IRQHandler                        /*  eFTU2 TOM 0-7 source Interrupt */
    .long   EFTU0_TOM_8_15_IRQHandler                       /*  eFTU0 TOM 8-15 source Interrupt */
    .long   EFTU1_TOM_8_15_IRQHandler                       /*  eFTU1 TOM 8-15 source Interrupt */
    .long   EFTU2_TOM_8_15_IRQHandler                       /*  eFTU2 TOM 8-15 source Interrupt */
    .long   CAN0_Error_IRQHandler                           /*  CAN0 error Interrupt */
    .long   CAN1_Error_IRQHandler                           /*  CAN1 error Interrupt */
    .long   CAN2_Error_IRQHandler                           /*  CAN2 error Interrupt */
    .long   CAN3_Error_IRQHandler                           /*  CAN3 error Interrupt */
    .long   CAN4_Error_IRQHandler                           /*  CAN4 error Interrupt */
    .long   CAN5_Error_IRQHandler                           /*  CAN5 error Interrupt */
    .long   CAN6_Error_IRQHandler                           /*  CAN6 error Interrupt */
    .long   CAN7_Error_IRQHandler                           /*  CAN7 error Interrupt */
    .long   CAN8_Error_IRQHandler                           /*  CAN8 error Interrupt */
    .long   CAN9_Error_IRQHandler                           /*  CAN9 error Interrupt */
    .long   CAN10_Error_IRQHandler                          /*  CAN10 error Interrupt */
    .long   CAN11_Error_IRQHandler                          /*  CAN11 error Interrupt */
    .long   CAN12_Error_IRQHandler                          /*  CAN12 error Interrupt */
    .long   CAN13_Error_IRQHandler                          /*  CAN13 error Interrupt */
    .long   QDT0_IRQHandler                                 /*  QDT0 Interrupt */
    .long   QDT1_IRQHandler                                 /*  QDT1 Interrupt */
    .long   QDT2_IRQHandler                                 /*  QDT2 Interrupt */
    .long   QDT3_IRQHandler                                 /*  QDT3 Interrupt */
    .long   LU0_IRQHandler                                  /*  LU0 Interrupt */
    .long   LU1_IRQHandler                                  /*  LU1 Interrupt */
    .long   TPU0_CH0_7_IRQHandler                           /*  TPU0 CH0-7 interrupt */
    .long   TPU0_CH8_15_IRQHandler                          /*  TPU0 CH8-15 interrupt */
    .long   TPU0_CH16_23_IRQHandler                         /*  TPU0 CH16-23 interrupt */
    .long   TPU0_CH24_31_IRQHandler                         /*  TPU0 CH24-31 interrupt */
    .long   HSM0_CRYPTO_IRQHandler                          /*  HSM crypto interrupt */
    .long   DefaultISR                                      /* 218 */
    .long   DefaultISR                                      /* 219 */
    .long   DefaultISR                                      /* 220 */
    .long   DefaultISR                                      /* 221 */
    .long   DefaultISR                                      /* 222 */
    .long   DefaultISR                                      /* 223 */
    .long   DefaultISR                                      /* 224 */
    .long   DefaultISR                                      /* 225 */
    .long   DefaultISR                                      /* 226 */
    .long   DefaultISR                                      /* 227 */
    .long   DefaultISR                                      /* 228 */
    .long   DefaultISR                                      /* 229 */
    .long   DefaultISR                                      /* 230 */
    .long   DefaultISR                                      /* 231 */
    .long   DefaultISR                                      /* 232 */
    .long   DefaultISR                                      /* 233 */
    .long   DefaultISR                                      /* 234 */
    .long   DefaultISR                                      /* 235 */
    .long   DefaultISR                                      /* 236 */
    .long   DefaultISR                                      /* 237 */
    .long   DefaultISR                                      /* 238 */
    .long   DefaultISR                                      /* 239 */
    .long   DefaultISR                                      /* 240 */
    .long   DefaultISR                                      /* 241 */
    .long   DefaultISR                                      /* 242 */
    .long   DefaultISR                                      /* 243 */
    .long   DefaultISR                                      /* 244 */
    .long   DefaultISR                                      /* 245 */
    .long   DefaultISR                                      /* 246 */
    .long   DefaultISR                                      /* 247 */
    .long   DefaultISR                                      /* 248 */
    .long   DefaultISR                                      /* 249 */
    .long   DefaultISR                                      /* 250 */
    .long   DefaultISR                                      /* 251 */
    .long   DefaultISR                                      /* 252 */
    .long   DefaultISR                                      /* 253 */
    .long   DefaultISR                                      /* 254 */
    .long   0xFFFFFFFF                                      /*  Reserved for user TRIM value */

    .size    __isr_vector_core1, . - __isr_vector_core1


/**************************************************************/
/************************ set other  ***************************/
    .text
    .thumb

/* Reset Handler */

    .thumb_func
    .align 2
    .globl   Reset_Handler_Core1
    .weak    Reset_Handler_Core1
    .type    Reset_Handler_Core1, %function

Reset_Handler_Core1:
    cpsid   i               /* Mask interrupts */

    ldr     r1,=0
    ldr     r2,=0
    ldr     r3,=0
    ldr     r4,=0
    ldr     r5,=0
    ldr     r6,=0
    ldr     r7,=0
    mov     r8,r7
    mov     r9,r7
    mov     r10,r7
    mov     r11,r7
    mov     r12,r7

    ldr     r0, =0xE000ED08
    ldr     r1, =__rom_intvec_start_core1
    str     r1, [r0]
    ldr     r2, [r1]
    mov     r3, r2

    /*
      initialization startup stack,
      for ecc
    */

    mov     r0, #0
    mov     r1, #0
    sub     r2, r2, #4

LoopClearStack:
    str     r0, [r2]
    sub     r2, r2, #4
    add     r1, r1, #1
    cmp     r1, #8
    bne     LoopClearStack

    msr     msp, r3

    ldr     r0, =system_init
    bx      r0
