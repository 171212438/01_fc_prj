/*!
*   @file    CDD_QDT.h
*   @version 1.5.1
*
*   @brief   AUTOSAR Qdt - QDT driver header file.
*   @details QDT driver header file, containing the Autosar API specification and other variables
*              and functions that are exported by the QDT driver.
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
*   0.1.0       2025/03/11    Flagchip073   N/A          QDT Initial Version
==================================================================================================*/

#ifndef CDD_QDT_H
/* PRQA S 603, 602 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical unspecified behaviour
 *                    #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be declared
 * Reason: It is common definition in h files */
#define CDD_QDT_H
/* PRQA S 603, 602 -- */

#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
*  1) system and project includes
*  2) needed interfaces from external units
*  3) internal and external interfaces from this unit
==================================================================================================*/

#include "Std_Types.h"  /* [SWS_Qdt_00003] [SWDES_Qdt_0002] */
#include "Qdt_Reg.h"
#include "CDD_QDT_Cfg.h"
#include "SchM_Qdt.h"

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: These macros are distinct */
#define QDT_VENDOR_ID                       174
#define QDT_MODULE_ID                       255
#define QDT_AR_RELEASE_MAJOR_VERSION        4
#define QDT_AR_RELEASE_MINOR_VERSION        6
#define QDT_AR_RELEASE_REVISION_VERSION     0
#define QDT_SW_MAJOR_VERSION                1
#define QDT_SW_MINOR_VERSION                5
#define QDT_SW_PATCH_VERSION                1
/* PRQA S 791 -- */
/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                        DEFINES AND MACROS
==================================================================================================*/
/*!
* @brief   API QDT_Qdt_DeInit service called when the QDT driver and the Hardware
*          are already uninitialized
* [SWS_Qdt_00001] [SWDES_Qdt_0001]
*
*/
#define QDT_E_ALREADY_UNINITIALIZED_U8        ((uint8)0x0AU)

/*!
* @brief   API service used with a channel out of range
* [SWS_Qdt_00001] [SWDES_Qdt_0001]
*
*/
#define QDT_E_INVALID_CHANNEL_U8              ((uint8)0x0BU)

/*!
* @brief   API service used without module initialization
* [SWS_Qdt_00001] [SWDES_Qdt_0001]
*
*/
#define QDT_E_UNINIT_U8                       ((uint8)0x0CU)

/*!
* @brief   API QDT_Qdt_Init service called when the QDT driver and the Hardware
*          are already initialized
* [SWS_Qdt_00001] [SWDES_Qdt_0001]
*
*/
#define QDT_E_ALREADY_INITIALIZED_U8          ((uint8)0x0DU)

/*!
* @brief   API service called with wrong parameter
* [SWS_Qdt_00001] [SWDES_Qdt_0001]
*
*/
#define QDT_E_PARAM_U8                        ((uint8)0x0EU)

/*!
* @brief   API Qdt_Init service execution failed
* [SWS_Qdt_00001] [SWDES_Qdt_0001]
*
*/
#define QDT_E_INIT_FAILED_U8                  ((uint8)0x0FU)

/*!
* @brief API service called with wrong core ID
* [SWS_Qdt_00001] [SWDES_Qdt_0001]
*
*/
#define QDT_E_PARTITION_MAPPING               ((uint8)0x10U)

