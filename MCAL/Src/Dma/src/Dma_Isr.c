/**
 *   @file    Dma_Isr.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR CDD DMA - Direct Memory Access(DMA) functions
 *   @details Contains functions for accessing DMA from the Dma driver perspective
 *
 *   @addtogroup DMA
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : DMA
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2024 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       07/06/2023    QXW0099       N/A          DMA Initial Version
*   0.2.0       18/09/2023    QXW0099       N/A          DMA Multicore Version
*   0.3.0       12/10/2023    QXW0099       N/A          Add multicore support
*   0.4.0       10/11/2023    QXW0099       N/A          Update version
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
==================================================================================================*/
/* PRQA S 5087 EOF
 * This attribute syntax is a language extension.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this
 * case, the defined MACRO used to select different parameter or code properties in MemMap.h
 */

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/**
 * @file           DMA_Isr.c
 */
#include "CDD_Dma.h"
#include "Dma_HWA.h"
#include "SchM_Dma.h"

/*==================================================================================================
*                                       SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define DMA_START_SEC_CODE

/**
 * @brief Include Memory mapping specification
 * @violates @ref DMA_Isr_c_REF_1 MISRA 2004 Required Rule 19.1 , only preprocessor statements
 *                and comments before '#include'
 * @violates @ref DMA_Isr_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
 *                of a header file being included twice
 */
#include "Dma_MemMap.h"

/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
#if ((defined DMA_CHANNEL0_IRQ) && (STD_ON == DMA_CHANNEL0_IRQ) ||    \
     (defined(DMA_CHANNEL1_IRQ) && (STD_ON == DMA_CHANNEL1_IRQ)) ||   \
     (defined(DMA_CHANNEL2_IRQ) && (STD_ON == DMA_CHANNEL2_IRQ)) ||   \
     (defined(DMA_CHANNEL3_IRQ) && (STD_ON == DMA_CHANNEL3_IRQ)) ||   \
     (defined(DMA_CHANNEL4_IRQ) && (STD_ON == DMA_CHANNEL4_IRQ)) ||   \
     (defined(DMA_CHANNEL5_IRQ) && (STD_ON == DMA_CHANNEL5_IRQ)) ||   \
     (defined(DMA_CHANNEL6_IRQ) && (STD_ON == DMA_CHANNEL6_IRQ)) ||   \
     (defined(DMA_CHANNEL7_IRQ) && (STD_ON == DMA_CHANNEL7_IRQ)) ||   \
     (defined(DMA_CHANNEL8_IRQ) && (STD_ON == DMA_CHANNEL8_IRQ)) ||   \
     (defined(DMA_CHANNEL9_IRQ) && (STD_ON == DMA_CHANNEL9_IRQ)) ||   \
     (defined(DMA_CHANNEL10_IRQ) && (STD_ON == DMA_CHANNEL10_IRQ)) || \
     (defined(DMA_CHANNEL11_IRQ) && (STD_ON == DMA_CHANNEL11_IRQ)) || \
     (defined(DMA_CHANNEL12_IRQ) && (STD_ON == DMA_CHANNEL12_IRQ)) || \
     (defined(DMA_CHANNEL13_IRQ) && (STD_ON == DMA_CHANNEL13_IRQ)) || \
     (defined(DMA_CHANNEL14_IRQ) && (STD_ON == DMA_CHANNEL14_IRQ)) || \
     (defined(DMA_CHANNEL15_IRQ) && (STD_ON == DMA_CHANNEL15_IRQ)) || \
     (defined DMA_CHANNEL16_IRQ) && (STD_ON == DMA_CHANNEL16_IRQ) ||  \
     (defined(DMA_CHANNEL17_IRQ) && (STD_ON == DMA_CHANNEL17_IRQ)) || \
     (defined(DMA_CHANNEL18_IRQ) && (STD_ON == DMA_CHANNEL18_IRQ)) || \
     (defined(DMA_CHANNEL19_IRQ) && (STD_ON == DMA_CHANNEL19_IRQ)) || \
     (defined(DMA_CHANNEL20_IRQ) && (STD_ON == DMA_CHANNEL20_IRQ)) || \
     (defined(DMA_CHANNEL21_IRQ) && (STD_ON == DMA_CHANNEL21_IRQ)) || \
     (defined(DMA_CHANNEL22_IRQ) && (STD_ON == DMA_CHANNEL22_IRQ)) || \
     (defined(DMA_CHANNEL23_IRQ) && (STD_ON == DMA_CHANNEL23_IRQ)) || \
     (defined(DMA_CHANNEL24_IRQ) && (STD_ON == DMA_CHANNEL24_IRQ)) || \
     (defined(DMA_CHANNEL25_IRQ) && (STD_ON == DMA_CHANNEL25_IRQ)) || \
     (defined(DMA_CHANNEL26_IRQ) && (STD_ON == DMA_CHANNEL26_IRQ)) || \
     (defined(DMA_CHANNEL27_IRQ) && (STD_ON == DMA_CHANNEL27_IRQ)) || \
     (defined(DMA_CHANNEL28_IRQ) && (STD_ON == DMA_CHANNEL28_IRQ)) || \
     (defined(DMA_CHANNEL29_IRQ) && (STD_ON == DMA_CHANNEL29_IRQ)) || \
     (defined(DMA_CHANNEL30_IRQ) && (STD_ON == DMA_CHANNEL30_IRQ)) || \
     (defined(DMA_CHANNEL31_IRQ) && (STD_ON == DMA_CHANNEL31_IRQ)))
