#include "Bsp_Adc.h"

#include "SchM_Dma.h"

#define BSP_ADC_CAPTURE_SNAPSHOT_COUNT (2U)

/************ Local Variables *******************/
/* AdcGroup_2 maps to generated group 0 on HSADC2. */
static Adc_ValueGroupType HsAdc2_Group2_SetupBuffer[ADC_CFGSET_GROUP_0_CHANNELS] = { 0 };

/* AdcGroup_4 maps to generated group 1 on HSADC0. */
static Adc_ValueGroupType HsAdc0_Group4_SetupBuffer[ADC_CFGSET_GROUP_1_CHANNELS] = { 0 };

static volatile Bsp_Adc_CaptureSnapshotType s_atCaptureSnapshot[BSP_ADC_CAPTURE_SNAPSHOT_COUNT];
static volatile uint8 s_u8PublishedSnapshotIndex;
static volatile uint32 s_u32ConsumedBlockCount;
static volatile uint32 s_u32ConsumerErrorCount;
static volatile Cdd_HsAdcCapture_ResultType s_eLastConsumerResult = CDD_HSADC_CAPTURE_E_UNINIT;
static volatile boolean s_bLatestSnapshotValid;
static volatile boolean s_bConsumerActive;

static void Bsp_Adc_ResetCaptureConsumer(void)
{
    s_u8PublishedSnapshotIndex = 0U;
    s_u32ConsumedBlockCount = 0U;
    s_u32ConsumerErrorCount = 0U;
    s_eLastConsumerResult = CDD_HSADC_CAPTURE_E_UNINIT;
    s_bLatestSnapshotValid = FALSE;
    s_bConsumerActive = FALSE;
}

static void Bsp_Adc_CopyBlockToSnapshot(
    const Cdd_HsAdcCapture_BlockPairType *pBlockPair,
    volatile Bsp_Adc_CaptureSnapshotType *pSnapshot)
{
    uint16 u16FrameIndex;

    for (u16FrameIndex = 0U; u16FrameIndex < pBlockPair->u16FrameCount; u16FrameIndex++)
    {
        pSnapshot->aHsAdc0Frames[u16FrameIndex] = pBlockPair->pHsAdc0Frames[u16FrameIndex];
        pSnapshot->aHsAdc2Frames[u16FrameIndex] = pBlockPair->pHsAdc2Frames[u16FrameIndex];
    }

    pSnapshot->u32Sequence = pBlockPair->u32Sequence;
    pSnapshot->u16FrameCount = pBlockPair->u16FrameCount;
}

static void Bsp_Adc_CopySnapshotToOutput(
    const volatile Bsp_Adc_CaptureSnapshotType *pSnapshot,
    Bsp_Adc_CaptureSnapshotType *pOutput)
{
    uint16 u16FrameIndex;

    for (u16FrameIndex = 0U; u16FrameIndex < pSnapshot->u16FrameCount; u16FrameIndex++)
    {
        pOutput->aHsAdc0Frames[u16FrameIndex] = pSnapshot->aHsAdc0Frames[u16FrameIndex];
        pOutput->aHsAdc2Frames[u16FrameIndex] = pSnapshot->aHsAdc2Frames[u16FrameIndex];
    }

    pOutput->u32Sequence = pSnapshot->u32Sequence;
    pOutput->u32ConsumedBlockCount = pSnapshot->u32ConsumedBlockCount;
    pOutput->u16FrameCount = pSnapshot->u16FrameCount;
}

/************ Global functions *******************/
void Bsp_Adc_Init(void)
{
    if (0U != Cpm_HWA_GetCoreId())
    {
        return;
    }

    Bsp_Adc_ResetCaptureConsumer();

    Adc_Init(&Adc_Config_EcucPartition_0);

    (void)Adc_SetupResultBuffer(AdcGroup_2, HsAdc2_Group2_SetupBuffer);
    (void)Adc_SetupResultBuffer(AdcGroup_4, HsAdc0_Group4_SetupBuffer);

    Adc_EnableHardwareTrigger(AdcGroup_2);
    Adc_EnableHardwareTrigger(AdcGroup_4);
}

