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
        DCD   sfe(CSTACK)                                     /* Top of Stack */
        DCD   Reset_Handler                                   /* Reset Handler */
        DCD   NMI_Handler                                     /* NMI Handler */
        DCD   HardFault_Handler                               /* Hard Fault Handler */
        DCD   MemManage_Handler                               /* MPU Fault Handler */
        DCD   BusFault_Handler                                /* Bus Fault Handler */
        DCD   UsageFault_Handler                              /* Usage Fault Handler */
        DCD   0                                               /* Reserved */
        DCD   0                                               /* Reserved */
        DCD   0                                               /* Reserved */
        DCD   0                                               /* Reserved */
        DCD   SVC_Handler                                     /* SVCall Handler */
        DCD   DebugMon_Handler                                /* Debug Monitor Handler */
        DCD   0                                               /* Reserved */
        DCD   PendSV_Handler                                  /* PendSV Handler */
        DCD   SysTick_Handler                                 /* SysTick Handler */

                                                              /* External Interrupts*/
        DCD   DMA0_IRQHandler                                 /* DMA channel 0 transfer complete */
        DCD   DMA1_IRQHandler                                 /* DMA channel 1 transfer complete */
        DCD   DMA2_IRQHandler                                 /* DMA channel 2 transfer complete */
        DCD   DMA3_IRQHandler                                 /* DMA channel 3 transfer complete */
        DCD   DMA4_IRQHandler                                 /* DMA channel 4 transfer complete */
        DCD   DMA5_IRQHandler                                 /* DMA channel 5 transfer complete */
        DCD   DMA6_IRQHandler                                 /* DMA channel 6 transfer complete */
        DCD   DMA7_IRQHandler                                 /* DMA channel 7 transfer complete */
        DCD   DMA8_IRQHandler                                 /* DMA channel 8 transfer complete */
        DCD   DMA9_IRQHandler                                 /* DMA channel 9 transfer complete */
        DCD   DMA10_IRQHandler                                /* DMA channel 10 transfer complete */
        DCD   DMA11_IRQHandler                                /* DMA channel 11 transfer complete */
        DCD   DMA12_IRQHandler                                /* DMA channel 12 transfer complete */
        DCD   DMA13_IRQHandler                                /* DMA channel 13 transfer complete */
        DCD   DMA14_IRQHandler                                /* DMA channel 14 transfer complete */
        DCD   DMA15_IRQHandler                                /* DMA channel 15 transfer complete */
        DCD   DMA16_IRQHandler                                /* DMA channel 16 transfer complete */
        DCD   DMA17_IRQHandler                                /* DMA channel 17 transfer complete */
        DCD   DMA18_IRQHandler                                /* DMA channel 18 transfer complete */
        DCD   DMA19_IRQHandler                                /* DMA channel 19 transfer complete */
        DCD   DMA20_IRQHandler                                /* DMA channel 20 transfer complete */
        DCD   DMA21_IRQHandler                                /* DMA channel 21 transfer complete */
        DCD   DMA22_IRQHandler                                /* DMA channel 22 transfer complete */
        DCD   DMA23_IRQHandler                                /* DMA channel 23 transfer complete */
        DCD   DMA24_IRQHandler                                /* DMA channel 24 transfer complete */
        DCD   DMA25_IRQHandler                                /* DMA channel 25 transfer complete */
        DCD   DMA26_IRQHandler                                /* DMA channel 26 transfer complete */
        DCD   DMA27_IRQHandler                                /* DMA channel 27 transfer complete */
        DCD   DMA28_IRQHandler                                /* DMA channel 28 transfer complete */
        DCD   DMA29_IRQHandler                                /* DMA channel 29 transfer complete */
        DCD   DMA30_IRQHandler                                /* DMA channel 30 transfer complete */
        DCD   DMA31_IRQHandler                                /* DMA channel 31 transfer complete */
        DCD   DMA0_Error_IRQHandler                           /* DMA error interrupt channels 0-31 */
        DCD   CPM0_IRQHandler                                 /* FPU etc. interrupt */
        DCD   FC0_IRQHandler                                  /* Flash Controller Command complete, time out etc. interrupt */
        DCD   PMC0_IRQHandler                                 /* HVD/LVD etc. interrupt */
        DCD   TMU0_IRQHandler                                 /* Temperature Monitor Unit interrupt */
        DCD   WDOG0_IRQHandler                                /* interrupt request out before wdg reset out */
        DCD   WDOG1_IRQHandler                                /* interrupt request out before wdg reset out */
        DCD   DefaultISR                                      /* Reserved */
        DCD   FCSMU0_IRQHandler                               /* Fault Control and Safety Manage Unit */
        DCD   STCU0_IRQHandler                                /* Safety Control Unit interrupt */
        DCD   ERM0_IRQHandler                                 /* ERM single or double bit error interrupt */
        DCD   MAM0_IRQHandler                                 /* Matrix Access Monitor interrupt */
        DCD   MAM1_IRQHandler                                 /* Matrix Access Monitor interrupt */
        DCD   CTI0_IRQHandler                                 /* CTI Interrupt */
        DCD   CTI1_IRQHandler                                 /* CTI Interrupt */
        DCD   RGM0_Pre_IRQHandler                             /* RGM pre-reset Interrupt */
        DCD   RGM0_Exit_IRQHandler                            /* RGM other cpu exit reset Interrupt */
        DCD   INTM0_IRQHandler                                /* INTM timeout interrupt */
        DCD   ISM0_IRQHandler                                 /* ISM0 interrupt */
        DCD   MB0_IRQHandler                                  /* Mail Box interrupt */
        DCD   SCG0_IRQHandler                                 /* SCG bus interrupt request */
        DCD   CMU0_IRQHandler                                 /* CMU0 interrupt */
        DCD   CMU1_IRQHandler                                 /* CMU1 interrupt */
        DCD   CMU2_IRQHandler                                 /* CMU2 interrupt */
        DCD   CMU3_IRQHandler                                 /* CMU3 interrupt */
        DCD   TSTMP0_IRQHandler                               /* TimerStamp interrupt */
        DCD   TSTMP1_IRQHandler                               /* TimerStamp interrupt */
        DCD   TSTMP2_IRQHandler                               /* TimerStamp interrupt */
        DCD   CMU4_IRQHandler                                 /* CMU4 interrupt */
        DCD   CORDIC0_IRQHandler                              /* CORDIC Accelerator interrupt */
        DCD   HSM0_Error_IRQHandler                           /* HSM error interrupt */
        DCD   FCPIT0_IRQHandler                               /* FCPIT interrupt */
        DCD   DefaultISR                                      /* Reserved */
        DCD   RTC0_IRQHandler                                 /* RTC alarm or seconds interrupt */
        DCD   ENET_Tx0_IRQHandler                             /* ENET TX Channel 0 Interrupt */
        DCD   ENET_Tx1_IRQHandler                             /* ENET TX Channel 1 Interrupt */
        DCD   ENET_Rx0_IRQHandler                             /* ENET RX Channel 0 Interrupt */
        DCD   ENET_Rx1_IRQHandler                             /* ENET RX Channel 1 Interrupt */
        DCD   ENET_System_IRQHandler                          /* ENET system interrupt */
        DCD   AONTIMER0_IRQHandler                            /* AONTIMER interrupt request */
        DCD   SWI_IRQHandler                                  /* Software interrupt */
        DCD   DefaultISR                                      /* Reserved */
        DCD   FREQM0_IRQHandler                               /* FREQM interrupt */
        DCD   PORTA_IRQHandler                                /* PORTA Interrupt */
        DCD   PORTB_IRQHandler                                /* PORTB Interrupt */
        DCD   PORTC_IRQHandler                                /* PORTC Interrupt */
        DCD   PORTD_IRQHandler                                /* PORTD Interrupt */
        DCD   PORTE_IRQHandler                                /* PORTE Interrupt */
        DCD   PORTF_IRQHandler                                /* PORTF Interrupt */
        DCD   PORTG_IRQHandler                                /* PORTG Interrupt */
        DCD   PORTH_IRQHandler                                /* PORTH Interrupt */
        DCD   PORTI_IRQHandler                                /* PORTI Interrupt */
        DCD   CAN0_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN1_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN2_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN3_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN4_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN5_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN6_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN7_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   FCIIC0_IRQHandler                               /* FCIIC Interrupt */
        DCD   FCIIC1_IRQHandler                               /* FCIIC Interrupt */
        DCD   FCSPI0_IRQHandler                               /* FCSPI Interrupt */
        DCD   FCSPI1_IRQHandler                               /* FCSPI Interrupt */
        DCD   FCSPI2_IRQHandler                               /* FCSPI Interrupt */
        DCD   FCSPI3_IRQHandler                               /* FCSPI Interrupt */
        DCD   FCSPI4_IRQHandler                               /* FCSPI Interrupt */
        DCD   FCSPI5_IRQHandler                               /* FCSPI Interrupt */
        DCD   FCUART0_RxTx_IRQHandler                         /* FCUART Interrupt */
        DCD   FCUART1_RxTx_IRQHandler                         /* FCUART Interrupt */
        DCD   FCUART2_RxTx_IRQHandler                         /* FCUART Interrupt */
        DCD   FCUART3_RxTx_IRQHandler                         /* FCUART Interrupt */
        DCD   FCUART4_RxTx_IRQHandler                         /* FCUART Interrupt */
        DCD   FCUART5_RxTx_IRQHandler                         /* FCUART Interrupt */
        DCD   FCUART6_RxTx_IRQHandler                         /* FCUART Interrupt */
        DCD   FCUART7_RxTx_IRQHandler                         /* FCUART Interrupt */
        DCD   FTU0_IRQHandler                                 /* FTU all source interrupt */
        DCD   FTU1_IRQHandler                                 /* FTU all source interrupt */
        DCD   FTU2_IRQHandler                                 /* FTU all source interrupt */
        DCD   FTU3_IRQHandler                                 /* FTU all source interrupt */
        DCD   FTU4_IRQHandler                                 /* FTU all source interrupt */
        DCD   FTU5_IRQHandler                                 /* FTU all source interrupt */
        DCD   FTU6_IRQHandler                                 /* FTU all source interrupt */
        DCD   FTU7_IRQHandler                                 /* FTU all source interrupt */
        DCD   CMP0_IRQHandler                                 /* CMP interrupt request */
        DCD   ADC0_IRQHandler                                 /* ADC interrupt request */
        DCD   ADC1_IRQHandler                                 /* ADC interrupt request */
        DCD   ADC2_IRQHandler                                 /* ADC interrupt request */
        DCD   ADC3_IRQHandler                                 /* ADC interrupt request */
        DCD   PTIMER0_IRQHandler                              /* PTIMER interrupt */
        DCD   PTIMER1_IRQHandler                              /* PTIMER interrupt */
        DCD   PTIMER2_IRQHandler                              /* PTIMER interrupt */
        DCD   PTIMER3_IRQHandler                              /* PTIMER interrupt */
        DCD   MSC0_IRQHandler                                 /* MSC interrupt */
        DCD   DefaultISR                                      /* Reserved */
        DCD   DefaultISR                                      /* Reserved */
        DCD   SENT0_IRQHandler                                /* SENT all interrupt (fast or slow) */
        DCD   SENT1_IRQHandler                                /* SENT all interrupt (fast or slow) */
        DCD   SSI0_IRQHandler                                 /* SSI interrupt OR interrupt */
        DCD   SDADC0_0_IRQHandler                             /* SDADC channel 0 interrupt */
        DCD   SDADC0_1_IRQHandler                             /* SDADC channel 1 interrupt */
        DCD   LU0_IRQHandler                                  /* LU interrupt */
        DCD   LU1_IRQHandler                                  /* LU interrupt */
        DCD   HSM0_Crypto_IRQHandler                          /* Crypto interrupt */
        DCD   EFTU0_Error_IRQHandler                          /* eFTU all error source interrupt */
        DCD   EFTU0_TIM_0_3_IRQHandler                        /* eFTU TIM 0-3 source interrupt */
        DCD   EFTU0_TIM_4_7_IRQHandler                        /* eFTU TIM 4-7 source interrupt */
        DCD   EFTU0_TOM_0_7_IRQHandler                        /* eFTU TOM 0-7 source interrupt */
        DCD   EFTU0_TOM_8_15_IRQHandler                       /* eFTU TOM 8-15 source interrupt */
        DCD   CAN0_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN1_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN2_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN3_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN4_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN5_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN6_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN7_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CRM0_IRQHandler                                 /* CAN Routing Module */
        DCD   LDI0_IRQHandler                                 /* LED Driver Interface */
        DCD   DefaultISR                                      /* 167 */
        DCD   DefaultISR                                      /* 168 */
        DCD   DefaultISR                                      /* 169 */
        DCD   DefaultISR                                      /* 170 */
        DCD   DefaultISR                                      /* 171 */
        DCD   DefaultISR                                      /* 172 */
        DCD   DefaultISR                                      /* 173 */
        DCD   DefaultISR                                      /* 174 */
        DCD   DefaultISR                                      /* 175 */
        DCD   DefaultISR                                      /* 176 */
        DCD   DefaultISR                                      /* 177 */
        DCD   DefaultISR                                      /* 178 */
        DCD   DefaultISR                                      /* 179 */
        DCD   DefaultISR                                      /* 180 */
        DCD   DefaultISR                                      /* 181 */
        DCD   DefaultISR                                      /* 182 */
        DCD   DefaultISR                                      /* 183 */
        DCD   DefaultISR                                      /* 184 */
        DCD   DefaultISR                                      /* 185 */
        DCD   DefaultISR                                      /* 186 */
        DCD   DefaultISR                                      /* 187 */
        DCD   DefaultISR                                      /* 188 */
        DCD   DefaultISR                                      /* 189 */
        DCD   DefaultISR                                      /* 190 */
        DCD   DefaultISR                                      /* 191 */
        DCD   DefaultISR                                      /* 192 */
        DCD   DefaultISR                                      /* 193 */
        DCD   DefaultISR                                      /* 194 */
        DCD   DefaultISR                                      /* 195 */
        DCD   DefaultISR                                      /* 196 */
        DCD   DefaultISR                                      /* 197 */
        DCD   DefaultISR                                      /* 198 */
        DCD   DefaultISR                                      /* 199 */
        DCD   DefaultISR                                      /* 200 */
        DCD   DefaultISR                                      /* 201 */
        DCD   DefaultISR                                      /* 202 */
        DCD   DefaultISR                                      /* 203 */
        DCD   DefaultISR                                      /* 204 */
        DCD   DefaultISR                                      /* 205 */
        DCD   DefaultISR                                      /* 206 */
        DCD   DefaultISR                                      /* 207 */
        DCD   DefaultISR                                      /* 208 */
        DCD   DefaultISR                                      /* 209 */
        DCD   DefaultISR                                      /* 210 */
        DCD   DefaultISR                                      /* 211 */
        DCD   DefaultISR                                      /* 212 */
        DCD   DefaultISR                                      /* 213 */
        DCD   DefaultISR                                      /* 214 */
        DCD   DefaultISR                                      /* 215 */
        DCD   DefaultISR                                      /* 216 */
        DCD   DefaultISR                                      /* 217 */
        DCD   DefaultISR                                      /* 218 */
        DCD   DefaultISR                                      /* 219 */
        DCD   DefaultISR                                      /* 220 */
        DCD   DefaultISR                                      /* 221 */
        DCD   DefaultISR                                      /* 222 */
        DCD   DefaultISR                                      /* 223 */
        DCD   DefaultISR                                      /* 224 */
        DCD   DefaultISR                                      /* 225 */
        DCD   DefaultISR                                      /* 226 */
        DCD   DefaultISR                                      /* 227 */
        DCD   DefaultISR                                      /* 228 */
        DCD   DefaultISR                                      /* 229 */
        DCD   DefaultISR                                      /* 230 */
        DCD   DefaultISR                                      /* 231 */
        DCD   DefaultISR                                      /* 232 */
        DCD   DefaultISR                                      /* 233 */
        DCD   DefaultISR                                      /* 234 */
        DCD   DefaultISR                                      /* 235 */
        DCD   DefaultISR                                      /* 236 */
        DCD   DefaultISR                                      /* 237 */
        DCD   DefaultISR                                      /* 238 */
        DCD   DefaultISR                                      /* 239 */
        DCD   DefaultISR                                      /* 240 */
        DCD   DefaultISR                                      /* 241 */
        DCD   DefaultISR                                      /* 242 */
        DCD   DefaultISR                                      /* 243 */
        DCD   DefaultISR                                      /* 244 */
        DCD   DefaultISR                                      /* 245 */
        DCD   DefaultISR                                      /* 246 */
        DCD   DefaultISR                                      /* 247 */
        DCD   DefaultISR                                      /* 248 */
        DCD   DefaultISR                                      /* 249 */
        DCD   DefaultISR                                      /* 250 */
        DCD   DefaultISR                                      /* 251 */
        DCD   DefaultISR                                      /* 252 */
        DCD   DefaultISR                                      /* 253 */
        DCD   DefaultISR                                      /* 254 */
        DCD   0xFFFFFFFF                                      /*  Reserved for user TRIM value */
