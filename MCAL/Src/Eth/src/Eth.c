/**
*   @file    Eth.c
*   @version 1.5.1

*   @brief   AUTOSAR ETH - driver API implemention.
*   @details This file contains the implementation of ethernet driver API.
*
*   @addtogroup ETH
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : ETH
*   PLATFORM             : Flagchip FC7300
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2020-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/

/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   0.1.0       10/07/2023    QXW0085       N/A          Eth Initial Version
*   0.2.0       27/09/2023    QXW0085       N/A          Implementation of Multicore instance
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Requirements modification and bugs fix
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.6.0       21/03/2024    QXW0085       N/A          Bugs fix and code Optimization
*   0.8.0       17/07/2024    QXW0085       N/A          Update Misra-C detection
*   1.5.0       21/01/2026    QXW0085       N/A          Support Time Based Schedule
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "Eth.h"
#include "Eth_Hal.h"
#include "SchM_Eth.h"
#if (STD_ON == ETH_DEV_ERROR_DETECT)
#include "Det.h"
#endif

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define ETH_C_VENDOR_ID                   174
#define ETH_C_MODULE_ID                   88
#define ETH_C_AR_RELEASE_MAJOR_VERSION    4
#define ETH_C_AR_RELEASE_MINOR_VERSION    6
#define ETH_C_AR_RELEASE_REVISION_VERSION 0
#define ETH_C_SW_MAJOR_VERSION            1
#define ETH_C_SW_MINOR_VERSION            5
#define ETH_C_SW_PATCH_VERSION            1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* [SWS_Eth_00007][SWDESG_ETH_177] Check version number */

/* Check if current source file and  header file are of the same vendor */
#if (ETH_C_VENDOR_ID != ETH_VENDOR_ID)
#error "Eth.c and Eth.h have different vendor id"
#endif
/* Check if current source file and header file are of the same module */
#if (ETH_C_MODULE_ID != ETH_MODULE_ID)
#error "Eth.c and Eth.h have different module id"
#endif
/* Check if current source file and header file are of the same Autosar version */
#if ((ETH_C_AR_RELEASE_MAJOR_VERSION != ETH_AR_RELEASE_MAJOR_VERSION) || \
     (ETH_C_AR_RELEASE_MINOR_VERSION != ETH_AR_RELEASE_MINOR_VERSION) || \
     (ETH_C_AR_RELEASE_REVISION_VERSION != ETH_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Eth.c and Eth.h are different"
#endif
/* Check if current source file and header file are of the same Software version */
#if ((ETH_C_SW_MAJOR_VERSION != ETH_SW_MAJOR_VERSION) || \
     (ETH_C_SW_MINOR_VERSION != ETH_SW_MINOR_VERSION) || \
     (ETH_C_SW_PATCH_VERSION != ETH_SW_PATCH_VERSION))
#error "Software Version Numbers of Eth.c and Eth.h are different"
#endif

/* Check if current file and Eth cfg header file are of the same vendor */
#if (ETH_CFG_VENDOR_ID != ETH_VENDOR_ID)
#error "Eth.c and Eth_Cfg.h have different vendor id"
#endif
/* Check if current file and Eth cfg header file are of the same module */
#if (ETH_CFG_MODULE_ID != ETH_MODULE_ID)
#error "Eth.c and Eth_Cfg.h have different module id"
#endif
/* Check if current file and Eth cfg header file are of the same Autosar version */
#if ((ETH_CFG_AR_RELEASE_MAJOR_VERSION != ETH_AR_RELEASE_MAJOR_VERSION) || \
     (ETH_CFG_AR_RELEASE_MINOR_VERSION != ETH_AR_RELEASE_MINOR_VERSION) || \
     (ETH_CFG_AR_RELEASE_REVISION_VERSION != ETH_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Eth.c and Eth_Cfg.h are different"
#endif
/* Check if current file and Eth cfg header file are of the same Software version */
#if ((ETH_CFG_SW_MAJOR_VERSION != ETH_SW_MAJOR_VERSION) || \
     (ETH_CFG_SW_MINOR_VERSION != ETH_SW_MINOR_VERSION) || \
     (ETH_CFG_SW_PATCH_VERSION != ETH_SW_PATCH_VERSION))
#error "Software Version Numbers of Eth.c and Eth_Cfg.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                           VARIABLES
==================================================================================================*/

#define ETH_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Eth_MemMap.h"

ETH_DATA_SECTION static Eth_StateType Eth_eInitState[ETH_NUM_ECU_PARTITIONS];

ETH_DATA_SECTION const Eth_ConfigType *Eth_Config_Ptrs[ETH_NUM_ECU_PARTITIONS];

#define ETH_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Eth_MemMap.h"

#if (STD_ON == ETH_PRECOMPILE_SUPPORT)
extern const Eth_ConfigType Eth_Config;
#endif /* STD_ON == ETH_PRECOMPILE_SUPPORT */

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define ETH_START_SEC_CODE
#include "Eth_MemMap.h"

#if (STD_ON == ETH_DEV_ERROR_DETECT)

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_InitDevCheck(uint8                 CoreId,
                                                              const Eth_ConfigType *CfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_SetControllerModeDevCheck(uint8 CtrlIdx,
                                                                           uint8 CoreId);

ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_GetControllerModeDevCheck(uint8               CtrlIdx,
                                                          uint8               CoreId,
                                                          const Eth_ModeType *CtrlModePtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetPhysAddrDevCheck(uint8        CtrlIdx,
                                                                     uint8        CoreId,
                                                                     const uint8 *PhysAddrPtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_SetPhysAddrDevCheck(uint8        CtrlIdx,
                                                                     uint8        CoreId,
                                                                     const uint8 *PhysAddrPtr);

#if (STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER)
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_UpdatePhysAddrFilterDevCheck(uint8        CtrlIdx,
                                                             uint8        CoreId,
                                                             const uint8 *PhysAddrPtr);
#endif /* STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER */

#if (STD_ON == ETH_CTRL_ENABLE_MII)
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_WriteMiiDevCheck(uint8 CtrlIdx, uint8 CoreId);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_ReadMiiDevCheck(uint8         CtrlIdx,
                                                                 uint8         CoreId,
                                                                 const uint16 *RegValPtr);
#endif /* STD_ON == ETH_CTRL_ENABLE_MII */

#if (STD_ON == ETH_CTRL_ENABLE_MMD)
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_WriteMmdDevCheck(uint8 CtrlIdx, uint8 CoreId);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_ReadMmdDevCheck(uint8         CtrlIdx,
                                                                 uint8         CoreId,
                                                                 const uint16 *RegValPtr);
#endif /* STD_ON == ETH_CTRL_ENABLE_MMD */

#if (STD_ON == ETH_GET_COUNTER_VALUES_API)
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_GetCounterValuesDevCheck(uint8                  CtrlIdx,
                                                         uint8                  CoreId,
                                                         const Eth_CounterType *CounterPtr);
#endif /* STD_ON == ETH_GET_COUNTER_VALUES_API */

#if (STD_ON == ETH_GET_RX_STATS_API)
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetRxStatsDevCheck(uint8                  CtrlIdx,
                                                                    uint8                  CoreId,
                                                                    const Eth_RxStatsType *RxStats);
#endif /* STD_ON == ETH_GET_RX_STATS_API */

#if (STD_ON == ETH_GET_TX_STATS_API)
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetTxStatsDevCheck(uint8                  CtrlIdx,
                                                                    uint8                  CoreId,
                                                                    const Eth_TxStatsType *TxStats);
#endif /* STD_ON == ETH_GET_TX_STATS_API */

#if (STD_ON == ETH_GET_TX_ERROR_COUNTER_VALUES_API)
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetTxErrorCounterValuesDevCheck(
    uint8                               CtrlIdx,
    uint8                               CoreId,
    const Eth_TxErrorCounterValuesType *TxErrorCounterValues);
#endif /* STD_ON == ETH_GET_TX_ERROR_COUNTER_VALUES_API */

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetCurrentTimeDevCheck(
    uint8                        CtrlIdx,
    uint8                        CoreId,
    const Eth_TimeStampQualType *timeQualPtr,
    const Eth_TimeStampType     *timeStampPtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_EnableEgressTimeStampDevCheck(uint8 CtrlIdx,
                                                                               uint8 CoreId,
                                                                               Eth_BufIdxType BufIdx);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetEgressTimeStampDevCheck(
    uint8                    CtrlIdx,
    uint8                    CoreId,
    Eth_BufIdxType           BufIdx,
    Eth_TimeStampQualType   *timeQualPtr,
    const Eth_TimeStampType *timeStampPtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetIngressTimeStampDevCheck(
    uint8                    CtrlIdx,
    uint8                    CoreId,
    const Eth_DataType      *DataPtr,
    Eth_TimeStampQualType   *timeQualPtr,
    const Eth_TimeStampType *timeStampPtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_SetCorrectionTimeDevCheck(
    uint8                      CtrlIdx,
    uint8                      CoreId,
    const Eth_TimeIntDiffType *timeOffsetPtr,
    const Eth_RateRatioType   *rateRatioPtr);

ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_SetGlobalTimeDevCheck(uint8                    CtrlIdx,
                                                      uint8                    CoreId,
                                                      const Eth_TimeStampType *timeStampPtr);
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_ProvideTxBufferDevCheck(
    uint8                 CtrlIdx,
    uint8                 CoreId,
    const Eth_BufIdxType *BufIdxPtr,
    const uint8 *const   *BufPtr,
    const uint16         *LenBytePtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_TransmitDevCheck(uint8          CtrlIdx,
                                                                  uint8          CoreId,
                                                                  Eth_BufIdxType BufIdx,
                                                                  const uint8   *PhysAddrPtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_ReceiveDevCheck(uint8             CtrlIdx,
                                                                 uint8             CoreId,
                                                                 uint8             FifoIdx,
                                                                 Eth_RxStatusType *RxStatusPtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_TxConfirmationDevCheck(uint8 CtrlIdx, uint8 CoreId);

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_TimeAwareShaperInitDevCheck(uint8 CtrlIdx,
                                                            uint8 CoreId,
                                                            uint8 TimeAwareShaperIdx);
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_TBSConfigureCtrlDevCheck(uint8                 CtrlIdx,
                                                         uint8                 CoreId,
                                                         const Eth_TBSCfgType *TBSCfgPtr);

ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_TBSSetLaunchTimeDevCheck(
    uint8                        CtrlIdx,
    uint8                        CoreId,
    Eth_BufIdxType               BufIdx,
    const Eth_TBSLaunchTimeType *LaunchTimePtr);
#endif /* STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT */

#endif /* STD_ON == ETH_DEV_ERROR_DETECT */

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_EcucPartitionCheck(const Eth_CtrlCfgType *CtrlCfgPtr,
                                                                    uint8 CoreId,
                                                                    uint8 Sid);
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */

#if (STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER)
ETH_TEXT_SECTION LOCAL_INLINE boolean Eth_PhysAddrIsFullFilterOpenPattern(const uint8 *PhysAddrPtr);

ETH_TEXT_SECTION LOCAL_INLINE boolean Eth_PhysAddrIsFullFilterCLosePattern(const uint8 *PhysAddrPtr);
#endif /* STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#if (STD_ON == ETH_DEV_ERROR_DETECT)
/**
 * @brief                        Check the development errors of Eth_Init.
 *
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] CfgPtr             Points to the implementation specific structure.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_InitDevCheck(uint8                 CoreId,
                                                              const Eth_ConfigType *CfgPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWDESG_ETH_002]Check the parameter CfgPtr for being valid */
#if (STD_ON == ETH_PRECOMPILE_SUPPORT)
    if (NULL_PTR != CfgPtr)
#else
    if (NULL_PTR == CfgPtr)
#endif /* STD_ON == ETH_PRECOMPILE_SUPPORT */
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_INIT,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWDESG_ETH_003]Check the driver is already initialized. */
        if (Eth_eInitState[CoreId] != ETH_STATE_UNINIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_INIT,
                                  (uint8)ETH_E_ALREADY_INITIALIZED);
        }
        else
        {
            RetValue = E_OK;
        }
    }

    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_SetControllerMode.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_SetControllerModeDevCheck(uint8 CtrlIdx, uint8 CoreId)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00043][SWDESG_ETH_006]Check Eth_Init was previously called */
    if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_SETCONTROLLERMODE,
                              (uint8)ETH_E_UNINIT);
    }
    else
    {
        /* [SWS_Eth_00044][SWDESG_ETH_007]Check the parameter CtrlIdx for being valid */
        if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_SETCONTROLLERMODE,
                                  (uint8)ETH_E_INV_CTRL_IDX);
        }
        else
        {
            RetValue = E_OK;
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_GetControllerMode.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] CtrlModePtr        Pointer to memory containing the controller mode.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_GetControllerModeDevCheck(uint8               CtrlIdx,
                                                          uint8               CoreId,
                                                          const Eth_ModeType *CtrlModePtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00050][SWDESG_ETH_009]Check the parameter CtrlModePtr for being valid */
    if (NULL_PTR == CtrlModePtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETCONTROLLERMODE,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00048][SWDESG_ETH_010]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETCONTROLLERMODE,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00049][SWDESG_ETH_011]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETCONTROLLERMODE,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_GetPhysAddr.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical address.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetPhysAddrDevCheck(uint8        CtrlIdx,
                                                                     uint8        CoreId,
                                                                     const uint8 *PhysAddrPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00056][SWDESG_ETH_013]Check the parameter PhysAddrPtr for being valid */
    if (NULL_PTR == PhysAddrPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETPHYSADDR,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00054][SWDESG_ETH_014]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETPHYSADDR,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00055][SWDESG_ETH_015]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETPHYSADDR,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_SetPhysAddr.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical address.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_SetPhysAddrDevCheck(uint8        CtrlIdx,
                                                                     uint8        CoreId,
                                                                     const uint8 *PhysAddrPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00142][SWDESG_ETH_017]Check the parameter PhysAddrPtr for being valid */
    if (NULL_PTR == PhysAddrPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_SETPHYSADDR,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00140][SWDESG_ETH_018]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_SETPHYSADDR,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00141][SWDESG_ETH_019]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_SETPHYSADDR,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

