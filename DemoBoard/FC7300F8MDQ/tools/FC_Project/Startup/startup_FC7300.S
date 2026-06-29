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

    .extern __stack_top
    .extern Bsp_CrashRecord_ResetSnapshot
    .extern Bsp_CrashRecord_BootFailureSnapshot
    .extern DefaultISR_Process

/* ================================================================================================== */
/*                                        Set vector table                                            */
/* ================================================================================================== */
    .section .isr_vector, "a"
    .align 2

    /* vector table */
__isr_vector:
    .long   __stack_top                                     /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
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

    .size    __isr_vector, . - __isr_vector


/**************************************************************/
/************************ set other  ***************************/
    .text
    .thumb

/* Reset Handler */

    .thumb_func
    .align 2
    .globl   Reset_Handler
    .weak    Reset_Handler
    .type    Reset_Handler, %function

Reset_Handler:
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
    ldr     r1, =__rom_intvec_start
    str     r1, [r0]                 /* *(0xE000ED08) = __rom_intvec_start */
    ldr     r2, [r1]                 /* r2 = *(uint32_t *)__rom_intvec_start */
    mov     r3, r2

    /*
      Core0 initializes SRAM/TCM with STCU before the C stack is used.
      The selected RAM must not be accessed while hardware initialization is running.
    */
    ldr     r0, =0xE0080004           /* CPM_MISCR address: CPU_ID at bits[19:17] */
    ldr     r1, [r0]
    ubfx    r1, r1, #17, #3           /* CPM_MISCR_CPU_ID: r1 = (r1 >> 17) & 0x7U; */
    cmp     r1, #0                    /* CPU0? */
    bne     EarlyRamInitDone

    ldr     r0, =0x40072020           /* SCM_MAMECCEN0 */
    ldr     r1, =0x0AAAAAAA
    str     r1, [r0]
    ldr     r0, =0x40072024           /* SCM_MAMECCEN1 */
    ldr     r1, =0x002AABAA
    str     r1, [r0]
    ldr     r0, =0x40072028           /* SCM_CPU0ECCEN */
    ldr     r1, =0x00000A8A
    str     r1, [r0]
    ldr     r0, =0x40072030           /* SCM_CPU1ECCEN */
    str     r1, [r0]
    ldr     r0, =0x40072038           /* SCM_CPU2ECCEN */
    str     r1, [r0]
    ldr     r0, =0x40072130           /* SCM_CPU3ECCEN */
    ldr     r1, =0x00000AAA
    str     r1, [r0]

    ldr     r0, =0x400241FC           /* PCC_STCU */
    ldr     r1, =0x00800000           /* Control the STCU peripheral clock, 1b: enable clock */
    str     r1, [r0]
    dsb
    isb

    ldr     r0, =0x40046008           /* RGM_SRS: System Reset Status Register, record last reset source */
    ldr     r1, [r0]
    /* SYSRST_TOUT, PINRST_TOUT, FSM_ERR, CMU, CLKERR0, CLKERR1, POR, LVR, LBIST */
    ldr     r2, =0xE000C08E           /* Reset sources that require full RAM initialization */
    tst     r1, r2                    /* Bitwise AND, don't keep the result, just update the condition flags */
    bne     EarlyRamInitAll           /* If the tst result is not 0, jump to EarlyRamInitAll */
    tst     r1, #1                    /* RGM_SRS_WAKEUP */
    bne     EarlyRamInitWakeup

    /* SRAM0/1/2_0/1, SRAM2_2, ITCM_CPU0/1/2/3, DTCM0/1_CPU0/1/2/3 */
EarlyRamInitRuntime:
    ldr     r4, =0x0007FFBF           /* All SRAM/TCM except SRAM2_2 crash-record bank */
    movs    r5, #0                    /* STCU_SRAM_INI_CTRL.MODE = POR/STANDBY0 */
    mov     r6, r4                    /* Expected done mask */
    b       EarlyRamInitRun

EarlyRamInitAll:
    ldr     r4, =0x0007FFFF           /* All SRAM/TCM banks */
    movs    r5, #0                    /* STCU_SRAM_INI_CTRL.MODE = POR/STANDBY0 */
    mov     r6, r4                    /* Expected done mask */
    b       EarlyRamInitRun