__Vectors_End

__Vectors       EQU   __vector_table
__Vectors_Size  EQU   __Vectors_End - __Vectors

        SECTION .text:CODE:REORDER:NOROOT(2)
        THUMB

        PUBWEAK Reset_Handler

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

        PUBWEAK DMA0_IRQHandler
        PUBWEAK DMA1_IRQHandler
        PUBWEAK DMA2_IRQHandler
        PUBWEAK DMA3_IRQHandler
        PUBWEAK DMA4_IRQHandler
        PUBWEAK DMA5_IRQHandler
        PUBWEAK DMA6_IRQHandler
        PUBWEAK DMA7_IRQHandler
        PUBWEAK DMA8_IRQHandler
        PUBWEAK DMA9_IRQHandler
        PUBWEAK DMA10_IRQHandler
        PUBWEAK DMA11_IRQHandler
        PUBWEAK DMA12_IRQHandler
        PUBWEAK DMA13_IRQHandler
        PUBWEAK DMA14_IRQHandler
        PUBWEAK DMA15_IRQHandler
        PUBWEAK DMA16_IRQHandler
        PUBWEAK DMA17_IRQHandler
        PUBWEAK DMA18_IRQHandler
        PUBWEAK DMA19_IRQHandler
        PUBWEAK DMA20_IRQHandler
        PUBWEAK DMA21_IRQHandler
        PUBWEAK DMA22_IRQHandler
        PUBWEAK DMA23_IRQHandler
        PUBWEAK DMA24_IRQHandler
        PUBWEAK DMA25_IRQHandler
        PUBWEAK DMA26_IRQHandler
        PUBWEAK DMA27_IRQHandler
        PUBWEAK DMA28_IRQHandler
        PUBWEAK DMA29_IRQHandler
        PUBWEAK DMA30_IRQHandler
        PUBWEAK DMA31_IRQHandler
        PUBWEAK DMA0_Error_IRQHandler
        PUBWEAK CPM0_IRQHandler
        PUBWEAK FC0_IRQHandler
        PUBWEAK PMC0_IRQHandler
        PUBWEAK TMU0_IRQHandler
        PUBWEAK WDOG0_IRQHandler
        PUBWEAK WDOG1_IRQHandler
        PUBWEAK FCSMU0_IRQHandler
        PUBWEAK STCU0_IRQHandler
        PUBWEAK ERM0_IRQHandler
        PUBWEAK MAM0_IRQHandler
        PUBWEAK MAM1_IRQHandler
        PUBWEAK CTI0_IRQHandler
        PUBWEAK CTI1_IRQHandler
        PUBWEAK RGM0_Pre_IRQHandler
        PUBWEAK RGM0_Exit_IRQHandler
        PUBWEAK INTM0_IRQHandler
        PUBWEAK ISM0_IRQHandler
        PUBWEAK MB0_IRQHandler
        PUBWEAK SCG0_IRQHandler
        PUBWEAK CMU0_IRQHandler
        PUBWEAK CMU1_IRQHandler
        PUBWEAK CMU2_IRQHandler
        PUBWEAK CMU3_IRQHandler
        PUBWEAK TSTMP0_IRQHandler
        PUBWEAK TSTMP1_IRQHandler
        PUBWEAK TSTMP2_IRQHandler
        PUBWEAK CMU4_IRQHandler
        PUBWEAK CORDIC0_IRQHandler
        PUBWEAK HSM0_Error_IRQHandler
        PUBWEAK FCPIT0_IRQHandler
        PUBWEAK RTC0_IRQHandler
        PUBWEAK ENET_Tx0_IRQHandler
        PUBWEAK ENET_Tx1_IRQHandler
        PUBWEAK ENET_Rx0_IRQHandler
        PUBWEAK ENET_Rx1_IRQHandler
        PUBWEAK ENET_System_IRQHandler
        PUBWEAK AONTIMER0_IRQHandler
        PUBWEAK SWI_IRQHandler
        PUBWEAK FREQM0_IRQHandler
        PUBWEAK PORTA_IRQHandler
        PUBWEAK PORTB_IRQHandler
        PUBWEAK PORTC_IRQHandler
        PUBWEAK PORTD_IRQHandler
        PUBWEAK PORTE_IRQHandler
        PUBWEAK PORTF_IRQHandler
        PUBWEAK PORTG_IRQHandler
        PUBWEAK PORTH_IRQHandler
        PUBWEAK PORTI_IRQHandler
        PUBWEAK CAN0_IRQHandler
        PUBWEAK CAN1_IRQHandler
        PUBWEAK CAN2_IRQHandler
        PUBWEAK CAN3_IRQHandler
        PUBWEAK CAN4_IRQHandler
        PUBWEAK CAN5_IRQHandler
        PUBWEAK CAN6_IRQHandler
        PUBWEAK CAN7_IRQHandler
        PUBWEAK FCIIC0_IRQHandler
        PUBWEAK FCIIC1_IRQHandler
        PUBWEAK FCSPI0_IRQHandler
        PUBWEAK FCSPI1_IRQHandler
        PUBWEAK FCSPI2_IRQHandler
        PUBWEAK FCSPI3_IRQHandler
        PUBWEAK FCSPI4_IRQHandler
        PUBWEAK FCSPI5_IRQHandler
        PUBWEAK FCUART0_RxTx_IRQHandler
        PUBWEAK FCUART1_RxTx_IRQHandler
        PUBWEAK FCUART2_RxTx_IRQHandler
        PUBWEAK FCUART3_RxTx_IRQHandler
        PUBWEAK FCUART4_RxTx_IRQHandler
        PUBWEAK FCUART5_RxTx_IRQHandler
        PUBWEAK FCUART6_RxTx_IRQHandler
        PUBWEAK FCUART7_RxTx_IRQHandler
        PUBWEAK FTU0_IRQHandler
        PUBWEAK FTU1_IRQHandler
        PUBWEAK FTU2_IRQHandler
        PUBWEAK FTU3_IRQHandler
        PUBWEAK FTU4_IRQHandler
        PUBWEAK FTU5_IRQHandler
        PUBWEAK FTU6_IRQHandler
        PUBWEAK FTU7_IRQHandler
        PUBWEAK CMP0_IRQHandler
        PUBWEAK ADC0_IRQHandler
        PUBWEAK ADC1_IRQHandler
        PUBWEAK ADC2_IRQHandler
        PUBWEAK ADC3_IRQHandler
        PUBWEAK PTIMER0_IRQHandler
        PUBWEAK PTIMER1_IRQHandler
        PUBWEAK PTIMER2_IRQHandler
        PUBWEAK PTIMER3_IRQHandler
        PUBWEAK MSC0_IRQHandler
        PUBWEAK SENT0_IRQHandler
        PUBWEAK SENT1_IRQHandler
        PUBWEAK SSI0_IRQHandler
        PUBWEAK SDADC0_0_IRQHandler
        PUBWEAK SDADC0_1_IRQHandler
        PUBWEAK LU0_IRQHandler
        PUBWEAK LU1_IRQHandler
        PUBWEAK HSM0_Crypto_IRQHandler
        PUBWEAK EFTU0_Error_IRQHandler
        PUBWEAK EFTU0_TIM_0_3_IRQHandler
        PUBWEAK EFTU0_TIM_4_7_IRQHandler
        PUBWEAK EFTU0_TOM_0_7_IRQHandler
        PUBWEAK EFTU0_TOM_8_15_IRQHandler
        PUBWEAK CAN0_Error_IRQHandler
        PUBWEAK CAN1_Error_IRQHandler
        PUBWEAK CAN2_Error_IRQHandler
        PUBWEAK CAN3_Error_IRQHandler
        PUBWEAK CAN4_Error_IRQHandler
        PUBWEAK CAN5_Error_IRQHandler
        PUBWEAK CAN6_Error_IRQHandler
        PUBWEAK CAN7_Error_IRQHandler
        PUBWEAK CRM0_IRQHandler
        PUBWEAK LDI0_IRQHandler
        PUBWEAK DefaultISR
        SECTION .text:CODE:REORDER:NOROOT(1)