DMA_TEXT_SECTION static void Dma_ProcessDoneInterrupt(const uint8 Dma_Channel);
#endif
#if ((defined(DMA_CHANNEL_ERROR_IRQ) && (STD_ON == DMA_CHANNEL_ERROR_IRQ)))
DMA_TEXT_SECTION static void Dma_ProcessErrorInterrupt(const uint8 Dma_Channel);
#endif
/* PRQA S 3006 -- */
#if ((defined DMA_CHANNEL0_IRQ) && (STD_ON == DMA_CHANNEL0_IRQ))
DMA_TEXT_SECTION ISR(DMA0_Done_Isr);
#endif /* DMA_CHANNEL0_IRQ */

#if ((defined DMA_CHANNEL1_IRQ) && (STD_ON == DMA_CHANNEL1_IRQ))
DMA_TEXT_SECTION ISR(DMA1_Done_Isr);
#endif /* DMA_CHANNEL1_IRQ */

#if ((defined DMA_CHANNEL2_IRQ) && (STD_ON == DMA_CHANNEL2_IRQ))
DMA_TEXT_SECTION ISR(DMA2_Done_Isr);
#endif /* DMA_CHANNEL2_IRQ */

#if ((defined DMA_CHANNEL3_IRQ) && (STD_ON == DMA_CHANNEL3_IRQ))
DMA_TEXT_SECTION ISR(DMA3_Done_Isr);
#endif /* DMA_CHANNEL3_IRQ */

#if ((defined DMA_CHANNEL4_IRQ) && (STD_ON == DMA_CHANNEL4_IRQ))
DMA_TEXT_SECTION ISR(DMA4_Done_Isr);
#endif /* DMA_CHANNEL4_IRQ */

#if ((defined DMA_CHANNEL5_IRQ) && (STD_ON == DMA_CHANNEL5_IRQ))
DMA_TEXT_SECTION ISR(DMA5_Done_Isr);
#endif /* DMA_CHANNEL5_IRQ */

#if ((defined DMA_CHANNEL6_IRQ) && (STD_ON == DMA_CHANNEL6_IRQ))
DMA_TEXT_SECTION ISR(DMA6_Done_Isr);
#endif /* DMA_CHANNEL6_IRQ */

#if ((defined DMA_CHANNEL7_IRQ) && (STD_ON == DMA_CHANNEL7_IRQ))
DMA_TEXT_SECTION ISR(DMA7_Done_Isr);
#endif /* DMA_CHANNEL7_IRQ */

#if ((defined DMA_CHANNEL8_IRQ) && (STD_ON == DMA_CHANNEL8_IRQ))
DMA_TEXT_SECTION ISR(DMA8_Done_Isr);
#endif /* DMA_CHANNEL8_IRQ */

#if ((defined DMA_CHANNEL9_IRQ) && (STD_ON == DMA_CHANNEL9_IRQ))
DMA_TEXT_SECTION ISR(DMA9_Done_Isr);
#endif /* DMA_CHANNEL9_IRQ */

#if ((defined DMA_CHANNEL10_IRQ) && (STD_ON == DMA_CHANNEL10_IRQ))
DMA_TEXT_SECTION ISR(DMA10_Done_Isr);
#endif /* DMA_CHANNEL10_IRQ */

#if ((defined DMA_CHANNEL11_IRQ) && (STD_ON == DMA_CHANNEL11_IRQ))
DMA_TEXT_SECTION ISR(DMA11_Done_Isr);
#endif /* DMA_CHANNEL11_IRQ */

#if ((defined DMA_CHANNEL12_IRQ) && (STD_ON == DMA_CHANNEL12_IRQ))
DMA_TEXT_SECTION ISR(DMA12_Done_Isr);
#endif /* DMA_CHANNEL12_IRQ */

#if ((defined DMA_CHANNEL13_IRQ) && (STD_ON == DMA_CHANNEL13_IRQ))
DMA_TEXT_SECTION ISR(DMA13_Done_Isr);
#endif /* DMA_CHANNEL13_IRQ */

