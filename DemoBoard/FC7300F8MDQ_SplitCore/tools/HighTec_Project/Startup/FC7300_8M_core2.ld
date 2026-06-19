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
    ITCM_Core2                (RWX) : ORIGIN = 0x00000000 + __ITCM_COMMON_SIZE, LENGTH = 0x00008000 - __ITCM_COMMON_SIZE  /* 32KB */
    /* DTCM */
    DTCM_Core2                (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE, LENGTH = 0x00010000 - __DTCM_COMMON_SIZE - __STACK_SIZE    /* 64KB - __STACK_SIZE */
    DTCM_STACK_Core2          (RW)  : ORIGIN = 0x20000000 + 0x00010000 - __STACK_SIZE, LENGTH = __STACK_SIZE  /* __STACK_SIZE  */
}

/* Define output sections */
SECTIONS
{
    .isr_vector_core2                                             : ALIGN(1024)
    {
        KEEP(*(.isr_vector_core2))
    }                                                               > PFLASH_INTVEC


    .tcm_vector_core2                                    (NOLOAD)       : ALIGN(1024)
    {
        . += __INTVEC_SIZE_RESERVE;
    }                                                               > ITCM_Core2

    .itcm_func_core2                                                    : ALIGN(4)
    {
        *(.bsp_tcmcode_core2)
    }                                                               > ITCM_Core2
                                                                 AT > PFLASH

    .data_seperated_core2                                               : ALIGN(4)
    {
        *(.seperated_data_core2*)
    }                                                               > DTCM_Core2
                                                                 AT > PFLASH

    .bss_seperated_core2                                                : ALIGN(4)
    {
        *(.seperated_bss_core2*)
    }                                                               > DTCM_Core2

    .heap_core2                                          (NOLOAD)       : ALIGN(8)
    {
        . += __HEAP_SIZE;
    }                                                               > DTCM_Core2

    .stack_core2                                         (NOLOAD)       : ALIGN(8)
    {
        . += __STACK_SIZE;
    }                                                               > DTCM_STACK_Core2


    __rom_intvec_start_core2           = ADDR(.isr_vector_core2);
    __rom_intvec_end_core2             = ADDR(.isr_vector_core2) + SIZEOF(.isr_vector_core2);
    __tcm_intvec_start_core2           = ADDR(.tcm_vector_core2);
    __tcm_intvec_end_core2             = ADDR(.tcm_vector_core2) + SIZEOF(.tcm_vector_core2);

    __stack_limit_core2                = ADDR(.stack_core2);
    __stack_top_core2                  = ADDR(.stack_core2) + SIZEOF(.stack_core2);

    __Heap0Begin_core2  = ADDR(.heap_core2);
    __Heap0Limit_core2  = ADDR(.heap_core2) + SIZEOF(.heap_core2);

    __ram_itcm_func_start_core2        = ADDR(.itcm_func_core2);
    __ram_itcm_func_end_core2          = ADDR(.itcm_func_core2) + SIZEOF(.itcm_func_core2);
    __rom_itcm_func_start_core2        = LOADADDR(.itcm_func_core2);

    __ram_seperated_data_start_core2   = ADDR(.data_seperated_core2);
    __ram_seperated_data_end_core2     = ADDR(.data_seperated_core2) + SIZEOF(.data_seperated_core2);
    __rom_seperated_data_start_core2   = LOADADDR(.data_seperated_core2);
    __seperated_bss_start_core2        = ADDR(.bss_seperated_core2);
    __seperated_bss_end_core2          = ADDR(.bss_seperated_core2) + SIZEOF(.bss_seperated_core2);

}