DMA0_IRQHandler
DMA1_IRQHandler
DMA2_IRQHandler
DMA3_IRQHandler
DMA4_IRQHandler
DMA5_IRQHandler
DMA6_IRQHandler
DMA7_IRQHandler
DMA8_IRQHandler
DMA9_IRQHandler
DMA10_IRQHandler
DMA11_IRQHandler
DMA12_IRQHandler
DMA13_IRQHandler
DMA14_IRQHandler
DMA15_IRQHandler
DMA16_IRQHandler
DMA17_IRQHandler
DMA18_IRQHandler
DMA19_IRQHandler
DMA20_IRQHandler
DMA21_IRQHandler
DMA22_IRQHandler
DMA23_IRQHandler
DMA24_IRQHandler
DMA25_IRQHandler
DMA26_IRQHandler
DMA27_IRQHandler
DMA28_IRQHandler
DMA29_IRQHandler
DMA30_IRQHandler
DMA31_IRQHandler
DMA0_Error_IRQHandler
CPM0_IRQHandler
FC0_IRQHandler
PMC0_IRQHandler
TMU0_IRQHandler
WDOG0_IRQHandler
WDOG1_IRQHandler
FCSMU0_IRQHandler
STCU0_IRQHandler
ERM0_IRQHandler
MAM0_IRQHandler
MAM1_IRQHandler
CTI0_IRQHandler
CTI1_IRQHandler
RGM0_Pre_IRQHandler
RGM0_Exit_IRQHandler
INTM0_IRQHandler
ISM0_IRQHandler
MB0_IRQHandler
SCG0_IRQHandler
CMU0_IRQHandler
CMU1_IRQHandler
CMU2_IRQHandler
CMU3_IRQHandler
TSTMP0_IRQHandler
TSTMP1_IRQHandler
TSTMP2_IRQHandler
CMU4_IRQHandler
CORDIC0_IRQHandler
HSM0_Error_IRQHandler
FCPIT0_IRQHandler
RTC0_IRQHandler
ENET_Tx0_IRQHandler
ENET_Tx1_IRQHandler
ENET_Rx0_IRQHandler
ENET_Rx1_IRQHandler
ENET_System_IRQHandler
AONTIMER0_IRQHandler
SWI_IRQHandler
FREQM0_IRQHandler
PORTA_IRQHandler
PORTB_IRQHandler
PORTC_IRQHandler
PORTD_IRQHandler
PORTE_IRQHandler
PORTF_IRQHandler
PORTG_IRQHandler
PORTH_IRQHandler
PORTI_IRQHandler
CAN0_IRQHandler
CAN1_IRQHandler
CAN2_IRQHandler
CAN3_IRQHandler
CAN4_IRQHandler
CAN5_IRQHandler
CAN6_IRQHandler
CAN7_IRQHandler
FCIIC0_IRQHandler
FCIIC1_IRQHandler
FCSPI0_IRQHandler
FCSPI1_IRQHandler
FCSPI2_IRQHandler
FCSPI3_IRQHandler
FCSPI4_IRQHandler
FCSPI5_IRQHandler
FCUART0_RxTx_IRQHandler
FCUART1_RxTx_IRQHandler
FCUART2_RxTx_IRQHandler
FCUART3_RxTx_IRQHandler
FCUART4_RxTx_IRQHandler
FCUART5_RxTx_IRQHandler
FCUART6_RxTx_IRQHandler
FCUART7_RxTx_IRQHandler
FTU0_IRQHandler
FTU1_IRQHandler
FTU2_IRQHandler
FTU3_IRQHandler
FTU4_IRQHandler
FTU5_IRQHandler
FTU6_IRQHandler
FTU7_IRQHandler
CMP0_IRQHandler
ADC0_IRQHandler
ADC1_IRQHandler
ADC2_IRQHandler
ADC3_IRQHandler
PTIMER0_IRQHandler
PTIMER1_IRQHandler
PTIMER2_IRQHandler
PTIMER3_IRQHandler
MSC0_IRQHandler
SENT0_IRQHandler
SENT1_IRQHandler
SSI0_IRQHandler
SDADC0_0_IRQHandler
SDADC0_1_IRQHandler
LU0_IRQHandler
LU1_IRQHandler
HSM0_Crypto_IRQHandler
EFTU0_Error_IRQHandler
EFTU0_TIM_0_3_IRQHandler
EFTU0_TIM_4_7_IRQHandler
EFTU0_TOM_0_7_IRQHandler
EFTU0_TOM_8_15_IRQHandler
CAN0_Error_IRQHandler
CAN1_Error_IRQHandler
CAN2_Error_IRQHandler
CAN3_Error_IRQHandler
CAN4_Error_IRQHandler
CAN5_Error_IRQHandler
CAN6_Error_IRQHandler
CAN7_Error_IRQHandler
CRM0_IRQHandler
LDI0_IRQHandler
DefaultISR
        B DefaultISR

        END