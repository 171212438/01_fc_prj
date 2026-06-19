/**
*   @file    FC7300_8M.ld
*   @version 1.1.0
*
*   @brief   GHS linker directive file (COMMON for multicore)
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
    __HEAP_SIZE             = 0x00000200 ;   /* required amount of heap per core */
    __STACK_SIZE            = 0x00001000 ;   /* required amount of stack per core */
    __INTVEC_SIZE_RESERVE   = 0x00001000 ;   /* interrupt vector size (total for all cores) */

    __ITCM_COMMON_SIZE      = 0x00004000 ;   /* 16KB */
    __DTCM_COMMON_SIZE      = 0x00004000 ;   /* 16KB */
}

/* Specify the memory areas */
MEMORY
{
    ITCM_COMMON           (RWX) : ORIGIN = 0x00000000, LENGTH = __ITCM_COMMON_SIZE
    DTCM_COMMON           (RW)  : ORIGIN = 0x20000000, LENGTH = __DTCM_COMMON_SIZE

    /* SRAM */
    SRAM_0                (RW)  : ORIGIN = 0x21000000, LENGTH = 0x00040000  /* 256KB */
    SRAM_1                (RW)  : ORIGIN = 0x21040000, LENGTH = 0x00040000  /* 256KB */
    SRAM_2                (RW)  : ORIGIN = 0x21080000, LENGTH = 0x00060000  /* 384KB */

    PFLASH_INTVEC0        (RX)  : ORIGIN = 0x01000000, LENGTH = __INTVEC_SIZE_RESERVE/4
    PFLASH_INTVEC1        (RX)  : ORIGIN = 0x01000000 + __INTVEC_SIZE_RESERVE/4, LENGTH = __INTVEC_SIZE_RESERVE/4
    PFLASH_INTVEC2        (RX)  : ORIGIN = 0x01000000 + __INTVEC_SIZE_RESERVE/2, LENGTH = __INTVEC_SIZE_RESERVE/4
    PFLASH_INTVEC3        (RX)  : ORIGIN = 0x01000000 + __INTVEC_SIZE_RESERVE/4*3, LENGTH = __INTVEC_SIZE_RESERVE/4
    PFLASH                (RX)  : ORIGIN = 0x01000000 + __INTVEC_SIZE_RESERVE, LENGTH = 0x00800000 - __INTVEC_SIZE_RESERVE

    DFLASH                (R)   : ORIGIN = 0x04000000, LENGTH = 0x00040000  /* 256KB */

    NVR                   (R)   : ORIGIN = 0x04400000, LENGTH = 0x00002000  /* 8KB */
}

