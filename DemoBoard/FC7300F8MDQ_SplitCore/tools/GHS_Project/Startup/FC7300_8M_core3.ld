/**
*   @file    FC7300_8M_core3.ld
*   @version 1.1.0
*
*   @brief   GHS linker directive file for Core 3
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
    ITCM_CORE3           (RWX) : ORIGIN = 0x00000000 + __ITCM_COMMON_SIZE, LENGTH = __ITCM_CORE_SIZE - __ITCM_COMMON_SIZE
    DTCM_CORE3           (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE, LENGTH = __DTCM_DATA_SIZE
    DTCM_STACK_CORE3     (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE + __DTCM_DATA_SIZE, LENGTH = __STACK_SIZE
}

SECTIONS
{
    .isr_vector_core3                              ALIGN(1024)    : > PFLASH_INTVEC3

    .tcm_vector_core3   PAD(__INTVEC_SIZE_RESERVE/4) ALIGN(1024)    : > ITCM_CORE3

    .itcm_func_core3                               (ABS) ALIGN(4)       :
    {
        "*(.bsp_tcmcode_core3)"
    }                                                               > .

    .data_seperated_core3                          ALIGN(4)       :
    {
        "*(.seperated_data_core3*)"
    }                                                               > DTCM_CORE3

    .bss_seperated_core3                  (NOLOAD) ALIGN(4)       :
    {
        "*(.seperated_bss_core3*)"
    }                                                               > .

    .heap_core3         (NOLOAD) PAD(__HEAP_SIZE)  ALIGN(8)       : > .
    .stack_core3        (NOLOAD) PAD(__STACK_SIZE) ALIGN(8)       : > DTCM_STACK_CORE3

    __rom_intvec_start_core3           = ADDR(.isr_vector_core3);
    __tcm_intvec_start_core3           = ADDR(.tcm_vector_core3);
    __tcm_intvec_end_core3             = ADDR(.tcm_vector_core3) + SIZEOF(.tcm_vector_core3);

    __stack_limit_core3                = ADDR(.stack_core3);
    __stack_top_core3                  = ADDR(.stack_core3) + SIZEOF(.stack_core3);

    __Heap0Begin_core3                 = ADDR(.heap_core3);
    __Heap0Limit_core3                 = ADDR(.heap_core3) + SIZEOF(.heap_core3);

    __ram_itcm_func_start_core3        = ADDR(.itcm_func_core3);
    __ram_itcm_func_end_core3          = ADDR(.itcm_func_core3) + SIZEOF(.itcm_func_core3);
    __rom_itcm_func_start_core3        = ADDR(.ROM.itcm_func_core3);

    __ram_seperated_data_start_core3   = ADDR(.data_seperated_core3);
    __ram_seperated_data_end_core3     = ADDR(.data_seperated_core3) + SIZEOF(.data_seperated_core3);
    __rom_seperated_data_start_core3   = ADDR(.ROM.data_seperated_core3);
    __seperated_bss_start_core3        = ADDR(.bss_seperated_core3);
    __seperated_bss_end_core3          = ADDR(.bss_seperated_core3) + SIZEOF(.bss_seperated_core3);
}
