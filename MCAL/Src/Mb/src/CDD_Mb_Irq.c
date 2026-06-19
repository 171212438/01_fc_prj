/**
 *   @file    CDD_Mb_irq.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Mailbox - hardware abstraction layer driver source file.
 *   @details Mailbox interrupt handler.
 *
 *   @addtogroup Mailbox
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Mailbox
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2023 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.2.0       09/09/2023    QXW0070       N/A          Mailbox Initial Version
*   0.4.0       09/11/2023    QXW0070       N/A          Isolate CDD_Mb_Irq.c and HWA
==================================================================================================*/
/* PRQA S 2071,5087 EOF
   2071: [E] This attribute syntax is a language extension.
   5087: Use of #include directive after code fragment.
   REASON: Variables and text need to be placed in the specified location
*/
#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Cpm_Reg.h"
#include "Mcal.h"
#include "SchM_Mb.h"
#include "CDD_Mb_Hw.h"

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

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define MB_START_SEC_CODE
#include "Mb_MemMap.h"

MB_TEXT_SECTION extern void Mb_RequestHandle(uint32 u32HwChannel,
                                             uint32 u32MasterCore,
                                             uint32 u32Data0,
                                             uint32 u32Data1,
                                             uint32 u32CoreIndex);
MB_TEXT_SECTION extern void Mb_DoneHandle(uint32 u32HwChannel, uint32 u32CoreIndex);
MB_TEXT_SECTION             ISR(MAILBOX_ISR);
/* PRQA S 1006 ++ #Misra-C:2012 Dir-4.2 This in-line assembler construct is a language extension.
 * The code has been ignored. Reason: this must call asm */
/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 This function contains a mixture of in-line assembler
 * statements and C statements. Reason: this must call asm */
/**
 * @brief          This function handles the ISR for Mailbox channels
 *                    [SWS_Mb_00112]
 *
 * @return         void
 *
 */
MB_TEXT_SECTION ISR(MAILBOX_ISR)
{
    /* PRQA S 3469 ++
       This usage of a function-like macro looks like it could be replaced by an equivalent function
       call. REASON: Macros have higher execution efficiency
    */
    uint32 u32CoreIndex = (uint32)GET_CPU_ID();
    /* PRQA S 3469 -- */
    uint32 u32Index, u32MasterCore, u32Data0, u32Data1;
    /* [SWS_Mb_00152] */
    SchM_Enter_Mb_MB_EXCLUSIVE_AREA_09();
    /* [FMR_Mailbox_0002] */
    uint32 u32FlagStat = Mb_HL_GetIntrFlag(u32CoreIndex,
                                           (MB_USED_CHANNEL_MASK) |
                                               (MB_USED_CHANNEL_MASK << MB_CHANNEL_CONFIG_COUNT));
    SchM_Exit_Mb_MB_EXCLUSIVE_AREA_09();
    for (u32Index = 0; u32Index < MB_CHANNEL_CONFIG_COUNT; u32Index++)
    {
        if (0u != (u32FlagStat & ((uint32)1u << u32Index)))
        {
            /* request events */
            /* Master ID to Core index */
            u32MasterCore = Mb_HL_GetChannelMasterCoreIndex(u32Index);
            Mb_HL_GetChannelData(u32Index, &u32Data0, &u32Data1);

            Mb_RequestHandle(u32Index,
                             Mb_HL_Mb2CoreIndex(u32MasterCore),
                             u32Data0,
                             u32Data1,
                             u32CoreIndex);
        }
        if (0u != (u32FlagStat & ((uint32)1u << (u32Index + MB_CHANNEL_CONFIG_COUNT))))
        {
            /* done events */
            Mb_DoneHandle(u32Index, u32CoreIndex);
        }
    }
    EXIT_INTERRUPT();
}
/* PRQA S 1006,3006 -- */
#define MB_STOP_SEC_CODE
#include "Mb_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
