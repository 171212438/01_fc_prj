/**
 *   @file    CDD_DMA.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR DMA - DMA Driver source file.
 *   @details DMA driver source file, containing the Autosar API specification
 * and other variables and functions that are exported by the DMA driver.
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
*   0.1.0       12/06/2023    QXW0099       N/A          DMA Initial Version
*   0.2.0       18/09/2023    QXW0099       N/A          DMA Multicore Version
*   0.3.0       12/10/2023    QXW0099       N/A          Add multicore support
*   0.4.0       12/10/2023    QXW0099       N/A          Change function names
*   0.5.0       16/01/2024    QXW0099       N/A          Update version
*   0.6.0       18/03/2024    QXW0099       N/A          Add FC7240
*   0.9.0       23/12/2024    QXW0099       N/A          Add FC7300DQ MCU
==================================================================================================*/
/* PRQA S 5087 EOF
 * This attribute syntax is a language extension.
 * Reason: #include statements are not preceded only by preprocessor directives
 * or comments, in this case, the defined MACRO used to select different
 * parameter or code properties in MemMap.h
 */

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
#include "CDD_Dma.h"
#include "Dma_LLD.h"
#if ((DEVICE_SERIES == FC7300F8MDTxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7300F4MDSxxxxT1B) || \
     (DEVICE_SERIES == FC7300F4MDDxxxxT1C))
#include "FC7300_Dma_Reg.h"
#elif (DEVICE_SERIES == FC7240F2MDSxxxxT1A)
#include "FC7240_Dma_Reg.h"
#elif (DEVICE_SERIES == FC7300F8MDQxxxxT1B)
#include "FC7300GT_Dma_Reg.h"
#else
#error "No valid platform selected!"
#endif
#include "SchM_Dma.h"
#if (DMA_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

/*==================================================================================================
 *                                      SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* PRQA S 791 ++ #Misra-C:2012 Rule-5.4 Macro identifiers shall be distinct
 * Reason: These macros are distinct */
#define DMA_VENDOR_ID_C                   174

#define DMA_AR_RELEASE_MAJOR_VERSION_C    4
#define DMA_AR_RELEASE_MINOR_VERSION_C    6
#define DMA_AR_RELEASE_REVISION_VERSION_C 0
#define DMA_SW_MAJOR_VERSION_C            1
#define DMA_SW_MINOR_VERSION_C            5
#define DMA_SW_PATCH_VERSION_C            1
/* PRQA S 791-- */
/*==================================================================================================
 *                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
 *                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
 *                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
 *                                        GLOBAL VARIABLES
==================================================================================================*/

#define DMA_START_SEC_VAR_INIT_UNSPECIFIED
#include "Dma_MemMap.h"

/**
 * @brief          Global variable (pointer) used for storing the DMA driver
 * configuration data.
 */
DMA_DATA_SECTION const Dma_ConfigType *Dma_pConfig[DMA_ECUC_PARTITIONS_MAX] = { NULL_PTR };

#if (DMA_INSTANCE_COUNT == 1)
DMA_DATA_SECTION uint8 Dma_au8DumoUsedStatus[DMA_DUMO_COUNT] = { DMA_CHANNEL_INVALID,
                                                                 DMA_CHANNEL_INVALID,
                                                                 DMA_CHANNEL_INVALID,
                                                                 DMA_CHANNEL_INVALID };
#endif

#define DMA_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Dma_MemMap.h"

#define DMA_START_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Dma_MemMap.h"

/**
 * @brief          Global variable (pointer) used for containing the current DMA
 * driver state.
 */
/* PRQA S 3408, 1514 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be
 * visible when an object or function with external linkage is defined.
 *                      #Misra-C:2012 Rule-8.7 Functions and objects should not
 * be defined with external linkage if they are referenced in only one
 * translation unit. Reason: The variable does not have external linkage */
DMA_DATA_SECTION Dma_DriverStateType Dma_DriverStatus[DMA_ECUC_PARTITIONS_MAX];
/* PRQA S 3408, 1514 -- */

#define DMA_STOP_SEC_VAR_NO_INIT_SHAREABLE_NO_CACHEABLE
#include "Dma_MemMap.h"

#if (DMA_INSTANCE_COUNT == 2)
#define DMA_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Dma_MemMap.h"

/**
 * @brief          Global variable (pointer) used for storing the usage of DMA
 * Dumo register.
 */

DMA_DATA_SECTION uint8 Dma_au8DumoUsedStatus[DMA_INSTANCE_COUNT][DMA_DUMO_COUNT] = {
    { DMA_CHANNEL_INVALID, DMA_CHANNEL_INVALID, DMA_CHANNEL_INVALID, DMA_CHANNEL_INVALID },
    { DMA_CHANNEL_INVALID, DMA_CHANNEL_INVALID, DMA_CHANNEL_INVALID, DMA_CHANNEL_INVALID }
};

#define DMA_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Dma_MemMap.h"
#endif /* DMA_INSTANCE_COUNT == 2 */

/*==================================================================================================
 *                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
 *                                        LOCAL FUNCTIONS
==================================================================================================*/
#define DMA_START_SEC_CODE
#include "Dma_MemMap.h"

#if (DMA_DEV_ERROR_DETECT == STD_ON)

/**
 * @brief      This function validates the global call
 * @details    This service is a non reentrant function used for validating the
 * calls for Dma_Init.
 *
 * @param[in]  u8PartitionId The partition id of the caller
 * @param[in]  u8ServiceId The service id of the caller function
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  DMA_ValidateGlobalCall_Activity
 *
 * */
LOCAL_INLINE Std_ReturnType Dma_ValidateGlobalCall(uint8 u8PartitionId, uint8 u8ServiceId)
{
  VAR(Std_ReturnType, AUTOMATIC) valid = (Std_ReturnType)E_OK;

  if (DMA_INIT_ID_U8 == u8ServiceId) /* If caller is the initialization function, ok */
  {
    if (Dma_DriverStatus[u8PartitionId] == DMA_INITIALIZED) {
      valid = (Std_ReturnType)E_NOT_OK;
      (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)DMA_INDEX(u8PartitionId), (uint8)u8ServiceId, DMA_E_ALREADY_INITIALIZED_U8);
    }
  } else if (DMA_DEINIT_ID_U8 == u8ServiceId) {
    if (Dma_DriverStatus[u8PartitionId] != DMA_INITIALIZED) {
      valid = (Std_ReturnType)E_NOT_OK;
      (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)DMA_INDEX(u8PartitionId), (uint8)u8ServiceId, DMA_E_UNINIT_U8);
    }
  } else {
    /* todo */
  }

  return valid;
}

/**
 * @brief       This function validate the initialization pointer.
 *
 * @param[in]   u8PartitionId The partition id of the caller
 * @param[in]   pConfigPtr        Pointer to a selected configuration structure.
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 *
 * */
