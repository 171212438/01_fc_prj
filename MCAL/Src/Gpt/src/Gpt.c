/* PRQA S 0292 EOF
 * REASON: using @ in comment
 */
/**
 *   @file    Gpt.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Gpt - driver API and development errors implemention.
 *   @details This file contains the Gpt Autosar driver API and development errors implemention.
 *
 *   @addtogroup GPT
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : GPT
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
*   0.1.0       23/5/2023     QXW0076       N/A          GPT Initial Version
*   0.3.0       18/10/2023    QXW0076       N/A          Add MultiCore Feature
*   0.4.0       14/11/2023    QXW0076       N/A          clear some misra warning
*   0.5.0       17/01/2024    QXW0076       N/A          add global time base and fix bug
*   0.6.0       22/03/2024    QXW0074       N/A          Add support for existing features on FC7240
*                                                        (update global time base, the timer width
of FTU1/2 change to 24bit)
*                                                        and fix bug
*   0.7.0       26/04/2024    QXW0074       N/A          Optimization the xdm of GPT module and add
Gpt_Tpu support(only available on fc7240)
*   0.8.0       31/07/2024    QXW0074       N/A          Optimization code(rename the function in
Gpt_Rtc_RegOps.h and delete unused function/fix some QAC analysis warning)
*   0.9.0       06/12/2024    QXW0074       N/A          Add 8MDQ support
*   1.1.0       26/01/2025    QXW0074       N/A          Fix bug that Gpt_GetTimeElapsed(FTU) return
wrong value when the frequency of FTU is relatively low.
*                                                        Clear the ISR flag immediately when enter
the interrupt service routing
==================================================================================================*/

/* PRQA S 2071,5087 EOF
   This attribute syntax is a language extension.
   REASON: Variables and text need to be placed in the specified location
*/
/* PRQA S 3218 EOF
   File scope static, '%1s', is only accessed in one function.
   REASON: This is a normal usage.
*/
#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Gpt.h"
#include "Gpt_Irq.h"
#include "Mcal.h"
#include "SchM_Gpt.h"
#include "SpinLock.h"
#if ((GPT_DEV_ERROR_DETECT == STD_ON) || (GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
/* [SWS_Gpt_00375] [SWDESG_GPT_128]*/
#include "Det.h"
#endif

/*=================================================================================================
*                                       VERSION CHECKS
=================================================================================================*/

#ifndef GPT_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (GPT_AR_RELEASE_MAJOR_VERSION != GPT_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef GPT_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (GPT_SW_MAJOR_VERSION != GPT_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef GPT_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (GPT_SW_MINOR_VERSION != GPT_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef GPT_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (GPT_SW_PATCH_VERSION != GPT_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/

#define GPT_START_SEC_VAR_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"
/* PRQA S 0686 ++ #Misra-C:2012 Rule-9.3 Arrays shall not be partially initialized
 * Reason: global variables will have initialization value */
/** @brief Global parameter which used to store GPT module mode */
GPT_DATA_SECTION static volatile Gpt_ModeType Gpt_Mode[MAX_CORE_NUM] = { GPT_MODE_NORMAL };

/** @brief Global parameter which used to store GPT configuration */
GPT_DATA_SECTION static const Gpt_ConfigType *Gpt_ConfigPtr[MAX_CORE_NUM] = { NULL_PTR };
/* PRQA S 0686-- */
#define GPT_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"

#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"
#if (GPT_PRECOMPILE_SUPPORT == STD_ON)
extern const Gpt_ConfigType Gpt_Config;
#endif
#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"

#if ((GPT_MULTICORE_SUPPORT == STD_ON) && \
     ((GPT_PREDEFTIMER_FUNCTION_API == STD_ON) || (GPT_FTU_GTB_SUPPORT == STD_ON)))
#define GPT_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
GPT_DATA_SECTION static uint32 s_u32GptSpinLock;
#define GPT_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Gpt_MemMap.h"
#endif

#define GPT_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"

/** @brief Global parameter which used to store GPT runtime information */
GPT_DATA_SECTION static Gpt_ChannelInfoType Gpt_ConfigChannelInfo[MAX_CONFIGURED_CHANNELS_U8];

/** @brief Global parameter which used to store GPT channel stop time value */
GPT_DATA_SECTION static volatile Gpt_ValueType Gpt_StopTime[MAX_CONFIGURED_CHANNELS_U8];

#define GPT_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/

#if (GPT_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE void    Gpt_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId);
LOCAL_INLINE boolean Gpt_ValidSetMode(Gpt_ModeType Mode);
#endif

#if (GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
LOCAL_INLINE void Gpt_ReportRuntimeDetError(uint8 u8ServiceId, uint8 u8ErrorId);
#endif

/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/

#if (GPT_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE void Gpt_ReportDetError(uint8 u8ServiceId, uint8 u8ErrorId)
{
    /* [SWS_Gpt_00406] */
    (void)Det_ReportError((uint16)GPT_MODULE_ID,
                          (uint8)GPT_INSTANCE_ID,
                          (uint8)u8ServiceId,
                          (uint8)u8ErrorId);
}

/**
 * @brief  Validate the mode to parameter
 *
 * @param Mode       -The Gpt mode
 * @return           -Gpt mode
 * @retval            TRUE  The mode is valid
 * @retval            FALSE The mode is invalid
 */

LOCAL_INLINE boolean Gpt_ValidSetMode(Gpt_ModeType Mode)
{
    boolean bValid = (boolean)FALSE;
    uint8   u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00228] [SWDESG_GPT_009] */
        Gpt_ReportDetError((uint8)GPT_SETMODE_ID, (uint8)GPT_E_UNINIT);
    }
    else if ((GPT_MODE_SLEEP != Mode) && (GPT_MODE_NORMAL != Mode))
    {
        /* [SWS_Gpt_00231] [SWDESG_GPT_008] */
        Gpt_ReportDetError((uint8)GPT_SETMODE_ID, (uint8)GPT_E_PARAM_MODE);
    }
    else
    {
        bValid = (boolean)TRUE;
    }
    return bValid;
}
#endif

#if (GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
LOCAL_INLINE void Gpt_ReportRuntimeDetError(uint8 u8ServiceId, uint8 u8ErrorId)
{
    /* [SWS_Gpt_00405] */
    (void)Det_ReportRuntimeError((uint16)GPT_MODULE_ID, (uint8)GPT_INSTANCE_ID, u8ServiceId, u8ErrorId);
}
#endif

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

/* PRQA S 3219 ++
   3219:Static function '%1s()' is not used within this translation unit.
   REASON: Configuration will guarantee that the function will be called when it is defined.
*/

#if ((GPT_MULTICORE_SUPPORT == STD_ON) && \
     ((GPT_PREDEFTIMER_FUNCTION_API == STD_ON) || (GPT_FTU_GTB_SUPPORT == STD_ON)))
