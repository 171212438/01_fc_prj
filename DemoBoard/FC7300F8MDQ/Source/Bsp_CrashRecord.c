#include "Bsp_CrashRecord.h"
#include "Cpm_Reg.h"
#include "Fee.h"
#include "Fee_Extra.h"

#define BSP_CRASH_RECORD_RGM_SRS_ADDR     (0x40046008U)
#define BSP_CRASH_RECORD_RGM_SSRS_ADDR    (0x40046018U)
#define BSP_CRASH_RECORD_RGM_C0_SRS_ADDR  (0x40046108U)
#define BSP_CRASH_RECORD_RGM_C0_SSRS_ADDR (0x40046114U)
#define BSP_CRASH_RECORD_RGM_C1_SRS_ADDR  (0x40046208U)
#define BSP_CRASH_RECORD_RGM_C1_SSRS_ADDR (0x40046214U)
#define BSP_CRASH_RECORD_RGM_C2_SRS_ADDR  (0x40046308U)
#define BSP_CRASH_RECORD_RGM_C2_SSRS_ADDR (0x40046314U)
#define BSP_CRASH_RECORD_RGM_C3_SRS_ADDR  (0x40046408U)
#define BSP_CRASH_RECORD_RGM_C3_SSRS_ADDR (0x40046414U)
#define BSP_CRASH_RECORD_CRC32_POLY       (0xEDB88320U)

#ifndef BSP_CRASH_RECORD_STORAGE_ENABLE
#if defined(FeeConf_FeeBlockConfiguration_CrashRecordBlock)
#define BSP_CRASH_RECORD_STORAGE_ENABLE  (STD_ON)
#else
#define BSP_CRASH_RECORD_STORAGE_ENABLE  (STD_OFF)
#endif
#endif

#ifndef BSP_CRASH_RECORD_FEE_BLOCK_NUMBER
#if defined(FeeConf_FeeBlockConfiguration_CrashRecordBlock)
#define BSP_CRASH_RECORD_FEE_BLOCK_NUMBER FeeConf_FeeBlockConfiguration_CrashRecordBlock
#else
#define BSP_CRASH_RECORD_FEE_BLOCK_NUMBER (0U)
#endif
#endif

#define BSP_CRASH_RECORD_STORAGE_RETRY_MAX      (3U)
#define BSP_CRASH_RECORD_STORAGE_SLOT_COUNT     (4U)
#define BSP_CRASH_RECORD_STORAGE_BLOCK_MAX_SIZE (1024U)
#define BSP_CRASH_RECORD_INVALID_BLOCK_INDEX    (0xFFFFU)
#define BSP_CRASH_RECORD_SEQUENCE_MAX           (0xFFFFFFFFU)

#if (BSP_CRASH_RECORD_STORAGE_SLOT_COUNT < 2U)
#error "BSP_CRASH_RECORD_STORAGE_SLOT_COUNT must be at least 2"
#endif

typedef enum {
  BSP_CRASH_RECORD_STORAGE_IDLE = 0U,
  BSP_CRASH_RECORD_STORAGE_WAIT_READ,
  BSP_CRASH_RECORD_STORAGE_WAIT_WRITE,
  BSP_CRASH_RECORD_STORAGE_WAIT_CLEAR_WRITE,
  BSP_CRASH_RECORD_STORAGE_STOPPED
} Bsp_CrashRecord_StorageStateType;

volatile Bsp_CrashRecord_RecordType Bsp_CrashRecord_Record __attribute__((section(".crash_noinit"), aligned(32)));
volatile Bsp_CrashRecord_ResetSnapshotType Bsp_CrashRecord_ResetSnapshot __attribute__((section(".crash_noinit"), aligned(32)));
volatile Bsp_CrashRecord_BootFailureSnapshotType Bsp_CrashRecord_BootFailureSnapshot __attribute__((section(".crash_noinit"), aligned(32)));

typedef char Bsp_CrashRecord_ResetSnapshotSizeCheck[(sizeof(Bsp_CrashRecord_ResetSnapshotType) == 56U) ? 1 : -1];
typedef char Bsp_CrashRecord_BootFailureSnapshotSizeCheck[(sizeof(Bsp_CrashRecord_BootFailureSnapshotType) == 48U) ? 1 : -1];

#if (BSP_CRASH_RECORD_STORAGE_ENABLE == STD_ON)
static Bsp_CrashRecord_StorageStateType Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_IDLE;
static uint8 Bsp_CrashRecord_u8StorageRetryCount = 0U;
static uint16 Bsp_CrashRecord_u16StorageBlockSize = 0U;
static uint16 Bsp_CrashRecord_u16StorageSlotCount = 0U;
static uint32 Bsp_CrashRecord_u32StorageCacheValid = 0U;
static uint32 Bsp_CrashRecord_u32StorageClearRequested = 0U;
static uint8 Bsp_CrashRecord_au8StorageBlock[BSP_CRASH_RECORD_STORAGE_BLOCK_MAX_SIZE];
#endif

static void Bsp_CrashRecord_DataSync(void);
static void Bsp_CrashRecord_ClearRamRecord(void);
static void Bsp_CrashRecord_UpdatePendingResetSnapshot(void);

static uint32 Bsp_CrashRecord_ReadReg32(uint32 u32Address)
{
  return *(volatile const uint32 *)u32Address;
}