LOCAL_INLINE Std_ReturnType Dma_ValidatePtrInit(uint8 u8PartitionId, const Dma_ConfigType *pConfigPtr)
{
  VAR(Std_ReturnType, AUTOMATIC) valid = (Std_ReturnType)E_OK;

  #if (DMA_PRECOMPILE_SUPPORT == STD_OFF)
  if ((u8PartitionId >= DMA_ECUC_PARTITIONS_MAX) || (FALSE == pConfigPtr->DmaPartitionsUsed[u8PartitionId])) {
    valid = (Std_ReturnType)E_NOT_OK;
    (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)DMA_INDEX(u8PartitionId), (uint8)DMA_INIT_ID_U8, (uint8)DMA_E_PARTITION_MAPPING);
  } else if (NULL_PTR == pConfigPtr) {
    valid = (Std_ReturnType)E_NOT_OK;
    (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)DMA_INDEX(u8PartitionId), (uint8)DMA_INIT_ID_U8, (uint8)DMA_E_INIT_FAILED_U8);
  } else {
    /* do nothing */
  }
  #elif (DMA_PRECOMPILE_SUPPORT == STD_ON)
  if ((u8PartitionId >= (uint8)DMA_ECUC_PARTITIONS_MAX) || ((boolean)FALSE == Dma_Config.DmaPartitionsUsed[u8PartitionId])) {
    valid = (Std_ReturnType)E_NOT_OK;
    (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)u8PartitionId, (uint8)DMA_INIT_ID_U8, (uint8)DMA_E_PARTITION_MAPPING);
  } else {
    if (NULL_PTR != pConfigPtr) {
      valid = (Std_ReturnType)E_NOT_OK;
      (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)DMA_INDEX(u8PartitionId), (uint8)DMA_INIT_ID_U8, (uint8)DMA_E_INIT_FAILED_U8);
    }
  }
  #endif

  return valid;
}
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON) */

#if (DMA_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief      This function validates the channel index
 * @details    This service is a non reentrant function used for validating the
 * calls for Dma_Init.
 *
 * @param[in]  u8PartitionId The partition id of the caller
 * @param[in]  u8Channel Channel id
 * @param[in]  u8ServiceId The service id of the caller function
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 * @implements  DMA_ValidateGlobalCall_Activity
 *
 * */
LOCAL_INLINE Std_ReturnType Dma_ValidateChannelIndex(uint8 u8InstanceNum,
                                                     uint8 u8PartitionId,
                                                     uint8 u8Channel,
                                                     uint8 u8ServiceId)
{
    VAR(Std_ReturnType, AUTOMATIC) valid = (Std_ReturnType)E_OK;

    if ((u8PartitionId >= (uint8)DMA_ECUC_PARTITIONS_MAX) ||
        ((boolean)FALSE == Dma_Config.DmaPartitionsUsed[u8PartitionId]))
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)u8InstanceNum,
                              (uint8)u8ServiceId,
                              (uint8)DMA_E_PARTITION_MAPPING);
    }
    else if (Dma_DriverStatus[u8PartitionId] != DMA_INITIALIZED)
    {
        valid = (Std_ReturnType)E_NOT_OK;
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)u8InstanceNum,
                              (uint8)u8ServiceId,
                              (uint8)DMA_E_UNINIT_U8);
    }
    else
    {
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
        /* PRQA S 2995, 2991 ++
            #Misra-C:2012 Rule-2.2: There shall be no dead code.
            #Misra-C:2012 Rule-14.3: Controlling expressions shall not be invariant.
            REASON:It's not an always true condition.
        */
        if (Dma_pConfig[u8PartitionId]->pDmaCoreConfig[u8PartitionId] != NULL_PTR)
        /* PRQA S 2995, 2991 -- */
        {
            if (u8PartitionId != Dma_pConfig[u8PartitionId]
                                     ->pDmaCoreConfig[u8PartitionId]
                                     ->pDma_pChConfig[u8Channel]
                                     .u8PartitionId)
            {
                valid = (Std_ReturnType)E_NOT_OK;
                (void)Det_ReportError((uint16)DMA_MODULE_ID,
                                      (uint8)DMA_INDEX(u8PartitionId),
                                      (uint8)u8ServiceId,
                                      DMA_E_INVALID_CHANNEL_U8);
            }
            if (u8InstanceNum !=
                (uint8)Dma_pConfig[u8PartitionId]->pDmaCoreConfig[u8PartitionId]->DmaInstanceNumber)
            {
                valid = (Std_ReturnType)E_NOT_OK;
                (void)Det_ReportError((uint16)DMA_MODULE_ID,
                                      (uint8)DMA_INDEX(u8PartitionId),
                                      (uint8)u8ServiceId,
                                      DMA_E_INVALID_CHANNEL_U8);
            }
            if (u8Channel >= (uint8)DMA_MAX_CHANNEL)
            {
                valid = (Std_ReturnType)E_NOT_OK;
                (void)Det_ReportError((uint16)DMA_MODULE_ID,
                                      (uint8)DMA_INDEX(u8PartitionId),
                                      (uint8)u8ServiceId,
                                      DMA_E_INVALID_CHANNEL_U8);
            }
        }
        else
        {
            valid = (Std_ReturnType)E_NOT_OK;
        }
#else
        if (u8Channel >= (uint8)DMA_MAX_CHANNEL)
        {
            valid = (Std_ReturnType)E_NOT_OK;
            (void)Det_ReportError((uint16)DMA_MODULE_ID,
                                  (uint8)DMA_INDEX(u8PartitionId),
                                  (uint8)u8ServiceId,
                                  DMA_E_INVALID_CHANNEL_U8);
            (void)u8InstanceNum;
        }
#endif
    }

    return valid;
}
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON)*/

#if (DMA_DEV_ERROR_DETECT == STD_ON)
/**
 * @brief       This function validates the versionInfo parameter
 *
 * @param[in]   pInput  Pointer input to be checked
 * @param[in]   u8ServiceId The service id of the caller function
 *
 *
 * @return      Std_ReturnType. The validity of the function call
 * @retval      E_OK      The function call is valid
 * @retval      E_NOT_OK The function call is invalid
 *
 *
 * */
LOCAL_INLINE Std_ReturnType Dma_ValidateCommonPointer(Dma_InstanceType eDma_Instance,
                                                      const void      *pInput,
                                                      uint8            u8ServiceId)
{
    VAR(Std_ReturnType, AUTOMATIC) valid = (Std_ReturnType)E_OK;

    if (NULL_PTR == pInput)
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              u8ServiceId,
                              DMA_E_PARAM_VINFO_U8);
        valid = (Std_ReturnType)E_NOT_OK;
    }
    return valid;
}
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON) */