/**
 * @brief          Get the spin lock of the Gpt
 *
 * @param[in]      u8ServiceID   The service id of the caller function
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Get spin lock success.
 * @retval         E_NOT_OK      Get spin lock failed.
 *
 */
GPT_TEXT_SECTION LOCAL_INLINE Std_ReturnType Gpt_GetSpinLock(uint8 u8ServiceID)
{
    Std_ReturnType eSucc = E_OK;
    /* PRQA S 2905 ++
                Constant: Positive integer value truncated by cast to a smaller unsigned type.
                REASON: The actual timeout period may vary depending on the MCU frequency.
        */
    uint32 u32Timeout = GPT_SPIN_LOCK_TIMEOUT;
    /* PRQA S 2905 -- */
    /* PRQA S 3415 ++ #Misra-C:2012 Rule-13.5 The right hand operand of a logical && or || operator
     * shall not contain persistent side effects Reason: This function has no side effect (reviewed)*/
    while ((0U < u32Timeout) && (E_OK != SpinLock_Acquire(&s_u32GptSpinLock)))
    {
        u32Timeout--;
    }
    /* PRQA S 3415 -- */
    if (0U == u32Timeout)
    {
        eSucc = E_NOT_OK;
#if (GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        (void)Gpt_ReportRuntimeDetError(u8ServiceID, GPT_E_GET_SPIN_LOCK_FAILED);
#endif
    }
    return eSucc;
}

/**
 * @brief          Release the spin lock of the mailbox
 *
 * @return         void
 *
 */
GPT_TEXT_SECTION LOCAL_INLINE void Gpt_ReleaseSpinLock(void)
{
    SpinLock_Release(&s_u32GptSpinLock);
}

/* PRQA S 3219 -- */

#endif
/**
 * @brief GPT initialization [SWS_Gpt_00280] [SWDESG_GPT_001] [FUNC_Gpt_0029] [SWDESG_GPT_001]
 *
 * @param ConfigPtr Pointer to configuration value
 */
GPT_TEXT_SECTION void Gpt_Init(const Gpt_ConfigType *ConfigPtr)
{
    Gpt_ChannelType u8Channel;
    uint8           u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR != Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00307] [SWS_Gpt_00309] [SWDESG_GPT_002] */
        Gpt_ReportDetError((uint8)GPT_INIT_ID, (uint8)GPT_E_ALREADY_INITIALIZED);
    }
#if (GPT_PRECOMPILE_SUPPORT == STD_OFF)
    else if (NULL_PTR == ConfigPtr)
#elif (GPT_PRECOMPILE_SUPPORT == STD_ON)
    else if (NULL_PTR != ConfigPtr)
#endif
    {
        /* [SWDESG_GPT_003] */
        Gpt_ReportDetError((uint8)GPT_INIT_ID, (uint8)GPT_E_INIT_FAILED);
    }
    else
#endif
    {
#if (GPT_PRECOMPILE_SUPPORT == STD_ON)
        Gpt_ConfigPtr[u8CoreId] = &Gpt_Config;
        (void)ConfigPtr;
#else
        /* [SWS_Gpt_00006] */
        Gpt_ConfigPtr[u8CoreId] = ConfigPtr;
#endif
#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
#if (GPT_MULTICORE_SUPPORT == STD_ON)
        SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_11();
        if (E_OK == Gpt_GetSpinLock(GPT_INIT_ID))
        {
#endif
            /*Initialize and Start Predef Timers. [SWS_Gpt_00390] */
            /* PRQA S 3469 ++
                        This usage of a function-like macro looks like it could be replaced by an
               equivalent function call. REASON: Macros have higher execution efficiency
                */
            Gpt_HL_StartPredefTimer(Gpt_ConfigPtr[u8CoreId], u8CoreId);
            /* PRQA S 3469 -- */
#if (GPT_MULTICORE_SUPPORT == STD_ON)
            Gpt_ReleaseSpinLock();
        }
        SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_11();
#endif
#endif
        /*Initialize for each channel the runtime status informations.*/
        for (u8Channel = 0U; u8Channel < MAX_CONFIGURED_CHANNELS_U8; u8Channel++)
        {

#if (GPT_MULTICORE_SUPPORT == STD_ON)
            if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                /*Disable notification [SWS_Gpt_00107] */
                Gpt_ConfigChannelInfo[u8Channel].bNotificationEnabled = (boolean)FALSE;

#if ((GPT_WAKEUP_FUNCTION_API == STD_ON) && (GPT_REPORT_WAKEUP_SOURCE == STD_ON))
                /*Disable wakeup [SWS_Gpt_00258] */
                Gpt_ConfigChannelInfo[u8Channel].bWakeupEnabled = (boolean)FALSE;
                /*Clear wakeup generation status*/
                Gpt_ConfigChannelInfo[u8Channel].bWakeupGenerated = (boolean)FALSE;
#endif
                /* Initialize the running information of the channel*/
                Gpt_ConfigChannelInfo[u8Channel].eChannelStatus = GPT_STATUS_INITIALIZED;
                Gpt_StopTime[u8Channel]                         = 0U;
                /* [SWS_Gpt_00068] */
                Gpt_HL_Init(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[u8Channel]),
                            Gpt_ConfigPtr[u8CoreId]->pGptHw2ChannelMap);
            }
        }
        /* [SWS_Gpt_00339] */
        Gpt_Mode[u8CoreId] = GPT_MODE_NORMAL;
    }
}

#if (GPT_DEINIT_API == STD_ON)
/**
 * @brief De-initialization [SWS_Gpt_00281] [SWDESG_GPT_004]
 *
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_DeInit(void)
{
    Gpt_ChannelType u8Channel;
    Std_ReturnType  u8ChannelStatus = (Std_ReturnType)E_OK;
    uint8           u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00220] [SWDESG_GPT_005] */
        u8ChannelStatus = (Std_ReturnType)E_NOT_OK;
        Gpt_ReportDetError((uint8)GPT_DEINIT_ID, (uint8)GPT_E_UNINIT);
    }
    else