/*!
* @brief API service ID for QDT_Init function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_INIT_ID_U8                        ((uint8)0x1U)

/*!
* @brief API service ID for QDT_DeInit function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_DEINIT_ID_U8                      ((uint8)0x2U)

/*!
* @brief API service ID for QDT_GetVersionInfo function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GETVERSIONINFO_ID_U8              ((uint8)0x3U)

/*!
* @brief API service ID for QDT_ReStartMeasurement function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_RESTART_MEASUREMENT_ID_U8         ((uint8)0x4U)

/*!
* @brief API service ID for QDT_GetChannelFlag function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_CHANNEL_FLAG_ID_U8            ((uint8)0x5U)

/*!
* @brief API service ID for QDT_ClearChannelFlag function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_CLEAR_CHANNEL_FLAG_ID_U8           ((uint8)0x6U)

/*!
* @brief API service ID for QDT_GetEdgeNumber function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_EDGE_NUMBER_ID_U8              ((uint8)0x7U)

/*!
* @brief API service ID for QDT_GetCV function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_CV_ID_U8                       ((uint8)0x8U)

/*!
* @brief API service ID for QDT_GetREVCNT function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_REVCNT_ID_U8                   ((uint8)0x9U)

/*!
* @brief API service ID for QDT_GetREVCNT_HOLD function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_REVCNT_HOLD_ID_U8              ((uint8)0xAU)

/*!
* @brief API service ID for QDT_GetPOSCNT function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_POSCNT_ID_U8                   ((uint8)0xBU)

/*!
* @brief API service ID for QDT_GetPOSCNT_HOLD function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_POSCNT_HOLD_ID_U8              ((uint8)0xCU)

/*!
* @brief API service ID for QDT_GetPOSDCNT function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_POSDCNT_ID_U8                  ((uint8)0xDU)

/*!
* @brief API service ID for QDT_GetPOSDCNT_HOLD function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_POSDCNT_HOLD_ID_U8             ((uint8)0xEU)

/*!
* @brief API service ID for QDT_GetLECNT function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_LECNT_ID_U8                    ((uint8)0xFU)

/*!
* @brief API service ID for QDT_GetLECNT_HOLD function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_LECNT_HOLD_ID_U8               ((uint8)0x10U)

/*!
* @brief API service ID for QDT_GetPOSDTMRCNT function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_POSDTMRCNT_ID_U8               ((uint8)0x11U)

/*!
* @brief API service ID for QDT_GetPOSDTMRCNT_HOLD function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_POSDTMRCNT_HOLD_ID_U8          ((uint8)0x12U)

/*!
* @brief API service ID for QDT_GetSpeed function
* @details Parameters used when raising an error/exception
*
*/
#define QDT_GET_SPEED_ID_U8                    ((uint8)0x13U)

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/


/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/*!
 * @brief This type shall be chosen in order to implement QDT callback function prototype.
 */
typedef void (*QDT_CallbackType)(void);

/*!
 * @brief QDT Status type.
 *
 */
typedef enum
{
    QDT_UNINIT = 0U,   /*!< The QDT is not initialized. */
    QDT_INITIALIZED    /*!< The QDT has been initialized. */
}QDT_StatusType;

/*!
 * @brief QDT operation return values.
 *
 */
typedef enum
{
    QDT_RETURN_OK                 = 0x00U,   /*!< The QDT operation is succeeded. */
    QDT_RETURN_E_NOT_OK           = 0x01U,   /*!< The QDT operation is failed. */
    QDT_RETURN_E_ALREADY_INIT     = 0x02U,   /*!< The QDT has been initialized. */
    QDT_RETURN_E_UNINIT           = 0x03U,   /*!< The QDT is not initialized. */
    QDT_RETURN_E_PARAM            = 0x04U,   /*!< The QDT parameter is incorrect or out of range. */
    QDT_RETURN_E_SEQUENCE         = 0x05U,
    QDT_RETURN_E_MODE             = 0x60U
}QDT_ReturnType;

/*!
* @brief QDT clock source type.
*
*/
typedef enum
{
    QDT_CLOCK_NONE =             0u,  /*!< No clock selected. */
    QDT_CLOCK_INTERNAL_BUSCLK  = 1u,  /*!< QDT input clock from bus clock. */
    QDT_CLOCK_INTERNAL_PCCCLK  = 2u,  /*!< QDT input clock from pcc clock. PCC_SEL is not 0. */
    QDT_CLOCK_EXTERNAL_TCLK0   = 3u,  /*!< External pin input clock from QDT_TCLK0 pin. Only valid when PCC_SEL is 0. */
    QDT_CLOCK_EXTERNAL_TCLK1   = 4u,  /*!< External pin input clock from QDT_TCLK1 pin. Only valid when PCC_SEL is 0. */
    QDT_CLOCK_EXTERNAL_TCLK2   = 5u,  /*!< External pin input clock from QDT_TCLK2 pin. Only valid when PCC_SEL is 0. */
}QDT_ClockSourceType;