/*==================================================================================================
 *                                        GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief        Function that initializes the DMA module.
* @details      This service is a non reentrant function for a specific core.
                This function sets the DMACR register with the value of
"pConfigPtr" and set
*               the channel's priority, ECP and DPA
*
* @param[in]    pConfigPtr - pointer to DMA configuration structure
*
* @return       void
* [SWDESG_DMA_003]
*/
DMA_TEXT_SECTION void Dma_Init(const Dma_ConfigType *pConfigPtr)
{
  uint8 u8PartitionId = DMA_GET_CPU_ID();
  Dma_InstanceType TargetInstance;
#if (DMA_ECUC_PARTITIONS_MAX == 3u) || (DMA_ECUC_PARTITIONS_MAX == 4u) || ((DMA_ECUC_PARTITIONS_MAX == 2u) && (DMA_INSTANCE_COUNT == 1u))
  uint32 u32Timeout = 15000000U;
#endif

#if (DMA_DEV_ERROR_DETECT == STD_ON)
  if ((Std_ReturnType)E_OK == Dma_ValidateGlobalCall(u8PartitionId, DMA_INIT_ID_U8)) {
    if ((Std_ReturnType)E_OK == Dma_ValidatePtrInit(u8PartitionId, pConfigPtr)) {
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
      TargetInstance = DMA_INDEX(u8PartitionId);
#if (DMA_PRECOMPILE_SUPPORT == STD_ON)
      Dma_pConfig[u8PartitionId] = &Dma_Config;
      /* PRQA S 3119 ++
        3119:This statement has no side-effect - it can be removed..
        REASON: Avoid warning for this unused parameters.
      */
      (void)pConfigPtr;
/* PRQA S 3119 -- */
#else
  Dma_pConfig[u8PartitionId] = pConfigPtr;
#endif /* DMA_PRECOMPILE_SUPPORT */
#if (DMA_ECUC_PARTITIONS_MAX == 3u)
      if (DMA_SLAVECORE_INSTANCE1 == u8PartitionId) {
        /* Slave core must wait for master core initialized */
        while ((Dma_DriverStatus[DMA_MASTERCORE_INSTANCE1] != DMA_INITIALIZED) && (u32Timeout != 0U)) {
          u32Timeout--;
        }
      }
      if ((uint32)0UL == u32Timeout) {
  /* [SWDESG_DMA_002] */
  #if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
        (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)DMA_INDEX(u8PartitionId), (uint8)DMA_INIT_ID_U8, (uint8)DMA_E_INIT_FAILED_U8);
  #endif
      } else {
#elif (DMA_ECUC_PARTITIONS_MAX == 4u)
  if (DMA_SLAVECORE_INSTANCE0 == u8PartitionId) {
    /* Slave core must wait for master core initialized */
    while ((Dma_DriverStatus[DMA_MASTERCORE_INSTANCE0] != DMA_INITIALIZED) && (u32Timeout != 0U)) {
      u32Timeout--;
    }
  } else if (DMA_SLAVECORE_INSTANCE1 == u8PartitionId) {
    /* Slave core must wait for master core initialized */
    while ((Dma_DriverStatus[DMA_MASTERCORE_INSTANCE1] != DMA_INITIALIZED) && (u32Timeout != 0U)) {
      u32Timeout--;
    }
  } else {
    /*  Nothing todo */
  }

  if ((uint32)0UL == u32Timeout) {
  /* [SWDESG_DMA_001] */
  #if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)DMA_INDEX(u8PartitionId), (uint8)DMA_INIT_ID_U8, (uint8)DMA_E_INIT_FAILED_U8);
  #endif
  } else {
#elif ((DMA_ECUC_PARTITIONS_MAX == 2u) && (DMA_INSTANCE_COUNT == 1u))
  if (DMA_SLAVECORE_INSTANCE0 == u8PartitionId) {
    /* Slave core must wait for master core initialized */
    while ((Dma_DriverStatus[DMA_MASTERCORE_INSTANCE0] != DMA_INITIALIZED) && (u32Timeout != 0U)) {
      u32Timeout--;
    }
  }

  if ((uint32)0UL == u32Timeout) {
  /* [SWDESG_DMA_001] */
  #if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    (void)Det_ReportError((uint16)DMA_MODULE_ID, (uint8)DMA_INDEX(u8PartitionId), (uint8)DMA_INIT_ID_U8, (uint8)DMA_E_INIT_FAILED_U8);
  #endif
  } else {
#endif
        /* Init DMA HW module registers */
        Dma_LLD_Init(TargetInstance, Dma_pConfig[u8PartitionId]);
        Dma_DriverStatus[u8PartitionId] = DMA_INITIALIZED;
#if (DMA_ECUC_PARTITIONS_MAX == 3u) || (DMA_ECUC_PARTITIONS_MAX == 4u) || ((DMA_ECUC_PARTITIONS_MAX == 2u) && (DMA_INSTANCE_COUNT == 1u))
      }
#endif
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
  }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

#if (DMA_DEINIT_API == STD_ON)
/**
 * @brief          This function de-initializes the DMA driver.
 * @details        This service is a non reentrant function for a specific core.
 *                 Returns all underlying hardware to a state comparable to
 * their power on reset state, and de-initialize the DMA driver.
 *
 * @return         void
 * @implements     DMA_DeInit_Activity
 * [SWDESG_DMA_005]
 */
DMA_TEXT_SECTION void Dma_DeInit(void)
{
    uint8            u8PartitionId = DMA_GET_CPU_ID();
    Dma_InstanceType TargetInstance;
#if (DMA_ECUC_PARTITIONS_MAX == 3u) || (DMA_ECUC_PARTITIONS_MAX == 4u)
    uint32 u32Timeout = 15000000U;
#endif

#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    if ((u8PartitionId >= (uint8)DMA_ECUC_PARTITIONS_MAX) ||
        ((boolean)FALSE == Dma_Config.DmaPartitionsUsed[u8PartitionId]))
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              u8PartitionId,
                              (uint8)DMA_DEINIT_ID_U8,
                              (uint8)DMA_E_PARTITION_MAPPING);
    }
    else
    {
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
        /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid
         * pointer value. Reason: there is no risk due to the range is checked before. */
        TargetInstance = DMA_INDEX(u8PartitionId);
        /* PRQA S 2842 -- */
#if (DMA_DEV_ERROR_DETECT == STD_ON)
        /* Validate call of function */
        if ((Std_ReturnType)E_OK == Dma_ValidateGlobalCall(u8PartitionId, DMA_DEINIT_ID_U8))
        {
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
            /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid pointer
             * value. Reason: there is no risk due to the range is checked before. */
            /* Set the global configuration pointer to NULL */
            Dma_pConfig[u8PartitionId] = NULL_PTR;
            /* PRQA S 2842 -- */
            SchM_Enter_Dma_DMA_EXCLUSIVE_AREA_00();
#if (DMA_INSTANCE_COUNT == 2u)
            if ((u8PartitionId == DMA_MASTERCORE_INSTANCE0) ||
                (u8PartitionId == DMA_MASTERCORE_INSTANCE1))
#endif
            {
                Dma_LLD_DeInit(TargetInstance);
                /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid
                 * pointer value. Reason: there is no risk due to the range is checked before. */
                Dma_DriverStatus[u8PartitionId] = DMA_NOT_INITIALIZED;
                /* PRQA S 2842 -- */
            }
#if (DMA_ECUC_PARTITIONS_MAX == 3u)
            else
            {
                /* PRQA S 2995 ++
                   #Misra-C:2012 Rule-2.2: There shall be no dead code.
                   REASON: It is for redundant check. */
                if (DMA_SLAVECORE_INSTANCE1 == u8PartitionId)
                /* PRQA S 2995 -- */
                {
                    /* PRQA S 2872 ++
                      #Misra-C:2012 Dir-4.1: This loop, if entered, will never terminate.
                      REASON: It will be terminated when master core is deinitialized.
                    */
                    while ((Dma_DriverStatus[DMA_MASTERCORE_INSTANCE1] != DMA_NOT_INITIALIZED) &&
                           (u32Timeout != 0U))
                    {
                        /* Wait master core deinit complete */
                        u32Timeout--;
                    }
                }
                if ((uint32)0UL == u32Timeout)
                {
/* [SWDESG_DMA_004] */
#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
                    (void)Det_ReportError((uint16)DMA_MODULE_ID,
                                          (uint8)DMA_INDEX(u8PartitionId),
                                          (uint8)DMA_DEINIT_ID_U8,
                                          (uint8)DMA_E_DEINIT_FAILED_U8);
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
                }
                /* PRQA S 2872 -- */
                /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid
                 * pointer value. Reason: there is no risk due to the range is checked before. */
                Dma_DriverStatus[u8PartitionId] = DMA_NOT_INITIALIZED;
                /* PRQA S 2842 -- */
            }
#elif (DMA_ECUC_PARTITIONS_MAX == 4u)
    else
    {
        if (DMA_SLAVECORE_INSTANCE0 == u8PartitionId)
        {
            /* Slave core must wait for master core initialized */
            while ((Dma_DriverStatus[DMA_MASTERCORE_INSTANCE0] != DMA_NOT_INITIALIZED) &&
                   (u32Timeout != 0U))
            {
                u32Timeout--;
            }
        }
        else
        {
            /* DMA_SLAVECORE_INSTANCE1 == u8PartitionId */
            /* Slave core must wait for master core initialized */
            while ((Dma_DriverStatus[DMA_MASTERCORE_INSTANCE1] != DMA_NOT_INITIALIZED) &&
                   (u32Timeout != 0U))
            {
                u32Timeout--;
            }
        }
        if ((uint32)0UL == u32Timeout)
        {
/* [SWDESG_DMA_004] */
#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
            (void)Det_ReportError((uint16)DMA_MODULE_ID,
                                  (uint8)DMA_INDEX(u8PartitionId),
                                  (uint8)DMA_DEINIT_ID_U8,
                                  (uint8)DMA_E_DEINIT_FAILED_U8);
#endif
        }
        /* PRQA S 2842 ++ #Misra-C:2012 Rule-18.1 Apparent: Dereference of an invalid
         * pointer value. Reason: there is no risk due to the range is checked before. */
        Dma_DriverStatus[u8PartitionId] = DMA_NOT_INITIALIZED;
        /* PRQA S 2842 -- */
    }
#endif
            SchM_Exit_Dma_DMA_EXCLUSIVE_AREA_00();
#if (DMA_DEV_ERROR_DETECT == STD_ON)
        }
#endif
#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    }
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
}
#endif
#if (DMA_GET_VERSION_INFO_API == STD_ON)

/**
 * @brief   This service returns the version information of this module.
 * @details This  service is Non reentrant and returns the version information
 * of this module. The version information includes:
 *          - Module Id
 *          - Vendor Id
 *          - Vendor specific version numbers
 *          If source code for caller and callee of this function is available
 * this function should be realized as a macro. The macro should be defined in
 * the modules header file.
 *
 * @param[out]    pVersioninfo      Pointer to location to store version info
 *
 * @return void
 *
 * @api
 *
 * @implements DMA_GetVersionInfo_Activity
 * [SWDESG_DMA_007]
 */
DMA_TEXT_SECTION void Dma_GetVersionInfo(Std_VersionInfoType *pVersioninfo)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    if ((Std_ReturnType)E_OK ==
        Dma_ValidateCommonPointer(DMA_INSTANCE_0, pVersioninfo, DMA_GETVERSIONINFO_ID_U8))
    {
        /* [SWDESG_DMA_006] */
#endif
        (pVersioninfo)->vendorID         = (uint16)DMA_VENDOR_ID;
        (pVersioninfo)->moduleID         = (uint16)DMA_MODULE_ID;
        (pVersioninfo)->sw_major_version = (uint8)DMA_SW_MAJOR_VERSION;
        (pVersioninfo)->sw_minor_version = (uint8)DMA_SW_MINOR_VERSION;
        (pVersioninfo)->sw_patch_version = (uint8)DMA_SW_PATCH_VERSION;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif
}
#endif /* DMA_GET_VERSION_INFO_API == STD_ON */

#if (DMA_CANCEL_TransferAPI == STD_ON)
/**
 * @brief       This function is used for cancel the DMA operation
 * @details     This function is used for cancel the DMA operation
 *
 * @param[in]   eDma_Instance - Dma instance to be operated
 *
 * @param[out]
 * @return      void
 *
 * @api
 * @implements     Dma_CancelTransfer
 * [SWDESG_DMA_008]
 */
DMA_TEXT_SECTION Std_ReturnType Dma_CancelTransfer(const Dma_InstanceType eDma_Instance)
{
    Std_ReturnType ret = E_OK;
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
    uint8            u8PartitionId = DMA_GET_CPU_ID();
    Dma_InstanceType TargetInstance;
#endif

#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    if ((u8PartitionId >= (uint8)DMA_ECUC_PARTITIONS_MAX) ||
        ((boolean)FALSE == Dma_Config.DmaPartitionsUsed[u8PartitionId]))
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              (uint8)DMA_CANCEL_TRANSFER_ID_U8,
                              (uint8)DMA_E_PARTITION_MAPPING);
    }
    else if (Dma_DriverStatus[u8PartitionId] != DMA_INITIALIZED)
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              (uint8)DMA_CANCEL_TRANSFER_ID_U8,
                              (uint8)DMA_E_UNINIT_U8);
    }
    else
    {
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
        TargetInstance = DMA_INDEX(u8PartitionId);
        if (eDma_Instance == TargetInstance)
#endif
        {
            ret = Dma_LLD_CancelTransfer(eDma_Instance);
        }
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
        else
        {
            ret = E_NOT_OK;
        }
#endif
#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    }
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
    return ret;
}
#endif /* DMA_CANCEL_TransferAPI == STD_ON */