#if (STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER)
/**
 * @brief                        Check the development errors of Eth_UpdatePhysAddrFilter.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical address.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_UpdatePhysAddrFilterDevCheck(uint8        CtrlIdx,
                                                             uint8        CoreId,
                                                             const uint8 *PhysAddrPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00166][SWDESG_ETH_024]Check the parameter PhysAddrPtr for being valid */
    if (NULL_PTR == PhysAddrPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_UPDATEADDRFILTER,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00164][SWDESG_ETH_025]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_UPDATEADDRFILTER,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00165][SWDESG_ETH_026]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_UPDATEADDRFILTER,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER */

#if (STD_ON == ETH_CTRL_ENABLE_MII)
/**
 * @brief                        Check the development errors of Eth_WriteMii.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_WriteMiiDevCheck(uint8 CtrlIdx, uint8 CoreId)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00060][SWDESG_ETH_028]Check Eth_Init was previously called */
    if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_WRITEMII,
                              (uint8)ETH_E_UNINIT);
    }
    else
    {
        /* [SWS_Eth_00061][SWDESG_ETH_029]Check the parameter CtrlIdx for being valid */
        if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_WRITEMII,
                                  (uint8)ETH_E_INV_CTRL_IDX);
        }
        /* [ECUC_Eth_00012[SWDESG_ETH_133]]Check MII interface is enabled on the controller */
        else if ((boolean)FALSE == ETH_CFG_CTRL_ENABLE_MII(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId)))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_WRITEMII,
                                  (uint8)ETH_E_NOT_SUPPORT);
        }
        else
        {
            RetValue = E_OK;
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_ReadMii.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] RegValPtr          Pointer to memory containing the register value.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_ReadMiiDevCheck(uint8         CtrlIdx,
                                                                 uint8         CoreId,
                                                                 const uint16 *RegValPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00068][SWDESG_ETH_031]Check the parameter RegValPtr for being valid */
    if (NULL_PTR == RegValPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_READMII,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00066][SWDESG_ETH_032]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_READMII,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00067][SWDESG_ETH_033]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_READMII,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            /* [ECUC_Eth_00012][SWDESG_ETH_134]Check MII interface is enabled on the controller */
            else if ((boolean)FALSE == ETH_CFG_CTRL_ENABLE_MII(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId)))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_READMII,
                                      (uint8)ETH_E_NOT_SUPPORT);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_CTRL_ENABLE_MII */

#if (STD_ON == ETH_CTRL_ENABLE_MMD)
/**
 * @brief                        Check the development errors of Eth_WriteMmd.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_WriteMmdDevCheck(uint8 CtrlIdx, uint8 CoreId)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [FUNC_Eth_00010][SWDESG_ETH_035]Check Eth_Init was previously called */
    if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_WRITEMMD,
                              (uint8)ETH_E_UNINIT);
    }
    else
    {
        /* [FUNC_Eth_00011][SWDESG_ETH_036]Check the parameter CtrlIdx for being valid */
        if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_WRITEMMD,
                                  (uint8)ETH_E_INV_CTRL_IDX);
        }
        /* [FUNC_Eth_00007][SWDESG_ETH_135]Check MII interface is enabled on the controller */
        else if ((boolean)FALSE == ETH_CFG_CTRL_ENABLE_MMD(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId)))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_WRITEMMD,
                                  (uint8)ETH_E_NOT_SUPPORT);
        }
        else
        {
            RetValue = E_OK;
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_ReadMmd.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] RegValPtr          Pointer to memory containing the register value.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_ReadMmdDevCheck(uint8         CtrlIdx,
                                                                 uint8         CoreId,
                                                                 const uint16 *RegValPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [FUNC_Eth_00018][SWDESG_ETH_038]Check the parameter RegValPtr for being valid */
    if (NULL_PTR == RegValPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_READMMD,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [FUNC_Eth_00016][SWDESG_ETH_039]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_READMMD,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [FUNC_Eth_00017][SWDESG_ETH_040]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_READMMD,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            /* [FUNC_Eth_00007][SWDESG_ETH_136]Check MMD interface is enabled on the controller */
            else if ((boolean)FALSE == ETH_CFG_CTRL_ENABLE_MMD(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId)))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_READMMD,
                                      (uint8)ETH_E_NOT_SUPPORT);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_CTRL_ENABLE_MMD */

#if (STD_ON == ETH_GET_COUNTER_VALUES_API)
/**
 * @brief                        Check the development errors of Eth_GetCounterValues.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] CounterPtr         Pointer to memory containing the counter values.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_GetCounterValuesDevCheck(uint8                  CtrlIdx,
                                                         uint8                  CoreId,
                                                         const Eth_CounterType *CounterPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00230][SWDESG_ETH_042]Check the parameter CounterPtr for being valid */
    if (NULL_PTR == CounterPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETCOUNTERVALUES,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00228][SWDESG_ETH_043]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETCOUNTERVALUES,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00229][SWDESG_ETH_044]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETCOUNTERVALUES,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_GET_COUNTER_VALUES_API */

#if (STD_ON == ETH_GET_RX_STATS_API)
/**
 * @brief                        Check the development errors of Eth_GetRxStats.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] RxStats            Pointer to memory containing the RxStats values.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetRxStatsDevCheck(uint8                  CtrlIdx,
                                                                    uint8                  CoreId,
                                                                    const Eth_RxStatsType *RxStats)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00237][SWDESG_ETH_046]Check the parameter RxStats for being valid */
    if (NULL_PTR == RxStats)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETRXSTATS,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00235][SWDESG_ETH_047]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETRXSTATS,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00236][SWDESG_ETH_048]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETRXSTATS,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_GET_RX_STATS_API */

#if (STD_ON == ETH_GET_TX_STATS_API)
/**
 * @brief                        Check the development errors of Eth_GetTxStats.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] TxStats            Pointer to memory.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetTxStatsDevCheck(uint8                  CtrlIdx,
                                                                    uint8                  CoreId,
                                                                    const Eth_TxStatsType *TxStats)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00250][SWDESG_ETH_050]Check the parameter TxStats for being valid */
    if (NULL_PTR == TxStats)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETTXSTATS,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00248][SWDESG_ETH_051]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETTXSTATS,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00249][SWDESG_ETH_052]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETTXSTATS,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_GET_TX_STATS_API */