/*!
* @brief QDT counter prescaler.
*
*/
typedef enum
{
    QDT_COUNTER_PRESCALE_DIV_1   = 0u,  /*!< QDT counter clock frequency divide by 1. */
    QDT_COUNTER_PRESCALE_DIV_2   = 1u,  /*!< QDT counter clock frequency divide by 2. */
    QDT_COUNTER_PRESCALE_DIV_4   = 2u,  /*!< QDT counter clock frequency divide by 4. */
    QDT_COUNTER_PRESCALE_DIV_8   = 3u,  /*!< QDT counter clock frequency divide by 8. */
    QDT_COUNTER_PRESCALE_DIV_16  = 4u,  /*!< QDT counter clock frequency divide by 16. */
    QDT_COUNTER_PRESCALE_DIV_32  = 5u,  /*!< QDT counter clock frequency divide by 32. */
    QDT_COUNTER_PRESCALE_DIV_64  = 6u,  /*!< QDT counter clock frequency divide by 64. */
    QDT_COUNTER_PRESCALE_DIV_128 = 7u,  /*!< QDT counter clock frequency divide by 128. */
}QDT_CounterPrescaleType;

/*!
* @brief QDT channel index.
*
*/
typedef enum
{
    QDT_CHANNEL_0_PHA  = 0u,    /*!< QDT Channel index 0, PHA pad. */
    QDT_CHANNEL_1_PHB  = 1u,    /*!< QDT Channel index 1, PHB pad. */
    QDT_CHANNEL_2_PHZ  = 2u,    /*!< QDT Channel index 2, PHZ pad. */
    QDT_CHANNEL_3_HOME = 3u,    /*!< QDT Channel index 3, HOME pad. */
}QDT_ChannelIndexType;

/*!
* @brief QDT channel opeartion mode.
*
*/
typedef enum
{
    QDT_CHANNEL_NOT_USED            = 0u,    /*!< QDT Channel is not used. */
    QDT_CHANNEL_IC_MODE             = 1u,    /*!< QDT Channel is in IC mode. */
    QDT_CHANNEL_ICDM_MODE           = 2u,    /*!< QDT Channel is in ICDM mode. */
    QDT_CHANNEL_ICPM_MODE           = 3u,    /*!< QDT Channel is in ICPM mode. */
    QDT_CHANNEL_ICENM_MODE          = 4u,    /*!< QDT Channel is in ICENM mode. */
    QDT_CHANNEL_ICEXPENM_MODE       = 5u,    /*!< QDT Channel is in ICEXPENM mode. */
    QDT_CHANNEL_QUAD_MODE           = 6u,    /*!< QDT Channel is in QUAD mode. */
}QDT_ChannelModeType;

/*!
* @brief QDT channel opeartion mode.
*
*/
typedef enum
{
    QDT_CAPTURE_RISING_EDGE      = 0u,    /*!< Capture the rising edge. */
    QDT_CAPTURE_FALLING_EDGE     = 1u,    /*!< Capture the falling edge. */
    QDT_CAPTURE_BOTH_EDGE        = 2u,    /*!< Capture the both edge. */
}QDT_CaptureEdgeType;

/*!
* @brief QDT channel match trigger type.
*
*/
typedef enum
{
    QDT_CHANNEL_MATCH_POSCNT  = 0u,    /*!< Match point is POSCNT. */
    QDT_CHANNEL_MATCH_REVCNT  = 1u,    /*!< Match point is REVCNT. */
    QDT_CHANNEL_MATCH_DISABLE = 2u,    /*!< Disable the Match trigger. */
}QDT_ChannelMatchType;

typedef struct
{
    QDT_CaptureEdgeType    eEdge;       /*!< Select which edge to capture. */
    boolean                bFromRevCNT; /*!< FALSE: capture POSCNT into the CV register, TRUE: capture REVCNT into the CV register */
    boolean                bResetPOSCNT;   /*!< FALSE:QDT counter is not reset when the selected channel (n) input event is detected */
}QDT_IC_ConfigType;

typedef struct
{
    boolean        bContinueMeasure; /*!< indicates whether continue to measure. */
    boolean        bHighActive;      /*!< Indicate high /low valid of input signal. */
    boolean        bStartWIthActive; /*!< TRUE: the channel starts measuring after the first edge is detected.
                                       FALSE: the measurement starts immediately after activating the channel */
}QDT_ICDM_ConfigType;

