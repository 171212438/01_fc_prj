#if 1
#include "Mcu.h"
#include "Mcu_CM7_Regs.h"
#include "Bsp_CrashRecord.h"

#define EXCEPTION_STACK_FRAME_SIZE      (32U)
#define EXCEPTION_DTCM_START_ADDR       (0x20000000U)
#define EXCEPTION_DTCM_END_ADDR         (0x20020000U)
#define EXCEPTION_SRAM_START_ADDR       (0x21000000U)
#define EXCEPTION_SRAM_END_ADDR         (0x210E0000U)

#define EXCEPTION_FAULT_ACTION_HALT     (0U)
#define EXCEPTION_FAULT_ACTION_RESET    (1U)

#ifndef EXCEPTION_FAULT_ACTION
#define EXCEPTION_FAULT_ACTION          EXCEPTION_FAULT_ACTION_HALT
#endif

#if ((EXCEPTION_FAULT_ACTION != EXCEPTION_FAULT_ACTION_HALT) && \
     (EXCEPTION_FAULT_ACTION != EXCEPTION_FAULT_ACTION_RESET))
#error "Unsupported EXCEPTION_FAULT_ACTION"
#endif

#define EXCEPTION_CFSR_MEMFAULT_MASK \
  (FC7XXX_SCB_CFSR_IACCVIOL_MASK | FC7XXX_SCB_CFSR_DACCVIOL_MASK | \
   FC7XXX_SCB_CFSR_MUNSTKERR_MASK | FC7XXX_SCB_CFSR_MSTKERR_MASK | \
   FC7XXX_SCB_CFSR_MLSPERR_MASK)

#define EXCEPTION_CFSR_BUSFAULT_MASK \
  (FC7XXX_SCB_CFSR_IBUSERR_MASK | FC7XXX_SCB_CFSR_PRECISERR_MASK | \
   FC7XXX_SCB_CFSR_IMPRECISERR_MASK | FC7XXX_SCB_CFSR_UNSTKERR_MASK | \
   FC7XXX_SCB_CFSR_STKERR_MASK | FC7XXX_SCB_CFSR_LSPERR_MASK)

#define EXCEPTION_CFSR_USAGEFAULT_MASK \
  (FC7XXX_SCB_CFSR_UNDEFINSTR_MASK | FC7XXX_SCB_CFSR_INVSTATE_MASK | \
   FC7XXX_SCB_CFSR_INVPC_MASK | FC7XXX_SCB_CFSR_NOCP_MASK | \
   FC7XXX_SCB_CFSR_UNALIGNED_MASK | FC7XXX_SCB_CFSR_DIVBYZERO_MASK)

typedef Bsp_CrashRecord_StackFrameType Hardfault_StackType;

typedef struct {
  const char *type;              /* Decoded fault class, for example HardFault or BusFault. */
  const char *cause;             /* Decoded fault cause from HFSR/CFSR status bits. */
  uint32 fault_type;             /* Numeric fault class for crash record storage. */
  uint32 fault_cause;            /* Raw cause bits selected from HFSR/CFSR for crash record storage. */
  uint32 address;                /* Fault address when address_valid is set. */
  uint32 address_valid;          /* Nonzero when address contains a valid MMFAR/BFAR value. */
  uint32 stack_frame_valid;      /* Nonzero when active_sp points to a readable exception frame. */
  uint32 active_sp;              /* MSP or PSP selected from EXC_RETURN bit 2. */
  uint32 exc_return;             /* EXC_RETURN value captured from LR on exception entry. */
  uint32 icsr;                   /* Raw Interrupt Control and State Register snapshot. */
  uint32 hfsr;                   /* Raw HardFault Status Register snapshot. */
  uint32 cfsr;                   /* Raw Configurable Fault Status Register snapshot. */
  uint32 shcsr;                  /* Raw System Handler Control and State Register snapshot. */
  uint32 dfsr;                   /* Raw Debug Fault Status Register snapshot. */
  uint32 afsr;                   /* Raw Auxiliary Fault Status Register snapshot. */
  uint32 mmfar;                  /* Raw MemManage Fault Address Register snapshot. */
  uint32 bfar;                   /* Raw BusFault Address Register snapshot. */
  Hardfault_StackType stacked;   /* Hardware-stacked core registers from the interrupted context. */
} Exception_Inf;

