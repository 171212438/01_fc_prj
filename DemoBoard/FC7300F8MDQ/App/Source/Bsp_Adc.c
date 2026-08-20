#include "Bsp_Adc.h"

#include "Bsp_Dwt.h"
#include "Bsp_Pwm.h"
#include "SchM_Dma.h"

#define BSP_ADC_CAPTURE_SNAPSHOT_COUNT          (2U)
#define BSP_ADC_CORE_CLOCK_HZ                   (300000000U)
#define BSP_ADC_FIRST_BLOCK_TIMEOUT_US          (500U)
#define BSP_ADC_MICROSECONDS_PER_SECOND         (1000000U)
#define BSP_ADC_FIRST_BLOCK_TIMEOUT_CORE_CYCLES \
    ((BSP_ADC_CORE_CLOCK_HZ / BSP_ADC_MICROSECONDS_PER_SECOND) * BSP_ADC_FIRST_BLOCK_TIMEOUT_US)

_Static_assert((BSP_ADC_CORE_CLOCK_HZ % BSP_ADC_MICROSECONDS_PER_SECOND) == 0U,
               "BSP ADC startup timeout requires an integer number of core cycles per microsecond");

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
static volatile boolean s_bCaptureFaultLatched;
static volatile boolean s_bCaptureCleanupPending;
static boolean s_bGroup2HardwareTriggerArmed;
static boolean s_bGroup4HardwareTriggerArmed;

static void Bsp_Adc_ResetCaptureConsumer(void)
{
    s_u8PublishedSnapshotIndex = 0U;
    s_u32ConsumedBlockCount = 0U;
    s_u32ConsumerErrorCount = 0U;
    s_eLastConsumerResult = CDD_HSADC_CAPTURE_E_UNINIT;
    s_bLatestSnapshotValid = FALSE;
    s_bConsumerActive = FALSE;
    s_bCaptureFaultLatched = FALSE;
    s_bCaptureCleanupPending = FALSE;
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
Std_ReturnType Bsp_Adc_Init(void)
{
    Std_ReturnType eGroup2SetupResult;
    Std_ReturnType eGroup4SetupResult;

    if ((0U != Cpm_HWA_GetCoreId()) ||
        (TRUE == s_bGroup2HardwareTriggerArmed) ||
        (TRUE == s_bGroup4HardwareTriggerArmed))
    {
        return E_NOT_OK;
    }

    Bsp_Adc_ResetCaptureConsumer();

    Adc_Init(&Adc_Config_EcucPartition_0);

    eGroup2SetupResult = Adc_SetupResultBuffer(AdcGroup_2, HsAdc2_Group2_SetupBuffer);
    eGroup4SetupResult = Adc_SetupResultBuffer(AdcGroup_4, HsAdc0_Group4_SetupBuffer);
    if ((E_OK != eGroup2SetupResult) || (E_OK != eGroup4SetupResult))
    {
        return E_NOT_OK;
    }

    Adc_EnableHardwareTrigger(AdcGroup_2);
    if (ADC_BUSY != Adc_GetGroupStatus(AdcGroup_2))
    {
        return E_NOT_OK;
    }
    s_bGroup2HardwareTriggerArmed = TRUE;

    Adc_EnableHardwareTrigger(AdcGroup_4);
    if (ADC_BUSY != Adc_GetGroupStatus(AdcGroup_4))
    {
        Adc_DisableHardwareTrigger(AdcGroup_2);
        s_bGroup2HardwareTriggerArmed = (ADC_IDLE != Adc_GetGroupStatus(AdcGroup_2)) ? TRUE : FALSE;
        return E_NOT_OK;
    }
    s_bGroup4HardwareTriggerArmed = TRUE;

    return E_OK;
}

Std_ReturnType Bsp_Adc_WaitForFirstCaptureBlock(void)
{
    Bsp_Adc_CaptureConsumerStatusType tConsumerStatus;
    Cdd_HsAdcCapture_StatusType tCaptureStatus;
    Std_ReturnType eConsumerStatusResult;
    Cdd_HsAdcCapture_ResultType eCaptureStatusResult;
    Std_ReturnType eResult = E_NOT_OK;
    uint32 u32StartCycles;

    if ((0U != Cpm_HWA_GetCoreId()) ||
        (TRUE != s_bGroup2HardwareTriggerArmed) ||
        (TRUE != s_bGroup4HardwareTriggerArmed) ||
        (TRUE != Bsp_Dwt_Init()))
    {
        return E_NOT_OK;
    }

    u32StartCycles = Bsp_Dwt_MeasureStart();
    do
    {
        Cdd_HsAdcCapture_MainFunction();
        eConsumerStatusResult = Bsp_Adc_GetCaptureConsumerStatus(&tConsumerStatus);
        eCaptureStatusResult = Cdd_HsAdcCapture_GetStatus(&tCaptureStatus);

        if ((E_OK == eConsumerStatusResult) &&
            (CDD_HSADC_CAPTURE_OK == eCaptureStatusResult) &&
            (CDD_HSADC_CAPTURE_STATE_RUNNING == tCaptureStatus.eState) &&
            (CDD_HSADC_CAPTURE_OK == tConsumerStatus.eLastConsumerResult) &&
            (0U < tConsumerStatus.u32ConsumedBlockCount) &&
            (0U == tConsumerStatus.u32ConsumerErrorCount) &&
            (TRUE == tConsumerStatus.bLatestSnapshotValid) &&
            (FALSE == tConsumerStatus.bCaptureFaultLatched))
        {
            eResult = E_OK;
            break;
        }

        if ((E_OK != eConsumerStatusResult) ||
            (CDD_HSADC_CAPTURE_OK != eCaptureStatusResult) ||
            (CDD_HSADC_CAPTURE_STATE_RUNNING != tCaptureStatus.eState) ||
            ((CDD_HSADC_CAPTURE_E_UNINIT != tConsumerStatus.eLastConsumerResult) &&
             (CDD_HSADC_CAPTURE_OK != tConsumerStatus.eLastConsumerResult)) ||
            (0U != tConsumerStatus.u32ConsumerErrorCount) ||
            (TRUE == tConsumerStatus.bCaptureFaultLatched))
        {
            break;
        }
    } while (Bsp_Dwt_MeasureElapsedCycles(u32StartCycles) < BSP_ADC_FIRST_BLOCK_TIMEOUT_CORE_CYCLES);

    Bsp_Dwt_DeInit();
    return eResult;
}

Std_ReturnType Bsp_Adc_DisarmHardwareTriggers(void)
{
    if (0U != Cpm_HWA_GetCoreId())
    {
        return E_NOT_OK;
    }

    if (TRUE == s_bGroup2HardwareTriggerArmed)
    {
        Adc_DisableHardwareTrigger(AdcGroup_2);
        s_bGroup2HardwareTriggerArmed = (ADC_IDLE != Adc_GetGroupStatus(AdcGroup_2)) ? TRUE : FALSE;
    }
    if (TRUE == s_bGroup4HardwareTriggerArmed)
    {
        Adc_DisableHardwareTrigger(AdcGroup_4);
        s_bGroup4HardwareTriggerArmed = (ADC_IDLE != Adc_GetGroupStatus(AdcGroup_4)) ? TRUE : FALSE;
    }

    return ((FALSE == s_bGroup2HardwareTriggerArmed) &&
            (FALSE == s_bGroup4HardwareTriggerArmed))
               ? E_OK
               : E_NOT_OK;
}

void Cdd_HsAdcCapture_FaultNotification(void)
{
    boolean bRequestPwmShutdown = FALSE;

    if (0U != Cpm_HWA_GetCoreId())
    {
        return;
    }

    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
    if (FALSE == s_bCaptureFaultLatched)
    {
        s_bCaptureFaultLatched = TRUE;
        s_bCaptureCleanupPending = TRUE;
        s_bLatestSnapshotValid = FALSE;
        bRequestPwmShutdown = TRUE;
    }
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

    if (TRUE == bRequestPwmShutdown)
    {
        (void)Bsp_PwmWave_EmergencyShutdown();
    }
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
    if (TRUE == s_bCaptureFaultLatched)
    {
        SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
        return;
    }
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
        if (FALSE == s_bCaptureFaultLatched)
        {
            s_u32ConsumedBlockCount++;
            s_atCaptureSnapshot[u8WriteSnapshotIndex].u32ConsumedBlockCount = s_u32ConsumedBlockCount;
            MCAL_DATA_SYNC_BARRIER();
            s_u8PublishedSnapshotIndex = u8WriteSnapshotIndex;
            s_bLatestSnapshotValid = TRUE;
            s_eLastConsumerResult = CDD_HSADC_CAPTURE_OK;
        }
        SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
    }

    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
    s_bConsumerActive = FALSE;
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
}

