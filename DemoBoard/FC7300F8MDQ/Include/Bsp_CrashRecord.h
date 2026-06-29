#ifndef _BSP_CRASH_RECORD_H_
#define _BSP_CRASH_RECORD_H_

#include "Std_Types.h"

#define BSP_CRASH_RECORD_MAGIC         (0x43525348U)  /* "CRSH" */
#define BSP_CRASH_RECORD_VERSION       (1U)
#define BSP_CRASH_RECORD_STATE_PENDING (1U)

#define BSP_CRASH_RECORD_RESET_SNAPSHOT_MAGIC      (0x52475354U) /* "RGST" */
#define BSP_CRASH_RECORD_RESET_SNAPSHOT_VERSION    (1U)
#define BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT (4U)

#define BSP_CRASH_RECORD_BOOT_FAILURE_MAGIC   (0x4254464CU) /* "BTFL" */
#define BSP_CRASH_RECORD_BOOT_FAILURE_VERSION (1U)

#define BSP_CRASH_RECORD_FAULT_NONE       (0U)
#define BSP_CRASH_RECORD_FAULT_NMI        (1U)
#define BSP_CRASH_RECORD_FAULT_HARDFAULT  (2U)
#define BSP_CRASH_RECORD_FAULT_MEMMANAGE  (3U)
#define BSP_CRASH_RECORD_FAULT_BUSFAULT   (4U)
#define BSP_CRASH_RECORD_FAULT_USAGEFAULT (5U)
#define BSP_CRASH_RECORD_FAULT_SVC        (6U)
#define BSP_CRASH_RECORD_FAULT_DEBUGMON   (7U)
#define BSP_CRASH_RECORD_FAULT_PENDSV     (8U)
#define BSP_CRASH_RECORD_FAULT_DEFAULTISR (9U)

#define BSP_CRASH_RECORD_BOOT_FAILURE_NONE                    (0U)
#define BSP_CRASH_RECORD_BOOT_FAILURE_STCU_WAIT_IDLE_TIMEOUT  (1U)
#define BSP_CRASH_RECORD_BOOT_FAILURE_STCU_ABORT              (2U)
#define BSP_CRASH_RECORD_BOOT_FAILURE_STCU_WAIT_DONE_TIMEOUT  (3U)
#define BSP_CRASH_RECORD_BOOT_FAILURE_STCU_DONE_MASK_MISMATCH (4U)
#define BSP_CRASH_RECORD_BOOT_FAILURE_WDOG_WAIT_RECFG_TIMEOUT (5U)
#define BSP_CRASH_RECORD_BOOT_FAILURE_WDOG_WAIT_UNLOCK_TIMEOUT (6U)
#define BSP_CRASH_RECORD_BOOT_FAILURE_WDOG_FINAL_RECFG_TIMEOUT (7U)
#define BSP_CRASH_RECORD_BOOT_FAILURE_WDOG_UPDATE_DISABLED     (8U)

typedef struct {
  uint32 stacked_r0;  /* R0 stacked by hardware on exception entry. */
  uint32 stacked_r1;  /* R1 stacked by hardware on exception entry. */
  uint32 stacked_r2;  /* R2 stacked by hardware on exception entry. */
  uint32 stacked_r3;  /* R3 stacked by hardware on exception entry. */
  uint32 stacked_r12; /* R12 stacked by hardware on exception entry. */
  uint32 stacked_lr;  /* LR value from the interrupted context. */
  uint32 stacked_pc;  /* PC value at the faulting or next instruction. */
  uint32 stacked_psr; /* xPSR value saved with the exception frame. */
} Bsp_CrashRecord_StackFrameType;

typedef struct {
  uint32 fault_type;                      /* Numeric fault class saved for post-reset analysis. */
  uint32 fault_cause;                     /* Raw fault cause bits selected from HFSR/CFSR. */
  uint32 address;                         /* Fault address when address_valid is set. */
  uint32 address_valid;                   /* Nonzero when address contains a valid MMFAR/BFAR value. */
  uint32 stack_frame_valid;               /* Nonzero when active_sp points to a readable exception frame. */
  uint32 active_sp;                       /* MSP or PSP selected from EXC_RETURN bit 2. */
  uint32 exc_return;                      /* EXC_RETURN value captured from LR on exception entry. */
  uint32 icsr;                            /* Raw Interrupt Control and State Register snapshot. */
  uint32 hfsr;                            /* Raw HardFault Status Register snapshot. */
  uint32 cfsr;                            /* Raw Configurable Fault Status Register snapshot. */
  uint32 shcsr;                           /* Raw System Handler Control and State Register snapshot. */
  uint32 dfsr;                            /* Raw Debug Fault Status Register snapshot. */
  uint32 afsr;                            /* Raw Auxiliary Fault Status Register snapshot. */
  uint32 mmfar;                           /* Raw MemManage Fault Address Register snapshot. */
  uint32 bfar;                            /* Raw BusFault Address Register snapshot. */
  Bsp_CrashRecord_StackFrameType stacked; /* Hardware-stacked interrupted context. */
} Bsp_CrashRecord_ExceptionInfoType;