volatile Exception_Inf Exception_Info;

/* checks the readability of stack frames, only allowing reads from:
 *   DTCM: 0x20000000 ~ 0x20020000
 *   SRAM: 0x21000000 ~ 0x210E0000
 * Prevent accessing illegal addresses again during fault handling. */
static uint32 Exception_IsStackFrameReadable(uint32 u32StackAddr)
{
  uint32 u32StackEnd = u32StackAddr + EXCEPTION_STACK_FRAME_SIZE;

  if (((u32StackAddr & 0x3U) != 0U) || (u32StackEnd < u32StackAddr)) {
    return 0U;
  }

  if (((u32StackAddr >= EXCEPTION_DTCM_START_ADDR) && (u32StackEnd <= EXCEPTION_DTCM_END_ADDR)) || ((u32StackAddr >= EXCEPTION_SRAM_START_ADDR) && (u32StackEnd <= EXCEPTION_SRAM_END_ADDR))) {
    return 1U;
  }

  return 0U;
}

static void Exception_ClearStackSnapshot(void)
{
  Exception_Info.stacked.stacked_r0 = 0U;
  Exception_Info.stacked.stacked_r1 = 0U;
  Exception_Info.stacked.stacked_r2 = 0U;
  Exception_Info.stacked.stacked_r3 = 0U;
  Exception_Info.stacked.stacked_r12 = 0U;
  Exception_Info.stacked.stacked_lr = 0U;
  Exception_Info.stacked.stacked_pc = 0U;
  Exception_Info.stacked.stacked_psr = 0U;
}

static void Exception_CaptureStackFrame(const Hardfault_StackType *pStackFrame)
{
  uint32 u32StackAddr = (uint32)pStackFrame;

  Exception_Info.active_sp = u32StackAddr;
  Exception_Info.stack_frame_valid = Exception_IsStackFrameReadable(u32StackAddr);

  if (0U != Exception_Info.stack_frame_valid) {
    Exception_Info.stacked.stacked_r0 = pStackFrame->stacked_r0;
    Exception_Info.stacked.stacked_r1 = pStackFrame->stacked_r1;
    Exception_Info.stacked.stacked_r2 = pStackFrame->stacked_r2;
    Exception_Info.stacked.stacked_r3 = pStackFrame->stacked_r3;
    Exception_Info.stacked.stacked_r12 = pStackFrame->stacked_r12;
    Exception_Info.stacked.stacked_lr = pStackFrame->stacked_lr;
    Exception_Info.stacked.stacked_pc = pStackFrame->stacked_pc;
    Exception_Info.stacked.stacked_psr = pStackFrame->stacked_psr;
  } else {
    Exception_ClearStackSnapshot();
  }
}

static void Exception_CaptureContext(uint32 u32FaultType, uint32 u32FaultCause, const char *pType, const char *pCause, const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn)
{
  Exception_Info.type = pType;
  Exception_Info.cause = pCause;
  Exception_Info.fault_type = u32FaultType;
  Exception_Info.fault_cause = u32FaultCause;
  Exception_Info.address = 0U;
  Exception_Info.address_valid = 0U;
  Exception_Info.exc_return = u32ExcReturn;
  Exception_Info.icsr = FC7XXX_SCB->ICSR;
  Exception_Info.hfsr = FC7XXX_SCB->HFSR;
  Exception_Info.cfsr = FC7XXX_SCB->CFSR;
  Exception_Info.shcsr = FC7XXX_SCB->SHCSR;
  Exception_Info.dfsr = FC7XXX_SCB->DFSR;
  Exception_Info.afsr = FC7XXX_SCB->AFSR;
  Exception_Info.mmfar = FC7XXX_SCB->MMFAR;
  Exception_Info.bfar = FC7XXX_SCB->BFAR;
  Exception_CaptureStackFrame(pStackFrame);
}

