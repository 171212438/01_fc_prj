        MODULE  ?cstartup

        ;; Forward declaration of sections.
        SECTION CSTACK:DATA:NOROOT(3)

        SECTION .isr_vector:CODE:ROOT(2)

        EXTERN  main
        EXTERN  system_init
        EXTERN  data_init
        PUBLIC  __vector_table
        PUBLIC  __Vectors
        PUBLIC  __Vectors_End
        PUBLIC  __Vectors_Size

        DATA
__iar_init$$done:               ; The vector table is not needed
                                ; until after copy initialization is done
__vector_table:
        DCD   sfe(CSTACK)                                       /* Top of Stack */
        DCD   Reset_Handler                                     /* Reset Handler */
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
__Vectors_End

__Vectors       EQU   __vector_table
__Vectors_Size  EQU   __Vectors_End - __Vectors

        THUMB

        PUBWEAK Reset_Handler
        SECTION .text:CODE:REORDER:NOROOT(2)

Reset_Handler:
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
        ldr     r1, =__vector_table
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

        PUBWEAK NMI_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
NMI_Handler
        B .

        PUBWEAK HardFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
HardFault_Handler
        B .

        PUBWEAK MemManage_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
MemManage_Handler
        B .

        PUBWEAK BusFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
BusFault_Handler
        B .

        PUBWEAK UsageFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
UsageFault_Handler
        B .

        PUBWEAK SVC_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SVC_Handler
        B .

        PUBWEAK DebugMon_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
DebugMon_Handler
        B .

        PUBWEAK PendSV_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
