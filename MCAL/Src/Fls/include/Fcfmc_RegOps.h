/**
 *   @file    Fcfmc_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   Include fmc registers file
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

#ifndef FMC_REGOPS_H
#define FMC_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Fls_Driver.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define FLS_START_SEC_CODE
#include "Fls_MemMap.h"

/**
 * @brief Set Flash Block n Fine Program Erase Lock Reg.
 *
 * @param u8BankNum  Block Index
 * @param u32LockVal Lock Value
 * @return void
 */
LOCAL_INLINE void Fls_HWA_SetFlashBankPELCK(uint32 u8BankNum, uint32 u32LockVal)
{
#if (FLS_MCU_TYPE_FC7300F8MDQ == STD_ON)
    if (u8BankNum == DFLASH_BANK0_NUM)
    {
        FMC->FB_FPELCK8 = u32LockVal;
    }
    else if (u8BankNum == DFLASH_BANK1_NUM)
    {
        FMC->FB_FPELCK9 = u32LockVal;
    }
    else if (u8BankNum == DFLASH_BANK2_NUM)
    {
        FMC->FB_FPELCK10 = u32LockVal;
    }
    else
    {
        /* Nothing for misra */
    }
#elif (FLS_MCU_TYPE_FC7300F4MDD == STD_ON)
    if (u8BankNum == DFLASH_BANK0_NUM)
    {
        FMC->FB_FPELCK8 = u32LockVal;
    }
    else if (u8BankNum == DFLASH_BANK1_NUM)
    {
        FMC->FB_FPELCK9 = u32LockVal;
    }
    else
    {
        /* Nothing for misra */
    }
#elif (FLS_MCU_TYPE_FC7300F4MDS == STD_ON)
    if (u8BankNum == DFLASH_BANK0_NUM)
    {
        FMC->FB_FPELCK8 = u32LockVal;
    }
    else
    {
        /* Nothing for misra */
    }
#else
    FMC->FB_FPELCK[u8BankNum] = u32LockVal;
#endif
}

/**
 * @brief Get Flash Block n Fine Program Erase Lock Reg.
 *
 * @param u8BankNum  Block Index
 * @return uint32
 */
LOCAL_INLINE uint32 Fls_HWA_GetFlashBankPELCK(uint32 u8BankNum)
{
    uint32 u32RetVal = 0;
#if (FLS_MCU_TYPE_FC7300F8MDQ == STD_ON)
    if (u8BankNum == DFLASH_BANK0_NUM)
    {
        u32RetVal = FMC->FB_FPELCK8;
    }
    else if (u8BankNum == DFLASH_BANK1_NUM)
    {
        u32RetVal = FMC->FB_FPELCK9;
    }
    else if (u8BankNum == DFLASH_BANK2_NUM)
    {
        u32RetVal = FMC->FB_FPELCK10;
    }
    else
    {
        /* Nothing for misra */
    }
#elif (FLS_MCU_TYPE_FC7300F4MDD == STD_ON)
    if (u8BankNum == DFLASH_BANK0_NUM)
    {
        u32RetVal = FMC->FB_FPELCK8;
    }
    else if (u8BankNum == DFLASH_BANK1_NUM)
    {
        u32RetVal = FMC->FB_FPELCK9;
    }
    else
    {
        /* Nothing for misra */
    }
#elif (FLS_MCU_TYPE_FC7300F4MDS == STD_ON)
    if (u8BankNum == DFLASH_BANK0_NUM)
    {
        u32RetVal = FMC->FB_FPELCK8;
    }
    else
    {
        /* Nothing for misra */
    }
#else
    u32RetVal = FMC->FB_FPELCK[u8BankNum];
#endif
    return u32RetVal;
}

/**
 * @brief Get the flash status.
 *
 * @param void
 * @return flash status
 */
LOCAL_INLINE uint32 Fls_HWA_GetFlashStatus(void)
{
    return (((*(volatile uint32 *)FLASH_HARDWARE_STATUS_ADDR) & FLASH_HARDWARE_STATUS_MASK) >> 16);
}

/**
 * @brief Disable ECC events for Date flash read access.
 *
 * @param void
 * @return void
 */
LOCAL_INLINE void Fls_HWA_SuppressDataEccError(void)
{
    FMC->FEEC |= FMC_FEEC_DES(1);
}

/**
 * @brief Enable ECC events for DFLASH read access.
 *
 * @return void
 */
FLS_TEXT_SECTION LOCAL_INLINE void Fls_HWA_EnableDataEccEvent(void)
{
    FMC->FEEC &= ~FMC_FEEC_DES(1);
}

/**
 * @brief Disable ECC events for DFLASH read access.
 *
 * @return Flash ECC Error Control Register
 */
FLS_TEXT_SECTION LOCAL_INLINE void Fls_HWA_Get_DataEccStatus(uint32 *pu32EccStatus)
{
    *pu32EccStatus = FMC->FEEC;
}

/**
 * @brief Disable ECC events for DFLASH read access.
 *
 * @return void
 */
FLS_TEXT_SECTION LOCAL_INLINE void Fls_HWA_Set_DataEccCtrl(uint32 *pu32EccStatus)
{
    FMC->FEEC = *pu32EccStatus;
}

#define FLS_STOP_SEC_CODE
#include "Fls_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* #ifndef FMC_REGOPS_H */