#endif
    {
        for (u8Channel = 0U; u8Channel < MAX_CONFIGURED_CHANNELS_U8; u8Channel++)
        {
#if (GPT_MULTICORE_SUPPORT == STD_ON)
            if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                /* [SWS_Gpt_00234] [SWDESG_GPT_006] */
                if (GPT_STATUS_RUNNING == Gpt_ConfigChannelInfo[u8Channel].eChannelStatus)
                {
#if (GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                    Gpt_ReportRuntimeDetError((uint8)GPT_DEINIT_ID, (uint8)GPT_E_BUSY);
#endif
                    u8ChannelStatus = (Std_ReturnType)E_NOT_OK;
                    break;
                }
            }
        }
    }

    /* PRQA S 3469 ++
                This usage of a function-like macro looks like it could be replaced by an equivalent
       function call. REASON: Macros have higher execution efficiency
        */
    if ((NULL_PTR != Gpt_ConfigPtr[u8CoreId]) && ((Std_ReturnType)E_OK == u8ChannelStatus))
    /* PRQA S 3469 -- */
    {
#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
#if (GPT_MULTICORE_SUPPORT == STD_ON)
        SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_12();
        if (E_OK == Gpt_GetSpinLock(GPT_DEINIT_ID))
        {
#endif
            /* Deinitialize and stop Predef timers. [SWS_Gpt_00391] */
            Gpt_HL_StopPredefTimer(Gpt_ConfigPtr[u8CoreId], u8CoreId);
#if (GPT_MULTICORE_SUPPORT == STD_ON)
            Gpt_ReleaseSpinLock();
        }
        SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_12();
#endif
#endif

        for (u8Channel = 0U; u8Channel < MAX_CONFIGURED_CHANNELS_U8; u8Channel++)
        {
#if (GPT_MULTICORE_SUPPORT == STD_ON)
            if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[u8Channel] == u8CoreId)
#endif
            {
                /* Disable notification [SWS_Gpt_00105] */
                Gpt_ConfigChannelInfo[u8Channel].bNotificationEnabled = (boolean)FALSE;
#if ((GPT_WAKEUP_FUNCTION_API == STD_ON) && (GPT_REPORT_WAKEUP_SOURCE == STD_ON))
                /* Disable wakeup [SWS_Gpt_00105] */
                Gpt_ConfigChannelInfo[u8Channel].bWakeupEnabled = (boolean)FALSE;
                /* Clear wakeup generation status */
                Gpt_ConfigChannelInfo[u8Channel].bWakeupGenerated = (boolean)FALSE;
#endif
                /* Deinitialize the running information of the channel [SWS_Gpt_00363] */
                Gpt_ConfigChannelInfo[u8Channel].eChannelStatus = GPT_STATUS_UNINITIALIZED;
                Gpt_StopTime[u8Channel]                         = 0U;

                /*Deinitialize hardware timer channel. [SWS_Gpt_00008] [SWS_Gpt_00162] [SWS_Gpt_00308] */
                Gpt_HL_DeInit(&((Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[u8Channel])));
            }
        }
        /* Writing NULL to configuration pointer is mandatory because that variable
           is used to test the initialization of the driver */
        Gpt_ConfigPtr[u8CoreId] = NULL_PTR;
    }
}
/* PRQA S 1503 --*/
#endif

#if (GPT_TIME_ELAPSED_API == STD_ON)
/**
 * @brief Get channel elapsed value [SWS_Gpt_00282] [SWS_Gpt_00113] [SWDESG_GPT_047]
 *
 * @param Channel Logic channel number
 * @return Gpt_ValueType
 */
GPT_TEXT_SECTION Gpt_ValueType Gpt_GetTimeElapsed(Gpt_ChannelType Channel)
{
    Gpt_HwChannelInfoType tReturnHwChannelInfo;
    Gpt_ValueType         returnValue = (Gpt_ValueType)0;
    uint8                 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
    tReturnHwChannelInfo.bChannelRollover = (boolean)FALSE;
    tReturnHwChannelInfo.tTargetTime      = (Gpt_ValueType)0;
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00222] [SWDESG_GPT_045] */
        Gpt_ReportDetError((uint8)GPT_TIMEELAPSED_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        /* [SWS_Gpt_00210] [SWDESG_GPT_046] */
        Gpt_ReportDetError((uint8)GPT_TIMEELAPSED_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_TIMEELAPSED_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        /* get the elapsed time [SWS_Gpt_00010] */
        returnValue = Gpt_HL_GetTimeElapsed(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]),
                                            &tReturnHwChannelInfo);
        /*Check the channel status*/
        switch (Gpt_ConfigChannelInfo[Channel].eChannelStatus)
        {
            case GPT_STATUS_RUNNING:
                /*Check if channel counter has already rollover*/
                if (((boolean)TRUE == tReturnHwChannelInfo.bChannelRollover) &&
                    (GPT_CH_MODE_ONESHOT == (Gpt_ConfigPtr[u8CoreId]
                                                 ->pGptChannelConfig[Channel]
                                                 .tGptChannelCommonConfig.eGptChannelMode)))
                {
                    /*The timer has already expired.The hardware timer status is not yet
                    synced with the logical timer status*/
                    returnValue = tReturnHwChannelInfo.tTargetTime;
                }
                break;

            case GPT_STATUS_INITIALIZED:
                /* [SWS_Gpt_00295] */
                returnValue = (Gpt_ValueType)0;
                break;

            case GPT_STATUS_STOPPED:
                /*Return elapsed time at the when the channel was stopped [SWS_Gpt_00297] */
                returnValue = Gpt_StopTime[Channel];
                break;

            case GPT_STATUS_EXPIRED:
                /* [SWS_Gpt_00299] */
                returnValue = tReturnHwChannelInfo.tTargetTime;
                break;

            default:
                /*Only the above four channel states are allowed when this function is called*/
                break;
        }
    }
    return returnValue;
}
#endif

#if (GPT_TIME_REMAINING_API == STD_ON)
/**
 * @brief Get channel remaining value [SWS_Gpt_00283] [SWS_Gpt_00114] [SWDESG_GPT_036]
 *
 * @param Channel Logic channel number
 * @return Gpt_ValueType
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION Gpt_ValueType Gpt_GetTimeRemaining(Gpt_ChannelType Channel)
{
    Gpt_HwChannelInfoType returnHwChannelInfo;
    Gpt_ValueType         returnValue = (Gpt_ValueType)0;
    uint8                 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
    returnHwChannelInfo.bChannelRollover = (boolean)FALSE;
    returnHwChannelInfo.tTargetTime      = (Gpt_ValueType)0;
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00223]  [SWDESG_GPT_034] */
        Gpt_ReportDetError((uint8)GPT_TIMEREMAINING_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        /* [SWS_Gpt_00211]  [SWDESG_GPT_035] */
        Gpt_ReportDetError((uint8)GPT_TIMEREMAINING_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_TIMEREMAINING_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        /* get the elapsed time*/
        returnValue = Gpt_HL_GetTimeElapsed(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]),
                                            &returnHwChannelInfo);
        /*Check the channel status*/
        switch (Gpt_ConfigChannelInfo[Channel].eChannelStatus)
        {
            case GPT_STATUS_RUNNING:
                /*Check if channel counter has already roll-over*/
                if (((boolean)TRUE == returnHwChannelInfo.bChannelRollover) &&
                    (GPT_CH_MODE_ONESHOT == (Gpt_ConfigPtr[u8CoreId]
                                                 ->pGptChannelConfig[Channel]
                                                 .tGptChannelCommonConfig.eGptChannelMode)))
                {
                    /*The timer has already expired.The hardware timer status is not yet
                    synchronised with the logical timer status*/
                    returnValue = (Gpt_ValueType)0;
                }
                else
                {
                    /*Calculate remaining time from elapsed time [SWS_Gpt_00083]*/
                    returnValue = returnHwChannelInfo.tTargetTime - returnValue;
                }
                break;

            case GPT_STATUS_INITIALIZED:
                /* [SWS_Gpt_00301] */
                returnValue = (Gpt_ValueType)0;
                break;

            case GPT_STATUS_STOPPED:
                /* [SWS_Gpt_00303] */
                returnValue = returnHwChannelInfo.tTargetTime - Gpt_StopTime[Channel];
                break;

            case GPT_STATUS_EXPIRED:
                /* [SWS_Gpt_00305] */
                returnValue = (Gpt_ValueType)0;
                break;

            default:
                /*Only the above four channel states are allowed when this function is called*/
                break;
        }
    }

    return returnValue;
}
/*PRQA S 1503 -- */
#endif

