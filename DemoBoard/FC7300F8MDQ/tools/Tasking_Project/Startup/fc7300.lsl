
#ifndef __NO_DEFAULT_AUTO_VECTORS
// Suppress the vectors as defined arm_arch.lsl, because we define our 
// own vectors for CMSIS
#define __NO_DEFAULT_AUTO_VECTORS       1
#define __NR_OF_VECTORS                 256
#endif

#ifndef __STACK
#  define __STACK                       1k
#endif

#ifndef __HEAP
#  define __HEAP                        1k
#endif

// Entry points for stack size estimation
#ifndef __CM7_0_STACK_ENTRY_POINTS
#  define __CM7_0_STACK_ENTRY_POINTS    "Reset_Handler"
#endif


#ifndef __VECTOR_TABLE_ROM_ADDR
#  define __VECTOR_TABLE_ROM_ADDR       0x01000000
#endif

#ifndef __VECTOR_TABLE_RAM_ADDR
#  define __VECTOR_TABLE_RAM_ADDR       0x20000000
#endif

#include "arm_arch.lsl"


derivative fc7xxx
{
    core cm7_0
    {
        architecture = ARM;
    }

    bus local_bus
    {
        mau = 8;
        width = 32;
        map (size=0x20000000-256k, src_offset=256k, dest_offset=256k, dest=bus:cm7_0:local_bus);
        map (size=0xe0000000-512k, src_offset=0x20000000+512k, dest_offset=0x20000000+512k, dest=bus:cm7_0:local_bus);
    }

    bus m7_0_bus
    {
        mau = 8;
        width = 32;
        map (size=4G, src_offset=0, dest_offset=0, dest=bus:cm7_0:local_bus);
    }
}

processor ARM
{
    derivative = fc7xxx;
}

//
//  If no memory is defined yet use the following memory settings
//
#ifndef __MEMORY

// Specify default size for Flash and SRAM
#ifndef __FLASH_START
#  define __FLASH_START  0x01000000
#endif
#ifndef __FLASH_SIZE
#  define __FLASH_SIZE  128k
#endif
#ifndef __SRAM0_SIZE
#  define __SRAM0_SIZE   128k
#endif
#ifndef __SRAM1_SIZE
#  define __SRAM1_SIZE   128k
#endif
#ifndef __SRAM2_SIZE
#  define __SRAM2_SIZE   256k
#endif
#ifndef __DTCM_SIZE
#  define __DTCM_SIZE   128k
#endif
#ifndef __ITCM_SIZE
#  define __ITCM_SIZE   64k
#endif

memory FC7300_Flash
{
    mau = 8;
    type = rom;
    size = __FLASH_SIZE;
    map ( size = __FLASH_SIZE, dest_offset=__FLASH_START, dest=bus:ARM:local_bus);
}

memory FC7300_SRAM0
{
    mau = 8;
    type = ram;
    size = __SRAM0_SIZE;
    map ( size = __SRAM0_SIZE, dest_offset=__SRAM0_START, dest=bus:ARM:local_bus);
}

memory FC7300_SRAM1
{
    mau = 8;
    type = ram;
    size = __SRAM1_SIZE;
    map ( size = __SRAM1_SIZE, dest_offset=__SRAM1_START, dest=bus:ARM:local_bus);
}

memory FC7300_SRAM2
{
    mau = 8;
    type =ram;
    size = __SRAM2_SIZE;
    map ( size = __SRAM2_SIZE, dest_offset=__SRAM2_START, dest=bus:ARM:local_bus);
}

memory FC7300_DTCM
{
    mau = 8;
    type = reserved ram;
    size = __DTCM_SIZE;
    map ( size = __DTCM_SIZE, dest_offset=__DTCM_START, dest=bus:ARM:m7_0_bus, priority=2, exec_priority=0);
}

memory FC7300_ITCM
{
    mau = 8;
    type = reserved ram;
    size = __ITCM_SIZE;
    map ( size = __ITCM_SIZE, dest_offset=__ITCM_START, dest=bus:ARM:m7_0_bus, exec_priority=2);
}

#endif /* __MEMORY */
