#ifndef CDD_HSADC_CAPTURE_H
#define CDD_HSADC_CAPTURE_H

#include "Std_Types.h"

/* One half-buffer contains 32 PWM-triggered frames; the complete DMA ring has two halves. */
#define CDD_HSADC_CAPTURE_FRAMES_PER_HALF (32U)
#define CDD_HSADC_CAPTURE_HALF_COUNT      (2U)
#define CDD_HSADC_CAPTURE_CHANNEL_COUNT   (2U)
#define CDD_HSADC_CAPTURE_QUEUE_DEPTH     (8U)
#define CDD_HSADC_CAPTURE_DMA2_ERROR_MASK (0x01U)
#define CDD_HSADC_CAPTURE_DMA3_ERROR_MASK (0x02U)
#define CDD_HSADC_CAPTURE_HSADC_OVR_MASK     (0x00000010U)
#define CDD_HSADC_CAPTURE_HSADC_TRGERR_MASK  (0x03000000U)
#define CDD_HSADC_CAPTURE_FRAMES_PER_RING \
  (CDD_HSADC_CAPTURE_FRAMES_PER_HALF * CDD_HSADC_CAPTURE_HALF_COUNT)

typedef uint32 Cdd_HsAdcCapture_SequenceType;

typedef enum {
  CDD_HSADC_CAPTURE_STATE_UNINIT = 0,
  CDD_HSADC_CAPTURE_STATE_READY,
  CDD_HSADC_CAPTURE_STATE_RUNNING,
  CDD_HSADC_CAPTURE_STATE_ERROR
} Cdd_HsAdcCapture_StateType;

typedef enum {
  CDD_HSADC_CAPTURE_OK = 0,
  CDD_HSADC_CAPTURE_E_UNINIT,
  CDD_HSADC_CAPTURE_E_PARAM_POINTER,
  CDD_HSADC_CAPTURE_E_STATE,
  CDD_HSADC_CAPTURE_E_BUSY,
  CDD_HSADC_CAPTURE_E_WRONG_CORE,
  CDD_HSADC_CAPTURE_E_DMA,
  CDD_HSADC_CAPTURE_E_HW_CONFIG,
  CDD_HSADC_CAPTURE_E_NO_BLOCK,
  CDD_HSADC_CAPTURE_E_SEQUENCE
} Cdd_HsAdcCapture_ResultType;

/* Raw HSADC sequence-group result order: RESULT2/SE2 followed by RESULT3/SE3. */
typedef struct {
  uint32 u32Se2;
  uint32 u32Se3;
} Cdd_HsAdcCapture_FrameType;

/*
 * Both pointers describe the same PWM-trigger interval. They point to a
 * CPU-owned queue slot, never to the DMA ring, and remain valid until
 * Cdd_HsAdcCapture_ReleaseBlockPair() is called with the returned sequence.
 * Current signal mapping is HSADC0={VIN,VOUT} and HSADC2={IIN,IOUT}.
 */
typedef struct {
  const Cdd_HsAdcCapture_FrameType *pHsAdc0Frames;
  const Cdd_HsAdcCapture_FrameType *pHsAdc2Frames;
  uint16 u16FrameCount;
  uint8 u8QueueIndex;
  Cdd_HsAdcCapture_SequenceType u32Sequence;
} Cdd_HsAdcCapture_BlockPairType;

typedef struct {
  Cdd_HsAdcCapture_StateType eState;
  Cdd_HsAdcCapture_SequenceType u32LastPublishedSequence;
  uint32 u32OverrunCount;
  uint32 u32UnexpectedIrqCount;
  uint32 u32PhaseErrorCount;
  uint32 u32DmaErrorCount;
  uint32 u32HsAdcHardwareErrorCount;
  /* Latched raw OVR/TRGERR bits from each unit's HSADC_INT_STATUS register. */
  uint32 u32HsAdc0ErrorStatus;
  uint32 u32HsAdc2ErrorStatus;
  uint16 u16Dma2CurrentOuterLoop;
  uint16 u16Dma3CurrentOuterLoop;
  uint8 u8DmaErrorChannelMask;
  uint8 u8ReadyQueueMask;
  uint8 u8AcquiredQueueMask;
} Cdd_HsAdcCapture_StatusType;