EarlyRamInitWakeup:
    ldr     r4, =0x0007FFFF           /* Let STCU MODE preserve standby retention banks */
    ldr     r0, =0x40045010           /* SMC_STANDBY_CFG */
    ldr     r5, [r0]
    and     r5, r5, #3
    lsls    r5, r5, #16               /* STCU_SRAM_INI_CTRL.MODE: OPTION[1:0] Move to STCU_SRAM_INI_CTRL.MODE[17:16] */
    movs    r6, #0                    /* Retention mode can intentionally skip selected banks */

EarlyRamInitRun:
    ldr     r0, =0x4007F04C           /* STCU_SRAM_INI_STATUS */
    ldr     r7, =0x01000000
EarlyRamWaitIdle:                     /* Wait, STCU isn't busy */
    ldr     r1, [r0]
    tst     r1, #2                    /* BUSY */
    beq     EarlyRamClearStatus
    subs    r7, r7, #1
    bne     EarlyRamWaitIdle
    b       EarlyRamInitWaitIdleTimeout

EarlyRamClearStatus:
    movs    r1, #0
    str     r1, [r0]                  /* DONE/ABORT are W0C */
    ldr     r0, =0x4007F054           /* STCU_SRAM_INI_DONE_STATUS */
    str     r1, [r0]
    ldr     r0, =0x4007F050           /* STCU_SRAM_INI_SEL */
    str     r4, [r0]
    ldr     r0, =0x4007F048           /* STCU_SRAM_INI_CTRL */
    str     r5, [r0]                  /* Configure MODE before EN */
    dsb
    isb
    orr     r1, r5, #1                /* EN */
    str     r1, [r0]

    ldr     r0, =0x4007F04C           /* STCU_SRAM_INI_STATUS */
    ldr     r7, =0x01000000
EarlyRamWaitDone:
    ldr     r1, [r0]
    tst     r1, #4                    /* ABORT */
    bne     EarlyRamInitAbort
    tst     r1, #1                    /* DONE */
    bne     EarlyRamCheckDone
    subs    r7, r7, #1
    bne     EarlyRamWaitDone
    b       EarlyRamInitWaitDoneTimeout

EarlyRamCheckDone:
    cmp     r6, #0
    beq     EarlyRamClearDoneFlag
    ldr     r0, =0x4007F054           /* STCU_SRAM_INI_DONE_STATUS */
    ldr     r1, [r0]
    and     r1, r1, r6
    cmp     r1, r6
    bne     EarlyRamInitDoneMismatch

