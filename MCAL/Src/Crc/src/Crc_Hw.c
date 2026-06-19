/**
 *   @file    Crc_Hw.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Crc - Crc Hardware driver source file.
 *   @details
 *
 *   @addtogroup CRC
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : CRC
*   PLATFORM             : Flagchip FC7xxx
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
*   0.4.0       15/12/2023    QXW0119       N/A          Crc Initial Version
*   0.5.0       05/01/2024    QXW0119       N/A          Optimize_Code
*   0.6.0       18/03/2024    QXW0119       N/A          Add Crc8 hardware and support for FC7240
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "Crc_Hw.h"
#include "Crc_Reg.h"
#include "Crc_RegOps.h"
#if (CRC_MULTICORE_SUPPORT == STD_ON)
#include "SpinLock.h"
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
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define CRC_START_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Crc_MemMap.h"

#if (CRC_MULTICORE_SUPPORT == STD_ON)
/**
 * @brief          Resource management
 */
CRC_DATA_SECTION static volatile uint32 s_u8CrcHwUsedStatus[CRC_INSTANCE_COUNT] = { 0 };
CRC_DATA_SECTION static volatile uint32 s_u8CrcSpinLock                         = 0;
#endif

#define CRC_STOP_SEC_VAR_INIT_SHAREABLE_NO_CACHEABLE
#include "Crc_MemMap.h"

#define CRC_START_SEC_CONST_UNSPECIFIED
#include "Crc_MemMap.h"

/**
 * @brief          Base address of CRC hardware units
 */
CRC_DATA_SECTION static CRC_Type *const s_apCrcBase[CRC_INSTANCE_COUNT] = CRC_BASE_PTRS;

#define CRC_STOP_SEC_CONST_UNSPECIFIED
#include "Crc_MemMap.h"
/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

#if ((CRC_MULTICORE_SUPPORT == STD_ON) && (CRC_SPIN_LOCK_USED == STD_ON))
/**
 * @brief          Get the spin lock of the Adc
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Get spin lock success.
 * @retval         E_NOT_OK      Get spin lock failed.
 *
 */
CRC_TEXT_SECTION Std_ReturnType Crc_GetSpinLock(const uint8 u8Instance)
{
    Std_ReturnType eSucc = E_NOT_OK;
    /* PRQA S 2905 ++
                Constant: Positive integer value truncated by cast to a smaller unsigned type.
                REASON: The actual timeout period may vary depending on the MCU frequency.
        */
    uint32 u32Timeout = CRC_SPIN_LOCK_TIMEOUT;
    /* PRQA S 2905 -- */
    do
    {
        /* PRQA S 3415 ++ Constant: Right hand operand of '&&' or '||' is an expression with
         * persistent side effects.*/
#ifdef SPIN_LOCK_USE_SEMA
        while ((0U != u32Timeout) &&
               (E_OK != SpinLock_AcquireWithRes(SPINLOCK_SEMA_RES_ID_CRC, &s_u8CrcSpinLock)))
#else
        while ((0U != u32Timeout) && (E_OK != SpinLock_Acquire(&s_u8CrcSpinLock)))
#endif
        {
            u32Timeout--;
        }
        /* PRQA S 3415 -- */

        if (0U != u32Timeout)
        {
            if (s_u8CrcHwUsedStatus[u8Instance] == 0U)
            {
                s_u8CrcHwUsedStatus[u8Instance] = 1U;
                eSucc                           = E_OK;
            }
            else
            {
                u32Timeout--;
            }
            SpinLock_Release(&s_u8CrcSpinLock);
        }

        if (0U == u32Timeout)
        {
            break;
        }
    }
    while (eSucc != E_OK);

    return eSucc;
}

/**
 * @brief          Release the spin lock of the Adc
 *
 * @return         Std_ReturnType
 * @retval         E_OK          Release spin lock success.
 * @retval         E_NOT_OK      Release spin lock failed.
 *
 */
CRC_TEXT_SECTION void Crc_ReleaseSpinLock(const uint8 u8Instance)
{
    s_u8CrcHwUsedStatus[u8Instance] = 0U;
}

#endif

/**
 * @brief         Hardware level initializes the CRC Driver settings based on the configuration.
 * @param pInitCfg                - Pointer use to initialize the Crc hardware.
 * @param u8Instance              - CRC instance.
 */