#if (STD_ON == ETH_GET_TX_ERROR_COUNTER_VALUES_API)
/**
 * @brief                        Check the development errors of Eth_GetTxErrorCounterValues.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] TxErrorCounterValues Pointer to memory containing the Tx error counter values.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetTxErrorCounterValuesDevCheck(
    uint8                               CtrlIdx,
    uint8                               CoreId,
    const Eth_TxErrorCounterValuesType *TxErrorCounterValues)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00254][SWDESG_ETH_054]Check the parameter TxErrorCounterValues for being valid */
    if (NULL_PTR == TxErrorCounterValues)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETTXERRORCOUNTERVALUES,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00252][SWDESG_ETH_055]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETTXERRORCOUNTERVALUES,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00253][SWDESG_ETH_056]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETTXERRORCOUNTERVALUES,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_GET_TX_ERROR_COUNTER_VALUES_API */

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
/**
 * @brief                        Check the development errors of Eth_GetCurrentTime.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] timeQualPtr        Pointer to memory containing the quality of HW time stamp.
 * @param[in] timeStampPtr       Pointer to memory containing the HW time stamp.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetCurrentTimeDevCheck(
    uint8                        CtrlIdx,
    uint8                        CoreId,
    const Eth_TimeStampQualType *timeQualPtr,
    const Eth_TimeStampType     *timeStampPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00184][SWDESG_ETH_058]Check the parameter pointers for being valid */
    if ((NULL_PTR == timeQualPtr) || (NULL_PTR == timeStampPtr))
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETCURRENTTIME,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00182][SWDESG_ETH_059]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETCURRENTTIME,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00183][SWDESG_ETH_060]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETCURRENTTIME,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_EnableEgressTimeStamp.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] BufIdx             Index of the message buffer.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_EnableEgressTimeStampDevCheck(uint8 CtrlIdx,
                                                                               uint8 CoreId,
                                                                               Eth_BufIdxType BufIdx)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00187][SWDESG_ETH_062]Check Eth_Init was previously called */
    if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_ENABLEEGRESSTIMESTAMP,
                              (uint8)ETH_E_UNINIT);
    }
    else
    {
        /* [SWS_Eth_00188][SWDESG_ETH_063]Check the parameter CtrlIdx for being valid */
        if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_ENABLEEGRESSTIMESTAMP,
                                  (uint8)ETH_E_INV_CTRL_IDX);
        }
        /* [SWDESG_ETH_064]Check the parameter BufIdx for being valid */
        else if ((uint32)BufIdx >= Eth_Hal_TxBuffersCount(CtrlIdx))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_ENABLEEGRESSTIMESTAMP,
                                  (uint8)ETH_E_INV_PARAM);
        }
        else
        {
            RetValue = E_OK;
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_GetEgressTimeStamp.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] BufIdx             Index of the message buffer.
 * @param[in] timeQualPtr        Pointer to memory containing the quality of HW time stamp.
 * @param[in] timeStampPtr       Pointer to memory containing the HW time stamp.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetEgressTimeStampDevCheck(
    uint8                    CtrlIdx,
    uint8                    CoreId,
    Eth_BufIdxType           BufIdx,
    Eth_TimeStampQualType   *timeQualPtr,
    const Eth_TimeStampType *timeStampPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00193][SWDESG_ETH_066]Check the parameter pointers for being valid */
    if ((NULL_PTR == timeQualPtr) || (NULL_PTR == timeStampPtr))
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETEGRESSTIMESTAMP,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        *timeQualPtr = ETH_UNCERTAIN;
        /* [SWS_Eth_00191][SWDESG_ETH_067]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETEGRESSTIMESTAMP,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00192][SWDESG_ETH_068]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETEGRESSTIMESTAMP,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            /* [SWDESG_ETH_069]Check the parameter BufIdx for being valid */
            else if ((uint32)BufIdx >= Eth_Hal_TxBuffersCount(CtrlIdx))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETEGRESSTIMESTAMP,
                                      (uint8)ETH_E_INV_PARAM);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_GetIngressTimeStamp.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] DataPtr            Pointer to the message buffer.
 * @param[in] timeQualPtr        Pointer to memory containing the quality of HW time stamp.
 * @param[in] timeStampPtr       Pointer to memory containing the HW time stamp.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_GetIngressTimeStampDevCheck(
    uint8                    CtrlIdx,
    uint8                    CoreId,
    const Eth_DataType      *DataPtr,
    Eth_TimeStampQualType   *timeQualPtr,
    const Eth_TimeStampType *timeStampPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00198][SWDESG_ETH_071]Check the parameter pointers for being valid */
    if ((NULL_PTR == DataPtr) || (NULL_PTR == timeQualPtr) || (NULL_PTR == timeStampPtr))
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETINGRESSTIMESTAMP,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        *timeQualPtr = ETH_UNCERTAIN;
        /* [SWS_Eth_00196][SWDESG_ETH_072]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_GETINGRESSTIMESTAMP,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00197][SWDESG_ETH_073]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_GETINGRESSTIMESTAMP,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_SetCorrectionTime.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] timeOffsetPtr      Pointer to memory containing the time stamp difference.
 * @param[in] rateRatioPtr       Pointer to memory containing the time rate ratio difference.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_SetCorrectionTimeDevCheck(
    uint8                      CtrlIdx,
    uint8                      CoreId,
    const Eth_TimeIntDiffType *timeOffsetPtr,
    const Eth_RateRatioType   *rateRatioPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [FUNC_Eth_00062][FUNC_Eth_00063][SWDESG_ETH_075]Check the pointers for being valid */
    if ((NULL_PTR == timeOffsetPtr) || (NULL_PTR == rateRatioPtr))
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_SETCORRECTIONTIME,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [FUNC_Eth_00060][SWDESG_ETH_076]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_SETCORRECTIONTIME,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [FUNC_Eth_00061][SWDESG_ETH_077]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_SETCORRECTIONTIME,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_SetGlobalTime.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] timeStampPtr       Pointer to memory containing the time stamp to set.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_SetGlobalTimeDevCheck(uint8                    CtrlIdx,
                                                      uint8                    CoreId,
                                                      const Eth_TimeStampType *timeStampPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [FUNC_Eth_00070][SWDESG_ETH_079]Check the parameter timeStampPtr for being valid */
    if (NULL_PTR == timeStampPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_SETGLOBALTIME,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [FUNC_Eth_00068][SWDESG_ETH_080]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_SETGLOBALTIME,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [FUNC_Eth_00069][SWDESG_ETH_081]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_SETGLOBALTIME,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

/**
 * @brief                        Check the development errors of Eth_ProvideTxBuffer.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] BufIdxPtr          Pointer to memory containing the Buffer index.
 * @param[in] BufPtr             Pointer to memory containing the TX buffer.
 * @param[in] LenBytePtr         Pointer to memory containing the buffer length.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_ProvideTxBufferDevCheck(
    uint8                 CtrlIdx,
    uint8                 CoreId,
    const Eth_BufIdxType *BufIdxPtr,
    const uint8 *const   *BufPtr,
    const uint16         *LenBytePtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00083][SWS_Eth_00084][SWS_Eth_00085][SWDESG_ETH_083]
     * Check the parameter pointers for being valid.
     */
    if ((NULL_PTR == BufIdxPtr) || (NULL_PTR == BufPtr) || (NULL_PTR == LenBytePtr))
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_PROVIDETXBUFFER,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00081][SWDESG_ETH_084]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_PROVIDETXBUFFER,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00082][SWDESG_ETH_085]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_PROVIDETXBUFFER,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_Transmit.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] BufIdx             Index of the buffer resource.
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical address.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_TransmitDevCheck(uint8          CtrlIdx,
                                                                  uint8          CoreId,
                                                                  Eth_BufIdxType BufIdx,
                                                                  const uint8   *PhysAddrPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00093][SWDESG_ETH_090]Check the parameter PhysAddrPtr for being valid */
    if (NULL_PTR == PhysAddrPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_TRANSMIT,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        /* [SWS_Eth_00090][SWDESG_ETH_091]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_TRANSMIT,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00091][SWDESG_ETH_092]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_TRANSMIT,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            /* [SWS_Eth_00129][SWDESG_ETH_093]Check the controller is in active mode. */
            else if (ETH_MODE_ACTIVE != Eth_Hal_GetControllerMode(CtrlIdx))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_TRANSMIT,
                                      (uint8)ETH_E_INV_MODE);
            }
            /* [SWS_Eth_00092][SWDESG_ETH_094]Check the BufIdx is valid. */
            else if ((uint32)BufIdx >= Eth_Hal_TxBuffersCount(CtrlIdx))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_TRANSMIT,
                                      (uint8)ETH_E_INV_PARAM);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_Receive.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] FifoIdx            Index of RX FIFO.
 * @param[in] RxStatusPtr        Pointer to memory containing the receive status.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_ReceiveDevCheck(uint8             CtrlIdx,
                                                                 uint8             CoreId,
                                                                 uint8             FifoIdx,
                                                                 Eth_RxStatusType *RxStatusPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWDESG_ETH_098]Check the parameter RxStatusPtr for being valid */
    if (NULL_PTR == RxStatusPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_RECEIVE,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
    {
        *RxStatusPtr = ETH_NOT_RECEIVED;
        /* [SWS_Eth_00097][SWDESG_ETH_099]Check Eth_Init was previously called */
        if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_RECEIVE,
                                  (uint8)ETH_E_UNINIT);
        }
        else
        {
            /* [SWS_Eth_00098][SWDESG_ETH_100]Check the parameter CtrlIdx for being valid */
            if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_RECEIVE,
                                      (uint8)ETH_E_INV_CTRL_IDX);
            }
            /* [SWS_Eth_00132][SWDESG_ETH_101]Check the controller is in active mode. */
            else if (ETH_MODE_ACTIVE != Eth_Hal_GetControllerMode(CtrlIdx))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_RECEIVE,
                                      (uint8)ETH_E_INV_MODE);
            }
            /* [SWDESG_ETH_102]Check the Fifo ID is valid. */
            else if (FifoIdx >= ETH_CFG_NUM_RX_FIFO(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId)))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_RECEIVE,
                                      (uint8)ETH_E_INV_PARAM);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_TxConfirmation.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_TxConfirmationDevCheck(uint8 CtrlIdx, uint8 CoreId)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* [SWS_Eth_00103][SWDESG_ETH_104]Check Eth_Init was previously called */
    if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_TXCONFIRMATION,
                              (uint8)ETH_E_UNINIT);
    }
    else
    {
        /* [SWS_Eth_00104][SWDESG_ETH_105]Check the parameter CtrlIdx for being valid */
        if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_TXCONFIRMATION,
                                  (uint8)ETH_E_INV_CTRL_IDX);
        }
        /* [SWS_Eth_00134][SWDESG_ETH_137]Check the controller is in active mode. */
        else if (ETH_MODE_ACTIVE != Eth_Hal_GetControllerMode(CtrlIdx))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_TXCONFIRMATION,
                                  (uint8)ETH_E_INV_MODE);
        }
        else
        {
            RetValue = E_OK;
        }
    }
    return RetValue;
}

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
/**
 * @brief                        Check the development errors of Eth_TimeAwareShaperInit.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] TimeAwareShaperIdx Index of the time aware shaper configurations.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_TimeAwareShaperInitDevCheck(uint8 CtrlIdx,
                                                            uint8 CoreId,
                                                            uint8 TimeAwareShaperIdx)
{
    Std_ReturnType         RetValue = E_NOT_OK;
    const Eth_CtrlCfgType *CtrlCfgPtr;

    /* [FUNC_Eth_00132][SWDESG_ETH_350]Check Eth_Init was previously called */
    if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_TIMEAWARESHAPER,
                              (uint8)ETH_E_UNINIT);
    }
    else
    {
        /* [FUNC_Eth_00133][SWDESG_ETH_351]Check the parameter CtrlIdx for being valid */
        if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_TIMEAWARESHAPER,
                                  (uint8)ETH_E_INV_CTRL_IDX);
        }
        else
        {
            CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);
            if (!ETH_CFG_CTRL_TIME_AWARE_SHAPER_AVAILABLE(CtrlCfgPtr))
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_TIMEAWARESHAPER,
                                      (uint8)ETH_E_NOT_SUPPORT);
            }
            else
            {
                if (TimeAwareShaperIdx >= ETH_CFG_CTRL_TIME_AWARE_SHAPER_NUM(CtrlCfgPtr))
                {
                    (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                          (uint8)ETH_INDEX,
                                          (uint8)ETH_DRV_SID_TIMEAWARESHAPER,
                                          (uint8)ETH_E_INV_PARAM);
                }
                else
                {
                    RetValue = E_OK;
                }
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
/**
 * @brief                        Check the development errors of Eth_TBSConfigureCtrl.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] TBSCfgPtr          Pointer to the TBS configuration structure.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION
LOCAL_INLINE Std_ReturnType Eth_TBSConfigureCtrlDevCheck(uint8                 CtrlIdx,
                                                         uint8                 CoreId,
                                                         const Eth_TBSCfgType *TBSCfgPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* Check Eth_Init was previously called */
    if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_TBS_CONFIG,
                              (uint8)ETH_E_UNINIT);
    }
    else
    {
        /* Check the parameter CtrlIdx for being valid */
        if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_TBS_CONFIG,
                                  (uint8)ETH_E_INV_CTRL_IDX);
        }
        else
        {
            /* Check TBSCfgPtr validity */
            if (TBSCfgPtr == NULL_PTR)
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_TBS_CONFIG,
                                      (uint8)ETH_E_PARAM_POINTER);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of Eth_TBSSetLaunchTime.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] BufIdx             Index of the buffer resource.
 * @param[in] LaunchTimePtr      Pointer to the TBS launch time structure.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_TBSSetLaunchTimeDevCheck(
    uint8                        CtrlIdx,
    uint8                        CoreId,
    Eth_BufIdxType               BufIdx,
    const Eth_TBSLaunchTimeType *LaunchTimePtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    /* Check Eth_Init was previously called */
    if (Eth_eInitState[CoreId] != ETH_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_TBS_SETLAUNCHTIME,
                              (uint8)ETH_E_UNINIT);
    }
    else
    {
        /* Check the parameter CtrlIdx for being valid */
        if (CtrlIdx >= ETH_CFG_NUM_CONTROLS(CoreId))
        {
            (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                  (uint8)ETH_INDEX,
                                  (uint8)ETH_DRV_SID_TBS_SETLAUNCHTIME,
                                  (uint8)ETH_E_INV_CTRL_IDX);
        }
        else
        {
            /* Check TBSCfgPtr validity */
            if (LaunchTimePtr == NULL_PTR)
            {
                (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                      (uint8)ETH_INDEX,
                                      (uint8)ETH_DRV_SID_TBS_SETLAUNCHTIME,
                                      (uint8)ETH_E_PARAM_POINTER);
            }
            else
            {
                /* Check the BufIdx is valid. */
                if ((uint32)BufIdx >= Eth_Hal_TxBuffersCount(CtrlIdx))
                {
                    (void)Det_ReportError((uint16)ETH_MODULE_ID,
                                          (uint8)ETH_INDEX,
                                          (uint8)ETH_DRV_SID_TBS_SETLAUNCHTIME,
                                          (uint8)ETH_E_INV_PARAM);
                }
                else
                {
                    RetValue = E_OK;
                }
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT */

#endif /* STD_ON == ETH_DEV_ERROR_DETECT */

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
/**
 * @brief                        Check the ECU partition.
 *
 * @param[in] CtrlCfgPtr         Pointer to the controller configuration.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] Sid                Service ID.
 * @return                       E_OK: Check success.
 *                               E_NOT_OK: Check failed.
 */
ETH_TEXT_SECTION LOCAL_INLINE Std_ReturnType Eth_EcucPartitionCheck(const Eth_CtrlCfgType *CtrlCfgPtr,
                                                                    uint8 CoreId,
                                                                    uint8 Sid)
{
    Std_ReturnType RetValue;

    if (CtrlCfgPtr->EcucPartition == CoreId)
    {
        RetValue = E_OK;
    }
    else
    {
        RetValue = E_NOT_OK;
#if (STD_ON == ETH_DEV_ERROR_DETECT)
        (void)Det_ReportRuntimeError((uint16)ETH_MODULE_ID,
                                     (uint8)ETH_INDEX,
                                     (uint8)Sid,
                                     (uint8)ETH_E_INV_PARTITION);
#endif
    }
    return RetValue;
}
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */

#if (STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER)
/**
 * @brief                        Check the physical address is full filter open pattern
 *                               (FF:FF:FF: FF:FF:FF).
 *
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical address.
 * @return                       TRUE: The physical address is full filter open pattern.
 *                               FALSE: The physical address is not full filter open pattern.
 */
ETH_TEXT_SECTION LOCAL_INLINE boolean Eth_PhysAddrIsFullFilterOpenPattern(const uint8 *PhysAddrPtr)
{
    return ((PhysAddrPtr[0U] == 0xFFU) && (PhysAddrPtr[1U] == 0xFFU) && (PhysAddrPtr[2U] == 0xFFU) &&
            (PhysAddrPtr[3U] == 0xFFU) && (PhysAddrPtr[4U] == 0xFFU) && (PhysAddrPtr[5U] == 0xFFU)) ?
               (boolean)TRUE :
               (boolean)FALSE;
}

/**
 * @brief                        Check the physical address is full filter close pattern
 *                               (00:00:00: 00:00:00).
 *
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical address.
 * @return                       TRUE: The physical address is full filter close pattern.
 *                               FALSE: The physical address is not full filter close pattern.
 */
ETH_TEXT_SECTION LOCAL_INLINE boolean Eth_PhysAddrIsFullFilterCLosePattern(const uint8 *PhysAddrPtr)
{
    return ((PhysAddrPtr[0U] == 0U) && (PhysAddrPtr[1U] == 0U) && (PhysAddrPtr[2U] == 0U) &&
            (PhysAddrPtr[3U] == 0U) && (PhysAddrPtr[4U] == 0U) && (PhysAddrPtr[5U] == 0U)) ?
               (boolean)TRUE :
               (boolean)FALSE;
}
#endif /* STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER */

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief    Services defined in AUROSAR EthernetDriver module.
 */

/**
 * @brief                        Initializes the Ethernet Driver.
 * @details                      This function is AUTOSAR standard API which is used to initialize
 *                               ethernet controller.
 *                               [SWS_Eth_00027][SWDESG_ETH_001]void Eth_Init(const Eth_ConfigType
 *                                              *CfgPtr)
 *                               [SWS_Eth_00031]The API has to be called during initialization.
 *
 * @param[in] CfgPtr             Points to the implementation specific structure.
 *
 */
ETH_TEXT_SECTION void Eth_Init(const Eth_ConfigType *CfgPtr)
{
    uint8                  CtrlIdx;
    uint8                  CoreId   = Eth_GetPartitionID();
    Std_ReturnType         RetValue = E_OK;
    const Eth_ConfigType  *TempCfgPtr;
    const Eth_CtrlCfgType *CtrlCfgPtr;

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    if (E_OK == Eth_InitDevCheck(CoreId, CfgPtr))
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        Eth_Config_Ptrs[CoreId] = NULL_PTR;

#if (STD_ON == ETH_PRECOMPILE_SUPPORT)
        TempCfgPtr = &Eth_Config;
        /* PRQA S 3119 ++
           3119:This statement has no side-effect - it can be removed.
           REASON: Avoid warning for this unused parameters.
        */
        (void)CfgPtr;
        /* PRQA S 3119 -- */
#else
        /* SWS_Eth_00014 */
        TempCfgPtr = CfgPtr;
#endif /* STD_ON == ETH_PRECOMPILE_SUPPORT */

        /* Initialize controllers mapped to current core */
        for (CtrlIdx = 0U; CtrlIdx < TempCfgPtr->NumController; ++CtrlIdx)
        {
            CtrlCfgPtr = &(TempCfgPtr->CtrlPtr[CtrlIdx]);

#if (ETH_NUM_ECU_PARTITIONS > 1U)
            if (CtrlCfgPtr->EcucPartition == CoreId)
#endif /* ETH_NUM_ECU_PARTITIONS > 1U */
            {

                /* [SWS_Eth_00039][SWDESG_ETH_004]Check the access to the Ethernet controller. */
                if ((boolean)TRUE == Eth_Hal_CheckAccessController(CtrlIdx))
                {
                    /* Pre-Initialization */
                    Eth_Hal_PreInit(CtrlIdx, CtrlCfgPtr);

                    /* [SWS_Eth_00275]Initialize the controller and resources */
                    RetValue = Eth_Hal_InitController(CtrlIdx, CtrlCfgPtr);

                    /* [SWS_Eth_00173]Access to the Ethernet Controller succeds. */
                    Eth_ReportDemEvent(CtrlCfgPtr, Dem_EAccess, DEM_EVENT_STATUS_PREPASSED);
                }
                else
                {
                    /* [SWS_Eth_00173]Access to the Ethernet Controller failed. */
                    Eth_ReportDemEvent(CtrlCfgPtr, Dem_EAccess, DEM_EVENT_STATUS_PREFAILED);
                    RetValue = E_NOT_OK;
                }

                if (E_OK != RetValue)
                {
                    break;
                }
            }
        }

        if (E_OK == RetValue)
        {
            /* [SWS_Eth_00028]Store the access to the configuration structure */
            Eth_Config_Ptrs[CoreId] = TempCfgPtr;
            /* [SWS_Eth_00029]Change the state to ETH_STATE_INIT */
            Eth_eInitState[CoreId] = ETH_STATE_INIT;
        }
    }
}

/**
 * @brief                        Enables / Disables Rx/Tx communication of the indexed controller.
 * @details                      This function is AUTOSAR standard API which is used to enable or
 *                               disable Rx/Tx communication of the indexed ethernet controller.
 *                               [SWS_Eth_91009][SWDESG_ETH_005]Std_ReturnType Eth_SetControllerMode
 *                                              (uint8 CtrlIdx, Eth_ModeType CtrlMode)
 *                               [SWS_Eth_00045]The function requires previous controller
 *                                              initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] CtrlMode           ETH_MODE_DOWN: Disable Rx/Tx communication of the Eth controller.
 *                               ETH_MODE_ACTIVE: Enable Rx/Tx communication of the Eth controller.
 * @return                       E_OK: success.
 *                               E_NOT_OK: controller mode could not be changed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_SetControllerMode(uint8 CtrlIdx, Eth_ModeType CtrlMode)
{
    Std_ReturnType         RetStatus;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_SetControllerModeDevCheck(CtrlIdx, CoreId);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_295]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_SETCONTROLLERMODE);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00168]Check the access to the Ethernet controller. */
            if ((boolean)TRUE == Eth_Hal_CheckAccessController(CtrlIdx))
            {
                /* [SWS_Eth_00276]Set the controller to the specified mode. */
                RetStatus = Eth_Hal_SetControllerMode(CtrlIdx, CtrlMode, CtrlCfgPtr);
                if (E_OK == RetStatus)
                {
                    EthIf_CtrlModeIndication(ETH_CFG_ETHIF_CTRLIDX(CtrlCfgPtr), CtrlMode);
                }

                /* [SWS_Eth_00168][SWS_Eth_00173][SWDESG_ETH_181]Access to the Controller succeds. */
                Eth_ReportDemEvent(CtrlCfgPtr, Dem_EAccess, DEM_EVENT_STATUS_PREPASSED);
            }
            else
            {
                /* [SWS_Eth_00168][SWS_Eth_00173][SWDESG_ETH_181]Access to the Controller failed. */
                Eth_ReportDemEvent(CtrlCfgPtr, Dem_EAccess, DEM_EVENT_STATUS_PREFAILED);
                RetStatus = E_NOT_OK;
            }
        }
    }
    return RetStatus;
}