/* Fill in the current core's 'raw reset reason' value for the crash record.
 * Prefer using the RGM reset snapshot captured early by Reset_Handler; if the
 * snapshot is invalid, then directly read the corresponding core's RGM_Cx_SRS
 * hardware register.
 */
static uint32 Bsp_CrashRecord_ReadResetReason(uint32 u32CoreId)
{
  if ((BSP_CRASH_RECORD_RESET_SNAPSHOT_MAGIC == Bsp_CrashRecord_ResetSnapshot.magic) &&
      (BSP_CRASH_RECORD_RESET_SNAPSHOT_VERSION == Bsp_CrashRecord_ResetSnapshot.version) &&
      ((uint32)sizeof(Bsp_CrashRecord_ResetSnapshotType) == Bsp_CrashRecord_ResetSnapshot.length)) {
    if (u32CoreId < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT) {
      return Bsp_CrashRecord_ResetSnapshot.core_srs[u32CoreId];
    }

    return Bsp_CrashRecord_ResetSnapshot.reset_srs;
  }

  if (0U == u32CoreId) {
    return Bsp_CrashRecord_ReadReg32(BSP_CRASH_RECORD_RGM_C0_SRS_ADDR);
  } else if (1U == u32CoreId) {
    return Bsp_CrashRecord_ReadReg32(BSP_CRASH_RECORD_RGM_C1_SRS_ADDR);
  } else if (2U == u32CoreId) {
    return Bsp_CrashRecord_ReadReg32(BSP_CRASH_RECORD_RGM_C2_SRS_ADDR);
  } else if (3U == u32CoreId) {
    return Bsp_CrashRecord_ReadReg32(BSP_CRASH_RECORD_RGM_C3_SRS_ADDR);
  } else {
    return 0U;
  }
}

/* reset snapshot's structural integrity check:
 * magic   == 0x52475354U  // "RGST"
 * version == 1U
 * length  == sizeof(Bsp_CrashRecord_ResetSnapshotType)
 * If any condition isn't met, return 0U
 */
static uint32 Bsp_CrashRecord_IsValidResetSnapshot(void)
{
  if (BSP_CRASH_RECORD_RESET_SNAPSHOT_MAGIC != Bsp_CrashRecord_ResetSnapshot.magic) {
    return 0U;
  }

  if ((BSP_CRASH_RECORD_RESET_SNAPSHOT_VERSION != Bsp_CrashRecord_ResetSnapshot.version) ||
      ((uint32)sizeof(Bsp_CrashRecord_ResetSnapshotType) != Bsp_CrashRecord_ResetSnapshot.length)) {
    return 0U;
  }

  return 1U;
}

static uint32 Bsp_CrashRecord_IsValidBootFailureSnapshot(void)
{
  if (BSP_CRASH_RECORD_BOOT_FAILURE_MAGIC != Bsp_CrashRecord_BootFailureSnapshot.magic) {
    return 0U;
  }

  if ((BSP_CRASH_RECORD_BOOT_FAILURE_VERSION != Bsp_CrashRecord_BootFailureSnapshot.version) ||
      ((uint32)sizeof(Bsp_CrashRecord_BootFailureSnapshotType) != Bsp_CrashRecord_BootFailureSnapshot.length)) {
    return 0U;
  }

  return 1U;
}

static void Bsp_CrashRecord_ClearRecordResetSnapshot(volatile Bsp_CrashRecord_RecordType *pRecord)
{
  uint8 u8Index;

  pRecord->reset_srs = 0U;
  pRecord->reset_ssrs = 0U;
  pRecord->reset_sticky_cleared = 0U;
  for (u8Index = 0U; u8Index < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT; u8Index++) {
    pRecord->reset_core_srs[u8Index] = 0U;
    pRecord->reset_core_ssrs[u8Index] = 0U;
  }
}

/* Merge Bsp_CrashRecord_ResetSnapshot that Reset_Handler grabbed early into a single crash record;
 * if the snapshot is invalid, just read the current core's raw reset reason and zero out the reset
 * snapshot field in the record.
 * 
 * Connect the exception logs with the RGM reset reasons caught after the exception during startup.
 */
static void Bsp_CrashRecord_ApplyResetSnapshotToRecord(volatile Bsp_CrashRecord_RecordType *pRecord, uint32 u32CoreId)
{
  uint8 u8Index;

  if (0U == Bsp_CrashRecord_IsValidResetSnapshot()) {
    pRecord->reset_reason = Bsp_CrashRecord_ReadResetReason(u32CoreId);
    Bsp_CrashRecord_ClearRecordResetSnapshot(pRecord);
    return;
  }

  pRecord->reset_srs = Bsp_CrashRecord_ResetSnapshot.reset_srs;
  pRecord->reset_ssrs = Bsp_CrashRecord_ResetSnapshot.reset_ssrs;
  pRecord->reset_sticky_cleared = Bsp_CrashRecord_ResetSnapshot.sticky_cleared;
  for (u8Index = 0U; u8Index < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT; u8Index++) {
    pRecord->reset_core_srs[u8Index] = Bsp_CrashRecord_ResetSnapshot.core_srs[u8Index];
    pRecord->reset_core_ssrs[u8Index] = Bsp_CrashRecord_ResetSnapshot.core_ssrs[u8Index];
  }

  if (u32CoreId < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT) {
    pRecord->reset_reason = Bsp_CrashRecord_ResetSnapshot.core_srs[u32CoreId];
  } else {
    pRecord->reset_reason = Bsp_CrashRecord_ResetSnapshot.reset_srs;
  }
}