void Cdd_HsAdcCapture_BlockPairNotification(void)
{
    Cdd_HsAdcCapture_BlockPairType tBlockPair;
    Cdd_HsAdcCapture_ResultType eResult;
    uint8 u8DrainCount;
    uint8 u8WriteSnapshotIndex;

    if (0U != Cpm_HWA_GetCoreId())
    {
        return;
    }

    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
    if (TRUE == s_bConsumerActive)
    {
        s_u32ConsumerErrorCount++;
        s_eLastConsumerResult = CDD_HSADC_CAPTURE_E_BUSY;
        SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
        return;
    }
    s_bConsumerActive = TRUE;
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

    for (u8DrainCount = 0U; u8DrainCount < CDD_HSADC_CAPTURE_QUEUE_DEPTH; u8DrainCount++)
    {
        eResult = Cdd_HsAdcCapture_AcquireBlockPair(&tBlockPair);
        if (CDD_HSADC_CAPTURE_E_NO_BLOCK == eResult)
        {
            break;
        }
        if (CDD_HSADC_CAPTURE_OK != eResult)
        {
            SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
            s_u32ConsumerErrorCount++;
            s_eLastConsumerResult = eResult;
            SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
            break;
        }

        u8WriteSnapshotIndex = s_u8PublishedSnapshotIndex ^ 1U;
        Bsp_Adc_CopyBlockToSnapshot(&tBlockPair, &s_atCaptureSnapshot[u8WriteSnapshotIndex]);

        eResult = Cdd_HsAdcCapture_ReleaseBlockPair(tBlockPair.u32Sequence);
        if (CDD_HSADC_CAPTURE_OK != eResult)
        {
            SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
            s_u32ConsumerErrorCount++;
            s_eLastConsumerResult = eResult;
            SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
            break;
        }

        SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
        s_u32ConsumedBlockCount++;
        s_atCaptureSnapshot[u8WriteSnapshotIndex].u32ConsumedBlockCount = s_u32ConsumedBlockCount;
        MCAL_DATA_SYNC_BARRIER();
        s_u8PublishedSnapshotIndex = u8WriteSnapshotIndex;
        s_bLatestSnapshotValid = TRUE;
        s_eLastConsumerResult = CDD_HSADC_CAPTURE_OK;
        SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
    }

    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
    s_bConsumerActive = FALSE;
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
}

void Bsp_Adc_20ms_Task_Event(void)
{
    /* The DMA-ISR notification drains blocks; task users read the latest snapshot through the BSP API. */
}

void Bsp_Adc_1s_Task_Event(void)
{
    /* No periodic ADC diagnostic output is required in this BSP layer. */
}

Std_ReturnType Bsp_Adc_GetLatestCapture(Bsp_Adc_CaptureSnapshotType *pSnapshot)
{
    Std_ReturnType eResult = E_NOT_OK;

    if ((NULL_PTR == pSnapshot) || (0U != Cpm_HWA_GetCoreId()))
    {
        return E_NOT_OK;
    }

    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
    if (TRUE == s_bLatestSnapshotValid)
    {
        Bsp_Adc_CopySnapshotToOutput(&s_atCaptureSnapshot[s_u8PublishedSnapshotIndex], pSnapshot);
        eResult = E_OK;
    }
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

    return eResult;
}

Std_ReturnType Bsp_Adc_GetCaptureConsumerStatus(Bsp_Adc_CaptureConsumerStatusType *pStatus)
{
    if ((NULL_PTR == pStatus) || (0U != Cpm_HWA_GetCoreId()))
    {
        return E_NOT_OK;
    }

    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
    pStatus->eLastConsumerResult = s_eLastConsumerResult;
    pStatus->u32LatestSequence = (TRUE == s_bLatestSnapshotValid)
                                   ? s_atCaptureSnapshot[s_u8PublishedSnapshotIndex].u32Sequence
                                   : 0U;
    pStatus->u32ConsumedBlockCount = s_u32ConsumedBlockCount;
    pStatus->u32ConsumerErrorCount = s_u32ConsumerErrorCount;
    pStatus->bLatestSnapshotValid = s_bLatestSnapshotValid;
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

    return E_OK;
}
