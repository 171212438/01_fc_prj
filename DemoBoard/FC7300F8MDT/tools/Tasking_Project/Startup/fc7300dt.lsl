
#define __FLASH_SIZE  8M
#define __FLASH_START 0x01000000

#define __SRAM0_START  0x21000000
#define __SRAM0_SIZE   128k

#define __SRAM1_START  0x21020000
#define __SRAM1_SIZE   128k

#define __SRAM2_START  0x21040000
#define __SRAM2_SIZE   256k

#define __DTCM_START  0x20000000
#define __DTCM_SIZE   128k

#define __ITCM_START  0x0
#define __ITCM_SIZE   64k

#define __VECTOR_TABLE_ROM_ADDR 0x01000000
#define __VECTOR_TABLE_RAM_ADDR 0
//#define __VECTOR_TABLE_RAM_COPY
//#define __COPY_VECTOR_TABLE

#define __STACK_FIXED
#define __STACK       4k
#define __STACKADDR   0x2001E000

#define __HEAP_FIXED
#define __HEAP        4k
#define __HEAPADDR    0x2001C000

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
            vector ( id = 48, optional, fill = "DMA_Error_IRQHandler");                            //  DMA error interrupt channels 0-63
            vector ( id = 49, optional, fill = "CPM_IRQHandler");                                  //  FPU etc. interrupt
            vector ( id = 50, optional, fill = "FC_IRQHandler");                                   //  FC Command complete
            vector ( id = 51, optional, fill = "LVD_LVW_IRQHandler");                              //  PMC Low voltage detect interrupt
            vector ( id = 52, optional, fill = "TMU_IRQHandler");                                  //  Temperature Monitor Unit interrupt
            vector ( id = 53, optional, fill = "WDOG0_IRQHandler");                                //  interrupt request out before wdg reset out
            vector ( id = 54, optional, fill = "WDOG1_IRQHandler");                                //  interrupt request out before wdg reset out
            vector ( id = 55, optional, fill = "WDOG2_IRQHandler");                                //  interrupt request out before wdg reset out
            vector ( id = 56, optional, fill = "FCSMU0_IRQHandler");                               //  Fault Control and Safety Manage Unit
            vector ( id = 57, optional, fill = "STCU0_IRQHandler");                                //  Safety Control Unit interrupt
            vector ( id = 58, optional, fill = "ERM_fault_IRQHandler");                            //  ERM single/double bit error correction
            vector ( id = 59, optional, fill = "MAM0_IRQHandler");                                 //  Matrix Access Monitor interrupt
            vector ( id = 60, optional, fill = "MAM1_IRQHandler");                                 //  Matrix Access Monitor interrupt
            vector ( id = 61, optional, fill = "MAM2_IRQHandler");                                 //  Matrix Access Monitor interrupt
            vector ( id = 62, optional, fill = "RESERVED_62_IRQHandler");                          //  Reserved
            vector ( id = 63, optional, fill = "RGM_Pre_IRQHandler");                              //  RGM pre-reset Interrupt
            vector ( id = 64, optional, fill = "RGM_Other_IRQHandler");                            //  RGM other CPU exit reset Interrupt
            vector ( id = 65, optional, fill = "INTM0_IRQHandler");                                //  INTM alarm interrupt
            vector ( id = 66, optional, fill = "ISM0_IRQHandler");                                 //  ISM0 interrupt
            vector ( id = 67, optional, fill = "MB_IRQHandler");                                   //  Mail Box interrupt
            vector ( id = 68, optional, fill = "SCG_IRQHandler");                                  //  SCG bus interrupt request
            vector ( id = 69, optional, fill = "CMU0_IRQHandler");                                 //  CMU0 interrupt
            vector ( id = 70, optional, fill = "CMU1_IRQHandler");                                 //  CMU1 interrupt
            vector ( id = 71, optional, fill = "CMU2_IRQHandler");                                 //  CMU2 interrupt
            vector ( id = 72, optional, fill = "CMU3_IRQHandler");                                 //  CMU3 interrupt
            vector ( id = 73, optional, fill = "TSTMP0_IRQHandler");                               //  TimerStamp0 interrupt
            vector ( id = 74, optional, fill = "TSTMP1_IRQHandler");                               //  TimerStamp1 interrupt
            vector ( id = 75, optional, fill = "TSTMP2_IRQHandler");                               //  TimerStamp2 interrupt
            vector ( id = 76, optional, fill = "TSTMP3_IRQHandler");                               //  TimerStamp3 interrupt
            vector ( id = 77, optional, fill = "CORDIC_IRQHandler");                               //  CORDIC Accelerator interrupt
            vector ( id = 78, optional, fill = "HSM0_IRQHandler");                                 //  Crypto interrupt
            vector ( id = 79, optional, fill = "FCPIT0_IRQHandler");                               //  FCPIT0 interrupt
            vector ( id = 80, optional, fill = "FCPIT1_IRQHandler");                               //  FCPIT0 interrupt
            vector ( id = 81, optional, fill = "RTC_IRQHandler");                                  //  RTC alarm or seconds interrupt 
            vector ( id = 82, optional, fill = "ENET_Tx0_IRQHandler");                             //  ENET 1588 Timer Interrupt - synchronous
            vector ( id = 83, optional, fill = "ENET_Tx1_IRQHandler");                             //  ENET Data transfer done
            vector ( id = 84, optional, fill = "ENET_Rx0_IRQHandler");                             //  ENET Receive Buffer Done for Ring/Queue 0
            vector ( id = 85, optional, fill = "ENET_Rx1_IRQHandler");                             //  ENET Receive Buffer Done for Ring/Queue 0
            vector ( id = 86, optional, fill = "ENET_System_IRQHandler");                          //* ENET System interrupt 
            vector ( id = 87, optional, fill = "AONTIMER_IRQHandler");                             //  AONTIMER interrupt request
            vector ( id = 88, optional, fill = "SWI_IRQHandler");                                  //  Software interrupt
            vector ( id = 89, optional, fill = "OSPI_IRQHandler");                                 //  All OSPI interrupts
            vector ( id = 90, optional, fill = "FREQM_IRQHandler");                                //  FREQM interrupt
            vector ( id = 91, optional, fill = "PORTA_IRQHandler");                                //  Port A pin detect interrupt
            vector ( id = 92, optional, fill = "PORTB_IRQHandler");                                //  Port B pin detect interrupt
            vector ( id = 93, optional, fill = "PORTC_IRQHandler");                                //  Port C pin detect interrupt
            vector ( id = 94, optional, fill = "PORTD_IRQHandler");                                //  Port D pin detect interrupt
            vector ( id = 95, optional, fill = "PORTE_IRQHandler");                                //  Port E pin detect interrupt
            vector ( id = 96, optional, fill = "PORTF_IRQHandler");                                //  Port F pin detect interrupt
            vector ( id = 97, optional, fill = "PORTG_IRQHandler");                                //  Port G pin detect interrupt
            vector ( id = 98, optional, fill = "PORTH_IRQHandler");                                //  Port H pin detect interrupt
            vector ( id = 99, optional, fill = "PORTI_IRQHandler");                                //  Port I pin detect interrupt
            vector ( id = 100, optional, fill = "CAN0_IRQHandler");                                 //  CAN0 Interrupt
            vector ( id = 101, optional, fill = "CAN1_IRQHandler");                                 //  CAN1 Interrupt
            vector ( id = 102, optional, fill = "CAN2_IRQHandler");                                 //  CAN2 Interrupt
            vector ( id = 103, optional, fill = "CAN3_IRQHandler");                                 //  CAN3 Interrupt
            vector ( id = 104, optional, fill = "CAN4_IRQHandler");                                 //  CAN4 Interrupt
            vector ( id = 105, optional, fill = "CAN5_IRQHandler");                                 //  CAN5 Interrupt
            vector ( id = 106, optional, fill = "CAN6_IRQHandler");                                 //  CAN6 Interrupt
            vector ( id = 107, optional, fill = "CAN7_IRQHandler");                                 //  CAN7 Interrupt
            vector ( id = 108, optional, fill = "FCIIC0_IRQHandler");                               //  FCIIC0 Interrupt
            vector ( id = 109, optional, fill = "FCIIC1_IRQHandler");                               //  FCIIC1 Interrupt
            vector ( id = 110, optional, fill = "FCSPI0_IRQHandler");                               //  FCSPI0 Interrupt
            vector ( id = 111, optional, fill = "FCSPI1_IRQHandler");                               //  FCSPI1 Interrupt
            vector ( id = 112, optional, fill = "FCSPI2_IRQHandler");                               //  FCSPI2 Interrupt
            vector ( id = 113, optional, fill = "FCSPI3_IRQHandler");                               //  FCSPI0 Interrupt
            vector ( id = 114, optional, fill = "FCSPI4_IRQHandler");                               //  FCSPI1 Interrupt
            vector ( id = 115, optional, fill = "FCSPI5_IRQHandler");                               //  FCSPI2 Interrupt
            vector ( id = 116, optional, fill = "FCUART0_RxTx_IRQHandler");                         //  FCUART0 Transmit / Receive Interrupt
            vector ( id = 117, optional, fill = "FCUART1_RxTx_IRQHandler");                         //  FCUART1 Transmit / Receive  Interrupt
            vector ( id = 118, optional, fill = "FCUART2_RxTx_IRQHandler");                         //  FCUART2 Transmit / Receive  Interrupt
            vector ( id = 119, optional, fill = "FCUART3_RxTx_IRQHandler");                         //  FCUART3 Transmit / Receive Interrupt
            vector ( id = 120, optional, fill = "FCUART4_RxTx_IRQHandler");                         //  FCUART4 Transmit / Receive  Interrupt
            vector ( id = 121, optional, fill = "FCUART5_RxTx_IRQHandler");                         //  FCUART5 Transmit / Receive  Interrupt
            vector ( id = 122, optional, fill = "FCUART6_RxTx_IRQHandler");                         //  FCUART6 Transmit / Receive Interrupt
            vector ( id = 123, optional, fill = "FCUART7_RxTx_IRQHandler");                         //  FCUART7 Transmit / Receive  Interrupt
            vector ( id = 124, optional, fill = "FCUART8_RxTx_IRQHandler");                         //  FCUART8 Transmit / Receive  Interrupt
            vector ( id = 125, optional, fill = "FCUART9_RxTx_IRQHandler");                         //  FCUART9 Transmit / Receive Interrupt
            vector ( id = 126, optional, fill = "FCUART10_RxTx_IRQHandler");                        //  FCUART10 Transmit / Receive  Interrupt
            vector ( id = 127, optional, fill = "FCUART11_RxTx_IRQHandler");                        //  FCUART11 Transmit / Receive  Interrupt
            vector ( id = 128, optional, fill = "FCUART12_RxTx_IRQHandler");                        //  FCUART12 Transmit / Receive  Interrupt
            vector ( id = 129, optional, fill = "FCUART13_RxTx_IRQHandler");                        //  FCUART13 Transmit / Receive  Interrupt
            vector ( id = 130, optional, fill = "FCUART14_RxTx_IRQHandler");                        //  FCUART14 Transmit / Receive Interrupt
            vector ( id = 131, optional, fill = "FCUART15_RxTx_IRQHandler");                        //  FCUART15 Transmit / Receive  Interrupt
            vector ( id = 132, optional, fill = "FTU0_IRQHandler");                                 //  FTU0 all source interrupt
            vector ( id = 133, optional, fill = "FTU1_IRQHandler");                                 //  FTU1 all source interrupt
            vector ( id = 134, optional, fill = "FTU2_IRQHandler");                                 //  FTU2 all source interrupt
            vector ( id = 135, optional, fill = "FTU3_IRQHandler");                                 //  FTU3 all source interrupt
            vector ( id = 136, optional, fill = "FTU4_IRQHandler");                                 //  FTU4 all source interrupt
            vector ( id = 137, optional, fill = "FTU5_IRQHandler");                                 //  FTU5 all source interrupt
            vector ( id = 138, optional, fill = "FTU6_IRQHandler");                                 //  FTU6 all source interrupt
            vector ( id = 139, optional, fill = "FTU7_IRQHandler");                                 //  FTU7 all source interrupt
            vector ( id = 140, optional, fill = "FTU8_IRQHandler");                                 //  FTU4 all source interrupt
            vector ( id = 141, optional, fill = "FTU9_IRQHandler");                                 //  FTU5 all source interrupt
            vector ( id = 142, optional, fill = "FTU10_IRQHandler");                                //  FTU6 all source interrupt
            vector ( id = 143, optional, fill = "FTU11_IRQHandler");                                //  FTU7 all source interrupt
            vector ( id = 144, optional, fill = "CMP0_IRQHandler");                                 //  CMP0 interrupt request 
            vector ( id = 145, optional, fill = "CMP1_IRQHandler");                                 //  CMP1 interrupt request 
            vector ( id = 146, optional, fill = "CMP2_IRQHandler");                                 //  CMP2 interrupt request 
            vector ( id = 147, optional, fill = "ADC0_IRQHandler");                                 //  ADC0 interrupt request.
            vector ( id = 148, optional, fill = "ADC1_IRQHandler");                                 //  ADC1 interrupt request.
            vector ( id = 149, optional, fill = "ADC2_IRQHandler");                                 //  ADC2 interrupt request.
            vector ( id = 150, optional, fill = "ADC3_IRQHandler");                                 //  ADC3 interrupt request.
            vector ( id = 151, optional, fill = "PTIMER0_IRQHandler");                              //  PTIMER0 interrupt
            vector ( id = 152, optional, fill = "PTIMER1_IRQHandler");                              //  PTIMER1 interrupt
            vector ( id = 153, optional, fill = "PTIMER2_IRQHandler");                              //  PTIMER2 interrupt
            vector ( id = 154, optional, fill = "PTIMER3_IRQHandler");                              //  PTIMER3 interrupt
            vector ( id = 155, optional, fill = "SDDF0_IRQHandler");                                //  SD Digital Filter interrupt request
            vector ( id = 156, optional, fill = "MSC0_IRQHandler");                                 //  MSC interrupt
            vector ( id = 157, optional, fill = "MSC1_IRQHandler");                                 //  MSC interrupt
            vector ( id = 158, optional, fill = "CAN8_IRQHandler");                                 //  CAN6 Interrupt
            vector ( id = 159, optional, fill = "CAN9_IRQHandler");                                 //  CAN7 Interrupt
            vector ( id = 160, optional, fill = "SENT0_IRQHandler");                                //  SENT all interrupt (fast or slow)
            vector ( id = 161, optional, fill = "SENT1_IRQHandler");                                //  SENT all interrupt (fast or slow)
            vector ( id = 162, optional, fill = "FCSPI6_IRQHandler");                               //  FCSPI6 Interrupt
            vector ( id = 163, optional, fill = "FCSPI7_IRQHandler");                               //  FCSPI7 Interrupt
            vector ( id = 164, optional, fill = "FCUART16_RxTx_IRQHandler");                        //  FCUART16 Transmit / Receive Interrupt
            vector ( id = 165, optional, fill = "FCUART17_RxTx_IRQHandler");                        //  FCUART17 Transmit / Receive  Interrupt
            vector ( id = 166, optional, fill = "CTI0_IRQHandler");                                 //  CTI Interrupt
            vector ( id = 167, optional, fill = "CTI1_IRQHandler");                                 //  CTI Interrupt
            vector ( id = 168, optional, fill = "CTI2_IRQHandler");                                 //  CTI Interrupt
            vector ( id = 169, optional, fill = "CMU4_IRQHandler");                                 //  CMU4 Interrupt
            
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
	