static uint32 Bsp_CrashRecord_Crc32Byte(uint32 u32Crc, uint8 u8Data)
{
  uint8 u8Index;

  u32Crc ^= (uint32)u8Data;
  for (u8Index = 0U; u8Index < 8U; u8Index++) {
    if (0U != (u32Crc & 1U)) {
      u32Crc = (u32Crc >> 1U) ^ BSP_CRASH_RECORD_CRC32_POLY;
    } else {
      u32Crc >>= 1U;
    }
  }

  return u32Crc;
}

static uint32 Bsp_CrashRecord_Crc32Bytes(uint32 u32Crc, const volatile uint8 *pData, uint32 u32Length)
{
  uint32 u32Index;

  for (u32Index = 0U; u32Index < u32Length; u32Index++) {
    u32Crc = Bsp_CrashRecord_Crc32Byte(u32Crc, pData[u32Index]);
  }

  return u32Crc;
}

static uint32 Bsp_CrashRecord_CalcCrc(const volatile Bsp_CrashRecord_RecordType *pRecord)
{
  uint32 u32Crc = 0xFFFFFFFFU;

  u32Crc = Bsp_CrashRecord_Crc32Bytes(u32Crc, (const volatile uint8 *)&pRecord->version, sizeof(pRecord->version) + sizeof(pRecord->length));
  u32Crc = Bsp_CrashRecord_Crc32Bytes(u32Crc, (const volatile uint8 *)&pRecord->sequence,
                                      (uint32)((const volatile uint8 *)pRecord + sizeof(Bsp_CrashRecord_RecordType) - (const volatile uint8 *)&pRecord->sequence));

  return ~u32Crc;
}

static uint32 Bsp_CrashRecord_IsValidRecord(const volatile Bsp_CrashRecord_RecordType *pRecord)
{
  if (BSP_CRASH_RECORD_MAGIC != pRecord->magic) {
    return 0U;
  }

  if ((BSP_CRASH_RECORD_VERSION != pRecord->version) || ((uint16)sizeof(Bsp_CrashRecord_RecordType) != pRecord->length)) {
    return 0U;
  }

  if (pRecord->crc != Bsp_CrashRecord_CalcCrc(pRecord)) {
    return 0U;
  }

  return 1U;
}

/* Copy an existing crash record from internal storage into the
 * normal Bsp_CrashRecord_RecordType buffer given by the caller.
 * pSrc is const volatile:
 *   - Cannot be modified by this function
 *   - Every field read has to genuinely read from memory, and the compiler can't just treat it as a regular cached variable
 */
static void Bsp_CrashRecord_CopyRecord(Bsp_CrashRecord_RecordType *pDest, const volatile Bsp_CrashRecord_RecordType *pSrc)
{
  uint8 u8Index;

  pDest->magic = pSrc->magic;
  pDest->version = pSrc->version;
  pDest->length = pSrc->length;
  pDest->crc = pSrc->crc;
  pDest->sequence = pSrc->sequence;
  pDest->state = pSrc->state;
  pDest->fault_type = pSrc->fault_type;
  pDest->fault_cause = pSrc->fault_cause;
  pDest->address = pSrc->address;
  pDest->address_valid = pSrc->address_valid;
  pDest->stack_frame_valid = pSrc->stack_frame_valid;
  pDest->core_id = pSrc->core_id;
  pDest->reset_reason = pSrc->reset_reason;
  pDest->reset_srs = pSrc->reset_srs;
  pDest->reset_ssrs = pSrc->reset_ssrs;
  pDest->reset_sticky_cleared = pSrc->reset_sticky_cleared;
  for (u8Index = 0U; u8Index < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT; u8Index++) {
    pDest->reset_core_srs[u8Index] = pSrc->reset_core_srs[u8Index];
    pDest->reset_core_ssrs[u8Index] = pSrc->reset_core_ssrs[u8Index];
  }
  pDest->active_sp = pSrc->active_sp;
  pDest->exc_return = pSrc->exc_return;
  pDest->icsr = pSrc->icsr;
  pDest->hfsr = pSrc->hfsr;
  pDest->cfsr = pSrc->cfsr;
  pDest->shcsr = pSrc->shcsr;
  pDest->dfsr = pSrc->dfsr;
  pDest->afsr = pSrc->afsr;
  pDest->mmfar = pSrc->mmfar;
  pDest->bfar = pSrc->bfar;
  pDest->stacked = pSrc->stacked;
}

#if (BSP_CRASH_RECORD_STORAGE_ENABLE == STD_ON)
static void Bsp_CrashRecord_ClearStorageBuffer(uint16 u16Length)
{
  uint16 u16Index;

  for (u16Index = 0U; u16Index < u16Length; u16Index++) {
    Bsp_CrashRecord_au8StorageBlock[u16Index] = 0U;
  }
}

