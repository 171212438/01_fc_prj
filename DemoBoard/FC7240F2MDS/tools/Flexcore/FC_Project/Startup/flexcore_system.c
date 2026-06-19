#include "flexcore_common.h"
#include "flexcore_driver_wdog.h"
#include "core_riscv32.h"
#include "flexcore_system.h"

FLEXCORECODE
void MemCpyWithoutWdog(volatile void *pDstMem, const volatile void *pSrcMem, uint32_t u32Cnt)
{
    uint32_t *pDstDW   = (uint32_t *)pDstMem;
    uint32_t *pSrcDW   = (uint32_t *)pSrcMem;
    uint8_t  *pDstByte = NULL;
    uint8_t  *pSrcByte = NULL;

    if ((0u == (((uint32_t)pDstMem) & 0x3)) &&
        (0u == (((uint32_t)pSrcMem) & 0x3)) &&
        (u32Cnt >= 4u)) /* 4bytes align */
    {
        while (u32Cnt >= 4u)
        {
            *pDstDW = *pSrcDW;
            pDstDW++;
            pSrcDW++;
            u32Cnt -= 4u;
        }
    }

    pDstByte = (uint8_t *)pDstDW;
    pSrcByte = (uint8_t *)pSrcDW;

    while (u32Cnt > 0)
    {
        *pDstByte = *pSrcByte;
        pDstByte++;
        pSrcByte++;
        u32Cnt--;
    }
}




FLEXCORECODE
void MemSetWithoutWdog(volatile void *pMem, uint8_t u8Data, uint32_t u32Cnt)
{
    uint32_t *pDstDW   = (uint32_t *)pMem;
    uint8_t  *pDstByte;
    uint32_t  u32Fill  = u8Data;

    u32Fill = (u32Fill << 8) | u32Fill;
    u32Fill = (u32Fill << 16) | u32Fill;

    if ((0u == (((uint32_t)pMem) & 0x3)) &&
        (u32Cnt >= 4u)) /* 4bytes align */
    {
        while (u32Cnt >= 4u)
        {
            *pDstDW = u32Fill;
            pDstDW++;
            u32Cnt -= 4;
        }
    }

    pDstByte = (uint8_t *)pDstDW;

    while (u32Cnt > 0)
    {
        *pDstByte = u8Data;
        pDstByte++;
        u32Cnt--;
    }
}






FLEXCORECODE
void SystemSleepEnable(uint32_t u32Flag)
{
    if (0 != u32Flag)
    {
        FLEXCORE_SCR = 0x1;
    }
    else
    {
        FLEXCORE_SCR = 0x0;
    }
}

FLEXCORECODE
void SystemEnterWFI(void)
{
    SystemSleepEnable(1);
    __WFI();
}


FLEXCORECODE
FLEXCOREINLINE
void SystemEventEnable(uint32_t u32Flag)
{
    FLEXCORE_EER = u32Flag;
}

FLEXCORECODE
FLEXCOREINLINE
uint32_t SystemIrqEnStatGet(void)
{
    return FLEXCORE_IER;
}

FLEXCORECODE
FLEXCOREINLINE
void SystemIrqEnable(uint32_t u32Flag)
{
    FLEXCORE_IER = u32Flag;
}


FLEXCORECODE
uint32_t SystemEventEnStatGet(void)
{
    return FLEXCORE_EER;
}



FLEXCORECODE
uint32_t SystemSwitchAllInterrupt(uint32_t u32Flag)
{
    uint32_t u32Old = SystemIrqEnStatGet();

    SystemEventEnable(u32Flag);
    SystemIrqEnable(u32Flag);

    return u32Old;
}



FLEXCORECODE
void SystemClockEnableSpecific(uint32_t u32Flag)
{
    uint32_t u32Temp = FLEXCORE_CLOCK_ENABLE;

    u32Flag &= FLEXCORE_CLOCK_ENABLE_MASK_U32;
    u32Temp |= u32Flag;

    FLEXCORE_CLOCK_ENABLE = u32Temp;
}

#if 0
FLEXCORECODE
FLEXCORE_BoolType SystemFlexCoreUserCodeCheckPass()
{
    uint32_t u32Temp = FLEXCORE_SEC_BRC0;
    FLEXCORE_BoolType bPass = FLEXCORE_FALSE;

    u32Temp &= FLEXCORE_SEC_BRC0_USER_CODE_PASS_MSK;

    if (u32Temp == FLEXCORE_SEC_BRC0_USER_CODE_PASS)
    {
        bPass = FLEXCORE_TRUE;
    }

    return bPass;
}
#endif


