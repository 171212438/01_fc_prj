/**
 *   @file    Wdg_HLD.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Wdg - Software Watchdog Timer (WDOG) high level functions
 *   @details Contains WDG high level functions
 *
 *   @addtogroup WDG
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : WDG
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
*   0.1.0       07/14/2023    QXW0074       N/A          WDG Initial Version
*   0.2.0       09/27/2023    QXW0074       N/A          Add multicore support
*   0.3.0       10/20/2023    QXW0074       N/A          Optimization code
*   0.4.0       11/17/2023    QXW0074       N/A          Optimization Plugins
*   0.5.0       03/16/2024    QXW0074       N/A          Fix some compilation issues and
*                                                        Changed some functions to inline
*   0.6.0       03/22/2024    QXW0074       N/A          Add FC7240 platform support
*   0.7.0       24/04/2024    QXW0074       N/A          Clear misra-c warning and change version
*   0.8.0       31/07/2024    QXW0074       N/A          add the functionality of direct service by
user without hardware timer and optimization code
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
/* [SWS_Wdg_00079] [SWS_Wdg_00105] [FUNC_WDG_0004] [FUNC_WDG_0009] [SWDESG_WDG_008] [SWDESG_WDG_004] */
#include "Wdg_HLD.h"
#include "Wdg_LLD.h"
#include "SchM_Wdg.h"
#if (WDG_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif
#include "Mcal.h"
#include "Wdg_Irq.h"
#include "Wdg_Version.h"
#include "Wdg_Reg.h"
#if (WDG_INSTANCE0 == STD_ON)
#include "Wdg_174_Instance0_Cbk.h"
#endif
#if (WDG_INSTANCE1 == STD_ON)
#include "Wdg_174_Instance1_Cbk.h"
#endif
#if (WDG_INSTANCE2 == STD_ON)
#include "Wdg_174_Instance2_Cbk.h"
#endif
#if (WDG_INSTANCE3 == STD_ON)
#include "Wdg_174_Instance3_Cbk.h"
#endif
/*==================================================================================================
*                                       VERSION CHECKS
==================================================================================================*/
#ifndef WDG_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (WDG_AR_RELEASE_MAJOR_VERSION != WDG_CFG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif

#ifndef WDG_AR_RELEASE_MINOR_VERSION
#error "Autosar release minor version is not defined. "
#elif (WDG_AR_RELEASE_MINOR_VERSION != WDG_CFG_AR_RELEASE_MINOR_VERSION)
#error "Autosar release minor version is not matched. "
#endif

#ifndef WDG_AR_RELEASE_REVISION_VERSION
#error "Autosar release revision version is not defined. "
#elif (WDG_AR_RELEASE_REVISION_VERSION != WDG_CFG_AR_RELEASE_REVISION_VERSION)
#error "Autosar release revision version is not matched. "
#endif

#ifndef WDG_SW_MAJOR_VERSION
#error "Software major version is not defined. "
#elif (WDG_SW_MAJOR_VERSION != WDG_CFG_SW_MAJOR_VERSION)
#error "Software major version is not matched. "
#endif

#ifndef WDG_SW_MINOR_VERSION
#error "Software minor version is not defined. "
#elif (WDG_SW_MINOR_VERSION != WDG_CFG_SW_MINOR_VERSION)
#error "Software minor version is not matched. "
#endif

#ifndef WDG_SW_PATCH_VERSION
#error "Software patch version is not defined. "
#elif (WDG_SW_PATCH_VERSION != WDG_CFG_SW_PATCH_VERSION)
#error "Software patch major version is not matched. "
#endif

#if (WDG_DEV_ERROR_DETECT == STD_ON)
#ifndef DET_AR_RELEASE_MAJOR_VERSION
#error "Autosar release major version is not defined. "
#elif (DET_AR_RELEASE_MAJOR_VERSION != WDG_AR_RELEASE_MAJOR_VERSION)
#error "Autosar release major version is not matched. "
#endif
#endif
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/**
 * @brief  This enumerated type will contain the watchdog driver's possible states
 *
 */
/* PRQA S 1535,3205 ++ #Misra-C:2012 Rule-2.3 A project should not contain unused type declarations
 * Reason: This type may not used by user */
typedef enum
{
    WDG_UNINIT = 0x00U, /**< @brief The watchdog driver is not uninitialized */
    WDG_IDLE,           /**< @brief = 0x01 The watchdog driver is currently idle,
                                          i.e not being triggered or mode changed */
    WDG_BUSY,           /**< @brief = 0x02 The watchdog driver is currently busy,
                                          i.e triggered or switched between modes */
    WDG_INITIALIZING    /**< @brief = 0x03 The watchdog driver is currently initializing */
} Wdg_StatusType;
/* PRQA S 1535,3205 -- */

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define WDG_PRESCALER_VALUE_U16   ((uint16)256U)
#define WDG_MILLISECOND_SCALE_U32 ((uint32)1000U)
/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

#define WDG_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Wdg_MemMap.h"

/**
 *  @brief Variable that indicate the current configuration set
 */
WDG_DATA_SECTION static const Wdg_ConfigType *s_WdgConfigPtr[WDG_NO_OF_INSTANCES];

#define WDG_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Wdg_MemMap.h"

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

#define WDG_START_SEC_VAR_INIT_UNSPECIFIED
#include "Wdg_MemMap.h"

#if (WDG_DEV_ERROR_DETECT == STD_ON)
/**
 *  @brief Variable that indicated the state of the driver
 */
