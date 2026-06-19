/**
 *   @file    Adc_Ptimer_Irq.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Adc - ptimer ISR source file.
 *   @details This is the low level driver source file, mainly implemented for the Ptimer hardware IP.
 *
 *   @addtogroup ADC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : PTIMER
*   PLATFORM             : Flagchip FC7XXX
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_R20-11
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
*   0.1.0       10/07/2023    QXW0030       N/A          ADC Initial Version
*   0.2.0       07/10/2023    QXW0030       N/A          Add Adc Multicore Support
*   0.3.0       17/10/2023    QXW0030       N/A          Optimization of Multicore instance
*   1.0.0       08/11/2024    QXW0030       N/A          Update to v1.0.0 RTM
*   1.1.0       22/11/2024    QXW0030       N/A          Add support for FC7300F8MDQ
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Adc_Hal.h"
#include "Adc_Ptimer.h"
#include "Mcal.h"

#if (ADC_ENABLE_PTIMER_SUPPORT == STD_ON)
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
#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"

#ifdef ADC_UNIT_0_PTIMER_ERR_ISR_USED
ADC_TEXT_SECTION ISR(Adc_Ptimer_ChannelSeqErr0);
#endif

#ifdef ADC_UNIT_1_PTIMER_ERR_ISR_USED
ADC_TEXT_SECTION ISR(Adc_Ptimer_ChannelSeqErr1);
#endif

#ifdef ADC_UNIT_2_PTIMER_ERR_ISR_USED
ADC_TEXT_SECTION ISR(Adc_Ptimer_ChannelSeqErr2);
#endif

#ifdef ADC_UNIT_3_PTIMER_ERR_ISR_USED
ADC_TEXT_SECTION ISR(Adc_Ptimer_ChannelSeqErr3);
#endif

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef ADC_UNIT_0_PTIMER_ERR_ISR_USED
ADC_TEXT_SECTION ISR(Adc_Ptimer_ChannelSeqErr0)
{
    Adc_Ptimer_ChannelSeqErr(ADC_UNIT_0);

    EXIT_INTERRUPT();
}
#endif

#ifdef ADC_UNIT_1_PTIMER_ERR_ISR_USED
ADC_TEXT_SECTION ISR(Adc_Ptimer_ChannelSeqErr1)
{
    Adc_Ptimer_ChannelSeqErr(ADC_UNIT_1);

    EXIT_INTERRUPT();
}
#endif

#ifdef ADC_UNIT_2_PTIMER_ERR_ISR_USED
ADC_TEXT_SECTION ISR(Adc_Ptimer_ChannelSeqErr2)
{
    Adc_Ptimer_ChannelSeqErr(ADC_UNIT_2);

    EXIT_INTERRUPT();
}
#endif

#ifdef ADC_UNIT_3_PTIMER_ERR_ISR_USED
ADC_TEXT_SECTION ISR(Adc_Ptimer_ChannelSeqErr3)
{
    Adc_Ptimer_ChannelSeqErr(ADC_UNIT_3);

    EXIT_INTERRUPT();
}
#endif

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#endif /* ADC_ENABLE_PTIMER_SUPPORT == STD_ON */

#ifdef __cplusplus
}
#endif

/** @} */