/**
 * @brief                        Obtains the communication state of the indexed controller.
 * @details                      This function is AUTOSAR standard API which is used to get the
 *                               communication state of the indexed ethernet controller.
 *                               [SWS_Eth_91010][SWDESG_ETH_008]Std_ReturnType Eth_GetControllerMode
 *                                              (uint8 CtrlIdx, Eth_ModeType *CtrlModePtr)
 *                               [SWS_Eth_00051]The function requires previous controller
 *                                              initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[out] CtrlModePtr       ETH_MODE_DOWN:   The Rx/Tx communication of the Ethernet controller
 *                                                is disabled.
 *                               ETH_MODE_ACTIVE: The Rx/Tx communication of the Ethernet controller
 *                                                is enabled.
 * @return                       E_OK: success.
 *                               E_NOT_OK: controller mode could not be obtained.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetControllerMode(uint8 CtrlIdx, Eth_ModeType *CtrlModePtr)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_GetControllerModeDevCheck(CtrlIdx, CoreId, CtrlModePtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_296]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_GETCONTROLLERMODE);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00277]Read the current Rx/Tx communication state */
            *CtrlModePtr = Eth_Hal_GetControllerMode(CtrlIdx);
            RetStatus    = E_OK;
        }
    }
    return RetStatus;
}

