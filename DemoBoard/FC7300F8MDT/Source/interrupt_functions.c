#if 1
#include "Mcu.h"
#include "Fls.h"
#include "Fee.h"

/* Flash ECC info register address */
#define FLASH_ECC_REG_ADDR 0x40020084

typedef struct
{
    char  *type;
    char  *cause;
    uint32 address;
} Exception_Inf;

typedef struct
{
    unsigned int stacked_r0;
    unsigned int stacked_r1;
    unsigned int stacked_r2;
    unsigned int stacked_r3;
    unsigned int stacked_r12;
    unsigned int stacked_lr;
    unsigned int stacked_pc;
    unsigned int stacked_psr;
} Hardfault_StackType;

Exception_Inf Exception_Info;

__attribute__((naked)) void HardFault_Handler(void)
{
    __asm volatile(" tst   lr, #4 \n"
                   " ite   ne \n"
                   " mrsne r0, psp \n"
                   " mrseq r0, msp \n"
                   " push  {lr} \n"
                   " bl    HardFault_Process   \n"
                   " pop   {lr} \n"
                   " bx    lr \n");
}

__attribute__((naked)) void BusFault_Handler(void)
{
    __asm volatile(" tst   lr, #4 \n"
                   " ite   ne \n"
                   " mrsne r0, psp \n"
                   " mrseq r0, msp \n"
                   " push  {lr} \n"
                   " bl    BusFault_Process \n"
                   " pop   {lr} \n"
                   " bx    lr \n");
}

/**
 *  Demo for handling Fee-Fls ECC error automatically (DFlash Fee region)
 *  when FLS_ECC_HANDLE_API enabled in Fls module configuration
 *
 *  It can be integrated to user project optionally
 *
 */
void BusFault_Process(unsigned int pStackAddr)
{
    (void)pStackAddr;
    if (FC7XXX_SCB->CFSR & 0x200)
    {
        Exception_Info.address = FC7XXX_SCB->BFAR;
        Exception_Info.cause   = "Precise bus error";
    }
    else
    {
        Exception_Info.cause = "Imprecise bus error";
    }
    /* ECC error not in Fee region  */
    while (1)
        ; /* User Code */
}

void HardFault_Process(uint32 pStackAddr)
{
    if (FC7XXX_SCB->HFSR & (1 << 30))
    {
        if (FC7XXX_SCB->CFSR & 0x3F00)
        {
            Exception_Info.type = "BusFault";
            BusFault_Process(pStackAddr);
        }
        else if (FC7XXX_SCB->CFSR & 0x3B)
        {
            Exception_Info.type = "MemFault";
            if (FC7XXX_SCB->CFSR & 0x80)
            {
                Exception_Info.address = FC7XXX_SCB->MMFAR;
            }
            if (FC7XXX_SCB->CFSR & 0x01)
            {
                Exception_Info.cause = "On instruction access";
            }
            else if (FC7XXX_SCB->CFSR & 0x02)
            {
                Exception_Info.cause = "On data access";
            }
            else
            {
                Exception_Info.cause = "Unknown";
            }
            while (1)
                ; /* User Code  */
        }
        else
        {
            Exception_Info.type = "UsageFault";
            if (FC7XXX_SCB->CFSR & 0x10000)
            {
                Exception_Info.cause = "Undefined instruction";
            }
            else if (FC7XXX_SCB->CFSR & 0x20000)
            {
                Exception_Info.cause = "Attempt to enter an invalid instruction set state";
            }
            else if (FC7XXX_SCB->CFSR & 0x40000)
            {
                Exception_Info.cause = "Invalid EXC_RETURN value";
            }
            else if (FC7XXX_SCB->CFSR & 0x80000)
            {
                Exception_Info.cause = "Attempt to access a coprocessor";
            }
            else if (FC7XXX_SCB->CFSR & 0x100000)
            {
                Exception_Info.cause = "Illegal unaligned load or store";
            }
            else
            {
                Exception_Info.cause = "Divide by 0";
            }
            while (1)
                ; /* User Code  */
        }
    }
    else
    {
        Exception_Info.type  = "HardFault";
        Exception_Info.cause = "Unknown";
        while (1)
            ; /* User Code  */
    }
}

void NMI_Handler(void)
{
    unsigned int result = 1;
    while (result)
        ;
}

void MemManage_Handler(void)
{
    while (1)
        ;
}

void UsageFault_Handler(void)
{
    while (1)
        ;
}
void SVC_Handler(void)
{
    while (1)
        ;
}
void DebugMon_Handler(void)
{
    while (1)
        ;
}
void PendSV_Handler(void)
{
    while (1)
        ;
}

