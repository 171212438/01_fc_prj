/**
 *   @file    Icu_Fcpit.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Icu - Fcpit driver source file.
 *   @details Fcpit source file, containing the variables and functions that are exported by the
 *            PORT driver.
 *
 *   @addtogroup ICU
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Fcpit
*   PLATFORM             : Flagchip FC73000
*   AUTOSAR VERSION      : 4.3.1
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
*   0.1.0       09/05/2023    QXW0076       N/A          Icu Initial Version
*   0.9.0       05/12/2024    QXW0076       N/A          Safety version
==================================================================================================*/
/* PRQA S 2071,5087 EOF #Misra-C:2012 Rule-20.1 Use of #include directive after code fragment.
    This attribute syntax is a language extension.
    REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 3006,1006 EOF #Misra-C:2012 Dir-4.3 Assembly language shall be encapsulated and isolated.
                        #Misra-C:2012 Dir-4.2 All usage of assembly language should be documented
    1006:[E] This in-line assembler construct is a language extension. The code has been ignored.
    3006:This function contains a mixture of in-line assembler statements and C statements.
    REASON: This is the normal usage of macros.
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Icu_Fcpit.h"
#include "SchM_Icu.h"
#include "Fcpit_Reg.h"
#include "Icu_Fcpit_RegOps.h"
/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
/**
 * @brief base address array for FCPIT
 */
#define ICU_START_SEC_CONST_32
#include "Icu_MemMap.h"
/* PRQA S 0306 ++ #Misra-C:2012 Rule-11.4 A conversion should not be performed between a pointer to
   object and an integer type 0306:Cast between a pointer to object and an integral type. REASON:
   This is the CMP base type initialization.
*/
ICU_DATA_SECTION static FCPIT_Type *const FCPIT_PTRS[] = FCPIT_BASE_PTRS;
/* PRQA S 0306 -- */
#define ICU_STOP_SEC_CONST_32
#include "Icu_MemMap.h"
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ICU_START_SEC_CODE
#include "Icu_MemMap.h"

#if (defined ICU_FCPIT_ISR_USED)
LOCAL_INLINE void Icu_Fcpit_ProcessInterrupt(const Icu_FcpitInstanceType eFcpitInstance);
#endif

#if (defined ICU_FCPIT0_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_FCPIT0_ISR);
#endif

#if (defined ICU_FCPIT1_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_FCPIT1_ISR);
#endif

/**
 * @brief Initialize a FCPIT module
 *
 * @param pConfig   -Pointer to FCPIT module configuration structure
 *
 * @implements SWDESG_ICU_190
 */
ICU_TEXT_SECTION void Icu_Fcpit_Init(const Icu_FcpitModuleConfigType *pConfig)
{
    FCPIT_Type *pFcpit = FCPIT_PTRS[pConfig->eFcpitInstance];
    ICU_FCPIT_HWA_EnableModule(pFcpit);
    if (TRUE == (pConfig->bFcpitDebugMode))
    {
        ICU_FCPIT_HWA_SetChannelRunOnDebug(pFcpit);
    }
    else
    {
        ICU_FCPIT_HWA_SetChannelStopOnDebug(pFcpit);
    }
}

/**
 * @brief De-Initialize a FCPIT module
 *
 * @param pConfig   -Pointer to FCPIT module configuration structure
 *
 * @implements SWDESG_ICU_191
 */
ICU_TEXT_SECTION void Icu_Fcpit_DeInit(const Icu_FcpitModuleConfigType *pConfig)
{
    FCPIT_Type *pFcpit = FCPIT_PTRS[(uint8)pConfig->eFcpitInstance];
    uint8       u8Index;
    /*Disable interrupt & Clear flag*/
    ICU_FCPIT_HWA_DisableChannelsInterrupt(pFcpit, 0XFU);
    ICU_FCPIT_HWA_ClearChannelsInterruptFlag(pFcpit, 0XFU);
    /*Clear Channel configuration*/
    for (u8Index = 0U; u8Index < MAX_FCPIT_CHANNEL_NUM; u8Index++)
    {
        ICU_FCPIT_HWA_ClearChannelMode(pFcpit, u8Index);
        ICU_FCPIT_HWA_ClearChannelInternalTriggerSrc(pFcpit, u8Index);
        ICU_FCPIT_HWA_ClearChannelTriggerSelect(pFcpit, u8Index);
    }
    /*Clear debug mode */
    ICU_FCPIT_HWA_SetChannelStopOnDebug(pFcpit);
    ICU_FCPIT_HWA_DisableModule(pFcpit);
}