WDG_DATA_SECTION static Wdg_StatusType s_WdgStatus[WDG_NO_OF_INSTANCES] = WDG_VARIABLE_STATUS_VALUE;
#endif

#define WDG_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Wdg_MemMap.h"

#if (WDG_DIRECT_SERVICE == STD_OFF)
#define WDG_START_SEC_VAR_INIT_32
#include "Wdg_MemMap.h"

/**
 *  @brief Variable that indicate the watchdog timeout
 */
WDG_DATA_SECTION static uint32 s_WdgTimeout[WDG_NO_OF_INSTANCES] = WDG_VARIABLE_TIMEOUT_VALUE;

/**
 *  @brief Variable that indicated the timer value in ticks
 */
WDG_DATA_SECTION static uint32 s_WdgGptPeriod[WDG_NO_OF_INSTANCES] = WDG_VARIABLE_PERIOD_VALUE;

/**
 * @brief  Variable that indicate the Wdg Initial Timeout parameter in miliseconds for all wdg module
 */
WDG_DATA_SECTION static uint32 s_WdgInitialTimeout[WDG_NO_OF_INSTANCES] = WDG_INTIAL_TIMEOUT;
#define WDG_STOP_SEC_VAR_INIT_32
#include "Wdg_MemMap.h"

#if (WDG_DEV_ERROR_DETECT == STD_ON)
#define WDG_START_SEC_VAR_INIT_16
#include "Wdg_MemMap.h"
/**
 * @brief  Variable that indicate the Wdg Max Timeout parameter in miliseconds for all wdg module
 */
WDG_DATA_SECTION static uint16 s_WdgMaxTimeout[WDG_NO_OF_INSTANCES] = WDG_MAX_TIMEOUT;
#define WDG_STOP_SEC_VAR_INIT_16
#include "Wdg_MemMap.h"
#endif
#endif
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
/* [SWS_Wdg_00168] [SWDESG_WDG_003] */
#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#if (WDG_DIRECT_SERVICE == STD_OFF)
#if (WDG_INSTANCE0 == STD_ON)
void Wdg_Cbk_GptNotification0(void);
#endif

#if (WDG_INSTANCE1 == STD_ON)
void Wdg_Cbk_GptNotification1(void);
#endif

#if (WDG_INSTANCE2 == STD_ON)
void Wdg_Cbk_GptNotification2(void);
#endif

#if (WDG_INSTANCE3 == STD_ON)
void Wdg_Cbk_GptNotification3(void);
#endif

LOCAL_INLINE void Wdg_HLD_ChannelTrigger(const Wdg_HWL_InstanceType eInstance);
#endif

#if (WDG_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE void Wdg_ReportDetError(uint8 u8InstanceId, uint8 u8ServiceId, uint8 u8ErrorId);
#endif

LOCAL_INLINE Std_ReturnType Wdg_HLD_ValidateModeConfigration(WdgIf_ModeType             Wdg_Mode,
                                                             uint8                      uServiceId,
                                                             uint8                      uErrorId,
                                                             const Wdg_HWL_InstanceType eInstance);

LOCAL_INLINE Std_ReturnType Wdg_HLD_ValidateConfigUpdate(const Wdg_HWL_InstanceType eInstance);

LOCAL_INLINE uint32 Wdg_HWL_Init(const Wdg_LLDConfigType   *Wdg_HWL_ConfigPtr,
                                 const Wdg_HWL_InstanceType Wdg_HWL_Instance,
                                 boolean                   *pUnlockFailed,
                                 boolean                   *pReconfigFailed);

LOCAL_INLINE uint32 Wdg_HWL_SetMode(const Wdg_LLDConfigType   *Wdg_HWL_ConfigPtr,
                                    const Wdg_HWL_InstanceType Wdg_HWL_Instance,
                                    boolean                   *pUnlockFailed,
                                    boolean                   *pReconfigFailed);

LOCAL_INLINE void Wdg_HWL_Trigger(const Wdg_HWL_InstanceType Wdg_HWL_Instance);

LOCAL_INLINE Std_ReturnType Wdg_HWL_ValidateConfigUpdate(const Wdg_HWL_InstanceType Wdg_HWL_Instance);
#if (WDG_DIRECT_SERVICE == STD_ON)
LOCAL_INLINE Std_ReturnType Wdg_HWL_ValidateTrigger(const Wdg_HWL_InstanceType Wdg_HWL_Instance);
#endif
#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
#ifdef WDG_ROM
#define WDG_START_SEC_CODE
#else
#define WDG_START_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#if (WDG_DEV_ERROR_DETECT == STD_ON)
LOCAL_INLINE void Wdg_ReportDetError(uint8 u8InstanceId, uint8 u8ServiceId, uint8 u8ErrorId)
{
    /* [SWS_Wdg_00111] */
    (void)Det_ReportError((uint16)WDG_MODULE_ID,
                          (uint8)g_WdgIndex[u8InstanceId],
                          (uint8)u8ServiceId,
                          (uint8)u8ErrorId);
}
#endif

/**
 * @brief Select the hardware watchdog initialization function according to the watchdog module type
 * used. [SWDESG_WDG_048]
 *
 * @param Wdg_HWL_ConfigPtr Pointer to configuration set.
 * @param Wdg_HWL_Instance Hardware WDG instance.
 * @param pUnlockFailed Whether to unlock WDOG failed.
 * @param pReconfigFailed Whether WDOG reconfiguration failed.
 *
 * @return uint32 The value in ticks that need to be set up for the timer
 */