/**
 * @brief Start channel [SWS_Gpt_00284] [SWS_Gpt_00115] [SWDESG_GPT_040]
 *
 * @param Channel Logic channel number
 * @param Value Start time value
 */
GPT_TEXT_SECTION void Gpt_StartTimer(Gpt_ChannelType Channel, Gpt_ValueType Value)
{
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00224] [SWDESG_GPT_037] */
        Gpt_ReportDetError((uint8)GPT_STARTTIMER_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        /* [SWS_Gpt_00212] [SWDESG_GPT_038] */
        Gpt_ReportDetError((uint8)GPT_STARTTIMER_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
    else if ((Value > (Gpt_ConfigPtr[u8CoreId]
                           ->pGptChannelConfig[Channel]
                           .tGptChannelCommonConfig.u32GptChannelTickValueMax)) ||
             ((Gpt_ValueType)0 == Value))
    {
        /* [SWS_Gpt_00218] [SWDESG_GPT_039] */
        Gpt_ReportDetError((uint8)GPT_STARTTIMER_ID, (uint8)GPT_E_PARAM_VALUE);
    }
#if ((GPT_WAKEUP_FUNCTION_API == STD_ON) && (GPT_REPORT_WAKEUP_SOURCE == STD_ON))
    else if ((Gpt_Mode[u8CoreId] == GPT_MODE_SLEEP) &&
             ((boolean)FALSE == Gpt_ConfigChannelInfo[Channel].bWakeupEnabled))
    {
        Gpt_ReportDetError((uint8)GPT_STARTTIMER_ID, (uint8)GPT_E_INVALID_CALL);
    }
#endif
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_STARTTIMER_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif /* GPT_MULTICORE_SUPPORT == STD_ON */
    else
#endif /* GPT_DEV_ERROR_DETECT == STD_ON */
    {
        /* [SWS_Gpt_00084] [SWDESG_GPT_041] */
        if (GPT_STATUS_RUNNING == Gpt_ConfigChannelInfo[Channel].eChannelStatus)
        {
#if (GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            Gpt_ReportRuntimeDetError((uint8)GPT_STARTTIMER_ID, (uint8)GPT_E_BUSY);
#endif /* GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF */
        }
        else
        {
            /*Enable hardware interrupts for the one-shot mode to set the status of channel*/
            if (GPT_CH_MODE_ONESHOT == (Gpt_ConfigPtr[u8CoreId]
                                            ->pGptChannelConfig[Channel]
                                            .tGptChannelCommonConfig.eGptChannelMode))
            {
                Gpt_HL_EnableInterrupt(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]));
            }
            /* Change GPT channel status.Channel status change shall be made before to start
            the hardware in order to not change the channel status from EXPIRED to RUNNING*/
            /* [SWS_Gpt_00364] */
            Gpt_ConfigChannelInfo[Channel].eChannelStatus = GPT_STATUS_RUNNING;
            /* Call low level start timer [SWS_Gpt_00274] */
            Gpt_HL_StartTimer(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]), Value);
        }
    }
}

/**
 * @brief Stop channel [SWS_Gpt_00285] [SWS_Gpt_00099] [SWS_Gpt_00116] [SWDESG_GPT_044]
 *
 * @param Channel Logic channel number
 */
GPT_TEXT_SECTION void Gpt_StopTimer(Gpt_ChannelType Channel)
{
    Gpt_HwChannelInfoType returnHwChannelInfo;
    Gpt_ValueType         uElapsedTime;
    uint8                 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
    returnHwChannelInfo.bChannelRollover = (boolean)FALSE;
    returnHwChannelInfo.tTargetTime      = (Gpt_ValueType)0;

#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00225] [SWDESG_GPT_042] */
        Gpt_ReportDetError((uint8)GPT_STOPTIMER_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        /* [SWS_Gpt_00213] [SWDESG_GPT_043] */
        Gpt_ReportDetError((uint8)GPT_STOPTIMER_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_STOPTIMER_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        /* Check the logical cchannel status [SWS_Gpt_00344] */
        if (GPT_STATUS_RUNNING == Gpt_ConfigChannelInfo[Channel].eChannelStatus)
        {
            /* Get the elapsed  time  for later use by other API calls*/
            uElapsedTime = Gpt_HL_GetTimeElapsed(
                &(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]),
                &returnHwChannelInfo);
            /* Call low level stop timer [SWS_Gpt_00013] [FUNC_Gpt_0023] [SWDESG_GPT_044] */
            Gpt_HL_StopTimer(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]));
            /* Store the stopping time for later use by other API calls*/
            Gpt_StopTime[Channel] = uElapsedTime;

            /* Set GPT channel status to stopped [SWS_Gpt_00343] */
            Gpt_ConfigChannelInfo[Channel].eChannelStatus = GPT_STATUS_STOPPED;
        }
    }
}

#if (GPT_ENABLE_DISABLE_NOTIFICATION_API == STD_ON)
/**
 * @brief Enable channel notification [SWS_Gpt_00286] [SWS_Gpt_00117] [SWDESG_GPT_023]
 *
 * @param Channel Logic channel number
 */
