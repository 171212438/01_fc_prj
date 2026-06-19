/**
*   @file    EthTrcv.c
*   @version 1.5.1

*   @brief   AUTOSAR EthTrcv - driver API implemention.
*   @details This file contains the implementation of EthTrcv driver API.
*
*   @addtogroup ETHTRCV
*   @{
*/
/*==================================================================================================
*   PERIPHERAL           : EthTrcv
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
*   0.2.0       27/09/2023    QXW0085       N/A          EthTrcv Initial Version
*   0.3.0       20/10/2023    QXW0085       N/A          Optimization of Multicore instance
*   0.4.0       17/11/2023    QXW0085       N/A          Update version
*   0.5.0       15/01/2024    QXW0085       N/A          Bugs fix
*   0.6.0       15/01/2024    QXW0085       N/A          Update version
==================================================================================================*/

/* PRQA S 2071,5087 EOF
   2071: This attribute syntax is a language extension.
   5087: Use of #include directive after code fragment.
   REASON:These variables and test code need to be placed in the specified location.
*/

/* PRQA S 3469 EOF
   3472: All toplevel uses of this function-like macro look like they could be replaced by
   equivalent function calls.
   REASON:This is the normal usage of macros.
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "EthTrcv.h"
#include "EthTrcv_Hal.h"

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define ETHTRCV_C_VENDOR_ID                   174
#define ETHTRCV_C_MODULE_ID                   73
#define ETHTRCV_C_AR_RELEASE_MAJOR_VERSION    4
#define ETHTRCV_C_AR_RELEASE_MINOR_VERSION    6
#define ETHTRCV_C_AR_RELEASE_REVISION_VERSION 0
#define ETHTRCV_C_SW_MAJOR_VERSION            1
#define ETHTRCV_C_SW_MINOR_VERSION            5
#define ETHTRCV_C_SW_PATCH_VERSION            1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if current source file and  header file are of the same vendor */
#if (ETHTRCV_C_VENDOR_ID != ETHTRCV_VENDOR_ID)
#error "EthTrcv.c and EthTrcv.h have different vendor id"
#endif
/* Check if current source file and header file are of the same module */
#if (ETHTRCV_C_MODULE_ID != ETHTRCV_MODULE_ID)
#error "EthTrcv.c and EthTrcv.h have different module id"
#endif
/* Check if current source file and header file are of the same Autosar version */
#if ((ETHTRCV_C_AR_RELEASE_MAJOR_VERSION != ETHTRCV_AR_RELEASE_MAJOR_VERSION) || \
     (ETHTRCV_C_AR_RELEASE_MINOR_VERSION != ETHTRCV_AR_RELEASE_MINOR_VERSION) || \
     (ETHTRCV_C_AR_RELEASE_REVISION_VERSION != ETHTRCV_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of EthTrcv.c and EthTrcv.h are different"
#endif
/* Check if current source file and header file are of the same Software version */
#if ((ETHTRCV_C_SW_MAJOR_VERSION != ETHTRCV_SW_MAJOR_VERSION) || \
     (ETHTRCV_C_SW_MINOR_VERSION != ETHTRCV_SW_MINOR_VERSION) || \
     (ETHTRCV_C_SW_PATCH_VERSION != ETHTRCV_SW_PATCH_VERSION))
#error "Software Version Numbers of EthTrcv.c and EthTrcv.h are different"
#endif

/* Check if current file and EthTrcv cfg header file are of the same vendor */
#if (ETHTRCV_CFG_VENDOR_ID != ETHTRCV_VENDOR_ID)
#error "EthTrcv.c and EthTrcv_Cfg.h have different vendor ids"
#endif
/* Check if current file and EthTrcv cfg header file are of the same module */
#if (ETHTRCV_CFG_MODULE_ID != ETHTRCV_MODULE_ID)
#error "EthTrcv.c and EthTrcv_Cfg.h have different module ids"
#endif
/* Check if current file and EthTrcv cfg header file are of the same Autosar version */
#if ((ETHTRCV_CFG_AR_RELEASE_MAJOR_VERSION != ETHTRCV_AR_RELEASE_MAJOR_VERSION) || \
     (ETHTRCV_CFG_AR_RELEASE_MINOR_VERSION != ETHTRCV_AR_RELEASE_MINOR_VERSION) || \
     (ETHTRCV_CFG_AR_RELEASE_REVISION_VERSION != ETHTRCV_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of EthTrcv.c and EthTrcv_Cfg.h are different"
#endif
/* Check if current file and EthTrcv cfg header file are of the same Software version */
#if ((ETHTRCV_CFG_SW_MAJOR_VERSION != ETHTRCV_SW_MAJOR_VERSION) || \
     (ETHTRCV_CFG_SW_MINOR_VERSION != ETHTRCV_SW_MINOR_VERSION) || \
     (ETHTRCV_CFG_SW_PATCH_VERSION != ETHTRCV_SW_PATCH_VERSION))
#error "Software Version Numbers of EthTrcv.c and EthTrcv_Cfg.h are different"
#endif

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
*                                       VARIABLES
==================================================================================================*/

#define ETHTRCV_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "EthTrcv_MemMap.h"

ETHTRCV_DATA_SECTION static EthTrcv_StateType EthTrcv_eInitState[ETHTRCV_NUM_ECU_PARTITIONS];

ETHTRCV_DATA_SECTION const EthTrcv_ConfigType *EthTrcv_Config_Ptrs[ETHTRCV_NUM_ECU_PARTITIONS];