static uint16 Bsp_CrashRecord_GetStorageBlockSize(void)
{
  uint16 u16BlockIndex;
  uint16 u16BlockSize = 0U;
  uint16 u16SlotCount;

  u16BlockIndex = Fee_Extra_GetBlockIndex((uint16)BSP_CRASH_RECORD_FEE_BLOCK_NUMBER);
  if (BSP_CRASH_RECORD_INVALID_BLOCK_INDEX == u16BlockIndex) {
    return 0U;
  }

  u16BlockSize = Fee_Extra_GetBlockSize(u16BlockIndex);
  if ((u16BlockSize > BSP_CRASH_RECORD_STORAGE_BLOCK_MAX_SIZE) ||
      (u16BlockSize < (2U * (uint16)sizeof(Bsp_CrashRecord_RecordType)))) {
    return 0U;
  }

  u16SlotCount = (uint16)(u16BlockSize / (uint16)sizeof(Bsp_CrashRecord_RecordType));
  if (u16SlotCount > BSP_CRASH_RECORD_STORAGE_SLOT_COUNT) {
    u16SlotCount = BSP_CRASH_RECORD_STORAGE_SLOT_COUNT;
  }

  if (u16SlotCount < 2U) {
    return 0U;
  }

  Bsp_CrashRecord_u16StorageSlotCount = u16SlotCount;
  return u16BlockSize;
}

static Bsp_CrashRecord_RecordType *Bsp_CrashRecord_GetStorageSlot(uint16 u16SlotIndex)
{
  return (Bsp_CrashRecord_RecordType *)&Bsp_CrashRecord_au8StorageBlock[(uint32)u16SlotIndex * sizeof(Bsp_CrashRecord_RecordType)];
}

static Std_ReturnType Bsp_CrashRecord_StartStorageRead(void)
{
  Bsp_CrashRecord_u16StorageBlockSize = Bsp_CrashRecord_GetStorageBlockSize();
  if (0U == Bsp_CrashRecord_u16StorageBlockSize) {
    return (Std_ReturnType)E_NOT_OK;
  }

  Bsp_CrashRecord_ClearStorageBuffer(Bsp_CrashRecord_u16StorageBlockSize);
  Bsp_CrashRecord_u32StorageCacheValid = 0U;
  return Fee_Read((uint16)BSP_CRASH_RECORD_FEE_BLOCK_NUMBER,
                  0U,
                  Bsp_CrashRecord_au8StorageBlock,
                  Bsp_CrashRecord_u16StorageBlockSize);
}

static Std_ReturnType Bsp_CrashRecord_StartStorageClear(void)
{
  Bsp_CrashRecord_u16StorageBlockSize = Bsp_CrashRecord_GetStorageBlockSize();
  if (0U == Bsp_CrashRecord_u16StorageBlockSize) {
    return (Std_ReturnType)E_NOT_OK;
  }

  Bsp_CrashRecord_ClearStorageBuffer(Bsp_CrashRecord_u16StorageBlockSize);
  Bsp_CrashRecord_u32StorageCacheValid = 0U;
  return Fee_Write((uint16)BSP_CRASH_RECORD_FEE_BLOCK_NUMBER, Bsp_CrashRecord_au8StorageBlock);
}

static Std_ReturnType Bsp_CrashRecord_CopyStorageRecordByIndex(uint16 u16Index, Bsp_CrashRecord_RecordType *pRecord)
{
  uint16 u16Rank;
  uint16 u16SlotIndex;
  uint16 u16SelectedSlot = BSP_CRASH_RECORD_INVALID_BLOCK_INDEX;
  uint32 u32SelectedSequence = 0U;
  uint32 u32SequenceLimit = BSP_CRASH_RECORD_SEQUENCE_MAX;
  uint32 u32HasSequenceLimit = 0U;
  uint32 u32Found;
  const volatile Bsp_CrashRecord_RecordType *pSlotRecord;

  if ((0U == Bsp_CrashRecord_u32StorageCacheValid) ||
      (0U != Bsp_CrashRecord_u32StorageClearRequested) ||
      (0U == Bsp_CrashRecord_u16StorageSlotCount) ||
      (u16Index >= Bsp_CrashRecord_u16StorageSlotCount)) {
    return (Std_ReturnType)E_NOT_OK;
  }

  for (u16Rank = 0U; u16Rank <= u16Index; u16Rank++) {
    u32Found = 0U;
    u16SelectedSlot = BSP_CRASH_RECORD_INVALID_BLOCK_INDEX;

    for (u16SlotIndex = 0U; u16SlotIndex < Bsp_CrashRecord_u16StorageSlotCount; u16SlotIndex++) {
      pSlotRecord = Bsp_CrashRecord_GetStorageSlot(u16SlotIndex);
      if ((0U != Bsp_CrashRecord_IsValidRecord(pSlotRecord)) &&
          ((0U == u32HasSequenceLimit) || (pSlotRecord->sequence < u32SequenceLimit))) {
        if ((0U == u32Found) || (pSlotRecord->sequence > u32SelectedSequence)) {
          u32Found = 1U;
          u32SelectedSequence = pSlotRecord->sequence;
          u16SelectedSlot = u16SlotIndex;
        }
      }
    }

    if (0U == u32Found) {
      return (Std_ReturnType)E_NOT_OK;
    }

    u32SequenceLimit = u32SelectedSequence;
    u32HasSequenceLimit = 1U;
  }

  Bsp_CrashRecord_CopyRecord(pRecord, Bsp_CrashRecord_GetStorageSlot(u16SelectedSlot));
  return (Std_ReturnType)E_OK;
}

