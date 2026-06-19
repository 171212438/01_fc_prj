;==================================================================================================
;   BRIEF             : Startup - Startup file for FC7240
;   PERIPHERAL        : N/A
;   PLATFORM          : Flagchip FC7240
;   SOFTWARE VERSION  : 0.2.0
;   VENDOR            : Flagchip
;   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
;   All Rights Reserved.
;==================================================================================================
;==================================================================================================
;   Revision History
;   Version     Date          Initials      CR#          Descriptions
;   ---------   ----------    ------------- ----------   ---------------
;   0.1.0       14/06/2023    qxw0030       N/A          Initial version
;   0.2.0       14/11/2023    qxw0038       N/A          Update Multicore adapt
;==================================================================================================


;==================================================================================================
;                                             Pre-defined Functions
;==================================================================================================
    .extern __rom_intvec_start
    .extern system_init

;===============================================[Reset Handler]====================================

    .section .text.reset_handler
    .thumb
    .align 4
    .weak    Reset_Handler
    .global   Reset_Handler

Reset_Handler: .type func
    cpsid   i               ; Mask interrupts

    ; Init the rest of the registers
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


    ; initialization startup stack for ecc

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

    .ltorg
    .size Reset_Handler, $ - Reset_Handler
    .endsec

    .section .text.handler_address
    .align  1
    .thumb
    .weak DefaultISR
DefaultISR: .type func
    b       DefaultISR
    .size DefaultISR, $ - DefaultISR
    .align 4
	.endsec

;    Macro to define default handlers. Default handler
;    will be weak symbol and just dead loops. They can be
;    overwritten by other handlers
def_irq_handler .macro handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm
; Exception Handlers
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
    def_irq_handler DMA_Error_IRQHandler
    def_irq_handler CPM_IRQHandler
    def_irq_handler FC_IRQHandler
    def_irq_handler PMC_IRQHandler
    def_irq_handler TMU_IRQHandler
    def_irq_handler WDOG0_IRQHandler
    def_irq_handler WDOG1_IRQHandler
    def_irq_handler FCSMU0_IRQHandler
    def_irq_handler STCU0_IRQHandler
    def_irq_handler ERM_fault_IRQHandler
    def_irq_handler MAM0_IRQHandler
    def_irq_handler RGM_Pre_IRQHandler
    def_irq_handler INTM0_IRQHandler
    def_irq_handler ISM0_IRQHandler
    def_irq_handler MB_IRQHandler
    def_irq_handler SCG_IRQHandler
    def_irq_handler CMU0_IRQHandler
    def_irq_handler CMU1_IRQHandler
    def_irq_handler CMU2_IRQHandler
    def_irq_handler CMU3_IRQHandler
    def_irq_handler CMU4_IRQHandler
    def_irq_handler TSTMP0_IRQHandler
    def_irq_handler TSTMP1_IRQHandler
    def_irq_handler CORDIC_IRQHandler
    def_irq_handler HSM0_IRQHandler
    def_irq_handler FCPIT0_IRQHandler
    def_irq_handler RTC_IRQHandler
    def_irq_handler AONTIMER_IRQHandler
    def_irq_handler SWI_IRQHandler
    def_irq_handler FREQM_IRQHandler
    def_irq_handler ADC0_IRQHandler
    def_irq_handler ADC1_IRQHandler
    def_irq_handler PTIMER0_IRQHandler
    def_irq_handler PTIMER1_IRQHandler
    def_irq_handler CAN0_IRQHandler
    def_irq_handler CAN1_IRQHandler
    def_irq_handler CAN2_IRQHandler
    def_irq_handler CAN3_IRQHandler
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
    def_irq_handler FTU6_IRQHandler
    def_irq_handler FTU7_IRQHandler
    def_irq_handler CMP0_IRQHandler
    def_irq_handler CMP1_IRQHandler
    def_irq_handler PORTA_IRQHandler
    def_irq_handler PORTB_IRQHandler
    def_irq_handler PORTC_IRQHandler
    def_irq_handler PORTD_IRQHandler
    def_irq_handler PORTE_IRQHandler
    def_irq_handler MSC0_IRQHandler
    def_irq_handler SENT0_IRQHandler
    def_irq_handler TPU0_CH0_7_IRQHandler
    def_irq_handler TPU0_CH8_15_IRQHandler
    def_irq_handler TPU0_CH16_23_IRQHandler
    def_irq_handler TPU0_CH24_31_IRQHandler
    def_irq_handler HSM0_CRYPTO_IRQHandler
    .end
