/**
*   @file    Qdt_Isr.c
*   @version 1.5.1
*
*   @brief   AUTOSAR CDD QDT - QDT Driver ISR layer source file.
*   @details Contains functions for accessing QDT from the Qdt driver perspective
*
*   @addtogroup QDT
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : QDT
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
*   0.1.0       2025/3/13    Flagchip073   N/A          QDT Initial Version
==================================================================================================*/
/* PRQA S 5087 EOF
 * This attribute syntax is a language extension.
 * Reason: #include statements are not preceded only by preprocessor directives or comments, in this case,
 * the defined MACRO used to select different parameter or code properties in memmap.h
 */

#ifdef __cplusplus
extern "C" {
#endif


/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "CDD_Qdt.h"
#include "Qdt_HWA.h"
#include "Mcal.h"
#include "CDD_QDT_Cfg.h"
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
#define QDT_START_SEC_VAR_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"
#if ((defined(QDT_INSTANCE0_INT) && (QDT_INSTANCE0_INT == STD_ON)) || \
    (defined(QDT_INSTANCE1_INT) && (QDT_INSTANCE1_INT == STD_ON)))
QDT_DATA_SECTION static QDT_Type* const aQdt_Base[] = QDT_BASE_PTRS;
#endif
#define QDT_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Qdt_MemMap.h"
/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#if ((defined(QDT_INSTANCE0_INT) && (QDT_INSTANCE0_INT == STD_ON)) || \
    (defined(QDT_INSTANCE1_INT) && (QDT_INSTANCE1_INT == STD_ON)) || \
    (defined(QDT_INSTANCE2_INT) && (QDT_INSTANCE2_INT == STD_ON)) || \
    (defined(QDT_INSTANCE3_INT) && (QDT_INSTANCE3_INT == STD_ON)))
#if (QDT_SUPPORT_MULTICORE == STD_ON)
extern const QDT_ConfigType *Qdt_pConfig;
#endif

extern QDT_CallbackType aTOFNotifcation[QDT_INSTANCE_COUNT];

extern QDT_CallbackType aWdogNotifcation[QDT_INSTANCE_COUNT];

extern QDT_CallbackType aChannelNotifcation[QDT_INSTANCE_COUNT][QDT_CHANNEL_COUNT];
/* PRQA S 3006 -- */
#endif
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define QDT_START_SEC_CODE

/**
* @brief Include Memory mapping specification
*
*/
#include "Qdt_MemMap.h"
#if ((defined(QDT_INSTANCE0_INT) && (QDT_INSTANCE0_INT == STD_ON)) || \
    (defined(QDT_INSTANCE1_INT) && (QDT_INSTANCE1_INT == STD_ON)) || \
    (defined(QDT_INSTANCE2_INT) && (QDT_INSTANCE2_INT == STD_ON)) || \
    (defined(QDT_INSTANCE3_INT) && (QDT_INSTANCE3_INT == STD_ON)))
static void Qdt_InterruptProcess(uint8 u8Instance);
/* PRQA S 3006 -- */
#endif

/* PRQA S 3006 ++ #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
 * Reason: The assembly statement has been encapsulated and isolated.*/
#if (defined(QDT_INSTANCE0_INT) && (QDT_INSTANCE0_INT == STD_ON))
QDT_TEXT_SECTION ISR(Qdt_IsrQDT0_ALL);
#endif

#if (defined(QDT_INSTANCE1_INT) && (QDT_INSTANCE1_INT == STD_ON))
QDT_TEXT_SECTION ISR(Qdt_IsrQDT1_ALL);
#endif

#if (defined(QDT_INSTANCE2_INT) && (QDT_INSTANCE2_INT == STD_ON))
QDT_TEXT_SECTION ISR(Qdt_IsrQDT2_ALL);
#endif

#if (defined(QDT_INSTANCE3_INT) && (QDT_INSTANCE3_INT == STD_ON))
QDT_TEXT_SECTION ISR(Qdt_IsrQDT3_ALL);
#endif

#define QDT_STOP_SEC_CODE

/**
* @brief Include Memory mapping specification
*
*/
#include "Qdt_MemMap.h"
/*==================================================================================================
*                                      Global FUNCTIONS
==================================================================================================*/
#define QDT_START_SEC_CODE
/**
* @brief Include Memory mapping specification
*
*/
#include "Qdt_MemMap.h"