void Bsp_Adc_20ms_Task_Event(void)
{
    Cdd_HsAdcCapture_StatusType tCaptureStatus;
    Cdd_HsAdcCapture_ResultType eCaptureStatusResult;
    boolean bCaptureArmed;
    boolean bCleanupPending;

    if (0U != Cpm_HWA_GetCoreId())
    {
        return;
    }

    Cdd_HsAdcCapture_MainFunction();
    eCaptureStatusResult = Cdd_HsAdcCapture_GetStatus(&tCaptureStatus);
    bCaptureArmed = ((TRUE == s_bGroup2HardwareTriggerArmed) ||
                     (TRUE == s_bGroup4HardwareTriggerArmed))
                        ? TRUE
                        : FALSE;
    if ((TRUE == bCaptureArmed) &&
        ((CDD_HSADC_CAPTURE_OK != eCaptureStatusResult) ||
         (CDD_HSADC_CAPTURE_STATE_ERROR == tCaptureStatus.eState)))
    {
        Cdd_HsAdcCapture_FaultNotification();
    }

    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
    bCleanupPending = s_bCaptureCleanupPending;
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

    if ((TRUE == bCleanupPending) && (E_OK == Bsp_Adc_DisarmHardwareTriggers()))
    {
        SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_06();
        s_bCaptureCleanupPending = FALSE;
        SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();
    }
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
    if ((TRUE == s_bLatestSnapshotValid) &&
        (FALSE == s_bCaptureFaultLatched))
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
    pStatus->bCaptureFaultLatched = s_bCaptureFaultLatched;
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_06();

    return E_OK;
}