/**
 * @brief                        Obtains the physical source address used by the indexed controller.
 * @details                      This function is AUTOSAR standard API which is used to get the
 *                               MAC address of the indexed ethernet controller.
 *                               [SWS_Eth_00052][SWDESG_ETH_012]void Eth_GetPhysAddr(uint8 CtrlIdx,
 *                                              uint8 *PhysAddrPtr)
 *                               [SWS_Eth_00057]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[out] PhysAddrPtr       Physical source address (MAC address) in network byte order.
 *
 */
ETH_TEXT_SECTION void Eth_GetPhysAddr(uint8 CtrlIdx, uint8 *PhysAddrPtr)
{
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    if (E_OK == Eth_GetPhysAddrDevCheck(CtrlIdx, CoreId, PhysAddrPtr))
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_297]Check the ECUC partition map */
        if (E_OK == Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_GETPHYSADDR))
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00053]Read the MAC address. */
            Eth_Hal_GetMacAddress(CtrlIdx, PhysAddrPtr);
        }
    }
}

/**
 * @brief                        Sets the physical source address used by the indexed controller.
 * @details                      This function is AUTOSAR standard API which is used to set the
 *                               MAC address of the indexed ethernet controller.
 *                               [SWS_Eth_00151][SWDESG_ETH_016]void Eth_SetPhysAddr(uint8 CtrlIdx,
 *                                              const uint8 *PhysAddrPtr)
 *                               [SWS_Eth_00143]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical source address
 *                               (MAC address) in network byte order.
 *
 */
ETH_TEXT_SECTION void Eth_SetPhysAddr(uint8 CtrlIdx, const uint8 *PhysAddrPtr)
{
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    if (E_OK == Eth_SetPhysAddrDevCheck(CtrlIdx, CoreId, PhysAddrPtr))
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_298]Check the ECUC partition map */
        if (E_OK == Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_SETPHYSADDR))
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00139]Update the MAC address */
            Eth_Hal_SetMacAddress(CtrlIdx, PhysAddrPtr);
        }
    }
}

#if (STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER)
/**
 * @brief                        Update the physical address receive filter.
 * @details                      Update the physical source address to/from the indexed controller
 *                               filter. If the Ethernet Controller is not capable to do the
 *                               filtering, the software has to do this.
 *                               [SWS_Eth_00152][SWDESG_ETH_020]Std_ReturnType
 *                                              Eth_UpdatePhysAddrFilter(uint8 CtrlIdx, const uint8*
 *                                              PhysAddrPtr, Eth_FilterActionType Action)
 *                               [SWS_Eth_00167]The function requires previous controller
 *                                              initialization (Eth_Init).
 *                               [SWS_Eth_00146]The controller support hardware filtering.
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] PhysAddrPtr        Pointer to memory containing the physical destination address
 *                               (MAC address) in network byte order. This is the multicast
 *                               destination address of the layer 2 Ethernet packet.
 * @param[in] Action             Add or remove the address from the Ethernet controllers filter.
 * @return                       E_OK: filter was successfully changed.
 *                               E_NOT_OK: filter could not be changed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_UpdatePhysAddrFilter(uint8                CtrlIdx,
                                                         const uint8         *PhysAddrPtr,
                                                         Eth_FilterActionType Action)
{
    Std_ReturnType         RetStatus;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_UpdatePhysAddrFilterDevCheck(CtrlIdx, CoreId, PhysAddrPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_299]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_UPDATEADDRFILTER);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            if ((boolean)TRUE == Eth_PhysAddrIsFullFilterOpenPattern(PhysAddrPtr))
            {
                /* [SWS_Eth_00144][SWDESG_ETH_021]Completely open the filter */
                Eth_Hal_OpenMacAddressFilter(CtrlIdx);
            }
            else if ((boolean)TRUE == Eth_PhysAddrIsFullFilterCLosePattern(PhysAddrPtr))
            {
                /* [SWS_Eth_00147][SWDESG_ETH_022]Unique unicast MAC address filter */
                Eth_Hal_CloseMacAddressFilter(CtrlIdx);
            }
            else
            {
                /* [SWS_Eth_00150][SWS_Eth_00245][SWS_Eth_00246][SWDESG_ETH_023]
                 * Update the physical address receive filter for multicast address and unicast
                 * address is ignored.
                 */
                if (0U != (PhysAddrPtr[0] & 1U))
                {
                    Eth_Hal_MacAddressUserModeHashFilter(CtrlIdx,
                                                         ETH_CFG_CTRL_MAC_PACKET_FILTER(CtrlCfgPtr));
                    Eth_Hal_SetMacAddressFilter(CtrlIdx, PhysAddrPtr, Action);
                }
            }
            RetStatus = E_OK;
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETH_UPDATE_PHYS_ADDR_FILTER */

#if (STD_ON == ETH_CTRL_ENABLE_MII)
/**
 * @brief                        Configures a transceiver register or triggers a function offered by
 *                               the receiver.
 * @details                      [SWS_Eth_00058][SWDESG_ETH_027] Std_ReturnType Eth_WriteMii(uint8
 *                                              CtrlIdx, uint8 TrcvIdx, uint8 RegIdx, uint16 RegVal)
 *                               [SWS_Eth_00062]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00063]The function requires previous controller
 *                                              initialization (Eth_Init).
 *                               [SWS_Eth_00273]Clause 45 registers can be accessed by Eth_WriteMmd
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[in] RegVal             Value to be written into the indexed register.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_WriteMii(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx, uint16 RegVal)
{
    Std_ReturnType         RetStatus;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_WriteMiiDevCheck(CtrlIdx, CoreId);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_300]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_WRITEMII);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00278]Write the transceiver register according to clause 22 */
            RetStatus = Eth_Hal_WriteMii(CtrlIdx, TrcvIdx, RegIdx, RegVal);
            if (E_OK == RetStatus)
            {
                /* [SWS_Eth_00241]Call EthTrcv_WriteMiiIndication */
                ETH_CFG_CTRL_WRITE_MII_INDICATION(CtrlCfgPtr, CtrlIdx, TrcvIdx, RegIdx);
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Configures a transceiver register or triggers a function offered by
 *                               the receiver.
 * @details                      [SWS_Eth_00064][SWDESG_ETH_030]Std_ReturnType Eth_ReadMii(uint8
 *                                              CtrlIdx,uint8 TrcvIdx,uint8 RegIdx,uint16* RegValPtr)
 *                               [SWS_Eth_00069]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00070]The function requires previous controller
 *                                              initialization (Eth_Init).
 *                               [SWS_Eth_00274]Clause 45 registers can be accessed by Eth_ReadMmd
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[out] RegValPtr         Filled with the register content of the indexed register.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_ReadMii(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx, uint16 *RegValPtr)
{
    Std_ReturnType         RetStatus;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_ReadMiiDevCheck(CtrlIdx, CoreId, RegValPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_301]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_READMII);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00279]Read the transceiver register according to clause 22 */
            RetStatus = Eth_Hal_ReadMii(CtrlIdx, TrcvIdx, RegIdx, RegValPtr);
            if (E_OK == RetStatus)
            {
                /* [SWS_Eth_00242]Call EthTrcv_ReadMiiIndication */
                ETH_CFG_CTRL_READ_MII_INDICATION(CtrlCfgPtr, CtrlIdx, TrcvIdx, RegIdx, *RegValPtr);
            }
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETH_CTRL_ENABLE_MII */

