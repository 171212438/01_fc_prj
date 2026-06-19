/*
** ###################################################################
**     Processors:          RISC-V
**
**
**     Compiler:            GNU C Compiler
**
**     Abstract:
**         Linker file for the GNU C Compiler
**
**
** ###################################################################
*/

/* Entry Point */
OUTPUT_ARCH( "riscv" )

HEAP_SIZE  = DEFINED(__heap_size__)  ? __heap_size__  : 0x0;
/* Specify the memory areas */
MEMORY
{
  m_vector              (RX)  : ORIGIN = 0x00020000, LENGTH = 0x00000100
  m_text                (RX)  : ORIGIN = 0x00020100, LENGTH = 0x00003F00
  m_data                (RW)  : ORIGIN = 0x00024000, LENGTH = 0x00004000
  
  SRAM1         	    (RW)  : ORIGIN = 0x21010000, LENGTH = 0x00008000  /* 32KB */
}

/* Define output sections */
SECTIONS
{
  .vectors : ALIGN(4)
  {
    __VECTOR_TABLE = .;
    KEEP(*(.vectors))
  } > m_vector


  .text :
  {
    . = ALIGN(4);
    KEEP(*(.startup))
    . = ALIGN(4);
    __user_vector = .;
    KEEP(*(user_vectors))
    . = ALIGN(4);
    *(.text)                 /* .text sections (code) */
    *(.text*)                /* .text* sections (code) */
    *(.rodata)               /* .rodata sections (constants, strings, etc.) */
    *(.rodata*)              /* .rodata* sections (constants, strings, etc.) */
    *(.srodata .srodata.*)
    *(.glue_7)               /* glue arm to thumb code */
    *(.glue_7t)              /* glue thumb to arm code */
    *(.eh_frame)
    *(.init)
    *(.fini)
  } > m_text

  .preinit_array :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array*))
    PROVIDE_HIDDEN (__preinit_array_end = .);
  } > m_text

  .init_array :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT(.init_array.*)))
    KEEP (*(.init_array*))
    PROVIDE_HIDDEN (__init_array_end = .);
  } > m_text

  .fini_array :
  {
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP (*(SORT(.fini_array.*)))
    KEEP (*(.fini_array*))
    PROVIDE_HIDDEN (__fini_array_end = .);
  } > m_text

  __etext = .;             /* define a global symbol at end of code */

  __DATA_ROM = .;          /* Symbol is used by startup for data initialization */

  __global_pointer = .;
  .data :
  {
    . = ALIGN(4);
    __DATA_RAM = .;
    __data_start__ = .;      /* create a global symbol at data start */
    *(.data)                 /* .data sections */
    *(.data*)                /* .data* sections */
    *(.sdata .sdata.*)
    *(.heapsram*)            /* This is only for the pulpino official test code. */
    __noncachedata_start__ = .;   /* create a global symbol at ncache data start */
    *(NonCacheable)
    __noncachedata_end__ = .;     /* define a global symbol at ncache data end */
    KEEP(*(.jcr*))
    . = ALIGN(4);
    __data_end__ = .;        /* define a global symbol at data end */
  } > m_data





  _edata = .;
  /* Uninitialized data section */
  .bss(NOLOAD) :
  {
    /* This is used by the startup in order to initialize the .bss section */
    . = ALIGN(4);
    __START_BSS = .;
    __bss_start__ = .;
    *(.bss)
    *(.bss*)
    *(.sbss)
    *(.sbss*)
    . = ALIGN(4);
    __bss_end__ = .;
    __END_BSS = .;
    *(COMMON)
    . = ALIGN(4);
  } > m_data

  /* End of uninitalized data segement */
  _end = .;
  PROVIDE(end = .);

  .heap(NOLOAD) :
  {
    . = ALIGN(8);
    __heap_start = .;
    . += HEAP_SIZE;
    __heap_end = .;
    _heap_end = __heap_end;
  } > m_data


  .stack(NOLOAD) :
  {
    . = ALIGN(8);
    __StackLimit = .;
    __StackTop = ORIGIN(m_data) + LENGTH(m_data) - 4;
    STACK_SIZE = __StackTop - __StackLimit;
  } > m_data

	.rtt_bss(NOLOAD) :
	{
		. = ALIGN(32);
		KEEP(*(.rtt_section))
		KEEP(*(.rtt_buffer_section))
		. = ALIGN(32);
	} > SRAM1


  /* Initializes stack on the end of block */
  PROVIDE(__stack = __StackTop);
}