typedef struct
{
    boolean                  bContinueMeasure; /*!< indicates whether continue to measure. */
    QDT_CaptureEdgeType      eEdge;  /*!< please don't select both edge. */
    boolean                  bStartWIthActive; /*!< TRUE: the channel starts measuring after the first edge is detected.
                                       FALSE: the measurement starts immediately after activating the channel */
}QDT_ICPM_ConfigType;

/* [SWS_Qdt_00011] [SWDES_Qdt_0010] */
typedef struct
{
    boolean              bContinueMeasure; /*!< indicates whether continue to measure. */
    QDT_CaptureEdgeType  eEdge;       /*!< Select which edge to capture. */
    uint32               u32StartPoint; /*!< The start of the measure window. */
    uint32               u32EndPoint;  /*!< The end of the measure window. */
}QDT_ICENM_ConfigType;

/* [SWS_Qdt_00010] [SWDES_Qdt_0009] */
typedef struct
{
    boolean             bContinueMeasure;  /*!< indicates whether continue to measure. */
    QDT_CaptureEdgeType eEdge;             /*!< Select which edge to capture. */
    uint8               u8ExpectedNum;     /*!< The number of expected edge. */
}QDT_ICEXPENM_ConfigType;

/* [SWS_Qdt_00009] [SWDES_Qdt_0008] */
typedef struct
{
    boolean   bNormalPolarity;     /*!< true: Phase A and phase B encoding mode. false: Count and direction encoding mode */
    uint32    u32CV;               /*!< CV is used to match event. Compare with the source selected by MatchType. */
    QDT_ChannelMatchType  eMatchType;  /*!< Select the match type for CV. */
}QDT_QUAD_ConfigType;

/* [SWS_Qdt_00008] [SWDES_Qdt_0007] */
typedef struct
{
    uint8                  u8LogicChannelID;   /*!< Logic Qdt Channel ID */
    uint8                  u8HwChannelIndex;   /*!< Hardware Qdt Channel ID */
    uint8                  u8InputFilter;      /*!< Channel input filter. 0 means disable the filter. */
    QDT_ChannelModeType    eChannelMode;       /*!< Select Channel operation mode. */

    boolean                bEnChannelInt;      /*!< Enable the channel interrupt. */
    QDT_CallbackType       pChannelCallback;   /*!< Channel interrupt Notification. */
    union
    {
        QDT_IC_ConfigType           const *pICConfig;               /*!< Pointer of IC mode configuration. */
        QDT_ICDM_ConfigType         const *pICDMConfig;             /*!< Pointer of ICDM mode configuration. */
        QDT_ICPM_ConfigType         const *pICPMConfig;             /*!< Pointer of ICPM mode configuration. */
        QDT_ICENM_ConfigType        const *pICENMConfig;            /*!< Pointer of ICENM mode configuration. */
        QDT_ICEXPENM_ConfigType     const *pICEXPENMConfig;         /*!< Pointer of ICEXPENM mode configuration. */
        QDT_QUAD_ConfigType         const *pQUADConfig;            /*!< Pointer of QUAD mode configuration. */
    }uMode;
}QDT_ChannelConfigType;

/*!
* @brief QDT wdog configuration.
* [SWS_Qdt_00007] [SWDES_Qdt_0006]
*/
typedef struct
{
    boolean     bEnWDOG;
    boolean     bEnWDOGFInt;
    uint16      u16Timeout;
    QDT_CallbackType pWDOGFCallback;
}QDT_WdogConfigType;

/*!
* @brief QDT sync mode configuration.
* [SWS_Qdt_00006] [SWDES_Qdt_0005]
*/
typedef struct
{
    boolean    bEnCVSyncTriggerMode;  /*!< True: Sync CV register with trigger mode. */
    boolean    bEnSoftTriggerReset;   /*!< True: Allow SW event to reset POSCNT, REVCNT and POSDCNT. FALSE: SW event will only reset the POSCNT. */
    boolean    bEnHardTriggerInput;   /*!< Enables hardware trigger to the synchronization and reset. */
    boolean    bEnHardTriggerReset;   /*!< True: Allow HW event to reset POSCNT, REVCNT and POSDCNT. FALSE: HW event will not reset any Counter. */
    boolean    bEnHardTriggerUpdate;  /*!< Allow the hardware trigger to cause an update of the POSCNTH, REVCNTH and POSDCNTH registers */
}QDT_SyncModeConfigType;