#if ((defined DMA_CHANNEL14_IRQ) && (STD_ON == DMA_CHANNEL14_IRQ))
DMA_TEXT_SECTION ISR(DMA14_Done_Isr);
#endif /* DMA_CHANNEL14_IRQ */

#if ((defined DMA_CHANNEL15_IRQ) && (STD_ON == DMA_CHANNEL15_IRQ))
DMA_TEXT_SECTION ISR(DMA15_Done_Isr);
#endif /* DMA_CHANNEL15_IRQ */

#if ((defined DMA_CHANNEL16_IRQ) && (STD_ON == DMA_CHANNEL16_IRQ))
DMA_TEXT_SECTION ISR(DMA16_Done_Isr);
#endif /* DMA_CHANNEL16_IRQ */

#if ((defined DMA_CHANNEL17_IRQ) && (STD_ON == DMA_CHANNEL17_IRQ))
DMA_TEXT_SECTION ISR(DMA17_Done_Isr);
#endif /* DMA_CHANNEL17_IRQ */

#if ((defined DMA_CHANNEL18_IRQ) && (STD_ON == DMA_CHANNEL18_IRQ))
DMA_TEXT_SECTION ISR(DMA18_Done_Isr);
#endif /* DMA_CHANNEL18_IRQ */

#if ((defined DMA_CHANNEL19_IRQ) && (STD_ON == DMA_CHANNEL19_IRQ))
DMA_TEXT_SECTION ISR(DMA19_Done_Isr);
#endif /* DMA_CHANNEL19_IRQ */

#if ((defined DMA_CHANNEL20_IRQ) && (STD_ON == DMA_CHANNEL20_IRQ))
DMA_TEXT_SECTION ISR(DMA20_Done_Isr);
#endif /* DMA_CHANNEL20_IRQ */

#if ((defined DMA_CHANNEL21_IRQ) && (STD_ON == DMA_CHANNEL21_IRQ))
DMA_TEXT_SECTION ISR(DMA21_Done_Isr);
#endif /* DMA_CHANNEL21_IRQ */

#if ((defined DMA_CHANNEL22_IRQ) && (STD_ON == DMA_CHANNEL22_IRQ))
DMA_TEXT_SECTION ISR(DMA22_Done_Isr);
#endif /* DMA_CHANNEL22_IRQ */

#if ((defined DMA_CHANNEL23_IRQ) && (STD_ON == DMA_CHANNEL23_IRQ))
DMA_TEXT_SECTION ISR(DMA23_Done_Isr);
#endif /* DMA_CHANNEL23_IRQ */

#if ((defined DMA_CHANNEL24_IRQ) && (STD_ON == DMA_CHANNEL24_IRQ))
DMA_TEXT_SECTION ISR(DMA24_Done_Isr);
#endif /* DMA_CHANNEL24_IRQ */

#if ((defined DMA_CHANNEL25_IRQ) && (STD_ON == DMA_CHANNEL25_IRQ))
DMA_TEXT_SECTION ISR(DMA25_Done_Isr);
#endif /* DMA_CHANNEL25_IRQ */

#if ((defined DMA_CHANNEL26_IRQ) && (STD_ON == DMA_CHANNEL26_IRQ))
DMA_TEXT_SECTION ISR(DMA26_Done_Isr);
#endif /* DMA_CHANNEL26_IRQ */

#if ((defined DMA_CHANNEL27_IRQ) && (STD_ON == DMA_CHANNEL27_IRQ))
DMA_TEXT_SECTION ISR(DMA27_Done_Isr);
#endif /* DMA_CHANNEL27_IRQ */

#if ((defined DMA_CHANNEL28_IRQ) && (STD_ON == DMA_CHANNEL28_IRQ))
DMA_TEXT_SECTION ISR(DMA28_Done_Isr);
#endif /* DMA_CHANNEL28_IRQ */

#if ((defined DMA_CHANNEL29_IRQ) && (STD_ON == DMA_CHANNEL29_IRQ))
DMA_TEXT_SECTION ISR(DMA29_Done_Isr);
#endif /* DMA_CHANNEL29_IRQ */

#if ((defined DMA_CHANNEL30_IRQ) && (STD_ON == DMA_CHANNEL30_IRQ))
DMA_TEXT_SECTION ISR(DMA30_Done_Isr);
#endif /* DMA_CHANNEL30_IRQ */

#if ((defined DMA_CHANNEL31_IRQ) && (STD_ON == DMA_CHANNEL31_IRQ))
DMA_TEXT_SECTION ISR(DMA31_Done_Isr);
#endif /* DMA_CHANNEL31_IRQ */

#if ((defined(DMA_CHANNEL_ERROR_IRQ) && (STD_ON == DMA_CHANNEL_ERROR_IRQ)))
DMA_TEXT_SECTION ISR(DMA_Error_Isr);
#endif