GPT_TEXT_SECTION void Gpt_EnableNotification(Gpt_ChannelType Channel)
{
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00226] [SWDESG_GPT_021] */
        Gpt_ReportDetError((uint8)GPT_ENABLENOTIFICATION_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        /* [SWS_Gpt_00214] [SWDESG_GPT_022] */
        Gpt_ReportDetError((uint8)GPT_ENABLENOTIFICATION_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
    else if (
        NULL_PTR ==
        (Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel].tGptChannelCommonConfig.pGptNotification))
    {
        /* [SWS_Gpt_00377] [SWDESG_GPT_022] */
        Gpt_ReportDetError((uint8)GPT_ENABLENOTIFICATION_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_ENABLENOTIFICATION_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        /* [SWS_Gpt_00014] */
        /* Set the enable notification attribute */
        Gpt_ConfigChannelInfo[Channel].bNotificationEnabled = (boolean)TRUE;
        if (GPT_MODE_NORMAL == Gpt_Mode[u8CoreId])
        {
            /*Enable hardware interrupts*/
            Gpt_HL_EnableInterrupt(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]));
        }
    }
}
/**
 * @brief Disable channel notification [SWS_Gpt_00287] [SWS_Gpt_00118] [SWDESG_GPT_020]
 *
 * @param Channel Logic channel number
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_DisableNotification(Gpt_ChannelType Channel)
{
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00227] [SWDESG_GPT_018] */
        Gpt_ReportDetError((uint8)GPT_DISABLENOTIFICATION_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        /* [SWS_Gpt_00217] [SWDESG_GPT_019] */
        Gpt_ReportDetError((uint8)GPT_DISABLENOTIFICATION_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
    else if (
        NULL_PTR ==
        (Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel].tGptChannelCommonConfig.pGptNotification))
    {
        /* [SWS_Gpt_00379] [SWDESG_GPT_019] */
        Gpt_ReportDetError((uint8)GPT_DISABLENOTIFICATION_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_DISABLENOTIFICATION_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        /* [SWS_Gpt_00015] */
        /* Set the enable notification attribute */
        Gpt_ConfigChannelInfo[Channel].bNotificationEnabled = (boolean)FALSE;
        /* Disable hardware interrupts if the channel is not running in the ONE-SHUT mode.
        This is needed because the channel state is updated by ISR for ONE-SHOT mode */
        if ((GPT_MODE_NORMAL == Gpt_Mode[u8CoreId]) &&
            ((GPT_CH_MODE_CONTINUOUS == (Gpt_ConfigPtr[u8CoreId]
                                             ->pGptChannelConfig[Channel]
                                             .tGptChannelCommonConfig.eGptChannelMode)) ||
             (GPT_STATUS_RUNNING != Gpt_ConfigChannelInfo[Channel].eChannelStatus)))
        {
            /*Disable hardware interrupts*/
            Gpt_HL_DisableInterrupt(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]));
        }
    }
}
/* PRQA S 1503 -- */
#endif

#if (GPT_WAKEUP_FUNCTION_API == STD_ON)
/**
 * @brief Set GPT mode [SWS_Gpt_00288] [SWDESG_GPT_007]
 *
 * @param Mode GPT module mode
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_SetMode(Gpt_ModeType Mode)
{
#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)
    Gpt_HwChannelInfoType returnHwChannelInfo;
    Gpt_ValueType         uElapsedTime = 0U;
    Gpt_ChannelType       channel;
    uint8                 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif

    returnHwChannelInfo.bChannelRollover = (boolean)FALSE;
    returnHwChannelInfo.tTargetTime      = (Gpt_ValueType)0;
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    boolean bValid = Gpt_ValidSetMode(Mode);
    if ((boolean)TRUE == bValid)
#endif
    {
        /* [SWS_Gpt_00151] [SWS_Gpt_00341] */
        /*Implements the behaviour for the sleep mode*/
        if (GPT_MODE_SLEEP == Mode)
        {
            for (channel = 0U; channel < MAX_CONFIGURED_CHANNELS_U8; channel++)
            {
#if (GPT_MULTICORE_SUPPORT == STD_ON)
                if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[channel] == u8CoreId)
#endif
                {
                    /* [SWS_Gpt_00153] */
                    /* Check for wakeup enabled channel*/
                    if ((boolean)TRUE == Gpt_ConfigChannelInfo[channel].bWakeupEnabled)
                    {
                        /*Enable hardware interrupts*/
                        Gpt_HL_EnableInterrupt(&Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[channel]);
                    }
                    /* Disable interrupts and stop the channel*/
                    else
                    {
                        /*Disable hardware interrupts*/
                        Gpt_HL_DisableInterrupt(&Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[channel]);

                        /* Get the elapsed  time  for later use by other API calls*/
                        uElapsedTime = Gpt_HL_GetTimeElapsed(
                            &Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[channel],
                            &returnHwChannelInfo);
                        /*Stop  the running timer [SWS_Gpt_00164] */
                        if (GPT_STATUS_RUNNING == Gpt_ConfigChannelInfo[channel].eChannelStatus)
                        {
                            /* Call low level stop timer */
                            Gpt_HL_StopTimer(&Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[channel]);

                            /* Store the stopping time for later use by other API calls*/
                            Gpt_StopTime[channel] = uElapsedTime;

                            /* Set the channel status to STOPPED*/
                            Gpt_ConfigChannelInfo[channel].eChannelStatus = GPT_STATUS_STOPPED;
                        }
                    }
                }
            }

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
#if (GPT_MULTICORE_SUPPORT == STD_ON)
            SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_13();
            if (E_OK == Gpt_GetSpinLock(GPT_SETMODE_ID))
            {
#endif
                /* Deinitialize and Stop Predef Timers. [SWS_Gpt_00393] */
                Gpt_HL_StopPredefTimer(Gpt_ConfigPtr[u8CoreId], u8CoreId);
#if (GPT_MULTICORE_SUPPORT == STD_ON)
                Gpt_ReleaseSpinLock();
            }
            SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_13();
#endif
#endif
            Gpt_Mode[u8CoreId] = GPT_MODE_SLEEP;
        }
        else
        {
#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
            if ((Gpt_ModeType)GPT_MODE_SLEEP == Gpt_Mode[u8CoreId])
            {
#if (GPT_MULTICORE_SUPPORT == STD_ON)
                SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_17();
                if (E_OK == Gpt_GetSpinLock(GPT_SETMODE_ID))
                {
#endif
                    /* Start for each predef timer status informations. [SWS_Gpt_00392] */
                    Gpt_HL_StartPredefTimer(Gpt_ConfigPtr[u8CoreId], u8CoreId);
#if (GPT_MULTICORE_SUPPORT == STD_ON)
                    Gpt_ReleaseSpinLock();
                }
                SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_17();
#endif
            }
#endif
            /*Implements the behavior for normal mode [SWS_Gpt_00165] */
            for (channel = 0U; channel < MAX_CONFIGURED_CHANNELS_U8; channel++)
            {
#if (GPT_MULTICORE_SUPPORT == STD_ON)
                if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[channel] == u8CoreId)
#endif
                {
                    /* [SWS_Gpt_00152] */
                    if ((boolean)TRUE == Gpt_ConfigChannelInfo[channel].bNotificationEnabled)
                    {
                        /*Enable hardware interrupts*/
                        Gpt_HL_EnableInterrupt(&Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[channel]);
                    }
                    else
                    {
                        /* Disable hardware interrupts if the channel is not running in the ONE-SHUT
                        mode. This is needed because the channel state is updated by ISR for
                        ONE-SHOT mode */
                        if ((GPT_STATUS_RUNNING != Gpt_ConfigChannelInfo[channel].eChannelStatus) ||
                            (GPT_CH_MODE_CONTINUOUS == (Gpt_ConfigPtr[u8CoreId]
                                                            ->pGptChannelConfig[channel]
                                                            .tGptChannelCommonConfig.eGptChannelMode)))
                        {
                            /*Disable hardware interrupts*/
                            Gpt_HL_DisableInterrupt(
                                &Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[channel]);
                        }
                    }
                }
            }
            Gpt_Mode[u8CoreId] = GPT_MODE_NORMAL;
        }
    }