LOCAL_INLINE uint32 Wdg_HWL_Init(const Wdg_LLDConfigType   *Wdg_HWL_ConfigPtr,
                                 const Wdg_HWL_InstanceType Wdg_HWL_Instance,
                                 boolean                   *pUnlockFailed,
                                 boolean                   *pReconfigFailed)
{
#if (WDG_INTERNAL_MODULE == WDG_TYPE)
    return Wdg_LLD_Init(Wdg_HWL_ConfigPtr, Wdg_HWL_Instance, pUnlockFailed, pReconfigFailed);
#endif
}

/**
 * @brief Select the hardware watchdog set mode function according to the watchdog module type used.
 * [SWDESG_WDG_051] [SWDESG_WDG_050] SWDESG_WDG_049]
 *
 * @param Wdg_HWL_ConfigPtr Pointer to configuration set.
 * @param Wdg_HWL_Instance Hardware WDG instance.
 * @param pUnlockFailed Whether to unlock WDOG failed.
 * @param pReconfigFailed Whether WDOG reconfiguration failed.
 *
 * @return uint32 The value in ticks that need to be set up for the timer
 */
LOCAL_INLINE uint32 Wdg_HWL_SetMode(const Wdg_LLDConfigType   *Wdg_HWL_ConfigPtr,
                                    const Wdg_HWL_InstanceType Wdg_HWL_Instance,
                                    boolean                   *pUnlockFailed,
                                    boolean                   *pReconfigFailed)
{
#if (WDG_INTERNAL_MODULE == WDG_TYPE)
    return Wdg_LLD_Init(Wdg_HWL_ConfigPtr, Wdg_HWL_Instance, pUnlockFailed, pReconfigFailed);
#endif
}

/**
 * @brief Select the hardware watchdog trigger function according to the watchdog module type used.
 * [SWDESG_WDG_052]
 *
 * @param Wdg_HWL_Instance Hardware WDG instance.
 *
 */
LOCAL_INLINE void Wdg_HWL_Trigger(const Wdg_HWL_InstanceType Wdg_HWL_Instance)
{
#if (WDG_INTERNAL_MODULE == WDG_TYPE)
    Wdg_LLD_Trigger(Wdg_HWL_Instance);
#endif
}

/**
 * @brief Select the hardware watchdog validate update config function according to the watchdog
 * module type used. [SWDESG_WDG_053]
 *
 * @param Wdg_HWL_Instance Hardware WDG instance.
 *
 * @return Std_ReturnType
 */
LOCAL_INLINE Std_ReturnType Wdg_HWL_ValidateConfigUpdate(const Wdg_HWL_InstanceType Wdg_HWL_Instance)
{
#if (WDG_INTERNAL_MODULE == WDG_TYPE)
    return Wdg_LLD_ValidateConfigUpdate(Wdg_HWL_Instance);
#endif
}

#if (WDG_DIRECT_SERVICE == STD_ON)
/**
 * @brief Select the hardware watchdog validate trigger function according to the watchdog module
 * type used. [SWDESG_WDG_053]
 *
 * @param Wdg_HWL_Instance Hardware WDG instance.
 *
 * @return Std_ReturnType
 */
LOCAL_INLINE Std_ReturnType Wdg_HWL_ValidateTrigger(const Wdg_HWL_InstanceType Wdg_HWL_Instance)
{
#if (WDG_INTERNAL_MODULE == WDG_TYPE)
    return Wdg_LLD_ValidateTrigger(Wdg_HWL_Instance);
#endif
}
#endif
/* [FUNC_WDG_0005] [SWDESG_WDG_006] */
#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
/**
 * @brief Operations related to Dem error reporting. [SWS_Wdg_00178] [SWS_Wdg_00179] [SWS_Wdg_00111]
 * [SWDESG_WDG_054]
 *
 * @param ModeFailed Whether to set mode failed.
 * @param DisableRejected Whether to disable mode failed.
 *
 */
LOCAL_INLINE void Wdg_HLD_DemEventControl(boolean ModeFailed, boolean DisableRejected)
{
    if (Wdg_E_Disable_Rejected.state == (uint32)STD_ON)
    {
        if (DisableRejected == (boolean)FALSE)
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Disable_Rejected.id,
                                     DEM_EVENT_STATUS_PASSED);
        }
        else
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Disable_Rejected.id,
                                     DEM_EVENT_STATUS_FAILED);
        }
    }
    if (Wdg_E_Mode_Failed.state == (uint32)STD_ON)
    {
        if (ModeFailed == (boolean)FALSE)
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_PASSED);
        }
        else
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_FAILED);
        }
    }
}
#endif

#if (WDG_DIRECT_SERVICE == STD_OFF)
/**
 * @brief Triggers the Watchdog. [SWS_Wdg_00144]
 *
 * @param eInstance Hardware WDG instance.
 *
 */