/**
 * @brief Initialize an Fcpit hardware channel
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param pConfig        -The channel configuration
 *
 * @implements SWDESG_ICU_192
 */
ICU_TEXT_SECTION void Icu_Fcpit_InitHwChannel(const Icu_FcpitInstanceType       eFcpitInstance,
                                              const Icu_FcpitChannelConfigType *pConfig)
{
    FCPIT_Type *pFcpit = FCPIT_PTRS[(uint8)eFcpitInstance];
    /*config Trgsel source*/
    if (FCPIT_TRIGGER_INTERNAL == (pConfig->eFcpitTriggerSrc))
    {
        ICU_FCPIT_HWA_SetChannelInternalTriggerSrc(pFcpit, pConfig->u8FcpitChannel);
    }
    else
    {
        ICU_FCPIT_HWA_ClearChannelInternalTriggerSrc(pFcpit, pConfig->u8FcpitChannel);
    }
    /*config Trgsel select*/
    ICU_FCPIT_HWA_SelectChannelTriggerSelect(pFcpit,
                                             pConfig->u8FcpitChannel,
                                             (uint8)pConfig->eFcpitTriggerSelect);
    /*config channel mode*/
    ICU_FCPIT_HWA_ConfigChannelMode(pFcpit, pConfig->u8FcpitChannel, pConfig->eFcpitChannelMode);
}

/**
 * @brief start a Fcpit hardware channel.
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param u8Fcpitchannel          -The Fcpit channel index
 *
 * @implements SWDESG_ICU_194
 */
ICU_TEXT_SECTION void Icu_Fcpit_StartFcpitChannel(const Icu_FcpitInstanceType eFcpitInstance,
                                                  const uint8                 u8Fcpitchannel)
{
    FCPIT_Type *pFcpit = FCPIT_PTRS[(uint8)eFcpitInstance];
    ICU_FCPIT_HWA_EnableChannel(pFcpit, u8Fcpitchannel);
    ICU_FCPIT_HWA_EnableChannelsInterrupt(pFcpit, (uint8)(1U << u8Fcpitchannel));
}

/**
 * @brief stop a Fcpit hardware channel.
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param u8Fcpitchannel          -The Fcpit channel index
 *
 * @implements SWDESG_ICU_195
 */
ICU_TEXT_SECTION void Icu_Fcpit_StopFcpitChannel(const Icu_FcpitInstanceType eFcpitInstance,
                                                 const uint8                 u8Fcpitchannel)
{
    FCPIT_Type *pFcpit = FCPIT_PTRS[(uint8)eFcpitInstance];
    ICU_FCPIT_HWA_DisableChannel(pFcpit, u8Fcpitchannel);
    ICU_FCPIT_HWA_DisableChannelsInterrupt(pFcpit, (uint8)(1U << u8Fcpitchannel));
}

/**
 * @brief Set a Fcpit hardware channel to sleep mode .
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param u8Fcpitchannel          -The Fcpit channel index
 *
 * @implements SWDESG_ICU_197
 */
ICU_TEXT_SECTION void Icu_Fcpit_SetSleepMode(const Icu_FcpitInstanceType eFcpitInstance,
                                             const uint8                 u8Fcpitchannel)
{
    FCPIT_Type *pFcpit = FCPIT_PTRS[(uint8)eFcpitInstance];
    ICU_FCPIT_HWA_DisableChannel(pFcpit, u8Fcpitchannel);
    ICU_FCPIT_HWA_DisableChannelsInterrupt(pFcpit, (uint8)(1U << u8Fcpitchannel));
    ICU_FCPIT_HWA_ClearChannelsInterruptFlag(pFcpit, (uint8)(1U << u8Fcpitchannel));
}

/**
 * @brief Set a Fcpit hardware channel to normal mode.
 *
 * @param eFcpitInstance  -The Fcpit Instance
 * @param u8Fcpitchannel          -The Fcpit channel index
 *
 * @implements SWDESG_ICU_196
 */