/* Define output sections */
SECTIONS
{
    /* The program code and other data goes into internal flash */
    .text                                          ALIGN(4)       :
    {
        "*(.text)"
        "*(.text*)"
        "*(.*mcal_text*)"
        "*(.rodata*)"
        "*(.*mcal_rodata*)"
        "*(.*mcal_const_cfg*)"
    }                                                               > PFLASH

    .intercall                                          ALIGN(4)       :
    {
        "*(.intercall)"
    }                                                               > PFLASH

    .ROM.itcm_func         ROM(.itcm_func)         ALIGN(4)       : > .
    .ROM.data_seperated    ROM(.data_seperated)    ALIGN(4)       : > .
    .ROM.data              ROM(.data)              ALIGN(4)       : > .
    .ROM.data_nocacheable  ROM(.data_nocacheable)  ALIGN(4)       : > .
    .ROM.data_shareable    ROM(.data_shareable)    ALIGN(4)       : > .
    .ROM.itcm_func_core0   ROM(.itcm_func_core0)   ALIGN(4)       : > .
    .ROM.itcm_func_core1   ROM(.itcm_func_core1)   ALIGN(4)       : > .
    .ROM.itcm_func_core2   ROM(.itcm_func_core2)   ALIGN(4)       : > .
    .ROM.itcm_func_core3   ROM(.itcm_func_core3)   ALIGN(4)       : > .
    .ROM.data_seperated_core0 ROM(.data_seperated_core0) ALIGN(4) : > .
    .ROM.data_seperated_core1 ROM(.data_seperated_core1) ALIGN(4) : > .
    .ROM.data_seperated_core2 ROM(.data_seperated_core2) ALIGN(4) : > .
    .ROM.data_seperated_core3 ROM(.data_seperated_core3) ALIGN(4) : > .

    .secinfo                                       ALIGN(4)       : > .

    .itcm_func                               (ABS) ALIGN(8)       :
    {
        "*(.*mcal_ramcode)"
        "*(.bsp_ramcode)"
    }                                                               > ITCM_COMMON

    .data_seperated                                ALIGN(4)       :
    {
        "*(.seperated_data*)"
    }                                                               > DTCM_COMMON

    .bss_seperated                        (NOLOAD) ALIGN(4)       :
    {
        "*(.seperated_bss*)"
    }                                                               > .

    .data                                          ALIGN(4)       :
    {
        "*(.data*)"
        "*(.*mcal_data*)"
    }                                                               > SRAM_0

    .bss                                  (NOLOAD) ALIGN(4)       :
    {
        "*(.bss*)"
        "*(.*mcal_bss*)"
    }                                                               > .

    .data_nocacheable                              ALIGN(32)      :
    {
        "*(.*mcal_nocacheable_data*)"
    }                                                               > SRAM_1

    .bss_nocacheable                      (NOLOAD) ALIGN(32)      :
    {
        "*(.*mcal_nocacheable_bss*)"
    }                                                               > .

    .bss_rtt_buffer                       (NOLOAD) ALIGN(32)      :
    {
        "*(.rtt_section)"
        "*(.rtt_buffer_section)"
    }                                                               > SRAM_2

    .data_shareable                                ALIGN(32)      :
    {
        "*(.*mcal_shareable_data*)"
        "*(.bsp_shareable_data*)"
    }                                                               > .

    .bss_shareable                        (NOLOAD) ALIGN(32)      :
    {
        "*(.*mcal_shareable_bss*)"
        "*(.bsp_shareable_bss*)"
    }                                                               > .

    __ram_itcm_func_start        = ADDR(.itcm_func);
    __ram_itcm_func_end          = ADDR(.itcm_func) + SIZEOF(.itcm_func);
    __rom_itcm_func_start        = ADDR(.ROM.itcm_func);

    __ram_data_start             = ADDR(.data);
    __ram_data_end               = ADDR(.data) + SIZEOF(.data);
    __rom_data_start             = ADDR(.ROM.data);
    __ram_seperated_data_start   = ADDR(.data_seperated);
    __ram_seperated_data_end     = ADDR(.data_seperated) + SIZEOF(.data_seperated);
    __rom_seperated_data_start   = ADDR(.ROM.data_seperated);
    __ram_nocachable_data_start  = ADDR(.data_nocacheable);
    __ram_nocachable_data_end    = ADDR(.data_nocacheable) + SIZEOF(.data_nocacheable);
    __rom_nocachable_data_start  = ADDR(.ROM.data_nocacheable);
    __ram_shareable_data_start   = ADDR(.data_shareable);
    __ram_shareable_data_end     = ADDR(.data_shareable) + SIZEOF(.data_shareable);
    __rom_shareable_data_start   = ADDR(.ROM.data_shareable);

    __bss_start                  = ADDR(.bss);
    __bss_end                    = ADDR(.bss) + SIZEOF(.bss);
    __seperated_bss_start        = ADDR(.bss_seperated);
    __seperated_bss_end          = ADDR(.bss_seperated) + SIZEOF(.bss_seperated);
    __nocachable_bss_start       = ADDR(.bss_nocacheable);
    __nocachable_bss_end         = ADDR(.bss_nocacheable) + SIZEOF(.bss_nocacheable);
    __rtt_buffer_bss_start       = ADDR(.bss_rtt_buffer);
    __rtt_buffer_bss_end         = ADDR(.bss_rtt_buffer) + SIZEOF(.bss_rtt_buffer);
    __shareable_bss_start        = ADDR(.bss_shareable);
    __shareable_bss_end          = ADDR(.bss_shareable) + SIZEOF(.bss_shareable);
}