#define ETHTRCV_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "EthTrcv_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

#define ETHTRCV_START_SEC_CODE
#include "EthTrcv_MemMap.h"

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_StateIdxDevCheck(uint8 TrcvIdx,
                                                                          uint8 CoreId,
                                                                          uint8 Sid);

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_StateIdxPtrDevCheck(uint8       TrcvIdx,
                                                                             uint8       CoreId,
                                                                             const void *Ptr,
                                                                             uint8       Sid);

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_InitDevCheck(
    uint8                     CoreId,
    const EthTrcv_ConfigType *CfgPtr);

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API)
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_SetPhyTestModeDevCheck(
    uint8                   TrcvIdx,
    uint8                   CoreId,
    uint8                   Sid,
    EthTrcv_PhyTestModeType Mode);
#endif /* STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API */

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_SetPhyLoopbackModeDevCheck(
    uint8                       TrcvIdx,
    uint8                       CoreId,
    uint8                       Sid,
    EthTrcv_PhyLoopbackModeType Mode);

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    EthTrcv_SetPhyTxModeDevCheck(uint8 TrcvIdx, uint8 CoreId, uint8 Sid, EthTrcv_PhyTxModeType Mode);

ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_GetPhyIdentifierDevCheck(
    uint8         TrcvIdx,
    uint8         CoreId,
    const uint32 *OrgUniqueIdPtr,
    const uint8  *ModelNrPtr,
    const uint8  *RevisionNrPtr);

#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    EthTrcv_EcucPartitionCheck(const EthTrcv_TrcvCfgType *TrcvCfgPtr, uint8 CoreId, uint8 Sid);
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
/**
 * @brief                        Check the development errors of state and TrcvIdx.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] Sid                Service ID of the caller.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_StateIdxDevCheck(uint8 TrcvIdx,
                                                                          uint8 CoreId,
                                                                          uint8 Sid)
{
    Std_ReturnType RetValue = E_NOT_OK;

    if (EthTrcv_eInitState[CoreId] != ETHTRCV_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)Sid,
                              (uint8)ETHTRCV_E_UNINIT);
    }
    else
    {
        if (TrcvIdx >= ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId))
        {
            (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                  (uint8)ETHTRCV_INDEX,
                                  (uint8)Sid,
                                  (uint8)ETHTRCV_E_INV_TRCV_IDX);
        }
        else
        {
            RetValue = E_OK;
        }
    }
    return RetValue;
}

/**
 * @brief                        Check the development errors of state, TrcvIdx and a pointer.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] Ptr                Pointer to memory.
 * @param[in] Sid                Service ID of the caller.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_StateIdxPtrDevCheck(uint8       TrcvIdx,
                                                                             uint8       CoreId,
                                                                             const void *Ptr,
                                                                             uint8       Sid)
{
    Std_ReturnType RetValue = E_NOT_OK;

    if (NULL_PTR == Ptr)
    {
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)Sid,
                              (uint8)ETHTRCV_E_PARAM_POINTER);
    }
    else
    {
        if (EthTrcv_eInitState[CoreId] != ETHTRCV_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                  (uint8)ETHTRCV_INDEX,
                                  (uint8)Sid,
                                  (uint8)ETHTRCV_E_UNINIT);
        }
        else
        {
            if (TrcvIdx >= ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId))
            {
                (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                      (uint8)ETHTRCV_INDEX,
                                      (uint8)Sid,
                                      (uint8)ETHTRCV_E_INV_TRCV_IDX);
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
 * @brief                        Check the development errors of EthTrcv_Init.
 *
 * @param[in] CfgPtr             Points to the implementation specific structure.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_InitDevCheck(uint8 CoreId,
                                                                      const EthTrcv_ConfigType *CfgPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

#if (STD_ON == ETHTRCV_PRECOMPILE_SUPPORT)
    if (NULL_PTR != CfgPtr)
#else
    if (NULL_PTR == CfgPtr)
#endif /* STD_ON == ETHTRCV_PRECOMPILE_SUPPORT */
    {
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)ETHTRCV_DRV_SID_INIT,
                              (uint8)ETHTRCV_E_PARAM_POINTER);
    }
    else
    {
        if (EthTrcv_eInitState[CoreId] != ETHTRCV_STATE_UNINIT)
        {
            (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                  (uint8)ETHTRCV_INDEX,
                                  (uint8)ETHTRCV_DRV_SID_INIT,
                                  (uint8)ETHTRCV_E_ALREADY_INITIALIZED);
        }
        else
        {
            RetValue = E_OK;
        }
    }

    return RetValue;
}

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API)
/**
 * @brief                        Check the development errors of EthTrcv_SetPhyTestMode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] Sid                Service ID of the caller.
 * @param[in] Mode               Test Mode.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    EthTrcv_SetPhyTestModeDevCheck(uint8 TrcvIdx, uint8 CoreId, uint8 Sid, EthTrcv_PhyTestModeType Mode)
{
    Std_ReturnType RetValue = E_NOT_OK;

    if (EthTrcv_eInitState[CoreId] != ETHTRCV_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)Sid,
                              (uint8)ETHTRCV_E_UNINIT);
    }
    else
    {
        if (TrcvIdx >= ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId))
        {
            (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                  (uint8)ETHTRCV_INDEX,
                                  (uint8)Sid,
                                  (uint8)ETHTRCV_E_INV_TRCV_IDX);
        }
        else
        {
            if (E_OK ==
                EthTrcv_Hal_PhyTestModeAvailable(ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId), Mode))
            {
                (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                      (uint8)ETHTRCV_INDEX,
                                      (uint8)Sid,
                                      (uint8)ETHTRCV_E_NOT_SUPPORTED);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API */