FLEXCORECODE
void SystemEnableSpecificEvent(uint32_t u32Flag)
{
    uint32_t u32Temp;

    u32Temp = SystemEventEnStatGet();
    u32Temp |= u32Flag;
    SystemEventEnable(u32Temp);
}





FLEXCORECODE
void SystemEnableSpecificIsr(uint32_t u32Flag)
{
    uint32_t u32Temp;

    u32Temp = SystemEventEnStatGet();
    u32Temp |= u32Flag;
    SystemEventEnable(u32Temp);

    u32Temp = SystemIrqEnStatGet();
    u32Temp |= u32Flag;
    SystemIrqEnable(u32Temp);
}


/* hsm driver keep same with fc4150, so provide this api */
FLEXCORECODE
void IntMgr_EnableInterrupt(FlexCore_IRQn_Type eIrq)
{
    if (NotAvail_IRQn != eIrq)
    {
        SystemEnableSpecificIsr(FLEXCORE_IRQn2U32BIT(eIrq));
    }
}

/* the vector addr is boot addr & 0xffffff00 */
FLEXCORECODE
int32_t SystemSetBootAddrWithIsrTable(uint32_t u32Addr)
{
    int32_t s32Ret = 0;
    uint32_t u32IrqTableAddr = u32Addr & 0xffffff00;

    if (0x80 == (u32Addr & 0xff))
    {
        FLEXCORE_BOOT_ADDR = u32IrqTableAddr;
        s32Ret = 0;
    }
    else
    {
        s32Ret = -1;
    }

    return s32Ret;
}

/*!
 * @brief Disable the global IRQ
 *
 * Disable the global interrupt and return the current primask register. User is required to provided the primask
 * register for the EnableGlobalIRQ().
 *
 * @return Current primask value.
 */
FLEXCOREINLINE
FLEXCORECODE
uint32_t DisableGlobalIRQ(void)
{
    uint32_t mstatus;

    __ASM volatile ("csrrci %0, mstatus, 8" : "=r"(mstatus));

    return mstatus;
}

/*!
 * @brief Enaable the global IRQ
 *
 * Set the primask register with the provided primask value but not just enable the primask. The idea is for the
 * convinience of integration of RTOS. some RTOS get its own management mechanism of primask. User is required to
 * use the ConfigureMStatus() and DisableGlobalIRQ() in pair.
 *
 * @param primask value of primask register to be restored. The primask value is supposed to be provided by the
 * DisableGlobalIRQ().
 */
FLEXCOREINLINE
FLEXCORECODE
void ConfigureMStatus(uint32_t primask)
{
    __ASM volatile ("csrw mstatus, %0" : : "r"(primask));
}

FLEXCORESTATICINLINE
FLEXCORECODE
void EnableGlobalIRQ(void)
{
    __enable_irq();
}


FLEXCORECODE
int32_t SystemSetIsrTableAddrWithBoot(uint32_t u32Addr)
{
    int32_t s32Ret = 0;
    uint32_t u32Temp;

    if (0u == (u32Addr & 0xff))
    {
        u32Temp = DisableGlobalIRQ();
        s32Ret = SystemSetBootAddrWithIsrTable(u32Addr);
        ConfigureMStatus(u32Temp);
    }
    else
    {
        s32Ret = -1;
    }

    return s32Ret;
}

FLEXCOREDATA
FLEXCORE_BoolType  bFlexCoreIsrEntryAvail = FLEXCORE_FALSE;

FLEXCOREDATA
FIRMWARE_ISREntryType pFlexCoreIsrEntry = NULL;


FLEXCORECODE
FLEXCORE_BoolType FIRMWARE_ISREntry(uint32_t u32MStatus)
{
    FLEXCORE_BoolType bRet = FLEXCORE_FALSE;

    if ((FLEXCORE_TRUE == bFlexCoreIsrEntryAvail) && (NULL != pFlexCoreIsrEntry))
    {
        bRet = pFlexCoreIsrEntry(u32MStatus);
    }
    else
    {
        bRet = FLEXCORE_FALSE;
    }

    return bRet;
}

#define FLEXCORE_EPR REG32(0x42022014u)
#define FLEXCORE_ESP REG32(0x42022018u)
#define FLEXCORE_ECP REG32(0x4202201Cu)
FLEXCORECODE
void SystemEventClrPending(uint32_t u32Flag)
{
    FLEXCORE_ECP = u32Flag; /* W1C */
}

FLEXCORECODE
uint32_t SystemEventGetPending(void)
{
    return FLEXCORE_EPR;
}

