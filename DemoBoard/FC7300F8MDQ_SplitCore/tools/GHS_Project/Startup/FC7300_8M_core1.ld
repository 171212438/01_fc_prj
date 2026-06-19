/**
*   @file    FC7300_8M_core1.ld
*   @version 1.1.0
*
*   @brief   GHS linker directive file for Core 1
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
    __ITCM_CORE_SIZE  = 0x00010000;
    __DTCM_CORE_SIZE  = 0x00020000;
    __DTCM_DATA_SIZE  = __DTCM_CORE_SIZE - __DTCM_COMMON_SIZE - __STACK_SIZE;
}

MEMORY
{
    ITCM_CORE1           (RWX) : ORIGIN = 0x00000000 + __ITCM_COMMON_SIZE, LENGTH = __ITCM_CORE_SIZE - __ITCM_COMMON_SIZE
    DTCM_CORE1           (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE, LENGTH = __DTCM_DATA_SIZE
    DTCM_STACK_CORE1     (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE + __DTCM_DATA_SIZE, LENGTH = __STACK_SIZE
}

SECTIONS
{
    .isr_vector_core1                              ALIGN(1024)    : > PFLASH_INTVEC1

    .tcm_vector_core1   PAD(__INTVEC_SIZE_RESERVE/4) ALIGN(1024)    : > ITCM_CORE1

    .itcm_func_core1                               (ABS) ALIGN(4)       :
    {
        "*(.bsp_tcmcode_core1)"
    }                                                               > .

    .data_seperated_core1                          ALIGN(4)       :
    {
        "*(.seperated_data_core1*)"
    }                                                               > DTCM_CORE1

    .bss_seperated_core1                  (NOLOAD) ALIGN(4)       :
    {
        "*(.seperated_bss_core1*)"
    }                                                               > .

    .heap_core1         (NOLOAD) PAD(__HEAP_SIZE)  ALIGN(8)       : > .
    .stack_core1        (NOLOAD) PAD(__STACK_SIZE) ALIGN(8)       : > DTCM_STACK_CORE1

    __rom_intvec_start_core1           = ADDR(.isr_vector_core1);
    __tcm_intvec_start_core1           = ADDR(.tcm_vector_core1);
    __tcm_intvec_end_core1             = ADDR(.tcm_vector_core1) + SIZEOF(.tcm_vector_core1);

    __stack_limit_core1                = ADDR(.stack_core1);
    __stack_top_core1                  = ADDR(.stack_core1) + SIZEOF(.stack_core1);

    __Heap0Begin_core1                 = ADDR(.heap_core1);
    __Heap0Limit_core1                 = ADDR(.heap_core1) + SIZEOF(.heap_core1);

    __ram_itcm_func_start_core1        = ADDR(.itcm_func_core1);
    __ram_itcm_func_end_core1          = ADDR(.itcm_func_core1) + SIZEOF(.itcm_func_core1);
    __rom_itcm_func_start_core1        = ADDR(.ROM.itcm_func_core1);

    __ram_seperated_data_start_core1   = ADDR(.data_seperated_core1);
    __ram_seperated_data_end_core1     = ADDR(.data_seperated_core1) + SIZEOF(.data_seperated_core1);
    __rom_seperated_data_start_core1   = ADDR(.ROM.data_seperated_core1);
    __seperated_bss_start_core1        = ADDR(.bss_seperated_core1);
    __seperated_bss_end_core1          = ADDR(.bss_seperated_core1) + SIZEOF(.bss_seperated_core1);
}
