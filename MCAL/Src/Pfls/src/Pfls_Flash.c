/**
 *   @file    Pfls_Flash.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Pfls - flash Hardware driver
 *
 *   @addtogroup Pfls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Pfls
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
*   1.4.0       09/29/2025    QXW0054       N/A          Pfls Initial Version
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Pfls_Flash.h"
#include "Pfls.h"
#include "Pfcfmc_RegOps.h"
#include "Pfls_Flash_Types.h"
#include "Pfls_version.h"
#if ((PFLS_DEV_ERROR_DETECT == STD_ON) || (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif /* PFLS_DEV_ERROR_DETECT == STD_ON */
#include "SchM_Pfls.h"
#include "Std_Types.h"

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON))
#define FLASHDRV_ADDR 0x04810400U
#elif (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON)
#define FLASHDRV_ADDR 0x04810C00U
#else
#define FLASHDRV_ADDR 0x04810200U
#endif

#define STATUS_SUCCESS                 0x001UL
#define STATUS_HVOP                    0x8001UL
#define FLASH_API_DISABLE              0x0UL
#define FLASH_API_ENABLE               0x1UL
#define FLASH_API_SIZE                 0x0UL
#define WDG_TUNE_DISABLE               0x1u
#define FLASH_AUTO_HOLD_ENABLE         0x1UL
#define FLASH_REG_BIT_CFG_DISABLE      0x0UL

#define INVAILD_ADDR                   ((void *)0xFFFFFFFFU)

#define PFLS_ABT_TIMEOUT_VALUE         (1000000U)
#define PFLS_ASYNC_WRITE_TIMEOUT_VALUE (100000U)
#define PFLS_ASYNC_ERASE_TIMEOUT_VALUE (1000000U)

/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

typedef struct
{
    uint32 blk_sel;
    uint32 dest;
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    uint32 int_en;
    uint32 (*func)(uint32 val);
#endif
} Flash_Erase_Sector_CfgType;

typedef struct
{
    uint32  dest;
    uint32  size;
    uint32 *pData;
    uint32  wdg_tune;
    uint32  pgff;
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    uint32 int_en;
    uint32 (*func)(uint32 val);
#endif
} Flash_Prgm_CfgType;

typedef struct
{
    uint16 u16FlashRomApiMajorVersion;
    uint16 u16FlashRomApiMinorVersion;

    uint32 RESERVED1[2U];
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    uint32 (*FLASH_DRV_EraseSector)(Flash_Erase_Sector_CfgType *flash_api_cfg);
#else
    uint32 (*FLASH_DRV_EraseSector)(Flash_Erase_Sector_CfgType *flash_api_cfg,
                                    uint32                      int_en,
                                    uint32                      type);
#endif
    uint32 (*FLASH_DRV_EraseSector_Clear)(void);
    uint32 RESERVED2[2U];
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    uint32 (*FLASH_DRV_Program)(Flash_Prgm_CfgType *flash_api_cfg);
#else
    uint32 (*FLASH_DRV_Program)(Flash_Prgm_CfgType *flash_api_cfg, uint32 int_en, uint32 type);
#endif
    uint32 (*FLASH_DRV_Program_Clear)(void);
    uint32 RESERVED3[6U];
    uint32 (*FLASH_DRV_HV_Status_Check)(void);
    uint32 RESERVED4[8U];
    uint32 (*FLASH_DRV_ENABLE_HOLD_CFG)(uint32 flash_api_cfg);
} FLASH_ROM_API_ENTRY_T;

typedef enum
{
    FLASH_CTR_IDLE     = 0U,
    FLASH_CTR_ERASEING = 1U,
    FLASH_CTR_WRITEING = 2U,
} Flash_Ctr_Working_StatusType;

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/
#define PFLS_START_SEC_VAR_INIT_32
#include "Pfls_MemMap.h"
/** flash driver header for finding function in special address */
PFLS_DATA_SECTION static const FLASH_ROM_API_ENTRY_T *s_pFlashDriver_FuncHeader =
    (const FLASH_ROM_API_ENTRY_T *)(FLASHDRV_ADDR);
PFLS_DATA_SECTION static volatile uint32 *Pfls_Flash_pTargetAddressPtr = NULL_PTR;
PFLS_DATA_SECTION static const uint32    *Pfls_Flash_pSourceAddressPtr = NULL_PTR;
PFLS_DATA_SECTION static uint32           Pfls_Flash_pDateBuffer[32]   = { 0 };

#if (PFLS_TIMEOUT_HANDLING == STD_ON)
PFLS_DATA_SECTION static uint32 Pfls_u32LLDTimeout_Counter;
#endif

#if (PFLS_WRITE_VERIFY_CHECK == STD_ON)
PFLS_DATA_SECTION static Pfls_LengthType Pfls_u32LLDNumberOfStepBack;
#endif
#define PFLS_STOP_SEC_VAR_INIT_32
#include "Pfls_MemMap.h"

#define PFLS_START_SEC_CONST_32
#include "Pfls_MemMap.h"
#if (PFLS_BLANK_CHECK_API == STD_ON)
PFLS_DATA_SECTION static const uint32 Pfls_Flash_ErasedValue = PFLS_ERASED_VALUE;
#endif
#define PFLS_STOP_SEC_CONST_32
#include "Pfls_MemMap.h"

#define PFLS_START_SEC_VAR_INIT_8
#include "Pfls_MemMap.h"
PFLS_DATA_SECTION static const volatile uint8 *volatile Pfls_Flash_pReadAddressPtr = NULL_PTR;
#if ((PFLS_COMPARE_API == STD_ON) || (PFLS_BLANK_CHECK_API == STD_ON) || \
     (PFLS_WRITE_VERIFY_CHECK == STD_ON))
PFLS_DATA_SECTION static const volatile uint8 *volatile Pfls_Flash_pCompareAddressPtr = NULL_PTR;
#endif
#define PFLS_STOP_SEC_VAR_INIT_8
#include "Pfls_MemMap.h"

#define PFLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "Pfls_MemMap.h"
PFLS_DATA_SECTION static volatile Flash_Ctr_Working_StatusType Pfls_Flash_Working_State =
    FLASH_CTR_IDLE;
#if ((PFLS_COMPARE_API == STD_ON) || (PFLS_BLANK_CHECK_API == STD_ON) || \
     (PFLS_WRITE_VERIFY_CHECK == STD_ON))
PFLS_DATA_SECTION static volatile Pfls_LLDReturnType Pfls_Flash_eCompareStatus = PFLASH_E_OK;
#endif
#define PFLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Pfls_MemMap.h"
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON))
PFLS_TEXT_SECTION static Std_ReturnType FLASHDRIVER_PflashProtectCheck(uint32 u32Address);
#endif
PFLS_TEXT_SECTION static Std_ReturnType FLASHDRIVER_LockSector(uint32 u32Address, uint8 bLock);
PFLS_TEXT_SECTION static void           FLASHDRIVER_GetFlashConfig(uint32 u32Address,
                                                                   Flash_Erase_Sector_CfgType *pFlash_api_cfg);