FLEXCORECODE
void SystemEventSetSpecificPending(uint32_t u32Flag)
{
    FLEXCORE_ESP = u32Flag;
}

#define FLEXCORE_IPR REG32(0x42022004u)
#define FLEXCORE_ICP REG32(0x4202200Cu)
FLEXCORECODE
void SystemIrqClrPending(uint32_t u32Flag)
{
    FLEXCORE_ICP = u32Flag; /* W1C */
}

FLEXCORECODE
uint32_t SystemIrqGetPending(void)
{
    return FLEXCORE_IPR;
}


FLEXCORECODE
void SystemClrSpecificIsrPending(uint32_t u32Flag)
{
    SystemEventClrPending(u32Flag);
    SystemIrqClrPending(u32Flag);
}

FLEXCORECODE
void SystemDisableSpecificInterrupt(uint32_t u32Flag)
{
    uint32_t u32Temp;

    SystemEventClrPending(u32Flag);
    SystemIrqClrPending(u32Flag);

    u32Temp = SystemIrqEnStatGet();
    u32Temp &= (~u32Flag);
    SystemIrqEnable(u32Temp);

    u32Temp = SystemEventEnStatGet();
    u32Temp &= (~u32Flag);
    SystemEventEnable(u32Temp);

    SystemEventClrPending(u32Flag);
    SystemIrqClrPending(u32Flag);
}

extern void GPIOB_DriverIRQHandler(void);
extern void Resv29_DriverIRQHandler(void);
extern void IRamEcc_DriverIRQHandler(void);
extern void DRamEcc_DriverIRQHandler(void);
extern void TPU_DriverIRQHandler(void);
extern void TPU_HSR_DriverIRQHandler(void);
extern void IMPU_DriverIRQHandler(void);
extern void DMPU_DriverIRQHandler(void);
extern void Resv28_DriverIRQHandler(void);
extern void CMP0_DriverIRQHandler(void);
extern void Resv30_DriverIRQHandler(void);
extern void GPIOD_DriverIRQHandler(void);
extern void GPIOC_DriverIRQHandler(void);
extern void CAN3_DriverIRQHandler(void);
extern void CAN2_DriverIRQHandler(void);
extern void FTU0_DriverIRQHandler(void);
extern void FTU1_DriverIRQHandler(void);
extern void ADC0_DriverIRQHandler(void);
extern void ADC1_DriverIRQHandler(void);
extern void GPIOA_DriverIRQHandler(void);
extern void RgmReset_DriverIRQHandler(void);
extern void FlashAlt_DriverIRQHandler(void);
extern void StopReq_DriverIRQHandler(void);
extern void GPIOE_DriverIRQHandler(void);
extern void Dma_DriverIRQHandler(void);
extern void CMP1_DriverIRQHandler(void);
extern void HSM0_DriverIRQHandler(void);
extern void MAILBOXAPI_DriverIRQHandler(void);
extern void TSTMP_DriverIRQHandler(void);
//extern void BusErr_DriverIRQHandler(void);
//extern void Wdog_DriverIRQHandler(void);
extern void Resv31_DriverIRQHandler(void);


extern void GPIOB_IRQHandler(void);
extern void Resv29_IRQHandler(void);
extern void IRamEcc_IRQHandler(void);
extern void DRamEcc_IRQHandler(void);
extern void TPU_IRQHandler(void);
extern void TPU_HSR_IRQHandler(void);
extern void IMPU_IRQHandler(void);
extern void DMPU_IRQHandler(void);
extern void Resv28_IRQHandler(void);
extern void CMP0_IRQHandler(void);
extern void Resv30_IRQHandler(void);
extern void GPIOD_IRQHandler(void);
extern void GPIOC_IRQHandler(void);
extern void CAN3_IRQHandler(void);
extern void CAN2_IRQHandler(void);
extern void FTU0_IRQHandler(void);
extern void FTU1_IRQHandler(void);
extern void ADC0_IRQHandler(void);
extern void ADC1_IRQHandler(void);
extern void GPIOA_IRQHandler(void);
extern void RgmReset_IRQHandler(void);
extern void FlashAlt_IRQHandler(void);
extern void StopReq_IRQHandler(void);
extern void GPIOE_IRQHandler(void);
extern void Dma_IRQHandler(void);
extern void CMP1_IRQHandler(void);
extern void HSM0_IRQHandler(void);
extern void Mailbox_IRQHandler(void);
extern void TSTAMP_IRQHandler(void);
extern void BusErr_IRQHandler(void);
extern void Wdog_IRQHandler(void);
extern void Resv31_IRQHandler(void);

