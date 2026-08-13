#ifndef _BSP_ADC_H_
#define _BSP_ADC_H_

#include "Bsp_McalHeader.h"
#include "Cdd_HsAdcCapture.h"

/* Latest complete 32-frame capture retained by the ISR-level consumer. */
typedef struct {
    Cdd_HsAdcCapture_FrameType aHsAdc0Frames[CDD_HSADC_CAPTURE_FRAMES_PER_HALF];
    Cdd_HsAdcCapture_FrameType aHsAdc2Frames[CDD_HSADC_CAPTURE_FRAMES_PER_HALF];
    Cdd_HsAdcCapture_SequenceType u32Sequence;
    uint32 u32ConsumedBlockCount;
    uint16 u16FrameCount;
} Bsp_Adc_CaptureSnapshotType;

typedef struct {
    Cdd_HsAdcCapture_ResultType eLastConsumerResult;
    Cdd_HsAdcCapture_SequenceType u32LatestSequence;
    uint32 u32ConsumedBlockCount;
    uint32 u32ConsumerErrorCount;
    boolean bLatestSnapshotValid;
} Bsp_Adc_CaptureConsumerStatusType;

/************ Global functions *******************/
void Bsp_Adc_Init(void);
void Bsp_Adc_20ms_Task_Event(void);
void Bsp_Adc_1s_Task_Event(void);

/* Core0 task-context access. The snapshot output is unchanged on E_NOT_OK. */
Std_ReturnType Bsp_Adc_GetLatestCapture(Bsp_Adc_CaptureSnapshotType *pSnapshot);
Std_ReturnType Bsp_Adc_GetCaptureConsumerStatus(Bsp_Adc_CaptureConsumerStatusType *pStatus);

#endif /* _BSP_ADC_H_ */