/*
 * Core0-only lifecycle:
 *   Bsp_Dma_Init -> Bsp_Adc_Init -> Cdd_HsAdcCapture_Init ->
 *   Cdd_HsAdcCapture_Start -> start PWM carrier.
 * Init and Start require the PWM carrier to be stopped. Start reprograms DMA0
 * CH2/CH3 because Adc_EnableHardwareTrigger() first installs the MCAL BLC=1 TCD.
 * Once Start succeeds, sample data and readiness are owned by this CDD; do not
 * use Adc_ReadGroup()/Adc_GetGroupStatus() as the capture-data interface.
 * Any DMA transfer error, half/full phase mismatch, or HSADC OVR/TRGERR status
 * latches ERROR, disables both HSADC DMA requests, and invokes
 * Cdd_HsAdcCapture_FaultNotification() once for that capture run. Stop the PWM
 * carrier and call Init followed by Start to recover; Init also clears a DMA
 * HALT latched by HaltOnError, while Start clears stale HSADC error flags before
 * enabling the block-DMA requests.
 */
Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_Init(void);
Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_Start(void);

/* Stop the PWM trigger first, then call Stop. Completed block pairs remain readable. */
Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_Stop(void);

/*
 * Core0-only zero-copy consumer API. Acquire/Release may be used by one
 * bounded ISR or task consumer; the current BSP notification is that sole
 * owner. The zero-copy contract starts at the CPU-owned queue: Acquire returns
 * queue storage directly and Release returns that slot to the producer. Check
 * GetStatus before consuming data; ERROR means no subsequent block is valid.
 */
Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_AcquireBlockPair(Cdd_HsAdcCapture_BlockPairType *pBlockPair);
Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_ReleaseBlockPair(Cdd_HsAdcCapture_SequenceType u32Sequence);
Cdd_HsAdcCapture_ResultType Cdd_HsAdcCapture_GetStatus(Cdd_HsAdcCapture_StatusType *pStatus);

/*
 * Core0 periodic safety-net. It polls sticky HSADC OVR/TRGERR flags so a
 * hardware fault is still latched when the expected DMA block IRQ is absent.
 */
void Cdd_HsAdcCapture_MainFunction(void);

/*
 * Required Core0 DMA-ISR callout implemented by the application consumer.
 * It must be bounded and non-blocking. A published queue block remains owned
 * by the CDD until the callout acquires and releases it through the APIs above.
 */
void Cdd_HsAdcCapture_BlockPairNotification(void);

/*
 * Required application fail-safe callback. The CDD invokes it once after the
 * first runtime transition to ERROR and after both DMA requests are disabled.
 * It runs outside the DMA SchM area, from either DMA interrupt context or the
 * Core0 periodic supervisor, so it must be bounded, non-blocking, and safe for
 * repeated defensive calls.
 */
void Cdd_HsAdcCapture_FaultNotification(void);

/*
 * Core0 vector wrappers call these handlers instead of DMA2_Done_Isr() and
 * DMA3_Done_Isr(). Each handler snapshots CLC, clears its channel interrupt
 * through DMA_CINT, and then records the half/full block phase. The standard
 * DMA done ISR and generated ADC callback are intentionally bypassed because
 * this CDD owns the 64-frame TCD; otherwise both half and full interrupts would
 * incorrectly advance the generated NumSamples=1 ADC state machine.
 */
void Cdd_HsAdcCapture_Dma2IrqHandler(void);
void Cdd_HsAdcCapture_Dma3IrqHandler(void);

/* Generated DMA0 CH2/CH3 error ISR callouts; both latch a CDD fail-stop. */
void Cdd_HsAdcCapture_Dma2ErrorCallback(void);
void Cdd_HsAdcCapture_Dma3ErrorCallback(void);

#endif /* CDD_HSADC_CAPTURE_H */
