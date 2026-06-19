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
        DCD   TMU0_IRQHandler                                 /* ADC0 CMP1/2 interrupt */
        DCD   WDOG0_IRQHandler                                /* interrupt request out before wdg reset out */
        DCD   WDOG1_IRQHandler                                /* interrupt request out before wdg reset out */
        DCD   FCSMU0_IRQHandler                               /* Fault Control and Safety Manage Unit */
        DCD   STCU0_IRQHandler                                /* Safety Control Unit interrupt */
        DCD   ERM0_IRQHandler                                 /* ERM single or double bit error interrupt */
        DCD   MAM0_IRQHandler                                 /* Matrix Access Moniotr interrupt */
        DCD   MAM1_IRQHandler                                 /* Matrix Access Moniotr interrupt */
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
        DCD   CORDIC0_IRQHandler                              /* CORDIC Acceleator interrupt */
        DCD   HSM0_Error_IRQHandler                           /* HSM error interrupt */
        DCD   FCPIT0_IRQHandler                               /* FCPIT interrupt */
        DCD   RTC0_IRQHandler                                 /* RTC alarm or seconds interrupt */
        DCD   AONTIMER0_IRQHandler                            /* AONTIMER interrupt request */
        DCD   SWI_IRQHandler                                  /* Software interrupt */
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
        DCD   CAN0_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN1_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN1_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN2_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN2_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN3_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN3_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN4_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN4_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        DCD   CAN5_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        DCD   CAN5_Error_IRQHandler                           /* FLEXCAN Error interrupt */
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
        DCD   ADC0_IRQHandler                                 /* ADC interrupt request. */
        DCD   ADC1_IRQHandler                                 /* ADC interrupt request. */
        DCD   ADC2_IRQHandler                                 /* ADC interrupt request. */
        DCD   ADC3_IRQHandler                                 /* ADC interrupt request. */
        DCD   PTIMER0_IRQHandler                              /* PTIMER interrupt */
        DCD   PTIMER1_IRQHandler                              /* PTIMER interrupt */
        DCD   PTIMER2_IRQHandler                              /* PTIMER interrupt */
        DCD   MSC0_IRQHandler                                 /* MSC interrupt */
        DCD   SENT0_IRQHandler                                /* SENT  all interrupt (fast or slow) */
        DCD   SENT1_IRQHandler                                /* SENT  all interrupt (fast or slow) */
        DCD   SSI0_IRQHandler                                 /* SSI interrupt OR interrupt */
        DCD   LU0_IRQHandler                                  /* LU interrupt */
        DCD   LU1_IRQHandler                                  /* LU interrupt */
        DCD   HSM0_Crypto_IRQHandler                          /* Crypto interrupt */
        DCD   EFTU0_IRQHandler                                /* eFTU TIM overflow etc. interrupt, EAC interrupt and CMP interrupt, BLDC0/1 interrupt */
        DCD   EFTU0_TIM_0_3_IRQHandler                        /* eFTU TIM 0-3 source interrupt */
        DCD   EFTU0_TIM_4_7_IRQHandler                        /* eFTU TIM 4-7 source interrupt */
        DCD   EFTU0_TOM_0_7_IRQHandler                        /* eFTU TOM 0-7 source interrupt */
        DCD   EFTU0_TOM_8_15_IRQHandler                       /* eFTU TOM 8-15 source interrupt */
        DCD   DefaultISR                                      /* 145 */
        DCD   DefaultISR                                      /* 146 */
        DCD   DefaultISR                                      /* 147 */
        DCD   DefaultISR                                      /* 148 */
        DCD   DefaultISR                                      /* 149 */
        DCD   DefaultISR                                      /* 150 */
        DCD   DefaultISR                                      /* 151 */
        DCD   DefaultISR                                      /* 152 */
        DCD   DefaultISR                                      /* 153 */
        DCD   DefaultISR                                      /* 154 */
        DCD   DefaultISR                                      /* 155 */
        DCD   DefaultISR                                      /* 156 */
        DCD   DefaultISR                                      /* 157 */
        DCD   DefaultISR                                      /* 158 */
        DCD   DefaultISR                                      /* 159 */
        DCD   DefaultISR                                      /* 160 */
        DCD   DefaultISR                                      /* 161 */
        DCD   DefaultISR                                      /* 162 */
        DCD   DefaultISR                                      /* 163 */
        DCD   DefaultISR                                      /* 164 */
        DCD   DefaultISR                                      /* 165 */
        DCD   DefaultISR                                      /* 166 */
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

        PUBWEAK   DMA0_IRQHandler                                 /* DMA channel 0 transfer complete */
        PUBWEAK   DMA1_IRQHandler                                 /* DMA channel 1 transfer complete */
        PUBWEAK   DMA2_IRQHandler                                 /* DMA channel 2 transfer complete */
        PUBWEAK   DMA3_IRQHandler                                 /* DMA channel 3 transfer complete */
        PUBWEAK   DMA4_IRQHandler                                 /* DMA channel 4 transfer complete */
        PUBWEAK   DMA5_IRQHandler                                 /* DMA channel 5 transfer complete */
        PUBWEAK   DMA6_IRQHandler                                 /* DMA channel 6 transfer complete */
        PUBWEAK   DMA7_IRQHandler                                 /* DMA channel 7 transfer complete */
        PUBWEAK   DMA8_IRQHandler                                 /* DMA channel 8 transfer complete */
        PUBWEAK   DMA9_IRQHandler                                 /* DMA channel 9 transfer complete */
        PUBWEAK   DMA10_IRQHandler                                /* DMA channel 10 transfer complete */
        PUBWEAK   DMA11_IRQHandler                                /* DMA channel 11 transfer complete */
        PUBWEAK   DMA12_IRQHandler                                /* DMA channel 12 transfer complete */
        PUBWEAK   DMA13_IRQHandler                                /* DMA channel 13 transfer complete */
        PUBWEAK   DMA14_IRQHandler                                /* DMA channel 14 transfer complete */
        PUBWEAK   DMA15_IRQHandler                                /* DMA channel 15 transfer complete */
        PUBWEAK   DMA16_IRQHandler                                /* DMA channel 16 transfer complete */
        PUBWEAK   DMA17_IRQHandler                                /* DMA channel 17 transfer complete */
        PUBWEAK   DMA18_IRQHandler                                /* DMA channel 18 transfer complete */
        PUBWEAK   DMA19_IRQHandler                                /* DMA channel 19 transfer complete */
        PUBWEAK   DMA20_IRQHandler                                /* DMA channel 20 transfer complete */
        PUBWEAK   DMA21_IRQHandler                                /* DMA channel 21 transfer complete */
        PUBWEAK   DMA22_IRQHandler                                /* DMA channel 22 transfer complete */
        PUBWEAK   DMA23_IRQHandler                                /* DMA channel 23 transfer complete */
        PUBWEAK   DMA24_IRQHandler                                /* DMA channel 24 transfer complete */
        PUBWEAK   DMA25_IRQHandler                                /* DMA channel 25 transfer complete */
        PUBWEAK   DMA26_IRQHandler                                /* DMA channel 26 transfer complete */
        PUBWEAK   DMA27_IRQHandler                                /* DMA channel 27 transfer complete */
        PUBWEAK   DMA28_IRQHandler                                /* DMA channel 28 transfer complete */
        PUBWEAK   DMA29_IRQHandler                                /* DMA channel 29 transfer complete */
        PUBWEAK   DMA30_IRQHandler                                /* DMA channel 30 transfer complete */
        PUBWEAK   DMA31_IRQHandler                                /* DMA channel 31 transfer complete */
        PUBWEAK   DMA0_Error_IRQHandler                           /* DMA error interrupt channels 0-31 */
        PUBWEAK   CPM0_IRQHandler                                 /* FPU etc. interrupt */
        PUBWEAK   FC0_IRQHandler                                  /* Flash Controller Command complete, time out etc. interrupt */
        PUBWEAK   PMC0_IRQHandler                                 /* HVD/LVD etc. interrupt */
        PUBWEAK   TMU0_IRQHandler                                 /* ADC0 CMP1/2 interrupt */
        PUBWEAK   WDOG0_IRQHandler                                /* interrupt request out before wdg reset out */
        PUBWEAK   WDOG1_IRQHandler                                /* interrupt request out before wdg reset out */
        PUBWEAK   FCSMU0_IRQHandler                               /* Fault Control and Safety Manage Unit */
        PUBWEAK   STCU0_IRQHandler                                /* Safety Control Unit interrupt */
        PUBWEAK   ERM0_IRQHandler                                 /* ERM single or double bit error interrupt */
        PUBWEAK   MAM0_IRQHandler                                 /* Matrix Access Moniotr interrupt */
        PUBWEAK   MAM1_IRQHandler                                 /* Matrix Access Moniotr interrupt */
        PUBWEAK   CTI0_IRQHandler                                 /* CTI Interrupt */
        PUBWEAK   CTI1_IRQHandler                                 /* CTI Interrupt */
        PUBWEAK   RGM0_Pre_IRQHandler                             /* RGM pre-reset Interrupt */
        PUBWEAK   RGM0_Exit_IRQHandler                            /* RGM other cpu exit reset Interrupt */
        PUBWEAK   INTM0_IRQHandler                                /* INTM timeout interrupt */
        PUBWEAK   ISM0_IRQHandler                                 /* ISM0 interrupt */
        PUBWEAK   MB0_IRQHandler                                  /* Mail Box interrupt */
        PUBWEAK   SCG0_IRQHandler                                 /* SCG bus interrupt request */
        PUBWEAK   CMU0_IRQHandler                                 /* CMU0 interrupt */
        PUBWEAK   CMU1_IRQHandler                                 /* CMU1 interrupt */
        PUBWEAK   CMU2_IRQHandler                                 /* CMU2 interrupt */
        PUBWEAK   CMU3_IRQHandler                                 /* CMU3 interrupt */
        PUBWEAK   TSTMP0_IRQHandler                               /* TimerStamp interrupt */
        PUBWEAK   TSTMP1_IRQHandler                               /* TimerStamp interrupt */
        PUBWEAK   TSTMP2_IRQHandler                               /* TimerStamp interrupt */
        PUBWEAK   CMU4_IRQHandler                                 /* CMU4 interrupt */
        PUBWEAK   CORDIC0_IRQHandler                              /* CORDIC Acceleator interrupt */
        PUBWEAK   HSM0_Error_IRQHandler                           /* HSM error interrupt */
        PUBWEAK   FCPIT0_IRQHandler                               /* FCPIT interrupt */
        PUBWEAK   RTC0_IRQHandler                                 /* RTC alarm or seconds interrupt */
        PUBWEAK   AONTIMER0_IRQHandler                            /* AONTIMER interrupt request */
        PUBWEAK   SWI_IRQHandler                                  /* Software interrupt */
        PUBWEAK   FREQM0_IRQHandler                               /* FREQM interrupt */
        PUBWEAK   PORTA_IRQHandler                                /* PORTA Interrupt */
        PUBWEAK   PORTB_IRQHandler                                /* PORTB Interrupt */
        PUBWEAK   PORTC_IRQHandler                                /* PORTC Interrupt */
        PUBWEAK   PORTD_IRQHandler                                /* PORTD Interrupt */
        PUBWEAK   PORTE_IRQHandler                                /* PORTE Interrupt */
        PUBWEAK   PORTF_IRQHandler                                /* PORTF Interrupt */
        PUBWEAK   PORTG_IRQHandler                                /* PORTG Interrupt */
        PUBWEAK   PORTH_IRQHandler                                /* PORTH Interrupt */
        PUBWEAK   PORTI_IRQHandler                                /* PORTI Interrupt */
        PUBWEAK   CAN0_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        PUBWEAK   CAN0_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        PUBWEAK   CAN1_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        PUBWEAK   CAN1_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        PUBWEAK   CAN2_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        PUBWEAK   CAN2_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        PUBWEAK   CAN3_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        PUBWEAK   CAN3_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        PUBWEAK   CAN4_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        PUBWEAK   CAN4_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        PUBWEAK   CAN5_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
        PUBWEAK   CAN5_Error_IRQHandler                           /* FLEXCAN Error interrupt */
        PUBWEAK   FCIIC0_IRQHandler                               /* FCIIC Interrupt */
        PUBWEAK   FCIIC1_IRQHandler                               /* FCIIC Interrupt */
        PUBWEAK   FCSPI0_IRQHandler                               /* FCSPI Interrupt */
        PUBWEAK   FCSPI1_IRQHandler                               /* FCSPI Interrupt */
        PUBWEAK   FCSPI2_IRQHandler                               /* FCSPI Interrupt */
        PUBWEAK   FCSPI3_IRQHandler                               /* FCSPI Interrupt */
        PUBWEAK   FCSPI4_IRQHandler                               /* FCSPI Interrupt */
        PUBWEAK   FCSPI5_IRQHandler                               /* FCSPI Interrupt */
        PUBWEAK   FCUART0_RxTx_IRQHandler                         /* FCUART Interrupt */
        PUBWEAK   FCUART1_RxTx_IRQHandler                         /* FCUART Interrupt */
        PUBWEAK   FCUART2_RxTx_IRQHandler                         /* FCUART Interrupt */
        PUBWEAK   FCUART3_RxTx_IRQHandler                         /* FCUART Interrupt */
        PUBWEAK   FCUART4_RxTx_IRQHandler                         /* FCUART Interrupt */
        PUBWEAK   FCUART5_RxTx_IRQHandler                         /* FCUART Interrupt */
        PUBWEAK   FCUART6_RxTx_IRQHandler                         /* FCUART Interrupt */
        PUBWEAK   FCUART7_RxTx_IRQHandler                         /* FCUART Interrupt */
        PUBWEAK   FTU0_IRQHandler                                 /* FTU all source interrupt */
        PUBWEAK   FTU1_IRQHandler                                 /* FTU all source interrupt */
        PUBWEAK   FTU2_IRQHandler                                 /* FTU all source interrupt */
        PUBWEAK   FTU3_IRQHandler                                 /* FTU all source interrupt */
        PUBWEAK   FTU4_IRQHandler                                 /* FTU all source interrupt */
        PUBWEAK   FTU5_IRQHandler                                 /* FTU all source interrupt */
        PUBWEAK   ADC0_IRQHandler                                 /* ADC interrupt request. */
        PUBWEAK   ADC1_IRQHandler                                 /* ADC interrupt request. */
        PUBWEAK   ADC2_IRQHandler                                 /* ADC interrupt request. */
        PUBWEAK   ADC3_IRQHandler                                 /* ADC interrupt request. */
        PUBWEAK   PTIMER0_IRQHandler                              /* PTIMER interrupt */
        PUBWEAK   PTIMER1_IRQHandler                              /* PTIMER interrupt */
        PUBWEAK   PTIMER2_IRQHandler                              /* PTIMER interrupt */
        PUBWEAK   MSC0_IRQHandler                                 /* MSC interrupt */
        PUBWEAK   SENT0_IRQHandler                                /* SENT  all interrupt (fast or slow) */
        PUBWEAK   SENT1_IRQHandler                                /* SENT  all interrupt (fast or slow) */
        PUBWEAK   SSI0_IRQHandler                                 /* SSI interrupt OR interrupt */
        PUBWEAK   LU0_IRQHandler                                  /* LU interrupt */
        PUBWEAK   LU1_IRQHandler                                  /* LU interrupt */
        PUBWEAK   HSM0_Crypto_IRQHandler                          /* Crypto interrupt */
        PUBWEAK   EFTU0_IRQHandler                                /* eFTU TIM overflow etc. interrupt, EAC interrupt and CMP interrupt, BLDC0/1 interrupt */
        PUBWEAK   EFTU0_TIM_0_3_IRQHandler                        /* eFTU TIM 0-3 source interrupt */
        PUBWEAK   EFTU0_TIM_4_7_IRQHandler                        /* eFTU TIM 4-7 source interrupt */
        PUBWEAK   EFTU0_TOM_0_7_IRQHandler                        /* eFTU TOM 0-7 source interrupt */
        PUBWEAK   EFTU0_TOM_8_15_IRQHandler                       /* eFTU TOM 8-15 source interrupt */
        PUBWEAK   DefaultISR                                      /* 145 */
        SECTION .text:CODE:REORDER:NOROOT(1)

