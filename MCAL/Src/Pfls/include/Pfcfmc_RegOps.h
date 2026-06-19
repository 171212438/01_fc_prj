/**
 *   @file    Fcpfmc_RegOps.h
 *   @version 1.5.1
 *
 *   @brief   Include pfmc registers file
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

#ifndef PFMC_REGOPS_H
#define PFMC_REGOPS_H

#ifdef __cplusplus
extern "C"
{
#endif
/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "Pfls_Driver.h"

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

#define FLASH_HARDWARE_STATUS_ADDR (0x40020000U)
#define FLASH_HARDWARE_STATUS_MASK (0x00FF0000U)
#define FLASH_HARDWARE_STATUS_IDLE (0x000000FFU)

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
#define PFLS_START_SEC_CODE
#include "Pfls_MemMap.h"

/**
 * @brief Set Flash Block n Coarse Program Erase Lock Reg.
 *
 * @param u8BankNum  Block Index
 * @param u32LockVal Lock Value
 * @return void
 */
LOCAL_INLINE void Pfls_HWA_SetFlashBankCPELCK(uint32 u8BankNum, uint32 u32LockVal)
{
#if ((PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    if (u8BankNum < 2)
    {
        FMC->FB_CPELCK[u8BankNum] = u32LockVal;
    }
    else
    {
        FMC->FB_CPELCK[u8BankNum + 2] = u32LockVal;
    }
#else
    FMC->FB_CPELCK[u8BankNum] = u32LockVal;
#endif
}

/**
 * @brief Set Flash Block n Fine Program Erase Lock Reg.
 *
 * @param u8BankNum  Block Index
 * @param u32LockVal Lock Value
 * @return void
 */
LOCAL_INLINE void Pfls_HWA_SetFlashBankFPELCK(uint32 u8BankNum, uint32 u32LockVal)
{
#if (PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON)
    if (u8BankNum <= 5)
    {
        FMC->FB_FPELCK[u8BankNum] = u32LockVal;
    }
    else if (u8BankNum == 6)
    {
        FMC->FB_FPELCK6 = u32LockVal;
    }
    else
    {
        FMC->FB_FPELCK7 = u32LockVal;
    }
#elif ((PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    if (u8BankNum < 2)
    {
        FMC->FB_FPELCK[u8BankNum] = u32LockVal;
    }
    else
    {
        FMC->FB_FPELCK[u8BankNum + 2] = u32LockVal;
    }
#else
    FMC->FB_FPELCK[u8BankNum] = u32LockVal;
#endif
}

/**
 * @brief Get Flash Block n Coarse Program Erase Lock Reg.
 *
 * @param u8BankNum  Block Index
 * @return uint32
 */
LOCAL_INLINE uint32 Pfls_HWA_GetFlashBankCPELCK(uint32 u8BankNum)
{
    uint32 u32RetVal = 0;
#if ((PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    if (u8BankNum < 2)
    {
        u32RetVal = FMC->FB_CPELCK[u8BankNum];
    }
    else
    {
        u32RetVal = FMC->FB_CPELCK[u8BankNum + 2];
    }
#else
    u32RetVal = FMC->FB_CPELCK[u8BankNum];
#endif
    return u32RetVal;
}

/**
 * @brief Get Flash Block n Fine Program Erase Lock Reg.
 *
 * @param u8BankNum  Block Index
 * @return uint32
 */
LOCAL_INLINE uint32 Pfls_HWA_GetFlashBankFPELCK(uint32 u8BankNum)
{
    uint32 u32RetVal = 0;
#if (PFLS_MCU_TYPE_FC7300F8MDQ == STD_ON)
    if (u8BankNum <= 5)
    {
        u32RetVal = FMC->FB_FPELCK[u8BankNum];
    }
    else if (u8BankNum == 6)
    {
        u32RetVal = FMC->FB_FPELCK6;
    }
    else
    {
        u32RetVal = FMC->FB_FPELCK7;
    }
#elif ((PFLS_MCU_TYPE_FC7300F4MDD == STD_ON) || (PFLS_MCU_TYPE_FC7300F4MDS == STD_ON))
    if (u8BankNum < 2)
    {
        u32RetVal = FMC->FB_FPELCK[u8BankNum];
    }
    else
    {
        u32RetVal = FMC->FB_FPELCK[u8BankNum + 2];
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
LOCAL_INLINE uint32 Pfls_HWA_GetFlashStatus(void)
{
    return (((*(volatile uint32 *)FLASH_HARDWARE_STATUS_ADDR) & FLASH_HARDWARE_STATUS_MASK) >> 16);
}

/**
 * @brief Disable ECC events for Date flash read access.
 *
 * @param void
 * @return void
 */
LOCAL_INLINE void Pfls_HWA_SuppressDataError(void)
{
    FMC->FEEC |= FMC_FEEC_DDBEE(1);
}

#define PFLS_STOP_SEC_CODE
#include "Pfls_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* #ifndef PFMC_REGOPS_H */