ICU_TEXT_SECTION void Icu_Fcpit_SetNormalMode(const Icu_FcpitInstanceType eFcpitInstance,
                                              const uint8                 u8Fcpitchannel)
{
    FCPIT_Type *pFcpit = FCPIT_PTRS[(uint8)eFcpitInstance];
    ICU_FCPIT_HWA_EnableChannel(pFcpit, u8Fcpitchannel);
    ICU_FCPIT_HWA_EnableChannelsInterrupt(pFcpit, (uint8)(1U << u8Fcpitchannel));
}

#if (defined ICU_FCPIT_ISR_USED)
LOCAL_INLINE void Icu_Fcpit_ProcessInterrupt(const Icu_FcpitInstanceType eFcpitInstance)
{
    /* SWS_Icu_00119,SWS_Icu_00149,SWS_Icu_00150 */
    FCPIT_Type *pFcpit     = FCPIT_PTRS[(uint8)eFcpitInstance];
    uint32      u32IntMask = ICU_FCPIT_HWA_ReadEnableInterruptFlag(pFcpit);
    uint32      u32Intflag = ICU_FCPIT_HWA_ReadChannelsInterruptFlag(pFcpit);
    u32IntMask &= u32Intflag;
#if (ICU_MULTICORE_SUPPORT == STD_ON)
    uint8 u8CoreID = Icu_GetCoreID();
    if ((Icu_pConfig[u8CoreID] != NULL_PTR) && (0U != u32IntMask))
#else
    if ((Icu_pConfig != NULL_PTR) && (0U != u32IntMask))
#endif
    {
        /* PRQA S 3205 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type
         * declarations Reason: u32Rvalue will be used by Assemble instructions */
        volatile uint32 u32Rvalue;
        /* PRQA S 3205 -- */
        uint32 u32Channel;
        while ((u32IntMask != (uint32)0U))
        {
            /* PRQA S 1006 ++ #Misra-C:2012: Dir-4.2 All usage of assembly language should be
           documented. Reason: Here we use a Assemble instruction to reduce code execution time */
            ASM_KEYWORD volatile("rbit %0,%1" : "=r"(u32Rvalue) : "r"(u32IntMask));
            ASM_KEYWORD volatile("clz %0,%1" : "=r"(u32Channel) : "r"(u32Rvalue));
            uint32 u32ChannelValue = ICU_FCPIT_HWA_ReadChannelValue(pFcpit, (uint8)u32Channel);
            /* PRQA S 1006 -- */
            /* PRQA S 4342 ++ #Misra-C:2012: Rule-10.5 The value of an expression should not be cast
            to an inappropriate essential type. Reason: The relative register bits can be safely
            converted to the enumeration type */
            /* PRQA S 4393,4394 ++ #Misra-C:2012 Rule-10.8 The value of a composite expression shall
             * not be cast to a different essential type category or a wider essential type Reason:
             * It is allowed to cast the value */
            /* PRQA S 4543 ++ #Misra-C:2012: Rule-10.1 Operands shall not be of an inappropriate
             * essential type. Reason: No problem doing this conversion as the value is within the
             * range of the cast type.
             */
            Icu_HW_FcpitChannelIntrProcess((Icu_FcpitInstanceType)eFcpitInstance,
                                           u32Channel,
                                           u32ChannelValue);
            /* PRQA S 4543 -- */
            /* PRQA S 4393,4394 -- */
            /* PRQA S 4342 -- */
            /* PRQA S 1891 ++ #Misra-C:2012: Rule-10.7 If a composite expression is used as one
            operand of an operator in which the usual arithmetic conversions are performed then the
            other operand shall not have wider essential type. Reason: It is safety to multiply the
            u32IntMask here */
            u32IntMask &= ~(1u << u32Channel);
            /* PRQA S 1891 -- */
            ICU_FCPIT_HWA_ClearChannelsInterruptFlag(pFcpit, (uint8)(1U << u32Channel));
        }
    }
    else
    {
        /*Do nothing*/
    }
}
#endif

#if (defined ICU_FCPIT0_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_FCPIT0_ISR)
{
    Icu_Fcpit_ProcessInterrupt(ICU_FCPIT0);
    EXIT_INTERRUPT();
}
#endif

#if (defined ICU_FCPIT1_ISR_USED)
ICU_TEXT_SECTION ISR(ICU_FCPIT1_ISR)
{
    Icu_Fcpit_ProcessInterrupt(ICU_FCPIT1);
    EXIT_INTERRUPT();
}
#endif

#define ICU_STOP_SEC_CODE
#include "Icu_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