#endif /*GPT_REPORT_WAKEUP_SOURCE*/
}
/* PRQA S 1503 -- */
#endif

/* [SWS_Gpt_00202] */
#if (GPT_WAKEUP_FUNCTION_API == STD_ON)
/**
 * @brief Disable channel wakeup [SWS_Gpt_00289] [SWDESG_GPT_010]
 *
 * @param Channel Logic channel number
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_DisableWakeup(Gpt_ChannelType Channel)
{
#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /*[SWS_Gpt_00229] [SWDESG_GPT_011] */
        Gpt_ReportDetError((uint8)GPT_DISABLEWAKEUP_ID, (uint8)GPT_E_UNINIT);
    }
    else if (
        (Channel >= MAX_CONFIGURED_CHANNELS_U8) ||
        ((boolean)FALSE ==
         (Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel].tGptChannelCommonConfig.bGptEnableWakeup)))
    {
        /* [SWS_Gpt_00215] [SWDESG_GPT_012] */
        Gpt_ReportDetError((uint8)GPT_DISABLEWAKEUP_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_DISABLEWAKEUP_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        /* [SWS_Gpt_00159] */
        /* Set the enable wakeup attribute */
        Gpt_ConfigChannelInfo[Channel].bWakeupEnabled = (boolean)FALSE;
        /* Disable hardware interrupts if the channel is not running in the ONE-SHUT mode.
        This is needed because the channel state is updated by ISR for ONE-SHOT mode */
        if ((GPT_MODE_SLEEP == Gpt_Mode[u8CoreId]) &&
            ((GPT_CH_MODE_CONTINUOUS == (Gpt_ConfigPtr[u8CoreId]
                                             ->pGptChannelConfig[Channel]
                                             .tGptChannelCommonConfig.eGptChannelMode)) ||
             (GPT_STATUS_RUNNING != Gpt_ConfigChannelInfo[Channel].eChannelStatus)))
        {
            /*Disable hardware interrupts*/
            Gpt_HL_DisableInterrupt(&Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]);
        }
    }
#endif /*GPT_REPORT_WAKEUP_SOURCE*/
}
/*PRQA S 1503 -- */
#endif

/* [SWS_Gpt_00158] */
#if (GPT_WAKEUP_FUNCTION_API == STD_ON)
/**
 * @brief Enable channel wakeup [SWS_Gpt_00290] [SWS_Gpt_00156] [SWDESG_GPT_013]
 *
 * @param Channel Logic channel number
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_EnableWakeup(Gpt_ChannelType Channel)
{
#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00230] [SWDESG_GPT_014] */
        Gpt_ReportDetError((uint8)GPT_ENABLEWAKEUP_ID, (uint8)GPT_E_UNINIT);
    }
    else if (
        (Channel >= MAX_CONFIGURED_CHANNELS_U8) ||
        ((boolean)FALSE ==
         (Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel].tGptChannelCommonConfig.bGptEnableWakeup)))
    {
        /* [SWS_Gpt_00216] [SWDESG_GPT_015] */
        Gpt_ReportDetError((uint8)GPT_ENABLEWAKEUP_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_ENABLEWAKEUP_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        /* [SWS_Gpt_00160] */
        /* Set the enable wakeup attribute */
        Gpt_ConfigChannelInfo[Channel].bWakeupEnabled = (boolean)TRUE;
        if (GPT_MODE_SLEEP == Gpt_Mode[u8CoreId])
        {
            /*Enable hardware interrupts*/
            Gpt_HL_EnableInterrupt(&Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]);
        }
    }
#endif /*GPT_REPORT_WAKEUP_SOURCE*/
}
/*PRQA S 1503 --*/
#endif

/* [SWS_Gpt_00322] */
#if (GPT_WAKEUP_FUNCTION_API == STD_ON)
/**
 * @brief Check wakeup status [SWS_Gpt_00328] [SWS_Gpt_00323] [SWDESG_GPT_016]
 *
 * @param WakeupSource
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_CheckWakeup(EcuM_WakeupSourceType WakeupSource)
{

#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)
    Gpt_ChannelType channel;
    uint8           u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWS_Gpt_00325] [SWDESG_GPT_017] */
        Gpt_ReportDetError((uint8)GPT_CHECKWAKEUP_ID, (uint8)GPT_E_UNINIT);
    }
    else
#endif
    {
        for (channel = 0U; channel < MAX_CONFIGURED_CHANNELS_U8; channel++)
        {
#if (GPT_MULTICORE_SUPPORT == STD_ON)
            if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[channel] == u8CoreId)
#endif
            {
                /* [SWS_Gpt_00321] */
                if (((EcuM_WakeupSourceType)Gpt_ConfigPtr[u8CoreId]
                         ->pGptChannelConfig[channel]
                         .tGptChannelCommonConfig.u32GptWakeupSource == WakeupSource) &&
                    ((boolean)TRUE == Gpt_ConfigChannelInfo[channel].bWakeupGenerated))
                {
                    /*Reset the wakeup flag */
                    Gpt_ConfigChannelInfo[channel].bWakeupGenerated = (boolean)FALSE;

                    /* Calling EcuM_SetWakeupEvent and exit [SWS_Gpt_00406] */
                    EcuM_SetWakeupEvent(WakeupSource);

                    break;
                }
            }
        }
    }
#endif /* GPT_REPORT_WAKEUP_SOURCE */
}
/*PRQA S 1503 --*/
#endif /* GPT_WAKEUP_FUNCTION_API */

#if (GPT_FTU_GTB_SUPPORT == STD_ON)
/*
 * @brief Enable the Ftu Gtb function [FUNC_Gpt_0001] [SWDESG_GPT_050] [FUNC_Gpt_0004]
 *
 * @param u32Group  -- Ftu Gtb Group
 * */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
void Gpt_StartGlobalTime(const uint32 u32Group)
{
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [FUNC_Gpt_0006] [SWDESG_GPT_051] */
        Gpt_ReportDetError((uint8)GPT_STARTGLOBALTIME_ID, (uint8)GPT_E_UNINIT);
    }
    else if (u32Group >= GPT_FTU_GTBGROUPMAXNB)
    {
        /* [FUNC_Gpt_0007] [SWDESG_GPT_052] */
        Gpt_ReportDetError((uint8)GPT_STARTGLOBALTIME_ID, (uint8)GPT_E_PARAM_GROUP);
    }
    else
    {
#endif /* GPT_DEV_ERROR_DETECT */
        Gpt_HW_ConfigGTB(Gpt_ConfigPtr[u8CoreId]->pGptFtuGroupPtr[u32Group], TRUE);
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* GPT_DEV_ERROR_DETECT */
}
/*
 * @brief Disable the Ftu Gtb function [FUNC_Gpt_0002] [SWDESG_GPT_053] [FUNC_Gpt_0005]
 *
 * @param u32Group  -- Ftu Gtb Group
 * */