PendSV_Handler
        B .

        PUBWEAK SysTick_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SysTick_Handler
        B .

        PUBWEAK DMA0_IRQHandler                                   /*  DMA channel 0 transfer complete */
        PUBWEAK DMA1_IRQHandler                                   /*  DMA channel 1 transfer complete */
        PUBWEAK DMA2_IRQHandler                                   /*  DMA channel 2 transfer complete */
        PUBWEAK DMA3_IRQHandler                                   /*  DMA channel 3 transfer complete */
        PUBWEAK DMA4_IRQHandler                                   /*  DMA channel 4 transfer complete */
        PUBWEAK DMA5_IRQHandler                                   /*  DMA channel 5 transfer complete */
        PUBWEAK DMA6_IRQHandler                                   /*  DMA channel 6 transfer complete */
        PUBWEAK DMA7_IRQHandler                                   /*  DMA channel 7 transfer complete */
        PUBWEAK DMA8_IRQHandler                                   /*  DMA channel 8 transfer complete */
        PUBWEAK DMA9_IRQHandler                                   /*  DMA channel 9 transfer complete */
        PUBWEAK DMA10_IRQHandler                                  /*  DMA channel 10 transfer complete */
        PUBWEAK DMA11_IRQHandler                                  /*  DMA channel 11 transfer complete */
        PUBWEAK DMA12_IRQHandler                                  /*  DMA channel 12 transfer complete */
        PUBWEAK DMA13_IRQHandler                                  /*  DMA channel 13 transfer complete */
        PUBWEAK DMA14_IRQHandler                                  /*  DMA channel 14 transfer complete */
        PUBWEAK DMA15_IRQHandler                                  /*  DMA channel 15 transfer complete */
        PUBWEAK DMA16_IRQHandler                                  /*  DMA channel 16 transfer complete */
        PUBWEAK DMA17_IRQHandler                                  /*  DMA channel 17 transfer complete */
        PUBWEAK DMA18_IRQHandler                                  /*  DMA channel 18 transfer complete */
        PUBWEAK DMA19_IRQHandler                                  /*  DMA channel 19 transfer complete */
        PUBWEAK DMA20_IRQHandler                                  /*  DMA channel 20 transfer complete */
        PUBWEAK DMA21_IRQHandler                                  /*  DMA channel 21 transfer complete */
        PUBWEAK DMA22_IRQHandler                                  /*  DMA channel 22 transfer complete */
        PUBWEAK DMA23_IRQHandler                                  /*  DMA channel 23 transfer complete */
        PUBWEAK DMA24_IRQHandler                                  /*  DMA channel 24 transfer complete */
        PUBWEAK DMA25_IRQHandler                                  /*  DMA channel 25 transfer complete */
        PUBWEAK DMA26_IRQHandler                                  /*  DMA channel 26 transfer complete */
        PUBWEAK DMA27_IRQHandler                                  /*  DMA channel 27 transfer complete */
        PUBWEAK DMA28_IRQHandler                                  /*  DMA channel 28 transfer complete */
        PUBWEAK DMA29_IRQHandler                                  /*  DMA channel 29 transfer complete */
        PUBWEAK DMA30_IRQHandler                                  /*  DMA channel 30 transfer complete */
        PUBWEAK DMA31_IRQHandler                                  /*  DMA channel 31 transfer complete */
        PUBWEAK DMA_Error_IRQHandler                              /*  DMA error interrupt channels 0-63 */
        PUBWEAK CPM_IRQHandler                                    /*  FPU etc. interrupt */
        PUBWEAK FC_IRQHandler                                     /*  FC Command complete */
        PUBWEAK PMC_IRQHandler                                    /*  PMC Low voltage detect interrupt */
        PUBWEAK TMU_IRQHandler                                    /*  Temperature Monitor Unit interrupt */
        PUBWEAK WDOG0_IRQHandler                                  /*  interrupt request out before wdg reset out */
        PUBWEAK WDOG1_IRQHandler                                  /*  interrupt request out before wdg reset out */
        PUBWEAK WDOG2_IRQHandler                                  /*  interrupt request out before wdg reset out */
        PUBWEAK FCSMU0_IRQHandler                                 /*  Fault Control and Safety Manage Unit */
        PUBWEAK STCU0_IRQHandler                                  /*  Safety Control Unit interrupt */
        PUBWEAK ERM_fault_IRQHandler                              /*  ERM single/double bit error correction */
        PUBWEAK MAM0_IRQHandler                                   /*  Matrix Access Monitor interrupt */
        PUBWEAK MAM1_IRQHandler                                   /*  Matrix Access Monitor interrupt */
        PUBWEAK WDOG3_IRQHandler                                  /*  Interrupt request out before wdg reset out */
        PUBWEAK RESERVED_62_IRQHandler                            /*  Reserved */
        PUBWEAK RGM_Pre_IRQHandler                                /*  RGM pre-reset Interrupt */
        PUBWEAK RGM_Other_IRQHandler                              /*  RGM other CPU exit reset Interrupt */
        PUBWEAK INTM0_IRQHandler                                  /*  INTM alarm interrupt */
        PUBWEAK ISM0_IRQHandler                                   /*  ISM0 interrupt */
        PUBWEAK MB_IRQHandler                                     /*  Mail Box interrupt */
        PUBWEAK SCG_IRQHandler                                    /*  SCG bus interrupt request */
        PUBWEAK CMU0_IRQHandler                                   /*  CMU0 interrupt */
        PUBWEAK CMU1_IRQHandler                                   /*  CMU1 interrupt */
        PUBWEAK CMU2_IRQHandler                                   /*  CMU2 interrupt */
        PUBWEAK CMU3_IRQHandler                                   /*  CMU3 interrupt */
        PUBWEAK TSTMP0_IRQHandler                                 /*  TimerStamp0 interrupt */
        PUBWEAK TSTMP1_IRQHandler                                 /*  TimerStamp1 interrupt */
        PUBWEAK TSTMP2_IRQHandler                                 /*  TimerStamp2 interrupt */
        PUBWEAK TSTMP3_IRQHandler                                 /*  TimerStamp3 interrupt */
        PUBWEAK CORDIC_IRQHandler                                 /*  CORDIC Accelerator interrupt */
        PUBWEAK HSM0_IRQHandler                                   /*  Crypto interrupt */
        PUBWEAK FCPIT0_IRQHandler                                 /*  FCPIT0 interrupt */
        PUBWEAK FCPIT1_IRQHandler                                 /*  FCPIT0 interrupt */
        PUBWEAK RTC_IRQHandler                                    /*  RTC alarm or seconds interrupt  */
        PUBWEAK ENET_Tx0_IRQHandler                               /*  ENET Transmit Buffer Done for Ring/Queue 0 */
        PUBWEAK ENET_Tx1_IRQHandler                               /*  ENET Transmit Buffer Done for Ring/Queue 1 */
        PUBWEAK ENET_Rx0_IRQHandler                               /*  ENET Receive Buffer Done for Ring/Queue 0 */
        PUBWEAK ENET_Rx1_IRQHandler                               /*  ENET Receive Buffer Done for Ring/Queue 1 */
        PUBWEAK ENET_System_IRQHandler                            /*  ENET System interrupt */
        PUBWEAK AONTIMER_IRQHandler                               /*  AONTIMER interrupt request */
        PUBWEAK SWI_IRQHandler                                    /*  Software interrupt */
        PUBWEAK TSTMP4_IRQHandler                                 /*  TimerStamp4 interrupt */
        PUBWEAK FREQM_IRQHandler                                  /*  FREQM interrupt */
        PUBWEAK PORTA_IRQHandler                                  /*  Port A pin detect interrupt */
        PUBWEAK PORTB_IRQHandler                                  /*  Port B pin detect interrupt */
        PUBWEAK PORTC_IRQHandler                                  /*  Port C pin detect interrupt */
        PUBWEAK PORTD_IRQHandler                                  /*  Port D pin detect interrupt */
        PUBWEAK PORTE_IRQHandler                                  /*  Port E pin detect interrupt */
        PUBWEAK PORTF_IRQHandler                                  /*  Port F pin detect interrupt */
        PUBWEAK PORTG_IRQHandler                                  /*  Port G pin detect interrupt */
        PUBWEAK PORTH_IRQHandler                                  /*  Port H pin detect interrupt */
        PUBWEAK PORTI_IRQHandler                                  /*  Port I pin detect interrupt */
        PUBWEAK Can_IsrCAN0_All                                   /*  CAN0 Interrupt */
        PUBWEAK Can_IsrCAN1_All                                   /*  CAN1 Interrupt */
        PUBWEAK Can_IsrCAN2_All                                   /*  CAN2 Interrupt */
        PUBWEAK Can_IsrCAN3_All                                   /*  CAN3 Interrupt */
        PUBWEAK Can_IsrCAN4_All                                   /*  CAN4 Interrupt */
        PUBWEAK Can_IsrCAN5_All                                   /*  CAN5 Interrupt */
        PUBWEAK Can_IsrCAN6_All                                   /*  CAN6 Interrupt */
        PUBWEAK Can_IsrCAN7_All                                   /*  CAN7 Interrupt */
        PUBWEAK FCIIC0_IRQHandler                                 /*  FCIIC0 Interrupt */
        PUBWEAK FCIIC1_IRQHandler                                 /*  FCIIC1 Interrupt */
        PUBWEAK FCSPI0_IRQHandler                                 /*  FCSPI0 Interrupt */
        PUBWEAK FCSPI1_IRQHandler                                 /*  FCSPI1 Interrupt */
        PUBWEAK FCSPI2_IRQHandler                                 /*  FCSPI2 Interrupt */
        PUBWEAK FCSPI3_IRQHandler                                 /*  FCSPI0 Interrupt */
        PUBWEAK FCSPI4_IRQHandler                                 /*  FCSPI1 Interrupt */
        PUBWEAK FCSPI5_IRQHandler                                 /*  FCSPI2 Interrupt */
        PUBWEAK FCUART0_RxTx_IRQHandler                           /*  FCUART0 Transmit / Receive Interrupt */
        PUBWEAK FCUART1_RxTx_IRQHandler                           /*  FCUART1 Transmit / Receive  Interrupt */
        PUBWEAK FCUART2_RxTx_IRQHandler                           /*  FCUART2 Transmit / Receive  Interrupt */
        PUBWEAK FCUART3_RxTx_IRQHandler                           /*  FCUART3 Transmit / Receive Interrupt */
        PUBWEAK FCUART4_RxTx_IRQHandler                           /*  FCUART4 Transmit / Receive  Interrupt */
        PUBWEAK FCUART5_RxTx_IRQHandler                           /*  FCUART5 Transmit / Receive  Interrupt */
        PUBWEAK FCUART6_RxTx_IRQHandler                           /*  FCUART6 Transmit / Receive Interrupt */
        PUBWEAK FCUART7_RxTx_IRQHandler                           /*  FCUART7 Transmit / Receive  Interrupt */
        PUBWEAK FCUART8_RxTx_IRQHandler                           /*  FCUART8 Transmit / Receive  Interrupt */
        PUBWEAK FCUART9_RxTx_IRQHandler                           /*  FCUART9 Transmit / Receive Interrupt */
        PUBWEAK FCUART10_RxTx_IRQHandler                          /*  FCUART10 Transmit / Receive  Interrupt */
        PUBWEAK FCUART11_RxTx_IRQHandler                          /*  FCUART11 Transmit / Receive  Interrupt */
        PUBWEAK FCUART12_RxTx_IRQHandler                          /*  FCUART12 Transmit / Receive  Interrupt */
        PUBWEAK FCUART13_RxTx_IRQHandler                          /*  FCUART13 Transmit / Receive  Interrupt */
        PUBWEAK Can_IsrCAN12_All                                  /*  CAN12 Interrupt */
        PUBWEAK Can_IsrCAN13_All                                  /*  CAN13 Interrupt */
        PUBWEAK FTU0_IRQHandler                                   /*  FTU0 all source interrupt */
        PUBWEAK FTU1_IRQHandler                                   /*  FTU1 all source interrupt */
        PUBWEAK FTU2_IRQHandler                                   /*  FTU2 all source interrupt */
        PUBWEAK FTU3_IRQHandler                                   /*  FTU3 all source interrupt */
        PUBWEAK FTU4_IRQHandler                                   /*  FTU4 all source interrupt */
        PUBWEAK FTU5_IRQHandler                                   /*  FTU5 all source interrupt */
        PUBWEAK FTU6_IRQHandler                                   /*  FTU6 all source interrupt */
        PUBWEAK FTU7_IRQHandler                                   /*  FTU7 all source interrupt */
        PUBWEAK HSADC0_IRQHandler                                 /*  HSADC0 interrupt request */
        PUBWEAK HSADC1_IRQHandler                                 /*  HSADC1 interrupt request */
        PUBWEAK HSADC2_IRQHandler                                 /*  HSADC2 interrupt request */
        PUBWEAK HSADC3_IRQHandler                                 /*  HSADC3 interrupt request */
        PUBWEAK CMP0_IRQHandler                                   /*  CMP0 interrupt request  */
        PUBWEAK ADC4_IRQHandler                                   /*  ADC4 interrupt request  */
        PUBWEAK ADC0_IRQHandler                                   /*  ADC0 interrupt request. */
        PUBWEAK ADC1_IRQHandler                                   /*  ADC1 interrupt request. */
        PUBWEAK ADC2_IRQHandler                                   /*  ADC2 interrupt request. */
        PUBWEAK ADC3_IRQHandler                                   /*  ADC3 interrupt request. */
        PUBWEAK PTIMER0_IRQHandler                                /*  PTIMER0 interrupt */
        PUBWEAK PTIMER1_IRQHandler                                /*  PTIMER1 interrupt */
        PUBWEAK PTIMER2_IRQHandler                                /*  PTIMER2 interrupt */
        PUBWEAK PTIMER3_IRQHandler                                /*  PTIMER3 interrupt */
        PUBWEAK ADC5_IRQHandler                                   /*  ADC5 interrupt request. */
        PUBWEAK MSC0_IRQHandler                                   /*  MSC interrupt */
        PUBWEAK MSC1_IRQHandler                                   /*  MSC interrupt */
        PUBWEAK Can_IsrCAN8_All                                   /*  CAN6 Interrupt */
        PUBWEAK Can_IsrCAN9_All                                   /*  CAN7 Interrupt */
        PUBWEAK SENT0_IRQHandler                                  /*  SENT all interrupt (fast or slow) */
        PUBWEAK SENT1_IRQHandler                                  /*  SENT all interrupt (fast or slow) */
        PUBWEAK FCSPI6_IRQHandler                                 /*  FCSPI6 Interrupt */
        PUBWEAK FCSPI7_IRQHandler                                 /*  FCSPI7 Interrupt */
        PUBWEAK Can_IsrCAN10_All                                  /*  CAN10 Interrupt */
        PUBWEAK Can_IsrCAN11_All                                  /*  CAN11 Interrupt */
        PUBWEAK CTI0_IRQHandler                                   /*  CTI Interrupt */
        PUBWEAK CTI1_IRQHandler                                   /*  CTI Interrupt */
        PUBWEAK CTI2_IRQHandler                                   /*  CTI Interrupt */
        PUBWEAK CMU4_IRQHandler                                   /*  CMU4 Interrupt */
        PUBWEAK CTI3_IRQHandler                                   /*  CTI Interrupt */
        PUBWEAK SSI_IRQHandler                                    /*  SSI0 Interrupt ORed interrupt */
        PUBWEAK SDADC0_0_IRQHandler                               /*  SDADC0 channel 0 Interrupt */
        PUBWEAK SDADC0_1_IRQHandler                               /*  SDADC0 channel 1 Interrupt */
        PUBWEAK SDADC0_2_IRQHandler                               /*  SDADC0 channel 2 Interrupt */
        PUBWEAK SDADC1_0_IRQHandler                               /*  SDADC1 channel 0 Interrupt */
        PUBWEAK SDADC1_1_IRQHandler                               /*  SDADC1 channel 1 Interrupt */
        PUBWEAK SDADC1_2_IRQHandler                               /*  SDADC1 channel 2 Interrupt */
        PUBWEAK EFTU0_Error_IRQHandler                            /*  eFTU0 Error Interrupt */
        PUBWEAK EFTU1_Error_IRQHandler                            /*  eFTU1 Error Interrupt */
        PUBWEAK EFTU2_Error_IRQHandler                            /*  eFTU2 Error Interrupt */
        PUBWEAK EFTU0_TIM_0_3_IRQHandler                          /*  eFTU0 TIM 0-3 source Interrupt */
        PUBWEAK EFTU1_TIM_0_3_IRQHandler                          /*  eFTU1 TIM 0-3 source Interrupt */
        PUBWEAK EFTU2_TIM_0_3_IRQHandler                          /*  eFTU2 TIM 0-3 source Interrupt */
        PUBWEAK EFTU0_TIM_4_7_IRQHandler                          /*  eFTU0 TIM 4-7 source Interrupt */
        PUBWEAK EFTU1_TIM_4_7_IRQHandler                          /*  eFTU1 TIM 4-7 source Interrupt */
        PUBWEAK EFTU2_TIM_4_7_IRQHandler                          /*  eFTU2 TIM 4-7 source Interrupt */
        PUBWEAK EFTU0_TOM_0_7_IRQHandler                          /*  eFTU0 TOM 0-7 source Interrupt */
        PUBWEAK EFTU1_TOM_0_7_IRQHandler                          /*  eFTU1 TOM 0-7 source Interrupt */
        PUBWEAK EFTU2_TOM_0_7_IRQHandler                          /*  eFTU2 TOM 0-7 source Interrupt */
        PUBWEAK EFTU0_TOM_8_15_IRQHandler                         /*  eFTU0 TOM 8-15 source Interrupt */
        PUBWEAK EFTU1_TOM_8_15_IRQHandler                         /*  eFTU1 TOM 8-15 source Interrupt */
        PUBWEAK EFTU2_TOM_8_15_IRQHandler                         /*  eFTU2 TOM 8-15 source Interrupt */
        PUBWEAK CAN0_Error_IRQHandler                             /*  CAN0 error Interrupt */
        PUBWEAK CAN1_Error_IRQHandler                             /*  CAN1 error Interrupt */
        PUBWEAK CAN2_Error_IRQHandler                             /*  CAN2 error Interrupt */
        PUBWEAK CAN3_Error_IRQHandler                             /*  CAN3 error Interrupt */
        PUBWEAK CAN4_Error_IRQHandler                             /*  CAN4 error Interrupt */
        PUBWEAK CAN5_Error_IRQHandler                             /*  CAN5 error Interrupt */
        PUBWEAK CAN6_Error_IRQHandler                             /*  CAN6 error Interrupt */
        PUBWEAK CAN7_Error_IRQHandler                             /*  CAN7 error Interrupt */
        PUBWEAK CAN8_Error_IRQHandler                             /*  CAN8 error Interrupt */
        PUBWEAK CAN9_Error_IRQHandler                             /*  CAN9 error Interrupt */
        PUBWEAK CAN10_Error_IRQHandler                            /*  CAN10 error Interrupt */
        PUBWEAK CAN11_Error_IRQHandler                            /*  CAN11 error Interrupt */
        PUBWEAK CAN12_Error_IRQHandler                            /*  CAN12 error Interrupt */
        PUBWEAK CAN13_Error_IRQHandler                            /*  CAN13 error Interrupt */
        PUBWEAK QDT0_IRQHandler                                   /*  QDT0 Interrupt */
        PUBWEAK QDT1_IRQHandler                                   /*  QDT1 Interrupt */
        PUBWEAK QDT2_IRQHandler                                   /*  QDT2 Interrupt */
        PUBWEAK QDT3_IRQHandler                                   /*  QDT3 Interrupt */
        PUBWEAK LU0_IRQHandler                                    /*  LU0 Interrupt */
        PUBWEAK LU1_IRQHandler                                    /*  LU1 Interrupt */
        PUBWEAK TPU0_CH0_7_IRQHandler                             /*  TPU0 CH0-7 interrupt */
        PUBWEAK TPU0_CH8_15_IRQHandler                            /*  TPU0 CH8-15 interrupt */
        PUBWEAK TPU0_CH16_23_IRQHandler                           /*  TPU0 CH16-23 interrupt */
        PUBWEAK TPU0_CH24_31_IRQHandler                           /*  TPU0 CH24-31 interrupt */
        PUBWEAK HSM0_CRYPTO_IRQHandler                            /*  HSM crypto interrupt */
        PUBWEAK DefaultISR                                        /*  DefaultISR */
        SECTION .text:CODE:REORDER:NOROOT(1)