PFLS_TEXT_SECTION static Std_ReturnType Pfls_Flash_PageWrite(const uint32 Page_size);
#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"

#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON))
/**
 * @brief Flash Driver Function for Protection Check
 *
 * @param pFlashParam flash driver parameter
 */
PFLS_TEXT_SECTION static Std_ReturnType FLASHDRIVER_PflashProtectCheck(uint32 u32Address)
{
    uint32         u32ProtectEndAddr, u32ProtectVal, u32Region;
    Std_ReturnType tRetVal = (Std_ReturnType)E_OK;
    u32ProtectEndAddr      = PFLASH_PROTECT_START_ADDR + PFLASH_PROTECT_LEN;
    if (u32Address < u32ProtectEndAddr)
    {
        u32ProtectVal = ~(*((volatile uint32 *)(PFLASH_PROTECT_ADDR)));
        u32Region     = (u32Address - PFLASH_PROTECT_START_ADDR) >> 16;
        if (((1U << u32Region) & u32ProtectVal) != 0U)
        {
            tRetVal = (Std_ReturnType)E_NOT_OK;
        }
    }

    return tRetVal;
}
#endif

/**
 * @brief        Flash Driver Function for lock/unlock sector
 *
 * @param        u32Address sector address
 * @param        bLock 0U-unlock, 1U-lock
 */
PFLS_TEXT_SECTION static Std_ReturnType FLASHDRIVER_LockSector(uint32 u32Address, uint8 bLock)
{
    uint32         u32Temp;
    uint32         u32Val;
    uint32         u32Length = 0;
    Std_ReturnType eRetVal   = (Std_ReturnType)E_OK;
    if ((u32Address >= PFLASH_ADDR_START) && (u32Address <= PFLASH_ADDR_END))
    {
        uint32 u32Index = (u32Address - PFLASH_ADDR_START) / PFLASH_BANK_SIZE;
        u32Length       = ((u32Address - PFLASH_ADDR_START) % PFLASH_BANK_SIZE);
        if (u32Length < (PFLASH_BANK_SIZE - FLASH_256KB_SIZE))
        {
            u32Temp = ((uint32)1UL) << (u32Length >> 16);
            u32Val  = Pfls_HWA_GetFlashBankCPELCK(u32Index);
            if (bLock != 0U)
            {
                u32Val |= u32Temp;
            }
            else
            {
                u32Val &= ~u32Temp;
            }
            Pfls_HWA_SetFlashBankCPELCK(u32Index, u32Val);
        }
        else
        {
            u32Temp = ((uint32)1UL) << ((u32Length + FLASH_256KB_SIZE - PFLASH_BANK_SIZE) >> 13);
            u32Val  = Pfls_HWA_GetFlashBankFPELCK(u32Index);
            if (bLock != 0U)
            {
                u32Val |= u32Temp;
            }
            else
            {
                u32Val &= ~u32Temp;
            }
            Pfls_HWA_SetFlashBankFPELCK(u32Index, u32Val);
        }
    }
    else
    {
        eRetVal = (Std_ReturnType)E_NOT_OK;
    }
    return eRetVal;
}

/**
 * @brief        Get Flash Configuration
 *
 * @param        u32Address the flash address
 * @param        pFlash_api_cfg out flash parameter
 */
PFLS_TEXT_SECTION static void FLASHDRIVER_GetFlashConfig(uint32                      u32Address,
                                                         Flash_Erase_Sector_CfgType *pFlash_api_cfg)
{
    pFlash_api_cfg->blk_sel = ((u32Address - PFLASH_ADDR_START) / PFLASH_BANK_SIZE);
    pFlash_api_cfg->dest    = u32Address;
}

/**
 * @brief          Execute an interlock write and next program.
 *
 * @param[in]      TotalBytes Total number of bytes to program
 *
 */
PFLS_TEXT_SECTION static Std_ReturnType Pfls_Flash_PageWrite(const uint32 Page_size)
{
    Std_ReturnType     eRetVal = (Std_ReturnType)E_OK;
    uint32             u32Temp;
    Flash_Prgm_CfgType tFlash_api_cfg = { 0 };
    tFlash_api_cfg.pgff               = FLASH_REG_BIT_CFG_DISABLE;
    tFlash_api_cfg.dest               = (uint32)Pfls_Flash_pTargetAddressPtr;
    tFlash_api_cfg.size               = Page_size >> 2; /* one data is 4 bytes  */
    /* PRQA S 311 ++ #Misra-C:2012 Rule-11.8 A cast shall not remove any const or volatile
     * qualification from the type pointed to by a pointer Reason: A point const should be
     * performed Here Unavoidably.*/
    tFlash_api_cfg.pData = (uint32 *)Pfls_Flash_pSourceAddressPtr;
    /* PRQA S 311 -- */
    tFlash_api_cfg.wdg_tune = WDG_TUNE_DISABLE;
    /* SWS_Pfls_00215 SWS_Pfls_00211 */
    SchM_Enter_Pfls_PFLS_EXCLUSIVE_AREA_01();
    u32Temp = Pfls_HWA_GetFlashStatus();
    if (u32Temp == FLASH_HARDWARE_STATUS_IDLE)
    {
        if ((Std_ReturnType)E_OK == FLASHDRIVER_LockSector((uint32)Pfls_Flash_pTargetAddressPtr, 0U))
        {
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
            u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_Program(&tFlash_api_cfg);
#else
            u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_Program(&tFlash_api_cfg,
                                                                   FLASH_API_DISABLE,
                                                                   FLASH_API_SIZE);
#endif
            FLASHDRIVER_LockSector((uint32)Pfls_Flash_pTargetAddressPtr, 1U);
            if (u32Temp == STATUS_SUCCESS)
            {
                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
                 * applied to an expression of pointer type Reason: A pointer += should be performed
                 * Here Unavoidably.*/
                Pfls_Flash_pTargetAddressPtr = Pfls_Flash_pTargetAddressPtr + (Page_size >> 2);
                Pfls_Flash_pSourceAddressPtr = Pfls_Flash_pSourceAddressPtr + (Page_size >> 2);
                /* PRQA S 488 -- */
            }
            else
            {
                eRetVal = (Std_ReturnType)E_NOT_OK;
            }
        }
        else
        {
            FLASHDRIVER_LockSector((uint32)Pfls_Flash_pTargetAddressPtr, 1U);
            eRetVal = (Std_ReturnType)E_NOT_OK;
        }
    }
    else
    {
        eRetVal = (Std_ReturnType)E_NOT_OK;
    }
    SchM_Exit_Pfls_PFLS_EXCLUSIVE_AREA_01();
    return eRetVal;
}