#if (DMA_ERROR_CANCEL_TransferAPI == STD_ON)
/**
 * @brief       This function is used for cancel the DMA operation with an error
 * flag
 * @details     This function is used for cancel the DMA operation with an error
 * flag
 *
 * @param[in]   eDma_Instance - Dma instance to be operated
 *
 * @param[out]
 * @return      void
 *
 * @api
 * @implements     Dma_ErrorCancelTransfer
 * [SWDESG_DMA_009]
 */
DMA_TEXT_SECTION Std_ReturnType Dma_ErrorCancelTransfer(const Dma_InstanceType eDma_Instance)
{
    Std_ReturnType ret = E_OK;
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
    uint8            u8PartitionId = DMA_GET_CPU_ID();
    Dma_InstanceType TargetInstance;
#endif

#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    if ((u8PartitionId >= (uint8)DMA_ECUC_PARTITIONS_MAX) ||
        ((boolean)FALSE == Dma_Config.DmaPartitionsUsed[u8PartitionId]))
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              (uint8)DMA_ERR_CANCEL_TRANSFER_ID_U8,
                              (uint8)DMA_E_PARTITION_MAPPING);
    }
    else if (Dma_DriverStatus[u8PartitionId] != DMA_INITIALIZED)
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              (uint8)DMA_ERR_CANCEL_TRANSFER_ID_U8,
                              (uint8)DMA_E_UNINIT_U8);
    }
    else
    {
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
        TargetInstance = DMA_INDEX(u8PartitionId);
        if (eDma_Instance == TargetInstance)
#endif /* DMA_MULTICORE_ERRDETECT == STD_ON */
        {
            ret = Dma_LLD_ErrorCancelTransfer(eDma_Instance);
        }
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
        else
        {
            ret = E_NOT_OK;
        }
#endif /* DMA_MULTICORE_ERRDETECT == STD_ON */
#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    }
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
    return ret;
}
#endif /* DMA_ERROR_CANCEL_TransferAPI == STD_ON */

