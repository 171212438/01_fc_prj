/**
 *   @file    Fls_Flash.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Fls - flash Hardware driver
 *
 *   @addtogroup Fls
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Fls
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
*   0.1.0       20/06/2023    QXW0054       N/A          Fls Initial Version
*   0.2.0       27/09/2023    QXW0054       N/A          Add multicore support
*   0.3.0       20/10/2023    QXW0054       N/A          N/A
*   0.6.0       13/03/2024    QXW0120       N/A          Add FC7240 platform support
*   1.0.0       11/11/2024    QXW0054       N/A          Fls increases hardware operation mutex
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*=================================================================================================
*                                        INCLUDE FILES
=================================================================================================*/
#include "Fls_Flash.h"
#include "Fls.h"
#include "Fcfmc_RegOps.h"
#include "Fls_Flash_Types.h"
#include "Fls_version.h"
#if ((FLS_DEV_ERROR_DETECT == STD_ON) || (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF))
#include "Det.h"
#endif /* FLS_DEV_ERROR_DETECT == STD_ON */
#include "SchM_Fls.h"
#include "Std_Types.h"

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/
#if ((FLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (FLS_MCU_TYPE_FC7300F4MDD == STD_ON))
#define FLASHDRV_ADDR 0x04810400U
#elif (FLS_MCU_TYPE_FC7300F4MDS == STD_ON)
#define FLASHDRV_ADDR 0x04810C00U
#else
#define FLASHDRV_ADDR 0x04810200U
#endif

#define STATUS_SUCCESS                0x001UL
#define STATUS_HVOP                   0x8001UL
#define FLASH_API_DISABLE             0x0UL
#define FLASH_API_ENABLE              0x1UL
#define FLASH_API_SIZE                0x0UL
#define WDG_TUNE_DISABLE              0x1u
#define FLASH_AUTO_HOLD_ENABLE        0x1UL
#define FLASH_REG_BIT_CFG_DISABLE     0x0UL

#define FLASH_ECC_CHECK               0x011UL
#define STATUS_ECC_ERROR              0x011UL

#define INVAILD_ADDR                  ((void *)0xFFFFFFFFU)

#define FLS_ABT_TIMEOUT_VALUE         (1000000U)
#define FLS_ASYNC_WRITE_TIMEOUT_VALUE (100000U)
#define FLS_ASYNC_ERASE_TIMEOUT_VALUE (1000000U)

#if (FLS_MCU_TYPE_FC7300 == STD_ON)
#define FLS_READ_DATA_FLASH_STATUS_OFFSET  0x7CUL
#define FLS_CLEAR_DATA_FLASH_STATUS_OFFSET 0x84UL
#elif (FLS_MCU_TYPE_FC7300F8MDQ == STD_ON)
#define FLS_READ_DATA_FLASH_STATUS_OFFSET  0xCCUL
#define FLS_CLEAR_DATA_FLASH_STATUS_OFFSET 0xD8UL
#elif (FLS_MCU_TYPE_FC7240 == STD_ON)
#define FLS_READ_DATA_FLASH_STATUS_OFFSET  0x34UL
#define FLS_CLEAR_DATA_FLASH_STATUS_OFFSET 0x38UL
#else
#define FLS_READ_DATA_FLASH_STATUS_OFFSET  0xB4UL
#define FLS_CLEAR_DATA_FLASH_STATUS_OFFSET 0xB8UL
#endif

#define FLS_READ_DATA_FLASH_STATUS_ADDR \
    *(volatile uint32 *)(FLASHDRV_ADDR + FLS_READ_DATA_FLASH_STATUS_OFFSET)
#define FLS_CLEAR_DATA_FLASH_STATUS_ADDR \
    *(volatile uint32 *)(FLASHDRV_ADDR + FLS_CLEAR_DATA_FLASH_STATUS_OFFSET)

/*=================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

typedef struct
{
    uint32 blk_sel;
    uint32 dest;
#if ((FLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (FLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (FLS_MCU_TYPE_FC7300F4MDS == STD_ON))
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
#if ((FLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (FLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (FLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    uint32 int_en;
    uint32 (*func)(uint32 val);
#endif
} Flash_Prgm_CfgType;

typedef struct
{
    uint16 u16FlashRomApiMajorVersion;
    uint16 u16FlashRomApiMinorVersion;

    uint32 RESERVED1[2U];
#if ((FLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (FLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (FLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    uint32 (*FLASH_DRV_EraseSector)(Flash_Erase_Sector_CfgType *flash_api_cfg);
#else
    uint32 (*FLASH_DRV_EraseSector)(Flash_Erase_Sector_CfgType *flash_api_cfg,
                                    uint32                      int_en,
                                    uint32                      type);
#endif
    uint32 (*FLASH_DRV_EraseSector_Clear)(void);
    uint32 RESERVED2[2U];
#if ((FLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (FLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (FLS_MCU_TYPE_FC7300F4MDS == STD_ON))
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

typedef uint32 (*Fls_Status_Read)(const uint32 type);
typedef void (*Fls_Status_Clear)(const uint32 type);

typedef enum
{
    FLASH_CTR_IDLE     = 0U,
    FLASH_CTR_ERASEING = 1U,
    FLASH_CTR_WRITEING = 2U,
} Flash_Ctr_Working_StatusType;

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/
#define FLS_START_SEC_VAR_INIT_32
#include "Fls_MemMap.h"
/** flash driver header for finding function in special address */
FLS_DATA_SECTION static const FLASH_ROM_API_ENTRY_T *s_pFlashDriver_FuncHeader =
    (const FLASH_ROM_API_ENTRY_T *)(FLASHDRV_ADDR);
FLS_DATA_SECTION static volatile uint32 *Fls_Flash_pTargetAddressPtr = NULL_PTR;
FLS_DATA_SECTION static const uint32    *Fls_Flash_pSourceAddressPtr = NULL_PTR;
FLS_DATA_SECTION static uint32           Fls_Flash_pDateBuffer[32]   = { 0 };

#if (FLS_TIMEOUT_HANDLING == STD_ON)
FLS_DATA_SECTION static uint32 Fls_u32LLDTimeout_Counter;
#endif

#if (FLS_WRITE_VERIFY_CHECK == STD_ON)
FLS_DATA_SECTION static Fls_LengthType Fls_u32LLDNumberOfStepBack;
#endif
#define FLS_STOP_SEC_VAR_INIT_32
#include "Fls_MemMap.h"