#if (PFLS_ERASE_VERIFY_CHECK == STD_ON)
/**
 * @brief          Check that the addressed flash memory area is erased.
 *
 * @param[in]      pFlashAreaPtr first address of the addressed flash memory area
 *                 aligned to the MCU bus width
 * @param[in]      u32DataLength number of bytes to check (aligned to the bus width)
 *
 * @return         Pfls_LLDReturnType
 * @retval         PFLASH_E_OK operation succeeded
 * @retval         PFLASH_E_FAILED operation failed due to hardware error (ECC)
 *                 or contents of the addressed memory area don't match with value of
 *                 an erased flash cell
 */
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_Flash_VerifyErase(
    const volatile Pfls_Flash_DataBusWidthType *pFlashAreaPtr,
    const Pfls_LengthType                       u32DataLength)
{
    Pfls_LLDReturnType eRetVal = PFLASH_E_OK;

    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied to
     * an expression of pointer type Reason: A pointer += should be performed Here Unavoidably.*/
    volatile const uint8 *pFlashAreaEndPtr = ((const volatile uint8 *)pFlashAreaPtr) + u32DataLength;
    /* PRQA S 488 -- */

    Pfls_Flash_pReadAddressPtr = (const volatile uint8 *)pFlashAreaPtr;
    /* Compiler_Warning: see fls_c_REF_CW_01 */
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied to
     * an expression of pointer type Reason: A pointer += should be performed Here Unavoidably.*/
    for (const volatile uint8 *pTemp = ((const volatile uint8 *)pFlashAreaPtr);
         ((uint32)pTemp) < ((uint32)pFlashAreaEndPtr);
         pTemp += sizeof(Pfls_Flash_DataBusWidthType))
    /* PRQA S 488 -- */
    {
        Pfls_Flash_DataBusWidthType data;
        /* Compiler_Warning: see fls_c_REF_CW_01 */
        /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
         * object type and a pointer to a different object type Reason: A different pointer cast
         * should be performed Here Unavoidably.*/
        /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
         * object type and a pointer to a different object type Reason: A pointer cast to stricter
         * alignment should be performed Here Unavoidably.*/
        data = *((volatile const Pfls_Flash_DataBusWidthType *)pTemp);
        /* PRQA S 3305 -- */
        /* PRQA S 310 -- */
        if (PFLS_ERASED_VALUE != data)
        {
            eRetVal = PFLASH_E_FAILED;
            break; /* Read data differs from erased value */
        }
        else
        {
            Pfls_Flash_pReadAddressPtr += sizeof(Pfls_Flash_DataBusWidthType);
        }
    }

    if (eRetVal == PFLASH_E_OK)
    {
        /* Nothing for misra */
    }
    else
    {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* [SWS_Pfls_00313 SWS_Pfls_00022 SWS_Pfls_00055 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_MAINFUNCTION_ID,
                                     PFLS_E_VERIFY_ERASE_FAILED);
#endif
    }

    return eRetVal;
}
#endif /* PFLS_ERASE_VERIFY_CHECK */

#if (PFLS_WRITE_VERIFY_CHECK == STD_ON)
/**
 * @brief          Check that the addressed flash memory area is correctly programmed.
 *
 * @param[in]      pFlashAreaPtr First address of the addressed flash memory area
 *                 aligned to MCU bus width boundary
 * @param[in]      pUserBufferPtr first address of the application buffer area
 *                 aligned to MCU bus width boundary
 * @param[in]      DataLength number of bytes to compare aligned to the MCU bus
 *                             width
 */
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_Flash_VerifyWrite(
    const volatile Pfls_Flash_DataBusWidthType *pFlashAreaPtr,
    const Pfls_Flash_DataBusWidthType          *pUserBufferPtr,
    const Pfls_LengthType                       u32DataLength)
{
    Pfls_LLDReturnType    eRetVal = PFLASH_E_OK;
    volatile const uint8 *pAddr   = NULL_PTR;
    /* Update the source data pointer for next compare */
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied
     * to an expression of pointer type Reason: A pointer += should not be performed Here
     * Unavoidably.*/
    volatile const uint8 *pFlashAreaEndPtr = ((const volatile uint8 *)pFlashAreaPtr) + u32DataLength;
    /* PRQA S 488 -- */

    /*
     * between a pointer to object type and a different pointer to object type
     */
    Pfls_Flash_pCompareAddressPtr = ((const uint8 *)pUserBufferPtr);
    Pfls_Flash_pReadAddressPtr    = (const volatile uint8 *)pFlashAreaPtr;
    /* Update the source data pointer for next compare */

    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied to
     * an expression of pointer type Reason: A pointer += should be performed Here Unavoidably.*/
    for (const volatile uint8 *pTemp = ((const volatile uint8 *)pFlashAreaPtr);
         ((uint32)pTemp) < ((uint32)pFlashAreaEndPtr);
         pTemp += sizeof(Pfls_Flash_DataBusWidthType))
    /* PRQA S 488 -- */
    {
        Pfls_Flash_DataBusWidthType data;
        Pfls_Flash_DataBusWidthType dataCompare;
        /* Compiler_Warning: see fls_c_REF_CW_01 */
        /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer
         * to object type and a pointer to a different object type Reason: A different pointer
         * cast should be performed Here Unavoidably.*/
        /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a
         * pointer to object type and a pointer to a different object type Reason: A pointer
         * cast to stricter alignment should be performed Here Unavoidably.*/
        data = *((volatile const Pfls_Flash_DataBusWidthType *)pTemp);
        /* PRQA S 3305 -- */
        /* PRQA S 310 -- */

        pAddr = Pfls_Flash_pCompareAddressPtr;
        if (0U != ((uint32)pAddr % 4U))
        {
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be
             * performed Here Unavoidably.*/
            dataCompare = ((uint32)(*(pAddr + 3U)) << 24U);
            dataCompare |= ((uint32)(*(pAddr + 2U)) << 16U);
            /* PRQA S 488 -- */
            /* PRQA S 489 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer +1 should not be
             * performed Here Unavoidably.*/
            dataCompare |= ((uint32)(*(pAddr + 1U)) << 8U);
            /* PRQA S 489 -- */
            dataCompare |= ((uint32)(*(pAddr)));
        }
        else
        {
            /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a
             * pointer to object type and a pointer to a different object type Reason: A
             * different pointer cast should be performed Here Unavoidably.*/
            /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a
             * pointer to object type and a pointer to a different object type Reason: A pointer
             * cast to stricter alignment should be performed Here Unavoidably.*/
            dataCompare = *((volatile const Pfls_Flash_DataBusWidthType *)pAddr);
            /* PRQA S 3305 -- */
            /* PRQA S 310 -- */
        }
        if (data != dataCompare)
        {
            eRetVal = PFLASH_E_FAILED;
            break; /* Read data differs from erased value */
        }
        else
        {
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be performed
             * Here Unavoidably.*/
            Pfls_Flash_pCompareAddressPtr += sizeof(Pfls_Flash_DataBusWidthType);
            /* PRQA S 488 -- */
        }
    }

    if (eRetVal == PFLASH_E_OK)
    {
        /* avoid Misra error*/
    }
    else
    {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* [SWS_Pfls_00314 SWS_Pfls_00056 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_MAINFUNCTION_ID,
                                     PFLS_E_VERIFY_WRITE_FAILED);
#endif
    }

    return eRetVal;
}
#endif /* PFLS_WRITE_VERIFY_CHECK == STD_ON */