void Gpt_StopGlobalTime(const uint32 u32Group)
{
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [FUNC_Gpt_0006] [SWDESG_GPT_054] */
        Gpt_ReportDetError((uint8)GPT_STOPGLOBALTIME_ID, (uint8)GPT_E_UNINIT);
    }
    else if (u32Group >= GPT_FTU_GTBGROUPMAXNB)
    {
        /* [FUNC_Gpt_0007] [SWDESG_GPT_055] */
        Gpt_ReportDetError((uint8)GPT_STOPGLOBALTIME_ID, (uint8)GPT_E_PARAM_GROUP);
    }
    else
    {
#endif /* GPT_DEV_ERROR_DETECT */
        Gpt_HW_ConfigGTB(Gpt_ConfigPtr[u8CoreId]->pGptFtuGroupPtr[u32Group], FALSE);
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* GPT_DEV_ERROR_DETECT */
}
/*PRQA S 1503 --*/
#endif

/**
 * @brief Process common interrupt function [SWDESG_GPT_048] [FUNC_Gpt_0020]
 *
 * @param u8MapTableIndex
 */
GPT_TEXT_SECTION void Gpt_ProcessCommonInterrupt(uint8 u8MapTableIndex)
{
    Gpt_ChannelType              channel;
    const Gpt_ConfigChannelType *pChannel;
    uint8                        u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
    if (Gpt_ConfigPtr[u8CoreId] != NULL_PTR)
    {
        /* Extract the logical channel from the hardware to logic map table */
        channel  = Gpt_ConfigPtr[u8CoreId]->pGptHw2ChannelMap[u8MapTableIndex];
        pChannel = &Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[channel];

#if (GPT_MULTICORE_SUPPORT == STD_ON)
        if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[channel] == u8CoreId)
#endif
        {
            /*Stop the timer for one-shot mode [SWS_Gpt_00185] */
            if (GPT_CH_MODE_ONESHOT == (pChannel->tGptChannelCommonConfig.eGptChannelMode))
            {
                /*Stop channel*/
                Gpt_HL_StopTimer(pChannel);

                /* Change the channel status to expired */
                Gpt_ConfigChannelInfo[channel].eChannelStatus = GPT_STATUS_EXPIRED;
            }
            /* Call notification function [SWS_Gpt_00331] [SWS_Gpt_00275] [SWS_Gpt_00093]
             * [SWS_Gpt_00233] */
            if ((GPT_MODE_NORMAL == Gpt_Mode[u8CoreId]) &&
                ((boolean)TRUE == Gpt_ConfigChannelInfo[channel].bNotificationEnabled) &&
                (NULL_PTR != pChannel->tGptChannelCommonConfig.pGptNotification))
            {
                pChannel->tGptChannelCommonConfig.pGptNotification();
            }
#if (GPT_WAKEUP_FUNCTION_API == STD_ON)
#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)
            /* [SWS_Gpt_00127] */
            if ((GPT_MODE_SLEEP == Gpt_Mode[u8CoreId]) &&
                ((boolean)TRUE == Gpt_ConfigChannelInfo[channel].bWakeupEnabled))
            {
                /* [SWS_Gpt_00406] [SWS_Gpt_00326] */
                Gpt_ConfigChannelInfo[channel].bWakeupGenerated = (boolean)TRUE;
                EcuM_CheckWakeup(
                    (EcuM_WakeupSourceType)pChannel->tGptChannelCommonConfig.u32GptWakeupSource);
            }
#endif
#endif
        }
    }
}
#if (GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
/**
 * @brief Change next timeout value [FUNC_Gpt_0021] [SWDESG_GPT_026] [SWDESG_GPT_024] [FUNC_Gpt_0028]
 *
 * @param Channel Logic channel number
 * @param Value Channel value
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_ChangeNextTimeoutValue(Gpt_ChannelType Channel, Gpt_ValueType Value)
{
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType u8ReturnValue = E_OK;
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        /* [SWDESG_GPT_024] */
        Gpt_ReportDetError((uint8)GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        /* [SWDESG_GPT_025] */
        Gpt_ReportDetError((uint8)GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
    else if ((Value > (Gpt_ConfigPtr[u8CoreId]
                           ->pGptChannelConfig[Channel]
                           .tGptChannelCommonConfig.u32GptChannelTickValueMax)) ||
             ((Gpt_ValueType)0 == Value))
    {
        /* [SWDESG_GPT_026] */
        Gpt_ReportDetError((uint8)GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID, (uint8)GPT_E_PARAM_VALUE);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        if (GPT_STATUS_RUNNING != Gpt_ConfigChannelInfo[Channel].eChannelStatus)
        {
#if (GPT_DEV_ERROR_DETECT == STD_ON)
            /* [SWDESG_GPT_027] */
            Gpt_ReportDetError((uint8)GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID, (uint8)GPT_E_INVALID_CALL);
#endif
        }
        else if (
            GPT_CH_MODE_ONESHOT ==
            Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel].tGptChannelCommonConfig.eGptChannelMode)
        {
#if (GPT_DEV_ERROR_DETECT == STD_ON)
            Gpt_ReportDetError((uint8)GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID, (uint8)GPT_E_PARAM_CHANNEL);
#endif
        }
        else
        {
#if (GPT_DEV_ERROR_DETECT == STD_ON)
            u8ReturnValue = Gpt_HL_ChangeNextTimeoutValue(
                &(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]),
                Value);
#else
            Gpt_HL_ChangeNextTimeoutValue(&(Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel]),
                                          Value);
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
            if ((Std_ReturnType)E_OK != u8ReturnValue)
            {
                Gpt_ReportDetError((uint8)GPT_CHANGE_NEXT_TIMEOUT_VALUE_ID,
                                   (uint8)GPT_E_PARAM_CHANNEL);
            }
#endif
        }
    }
}
/* PRQA S 1503 -- */
#endif /* GPT_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON */

#if (GPT_GET_RTC_COUNTER_VALUE_API == STD_ON)
/**
 * @brief Get the RTC current Seconds register value
 *
 * @param Channel Logic channel number
 * @return Gpt_ValueType
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION Gpt_ValueType Gpt_GetRtcCounterValue(Gpt_ChannelType Channel)
{
    uint8         u8CoreId;
    Gpt_ValueType returnValue = (Gpt_ValueType)0;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        Gpt_ReportDetError((uint8)GPT_GETRTCCOUNTERVALUE_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        Gpt_ReportDetError((uint8)GPT_GETRTCCOUNTERVALUE_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
    else if (GPT_MODULE_RTC !=
             (Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel].tGptChannelCommonConfig.eGptModule))
    {
        Gpt_ReportDetError((uint8)GPT_GETRTCCOUNTERVALUE_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_GETRTCCOUNTERVALUE_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        returnValue = Gpt_HL_GetRtcCounterValue();
    }
    return returnValue;
}
/* PRQA S 1503 -- */
#endif /* GPT_GET_RTC_COUNTER_VALUE_API == STD_ON */

#if (GPT_RESET_RTC_COUNTER_API == STD_ON)
/**
 * @brief Reset the RTC Seconds register value
 *
 * @param Channel Logic channel number
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_ResetRtcCounter(Gpt_ChannelType Channel)
{
    uint8 u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
        Gpt_ReportDetError((uint8)GPT_RESETRTCCOUNTER_ID, (uint8)GPT_E_UNINIT);
    }
    else if (Channel >= MAX_CONFIGURED_CHANNELS_U8)
    {
        Gpt_ReportDetError((uint8)GPT_RESETRTCCOUNTER_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
    else if (GPT_MODULE_RTC !=
             (Gpt_ConfigPtr[u8CoreId]->pGptChannelConfig[Channel].tGptChannelCommonConfig.eGptModule))
    {
        Gpt_ReportDetError((uint8)GPT_RESETRTCCOUNTER_ID, (uint8)GPT_E_PARAM_CHANNEL);
    }
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    else if (Gpt_ConfigPtr[u8CoreId]->pGptChannelPartitionMappingPtr[Channel] != u8CoreId)
    {
        Gpt_ReportDetError((uint8)GPT_RESETRTCCOUNTER_ID, (uint8)GPT_E_PARAM_PARTITION);
    }
#endif
    else
#endif
    {
        if (GPT_STATUS_RUNNING != Gpt_ConfigChannelInfo[Channel].eChannelStatus)
        {
            Gpt_HL_ResetRtcCounter();
        }
    }
}
/* PRQA S 1503 -- */
#endif /* GPT_RESET_RTC_COUNTER_API == STD_ON */

#if (GPT_PREDEFTIMER_FUNCTION_API == STD_ON)
/**
 * @brief Get Predef timer value [SWS_Gpt_00394] [SWS_Gpt_00395] [SWS_Gpt_00397]  [SWDESG_GPT_032]
 *
 * @param PredefTimer Predef timer enumeration
 * @param TimeValuePtr Time value pointer
 * @return Std_ReturnType API status return type
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION Std_ReturnType Gpt_GetPredefTimerValue(Gpt_PredefTimerType PredefTimer,
                                                        uint32             *TimeValuePtr)
{
    Std_ReturnType  returnValue = (Std_ReturnType)E_NOT_OK;
    Gpt_ChannelType channel;
    uint8           u8CoreId;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
    u8CoreId = (uint8)GET_CPU_ID();
#else
    u8CoreId = 0U;
#endif
    if (NULL_PTR == Gpt_ConfigPtr[u8CoreId])
    {
#if (GPT_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_Gpt_00398]  [SWDESG_GPT_028] */
        Gpt_ReportDetError((uint8)GPT_GET_PREDEF_TIMERVALUE_ID, (uint8)GPT_E_UNINIT);
#endif
    }
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    else if (NULL_PTR == TimeValuePtr)
    {
        /* [SWS_Gpt_00403]  [SWDESG_GPT_029] */
        Gpt_ReportDetError((uint8)GPT_GET_PREDEF_TIMERVALUE_ID, (uint8)GPT_E_PARAM_POINTER);
    }
    else if ((PredefTimer > GPT_PREDEF_TIMER_100US_32BIT) ||
             (NULL_PTR == Gpt_ConfigPtr[u8CoreId]->pGptChannelPredefConfig[PredefTimer]))
    {
        /* [SWS_Gpt_00399] [SWS_Gpt_00400]  [SWDESG_GPT_030] */
        *TimeValuePtr = 0;
        Gpt_ReportDetError((uint8)GPT_GET_PREDEF_TIMERVALUE_ID, (uint8)GPT_E_PARAM_PREDEF_TIMER);
    }
#endif
    else
    {
        /* PRQA S 3469 -- */
        if (GPT_MODE_SLEEP == Gpt_Mode[u8CoreId])
        {
#if (GPT_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Gpt_00401]  [SWDESG_GPT_033] */
            Gpt_ReportRuntimeDetError((uint8)GPT_GET_PREDEF_TIMERVALUE_ID, (uint8)GPT_E_MODE);
#endif
        }
        else
        {
            channel = (Gpt_ChannelType)PredefTimer;
#if (GPT_MULTICORE_SUPPORT == STD_ON)
            SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_20();

            if (E_OK == Gpt_GetSpinLock(GPT_GET_PREDEF_TIMERVALUE_ID))
            {
#endif
                /* [SWS_Gpt_00396] */
                returnValue = Gpt_HL_GetPredefTimerValue(
                    PredefTimer,
                    (const Gpt_ConfigPredefChannelType *)Gpt_ConfigPtr[u8CoreId]
                        ->pGptChannelPredefConfig[channel],
                    TimeValuePtr);
#if (GPT_MULTICORE_SUPPORT == STD_ON)
                Gpt_ReleaseSpinLock();
            }
            SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_20();
#endif
        }
    }
    if (returnValue == E_NOT_OK)
    {
        if (NULL_PTR != TimeValuePtr)
        {
            *TimeValuePtr = 0;
        }
    }
    /* [SWS_Gpt_00402] */
    return returnValue;
}
/*PRQA S 1503 --*/
#endif

#if (GPT_VERSION_INFO_API == STD_ON)
/**
 * @brief Get GPT module version information API [SWS_Gpt_00279] [SWDESG_GPT_049]
 *
 * @param VersionInfoPtr Version information structure pointer
 */
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: The function is not used in this project but it must be applied for user*/
GPT_TEXT_SECTION void Gpt_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr)
{
#if (GPT_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == VersionInfoPtr)
    {
        /* [SWS_Gpt_00338] */
        Gpt_ReportDetError((uint8)GPT_GETVERSIONINFO_ID, (uint8)GPT_E_PARAM_POINTER);
    }
    else
#endif
    {
        VersionInfoPtr->vendorID         = (uint16)GPT_VENDOR_ID;
        VersionInfoPtr->moduleID         = (uint16)GPT_MODULE_ID;
        VersionInfoPtr->sw_major_version = (uint8)GPT_SW_MAJOR_VERSION;
        VersionInfoPtr->sw_minor_version = (uint8)GPT_SW_MINOR_VERSION;
        VersionInfoPtr->sw_patch_version = (uint8)GPT_SW_PATCH_VERSION;
    }
}
/*PRQA S 1503 --*/
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