LOCAL_INLINE void Wdg_HLD_ChannelTrigger(const Wdg_HWL_InstanceType eInstance)
{
#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
    volatile uint32 u32CoreID;
    u32CoreID = (uint32)GET_CPU_ID();
    if (u32CoreID != Wdg_au32InstanceCoreUsed[eInstance])
    {
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance], (uint8)WDG_INIT_ID, (uint8)WDG_E_PARAM_CONFIG);
    }
    else
    {
#endif /* (WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON) */
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        /* [SWS_Wdg_00035] [SWDESG_WDG_040] */
        if (s_WdgStatus[eInstance] != WDG_IDLE)
        {
            Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                               (uint8)WDG_TRIGGER_ID,
                               (uint8)WDG_E_DRIVER_STATE);
        }
        else
        {
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
            SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_00();
#if (WDG_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_Wdg_00052] [SWDESG_WDG_041] */
            s_WdgStatus[eInstance] = WDG_BUSY;
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
            /* [SWS_Wdg_00135] */
            if (s_WdgTimeout[eInstance] < s_WdgGptPeriod[eInstance])
            {
                s_WdgTimeout[eInstance] = (uint32)0;
                Gpt_StopTimer(s_WdgConfigPtr[eInstance]->u8WdgTimerChannel);
            }
            else
            {
                s_WdgTimeout[eInstance] = s_WdgTimeout[eInstance] - s_WdgGptPeriod[eInstance];
                Wdg_HWL_Trigger(eInstance);
            }
#if (WDG_DEV_ERROR_DETECT == STD_ON)
            /* [SWS_Wdg_00052] [SWDESG_WDG_041] */
            s_WdgStatus[eInstance] = WDG_IDLE;
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
            SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_00();
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        }
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
    }
#endif /* (WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON) */
}
/* [FUNC_WDG_0008] */
#if (WDG_INSTANCE0 == STD_ON)
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/* [SWDESG_WDG_037] */
WDG_TEXT_SECTION void Wdg_Cbk_GptNotification0(void)
{
    Wdg_HLD_ChannelTrigger(WDG_HWL_INSTANCE0);
}
/* PRQA S 1503 -- */
#endif

#if (WDG_INSTANCE1 == STD_ON)
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/* [SWDESG_WDG_038] */
WDG_TEXT_SECTION void Wdg_Cbk_GptNotification1(void)
{
    Wdg_HLD_ChannelTrigger(WDG_HWL_INSTANCE1);
}
/* PRQA S 1503 -- */
#endif

#if (WDG_INSTANCE2 == STD_ON)
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/* [SWDESG_WDG_039] */
WDG_TEXT_SECTION void Wdg_Cbk_GptNotification2(void)
{
    Wdg_HLD_ChannelTrigger(WDG_HWL_INSTANCE2);
}
/* PRQA S 1503 -- */
#endif

#if (WDG_INSTANCE3 == STD_ON)
/* PRQA S 1503 ++ #Misra-C:2012 Rule-2.1 A project shall not contain unreachable code
 * Reason: It will exist not used functions when use QAC to analysis the whole project,
 * this function may be called by other modules or other behaviors. */
/* [SWDESG_WDG_087] */
WDG_TEXT_SECTION void Wdg_Cbk_GptNotification3(void)
{
    Wdg_HLD_ChannelTrigger(WDG_HWL_INSTANCE3);
}
/* PRQA S 1503 -- */
#endif
#endif

/**
 * @brief This function validate the mode that will be set up. [SWDESG_WDG_044] [SWDESG_WDG_043]
 * [SWDESG_WDG_042]
 *
 * @param Wdg_Mode The watchdog mode that will be set up.
 * @param uServiceId The service id of the caller function.
 * @param uErrorId The error id that will be reported when an error is detected.
 * @param eInstance Hardware WDG instance.
 *
 * @return Std_ReturnType The validity of the function call
 *
 */
LOCAL_INLINE Std_ReturnType Wdg_HLD_ValidateModeConfigration(WdgIf_ModeType             Wdg_Mode,
                                                             uint8                      uServiceId,
                                                             uint8                      uErrorId,
                                                             const Wdg_HWL_InstanceType eInstance)
{
    Std_ReturnType u8CheckStatus;
    boolean        disableRejectedErrActive = (boolean)FALSE;
    boolean        modeFailedErrActive      = (boolean)FALSE;
    /* [SWS_Wdg_00173] [SWS_Wdg_00016] */
    /* PRQA S 4304 ++ #Misra-C:2012 Rule-10.5 The value of an expression should not be cast to an
     * inappropriate essential type Reason: No problem doing this as the value is within range of
     * the cast type. */
    if ((boolean)((Wdg_Mode == WDGIF_FAST_MODE) || (Wdg_Mode == WDGIF_SLOW_MODE) ||
                  (Wdg_Mode == WDGIF_OFF_MODE)) == (boolean)FALSE)
    /* PRQA S 4304 -- */
    {
        /* [SWS_Wdg_00090] [SWS_Wdg_00091] [SWS_Wdg_00092] */
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance], (uint8)uServiceId, (uint8)uErrorId);
#endif
        modeFailedErrActive = (boolean)TRUE;
        u8CheckStatus       = (Std_ReturnType)E_NOT_OK;
    }
#if (WDG_DISABLE_ALLOWED == STD_OFF)
    else if (WDGIF_OFF_MODE == Wdg_Mode)
    {
        /* [SWS_Wdg_00025] [SWS_Wdg_00090] [SWS_Wdg_00026] */
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance], (uint8)uServiceId, (uint8)uErrorId);
#endif
        disableRejectedErrActive = (boolean)TRUE;
        u8CheckStatus            = (Std_ReturnType)E_NOT_OK;
    }