/**
 * @brief                        Check the development errors of EthTrcv_SetPhyLoopbackMode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] Sid                Service ID of the caller.
 * @param[in] Mode               Loop back Mode.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_SetPhyLoopbackModeDevCheck(
    uint8                       TrcvIdx,
    uint8                       CoreId,
    uint8                       Sid,
    EthTrcv_PhyLoopbackModeType Mode)
{
    Std_ReturnType RetValue = E_NOT_OK;

    if (EthTrcv_eInitState[CoreId] != ETHTRCV_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)Sid,
                              (uint8)ETHTRCV_E_UNINIT);
    }
    else
    {
        if (TrcvIdx >= ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId))
        {
            (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                  (uint8)ETHTRCV_INDEX,
                                  (uint8)Sid,
                                  (uint8)ETHTRCV_E_INV_TRCV_IDX);
        }
        else
        {
            if (E_OK ==
                EthTrcv_Hal_PhyLoopbackModeAvailable(ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId), Mode))
            {
                (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                      (uint8)ETHTRCV_INDEX,
                                      (uint8)Sid,
                                      (uint8)ETHTRCV_E_NOT_SUPPORTED);
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
 * @brief                        Check the development errors of EthTrcv_SetPhyTxMode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] Sid                Service ID of the caller.
 * @param[in] Mode               PHY TX Mode.
 * @return                       E_OK: No development error detected.
 *                               E_NOT_OK: Development error detected.
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    EthTrcv_SetPhyTxModeDevCheck(uint8 TrcvIdx, uint8 CoreId, uint8 Sid, EthTrcv_PhyTxModeType Mode)
{
    Std_ReturnType RetValue = E_NOT_OK;

    if (EthTrcv_eInitState[CoreId] != ETHTRCV_STATE_INIT)
    {
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)Sid,
                              (uint8)ETHTRCV_E_UNINIT);
    }
    else
    {
        if (TrcvIdx >= ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId))
        {
            (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                  (uint8)ETHTRCV_INDEX,
                                  (uint8)Sid,
                                  (uint8)ETHTRCV_E_INV_TRCV_IDX);
        }
        else
        {
            if (E_OK ==
                EthTrcv_Hal_PhyTxModeAvailable(ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId), Mode))
            {
                (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                      (uint8)ETHTRCV_INDEX,
                                      (uint8)Sid,
                                      (uint8)ETHTRCV_E_NOT_SUPPORTED);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}

#if (STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API)
/**
 * @brief                        Check the development errors of EthTrcv_GetPhyIdentifier.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] OrgUniqueIdPtr     Pointer to the memory where the Organizationally Unique
 *                               Identifier shall be stored.
 * @param[in] ModelNrPtr         Pointer to the memory where the Manufacturer's Model Number
 *                               shall be stored.
 * @param[in] RevisionNrPtr      Pointer to the memory where the Revision Number shall be stored.
 * @return                       TRUE: No development error detected.
 *                               FALSE: Development error detected.
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType EthTrcv_GetPhyIdentifierDevCheck(
    uint8         TrcvIdx,
    uint8         CoreId,
    const uint32 *OrgUniqueIdPtr,
    const uint8  *ModelNrPtr,
    const uint8  *RevisionNrPtr)
{
    Std_ReturnType RetValue = E_NOT_OK;

    if ((NULL_PTR == OrgUniqueIdPtr) || (NULL_PTR == ModelNrPtr) || (NULL_PTR == RevisionNrPtr))
    {
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)ETHTRCV_DRV_SID_GETPHYIDENTIFIER,
                              (uint8)ETHTRCV_E_PARAM_POINTER);
    }
    else
    {
        if (EthTrcv_eInitState[CoreId] != ETHTRCV_STATE_INIT)
        {
            (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                  (uint8)ETHTRCV_INDEX,
                                  (uint8)ETHTRCV_DRV_SID_GETPHYIDENTIFIER,
                                  (uint8)ETHTRCV_E_UNINIT);
        }
        else
        {
            if (TrcvIdx >= ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId))
            {
                (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                                      (uint8)ETHTRCV_INDEX,
                                      (uint8)ETHTRCV_DRV_SID_GETPHYIDENTIFIER,
                                      (uint8)ETHTRCV_E_INV_TRCV_IDX);
            }
            else
            {
                RetValue = E_OK;
            }
        }
    }
    return RetValue;
}
#endif /* STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API */
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
/**
 * @brief                        Check the ECUC partition.
 *
 * @param[in] TrcvCfgPtr         Pointer to the controller configuration.
 * @param[in] CoreId             Partition ID of current processor.
 * @param[in] Sid                Service ID of the caller.
 * @return                       E_OK: Check success.
 *                               E_NOT_OK: Check failed.
 */
ETHTRCV_TEXT_SECTION LOCAL_INLINE Std_ReturnType
    EthTrcv_EcucPartitionCheck(const EthTrcv_TrcvCfgType *TrcvCfgPtr, uint8 CoreId, uint8 Sid)
{
    Std_ReturnType RetValue = E_NOT_OK;

    if (TrcvCfgPtr->EcucPartition == CoreId)
    {
        RetValue = E_OK;
    }
#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    else
    {
        (void)Det_ReportRuntimeError((uint16)ETHTRCV_MODULE_ID,
                                     (uint8)ETHTRCV_INDEX,
                                     (uint8)Sid,
                                     (uint8)ETHTRCV_E_INV_PARTITION);
    }
#endif
    return RetValue;
}
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 * @brief    Services defined in AUROSAR Ethernet Transceiver Driver module.
 */