#if (defined(QDT_INSTANCE0_INT) && (QDT_INSTANCE0_INT == STD_ON))
/**+
 *
*   @brief   This function process the interrupt QDT0.
*   @details This function process the QDT0 interrup
*   @isr
*   @implements  QDTInterfaceNo_Isr_Activity
*
*/
QDT_TEXT_SECTION ISR(Qdt_IsrQDT0_ALL)
{
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    uint8    u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if(u8CurrentCore == Qdt_pConfig->Qdt_CtrlCoresMappingPtr[QDT_INSTANCE0_CONTROLLER_ID])
    {
#endif
        Qdt_InterruptProcess(0U);
        EXIT_INTERRUPT();
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif
}
#endif

#if (defined(QDT_INSTANCE1_INT) && (QDT_INSTANCE1_INT == STD_ON))
/**
*   @brief   This function process the interrupt QDT1.
*   @details This function process the QDT1 interrup
*   @isr
*   @implements  QDTInterfaceNo_Isr_Activity
*
*/
QDT_TEXT_SECTION ISR(Qdt_IsrQDT1_ALL)
{
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    uint8    u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if(u8CurrentCore == Qdt_pConfig->Qdt_CtrlCoresMappingPtr[QDT_INSTANCE1_CONTROLLER_ID])
    {
#endif
        Qdt_InterruptProcess(1U);
        EXIT_INTERRUPT();
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif
}
#endif

#if (defined(QDT_INSTANCE2_INT) && (QDT_INSTANCE2_INT == STD_ON))
/**
*   @brief   This function process the interrupt QDT1.
*   @details This function process the QDT1 interrup
*   @isr
*   @implements  QDTInterfaceNo_Isr_Activity
*
*/
QDT_TEXT_SECTION ISR(Qdt_IsrQDT2_ALL)
{
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    uint8    u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if(u8CurrentCore == Qdt_pConfig->Qdt_CtrlCoresMappingPtr[QDT_INSTANCE2_CONTROLLER_ID])
    {
#endif
        Qdt_InterruptProcess(2U);
        EXIT_INTERRUPT();
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif
}
#endif

#if (defined(QDT_INSTANCE3_INT) && (QDT_INSTANCE3_INT == STD_ON))
/**
*   @brief   This function process the interrupt QDT1.
*   @details This function process the QDT1 interrup
*   @isr
*   @implements  QDTInterfaceNo_Isr_Activity
*
*/
QDT_TEXT_SECTION ISR(Qdt_IsrQDT3_ALL)
{
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    uint8    u8CurrentCore;

    u8CurrentCore = GET_CPU_ID();
#endif

#if (QDT_SUPPORT_MULTICORE == STD_ON)
    /* Check if the controller is mapped on current partition */
    if(u8CurrentCore == Qdt_pConfig->Qdt_CtrlCoresMappingPtr[QDT_INSTANCE3_CONTROLLER_ID])
    {
#endif
        Qdt_InterruptProcess(3U);
        EXIT_INTERRUPT();
#if (QDT_SUPPORT_MULTICORE == STD_ON)
    }
#endif
}
#endif

#if ((defined(QDT_INSTANCE0_INT) && (QDT_INSTANCE0_INT == STD_ON)) || \
    (defined(QDT_INSTANCE1_INT) && (QDT_INSTANCE1_INT == STD_ON)) || \
    (defined(QDT_INSTANCE2_INT) && (QDT_INSTANCE2_INT == STD_ON)) || \
    (defined(QDT_INSTANCE3_INT) && (QDT_INSTANCE3_INT == STD_ON)))
/**
*   @brief   This function process the interrupt.
*   @details This function process the QDT interrupt
*
*   @param[in] u8Instance        Hardware QDT instance.
*
*
*/
static void Qdt_InterruptProcess(uint8 u8Instance)
{
    uint8 u8Channel;
    QDT_Type *pQdt;

    pQdt = aQdt_Base[u8Instance];
    /* Timer overflow interrupt */
    if(0u != QDT_HWA_GetTOIE(pQdt))
    {
        if(0u != QDT_HWA_GetTOF(pQdt))
        {
            QDT_HWA_ClearTOF(pQdt);
            if(NULL_PTR != aTOFNotifcation[u8Instance])
            {
                aTOFNotifcation[u8Instance]();
            }
        }
    }
    /* Watchdog interrupt */
    if(0u != QDT_HWA_GetWDOGIE(pQdt))
    {
        if(0u != QDT_HWA_GetWDOGF(pQdt))
        {
            QDT_HWA_ClearWDOGF(pQdt);
            if(NULL_PTR != aWdogNotifcation[u8Instance])
            {
                aWdogNotifcation[u8Instance]();
            }
        }
    }
    /* channel interrupt */
    for(u8Channel = 0u; u8Channel < QDT_CHANNEL_COUNT; u8Channel++)
    {

        if(0u != QDT_HWA_GetCHIE(pQdt, u8Channel))
        {
            if(0u != QDT_HWA_GetCHF(pQdt, u8Channel))
            {
                QDT_HWA_ClearCHF(pQdt, u8Channel);
                if(NULL_PTR != aChannelNotifcation[u8Instance][u8Channel])
                {
                    aChannelNotifcation[u8Instance][u8Channel]();
                }
            }
        }
    }
}
/* PRQA S 3006 -- */
#endif

#define QDT_STOP_SEC_CODE
/**
* @brief Include Memory mapping specification
*
*/
#include "Qdt_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