#if (STD_ON == ETH_CTRL_ENABLE_MMD)
/**
 * @brief                        Configures a transceiver register via MII clause 45 protocol.
 * @details                      [FUNC_Eth_00008][SWDESG_ETH_034]Std_ReturnType Eth_WriteMmd(uint8
 *                                               CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx,
 *                                               uint16 RegVal)
 *                               [FUNC_Eth_00012]The function is pre-compile time configurable
 * On/Off [FUNC_Eth_00013]The function requires previous controller initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] Mmd                (MMD)Device address.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[in] RegVal             Value to be written into the indexed register.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 *
 */
ETH_TEXT_SECTION Std_ReturnType
    Eth_WriteMmd(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, uint16 RegVal)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_WriteMmdDevCheck(CtrlIdx, CoreId);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_302]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_WRITEMMD);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [FUNC_Eth_00009]Write the transceiver register according to clause 45 */
            RetStatus = Eth_Hal_WriteMmd(CtrlIdx, TrcvIdx, Mmd, RegIdx, RegVal);
        }
    }

    return RetStatus;
}

/**
 * @brief                        Read a transceiver register via MII clause 45 protocol.
 * @details                      [FUNC_Eth_00014][SWDESG_ETH_037]Std_ReturnType Eth_ReadMmd(uint8
 *                                               CtrlIdx, uint8 TrcvIdx,uint8 Mmd, uint16 RegIdx,
 *                                               uint16* RegValPtr)
 *                               [FUNC_Eth_00019]The function is pre-compile time configurable
 * On/Off [FUNC_Eth_00020]The function requires previous controller initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] Mmd                (MMD)Device address.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[out] RegValPtr         Filled with the register content of the indexed register.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 *
 */
ETH_TEXT_SECTION Std_ReturnType
    Eth_ReadMmd(uint8 CtrlIdx, uint8 TrcvIdx, uint8 Mmd, uint16 RegIdx, uint16 *RegValPtr)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_ReadMmdDevCheck(CtrlIdx, CoreId, RegValPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_303]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_READMMD);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [FUNC_Eth_00015]Read the transceiver register according to clause 45 */
            RetStatus = Eth_Hal_ReadMmd(CtrlIdx, TrcvIdx, Mmd, RegIdx, RegValPtr);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETH_CTRL_ENABLE_MMD */

#if (STD_ON == ETH_GET_COUNTER_VALUES_API)
/**
 * @brief                        Reads a list with drop counter values of the corresponding
 *                               controller. The meaning of these values is described at
 *                               Eth_CounterType.
 * @details                      [SWS_Eth_00226][SWDESG_ETH_041]Std_ReturnType Eth_GetCounterValues(
 *                                              uint8 CtrlIdx, Eth_CounterType *CounterPtr)
 *                               [SWS_Eth_00231]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00232]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] CounterPtr        counter values according to IETF RFC 1757, RFC 1643 and RFC 2233.
 * @return                       E_OK: success.
 *                               E_NOT_OK: counter values read failure.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetCounterValues(uint8 CtrlIdx, Eth_CounterType *CounterPtr)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_GetCounterValuesDevCheck(CtrlIdx, CoreId, CounterPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_304]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_GETCOUNTERVALUES);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00227]Read a list of counter values. */
            RetStatus = Eth_Hal_GetCounterValues(CtrlIdx, CounterPtr);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETH_GET_COUNTER_VALUES_API */

#if (STD_ON == ETH_GET_RX_STATS_API)
/**
 * @brief                        Get the receive statistics counters.
 * @details                      Returns the following list according to IETF RFC2819, where the
 *                               maximal possible value shall denote an invalid value,
 *                               e.g. if this counter is not available:
 *                               1. etherStatsDropEvents
 *                               2. etherStatsOctets
 *                               3. etherStatsPkts
 *                               4. etherStatsBroadcastPkts
 *                               5. etherStatsMulticastPkts
 *                               6. etherStatsCrcAlignErrors
 *                               7. etherStatsUndersizePkts
 *                               8. etherStatsOversizePkts
 *                               9. etherStatsFragments
 *                               10. etherStatsJabbers
 *                               11. etherStatsCollisions
 *                               12. etherStatsPkts64Octets
 *                               13. etherStatsPkts65to127Octets
 *                               14. etherStatsPkts128to255Octets
 *                               15. etherStatsPkts256to511Octets
 *                               16. etherStatsPkts512to1023Octets
 *                               17. etherStatsPkts1024to1518Octets
 *                               [SWS_Eth_00233][SWDESG_ETH_045]Std_ReturnType Eth_GetRxStats(uint8
 *                                              CtrlIdx, Eth_RxStatsType *RxStats)
 *                               [SWS_Eth_00238]The function is pre-compile time configurable On/Off
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] RxStats           List of values according to IETF RFC 2819 (Remote Network
 * Monitoring Management Information Base).
 * @return                       E_OK: success.
 *                               E_NOT_OK: drop counter could not be obtained.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetRxStats(uint8 CtrlIdx, Eth_RxStatsType *RxStats)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_GetRxStatsDevCheck(CtrlIdx, CoreId, RxStats);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_305]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_GETRXSTATS);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00234]Read a list of receive statistics counters. */
            RetStatus = Eth_Hal_GetRxStats(CtrlIdx, RxStats);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETH_GET_RX_STATS_API */

#if (STD_ON == ETH_GET_TX_STATS_API)
/**
 * @brief                        Returns the list of Transmission Statistics out of IETF RFC1213
 *                               defined with Eth_TxStatsType, where the maximal possible value
 *                               shall denote an invalid value,
 *                               e.g. this counter is not available.
 * @details                      [SWS_Eth_91005][SWDESG_ETH_049]Std_ReturnType Eth_GetTxStats(uint8
 *                                              CtrlIdx, Eth_TxStatsType *TxStats)
 *                               [SWS_Eth_00251]The function is pre-compile time configurable On/Off
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] TxStats           List of values to read statistic values for transmission.
 * @return                       E_OK: success.
 *                               E_NOT_OK: Tx-statistics could not be obtained.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetTxStats(uint8 CtrlIdx, Eth_TxStatsType *TxStats)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_GetTxStatsDevCheck(CtrlIdx, CoreId, TxStats);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_306]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_GETTXSTATS);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* Read a list of transmission statistics counters. */
            RetStatus = Eth_Hal_GetTxStats(CtrlIdx, TxStats);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETH_GET_TX_STATS_API */

#if (STD_ON == ETH_GET_TX_ERROR_COUNTER_VALUES_API)
/**
 * @brief                        Returns the list of Transmission Error Counters out of IETF RFC1213
 *                               and RFC1643 defined with Eth_TxErrorCounterValuesType, where the
 *                               maximal possible value shall denote an invalid value,
 *                               e.g. this counter is not available.
 * @details                      [SWS_Eth_91006][SWDESG_ETH_053]Std_ReturnType
 *                                              Eth_GetTxErrorCounterValues(uint8 CtrlIdx,
 *                                              Eth_TxErrorCounterValuesType* TxErrorCounterValues)
 *                               [SWS_Eth_00255]The function is pre-compile time configurable On/Off
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] TxErrorCounterValues List of values to read statistic error counter values for
 *                               transmission.
 * @return                       E_OK: success.
 *                               E_NOT_OK: Tx-statistics could not be obtained.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetTxErrorCounterValues(
    uint8                         CtrlIdx,
    Eth_TxErrorCounterValuesType *TxErrorCounterValues)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_GetTxErrorCounterValuesDevCheck(CtrlIdx, CoreId, TxErrorCounterValues);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_307]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_GETTXERRORCOUNTERVALUES);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* Read a list of transmission error statistics counters. */
            RetStatus = Eth_Hal_GetTxErrorCounterValues(CtrlIdx, TxErrorCounterValues);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETH_GET_TX_ERROR_COUNTER_VALUES_API */

#if (STD_ON == ETH_GLOBAL_TIME_SUPPORT)
/**
 * @brief                        Returns a time value out of the HW registers according to the
 *                               capability of the HW. Is the HW resolution is lower than the
 *                               Eth_TimeStampType resolution resp. range, than an the remaining
 * bits will be filled with 0.
 * @details                      [SWS_Eth_00181][SWDESG_ETH_057]Std_ReturnType Eth_GetCurrentTime(
 *                                              uint8 CtrlIdx, Eth_TimeStampQualType* timeQualPtr,
 *                                              Eth_TimeStampType* timeStampPtr)
 *                               [SWS_Eth_00185]The function requires previous controller
 *                                              initialization (Eth_Init).
 *                               [SWS_Eth_00210]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00262]This API can be called by all partitions that have
 *                                              called Eth_Init.
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[out] timeQualPtr       quality of HW time stamp, e.g. based on current drift.
 * @param[out] timeStampPtr      current time stamp.
 * @return                       E_OK: success.
 *                               E_NOT_OK: ailed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetCurrentTime(uint8                  CtrlIdx,
                                                   Eth_TimeStampQualType *timeQualPtr,
                                                   Eth_TimeStampType     *timeStampPtr)
{
    Std_ReturnType RetStatus;

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    uint8 CoreId = Eth_GetPartitionID();
    RetStatus    = Eth_GetCurrentTimeDevCheck(CtrlIdx, CoreId, timeQualPtr, timeStampPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        /* Read the current time.  */
        *timeQualPtr = ETH_UNCERTAIN;
        RetStatus    = Eth_Hal_GetCurrentTime(CtrlIdx, timeQualPtr, timeStampPtr);
    }

    return RetStatus;
}

/**
 * @brief                        Activates egress time stamping on a dedicated message object.
 *                               Some HW does store once the egress time stamp marker and some HW
 *                               needs it always before transmission. There will be no "disable"
 *                               functionality, due to the fact, that the message type is always "
 *                               time stamped" by network design.
 * @details                      [SWS_Eth_00186][SWDESG_ETH_061]void Eth_EnableEgressTimeStamp(uint8
 *                                              CtrlIdx, Eth_BufIdxType BufIdx)
 *                               [SWS_Eth_00211]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00189]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] BufIdx             Index of the message buffer, where Application expects egress time
 *                               stampings.
 *
 */