#if ((PFLS_COMPARE_API == STD_ON) || (PFLS_BLANK_CHECK_API == STD_ON))
/**
 * @brief          Calculate length of initial 8-bit flash read.
 *
 * @param[in]      pSourceAddrPtr Source pointer
 * @param[in]      TotalBytes Total number of bytes to read
 */
PFLS_TEXT_SECTION static uint32 Pfls_Flash_CalcInitDataLength(
    const volatile uint8 *volatile const pSourceAddrPtr,
    uint32 u32TotalBytes)
{
    /* Calc length of initial 8-bit transfer */
    uint32 u32Length = ((uint32)pSourceAddrPtr) & (sizeof(Pfls_Flash_DataBusWidthType) - 1UL);

    if (u32Length != 0U)
    {
        u32Length = sizeof(Pfls_Flash_DataBusWidthType) - u32Length;
    }
    else
    {
        /* u32Length == 0 */
    }

    if (u32Length > u32TotalBytes)
    {
        u32Length = u32TotalBytes;
    }
    else
    {
        /* u32Length <=  u32TotalBytes */
    }

    return u32Length;
}

/**
 * @brief          Compare data buffer with of given flash unalign bytes.
 *
 * @param[in]      pReadAddressEndPtr End address to compare.
 *
 * @return         Pfls_LLDReturnType
 * @retval         PFLASH_E_OK Operation succeeded
 * @retval         PFLASH_E_BLOCK_INCONSISTENT Data buffer doesn't match with content of flash
 * sector
 */
PFLS_TEXT_SECTION static Pfls_LLDReturnType Pfls_Flash_SectorCompareUnalignBytes(
    const volatile uint8 *pReadAddressEndPtr,
    const uint8 *const    pDataPtr)
{
    Pfls_LLDReturnType    eRetVal                   = PFLASH_E_OK;
    uint8                 Pfls_Flash_u8ReadAddress8 = 0U;
    volatile const uint8 *pAddr                     = NULL_PTR;
    for (const volatile uint8 *pTemp = Pfls_Flash_pReadAddressPtr;
         ((uint32)pTemp) < ((uint32)pReadAddressEndPtr);
         pTemp++)
    {
        /* read flash location */
        Pfls_Flash_u8ReadAddress8 = *pTemp;

        pAddr = Pfls_Flash_pCompareAddressPtr;
        if (*pAddr == Pfls_Flash_u8ReadAddress8)
        {
#if (PFLS_BLANK_CHECK_API == STD_ON)
            if (NULL_PTR == pDataPtr)
            {
                /* BLANK_CHECK API */
            }
            else
#else
            /*Fix compiler warning */
            (void)pDataPtr;
#endif
            {
                Pfls_Flash_pCompareAddressPtr = Pfls_Flash_pCompareAddressPtr + 1;
            }
        }
        else
        {
            eRetVal = PFLASH_E_BLOCK_INCONSISTENT;
        }

        Pfls_Flash_pReadAddressPtr = Pfls_Flash_pReadAddressPtr + 1;
    }
    return eRetVal;
}

#endif /* ( PFLS_COMPARE_API == STD_ON ) || (PFLS_BLANK_CHECK_API == STD_ON) */

#if ((PFLS_COMPARE_API == STD_ON) || (PFLS_BLANK_CHECK_API == STD_ON))
/**
 * @brief          Calculate length of optimized wide flash reads.
 *
 * @param[in]      u32InitDataLength Calculated by Pfls_Flash_CalcInitDataLength
 * @param[in]      u32TotalBytes Total number of bytes to read
 *
 * @return         u32Length of optimized 32-bit or 64-bit flash reads in bytes
 */
PFLS_TEXT_SECTION static uint32 Pfls_Flash_CalcWideDataLength(const uint32 u32InitDataLength,
                                                              const uint32 u32TotalBytes)
{
    uint32 u32Length = ((u32TotalBytes - u32InitDataLength) &
                        (~(sizeof(Pfls_Flash_DataBusWidthType) - 1UL)));
    return u32Length;
}
#endif /* ( PFLS_COMPARE_API == STD_ON ) || (PFLS_BLANK_CHECK_API == STD_ON) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 *
 * @brief          Wait for HW operation to complete, with timeout.
 * @return         Success (DONE)
 */
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_WaitForOperationFinish(void)
{
#if (PFLS_TIMEOUT_HANDLING == STD_ON)
    uint32 u32TimerCounterAbort = PFLS_ABT_TIMEOUT_VALUE;
#endif /* PFLS_TIMEOUT_HANDLING == STD_ON */

    Pfls_LLDReturnType eRetVal = PFLASH_E_FAILED;

    if (Pfls_Flash_Working_State == FLASH_CTR_IDLE)
    {
        eRetVal = PFLASH_E_OK;
    }
    else
    {
#if (PFLS_TIMEOUT_HANDLING == STD_ON)
        while ((s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check() == STATUS_HVOP) &&
               (0U < u32TimerCounterAbort))
        {
            --u32TimerCounterAbort;
        }
#else
        while (s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check() == STATUS_HVOP)
        {
        }
#endif /* PFLS_TIMEOUT_HANDLING == STD_ON */

        if (s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check() != STATUS_HVOP)
        {
            if (Pfls_Flash_Working_State == FLASH_CTR_ERASEING)
            {
                if (s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear() == STATUS_SUCCESS)
                {
                    /* OK, memory idle */
                    eRetVal                  = PFLASH_E_OK;
                    Pfls_Flash_Working_State = FLASH_CTR_IDLE;
                }
                else
                {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                    /* SWS_Pfls_00315 */
                    (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                                 PFLS_INSTANCE_ID,
                                                 PFLS_ERASE_ID,
                                                 PFLS_E_ERASE_FAILED);
#endif
                    eRetVal = PFLASH_E_FAILED;
                }
            }
            else
            {
                if (s_pFlashDriver_FuncHeader->FLASH_DRV_Program_Clear() == STATUS_SUCCESS)
                {
                    /* OK, memory idle */
                    eRetVal                  = PFLASH_E_OK;
                    Pfls_Flash_Working_State = FLASH_CTR_IDLE;
                }
                else
                {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                    /* SWS_Pfls_00316 */
                    (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                                 PFLS_INSTANCE_ID,
                                                 PFLS_WRITE_ID,
                                                 PFLS_E_WRITE_FAILED);
#endif
                    eRetVal = PFLASH_E_FAILED;
                }
            }
        }
        else
        {
#if ((PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF) && (PFLS_TIMEOUT_HANDLING == STD_ON))
            if (Pfls_Flash_Working_State == FLASH_CTR_ERASEING)
            {
                /* [SWS_Pfls_00361 */
                (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                             PFLS_INSTANCE_ID,
                                             PFLS_ERASE_ID,
                                             PFLS_E_TIMEOUT);
            }
            else
            {
                /* [SWS_Pfls_00361 */
                (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                             PFLS_INSTANCE_ID,
                                             PFLS_WRITE_ID,
                                             PFLS_E_TIMEOUT);
            }
#endif
            /* error, memory controller not idle */
            eRetVal = PFLASH_E_FAILED;
        }
    }

    return eRetVal;
}

