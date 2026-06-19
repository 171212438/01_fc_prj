
#define __FLASH_SIZE  4M
#define __FLASH_START 0x01000000

// The first 64 KB is accessible only in non-split mode with CPU0_DTCM_REMAP set to 1:
// Non-split with CPU0_DTCM_REMAP set to 0: 64 KB (0x2101_0000 to 0x2101_FFFF)
// Non-split with CPU0_DTCM_REMAP set to 1: 128 KB (0x2100_0000 to 0x2101_FFFF)
// Split: 64 KB (0x2101_0000 to 0x2101_FFFF)
#define __SRAM0_START  0x21000000
#define __SRAM0_SIZE   128k

#define __SRAM1_START  0x21020000
#define __SRAM1_SIZE   128k

#define __SRAM2_START  0x21040000
#define __SRAM2_SIZE   128k

// Non-split with CPU0_DTCM_REMAP set to 0: 2000_0000 -> 2001_FFFF, CPU0
// Non-split with CPU0_DTCM_REMAP set to 1: 2000_0000 -> 2000_FFFF, CPU0
// AMP:
// Split: 2000_0000 -> 2000_FFFF, CPU0
// Split: 2000_0000 -> 2000_FFFF, CPU1
// SMP: 
// Split: 2000_0000 -> 2000_FFFF, CPU0
// Split: 2000_0000 -> 2000_FFFF, CPU1
#define __DTCM_START  0x20000000
#define __DTCM_SIZE   256k

// Non-split: 0000_0000 -> 0000_FFFF, CPU0
// AMP:
// Split: 0000_0000 -> 0000_7FFF, CPU0
// Split: 0000_0000 -> 0000_7FFF, CPU1
// SMP:
// Split: 0000_0000 -> 0000_7FFF, CPU0
// Split: 0000_0000 -> 0000_7FFF, CPU1
#define __ITCM_START  0x0
#define __ITCM_SIZE   128k

#define __VECTOR_TABLE_ROM_ADDR 0x01000000
#define __VECTOR_TABLE_RAM_ADDR 0
//#define __VECTOR_TABLE_RAM_COPY
//#define __COPY_VECTOR_TABLE

#define __STACK_FIXED
#define __STACK       4k
#define __STACKADDR   0x2000E000

#define __HEAP_FIXED
#define __HEAP        4k
#define __HEAPADDR    0x2000C000

#include "fc7300.lsl"