DMA0_IRQHandler                                   /*  DMA channel 0 transfer complete */
DMA1_IRQHandler                                   /*  DMA channel 1 transfer complete */
DMA2_IRQHandler                                   /*  DMA channel 2 transfer complete */
DMA3_IRQHandler                                   /*  DMA channel 3 transfer complete */
DMA4_IRQHandler                                   /*  DMA channel 4 transfer complete */
DMA5_IRQHandler                                   /*  DMA channel 5 transfer complete */
DMA6_IRQHandler                                   /*  DMA channel 6 transfer complete */
DMA7_IRQHandler                                   /*  DMA channel 7 transfer complete */
DMA8_IRQHandler                                   /*  DMA channel 8 transfer complete */
DMA9_IRQHandler                                   /*  DMA channel 9 transfer complete */
DMA10_IRQHandler                                  /*  DMA channel 10 transfer complete */
DMA11_IRQHandler                                  /*  DMA channel 11 transfer complete */
DMA12_IRQHandler                                  /*  DMA channel 12 transfer complete */
DMA13_IRQHandler                                  /*  DMA channel 13 transfer complete */
DMA14_IRQHandler                                  /*  DMA channel 14 transfer complete */
DMA15_IRQHandler                                  /*  DMA channel 15 transfer complete */
DMA16_IRQHandler                                  /*  DMA channel 16 transfer complete */
DMA17_IRQHandler                                  /*  DMA channel 17 transfer complete */
DMA18_IRQHandler                                  /*  DMA channel 18 transfer complete */
DMA19_IRQHandler                                  /*  DMA channel 19 transfer complete */
DMA20_IRQHandler                                  /*  DMA channel 20 transfer complete */
DMA21_IRQHandler                                  /*  DMA channel 21 transfer complete */
DMA22_IRQHandler                                  /*  DMA channel 22 transfer complete */
DMA23_IRQHandler                                  /*  DMA channel 23 transfer complete */
DMA24_IRQHandler                                  /*  DMA channel 24 transfer complete */
DMA25_IRQHandler                                  /*  DMA channel 25 transfer complete */
DMA26_IRQHandler                                  /*  DMA channel 26 transfer complete */
DMA27_IRQHandler                                  /*  DMA channel 27 transfer complete */
DMA28_IRQHandler                                  /*  DMA channel 28 transfer complete */
DMA29_IRQHandler                                  /*  DMA channel 29 transfer complete */
DMA30_IRQHandler                                  /*  DMA channel 30 transfer complete */
DMA31_IRQHandler                                  /*  DMA channel 31 transfer complete */
DMA_Error_IRQHandler                              /*  DMA error interrupt channels 0-63 */
CPM_IRQHandler                                    /*  FPU etc. interrupt */
FC_IRQHandler                                     /*  FC Command complete */
PMC_IRQHandler                                    /*  PMC Low voltage detect interrupt */
TMU_IRQHandler                                    /*  Temperature Monitor Unit interrupt */
WDOG0_IRQHandler                                  /*  interrupt request out before wdg reset out */
WDOG1_IRQHandler                                  /*  interrupt request out before wdg reset out */
WDOG2_IRQHandler                                  /*  interrupt request out before wdg reset out */
FCSMU0_IRQHandler                                 /*  Fault Control and Safety Manage Unit */
STCU0_IRQHandler                                  /*  Safety Control Unit interrupt */
ERM_fault_IRQHandler                              /*  ERM single/double bit error correction */
MAM0_IRQHandler                                   /*  Matrix Access Monitor interrupt */
MAM1_IRQHandler                                   /*  Matrix Access Monitor interrupt */
WDOG3_IRQHandler                                  /*  Interrupt request out before wdg reset out */
RESERVED_62_IRQHandler                            /*  Reserved */
RGM_Pre_IRQHandler                                /*  RGM pre-reset Interrupt */
RGM_Other_IRQHandler                              /*  RGM other CPU exit reset Interrupt */
INTM0_IRQHandler                                  /*  INTM alarm interrupt */
ISM0_IRQHandler                                   /*  ISM0 interrupt */
MB_IRQHandler                                     /*  Mail Box interrupt */
SCG_IRQHandler                                    /*  SCG bus interrupt request */
CMU0_IRQHandler                                   /*  CMU0 interrupt */
CMU1_IRQHandler                                   /*  CMU1 interrupt */
CMU2_IRQHandler                                   /*  CMU2 interrupt */
CMU3_IRQHandler                                   /*  CMU3 interrupt */
TSTMP0_IRQHandler                                 /*  TimerStamp0 interrupt */
TSTMP1_IRQHandler                                 /*  TimerStamp1 interrupt */
TSTMP2_IRQHandler                                 /*  TimerStamp2 interrupt */
TSTMP3_IRQHandler                                 /*  TimerStamp3 interrupt */
CORDIC_IRQHandler                                 /*  CORDIC Accelerator interrupt */
HSM0_IRQHandler                                   /*  Crypto interrupt */
FCPIT0_IRQHandler                                 /*  FCPIT0 interrupt */
FCPIT1_IRQHandler                                 /*  FCPIT0 interrupt */
RTC_IRQHandler                                    /*  RTC alarm or seconds interrupt  */
ENET_Tx0_IRQHandler                               /*  ENET Transmit Buffer Done for Ring/Queue 0 */
ENET_Tx1_IRQHandler                               /*  ENET Transmit Buffer Done for Ring/Queue 1 */
ENET_Rx0_IRQHandler                               /*  ENET Receive Buffer Done for Ring/Queue 0 */
ENET_Rx1_IRQHandler                               /*  ENET Receive Buffer Done for Ring/Queue 1 */
ENET_System_IRQHandler                            /*  ENET System interrupt */
AONTIMER_IRQHandler                               /*  AONTIMER interrupt request */
SWI_IRQHandler                                    /*  Software interrupt */
TSTMP4_IRQHandler                                 /*  TimerStamp4 interrupt */
FREQM_IRQHandler                                  /*  FREQM interrupt */
PORTA_IRQHandler                                  /*  Port A pin detect interrupt */
PORTB_IRQHandler                                  /*  Port B pin detect interrupt */
PORTC_IRQHandler                                  /*  Port C pin detect interrupt */
PORTD_IRQHandler                                  /*  Port D pin detect interrupt */
PORTE_IRQHandler                                  /*  Port E pin detect interrupt */
PORTF_IRQHandler                                  /*  Port F pin detect interrupt */
PORTG_IRQHandler                                  /*  Port G pin detect interrupt */
PORTH_IRQHandler                                  /*  Port H pin detect interrupt */
PORTI_IRQHandler                                  /*  Port I pin detect interrupt */
Can_IsrCAN0_All                                   /*  CAN0 Interrupt */
Can_IsrCAN1_All                                   /*  CAN1 Interrupt */
Can_IsrCAN2_All                                   /*  CAN2 Interrupt */
Can_IsrCAN3_All                                   /*  CAN3 Interrupt */
Can_IsrCAN4_All                                   /*  CAN4 Interrupt */
Can_IsrCAN5_All                                   /*  CAN5 Interrupt */
Can_IsrCAN6_All                                   /*  CAN6 Interrupt */
Can_IsrCAN7_All                                   /*  CAN7 Interrupt */
FCIIC0_IRQHandler                                 /*  FCIIC0 Interrupt */
FCIIC1_IRQHandler                                 /*  FCIIC1 Interrupt */
FCSPI0_IRQHandler                                 /*  FCSPI0 Interrupt */
FCSPI1_IRQHandler                                 /*  FCSPI1 Interrupt */
FCSPI2_IRQHandler                                 /*  FCSPI2 Interrupt */
FCSPI3_IRQHandler                                 /*  FCSPI0 Interrupt */
FCSPI4_IRQHandler                                 /*  FCSPI1 Interrupt */
FCSPI5_IRQHandler                                 /*  FCSPI2 Interrupt */
FCUART0_RxTx_IRQHandler                           /*  FCUART0 Transmit / Receive Interrupt */
FCUART1_RxTx_IRQHandler                           /*  FCUART1 Transmit / Receive  Interrupt */
FCUART2_RxTx_IRQHandler                           /*  FCUART2 Transmit / Receive  Interrupt */
FCUART3_RxTx_IRQHandler                           /*  FCUART3 Transmit / Receive Interrupt */
FCUART4_RxTx_IRQHandler                           /*  FCUART4 Transmit / Receive  Interrupt */
FCUART5_RxTx_IRQHandler                           /*  FCUART5 Transmit / Receive  Interrupt */
FCUART6_RxTx_IRQHandler                           /*  FCUART6 Transmit / Receive Interrupt */
FCUART7_RxTx_IRQHandler                           /*  FCUART7 Transmit / Receive  Interrupt */
FCUART8_RxTx_IRQHandler                           /*  FCUART8 Transmit / Receive  Interrupt */
FCUART9_RxTx_IRQHandler                           /*  FCUART9 Transmit / Receive Interrupt */
FCUART10_RxTx_IRQHandler                          /*  FCUART10 Transmit / Receive  Interrupt */
FCUART11_RxTx_IRQHandler                          /*  FCUART11 Transmit / Receive  Interrupt */
FCUART12_RxTx_IRQHandler                          /*  FCUART12 Transmit / Receive  Interrupt */
FCUART13_RxTx_IRQHandler                          /*  FCUART13 Transmit / Receive  Interrupt */
Can_IsrCAN12_All                                  /*  CAN12 Interrupt */
Can_IsrCAN13_All                                  /*  CAN13 Interrupt */
FTU0_IRQHandler                                   /*  FTU0 all source interrupt */
FTU1_IRQHandler                                   /*  FTU1 all source interrupt */
FTU2_IRQHandler                                   /*  FTU2 all source interrupt */
FTU3_IRQHandler                                   /*  FTU3 all source interrupt */
FTU4_IRQHandler                                   /*  FTU4 all source interrupt */
FTU5_IRQHandler                                   /*  FTU5 all source interrupt */
FTU6_IRQHandler                                   /*  FTU6 all source interrupt */
FTU7_IRQHandler                                   /*  FTU7 all source interrupt */
HSADC0_IRQHandler                                 /*  HSADC0 interrupt request */
HSADC1_IRQHandler                                 /*  HSADC1 interrupt request */
HSADC2_IRQHandler                                 /*  HSADC2 interrupt request */
HSADC3_IRQHandler                                 /*  HSADC3 interrupt request */
CMP0_IRQHandler                                   /*  CMP0 interrupt request  */
ADC4_IRQHandler                                   /*  ADC4 interrupt request  */
ADC0_IRQHandler                                   /*  ADC0 interrupt request. */
ADC1_IRQHandler                                   /*  ADC1 interrupt request. */
ADC2_IRQHandler                                   /*  ADC2 interrupt request. */
ADC3_IRQHandler                                   /*  ADC3 interrupt request. */
PTIMER0_IRQHandler                                /*  PTIMER0 interrupt */
PTIMER1_IRQHandler                                /*  PTIMER1 interrupt */
PTIMER2_IRQHandler                                /*  PTIMER2 interrupt */
PTIMER3_IRQHandler                                /*  PTIMER3 interrupt */
ADC5_IRQHandler                                   /*  ADC5 interrupt request. */
MSC0_IRQHandler                                   /*  MSC interrupt */
MSC1_IRQHandler                                   /*  MSC interrupt */
Can_IsrCAN8_All                                   /*  CAN6 Interrupt */
Can_IsrCAN9_All                                   /*  CAN7 Interrupt */
SENT0_IRQHandler                                  /*  SENT all interrupt (fast or slow) */
SENT1_IRQHandler                                  /*  SENT all interrupt (fast or slow) */
FCSPI6_IRQHandler                                 /*  FCSPI6 Interrupt */
FCSPI7_IRQHandler                                 /*  FCSPI7 Interrupt */
Can_IsrCAN10_All                                  /*  CAN10 Interrupt */
Can_IsrCAN11_All                                  /*  CAN11 Interrupt */
CTI0_IRQHandler                                   /*  CTI Interrupt */
CTI1_IRQHandler                                   /*  CTI Interrupt */
CTI2_IRQHandler                                   /*  CTI Interrupt */
CMU4_IRQHandler                                   /*  CMU4 Interrupt */
CTI3_IRQHandler                                   /*  CTI Interrupt */
SSI_IRQHandler                                    /*  SSI0 Interrupt ORed interrupt */
SDADC0_0_IRQHandler                               /*  SDADC0 channel 0 Interrupt */
SDADC0_1_IRQHandler                               /*  SDADC0 channel 1 Interrupt */
SDADC0_2_IRQHandler                               /*  SDADC0 channel 2 Interrupt */
SDADC1_0_IRQHandler                               /*  SDADC1 channel 0 Interrupt */
SDADC1_1_IRQHandler                               /*  SDADC1 channel 1 Interrupt */
SDADC1_2_IRQHandler                               /*  SDADC1 channel 2 Interrupt */
EFTU0_Error_IRQHandler                            /*  eFTU0 Error Interrupt */
EFTU1_Error_IRQHandler                            /*  eFTU1 Error Interrupt */
EFTU2_Error_IRQHandler                            /*  eFTU2 Error Interrupt */
EFTU0_TIM_0_3_IRQHandler                          /*  eFTU0 TIM 0-3 source Interrupt */
EFTU1_TIM_0_3_IRQHandler                          /*  eFTU1 TIM 0-3 source Interrupt */
EFTU2_TIM_0_3_IRQHandler                          /*  eFTU2 TIM 0-3 source Interrupt */
EFTU0_TIM_4_7_IRQHandler                          /*  eFTU0 TIM 4-7 source Interrupt */
EFTU1_TIM_4_7_IRQHandler                          /*  eFTU1 TIM 4-7 source Interrupt */
EFTU2_TIM_4_7_IRQHandler                          /*  eFTU2 TIM 4-7 source Interrupt */
EFTU0_TOM_0_7_IRQHandler                          /*  eFTU0 TOM 0-7 source Interrupt */
EFTU1_TOM_0_7_IRQHandler                          /*  eFTU1 TOM 0-7 source Interrupt */
EFTU2_TOM_0_7_IRQHandler                          /*  eFTU2 TOM 0-7 source Interrupt */
EFTU0_TOM_8_15_IRQHandler                         /*  eFTU0 TOM 8-15 source Interrupt */
EFTU1_TOM_8_15_IRQHandler                         /*  eFTU1 TOM 8-15 source Interrupt */
EFTU2_TOM_8_15_IRQHandler                         /*  eFTU2 TOM 8-15 source Interrupt */
CAN0_Error_IRQHandler                             /*  CAN0 error Interrupt */
CAN1_Error_IRQHandler                             /*  CAN1 error Interrupt */
CAN2_Error_IRQHandler                             /*  CAN2 error Interrupt */
CAN3_Error_IRQHandler                             /*  CAN3 error Interrupt */
CAN4_Error_IRQHandler                             /*  CAN4 error Interrupt */
CAN5_Error_IRQHandler                             /*  CAN5 error Interrupt */
CAN6_Error_IRQHandler                             /*  CAN6 error Interrupt */
CAN7_Error_IRQHandler                             /*  CAN7 error Interrupt */
CAN8_Error_IRQHandler                             /*  CAN8 error Interrupt */
CAN9_Error_IRQHandler                             /*  CAN9 error Interrupt */
CAN10_Error_IRQHandler                            /*  CAN10 error Interrupt */
CAN11_Error_IRQHandler                            /*  CAN11 error Interrupt */
CAN12_Error_IRQHandler                            /*  CAN12 error Interrupt */
CAN13_Error_IRQHandler                            /*  CAN13 error Interrupt */
QDT0_IRQHandler                                   /*  QDT0 Interrupt */
QDT1_IRQHandler                                   /*  QDT1 Interrupt */
QDT2_IRQHandler                                   /*  QDT2 Interrupt */
QDT3_IRQHandler                                   /*  QDT3 Interrupt */
LU0_IRQHandler                                    /*  LU0 Interrupt */
LU1_IRQHandler                                    /*  LU1 Interrupt */
TPU0_CH0_7_IRQHandler                             /*  TPU0 CH0-7 interrupt */
TPU0_CH8_15_IRQHandler                            /*  TPU0 CH8-15 interrupt */
TPU0_CH16_23_IRQHandler                           /*  TPU0 CH16-23 interrupt */
TPU0_CH24_31_IRQHandler                           /*  TPU0 CH24-31 interrupt */
HSM0_CRYPTO_IRQHandler                            /*  HSM crypto interrupt */
DefaultISR                                        /*  DefaultISR */
        B DefaultISR

        END