static uint16 Bsp_CrashRecord_FindNextStorageSlot(uint32 *pNextSequence)
{
  uint16 u16SlotIndex;
  uint16 u16FirstInvalidSlot = BSP_CRASH_RECORD_INVALID_BLOCK_INDEX;
  uint16 u16NewestSlot = 0U;
  uint32 u32MaxSequence = 0U;
  uint32 u32HasValidRecord = 0U;
  const volatile Bsp_CrashRecord_RecordType *pRecord;

  for (u16SlotIndex = 0U; u16SlotIndex < Bsp_CrashRecord_u16StorageSlotCount; u16SlotIndex++) {
    pRecord = Bsp_CrashRecord_GetStorageSlot(u16SlotIndex);
    if (0U != Bsp_CrashRecord_IsValidRecord(pRecord)) {
      if ((0U == u32HasValidRecord) || (pRecord->sequence > u32MaxSequence)) {
        u32HasValidRecord = 1U;
        u32MaxSequence = pRecord->sequence;
        u16NewestSlot = u16SlotIndex;
      }
    } else if (BSP_CRASH_RECORD_INVALID_BLOCK_INDEX == u16FirstInvalidSlot) {
      u16FirstInvalidSlot = u16SlotIndex;
    } else {
      /* No action. */
    }
  }

  *pNextSequence = u32MaxSequence + 1U;

  if (BSP_CRASH_RECORD_INVALID_BLOCK_INDEX != u16FirstInvalidSlot) {
    return u16FirstInvalidSlot;
  }

  u16NewestSlot++;
  if (u16NewestSlot >= Bsp_CrashRecord_u16StorageSlotCount) {
    u16NewestSlot = 0U;
  }

  return u16NewestSlot;
}

static void Bsp_CrashRecord_CopyRamRecordToStorageSlot(Bsp_CrashRecord_RecordType *pRecord, uint32 u32Sequence)
{
  uint8 u8Index;

  Bsp_CrashRecord_UpdatePendingResetSnapshot();

  pRecord->magic = 0U;
  pRecord->version = BSP_CRASH_RECORD_VERSION;
  pRecord->length = (uint16)sizeof(Bsp_CrashRecord_RecordType);
  pRecord->crc = 0U;
  pRecord->sequence = u32Sequence;
  pRecord->state = BSP_CRASH_RECORD_STATE_PENDING;
  pRecord->fault_type = Bsp_CrashRecord_Record.fault_type;
  pRecord->fault_cause = Bsp_CrashRecord_Record.fault_cause;
  pRecord->address = Bsp_CrashRecord_Record.address;
  pRecord->address_valid = Bsp_CrashRecord_Record.address_valid;
  pRecord->stack_frame_valid = Bsp_CrashRecord_Record.stack_frame_valid;
  pRecord->core_id = Bsp_CrashRecord_Record.core_id;
  pRecord->reset_reason = Bsp_CrashRecord_Record.reset_reason;
  pRecord->reset_srs = Bsp_CrashRecord_Record.reset_srs;
  pRecord->reset_ssrs = Bsp_CrashRecord_Record.reset_ssrs;
  pRecord->reset_sticky_cleared = Bsp_CrashRecord_Record.reset_sticky_cleared;
  for (u8Index = 0U; u8Index < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT; u8Index++) {
    pRecord->reset_core_srs[u8Index] = Bsp_CrashRecord_Record.reset_core_srs[u8Index];
    pRecord->reset_core_ssrs[u8Index] = Bsp_CrashRecord_Record.reset_core_ssrs[u8Index];
  }
  pRecord->active_sp = Bsp_CrashRecord_Record.active_sp;
  pRecord->exc_return = Bsp_CrashRecord_Record.exc_return;
  pRecord->icsr = Bsp_CrashRecord_Record.icsr;
  pRecord->hfsr = Bsp_CrashRecord_Record.hfsr;
  pRecord->cfsr = Bsp_CrashRecord_Record.cfsr;
  pRecord->shcsr = Bsp_CrashRecord_Record.shcsr;
  pRecord->dfsr = Bsp_CrashRecord_Record.dfsr;
  pRecord->afsr = Bsp_CrashRecord_Record.afsr;
  pRecord->mmfar = Bsp_CrashRecord_Record.mmfar;
  pRecord->bfar = Bsp_CrashRecord_Record.bfar;
  pRecord->stacked = Bsp_CrashRecord_Record.stacked;

  pRecord->crc = Bsp_CrashRecord_CalcCrc(pRecord);
  Bsp_CrashRecord_DataSync();
  pRecord->magic = BSP_CRASH_RECORD_MAGIC;
  Bsp_CrashRecord_DataSync();
}

static Std_ReturnType Bsp_CrashRecord_PrepareStorageWrite(void)
{
  uint16 u16SlotIndex;
  uint32 u32NextSequence;

  u16SlotIndex = Bsp_CrashRecord_FindNextStorageSlot(&u32NextSequence);
  if (u16SlotIndex >= Bsp_CrashRecord_u16StorageSlotCount) {
    return (Std_ReturnType)E_NOT_OK;
  }

  Bsp_CrashRecord_CopyRamRecordToStorageSlot(Bsp_CrashRecord_GetStorageSlot(u16SlotIndex), u32NextSequence);
  Bsp_CrashRecord_u32StorageCacheValid = 0U;
  return Fee_Write((uint16)BSP_CRASH_RECORD_FEE_BLOCK_NUMBER, Bsp_CrashRecord_au8StorageBlock);
}