#define FLS_START_SEC_CONST_32
#include "Fls_MemMap.h"
#if (FLS_BLANK_CHECK_API == STD_ON)
FLS_DATA_SECTION static const uint32 Fls_Flash_ErasedValue = FLS_ERASED_VALUE;
#endif
#define FLS_STOP_SEC_CONST_32
#include "Fls_MemMap.h"

#define FLS_START_SEC_VAR_INIT_8
#include "Fls_MemMap.h"
FLS_DATA_SECTION static const volatile uint8 *volatile Fls_Flash_pReadAddressPtr = NULL_PTR;
#if ((FLS_COMPARE_API == STD_ON) || (FLS_BLANK_CHECK_API == STD_ON) || \
     (FLS_WRITE_VERIFY_CHECK == STD_ON))
FLS_DATA_SECTION static const volatile uint8 *volatile Fls_Flash_pCompareAddressPtr = NULL_PTR;
#endif
#define FLS_STOP_SEC_VAR_INIT_8
#include "Fls_MemMap.h"

#define FLS_START_SEC_VAR_INIT_UNSPECIFIED
#include "Fls_MemMap.h"
FLS_DATA_SECTION static volatile Flash_Ctr_Working_StatusType Fls_Flash_Working_State = FLASH_CTR_IDLE;
#define FLS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Fls_MemMap.h"
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"
FLS_TEXT_SECTION static Std_ReturnType FLASHDRIVER_LockSector(uint32 u32Address, uint8 bLock);
FLS_TEXT_SECTION static void           FLASHDRIVER_GetFlashConfig(uint32                      u32Address,
                                                                  Flash_Erase_Sector_CfgType *pFlash_api_cfg);
FLS_TEXT_SECTION static Std_ReturnType Fls_Flash_PageWrite(const uint32 Page_size);
#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

/*=================================================================================================
*                                      LOCAL FUNCTIONS
=================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"

/**
 * @brief        Flash Driver Function for lock/unlock sector
 *
 * @param        u32Address sector address
 * @param        bLock 0U-unlock, 1U-lock
 */
