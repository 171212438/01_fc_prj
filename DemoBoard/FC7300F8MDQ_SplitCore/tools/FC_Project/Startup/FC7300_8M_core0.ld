/**
*   @file    FC7300_8M.ld
*   @version 1.0.0
*
*   @brief   GCC linker directive file
*   @details This file is the GCC linker directive file demo
*
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : N/A
*   AUTOSAR REVISION     : N/A
*   SOFTWARE VERSION     : 1.0.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/* Specify the memory areas */
MEMORY
{
    ITCM_Core0                (RWX) : ORIGIN = 0x00000000 + __ITCM_COMMON_SIZE, LENGTH = 0x00010000 - __ITCM_COMMON_SIZE  /* 64KB */
    /* DTCM */
    DTCM_Core0                (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE, LENGTH = 0x00020000 - __DTCM_COMMON_SIZE - __STACK_SIZE    /* 128KB - __STACK_SIZE */
    DTCM_STACK_Core0          (RW)  : ORIGIN = 0x20000000 + 0x00020000 - __STACK_SIZE, LENGTH = __STACK_SIZE  /* __STACK_SIZE  */
}

/* Define output sections */
SECTIONS
{
    .isr_vector_core0                                             : ALIGN(1024)
    {
        KEEP(*(.isr_vector_core0))
    }                                                               > PFLASH_INTVEC


    .tcm_vector_core0                                    (NOLOAD)       : ALIGN(1024)
    {
        . += __INTVEC_SIZE_RESERVE;
    }                                                               > ITCM_Core0

    .itcm_func_core0                                                    : ALIGN(4)
    {
        *(.bsp_tcmcode_core0)
    }                                                               > ITCM_Core0
                                                                 AT > PFLASH

    .data_seperated_core0                                               : ALIGN(4)
    {
        *(.seperated_data_core0*)
    }                                                               > DTCM_Core0
                                                                 AT > PFLASH

    .bss_seperated_core0                                                : ALIGN(4)
    {
        *(.seperated_bss_core0*)
    }                                                               > DTCM_Core0

    .heap_core0                                          (NOLOAD)       : ALIGN(8)
    {
        . += __HEAP_SIZE;
    }                                                               > DTCM_Core0

    .stack_core0                                         (NOLOAD)       : ALIGN(8)
    {
        . += __STACK_SIZE;
    }                                                               > DTCM_STACK_Core0


    __rom_intvec_start_core0           = ADDR(.isr_vector_core0);
    __rom_intvec_end_core0             = ADDR(.isr_vector_core0) + SIZEOF(.isr_vector_core0);
    __tcm_intvec_start_core0           = ADDR(.tcm_vector_core0);
    __tcm_intvec_end_core0             = ADDR(.tcm_vector_core0) + SIZEOF(.tcm_vector_core0);

    __stack_limit_core0                = ADDR(.stack_core0);
    __stack_top_core0                  = ADDR(.stack_core0) + SIZEOF(.stack_core0);

    __Heap0Begin_core0  = ADDR(.heap_core0);
    __Heap0Limit_core0  = ADDR(.heap_core0) + SIZEOF(.heap_core0);

    __ram_itcm_func_start_core0        = ADDR(.itcm_func_core0);
    __ram_itcm_func_end_core0          = ADDR(.itcm_func_core0) + SIZEOF(.itcm_func_core0);
    __rom_itcm_func_start_core0        = LOADADDR(.itcm_func_core0);

    __ram_seperated_data_start_core0   = ADDR(.data_seperated_core0);
    __ram_seperated_data_end_core0     = ADDR(.data_seperated_core0) + SIZEOF(.data_seperated_core0);
    __rom_seperated_data_start_core0   = LOADADDR(.data_seperated_core0);
    __seperated_bss_start_core0        = ADDR(.bss_seperated_core0);
    __seperated_bss_end_core0          = ADDR(.bss_seperated_core0) + SIZEOF(.bss_seperated_core0);
}