DMA0_IRQHandler                                 /* DMA channel 0 transfer complete */
DMA1_IRQHandler                                 /* DMA channel 1 transfer complete */
DMA2_IRQHandler                                 /* DMA channel 2 transfer complete */
DMA3_IRQHandler                                 /* DMA channel 3 transfer complete */
DMA4_IRQHandler                                 /* DMA channel 4 transfer complete */
DMA5_IRQHandler                                 /* DMA channel 5 transfer complete */
DMA6_IRQHandler                                 /* DMA channel 6 transfer complete */
DMA7_IRQHandler                                 /* DMA channel 7 transfer complete */
DMA8_IRQHandler                                 /* DMA channel 8 transfer complete */
DMA9_IRQHandler                                 /* DMA channel 9 transfer complete */
DMA10_IRQHandler                                /* DMA channel 10 transfer complete */
DMA11_IRQHandler                                /* DMA channel 11 transfer complete */
DMA12_IRQHandler                                /* DMA channel 12 transfer complete */
DMA13_IRQHandler                                /* DMA channel 13 transfer complete */
DMA14_IRQHandler                                /* DMA channel 14 transfer complete */
DMA15_IRQHandler                                /* DMA channel 15 transfer complete */
DMA16_IRQHandler                                /* DMA channel 16 transfer complete */
DMA17_IRQHandler                                /* DMA channel 17 transfer complete */
DMA18_IRQHandler                                /* DMA channel 18 transfer complete */
DMA19_IRQHandler                                /* DMA channel 19 transfer complete */
DMA20_IRQHandler                                /* DMA channel 20 transfer complete */
DMA21_IRQHandler                                /* DMA channel 21 transfer complete */
DMA22_IRQHandler                                /* DMA channel 22 transfer complete */
DMA23_IRQHandler                                /* DMA channel 23 transfer complete */
DMA24_IRQHandler                                /* DMA channel 24 transfer complete */
DMA25_IRQHandler                                /* DMA channel 25 transfer complete */
DMA26_IRQHandler                                /* DMA channel 26 transfer complete */
DMA27_IRQHandler                                /* DMA channel 27 transfer complete */
DMA28_IRQHandler                                /* DMA channel 28 transfer complete */
DMA29_IRQHandler                                /* DMA channel 29 transfer complete */
DMA30_IRQHandler                                /* DMA channel 30 transfer complete */
DMA31_IRQHandler                                /* DMA channel 31 transfer complete */
DMA0_Error_IRQHandler                           /* DMA error interrupt channels 0-31 */
CPM0_IRQHandler                                 /* FPU etc. interrupt */
FC0_IRQHandler                                  /* Flash Controller Command complete, time out etc. interrupt */
PMC0_IRQHandler                                 /* HVD/LVD etc. interrupt */
TMU0_IRQHandler                                 /* ADC0 CMP1/2 interrupt */
WDOG0_IRQHandler                                /* interrupt request out before wdg reset out */
WDOG1_IRQHandler                                /* interrupt request out before wdg reset out */
FCSMU0_IRQHandler                               /* Fault Control and Safety Manage Unit */
STCU0_IRQHandler                                /* Safety Control Unit interrupt */
ERM0_IRQHandler                                 /* ERM single or double bit error interrupt */
MAM0_IRQHandler                                 /* Matrix Access Moniotr interrupt */
MAM1_IRQHandler                                 /* Matrix Access Moniotr interrupt */
CTI0_IRQHandler                                 /* CTI Interrupt */
CTI1_IRQHandler                                 /* CTI Interrupt */
RGM0_Pre_IRQHandler                             /* RGM pre-reset Interrupt */
RGM0_Exit_IRQHandler                            /* RGM other cpu exit reset Interrupt */
INTM0_IRQHandler                                /* INTM timeout interrupt */
ISM0_IRQHandler                                 /* ISM0 interrupt */
MB0_IRQHandler                                  /* Mail Box interrupt */
SCG0_IRQHandler                                 /* SCG bus interrupt request */
CMU0_IRQHandler                                 /* CMU0 interrupt */
CMU1_IRQHandler                                 /* CMU1 interrupt */
CMU2_IRQHandler                                 /* CMU2 interrupt */
CMU3_IRQHandler                                 /* CMU3 interrupt */
TSTMP0_IRQHandler                               /* TimerStamp interrupt */
TSTMP1_IRQHandler                               /* TimerStamp interrupt */
TSTMP2_IRQHandler                               /* TimerStamp interrupt */
CMU4_IRQHandler                                 /* CMU4 interrupt */
CORDIC0_IRQHandler                              /* CORDIC Acceleator interrupt */
HSM0_Error_IRQHandler                           /* HSM error interrupt */
FCPIT0_IRQHandler                               /* FCPIT interrupt */
RTC0_IRQHandler                                 /* RTC alarm or seconds interrupt */
AONTIMER0_IRQHandler                            /* AONTIMER interrupt request */
SWI_IRQHandler                                  /* Software interrupt */
FREQM0_IRQHandler                               /* FREQM interrupt */
PORTA_IRQHandler                                /* PORTA Interrupt */
PORTB_IRQHandler                                /* PORTB Interrupt */
PORTC_IRQHandler                                /* PORTC Interrupt */
PORTD_IRQHandler                                /* PORTD Interrupt */
PORTE_IRQHandler                                /* PORTE Interrupt */
PORTF_IRQHandler                                /* PORTF Interrupt */
PORTG_IRQHandler                                /* PORTG Interrupt */
PORTH_IRQHandler                                /* PORTH Interrupt */
PORTI_IRQHandler                                /* PORTI Interrupt */
CAN0_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
CAN0_Error_IRQHandler                           /* FLEXCAN Error interrupt */
CAN1_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
CAN1_Error_IRQHandler                           /* FLEXCAN Error interrupt */
CAN2_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
CAN2_Error_IRQHandler                           /* FLEXCAN Error interrupt */
CAN3_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
CAN3_Error_IRQHandler                           /* FLEXCAN Error interrupt */
CAN4_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
CAN4_Error_IRQHandler                           /* FLEXCAN Error interrupt */
CAN5_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
CAN5_Error_IRQHandler                           /* FLEXCAN Error interrupt */
FCIIC0_IRQHandler                               /* FCIIC Interrupt */
FCIIC1_IRQHandler                               /* FCIIC Interrupt */
FCSPI0_IRQHandler                               /* FCSPI Interrupt */
FCSPI1_IRQHandler                               /* FCSPI Interrupt */
FCSPI2_IRQHandler                               /* FCSPI Interrupt */
FCSPI3_IRQHandler                               /* FCSPI Interrupt */
FCSPI4_IRQHandler                               /* FCSPI Interrupt */
FCSPI5_IRQHandler                               /* FCSPI Interrupt */
FCUART0_RxTx_IRQHandler                         /* FCUART Interrupt */
FCUART1_RxTx_IRQHandler                         /* FCUART Interrupt */
FCUART2_RxTx_IRQHandler                         /* FCUART Interrupt */
FCUART3_RxTx_IRQHandler                         /* FCUART Interrupt */
FCUART4_RxTx_IRQHandler                         /* FCUART Interrupt */
FCUART5_RxTx_IRQHandler                         /* FCUART Interrupt */
FCUART6_RxTx_IRQHandler                         /* FCUART Interrupt */
FCUART7_RxTx_IRQHandler                         /* FCUART Interrupt */
FTU0_IRQHandler                                 /* FTU all source interrupt */
FTU1_IRQHandler                                 /* FTU all source interrupt */
FTU2_IRQHandler                                 /* FTU all source interrupt */
FTU3_IRQHandler                                 /* FTU all source interrupt */
FTU4_IRQHandler                                 /* FTU all source interrupt */
FTU5_IRQHandler                                 /* FTU all source interrupt */
ADC0_IRQHandler                                 /* ADC interrupt request. */
ADC1_IRQHandler                                 /* ADC interrupt request. */
ADC2_IRQHandler                                 /* ADC interrupt request. */
ADC3_IRQHandler                                 /* ADC interrupt request. */
PTIMER0_IRQHandler                              /* PTIMER interrupt */
PTIMER1_IRQHandler                              /* PTIMER interrupt */
PTIMER2_IRQHandler                              /* PTIMER interrupt */
MSC0_IRQHandler                                 /* MSC interrupt */
SENT0_IRQHandler                                /* SENT  all interrupt (fast or slow) */
SENT1_IRQHandler                                /* SENT  all interrupt (fast or slow) */
SSI0_IRQHandler                                 /* SSI interrupt OR interrupt */
LU0_IRQHandler                                  /* LU interrupt */
LU1_IRQHandler                                  /* LU interrupt */
HSM0_Crypto_IRQHandler                          /* Crypto interrupt */
EFTU0_IRQHandler                                /* eFTU TIM overflow etc. interrupt, EAC interrupt and CMP interrupt, BLDC0/1 interrupt */
EFTU0_TIM_0_3_IRQHandler                        /* eFTU TIM 0-3 source interrupt */
EFTU0_TIM_4_7_IRQHandler                        /* eFTU TIM 4-7 source interrupt */
EFTU0_TOM_0_7_IRQHandler                        /* eFTU TOM 0-7 source interrupt */
EFTU0_TOM_8_15_IRQHandler                       /* eFTU TOM 8-15 source interrupt */
DefaultISR                                      /* 145 */
        B DefaultISR

        END