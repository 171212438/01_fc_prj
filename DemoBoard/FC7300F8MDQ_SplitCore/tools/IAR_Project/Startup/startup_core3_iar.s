        MODULE  ?cstartup_Core3

        ;; Forward declaration of sections.
        SECTION CSTACK_CORE3:DATA:NOROOT(3)

        SECTION .isr_vector_Core3:CODE:ROOT(2)

        EXTERN  system_init
        EXTERN  NMI_Handler
        EXTERN  HardFault_Handler
        EXTERN  MemManage_Handler
        EXTERN  BusFault_Handler
        EXTERN  UsageFault_Handler
        EXTERN  SVC_Handler
        EXTERN  DebugMon_Handler
        EXTERN  PendSV_Handler
        EXTERN  SysTick_Handler
        EXTERN  DMA0_IRQHandler
        EXTERN  DMA1_IRQHandler
        EXTERN  DMA2_IRQHandler
        EXTERN  DMA3_IRQHandler
        EXTERN  DMA4_IRQHandler
        EXTERN  DMA5_IRQHandler
        EXTERN  DMA6_IRQHandler
        EXTERN  DMA7_IRQHandler
        EXTERN  DMA8_IRQHandler
        EXTERN  DMA9_IRQHandler
        EXTERN  DMA10_IRQHandler
        EXTERN  DMA11_IRQHandler
        EXTERN  DMA12_IRQHandler
        EXTERN  DMA13_IRQHandler
        EXTERN  DMA14_IRQHandler
        EXTERN  DMA15_IRQHandler
        EXTERN  DMA16_IRQHandler
        EXTERN  DMA17_IRQHandler
        EXTERN  DMA18_IRQHandler
        EXTERN  DMA19_IRQHandler
        EXTERN  DMA20_IRQHandler
        EXTERN  DMA21_IRQHandler
        EXTERN  DMA22_IRQHandler
        EXTERN  DMA23_IRQHandler
        EXTERN  DMA24_IRQHandler
        EXTERN  DMA25_IRQHandler
        EXTERN  DMA26_IRQHandler
        EXTERN  DMA27_IRQHandler
        EXTERN  DMA28_IRQHandler
        EXTERN  DMA29_IRQHandler
        EXTERN  DMA30_IRQHandler
        EXTERN  DMA31_IRQHandler
        EXTERN  DMA_Error_IRQHandler
        EXTERN  CPM_IRQHandler
        EXTERN  FC_IRQHandler
        EXTERN  PMC_IRQHandler
        EXTERN  TMU_IRQHandler
        EXTERN  WDOG0_IRQHandler
        EXTERN  WDOG1_IRQHandler
        EXTERN  WDOG2_IRQHandler
        EXTERN  FCSMU0_IRQHandler
        EXTERN  STCU0_IRQHandler
        EXTERN  ERM_fault_IRQHandler
        EXTERN  MAM0_IRQHandler
        EXTERN  MAM1_IRQHandler
        EXTERN  WDOG3_IRQHandler
        EXTERN  RESERVED_62_IRQHandler
        EXTERN  RGM_Pre_IRQHandler
        EXTERN  RGM_Other_IRQHandler
        EXTERN  INTM0_IRQHandler
        EXTERN  ISM0_IRQHandler
        EXTERN  MB_IRQHandler
        EXTERN  SCG_IRQHandler
        EXTERN  CMU0_IRQHandler
        EXTERN  CMU1_IRQHandler
        EXTERN  CMU2_IRQHandler
        EXTERN  CMU3_IRQHandler
        EXTERN  TSTMP0_IRQHandler
        EXTERN  TSTMP1_IRQHandler
        EXTERN  TSTMP2_IRQHandler
        EXTERN  TSTMP3_IRQHandler
        EXTERN  CORDIC_IRQHandler
        EXTERN  HSM0_IRQHandler
        EXTERN  FCPIT0_IRQHandler
        EXTERN  FCPIT1_IRQHandler
        EXTERN  RTC_IRQHandler
        EXTERN  ENET_Tx0_IRQHandler
        EXTERN  ENET_Tx1_IRQHandler
        EXTERN  ENET_Rx0_IRQHandler
        EXTERN  ENET_Rx1_IRQHandler
        EXTERN  ENET_System_IRQHandler
        EXTERN  AONTIMER_IRQHandler
        EXTERN  SWI_IRQHandler
        EXTERN  TSTMP4_IRQHandler
        EXTERN  FREQM_IRQHandler
        EXTERN  PORTA_IRQHandler
        EXTERN  PORTB_IRQHandler
        EXTERN  PORTC_IRQHandler
        EXTERN  PORTD_IRQHandler
        EXTERN  PORTE_IRQHandler
        EXTERN  PORTF_IRQHandler
        EXTERN  PORTG_IRQHandler
        EXTERN  PORTH_IRQHandler
        EXTERN  PORTI_IRQHandler
        EXTERN  Can_IsrCAN0_All
        EXTERN  Can_IsrCAN1_All
        EXTERN  Can_IsrCAN2_All
        EXTERN  Can_IsrCAN3_All
        EXTERN  Can_IsrCAN4_All
        EXTERN  Can_IsrCAN5_All
        EXTERN  Can_IsrCAN6_All
        EXTERN  Can_IsrCAN7_All
        EXTERN  FCIIC0_IRQHandler
        EXTERN  FCIIC1_IRQHandler
        EXTERN  FCSPI0_IRQHandler
        EXTERN  FCSPI1_IRQHandler
        EXTERN  FCSPI2_IRQHandler
        EXTERN  FCSPI3_IRQHandler
        EXTERN  FCSPI4_IRQHandler
        EXTERN  FCSPI5_IRQHandler
        EXTERN  FCUART0_RxTx_IRQHandler
        EXTERN  FCUART1_RxTx_IRQHandler
        EXTERN  FCUART2_RxTx_IRQHandler
        EXTERN  FCUART3_RxTx_IRQHandler
        EXTERN  FCUART4_RxTx_IRQHandler
        EXTERN  FCUART5_RxTx_IRQHandler
        EXTERN  FCUART6_RxTx_IRQHandler
        EXTERN  FCUART7_RxTx_IRQHandler
        EXTERN  FCUART8_RxTx_IRQHandler
        EXTERN  FCUART9_RxTx_IRQHandler
        EXTERN  FCUART10_RxTx_IRQHandler
        EXTERN  FCUART11_RxTx_IRQHandler
        EXTERN  FCUART12_RxTx_IRQHandler
        EXTERN  FCUART13_RxTx_IRQHandler
        EXTERN  Can_IsrCAN12_All
        EXTERN  Can_IsrCAN13_All
        EXTERN  FTU0_IRQHandler
        EXTERN  FTU1_IRQHandler
        EXTERN  FTU2_IRQHandler
        EXTERN  FTU3_IRQHandler
        EXTERN  FTU4_IRQHandler
        EXTERN  FTU5_IRQHandler
        EXTERN  FTU6_IRQHandler
        EXTERN  FTU7_IRQHandler
        EXTERN  HSADC0_IRQHandler
        EXTERN  HSADC1_IRQHandler
        EXTERN  HSADC2_IRQHandler
        EXTERN  HSADC3_IRQHandler
        EXTERN  CMP0_IRQHandler
        EXTERN  RESERVED_145_IRQHandler
        EXTERN  ADC4_IRQHandler
        EXTERN  ADC0_IRQHandler
        EXTERN  ADC1_IRQHandler
        EXTERN  ADC2_IRQHandler
        EXTERN  ADC3_IRQHandler
        EXTERN  PTIMER0_IRQHandler
        EXTERN  PTIMER1_IRQHandler
        EXTERN  PTIMER2_IRQHandler
        EXTERN  PTIMER3_IRQHandler
        EXTERN  ADC5_IRQHandler
        EXTERN  MSC0_IRQHandler
        EXTERN  MSC1_IRQHandler
        EXTERN  Can_IsrCAN8_All
        EXTERN  Can_IsrCAN9_All
        EXTERN  SENT0_IRQHandler
        EXTERN  SENT1_IRQHandler
        EXTERN  FCSPI6_IRQHandler
        EXTERN  FCSPI7_IRQHandler
        EXTERN  Can_IsrCAN10_All
        EXTERN  Can_IsrCAN11_All
        EXTERN  CTI0_IRQHandler
        EXTERN  CTI1_IRQHandler
        EXTERN  CTI2_IRQHandler
        EXTERN  CMU4_IRQHandler
        EXTERN  CTI3_IRQHandler
        EXTERN  SSI_IRQHandler
        EXTERN  SDADC0_0_IRQHandler
        EXTERN  SDADC0_1_IRQHandler
        EXTERN  SDADC0_2_IRQHandler
        EXTERN  SDADC1_0_IRQHandler
        EXTERN  SDADC1_1_IRQHandler
        EXTERN  SDADC1_2_IRQHandler
        EXTERN  EFTU0_Error_IRQHandler
        EXTERN  EFTU1_Error_IRQHandler
        EXTERN  EFTU2_Error_IRQHandler
        EXTERN  EFTU0_TIM_0_3_IRQHandler
        EXTERN  EFTU1_TIM_0_3_IRQHandler
        EXTERN  EFTU2_TIM_0_3_IRQHandler
        EXTERN  EFTU0_TIM_4_7_IRQHandler
        EXTERN  EFTU1_TIM_4_7_IRQHandler
        EXTERN  EFTU2_TIM_4_7_IRQHandler
        EXTERN  EFTU0_TOM_0_7_IRQHandler
        EXTERN  EFTU1_TOM_0_7_IRQHandler
        EXTERN  EFTU2_TOM_0_7_IRQHandler
        EXTERN  EFTU0_TOM_8_15_IRQHandler
        EXTERN  EFTU1_TOM_8_15_IRQHandler
        EXTERN  EFTU2_TOM_8_15_IRQHandler
        EXTERN  CAN0_Error_IRQHandler
        EXTERN  CAN1_Error_IRQHandler
        EXTERN  CAN2_Error_IRQHandler
        EXTERN  CAN3_Error_IRQHandler
        EXTERN  CAN4_Error_IRQHandler
        EXTERN  CAN5_Error_IRQHandler
        EXTERN  CAN6_Error_IRQHandler
        EXTERN  CAN7_Error_IRQHandler
        EXTERN  CAN8_Error_IRQHandler
        EXTERN  CAN9_Error_IRQHandler
        EXTERN  CAN10_Error_IRQHandler
        EXTERN  CAN11_Error_IRQHandler
        EXTERN  CAN12_Error_IRQHandler
        EXTERN  CAN13_Error_IRQHandler
        EXTERN  QDT0_IRQHandler
        EXTERN  QDT1_IRQHandler
        EXTERN  QDT2_IRQHandler
        EXTERN  QDT3_IRQHandler
        EXTERN  LU0_IRQHandler
        EXTERN  LU1_IRQHandler
        EXTERN  TPU0_CH0_7_IRQHandler
        EXTERN  TPU0_CH8_15_IRQHandler
        EXTERN  TPU0_CH16_23_IRQHandler
        EXTERN  TPU0_CH24_31_IRQHandler
        EXTERN  HSM0_CRYPTO_IRQHandler
        EXTERN  DefaultISR
        PUBLIC  __vector_table_Core3
        PUBLIC  __Vectors_Core3
        PUBLIC  __Vectors_End_Core3
        PUBLIC  __Vectors_Size_Core3

        DATA
