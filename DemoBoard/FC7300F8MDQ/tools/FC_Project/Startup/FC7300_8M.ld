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

/* Entry Point */
ENTRY(Reset_Handler)

__HEAP_SIZE             = 0x00000200 ;   /* required amount of heap  */
__STACK_SIZE            = 0x00001000 ;   /* required amount of stack */
__INTVEC_SIZE_RESERVE   = 0x00000400 ;   /* interrupt vector size */

/* Specify the memory areas */
MEMORY
{
    ITCM                  (RWX) : ORIGIN = 0x00000000, LENGTH = 0x00010000  /* 64KB */

    /* DTCM */
    DTCM                  (RW)  : ORIGIN = 0x20000000, LENGTH = 0x00020000 - __STACK_SIZE                 /* 128KB - __STACK_SIZE  */
    DTCM_STACK            (RW)  : ORIGIN = 0x20000000 + 0x00020000 - __STACK_SIZE, LENGTH = __STACK_SIZE  /* __STACK_SIZE  */

    /* SRAM */
    SRAM_0                (RW)  : ORIGIN = 0x21000000, LENGTH = 0x00040000  /* 256KB */
    SRAM_1                (RW)  : ORIGIN = 0x21040000, LENGTH = 0x00040000  /* 256KB */
    SRAM_2                (RW)  : ORIGIN = 0x21080000, LENGTH = 0x00060000  /* 384KB */

    PFLASH_INTVEC         (RX)  : ORIGIN = 0x01000000, LENGTH = __INTVEC_SIZE_RESERVE  /* 1KB for Intvec */
    PFLASH                (RX)  : ORIGIN = 0x01000000 + __INTVEC_SIZE_RESERVE, LENGTH = 0x00800000 - __INTVEC_SIZE_RESERVE /* ~8MB */

    DFLASH                (R)   : ORIGIN = 0x04000000, LENGTH = 0x00040000  /* 256KB */

    NVR                   (R)   : ORIGIN = 0x04400000, LENGTH = 0x00002000  /* 8KB */
}

/* Define output sections */
SECTIONS
{
    .isr_vector                                                   : ALIGN(1024)
    {
        KEEP(*(.isr_vector))
    }                                                               > PFLASH_INTVEC

    /* The program code and other data goes into internal flash */
    .text                                                         : ALIGN(4)
    {
        *(.text)
        *(.text*)
        *(.*mcal_text*)
        *(.rodata*)
        *(.*mcal_rodata*)
        *(.*mcal_const_cfg*)
    }                                                               > PFLASH

    .ARM.extab                                                    :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    }                                                               > PFLASH

    .ARM.exidx                                                    :
    {
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
    }                                                               > PFLASH

    .ram_vector                                    (NOLOAD)       : ALIGN(1024)
    {
        . += __INTVEC_SIZE_RESERVE;
    }                                                               > ITCM

    .itcm_func                                                    : ALIGN(4)
    {
        *(.*mcal_ramcode)
        *(.bsp_ramcode)
    }                                                               > ITCM
                                                                 AT > PFLASH

    .data_seperated                                               : ALIGN(4)
    {
        *(.seperated_data*)
    }                                                               > DTCM
                                                                 AT > PFLASH

    .bss_seperated                                                : ALIGN(4)
    {
        *(.seperated_bss*)
    }                                                               > DTCM

    .heap                                          (NOLOAD)       : ALIGN(8)
    {
        . += __HEAP_SIZE;
    }                                                               > DTCM

    .stack                                         (NOLOAD)       : ALIGN(8)
    {
        . += __STACK_SIZE;
    }                                                               > DTCM_STACK

    .data                                                         : ALIGN(4)
    {
        *(.data*)
        *(.*mcal_data*)
    }                                                               > SRAM_0
                                                                 AT > PFLASH

    .bss                                           (NOLOAD)       : ALIGN(4)
    {
        *(.bss*)
        *(.*mcal_bss*)
    }                                                               > SRAM_0

    .data_nocacheable                                             : ALIGN(32)
    {
        *(.*mcal_nocacheable_data*)
    }                                                               > SRAM_1
                                                                 AT > PFLASH

    .bss_nocacheable                                (NOLOAD)      : ALIGN(32)
    {
        *(.*mcal_nocacheable_bss*)
    }                                                               > SRAM_1

    .bss_rtt_buffer                                 (NOLOAD)      : ALIGN(32)
    {
        KEEP(*(.rtt_section))
        KEEP(*(.rtt_buffer_section))
    }                                                               > SRAM_2

    .data_shareable                                               : ALIGN(32)
    {
        *(.*mcal_shareable_data*)
        *(.bsp_shareable_data*)
    }                                                               > SRAM_2
                                                                 AT > PFLASH

    .bss_shareable                                  (NOLOAD)      : ALIGN(32)
    {
        *(.*mcal_shareable_bss*)
        *(.bsp_shareable_bss*)
    }                                                               > SRAM_2

    __rom_intvec_start           = ADDR(.isr_vector);
    __rom_intvec_end             = ADDR(.isr_vector) + SIZEOF(.isr_vector);
    __ram_intvec_start           = ADDR(.ram_vector);
    __ram_intvec_end             = ADDR(.ram_vector) + SIZEOF(.ram_vector);

    __stack_limit                = ADDR(.stack);
    __stack_top                  = ADDR(.stack) + SIZEOF(.stack);

    __ram_itcm_func_start        = ADDR(.itcm_func);
    __ram_itcm_func_end          = ADDR(.itcm_func) + SIZEOF(.itcm_func);
    __rom_itcm_func_start        = LOADADDR(.itcm_func);

    __ram_data_start             = ADDR(.data);
    __ram_data_end               = ADDR(.data) + SIZEOF(.data);
    __rom_data_start             = LOADADDR(.data);
    __ram_seperated_data_start   = ADDR(.data_seperated);
    __ram_seperated_data_end     = ADDR(.data_seperated) + SIZEOF(.data_seperated);
    __rom_seperated_data_start   = LOADADDR(.data_seperated);
    __ram_nocachable_data_start  = ADDR(.data_nocacheable);
    __ram_nocachable_data_end    = ADDR(.data_nocacheable) + SIZEOF(.data_nocacheable);
    __rom_nocachable_data_start  = LOADADDR(.data_nocacheable);
    __ram_shareable_data_start   = ADDR(.data_shareable);
    __ram_shareable_data_end     = ADDR(.data_shareable) + SIZEOF(.data_shareable);
    __rom_shareable_data_start   = LOADADDR(.data_shareable);

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

    __Heap0Begin  = ADDR(.heap);
    __Heap0Limit  = ADDR(.heap) + SIZEOF(.heap);

    __Heap1Begin  = ADDR(.heap);
    __Heap1Limit  = ADDR(.heap) + SIZEOF(.heap);

    __Heap2Begin  = ADDR(.heap);
    __Heap2Limit  = ADDR(.heap) + SIZEOF(.heap);
}

