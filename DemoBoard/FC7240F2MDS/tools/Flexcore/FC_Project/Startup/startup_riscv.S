/* boot script for FC7300 FlexCore Subsystem 2023-7-1 */

#define EXCEPTION_STACK_SIZE 0x58

    .text
    .section .vectors, "ax"
    .option norvc;

    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler
    jal x0, IRQ_Handler

    // reset vector
    jal x0, Reset_Handler

    // Illegal instrution exception
    jal x0, IllegalInstruction_Handler

    // ecall handler
    jal x0, Ecall_Handler

    // LSU error
    jal x0, LSU_Handler

    .section .startup

/* Reset Handler */
Reset_Handler:

    # Disable global interrupt, clear MIE bit
    csrci mstatus, 8

    la a2, __bss_end__
    la a3, __bss_start__

FlexCoreClearBss:
    sw x0, 0(a3)
    addi a3, a3, 4
    bltu a3, a2, FlexCoreClearBss

    # initialize stack pointer
    la sp, __StackTop

    # initialize global pointer
    la gp, __global_pointer




    jal FlexCoreUserAppSystemInit


    # Enable global interrupt
    csrsi mstatus, 8

    jal main

    j DyingInFlexCoreMode

    .size Reset_Handler, . - Reset_Handler

    .global _init
    .global _fini
_init:
_fini:
    ret

  // saves all caller-saved registers (except return address)
store_regs:
    sw  x3, 0x00(x2)  // gp
    sw  x4, 0x04(x2)  // tp
    sw  x5, 0x08(x2)  // t0
    sw  x6, 0x0c(x2)  // t1
    sw  x7, 0x10(x2)  // t2
    sw x10, 0x14(x2)  // a0
    sw x11, 0x18(x2)  // a1
    sw x12, 0x1c(x2)  // a2
    sw x13, 0x20(x2)  // a3
    sw x14, 0x24(x2)  // a4
    sw x15, 0x28(x2)  // a5
    sw x16, 0x2c(x2)  // a6
    sw x17, 0x30(x2)  // a7

    csrr a0, 0x7B0
    csrr a1, 0x7B1
    csrr a2, 0x7B2
    sw a0, 0x34(x2)  // lpstart[0]
    sw a1, 0x38(x2)  // lpend[0]
    sw a2, 0x3c(x2)  // lpcount[0]
    csrr a0, 0x7B4
    csrr a1, 0x7B5
    csrr a2, 0x7B6
    sw a0, 0x40(x2)  // lpstart[1]
    sw a1, 0x44(x2)  // lpend[1]
    sw a2, 0x48(x2)  // lpcount[1]

    csrr a0, mepc // 0x341
    sw a0, 0x4c(x2)  // mepc
    csrr a1, mstatus // 0x300
    sw a1, 0x50(x2)  // mstatus
    jalr x0, x1

    // load back registers from stack
end_except:
    lw a1, 0x50(x2)  // mstatus
    csrrw x0, mstatus, a1
    lw a0, 0x4c(x2)  // mepc
    csrrw x0, mepc, a0

    lw a0, 0x40(x2)  // lpstart[1]
    lw a1, 0x44(x2)  // lpend[1]
    lw a2, 0x48(x2)  // lpcount[1]
    csrrw x0, 0x7B4, a0
    csrrw x0, 0x7B5, a1
    csrrw x0, 0x7B6, a2
    lw a0, 0x34(x2)  // lpstart[0]
    lw a1, 0x38(x2)  // lpend[0]
    lw a2, 0x3c(x2)  // lpcount[0]
    csrrw x0, 0x7B0, a0
    csrrw x0, 0x7B1, a1
    csrrw x0, 0x7B2, a2

    lw  x3, 0x00(x2)  // gp
    lw  x4, 0x04(x2)  // tp
    lw  x5, 0x08(x2)  // t0
    lw  x6, 0x0c(x2)  // t1
    lw  x7, 0x10(x2)  // t2
    lw x10, 0x14(x2)  // a0
    lw x11, 0x18(x2)  // a1
    lw x12, 0x1c(x2)  // a2
    lw x13, 0x20(x2)  // a3
    lw x14, 0x24(x2)  // a4
    lw x15, 0x28(x2)  // a5
    lw x16, 0x2c(x2)  // a6
    lw x17, 0x30(x2)  // a7

    lw  x1, 0x54(x2) // restore the reg when enter IRQ_Handler
    addi x2, x2, EXCEPTION_STACK_SIZE
    mret

    .weak IRQ_Handler
    .type IRQ_Handler, %function
