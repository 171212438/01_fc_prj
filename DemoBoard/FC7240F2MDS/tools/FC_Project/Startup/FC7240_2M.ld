/**
*   @file    FC7240F2M.ld
*   @version 0.6.0
*
*   @brief   GCC linker directive file
*   @details This file is the GCC linker directive file demo
*
*/
/*==================================================================================================
*   PERIPHERAL           : ARM
*   PLATFORM             : Flagchip FC7240
*   AUTOSAR VERSION      : N/A
*   AUTOSAR REVISION     : N/A
*   SOFTWARE VERSION     : 0.6.0
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/* Entry Point */
ENTRY(Reset_Handler)


__HEAP_SIZE             = 0x00000600 ;   /* required amount of heap  */
__STACK_SIZE            = 0x00001000 ;   /* required amount of stack */
__INTVEC_SIZE_RESERVE   = 0x00000400 ;   /* interrupt vector size */

/* Specify the memory areas */
MEMORY
{

  ITCM                    (RW)  : ORIGIN = 0x00000000, LENGTH = 0x00008000  /* 32KB */

  SRAM0                   (RW)  : ORIGIN = 0x21000000, LENGTH = 0x00010000  /* 64KB */
  SRAM1                   (RW)  : ORIGIN = 0x21010000, LENGTH = 0x00008000  /* 32KB */

  PFLASH_INTVEC           (RX)  : ORIGIN = 0x01000000, LENGTH = __INTVEC_SIZE_RESERVE  /* 1KB for Intvec */
  PFLASH                  (RW)  : ORIGIN = 0x01000000 + __INTVEC_SIZE_RESERVE, LENGTH = 0x00200000 - __INTVEC_SIZE_RESERVE /* ~2MB */

  DFLASH                  (RW)  : ORIGIN = 0x04000000, LENGTH = 0x00020000  /* 128KB */

  NVR0                    (RW)  : ORIGIN = 0x04400000, LENGTH = 0x00004000  /* 16KB */
  NVR1                    (RW)  : ORIGIN = 0x04408000, LENGTH = 0x00004000  /* 16KB */
  NVR2                    (RW)  : ORIGIN = 0x04410000, LENGTH = 0x00002000  /* 8KB */

  /* DTCM */
  DTCM                    (RW)  : ORIGIN = 0x20000000, LENGTH = 0x00020000 - __STACK_SIZE  /* 128KB - __STACK_SIZE  */
  DTCM_STACK              (RW)  : ORIGIN = 0x20000000 + 0x00020000 - __STACK_SIZE, LENGTH = __STACK_SIZE  /* __STACK_SIZE  */

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

    .bss_seperated                                 (NOLOAD)       : ALIGN(4)
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
    }                                                               > SRAM0
                                                                 AT > PFLASH

    .bss                                           (NOLOAD)       : ALIGN(4)
    {
        *(.bss*)
        *(.*mcal_bss*)
    }                                                               > SRAM0

    .data_nocacheable                                             : ALIGN(32)
    {
        *(.*mcal_nocacheable_data*)
        *(.*mcal_shareable_data*)
        *(.bsp_shareable_data*)
    }                                                               > SRAM1
                                                                 AT > PFLASH

    .bss_nocacheable                                (NOLOAD)      : ALIGN(32)
    {
        *(.*mcal_nocacheable_bss*)
        *(.*mcal_shareable_bss*)
        *(.bsp_shareable_bss*)
        *(.rtt_section*)
        *(.rtt_buffer_section*)
    }                                                               > SRAM1

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

    __bss_start                  = ADDR(.bss);
    __bss_end                    = ADDR(.bss) + SIZEOF(.bss);
    __seperated_bss_start        = ADDR(.bss_seperated);
    __seperated_bss_end          = ADDR(.bss_seperated) + SIZEOF(.bss_seperated);
    __nocachable_bss_start       = ADDR(.bss_nocacheable);
    __nocachable_bss_end         = ADDR(.bss_nocacheable) + SIZEOF(.bss_nocacheable);

    __HeapBegin  = ADDR(.heap);
    __HeapLimit  = ADDR(.heap) + SIZEOF(.heap);
}