/**
 * @brief                        Initializes the Ethernet Transceiver Driver.
 * @details                      This function is AUTOSAR standard API which is used to initialize
 *                               the EthernetTransceiver.
 *
 * @param[in] CfgPtr             Points to the implementation specific structure.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_Init(const EthTrcv_ConfigType *CfgPtr)
{
    uint8                      TrcvIdx;
    uint8                      CoreId   = EthTrcv_GetPartitionID();
    Std_ReturnType             RetValue = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_InitDevCheck(CoreId, CfgPtr))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        /* [SWS_EthTrcv_00029] Store the access to the configuration structure */
#if (STD_ON == ETHTRCV_PRECOMPILE_SUPPORT)
        EthTrcv_Config_Ptrs[CoreId] = &EthTrcv_Config;
        /* PRQA S 3119 ++
           3119:This statement has no side-effect - it can be removed.
           REASON: Avoid warning for this unused parameters.
        */
        (void)CfgPtr;
        /* PRQA S 3119 -- */
#else
        EthTrcv_Config_Ptrs[CoreId] = CfgPtr;
#endif /* STD_ON == ETHTRCV_PRECOMPILE_SUPPORT */

        /* Initialize transceivers mapped to current core */
        for (TrcvIdx = 0U; TrcvIdx < ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId); ++TrcvIdx)
        {
            TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (ETHTRCV_NUM_ECU_PARTITIONS > 1U)
            if (TrcvCfgPtr->EcucPartition == CoreId)
#endif /* ETHTRCV_NUM_ECU_PARTITIONS > 1U */
            {

                /* [SWS_EthTrcv_00040] Check the access to the Ethernet transceiver. */
                if (E_OK == EthTrcv_Hal_CheckAccessTransceiver(TrcvCfgPtr))
                {

#if (ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED)
                    /* [SWS_EthTrcv_00115] Check for wake-up reasons and propagate the corresponding
                     * wake-up source, the wake-up is not implemented now
                     */
#endif /* ETHTRCV_WAKEUP_SUPPORT_TYPE != ETHTRCV_WAKEUP_NOT_SUPPORTED */

                    /* [SWS_EthTrcv_00035] Initialize the hardware  */
                    RetValue = EthTrcv_Hal_InitTransceiver(TrcvIdx, TrcvCfgPtr);
                }
                else
                {
#if (STD_ON == ETHTRCV_DEM_EVENT_DETECT)
                    if ((uint32)STD_ON == TrcvCfgPtr->Cfg_Dem_EAccess.state)
                    {
                        (void)Dem_SetEventStatus((Dem_EventIdType)TrcvCfgPtr->Cfg_Dem_EAccess.id,
                                                 DEM_EVENT_STATUS_PREFAILED);
                    }
#endif /* STD_ON == ETHTRCV_DEM_EVENT_DETECT */
                    RetValue = E_NOT_OK;
                }

                if (E_OK != RetValue)
                {
                    break;
                }
            }
        }

        /* [SWS_EthTrcv_00030] Change the state of the driver to ETHTRCV_STATE_INIT */
        if (E_OK == RetValue)
        {
            EthTrcv_eInitState[CoreId] = ETHTRCV_STATE_INIT;
        }
    }
}

/**
 * @brief                        Enables / disables the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to
 *                               Enables / disables the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] CtrlMode           ETHTRCV_MODE_DOWN: disable the transceiver.
 *                               ETHTRCV_MODE_ACTIVE: enable the transceiver.
 * @return                       E_OK: Service accepted.
 *                               E_NOT_OK: Service denied.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetTransceiverMode(uint8 TrcvIdx, Eth_ModeType TrcvMode)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00044] [SWS_EthTrcv_00045] Check init state and TrcvIdx valid */
    if (E_OK == EthTrcv_StateIdxDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_SETTRANSCEIVERMODE))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_SETTRANSCEIVERMODE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {
            /* Implementation */

            /* [SWS_EthTrcv_00104] Check the access to the Ethernet transceiver */
            if (E_OK == EthTrcv_Hal_CheckAccessTransceiver(TrcvCfgPtr))
            {
                RetStatus = EthTrcv_Hal_SetTransceiverMode(TrcvIdx, TrcvCfgPtr, TrcvMode);
            }
#if (STD_ON == ETHTRCV_DEM_EVENT_DETECT)
            {
                /* [SWS_EthTrcv_00104] Raise the production error ETHTRCV_E_ACCESS */
                if ((uint32)STD_ON == TrcvCfgPtr->Cfg_Dem_EAccess.state)
                {
                    if (E_OK == RetStatus)
                    {
                        (void)Dem_SetEventStatus((Dem_EventIdType)TrcvCfgPtr->Cfg_Dem_EAccess.id,
                                                 DEM_EVENT_STATUS_PREPASSED);
                    }
                    else
                    {
                        (void)Dem_SetEventStatus((Dem_EventIdType)TrcvCfgPtr->Cfg_Dem_EAccess.id,
                                                 DEM_EVENT_STATUS_PREFAILED);
                    }
                }
            }
#endif /* STD_ON == ETHTRCV_DEM_EVENT_DETECT */
        }
    }
    return RetStatus;
}