static void Exception_CommitCrashRecord(void)
{
  Bsp_CrashRecord_ExceptionInfoType tExceptionInfo;

  /* Keep fault context minimal: only copy to retained RAM here. */
  tExceptionInfo.fault_type = Exception_Info.fault_type;
  tExceptionInfo.fault_cause = Exception_Info.fault_cause;
  tExceptionInfo.address = Exception_Info.address;
  tExceptionInfo.address_valid = Exception_Info.address_valid;
  tExceptionInfo.stack_frame_valid = Exception_Info.stack_frame_valid;
  tExceptionInfo.active_sp = Exception_Info.active_sp;
  tExceptionInfo.exc_return = Exception_Info.exc_return;
  tExceptionInfo.icsr = Exception_Info.icsr;
  tExceptionInfo.hfsr = Exception_Info.hfsr;
  tExceptionInfo.cfsr = Exception_Info.cfsr;
  tExceptionInfo.shcsr = Exception_Info.shcsr;
  tExceptionInfo.dfsr = Exception_Info.dfsr;
  tExceptionInfo.afsr = Exception_Info.afsr;
  tExceptionInfo.mmfar = Exception_Info.mmfar;
  tExceptionInfo.bfar = Exception_Info.bfar;
  tExceptionInfo.stacked = Exception_Info.stacked;

  Bsp_CrashRecord_CaptureFromException(&tExceptionInfo);
}

static void Exception_SetBusFaultAddress(uint32 u32Cfsr)
{
  if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_BFARVALID_MASK)) {
    Exception_Info.address = FC7XXX_SCB->BFAR;
    Exception_Info.address_valid = 1U;
  }
}

static void Exception_SetMemFaultAddress(uint32 u32Cfsr)
{
  if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_MMARVALID_MASK)) {
    Exception_Info.address = FC7XXX_SCB->MMFAR;
    Exception_Info.address_valid = 1U;
  }
}

static const char *Exception_GetBusFaultCause(uint32 u32Cfsr)
{
  if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_IBUSERR_MASK)) {
    return "Instruction bus error";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_PRECISERR_MASK)) {
    return "Precise data bus error";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_IMPRECISERR_MASK)) {
    return "Imprecise data bus error";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_STKERR_MASK)) {
    return "BusFault on exception stacking";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_UNSTKERR_MASK)) {
    return "BusFault on exception unstacking";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_LSPERR_MASK)) {
    return "BusFault on lazy FP state preservation";
  } else {
    return "BusFault";
  }
}

static const char *Exception_GetMemFaultCause(uint32 u32Cfsr)
{
  if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_IACCVIOL_MASK)) {
    return "MPU instruction access violation";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_DACCVIOL_MASK)) {
    return "MPU data access violation";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_MSTKERR_MASK)) {
    return "MemManage fault on exception stacking";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_MUNSTKERR_MASK)) {
    return "MemManage fault on exception unstacking";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_MLSPERR_MASK)) {
    return "MemManage fault on lazy FP state preservation";
  } else {
    return "MemManage fault";
  }
}

static const char *Exception_GetUsageFaultCause(uint32 u32Cfsr)
{
  if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_UNDEFINSTR_MASK)) {
    return "Undefined instruction";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_INVSTATE_MASK)) {
    return "Invalid instruction state";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_INVPC_MASK)) {
    return "Invalid EXC_RETURN value";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_NOCP_MASK)) {
    return "Coprocessor access error";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_UNALIGNED_MASK)) {
    return "Illegal unaligned access";
  } else if (0U != (u32Cfsr & FC7XXX_SCB_CFSR_DIVBYZERO_MASK)) {
    return "Divide by zero";
  } else {
    return "UsageFault";
  }
}