section_setup :cm7_0:linear
{
    // vector table with handler addresses
    vector_table "vector_table" ( vector_size = 4, size = __NR_OF_VECTORS, run_addr = __VECTOR_TABLE_RUN_ADDR,
                                  template = ".text.handler_address",
                                  template_symbol = "_lc_vector_handler",
                                  vector_prefix = "_vector_",
                                  __VECTOR_TABLE_COPY_ATTRIBUTE
                                  fill = loop,
                                  no_inline
                                )
    {
            vector ( id = 0, fill = "_lc_ub_stack" );                               // Top of Stack
            vector ( id = 1, fill = "Reset_Handler" );                              // Reset Handler
            
            // Cortex-M4 Processor Exceptions Numbers:
            vector ( id = 2, optional, fill = "NMI_Handler" );                      // NMI Handler
            vector ( id = 3, optional, fill = "HardFault_Handler" );                // Hard Fault Handler
            vector ( id = 4, optional, fill = "MemManage_Handler" );                // MPU Fault Handler
            vector ( id = 5, optional, fill = "BusFault_Handler" );                 // Bus Fault Handler
            vector ( id = 6, optional, fill = "UsageFault_Handler" );               // Usage Fault Handler
            vector ( id = 11, optional, fill = "SVC_Handler" );                     // SVCall Handler
            vector ( id = 12, optional, fill = "DebugMon_Handler" );                // Debug Monitor Handler
            vector ( id = 14, optional, fill = "PendSV_Handler" );                  // PendSV Handler
            vector ( id = 15, optional, fill = "SysTick_Handler" );                 // SysTick Handler

            // FC7300 Specific Interrupt Numbers:
            vector ( id = 16, optional, fill = "DMA0_IRQHandler");                                 //  DMA channel 0 transfer complete
            vector ( id = 17, optional, fill = "DMA1_IRQHandler");                                 //  DMA channel 1 transfer complete
            vector ( id = 18, optional, fill = "DMA2_IRQHandler");                                 //  DMA channel 2 transfer complete
            vector ( id = 19, optional, fill = "DMA3_IRQHandler");                                 //  DMA channel 3 transfer complete
            vector ( id = 20, optional, fill = "DMA4_IRQHandler");                                 //  DMA channel 4 transfer complete
            vector ( id = 21, optional, fill = "DMA5_IRQHandler");                                 //  DMA channel 5 transfer complete
            vector ( id = 22, optional, fill = "DMA6_IRQHandler");                                 //  DMA channel 6 transfer complete
            vector ( id = 23, optional, fill = "DMA7_IRQHandler");                                 //  DMA channel 7 transfer complete
            vector ( id = 24, optional, fill = "DMA8_IRQHandler");                                 //  DMA channel 8 transfer complete
            vector ( id = 25, optional, fill = "DMA9_IRQHandler");                                 //  DMA channel 9 transfer complete
            vector ( id = 26, optional, fill = "DMA10_IRQHandler");                                //  DMA channel 10 transfer complete
            vector ( id = 27, optional, fill = "DMA11_IRQHandler");                                //  DMA channel 11 transfer complete
            vector ( id = 28, optional, fill = "DMA12_IRQHandler");                                //  DMA channel 12 transfer complete
            vector ( id = 29, optional, fill = "DMA13_IRQHandler");                                //  DMA channel 13 transfer complete
            vector ( id = 30, optional, fill = "DMA14_IRQHandler");                                //  DMA channel 14 transfer complete
            vector ( id = 31, optional, fill = "DMA15_IRQHandler");                                //  DMA channel 15 transfer complete
            vector ( id = 32, optional, fill = "DMA16_IRQHandler");                                //  DMA channel 16 transfer complete
            vector ( id = 33, optional, fill = "DMA17_IRQHandler");                                //  DMA channel 17 transfer complete
            vector ( id = 34, optional, fill = "DMA18_IRQHandler");                                //  DMA channel 18 transfer complete
            vector ( id = 35, optional, fill = "DMA19_IRQHandler");                                //  DMA channel 19 transfer complete
            vector ( id = 36, optional, fill = "DMA20_IRQHandler");                                //  DMA channel 20 transfer complete
            vector ( id = 37, optional, fill = "DMA21_IRQHandler");                                //  DMA channel 21 transfer complete
            vector ( id = 38, optional, fill = "DMA22_IRQHandler");                                //  DMA channel 22 transfer complete
            vector ( id = 39, optional, fill = "DMA23_IRQHandler");                                //  DMA channel 23 transfer complete
            vector ( id = 40, optional, fill = "DMA24_IRQHandler");                                //  DMA channel 24 transfer complete
            vector ( id = 41, optional, fill = "DMA25_IRQHandler");                                //  DMA channel 25 transfer complete
            vector ( id = 42, optional, fill = "DMA26_IRQHandler");                                //  DMA channel 26 transfer complete
            vector ( id = 43, optional, fill = "DMA27_IRQHandler");                                //  DMA channel 27 transfer complete
            vector ( id = 44, optional, fill = "DMA28_IRQHandler");                                //  DMA channel 28 transfer complete
            vector ( id = 45, optional, fill = "DMA29_IRQHandler");                                //  DMA channel 29 transfer complete
            vector ( id = 46, optional, fill = "DMA30_IRQHandler");                                //  DMA channel 30 transfer complete
            vector ( id = 47, optional, fill = "DMA31_IRQHandler");                                //  DMA channel 31 transfer complete
            vector ( id = 48, optional, fill = "DMA0_Error_IRQHandler");                            //  DMA error interrupt channels 0-31
            vector ( id = 49, optional, fill = "CPM0_IRQHandler");                                  //  FPU etc. interrupt
            vector ( id = 50, optional, fill = "FC0_IRQHandler");                                   //  FC Command complete
            vector ( id = 51, optional, fill = "PMC0_IRQHandler");                              //  PMC Low voltage detect interrupt
            vector ( id = 52, optional, fill = "TMU0_IRQHandler");                                  //  Temperature Monitor Unit interrupt
            vector ( id = 53, optional, fill = "WDOG0_IRQHandler");                                //  interrupt request out before wdg reset out
            vector ( id = 54, optional, fill = "WDOG1_IRQHandler");                                //  interrupt request out before wdg reset out
            vector ( id = 55, optional, fill = "FCSMU0_IRQHandler");                               //  Fault Control and Safety Manage Unit
            vector ( id = 56, optional, fill = "STCU0_IRQHandler");                                //  Safety Control Unit interrupt
            vector ( id = 57, optional, fill = "ERM0_IRQHandler");                            //  ERM single/double bit error correction
            vector ( id = 58, optional, fill = "MAM0_IRQHandler");                                 //  Matrix Access Monitor interrupt
            vector ( id = 59, optional, fill = "MAM1_IRQHandler");                                 //  Matrix Access Monitor interrupt
            vector ( id = 60, optional, fill = "CTI0_IRQHandler");                                 //  CTI Interrupt
            vector ( id = 61, optional, fill = "CTI1_IRQHandler");                          //  CTI Interrupt
            vector ( id = 62, optional, fill = "RGM0_Pre_IRQHandler");                              //  RGM pre-reset Interrupt
            vector ( id = 63, optional, fill = "RGM0_Exit_IRQHandler");                            //  RGM other CPU exit reset Interrupt
            vector ( id = 64, optional, fill = "INTM0_IRQHandler");                                //  INTM alarm interrupt
            vector ( id = 65, optional, fill = "ISM0_IRQHandler");                                 //  ISM0 interrupt
            vector ( id = 66, optional, fill = "MB0_IRQHandler");                                   //  Mail Box interrupt
            vector ( id = 67, optional, fill = "SCG0_IRQHandler");                                  //  SCG bus interrupt request
            vector ( id = 68, optional, fill = "CMU0_IRQHandler");                                 //  CMU0 interrupt
            vector ( id = 69, optional, fill = "CMU1_IRQHandler");                                 //  CMU1 interrupt
            vector ( id = 70, optional, fill = "CMU2_IRQHandler");                                 //  CMU2 interrupt
            vector ( id = 71, optional, fill = "CMU3_IRQHandler");                                 //  CMU3 interrupt
            vector ( id = 72, optional, fill = "TSTMP0_IRQHandler");                               //  TimerStamp0 interrupt
            vector ( id = 73, optional, fill = "TSTMP1_IRQHandler");                               //  TimerStamp1 interrupt
            vector ( id = 74, optional, fill = "TSTMP2_IRQHandler");                               //  TimerStamp2 interrupt
            vector ( id = 75, optional, fill = "CMU4_IRQHandler");                               //  CMU4 interrupt
            vector ( id = 76, optional, fill = "CORDIC0_IRQHandler");                               //  CORDIC Accelerator interrupt
            vector ( id = 77, optional, fill = "HSM0_Error_IRQHandler");                                 //  Crypto interrupt
            vector ( id = 78, optional, fill = "FCPIT0_IRQHandler");                               //  FCPIT0 interrupt
            vector ( id = 79, optional, fill = "RTC0_IRQHandler");                                  //  RTC alarm or seconds interrupt 
            vector ( id = 80, optional, fill = "AONTIMER0_IRQHandler");                             //  AONTIMER interrupt request
            vector ( id = 81, optional, fill = "SWI_IRQHandler");                                  //  Software interrupt
            vector ( id = 82, optional, fill = "FREQM0_IRQHandler");                                //  FREQM interrupt
            vector ( id = 83, optional, fill = "PORTA_IRQHandler");                                //  Port A pin detect interrupt
            vector ( id = 84, optional, fill = "PORTB_IRQHandler");                                //  Port B pin detect interrupt
            vector ( id = 85, optional, fill = "PORTC_IRQHandler");                                //  Port C pin detect interrupt
            vector ( id = 86, optional, fill = "PORTD_IRQHandler");                                //  Port D pin detect interrupt
            vector ( id = 87, optional, fill = "PORTE_IRQHandler");                                //  Port E pin detect interrupt
            vector ( id = 88, optional, fill = "PORTF_IRQHandler");                                //  Port F pin detect interrupt
            vector ( id = 89, optional, fill = "PORTG_IRQHandler");                                //  Port G pin detect interrupt
            vector ( id = 90, optional, fill = "PORTH_IRQHandler");                                //  Port H pin detect interrupt
            vector ( id = 91, optional, fill = "PORTI_IRQHandler");                                //  Port I pin detect interrupt
            vector ( id = 92, optional, fill = "CAN0_IRQHandler");                                 //  FLEXCAN interrupt(except error related interrupt)
            vector ( id = 93, optional, fill = "CAN0_Error_IRQHandler");                                 //  FLEXCAN Error interrupt
            vector ( id = 94, optional, fill = "CAN1_IRQHandler");                                 //  FLEXCAN interrupt(except error related interrupt)
            vector ( id = 95, optional, fill = "CAN1_Error_IRQHandler");                                 //  FLEXCAN Error interrupt 
            vector ( id = 96, optional, fill = "CAN2_IRQHandler");                                 //  FLEXCAN interrupt(except error related interrupt)
            vector ( id = 97, optional, fill = "CAN2_Error_IRQHandler");                                 //  FLEXCAN Error interrupt
            vector ( id = 98, optional, fill = "CAN3_IRQHandler");                                 //  FLEXCAN interrupt(except error related interrupt)
            vector ( id = 99, optional, fill = "CAN3_Error_IRQHandler");                                 //  FLEXCAN Error interrupt
            vector ( id = 100, optional, fill = "CAN4_IRQHandler");                                 //  FLEXCAN interrupt(except error related interrupt)
            vector ( id = 101, optional, fill = "CAN4_Error_IRQHandler");                                 //  FLEXCAN Error interrupt
            vector ( id = 102, optional, fill = "CAN5_IRQHandler");                                 //  FLEXCAN interrupt(except error related interrupt)
            vector ( id = 103, optional, fill = "CAN5_Error_IRQHandler");                                 //  FLEXCAN Error interrupt 
            vector ( id = 104, optional, fill = "FCIIC0_IRQHandler");                               //  FCIIC0 Interrupt
            vector ( id = 105, optional, fill = "FCIIC1_IRQHandler");                               //  FCIIC1 Interrupt
            vector ( id = 106, optional, fill = "FCSPI0_IRQHandler");                               //  FCSPI0 Interrupt
            vector ( id = 107, optional, fill = "FCSPI1_IRQHandler");                               //  FCSPI1 Interrupt
            vector ( id = 108, optional, fill = "FCSPI2_IRQHandler");                               //  FCSPI2 Interrupt
            vector ( id = 109, optional, fill = "FCSPI3_IRQHandler");                               //  FCSPI0 Interrupt
            vector ( id = 110, optional, fill = "FCSPI4_IRQHandler");                               //  FCSPI1 Interrupt
            vector ( id = 111, optional, fill = "FCSPI5_IRQHandler");                               //  FCSPI2 Interrupt
            vector ( id = 112, optional, fill = "FCUART0_RxTx_IRQHandler");                         //  FCUART0 Transmit / Receive Interrupt
            vector ( id = 113, optional, fill = "FCUART1_RxTx_IRQHandler");                         //  FCUART1 Transmit / Receive  Interrupt
            vector ( id = 114, optional, fill = "FCUART2_RxTx_IRQHandler");                         //  FCUART2 Transmit / Receive  Interrupt
            vector ( id = 115, optional, fill = "FCUART3_RxTx_IRQHandler");                         //  FCUART3 Transmit / Receive Interrupt
            vector ( id = 116, optional, fill = "FCUART4_RxTx_IRQHandler");                         //  FCUART4 Transmit / Receive  Interrupt
            vector ( id = 117, optional, fill = "FCUART5_RxTx_IRQHandler");                         //  FCUART5 Transmit / Receive  Interrupt
            vector ( id = 118, optional, fill = "FCUART6_RxTx_IRQHandler");                         //  FCUART6 Transmit / Receive Interrupt
            vector ( id = 119, optional, fill = "FCUART7_RxTx_IRQHandler");                         //  FCUART7 Transmit / Receive  Interrupt
            vector ( id = 120, optional, fill = "FTU0_IRQHandler");                                 //  FTU0 all source interrupt
            vector ( id = 121, optional, fill = "FTU1_IRQHandler");                                 //  FTU1 all source interrupt
            vector ( id = 122, optional, fill = "FTU2_IRQHandler");                                 //  FTU2 all source interrupt
            vector ( id = 123, optional, fill = "FTU3_IRQHandler");                                 //  FTU3 all source interrupt
            vector ( id = 124, optional, fill = "FTU4_IRQHandler");                                 //  FTU4 all source interrupt
            vector ( id = 125, optional, fill = "FTU5_IRQHandler");                                 //  FTU5 all source interrupt
            vector ( id = 126, optional, fill = "ADC0_IRQHandler");                                 //  ADC0 interrupt request.
            vector ( id = 127, optional, fill = "ADC1_IRQHandler");                                 //  ADC1 interrupt request.
            vector ( id = 128, optional, fill = "ADC2_IRQHandler");                                 //  ADC2 interrupt request.
            vector ( id = 129, optional, fill = "ADC3_IRQHandler");                                 //  ADC3 interrupt request.
            vector ( id = 130, optional, fill = "PTIMER0_IRQHandler");                              //  PTIMER0 interrupt
            vector ( id = 131, optional, fill = "PTIMER1_IRQHandler");                              //  PTIMER1 interrupt
            vector ( id = 132, optional, fill = "PTIMER2_IRQHandler");                              //  PTIMER2 interrupt
            vector ( id = 133, optional, fill = "MSC0_IRQHandler");                                 //  MSC interrupt
            vector ( id = 134, optional, fill = "SENT0_IRQHandler");                                //  SENT all interrupt (fast or slow)
            vector ( id = 135, optional, fill = "SENT1_IRQHandler");                                //  SENT all interrupt (fast or slow)
            vector ( id = 136, optional, fill = "SSI0_IRQHandler");                               //  SSI interrupt OR interrupt 
            vector ( id = 137, optional, fill = "LU0_IRQHandler");                               //  LU interrupt
            vector ( id = 138, optional, fill = "LU1_IRQHandler");                        //  LU interrupt
            vector ( id = 139, optional, fill = "HSM0_Crypto_IRQHandler");                        //  Crypto interrupt 
            vector ( id = 140, optional, fill = "EFTU0_IRQHandler");                        //  eFTU TIM overflow etc. interrupt, EAC interrupt and CMP interrupt, BLDC0/1 interrupt 
            vector ( id = 141, optional, fill = "EFTU0_TIM_0_3_IRQHandler");                                 //  eFTU TIM 0-3 source interrupt 
            vector ( id = 142, optional, fill = "EFTU0_TIM_4_7_IRQHandler");                                 //  eFTU TIM 4-7 source interrupt 
            vector ( id = 143, optional, fill = "EFTU0_TOM_0_7_IRQHandler");                                 //  eFTU TOM 0-7 source interrupt 
            vector ( id = 144, optional, fill = "EFTU0_TOM_8_15_IRQHandler");                                 //  eFTU TOM 8-15 source interrupt 
            
    }
}
	