ETH_TEXT_SECTION void Eth_EnableEgressTimeStamp(uint8 CtrlIdx, Eth_BufIdxType BufIdx)
{
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    if (E_OK == Eth_EnableEgressTimeStampDevCheck(CtrlIdx, CoreId, BufIdx))
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_308]Check the ECUC partition map */
        if (E_OK == Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_ENABLEEGRESSTIMESTAMP))
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* Activates egress time stamping on the message indexed by BufIdx. */
            Eth_Hal_EnableEgressTimeStamp(CtrlIdx, BufIdx);
        }
    }
}

/**
 * @brief                        Reads back the egress time stamp on a dedicated message object.
 *                               It must be called within the TxConfirmation() function.
 * @details                      [SWS_Eth_00190][SWDESG_ETH_065]Std_ReturnType
 * Eth_GetEgressTimeStamp (uint8 CtrlIdx, Eth_BufIdxType BufIdx, Eth_TimeStampQualType* timeQualPtr,
 *                                              Eth_TimeStampType* timeStampPtr)
 *                               [SWS_Eth_00212]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00194]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] BufIdx             Index of the message buffer, where Application expects egress time
 *                               stamping.
 * @param[out] timeQualPtr       quality of HW time stamp, e.g. based on current drift.
 * @param[out] timeStampPtr      The egress time stamp.
 * @return                       E_OK: Obtaining the timestamp is succeeded.
 *                               E_NOT_OK: Obtaining the timestamp is failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetEgressTimeStamp(uint8                  CtrlIdx,
                                                       Eth_BufIdxType         BufIdx,
                                                       Eth_TimeStampQualType *timeQualPtr,
                                                       Eth_TimeStampType     *timeStampPtr)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_GetEgressTimeStampDevCheck(CtrlIdx, CoreId, BufIdx, timeQualPtr, timeStampPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        *timeQualPtr = ETH_UNCERTAIN;

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_309]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_GETEGRESSTIMESTAMP);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* Read the egress time stamp for the frame indexed by BufIdx. */
            Eth_Hal_GetEgressTimeStamp(CtrlIdx, BufIdx, timeQualPtr, timeStampPtr);
            RetStatus = E_OK;
        }
    }
    return RetStatus;
}

/**
 * @brief                        Reads back the ingress time stamp on a dedicated message object.
 *                               It must be called within the RxIndication() function.
 * @details                      [SWS_Eth_00195][SWDESG_ETH_070]Std_ReturnType
 *                                              Eth_GetIngressTimeStamp(uint8 CtrlIdx,
 *                                              const Eth_DataType* DataPtr, Eth_TimeStampQualType*
 *                                              timeQualPtr, Eth_TimeStampType* timeStampPtr)
 *                               [SWS_Eth_00213]The function is pre-compile time configurable On/Off
 *                               [SWS_Eth_00199]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the Ethernet controller within the context of the Ethernet
 *                               Driver.[SWS_Eth_00003]
 * @param[in] DataPtr            Pointer to the message buffer, where Application expects ingress
 *                               time stamping.
 * @param[out] timeQualPtr       quality of HW time stamp, e.g. based on current drift.
 * @param[out] timeStampPtr      The ingress time stamp.
 * @return                       E_OK: Obtaining the timestamp is succeeded.
 *                               E_NOT_OK: Obtaining the timestamp is failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_GetIngressTimeStamp(uint8                  CtrlIdx,
                                                        const Eth_DataType    *DataPtr,
                                                        Eth_TimeStampQualType *timeQualPtr,
                                                        Eth_TimeStampType     *timeStampPtr)
{
    Std_ReturnType         RetStatus;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_GetIngressTimeStampDevCheck(CtrlIdx, CoreId, DataPtr, timeQualPtr, timeStampPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        *timeQualPtr = ETH_UNCERTAIN;
        CtrlCfgPtr   = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_310]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_GETINGRESSTIMESTAMP);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* Read the ingress time stamp of the frame in DataPtr. */
            Eth_Hal_GetIngressTimeStamp(CtrlIdx, CtrlCfgPtr, DataPtr, timeQualPtr, timeStampPtr);
            RetStatus = E_OK;
        }
    }
    return RetStatus;
}

/**
 * @brief                        Allows the Time Slave node to synchronize the local time and the
 *                               local Eth reference clock.
 * @details                      This API allows the Time Slave node to correct the local time and
 *                               the local Eth reference clock ratio. If the secondsHi field of
 *                               timeOffsetPtr or rateRatioPtr is nonzero value, that is, the time
 *                               difference or time ratio is too large,this API will return
 * E_NOT_OK, please call Eth_Hal_SetGlobalTime first. [FUNC_Eth_00058][SWDESG_ETH_074]Std_ReturnType
 * Eth_SetCorrectionTime (uint8 CtrlIdx,const Eth_TimeIntDiffType* timeOffsetPtr,const
 * Eth_RateRatioType* rateRatioPtr) [FUNC_Eth_00064]The function is pre-compile time configurable
 * On/Off [FUNC_Eth_00065]The function requires previous controller initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] timeOffsetPtr      The global time offset value.
 * @param[in] rateRatioPtr       The global time ratio bias.
 * @return                       E_OK: Time synchronization is succeeded.
 *                               E_NOT_OK: Time synchronization is failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_SetCorrectionTime(uint8                      CtrlIdx,
                                                      const Eth_TimeIntDiffType *timeOffsetPtr,
                                                      const Eth_RateRatioType   *rateRatioPtr)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_SetCorrectionTimeDevCheck(CtrlIdx, CoreId, timeOffsetPtr, rateRatioPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_311]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_SETCORRECTIONTIME);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [FUNC_Eth_00059]Correct the local time and the reference clock ratio of the ethernet
             *  controller internal global time clock.
             */
            RetStatus = Eth_Hal_SetCorrectionTime(CtrlIdx, timeOffsetPtr, rateRatioPtr);
        }
    }
    return RetStatus;
}

/**
 * @brief                        Set the global time in hardware.
 * @details                      This API allows the user to set the local time in hardware.
 *                               [FUNC_Eth_00066][SWDESG_ETH_078]Std_ReturnType Eth_SetGlobalTime(
 *                                               uint8 CtrlIdx,const Eth_TimeStampType*
 * timeStampPtr) [FUNC_Eth_00071]The function is pre-compile time configurable On/Off
 * [FUNC_Eth_00072]The function requires previous controller initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] timeStampPtr       The global time value to set.
 * @return                       E_OK: Set global time successfully.
 *                               E_NOT_OK: Set global time failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_SetGlobalTime(uint8 CtrlIdx, const Eth_TimeStampType *timeStampPtr)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_SetGlobalTimeDevCheck(CtrlIdx, CoreId, timeStampPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_312]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_SETGLOBALTIME);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [FUNC_Eth_00067]Set the global time of the internal global time clock. */
            RetStatus = Eth_Hal_SetGlobalTime(CtrlIdx, timeStampPtr);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETH_GLOBAL_TIME_SUPPORT */

/**
 * @brief                        Provides access to a transmit buffer of the FIFO related to the
 *                               specified priority.
 * @details                      [SWS_Eth_00077][SWDESG_ETH_082]BufReq_ReturnType Eth_ProvideTxBuffer
 *                                              (uint8 CtrlIdx, uint8 Priority, Eth_BufIdxType*
 *                                              BufIdxPtr, uint8** BufPtr, uint16* LenBytePtr)
 *                               [SWS_Eth_00086]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] Priority           Frame priority for transmit buffer FIFO selection.
 * @param[out] BufIdxPtr         Index to the granted buffer resource. To be used for subsequent
 *                               requests.[SWS_Eth_00004]
 * @param[out] BufPtr            Pointer to the granted buffer.
 * @param[inout] LenBytePtr      In: desired length in bytes, out: granted length in bytes.
 * @return                       BUFREQ_OK: success.
 *                               BUFREQ_E_NOT_OK: development error detected.
 *                               BUFREQ_E_BUSY: all buffers in use.
 *                               BUFREQ_E_OVFL: requested buffer too large.
 *
 */
ETH_TEXT_SECTION BufReq_ReturnType Eth_ProvideTxBuffer(uint8           CtrlIdx,
                                                       uint8           Priority,
                                                       Eth_BufIdxType *BufIdxPtr,
                                                       uint8         **BufPtr,
                                                       uint16         *LenBytePtr)
{
    BufReq_ReturnType      RetStatus = BUFREQ_E_NOT_OK;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();
    uint8                  FifoIdx;

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    /* PRQA S 0310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
     *  object type and a pointer to a different object type
     *  0310:Casting to different object pointer type.
     *  REASON: This argument is only used for checking NULL, cast pointer to const type is safety.
     */
    if (E_OK ==
        Eth_ProvideTxBufferDevCheck(CtrlIdx, CoreId, BufIdxPtr, (const uint8 *const *)BufPtr, LenBytePtr))
    /* PRQA S 0310 -- */
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_313]Check the ECUC partition map */
        if (E_OK == Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_PROVIDETXBUFFER))
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWDESG_ETH_086]Get the TX FIFO mapped to this priority. */
            FifoIdx = Eth_Hal_TxPriorityToFifoId(CtrlCfgPtr, Priority);
            if (FifoIdx != ETH_INVALID_FIFO_IDX)
            {
                RetStatus =
                    Eth_Hal_ProvideTxBuffer(CtrlIdx, CtrlCfgPtr, FifoIdx, BufIdxPtr, BufPtr, LenBytePtr);
            }
        }
    }

    return RetStatus;
}

/**
 * @brief                        Triggers transmission of a previously filled transmit buffer.
 * @details                      [SWS_Eth_00087][SWDESG_ETH_089]Std_ReturnType Eth_Transmit(uint8
 *                                              CtrlIdx, Eth_BufIdxType BufIdx, Eth_FrameType
 *                                              FrameType, boolean TxConfirmation, uint16 LenByte,
 *                                              const uint8* PhysAddrPtr)
 *                               [SWS_Eth_00094]The function requires previous controller
 *                                              initialization (Eth_Init).
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] BufIdx             Index of the buffer resource.[SWS_Eth_00004]
 * @param[in] FrameType          Ethernet frame type.
 * @param[in] TxConfirmation     Activates transmission confirmation.
 * @param[in] LenByte            Data length in byte.
 * @param[in] PhysAddrPtr        Physical target address (MAC address) in network byte order.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transmission failed.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_Transmit(uint8          CtrlIdx,
                                             Eth_BufIdxType BufIdx,
                                             Eth_FrameType  FrameType,
                                             boolean        TxConfirmation,
                                             uint16         LenByte,
                                             const uint8   *PhysAddrPtr)
{
    Std_ReturnType         RetStatus;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_TransmitDevCheck(CtrlIdx, CoreId, BufIdx, PhysAddrPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_314]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_TRANSMIT);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00088]Build ethernet header and trigger the transmission */
            RetStatus = Eth_Hal_Transmit(CtrlIdx,
                                         CtrlCfgPtr,
                                         BufIdx,
                                         FrameType,
                                         TxConfirmation,
                                         LenByte,
                                         PhysAddrPtr);
        }
    }

    return RetStatus;
}