static void Bsp_CrashRecord_StorageRetryOrStop(void)
{
  Bsp_CrashRecord_u8StorageRetryCount++;
  if (Bsp_CrashRecord_u8StorageRetryCount >= BSP_CRASH_RECORD_STORAGE_RETRY_MAX) {
    Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_STOPPED;
  } else {
    Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_IDLE;
  }
}
#endif

static void Bsp_CrashRecord_DataSync(void)
{
  __asm volatile("dsb");
  __asm volatile("isb");
}

static void Bsp_CrashRecord_ClearRamRecord(void)
{
  /* Only checks validity based on these fields */
  Bsp_CrashRecord_Record.magic = 0U;
  Bsp_CrashRecord_Record.crc = 0U;
  Bsp_CrashRecord_Record.state = 0U;
  Bsp_CrashRecord_DataSync();
}

/* Copy a validated volatile/internal crash record to a caller-owned normal RAM buffer. */
static void Bsp_CrashRecord_UpdatePendingResetSnapshot(void)
{
  if (0U == Bsp_CrashRecord_IsValidRecord(&Bsp_CrashRecord_Record)) {
    return;
  }

  if (BSP_CRASH_RECORD_STATE_PENDING != Bsp_CrashRecord_Record.state) {
    return;
  }

  if (0U != Bsp_CrashRecord_Record.reset_sticky_cleared) {
    return;
  }

  Bsp_CrashRecord_Record.magic = 0U;
  Bsp_CrashRecord_ApplyResetSnapshotToRecord(&Bsp_CrashRecord_Record, Bsp_CrashRecord_Record.core_id);
  Bsp_CrashRecord_Record.crc = Bsp_CrashRecord_CalcCrc(&Bsp_CrashRecord_Record);
  Bsp_CrashRecord_DataSync();
  Bsp_CrashRecord_Record.magic = BSP_CRASH_RECORD_MAGIC;
  Bsp_CrashRecord_DataSync();
}

/* When an exception happens:
 *   You can only save the fault context and the current raw reset_reason first
 *
 * After an exception, when resetting and restarting:
 *   Reset_Handler can then catch the "RGM reset snapshot that caused this startup"
 *
 * Before the first subsequent query or saving to disk:
 *   UpdatePendingResetSnapshot() merges the reset snapshot into the original crash record
 */
void Bsp_CrashRecord_CaptureFromException(const Bsp_CrashRecord_ExceptionInfoType *pExceptionInfo)
{
  uint32 u32Sequence = 1U;
  uint32 u32CoreId;

  if (NULL_PTR == pExceptionInfo) {
    return;
  }

  if (0U != Bsp_CrashRecord_IsValidRecord(&Bsp_CrashRecord_Record)) {
    u32Sequence = Bsp_CrashRecord_Record.sequence + 1U;
  }

  u32CoreId = (uint32)Cpm_HWA_GetCoreId();

  Bsp_CrashRecord_Record.magic = 0U;
  Bsp_CrashRecord_Record.version = BSP_CRASH_RECORD_VERSION;
  Bsp_CrashRecord_Record.length = (uint16)sizeof(Bsp_CrashRecord_RecordType);
  Bsp_CrashRecord_Record.crc = 0U;
  Bsp_CrashRecord_Record.sequence = u32Sequence;
  Bsp_CrashRecord_Record.state = BSP_CRASH_RECORD_STATE_PENDING;
  Bsp_CrashRecord_Record.fault_type = pExceptionInfo->fault_type;
  Bsp_CrashRecord_Record.fault_cause = pExceptionInfo->fault_cause;
  Bsp_CrashRecord_Record.address = pExceptionInfo->address;
  Bsp_CrashRecord_Record.address_valid = pExceptionInfo->address_valid;
  Bsp_CrashRecord_Record.stack_frame_valid = pExceptionInfo->stack_frame_valid;
  Bsp_CrashRecord_Record.core_id = u32CoreId;
  Bsp_CrashRecord_Record.reset_reason = Bsp_CrashRecord_ReadResetReason(u32CoreId);
  Bsp_CrashRecord_ClearRecordResetSnapshot(&Bsp_CrashRecord_Record);
  Bsp_CrashRecord_Record.active_sp = pExceptionInfo->active_sp;
  Bsp_CrashRecord_Record.exc_return = pExceptionInfo->exc_return;
  Bsp_CrashRecord_Record.icsr = pExceptionInfo->icsr;
  Bsp_CrashRecord_Record.hfsr = pExceptionInfo->hfsr;
  Bsp_CrashRecord_Record.cfsr = pExceptionInfo->cfsr;
  Bsp_CrashRecord_Record.shcsr = pExceptionInfo->shcsr;
  Bsp_CrashRecord_Record.dfsr = pExceptionInfo->dfsr;
  Bsp_CrashRecord_Record.afsr = pExceptionInfo->afsr;
  Bsp_CrashRecord_Record.mmfar = pExceptionInfo->mmfar;
  Bsp_CrashRecord_Record.bfar = pExceptionInfo->bfar;
  Bsp_CrashRecord_Record.stacked = pExceptionInfo->stacked;

  Bsp_CrashRecord_Record.crc = Bsp_CrashRecord_CalcCrc(&Bsp_CrashRecord_Record);
  Bsp_CrashRecord_DataSync();
  Bsp_CrashRecord_Record.magic = BSP_CRASH_RECORD_MAGIC;
  Bsp_CrashRecord_DataSync();
}