/**
 * @brief          Initialize flash hardware.
 */
PFLS_TEXT_SECTION void Pfls_Flash_Init(void)
{
    if (PFLASH_E_OK == Pfls_Flash_WaitForOperationFinish())
    {
        Pfls_eLLDJobResult = MEMIF_JOB_OK;
#if (PFLS_DATA_ERROR_SUPRESSION == STD_ON)
        Pfls_HWA_SuppressDataError();
#endif
    }
    else
    {
        Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
        Pfls_eLLDJob       = PFLASH_JOB_NONE;
    }
}

#if (PFLS_CANCEL_API == STD_ON)
/**
 * @brief          Cancel ongoing erase or write hardware job.
 */
PFLS_TEXT_SECTION void Pfls_Flash_Cancel(void)
{
    /* some hardware job (asynchronous) is pending */

    /* Wait for current pending operation to finish, as there is no hardware way to abort it */
    if (PFLASH_E_OK == Pfls_Flash_WaitForOperationFinish())
    {
        /* memory idle, no operation is pending */
        /* SWS_Pfls_00335 */
        Pfls_eLLDJob       = PFLASH_JOB_NONE;
        Pfls_eLLDJobResult = MEMIF_JOB_CANCELED;
    }
}
#endif /* PFLS_CANCEL_API == STD_ON */

/**
 * @brief          Process ongoing erase  hardware job.
 */
PFLS_TEXT_SECTION void Pfls_Flash_MainFunctionErase(void)
{
    uint32 u32Temp;
    /* if erase finished */
    u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check();
    /* check if finished */
    if (u32Temp == STATUS_HVOP)
    {
#if (PFLS_TIMEOUT_HANDLING == STD_ON)
        /* SWS_Pfls_00272 */
        /* Operation in progress, handle possible timeout */
        Pfls_u32LLDTimeout_Counter--;
        if (0U == Pfls_u32LLDTimeout_Counter)
        {
            /* erase operation timeout-ed. operations cannot be aborted */
            /* erase operation failed */
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Pfls_00361 SWS_Pfls_00359 */
            (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                         PFLS_INSTANCE_ID,
                                         PFLS_MAINFUNCTION_ID,
                                         PFLS_E_TIMEOUT);
#endif
            Pfls_eLLDJob       = PFLASH_JOB_NONE;
            Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
            s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear();
            Pfls_Flash_Working_State = FLASH_CTR_IDLE;
            /* return */
        }
#endif
    }
    else if (u32Temp == STATUS_SUCCESS)
    {
        u32Temp                  = s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear();
        Pfls_Flash_Working_State = FLASH_CTR_IDLE;
        if (u32Temp == STATUS_SUCCESS)
        {
#if (PFLS_ERASE_VERIFY_CHECK == STD_ON)
            if (PFLASH_E_OK !=
                Pfls_Flash_VerifyErase(Pfls_Flash_pTargetAddressPtr, P_FLASH_SECTOR_SIZE))
            {
                /* erase operation failed */
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                /* SWS_Pfls_00315 */
                (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                             PFLS_INSTANCE_ID,
                                             PFLS_MAINFUNCTION_ID,
                                             PFLS_E_ERASE_FAILED);
#endif
                Pfls_eLLDJob       = PFLASH_JOB_NONE;
                Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
            }
            else
            {
#endif
                /* erase operation succeed */
                /* erase blank check succeeded */
                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
                 * applied to an expression of pointer type Reason: A pointer += should be performed
                 * Here Unavoidably.*/
                /* PRQA S 3387 ++ #Misra-C:2012 Rule-13.3 A full expression containing an increment
                 * (++) or decrement (--) operator should have no other potential side effects other
                 * than that caused by the increment or decrement operator Reason: A pointer ++
                 * should be performed Here Unavoidably.*/
                Pfls_u32JobSectorIt++; /* The sector was successfully erased, increment the sector
                                          iterator.*/
                /* PRQA S 3387 -- */
                /* PRQA S 488 -- */
                Pfls_eLLDJob       = PFLASH_JOB_NONE;
                Pfls_eLLDJobResult = MEMIF_JOB_OK;
#if (PFLS_ERASE_VERIFY_CHECK == STD_ON)
            }
#endif /* PFLS_ERASE_VERIFY_CHECK == STD_ON */
        }
        else
        {
            /* erase operation failed */
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* SWS_Pfls_00315 SWS_Pfls_00104 */
            (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                         PFLS_INSTANCE_ID,
                                         PFLS_MAINFUNCTION_ID,
                                         PFLS_E_ERASE_FAILED);
#endif
            Pfls_eLLDJob       = PFLASH_JOB_NONE;
            Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
        }
    }
    else
    {
        s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear();
        Pfls_Flash_Working_State = FLASH_CTR_IDLE;
        /* erase operation failed */
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Pfls_00315 SWS_Pfls_00104 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_MAINFUNCTION_ID,
                                     PFLS_E_ERASE_FAILED);
#endif
        Pfls_eLLDJob       = PFLASH_JOB_NONE;
        Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
    }
}

/**
 * @brief          Process ongoing write hardware job.
 */