/**
 * @brief                        Obtains the state of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               state of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] TrcvModePtr       ETHTRCV_MODE_DOWN: the transceiver is disabled.
 *                               ETHTRCV_MODE_ACTIVE: the transceiver is enabled.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetTransceiverMode(uint8         TrcvIdx,
                                                               Eth_ModeType *TrcvModePtr)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00050] [SWS_EthTrcv_00051] [SWS_EthTrcv_00052] Check parameters */
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)TrcvModePtr,
                                            (uint8)ETHTRCV_DRV_SID_GETTRANSCEIVERMODE))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_GETTRANSCEIVERMODE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetTransceiverMode(TrcvIdx, TrcvCfgPtr, TrcvModePtr);
        }
    }
    return RetStatus;
}

#if (STD_ON == ETHTRCV_SET_TRANSCEIVER_WAKEUP_MODE_API) /* Obsolete in AUTOSAR4.6.0 */
/**
 * @brief                        Enables / disables the wake-up mode or clear the wake-up reason of
 *                               the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to
 *                               enables / disables the wake-up mode or clear the wake-up reason of
 *                               the indexed transceiver. This API is obsolete in
 *                               current version.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] TrcvWakeupMode     ETHTRCV_WUM_DISABLE: disable transceiver wake up.
 *                               ETHTRCV_WUM_ENABLE: enable transceiver wake up.
 *                               ETHTRCV_WUM_CLEAR: clears transceiver wake up reason.
 * @return                       E_OK: transceiver wake up mode has been changed.
 *                               E_NOT_OK: transceiver wake up mode could not be changed or the
 *                               wake-up reason could not be cleared.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetTransceiverWakeupMode(
    uint8                  TrcvIdx,
    EthTrcv_WakeupModeType TrcvWakeupMode)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_StateIdxDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_SETTRANSCEIVERWAKEUPMODE))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK == EthTrcv_EcucPartitionCheck(TrcvCfgPtr,
                                               CoreId,
                                               (uint8)ETHTRCV_DRV_SID_SETTRANSCEIVERWAKEUPMODE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_SetTransceiverWakeupMode(TrcvIdx, TrcvCfgPtr, TrcvWakeupMode);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_SET_TRANSCEIVER_WAKEUP_MODE_API */

#if (STD_ON == ETHTRCV_GET_TRANSCEIVER_WAKEUP_MODE_API) /* Obsolete in AUTOSAR4.6.0 */
/**
 * @brief                        Returns the wake up mode of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               wake up mode of the indexed transceiver. This API is obsolete in
 *                               current version.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] TrcvWakeupModePtr ETHTRCV_WUM_DISABLE: transceiver wake up is disabled.
 *                               ETHTRCV_WUM_ENABLE: transceiver wake up is enabled.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver wake up mode could not be obtained.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetTransceiverWakeupMode(
    uint8                   TrcvIdx,
    EthTrcv_WakeupModeType *TrcvWakeupModePtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)TrcvWakeupModePtr,
                                            (uint8)ETHTRCV_DRV_SID_GETTRANSCEIVERWAKEUPMODE))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK == EthTrcv_EcucPartitionCheck(TrcvCfgPtr,
                                               CoreId,
                                               (uint8)ETHTRCV_DRV_SID_GETTRANSCEIVERWAKEUPMODE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetTransceiverWakeupMode(TrcvIdx, TrcvCfgPtr, TrcvWakeupModePtr);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_TRANSCEIVER_WAKEUP_MODE_API */

#if (STD_ON == ETHTRCV_GET_BUS_WU_REASON_API) /* [SWS_EthTrcv_00190] */
/**
 * @brief                        This function returns the least recent wakeup reasons.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               the least recent wakeup reasons.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] WakeupReasonPtr   Pointer to structure of least recent wakeup event, which was
 * detected by the Ethernet PHY.
 * @return                       E_OK: PHY wake up reason request has been accepted.
 *                               E_NOT_OK: PHY wake up reason request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetBusWuReason(uint8 TrcvIdx,
                                                           EthTrcv_WakeupReasonType *WakeupReasonPtr)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)WakeupReasonPtr,
                                            (uint8)ETHTRCV_DRV_SID_GETBUSWUREASON))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_GETBUSWUREASON))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetBusWuReason(TrcvIdx, TrcvCfgPtr, WakeupReasonPtr);
        }
    }

    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_BUS_WU_REASON_API */

/**
 * @brief                        Service is called by EthIf in case a wake-up interrupt is detected.
 * @details                      Service is called by EthIf in case a wake-up interrupt is detected.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @return                       E_OK: The function has been successfully executed.
 *                               E_NOT_OK: The function could not be successfully executed.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_CheckWakeup(uint8 TrcvIdx)
{
    Std_ReturnType RetStatus = E_NOT_OK;

    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00137] [SWS_EthTrcv_00138] */
    if (E_OK == EthTrcv_StateIdxDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_CHECKWAKEUP))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK == EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_CHECKWAKEUP))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_CheckWakeup(TrcvIdx, TrcvCfgPtr);
        }
    }

    return RetStatus;
}

