#include "Cdd_HsAdcCapture.h"

#include "Adc_Cfg.h"
#include "Adc_HsAdc_Reg.h"
#include "CDD_Dma.h"
#include "Mcal.h"
#include "SchM_Dma.h"

#if ((DMA_CHANNEL2_IRQ != STD_ON) || (DMA_CHANNEL3_IRQ != STD_ON))
  #error "HSADC block capture requires DMA0 channel 2 and channel 3 interrupts"
#endif

#if (DMA_HALT_API != STD_ON)
  #error "HSADC block capture requires Dma_Resume() for HaltOnError recovery"
#endif

#if ((ADC_CFGSET_GROUP_0_CHANNELS != CDD_HSADC_CAPTURE_CHANNEL_COUNT) || \
     (ADC_CFGSET_GROUP_1_CHANNELS != CDD_HSADC_CAPTURE_CHANNEL_COUNT))
  #error "HSADC block capture requires two channels in each generated ADC group"
#endif

#if ((HSADC_ERR_001_WORKAROUND != STD_ON) || (HSADC_SKIP_CHANNELS != 2U))
  #error "Review the HSADC RESULT register start index before disabling the two-channel workaround"
#endif

#if ((CDD_HSADC_CAPTURE_FRAMES_PER_HALF == 0U) || (CDD_HSADC_CAPTURE_FRAMES_PER_RING > 32767U))
  #error "The DMA outer-loop count must be in the supported 1..32767 range"
#endif

#if ((CDD_HSADC_CAPTURE_QUEUE_DEPTH == 0U) || (CDD_HSADC_CAPTURE_QUEUE_DEPTH > 8U))
  #error "The public queue masks support a capture queue depth in the 1..8 range"
#endif

#if ((CDD_HSADC_CAPTURE_HSADC_OVR_MASK != HSADC_INT_STATUS_OVR_MASK) || \
     (CDD_HSADC_CAPTURE_HSADC_TRGERR_MASK != HSADC_INT_STATUS_TRGERR_MASK))
  #error "The public HSADC diagnostic masks must match HSADC_INT_STATUS"
#endif

#define CDD_HSADC_CAPTURE_DMA_INSTANCE          DMA_INSTANCE_0
#define CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL    (2U)
#define CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL    (3U)
#define CDD_HSADC_CAPTURE_HSADC0_UNIT_INDEX     (0U)
#define CDD_HSADC_CAPTURE_HSADC2_UNIT_INDEX     (1U)
#define CDD_HSADC_CAPTURE_UNIT_COUNT            (2U)
#define CDD_HSADC_CAPTURE_HSADC0_READY_BIT      (0x01U)
#define CDD_HSADC_CAPTURE_HSADC2_READY_BIT      (0x02U)
#define CDD_HSADC_CAPTURE_ALL_UNITS_READY_MASK  (0x03U)
#define CDD_HSADC_CAPTURE_RESULT_START_INDEX    (2U)
#define CDD_HSADC_CAPTURE_FIRST_HALF            (0U)
#define CDD_HSADC_CAPTURE_SECOND_HALF           (1U)
#define CDD_HSADC_CAPTURE_DMA_ACTIVE_POLL_LIMIT (10000U)
#define CDD_HSADC_CAPTURE_DMA_IRQ_MASK(channel) (1UL << (channel))
#define CDD_HSADC_CAPTURE_DMA_INTERRUPT_MASK \
  (DMA_CFG_CSR_INTHALF_MASK | DMA_CFG_CSR_INTOUTER_MASK)
#define CDD_HSADC_CAPTURE_HSADC_ERROR_MASK \
  (CDD_HSADC_CAPTURE_HSADC_OVR_MASK | CDD_HSADC_CAPTURE_HSADC_TRGERR_MASK)

typedef enum {
  CDD_HSADC_CAPTURE_QUEUE_FREE = 0,
  CDD_HSADC_CAPTURE_QUEUE_FILLING,
  CDD_HSADC_CAPTURE_QUEUE_READY,
  CDD_HSADC_CAPTURE_QUEUE_ACQUIRED
} Cdd_HsAdcCapture_QueueStateType;

/* The linker maps this wildcard-matched section to non-cacheable SRAM_1. */
static volatile Cdd_HsAdcCapture_FrameType
  s_aaHsAdc0Buffer[CDD_HSADC_CAPTURE_HALF_COUNT][CDD_HSADC_CAPTURE_FRAMES_PER_HALF]
    __attribute__((section(".app_mcal_nocacheable_bss"), aligned(32)));
static volatile Cdd_HsAdcCapture_FrameType
  s_aaHsAdc2Buffer[CDD_HSADC_CAPTURE_HALF_COUNT][CDD_HSADC_CAPTURE_FRAMES_PER_HALF]
    __attribute__((section(".app_mcal_nocacheable_bss"), aligned(32)));

/* CPU-owned queue storage is never a DMA destination. */
static Cdd_HsAdcCapture_FrameType
  s_aaHsAdc0Queue[CDD_HSADC_CAPTURE_QUEUE_DEPTH][CDD_HSADC_CAPTURE_FRAMES_PER_HALF]
    __attribute__((aligned(32)));
static Cdd_HsAdcCapture_FrameType
  s_aaHsAdc2Queue[CDD_HSADC_CAPTURE_QUEUE_DEPTH][CDD_HSADC_CAPTURE_FRAMES_PER_HALF]
    __attribute__((aligned(32)));

static volatile Cdd_HsAdcCapture_StateType s_eState = CDD_HSADC_CAPTURE_STATE_UNINIT;
static volatile Cdd_HsAdcCapture_QueueStateType s_aeQueueState[CDD_HSADC_CAPTURE_QUEUE_DEPTH];
static volatile uint8 s_au8UnitReadyMask[CDD_HSADC_CAPTURE_HALF_COUNT];
static volatile uint8 s_au8ExpectedHalf[CDD_HSADC_CAPTURE_UNIT_COUNT];
static volatile Cdd_HsAdcCapture_SequenceType
  s_au32UnitEventSequence[CDD_HSADC_CAPTURE_UNIT_COUNT];
