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
        DCD   DMA0_IRQHandler                                 /*  DMA channel 0 transfer complete */
        DCD   DMA1_IRQHandler                                 /*  DMA channel 1 transfer complete */
        DCD   DMA2_IRQHandler                                 /*  DMA channel 2 transfer complete */
        DCD   DMA3_IRQHandler                                 /*  DMA channel 3 transfer complete */
        DCD   DMA4_IRQHandler                                 /*  DMA channel 4 transfer complete */
        DCD   DMA5_IRQHandler                                 /*  DMA channel 5 transfer complete */
        DCD   DMA6_IRQHandler                                 /*  DMA channel 6 transfer complete */
        DCD   DMA7_IRQHandler                                 /*  DMA channel 7 transfer complete */
        DCD   DMA8_IRQHandler                                 /*  DMA channel 8 transfer complete */
        DCD   DMA9_IRQHandler                                 /*  DMA channel 9 transfer complete */
        DCD   DMA10_IRQHandler                                /*  DMA channel 10 transfer complete */
        DCD   DMA11_IRQHandler                                /*  DMA channel 11 transfer complete */
        DCD   DMA12_IRQHandler                                /*  DMA channel 12 transfer complete */
        DCD   DMA13_IRQHandler                                /*  DMA channel 13 transfer complete */
        DCD   DMA14_IRQHandler                                /*  DMA channel 14 transfer complete */
        DCD   DMA15_IRQHandler                                /*  DMA channel 15 transfer complete */
        DCD   DMA_Error_IRQHandler                            /*  DMA error interrupt channels 0-31 */
        DCD   CPM_IRQHandler                                  /*  FPU etc. interrupt */
        DCD   FC_IRQHandler                                   /*  FC Command complete */
        DCD   PMC_IRQHandler                                  /*  HVD/LVD etc. interrupt */
        DCD   TMU_IRQHandler                                  /*  Temperature Monitor Unit interrupt */
        DCD   WDOG0_IRQHandler                                /*  interrupt request out before wdg reset out */
        DCD   WDOG1_IRQHandler                                /*  interrupt request out before wdg reset out */
        DCD   FCSMU0_IRQHandler                               /*  Fault Control and Safety Manage Unit */
        DCD   STCU0_IRQHandler                                /*  Safety Control Unit interrupt */
        DCD   ERM_fault_IRQHandler                            /*  ERM single/double bit error correction */
        DCD   MAM0_IRQHandler                                 /*  Matrix Access Monitor interrupt */
        DCD   RGM_Pre_IRQHandler                              /*  RGM pre-reset Interrupt */
        DCD   INTM0_IRQHandler                                /*  INTM alarm interrupt */
        DCD   ISM0_IRQHandler                                 /*  ISM0 interrupt */
        DCD   MB_IRQHandler                                   /*  Mail Box interrupt */
        DCD   SCG_IRQHandler                                  /*  SCG bus interrupt request */
        DCD   CMU0_IRQHandler                                 /*  CMU0 interrupt */
        DCD   CMU1_IRQHandler                                 /*  CMU1 interrupt */
        DCD   CMU2_IRQHandler                                 /*  CMU2 interrupt */
        DCD   CMU3_IRQHandler                                 /*  CMU3 interrupt */
        DCD   CMU4_IRQHandler                                 /*  CMU4 interrupt */
        DCD   TSTMP0_IRQHandler                               /*  TimerStamp0 interrupt */
        DCD   TSTMP1_IRQHandler                               /*  TimerStamp1 interrupt */
        DCD   CORDIC_IRQHandler                               /*  CORDIC Accelerator interrupt */
        DCD   HSM0_IRQHandler                                 /*  HSM error interrupt */
        DCD   FCPIT0_IRQHandler                               /*  FCPIT0 interrupt */
        DCD   RTC_IRQHandler                                  /*  RTC alarm or seconds interrupt  */
        DCD   AONTIMER_IRQHandler                             /*  AONTIMER interrupt request */
        DCD   SWI_IRQHandler                                  /*  Software interrupt */
        DCD   FREQM_IRQHandler                                /*  FREQM interrupt */
        DCD   ADC0_IRQHandler                                 /*  ADC0 interrupt request. */
        DCD   ADC1_IRQHandler                                 /*  ADC1 interrupt request. */
        DCD   PTIMER0_IRQHandler                              /*  PTIMER0 interrupt */
        DCD   PTIMER1_IRQHandler                              /*  PTIMER1 interrupt */
        DCD   CAN0_IRQHandler                                 /*  CAN0 Interrupt */
        DCD   CAN1_IRQHandler                                 /*  CAN1 Interrupt */
        DCD   CAN2_IRQHandler                                 /*  CAN2 Interrupt */
        DCD   CAN3_IRQHandler                                 /*  CAN3 Interrupt */
        DCD   FCIIC0_IRQHandler                               /*  FCIIC0 Interrupt */
        DCD   FCIIC1_IRQHandler                               /*  FCIIC1 Interrupt */
        DCD   FCSPI0_IRQHandler                               /*  FCSPI0 Interrupt */
        DCD   FCSPI1_IRQHandler                               /*  FCSPI1 Interrupt */
        DCD   FCSPI2_IRQHandler                               /*  FCSPI2 Interrupt */
        DCD   FCSPI3_IRQHandler                               /*  FCSPI3 Interrupt */
        DCD   FCSPI4_IRQHandler                               /*  FCSPI4 Interrupt */
        DCD   FCSPI5_IRQHandler                               /*  FCSPI5 Interrupt */
        DCD   FCUART0_RxTx_IRQHandler                         /*  FCUART0 Transmit / Receive Interrupt */
        DCD   FCUART1_RxTx_IRQHandler                         /*  FCUART1 Transmit / Receive  Interrupt */
        DCD   FCUART2_RxTx_IRQHandler                         /*  FCUART2 Transmit / Receive  Interrupt */
        DCD   FCUART3_RxTx_IRQHandler                         /*  FCUART3 Transmit / Receive Interrupt */
        DCD   FCUART4_RxTx_IRQHandler                         /*  FCUART4 Transmit / Receive  Interrupt */
        DCD   FCUART5_RxTx_IRQHandler                         /*  FCUART5 Transmit / Receive  Interrupt */
        DCD   FCUART6_RxTx_IRQHandler                         /*  FCUART6 Transmit / Receive Interrupt */
        DCD   FCUART7_RxTx_IRQHandler                         /*  FCUART7 Transmit / Receive  Interrupt */
        DCD   FTU0_IRQHandler                                 /*  FTU0 all source interrupt */
        DCD   FTU1_IRQHandler                                 /*  FTU1 all source interrupt */
        DCD   FTU2_IRQHandler                                 /*  FTU2 all source interrupt */
        DCD   FTU3_IRQHandler                                 /*  FTU3 all source interrupt */
        DCD   FTU4_IRQHandler                                 /*  FTU4 all source interrupt */
        DCD   FTU5_IRQHandler                                 /*  FTU5 all source interrupt */
        DCD   FTU6_IRQHandler                                 /*  FTU6 all source interrupt */
        DCD   FTU7_IRQHandler                                 /*  FTU7 all source interrupt */
        DCD   CMP0_IRQHandler                                 /*  CMP0 interrupt request  */
        DCD   CMP1_IRQHandler                                 /*  CMP1 interrupt request  */
        DCD   PORTA_IRQHandler                                /*  Port A pin detect interrupt */
        DCD   PORTB_IRQHandler                                /*  Port B pin detect interrupt */
        DCD   PORTC_IRQHandler                                /*  Port C pin detect interrupt */
        DCD   PORTD_IRQHandler                                /*  Port D pin detect interrupt */
        DCD   PORTE_IRQHandler                                /*  Port E pin detect interrupt */
        DCD   MSC0_IRQHandler                                 /*  MSC interrupt */
        DCD   SENT0_IRQHandler                                /*  SENT all interrupt (fast or slow) */
        DCD   TPU0_CH0_7_IRQHandler                           /*  TPU0 CH0-7 interrupt */
        DCD   TPU0_CH8_15_IRQHandler                          /*  TPU0 CH8-15 interrupt */
        DCD   TPU0_CH16_23_IRQHandler                         /*  TPU0 CH16-23 interrupt */
        DCD   TPU0_CH24_31_IRQHandler                         /*  TPU0 CH24-31 interrupt */
        DCD   HSM0_CRYPTO_IRQHandler                          /*  HSM crypto interrupt */
        DCD   DefaultISR                                      /* 108 */
        DCD   DefaultISR                                      /* 109 */
        DCD   DefaultISR                                      /* 110 */
        DCD   DefaultISR                                      /* 111 */
        DCD   DefaultISR                                      /* 112 */
        DCD   DefaultISR                                      /* 113 */
        DCD   DefaultISR                                      /* 114 */
        DCD   DefaultISR                                      /* 115 */
        DCD   DefaultISR                                      /* 116 */
        DCD   DefaultISR                                      /* 117 */
        DCD   DefaultISR                                      /* 118 */
        DCD   DefaultISR                                      /* 119 */
        DCD   DefaultISR                                      /* 120 */
        DCD   DefaultISR                                      /* 121 */
        DCD   DefaultISR                                      /* 122 */
        DCD   DefaultISR                                      /* 123 */
        DCD   DefaultISR                                      /* 124 */
        DCD   DefaultISR                                      /* 125 */
        DCD   DefaultISR                                      /* 126 */
        DCD   DefaultISR                                      /* 127 */
        DCD   DefaultISR                                      /* 128 */
        DCD   DefaultISR                                      /* 129 */
        DCD   DefaultISR                                      /* 130 */
        DCD   DefaultISR                                      /* 131 */
        DCD   DefaultISR                                      /* 132 */
        DCD   DefaultISR                                      /* 133 */
        DCD   DefaultISR                                      /* 134 */
        DCD   DefaultISR                                      /* 135 */
        DCD   DefaultISR                                      /* 136 */
        DCD   DefaultISR                                      /* 137 */
        DCD   DefaultISR                                      /* 138 */
        DCD   DefaultISR                                      /* 139 */
        DCD   DefaultISR                                      /* 140 */
        DCD   DefaultISR                                      /* 141 */
        DCD   DefaultISR                                      /* 142 */
        DCD   DefaultISR                                      /* 143 */
        DCD   DefaultISR                                      /* 144 */
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
        PUBWEAK DMA_Error_IRQHandler
        PUBWEAK CPM_IRQHandler
        PUBWEAK FC_IRQHandler
        PUBWEAK PMC_IRQHandler
        PUBWEAK TMU_IRQHandler
        PUBWEAK WDOG0_IRQHandler
        PUBWEAK WDOG1_IRQHandler
        PUBWEAK FCSMU0_IRQHandler
        PUBWEAK STCU0_IRQHandler
        PUBWEAK ERM_fault_IRQHandler
        PUBWEAK MAM0_IRQHandler
        PUBWEAK RGM_Pre_IRQHandler
        PUBWEAK INTM0_IRQHandler
        PUBWEAK ISM0_IRQHandler
        PUBWEAK MB_IRQHandler
        PUBWEAK SCG_IRQHandler
        PUBWEAK CMU0_IRQHandler
        PUBWEAK CMU1_IRQHandler
        PUBWEAK CMU2_IRQHandler
        PUBWEAK CMU3_IRQHandler
        PUBWEAK CMU4_IRQHandler
        PUBWEAK TSTMP0_IRQHandler
        PUBWEAK TSTMP1_IRQHandler
        PUBWEAK CORDIC_IRQHandler
        PUBWEAK HSM0_IRQHandler
        PUBWEAK FCPIT0_IRQHandler
        PUBWEAK RTC_IRQHandler
        PUBWEAK AONTIMER_IRQHandler
        PUBWEAK SWI_IRQHandler
        PUBWEAK FREQM_IRQHandler
        PUBWEAK ADC0_IRQHandler
        PUBWEAK ADC1_IRQHandler
        PUBWEAK PTIMER0_IRQHandler
        PUBWEAK PTIMER1_IRQHandler
        PUBWEAK CAN0_IRQHandler
        PUBWEAK CAN1_IRQHandler
        PUBWEAK CAN2_IRQHandler
        PUBWEAK CAN3_IRQHandler
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
        PUBWEAK CMP1_IRQHandler
        PUBWEAK PORTA_IRQHandler
        PUBWEAK PORTB_IRQHandler
        PUBWEAK PORTC_IRQHandler
        PUBWEAK PORTD_IRQHandler
        PUBWEAK PORTE_IRQHandler
        PUBWEAK MSC0_IRQHandler
        PUBWEAK SENT0_IRQHandler
        PUBWEAK TPU0_CH0_7_IRQHandler
        PUBWEAK TPU0_CH8_15_IRQHandler
        PUBWEAK TPU0_CH16_23_IRQHandler
        PUBWEAK TPU0_CH24_31_IRQHandler
        PUBWEAK HSM0_CRYPTO_IRQHandler
        PUBWEAK DefaultISR

        SECTION .text:CODE:REORDER:NOROOT(1)

