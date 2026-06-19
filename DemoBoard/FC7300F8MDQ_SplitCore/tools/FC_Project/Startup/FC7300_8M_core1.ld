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
    ITCM_Core1                (RWX) : ORIGIN = 0x00000000 + __ITCM_COMMON_SIZE, LENGTH = 0x00010000 - __ITCM_COMMON_SIZE  /* 64KB */
    /* DTCM */
    DTCM_Core1                (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE, LENGTH = 0x00020000 - __DTCM_COMMON_SIZE - __STACK_SIZE    /* 128KB - __STACK_SIZE */
    DTCM_STACK_Core1          (RW)  : ORIGIN = 0x20000000 + 0x00020000 - __STACK_SIZE, LENGTH = __STACK_SIZE  /* __STACK_SIZE  */
}

/* Define output sections */
SECTIONS
{
    .isr_vector_core1                                             : ALIGN(1024)
    {
        KEEP(*(.isr_vector_core1))
    }                                                               > PFLASH_INTVEC


    .tcm_vector_core1                                    (NOLOAD)       : ALIGN(1024)
    {
        . += __INTVEC_SIZE_RESERVE;
    }                                                               > ITCM_Core1

    .itcm_func_core1                                                    : ALIGN(4)
    {
        *(.bsp_tcmcode_core1)
    }                                                               > ITCM_Core1
                                                                 AT > PFLASH

    .data_seperated_core1                                               : ALIGN(4)
    {
        *(.seperated_data_core1*)
    }                                                               > DTCM_Core1
                                                                 AT > PFLASH

    .bss_seperated_core1                                                : ALIGN(4)
    {
        *(.seperated_bss_core1*)
    }                                                               > DTCM_Core1

    .heap_core1                                          (NOLOAD)       : ALIGN(8)
    {
        . += __HEAP_SIZE;
    }                                                               > DTCM_Core1

    .stack_core1                                         (NOLOAD)       : ALIGN(8)
    {
        . += __STACK_SIZE;
    }                                                               > DTCM_STACK_Core1


    __rom_intvec_start_core1           = ADDR(.isr_vector_core1);
    __rom_intvec_end_core1             = ADDR(.isr_vector_core1) + SIZEOF(.isr_vector_core1);
    __tcm_intvec_start_core1           = ADDR(.tcm_vector_core1);
    __tcm_intvec_end_core1             = ADDR(.tcm_vector_core1) + SIZEOF(.tcm_vector_core1);

    __stack_limit_core1                = ADDR(.stack_core1);
    __stack_top_core1                  = ADDR(.stack_core1) + SIZEOF(.stack_core1);

    __Heap0Begin_core1  = ADDR(.heap_core1);
    __Heap0Limit_core1  = ADDR(.heap_core1) + SIZEOF(.heap_core1);

    __ram_itcm_func_start_core1        = ADDR(.itcm_func_core1);
    __ram_itcm_func_end_core1          = ADDR(.itcm_func_core1) + SIZEOF(.itcm_func_core1);
    __rom_itcm_func_start_core1        = LOADADDR(.itcm_func_core1);

    __ram_seperated_data_start_core1   = ADDR(.data_seperated_core1);
    __ram_seperated_data_end_core1     = ADDR(.data_seperated_core1) + SIZEOF(.data_seperated_core1);
    __rom_seperated_data_start_core1   = LOADADDR(.data_seperated_core1);
    __seperated_bss_start_core1        = ADDR(.bss_seperated_core1);
    __seperated_bss_end_core1          = ADDR(.bss_seperated_core1) + SIZEOF(.bss_seperated_core1);

}