static void DefaultIRQHandler(void)
{
    ; // default do nothing due to HSM subsystem should always ok or reset by cm7
}


#define DEFINE_IRQ_HANDLER(irq_handler, driver_irq_handler) \
    void __attribute__((weak)) irq_handler(void) { driver_irq_handler();}

#define DEFINE_DEFAULT_IRQ_HANDLER(irq_handler) void irq_handler() __attribute__((weak, alias("DefaultIRQHandler")))

//DEFINE_IRQ_HANDLER(GPIOB_IRQHandler, GPIOB_DriverIRQHandler);

//DEFINE_IRQ_HANDLER(IRamEcc_IRQHandler, IRamEcc_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(DRamEcc_IRQHandler, DRamEcc_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(TPU_IRQHandler, TPU_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(TPU_HSR_IRQHandler, TPU_HSR_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(IMPU_IRQHandler, IMPU_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(DMPU_IRQHandler, DMPU_DriverIRQHandler);

//DEFINE_IRQ_HANDLER(CMP0_IRQHandler, CMP0_DriverIRQHandler);

//DEFINE_IRQ_HANDLER(GPIOD_IRQHandler, GPIOD_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(GPIOC_IRQHandler, GPIOC_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(CAN3_IRQHandler, CAN3_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(CAN2_IRQHandler, CAN2_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(FTU0_IRQHandler, FTU0_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(FTU1_IRQHandler, FTU1_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(ADC0_IRQHandler, ADC0_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(ADC1_IRQHandler, ADC1_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(GPIOA_IRQHandler, GPIOA_DriverIRQHandler);

//DEFINE_IRQ_HANDLER(RgmReset_IRQHandler, RgmReset_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(FlashAlt_IRQHandler, FlashAlt_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(StopReq_IRQHandler, StopReq_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(GPIOE_IRQHandler, GPIOE_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(Dma_IRQHandler, Dma_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(CMP1_IRQHandler, CMP1_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(HSM0_IRQHandler, HSM0_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(Mailbox_IRQHandler, MAILBOXAPI_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(TSTAMP_IRQHandler, TSTMP_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(BusErr_IRQHandler, BusErr_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(Wdog_IRQHandler, Wdog_DriverIRQHandler);
//DEFINE_IRQ_HANDLER(Resv31_IRQHandler, Resv31_DriverIRQHandler);
DEFINE_IRQ_HANDLER(Resv28_IRQHandler, Resv28_DriverIRQHandler);
DEFINE_IRQ_HANDLER(Resv29_IRQHandler, Resv29_DriverIRQHandler);
DEFINE_IRQ_HANDLER(Resv30_IRQHandler, Resv30_DriverIRQHandler);
DEFINE_IRQ_HANDLER(Resv31_IRQHandler, Resv31_DriverIRQHandler);