#if (STD_ON == ETHTRCV_START_AUTONEGOTIATION_API) /* [SWS_EthTrcv_00059] */
/**
 * @brief                        Restarts the negotiation of the transmission parameters used by the
 *                               indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to restarts the
 *                               negotiation of the transmission.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_StartAutoNegotiation(uint8 TrcvIdx)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00057] [SWS_EthTrcv_00058] */
    if (E_OK == EthTrcv_StateIdxDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_STARTAUTONEGOTIATION))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK == EthTrcv_EcucPartitionCheck(TrcvCfgPtr,
                                               CoreId,
                                               (uint8)ETHTRCV_DRV_SID_STARTAUTONEGOTIATION))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_StartAutoNegotiation(TrcvIdx, TrcvCfgPtr);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_START_AUTONEGOTIATION_API */

#if (STD_ON == ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API) /* Added in AUTOSAR4.6.0 */
/**
 * @brief                        Request the given link state for the given Ethernet transceiver.
 * @details                      This function is AUTOSAR standard API which is used to request the
 *                               given link state for the given Ethernet transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] LinkState          The Ethernet link state of a physical Ethernet connection.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_TransceiverLinkStateRequest(uint8 TrcvIdx,
                                                                        EthTrcv_LinkStateType LinkState)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_StateIdxDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_TRANSCEIVERLINKSTATEREQUEST))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK == EthTrcv_EcucPartitionCheck(TrcvCfgPtr,
                                               CoreId,
                                               (uint8)ETHTRCV_DRV_SID_TRANSCEIVERLINKSTATEREQUEST))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_TransceiverLinkStateRequest(TrcvIdx, TrcvCfgPtr, LinkState);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_TRANSCEIVER_LINKSTATE_REQUEST_API */

#if (STD_ON == ETHTRCV_GET_LINK_STATE_API) /* [SWS_EthTrcv_00066] */
/**
 * @brief                        Obtains the link state of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               link state of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] LinkStatePtr      ETHTRCV_LINK_STATE_DOWN: transceiver is disconnected.
 *                               ETHTRCV_LINK_STATE_ACTIVE: transceiver is connected.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetLinkState(uint8                  TrcvIdx,
                                                         EthTrcv_LinkStateType *LinkStatePtr)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00063] [SWS_EthTrcv_00064] [SWS_EthTrcv_00065] */
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)LinkStatePtr,
                                            (uint8)ETHTRCV_DRV_SID_GETLINKSTATE))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_GETLINKSTATE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetLinkState(TrcvIdx, TrcvCfgPtr, LinkStatePtr);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_LINK_STATE_API */

#if (STD_ON == ETHTRCV_GET_BAUD_RATE_API) /* [SWS_EthTrcv_00073] */
/**
 * @brief                        Obtains the baud rate of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               baud rate of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] BaudRatePtr       ETHTRCV_BAUD_RATE_10MBIT: 10MBit connection.
 *                               ETHTRCV_BAUD_RATE_100MBIT: 100MBit connection.
 *                               ETHTRCV_BAUD_RATE_1000MBIT: 1000MBit connection.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetBaudRate(uint8                 TrcvIdx,
                                                        EthTrcv_BaudRateType *BaudRatePtr)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00070] [SWS_EthTrcv_00071] [SWS_EthTrcv_00072] */
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)BaudRatePtr,
                                            (uint8)ETHTRCV_DRV_SID_GETBAUDRATE))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK == EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_GETBAUDRATE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetBaudRate(TrcvIdx, TrcvCfgPtr, BaudRatePtr);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_BAUD_RATE_API */

#if (STD_ON == ETHTRCV_GET_DUPLEX_MODE_API) /* [SWS_EthTrcv_00080] */
/**
 * @brief                        Obtains the duplex mode of the indexed transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               duplex mode of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] DuplexModePtr     ETHTRCV_DUPLEX_MODE_HALF: half duplex connections.
 *                               ETHTRCV_DUPLEX_MODE_FULL: full duplex connection.
 * @return                       E_OK: success.
 *                               E_NOT_OK: transceiver could not be initialized.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetDuplexMode(uint8                   TrcvIdx,
                                                          EthTrcv_DuplexModeType *DuplexModePtr)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00077] [SWS_EthTrcv_00078] [SWS_EthTrcv_00079] */
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)DuplexModePtr,
                                            (uint8)ETHTRCV_DRV_SID_GETDUPLEXMODE))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_GETDUPLEXMODE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetDuplexMode(TrcvIdx, TrcvCfgPtr, DuplexModePtr);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_DUPLEX_MODE_API */

#if (STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API) /* [SWS_EthTrcv_00169] */
/**
 * @brief                        Activates a given test mode.
 * @details                      This function is AUTOSAR standard API which is used to activates a
 *                               given test mode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] Mode               Test mode to be activated.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetPhyTestMode(uint8 TrcvIdx, EthTrcv_PhyTestModeType Mode)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00147] */
    if (E_OK == EthTrcv_SetPhyTestModeDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_SETPHYTESTMODE, Mode))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_SETPHYTESTMODE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_SetPhyTestMode(TrcvIdx, TrcvCfgPtr, Mode);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_SET_PHY_TEST_MODE_API */

/**
 * @brief                        Activates a given loopback mode.
 * @details                      This function is AUTOSAR standard API which is used to activates a
 *                               given loopback mode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] Mode               Loopback mode to be activated.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetPhyLoopbackMode(uint8                       TrcvIdx,
                                                               EthTrcv_PhyLoopbackModeType Mode)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00149] */
    if (E_OK ==
        EthTrcv_SetPhyLoopbackModeDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_SETPHYLOOPBACKMODE, Mode))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_SETPHYLOOPBACKMODE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_SetPhyLoopbackMode(TrcvIdx, TrcvCfgPtr, Mode);
        }
    }
    return RetStatus;
}