#define DMA_STOP_SEC_CODE

/**
 * @brief Include Memory mapping specification
 * @violates @ref DMA_Isr_c_REF_1 MISRA 2004 Required Rule 19.1 , only preprocessor statements
 *                and comments before '#include'
 * @violates @ref DMA_Isr_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
 *                of a header file being included twice
 */
#include "Dma_MemMap.h"
/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/
#define DMA_START_SEC_CODE
/**
 * @brief Include Memory mapping specification
 * @violates @ref DMA_Isr_c_REF_1 MISRA 2004 Required Rule 19.1 , only preprocessor statements
 *                and comments before '#include'
 * @violates @ref DMA_Isr_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
 *                of a header file being included twice
 */
#include "Dma_MemMap.h"

#if ((defined DMA_CHANNEL0_IRQ) && (STD_ON == DMA_CHANNEL0_IRQ) ||    \
     (defined(DMA_CHANNEL1_IRQ) && (STD_ON == DMA_CHANNEL1_IRQ)) ||   \
     (defined(DMA_CHANNEL2_IRQ) && (STD_ON == DMA_CHANNEL2_IRQ)) ||   \
     (defined(DMA_CHANNEL3_IRQ) && (STD_ON == DMA_CHANNEL3_IRQ)) ||   \
     (defined(DMA_CHANNEL4_IRQ) && (STD_ON == DMA_CHANNEL4_IRQ)) ||   \
     (defined(DMA_CHANNEL5_IRQ) && (STD_ON == DMA_CHANNEL5_IRQ)) ||   \
     (defined(DMA_CHANNEL6_IRQ) && (STD_ON == DMA_CHANNEL6_IRQ)) ||   \
     (defined(DMA_CHANNEL7_IRQ) && (STD_ON == DMA_CHANNEL7_IRQ)) ||   \
     (defined(DMA_CHANNEL8_IRQ) && (STD_ON == DMA_CHANNEL8_IRQ)) ||   \
     (defined(DMA_CHANNEL9_IRQ) && (STD_ON == DMA_CHANNEL9_IRQ)) ||   \
     (defined(DMA_CHANNEL10_IRQ) && (STD_ON == DMA_CHANNEL10_IRQ)) || \
     (defined(DMA_CHANNEL11_IRQ) && (STD_ON == DMA_CHANNEL11_IRQ)) || \
     (defined(DMA_CHANNEL12_IRQ) && (STD_ON == DMA_CHANNEL12_IRQ)) || \
     (defined(DMA_CHANNEL13_IRQ) && (STD_ON == DMA_CHANNEL13_IRQ)) || \
     (defined(DMA_CHANNEL14_IRQ) && (STD_ON == DMA_CHANNEL14_IRQ)) || \
     (defined(DMA_CHANNEL15_IRQ) && (STD_ON == DMA_CHANNEL15_IRQ)) || \
     (defined DMA_CHANNEL16_IRQ) && (STD_ON == DMA_CHANNEL16_IRQ) ||  \
     (defined(DMA_CHANNEL17_IRQ) && (STD_ON == DMA_CHANNEL17_IRQ)) || \
     (defined(DMA_CHANNEL18_IRQ) && (STD_ON == DMA_CHANNEL18_IRQ)) || \
     (defined(DMA_CHANNEL19_IRQ) && (STD_ON == DMA_CHANNEL19_IRQ)) || \
     (defined(DMA_CHANNEL20_IRQ) && (STD_ON == DMA_CHANNEL20_IRQ)) || \
     (defined(DMA_CHANNEL21_IRQ) && (STD_ON == DMA_CHANNEL21_IRQ)) || \
     (defined(DMA_CHANNEL22_IRQ) && (STD_ON == DMA_CHANNEL22_IRQ)) || \
     (defined(DMA_CHANNEL23_IRQ) && (STD_ON == DMA_CHANNEL23_IRQ)) || \
     (defined(DMA_CHANNEL24_IRQ) && (STD_ON == DMA_CHANNEL24_IRQ)) || \
     (defined(DMA_CHANNEL25_IRQ) && (STD_ON == DMA_CHANNEL25_IRQ)) || \
     (defined(DMA_CHANNEL26_IRQ) && (STD_ON == DMA_CHANNEL26_IRQ)) || \
     (defined(DMA_CHANNEL27_IRQ) && (STD_ON == DMA_CHANNEL27_IRQ)) || \
     (defined(DMA_CHANNEL28_IRQ) && (STD_ON == DMA_CHANNEL28_IRQ)) || \
     (defined(DMA_CHANNEL29_IRQ) && (STD_ON == DMA_CHANNEL29_IRQ)) || \
     (defined(DMA_CHANNEL30_IRQ) && (STD_ON == DMA_CHANNEL30_IRQ)) || \
     (defined(DMA_CHANNEL31_IRQ) && (STD_ON == DMA_CHANNEL31_IRQ)))