static volatile Cdd_HsAdcCapture_SequenceType
  s_aau32HalfUnitSequence[CDD_HSADC_CAPTURE_HALF_COUNT][CDD_HSADC_CAPTURE_UNIT_COUNT];
static volatile Cdd_HsAdcCapture_SequenceType s_au32QueueSequence[CDD_HSADC_CAPTURE_QUEUE_DEPTH];
static volatile uint8 s_u8NextQueueIndex;
static volatile Cdd_HsAdcCapture_SequenceType s_u32LastPublishedSequence;
static volatile uint32 s_u32OverrunCount;
static volatile uint32 s_u32UnexpectedIrqCount;
static volatile uint32 s_u32PhaseErrorCount;
static volatile uint32 s_u32DmaErrorCount;
static volatile uint32 s_u32HsAdcHardwareErrorCount;
static volatile uint32 s_u32HsAdc0ErrorStatus;
static volatile uint32 s_u32HsAdc2ErrorStatus;
static volatile uint8 s_u8DmaErrorChannelMask;
static volatile boolean s_bFaultNotificationIssued;

static boolean Cdd_HsAdcCapture_IsCore0(void)
{
  return (Cpm_HWA_GetCoreId() == 0U) ? TRUE : FALSE;
}

static uint8 Cdd_HsAdcCapture_GetAcquiredQueueMask(void)
{
  uint8 u8Mask = 0U;
  uint8 u8QueueIndex;

  for (u8QueueIndex = 0U; u8QueueIndex < CDD_HSADC_CAPTURE_QUEUE_DEPTH; u8QueueIndex++) {
    if (s_aeQueueState[u8QueueIndex] == CDD_HSADC_CAPTURE_QUEUE_ACQUIRED) {
      u8Mask |= (uint8)(1U << u8QueueIndex);
    }
  }

  return u8Mask;
}

static uint8 Cdd_HsAdcCapture_GetReadyQueueMask(void)
{
  uint8 u8Mask = 0U;
  uint8 u8QueueIndex;

  for (u8QueueIndex = 0U; u8QueueIndex < CDD_HSADC_CAPTURE_QUEUE_DEPTH; u8QueueIndex++) {
    if (s_aeQueueState[u8QueueIndex] == CDD_HSADC_CAPTURE_QUEUE_READY) {
      u8Mask |= (uint8)(1U << u8QueueIndex);
    }
  }

  return u8Mask;
}

static void Cdd_HsAdcCapture_ResetRuntimeState(void)
{
  uint8 u8Index;
  uint8 u8UnitIndex;

  for (u8Index = 0U; u8Index < CDD_HSADC_CAPTURE_HALF_COUNT; u8Index++) {
    s_au8UnitReadyMask[u8Index] = 0U;
    for (u8UnitIndex = 0U; u8UnitIndex < CDD_HSADC_CAPTURE_UNIT_COUNT; u8UnitIndex++) {
      s_aau32HalfUnitSequence[u8Index][u8UnitIndex] = 0U;
    }
  }

  for (u8Index = 0U; u8Index < CDD_HSADC_CAPTURE_UNIT_COUNT; u8Index++) {
    s_au8ExpectedHalf[u8Index] = CDD_HSADC_CAPTURE_FIRST_HALF;
    s_au32UnitEventSequence[u8Index] = 0U;
  }

  for (u8Index = 0U; u8Index < CDD_HSADC_CAPTURE_QUEUE_DEPTH; u8Index++) {
    s_aeQueueState[u8Index] = CDD_HSADC_CAPTURE_QUEUE_FREE;
    s_au32QueueSequence[u8Index] = 0U;
  }

  s_u8NextQueueIndex = 0U;
  s_u32LastPublishedSequence = 0U;
  s_u32OverrunCount = 0U;
  s_u32UnexpectedIrqCount = 0U;
  s_u32PhaseErrorCount = 0U;
  s_u32DmaErrorCount = 0U;
  s_u32HsAdcHardwareErrorCount = 0U;
  s_u32HsAdc0ErrorStatus = 0U;
  s_u32HsAdc2ErrorStatus = 0U;
  s_u8DmaErrorChannelMask = 0U;
  s_bFaultNotificationIssued = FALSE;
}

static Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_WaitChannelsIdle(void)
{
  uint32 u32PollCount;

  Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
  Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);

  for (u32PollCount = 0U; u32PollCount < CDD_HSADC_CAPTURE_DMA_ACTIVE_POLL_LIMIT; u32PollCount++) {
    if ((FALSE == Dma_CheckIfTransferActive(CDD_HSADC_CAPTURE_DMA_INSTANCE,
                                            CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL)) &&
        (FALSE == Dma_CheckIfTransferActive(CDD_HSADC_CAPTURE_DMA_INSTANCE,
                                            CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL))) {
      return CDD_HSADC_CAPTURE_OK;
    }
  }

  return CDD_HSADC_CAPTURE_E_DMA;
}

static Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_BuildDmaConfig(
  Dma_ChannelType *pConfig,
  uint32 u32SourceAddress,
  uint32 u32DestinationAddress)
{
  Std_ReturnType eSourceResult;
  Std_ReturnType eDestinationResult;

  pConfig->u32DmaSADDR = u32SourceAddress;
  pConfig->u32DmaDADDR = u32DestinationAddress;
  pConfig->bDmaAutoStopEnable = (boolean)FALSE;
  pConfig->bDmaSrcCircularBufferEn = (boolean)FALSE;
  pConfig->u32DmaSrcCircBufferSize = 0U;
  pConfig->bDmaDestCircularBufferEn = (boolean)FALSE;
  pConfig->u32DmaDestCircBufferSize = 0U;
  pConfig->eDmaSSIZE = DMA_TRAN_SIZE_4B;
  pConfig->eDmaDSIZE = DMA_TRAN_SIZE_4B;
  pConfig->s16SrcDataOffset = (sint16)sizeof(uint32);
  pConfig->s16DestDataOffset = (sint16)sizeof(uint32);
  pConfig->s32DmaSLAST = 0;
  pConfig->s32DmaDLAST = 0;
  pConfig->u32DmaNBYTES = (uint32)sizeof(Cdd_HsAdcCapture_FrameType);
  pConfig->u16DmaOuterLoopCounter = (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_RING;
  pConfig->s32DmaILOFF = -(sint32)sizeof(Cdd_HsAdcCapture_FrameType);
  pConfig->bDmaSILOE = (boolean)TRUE;
  pConfig->bDmaDILOE = (boolean)FALSE;

  eSourceResult = Dma_CalculateSrcChannelLastOffset(pConfig, &pConfig->s32DmaSLAST);
  eDestinationResult = Dma_CalculateDesChannelLastOffset(pConfig, &pConfig->s32DmaDLAST);

  if ((E_OK != eSourceResult) || (E_OK != eDestinationResult)) {
    return CDD_HSADC_CAPTURE_E_DMA;
  }

  if ((pConfig->s32DmaSLAST != -(sint32)sizeof(Cdd_HsAdcCapture_FrameType)) ||
      (pConfig->s32DmaDLAST !=
       -((sint32)sizeof(Cdd_HsAdcCapture_FrameType) * (sint32)CDD_HSADC_CAPTURE_FRAMES_PER_RING))) {
    return CDD_HSADC_CAPTURE_E_HW_CONFIG;
  }

  return CDD_HSADC_CAPTURE_OK;
}

static Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_ConfigureChannel(
  uint8 u8DmaChannel,
  uint32 u32HsAdcBase,
  volatile Cdd_HsAdcCapture_FrameType *pDestination)
{
  const HsAdc_Type *const pHsAdc = (const HsAdc_Type *)u32HsAdcBase;
  Dma_ChannelType tConfig;
  Cdd_HsAdcCapture_ResultType eResult;
  uint16 u16InterruptConfig;

  eResult = Cdd_HsAdcCapture_BuildDmaConfig(
    &tConfig,
    (uint32)&pHsAdc->RESULT[CDD_HSADC_CAPTURE_RESULT_START_INDEX],
    (uint32)pDestination);
  if (CDD_HSADC_CAPTURE_OK != eResult) {
    return eResult;
  }

  if (E_OK != Dma_ConfigChannel(CDD_HSADC_CAPTURE_DMA_INSTANCE, u8DmaChannel, &tConfig)) {
    return CDD_HSADC_CAPTURE_E_DMA;
  }

  Dma_ClearDoneFlag(CDD_HSADC_CAPTURE_DMA_INSTANCE, u8DmaChannel);
  DMA0->CINT = DMA_CINT_CINT(u8DmaChannel);
  MCAL_DATA_SYNC_BARRIER();

  u16InterruptConfig = DMA0->CFG[u8DmaChannel].CSR & CDD_HSADC_CAPTURE_DMA_INTERRUPT_MASK;
  if ((Dma_GetBeginOuterLoopCounter(CDD_HSADC_CAPTURE_DMA_INSTANCE, u8DmaChannel) !=
       (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_RING) ||
      (u16InterruptConfig != CDD_HSADC_CAPTURE_DMA_INTERRUPT_MASK)) {
    return CDD_HSADC_CAPTURE_E_HW_CONFIG;
  }

  return CDD_HSADC_CAPTURE_OK;
}

static Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_PrepareChannels(void)
{
  Cdd_HsAdcCapture_ResultType eResult;

  eResult = Cdd_HsAdcCapture_WaitChannelsIdle();
  if (CDD_HSADC_CAPTURE_OK != eResult) {
    return eResult;
  }

  eResult = Cdd_HsAdcCapture_ConfigureChannel(CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL,
                                              HSADC0_BASE,
                                              &s_aaHsAdc0Buffer[0][0]);
  if (CDD_HSADC_CAPTURE_OK == eResult) {
    eResult = Cdd_HsAdcCapture_ConfigureChannel(CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL,
                                                HSADC2_BASE,
                                                &s_aaHsAdc2Buffer[0][0]);
  }

  if (CDD_HSADC_CAPTURE_OK != eResult) {
    Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
    Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);
  }

  return eResult;
}

static boolean Cdd_HsAdcCapture_IsSequenceBefore(Cdd_HsAdcCapture_SequenceType u32First,
                                                 Cdd_HsAdcCapture_SequenceType u32Second)
{
  return (((sint32)(u32First - u32Second)) < 0) ? TRUE : FALSE;
}

static uint8 Cdd_HsAdcCapture_FindFreeQueueIndex(void)
{
  uint8 u8Offset;
  uint8 u8QueueIndex;

  for (u8Offset = 0U; u8Offset < CDD_HSADC_CAPTURE_QUEUE_DEPTH; u8Offset++) {
    u8QueueIndex = s_u8NextQueueIndex + u8Offset;
    if (u8QueueIndex >= CDD_HSADC_CAPTURE_QUEUE_DEPTH) {
      u8QueueIndex -= CDD_HSADC_CAPTURE_QUEUE_DEPTH;
    }
    if (s_aeQueueState[u8QueueIndex] == CDD_HSADC_CAPTURE_QUEUE_FREE) {
      return u8QueueIndex;
    }
  }

  return CDD_HSADC_CAPTURE_QUEUE_DEPTH;
}

static void Cdd_HsAdcCapture_CopyCompletedHalf(uint8 u8HalfIndex, uint8 u8QueueIndex)
{
  uint16 u16FrameIndex;

  for (u16FrameIndex = 0U;
       u16FrameIndex < (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_HALF;
       u16FrameIndex++) {
    s_aaHsAdc0Queue[u8QueueIndex][u16FrameIndex].u32Se2 =
      s_aaHsAdc0Buffer[u8HalfIndex][u16FrameIndex].u32Se2;
    s_aaHsAdc0Queue[u8QueueIndex][u16FrameIndex].u32Se3 =
      s_aaHsAdc0Buffer[u8HalfIndex][u16FrameIndex].u32Se3;
    s_aaHsAdc2Queue[u8QueueIndex][u16FrameIndex].u32Se2 =
      s_aaHsAdc2Buffer[u8HalfIndex][u16FrameIndex].u32Se2;
    s_aaHsAdc2Queue[u8QueueIndex][u16FrameIndex].u32Se3 =
      s_aaHsAdc2Buffer[u8HalfIndex][u16FrameIndex].u32Se3;
  }
}

static boolean Cdd_HsAdcCapture_IsSourceHalfStable(uint8 u8HalfIndex)
{
  uint16 u16Dma2CurrentOuterLoop = Dma_GetCurrentOuterLoopCounter(
    CDD_HSADC_CAPTURE_DMA_INSTANCE,
    CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
  uint16 u16Dma3CurrentOuterLoop = Dma_GetCurrentOuterLoopCounter(
    CDD_HSADC_CAPTURE_DMA_INSTANCE,
    CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);

  if (u8HalfIndex == CDD_HSADC_CAPTURE_FIRST_HALF) {
    return ((u16Dma2CurrentOuterLoop > 0U) &&
            (u16Dma2CurrentOuterLoop <= (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_HALF) &&
            (u16Dma3CurrentOuterLoop > 0U) &&
            (u16Dma3CurrentOuterLoop <= (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_HALF))
             ? TRUE
             : FALSE;
  }

  return ((((u16Dma2CurrentOuterLoop == 0U) ||
            (u16Dma2CurrentOuterLoop >= (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_HALF)) &&
           (u16Dma2CurrentOuterLoop <= (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_RING)) &&
          (((u16Dma3CurrentOuterLoop == 0U) ||
            (u16Dma3CurrentOuterLoop >= (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_HALF)) &&
           (u16Dma3CurrentOuterLoop <= (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_RING)))
           ? TRUE
           : FALSE;
}

static uint8 Cdd_HsAdcCapture_GetObservedHalf(uint16 u16CurrentOuterLoop)
{
  if ((u16CurrentOuterLoop > 0U) &&
      (u16CurrentOuterLoop <= (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_HALF)) {
    return CDD_HSADC_CAPTURE_FIRST_HALF;
  }

  if ((u16CurrentOuterLoop == 0U) ||
      ((u16CurrentOuterLoop > (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_HALF) &&
       (u16CurrentOuterLoop <= (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_RING))) {
    return CDD_HSADC_CAPTURE_SECOND_HALF;
  }

  return CDD_HSADC_CAPTURE_HALF_COUNT;
}

static void Cdd_HsAdcCapture_DiscardPendingPairLocked(void)
{
  uint8 u8HalfIndex;
  uint8 u8UnitIndex;

  for (u8HalfIndex = 0U; u8HalfIndex < CDD_HSADC_CAPTURE_HALF_COUNT; u8HalfIndex++) {
    s_au8UnitReadyMask[u8HalfIndex] = 0U;
    for (u8UnitIndex = 0U; u8UnitIndex < CDD_HSADC_CAPTURE_UNIT_COUNT; u8UnitIndex++) {
      s_aau32HalfUnitSequence[u8HalfIndex][u8UnitIndex] = 0U;
    }
  }
}

static void Cdd_HsAdcCapture_DiscardFillingQueuesLocked(void)
{
  uint8 u8QueueIndex;

  for (u8QueueIndex = 0U; u8QueueIndex < CDD_HSADC_CAPTURE_QUEUE_DEPTH; u8QueueIndex++) {
    if (s_aeQueueState[u8QueueIndex] == CDD_HSADC_CAPTURE_QUEUE_FILLING) {
      s_aeQueueState[u8QueueIndex] = CDD_HSADC_CAPTURE_QUEUE_FREE;
    }
  }
}

static void Cdd_HsAdcCapture_LatchPhaseErrorLocked(void)
{
  Cdd_HsAdcCapture_DiscardPendingPairLocked();

  s_u32UnexpectedIrqCount++;
  s_u32PhaseErrorCount++;
  s_eState = CDD_HSADC_CAPTURE_STATE_ERROR;
}

static void Cdd_HsAdcCapture_NotifyFaultOnce(void)
{
  boolean bNotifyApplication = FALSE;

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  if ((s_eState == CDD_HSADC_CAPTURE_STATE_ERROR) &&
      (FALSE == s_bFaultNotificationIssued)) {
    s_bFaultNotificationIssued = TRUE;
    bNotifyApplication = TRUE;
  }
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  if (TRUE == bNotifyApplication) {
    Cdd_HsAdcCapture_FaultNotification();
  }
}

static void Cdd_HsAdcCapture_LatchDmaError(uint8 u8ErrorChannelMask)
{
  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  Cdd_HsAdcCapture_DiscardPendingPairLocked();
  Cdd_HsAdcCapture_DiscardFillingQueuesLocked();
  s_u8DmaErrorChannelMask |= u8ErrorChannelMask;
  s_u32DmaErrorCount++;
  s_eState = CDD_HSADC_CAPTURE_STATE_ERROR;
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
  Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);
  Cdd_HsAdcCapture_NotifyFaultOnce();
}

static uint32 Cdd_HsAdcCapture_ReadHardwareErrorStatus(const HsAdc_Type *pHsAdc)
{
  return pHsAdc->INT_STATUS & CDD_HSADC_CAPTURE_HSADC_ERROR_MASK;
}

static void Cdd_HsAdcCapture_ClearHardwareErrorStatus(HsAdc_Type *pHsAdc,
                                                       uint32 u32ErrorStatus)
{
  /* OVR and TRGERR are write-one-to-clear; never echo unrelated status bits. */
  pHsAdc->INT_STATUS = u32ErrorStatus & CDD_HSADC_CAPTURE_HSADC_ERROR_MASK;
}

static Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_ResetHardwareErrorStatus(void)
{
  HsAdc_Type *const pHsAdc0 = (HsAdc_Type *)HSADC0_BASE;
  HsAdc_Type *const pHsAdc2 = (HsAdc_Type *)HSADC2_BASE;

  Cdd_HsAdcCapture_ClearHardwareErrorStatus(pHsAdc0, CDD_HSADC_CAPTURE_HSADC_ERROR_MASK);
  Cdd_HsAdcCapture_ClearHardwareErrorStatus(pHsAdc2, CDD_HSADC_CAPTURE_HSADC_ERROR_MASK);
  MCAL_DATA_SYNC_BARRIER();

  return ((0U == Cdd_HsAdcCapture_ReadHardwareErrorStatus(pHsAdc0)) &&
          (0U == Cdd_HsAdcCapture_ReadHardwareErrorStatus(pHsAdc2)))
           ? CDD_HSADC_CAPTURE_OK
           : CDD_HSADC_CAPTURE_E_HW_CONFIG;
}

static boolean Cdd_HsAdcCapture_CheckAndLatchHardwareErrors(void)
{
  HsAdc_Type *const pHsAdc0 = (HsAdc_Type *)HSADC0_BASE;
  HsAdc_Type *const pHsAdc2 = (HsAdc_Type *)HSADC2_BASE;
  const uint32 u32HsAdc0ErrorStatus = Cdd_HsAdcCapture_ReadHardwareErrorStatus(pHsAdc0);
  const uint32 u32HsAdc2ErrorStatus = Cdd_HsAdcCapture_ReadHardwareErrorStatus(pHsAdc2);
  boolean bLatchError = FALSE;

  if ((u32HsAdc0ErrorStatus | u32HsAdc2ErrorStatus) == 0U) {
    return FALSE;
  }

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  s_u32HsAdc0ErrorStatus |= u32HsAdc0ErrorStatus;
  s_u32HsAdc2ErrorStatus |= u32HsAdc2ErrorStatus;
  if (s_eState == CDD_HSADC_CAPTURE_STATE_RUNNING) {
    Cdd_HsAdcCapture_DiscardPendingPairLocked();
    Cdd_HsAdcCapture_DiscardFillingQueuesLocked();
    s_u32HsAdcHardwareErrorCount++;
    s_eState = CDD_HSADC_CAPTURE_STATE_ERROR;
    bLatchError = TRUE;
  }
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  if (TRUE == bLatchError) {
    Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
    Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);
  }

  Cdd_HsAdcCapture_ClearHardwareErrorStatus(pHsAdc0, u32HsAdc0ErrorStatus);
  Cdd_HsAdcCapture_ClearHardwareErrorStatus(pHsAdc2, u32HsAdc2ErrorStatus);
  MCAL_DATA_SYNC_BARRIER();

  if (TRUE == bLatchError) {
    Cdd_HsAdcCapture_NotifyFaultOnce();
  }

  return TRUE;
}

static Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_RecoverDmaHalt(void)
{
  Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
  Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);
  Dma_Resume(CDD_HSADC_CAPTURE_DMA_INSTANCE);
  MCAL_DATA_SYNC_BARRIER();

  return ((DMA0->CR & DMA_CR_HALT_MASK) == 0U) ? CDD_HSADC_CAPTURE_OK
                                               : CDD_HSADC_CAPTURE_E_DMA;
}

static void Cdd_HsAdcCapture_RecordUnexpectedInterrupt(void)
{
  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  s_u32UnexpectedIrqCount++;
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
}

static boolean Cdd_HsAdcCapture_AcknowledgeDmaInterrupt(uint8 u8DmaChannel,
                                                        uint16 *pCurrentOuterLoop)
{
  boolean bInterruptPending = FALSE;

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_05();
  if ((DMA0->INT & CDD_HSADC_CAPTURE_DMA_IRQ_MASK(u8DmaChannel)) != 0U) {
    *pCurrentOuterLoop = Dma_GetCurrentOuterLoopCounter(CDD_HSADC_CAPTURE_DMA_INSTANCE,
                                                        u8DmaChannel);
    DMA0->CINT = DMA_CINT_CINT(u8DmaChannel);
    bInterruptPending = TRUE;
  }
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_05();

  MCAL_DATA_SYNC_BARRIER();
  return bInterruptPending;
}

static void Cdd_HsAdcCapture_RecordDmaPhase(uint8 u8UnitIndex,
                                            uint8 u8UnitReadyBit,
                                            uint16 u16CurrentOuterLoop)
{
  uint8 u8HalfIndex;
  uint8 u8ObservedHalfIndex;
  uint8 u8OtherHalfIndex;
  uint8 u8ReadyMask;
  uint8 u8QueueIndex = CDD_HSADC_CAPTURE_QUEUE_DEPTH;
  boolean bCopyBlock = FALSE;
  boolean bNotifyConsumer = FALSE;
  boolean bLatchError = FALSE;

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  if (s_eState == CDD_HSADC_CAPTURE_STATE_RUNNING) {
    u8HalfIndex = s_au8ExpectedHalf[u8UnitIndex];
    u8ObservedHalfIndex = Cdd_HsAdcCapture_GetObservedHalf(u16CurrentOuterLoop);
    u8OtherHalfIndex = (u8HalfIndex == CDD_HSADC_CAPTURE_FIRST_HALF)
                         ? CDD_HSADC_CAPTURE_SECOND_HALF
                         : CDD_HSADC_CAPTURE_FIRST_HALF;
    u8ReadyMask = s_au8UnitReadyMask[u8HalfIndex];

    if ((u8ObservedHalfIndex != u8HalfIndex) ||
        (s_au8UnitReadyMask[u8OtherHalfIndex] != 0U) ||
        ((u8ReadyMask & u8UnitReadyBit) != 0U)) {
      Cdd_HsAdcCapture_LatchPhaseErrorLocked();
      bLatchError = TRUE;
    } else {
      s_au8ExpectedHalf[u8UnitIndex] = u8OtherHalfIndex;
      s_au32UnitEventSequence[u8UnitIndex]++;
      s_aau32HalfUnitSequence[u8HalfIndex][u8UnitIndex] =
        s_au32UnitEventSequence[u8UnitIndex];
      u8ReadyMask |= u8UnitReadyBit;
      s_au8UnitReadyMask[u8HalfIndex] = u8ReadyMask;
      if (u8ReadyMask == CDD_HSADC_CAPTURE_ALL_UNITS_READY_MASK) {
        if (s_aau32HalfUnitSequence[u8HalfIndex][CDD_HSADC_CAPTURE_HSADC0_UNIT_INDEX] !=
            s_aau32HalfUnitSequence[u8HalfIndex][CDD_HSADC_CAPTURE_HSADC2_UNIT_INDEX]) {
          Cdd_HsAdcCapture_LatchPhaseErrorLocked();
          bLatchError = TRUE;
        } else {
          s_au8UnitReadyMask[u8HalfIndex] = 0U;
          s_aau32HalfUnitSequence[u8HalfIndex][CDD_HSADC_CAPTURE_HSADC0_UNIT_INDEX] = 0U;
          s_aau32HalfUnitSequence[u8HalfIndex][CDD_HSADC_CAPTURE_HSADC2_UNIT_INDEX] = 0U;
          u8QueueIndex = Cdd_HsAdcCapture_FindFreeQueueIndex();
          if (u8QueueIndex < CDD_HSADC_CAPTURE_QUEUE_DEPTH) {
            s_aeQueueState[u8QueueIndex] = CDD_HSADC_CAPTURE_QUEUE_FILLING;
            bCopyBlock = TRUE;
          } else {
            s_u32OverrunCount++;
            s_eState = CDD_HSADC_CAPTURE_STATE_ERROR;
            bLatchError = TRUE;
          }
        }
      }
    }
  } else {
    s_u32UnexpectedIrqCount++;
  }
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  if (TRUE == bCopyBlock) {
    MCAL_DATA_SYNC_BARRIER();
    Cdd_HsAdcCapture_CopyCompletedHalf(u8HalfIndex, u8QueueIndex);
    MCAL_DATA_SYNC_BARRIER();

    if (TRUE == Cdd_HsAdcCapture_CheckAndLatchHardwareErrors()) {
      /* The filling queue was discarded by the fail-stop path. */
    } else if (TRUE == Cdd_HsAdcCapture_IsSourceHalfStable(u8HalfIndex)) {
      SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
      if ((s_eState == CDD_HSADC_CAPTURE_STATE_RUNNING) &&
          (s_aeQueueState[u8QueueIndex] == CDD_HSADC_CAPTURE_QUEUE_FILLING)) {
        s_u32LastPublishedSequence++;
        s_au32QueueSequence[u8QueueIndex] = s_u32LastPublishedSequence;
        s_aeQueueState[u8QueueIndex] = CDD_HSADC_CAPTURE_QUEUE_READY;
        bNotifyConsumer = TRUE;
        s_u8NextQueueIndex = u8QueueIndex + 1U;
        if (s_u8NextQueueIndex >= CDD_HSADC_CAPTURE_QUEUE_DEPTH) {
          s_u8NextQueueIndex = 0U;
        }
      } else {
        s_aeQueueState[u8QueueIndex] = CDD_HSADC_CAPTURE_QUEUE_FREE;
      }
      SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
    } else {
      SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
      s_aeQueueState[u8QueueIndex] = CDD_HSADC_CAPTURE_QUEUE_FREE;
      s_u32OverrunCount++;
      s_eState = CDD_HSADC_CAPTURE_STATE_ERROR;
      SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
      bLatchError = TRUE;
    }
  }

  if (TRUE == bNotifyConsumer) {
    Cdd_HsAdcCapture_BlockPairNotification();
  }

  if (TRUE == bLatchError) {
    Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
    Dma_DisableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);
    Cdd_HsAdcCapture_NotifyFaultOnce();
  }
}

Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_Init(void)
{
  Cdd_HsAdcCapture_ResultType eResult;
  Cdd_HsAdcCapture_StateType eCurrentState;
  uint8 u8AcquiredMask;
  uint8 u8DmaErrorChannelMask;

  if (FALSE == Cdd_HsAdcCapture_IsCore0()) {
    return CDD_HSADC_CAPTURE_E_WRONG_CORE;
  }

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  eCurrentState = s_eState;
  u8AcquiredMask = Cdd_HsAdcCapture_GetAcquiredQueueMask();
  u8DmaErrorChannelMask = s_u8DmaErrorChannelMask;
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  if (eCurrentState == CDD_HSADC_CAPTURE_STATE_RUNNING) {
    return CDD_HSADC_CAPTURE_E_STATE;
  }
  if (u8AcquiredMask != 0U) {
    return CDD_HSADC_CAPTURE_E_BUSY;
  }

  eResult = (u8DmaErrorChannelMask != 0U) ? Cdd_HsAdcCapture_RecoverDmaHalt()
                                         : CDD_HSADC_CAPTURE_OK;
  if (eResult == CDD_HSADC_CAPTURE_OK) {
    eResult = Cdd_HsAdcCapture_PrepareChannels();
  }
  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  if (eResult == CDD_HSADC_CAPTURE_OK) {
    Cdd_HsAdcCapture_ResetRuntimeState();
  }
  s_eState = (eResult == CDD_HSADC_CAPTURE_OK) ? CDD_HSADC_CAPTURE_STATE_READY
                                               : CDD_HSADC_CAPTURE_STATE_ERROR;
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  return eResult;
}

Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_Start(void)
{
  Cdd_HsAdcCapture_ResultType eResult;
  Cdd_HsAdcCapture_StateType eCurrentState;
  uint8 u8AcquiredMask;

  if (FALSE == Cdd_HsAdcCapture_IsCore0()) {
    return CDD_HSADC_CAPTURE_E_WRONG_CORE;
  }

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  eCurrentState = s_eState;
  u8AcquiredMask = Cdd_HsAdcCapture_GetAcquiredQueueMask();
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  if (eCurrentState == CDD_HSADC_CAPTURE_STATE_UNINIT) {
    return CDD_HSADC_CAPTURE_E_UNINIT;
  }
  if (eCurrentState != CDD_HSADC_CAPTURE_STATE_READY) {
    return CDD_HSADC_CAPTURE_E_STATE;
  }
  if (u8AcquiredMask != 0U) {
    return CDD_HSADC_CAPTURE_E_BUSY;
  }

  eResult = Cdd_HsAdcCapture_PrepareChannels();
  if (CDD_HSADC_CAPTURE_OK == eResult) {
    eResult = Cdd_HsAdcCapture_ResetHardwareErrorStatus();
  }
  if (CDD_HSADC_CAPTURE_OK != eResult) {
    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
    s_eState = CDD_HSADC_CAPTURE_STATE_ERROR;
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
    return eResult;
  }

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  Cdd_HsAdcCapture_ResetRuntimeState();
  s_eState = CDD_HSADC_CAPTURE_STATE_RUNNING;
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  MCAL_DATA_SYNC_BARRIER();
  Dma_EnableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
  Dma_EnableHwRequest(CDD_HSADC_CAPTURE_DMA_INSTANCE, CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);

  return CDD_HSADC_CAPTURE_OK;
}

Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_Stop(void)
{
  Cdd_HsAdcCapture_ResultType eResult;
  Cdd_HsAdcCapture_StateType eCurrentState;

  if (FALSE == Cdd_HsAdcCapture_IsCore0()) {
    return CDD_HSADC_CAPTURE_E_WRONG_CORE;
  }

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  eCurrentState = s_eState;
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  if (eCurrentState == CDD_HSADC_CAPTURE_STATE_UNINIT) {
    return CDD_HSADC_CAPTURE_E_UNINIT;
  }
  if (eCurrentState == CDD_HSADC_CAPTURE_STATE_READY) {
    return CDD_HSADC_CAPTURE_OK;
  }
  if (eCurrentState != CDD_HSADC_CAPTURE_STATE_RUNNING) {
    return CDD_HSADC_CAPTURE_E_STATE;
  }

  eResult = Cdd_HsAdcCapture_WaitChannelsIdle();
  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  s_eState = (eResult == CDD_HSADC_CAPTURE_OK) ? CDD_HSADC_CAPTURE_STATE_READY
                                               : CDD_HSADC_CAPTURE_STATE_ERROR;
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  return eResult;
}

Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_AcquireBlockPair(
  Cdd_HsAdcCapture_BlockPairType *pBlockPair)
{
  uint8 u8QueueIndex;
  uint8 u8SelectedQueueIndex = CDD_HSADC_CAPTURE_QUEUE_DEPTH;
  Cdd_HsAdcCapture_ResultType eResult = CDD_HSADC_CAPTURE_OK;

  if (NULL_PTR == pBlockPair) {
    return CDD_HSADC_CAPTURE_E_PARAM_POINTER;
  }
  if (FALSE == Cdd_HsAdcCapture_IsCore0()) {
    return CDD_HSADC_CAPTURE_E_WRONG_CORE;
  }

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  if (s_eState == CDD_HSADC_CAPTURE_STATE_UNINIT) {
    eResult = CDD_HSADC_CAPTURE_E_UNINIT;
  } else if (s_eState == CDD_HSADC_CAPTURE_STATE_ERROR) {
    eResult = CDD_HSADC_CAPTURE_E_STATE;
  } else {
    for (u8QueueIndex = 0U; u8QueueIndex < CDD_HSADC_CAPTURE_QUEUE_DEPTH; u8QueueIndex++) {
      if (s_aeQueueState[u8QueueIndex] == CDD_HSADC_CAPTURE_QUEUE_READY) {
        if ((u8SelectedQueueIndex >= CDD_HSADC_CAPTURE_QUEUE_DEPTH) ||
            (TRUE == Cdd_HsAdcCapture_IsSequenceBefore(
                       s_au32QueueSequence[u8QueueIndex],
                       s_au32QueueSequence[u8SelectedQueueIndex]))) {
          u8SelectedQueueIndex = u8QueueIndex;
        }
      }
    }

    if (u8SelectedQueueIndex < CDD_HSADC_CAPTURE_QUEUE_DEPTH) {
      s_aeQueueState[u8SelectedQueueIndex] = CDD_HSADC_CAPTURE_QUEUE_ACQUIRED;
      MCAL_DATA_SYNC_BARRIER();
      pBlockPair->pHsAdc0Frames = &s_aaHsAdc0Queue[u8SelectedQueueIndex][0];
      pBlockPair->pHsAdc2Frames = &s_aaHsAdc2Queue[u8SelectedQueueIndex][0];
      pBlockPair->u16FrameCount = (uint16)CDD_HSADC_CAPTURE_FRAMES_PER_HALF;
      pBlockPair->u8QueueIndex = u8SelectedQueueIndex;
      pBlockPair->u32Sequence = s_au32QueueSequence[u8SelectedQueueIndex];
    } else {
      eResult = CDD_HSADC_CAPTURE_E_NO_BLOCK;
    }
  }
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  return eResult;
}

Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_ReleaseBlockPair(
  Cdd_HsAdcCapture_SequenceType u32Sequence)
{
  Cdd_HsAdcCapture_ResultType eResult = CDD_HSADC_CAPTURE_E_SEQUENCE;
  uint8 u8QueueIndex;

  if (FALSE == Cdd_HsAdcCapture_IsCore0()) {
    return CDD_HSADC_CAPTURE_E_WRONG_CORE;
  }

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  if (s_eState == CDD_HSADC_CAPTURE_STATE_UNINIT) {
    eResult = CDD_HSADC_CAPTURE_E_UNINIT;
  } else {
    for (u8QueueIndex = 0U; u8QueueIndex < CDD_HSADC_CAPTURE_QUEUE_DEPTH; u8QueueIndex++) {
      if ((s_aeQueueState[u8QueueIndex] == CDD_HSADC_CAPTURE_QUEUE_ACQUIRED) &&
          (s_au32QueueSequence[u8QueueIndex] == u32Sequence)) {
        s_aeQueueState[u8QueueIndex] = CDD_HSADC_CAPTURE_QUEUE_FREE;
        eResult = CDD_HSADC_CAPTURE_OK;
        break;
      }
    }
  }
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  return eResult;
}

Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_GetStatus(Cdd_HsAdcCapture_StatusType *pStatus)
{
  Cdd_HsAdcCapture_StateType eCurrentState;

  if (NULL_PTR == pStatus) {
    return CDD_HSADC_CAPTURE_E_PARAM_POINTER;
  }
  if (FALSE == Cdd_HsAdcCapture_IsCore0()) {
    return CDD_HSADC_CAPTURE_E_WRONG_CORE;
  }

  SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
  eCurrentState = s_eState;
  pStatus->eState = eCurrentState;
  pStatus->u32LastPublishedSequence = s_u32LastPublishedSequence;
  pStatus->u32OverrunCount = s_u32OverrunCount;
  pStatus->u32UnexpectedIrqCount = s_u32UnexpectedIrqCount;
  pStatus->u32PhaseErrorCount = s_u32PhaseErrorCount;
  pStatus->u32DmaErrorCount = s_u32DmaErrorCount;
  pStatus->u32HsAdcHardwareErrorCount = s_u32HsAdcHardwareErrorCount;
  pStatus->u32HsAdc0ErrorStatus = s_u32HsAdc0ErrorStatus;
  pStatus->u32HsAdc2ErrorStatus = s_u32HsAdc2ErrorStatus;
  pStatus->u8DmaErrorChannelMask = s_u8DmaErrorChannelMask;
  pStatus->u8ReadyQueueMask = Cdd_HsAdcCapture_GetReadyQueueMask();
  pStatus->u8AcquiredQueueMask = Cdd_HsAdcCapture_GetAcquiredQueueMask();
  SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

  if (eCurrentState == CDD_HSADC_CAPTURE_STATE_UNINIT) {
    pStatus->u16Dma2CurrentOuterLoop = 0U;
    pStatus->u16Dma3CurrentOuterLoop = 0U;
    return CDD_HSADC_CAPTURE_E_UNINIT;
  }

  pStatus->u16Dma2CurrentOuterLoop = Dma_GetCurrentOuterLoopCounter(
    CDD_HSADC_CAPTURE_DMA_INSTANCE,
    CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL);
  pStatus->u16Dma3CurrentOuterLoop = Dma_GetCurrentOuterLoopCounter(
    CDD_HSADC_CAPTURE_DMA_INSTANCE,
    CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL);

  return CDD_HSADC_CAPTURE_OK;
}

void Cdd_HsAdcCapture_MainFunction(void)
{
  if ((TRUE == Cdd_HsAdcCapture_IsCore0()) &&
      (s_eState == CDD_HSADC_CAPTURE_STATE_RUNNING)) {
    (void)Cdd_HsAdcCapture_CheckAndLatchHardwareErrors();
  }
}

void Cdd_HsAdcCapture_Dma2IrqHandler(void)
{
  uint16 u16CurrentOuterLoop = 0U;

  if ((TRUE == Cdd_HsAdcCapture_IsCore0()) &&
      (TRUE == Cdd_HsAdcCapture_AcknowledgeDmaInterrupt(
                 CDD_HSADC_CAPTURE_HSADC0_DMA_CHANNEL,
                 &u16CurrentOuterLoop))) {
    if (FALSE == Cdd_HsAdcCapture_CheckAndLatchHardwareErrors()) {
      Cdd_HsAdcCapture_RecordDmaPhase(CDD_HSADC_CAPTURE_HSADC0_UNIT_INDEX,
                                      CDD_HSADC_CAPTURE_HSADC0_READY_BIT,
                                      u16CurrentOuterLoop);
    }
  } else if ((TRUE == Cdd_HsAdcCapture_IsCore0()) &&
             (s_eState == CDD_HSADC_CAPTURE_STATE_RUNNING)) {
    Cdd_HsAdcCapture_RecordUnexpectedInterrupt();
  } else {
    /* Ignore a vector routed to a non-owning core or outside a capture run. */
  }

  EXIT_INTERRUPT();
}

void Cdd_HsAdcCapture_Dma3IrqHandler(void)
{
  uint16 u16CurrentOuterLoop = 0U;

  if ((TRUE == Cdd_HsAdcCapture_IsCore0()) &&
      (TRUE == Cdd_HsAdcCapture_AcknowledgeDmaInterrupt(
                 CDD_HSADC_CAPTURE_HSADC2_DMA_CHANNEL,
                 &u16CurrentOuterLoop))) {
    if (FALSE == Cdd_HsAdcCapture_CheckAndLatchHardwareErrors()) {
      Cdd_HsAdcCapture_RecordDmaPhase(CDD_HSADC_CAPTURE_HSADC2_UNIT_INDEX,
                                      CDD_HSADC_CAPTURE_HSADC2_READY_BIT,
                                      u16CurrentOuterLoop);
    }
  } else if ((TRUE == Cdd_HsAdcCapture_IsCore0()) &&
             (s_eState == CDD_HSADC_CAPTURE_STATE_RUNNING)) {
    Cdd_HsAdcCapture_RecordUnexpectedInterrupt();
  } else {
    /* Ignore a vector routed to a non-owning core or outside a capture run. */
  }

  EXIT_INTERRUPT();
}

void Cdd_HsAdcCapture_Dma2ErrorCallback(void)
{
  Cdd_HsAdcCapture_LatchDmaError(CDD_HSADC_CAPTURE_DMA2_ERROR_MASK);
}

void Cdd_HsAdcCapture_Dma3ErrorCallback(void)
{
  Cdd_HsAdcCapture_LatchDmaError(CDD_HSADC_CAPTURE_DMA3_ERROR_MASK);
}