typedef struct {
  uint32 magic;        /* Valid marker written last by Reset_Handler. */
  uint32 version;      /* Snapshot layout version. */
  uint32 length;       /* Size of this structure in bytes. */
  uint32 reset_srs;    /* RGM_SRS, most recent system reset source. */
  uint32 reset_ssrs;   /* RGM_SSRS before startup clears sticky status. */
  uint32 core_srs[BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT];  /* RGM_Cx_SRS. */
  uint32 core_ssrs[BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT]; /* RGM_Cx_SSRS before clear. */
  uint32 sticky_cleared; /* Nonzero when Reset_Handler cleared captured sticky status. */
} Bsp_CrashRecord_ResetSnapshotType;

typedef struct {
  uint32 magic;              /* Valid marker written last by Reset_Handler. */
  uint32 version;            /* Snapshot layout version. */
  uint32 length;             /* Size of this structure in bytes. */
  uint32 reason;             /* BSP_CRASH_RECORD_BOOT_FAILURE_* value. */
  uint32 reset_srs;          /* RGM_SRS value observed in early startup. */
  uint32 status;             /* Primary status register captured at failure handling. */
  uint32 status_aux;         /* Secondary status register or related value. */
  uint32 config;             /* Configuration register or selected resource. */
  uint32 control;            /* Control register or peripheral base address. */
  uint32 data0;              /* Failure-specific context word 0. */
  uint32 data1;              /* Failure-specific context word 1. */
  uint32 reset_requested;    /* Nonzero when Reset_Handler requested SYSRESETREQ. */
} Bsp_CrashRecord_BootFailureSnapshotType;

typedef struct {
  uint32 magic;                           /* Valid record marker written last. */
  uint16 version;                         /* Crash record layout version. */
  uint16 length;                          /* Size of this record structure in bytes. */
  uint32 crc;                             /* CRC32 over the record excluding magic and crc. */
  uint32 sequence;                        /* Monotonic sequence when a previous valid record exists. */
  uint32 state;                           /* Pending or consumed state for post-reset storage. */
  uint32 fault_type;                      /* Numeric fault class. */
  uint32 fault_cause;                     /* Raw fault cause bits selected from HFSR/CFSR. */
  uint32 address;                         /* Fault address when address_valid is set. */
  uint32 address_valid;                   /* Nonzero when address contains a valid MMFAR/BFAR value. */
  uint32 stack_frame_valid;               /* Nonzero when stacked register data is valid. */
  uint32 core_id;                         /* Core ID that captured the fault. */
  uint32 reset_reason;                    /* Raw reset reason register snapshot for this core. */
  uint32 reset_srs;                       /* RGM_SRS captured during startup after reset. */
  uint32 reset_ssrs;                      /* RGM_SSRS captured before startup sticky clear. */
  uint32 reset_core_srs[BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT];  /* RGM_Cx_SRS startup snapshot. */
  uint32 reset_core_ssrs[BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT]; /* RGM_Cx_SSRS startup snapshot. */
  uint32 reset_sticky_cleared;            /* Nonzero when startup cleared the captured sticky status. */
  uint32 active_sp;                       /* MSP or PSP selected from EXC_RETURN bit 2. */
  uint32 exc_return;                      /* EXC_RETURN value captured from LR on exception entry. */
  uint32 icsr;                            /* Raw ICSR snapshot. */
  uint32 hfsr;                            /* Raw HFSR snapshot. */
  uint32 cfsr;                            /* Raw CFSR snapshot. */
  uint32 shcsr;                           /* Raw SHCSR snapshot. */
  uint32 dfsr;                            /* Raw DFSR snapshot. */
  uint32 afsr;                            /* Raw AFSR snapshot. */
  uint32 mmfar;                           /* Raw MMFAR snapshot. */
  uint32 bfar;                            /* Raw BFAR snapshot. */
  Bsp_CrashRecord_StackFrameType stacked; /* Hardware-stacked interrupted context. */
} Bsp_CrashRecord_RecordType;

extern volatile Bsp_CrashRecord_RecordType Bsp_CrashRecord_Record;
extern volatile Bsp_CrashRecord_ResetSnapshotType Bsp_CrashRecord_ResetSnapshot;
extern volatile Bsp_CrashRecord_BootFailureSnapshotType Bsp_CrashRecord_BootFailureSnapshot;

void Bsp_CrashRecord_CaptureFromException(const Bsp_CrashRecord_ExceptionInfoType *pExceptionInfo);
void Bsp_CrashRecord_MainFunction(void);
uint32 Bsp_CrashRecord_IsPending(void);
Std_ReturnType Bsp_CrashRecord_GetLatest(Bsp_CrashRecord_RecordType *pRecord); /* Copy newest valid record. */
Std_ReturnType Bsp_CrashRecord_GetByIndex(uint16 u16Index, Bsp_CrashRecord_RecordType *pRecord); /* 0 is newest. */
Std_ReturnType Bsp_CrashRecord_GetResetSnapshot(Bsp_CrashRecord_ResetSnapshotType *pSnapshot);
Std_ReturnType Bsp_CrashRecord_GetBootFailureSnapshot(Bsp_CrashRecord_BootFailureSnapshotType *pSnapshot);
void Bsp_CrashRecord_Clear(void); /* Clear RAM record and request persistent clear when storage is enabled. */
void Bsp_CrashRecord_ClearBootFailureSnapshot(void);
const volatile Bsp_CrashRecord_RecordType *Bsp_CrashRecord_GetRecord(void);

#endif /* _BSP_CRASH_RECORD_H_ */