static void Exception_Halt(void) __attribute__((noreturn));
static void Exception_Halt(void)
{
  __asm volatile("dsb");
  __asm volatile("isb");

  while (1) {
    __asm volatile("nop");
  }
}

#if (EXCEPTION_FAULT_ACTION == EXCEPTION_FAULT_ACTION_RESET)
static void Exception_SystemReset(void) __attribute__((noreturn));
static void Exception_SystemReset(void)
{
  uint32 u32Aircr;

  __asm volatile("dsb");
  __asm volatile("isb");

  u32Aircr = FC7XXX_SCB->AIRCR;
  u32Aircr &= ~(uint32)FC7XXX_SCB_AIRCR_VECTKEY_MASK;
  u32Aircr |= (uint32)(FC7XXX_SCB_AIRCR_VECTKEY(0x5FAU) | FC7XXX_SCB_AIRCR_SYSRESETREQ_MASK);
  FC7XXX_SCB->AIRCR = u32Aircr;

  __asm volatile("dsb");
  __asm volatile("isb");

  while (1) {
    __asm volatile("nop");
  }
}
#endif

static void Exception_FaultFinalAction(void) __attribute__((noreturn));
static void Exception_FaultFinalAction(void)
{
#if (EXCEPTION_FAULT_ACTION == EXCEPTION_FAULT_ACTION_RESET)
  Exception_SystemReset();
#else
  Exception_Halt();
#endif
}

__attribute__((naked)) void HardFault_Handler(void)
{
    __asm volatile(" tst   lr, #4 \n"
                   " ite   ne \n"
                   " mrsne r0, psp \n"
                   " mrseq r0, msp \n"
                   " mov   r1, lr \n"
                   " b     HardFault_Process   \n");
}

__attribute__((naked)) void BusFault_Handler(void)
{
    __asm volatile(" tst   lr, #4 \n"
                   " ite   ne \n"
                   " mrsne r0, psp \n"
                   " mrseq r0, msp \n"
                   " mov   r1, lr \n"
                   " b     BusFault_Process \n");
}

void BusFault_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn) __attribute__((noreturn));
void BusFault_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn)
{
  uint32 u32Cfsr = FC7XXX_SCB->CFSR;

  Exception_CaptureContext(BSP_CRASH_RECORD_FAULT_BUSFAULT, u32Cfsr & EXCEPTION_CFSR_BUSFAULT_MASK, "BusFault", Exception_GetBusFaultCause(u32Cfsr), pStackFrame, u32ExcReturn);
  Exception_SetBusFaultAddress(u32Cfsr);
  Exception_CommitCrashRecord();

  Exception_FaultFinalAction();
}

void MemManage_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn) __attribute__((noreturn));
void MemManage_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn)
{
  uint32 u32Cfsr = FC7XXX_SCB->CFSR;

  Exception_CaptureContext(BSP_CRASH_RECORD_FAULT_MEMMANAGE, u32Cfsr & EXCEPTION_CFSR_MEMFAULT_MASK, "MemManage", Exception_GetMemFaultCause(u32Cfsr), pStackFrame, u32ExcReturn);
  Exception_SetMemFaultAddress(u32Cfsr);
  Exception_CommitCrashRecord();
  Exception_FaultFinalAction();
}

void UsageFault_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn) __attribute__((noreturn));
void UsageFault_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn)
{
  uint32 u32Cfsr = FC7XXX_SCB->CFSR;

  Exception_CaptureContext(BSP_CRASH_RECORD_FAULT_USAGEFAULT, u32Cfsr & EXCEPTION_CFSR_USAGEFAULT_MASK, "UsageFault", Exception_GetUsageFaultCause(u32Cfsr), pStackFrame, u32ExcReturn);
  Exception_CommitCrashRecord();
  Exception_FaultFinalAction();
}