#endif
    /* Returns error if the timeout value is not within the range supported by the hardware
     * [SWS_Wdg_00173] [SWS_Wdg_00016] */
    else if (s_WdgConfigPtr[eInstance]->pWdgModeSettings[Wdg_Mode]->u32WdgLLDTimeout >
             (uint32)(WDG_PRESCALER_VALUE_U16 * WDG_MAX_VALUE_TYPE16))
    {
        u8CheckStatus       = (Std_ReturnType)E_NOT_OK;
        modeFailedErrActive = (boolean)TRUE;
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance], (uint8)uServiceId, (uint8)WDG_E_PARAM_TIMEOUT);
#endif
    }
    /* Return error if the value of the window frame is grater that the timeout - no trigger can
     * occur [SWS_Wdg_00173] [SWS_Wdg_00016] */
    else if ((WDOG_CS_WIN_MASK ==
              (s_WdgConfigPtr[eInstance]->pWdgModeSettings[Wdg_Mode]->u32WdgLLDConfig &
               WDOG_CS_WIN_MASK)) &&
             (s_WdgConfigPtr[eInstance]->pWdgModeSettings[Wdg_Mode]->u32WdgLLDTimeout <
              s_WdgConfigPtr[eInstance]->pWdgModeSettings[Wdg_Mode]->u32WdgLLDWindow))
    {
        u8CheckStatus       = (Std_ReturnType)E_NOT_OK;
        modeFailedErrActive = (boolean)TRUE;
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance], (uint8)uServiceId, (uint8)WDG_E_PARAM_TIMEOUT);
#endif
    }
    else
    {
        u8CheckStatus = (Std_ReturnType)E_OK;
    }
    /* [SWS_Wdg_00180] [SWS_Wdg_00181] [SWS_Wdg_00182] [SWS_Wdg_00183] */
#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    Wdg_HLD_DemEventControl(modeFailedErrActive, disableRejectedErrActive);
#else
    (void)modeFailedErrActive;
    (void)disableRejectedErrActive;
#endif
#if (WDG_DEV_ERROR_DETECT == STD_OFF)
    (void)uServiceId;
    (void)uErrorId;
#endif
    return u8CheckStatus;
}

/**
 * @brief This function validate the usage of the Wdg_HLD_SetMode API considering if the WDG
 * configuration update is allowed [SWDESG_WDG_046] [SWDESG_WDG_045]
 *
 * @param eInstance Hardware WDG instance.
 *
 * @return Std_ReturnType The validity of the function call
 *
 */
LOCAL_INLINE Std_ReturnType Wdg_HLD_ValidateConfigUpdate(const Wdg_HWL_InstanceType eInstance)
{
    Std_ReturnType u8CheckStatus;

    u8CheckStatus = Wdg_HWL_ValidateConfigUpdate(eInstance);
    if (u8CheckStatus == (Std_ReturnType)E_NOT_OK)
    {
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                           (uint8)WDG_SETMODE_ID,
                           (uint8)WDG_E_PARAM_MODE);
#endif
#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
        if (Wdg_E_Mode_Failed.state == (uint32)STD_ON)
        {
            /* Report production error */
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_FAILED);
        }
#endif
    }
#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    else
    {
        if (Wdg_E_Mode_Failed.state == (uint32)STD_ON)
        {
            /* Report production error */
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Mode_Failed.id, DEM_EVENT_STATUS_PASSED);
        }
    }
#endif
    return u8CheckStatus;
}
/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#if ((defined WDG_ISR0_USED) || (defined WDG_ISR1_USED) || (defined WDG_ISR2_USED) || \
     (defined WDG_ISR3_USED))
/**
 * @brief Detects missed trigger of the hardware [FMR_WDG_0001] [SWDESG_WDG_072]
 *
 * @param eInstance Hardware WDG instance.
 *
 */
WDG_TEXT_SECTION void Wdg_ProcessInterrupt(const Wdg_HWL_InstanceType eInstance)
{
    /* [FUNC_WDG_0010] */
    if ((NULL_PTR != s_WdgConfigPtr[eInstance]) &&
        (NULL_PTR != s_WdgConfigPtr[eInstance]->pWdgCallbackNotification))
    {
        s_WdgConfigPtr[eInstance]->pWdgCallbackNotification();
    }
}
#endif

/**
 * @brief Calculate the scale value that needs to be set for the timer and start timer count.
 * [SWDESG_WDG_055]
 *
 * @param u8SeverId The service that calls this function
 * @param eMode Mode to be configured
 * @param eInstance Hardware WDG instance
 *
 * @return uint32 The time value to be used by the timer.
 *
 */