FLS_TEXT_SECTION static Std_ReturnType FLASHDRIVER_LockSector(uint32 u32Address, uint8 bLock)
{
    uint32         u32Temp;
    uint32         u32Val;
    Std_ReturnType eRetVal = (Std_ReturnType)E_OK;
    if ((u32Address >= DFLASH_ADDR_START) && (u32Address <= DFLASH_ADDR_END))
    {
        uint32 u32Index = (u32Address - DFLASH_ADDR_START) / DFLASH_BANK_SIZE;
        u32Temp         = ((uint32)1UL) << ((u32Address % DFLASH_BANK_SIZE) >> 13);
        u32Val          = Fls_HWA_GetFlashBankPELCK(u32Index);
        if (bLock != 0U)
        {
            u32Val |= u32Temp;
        }
        else
        {
            u32Val &= ~u32Temp;
        }
        Fls_HWA_SetFlashBankPELCK(u32Index + DFLASH_BANK0_NUM, u32Val);
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
FLS_TEXT_SECTION static void FLASHDRIVER_GetFlashConfig(uint32                      u32Address,
                                                        Flash_Erase_Sector_CfgType *pFlash_api_cfg)
{
    pFlash_api_cfg->blk_sel = ((u32Address - DFLASH_ADDR_START) / DFLASH_BANK_SIZE) +
                              DFLASH_BANK0_NUM;
    pFlash_api_cfg->dest = u32Address;
}

/**
 * @brief        Get Flash Configuration
 *
 * @param        u32Address the flash address
 * @param        pFlash_api_cfg out flash parameter
 */
FLS_TEXT_SECTION static void FLASHDRIVER_DataEcc_PreHandle(uint32 *pu32EccStatus)
{
    Fls_HWA_Get_DataEccStatus(pu32EccStatus);
    Fls_HWA_SuppressDataEccError();
    ((Fls_Status_Clear)FLS_CLEAR_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK);
}

/**
 * @brief        Get Flash Configuration
 *
 * @param        u32Address the flash address
 * @param        pFlash_api_cfg out flash parameter
 */
FLS_TEXT_SECTION static void FLASHDRIVER_DataEcc_PostHandle(uint32 *pu32EccStatus)
{
    Fls_HWA_Set_DataEccCtrl(pu32EccStatus);
}

/**
 * @brief          Execute an interlock write and next program.
 *
 * @param[in]      TotalBytes Total number of bytes to program
 *
 */
FLS_TEXT_SECTION static Std_ReturnType Fls_Flash_PageWrite(const uint32 Page_size)
{
    Std_ReturnType     eRetVal = (Std_ReturnType)E_OK;
    uint32             u32Temp;
    Flash_Prgm_CfgType tFlash_api_cfg = { 0 };
    tFlash_api_cfg.pgff               = FLASH_REG_BIT_CFG_DISABLE;
    tFlash_api_cfg.dest               = (uint32)Fls_Flash_pTargetAddressPtr;
    tFlash_api_cfg.size               = Page_size >> 2; /* one data is 4 bytes  */
    /* PRQA S 311 ++ #Misra-C:2012 Rule-11.8 A cast shall not remove any const or volatile
     * qualification from the type pointed to by a pointer Reason: A point const should be
     * performed Here Unavoidably.*/
    tFlash_api_cfg.pData = (uint32 *)Fls_Flash_pSourceAddressPtr;
    /* PRQA S 311 -- */
    tFlash_api_cfg.wdg_tune = WDG_TUNE_DISABLE;
    /* SWS_Fls_00215 SWS_Fls_00211 */
    SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_01();
    u32Temp = Fls_HWA_GetFlashStatus();
    if (u32Temp == FLASH_HARDWARE_STATUS_IDLE)
    {
        if ((Std_ReturnType)E_OK == FLASHDRIVER_LockSector((uint32)Fls_Flash_pTargetAddressPtr, 0U))
        {
#if ((FLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (FLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (FLS_MCU_TYPE_FC7300F4MDS == STD_ON))
            u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_Program(&tFlash_api_cfg);
#else
            u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_Program(&tFlash_api_cfg,
                                                                   FLASH_API_DISABLE,
                                                                   FLASH_API_SIZE);
#endif
            FLASHDRIVER_LockSector((uint32)Fls_Flash_pTargetAddressPtr, 1U);
            if (u32Temp == STATUS_SUCCESS)
            {
                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
                 * applied to an expression of pointer type Reason: A pointer += should be performed
                 * Here Unavoidably.*/
                Fls_Flash_pTargetAddressPtr = Fls_Flash_pTargetAddressPtr + (Page_size >> 2);
                Fls_Flash_pSourceAddressPtr = Fls_Flash_pSourceAddressPtr + (Page_size >> 2);
                /* PRQA S 488 -- */
            }
            else
            {
                eRetVal = (Std_ReturnType)E_NOT_OK;
            }
        }
        else
        {
            FLASHDRIVER_LockSector((uint32)Fls_Flash_pTargetAddressPtr, 1U);
            eRetVal = (Std_ReturnType)E_NOT_OK;
        }
    }
    else
    {
        eRetVal = (Std_ReturnType)E_NOT_OK;
    }
    SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_01();
    return eRetVal;
}

#if (FLS_ERASE_VERIFY_CHECK == STD_ON)
/**
 * @brief          Check that the addressed flash memory area is erased.
 *
 * @param[in]      pFlashAreaPtr first address of the addressed flash memory area
 *                 aligned to the MCU bus width
 * @param[in]      u32DataLength number of bytes to check (aligned to the bus width)
 *
 * @return         Fls_LLDReturnType
 * @retval         FLASH_E_OK operation succeeded
 * @retval         FLASH_E_FAILED operation failed due to hardware error (ECC)
 *                 or contents of the addressed memory area don't match with value of
 *                 an erased flash cell
 */
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_Flash_VerifyErase(
    const volatile Fls_Flash_DataBusWidthType *pFlashAreaPtr,
    const Fls_LengthType                       u32DataLength)
{
    uint32            u32Temp = 0;
    Fls_LLDReturnType eRetVal = FLASH_E_OK;

    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied to
     * an expression of pointer type Reason: A pointer += should be performed Here Unavoidably.*/
    volatile const uint8 *pFlashAreaEndPtr = ((const volatile uint8 *)pFlashAreaPtr) + u32DataLength;
    /* PRQA S 488 -- */

    Fls_Flash_pReadAddressPtr = (const volatile uint8 *)pFlashAreaPtr;

    FLASHDRIVER_DataEcc_PreHandle(&u32Temp);
    /* Compiler_Warning: see fls_c_REF_CW_01 */
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied to
     * an expression of pointer type Reason: A pointer += should be performed Here Unavoidably.*/
    for (const volatile uint8 *pTemp = ((const volatile uint8 *)pFlashAreaPtr);
         ((uint32)pTemp) < ((uint32)pFlashAreaEndPtr);
         pTemp += sizeof(Fls_Flash_DataBusWidthType))
    /* PRQA S 488 -- */
    {
        Fls_Flash_DataBusWidthType data;
        /* Compiler_Warning: see fls_c_REF_CW_01 */
        /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
         * object type and a pointer to a different object type Reason: A different pointer cast
         * should be performed Here Unavoidably.*/
        /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
         * object type and a pointer to a different object type Reason: A pointer cast to stricter
         * alignment should be performed Here Unavoidably.*/
        data = *((volatile const Fls_Flash_DataBusWidthType *)pTemp);
        /* PRQA S 3305 -- */
        /* PRQA S 310 -- */

        if (FLS_ERASED_VALUE != data)
        {
            eRetVal = FLASH_E_FAILED;
            break; /* Read data differs from erased value */
        }
        else
        {
            Fls_Flash_pReadAddressPtr += sizeof(Fls_Flash_DataBusWidthType);
        }
    }

    if (STATUS_ECC_ERROR == ((Fls_Status_Read)FLS_READ_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK))
    {
        eRetVal = FLASH_E_FAILED;
        ((Fls_Status_Clear)FLS_CLEAR_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK);
    }
    else
    {
        /* avoid Misra error*/
    }

    if (eRetVal == FLASH_E_OK)
    {
        /* avoid Misra error*/
    }
    else
    {
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* [SWS_Fls_00313 SWS_Fls_00022 SWS_Fls_00055 */
        (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                     FLS_INSTANCE_ID,
                                     FLS_MAINFUNCTION_ID,
                                     FLS_E_VERIFY_ERASE_FAILED);
#endif
    }

    FLASHDRIVER_DataEcc_PostHandle(&u32Temp);

    return eRetVal;
}
#endif /* FLS_ERASE_VERIFY_CHECK */

#if (FLS_WRITE_VERIFY_CHECK == STD_ON)
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
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_Flash_VerifyWrite(
    const volatile Fls_Flash_DataBusWidthType *pFlashAreaPtr,
    const Fls_Flash_DataBusWidthType          *pUserBufferPtr,
    const Fls_LengthType                       u32DataLength)
{
    uint32                u32Temp = 0;
    Fls_LLDReturnType     eRetVal = FLASH_E_OK;
    volatile const uint8 *pAddr   = NULL_PTR;
    /* Update the source data pointer for next compare */
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied to
     * an expression of pointer type Reason: A pointer += should not be performed Here Unavoidably.*/
    volatile const uint8 *pFlashAreaEndPtr = ((const volatile uint8 *)pFlashAreaPtr) + u32DataLength;
    /* PRQA S 488 -- */

    /*
     * between a pointer to object type and a different pointer to object type
     */
    Fls_Flash_pCompareAddressPtr = ((const uint8 *)pUserBufferPtr);
    Fls_Flash_pReadAddressPtr    = (const volatile uint8 *)pFlashAreaPtr;
    /* Update the source data pointer for next compare */

    FLASHDRIVER_DataEcc_PreHandle(&u32Temp);
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied to
     * an expression of pointer type Reason: A pointer += should be performed Here Unavoidably.*/
    for (const volatile uint8 *pTemp = ((const volatile uint8 *)pFlashAreaPtr);
         ((uint32)pTemp) < ((uint32)pFlashAreaEndPtr);
         pTemp += sizeof(Fls_Flash_DataBusWidthType))
    /* PRQA S 488 -- */
    {
        Fls_Flash_DataBusWidthType data;
        Fls_Flash_DataBusWidthType dataCompare;
        /* Compiler_Warning: see fls_c_REF_CW_01 */
        /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
         * object type and a pointer to a different object type Reason: A different pointer cast
         * should be performed Here Unavoidably.*/
        /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
         * object type and a pointer to a different object type Reason: A pointer cast to stricter
         * alignment should be performed Here Unavoidably.*/
        data = *((volatile const Fls_Flash_DataBusWidthType *)pTemp);
        /* PRQA S 3305 -- */
        /* PRQA S 310 -- */

        pAddr = Fls_Flash_pCompareAddressPtr;
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
            dataCompare = *((volatile const Fls_Flash_DataBusWidthType *)pAddr);
            /* PRQA S 3305 -- */
            /* PRQA S 310 -- */
        }
        if (data != dataCompare)
        {
            eRetVal = FLASH_E_FAILED; /* Read data differs from erased value */
            break;
        }
        else
        {
            /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
             * applied to an expression of pointer type Reason: A pointer += should not be performed
             * Here Unavoidably.*/
            Fls_Flash_pCompareAddressPtr += sizeof(Fls_Flash_DataBusWidthType);
            /* PRQA S 488 -- */
        }
    }

    if (STATUS_ECC_ERROR == ((Fls_Status_Read)FLS_READ_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK))
    {
        eRetVal = FLASH_E_FAILED;
        ((Fls_Status_Clear)FLS_CLEAR_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK);
    }
    else
    {
        /* avoid Misra error*/
    }

    if (eRetVal == FLASH_E_OK)
    {
        /* avoid Misra error*/
    }
    else
    {
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* [SWS_Fls_00314 SWS_Fls_00056 */
        (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                     FLS_INSTANCE_ID,
                                     FLS_MAINFUNCTION_ID,
                                     FLS_E_VERIFY_WRITE_FAILED);
#endif
    }

    FLASHDRIVER_DataEcc_PostHandle(&u32Temp);

    return eRetVal;
}
#endif /* FLS_WRITE_VERIFY_CHECK == STD_ON */

#if ((FLS_COMPARE_API == STD_ON) || (FLS_BLANK_CHECK_API == STD_ON))
/**
 * @brief          Calculate length of initial 8-bit flash read.
 *
 * @param[in]      pSourceAddrPtr Source pointer
 * @param[in]      TotalBytes Total number of bytes to read
 */
FLS_TEXT_SECTION static uint32 Fls_Flash_CalcInitDataLength(
    const volatile uint8 *volatile const pSourceAddrPtr,
    uint32 u32TotalBytes)
{
    /* Calc length of initial 8-bit transfer */
    uint32 u32Length = ((uint32)pSourceAddrPtr) & (sizeof(Fls_Flash_DataBusWidthType) - 1UL);

    if (u32Length != 0U)
    {
        u32Length = sizeof(Fls_Flash_DataBusWidthType) - u32Length;
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
 * @return         Fls_LLDReturnType
 * @retval         FLASH_E_OK Operation succeeded
 * @retval         FLASH_E_BLOCK_INCONSISTENT Data buffer doesn't match with content of flash sector
 */
FLS_TEXT_SECTION static Fls_LLDReturnType Fls_Flash_SectorCompareUnalignBytes(
    const volatile uint8 *pReadAddressEndPtr,
    const uint8 *const    pDataPtr)
{
    Fls_LLDReturnType     eRetVal                  = FLASH_E_OK;
    uint8                 Fls_Flash_u8ReadAddress8 = 0U;
    volatile const uint8 *pAddr                    = NULL_PTR;
    for (const volatile uint8 *pTemp = Fls_Flash_pReadAddressPtr;
         ((uint32)pTemp) < ((uint32)pReadAddressEndPtr);
         pTemp++)
    {
        /* read flash location */
        Fls_Flash_u8ReadAddress8 = *pTemp;

        pAddr = Fls_Flash_pCompareAddressPtr;
        if (*pAddr == Fls_Flash_u8ReadAddress8)
        {
#if (FLS_BLANK_CHECK_API == STD_ON)
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
                Fls_Flash_pCompareAddressPtr = Fls_Flash_pCompareAddressPtr + 1;
            }
        }
        else
        {
            eRetVal = FLASH_E_BLOCK_INCONSISTENT;
            break;
        }

        Fls_Flash_pReadAddressPtr = Fls_Flash_pReadAddressPtr + 1;
    }

    return eRetVal;
}

#endif /* ( FLS_COMPARE_API == STD_ON ) || (FLS_BLANK_CHECK_API == STD_ON) */

#if ((FLS_COMPARE_API == STD_ON) || (FLS_BLANK_CHECK_API == STD_ON))
/**
 * @brief          Calculate length of optimized wide flash reads.
 *
 * @param[in]      u32InitDataLength Calculated by Fls_Flash_CalcInitDataLength
 * @param[in]      u32TotalBytes Total number of bytes to read
 *
 * @return         u32Length of optimized 32-bit or 64-bit flash reads in bytes
 */
FLS_TEXT_SECTION static uint32 Fls_Flash_CalcWideDataLength(const uint32 u32InitDataLength,
                                                            const uint32 u32TotalBytes)
{
    uint32 u32Length = ((u32TotalBytes - u32InitDataLength) &
                        (~(sizeof(Fls_Flash_DataBusWidthType) - 1UL)));
    return u32Length;
}
#endif /* ( FLS_COMPARE_API == STD_ON ) || (FLS_BLANK_CHECK_API == STD_ON) */

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
 *
 * @brief          Wait for HW operation to complete, with timeout.
 * @return         Success (DONE)
 */
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_WaitForOperationFinish(void)
{
#if (FLS_TIMEOUT_HANDLING == STD_ON)
    uint32 u32TimerCounterAbort = FLS_ABT_TIMEOUT_VALUE;
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */

    Fls_LLDReturnType eRetVal = FLASH_E_FAILED;

    if (Fls_Flash_Working_State == FLASH_CTR_IDLE)
    {
        eRetVal = FLASH_E_OK;
    }
    else
    {
#if (FLS_TIMEOUT_HANDLING == STD_ON)
        while ((s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check() == STATUS_HVOP) &&
               (0U < u32TimerCounterAbort))
        {
            --u32TimerCounterAbort;
        }
#else
        while (s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check() == STATUS_HVOP)
        {
        }
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */

        if (s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check() != STATUS_HVOP)
        {
            if (Fls_Flash_Working_State == FLASH_CTR_ERASEING)
            {
                if (s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear() == STATUS_SUCCESS)
                {
                    /* OK, memory idle */
                    eRetVal                 = FLASH_E_OK;
                    Fls_Flash_Working_State = FLASH_CTR_IDLE;
                }
                else
                {
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                    /* SWS_Fls_00315 */
                    (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                                 FLS_INSTANCE_ID,
                                                 FLS_ERASE_ID,
                                                 FLS_E_ERASE_FAILED);
#endif
                    eRetVal = FLASH_E_FAILED;
                }
            }
            else
            {
                if (s_pFlashDriver_FuncHeader->FLASH_DRV_Program_Clear() == STATUS_SUCCESS)
                {
                    /* OK, memory idle */
                    eRetVal                 = FLASH_E_OK;
                    Fls_Flash_Working_State = FLASH_CTR_IDLE;
                }
                else
                {
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                    /* SWS_Fls_00316 */
                    (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                                 FLS_INSTANCE_ID,
                                                 FLS_WRITE_ID,
                                                 FLS_E_WRITE_FAILED);
#endif
                    eRetVal = FLASH_E_FAILED;
                }
            }
        }
        else
        {
#if ((FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF) && (FLS_TIMEOUT_HANDLING == STD_ON))
            if (Fls_Flash_Working_State == FLASH_CTR_ERASEING)
            {
                /* [SWS_Fls_00361 */
                (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                             FLS_INSTANCE_ID,
                                             FLS_ERASE_ID,
                                             FLS_E_TIMEOUT);
            }
            else
            {
                /* [SWS_Fls_00361 */
                (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                             FLS_INSTANCE_ID,
                                             FLS_WRITE_ID,
                                             FLS_E_TIMEOUT);
            }
#endif
            /* error, memory controller not idle */
            eRetVal = FLASH_E_FAILED;
        }
    }

    return eRetVal;
}

/**
 * @brief          Initialize flash hardware.
 */
FLS_TEXT_SECTION void Fls_Flash_Init(void)
{
    if (FLASH_E_OK == Fls_Flash_WaitForOperationFinish())
    {
        Fls_eLLDJobResult = MEMIF_JOB_OK;
#if (FLS_DATA_ERROR_SUPRESSION == STD_ON)
        Fls_HWA_SuppressDataEccError();
#endif
    }
    else
    {
        Fls_eLLDJobResult = MEMIF_JOB_FAILED;
        Fls_eLLDJob       = FLASH_JOB_NONE;
    }
}

#if (FLS_CANCEL_API == STD_ON)
/**
 * @brief          Cancel ongoing erase or write hardware job.
 */
FLS_TEXT_SECTION void Fls_Flash_Cancel(void)
{
    /* some hardware job (asynchronous) is pending */

    /* Wait for current pending operation to finish, as there is no hardware way to abort it */
    if (FLASH_E_OK == Fls_Flash_WaitForOperationFinish())
    {
        /* memory idle, no operation is pending */
        /* SWS_Fls_00335 */
        Fls_eLLDJob       = FLASH_JOB_NONE;
        Fls_eLLDJobResult = MEMIF_JOB_CANCELED;
    }
}
#endif /* FLS_CANCEL_API == STD_ON */

/**
 * @brief          Process ongoing erase  hardware job.
 */
FLS_TEXT_SECTION void Fls_Flash_MainFunctionErase(void)
{
    uint32 u32Temp;
    /* if erase finished */
    u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check();
    /* check if finished */
    if (u32Temp == STATUS_HVOP)
    {
#if (FLS_TIMEOUT_HANDLING == STD_ON)
        /* SWS_Fls_00272 */
        /* Operation in progress, handle possible timeout */
        Fls_u32LLDTimeout_Counter--;
        if (0U == Fls_u32LLDTimeout_Counter)
        {
            /* erase operation timeout-ed. operations cannot be aborted */
            /* erase operation failed */
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Fls_00361 SWS_Fls_00359 */
            (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                         FLS_INSTANCE_ID,
                                         FLS_MAINFUNCTION_ID,
                                         FLS_E_TIMEOUT);
#endif
            Fls_eLLDJob       = FLASH_JOB_NONE;
            Fls_eLLDJobResult = MEMIF_JOB_FAILED;
            s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear();
            Fls_Flash_Working_State = FLASH_CTR_IDLE;
            /* return */
        }
#endif
    }
    else if (u32Temp == STATUS_SUCCESS)
    {
        u32Temp                 = s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear();
        Fls_Flash_Working_State = FLASH_CTR_IDLE;
        if (u32Temp == STATUS_SUCCESS)
        {
#if (FLS_ERASE_VERIFY_CHECK == STD_ON)
            if (FLASH_E_OK != Fls_Flash_VerifyErase(Fls_Flash_pTargetAddressPtr, D_FLASH_SECTOR_SIZE))
            {
                /* erase operation failed */
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                /* SWS_Fls_00315 */
                (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                             FLS_INSTANCE_ID,
                                             FLS_MAINFUNCTION_ID,
                                             FLS_E_ERASE_FAILED);
#endif
                Fls_eLLDJob       = FLASH_JOB_NONE;
                Fls_eLLDJobResult = MEMIF_JOB_FAILED;
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
                Fls_u32JobSectorIt++; /* The sector was successfully erased, increment the sector iterator.*/
                /* PRQA S 3387 -- */
                /* PRQA S 488 -- */
                Fls_eLLDJob       = FLASH_JOB_NONE;
                Fls_eLLDJobResult = MEMIF_JOB_OK;
#if (FLS_ERASE_VERIFY_CHECK == STD_ON)
            }
#endif
        }
        else
        {
            /* erase operation failed */
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* SWS_Fls_00315 SWS_Fls_00104 */
            (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                         FLS_INSTANCE_ID,
                                         FLS_MAINFUNCTION_ID,
                                         FLS_E_ERASE_FAILED);
#endif
            Fls_eLLDJob       = FLASH_JOB_NONE;
            Fls_eLLDJobResult = MEMIF_JOB_FAILED;
        }
    }
    else
    {
        s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear();
        Fls_Flash_Working_State = FLASH_CTR_IDLE;
        /* erase operation failed */
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Fls_00315 SWS_Fls_00104 */
        (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                     FLS_INSTANCE_ID,
                                     FLS_MAINFUNCTION_ID,
                                     FLS_E_ERASE_FAILED);
#endif
        Fls_eLLDJob       = FLASH_JOB_NONE;
        Fls_eLLDJobResult = MEMIF_JOB_FAILED;
    }
}

/**
 * @brief          Process ongoing write hardware job.
 */
FLS_TEXT_SECTION void Fls_Flash_MainFunctionWrite(void)
{
    uint32 u32Temp;
    /* if write finished */
    u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_HV_Status_Check();
    /* check if finished */
    if (u32Temp == STATUS_HVOP)
    {
#if (FLS_TIMEOUT_HANDLING == STD_ON)
        /* SWS_Fls_00272 */
        /* Operation in progress, handle possible timeout */
        Fls_u32LLDTimeout_Counter--;
        if (0U == Fls_u32LLDTimeout_Counter)
        {
            /* write operation timeout-ed. operations cannot be aborted */
            /* write operation failed */
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* [SWS_Fls_00361 SWS_Fls_00360 */
            (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                         FLS_INSTANCE_ID,
                                         FLS_MAINFUNCTION_ID,
                                         FLS_E_TIMEOUT);
#endif
            Fls_eLLDJob       = FLASH_JOB_NONE;
            Fls_eLLDJobResult = MEMIF_JOB_FAILED;
            s_pFlashDriver_FuncHeader->FLASH_DRV_Program_Clear();
            Fls_Flash_Working_State = FLASH_CTR_IDLE;
        }
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */
    }
    else if (u32Temp == STATUS_SUCCESS)
    {
        u32Temp                 = s_pFlashDriver_FuncHeader->FLASH_DRV_Program_Clear();
        Fls_Flash_Working_State = FLASH_CTR_IDLE;
        if (u32Temp == STATUS_SUCCESS)
        {
            /* program operation was successful */

#if (FLS_WRITE_VERIFY_CHECK == STD_ON)
            /*
             * only allowed form of pointer arithmetic
             */
            if (FLASH_E_OK !=
                Fls_Flash_VerifyWrite /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -=
                                       * operators should not be applied to an expression of pointer
                                       * type Reason: A pointer += should be performed Here
                                       * Unavoidably.*/
                (Fls_Flash_pTargetAddressPtr - (Fls_u32LLDNumberOfStepBack / 4U),
                 Fls_Flash_pSourceAddressPtr - (Fls_u32LLDNumberOfStepBack / 4U), /* PRQA S 488 -- */
                 Fls_u32LLDNumberOfStepBack))
            {
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
                /* SWS_Fls_00316 SWS_Fls_00105 */
                (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                             FLS_INSTANCE_ID,
                                             FLS_MAINFUNCTION_ID,
                                             FLS_E_WRITE_FAILED);
#endif
                /* terminate program operation */
                Fls_eLLDJob       = FLASH_JOB_NONE;
                Fls_eLLDJobResult = MEMIF_JOB_FAILED;
            }
            else
            {
                /* program operation succeed */
                Fls_eLLDJob       = FLASH_JOB_NONE;
                Fls_eLLDJobResult = MEMIF_JOB_OK;
            }
#else
            /* program operation succeed */
            Fls_eLLDJob       = FLASH_JOB_NONE;
            Fls_eLLDJobResult = MEMIF_JOB_OK;
#endif /* FLS_WRITE_VERIFY_CHECK == STD_ON */
        }
        else
        {
            /* program operation was not successful */

            /* program operation failed */
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
            /* SWS_Fls_00316 SWS_Fls_00105 */
            (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                         FLS_INSTANCE_ID,
                                         FLS_MAINFUNCTION_ID,
                                         FLS_E_WRITE_FAILED);
#endif
            Fls_eLLDJob       = FLASH_JOB_NONE;
            Fls_eLLDJobResult = MEMIF_JOB_FAILED;
            /* return */
        }
    }
    else
    {
        s_pFlashDriver_FuncHeader->FLASH_DRV_Program_Clear();
        Fls_Flash_Working_State = FLASH_CTR_IDLE;
        /* erase operation failed */
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        /* SWS_Fls_00316 */
        (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                     FLS_INSTANCE_ID,
                                     FLS_MAINFUNCTION_ID,
                                     FLS_E_WRITE_FAILED);
#endif
        Fls_eLLDJob       = FLASH_JOB_NONE;
        Fls_eLLDJobResult = MEMIF_JOB_FAILED;
    }
}

/**
 * @brief          Erase one complete flash sector.
 *
 * @param[in]      ePhySector Physical sector ID
 *
 * @return         Fls_LLDReturnType
 * @retval         FLASH_E_OK Operation succeeded
 * @retval         FLASH_E_FAILED Operation failed due to hardware error
 * @retval         FLASH_E_PENDING The operation has not yet been finished
 */
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_Erase(const Fls_PhysicalSectorType ePhySector)
{
    Flash_Erase_Sector_CfgType tFlash_api_cfg = { 0 };
    uint32                     u32Temp;
    Fls_LLDReturnType          eRetVal;

    Fls_Flash_pTargetAddressPtr = (uint32 *)(D_FLASH_BASE_ADDR + (ePhySector * D_FLASH_SECTOR_SIZE));

    FLASHDRIVER_GetFlashConfig((uint32)Fls_Flash_pTargetAddressPtr, &tFlash_api_cfg);
    s_pFlashDriver_FuncHeader->FLASH_DRV_ENABLE_HOLD_CFG(FLASH_AUTO_HOLD_ENABLE);
    /* SWS_Fls_00215 SWS_Fls_00211 */
    SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_00();
    u32Temp = Fls_HWA_GetFlashStatus();
    if (u32Temp == FLASH_HARDWARE_STATUS_IDLE)
    {
        if ((Std_ReturnType)E_OK == FLASHDRIVER_LockSector((uint32)Fls_Flash_pTargetAddressPtr, 0U))
        {
            /* start erase */
#if ((FLS_MCU_TYPE_FC7300F8MDQ == STD_ON) || (FLS_MCU_TYPE_FC7300F4MDD == STD_ON) || \
     (FLS_MCU_TYPE_FC7300F4MDS == STD_ON))
            u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector(&tFlash_api_cfg);
#else
            u32Temp = s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector(&tFlash_api_cfg,
                                                                       FLASH_API_DISABLE,
                                                                       FLASH_API_SIZE);
#endif
            FLASHDRIVER_LockSector((uint32)Fls_Flash_pTargetAddressPtr, 1U);
            if (u32Temp == STATUS_SUCCESS)
            {
                /* schedule async job check for Fls_Flash_MainFunction */
                Fls_eLLDJob       = FLASH_JOB_ERASE;
                Fls_eLLDJobResult = MEMIF_JOB_PENDING;
#if (FLS_TIMEOUT_HANDLING == STD_ON)
                /* Initialize timeout counter */
                Fls_u32LLDTimeout_Counter = FLS_ASYNC_ERASE_TIMEOUT_VALUE;
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */
                eRetVal                 = FLASH_E_PENDING;
                Fls_Flash_Working_State = FLASH_CTR_ERASEING;
            }
            else
            {
                s_pFlashDriver_FuncHeader->FLASH_DRV_EraseSector_Clear();
                eRetVal = FLASH_E_FAILED;
            }
        }
        else
        {
            FLASHDRIVER_LockSector((uint32)Fls_Flash_pTargetAddressPtr, 1U);
            eRetVal = FLASH_E_FAILED;
        }
    }
    else
    {
        eRetVal = FLASH_E_FAILED;
    }
    SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_00();

    return eRetVal;
}

/**
 * @brief          Write one or more complete flash pages into given flash sector.
 *
 * @param[in]      u32LogicAddr input logic address
 * @param[in]      u32DataLength data length in bytes
 * @param[in]      pDataPtr data to be written
 *
 * @return         Fls_LLDReturnType
 * @retval         FLASH_E_OK Operation succeeded
 * @retval         FLASH_E_FAILED Operation failed due to hardware error
 * @retval         FLASH_E_PENDING The operation has not yet been finished
 */
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_Write(const Fls_AddressType u32LogicAddr,
                                                   const Fls_LengthType  u32DataLength,
                                                   const uint8 *const    pDataPtr)
{
    Fls_LLDReturnType eRetVal = FLASH_E_PENDING;
    /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a pointer to
     * object type and a pointer to a different object type Reason: A different pointer cast should
     * be performed Here Unavoidably.*/
    /* SWS_Fls_00389 */
    uint8 *pTempDataPtr = (uint8 *)Fls_Flash_pDateBuffer;
    for (uint32 u32Index = 0U; u32Index < u32DataLength; u32Index++)
    {
        pTempDataPtr[u32Index] = pDataPtr[u32Index];
    }
    Fls_Flash_pSourceAddressPtr = Fls_Flash_pDateBuffer;
    /* PRQA S 310 -- */

    Fls_Flash_pTargetAddressPtr = (uint32 *)(D_FLASH_BASE_ADDR + u32LogicAddr);

#if (FLS_ERASE_VERIFY_CHECK == STD_ON)
    if (FLASH_E_OK != Fls_Flash_VerifyErase(Fls_Flash_pTargetAddressPtr, u32DataLength))
    {
        /* verify erase failed */
        eRetVal = FLASH_E_FAILED;
    }
    else
#endif
    {
        /*It is time to do word or double word programming */
        s_pFlashDriver_FuncHeader->FLASH_DRV_ENABLE_HOLD_CFG(FLASH_AUTO_HOLD_ENABLE);
        if ((Std_ReturnType)E_OK == Fls_Flash_PageWrite(u32DataLength))
        {
#if (FLS_WRITE_VERIFY_CHECK == STD_ON)
            /* target and source address has been increased by Fls_Flash_PageWrite,
            so we need a number of step back for both pointer to perform a write
            verify check*/
            /* @violates @ref fls_flash_c_REF_10 Array indexing shall be the only
            allowed form of pointer arithmetic */
            Fls_u32LLDNumberOfStepBack = u32DataLength;
#endif
            Fls_Flash_Working_State = FLASH_CTR_WRITEING;
            Fls_eLLDJob             = FLASH_JOB_WRITE;
            Fls_eLLDJobResult       = MEMIF_JOB_PENDING;
        }
        else
        {
            eRetVal = FLASH_E_FAILED;
        }
    }

#if (FLS_TIMEOUT_HANDLING == STD_ON)
    /* Initialize timeout counter */
    Fls_u32LLDTimeout_Counter = FLS_ASYNC_WRITE_TIMEOUT_VALUE;
#endif /* FLS_TIMEOUT_HANDLING == STD_ON */

    return eRetVal;
}

/**
 * @brief          Read one or more bytes from given flash sector
 *
 * @param[in]      u32LogicAddr input logic address
 * @param[in]      u32DataLength data length in bytes
 * @param[out]     pDataPtr     where read data to be written
 *
 * @return Fls_LLDReturnType
 * @retval FLASH_E_OK Operation succeeded
 **/

FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_Read(const Fls_AddressType u32LogicAddr,
                                                  Fls_LengthType        u32DataLength,
                                                  uint8                *pDataPtr)
{
    uint32                u32Temp = 0;
    Fls_LLDReturnType     eRetVal = FLASH_E_OK;
    volatile const uint8 *pAddr   = NULL_PTR;
    Fls_Flash_pReadAddressPtr     = (volatile const uint8 *)(D_FLASH_BASE_ADDR + u32LogicAddr);

    FLASHDRIVER_DataEcc_PreHandle(&u32Temp);
    for (uint32 u32Index = 0U; u32Index < u32DataLength; u32Index++)
    {
        pAddr                     = Fls_Flash_pReadAddressPtr;
        pDataPtr[u32Index]        = *pAddr;
        Fls_Flash_pReadAddressPtr = Fls_Flash_pReadAddressPtr + 1;
    }

    if (STATUS_ECC_ERROR == ((Fls_Status_Read)FLS_READ_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK))
    {
        eRetVal = FLASH_E_FAILED;
        ((Fls_Status_Clear)FLS_CLEAR_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK);
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                     FLS_INSTANCE_ID,
                                     FLS_READ_ID,
                                     FLS_E_READ_FAILED);
#endif
    }
    else
    {
        /* avoid Misra error*/
    }
    FLASHDRIVER_DataEcc_PostHandle(&u32Temp);

    return eRetVal;
}

#if ((FLS_COMPARE_API == STD_ON) || (FLS_BLANK_CHECK_API == STD_ON))
/**
 * @brief          Compare data buffer with content of given flash sector.
 *Fls_Flash_MainFunctionErase
 * @param[in]      u32LogicAddr input logic address
 * @param[in]      u32DataLength data length in bytes
 * @param[in]      pDataPtr data to be compared
 *
 * @return         Fls_LLDReturnType
 * @retval         FLASH_E_OK Operation succeeded
 * @retval         FLASH_E_BLOCK_INCONSISTENT Data buffer doesn't match with content of flash sector
 */
FLS_TEXT_SECTION Fls_LLDReturnType Fls_Flash_Compare(const Fls_AddressType u32LogicAddr,
                                                     const Fls_LengthType  u32DataLength,
                                                     const uint8 *const    pDataPtr)
{
    Fls_LLDReturnType     eRetVal                    = FLASH_E_OK;
    uint32                u32InitDataLength          = 0UL;
    uint32                Fls_Flash_u32ReadAddress32 = 0UL;
    uint32                Fls_Flash_u32DataCompare32 = 0UL;
    uint32                u32Temp                    = 0UL;
    volatile const uint8 *pAddr                      = NULL_PTR;
    volatile const uint8 *pReadAddressEndPtr         = NULL_PTR;
    volatile const uint8 *pReadBlockAddressEndPtr    = NULL_PTR;

    Fls_Flash_pReadAddressPtr = (volatile const uint8 *)(D_FLASH_BASE_ADDR + u32LogicAddr);

#if (FLS_BLANK_CHECK_API == STD_ON)
    if (NULL_PTR == pDataPtr)
    {
        Fls_Flash_pCompareAddressPtr = (volatile const uint8 *)&Fls_Flash_ErasedValue;
    }
    else
#endif
    {
        /* COMPARE API */
        Fls_Flash_pCompareAddressPtr = pDataPtr;
    }
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied
     * to an expression of pointer type Reason: A pointer += should be performed Here Unavoidably.*/
    pReadAddressEndPtr = Fls_Flash_pReadAddressPtr + u32DataLength;
    /* PRQA S 488 -- */
    /* Calculate end address of initial 8-bit transfer */
    u32InitDataLength = Fls_Flash_CalcInitDataLength(Fls_Flash_pReadAddressPtr, u32DataLength);
    /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be applied
     * to an expression of pointer type Reason: A pointer += should be performed Here Unavoidably.*/
    pReadBlockAddressEndPtr = Fls_Flash_pReadAddressPtr + u32InitDataLength;
    /* PRQA S 488 -- */

    FLASHDRIVER_DataEcc_PreHandle(&u32Temp);

    eRetVal = Fls_Flash_SectorCompareUnalignBytes(pReadBlockAddressEndPtr, pDataPtr);
    if (eRetVal == FLASH_E_OK)
    {
        /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
         * applied to an expression of pointer type Reason: A pointer += should be performed
         * Here Unavoidably.*/
        pReadBlockAddressEndPtr += Fls_Flash_CalcWideDataLength(u32InitDataLength, u32DataLength);
        /* PRQA S 488 -- */
        /* Compiler_Warning: see fls_c_REF_CW_01 */
        /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should not be
         * applied to an expression of pointer type Reason: A pointer += should be performed
         * Here Unavoidably.*/
        for (const volatile uint8 *pTemp = Fls_Flash_pReadAddressPtr;
             ((uint32)pTemp) < ((uint32)pReadBlockAddressEndPtr);
             pTemp += sizeof(Fls_Flash_DataBusWidthType))
        /* PRQA S 488 -- */
        {
            /* read flash location */
            /* Compiler_Warning: see fls_c_REF_CW_01 */
            /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a
             * pointer to object type and a pointer to a different object type Reason: A
             * different pointer cast should be performed Here Unavoidably.*/
            /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between a
             * pointer to object type and a pointer to a different object type Reason: A pointer
             * cast to stricter alignment should be performed Here Unavoidably.*/
            Fls_Flash_u32ReadAddress32 = *((const volatile Fls_Flash_DataBusWidthType *)pTemp);
            /* PRQA S 3305 -- */
            /* PRQA S 310 -- */

            pAddr = Fls_Flash_pCompareAddressPtr;
            if (0U != ((uint32)Fls_Flash_pCompareAddressPtr % 4U))
            {
                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators
                 * should not be applied to an expression of pointer type Reason: A pointer
                 * += should not be performed Here Unavoidably.*/
                Fls_Flash_u32DataCompare32 = ((uint32)(*(pAddr + 3U)) << 24U);
                Fls_Flash_u32DataCompare32 |= ((uint32)(*(pAddr + 2U)) << 16U);
                /* PRQA S 488 -- */
                /* PRQA S 489 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators
                 * should not be applied to an expression of pointer type Reason: A pointer
                 * +1 should not be performed Here Unavoidably.*/
                Fls_Flash_u32DataCompare32 |= ((uint32)(*(pAddr + 1U)) << 8U);
                /* PRQA S 489 -- */
                Fls_Flash_u32DataCompare32 |= ((uint32)(*(pAddr)));
            }
            else
            {
                /* PRQA S 310 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed
                 * between a pointer to object type and a pointer to a different object type
                 * Reason: A different pointer cast should be performed Here Unavoidably.*/
                /* PRQA S 3305 ++ #Misra-C:2012 Rule-11.3 A cast shall not be performed between
                 * a pointer to object type and a pointer to a different object type Reason:
                 * A pointer cast to stricter alignment should be performed Here Unavoidably.*/
                Fls_Flash_u32DataCompare32 = *((volatile const Fls_Flash_DataBusWidthType *)pAddr);
                /* PRQA S 3305 -- */
                /* PRQA S 310 -- */
            }

            if (Fls_Flash_u32DataCompare32 != Fls_Flash_u32ReadAddress32)
            {
                eRetVal = FLASH_E_BLOCK_INCONSISTENT;
                break;
            }
            else
            {
                /* avoid misra error */
            }

#if (FLS_BLANK_CHECK_API == STD_ON)
            if (NULL_PTR == pDataPtr)
            {
                /* BLANK_CHECK API */
            }
            else
#endif
            {
                /* COMPARE API */
                /* PRQA S 488 ++ #Misra-C:2012 Rule-18.4 The +, -, += and -= operators should
                 * not be applied to an expression of pointer type Reason: A pointer += should
                 * not be performed Here Unavoidably.*/
                Fls_Flash_pCompareAddressPtr += sizeof(Fls_Flash_DataBusWidthType);
                /* PRQA S 488 -- */
            }
            Fls_Flash_pReadAddressPtr = Fls_Flash_pReadAddressPtr +
                                        sizeof(Fls_Flash_DataBusWidthType);
        }
    }
    if (eRetVal == FLASH_E_OK)
    {
        eRetVal = Fls_Flash_SectorCompareUnalignBytes(pReadAddressEndPtr, pDataPtr);
    }

    if (STATUS_ECC_ERROR == ((Fls_Status_Read)FLS_READ_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK))
    {
        eRetVal = FLASH_E_FAILED;
        ((Fls_Status_Clear)FLS_CLEAR_DATA_FLASH_STATUS_ADDR)(FLASH_ECC_CHECK);
#if (FLS_DISABLE_DET_RUNTIME_REPORT_ERROR_STATUS == STD_OFF)
        (void)Det_ReportRuntimeError((uint16)FLS_MODULE_ID,
                                     FLS_INSTANCE_ID,
                                     FLS_COMPARE_ID,
                                     FLS_E_COMPARE_FAILED);
#endif
    }
    else
    {
        /* avoid Misra error*/
    }

    FLASHDRIVER_DataEcc_PostHandle(&u32Temp);

    return eRetVal;
}
#endif /* ( FLS_COMPARE_API == STD_ON ) || (FLS_BLANK_CHECK_API == STD_ON) */

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

#ifdef __cplusplus
}
#endif