DEFINE_DEFAULT_IRQ_HANDLER(RgmReset_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(BusErr_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(IRamEcc_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(DRamEcc_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(TPU_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(TPU_HSR_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(HSM0_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(MAILBOXAPI_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(TSTMP_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(Dma_DriverIRQHandler);
//DEFINE_DEFAULT_IRQ_HANDLER(Wdog_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(StopReq_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(FlashAlt_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(CAN3_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(CAN2_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(FTU0_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(FTU1_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(ADC0_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(ADC1_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(GPIOA_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(GPIOB_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(GPIOC_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(GPIOD_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(GPIOE_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(CMP0_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(CMP1_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(IMPU_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(DMPU_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(Resv28_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(Resv29_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(Resv30_DriverIRQHandler);
DEFINE_DEFAULT_IRQ_HANDLER(Resv31_DriverIRQHandler);

void RgmReset_IRQHandler(void)
{
    RgmReset_DriverIRQHandler();
}

void FlashAlt_IRQHandler(void)
{
    FlashAlt_DriverIRQHandler();
}

void CAN3_IRQHandler(void)
{
    CAN3_DriverIRQHandler();
}

void CAN2_IRQHandler(void)
{
    CAN2_DriverIRQHandler();
}

void FTU0_IRQHandler(void)
{
    FTU0_DriverIRQHandler();
}

void FTU1_IRQHandler(void)
{
    FTU1_DriverIRQHandler();
}

void ADC0_IRQHandler(void)
{
    ADC0_DriverIRQHandler();
}

void ADC1_IRQHandler(void)
{
    ADC1_DriverIRQHandler();
}

void GPIOA_IRQHandler(void)
{
    GPIOA_DriverIRQHandler();
}

void GPIOB_IRQHandler(void)
{
    GPIOB_DriverIRQHandler();
}

void GPIOC_IRQHandler(void)
{
    GPIOC_DriverIRQHandler();
}

void GPIOD_IRQHandler(void)
{
    GPIOD_DriverIRQHandler();
}

void GPIOE_IRQHandler(void)
{
    GPIOE_DriverIRQHandler();
}

void CMP0_IRQHandler(void)
{
    CMP0_DriverIRQHandler();
}

void CMP1_IRQHandler(void)
{
    CMP1_DriverIRQHandler();
}

void IMPU_IRQHandler(void)
{
    IMPU_DriverIRQHandler();
}

void DMPU_IRQHandler(void)
{
    DMPU_DriverIRQHandler();
}

void StopReq_IRQHandler(void)
{
    StopReq_DriverIRQHandler();
}

void Dma_IRQHandler(void)
{
    Dma_DriverIRQHandler();
}

void HSM0_IRQHandler(void)
{
    HSM0_DriverIRQHandler();
}

void Mailbox_IRQHandler(void)
{
    MAILBOXAPI_DriverIRQHandler();
}

void TSTAMP_IRQHandler(void)
{
    TSTMP_DriverIRQHandler();
}

void BusErr_IRQHandler(void)
{
    BusErr_DriverIRQHandler();
}

void IRamEcc_IRQHandler(void)
{
    IRamEcc_DriverIRQHandler();
}

void DRamEcc_IRQHandler(void)
{
    DRamEcc_DriverIRQHandler();
}

void TPU_IRQHandler(void)
{
    TPU_DriverIRQHandler();
}

void TPU_HSR_IRQHandler(void)
{
    TPU_HSR_DriverIRQHandler();
}

void Wdog_DriverIRQHandler(void)
{
    uint32_t u32Val = FLEXCORE_ERROR_REPORT;

    u32Val = u32Val & 0xffff;
    u32Val = u32Val | FLEXCORE_ERROR_REPORT_WDG_TIMEOUT;
    u32Val = u32Val | 0xDEAD0000u;
    FLEXCORE_ERROR_REPORT =  u32Val;

    while(1);
}

void Wdog_IRQHandler(void)
{
    Wdog_DriverIRQHandler();
}

const irq_handler_t s_aRomIsrVectorTable[] =
{
    RgmReset_IRQHandler,
    BusErr_IRQHandler,
    IRamEcc_IRQHandler,
    DRamEcc_IRQHandler,
    TPU_IRQHandler,
    TPU_HSR_IRQHandler,
    HSM0_IRQHandler,
    Mailbox_IRQHandler,
    TSTAMP_IRQHandler,
    Dma_IRQHandler,
    Wdog_IRQHandler,
    StopReq_IRQHandler,
    FlashAlt_IRQHandler,
    CAN3_IRQHandler,
    CAN2_IRQHandler,
    FTU0_IRQHandler,
    FTU1_IRQHandler,
    ADC0_IRQHandler,
    ADC1_IRQHandler,
    GPIOA_IRQHandler,
    GPIOB_IRQHandler,
    GPIOC_IRQHandler,
    GPIOD_IRQHandler,
    GPIOE_IRQHandler,
    CMP0_IRQHandler,
    CMP1_IRQHandler,
    IMPU_IRQHandler,
    DMPU_IRQHandler,
    Resv28_IRQHandler,
    Resv29_IRQHandler,
    Resv30_IRQHandler,
    Resv31_IRQHandler
};


FLEXCORECODE
FLEXCOREWEAKLINK
void SystemIrqHandler(uint32_t mcause)
{
    if (FLEXCORE_FALSE == FIRMWARE_ISREntry(mcause))
    {
        uint32_t u32IrqNum;

        if (mcause & 0x80000000) /* For external interrupt. */
        {
            u32IrqNum = mcause & 0x1FUL;

            /* call the real irq handler for intNum */
            s_aRomIsrVectorTable[u32IrqNum]();

            /* clear current isr stat,
            * after this, before call the actual handler,
            * if new isr come, the pending will be set,
            * the handler will handle this together, but the flag is still set,
            * so when exit this function, the pengding bit will cause re-enter,
            * the driver should handle this case.
            */
            SystemClrSpecificIsrPending(FLEXCORE_ISR_INT2FLAG(u32IrqNum));
        }
    }

}








FLEXCORECODE
void FlexCoreUserAppSystemInit (void)
{
    ;
}