LOCAL_INLINE uint32 Wdg_HLD_StartTimerCount(uint8                u8SeverId,
                                            WdgIf_ModeType       eMode,
                                            Wdg_HWL_InstanceType eInstance)
{
    boolean unclockFailedErrActive         = (boolean)FALSE;
    boolean reconfigurationFailedErrActive = (boolean)FALSE;
    uint32  u32TimerCount;
    if (u8SeverId == (uint8)WDG_INIT_ID)
    {
        u32TimerCount = Wdg_HWL_Init(s_WdgConfigPtr[eInstance]->pWdgModeSettings[eMode],
                                     eInstance,
                                     &unclockFailedErrActive,
                                     &reconfigurationFailedErrActive);
    }
    else if (u8SeverId == (uint8)WDG_SETMODE_ID)
    {
        u32TimerCount = Wdg_HWL_SetMode(s_WdgConfigPtr[eInstance]->pWdgModeSettings[eMode],
                                        eInstance,
                                        &unclockFailedErrActive,
                                        &reconfigurationFailedErrActive);
    }
    else
    {
        u32TimerCount = 0U;
    }
#if (WDG_DIRECT_SERVICE == STD_OFF)
    u32TimerCount =
        (uint32)(((uint64)u32TimerCount *
                  (uint64)s_WdgConfigPtr[eInstance]->u32WdgTriggerChannelFrequency) /
                 ((uint64)s_WdgConfigPtr[eInstance]->pWdgModeSettings[eMode]->u32WdgLLDInternalTimerClock *
                  (uint64)WDG_MILLISECOND_SCALE_U32));
    /* start the timer channel only if the mode is not off mode */
    if (WDGIF_OFF_MODE != eMode)
    {
        Gpt_StartTimer(s_WdgConfigPtr[eInstance]->u8WdgTimerChannel, u32TimerCount);
    }
#endif
    /* [FUNC_WDG_0005] [SWDESG_WDG_006] */
#if (WDG_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    if (Wdg_E_Unlock_Failed.state == (uint32)STD_ON)
    {
        /* [FUNC_WDG_0034] [FUNC_WDG_0035] */
        if (unclockFailedErrActive == (boolean)FALSE)
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Unlock_Failed.id,
                                     DEM_EVENT_STATUS_PASSED);
        }
        else
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Unlock_Failed.id,
                                     DEM_EVENT_STATUS_FAILED);
        }
    }
    /* [FUNC_WDG_0038] [FUNC_WDG_0039] */
    if (Wdg_E_Reconfig_Failed.state == (uint32)STD_ON)
    {
        if (reconfigurationFailedErrActive == (boolean)FALSE)
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Reconfig_Failed.id,
                                     DEM_EVENT_STATUS_PASSED);
        }
        else
        {
            (void)Dem_SetEventStatus((Dem_EventIdType)Wdg_E_Reconfig_Failed.id,
                                     DEM_EVENT_STATUS_FAILED);
        }
    }
#else
    (void)unclockFailedErrActive;
    (void)reconfigurationFailedErrActive;
#endif
    return u32TimerCount;
}

/**
 * @brief This function initializes the WDG module. [SWS_Wdg_00001] [SWS_Wdg_00100] [SWDESG_WDG_056]
 *
 * @param pConfigPtr Pointer to configuration set.
 * @param eInstance Hardware WDG instance.
 *
 */
WDG_TEXT_SECTION void Wdg_HLD_Init(const Wdg_ConfigType      *pConfigPtr,
                                   const Wdg_HWL_InstanceType eInstance)
{
#if ((WDG_DEV_ERROR_DETECT == STD_ON) || (WDG_DIRECT_SERVICE == STD_OFF))
    uint32 u32TimerCount = 0xFFFF;
#endif
#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
    volatile uint32 u32CoreID;
    u32CoreID = (uint32)GET_CPU_ID();
    if (u32CoreID != Wdg_au32InstanceCoreUsed[eInstance])
    {
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance], (uint8)WDG_INIT_ID, (uint8)WDG_E_PARAM_CONFIG);
    }
    else
    {
#endif /* (WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON) */
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        if (s_WdgStatus[eInstance] != WDG_UNINIT)
        {
            /* [SWDESG_WDG_057] */
            Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                               (uint8)WDG_INIT_ID,
                               (uint8)WDG_E_DRIVER_STATE);
        }
#if (WDG_PRECOMPILE_SUPPORT == STD_ON)
        else if (NULL_PTR != pConfigPtr)
#else
        else if ((NULL_PTR == pConfigPtr) ||
                 (NULL_PTR == pConfigPtr->pWdgModeSettings[pConfigPtr->eWdgDefaultSetMode]))
#endif /* WDG_PRECOMPILE_SUPPORT == STD_ON */
        {
            /* [SWDESG_WDG_079] [SWDESG_WDG_029] [SWDESG_WDG_020] [SWDESG_WDG_011] */
            Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                               (uint8)WDG_INIT_ID,
                               (uint8)WDG_E_PARAM_POINTER);
        }
#if (WDG_PRECOMPILE_SUPPORT == STD_OFF)
        else if (eInstance != pConfigPtr->eWdgInstance)
        {
            /* [SWDESG_WDG_058] */
            Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                               (uint8)WDG_INIT_ID,
                               (uint8)WDG_E_INIT_FAILED);
        }
#endif /* WDG_PRECOMPILE_SUPPORT == STD_OFF */
        else
        {
            s_WdgStatus[eInstance] = WDG_INITIALIZING;
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
#if (WDG_PRECOMPILE_SUPPORT == STD_ON)
            s_WdgConfigPtr[eInstance] = Wdg_apPBCfgVariantPredefined[eInstance];
            (void)pConfigPtr;
#else
    s_WdgConfigPtr[eInstance] = pConfigPtr;
#endif /* WDG_PRECOMPILE_SUPPORT == STD_ON */
            /* [SWDESG_WDG_059] */
            if ((Std_ReturnType)E_OK ==
                Wdg_HLD_ValidateModeConfigration(s_WdgConfigPtr[eInstance]->eWdgDefaultSetMode,
                                                 WDG_INIT_ID,
                                                 WDG_E_PARAM_CONFIG,
                                                 eInstance))
            {
#if (WDG_DIRECT_SERVICE == STD_OFF)
                Gpt_StopTimer(s_WdgConfigPtr[eInstance]->u8WdgTimerChannel);
                Gpt_EnableNotification(s_WdgConfigPtr[eInstance]->u8WdgTimerChannel);
#endif
#if ((WDG_DEV_ERROR_DETECT == STD_ON) || (WDG_DIRECT_SERVICE == STD_OFF))
                u32TimerCount = Wdg_HLD_StartTimerCount(WDG_INIT_ID,
                                                        s_WdgConfigPtr[eInstance]->eWdgDefaultSetMode,
                                                        eInstance);
#else
        Wdg_HLD_StartTimerCount(WDG_INIT_ID, s_WdgConfigPtr[eInstance]->eWdgDefaultSetMode, eInstance);
#endif
#if (WDG_DIRECT_SERVICE == STD_OFF)
                s_WdgGptPeriod[eInstance] = u32TimerCount;
                s_WdgTimeout[eInstance] =
                    (uint32)(s_WdgInitialTimeout[eInstance] *
                             (s_WdgConfigPtr[eInstance]->u32WdgTriggerChannelFrequency) /
                             WDG_MILLISECOND_SCALE_U32);
#endif
            }
            else
            {
                s_WdgConfigPtr[eInstance] = NULL_PTR;
            }
#if (WDG_DEV_ERROR_DETECT == STD_ON)
            if (u32TimerCount == 0U)
            {
                s_WdgConfigPtr[eInstance] = NULL_PTR;
                Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                                   (uint8)WDG_INIT_ID,
                                   (uint8)WDG_E_INIT_FAILED);
            }
            /* [SWS_Wdg_00019] [SWDESG_WDG_060]*/
            if (s_WdgConfigPtr[eInstance] == NULL_PTR)
            {
                s_WdgStatus[eInstance] = WDG_UNINIT;
            }
            else
            {
                s_WdgStatus[eInstance] = WDG_IDLE;
            }
        }