/*!
* @brief QDT instance configuration.
* [SWS_Qdt_00005] [SWDES_Qdt_0004]
*/
typedef struct
{
    uint8                        u8InstanceLogicID; /*!< QDT instance logic ID. */
    uint8                        u8InstanceHwIndex; /*!< QDT instance hardware index. */
    uint32                       u32BusClockFreq;   /*!< The frequency of Bus clock. */
    uint32                       u32LecntLarge;     /*!< The max lecnt value. */
    uint32                       u32EncoderLine;    /*!< Line number of encoder. */
    boolean                      bEnPHAPHBMode;     /*!< true: Phase A and phase B encoding mode. false: Count and direction encoding mode */
    boolean                      bEnQuadMode;       /*!< QUAD Mode Enable. false is disable, true is enable. */
    boolean                      bEnDebugMode;      /*!< Debug Mode Enable. false is disable, true is enable. */
    boolean                      bEnMatchPulse;     /*!< true means Match Trigger pulses when a match occurs between the position counters (POS) and the corresponding channel value (CV )
                                                 false means Match Trigger pulses when the POSCNT, REVCNT, or POSDCNT are read. */
    QDT_ClockSourceType          eClkSrcSel;        /*!< Select the QDT clock source. */
    QDT_CounterPrescaleType      eCounterPrescale;  /*!< Setting the prescale of QDT counter clock frequency. */
    uint8                        u8FilterPrescale;  /*!< Setting the prescale of QDT input filter. */
    boolean                      bEnTOFInt;         /*!< Timer Overflow Interrupt Enable. true is disable, false is enable. */
    QDT_CallbackType             pTOFCallback;      /*!< Timer Overflow Interrupt callback function. */
    QDT_WdogConfigType     const *pWdgConfig;        /*!< QDT watchdog configuration. */
    QDT_SyncModeConfigType const *pSyncModeConfig;   /*!< QDT sync mode configuration. */
    uint8                        u8ChannelCount;    /*!< The counter of channel used */
    QDT_ChannelConfigType      **pQdtChannelCfg;    /*!< The Pointer array of the Qdt_ChannelConfigType */
}QDT_InstanceConfigType;


/*!
 * @brief Data structure containing the set of configuration parameters required for initializing the Qdt instance(s) and channel(s).
 * [SWS_Qdt_00004] [SWDES_Qdt_0003]
 */
typedef struct
{
    uint8                      u8InstanceCount;            /*!< The counter of the used Qdt instance */
    QDT_InstanceConfigType   **pQdtInstanceCfg;            /*!< The Pointer array of the QDT_InstanceConfigType */
    boolean*                   Qdt_CoresMappingPtr;        /*!< The Pointer array of the core mapping, if true, means the current core need to manage at least one qdt instance */
    uint32*                    Qdt_CtrlCoresMappingPtr;    /*!< The Pointer array of the controller mapping, the value indicate which core should manage the qdt instance */
} QDT_ConfigType;
/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define QDT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Qdt_MemMap.h"

extern const QDT_ConfigType QdtConfig;

#define QDT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Qdt_MemMap.h"

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/

#define QDT_START_SEC_CODE
#include "Qdt_MemMap.h"

/*!
* @brief        Function that initializes the QDT module.
* @details      This function sets the QDTCR register with the value of "pConfigPtr" and set
*               the channel's priority, ECP and DPA
*
* @param[in]    pConfigPtr - pointer to QDT configuration structure
*
* @return       void
*
*/
void Qdt_Init(const QDT_ConfigType *pConfigPtr);

#if (QDT_DEINIT_API == STD_ON)
/*!
 * @brief          This function de-initializes the QDT driver.
 * @details        This service is a non reentrant function.
 *                 Returns all underlying hardware to a state comparable to their
 *                 power on reset state, and de-initialize the QDT driver.
 *
 * @return         void
 * @implements     QDT_DeInit_Activity
 */
void Qdt_DeInit(void);
#endif/* (QDT_DEINIT_API == STD_ON) */