uint32 Bsp_CrashRecord_IsPending(void)
{
  Bsp_CrashRecord_UpdatePendingResetSnapshot();

  if (0U == Bsp_CrashRecord_IsValidRecord(&Bsp_CrashRecord_Record)) {
    return 0U;
  }

  return (BSP_CRASH_RECORD_STATE_PENDING == Bsp_CrashRecord_Record.state) ? 1U : 0U;
}

void Bsp_CrashRecord_MainFunction(void)
{
#if (BSP_CRASH_RECORD_STORAGE_ENABLE == STD_ON)
  MemIf_StatusType eStatus;
  MemIf_JobResultType eJobResult;

  if (BSP_CRASH_RECORD_STORAGE_STOPPED == Bsp_CrashRecord_eStorageState) {
    return;
  }

  eStatus = Fee_GetStatus();
  if (MEMIF_IDLE != eStatus) {
    return;
  }

  switch (Bsp_CrashRecord_eStorageState) {
  case BSP_CRASH_RECORD_STORAGE_IDLE:
    if (Bsp_CrashRecord_u8StorageRetryCount >= BSP_CRASH_RECORD_STORAGE_RETRY_MAX) {
      Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_STOPPED;
      break;
    }

    if (0U != Bsp_CrashRecord_u32StorageClearRequested) {
      if ((Std_ReturnType)E_OK == Bsp_CrashRecord_StartStorageClear()) {
        Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_WAIT_CLEAR_WRITE;
      } else {
        Bsp_CrashRecord_StorageRetryOrStop();
      }
      break;
    }

    if (0U == Bsp_CrashRecord_u32StorageCacheValid) {
      if ((Std_ReturnType)E_OK == Bsp_CrashRecord_StartStorageRead()) {
        Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_WAIT_READ;
      } else {
        Bsp_CrashRecord_StorageRetryOrStop();
      }
      break;
    }

    if (0U != Bsp_CrashRecord_IsPending()) {
      if ((Std_ReturnType)E_OK == Bsp_CrashRecord_PrepareStorageWrite()) {
        Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_WAIT_WRITE;
      } else {
        Bsp_CrashRecord_StorageRetryOrStop();
      }
    } else {
      Bsp_CrashRecord_u8StorageRetryCount = 0U;
    }
    break;

  case BSP_CRASH_RECORD_STORAGE_WAIT_READ:
    eJobResult = Fee_GetJobResult();
    if ((MEMIF_JOB_OK != eJobResult) &&
        (MEMIF_BLOCK_INCONSISTENT != eJobResult) &&
        (MEMIF_BLOCK_INVALID != eJobResult)) {
      Bsp_CrashRecord_StorageRetryOrStop();
      break;
    }

    if (MEMIF_JOB_OK != eJobResult) {
      Bsp_CrashRecord_ClearStorageBuffer(Bsp_CrashRecord_u16StorageBlockSize);
    }
    Bsp_CrashRecord_u32StorageCacheValid = 1U;

    if (0U != Bsp_CrashRecord_u32StorageClearRequested) {
      if ((Std_ReturnType)E_OK == Bsp_CrashRecord_StartStorageClear()) {
        Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_WAIT_CLEAR_WRITE;
      } else {
        Bsp_CrashRecord_StorageRetryOrStop();
      }
    } else if (0U != Bsp_CrashRecord_IsPending()) {
      if ((Std_ReturnType)E_OK == Bsp_CrashRecord_PrepareStorageWrite()) {
        Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_WAIT_WRITE;
      } else {
        Bsp_CrashRecord_StorageRetryOrStop();
      }
    } else {
      Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_IDLE;
      Bsp_CrashRecord_u8StorageRetryCount = 0U;
    }
    break;

  case BSP_CRASH_RECORD_STORAGE_WAIT_WRITE:
    eJobResult = Fee_GetJobResult();
    if (MEMIF_JOB_OK == eJobResult) {
      Bsp_CrashRecord_u32StorageCacheValid = 1U;
      Bsp_CrashRecord_ClearRamRecord();
      Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_IDLE;
      Bsp_CrashRecord_u8StorageRetryCount = 0U;
    } else {
      Bsp_CrashRecord_StorageRetryOrStop();
    }
    break;

  case BSP_CRASH_RECORD_STORAGE_WAIT_CLEAR_WRITE:
    eJobResult = Fee_GetJobResult();
    if (MEMIF_JOB_OK == eJobResult) {
      Bsp_CrashRecord_u32StorageClearRequested = 0U;
      Bsp_CrashRecord_u32StorageCacheValid = 1U;
      Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_IDLE;
      Bsp_CrashRecord_u8StorageRetryCount = 0U;
    } else {
      Bsp_CrashRecord_StorageRetryOrStop();
    }
    break;

  default:
    Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_IDLE;
    break;
  }
#else
  /* CrashRecord Fee/NvM block is not generated yet. */
#endif
}