#endif
#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
    }
#endif /* (WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON) */
}

/**
 * @brief Switches the watchdog into the mode Mode. [SWS_Wdg_00031] [SWS_Wdg_00160] [SWS_Wdg_00145]
 * [SWDESG_WDG_061]
 *
 * @param Mode Mode to be configured.
 * @param eInstance Hardware WDG instance.
 *
 * @return Std_ReturnType.
 *
 */
WDG_TEXT_SECTION Std_ReturnType Wdg_HLD_SetMode(WdgIf_ModeType             Mode,
                                                const Wdg_HWL_InstanceType eInstance)
{
    Std_ReturnType u8RetVal     = (Std_ReturnType)E_NOT_OK;
    Gpt_ValueType  uElapsedTime = 0;
    uint32         u32TimerCount;
#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
    volatile uint32 u32CoreID;
    u32CoreID = (uint32)GET_CPU_ID();
    if (u32CoreID != Wdg_au32InstanceCoreUsed[eInstance])
    {
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance], (uint8)WDG_INIT_ID, (uint8)WDG_E_PARAM_CONFIG);
    }
    else
    {
#endif /* (WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON) */
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        /* [SWDESG_WDG_047] */
        if (s_WdgStatus[eInstance] != WDG_IDLE)
        {
            /* [SWS_Wdg_00017] [SWDESG_WDG_062] */
            Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                               (uint8)WDG_SETMODE_ID,
                               (uint8)WDG_E_DRIVER_STATE);
        }
        else
        {
            /* [SWS_Wdg_00018] [SWDESG_WDG_063] */
            s_WdgStatus[eInstance] = WDG_BUSY;
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
            /* [SWDESG_WDG_065] [SWDESG_WDG_064] [SWDESG_WDG_081] [SWDESG_WDG_031] [SWDESG_WDG_022]
             * [SWDESG_WDG_013]*/
            if ((Std_ReturnType)E_OK ==
                Wdg_HLD_ValidateModeConfigration(Mode, WDG_SETMODE_ID, WDG_E_PARAM_MODE, eInstance))
            {
                if ((Std_ReturnType)E_OK == Wdg_HLD_ValidateConfigUpdate(eInstance))
                {
#if (WDG_DIRECT_SERVICE == STD_OFF)
                    Gpt_StopTimer(s_WdgConfigPtr[eInstance]->u8WdgTimerChannel);
                    uElapsedTime = Gpt_GetTimeElapsed(s_WdgConfigPtr[eInstance]->u8WdgTimerChannel);
#endif
                    u32TimerCount = Wdg_HLD_StartTimerCount(WDG_SETMODE_ID, Mode, eInstance);
#if (WDG_DIRECT_SERVICE == STD_OFF)
                    s_WdgGptPeriod[eInstance] = u32TimerCount;
                    /* update timeout */
                    if (s_WdgTimeout[eInstance] < uElapsedTime)
                    {
                        s_WdgTimeout[eInstance] = (uint32)0;
                    }
                    else
                    {
                        s_WdgTimeout[eInstance] = s_WdgTimeout[eInstance] - uElapsedTime;
                    }
#else
            (void)uElapsedTime;
            (void)u32TimerCount;
#endif
                    /* [SWS_Wdg_00103] */
                    u8RetVal = (Std_ReturnType)E_OK;
                }
            }
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        }
        if (s_WdgStatus[eInstance] != WDG_UNINIT)
        {
            /* [SWS_Wdg_00018] [SWDESG_WDG_063] */
            s_WdgStatus[eInstance] = WDG_IDLE;
        }
#endif
#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
    }
#endif /* (WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON) */
    return u8RetVal;
}

#if (WDG_DIRECT_SERVICE == STD_OFF)
/**
 * @brief Reset the watchdog timeout counter according to the parameter timeout. [SWS_Wdg_00144]
 * [SWDESG_WDG_067]
 *
 * @param u16Timeout value (milliseconds) for setting the trigger counter.
 * @param eInstance Hardware WDG instance.
 *
 */
