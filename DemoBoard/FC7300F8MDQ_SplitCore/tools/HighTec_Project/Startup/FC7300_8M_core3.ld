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
    ITCM_Core3                (RWX) : ORIGIN = 0x00000000 + __ITCM_COMMON_SIZE, LENGTH = 0x00008000 - __ITCM_COMMON_SIZE  /* 32KB */
    /* DTCM */
    DTCM_Core3                (RW)  : ORIGIN = 0x20000000 + __DTCM_COMMON_SIZE, LENGTH = 0x00010000 - __DTCM_COMMON_SIZE - __STACK_SIZE    /* 64KB - __STACK_SIZE */
    DTCM_STACK_Core3          (RW)  : ORIGIN = 0x20000000 + 0x00010000 - __STACK_SIZE, LENGTH = __STACK_SIZE  /* __STACK_SIZE  */
}

/* Define output sections */
SECTIONS
{
    .isr_vector_core3                                             : ALIGN(1024)
    {
        KEEP(*(.isr_vector_core3))
    }                                                               > PFLASH_INTVEC


    .tcm_vector_core3                                    (NOLOAD)       : ALIGN(1024)
    {
        . += __INTVEC_SIZE_RESERVE;
    }                                                               > ITCM_Core3

    .itcm_func_core3                                                    : ALIGN(4)
    {
        *(.bsp_tcmcode_core3)
    }                                                               > ITCM_Core3
                                                                 AT > PFLASH

    .data_seperated_core3                                               : ALIGN(4)
    {
        *(.seperated_data_core3*)
    }                                                               > DTCM_Core3
                                                                 AT > PFLASH

    .bss_seperated_core3                                                : ALIGN(4)
    {
        *(.seperated_bss_core3*)
    }                                                               > DTCM_Core3

    .heap_core3                                          (NOLOAD)       : ALIGN(8)
    {
        . += __HEAP_SIZE;
    }                                                               > DTCM_Core3

    .stack_core3                                         (NOLOAD)       : ALIGN(8)
    {
        . += __STACK_SIZE;
    }                                                               > DTCM_STACK_Core3


    __rom_intvec_start_core3           = ADDR(.isr_vector_core3);
    __rom_intvec_end_core3             = ADDR(.isr_vector_core3) + SIZEOF(.isr_vector_core3);
    __tcm_intvec_start_core3           = ADDR(.tcm_vector_core3);
    __tcm_intvec_end_core3             = ADDR(.tcm_vector_core3) + SIZEOF(.tcm_vector_core3);

    __stack_limit_core3                = ADDR(.stack_core3);
    __stack_top_core3                  = ADDR(.stack_core3) + SIZEOF(.stack_core3);

    __Heap0Begin_core3  = ADDR(.heap_core3);
    __Heap0Limit_core3  = ADDR(.heap_core3) + SIZEOF(.heap_core3);

    __ram_itcm_func_start_core3        = ADDR(.itcm_func_core3);
    __ram_itcm_func_end_core3          = ADDR(.itcm_func_core3) + SIZEOF(.itcm_func_core3);
    __rom_itcm_func_start_core3        = LOADADDR(.itcm_func_core3);

    __ram_seperated_data_start_core3   = ADDR(.data_seperated_core3);
    __ram_seperated_data_end_core3     = ADDR(.data_seperated_core3) + SIZEOF(.data_seperated_core3);
    __rom_seperated_data_start_core3   = LOADADDR(.data_seperated_core3);
    __seperated_bss_start_core3        = ADDR(.bss_seperated_core3);
    __seperated_bss_end_core3          = ADDR(.bss_seperated_core3) + SIZEOF(.bss_seperated_core3);

}