/**
 *   @brief   This function process the interrupt.
 *   @details This function process the DMA interrupt
 *
 *   @param[in]          Dma_Channel        The Dma channel number of isr.
 *
 *   [SWDESG_DMA_104]
 */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
DMA_TEXT_SECTION static void Dma_ProcessDoneInterrupt(const uint8 Dma_Channel)
{
    Dma_Type *const  aDma[] = DMA_BASE_PTRS;
    Dma_Type        *pDma;
    uint8            u8Index;
    uint8            u8channelnum;
    Dma_InstanceType eDma_Instance;
    uint8            u8PartitionId = DMA_GET_CPU_ID();
#if ((DMA_INSTANCE_COUNT == 2) && (DMA_MAX_CORE_USED_U8 <= 3))
    if (0U == u8PartitionId)
#elif ((DMA_INSTANCE_COUNT == 2) && (DMA_MAX_CORE_USED_U8 == 4))
    if (2U > u8PartitionId)
#endif
    {
        eDma_Instance = DMA_INSTANCE_0;
        u8channelnum  = DMA_0_USED_CHANNEL_NUM;
    }
#if (DMA_INSTANCE_COUNT == 2)
    else
    {
        eDma_Instance = DMA_INSTANCE_1;
        u8channelnum  = DMA_1_USED_CHANNEL_NUM;
    }
#endif

    pDma = aDma[eDma_Instance];
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
    if (u8PartitionId ==
        Dma_pConfig[u8PartitionId]->pDmaCoreConfig[u8PartitionId]->pDma_pChConfig[Dma_Channel].u8PartitionId)
#endif
    {
        if ((boolean)TRUE == Dma_HWA_GetChannelInterruptFlag(pDma, Dma_Channel))
        {
            /* Interrupt is not spurious */
            /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be
             * documented. Reason: This is an unavoidable false positive*/
            SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_05();
            /* PRQA S 1006 -- */
            /* Clear the interrupt flag  */
            Dma_HWA_ClearChannelInterruptFlag(pDma, Dma_Channel);
            /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be
             * documented. Reason: This is an unavoidable false positive*/
            SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_05();
            /* PRQA S 1006 -- */
            /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid pointer
             * value. Reason: there is no risk due to the range is checked before. */
            if (Dma_DriverStatus[u8PartitionId] == DMA_INITIALIZED)
            /* PRQA S 2842 -- */
            {
                /* Dma has initialized */
                for (u8Index = 0; u8Index < u8channelnum; u8Index++)
                {
                    if (Dma_Channel ==
                        Dma_Config.pDmaCoreConfig[u8PartitionId]->pDma_pChConfig[u8Index].u8Dmachannelid)
                    {
                        if (NULL_PTR != Dma_Config.pDmaCoreConfig[u8PartitionId]
                                            ->pDma_pChConfig[u8Index]
                                            .pDmaDoneISRCallBack)
                        {
                            Dma_Config.pDmaCoreConfig[u8PartitionId]
                                ->pDma_pChConfig[u8Index]
                                .pDmaDoneISRCallBack();
                        }
                    }
                }
            }
        }
    }
}
/* PRQA S 3006 -- */
#endif

#if ((defined(DMA_CHANNEL_ERROR_IRQ) && (STD_ON == DMA_CHANNEL_ERROR_IRQ)))
/**
 *   @brief   This function process the Error interrupt.
 *   @details This function process the DMA interrupt
 *
 *   @param[in]          Dma_Channel        The Dma channel number of isr.
 *   [SWDESG_DMA_105]
 *
 */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