section_layout :cm7_0:linear
{ 
    group text (ordered, contiguous, align = 4, run_addr=mem:FC7300_Flash, fill=0xFF)
    {
        select ".text.handler_address";
        select ".text.reset_handler";
        select ".text";
        select "*mcal_text";
        select ".rodata";
        select "*mcal_const_cfg*";
        select ".rodata.*";
        select "*mcal_rodata*";
    }
    
    group itcm_func_init (ordered, contiguous, align = 4, load_addr)
    {
        select "*mcal_ramcode*";
        select "*bsp_ramcode*";
    }
    
    group data_seperated_init (ordered, contiguous, align = 4, load_addr)
    {
        select "*seperated_data*";
    }
    
    group data_common_init (ordered, contiguous, align = 4, load_addr)
    {
        select ".data";
        select "*mcal_data*";
    }
    
    group data_nocacheable_init (ordered, contiguous, align = 4, load_addr)
    {
        select "*mcal_nocacheable_data*";
    }
    
    group data_shareable_init (ordered, contiguous, align = 4, load_addr)
    {
        select "*mcal_shareable_data*";
        select "*bsp_shareable_data*";
    }
    
    group itcm_func (ordered, contiguous, align = 4, run_addr=mem:FC7300_ITCM[0x400 .. 0x10000], copy)
    {
        select "*mcal_ramcode*";
        select "*bsp_ramcode*";
    }

    group data_seperated (ordered, contiguous, align = 4, run_addr=mem:FC7300_DTCM)
    {
        select "*seperated_data*";
    }

    group bss_seperated (ordered, contiguous, align = 4, run_addr=mem:FC7300_DTCM)
    {
        select "*seperated_bss*";
    }

	group data_bss (ordered, contiguous, align = 4, run_addr=mem:FC7300_SRAM0)
    {
        group bss (ordered)
	    {
	        select ".bss";
	        select "*mcal_bss*";
	    }
	
	    group data_common (ordered)
	    {
	        select ".data";
	        select "*mcal_data*";
	    }
    }
	
	group sram1_space (ordered, contiguous, align = 32, run_addr=mem:FC7300_SRAM1)
	{
	    group data_nocacheable (ordered)
	    {
	        select "*mcal_nocacheable_data*";
	    }
	    
	    group bss_nocacheable (ordered)
	    {
	        select "*mcal_nocacheable_bss*";
	    }
	}
    
    group sram2_space (ordered, contiguous, align = 32, run_addr=mem:FC7300_SRAM2)
    {
	    group bss_rtt_buffer (ordered)
	    {
	        select ".rtt_section*";
	        select ".rtt_buffer_section*";
	    }
	
	    group data_shareable (ordered)
	    {
	        select "*mcal_shareable_data*";
	        select "*bsp_shareable_data*";
	    }
	    
	    group bss_shareable (ordered)
	    {
	        select "*mcal_shareable_bss*";
	        select "*bsp_shareable_bss*";
	    }
    }
}

section_layout ::linear
{
	"__rom_intvec_start" = __VECTOR_TABLE_ROM_ADDR;
    "__ram_intvec_start" = __VECTOR_TABLE_RAM_ADDR;
    "__ram_intvec_end" = "__ram_intvec_start"+4*__NR_OF_VECTORS-1;
    "__lc_ub_stack" = __STACKADDR;
    "__lc_b_stack" = __STACKADDR - __STACK;
    "__lc_ub_heap" = __HEAPADDR;
    "__lc_b_heap" = __HEAPADDR + __HEAP;
}
	