/**
 * @brief                        Obtains the current signal quality of the link of the indexed
 *                               transceiver.
 * @details                      This function is AUTOSAR standard API which is used to obtains the
 *                               current signal quality of the link of the indexed transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] SignalQualityPtr  Pointer to the memory where the signal quality shall be stored.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetPhySignalQuality(uint8   TrcvIdx,
                                                                uint32 *SignalQualityPtr)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)SignalQualityPtr,
                                            (uint8)ETHTRCV_DRV_SID_GETPHYSIGNALQUALITY))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_GETPHYSIGNALQUALITY))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetPhySignalQuality(TrcvIdx, TrcvCfgPtr, SignalQualityPtr);
        }
    }
    return RetStatus;
}

/**
 * @brief                        Activates a given transmission mode.
 * @details                      This function is AUTOSAR standard API which is used to activates a
 *                               given transmission mode.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[in] Mode               Transmission mode to be activated.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_SetPhyTxMode(uint8 TrcvIdx, EthTrcv_PhyTxModeType Mode)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_SetPhyTxModeDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_SETPHYTXMODE, Mode))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_SETPHYTXMODE))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_SetPhyTxMode(TrcvIdx, TrcvCfgPtr, Mode);
        }
    }
    return RetStatus;
}

#if (STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API)
/**
 * @brief                        Trigger the cable diagnostics for the given Ethernet transceiver.
 * @details                      This function is AUTOSAR standard API which is used to trigger the
 *                               cable diagnostics for the given Ethernet transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @return                       E_OK: The trigger has been accepted.
 *                               E_NOT_OK: The trigger has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_RunCableDiagnostic(uint8 TrcvIdx)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_StateIdxDevCheck(TrcvIdx, CoreId, ETHTRCV_DRV_SID_RUNCABLEDIAGNOSTIC))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_RUNCABLEDIAGNOSTIC))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_RunCableDiagnostic(TrcvIdx, TrcvCfgPtr);
        }
    }
    return RetStatus;
}

/**
 * @brief                        Retrieves the cable diagnostics result of a given transceiver.
 * @details                      This function is AUTOSAR standard API which is used to retrieves
 * the cable diagnostics result of a given transceiver.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] ResultPtr         Pointer to the location where the cable diagnostics result shall
 *                               be stored.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetCableDiagnosticsResult(
    uint8                        TrcvIdx,
    EthTrcv_CableDiagResultType *ResultPtr)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)ResultPtr,
                                            (uint8)ETHTRCV_DRV_SID_GETCABLEDIAGNOSTICSRESULT))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK == EthTrcv_EcucPartitionCheck(TrcvCfgPtr,
                                               CoreId,
                                               (uint8)ETHTRCV_DRV_SID_GETCABLEDIAGNOSTICSRESULT))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetCableDiagnosticsResult(TrcvIdx, TrcvCfgPtr, ResultPtr);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_ENABLE_CABLE_DIAGNOSTIC_API */

#if (STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API) /* [SWS_EthTrcv_00172] */
/**
 * @brief                        Obtains the PHY identifier of the Ethernet Transceiver.
 * @details                      Obtains the PHY identifier of the Ethernet Transceiver according to
 *                               IEEE 802.3-2015 chapter 22.2.4.3.1 PHY Identifer.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] OrgUniqueIdPtr    Pointer to the memory where the Organizationally Unique Identifier
 *                               shall be stored.
 * @param[out] ModelNrPtr        Pointer to the memory where the Manufacturer's Model Number shall
 *                               be stored.
 * @param[out] RevisionNrPtr     Pointer to the memory where the Revision Number shall be stored.
 * @return                       E_OK: The request has been accepted.
 *                               E_NOT_OK: The request has not been accepted.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetPhyIdentifier(uint8   TrcvIdx,
                                                             uint32 *OrgUniqueIdPtr,
                                                             uint8  *ModelNrPtr,
                                                             uint8  *RevisionNrPtr)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    if (E_OK ==
        EthTrcv_GetPhyIdentifierDevCheck(TrcvIdx, CoreId, OrgUniqueIdPtr, ModelNrPtr, RevisionNrPtr))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_GETPHYIDENTIFIER))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus =
                EthTrcv_Hal_GetPhyIdentifier(TrcvCfgPtr, OrgUniqueIdPtr, ModelNrPtr, RevisionNrPtr);
        }
    }
    return RetStatus;
}
#endif /* STD_ON == ETHTRCV_GET_PHY_IDENTIFIER_API */

/**
 * @brief                        Obtains the media access mode of the transceiver when
 * EthTrcvDuplexMode is configured as ETHTRCV_DUPLEX_MODE_HALF.
 *
 * @param[in] TrcvIdx            Index of the transceiver within the context of the Ethernet
 *                               Transceiver Driver.
 * @param[out] MacModePtr        ETHTRCV_MAC_TYPE_CSMA_CD: Carrier-sense multiple access with
 * collicion detection. ETHTRCV_MAC_TYPE_PLCA: Physical layer collision avoidance.
 * @return                       E_OK: success.
 *                               E_NOT_OK: MacType could not be returned.
 */