#if (QDT_GET_VERSION_INFO_API == STD_ON)
/*!
 * @brief   This service returns the version information of this module.
 * @details This  service is Non reentrant and returns the version information of this module.
 *          The version information includes:
 *          - Module Id
 *          - Vendor Id
 *          - Vendor specific version numbers
 *          If source code for caller and callee of this function is available this function should
 *          be realized as a macro. The macro should be defined in the modules header file.
 *
 * @param[out]    pVersioninfo      Pointer to location to store version info
 *
 * @return void
 *
 * @api
 *
 * @implements QDT_GetVersionInfo_Activity
 *
 */
QDT_TEXT_SECTION void Qdt_GetVersionInfo(Std_VersionInfoType *pVersioninfo);
#endif /* (QDT_GET_VERSION_INFO_API == STD_ON) */

/**
 * @brief This service Re-start a measurement in Single Measurement Mode.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_ReStartMeasurement(uint8 u8ControllerID, uint8 u8ChannelID);

/**
 * @brief This service get the channel flag, used for polling method.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 * @param[out]   pSet                The pointer of getting if the flag is set.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetChannelFlag(uint8 u8ControllerID, uint8 u8ChannelID, boolean *pSet);

/**
 * @brief This service clear the channel flag, used for polling method.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_ClearChannelFlag(uint8 u8ControllerID, uint8 u8ChannelID);

/**
 * @brief This service get the edge number value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 * @param[out]   pNumber             The pointer of getting the edge number value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetEdgeNumber(uint8 u8ControllerID, uint8 u8ChannelID, uint32 *pNumber);

/**
 * @brief This service get the CV counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[in]    u8ChannelID         The qdt channel index
 * @param[out]   pCV                 The pointer of getting the CV counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetCV(uint8 u8ControllerID, uint8 u8ChannelID, uint32 *pCV);

/**
 * @brief This service get the REV counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pREVCNT             The pointer of getting the REV counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetREVCNT(uint8 u8ControllerID, uint32 *pREVCNT);

/**
 * @brief This service get the REV HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pREVCNTH            The pointer of getting the REV HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetREVCNT_HOLD(uint8 u8ControllerID, uint32 *pREVCNTH);

/**
 * @brief This service get the POS counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSCNT             The pointer of getting the POS counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetPOSCNT(uint8 u8ControllerID, uint32 *pPOSCNT);

/**
 * @brief This service reset the POS counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_ResetPOSCNT(uint8 u8ControllerID);

/**
 * @brief This service get the POS HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSCNTH            The pointer of getting the POS HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetPOSCNT_HOLD(uint8 u8ControllerID, uint32 *pPOSCNTH);

/**
 * @brief This service get the POS DIFF counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSDCNT            The pointer of getting the POS DIFF counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetPOSDCNT(uint8 u8ControllerID, uint32 *pPOSDCNT);

/**
 * @brief This service get the POS DIFF HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSDCNTH           The pointer of getting the POS DIFF HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetPOSDCNT_HOLD(uint8 u8ControllerID, uint32 *pPOSDCNTH);

/**
 * @brief This service get the LE counter value.
 *
 * @param pSentHandle  The structure of the QDT processing handle.
 * @param pLECNT       The pointer of getting the LE counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetLECNT(uint8 u8ControllerID, uint32 *pLECNT);

/**
 * @brief This service get the LE HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pLECNTH             The pointer of getting the LE HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetLECNT_HOLD(uint8 u8ControllerID, uint32 *pLECNTH);

/**
 * @brief This service get the POSDTMR counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSDTMRCNT         The pointer of getting the POSDTMR counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetPOSDTMRCNT(uint8 u8ControllerID, uint32 *pPOSDTMRCNT);

/**
 * @brief This service get the POSDTMR HOLD counter value.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pPOSDTMRCNTH        The pointer of getting the POSDTMR HOLD counter value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetPOSDTMRCNT_HOLD(uint8 u8ControllerID, uint32 *pPOSDTMRCNTH);

/**
 * @brief This service get the speed from the sensor.
 *
 * @param[in]    u8ControllerID      The qdt controller index
 * @param[out]   pSpeed              The pointer of getting the speed value.
 *
 * @return QDT_RETURN_OK is OK, others are not OK
 */
QDT_ReturnType Qdt_GetSpeed(uint8 u8ControllerID, float32 *pSpeed);

#define QDT_STOP_SEC_CODE
#include "Qdt_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif  /* QDT_H */
/*! @} */