NMI_Handler
HardFault_Handler
MemManage_Handler
BusFault_Handler
UsageFault_Handler
SVC_Handler
DebugMon_Handler
PendSV_Handler
SysTick_Handler
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
DMA_Error_IRQHandler
CPM_IRQHandler
FC_IRQHandler
PMC_IRQHandler
TMU_IRQHandler
WDOG0_IRQHandler
WDOG1_IRQHandler
FCSMU0_IRQHandler
STCU0_IRQHandler
ERM_fault_IRQHandler
MAM0_IRQHandler
RGM_Pre_IRQHandler
INTM0_IRQHandler
ISM0_IRQHandler
MB_IRQHandler
SCG_IRQHandler
CMU0_IRQHandler
CMU1_IRQHandler
CMU2_IRQHandler
CMU3_IRQHandler
CMU4_IRQHandler
TSTMP0_IRQHandler
TSTMP1_IRQHandler
CORDIC_IRQHandler
HSM0_IRQHandler
FCPIT0_IRQHandler
RTC_IRQHandler
AONTIMER_IRQHandler
SWI_IRQHandler
FREQM_IRQHandler
ADC0_IRQHandler
ADC1_IRQHandler
PTIMER0_IRQHandler
PTIMER1_IRQHandler
CAN0_IRQHandler
CAN1_IRQHandler
CAN2_IRQHandler
CAN3_IRQHandler
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
CMP1_IRQHandler
PORTA_IRQHandler
PORTB_IRQHandler
PORTC_IRQHandler
PORTD_IRQHandler
PORTE_IRQHandler
MSC0_IRQHandler
SENT0_IRQHandler
TPU0_CH0_7_IRQHandler
TPU0_CH8_15_IRQHandler
TPU0_CH16_23_IRQHandler
TPU0_CH24_31_IRQHandler
HSM0_CRYPTO_IRQHandler
DefaultISR
        B DefaultISR

        END