PFLS_TEXT_SECTION void Pfls_Flash_MainFunctionWrite(void)
{
    uint32 u32Temp;
    /* if write finished */
    u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check();
    /* check if finished */
    if (u32Temp == STATUS_HVOP)
    {
#if (PFLS_TIMEOUT_HANDLING == STD_ON)
        /* SWS_Pfls_00272 */
        /* Operation in progress, handle possible timeout */
        Pfls_u32LLDTimeout_Counter--;
        if (0U == Pfls_u32LLDTimeout_Counter)
        {
            /* write operation timeout-ed. operations cannot be aborted */
            /* write operation failed */
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Pfls_00361 SWS_Pfls_00360 */
            (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                         PFLS_INSTANCE_ID,
                                         PFLS_MAINFUNCTION_ID,
                                         PFLS_E_TIMEOUT);
#endif
            Pfls_eLLDJob       = PFLASH_JOB_NONE;
            Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
            s_pFlashDriver_FuncHeader->FLASH_DRV_Program_Clear();
            Pfls_Flash_Working_State = FLASH_CTR_IDLE;
        }
#endif /* PFLS_TIMEOUT_HANDLING == STD_ON */
    }
    else if (u32Temp == STATUS_SUCCESS)
    {
        u32Temp                  = s_pFlashDriver_FuncHeader->FLASH_DRV_Program_Clear();
        Pfls_Flash_Working_State = FLASH_CTR_IDLE;
        if (u32Temp == STATUS_SUCCESS)
        {
            /* program operation was successful */

#if (PFLS_WRITE_VERIFY_CHECK == STD_ON)
            /*
             * only allowed form of pointer arithmetic
             */
            if (PFLASH_E_OK !=
                Pfls_Flash_VerifyWrite /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and
                                        * -= operators should not be applied to an expression of
                                        * pointer type Reason: A pointer += should be performed
                                        * Here Unavoidably.*/
                (Pfls_Flash_pTargetAddressPtr - (Pfls_u32LLDNumberOfStepBack / 4U),
                 Pfls_Flash_pSourceAddressPtr - (Pfls_u32LLDNumberOfStepBack / 4U), /* PRQA S 488 -- */
                 Pfls_u32LLDNumberOfStepBack))
            {
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                /* SWS_Pfls_00316 SWS_Pfls_00105 */
                (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                             PFLS_INSTANCE_ID,
                                             PFLS_MAINFUNCTION_ID,
                                             PFLS_E_WRITE_FAILED);
#endif
                /* terminate program operation */
                Pfls_eLLDJob       = PFLASH_JOB_NONE;
                Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
            }
            else
            {
                /* program operation succeed */
                Pfls_eLLDJob       = PFLASH_JOB_NONE;
                Pfls_eLLDJobResult = MEMIF_JOB_OK;
            }
#else
            /* program operation succeed */
            Pfls_eLLDJob       = PFLASH_JOB_NONE;
            Pfls_eLLDJobResult = MEMIF_JOB_OK;
#endif /* PFLS_WRITE_VERIFY_CHECK == STD_ON */
        }
        else
        {
            /* program operation was not successful */

            /* program operation failed */
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* SWS_Pfls_00316 SWS_Pfls_00105 */
            (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                         PFLS_INSTANCE_ID,
                                         PFLS_MAINFUNCTION_ID,
                                         PFLS_E_WRITE_FAILED);
#endif
            Pfls_eLLDJob       = PFLASH_JOB_NONE;
            Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
            /* return */
        }
    }
    else
    {
        s_pFlashDriver_FuncHeader->FLASH_DRV_Program_Clear();
        Pfls_Flash_Working_State = FLASH_CTR_IDLE;
        /* erase operation failed */
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Pfls_00316 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_MAINFUNCTION_ID,
                                     PFLS_E_WRITE_FAILED);
#endif
        Pfls_eLLDJob       = PFLASH_JOB_NONE;
        Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
    }
}

#if (PFLS_ERASE_VERIFY_CHECK == STD_ON)
/**
 * @brief          Process ongoing erase or write hardware job.
 * @details        In case Async Operation is ongoing this function will complete the following job:
 *                 - Erase blank Check
 */
PFLS_TEXT_SECTION void Pfls_Flash_MainFunctionEraseBlankCheck(void)
{
    if (PFLASH_E_OK != Pfls_Flash_VerifyErase(Pfls_Flash_pTargetAddressPtr, P_FLASH_SECTOR_SIZE))
    {
        /* erase operation failed */
#if (PFLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Pfls_00315 */
        (void)Det_ReportRuntimeError((uint16)PFLS_MODULE_ID,
                                     PFLS_INSTANCE_ID,
                                     PFLS_MAINFUNCTION_ID,
                                     PFLS_E_ERASE_FAILED);
#endif
        Pfls_eLLDJob       = PFLASH_JOB_NONE;
        Pfls_eLLDJobResult = MEMIF_JOB_FAILED;
    }
    else
    {
        /* erase blank check succeeded */
        /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
         * applied to an expression of pointer type Reason: A pointer += should be performed
         * Here Unavoidably.*/
        /* PRQA S 3387 ++ #Misra-C:2012 Rule-13.3 A full expression containing an increment (++)
         * or decrement (--) operator should have no other potential side effects other than
         * that caused by the increment or decrement operator Reason: A pointer ++ should be
         * performed Here Unavoidably.*/
        Pfls_u32JobSectorIt++;
        /* PRQA S 3387 -- */
        /* PRQA S 488 -- */
        Pfls_eLLDJob       = PFLASH_JOB_NONE;
        Pfls_eLLDJobResult = MEMIF_JOB_OK;
    }
}
#endif

