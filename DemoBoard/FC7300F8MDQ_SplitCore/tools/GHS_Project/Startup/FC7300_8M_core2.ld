/**
*   @file    FC7300_8M_core2.ld
*   @version 1.1.0
*
*   @brief   GHS linker directive file for Core 2
*   @details This file is the GHS linker directive file demo for a 4-core setup.
*
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : N/A
*   AUTOSAR REVISION     : N/A
*   SOFTWARE VERSION     : 1.1.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

DEFAULTS
{
    __ITCM_CORE_SIZE  = 0x00008000;
    __DTCM_CORE_SIZE  = 0x00010000;
    __DTCM_DATA_SIZE  = __DTCM_CORE_SIZE - __DTCM_COMMON_SIZE - __STACK_SIZE;
}

MEMORY
{
    ITCM_CORE2           (RWX) : ORIGIN = 0x00000000 + __ITCM_COMMON_SIZE, LENGTH = __ITCM_CORE_SIZE - __ITCM_COMMON_SIZE
    DTCM_CORE2           (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE, LENGTH = __DTCM_DATA_SIZE
    DTCM_STACK_CORE2     (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE + __DTCM_DATA_SIZE, LENGTH = __STACK_SIZE
}

SECTIONS
{
    .isr_vector_core2                              ALIGN(1024)    : > PFLASH_INTVEC2

    .tcm_vector_core2   PAD(__INTVEC_SIZE_RESERVE/4) ALIGN(1024)    : > ITCM_CORE2

    .itcm_func_core2                               (ABS) ALIGN(4)       :
    {
        "*(.bsp_tcmcode_core2)"
    }                                                               > .

    .data_seperated_core2                          ALIGN(4)       :
    {
        "*(.seperated_data_core2*)"
    }                                                               > DTCM_CORE2

    .bss_seperated_core2                  (NOLOAD) ALIGN(4)       :
    {
        "*(.seperated_bss_core2*)"
    }                                                               > .

    .heap_core2         (NOLOAD) PAD(__HEAP_SIZE)  ALIGN(8)       : > .
    .stack_core2        (NOLOAD) PAD(__STACK_SIZE) ALIGN(8)       : > DTCM_STACK_CORE2

    __rom_intvec_start_core2           = ADDR(.isr_vector_core2);
    __tcm_intvec_start_core2           = ADDR(.tcm_vector_core2);
    __tcm_intvec_end_core2             = ADDR(.tcm_vector_core2) + SIZEOF(.tcm_vector_core2);

    __stack_limit_core2                = ADDR(.stack_core2);
    __stack_top_core2                  = ADDR(.stack_core2) + SIZEOF(.stack_core2);

    __Heap0Begin_core2                 = ADDR(.heap_core2);
    __Heap0Limit_core2                 = ADDR(.heap_core2) + SIZEOF(.heap_core2);

    __ram_itcm_func_start_core2        = ADDR(.itcm_func_core2);
    __ram_itcm_func_end_core2          = ADDR(.itcm_func_core2) + SIZEOF(.itcm_func_core2);
    __rom_itcm_func_start_core2        = ADDR(.ROM.itcm_func_core2);

    __ram_seperated_data_start_core2   = ADDR(.data_seperated_core2);
    __ram_seperated_data_end_core2     = ADDR(.data_seperated_core2) + SIZEOF(.data_seperated_core2);
    __rom_seperated_data_start_core2   = ADDR(.ROM.data_seperated_core2);
    __seperated_bss_start_core2        = ADDR(.bss_seperated_core2);
    __seperated_bss_end_core2          = ADDR(.bss_seperated_core2) + SIZEOF(.bss_seperated_core2);
}