void NMI_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn) __attribute__((noreturn));
void NMI_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn)
{
  Exception_CaptureContext(BSP_CRASH_RECORD_FAULT_NMI, 0U, "NMI", "Non-maskable interrupt", pStackFrame, u32ExcReturn);
  Exception_CommitCrashRecord();
  Exception_FaultFinalAction();
}

void HardFault_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn) __attribute__((noreturn));
void HardFault_Process(const Hardfault_StackType *pStackFrame, uint32 u32ExcReturn)
{
  uint32 u32Hfsr = FC7XXX_SCB->HFSR;
  uint32 u32Cfsr = FC7XXX_SCB->CFSR;

  if (0U != (u32Hfsr & FC7XXX_SCB_HFSR_FORCED_MASK)) {
    if (0U != (u32Cfsr & EXCEPTION_CFSR_BUSFAULT_MASK)) {
      BusFault_Process(pStackFrame, u32ExcReturn);
    } else if (0U != (u32Cfsr & EXCEPTION_CFSR_MEMFAULT_MASK)) {
      MemManage_Process(pStackFrame, u32ExcReturn);
    } else if (0U != (u32Cfsr & EXCEPTION_CFSR_USAGEFAULT_MASK)) {
      UsageFault_Process(pStackFrame, u32ExcReturn);
    } else {
      Exception_CaptureContext(BSP_CRASH_RECORD_FAULT_HARDFAULT, u32Hfsr & FC7XXX_SCB_HFSR_FORCED_MASK, "HardFault", "Forced HardFault without CFSR cause", pStackFrame, u32ExcReturn);
    }
  } else if (0U != (u32Hfsr & FC7XXX_SCB_HFSR_VECTTBL_MASK)) {
    Exception_CaptureContext(BSP_CRASH_RECORD_FAULT_HARDFAULT, u32Hfsr & FC7XXX_SCB_HFSR_VECTTBL_MASK, "HardFault", "Vector table read fault", pStackFrame, u32ExcReturn);
  } else if (0U != (u32Hfsr & FC7XXX_SCB_HFSR_DEBUGEVT_MASK)) {
    Exception_CaptureContext(BSP_CRASH_RECORD_FAULT_HARDFAULT, u32Hfsr & FC7XXX_SCB_HFSR_DEBUGEVT_MASK, "HardFault", "Debug event", pStackFrame, u32ExcReturn);
  } else {
    Exception_CaptureContext(BSP_CRASH_RECORD_FAULT_HARDFAULT, 0U, "HardFault", "Unknown", pStackFrame, u32ExcReturn);
  }

  Exception_CommitCrashRecord();
  Exception_FaultFinalAction();
}

__attribute__((naked)) void NMI_Handler(void)
{
    __asm volatile(" tst   lr, #4 \n"
                   " ite   ne \n"
                   " mrsne r0, psp \n"
                   " mrseq r0, msp \n"
                   " mov   r1, lr \n"
                   " b     NMI_Process \n");
}

__attribute__((naked)) void MemManage_Handler(void)
{
    __asm volatile(" tst   lr, #4 \n"
                   " ite   ne \n"
                   " mrsne r0, psp \n"
                   " mrseq r0, msp \n"
                   " mov   r1, lr \n"
                   " b     MemManage_Process \n");
}

__attribute__((naked)) void UsageFault_Handler(void)
{
    __asm volatile(" tst   lr, #4 \n"
                   " ite   ne \n"
                   " mrsne r0, psp \n"
                   " mrseq r0, msp \n"
                   " mov   r1, lr \n"
                   " b     UsageFault_Process \n");
}

void SVC_Handler(void)
{
  while (1);
}

void DebugMon_Handler(void)
{
  while (1);
}

void PendSV_Handler(void)
{
  while (1);
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