ETHTRCV_TEXT_SECTION Std_ReturnType EthTrcv_GetMacMethod(uint8                  TrcvIdx,
                                                         EthTrcv_MacMethodType *MacModePtr)
{
    Std_ReturnType             RetStatus = E_NOT_OK;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00175] [SWS_EthTrcv_00176] [SWS_EthTrcv_00177] */
    if (E_OK == EthTrcv_StateIdxPtrDevCheck(TrcvIdx,
                                            CoreId,
                                            (const void *)MacModePtr,
                                            (uint8)ETHTRCV_DRV_SID_GETMACMETHOD))
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
        if (E_OK ==
            EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_GETMACMETHOD))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
        {

            /* Implementation */
            RetStatus = EthTrcv_Hal_GetMacMethod(TrcvIdx, TrcvCfgPtr, MacModePtr);
        }
    }
    return RetStatus;
}

#if ((STD_ON == ETHTRCV_VERSION_INFO_API) && (STD_OFF == ETHTRCV_VERSION_INFO_API_MACRO))
/**
 * @brief                        Returns the version information of this module.
 * @details                      Returns the version information of this module.
 *
 * @param[out] VersionInfoPtr    Version information of this module.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr)
{
#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
    /* [SWS_EthTrcv_00093] */
    if (NULL_PTR == VersionInfoPtr)
    {
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)ETHTRCV_DRV_SID_GETVERSIONINFO,
                              (uint8)ETHTRCV_E_PARAM_POINTER);
    }
    else
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    {
        VersionInfoPtr->vendorID         = (uint16)ETHTRCV_VENDOR_ID;
        VersionInfoPtr->moduleID         = (uint16)ETHTRCV_MODULE_ID;
        VersionInfoPtr->sw_major_version = (uint8)ETHTRCV_SW_MAJOR_VERSION;
        VersionInfoPtr->sw_minor_version = (uint8)ETHTRCV_SW_MINOR_VERSION;
        VersionInfoPtr->sw_patch_version = (uint8)ETHTRCV_SW_PATCH_VERSION;
    }
}
#endif

/**
 * @brief                        Ethernet Transceiver scheduled function.
 * @details                      Used for polling state changes and wakeup reasons. Calls
 *                               EthIf_TrcvModeIndication when the transceiver mode changed.
 *                               Stores wakeup events if EthTrcv_174_YT8531SWakeUpSupport is set to
 *                               ETHTRCV_WAKEUP_BY_POLLING..
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_MainFunction(void)
{
    uint8                      TrcvIdx;
    const EthTrcv_TrcvCfgType *TrcvCfgPtr;
    uint8                      CoreId = EthTrcv_GetPartitionID();

    if (EthTrcv_eInitState[CoreId] == ETHTRCV_STATE_INIT)
    {
        for (TrcvIdx = 0; TrcvIdx < ETHTRCV_CFG_NUM_TRANSCEIVERS(CoreId); TrcvIdx++)
        {
            TrcvCfgPtr = ETHTRCV_CFG_TRCV_CFG_PTR(TrcvIdx, CoreId);

#if (STD_ON == ETHTRCV_CHECK_ECU_PARTITION)
            if (E_OK ==
                EthTrcv_EcucPartitionCheck(TrcvCfgPtr, CoreId, (uint8)ETHTRCV_DRV_SID_MAINFUNCTION))
#endif /* STD_ON == ETHTRCV_CHECK_ECU_PARTITION */
            {

                EthTrcv_Hal_MainFunction(TrcvIdx, TrcvCfgPtr);
            }
        }
    }
    else
    {
#if (STD_ON == ETHTRCV_DEV_ERROR_DETECT)
        (void)Det_ReportError((uint16)ETHTRCV_MODULE_ID,
                              (uint8)ETHTRCV_INDEX,
                              (uint8)ETHTRCV_DRV_SID_MAINFUNCTION,
                              (uint8)ETHTRCV_E_UNINIT);
#endif /* STD_ON == ETHTRCV_DEV_ERROR_DETECT */
    }
}

/**
 * @brief                        Mii bus read indication.
 * @details                      Called when information has been read out via MII interface.
 *                               Triggered by previous Eth_ReadMii call. Can directly be called
 *                               within Eth_ReadMii.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 * @param[in] RegVal             Value contained in the indexed register.
 *
 */
ETHTRCV_TEXT_SECTION void EthTrcv_ReadMiiIndication(uint8  CtrlIdx,
                                                    uint8  TrcvIdx,
                                                    uint8  RegIdx,
                                                    uint16 RegVal)
{
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    /* Empty stub function */
    (void)CtrlIdx;
    (void)TrcvIdx;
    (void)RegIdx;
    (void)RegVal;
    /* PRQA S 3119 -- */
}

/**
 * @brief                        Mii bus write indication.
 * @details                      Called when information has been written via MII interface.
 *                               Triggered by previous Eth_WriteMii call. Can directly be called
 *                               within Eth_WriteMii.
 *
 * @param[in] CtrlIdx            Index of the controller within the context of the Ethernet Driver.
 * @param[in] TrcvIdx            Index of the transceiver on the MII.
 * @param[in] RegIdx             Index of the transceiver register on the MII.
 *
 */
void EthTrcv_WriteMiiIndication(uint8 CtrlIdx, uint8 TrcvIdx, uint8 RegIdx)
{
    /* PRQA S 3119 ++
       3119: This statement has no side-effect - it can be removed.
       REASON:These parameters are not used yet,the codes are designed to avoid warnings
    */
    /* Empty stub function */
    (void)CtrlIdx;
    (void)TrcvIdx;
    (void)RegIdx;
    /* PRQA S 3119 -- */
}

#define ETHTRCV_STOP_SEC_CODE
#include "EthTrcv_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @}*/