CRC_TEXT_SECTION void Crc_Hw_Init(const Crc_InitType *pInitCfg, const uint8 u8Instance)
{
    CRC_Type *const pCrc = s_apCrcBase[u8Instance];

    if (pInitCfg->eBitWidth == CRC_BIT_8)
    {
        /* PRQA S 4393, 4332, 4521 ++
         * 4393: #Misra-C:2012: Rule-10.8 The value of a composite expression shall not be cast to
         * a different essential type category or a wider essential type.
         * 4332: #Misra-C:2012: Rule-10.5 The value of an expression should not be cast to an
         * inappropriate essential type.
         * 4521: #Misra-C:2012: Rule-10.1 Operands shall not be of an inappropriate essential type.
         * Reason: No problem doing this conversion as the value is within the range of the cast type.
         */
        /* set CRC bit width(8-bit) */
        CRC_HWA_SetBitWidth(pCrc, (CRC_BitWidthType)(0));
        CRC_HWA_Set_8Bit_Width(pCrc, (CRC_BitWidthType)1);
    }
    else
    {
        /* set CRC bit width(16-bit or 32-bit) */
        CRC_HWA_Set_8Bit_Width(pCrc, (CRC_BitWidthType)0);
        CRC_HWA_SetBitWidth(pCrc, (CRC_BitWidthType)(pInitCfg->eBitWidth - 1));
        /* PRQA S 4393, 4332, 4521 -- */
    }

    /* set CRC write/read swap and FXOR */
    CRC_HWA_SetWriteDataSwap(pCrc, pInitCfg->eWriteDataSwap);
    CRC_HWA_SetReadDataSwap(pCrc, pInitCfg->eReadDataSwap);
    CRC_HWA_SetReadDataFXOR(pCrc, pInitCfg->eReadDataFXOR);

    /* set CRC polynomial value */
    CRC_HWA_SetPolyVal(pCrc, (uint32)pInitCfg->u64Polynomial);

    /* set CRC seed value */
    CRC_SetSeed(u8Instance, (uint32)pInitCfg->u64SeedValue);
}

/**
 * @brief         Set the seed value.
 * @param u8Instance              - CRC instance.
 * @param u32SeedVal              - CRC seed value.
 */
CRC_TEXT_SECTION void CRC_SetSeed(uint8 u8Instance, uint32 u32SeedVal)
{
    CRC_Type *const pCrc = s_apCrcBase[u8Instance];

    CRC_HWA_SetDataOrSeed(pCrc, WRITE_COMMAND_SEED);
    CRC_HWA_SetSeedValue(pCrc, u32SeedVal);
    CRC_HWA_SetDataOrSeed(pCrc, WRITE_COMMAND_DATA);
}

/**
 * @brief         Calculate CRC value of all input data.
 * @param u8Instance              - CRC instance.
 * @param pData                   - Pointer to the Crc Data Input.
 * @param u32DataSize             - Length of pData block to be calculated in bytes.
 */
CRC_TEXT_SECTION void CRC_SetInputData(uint8 u8Instance, const uint8 pData[], uint32 u32DataSize)
{
    CRC_Type *const pCrc             = s_apCrcBase[u8Instance];
    const uint8    *pCurrentData     = pData;
    uint32          u32RemainingSize = u32DataSize;
    uint32          u32pAddr         = (uint32)pData;

    while ((u32RemainingSize > 0) && ((u32pAddr & 0x3U) != 0))
    {
        if ((u32pAddr & 0x1U) != 0)
        {
            CRC_HWA_SetData8(pCrc, *pCurrentData);
            pCurrentData++;
            u32RemainingSize--;
            u32pAddr++;
        }
        else if (u32RemainingSize >= 2)
        {
            CRC_HWA_SetData16(pCrc, *((uint16 *)pCurrentData));
            pCurrentData += 2;
            u32RemainingSize -= 2;
            u32pAddr += 2;
        }
        else
        {
            break;
        }
    }

    while (u32RemainingSize >= 4)
    {
        CRC_HWA_SetData32(pCrc, *((uint32 *)pCurrentData));
        pCurrentData += 4;
        u32RemainingSize -= 4;
        u32pAddr += 4;
    }

    if (u32RemainingSize >= 2)
    {
        CRC_HWA_SetData16(pCrc, *((uint16 *)pCurrentData));
        pCurrentData += 2;
        u32RemainingSize -= 2;
    }

    if (u32RemainingSize >= 1)
    {
        CRC_HWA_SetData8(pCrc, *pCurrentData);
    }
}

/**
 * @brief         Get the CRC result calculated by the hardware.
 * @param u8Instance              - CRC instance.
 */
/* PRQA S 2889 ++ #Misra-C:2012 Rule-15.5 A function should have a single point of exit at the end.
   Reason: The return statement before the function end is used to bypass the function quickly. */
CRC_TEXT_SECTION uint32 CRC_GetCrcResult(uint8 u8Instance)
{
    CRC_Type *const      pCrc = s_apCrcBase[u8Instance];
    CRC_ReadDataSwapType eTempVal;
    uint32               u32Ret;

    u32Ret = CRC_HWA_GetData(pCrc);

    eTempVal = CRC_HWA_GetReadDataSwap(pCrc);

#if (CRC_CRC8_HW_SUPPORT == STD_ON)
    if (CRC_BIT_8 == CRC_HWA_Get8BitWidth(pCrc))
    {
        /* Returns upper 8 bits of CRC because of swap in 8 bits mode */
        if ((eTempVal == READ_DATASWAP_BIT_BYTE) || (eTempVal == READ_DATASWAP_BYTE))
        {
            u32Ret = u32Ret >> 24U;
        }
    }
    else if (CRC_BIT_16 == CRC_HWA_GetBitWidth(pCrc))
#else
    if (CRC_BIT_16 == CRC_HWA_GetBitWidth(pCrc))
#endif
    {
        /* Returns upper 16 bits of CRC because of swap in 16 bits mode */
        if ((eTempVal == READ_DATASWAP_BIT_BYTE) || (eTempVal == READ_DATASWAP_BYTE))
        {
            u32Ret = u32Ret >> 16U;
        }
    }
    else
    {
        /* do nothing */
    }
    return u32Ret;
}
/* PRQA S 2889 -- */

#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