/**
 * @brief          Erase one complete flash sector.
 *
 * @param[in]      ePhySector Physical sector ID
 *
 * @return         Pfls_LLDReturnType
 * @retval         PFLASH_E_OK Operation succeeded
 * @retval         PFLASH_E_FAILED Operation failed due to hardware error
 * @retval         PFLASH_E_PENDING The operation has not yet been finished
 */
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_Erase(const Pfls_PhysicalSectorType ePhySector)
{
    Flash_Erase_Sector_CfgType tFlash_api_cfg = { 0 };
    uint32                     u32Temp;
    uint32                     u32PhyAddr;
    Pfls_LLDReturnType         eRetVal;

    u32PhyAddr = P_FLASH_BASE_ADDR + (ePhySector * P_FLASH_SECTOR_SIZE);
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON))
    if (E_NOT_OK == FLASHDRIVER_PflashProtectCheck(u32PhyAddr))
    {
        eRetVal = PFLASH_E_FAILED;
    }
    else
    {
#endif
        Pfls_Flash_pTargetAddressPtr = (uint32 *)(u32PhyAddr);

        FLASHDRIVER_GetFlashConfig((uint32)Pfls_Flash_pTargetAddressPtr, &tFlash_api_cfg);
        s_pFlashDriver_FuncHeader->FLASH_DRV_ENABLE_HOLD_CFG(FLASH_AUTO_HOLD_ENABLE);
        /* SWS_Pfls_00215 SWS_Pfls_00211 */
        SchM_Enter_Pfls_PFLS_EXCLUSIVE_AREA_00();
        u32Temp = Pfls_HWA_GetFlashStatus();
        if (u32Temp == FLASH_HARDWARE_STATUS_IDLE)
        {
            if ((Std_ReturnType)E_OK ==
                FLASHDRIVER_LockSector((uint32)Pfls_Flash_pTargetAddressPtr, 0U))
            {
                /* start erase */
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
                u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector(&tFlash_api_cfg);
#else
            u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector(&tFlash_api_cfg,
                                                                       FLASH_API_DISABLE,
                                                                       FLASH_API_SIZE);
#endif
                FLASHDRIVER_LockSector((uint32)Pfls_Flash_pTargetAddressPtr, 1U);
                if (u32Temp == STATUS_SUCCESS)
                {
                    /* schedule async job check for Pfls_Flash_MainFunction */
                    Pfls_eLLDJob       = PFLASH_JOB_ERASE;
                    Pfls_eLLDJobResult = MEMIF_JOB_PENDING;
#if (PFLS_TIMEOUT_HANDLING == STD_ON)
                    /* Initialize timeout counter */
                    Pfls_u32LLDTimeout_Counter = PFLS_ASYNC_ERASE_TIMEOUT_VALUE;
#endif /* PFLS_TIMEOUT_HANDLING == STD_ON */
                    eRetVal                  = PFLASH_E_PENDING;
                    Pfls_Flash_Working_State = FLASH_CTR_ERASEING;
                }
                else
                {
                    eRetVal = PFLASH_E_FAILED;
                }
            }
            else
            {
                FLASHDRIVER_LockSector((uint32)Pfls_Flash_pTargetAddressPtr, 1U);
                eRetVal = PFLASH_E_FAILED;
            }
        }
        else
        {
            eRetVal = PFLASH_E_FAILED;
        }
        SchM_Exit_Pfls_PFLS_EXCLUSIVE_AREA_00();
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON))
    }
#endif

    return eRetVal;
}

/**
 * @brief          Write one or more complete flash pages into given flash sector.
 *
 * @param[in]      u32LogicAddr input logic address
 * @param[in]      u32DataLength data length in bytes
 * @param[in]      pDataPtr data to be written
 *
 * @return         Pfls_LLDReturnType
 * @retval         PFLASH_E_OK Operation succeeded
 * @retval         PFLASH_E_FAILED Operation failed due to hardware error
 * @retval         PFLASH_E_PENDING The operation has not yet been finished
 */
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_Write(const Pfls_AddressType u32LogicAddr,
                                                      const Pfls_LengthType  u32DataLength,
                                                      const uint8 *const     pDataPtr)
{
    uint32             u32PhyAddr;
    uint8             *pTempDataPtr = NULL_PTR;
    Pfls_LLDReturnType eRetVal      = PFLASH_E_PENDING;

    u32PhyAddr = P_FLASH_BASE_ADDR + u32LogicAddr;
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON))
    if (E_NOT_OK == FLASHDRIVER_PflashProtectCheck(u32PhyAddr))
    {
        eRetVal = PFLASH_E_FAILED;
    }
    else
    {
#endif
        /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
         * object type and a pointer to a different object type Reason: A different pointer cast
         * should be performed Here Unavoidably.*/
        /* SWS_Pfls_00389 */
        pTempDataPtr = (uint8 *)Pfls_Flash_pDateBuffer;
        for (uint32 u32Index = 0U; u32Index < u32DataLength; u32Index++)
        {
            pTempDataPtr[u32Index] = pDataPtr[u32Index];
        }
        Pfls_Flash_pSourceAddressPtr = Pfls_Flash_pDateBuffer;
        /* PRQA S 310 -- */
        Pfls_Flash_pTargetAddressPtr = (uint32 *)(u32PhyAddr);

#if (PFLS_ERASE_VERIFY_CHECK == STD_ON)
        if (PFLASH_E_OK != Pfls_Flash_VerifyErase(Pfls_Flash_pTargetAddressPtr, u32DataLength))
        {
            /* verify erase failed */
            eRetVal = PFLASH_E_FAILED;
        }
        else
#endif
        {
            /*It is time to do word or double word programming */
            s_pFlashDriver_FuncHeader->FLASH_DRV_ENABLE_HOLD_CFG(FLASH_AUTO_HOLD_ENABLE);
            if ((Std_ReturnType)E_OK == Pfls_Flash_PageWrite(u32DataLength))
            {
#if (PFLS_WRITE_VERIFY_CHECK == STD_ON)
                /* target and source address has been increased by Pfls_Flash_PageWrite,
                so we need a number of step back for both pointer to perform a write
                verify check*/
                /* @violates @ref fls_flash_c_REF_10 Array indexing shall be the only
                allowed form of pointer arithmetic */
                Pfls_u32LLDNumberOfStepBack = u32DataLength;
#endif
                Pfls_Flash_Working_State = FLASH_CTR_WRITEING;
                Pfls_eLLDJob             = PFLASH_JOB_WRITE;
                Pfls_eLLDJobResult       = MEMIF_JOB_PENDING;
            }
            else
            {
                eRetVal = PFLASH_E_FAILED;
            }
        }
#if (PFLS_TIMEOUT_HANDLING == STD_ON)
        /* Initialize timeout counter */
        Pfls_u32LLDTimeout_Counter = PFLS_ASYNC_WRITE_TIMEOUT_VALUE;
#endif /* PFLS_TIMEOUT_HANDLING == STD_ON */
#if ((PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON) || \
     (PFLS_MCU_TYPE_FC7300F4MDD == STD_ON))
    }
#endif

    return eRetVal;
}

/**
 * @brief          Read one or more bytes from given flash sector
 *
 * @param[in]      u32LogicAddr input logic address
 * @param[in]      u32DataLength data length in bytes
 * @param[out]     pDataPtr     where read data to be written
 *
 * @return Pfls_LLDReturnType
 * @retval PFLASH_E_OK Operation succeeded
 **/

PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_Read(const Pfls_AddressType u32LogicAddr,
                                                     Pfls_LengthType        u32DataLength,
                                                     uint8                 *pDataPtr)
{
    Pfls_LLDReturnType    eRetVal = PFLASH_E_OK;
    volatile const uint8 *pAddr   = NULL_PTR;
    Pfls_Flash_pReadAddressPtr    = (volatile const uint8 *)(P_FLASH_BASE_ADDR + u32LogicAddr);

    for (uint32 u32Index = 0U; u32Index < u32DataLength; u32Index++)
    {
        pAddr                      = Pfls_Flash_pReadAddressPtr;
        pDataPtr[u32Index]         = *pAddr;
        Pfls_Flash_pReadAddressPtr = Pfls_Flash_pReadAddressPtr + 1;
    }

    return eRetVal;
}