EarlyRamClearDoneFlag:
    ldr     r0, =0x4007F04C           /* STCU_SRAM_INI_STATUS */
    movs    r1, #0
    str     r1, [r0]                  /* Clear DONE before later software observes STCU */
    dsb
    isb

    ldr     r0, =Bsp_CrashRecord_ResetSnapshot
    movs    r1, #0
    str     r1, [r0, #0]              /* magic: invalid until the full snapshot is written */
    movs    r1, #1
    str     r1, [r0, #4]              /* version */
    movs    r1, #56
    str     r1, [r0, #8]              /* length: sizeof(Bsp_CrashRecord_ResetSnapshotType) */

    ldr     r2, =0x40046000           /* RGM base */
    ldr     r1, [r2, #0x008]          /* RGM_SRS */
    str     r1, [r0, #12]
    ldr     r1, [r2, #0x018]          /* RGM_SSRS */
    str     r1, [r0, #16]
    ldr     r1, [r2, #0x108]          /* RGM_C0_SRS */
    str     r1, [r0, #20]
    ldr     r1, [r2, #0x208]          /* RGM_C1_SRS */
    str     r1, [r0, #24]
    ldr     r1, [r2, #0x308]          /* RGM_C2_SRS */
    str     r1, [r0, #28]
    ldr     r1, [r2, #0x408]          /* RGM_C3_SRS */
    str     r1, [r0, #32]
    ldr     r1, [r2, #0x114]          /* RGM_C0_SSRS */
    str     r1, [r0, #36]
    ldr     r1, [r2, #0x214]          /* RGM_C1_SSRS */
    str     r1, [r0, #40]
    ldr     r1, [r2, #0x314]          /* RGM_C2_SSRS */
    str     r1, [r0, #44]
    ldr     r1, [r2, #0x414]          /* RGM_C3_SSRS */
    str     r1, [r0, #48]

    ldr     r1, [r0, #16]
    str     r1, [r2, #0x018]          /* RGM_SSRS is W1C */
    ldr     r1, [r0, #36]
    str     r1, [r2, #0x114]          /* RGM_C0_SSRS is W1C */
    ldr     r1, [r0, #40]
    str     r1, [r2, #0x214]          /* RGM_C1_SSRS is W1C */
    ldr     r1, [r0, #44]
    str     r1, [r2, #0x314]          /* RGM_C2_SSRS is W1C */
    ldr     r1, [r0, #48]
    str     r1, [r2, #0x414]          /* RGM_C3_SSRS is W1C */
    movs    r1, #1
    str     r1, [r0, #52]             /* sticky_cleared */
    dsb
    isb
    ldr     r1, =0x52475354           /* "RGST" */
    str     r1, [r0, #0]
    dsb
    isb

    ldr     r0, =0x40072020           /* SCM_MAMECCEN0 */
    ldr     r1, =0x0FFFFFFF
    str     r1, [r0]
    ldr     r0, =0x40072024           /* SCM_MAMECCEN1 */
    ldr     r1, =0x003FFFFF
    str     r1, [r0]
    ldr     r0, =0x40072028           /* SCM_CPU0ECCEN */
    ldr     r1, =0x00000FCF
    str     r1, [r0]
    ldr     r0, =0x40072030           /* SCM_CPU1ECCEN */
    str     r1, [r0]
    ldr     r0, =0x40072038           /* SCM_CPU2ECCEN */
    str     r1, [r0]
    ldr     r0, =0x40072130           /* SCM_CPU3ECCEN */
    ldr     r1, =0x00000FFF
    str     r1, [r0]
    dsb
    isb
    b       EarlyRamInitDone

EarlyRamInitWaitIdleTimeout:
    movs    r2, #1                    /* BSP_CRASH_RECORD_BOOT_FAILURE_STCU_WAIT_IDLE_TIMEOUT */
    b       EarlyRamInitFailed

EarlyRamInitAbort:
    movs    r2, #2                    /* BSP_CRASH_RECORD_BOOT_FAILURE_STCU_ABORT */
    b       EarlyRamInitFailed

EarlyRamInitWaitDoneTimeout:
    movs    r2, #3                    /* BSP_CRASH_RECORD_BOOT_FAILURE_STCU_WAIT_DONE_TIMEOUT */
    b       EarlyRamInitFailed

EarlyRamInitDoneMismatch:
    movs    r2, #4                    /* BSP_CRASH_RECORD_BOOT_FAILURE_STCU_DONE_MASK_MISMATCH */
    b       EarlyRamInitFailed

EarlyRamInitFailed:
    cpsid   i
    mov     r8, r2                    /* Preserve failure reason while reading STCU registers */

    ldr     r0, =0x4007F04C           /* STCU_SRAM_INI_STATUS */
    ldr     r1, [r0]
    ldr     r0, =0x4007F050           /* STCU_SRAM_INI_SEL */
    ldr     r2, [r0]
    tst     r1, #2                    /* BUSY */
    beq     EarlyRamRecordBootFailure
    tst     r2, #0x40                 /* SRAM2_2 crash-record bank selected */
    bne     EarlyRamRequestReset      /* Do not touch retained RAM while its bank may be initializing */

EarlyRamRecordBootFailure:
    ldr     r0, =Bsp_CrashRecord_BootFailureSnapshot
    movs    r3, #0
    str     r3, [r0, #0]              /* magic: invalid until the full snapshot is written */
    movs    r3, #1
    str     r3, [r0, #4]              /* version */
    movs    r3, #48
    str     r3, [r0, #8]              /* length: sizeof(Bsp_CrashRecord_BootFailureSnapshotType) */
    mov     r3, r8
    str     r3, [r0, #12]             /* reason */
    ldr     r3, =0x40046008           /* RGM_SRS */
    ldr     r3, [r3]
    str     r3, [r0, #16]
    ldr     r3, =0x4007F04C           /* STCU_SRAM_INI_STATUS */
    ldr     r3, [r3]
    str     r3, [r0, #20]             /* status */
    ldr     r3, =0x4007F054           /* STCU_SRAM_INI_DONE_STATUS */
    ldr     r3, [r3]
    str     r3, [r0, #24]             /* status_aux */
    ldr     r3, =0x4007F050           /* STCU_SRAM_INI_SEL */
    ldr     r3, [r3]
    str     r3, [r0, #28]             /* config */
    ldr     r3, =0x4007F048           /* STCU_SRAM_INI_CTRL */
    ldr     r3, [r3]
    str     r3, [r0, #32]             /* control */
    str     r4, [r0, #36]             /* data0: selected_mask */
    str     r6, [r0, #40]             /* data1: expected_done_mask */
    movs    r3, #1
    str     r3, [r0, #44]             /* reset_requested */
    dsb
    isb
    ldr     r3, =0x4254464C           /* "BTFL" */
    str     r3, [r0, #0]
    dsb
    isb

EarlyRamRequestReset:
    ldr     r0, =0xE000ED0C           /* SCB_AIRCR */
    ldr     r1, [r0]
    ldr     r2, =0x0000FFFF
    and     r1, r1, r2                /* Clear VECTKEY field while preserving AIRCR low bits */
    ldr     r2, =0x05FA0004           /* VECTKEY=0x5FA, SYSRESETREQ=1 */
    orr     r1, r1, r2
    str     r1, [r0]
    dsb
    isb
EarlyRamResetWaitLoop:
    b       EarlyRamResetWaitLoop

EarlyRamInitDone:
    mov     r2, r3

    /*
      initialization startup stack,
      for ecc
    */

    mov     r0, #0
    mov     r1, #0
    sub     r2, r2, #4

LoopClearStack:
    str     r0, [r2]
    sub     r2, r2, #4  /* The stack grows towards lower addresses */
    add     r1, r1, #1
    cmp     r1, #8
    bne     LoopClearStack

    msr     msp, r3

    ldr     r0, =system_init
    bx      r0

    .pool
    .size Reset_Handler, . - Reset_Handler

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    tst     lr, #4
    ite     ne
    mrsne   r0, psp
    mrseq   r0, msp
    mov     r1, lr
    b       DefaultISR_Process
    .size DefaultISR, . - DefaultISR

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler    handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler NMI_Handler
    def_irq_handler HardFault_Handler
    def_irq_handler MemManage_Handler
    def_irq_handler BusFault_Handler
    def_irq_handler UsageFault_Handler
    def_irq_handler SVC_Handler
    def_irq_handler DebugMon_Handler
    def_irq_handler PendSV_Handler
    def_irq_handler SysTick_Handler
    def_irq_handler DMA0_IRQHandler
    def_irq_handler DMA1_IRQHandler
    def_irq_handler DMA2_IRQHandler
    def_irq_handler DMA3_IRQHandler
    def_irq_handler DMA4_IRQHandler
    def_irq_handler DMA5_IRQHandler
    def_irq_handler DMA6_IRQHandler
    def_irq_handler DMA7_IRQHandler
    def_irq_handler DMA8_IRQHandler
    def_irq_handler DMA9_IRQHandler
    def_irq_handler DMA10_IRQHandler
    def_irq_handler DMA11_IRQHandler
    def_irq_handler DMA12_IRQHandler
    def_irq_handler DMA13_IRQHandler
    def_irq_handler DMA14_IRQHandler
    def_irq_handler DMA15_IRQHandler
    def_irq_handler DMA16_IRQHandler
    def_irq_handler DMA17_IRQHandler
    def_irq_handler DMA18_IRQHandler
    def_irq_handler DMA19_IRQHandler
    def_irq_handler DMA20_IRQHandler
    def_irq_handler DMA21_IRQHandler
    def_irq_handler DMA22_IRQHandler
    def_irq_handler DMA23_IRQHandler
    def_irq_handler DMA24_IRQHandler
    def_irq_handler DMA25_IRQHandler
    def_irq_handler DMA26_IRQHandler
    def_irq_handler DMA27_IRQHandler
    def_irq_handler DMA28_IRQHandler
    def_irq_handler DMA29_IRQHandler
    def_irq_handler DMA30_IRQHandler
    def_irq_handler DMA31_IRQHandler
    def_irq_handler DMA_Error_IRQHandler
    def_irq_handler CPM_IRQHandler
    def_irq_handler FC_IRQHandler
    def_irq_handler PMC_IRQHandler
    def_irq_handler TMU_IRQHandler
    def_irq_handler WDOG0_IRQHandler
    def_irq_handler WDOG1_IRQHandler
    def_irq_handler WDOG2_IRQHandler
    def_irq_handler FCSMU0_IRQHandler
    def_irq_handler STCU0_IRQHandler
    def_irq_handler ERM_fault_IRQHandler
    def_irq_handler MAM0_IRQHandler
    def_irq_handler MAM1_IRQHandler
    def_irq_handler WDOG3_IRQHandler
    def_irq_handler RESERVED_62_IRQHandler
    def_irq_handler RGM_Pre_IRQHandler
    def_irq_handler RGM_Other_IRQHandler
    def_irq_handler INTM0_IRQHandler
    def_irq_handler ISM0_IRQHandler
    def_irq_handler MB_IRQHandler
    def_irq_handler SCG_IRQHandler
    def_irq_handler CMU0_IRQHandler
    def_irq_handler CMU1_IRQHandler
    def_irq_handler CMU2_IRQHandler
    def_irq_handler CMU3_IRQHandler
    def_irq_handler TSTMP0_IRQHandler
    def_irq_handler TSTMP1_IRQHandler
    def_irq_handler TSTMP2_IRQHandler
    def_irq_handler TSTMP3_IRQHandler
    def_irq_handler CORDIC_IRQHandler
    def_irq_handler HSM0_IRQHandler
    def_irq_handler FCPIT0_IRQHandler
    def_irq_handler FCPIT1_IRQHandler
    def_irq_handler RTC_IRQHandler
    def_irq_handler ENET_Tx0_IRQHandler
    def_irq_handler ENET_Tx1_IRQHandler
    def_irq_handler ENET_Rx0_IRQHandler
    def_irq_handler ENET_Rx1_IRQHandler
    def_irq_handler ENET_System_IRQHandler
    def_irq_handler AONTIMER_IRQHandler
    def_irq_handler SWI_IRQHandler
    def_irq_handler TSTMP4_IRQHandler
    def_irq_handler FREQM_IRQHandler
    def_irq_handler PORTA_IRQHandler
    def_irq_handler PORTB_IRQHandler
    def_irq_handler PORTC_IRQHandler
    def_irq_handler PORTD_IRQHandler
    def_irq_handler PORTE_IRQHandler
    def_irq_handler PORTF_IRQHandler
    def_irq_handler PORTG_IRQHandler
    def_irq_handler PORTH_IRQHandler
    def_irq_handler PORTI_IRQHandler
    def_irq_handler Can_IsrCAN0_All
    def_irq_handler Can_IsrCAN1_All
    def_irq_handler Can_IsrCAN2_All
    def_irq_handler Can_IsrCAN3_All
    def_irq_handler Can_IsrCAN4_All
    def_irq_handler Can_IsrCAN5_All
    def_irq_handler Can_IsrCAN6_All
    def_irq_handler Can_IsrCAN7_All
    def_irq_handler FCIIC0_IRQHandler
    def_irq_handler FCIIC1_IRQHandler
    def_irq_handler FCSPI0_IRQHandler
    def_irq_handler FCSPI1_IRQHandler
    def_irq_handler FCSPI2_IRQHandler
    def_irq_handler FCSPI3_IRQHandler
    def_irq_handler FCSPI4_IRQHandler
    def_irq_handler FCSPI5_IRQHandler
    def_irq_handler FCUART0_RxTx_IRQHandler
    def_irq_handler FCUART1_RxTx_IRQHandler
    def_irq_handler FCUART2_RxTx_IRQHandler
    def_irq_handler FCUART3_RxTx_IRQHandler
    def_irq_handler FCUART4_RxTx_IRQHandler
    def_irq_handler FCUART5_RxTx_IRQHandler
    def_irq_handler FCUART6_RxTx_IRQHandler
    def_irq_handler FCUART7_RxTx_IRQHandler
    def_irq_handler FCUART8_RxTx_IRQHandler
    def_irq_handler FCUART9_RxTx_IRQHandler
    def_irq_handler FCUART10_RxTx_IRQHandler
    def_irq_handler FCUART11_RxTx_IRQHandler
    def_irq_handler FCUART12_RxTx_IRQHandler
    def_irq_handler FCUART13_RxTx_IRQHandler
    def_irq_handler Can_IsrCAN12_All
    def_irq_handler Can_IsrCAN13_All
    def_irq_handler FTU0_IRQHandler
    def_irq_handler FTU1_IRQHandler
    def_irq_handler FTU2_IRQHandler
    def_irq_handler FTU3_IRQHandler
    def_irq_handler FTU4_IRQHandler
    def_irq_handler FTU5_IRQHandler
    def_irq_handler FTU6_IRQHandler
    def_irq_handler FTU7_IRQHandler
    def_irq_handler HSADC0_IRQHandler
    def_irq_handler HSADC1_IRQHandler
    def_irq_handler HSADC2_IRQHandler
    def_irq_handler HSADC3_IRQHandler
    def_irq_handler CMP0_IRQHandler
    def_irq_handler RESERVED_145_IRQHandler
    def_irq_handler ADC4_IRQHandler
    def_irq_handler ADC0_IRQHandler
    def_irq_handler ADC1_IRQHandler
    def_irq_handler ADC2_IRQHandler
    def_irq_handler ADC3_IRQHandler
    def_irq_handler PTIMER0_IRQHandler
    def_irq_handler PTIMER1_IRQHandler
    def_irq_handler PTIMER2_IRQHandler
    def_irq_handler PTIMER3_IRQHandler
    def_irq_handler ADC5_IRQHandler
    def_irq_handler MSC0_IRQHandler
    def_irq_handler MSC1_IRQHandler
    def_irq_handler Can_IsrCAN8_All
    def_irq_handler Can_IsrCAN9_All
    def_irq_handler SENT0_IRQHandler
    def_irq_handler SENT1_IRQHandler
    def_irq_handler FCSPI6_IRQHandler
    def_irq_handler FCSPI7_IRQHandler
    def_irq_handler Can_IsrCAN10_All
    def_irq_handler Can_IsrCAN11_All
    def_irq_handler CTI0_IRQHandler
    def_irq_handler CTI1_IRQHandler
    def_irq_handler CTI2_IRQHandler
    def_irq_handler CMU4_IRQHandler
    def_irq_handler CTI3_IRQHandler
    def_irq_handler SSI_IRQHandler
    def_irq_handler SDADC0_0_IRQHandler
    def_irq_handler SDADC0_1_IRQHandler
    def_irq_handler SDADC0_2_IRQHandler
    def_irq_handler SDADC1_0_IRQHandler
    def_irq_handler SDADC1_1_IRQHandler
    def_irq_handler SDADC1_2_IRQHandler
    def_irq_handler EFTU0_Error_IRQHandler
    def_irq_handler EFTU1_Error_IRQHandler
    def_irq_handler EFTU2_Error_IRQHandler
    def_irq_handler EFTU0_TIM_0_3_IRQHandler
    def_irq_handler EFTU1_TIM_0_3_IRQHandler
    def_irq_handler EFTU2_TIM_0_3_IRQHandler
    def_irq_handler EFTU0_TIM_4_7_IRQHandler
    def_irq_handler EFTU1_TIM_4_7_IRQHandler
    def_irq_handler EFTU2_TIM_4_7_IRQHandler
    def_irq_handler EFTU0_TOM_0_7_IRQHandler
    def_irq_handler EFTU1_TOM_0_7_IRQHandler
    def_irq_handler EFTU2_TOM_0_7_IRQHandler
    def_irq_handler EFTU0_TOM_8_15_IRQHandler
    def_irq_handler EFTU1_TOM_8_15_IRQHandler
    def_irq_handler EFTU2_TOM_8_15_IRQHandler
    def_irq_handler CAN0_Error_IRQHandler
    def_irq_handler CAN1_Error_IRQHandler
    def_irq_handler CAN2_Error_IRQHandler
    def_irq_handler CAN3_Error_IRQHandler
    def_irq_handler CAN4_Error_IRQHandler
    def_irq_handler CAN5_Error_IRQHandler
    def_irq_handler CAN6_Error_IRQHandler
    def_irq_handler CAN7_Error_IRQHandler
    def_irq_handler CAN8_Error_IRQHandler
    def_irq_handler CAN9_Error_IRQHandler
    def_irq_handler CAN10_Error_IRQHandler
    def_irq_handler CAN11_Error_IRQHandler
    def_irq_handler CAN12_Error_IRQHandler
    def_irq_handler CAN13_Error_IRQHandler
    def_irq_handler QDT0_IRQHandler
    def_irq_handler QDT1_IRQHandler
    def_irq_handler QDT2_IRQHandler
    def_irq_handler QDT3_IRQHandler
    def_irq_handler LU0_IRQHandler
    def_irq_handler LU1_IRQHandler
    def_irq_handler TPU0_CH0_7_IRQHandler
    def_irq_handler TPU0_CH8_15_IRQHandler
    def_irq_handler TPU0_CH16_23_IRQHandler
    def_irq_handler TPU0_CH24_31_IRQHandler
    def_irq_handler HSM0_CRYPTO_IRQHandler
    .end