DMA_TEXT_SECTION static void Dma_ProcessErrorInterrupt(const uint8 Dma_Channel)
/* PRQA S 3006 -- */
{
    Dma_Type *const  aDma[] = DMA_BASE_PTRS;
    Dma_Type        *pDma;
    uint8            u8Index;
    uint8            u8channelnum;
    Dma_InstanceType eDma_Instance;
    uint8            u8PartitionId = DMA_GET_CPU_ID();
#if ((DMA_INSTANCE_COUNT == 2) && (DMA_MAX_CORE_USED_U8 <= 3))
    if (0U == u8PartitionId)
#elif ((DMA_INSTANCE_COUNT == 2) && (DMA_MAX_CORE_USED_U8 == 4))
    if (2U > u8PartitionId)
#endif
    {
        eDma_Instance = DMA_INSTANCE_0;
        u8channelnum  = DMA_0_USED_CHANNEL_NUM;
    }
#if (DMA_INSTANCE_COUNT == 2)
    else
    {
        eDma_Instance = DMA_INSTANCE_1;
        u8channelnum  = DMA_1_USED_CHANNEL_NUM;
    }
#endif

    pDma = aDma[eDma_Instance];
    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     * Reason: This is an unavoidable false positive*/
    SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_01();
    /* PRQA S 1006 -- */
    /* Clear the interrupt flag  */
    Dma_HWA_ClearChannelErrorFlag(pDma, Dma_Channel);
    /* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented.
     * Reason: This is an unavoidable false positive*/
    SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_01();
    /* PRQA S 1006 -- */

    /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid pointer value.
     * Reason: there is no risk due to the range is checked before. */
    if (Dma_DriverStatus[u8PartitionId] == DMA_INITIALIZED)
    /* PRQA S 2842 -- */
    {
        for (u8Index = 0; u8Index < u8channelnum; u8Index++)
        {
            if (Dma_Channel ==
                Dma_Config.pDmaCoreConfig[u8PartitionId]->pDma_pChConfig[u8Index].u8Dmachannelid)
            {
                if (NULL_PTR !=
                    Dma_Config.pDmaCoreConfig[u8PartitionId]->pDma_pChConfig[u8Index].pDmaErrorISRCallBack)
                {
                    Dma_Config.pDmaCoreConfig[u8PartitionId]
                        ->pDma_pChConfig[u8Index]
                        .pDmaErrorISRCallBack();
                }
            }
        }
    }
}
#endif