#if (DMA_HALT_API == STD_ON)
/**
 * @brief       Halt the DMA
 * @details     This function is used to half the DMA operations
 *
 * @param[in]   eDma_Instance - Dma instance to be operated
 *
 * @param[out]
 * @return      void
 *
 * @api
 * @implements     Dma_Halt
 * [SWDESG_DMA_010]
 */
DMA_TEXT_SECTION void Dma_Halt(const Dma_InstanceType eDma_Instance)
{
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
    uint8            u8PartitionId = DMA_GET_CPU_ID();
    Dma_InstanceType TargetInstance;
#endif

#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    if ((u8PartitionId >= (uint8)DMA_ECUC_PARTITIONS_MAX) ||
        ((boolean)FALSE == Dma_Config.DmaPartitionsUsed[u8PartitionId]))
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              (uint8)DMA_HALT_ID_U8,
                              (uint8)DMA_E_PARTITION_MAPPING);
    }
    else if (Dma_DriverStatus[u8PartitionId] != DMA_INITIALIZED)
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              (uint8)DMA_HALT_ID_U8,
                              (uint8)DMA_E_UNINIT_U8);
    }
    else
    {
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
        TargetInstance = DMA_INDEX(u8PartitionId);
        if (eDma_Instance == TargetInstance)
#endif /* DMA_MULTICORE_ERRDETECT == STD_ON */
        {
            Dma_LLD_Halt(eDma_Instance);
        }
#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    }
#endif
}

/**
 * @brief       Resume the DMA
 * @details     This function is used to resume  the DMA operations
 *
 * @param[in]   eDma_Instance - Dma instance to be operated
 *
 * @param[out]
 * @return      void
 *
 * @api
 * @implements     Dma_Resume
 * [SWDESG_DMA_011]
 */
DMA_TEXT_SECTION void Dma_Resume(const Dma_InstanceType eDma_Instance)
{
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
    uint8            u8PartitionId = DMA_GET_CPU_ID();
    Dma_InstanceType TargetInstance;
#endif

#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    if ((u8PartitionId >= (uint8)DMA_ECUC_PARTITIONS_MAX) ||
        ((boolean)FALSE == Dma_Config.DmaPartitionsUsed[u8PartitionId]))
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              (uint8)DMA_RESUME_ID_U8,
                              (uint8)DMA_E_PARTITION_MAPPING);
    }
    else if (Dma_DriverStatus[u8PartitionId] != DMA_INITIALIZED)
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)eDma_Instance,
                              (uint8)DMA_RESUME_ID_U8,
                              (uint8)DMA_E_UNINIT_U8);
    }
    else
    {
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON && (DMA_MULTICORE_ERRDETECT == STD_ON) */
#if (DMA_MULTICORE_ERRDETECT == STD_ON)
        TargetInstance = DMA_INDEX(u8PartitionId);
        if (eDma_Instance == TargetInstance)
#endif /* DMA_MULTICORE_ERRDETECT == STD_ON */
        {
            Dma_LLD_Resume(eDma_Instance);
        }
#if ((DMA_DEV_ERROR_DETECT == STD_ON) && (DMA_MULTICORE_ERRDETECT == STD_ON))
    }
#endif
}
#endif /* DMA_HALT_API == STD_ON */

/**
 * @brief       This function configures a DMA Channel
 *
 * @details     This function is reentrant and configures the specified DMA
 * channel
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   pChannelConfig- Pointer to the channel's descriptor attributes
 *
 * @return  Std_ReturnType. Return E_OK if no parameters error, else return
 * E_NOT_OK.
 *
 * @api
 *
 * @pre Dma_Init must be called before.
 * @implements DMA_ConfigChannel_Activity
 * [SWDESG_DMA_014]
 * */
DMA_TEXT_SECTION Std_ReturnType Dma_ConfigChannel(Dma_InstanceType       eDma_Instance,
                                                  const uint8            u8Dma_Channel,
                                                  const Dma_ChannelType *pChannelConfig)
{
    Std_ReturnType ret           = (Std_ReturnType)E_NOT_OK;
    uint8          u8PartitionId = DMA_GET_CPU_ID();

    if (Dma_DriverStatus[u8PartitionId] == DMA_INITIALIZED)
    {
#if (DMA_DEV_ERROR_DETECT == STD_ON)
        if ((Std_ReturnType)E_OK ==
            Dma_ValidateCommonPointer(eDma_Instance, (const void *)pChannelConfig, DMA_CONFIG_ID_U8))
        {
            /* [SWDESG_DMA_012] */
            if ((Std_ReturnType)E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                                                 u8PartitionId,
                                                                 u8Dma_Channel,
                                                                 DMA_CONFIG_ID_U8))
            {
                /* [SWDESG_DMA_013] */
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON */

                ret = Dma_LLD_InitChannelConfig(eDma_Instance, u8Dma_Channel, pChannelConfig);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
            }
        }
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON */
    }
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    else
    {
        (void)Det_ReportError((uint16)DMA_MODULE_ID,
                              (uint8)DMA_INDEX(u8PartitionId),
                              (uint8)DMA_CONFIG_ID_U8,
                              (uint8)DMA_E_UNINIT_U8);
    }
#endif
    return ret;
}

/*================================================================================================*/
/**
 * @brief   This function starts the specified DMA Channel with SW trigger
 *
 * @details This function is reentrant and starts the specified DMA Channel with
 * SW trigger
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 *
 * @return   void
 *
 * @api
 *
 * @pre
 * @implements Dma_StartChannel_Activity
 * [SWDESG_DMA_018]
 * */