Std_ReturnType Bsp_CrashRecord_GetByIndex(uint16 u16Index, Bsp_CrashRecord_RecordType *pRecord)
{
#if (BSP_CRASH_RECORD_STORAGE_ENABLE == STD_ON)
  uint16 u16StorageIndex = u16Index;
#endif

  if (NULL_PTR == pRecord) {
    return (Std_ReturnType)E_NOT_OK;
  }

  Bsp_CrashRecord_UpdatePendingResetSnapshot();

  if (0U != Bsp_CrashRecord_IsValidRecord(&Bsp_CrashRecord_Record)) {
    if (0U == u16Index) {
      Bsp_CrashRecord_CopyRecord(pRecord, &Bsp_CrashRecord_Record);
      return (Std_ReturnType)E_OK;
    }
#if (BSP_CRASH_RECORD_STORAGE_ENABLE == STD_ON)
    u16StorageIndex = (uint16)(u16Index - 1U);
#endif
  }

#if (BSP_CRASH_RECORD_STORAGE_ENABLE == STD_ON)
  return Bsp_CrashRecord_CopyStorageRecordByIndex(u16StorageIndex, pRecord);
#else
  return (Std_ReturnType)E_NOT_OK;
#endif
}

Std_ReturnType Bsp_CrashRecord_GetLatest(Bsp_CrashRecord_RecordType *pRecord)
{
  return Bsp_CrashRecord_GetByIndex(0U, pRecord);
}

Std_ReturnType Bsp_CrashRecord_GetResetSnapshot(Bsp_CrashRecord_ResetSnapshotType *pSnapshot)
{
  uint8 u8Index;

  if ((NULL_PTR == pSnapshot) || (0U == Bsp_CrashRecord_IsValidResetSnapshot())) {
    return (Std_ReturnType)E_NOT_OK;
  }

  pSnapshot->magic = Bsp_CrashRecord_ResetSnapshot.magic;
  pSnapshot->version = Bsp_CrashRecord_ResetSnapshot.version;
  pSnapshot->length = Bsp_CrashRecord_ResetSnapshot.length;
  pSnapshot->reset_srs = Bsp_CrashRecord_ResetSnapshot.reset_srs;
  pSnapshot->reset_ssrs = Bsp_CrashRecord_ResetSnapshot.reset_ssrs;
  pSnapshot->sticky_cleared = Bsp_CrashRecord_ResetSnapshot.sticky_cleared;
  for (u8Index = 0U; u8Index < BSP_CRASH_RECORD_RESET_SNAPSHOT_CORE_COUNT; u8Index++) {
    pSnapshot->core_srs[u8Index] = Bsp_CrashRecord_ResetSnapshot.core_srs[u8Index];
    pSnapshot->core_ssrs[u8Index] = Bsp_CrashRecord_ResetSnapshot.core_ssrs[u8Index];
  }

  return (Std_ReturnType)E_OK;
}

Std_ReturnType Bsp_CrashRecord_GetBootFailureSnapshot(Bsp_CrashRecord_BootFailureSnapshotType *pSnapshot)
{
  if ((NULL_PTR == pSnapshot) || (0U == Bsp_CrashRecord_IsValidBootFailureSnapshot())) {
    return (Std_ReturnType)E_NOT_OK;
  }

  pSnapshot->magic = Bsp_CrashRecord_BootFailureSnapshot.magic;
  pSnapshot->version = Bsp_CrashRecord_BootFailureSnapshot.version;
  pSnapshot->length = Bsp_CrashRecord_BootFailureSnapshot.length;
  pSnapshot->reason = Bsp_CrashRecord_BootFailureSnapshot.reason;
  pSnapshot->reset_srs = Bsp_CrashRecord_BootFailureSnapshot.reset_srs;
  pSnapshot->stcu_status = Bsp_CrashRecord_BootFailureSnapshot.stcu_status;
  pSnapshot->stcu_done_status = Bsp_CrashRecord_BootFailureSnapshot.stcu_done_status;
  pSnapshot->stcu_sel = Bsp_CrashRecord_BootFailureSnapshot.stcu_sel;
  pSnapshot->stcu_ctrl = Bsp_CrashRecord_BootFailureSnapshot.stcu_ctrl;
  pSnapshot->selected_mask = Bsp_CrashRecord_BootFailureSnapshot.selected_mask;
  pSnapshot->expected_done_mask = Bsp_CrashRecord_BootFailureSnapshot.expected_done_mask;
  pSnapshot->reset_requested = Bsp_CrashRecord_BootFailureSnapshot.reset_requested;

  return (Std_ReturnType)E_OK;
}

void Bsp_CrashRecord_ClearBootFailureSnapshot(void)
{
  Bsp_CrashRecord_BootFailureSnapshot.magic = 0U;
  Bsp_CrashRecord_DataSync();
}

void Bsp_CrashRecord_Clear(void)
{
  Bsp_CrashRecord_ClearRamRecord();
  Bsp_CrashRecord_ClearBootFailureSnapshot();
#if (BSP_CRASH_RECORD_STORAGE_ENABLE == STD_ON)
  Bsp_CrashRecord_u32StorageClearRequested = 1U;
  Bsp_CrashRecord_u32StorageCacheValid = 0U;
  if (BSP_CRASH_RECORD_STORAGE_STOPPED == Bsp_CrashRecord_eStorageState) {
    Bsp_CrashRecord_eStorageState = BSP_CRASH_RECORD_STORAGE_IDLE;
    Bsp_CrashRecord_u8StorageRetryCount = 0U;
  }
#endif
}

const volatile Bsp_CrashRecord_RecordType *Bsp_CrashRecord_GetRecord(void)
{
  return &Bsp_CrashRecord_Record;
}