WDG_TEXT_SECTION void Wdg_HLD_SetTriggerCondition(uint16                     u16Timeout,
                                                  const Wdg_HWL_InstanceType eInstance)
{
    Gpt_ValueType uElapsedTime;
#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
    volatile uint32 u32CoreID;
    u32CoreID = (uint32)GET_CPU_ID();
    if (u32CoreID != Wdg_au32InstanceCoreUsed[eInstance])
    {
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance], (uint8)WDG_INIT_ID, (uint8)WDG_E_PARAM_CONFIG);
    }
    else
    {
#endif /* (WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON) */
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        /* [SWDESG_WDG_068] */
        if (s_WdgStatus[eInstance] != WDG_IDLE)
        {
            Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                               (uint8)WDG_SETTRIGGERCONDITION_ID,
                               (uint8)WDG_E_DRIVER_STATE);
        }
        else if (u16Timeout > s_WdgMaxTimeout[eInstance])
        {
            /* [SWS_Wdg_00146] [SWDESG_WDG_069] [SWDESG_WDG_083] [SWDESG_WDG_033] [SWDESG_WDG_024]
             * [SWDESG_WDG_015]*/
            Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                               (uint8)WDG_SETTRIGGERCONDITION_ID,
                               (uint8)WDG_E_PARAM_TIMEOUT);
        }
        else
        {
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
            /* [SWS_Wdg_00140] */
            SchM_Enter_Wdg_WDG_EXCLUSIVE_AREA_03();
            uElapsedTime = Gpt_GetTimeElapsed(s_WdgConfigPtr[eInstance]->u8WdgTimerChannel);
            if (((uint16)(uElapsedTime) > s_WdgTimeout[eInstance]) || ((uint16)0 == u16Timeout))
            {
                s_WdgTimeout[eInstance] = (uint32)0;
                SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_03();
                Gpt_StopTimer(s_WdgConfigPtr[eInstance]->u8WdgTimerChannel);
            }
            else
            {
                /* [SWS_Wdg_00136] [SWS_Wdg_00138] [SWS_Wdg_00139] [SWDESG_WDG_066] */
                s_WdgTimeout[eInstance] =
                    (uint32)(u16Timeout * s_WdgConfigPtr[eInstance]->u32WdgTriggerChannelFrequency /
                             WDG_MILLISECOND_SCALE_U32) +
                    uElapsedTime;
                SchM_Exit_Wdg_WDG_EXCLUSIVE_AREA_03();
            }
#if (WDG_DEV_ERROR_DETECT == STD_ON)
        }
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
#if ((WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON))
    }
#endif /* (WDG_MULTICORE_ENABLED == STD_ON) && (WDG_DEV_ERROR_DETECT == STD_ON) */
}
#endif

#if (WDG_VERSION_INFO_API == STD_ON)
/**
 * @brief Returns the version information of the module. [SWDESG_WDG_070]
 *
 * @param pVersioninfoPtr Pointer to version structure
 * @param eInstance Hardware WDG instance
 *
 */
WDG_TEXT_SECTION void Wdg_HLD_GetVersionInfo(Std_VersionInfoType       *pVersioninfoPtr,
                                             const Wdg_HWL_InstanceType eInstance)
{
#if (WDG_DEV_ERROR_DETECT == STD_ON)
    if (NULL_PTR == pVersioninfoPtr)
    {
        /* [SWS_Wdg_00174] [SWDESG_WDG_085] [SWDESG_WDG_035] [SWDESG_WDG_026]  [SWDESG_WDG_017]*/
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                           (uint8)WDG_GETVERSION_ID,
                           (uint8)WDG_E_PARAM_POINTER);
    }
    else
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
    {
        (void)eInstance;
        pVersioninfoPtr->vendorID         = (uint16)WDG_VENDOR_ID;
        pVersioninfoPtr->moduleID         = (uint16)WDG_MODULE_ID;
        pVersioninfoPtr->sw_major_version = (uint8)WDG_SW_MAJOR_VERSION;
        pVersioninfoPtr->sw_minor_version = (uint8)WDG_SW_MINOR_VERSION;
        pVersioninfoPtr->sw_patch_version = (uint8)WDG_SW_PATCH_VERSION;
    }
}
#endif /* WDG_VERSION_INFO_API == STD_ON */

#if (WDG_DIRECT_SERVICE == STD_ON)
/**
 * @brief   Perform the refresh write sequence [SWDESG_WDG_071]
 *
 * @param eInstance Hardware WDG instance
 *
 **/
WDG_TEXT_SECTION void Wdg_HLD_Service(const Wdg_HWL_InstanceType eInstance)
{
#if (WDG_DEV_ERROR_DETECT == STD_ON)
    /* [SWDESG_WDG_068] */
    if (s_WdgStatus[eInstance] != WDG_IDLE)
    {
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                           (uint8)WDG_SERVICE_ID,
                           (uint8)WDG_E_DRIVER_STATE);
    }
    else if ((Std_ReturnType)E_NOT_OK == Wdg_HWL_ValidateTrigger(eInstance))
    {
        /* If WDOG has been disabled, then it cannot be serviced */
        Wdg_ReportDetError((uint8)g_WdgIndex[eInstance],
                           (uint8)WDG_SERVICE_ID,
                           (uint8)WDG_E_DRIVER_STATE);
    }
    else
    {
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
        Wdg_HWL_Trigger(eInstance);
#if (WDG_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* WDG_DEV_ERROR_DETECT == STD_ON */
}
#endif

#ifdef WDG_ROM
#define WDG_STOP_SEC_CODE
#else
#define WDG_STOP_SEC_RAMCODE
#endif
#include "Wdg_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
