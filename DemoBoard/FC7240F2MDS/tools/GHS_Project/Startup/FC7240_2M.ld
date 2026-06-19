/**
*   @file    FC7240_2M.ld
*   @version 1.0.0
*
*   @brief   GHS linker directive file
*   @details This file is the GHS linker directive file demo
*
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7240
*   AUTOSAR VERSION      : N/A
*   AUTOSAR REVISION     : N/A
*   SOFTWARE VERSION     : 1.0.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

DEFAULTS
{
    __HEAP_SIZE             = 0x00000600 ;   /* required amount of heap  */
    __STACK_SIZE            = 0x00001000 ;   /* required amount of stack */
    __INTVEC_SIZE_RESERVE   = 0x00000400 ;   /* interrupt vector size */
}

/* Specify the memory areas */
MEMORY
{
    ITCM                  (RWX) : ORIGIN = 0x00000000, LENGTH = 0x00008000  /* 32KB */

    /* DTCM */
    DTCM                  (RW)  : ORIGIN = 0x20000000, LENGTH = 0x00020000 - __STACK_SIZE                 /* 128KB - __STACK_SIZE  */
    DTCM_STACK            (RW)  : ORIGIN = 0x20000000 + 0x00020000 - __STACK_SIZE, LENGTH = __STACK_SIZE  /* __STACK_SIZE  */

    /* SRAM */
    SRAM0                 (RW)  : ORIGIN = 0x21000000, LENGTH = 0x00010000  /* 64KB */
    SRAM1                 (RW)  : ORIGIN = 0x21010000, LENGTH = 0x00008000  /* 32KB */

    PFLASH_INTVEC         (RX)  : ORIGIN = 0x01000000, LENGTH = __INTVEC_SIZE_RESERVE  /* 1KB for Intvec */
    PFLASH                (RW)  : ORIGIN = 0x01000000 + __INTVEC_SIZE_RESERVE, LENGTH = 0x00200000 - __INTVEC_SIZE_RESERVE /* ~2MB */

    DFLASH                (RW)  : ORIGIN = 0x04000000, LENGTH = 0x00020000  /* 128KB */

    NVR0                  (RW)  : ORIGIN = 0x04400000, LENGTH = 0x00004000  /* 16KB */
    NVR1                  (RW)  : ORIGIN = 0x04408000, LENGTH = 0x00004000  /* 16KB */
    NVR2                  (RW)  : ORIGIN = 0x04410000, LENGTH = 0x00002000  /* 8KB */
}

/* Define output sections */
SECTIONS
{
    /* Interrupt vector */
    .isr_vector                                    ALIGN(1024)    : > PFLASH_INTVEC

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

    .ROM.itcm_func         ROM(.itcm_func)         ALIGN(4)       : > .
    .ROM.data_seperated    ROM(.data_seperated)    ALIGN(4)       : > .
    .ROM.data              ROM(.data)              ALIGN(4)       : > .
    .ROM.data_nocacheable  ROM(.data_nocacheable)  ALIGN(4)       : > .

    .secinfo                                       ALIGN(4)       : > .

    .ram_vector         PAD(__INTVEC_SIZE_RESERVE) ALIGN(1024)    : > ITCM

    .itcm_func                               (ABS) ALIGN(8)       :
    {
        "*(.*mcal_ramcode)"
        "*(.bsp_ramcode)"
    }                                                               > .

    .data_seperated                                ALIGN(4)       :
    {
        "*(.syscall*)"
        "*(.seperated_data*)"
    }                                                               > DTCM

    .bss_seperated                                 ALIGN(4)       :
    {
        "*(.seperated_bss*)"
    }                                                               > .

    .heap               (NOLOAD) PAD(__HEAP_SIZE)  ALIGN(8)       : > .
    .stack              (NOLOAD) PAD(__STACK_SIZE) ALIGN(8)       : > DTCM_STACK

    .data                                          ALIGN(4)       :
    {
        "*(.data*)"
        "*(.*mcal_data*)"            /* .*mcal_data* sections */
    }                                                               > SRAM0

    .bss                                  (NOLOAD) ALIGN(4)       :
    {
        "*(.bss*)"
        "*(.*mcal_bss*)"
    }                                                               > .

    .data_nocacheable                              ALIGN(32)       :
    {
        "*(.*mcal_nocacheable_data*)"
        "*(.*mcal_shareable_data*)"
        "*(.bsp_shareable_data*)"
    }                                                               > SRAM1

    .bss_nocacheable                      (NOLOAD) ALIGN(32)       :
    {
        "*(.*mcal_nocacheable_bss*)"
        "*(.*mcal_shareable_bss*)"
        "*(.bsp_shareable_bss*)"
        "*(.rtt_section*)"
        "*(.rtt_buffer_section*)"
    }                                                               > .


    __rom_intvec_start           = ADDR(.isr_vector);
    __rom_intvec_end             = ADDR(.isr_vector) + SIZEOF(.isr_vector);
    __ram_intvec_start           = ADDR(.ram_vector);
    __ram_intvec_end             = ADDR(.ram_vector) + SIZEOF(.ram_vector);

    __stack_limit                = ADDR(.stack);
    __stack_top                  = ADDR(.stack) + SIZEOF(.stack);

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
    __bss_start                  = ADDR(.bss);
    __bss_end                    = ADDR(.bss) + SIZEOF(.bss);
    __seperated_bss_start        = ADDR(.bss_seperated);
    __seperated_bss_end          = ADDR(.bss_seperated) + SIZEOF(.bss_seperated);
    __nocachable_bss_start       = ADDR(.bss_nocacheable);
    __nocachable_bss_end         = ADDR(.bss_nocacheable) + SIZEOF(.bss_nocacheable);
}