/*  Open what you need  */
#if 0 
void SysTick_Handler(void)
{
    while(1);
}
void DMA0_IRQHandler(void)
{
    while(1);
}
void DMA1_IRQHandler(void)
{
    while(1);
}
void DMA2_IRQHandler(void)
{
    while(1);
}
void DMA3_IRQHandler(void)
{
    while(1);
}
void DMA4_IRQHandler(void)
{
    while(1);
}
void DMA5_IRQHandler(void)
{
    while(1);
}
void DMA6_IRQHandler(void)
{
    while(1);
}
void DMA7_IRQHandler(void)
{
    while(1);
}
void DMA8_IRQHandler(void)
{
    while(1);
}
void DMA9_IRQHandler(void)
{
    while(1);
}
void DMA10_IRQHandler(void)
{
    while(1);
}
void DMA11_IRQHandler(void)
{
    while(1);
}
void DMA12_IRQHandler(void)
{
    while(1);
}
void DMA13_IRQHandler(void)
{
    while(1);
}
void DMA14_IRQHandler(void)
{
    while(1);
}
void DMA15_IRQHandler(void)
{
    while(1);
}
void DMA16_IRQHandler(void)
{
    while(1);
}
void DMA17_IRQHandler(void)
{
    while(1);
}
void DMA18_IRQHandler(void)
{
    while(1);
}
void DMA19_IRQHandler(void)
{
    while(1);
}
void DMA20_IRQHandler(void)
{
    while(1);
}
void DMA21_IRQHandler(void)
{
    while(1);
}
void DMA22_IRQHandler(void)
{
    while(1);
}
void DMA23_IRQHandler(void)
{
    while(1);
}
void DMA24_IRQHandler(void)
{
    while(1);
}
void DMA25_IRQHandler(void)
{
    while(1);
}
void DMA26_IRQHandler(void)
{
    while(1);
}
void DMA27_IRQHandler(void)
{
    while(1);
}
void DMA28_IRQHandler(void)
{
    while(1);
}
void DMA29_IRQHandler(void)
{
    while(1);
}
void DMA30_IRQHandler(void)
{
    while(1);
}
void DMA31_IRQHandler(void)
{
    while(1);
}
void DMA_Error_IRQHandler(void)
{
    while(1);
}
void CPM_IRQHandler(void)
{
    while(1);
}
void FC_IRQHandler(void)
{
    while(1);
}
void LVD_LVW_IRQHandler(void)
{
    while(1);
}
void TMU_IRQHandler(void)
{
    while(1);
}
void WDOG0_IRQHandler(void)
{
    while(1);
}
void WDOG1_IRQHandler(void)
{
    while(1);
}
void WDOG2_IRQHandler(void)
{
    while(1);
}
void FCSMU0_IRQHandler(void)
{
    while(1);
}
void STCU0_IRQHandler(void)
{
    while(1);
}
void ERM_fault_IRQHandler(void)
{
    while(1);
}
void MAM0_IRQHandler(void)
{
    while(1);
}
void MAM1_IRQHandler(void)
{
    while(1);
}
void MAM2_IRQHandler(void)
{
    while(1);
}
void RGM_Pre_IRQHandler(void)
{
    while(1);
}
void RGM_Other_IRQHandler(void)
{
    while(1);
}
void INTM0_IRQHandler(void)
{
    while(1);
}
void ISM0_IRQHandler(void)
{
    while(1);
}
void MB_IRQHandler(void)
{
    while(1);
}
void SCG_IRQHandler(void)
{
    while(1);
}
void CMU0_IRQHandler(void)
{
    while(1);
}
void CMU1_IRQHandler(void)
{
    while(1);
}
void CMU2_IRQHandler(void)
{
    while(1);
}
void CMU3_IRQHandler(void)
{
    while(1);
}
void CMU4_IRQHandler(void)
{
    while(1);
}
void TSTMP0_IRQHandler(void)
{
    while(1);
}
void TSTMP1_IRQHandler(void)
{
    while(1);
}
void TSTMP2_IRQHandler(void)
{
    while(1);
}
void TSTMP3_IRQHandler(void)
{
    while(1);
}
void CORDIC_IRQHandler(void)
{
    while(1);
}
void HSM0_IRQHandler(void)
{
    while(1);
}
void FCPIT0_IRQHandler(void)
{
    while(1);
}
void FCPIT1_IRQHandler(void)
{
    while(1);
}
void RTC_IRQHandler(void)
{
    while(1);
}
void ENET_Tx0_IRQHandler(void)
{
    while(1);
}
void ENET_Tx1_IRQHandler(void)
{
    while(1);
}
void ENET_Rx0_IRQHandler(void)
{
    while(1);
}
void ENET_Rx1_IRQHandler(void)
{
    while(1);
}
void ENET_System_IRQHandler(void)
{
    while(1);
}
void AONTIMER_IRQHandler(void)
{
    while(1);
}
void SWI_IRQHandler(void)
{
    while(1);
}
void OSPI_IRQHandler(void)
{
    while(1);
}
void FREQM_IRQHandler(void)
{
    while(1);
}
void PORTA_IRQHandler(void)
{
    while(1);
}
void PORTB_IRQHandler(void)
{
    while(1);
}
void PORTC_IRQHandler(void)
{
    while(1);
}
void PORTD_IRQHandler(void)
{
    while(1);
}
void PORTE_IRQHandler(void)
{
    while(1);
}
void PORTF_IRQHandler(void)
{
    while(1);
}
void PORTG_IRQHandler(void)
{
    while(1);
}
void PORTH_IRQHandler(void)
{
    while(1);
}
void PORTI_IRQHandler(void)
{
    while(1);
}
void Can_IsrCAN0_All(void)
{
    while(1);
}
void Can_IsrCAN1_All(void)
{
    while(1);
}
void Can_IsrCAN2_All(void)
{
    while(1);
}
void Can_IsrCAN3_All(void)
{
    while(1);
}
void Can_IsrCAN4_All(void)
{
    while(1);
}
void Can_IsrCAN5_All(void)
{
    while(1);
}
void Can_IsrCAN6_All(void)
{
    while(1);
}
void Can_IsrCAN7_All(void)
{
    while(1);
}
void Can_IsrCAN8_All(void)
{
    while(1);
}
void Can_IsrCAN9_All(void)
{
    while(1);
}
void FCIIC0_IRQHandler(void)
{
    while(1);
}
void FCIIC1_IRQHandler(void)
{
    while(1);
}
void FCSPI0_IRQHandler(void)
{
    while(1);
}
void FCSPI1_IRQHandler(void)
{
    while(1);
}
void FCSPI2_IRQHandler(void)
{
    while(1);
}
void FCSPI3_IRQHandler(void)
{
    while(1);
}
void FCSPI4_IRQHandler(void)
{
    while(1);
}
void FCSPI5_IRQHandler(void)
{
    while(1);
}
void FCSPI6_IRQHandler(void)
{
    while(1);
}
void FCSPI7_IRQHandler(void)
{
    while(1);
}
void FCUART0_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART1_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART2_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART3_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART4_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART5_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART6_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART7_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART8_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART9_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART10_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART11_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART12_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART13_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART14_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART15_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART16_RxTx_IRQHandler(void)
{
    while(1);
}
void FCUART17_RxTx_IRQHandler(void)
{
    while(1);
}
void FTU0_IRQHandler(void)
{
    while(1);
}
void FTU1_IRQHandler(void)
{
    while(1);
}
void FTU2_IRQHandler(void)
{
    while(1);
}
void FTU3_IRQHandler(void)
{
    while(1);
}
void FTU4_IRQHandler(void)
{
    while(1);
}
void FTU5_IRQHandler(void)
{
    while(1);
}
void FTU6_IRQHandler(void)
{
    while(1);
}
void FTU7_IRQHandler(void)
{
    while(1);
}
void FTU8_IRQHandler(void)
{
    while(1);
}
void FTU9_IRQHandler(void)
{
    while(1);
}
void FTU10_IRQHandler(void)
{
    while(1);
}
void FTU11_IRQHandler(void)
{
    while(1);
}
void CMP0_IRQHandler(void)
{
   while(1);
}
void CMP1_IRQHandler(void)
{
   while(1);
}
void CMP2_IRQHandler(void)
{
    while(1);
}
void ADC0_IRQHandler(void)
{
    while(1);
}
void ADC1_IRQHandler(void)
{
   while(1);
}
void ADC2_IRQHandler(void)
{
   while(1);
}
void ADC3_IRQHandler(void)
{
    while(1);
}
void PTIMER0_IRQHandler(void)
{
    while(1);
}
void PTIMER1_IRQHandler(void)
{
   while(1);
}
void PTIMER2_IRQHandler(void)
{
   while(1);
}
void PTIMER3_IRQHandler(void)
{
    while(1);
}
void SDDF0_IRQHandler(void)
{
    while(1);
}
void MSC0_IRQHandler(void)
{
    while(1);
}
void MSC1_IRQHandler(void)
{
    while(1);
}
void SENT0_IRQHandler(void)
{
    while(1);
}
void SENT1_IRQHandler(void)
{
    while(1);
}
void CTI0_IRQHandler(void)
{
    while(1);
}
void CTI1_IRQHandler(void)
{
    while(1);
}
void CTI2_IRQHandler(void)
{
    while(1);
}
#endif

#endif