/**
 * @brief                        Receive a frame from the related fifo.
 * @details                      [SWS_Eth_00095][SWDESG_ETH_097]void Eth_Receive(uint8 CtrlIdx,
 * uint8 FifoIdx, Eth_RxStatusType *RxStatusPtr) [SWS_Eth_00099]The function requires previous
 * controller initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] FifoIdx            Specifies the related fifo.
 * @param[out] RxStatusPtr       Indicates whether a frame has been received and if so, whether more
 *                               frames are available for the related fifo.
 *
 */
ETH_TEXT_SECTION void Eth_Receive(uint8 CtrlIdx, uint8 FifoIdx, Eth_RxStatusType *RxStatusPtr)
{
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    if (E_OK == Eth_ReceiveDevCheck(CtrlIdx, CoreId, FifoIdx, RxStatusPtr))
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        *RxStatusPtr = ETH_NOT_RECEIVED;
        CtrlCfgPtr   = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_315]Check the ECUC partition map */
        if (E_OK == Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_RECEIVE))
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00096]Read the next frame from the receive buffers */
            if ((boolean)FALSE == ETH_CFG_CTRL_ENABLE_RX_INTERRUPT(CtrlCfgPtr))
            {
                *RxStatusPtr = Eth_Hal_ReportReception(CtrlIdx, FifoIdx, CtrlCfgPtr);
            }
        }
    }
}

/**
 * @brief                        Triggers frame transmission confirmation.
 * @details                      [SWS_Eth_00100][SWDESG_ETH_103]void Eth_TxConfirmation(uint8
 * CtrlIdx) [SWS_Eth_00105]The function requires previous controller initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 *
 */
ETH_TEXT_SECTION void Eth_TxConfirmation(uint8 CtrlIdx)
{
    uint8                  FifoIdx;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    if (E_OK == Eth_TxConfirmationDevCheck(CtrlIdx, CoreId))
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_316]Check the ECUC partition map */
        if (E_OK == Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_TXCONFIRMATION))
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [SWS_Eth_00101][SWS_Eth_00102]Check the transmission and release the resource */
            if ((boolean)FALSE == ETH_CFG_CTRL_ENABLE_TX_INTERRUPT(CtrlCfgPtr))
            {
                for (FifoIdx = 0; FifoIdx < ETH_CFG_CTRL_NUM_TX_CHANNEL(CtrlCfgPtr); ++FifoIdx)
                {
                    Eth_Hal_ReportTransmission(CtrlIdx, FifoIdx, CtrlCfgPtr);
                }
            }
        }
    }
}

#if (STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT)
/**
 * @brief                        Initialize the time-aware shaper on the egress side.
 * @details                      The time-aware shaper is based on the time sensitive network(TSN)
 *                               feature of the ethernet controller. If the gptp is in slave mode,
 *                               the time-aware shaper should be initialized after the global time
 *                               synchronization.
 *                               [FUNC_Eth_00130][SWDESG_ETH_349]Std_ReturnType
 *                                               Eth_TimeAwareShaperInit(uint8 CtrlIdx,
 *                                               uint8 TimeAwareShaperIdx)
 *                               [FUNC_Eth_00134]The function requires previous controller
 *                                              initialization (Eth_Init)
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 *                               [SWS_Eth_00003]
 * @param[in] TimeAwareShaperIdx Index of the time aware shaper configurations.
 *
 */
ETH_TEXT_SECTION Std_ReturnType Eth_TimeAwareShaperInit(uint8 CtrlIdx, uint8 TimeAwareShaperIdx)
{
    Std_ReturnType         RetStatus;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_TimeAwareShaperInitDevCheck(CtrlIdx, CoreId, TimeAwareShaperIdx);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_352]Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_TIMEAWARESHAPER);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {

            /* [FUNC_Eth_00131]Initialize the time-aware shaper on the egress side */
            RetStatus = Eth_Hal_TimeAwareShaperInit(CtrlIdx, CtrlCfgPtr, TimeAwareShaperIdx);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETH_FEATURE_TIME_AWARE_SHAPER_SUPPORT */

#if (STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT)
/**
 * @brief                        Configure Time Based Scheduling control register.
 * @details                      Configures the EST (Ethernet Scheduled Traffic) Time Based
 * Scheduling control register with the provided parameters. This function should be called after
 * controller initialization (Eth_Init) and after Eth_TimeAwareShaperInit if EST mode is enabled.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TBSCfgPtr          Pointer to the TBS configuration structure.
 * @return Std_ReturnType        Operation status (E_OK if successful, E_NOT_OK otherwise).
 */
ETH_TEXT_SECTION Std_ReturnType Eth_TBSConfigureCtrl(uint8 CtrlIdx, const Eth_TBSCfgType *TBSCfgPtr)
{
    Std_ReturnType         RetStatus;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_TBSConfigureCtrlDevCheck(CtrlIdx, CoreId, TBSCfgPtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {
        CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_TBS_CONFIG);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {
            /* Configure Time Based Scheduling control register */
            RetStatus = Eth_Hal_TBSConfigureCtrl(CtrlIdx, CtrlCfgPtr, TBSCfgPtr);
        }
    }
    return RetStatus;
}

/**
 * @brief                        Set launch time of the indexed buffer resource.
 * @details                      Configures the launch time of the Time Based Scheduling with the
 * provided parameters. This function should be called after the calling of Eth_ProvideTxBuffer
 * and before the calling of Eth_Transmit.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] BufIdx             Index of the buffer resource to be transmitted.
 * @param[in] LaunchTimePtr      Pointer to the TBS launch time structure.
 * @return Std_ReturnType        Operation status (E_OK if successful, E_NOT_OK otherwise).
 */
ETH_TEXT_SECTION Std_ReturnType Eth_TBSSetLaunchTime(uint8                        CtrlIdx,
                                                     Eth_BufIdxType               BufIdx,
                                                     const Eth_TBSLaunchTimeType *LaunchTimePtr)
{
    Std_ReturnType RetStatus;
#if ((STD_ON == ETH_DEV_ERROR_DETECT) || (STD_ON == ETH_CHECK_ECU_PARTITION))
    uint8 CoreId = Eth_GetPartitionID();
#endif

#if (STD_ON == ETH_DEV_ERROR_DETECT)
    RetStatus = Eth_TBSSetLaunchTimeDevCheck(CtrlIdx, CoreId, BufIdx, LaunchTimePtr);
    if (E_OK == RetStatus)
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
        /* Check the ECUC partition map */
        RetStatus = Eth_EcucPartitionCheck(ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId),
                                           CoreId,
                                           (uint8)ETH_DRV_SID_TBS_SETLAUNCHTIME);
        if (E_OK == RetStatus)
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
        {
            /* Configure Time Based Scheduling launch time */
            Eth_Hal_TBSSetLaunchTime(CtrlIdx, BufIdx, LaunchTimePtr);
            RetStatus = E_OK;
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETH_TIME_BASED_SCHEDULE_SUPPORT */

#if (STD_ON == ETH_VERSION_INFO_API)
/**
 * @brief                        Returns the version information of this module.
 * @details                      [SWS_Eth_00106][SWDESG_ETH_106]void Eth_GetVersionInfo
 *                                              (Std_VersionInfoType *VersionInfoPtr)
 *
 * @param[out] VersionInfoPtr    Version information of this module.
 *
 */
ETH_TEXT_SECTION void Eth_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr)
{
#if (STD_ON == ETH_DEV_ERROR_DETECT)
    /* [SWS_Eth_00136][SWDESG_ETH_107]Check the parameter VersionInfoPtr for being valid */
    if (NULL_PTR == VersionInfoPtr)
    {
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_GETVERSIONINFO,
                              (uint8)ETH_E_PARAM_POINTER);
    }
    else
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    {

        /* Implementation */
        VersionInfoPtr->vendorID         = (uint16)ETH_VENDOR_ID;
        VersionInfoPtr->moduleID         = (uint16)ETH_MODULE_ID;
        VersionInfoPtr->sw_major_version = (uint8)ETH_SW_MAJOR_VERSION;
        VersionInfoPtr->sw_minor_version = (uint8)ETH_SW_MINOR_VERSION;
        VersionInfoPtr->sw_patch_version = (uint8)ETH_SW_PATCH_VERSION;
    }
}
#endif /* STD_ON == ETH_VERSION_INFO_API */

/**
 * @brief                        The function checks for controller errors and lost frames. Used for
 *                               polling state changes. Calls EthIf_CtrlModeIndication when the
 *                               controller mode changed.
 * @details                      [SWS_Eth_00171][SWDESG_ETH_108]void Eth_MainFunction(void)
 *
 */
ETH_TEXT_SECTION void Eth_MainFunction(void)
{
    uint8                  CtrlIdx;
    const Eth_CtrlCfgType *CtrlCfgPtr;
    uint8                  CoreId = Eth_GetPartitionID();

    if (Eth_eInitState[CoreId] == ETH_STATE_INIT)
    {

        for (CtrlIdx = 0U; CtrlIdx < ETH_CFG_NUM_CONTROLS(CoreId); ++CtrlIdx)
        {
            CtrlCfgPtr = ETH_CFG_CTRL_CFG_PTR(CtrlIdx, CoreId);

#if (STD_ON == ETH_CHECK_ECU_PARTITION)
            /* [SWS_Eth_00257][SWS_Eth_00259][SWDESG_ETH_317]Check the ECUC partition map */
            if ((boolean)TRUE ==
                Eth_EcucPartitionCheck(CtrlCfgPtr, CoreId, (uint8)ETH_DRV_SID_MAINFUNCTION))
#endif /* STD_ON == ETH_CHECK_ECU_PARTITION */
            {

                /* Implementation */
                Eth_Hal_MainFunction(CtrlIdx, CtrlCfgPtr);
            }
        }
    }
    else
    {
#if (STD_ON == ETH_DEV_ERROR_DETECT)
        /* [SWDESG_ETH_109]Raise det error if the driver is not initialized. */
        (void)Det_ReportError((uint16)ETH_MODULE_ID,
                              (uint8)ETH_INDEX,
                              (uint8)ETH_DRV_SID_MAINFUNCTION,
                              (uint8)ETH_E_UNINIT);
#endif /* STD_ON == ETH_DEV_ERROR_DETECT */
    }
}

#define ETH_STOP_SEC_CODE
#include "Eth_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