#if ((defined DMA_CHANNEL0_IRQ) && (STD_ON == DMA_CHANNEL0_IRQ))
/**
*   @brief   This function process the interrupt DMA0.
*   @details This function process the DMA0 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*   [SWDESG_DMA_106]
*/
DMA_TEXT_SECTION ISR(DMA0_Done_Isr)
{
    Dma_ProcessDoneInterrupt(0u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL0_IRQ */

#if ((defined DMA_CHANNEL1_IRQ) && (STD_ON == DMA_CHANNEL1_IRQ))
/**
*   @brief   This function process the interrupt DMA1.
*   @details This function process the DMA1 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA1_Done_Isr)
{
    Dma_ProcessDoneInterrupt(1u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL1_IRQ */

#if ((defined DMA_CHANNEL2_IRQ) && (STD_ON == DMA_CHANNEL2_IRQ))
/**
*   @brief   This function process the interrupt DMA2.
*   @details This function process the DMA2 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA2_Done_Isr)
{
    Dma_ProcessDoneInterrupt(2u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL2_IRQ */

#if ((defined DMA_CHANNEL3_IRQ) && (STD_ON == DMA_CHANNEL3_IRQ))
/**
*   @brief   This function process the interrupt DMA3.
*   @details This function process the DMA3 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA3_Done_Isr)
{
    Dma_ProcessDoneInterrupt(3u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL3_IRQ */

#if ((defined DMA_CHANNEL4_IRQ) && (STD_ON == DMA_CHANNEL4_IRQ))
/**
*   @brief   This function process the interrupt DMA4.
*   @details This function process the DMA4 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA4_Done_Isr)
{
    Dma_ProcessDoneInterrupt(4u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL4_IRQ */

#if ((defined DMA_CHANNEL5_IRQ) && (STD_ON == DMA_CHANNEL5_IRQ))
/**
*   @brief   This function process the interrupt DMA5.
*   @details This function process the DMA5 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA5_Done_Isr)
{
    Dma_ProcessDoneInterrupt(5u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL5_IRQ */

#if ((defined DMA_CHANNEL6_IRQ) && (STD_ON == DMA_CHANNEL6_IRQ))
/**
*   @brief   This function process the interrupt DMA6.
*   @details This function process the DMA6 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA6_Done_Isr)
{
    Dma_ProcessDoneInterrupt(6u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL6_IRQ */

#if ((defined DMA_CHANNEL7_IRQ) && (STD_ON == DMA_CHANNEL7_IRQ))
/**
*   @brief   This function process the interrupt DMA7.
*   @details This function process the DMA7 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA7_Done_Isr)
{
    Dma_ProcessDoneInterrupt(7u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL7_IRQ */

#if ((defined DMA_CHANNEL8_IRQ) && (STD_ON == DMA_CHANNEL8_IRQ))
/**
*   @brief   This function process the interrupt DMA8.
*   @details This function process the DMA8 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA8_Done_Isr)
{
    Dma_ProcessDoneInterrupt(8u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL8_IRQ */

#if ((defined DMA_CHANNEL9_IRQ) && (STD_ON == DMA_CHANNEL9_IRQ))
/**
*   @brief   This function process the interrupt DMA9.
*   @details This function process the DMA9 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA9_Done_Isr)
{
    Dma_ProcessDoneInterrupt(9u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL9_IRQ */

#if ((defined DMA_CHANNEL10_IRQ) && (STD_ON == DMA_CHANNEL10_IRQ))
/**
*   @brief   This function process the interrupt DMA10.
*   @details This function process the DMA10 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA10_Done_Isr)
{
    Dma_ProcessDoneInterrupt(10u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL10_IRQ */

#if ((defined DMA_CHANNEL11_IRQ) && (STD_ON == DMA_CHANNEL11_IRQ))
/**
*   @brief   This function process the interrupt DMA11.
*   @details This function process the DMA11 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA11_Done_Isr)
{
    Dma_ProcessDoneInterrupt(11u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL11_IRQ */

#if ((defined DMA_CHANNEL12_IRQ) && (STD_ON == DMA_CHANNEL12_IRQ))
/**
*   @brief   This function process the interrupt DMA12.
*   @details This function process the DMA12 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA12_Done_Isr)
{
    Dma_ProcessDoneInterrupt(12u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL12_IRQ */

#if ((defined DMA_CHANNEL13_IRQ) && (STD_ON == DMA_CHANNEL13_IRQ))
/**
*   @brief   This function process the interrupt DMA13.
*   @details This function process the DMA13 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA13_Done_Isr)
{
    Dma_ProcessDoneInterrupt(13u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL13_IRQ */

#if ((defined DMA_CHANNEL14_IRQ) && (STD_ON == DMA_CHANNEL14_IRQ))
/**
*   @brief   This function process the interrupt DMA14.
*   @details This function process the DMA14 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA14_Done_Isr)
{
    Dma_ProcessDoneInterrupt(14u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL14_IRQ */

#if ((defined DMA_CHANNEL15_IRQ) && (STD_ON == DMA_CHANNEL15_IRQ))
/**
*   @brief   This function process the interrupt DMA15.
*   @details This function process the DMA15 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA15_Done_Isr)
{
    Dma_ProcessDoneInterrupt(15u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL15_IRQ */

#if ((defined DMA_CHANNEL16_IRQ) && (STD_ON == DMA_CHANNEL16_IRQ))
/**
*   @brief   This function process the interrupt DMA16.
*   @details This function process the DMA16 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA16_Done_Isr)
{
    Dma_ProcessDoneInterrupt(16u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL16_IRQ */

#if ((defined DMA_CHANNEL17_IRQ) && (STD_ON == DMA_CHANNEL17_IRQ))
/**
*   @brief   This function process the interrupt DMA17.
*   @details This function process the DMA17 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA17_Done_Isr)
{
    Dma_ProcessDoneInterrupt(17u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL17_IRQ */

#if ((defined DMA_CHANNEL18_IRQ) && (STD_ON == DMA_CHANNEL18_IRQ))
/**
*   @brief   This function process the interrupt DMA18.
*   @details This function process the DMA18 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA18_Done_Isr)
{
    Dma_ProcessDoneInterrupt(18u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL18_IRQ */

#if ((defined DMA_CHANNEL19_IRQ) && (STD_ON == DMA_CHANNEL19_IRQ))
/**
*   @brief   This function process the interrupt DMA19.
*   @details This function process the DMA19 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA19_Done_Isr)
{
    Dma_ProcessDoneInterrupt(19u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL19_IRQ */

#if ((defined DMA_CHANNEL20_IRQ) && (STD_ON == DMA_CHANNEL20_IRQ))
/**
*   @brief   This function process the interrupt DMA20.
*   @details This function process the DMA20 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA20_Done_Isr)
{
    Dma_ProcessDoneInterrupt(20u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL20_IRQ */

#if ((defined DMA_CHANNEL21_IRQ) && (STD_ON == DMA_CHANNEL21_IRQ))
/**
*   @brief   This function process the interrupt DMA21.
*   @details This function process the DMA21 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA21_Done_Isr)
{
    Dma_ProcessDoneInterrupt(21u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL21_IRQ */

#if ((defined DMA_CHANNEL22_IRQ) && (STD_ON == DMA_CHANNEL22_IRQ))
/**
*   @brief   This function process the interrupt DMA22.
*   @details This function process the DMA22 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA22_Done_Isr)
{
    Dma_ProcessDoneInterrupt(22u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL22_IRQ */

#if ((defined DMA_CHANNEL23_IRQ) && (STD_ON == DMA_CHANNEL23_IRQ))
/**
*   @brief   This function process the interrupt DMA23.
*   @details This function process the DMA23 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA23_Done_Isr)
{
    Dma_ProcessDoneInterrupt(23u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL23_IRQ */

#if ((defined DMA_CHANNEL24_IRQ) && (STD_ON == DMA_CHANNEL24_IRQ))
/**
*   @brief   This function process the interrupt DMA24.
*   @details This function process the DMA24 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA24_Done_Isr)
{
    Dma_ProcessDoneInterrupt(24u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL24_IRQ */

#if ((defined DMA_CHANNEL25_IRQ) && (STD_ON == DMA_CHANNEL25_IRQ))
/**
*   @brief   This function process the interrupt DMA25.
*   @details This function process the DMA25 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA25_Done_Isr)
{
    Dma_ProcessDoneInterrupt(25u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL25_IRQ */

#if ((defined DMA_CHANNEL26_IRQ) && (STD_ON == DMA_CHANNEL26_IRQ))
/**
*   @brief   This function process the interrupt DMA26.
*   @details This function process the DMA26 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA26_Done_Isr)
{
    Dma_ProcessDoneInterrupt(26u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL26_IRQ */

#if ((defined DMA_CHANNEL27_IRQ) && (STD_ON == DMA_CHANNEL27_IRQ))
/**
*   @brief   This function process the interrupt DMA27.
*   @details This function process the DMA27 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA27_Done_Isr)
{
    Dma_ProcessDoneInterrupt(27u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL27_IRQ */

#if ((defined DMA_CHANNEL28_IRQ) && (STD_ON == DMA_CHANNEL28_IRQ))
/**
*   @brief   This function process the interrupt DMA28.
*   @details This function process the DMA28 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA28_Done_Isr)
{
    Dma_ProcessDoneInterrupt(28u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL28_IRQ */

#if ((defined DMA_CHANNEL29_IRQ) && (STD_ON == DMA_CHANNEL29_IRQ))
/**
*   @brief   This function process the interrupt DMA29.
*   @details This function process the DMA29 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA29_Done_Isr)
{
    Dma_ProcessDoneInterrupt(29u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL29_IRQ */

#if ((defined DMA_CHANNEL30_IRQ) && (STD_ON == DMA_CHANNEL30_IRQ))
/**
*   @brief   This function process the interrupt DMA30.
*   @details This function process the DMA30 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA30_Done_Isr)
{
    Dma_ProcessDoneInterrupt(30u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL30_IRQ */

#if ((defined DMA_CHANNEL31_IRQ) && (STD_ON == DMA_CHANNEL31_IRQ))
/**
*   @brief   This function process the interrupt DMA31.
*   @details This function process the DMA31 interrup
*   @isr
    @implements  DMAInterfaceNo_Isr_Activity
*   @violates @ref DMA_Isr_c_REF_4 Violates MISRA 2004 Required Rule 8.10 could be made static
*/
DMA_TEXT_SECTION ISR(DMA31_Done_Isr)
{
    Dma_ProcessDoneInterrupt(31u);
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif /* DMA_CHANNEL31_IRQ */

#if ((defined(DMA_CHANNEL_ERROR_IRQ) && (STD_ON == DMA_CHANNEL_ERROR_IRQ)))
/* [SWDESG_DMA_107] */
DMA_TEXT_SECTION ISR(DMA_Error_Isr)
{
    uint8            u8DmaCounter  = 0;
    Dma_InstanceType eDma_Instance = DMA_INSTANCE_0;
    const Dma_Type  *pDma;
    Dma_Type *const  aDma[] = DMA_BASE_PTRS;

#if (DMA_MAX_CORE_USED_U8 <= 3)
    if (0U == DMA_GET_CPU_ID())
#elif (DMA_MAX_CORE_USED_U8 == 4)
    if (2U > DMA_GET_CPU_ID())
#endif
    {
        eDma_Instance = DMA_INSTANCE_0;
    }
#if (DMA_INSTANCE_COUNT == 2)
    else
    {
        eDma_Instance = DMA_INSTANCE_1;
    }
#endif

    pDma = aDma[eDma_Instance];

    for (u8DmaCounter = 0; u8DmaCounter < (uint8)DMA_MAX_CHANNEL; u8DmaCounter++)
    {
        if ((boolean)TRUE == Dma_HWA_GetChannelErrorFlag(pDma, u8DmaCounter))
        {
            Dma_ProcessErrorInterrupt(u8DmaCounter);
        }
    }
    /* @violates @ref DMA_Isr_c_REF_3 Violates MISRA 2004 Rule 11.1, Cast from unsigned long to pointer.*/
    EXIT_INTERRUPT();
}
#endif

#define DMA_STOP_SEC_CODE
/**
 * @brief Include Memory mapping specification
 * @violates @ref DMA_Isr_c_REF_1 MISRA 2004 Required Rule 19.1 , only preprocessor statements
 *                and comments before '#include'
 * @violates @ref DMA_Isr_c_REF_2 MISRA 2004 Required Rule 19.15 precautions to prevent the contents
 *                of a header file being included twice
 */
#include "Dma_MemMap.h"
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#ifdef __cplusplus
}
#endif

/** @} */