IRQ_Handler:
    addi x2, x2, -EXCEPTION_STACK_SIZE
    sw x1, 0x54(x2)
    jal x1, store_regs
    la x1, end_except // set the return addr when exit from SystemIrqHandler
    csrr a0, mcause  // read mcause to a0 to pass this parameter to the following func
    jal x0, SystemIrqHandler
    .size IRQ_Handler, . - IRQ_Handler

    .macro define_exception_entry entry_name handler_name
    .weak \entry_name
\entry_name:
    addi x2, x2, -EXCEPTION_STACK_SIZE
    sw x1, 0x54(x2)
    jal x1, store_regs
    la x1, end_except
    jal x0, \handler_name
    .endm

define_exception_entry IllegalInstruction_Handler IllegalInstruction_HandlerFunc
define_exception_entry Ecall_Handler Ecall_HandlerFunc
define_exception_entry LSU_Handler LSU_HandlerFunc

DyingInFlexCoreMode:
    wfi
    j DyingInFlexCoreMode
    j .
    .size DyingInFlexCoreMode, . - DyingInFlexCoreMode

DyingOutsideOfInterrupt:
    jal WDOG_Refresh
    wfi
    jal WDOG_Refresh
    j DyingOutsideOfInterrupt
    j .
    .size DyingOutsideOfInterrupt, . - DyingOutsideOfInterrupt

    .weak IllegalInstruction_HandlerFunc
    .type IllegalInstruction_HandlerFunc, %function
IllegalInstruction_HandlerFunc:
    lui  a4,0x42023
    addi a1,a4,132 # 42023084
    lw   a5,0(a1)
    lui  a3,0x10
    addi a3,a3,-1
    lui  a2,0xdead0
    and  a5,a5,a3
    addi a2,a2,4
    or   a5,a5,a2
    sw   a5,0(a1)


    la   a0, DyingOutsideOfInterrupt
    csrrw x0, mepc, a0
    mret
    j .
    .size IllegalInstruction_HandlerFunc, . - IllegalInstruction_HandlerFunc

    .weak Ecall_HandlerFunc
    .type Ecall_HandlerFunc, %function
Ecall_HandlerFunc:
    lui a4,0x42023
    addi    a1,a4,132 # 42023084
    lw  a5,0(a1)
    lui a3,0x10
    addi    a3,a3,-1
    lui a2,0xdead0
    and a5,a5,a3
    addi    a2,a2,16
    or  a5,a5,a2
    sw  a5,0(a1)


    la   a0, DyingOutsideOfInterrupt
    csrrw x0, mepc, a0
    mret

    j .
    .size Ecall_HandlerFunc, . - Ecall_HandlerFunc

    .weak LSU_HandlerFunc
    .type LSU_HandlerFunc, %function
LSU_HandlerFunc:
    lui a4,0x42023
    addi    a1,a4,132 # 42023084
    lw  a5,0(a1)
    lui a3,0x10
    addi    a3,a3,-1
    lui a2,0xdead0
    and a5,a5,a3
    addi    a2,a2,32 # dead0020
    or  a5,a5,a2
    sw  a5,0(a1)


    la   a0, DyingOutsideOfInterrupt
    csrrw x0, mepc, a0
    mret

    j .
    .size LSU_HandlerFunc, . - LSU_HandlerFunc