DMA_TEXT_SECTION void Dma_StartChannel(Dma_InstanceType eDma_Instance, const uint8 u8Dma_Channel)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK ==
        Dma_ValidateChannelIndex((uint8)eDma_Instance, u8PartitionId, u8Dma_Channel, DMA_START_CH_ID_U8))
    {
        /* [SWDESG_DMA_017] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_StartChannel(eDma_Instance, u8Dma_Channel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/**
 * @brief   This function configures Inner linked DMA Channel, the linked
 * channel is triggered after the Inner counter exhaust
 *
 * @details This function is reentrant and configures the specified Inner linked
 * DMA channel. It only work normally when u16DmaOuterLoopCounter is > 1.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   u8Dma_TriggerChannel - Numeric identifier of the next DMA
 * channel
 *
 * @return   void
 *
 * @api
 *
 * @pre Dma_Init must be called before.
 * @implements DMA_SetInnerLinkChannel_Activity
 * [SWDESG_DMA_021]
 * */
DMA_TEXT_SECTION void Dma_SetInnerLinkChannel(Dma_InstanceType eDma_Instance,
                                              const uint8      u8Dma_Channel,
                                              const uint8      u8Dma_TriggerChannel)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if ((Std_ReturnType)E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                                         u8PartitionId,
                                                         u8Dma_Channel,
                                                         DMA_SET_INNER_CH_ID_U8))
    {
        /* [SWDESG_DMA_019] */
        if ((Std_ReturnType)E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                                             u8PartitionId,
                                                             u8Dma_TriggerChannel,
                                                             DMA_SET_INNER_CH_ID_U8))
        {
            /* [SWDESG_DMA_020] */
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON */
            Dma_LLD_SetInnerLinkChannel(eDma_Instance, u8Dma_Channel, u8Dma_TriggerChannel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON */
}

/**
 * @brief   This function configures outer linked DMA Channel, the linked
 * channel is triggered after the outer counter exhaust
 *
 * @details This function is reentrant and configures the specified Inner linked
 * DMA channel
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   u8Dma_TriggerChannel - Numeric identifier of the next DMA
 * channel
 * @param[in]   pChannelConfig - Current channel config pointer
 *
 * @return   void
 *
 * @api
 *
 * @pre Dma_Init must be called before.
 * @implements DMA_SetOuterLinkChannel_Activity
 * [SWDESG_DMA_024]
 * */
DMA_TEXT_SECTION Std_ReturnType Dma_SetOuterLinkChannel(Dma_InstanceType       eDma_Instance,
                                                        const uint8            u8Dma_Channel,
                                                        const uint8            u8Dma_TriggerChannel,
                                                        const Dma_ChannelType *pChannelConfig)
{
    Std_ReturnType bRet = E_NOT_OK;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if ((Std_ReturnType)E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                                         u8PartitionId,
                                                         u8Dma_Channel,
                                                         DMA_SET_OUTER_CH_ID_U8))
    {
        /* [SWDESG_DMA_022] */
        if ((Std_ReturnType)E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                                             u8PartitionId,
                                                             u8Dma_TriggerChannel,
                                                             DMA_SET_OUTER_CH_ID_U8))
        {
            /* [SWDESG_DMA_023] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

            bRet = Dma_LLD_SetOuterLinkChannel(eDma_Instance,
                                               u8Dma_Channel,
                                               u8Dma_TriggerChannel,
                                               pChannelConfig);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

    return bRet;
}

/**
 * @brief   This function sets the priority for the specified DMA Channel
 *
 * @details This function is reentrant and sets the priority for the specified
 * DMA Channel. The higher the number, the higher the priority.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   u8Dma_Priority- Value for the priority
 *
 * @return   void
 *
 * @api
 *
 * @pre
 * @implements DMA_SetChannelPriority_Activity
 * [SWDESG_DMA_026]
 * */
DMA_TEXT_SECTION void Dma_SetChannelPriority(Dma_InstanceType eDma_Instance,
                                             const uint8      u8Dma_Channel,
                                             const uint8      u8Dma_Priority)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_PRIORITY_ID_U8))
    {
        /* [SWDESG_DMA_025] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetChannelPriority(eDma_Instance, u8Dma_Channel, u8Dma_Priority);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/**
 * @brief   This function sets the Inner loop offset and counter for the
 * specified DMA Channel
 *
 * @details This function sets the Inner loop offset and counter for the
 * specified DMA Channel
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   PConfig       - Pointer to the channel's Inner loop attributes
 *
 * @return   boolean
 * @return   TRUE the inner loop mapping is enabled, the setting is applied.
 * @return   FALSE the inner loop mapping is disabled, the setting is ignored.
 * @api
 *
 * @pre
 * @implements DMA_SetChannelLoopOffsetAndNBYTES_Activity
 * [SWDESG_DMA_029]
 * */
DMA_TEXT_SECTION boolean Dma_SetChannelLoopOffsetAndNBYTES(Dma_InstanceType       eDma_Instance,
                                                           const uint8            u8Dma_Channel,
                                                           const Dma_ChannelType *PConfig)
{
    boolean bret = FALSE;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_INNER_ATTR_ID_U8))
    {
        /* [SWDESG_DMA_027] */
        if (E_OK ==
            Dma_ValidateCommonPointer(eDma_Instance, (const void *)PConfig, DMA_SET_INNER_ATTR_ID_U8))
        {
            /* [SWDESG_DMA_028] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

            bret = Dma_LLD_SetChannelLoopOffsetAndNBYTES(eDma_Instance, u8Dma_Channel, PConfig);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
        }
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

    return bret;
}

/**
 * @brief   This function checks if the DMA transfer is completed
 *
 * @details This function is reentrant and checks if the DMA transfer is
 * completed
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 *
 * @return boolean. Return true if channel Completed.
 *
 * @api
 *
 * @pre
 * @implements Dma_CheckIfTransferCompleted_Activity
 * [SWDESG_DMA_031]
 * */
DMA_TEXT_SECTION boolean Dma_CheckIfTransferCompleted(Dma_InstanceType eDma_Instance,
                                                      uint8            u8Dma_Channel)
{
    boolean bRet = FALSE;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_TRANSF_COMPLETE_ID_U8))
    {
        /* [SWDESG_DMA_030] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        bRet = Dma_LLD_CheckIfCompleteFlag(eDma_Instance, u8Dma_Channel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

    return bRet;
}

/**
 * @brief   This function checks if a DMA transfer is active.
 *
 * @details This function is reentrant and checks if a DMA transfer is active.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 *
 * @return boolean. Return true if channel is in execution. Return false if
 * channel is in idle.
 *
 * @api
 *
 * @pre
 * @implements Dma_CheckIfTransferActive_Activity
 * [SWDESG_DMA_033]
 * */
DMA_TEXT_SECTION boolean Dma_CheckIfTransferActive(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel)
{
    boolean bRet = FALSE;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_TRANSF_ACTIVE_ID_U8))
    {
        /* [SWDESG_DMA_032] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        bRet = Dma_LLD_CheckIfActiveFlag(eDma_Instance, u8Dma_Channel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

    return bRet;
}

/*================================================================================================*/
/**
 * @brief    Set the address adjustment applied to the source address after
 * outer loop finished.
 * @details  Set the address adjustment applied to the source address after
 * outer loop finished.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   s32Slast - Adjustment value added to the source address at the
 * completion of the outer loop count.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_SetCfgSlast_Activity
 * [SWDESG_DMA_035]
 */
DMA_TEXT_SECTION void Dma_SetCfgSlast(Dma_InstanceType eDma_Instance,
                                      uint8            u8Dma_Channel,
                                      sint32           s32Slast)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_SLAST_ID_U8))
    {
        /* [SWDESG_DMA_034] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetSLAST(eDma_Instance, u8Dma_Channel, s32Slast);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    Set the source address of the DMA channel.
 * @details  Set the source address of the DMA channel.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   Saddr - Address to set in SADDR.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_SetCfgSaddr_Activity
 * [SWDESG_DMA_037]
 */
DMA_TEXT_SECTION void Dma_SetCfgSaddr(Dma_InstanceType eDma_Instance,
                                      uint8            u8Dma_Channel,
                                      uint32           u32Saddr)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_SADDR_ID_U8))
    {
        /* [SWDESG_DMA_036] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetSADDR(eDma_Instance, u8Dma_Channel, u32Saddr);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    Set the source data offset of the DMA channel.
 * @details  Set the source data offset of the DMA channel when one source read
 * is completed.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   s16Soff - Source address offset.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_CfgSetSoff_Activity
 * [SWDESG_DMA_039]
 */
DMA_TEXT_SECTION void Dma_SetCfgSoff(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, sint16 s16Soff)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK ==
        Dma_ValidateChannelIndex((uint8)eDma_Instance, u8PartitionId, u8Dma_Channel, DMA_SET_SOFF_ID_U8))
    {
        /* [SWDESG_DMA_038] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON && */

        Dma_LLD_SetSOFF(eDma_Instance, u8Dma_Channel, s16Soff);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    Set the address adjustment applied to the destination address after
 * outer loop finished.
 * @details  Set the address adjustment applied to the destination address after
 * outer loop finished.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   s32Dlast - Adjustment value added to the destination address at
 * the completion of the outer loop count.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_SetCfgDlast_Activity
 * [SWDESG_DMA_041]
 */
DMA_TEXT_SECTION void Dma_SetCfgDlast(Dma_InstanceType eDma_Instance,
                                      uint8            u8Dma_Channel,
                                      sint32           s32Dlast)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_DLAST_ID_U8))
    {
        /* [SWDESG_DMA_040] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetDLAST(eDma_Instance, u8Dma_Channel, s32Dlast);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    Set the destination address of the DMA channel.
 * @details  Set the destination address of the DMA channel.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   Daddr - Address to set in DADDR.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_SetCfgDaddr_Activity
 * [SWDESG_DMA_043]
 */
/** @violates @ref Dma_c_5 Violates MISRA 2004 Required Rule 8.10 could be made
 * static */
DMA_TEXT_SECTION void Dma_SetCfgDaddr(Dma_InstanceType eDma_Instance,
                                      uint8            u8Dma_Channel,
                                      uint32           u32Daddr)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_DADDR_ID_U8))
    {
        /* [SWDESG_DMA_042] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetDADDR(eDma_Instance, u8Dma_Channel, u32Daddr);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    Set the destination data offset of the DMA channel when one
 * destination write is completed.
 * @details  Set the destination data offset of the DMA channel when one
 * destination write is completed.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   s16Doff - destination address offset.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_SetCfgDoff_Activity
 * [SWDESG_DMA_045]
 */
DMA_TEXT_SECTION void Dma_SetCfgDoff(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel, sint16 s16Doff)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK ==
        Dma_ValidateChannelIndex((uint8)eDma_Instance, u8PartitionId, u8Dma_Channel, DMA_SET_DOFF_ID_U8))
    {
        /* [SWDESG_DMA_044] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetDOFF(eDma_Instance, u8Dma_Channel, s16Doff);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    Set the source address aligned modulo and source data size of the
 * DMA channel.
 * @details  Set the source address aligned modulo and source data size of the
 * DMA channel.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   u8SModulo - Source Address Modulo.
 * @param[in]   SSize - Source data transfer size.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_SetCfgSModuloAndSize_Activity
 * [SWDESG_DMA_047]
 */
DMA_TEXT_SECTION void Dma_SetCfgSModuloAndSize(Dma_InstanceType eDma_Instance,
                                               uint8            u8Dma_Channel,
                                               uint8            u8SModulo,
                                               Dma_TranSizeType eSSize)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_SMOD_SIZE_ID_U8))
    {
        /* [SWDESG_DMA_046] */
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetSModuloAndSize(eDma_Instance, u8Dma_Channel, u8SModulo, eSSize);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    Set the destination address aligned modulo and destination data
 * size of the DMA channel.
 * @details  Set the destination address aligned modulo and destination data
 * size of the DMA channel.
 * @param[in]   u8Dma_Channel - Numeric identifier of the DMA channel
 * @param[in]   u8DModulo - Dest Address Modulo.
 * @param[in]   DSize - Dest data transfer size.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_SetCfgDModuloAndSize_Activity
 * [SWDESG_DMA_049]
 */
DMA_TEXT_SECTION void Dma_SetCfgDModuloAndSize(Dma_InstanceType eDma_Instance,
                                               uint8            u8Dma_Channel,
                                               uint8            u8DModulo,
                                               Dma_TranSizeType eDSize)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_DMOD_SIZE_ID_U8))
    {
        /* [SWDESG_DMA_048] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetDModuloAndSize(eDma_Instance, u8Dma_Channel, u8DModulo, eDSize);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    This function is used for enabling the hardware request.
 * @details  This function is used for enabling the hardware request for a given
 *           DMA channel.
 * @param[in]   u8Dma_Channel - DMA Channel for hardware request enabling.
 *
 * @return   void.
 *
 * @api
 * @implements     Dma_EnableHwRequest_Activity
 * [SWDESG_DMA_051]
 */
DMA_TEXT_SECTION void Dma_EnableHwRequest(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_EN_HW_REQ_ID_U8))
    {
        /* [SWDESG_DMA_050] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_EnableHWRequest(eDma_Instance, u8Dma_Channel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    This function is used for disabling the hardware request.
 * @details  This function is used for disabling the hardware request for a
 * given DMA channel.
 * @param[in]   u8Dma_Channel - DMA Channel for hardware request enabling.
 *
 * @return    void.
 *
 * @api
 * @implements     Dma_DisableHwRequest_Activity
 * [SWDESG_DMA_053]
 */
DMA_TEXT_SECTION void Dma_DisableHwRequest(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_DIS_HW_REQ_ID_U8))
    {
        /* [SWDESG_DMA_052] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_DisableHWRequest(eDma_Instance, u8Dma_Channel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    This function enables the complete interrupts
 * @details  This function enables the interrupts when outer loop count
 * completes.
 * @param[in]   u8Dma_Channel - DMA Channel index.
 * @param[in]   bEnable - enable or disable the complete interrupt.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_SetCfgCompleteInterrupt_Activity
 * [SWDESG_DMA_016]
 */
/** @violates @ref Dma_c_5 Violates MISRA 2004 Required Rule 8.10 could be made
 * static */
DMA_TEXT_SECTION void Dma_SetCfgCompleteInterrupt(Dma_InstanceType eDma_Instance,
                                                  uint8            u8Dma_Channel,
                                                  boolean          bEnable)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_DONE_INT_ID_U8))
    {
        /* [SWDESG_DMA_015] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_SetCompleteInt(eDma_Instance, u8Dma_Channel, bEnable);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/
/**
 * @brief    This function is used for clearing the Channel Done flag.
 * @details  This function is used for clearing the Channel Done flag.
 * @param[in]   nChannel - Channel number for clearing DONE bit.
 *
 * @return    void.
 *
 * @api
 *
 * @implements     Dma_ClearDoneFlag_Activity
 * [SWDESG_DMA_057]
 */
DMA_TEXT_SECTION void Dma_ClearDoneFlag(Dma_InstanceType eDma_Instance, uint8 u8Dma_Channel)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_CLR_DONE_FLAG_ID_U8))
    {
        /* [SWDESG_DMA_056] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_ClearDoneFlag(eDma_Instance, u8Dma_Channel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/*================================================================================================*/

/**
 * @brief    This function is used for getting the begin outer counter for a
 * specified channel.
 * @details  This function is used for getting the begin outer counter for a
 * specified channel.
 * @param[in]   ChannelNumber - DMA Channel.
 *
 * @return   uint16. beginning outerloop counter.
 *
 * @api
 * @implements     Dma_GetBeginOuterLoopCounter_Activity
 * [SWDESG_DMA_059]
 */
DMA_TEXT_SECTION uint16 Dma_GetBeginOuterLoopCounter(Dma_InstanceType eDma_Instance,
                                                     uint8            u8Dma_Channel)
{
    uint16 u16counter = 0;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_GET_BEGIN_COUNTER_ID_U8))
    {
        /* [SWDESG_DMA_058] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        u16counter = Dma_LLD_GetBeginOuterLoopCounter(eDma_Instance, u8Dma_Channel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
    return u16counter;
}

/*================================================================================================*/

/**
 * @brief    This function is used for getting the current outer counter for a
 * specified channel.
 * @details  This function is used for getting the current outer counter for a
 * specified channel.
 * @param[in]   ChannelNumber - DMA Channel.
 *
 * @return   uint16. current outerloop counter.
 *
 * @api
 * @implements     Dma_GetCurrentOuterLoopCounter_Activity
 * [SWDESG_DMA_061]
 */
DMA_TEXT_SECTION uint16 Dma_GetCurrentOuterLoopCounter(Dma_InstanceType eDma_Instance,
                                                       uint8            u8Dma_Channel)
{
    uint16 u16counter = E_NOT_OK;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_GET_CURRENT_COUNTER_ID_U8))
    {
        /* [SWDESG_DMA_060] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        u16counter = Dma_LLD_GetCurrentOuterLoopCounter(eDma_Instance, u8Dma_Channel);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
    return u16counter;
}

/*================================================================================================*/
/**
 * @brief    This function is used for updating the outer count bits.
 * @details  This function is used for updating the outer count bits.
 * @param[in]   ChannelNumber - Dma Channel for updating the outer count.
 * @param[in]   u16Counter - Outerloop counter number
 *
 * @return   void
 *
 * @api
 * @implements     Dma_UpdateOuterLoopCounter_Activity
 * [SWDESG_DMA_063]
 */
DMA_TEXT_SECTION void Dma_UpdateOuterLoopCounter(Dma_InstanceType eDma_Instance,
                                                 uint8            u8Dma_Channel,
                                                 uint16           u16Counter)
{
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    uint8 u8PartitionId = DMA_GET_CPU_ID();

    if (E_OK == Dma_ValidateChannelIndex((uint8)eDma_Instance,
                                         u8PartitionId,
                                         u8Dma_Channel,
                                         DMA_SET_OUTER_COUNTER_ID_U8))
    {
        /* [SWDESG_DMA_062] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */

        Dma_LLD_UpdateOuterLoopCounter(eDma_Instance, u8Dma_Channel, u16Counter);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
}

/**
 * @brief   This function calculate the last offset of source
 * @details This function calculate the last offset of source,
 *          and the last offset value will be returned through input parameters
 * s32SrcLastOffset. This function is only used to calculate the last offset to
 * loop back to origin start address when transfer finished.
 * @param[in]     PConfig              Pointer to the channel's Inner loop
 * attributes
 * @param[in]     s32SrcLastOffset     Pointer to the address used to store the
 * SrcLastOffset
 *
 * @return  Std_ReturnType. Whether calculate are finished.
 *
 * @api
 *
 * @pre
 * @implements DMA_CalculateSrcChannelLastOffset_Activity
 * [SWDESG_DMA_065]
 * */
DMA_TEXT_SECTION Std_ReturnType Dma_CalculateSrcChannelLastOffset(const Dma_ChannelType *PConfig,
                                                                  sint32 *s32SrcLastOffset)
{
    Std_ReturnType ret = E_NOT_OK;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    /* PRQA S 3415 ++ #Misra-C:2012 Rule-13.5 The right hand operand of a logical
     * && or || operator shall not contain persistent side effects. Reason: That
     * depends on compile macro branch */
    if ((Std_ReturnType)E_OK == Dma_ValidateCommonPointer(DMA_INSTANCE_0,
                                                          (const void *)PConfig,
                                                          DMA_CAL_SRC_LAST_OFFSET_ID_U8))
    /* PRQA S 3415 -- */
    {
        /* [SWDESG_DMA_064] */
#endif
        ret = Dma_LLD_CalculateSrcLastOffset(PConfig, s32SrcLastOffset);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* (DMA_DEV_ERROR_DETECT == STD_ON) */
    return ret;
}

/**
 * @brief   This function calculate the last offset of destination
 *
 * @details This function calculate the last offset of destination,
 *          and the last offset value will be returned through input parameters
 * s32DestLastOffset. This function is only used to calculate the last offset to
 * loop back to origin start address when transfer finished.
 * @param[in]     PConfig              Pointer to the channel's Inner loop
 * attributes
 * @param[in]     s32DestLastOffset    Pointer to the address used to store the
 * DesLastOffset
 *
 * @return  Std_ReturnType. Whether calculate are finished.
 *
 * @api
 *
 * @pre
 * @implements DMA_CalculateDesChannelLastOffset_Activity
 * [SWDESG_DMA_067]
 * */
DMA_TEXT_SECTION Std_ReturnType Dma_CalculateDesChannelLastOffset(const Dma_ChannelType *PConfig,
                                                                  sint32 *s32DestLastOffset)
{
    Std_ReturnType ret = E_NOT_OK;
#if (DMA_DEV_ERROR_DETECT == STD_ON)
    /* PRQA S 3415 ++ #Misra-C:2012 Rule-13.5 The right hand operand of a logical
     * && or || operator shall not contain persistent side effects. Reason: That
     * depends on compile macro branch */
    if ((Std_ReturnType)E_OK == Dma_ValidateCommonPointer(DMA_INSTANCE_0,
                                                          (const void *)PConfig,
                                                          DMA_CAL_DES_LAST_OFFSET_ID_U8))
    /* PRQA S 3415 -- */
    {
        /* [SWDESG_DMA_066] */
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
        ret = Dma_LLD_CalculateDesLastOffset(PConfig, s32DestLastOffset);

#if (DMA_DEV_ERROR_DETECT == STD_ON)
    }
#endif /* DMA_DEV_ERROR_DETECT == STD_ON */
    return ret;
}

#define DMA_STOP_SEC_CODE
#include "Dma_MemMap.h"

/* End of file */
/** @} */