__iar_init$$done:               ; The vector table is not needed
                                ; until after copy initialization is done

__vector_table_Core3:
        DCD   sfe(CSTACK_CORE3)                                 /* Top of Stack */
        DCD   Reset_Handler_Core3                               /* Reset Handler */
        DCD   NMI_Handler                                       /* NMI Handler */
        DCD   HardFault_Handler                                 /* Hard Fault Handler */
        DCD   MemManage_Handler                                 /* MPU Fault Handler */
        DCD   BusFault_Handler                                  /* Bus Fault Handler */
        DCD   UsageFault_Handler                                /* Usage Fault Handler */
        DCD   0                                                 /* Reserved */
        DCD   0                                                 /* Reserved */
        DCD   0                                                 /* Reserved */
        DCD   0                                                 /* Reserved */
        DCD   SVC_Handler                                       /* SVCall Handler */
        DCD   DebugMon_Handler                                  /* Debug Monitor Handler */
        DCD   0                                                 /* Reserved */
        DCD   PendSV_Handler                                    /* PendSV Handler */
        DCD   SysTick_Handler                                   /* SysTick Handler */

                                                                /* External Interrupts*/
        DCD   DMA0_IRQHandler                                   /*  DMA channel 0 transfer complete */
        DCD   DMA1_IRQHandler                                   /*  DMA channel 1 transfer complete */
        DCD   DMA2_IRQHandler                                   /*  DMA channel 2 transfer complete */
        DCD   DMA3_IRQHandler                                   /*  DMA channel 3 transfer complete */
        DCD   DMA4_IRQHandler                                   /*  DMA channel 4 transfer complete */
        DCD   DMA5_IRQHandler                                   /*  DMA channel 5 transfer complete */
        DCD   DMA6_IRQHandler                                   /*  DMA channel 6 transfer complete */
        DCD   DMA7_IRQHandler                                   /*  DMA channel 7 transfer complete */
        DCD   DMA8_IRQHandler                                   /*  DMA channel 8 transfer complete */
        DCD   DMA9_IRQHandler                                   /*  DMA channel 9 transfer complete */
        DCD   DMA10_IRQHandler                                  /*  DMA channel 10 transfer complete */
        DCD   DMA11_IRQHandler                                  /*  DMA channel 11 transfer complete */
        DCD   DMA12_IRQHandler                                  /*  DMA channel 12 transfer complete */
        DCD   DMA13_IRQHandler                                  /*  DMA channel 13 transfer complete */
        DCD   DMA14_IRQHandler                                  /*  DMA channel 14 transfer complete */
        DCD   DMA15_IRQHandler                                  /*  DMA channel 15 transfer complete */
        DCD   DMA16_IRQHandler                                  /*  DMA channel 16 transfer complete */
        DCD   DMA17_IRQHandler                                  /*  DMA channel 17 transfer complete */
        DCD   DMA18_IRQHandler                                  /*  DMA channel 18 transfer complete */
        DCD   DMA19_IRQHandler                                  /*  DMA channel 19 transfer complete */
        DCD   DMA20_IRQHandler                                  /*  DMA channel 20 transfer complete */
        DCD   DMA21_IRQHandler                                  /*  DMA channel 21 transfer complete */
        DCD   DMA22_IRQHandler                                  /*  DMA channel 22 transfer complete */
        DCD   DMA23_IRQHandler                                  /*  DMA channel 23 transfer complete */
        DCD   DMA24_IRQHandler                                  /*  DMA channel 24 transfer complete */
        DCD   DMA25_IRQHandler                                  /*  DMA channel 25 transfer complete */
        DCD   DMA26_IRQHandler                                  /*  DMA channel 26 transfer complete */
        DCD   DMA27_IRQHandler                                  /*  DMA channel 27 transfer complete */
        DCD   DMA28_IRQHandler                                  /*  DMA channel 28 transfer complete */
        DCD   DMA29_IRQHandler                                  /*  DMA channel 29 transfer complete */
        DCD   DMA30_IRQHandler                                  /*  DMA channel 30 transfer complete */
        DCD   DMA31_IRQHandler                                  /*  DMA channel 31 transfer complete */
        DCD   DMA_Error_IRQHandler                              /*  DMA error interrupt channels 0-63 */
        DCD   CPM_IRQHandler                                    /*  FPU etc. interrupt */
        DCD   FC_IRQHandler                                     /*  FC Command complete */
        DCD   PMC_IRQHandler                                    /*  PMC Low voltage detect interrupt */
        DCD   TMU_IRQHandler                                    /*  Temperature Monitor Unit interrupt */
        DCD   WDOG0_IRQHandler                                  /*  interrupt request out before wdg reset out */
        DCD   WDOG1_IRQHandler                                  /*  interrupt request out before wdg reset out */
        DCD   WDOG2_IRQHandler                                  /*  interrupt request out before wdg reset out */
        DCD   FCSMU0_IRQHandler                                 /*  Fault Control and Safety Manage Unit */
        DCD   STCU0_IRQHandler                                  /*  Safety Control Unit interrupt */
        DCD   ERM_fault_IRQHandler                              /*  ERM single/double bit error correction */
        DCD   MAM0_IRQHandler                                   /*  Matrix Access Monitor interrupt */
        DCD   MAM1_IRQHandler                                   /*  Matrix Access Monitor interrupt */
        DCD   WDOG3_IRQHandler                                  /*  Interrupt request out before wdg reset out */
        DCD   RESERVED_62_IRQHandler                            /*  Reserved */
        DCD   RGM_Pre_IRQHandler                                /*  RGM pre-reset Interrupt */
        DCD   RGM_Other_IRQHandler                              /*  RGM other CPU exit reset Interrupt */
        DCD   INTM0_IRQHandler                                  /*  INTM alarm interrupt */
        DCD   ISM0_IRQHandler                                   /*  ISM0 interrupt */
        DCD   MB_IRQHandler                                     /*  Mail Box interrupt */
        DCD   SCG_IRQHandler                                    /*  SCG bus interrupt request */
        DCD   CMU0_IRQHandler                                   /*  CMU0 interrupt */
        DCD   CMU1_IRQHandler                                   /*  CMU1 interrupt */
        DCD   CMU2_IRQHandler                                   /*  CMU2 interrupt */
        DCD   CMU3_IRQHandler                                   /*  CMU3 interrupt */
        DCD   TSTMP0_IRQHandler                                 /*  TimerStamp0 interrupt */
        DCD   TSTMP1_IRQHandler                                 /*  TimerStamp1 interrupt */
        DCD   TSTMP2_IRQHandler                                 /*  TimerStamp2 interrupt */
        DCD   TSTMP3_IRQHandler                                 /*  TimerStamp3 interrupt */
        DCD   CORDIC_IRQHandler                                 /*  CORDIC Accelerator interrupt */
        DCD   HSM0_IRQHandler                                   /*  Crypto interrupt */
        DCD   FCPIT0_IRQHandler                                 /*  FCPIT0 interrupt */
        DCD   FCPIT1_IRQHandler                                 /*  FCPIT0 interrupt */
        DCD   RTC_IRQHandler                                    /*  RTC alarm or seconds interrupt  */
        DCD   ENET_Tx0_IRQHandler                               /*  ENET Transmit Buffer Done for Ring/Queue 0 */
        DCD   ENET_Tx1_IRQHandler                               /*  ENET Transmit Buffer Done for Ring/Queue 1 */
        DCD   ENET_Rx0_IRQHandler                               /*  ENET Receive Buffer Done for Ring/Queue 0 */
        DCD   ENET_Rx1_IRQHandler                               /*  ENET Receive Buffer Done for Ring/Queue 1 */
        DCD   ENET_System_IRQHandler                            /*  ENET System interrupt */
        DCD   AONTIMER_IRQHandler                               /*  AONTIMER interrupt request */
        DCD   SWI_IRQHandler                                    /*  Software interrupt */
        DCD   TSTMP4_IRQHandler                                 /*  TimerStamp4 interrupt */
        DCD   FREQM_IRQHandler                                  /*  FREQM interrupt */
        DCD   PORTA_IRQHandler                                  /*  Port A pin detect interrupt */
        DCD   PORTB_IRQHandler                                  /*  Port B pin detect interrupt */
        DCD   PORTC_IRQHandler                                  /*  Port C pin detect interrupt */
        DCD   PORTD_IRQHandler                                  /*  Port D pin detect interrupt */
        DCD   PORTE_IRQHandler                                  /*  Port E pin detect interrupt */
        DCD   PORTF_IRQHandler                                  /*  Port F pin detect interrupt */
        DCD   PORTG_IRQHandler                                  /*  Port G pin detect interrupt */
        DCD   PORTH_IRQHandler                                  /*  Port H pin detect interrupt */
        DCD   PORTI_IRQHandler                                  /*  Port I pin detect interrupt */
        DCD   Can_IsrCAN0_All                                   /*  CAN0 Interrupt */
        DCD   Can_IsrCAN1_All                                   /*  CAN1 Interrupt */
        DCD   Can_IsrCAN2_All                                   /*  CAN2 Interrupt */
        DCD   Can_IsrCAN3_All                                   /*  CAN3 Interrupt */
        DCD   Can_IsrCAN4_All                                   /*  CAN4 Interrupt */
        DCD   Can_IsrCAN5_All                                   /*  CAN5 Interrupt */
        DCD   Can_IsrCAN6_All                                   /*  CAN6 Interrupt */
        DCD   Can_IsrCAN7_All                                   /*  CAN7 Interrupt */
        DCD   FCIIC0_IRQHandler                                 /*  FCIIC0 Interrupt */
        DCD   FCIIC1_IRQHandler                                 /*  FCIIC1 Interrupt */
        DCD   FCSPI0_IRQHandler                                 /*  FCSPI0 Interrupt */
        DCD   FCSPI1_IRQHandler                                 /*  FCSPI1 Interrupt */
        DCD   FCSPI2_IRQHandler                                 /*  FCSPI2 Interrupt */
        DCD   FCSPI3_IRQHandler                                 /*  FCSPI0 Interrupt */
        DCD   FCSPI4_IRQHandler                                 /*  FCSPI1 Interrupt */
        DCD   FCSPI5_IRQHandler                                 /*  FCSPI2 Interrupt */
        DCD   FCUART0_RxTx_IRQHandler                           /*  FCUART0 Transmit / Receive Interrupt */
        DCD   FCUART1_RxTx_IRQHandler                           /*  FCUART1 Transmit / Receive  Interrupt */
        DCD   FCUART2_RxTx_IRQHandler                           /*  FCUART2 Transmit / Receive  Interrupt */
        DCD   FCUART3_RxTx_IRQHandler                           /*  FCUART3 Transmit / Receive Interrupt */
        DCD   FCUART4_RxTx_IRQHandler                           /*  FCUART4 Transmit / Receive  Interrupt */
        DCD   FCUART5_RxTx_IRQHandler                           /*  FCUART5 Transmit / Receive  Interrupt */
        DCD   FCUART6_RxTx_IRQHandler                           /*  FCUART6 Transmit / Receive Interrupt */
        DCD   FCUART7_RxTx_IRQHandler                           /*  FCUART7 Transmit / Receive  Interrupt */
        DCD   FCUART8_RxTx_IRQHandler                           /*  FCUART8 Transmit / Receive  Interrupt */
        DCD   FCUART9_RxTx_IRQHandler                           /*  FCUART9 Transmit / Receive Interrupt */
        DCD   FCUART10_RxTx_IRQHandler                          /*  FCUART10 Transmit / Receive  Interrupt */
        DCD   FCUART11_RxTx_IRQHandler                          /*  FCUART11 Transmit / Receive  Interrupt */
        DCD   FCUART12_RxTx_IRQHandler                          /*  FCUART12 Transmit / Receive  Interrupt */
        DCD   FCUART13_RxTx_IRQHandler                          /*  FCUART13 Transmit / Receive  Interrupt */
        DCD   Can_IsrCAN12_All                                  /*  CAN12 Interrupt */
        DCD   Can_IsrCAN13_All                                  /*  CAN13 Interrupt */
        DCD   FTU0_IRQHandler                                   /*  FTU0 all source interrupt */
        DCD   FTU1_IRQHandler                                   /*  FTU1 all source interrupt */
        DCD   FTU2_IRQHandler                                   /*  FTU2 all source interrupt */
        DCD   FTU3_IRQHandler                                   /*  FTU3 all source interrupt */
        DCD   FTU4_IRQHandler                                   /*  FTU4 all source interrupt */
        DCD   FTU5_IRQHandler                                   /*  FTU5 all source interrupt */
        DCD   FTU6_IRQHandler                                   /*  FTU6 all source interrupt */
        DCD   FTU7_IRQHandler                                   /*  FTU7 all source interrupt */
        DCD   HSADC0_IRQHandler                                 /*  HSADC0 interrupt request */
        DCD   HSADC1_IRQHandler                                 /*  HSADC1 interrupt request */
        DCD   HSADC2_IRQHandler                                 /*  HSADC2 interrupt request */
        DCD   HSADC3_IRQHandler                                 /*  HSADC3 interrupt request */
        DCD   CMP0_IRQHandler                                   /*  CMP0 interrupt request  */
        DCD   DefaultISR                                        /*  Reserved  */
        DCD   ADC4_IRQHandler                                   /*  ADC4 interrupt request  */
        DCD   ADC0_IRQHandler                                   /*  ADC0 interrupt request. */
        DCD   ADC1_IRQHandler                                   /*  ADC1 interrupt request. */
        DCD   ADC2_IRQHandler                                   /*  ADC2 interrupt request. */
        DCD   ADC3_IRQHandler                                   /*  ADC3 interrupt request. */
        DCD   PTIMER0_IRQHandler                                /*  PTIMER0 interrupt */
        DCD   PTIMER1_IRQHandler                                /*  PTIMER1 interrupt */
        DCD   PTIMER2_IRQHandler                                /*  PTIMER2 interrupt */
        DCD   PTIMER3_IRQHandler                                /*  PTIMER3 interrupt */
        DCD   ADC5_IRQHandler                                   /*  ADC5 interrupt request. */
        DCD   MSC0_IRQHandler                                   /*  MSC interrupt */
        DCD   MSC1_IRQHandler                                   /*  MSC interrupt */
        DCD   Can_IsrCAN8_All                                   /*  CAN6 Interrupt */
        DCD   Can_IsrCAN9_All                                   /*  CAN7 Interrupt */
        DCD   SENT0_IRQHandler                                  /*  SENT all interrupt (fast or slow) */
        DCD   SENT1_IRQHandler                                  /*  SENT all interrupt (fast or slow) */
        DCD   FCSPI6_IRQHandler                                 /*  FCSPI6 Interrupt */
        DCD   FCSPI7_IRQHandler                                 /*  FCSPI7 Interrupt */
        DCD   Can_IsrCAN10_All                                  /*  CAN10 Interrupt */
        DCD   Can_IsrCAN11_All                                  /*  CAN11 Interrupt */
        DCD   CTI0_IRQHandler                                   /*  CTI Interrupt */
        DCD   CTI1_IRQHandler                                   /*  CTI Interrupt */
        DCD   CTI2_IRQHandler                                   /*  CTI Interrupt */
        DCD   CMU4_IRQHandler                                   /*  CMU4 Interrupt */
        DCD   CTI3_IRQHandler                                   /*  CTI Interrupt */
        DCD   SSI_IRQHandler                                    /*  SSI0 Interrupt ORed interrupt */
        DCD   SDADC0_0_IRQHandler                               /*  SDADC0 channel 0 Interrupt */
        DCD   SDADC0_1_IRQHandler                               /*  SDADC0 channel 1 Interrupt */
        DCD   SDADC0_2_IRQHandler                               /*  SDADC0 channel 2 Interrupt */
        DCD   SDADC1_0_IRQHandler                               /*  SDADC1 channel 0 Interrupt */
        DCD   SDADC1_1_IRQHandler                               /*  SDADC1 channel 1 Interrupt */
        DCD   SDADC1_2_IRQHandler                               /*  SDADC1 channel 2 Interrupt */
        DCD   EFTU0_Error_IRQHandler                            /*  eFTU0 Error Interrupt */
        DCD   EFTU1_Error_IRQHandler                            /*  eFTU1 Error Interrupt */
        DCD   EFTU2_Error_IRQHandler                            /*  eFTU2 Error Interrupt */
        DCD   EFTU0_TIM_0_3_IRQHandler                          /*  eFTU0 TIM 0-3 source Interrupt */
        DCD   EFTU1_TIM_0_3_IRQHandler                          /*  eFTU1 TIM 0-3 source Interrupt */
        DCD   EFTU2_TIM_0_3_IRQHandler                          /*  eFTU2 TIM 0-3 source Interrupt */
        DCD   EFTU0_TIM_4_7_IRQHandler                          /*  eFTU0 TIM 4-7 source Interrupt */
        DCD   EFTU1_TIM_4_7_IRQHandler                          /*  eFTU1 TIM 4-7 source Interrupt */
        DCD   EFTU2_TIM_4_7_IRQHandler                          /*  eFTU2 TIM 4-7 source Interrupt */
        DCD   EFTU0_TOM_0_7_IRQHandler                          /*  eFTU0 TOM 0-7 source Interrupt */
        DCD   EFTU1_TOM_0_7_IRQHandler                          /*  eFTU1 TOM 0-7 source Interrupt */
        DCD   EFTU2_TOM_0_7_IRQHandler                          /*  eFTU2 TOM 0-7 source Interrupt */
        DCD   EFTU0_TOM_8_15_IRQHandler                         /*  eFTU0 TOM 8-15 source Interrupt */
        DCD   EFTU1_TOM_8_15_IRQHandler                         /*  eFTU1 TOM 8-15 source Interrupt */
        DCD   EFTU2_TOM_8_15_IRQHandler                         /*  eFTU2 TOM 8-15 source Interrupt */
        DCD   CAN0_Error_IRQHandler                             /*  CAN0 error Interrupt */
        DCD   CAN1_Error_IRQHandler                             /*  CAN1 error Interrupt */
        DCD   CAN2_Error_IRQHandler                             /*  CAN2 error Interrupt */
        DCD   CAN3_Error_IRQHandler                             /*  CAN3 error Interrupt */
        DCD   CAN4_Error_IRQHandler                             /*  CAN4 error Interrupt */
        DCD   CAN5_Error_IRQHandler                             /*  CAN5 error Interrupt */
        DCD   CAN6_Error_IRQHandler                             /*  CAN6 error Interrupt */
        DCD   CAN7_Error_IRQHandler                             /*  CAN7 error Interrupt */
        DCD   CAN8_Error_IRQHandler                             /*  CAN8 error Interrupt */
        DCD   CAN9_Error_IRQHandler                             /*  CAN9 error Interrupt */
        DCD   CAN10_Error_IRQHandler                            /*  CAN10 error Interrupt */
        DCD   CAN11_Error_IRQHandler                            /*  CAN11 error Interrupt */
        DCD   CAN12_Error_IRQHandler                            /*  CAN12 error Interrupt */
        DCD   CAN13_Error_IRQHandler                            /*  CAN13 error Interrupt */
        DCD   QDT0_IRQHandler                                   /*  QDT0 Interrupt */
        DCD   QDT1_IRQHandler                                   /*  QDT1 Interrupt */
        DCD   QDT2_IRQHandler                                   /*  QDT2 Interrupt */
        DCD   QDT3_IRQHandler                                   /*  QDT3 Interrupt */
        DCD   LU0_IRQHandler                                    /*  LU0 Interrupt */
        DCD   LU1_IRQHandler                                    /*  LU1 Interrupt */
        DCD   TPU0_CH0_7_IRQHandler                             /*  TPU0 CH0-7 interrupt */
        DCD   TPU0_CH8_15_IRQHandler                            /*  TPU0 CH8-15 interrupt */
        DCD   TPU0_CH16_23_IRQHandler                           /*  TPU0 CH16-23 interrupt */
        DCD   TPU0_CH24_31_IRQHandler                           /*  TPU0 CH24-31 interrupt */
        DCD   HSM0_CRYPTO_IRQHandler                            /*  HSM crypto interrupt */
        DCD   DefaultISR                                        /* 218 */
        DCD   DefaultISR                                        /* 219 */
        DCD   DefaultISR                                        /* 220 */
        DCD   DefaultISR                                        /* 221 */
        DCD   DefaultISR                                        /* 222 */
        DCD   DefaultISR                                        /* 223 */
        DCD   DefaultISR                                        /* 224 */
        DCD   DefaultISR                                        /* 225 */
        DCD   DefaultISR                                        /* 226 */
        DCD   DefaultISR                                        /* 227 */
        DCD   DefaultISR                                        /* 228 */
        DCD   DefaultISR                                        /* 229 */
        DCD   DefaultISR                                        /* 230 */
        DCD   DefaultISR                                        /* 231 */
        DCD   DefaultISR                                        /* 232 */
        DCD   DefaultISR                                        /* 233 */
        DCD   DefaultISR                                        /* 234 */
        DCD   DefaultISR                                        /* 235 */
        DCD   DefaultISR                                        /* 236 */
        DCD   DefaultISR                                        /* 237 */
        DCD   DefaultISR                                        /* 238 */
        DCD   DefaultISR                                        /* 239 */
        DCD   DefaultISR                                        /* 240 */
        DCD   DefaultISR                                        /* 241 */
        DCD   DefaultISR                                        /* 242 */
        DCD   DefaultISR                                        /* 243 */
        DCD   DefaultISR                                        /* 244 */
        DCD   DefaultISR                                        /* 245 */
        DCD   DefaultISR                                        /* 246 */
        DCD   DefaultISR                                        /* 247 */
        DCD   DefaultISR                                        /* 248 */
        DCD   DefaultISR                                        /* 249 */
        DCD   DefaultISR                                        /* 250 */
        DCD   DefaultISR                                        /* 251 */
        DCD   DefaultISR                                        /* 252 */
        DCD   DefaultISR                                        /* 253 */
        DCD   DefaultISR                                        /* 254 */
        DCD   0xFFFFFFFF                                        /*  Reserved for user TRIM value */
__Vectors_End_Core3

__Vectors_Core3       EQU   __vector_table_Core3
__Vectors_Size_Core3 	EQU   __Vectors_End_Core3 - __Vectors_Core3
        THUMB

        PUBWEAK Reset_Handler_Core3
        SECTION .text:CODE:REORDER:NOROOT(2)

Reset_Handler_Core3:
        CPSID   I               ; Mask interrupts

        /* Init the rest of the registers */
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
        ldr     r1, =__vector_table_Core3
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

        END
