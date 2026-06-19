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

                                                            /* External Interrupts */
    .long   DMA0_IRQHandler                                 /* DMA channel 0 transfer complete */
    .long   DMA1_IRQHandler                                 /* DMA channel 1 transfer complete */
    .long   DMA2_IRQHandler                                 /* DMA channel 2 transfer complete */
    .long   DMA3_IRQHandler                                 /* DMA channel 3 transfer complete */
    .long   DMA4_IRQHandler                                 /* DMA channel 4 transfer complete */
    .long   DMA5_IRQHandler                                 /* DMA channel 5 transfer complete */
    .long   DMA6_IRQHandler                                 /* DMA channel 6 transfer complete */
    .long   DMA7_IRQHandler                                 /* DMA channel 7 transfer complete */
    .long   DMA8_IRQHandler                                 /* DMA channel 8 transfer complete */
    .long   DMA9_IRQHandler                                 /* DMA channel 9 transfer complete */
    .long   DMA10_IRQHandler                                /* DMA channel 10 transfer complete */
    .long   DMA11_IRQHandler                                /* DMA channel 11 transfer complete */
    .long   DMA12_IRQHandler                                /* DMA channel 12 transfer complete */
    .long   DMA13_IRQHandler                                /* DMA channel 13 transfer complete */
    .long   DMA14_IRQHandler                                /* DMA channel 14 transfer complete */
    .long   DMA15_IRQHandler                                /* DMA channel 15 transfer complete */
    .long   DMA16_IRQHandler                                /* DMA channel 16 transfer complete */
    .long   DMA17_IRQHandler                                /* DMA channel 17 transfer complete */
    .long   DMA18_IRQHandler                                /* DMA channel 18 transfer complete */
    .long   DMA19_IRQHandler                                /* DMA channel 19 transfer complete */
    .long   DMA20_IRQHandler                                /* DMA channel 20 transfer complete */
    .long   DMA21_IRQHandler                                /* DMA channel 21 transfer complete */
    .long   DMA22_IRQHandler                                /* DMA channel 22 transfer complete */
    .long   DMA23_IRQHandler                                /* DMA channel 23 transfer complete */
    .long   DMA24_IRQHandler                                /* DMA channel 24 transfer complete */
    .long   DMA25_IRQHandler                                /* DMA channel 25 transfer complete */
    .long   DMA26_IRQHandler                                /* DMA channel 26 transfer complete */
    .long   DMA27_IRQHandler                                /* DMA channel 27 transfer complete */
    .long   DMA28_IRQHandler                                /* DMA channel 28 transfer complete */
    .long   DMA29_IRQHandler                                /* DMA channel 29 transfer complete */
    .long   DMA30_IRQHandler                                /* DMA channel 30 transfer complete */
    .long   DMA31_IRQHandler                                /* DMA channel 31 transfer complete */
    .long   DMA0_Error_IRQHandler                           /* DMA error interrupt channels 0-31 */
    .long   CPM0_IRQHandler                                 /* FPU etc. interrupt */
    .long   FC0_IRQHandler                                  /* Flash Controller Command complete, time out etc. interrupt */
    .long   PMC0_IRQHandler                                 /* HVD/LVD etc. interrupt */
    .long   TMU0_IRQHandler                                 /* ADC0 CMP1/2 interrupt */
    .long   WDOG0_IRQHandler                                /* interrupt request out before wdg reset out */
    .long   WDOG1_IRQHandler                                /* interrupt request out before wdg reset out */
    .long   FCSMU0_IRQHandler                               /* Fault Control and Safety Manage Unit */
    .long   STCU0_IRQHandler                                /* Safety Control Unit interrupt */
    .long   ERM0_IRQHandler                                 /* ERM single or double bit error interrupt */
    .long   MAM0_IRQHandler                                 /* Matrix Access Moniotr interrupt */
    .long   MAM1_IRQHandler                                 /* Matrix Access Moniotr interrupt */
    .long   CTI0_IRQHandler                                 /* CTI Interrupt */
    .long   CTI1_IRQHandler                                 /* CTI Interrupt */
    .long   RGM0_Pre_IRQHandler                             /* RGM pre-reset Interrupt */
    .long   RGM0_Exit_IRQHandler                            /* RGM other cpu exit reset Interrupt */
    .long   INTM0_IRQHandler                                /* INTM timeout interrupt */
    .long   ISM0_IRQHandler                                 /* ISM0 interrupt */
    .long   MB0_IRQHandler                                  /* Mail Box interrupt */
    .long   SCG0_IRQHandler                                 /* SCG bus interrupt request */
    .long   CMU0_IRQHandler                                 /* CMU0 interrupt */
    .long   CMU1_IRQHandler                                 /* CMU1 interrupt */
    .long   CMU2_IRQHandler                                 /* CMU2 interrupt */
    .long   CMU3_IRQHandler                                 /* CMU3 interrupt */
    .long   TSTMP0_IRQHandler                               /* TimerStamp interrupt */
    .long   TSTMP1_IRQHandler                               /* TimerStamp interrupt */
    .long   TSTMP2_IRQHandler                               /* TimerStamp interrupt */
    .long   CMU4_IRQHandler                                 /* CMU4 interrupt */
    .long   CORDIC0_IRQHandler                              /* CORDIC Acceleator interrupt */
    .long   HSM0_Error_IRQHandler                           /* HSM error interrupt */
    .long   FCPIT0_IRQHandler                               /* FCPIT interrupt */
    .long   RTC0_IRQHandler                                 /* RTC alarm or seconds interrupt */
    .long   AONTIMER0_IRQHandler                            /* AONTIMER interrupt request */
    .long   SWI_IRQHandler                                  /* Software interrupt */
    .long   FREQM0_IRQHandler                               /* FREQM interrupt */
    .long   PORTA_IRQHandler                                /* PORTA Interrupt */
    .long   PORTB_IRQHandler                                /* PORTB Interrupt */
    .long   PORTC_IRQHandler                                /* PORTC Interrupt */
    .long   PORTD_IRQHandler                                /* PORTD Interrupt */
    .long   PORTE_IRQHandler                                /* PORTE Interrupt */
    .long   PORTF_IRQHandler                                /* PORTF Interrupt */
    .long   PORTG_IRQHandler                                /* PORTG Interrupt */
    .long   PORTH_IRQHandler                                /* PORTH Interrupt */
    .long   PORTI_IRQHandler                                /* PORTI Interrupt */
    .long   CAN0_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
    .long   CAN0_Error_IRQHandler                           /* FLEXCAN Error interrupt */
    .long   CAN1_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
    .long   CAN1_Error_IRQHandler                           /* FLEXCAN Error interrupt */
    .long   CAN2_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
    .long   CAN2_Error_IRQHandler                           /* FLEXCAN Error interrupt */
    .long   CAN3_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
    .long   CAN3_Error_IRQHandler                           /* FLEXCAN Error interrupt */
    .long   CAN4_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
    .long   CAN4_Error_IRQHandler                           /* FLEXCAN Error interrupt */
    .long   CAN5_IRQHandler                                 /* FLEXCAN interrupt(except error related interrupt) */
    .long   CAN5_Error_IRQHandler                           /* FLEXCAN Error interrupt */
    .long   FCIIC0_IRQHandler                               /* FCIIC Interrupt */
    .long   FCIIC1_IRQHandler                               /* FCIIC Interrupt */
    .long   FCSPI0_IRQHandler                               /* FCSPI Interrupt */
    .long   FCSPI1_IRQHandler                               /* FCSPI Interrupt */
    .long   FCSPI2_IRQHandler                               /* FCSPI Interrupt */
    .long   FCSPI3_IRQHandler                               /* FCSPI Interrupt */
    .long   FCSPI4_IRQHandler                               /* FCSPI Interrupt */
    .long   FCSPI5_IRQHandler                               /* FCSPI Interrupt */
    .long   FCUART0_RxTx_IRQHandler                         /* FCUART Interrupt */
    .long   FCUART1_RxTx_IRQHandler                         /* FCUART Interrupt */
    .long   FCUART2_RxTx_IRQHandler                         /* FCUART Interrupt */
    .long   FCUART3_RxTx_IRQHandler                         /* FCUART Interrupt */
    .long   FCUART4_RxTx_IRQHandler                         /* FCUART Interrupt */
    .long   FCUART5_RxTx_IRQHandler                         /* FCUART Interrupt */
    .long   FCUART6_RxTx_IRQHandler                         /* FCUART Interrupt */
    .long   FCUART7_RxTx_IRQHandler                         /* FCUART Interrupt */
    .long   FTU0_IRQHandler                                 /* FTU all source interrupt */
    .long   FTU1_IRQHandler                                 /* FTU all source interrupt */
    .long   FTU2_IRQHandler                                 /* FTU all source interrupt */
    .long   FTU3_IRQHandler                                 /* FTU all source interrupt */
    .long   FTU4_IRQHandler                                 /* FTU all source interrupt */
    .long   FTU5_IRQHandler                                 /* FTU all source interrupt */
    .long   ADC0_IRQHandler                                 /* ADC interrupt request. */
    .long   ADC1_IRQHandler                                 /* ADC interrupt request. */
    .long   ADC2_IRQHandler                                 /* ADC interrupt request. */
    .long   ADC3_IRQHandler                                 /* ADC interrupt request. */
    .long   PTIMER0_IRQHandler                              /* PTIMER interrupt */
    .long   PTIMER1_IRQHandler                              /* PTIMER interrupt */
    .long   PTIMER2_IRQHandler                              /* PTIMER interrupt */
    .long   MSC0_IRQHandler                                 /* MSC interrupt */
    .long   SENT0_IRQHandler                                /* SENT  all interrupt (fast or slow) */
    .long   SENT1_IRQHandler                                /* SENT  all interrupt (fast or slow) */
    .long   SSI0_IRQHandler                                 /* SSI interrupt OR interrupt */
    .long   LU0_IRQHandler                                  /* LU interrupt */
    .long   LU1_IRQHandler                                  /* LU interrupt */
    .long   HSM0_Crypto_IRQHandler                          /* Crypto interrupt */
    .long   EFTU0_IRQHandler                                /* eFTU TIM overflow etc. interrupt, EAC interrupt and CMP interrupt, BLDC0/1 interrupt */
    .long   EFTU0_TIM_0_3_IRQHandler                        /* eFTU TIM 0-3 source interrupt */
    .long   EFTU0_TIM_4_7_IRQHandler                        /* eFTU TIM 4-7 source interrupt */
    .long   EFTU0_TOM_0_7_IRQHandler                        /* eFTU TOM 0-7 source interrupt */
    .long   EFTU0_TOM_8_15_IRQHandler                       /* eFTU TOM 8-15 source interrupt */
    .long   DefaultISR                                      /* 145 */
    .long   DefaultISR                                      /* 146 */
    .long   DefaultISR                                      /* 147 */
    .long   DefaultISR                                      /* 148 */
    .long   DefaultISR                                      /* 149 */
    .long   DefaultISR                                      /* 150 */
    .long   DefaultISR                                      /* 151 */
    .long   DefaultISR                                      /* 152 */
    .long   DefaultISR                                      /* 153 */
    .long   DefaultISR                                      /* 154 */
    .long   DefaultISR                                      /* 155 */
    .long   DefaultISR                                      /* 156 */
    .long   DefaultISR                                      /* 157 */
    .long   DefaultISR                                      /* 158 */
    .long   DefaultISR                                      /* 159 */
    .long   DefaultISR                                      /* 160 */
    .long   DefaultISR                                      /* 161 */
    .long   DefaultISR                                      /* 162 */
    .long   DefaultISR                                      /* 163 */
    .long   DefaultISR                                      /* 164 */
    .long   DefaultISR                                      /* 165 */
    .long   DefaultISR                                      /* 166 */
    .long   DefaultISR                                      /* 167 */
    .long   DefaultISR                                      /* 168 */
    .long   DefaultISR                                      /* 169 */
    .long   DefaultISR                                      /* 170 */
    .long   DefaultISR                                      /* 171 */
    .long   DefaultISR                                      /* 172 */
    .long   DefaultISR                                      /* 173 */
    .long   DefaultISR                                      /* 174 */
    .long   DefaultISR                                      /* 175 */
    .long   DefaultISR                                      /* 176 */
    .long   DefaultISR                                      /* 177 */
    .long   DefaultISR                                      /* 178 */
    .long   DefaultISR                                      /* 179 */
    .long   DefaultISR                                      /* 180 */
    .long   DefaultISR                                      /* 181 */
    .long   DefaultISR                                      /* 182 */
    .long   DefaultISR                                      /* 183 */
    .long   DefaultISR                                      /* 184 */
    .long   DefaultISR                                      /* 185 */
    .long   DefaultISR                                      /* 186 */
    .long   DefaultISR                                      /* 187 */
    .long   DefaultISR                                      /* 188 */
    .long   DefaultISR                                      /* 189 */
    .long   DefaultISR                                      /* 190 */
    .long   DefaultISR                                      /* 191 */
    .long   DefaultISR                                      /* 192 */
    .long   DefaultISR                                      /* 193 */
    .long   DefaultISR                                      /* 194 */
    .long   DefaultISR                                      /* 195 */
    .long   DefaultISR                                      /* 196 */
    .long   DefaultISR                                      /* 197 */
    .long   DefaultISR                                      /* 198 */
    .long   DefaultISR                                      /* 199 */
    .long   DefaultISR                                      /* 200 */
    .long   DefaultISR                                      /* 201 */
    .long   DefaultISR                                      /* 202 */
    .long   DefaultISR                                      /* 203 */
    .long   DefaultISR                                      /* 204 */
    .long   DefaultISR                                      /* 205 */
    .long   DefaultISR                                      /* 206 */
    .long   DefaultISR                                      /* 207 */
    .long   DefaultISR                                      /* 208 */
    .long   DefaultISR                                      /* 209 */
    .long   DefaultISR                                      /* 210 */
    .long   DefaultISR                                      /* 211 */
    .long   DefaultISR                                      /* 212 */
    .long   DefaultISR                                      /* 213 */
    .long   DefaultISR                                      /* 214 */
    .long   DefaultISR                                      /* 215 */
    .long   DefaultISR                                      /* 216 */
    .long   DefaultISR                                      /* 217 */
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

    .pool
    .size Reset_Handler, . - Reset_Handler

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    b       DefaultISR
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
    def_irq_handler DMA0_Error_IRQHandler
    def_irq_handler CPM0_IRQHandler
    def_irq_handler FC0_IRQHandler
    def_irq_handler PMC0_IRQHandler
    def_irq_handler TMU0_IRQHandler
    def_irq_handler WDOG0_IRQHandler
    def_irq_handler WDOG1_IRQHandler
    def_irq_handler FCSMU0_IRQHandler
    def_irq_handler STCU0_IRQHandler
    def_irq_handler ERM0_IRQHandler
    def_irq_handler MAM0_IRQHandler
    def_irq_handler MAM1_IRQHandler
    def_irq_handler CTI0_IRQHandler
    def_irq_handler CTI1_IRQHandler
    def_irq_handler RGM0_Pre_IRQHandler
    def_irq_handler RGM0_Exit_IRQHandler
    def_irq_handler INTM0_IRQHandler
    def_irq_handler ISM0_IRQHandler
    def_irq_handler MB0_IRQHandler
    def_irq_handler SCG0_IRQHandler
    def_irq_handler CMU0_IRQHandler
    def_irq_handler CMU1_IRQHandler
    def_irq_handler CMU2_IRQHandler
    def_irq_handler CMU3_IRQHandler
    def_irq_handler TSTMP0_IRQHandler
    def_irq_handler TSTMP1_IRQHandler
    def_irq_handler TSTMP2_IRQHandler
    def_irq_handler CMU4_IRQHandler
    def_irq_handler CORDIC0_IRQHandler
    def_irq_handler HSM0_Error_IRQHandler
    def_irq_handler FCPIT0_IRQHandler
    def_irq_handler RTC0_IRQHandler
    def_irq_handler AONTIMER0_IRQHandler
    def_irq_handler SWI_IRQHandler
    def_irq_handler FREQM0_IRQHandler
    def_irq_handler PORTA_IRQHandler
    def_irq_handler PORTB_IRQHandler
    def_irq_handler PORTC_IRQHandler
    def_irq_handler PORTD_IRQHandler
    def_irq_handler PORTE_IRQHandler
    def_irq_handler PORTF_IRQHandler
    def_irq_handler PORTG_IRQHandler
    def_irq_handler PORTH_IRQHandler
    def_irq_handler PORTI_IRQHandler
    def_irq_handler CAN0_IRQHandler
    def_irq_handler CAN0_Error_IRQHandler
    def_irq_handler CAN1_IRQHandler
    def_irq_handler CAN1_Error_IRQHandler
    def_irq_handler CAN2_IRQHandler
    def_irq_handler CAN2_Error_IRQHandler
    def_irq_handler CAN3_IRQHandler
    def_irq_handler CAN3_Error_IRQHandler
    def_irq_handler CAN4_IRQHandler
    def_irq_handler CAN4_Error_IRQHandler
    def_irq_handler CAN5_IRQHandler
    def_irq_handler CAN5_Error_IRQHandler
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
    def_irq_handler FTU0_IRQHandler
    def_irq_handler FTU1_IRQHandler
    def_irq_handler FTU2_IRQHandler
    def_irq_handler FTU3_IRQHandler
    def_irq_handler FTU4_IRQHandler
    def_irq_handler FTU5_IRQHandler
    def_irq_handler ADC0_IRQHandler
    def_irq_handler ADC1_IRQHandler
    def_irq_handler ADC2_IRQHandler
    def_irq_handler ADC3_IRQHandler
    def_irq_handler PTIMER0_IRQHandler
    def_irq_handler PTIMER1_IRQHandler
    def_irq_handler PTIMER2_IRQHandler
    def_irq_handler MSC0_IRQHandler
    def_irq_handler SENT0_IRQHandler
    def_irq_handler SENT1_IRQHandler
    def_irq_handler SSI0_IRQHandler
    def_irq_handler LU0_IRQHandler
    def_irq_handler LU1_IRQHandler
    def_irq_handler HSM0_Crypto_IRQHandler
    def_irq_handler EFTU0_IRQHandler
    def_irq_handler EFTU0_TIM_0_3_IRQHandler
    def_irq_handler EFTU0_TIM_4_7_IRQHandler
    def_irq_handler EFTU0_TOM_0_7_IRQHandler
    def_irq_handler EFTU0_TOM_8_15_IRQHandler
    .end