#if ((PFLS_COMPARE_API == STD_ON) || (PFLS_BLANK_CHECK_API == STD_ON))
/**
 * @brief          Compare data buffer with content of given flash sector.
 *Pfls_Flash_MainFunctionErase
 * @param[in]      u32LogicAddr input logic address
 * @param[in]      u32DataLength data length in bytes
 * @param[in]      pDataPtr data to be compared
 *
 * @return         Pfls_LLDReturnType
 * @retval         PFLASH_E_OK Operation succeeded
 * @retval         PFLASH_E_BLOCK_INCONSISTENT Data buffer doesn't match with content of flash
 * sector
 */
PFLS_TEXT_SECTION Pfls_LLDReturnType Pfls_Flash_Compare(const Pfls_AddressType u32LogicAddr,
                                                        const Pfls_LengthType  u32DataLength,
                                                        const uint8 *const     pDataPtr)
{
    Pfls_LLDReturnType    eRetVal                     = PFLASH_E_OK;
    uint32                u32InitDataLength           = 0UL;
    uint32                Pfls_Flash_u32ReadAddress32 = 0UL;
    uint32                Pfls_Flash_u32DataCompare32 = 0UL;
    volatile const uint8 *pAddr                       = NULL_PTR;
    volatile const uint8 *pReadAddressEndPtr          = NULL_PTR;
    volatile const uint8 *pReadBlockAddressEndPtr     = NULL_PTR;

    Pfls_Flash_pReadAddressPtr = (volatile const uint8 *)(P_FLASH_BASE_ADDR + u32LogicAddr);

#if (PFLS_BLANK_CHECK_API == STD_ON)
    if (NULL_PTR == pDataPtr)
    {
        Pfls_Flash_pCompareAddressPtr = (volatile const uint8 *)&Pfls_Flash_ErasedValue;
    }
    else
#endif
    {
        /* COMPARE API */
        Pfls_Flash_pCompareAddressPtr = pDataPtr;
    }
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
     * applied to an expression of pointer type Reason: A pointer += should be performed
     * Here Unavoidably.*/
    pReadAddressEndPtr = Pfls_Flash_pReadAddressPtr + u32DataLength;
    /* PRQA S 488 -- */
    /* Calculate end address of initial 8-bit transfer */
    u32InitDataLength = Pfls_Flash_CalcInitDataLength(Pfls_Flash_pReadAddressPtr, u32DataLength);
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
     * applied to an expression of pointer type Reason: A pointer += should be performed
     * Here Unavoidably.*/
    pReadBlockAddressEndPtr = Pfls_Flash_pReadAddressPtr + u32InitDataLength;
    /* PRQA S 488 -- */

    eRetVal = Pfls_Flash_SectorCompareUnalignBytes(pReadBlockAddressEndPtr, pDataPtr);
    if (eRetVal == PFLASH_E_OK)
    {
        /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
         * applied to an expression of pointer type Reason: A pointer += should be performed
         * Here Unavoidably.*/
        pReadBlockAddressEndPtr += Pfls_Flash_CalcWideDataLength(u32InitDataLength, u32DataLength);
        /* PRQA S 488 -- */
        /* Compiler_Warning: see fls_c_REF_CW_01 */
        /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
         * applied to an expression of pointer type Reason: A pointer += should be performed
         * Here Unavoidably.*/
        for (const volatile uint8 *pTemp = Pfls_Flash_pReadAddressPtr;
             ((uint32)pTemp) < ((uint32)pReadBlockAddressEndPtr);
             pTemp += sizeof(Pfls_Flash_DataBusWidthType))
        /* PRQA S 488 -- */
        {
            /* read flash location */
            /* Compiler_Warning: see fls_c_REF_CW_01 */
            /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a
             * pointer to object type and a pointer to a different object type Reason: A
             * different pointer cast should be performed Here Unavoidably.*/
            /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between
             * a pointer to object type and a pointer to a different object type Reason: A
             * pointer cast to stricter alignment should be performed Here Unavoidably.*/
            Pfls_Flash_u32ReadAddress32 = *((const volatile Pfls_Flash_DataBusWidthType *)pTemp);
            /* PRQA S 3305 -- */
            /* PRQA S 310 -- */

            pAddr = Pfls_Flash_pCompareAddressPtr;
            if (0U != ((uint32)Pfls_Flash_pCompareAddressPtr % 4U))
            {
                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators
                 * should not be applied to an expression of pointer type Reason: A pointer
                 * += should not be performed Here Unavoidably.*/
                Pfls_Flash_u32DataCompare32 = ((uint32)(*(pAddr + 3U)) << 24U);
                Pfls_Flash_u32DataCompare32 |= ((uint32)(*(pAddr + 2U)) << 16U);
                /* PRQA S 488 -- */
                /* PRQA S 489 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators
                 * should not be applied to an expression of pointer type Reason: A pointer
                 * +1 should not be performed Here Unavoidably.*/
                Pfls_Flash_u32DataCompare32 |= ((uint32)(*(pAddr + 1U)) << 8U);
                /* PRQA S 489 -- */
                Pfls_Flash_u32DataCompare32 |= ((uint32)(*(pAddr)));
            }
            else
            {
                /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
                 * between a pointer to object type and a pointer to a different object type
                 * Reason: A different pointer cast should be performed Here Unavoidably.*/
                /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between
                 * a pointer to object type and a pointer to a different object type Reason:
                 * A pointer cast to stricter alignment should be performed Here Unavoidably.*/
                Pfls_Flash_u32DataCompare32 = *((volatile const Pfls_Flash_DataBusWidthType *)pAddr);
                /* PRQA S 3305 -- */
                /* PRQA S 310 -- */
            }

            if (Pfls_Flash_u32DataCompare32 != Pfls_Flash_u32ReadAddress32)
            {
                eRetVal = PFLASH_E_BLOCK_INCONSISTENT;
                break;
            }
            else
            {
                /* avoid misra error */
            }

#if (PFLS_BLANK_CHECK_API == STD_ON)
            if (NULL_PTR == pDataPtr)
            {
                /* BLANK_CHECK API */
            }
            else
#endif
            {
                /* COMPARE API */
                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators
                 * should not be applied to an expression of pointer type Reason: A pointer
                 * += should not be performed Here Unavoidably.*/
                Pfls_Flash_pCompareAddressPtr += sizeof(Pfls_Flash_DataBusWidthType);
                /* PRQA S 488 -- */
            }
            Pfls_Flash_pReadAddressPtr = Pfls_Flash_pReadAddressPtr +
                                         sizeof(Pfls_Flash_DataBusWidthType);
        }
    }
    if (eRetVal == PFLASH_E_OK)
    {
        eRetVal = Pfls_Flash_SectorCompareUnalignBytes(pReadAddressEndPtr, pDataPtr);
    }

    return eRetVal;
}
#endif /* ( PFLS_COMPARE_API == STD_ON ) || (PFLS_BLANK_CHECK_API == STD_ON) */

#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

#ifdef __cplusplus
}
#endif
