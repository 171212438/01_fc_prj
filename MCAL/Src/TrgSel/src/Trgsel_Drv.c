/**
 *   @file    TrgSel_Drv.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR TrgSel - TrgSel low level driver.
 *   @details contains the low level driver for the TrgSel module.
 *
 *   @addtogroup TRGSEL_MODULE
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Trgsel
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
*   0.1.0       17/09/2022    QXW0087       N/A          Trgsel Initial Version
*   0.2.0       15/03/2023    QXW0087       N/A          Refactor of Trgsel Driver
*   0.3.0       12/10/2023    QXW0103       N/A          Add Multicore Support，Delete Unused Drivers
*   0.4.0       13/11/2023    QXW0103       N/A          Fix Bugs, Add Default config
*   0.5.0       16/01/2024    QXW0103       N/A          Fix Bugs, Optimize Code
*   0.6.0       18/03/2024    QXW0103       N/A          Add Support For FC7240
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
==================================================================================================*/
#include "TrgSel_Drv.h"
#include "CDD_TrgSel_Cfg.h"
#include "TrgSel_Version.h"

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Trgsel configuration header file are of the same Autosar version */
#if ((TRGSEL_AR_RELEASE_MAJOR_VERSION != TRGSEL_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (TRGSEL_AR_RELEASE_MINOR_VERSION != TRGSEL_CFG_AR_RELEASE_MINOR_VERSION) || \
     (TRGSEL_AR_RELEASE_REVISION_VERSION != TRGSEL_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Trgsel.h and CDD_TrgSel_Cfg.h are different"
#endif

/* Check if current file and Trgsel configuration header file are of the same software version */
#if ((TRGSEL_SW_MAJOR_VERSION != TRGSEL_CFG_SW_MAJOR_VERSION) || \
     (TRGSEL_SW_MINOR_VERSION != TRGSEL_CFG_SW_MINOR_VERSION) || \
     (TRGSEL_SW_PATCH_VERSION != TRGSEL_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of Trgsel.h and CDD_TrgSel_Cfg.h are different"
#endif
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define TRGSEL_START_SEC_CONST_UNSPECIFIED
#include "TrgSel_MemMap.h"
/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/
/* PRQA S 3408, 1504 ++ #Misra-C:2012 Rule-8.4 A compatible declaration shall be visible when an
 * object or function with external linkage is defined. #Misra-C:2012 Rule-8.7 Functions and objects
 * should not be defined with external linkage if they are referenced in only one translation unit.
 *  Reason: it has no effect */
TRGSEL_DATA_SECTION const uint32 TRGSEL_BASE_ADDR32[TRGSEL_MAX_INSTANCE] = { TRGSEL0_BASEADDR,
                                                                             TRGSEL1_BASEADDR,
                                                                             TRGSEL2_BASEADDR,
                                                                             TRGSEL3_BASEADDR
#ifdef TRGSEL_FC7240_SUPPORT
                                                                             ,
                                                                             TRGSEL4_BASEADDR,
                                                                             TRGSEL5_BASEADDR
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || \
     (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
                                                                             ,
                                                                             TRGSEL4_BASEADDR,
                                                                             TRGSEL5_BASEADDR,
                                                                             TRGSEL6_BASEADDR,
                                                                             TRGSEL7_BASEADDR,
                                                                             TRGSEL8_BASEADDR
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) \
          || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
};

TRGSEL_DATA_SECTION const uint32 TRGSEL_NUM_REGS[TRGSEL_MAX_INSTANCE] = { TRGSEL0_NUM_REGS,
                                                                          TRGSEL1_NUM_REGS,
                                                                          TRGSEL2_NUM_REGS,
                                                                          TRGSEL3_NUM_REGS
#ifdef TRGSEL_FC7240_SUPPORT
                                                                          ,
                                                                          TRGSEL4_NUM_REGS,
                                                                          TRGSEL5_NUM_REGS
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || \
     (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
                                                                          ,
                                                                          TRGSEL4_NUM_REGS,
                                                                          TRGSEL5_NUM_REGS,
                                                                          TRGSEL6_NUM_REGS,
                                                                          TRGSEL7_NUM_REGS,
                                                                          TRGSEL8_NUM_REGS
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) \
          || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
};
/* PRQA S 3408, 1504 -- */
#define TRGSEL_STOP_SEC_CONST_UNSPECIFIED
#include "TrgSel_MemMap.h"

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#if ((TRGSEL0_ENABLED == STD_ON) || (TRGSEL1_ENABLED == STD_ON) || (TRGSEL2_ENABLED == STD_ON) || \
     (TRGSEL3_ENABLED == STD_ON) || (TRGSEL4_ENABLED == STD_ON) || (TRGSEL5_ENABLED == STD_ON) || \
     (TRGSEL6_ENABLED == STD_ON) || (TRGSEL7_ENABLED == STD_ON) || (TRGSEL8_ENABLED == STD_ON))
LOCAL_INLINE void TrgSel_LL_Init(TrgSel_HwUnitType Unit, const TrgSel_OutputRegType *TrgSelOutConfig);
#endif /* (TRGSEL0_ENABLED == STD_ON) || (TRGSEL1_ENABLED == STD_ON) || (TRGSEL2_ENABLED == STD_ON)                                                                                          \
     || (TRGSEL3_ENABLED == STD_ON) || (TRGSEL4_ENABLED == STD_ON) || (TRGSEL5_ENABLED == STD_ON) \
     || (TRGSEL6_ENABLED == STD_ON) || (TRGSEL7_ENABLED == STD_ON) || (TRGSEL8_ENABLED == STD_ON) */

LOCAL_INLINE void TrgSel_LL_DeInit(TrgSel_HwUnitType Unit);

LOCAL_INLINE void TrgSel_LL_Config_Sel(TrgSel_HwUnitType     Unit,
                                       TrgSel_UnitOutputType TriggerOutput,
                                       TrgSel_SourceType     TriggerSource);

LOCAL_INLINE void TrgSel_LL_Enable_Lock(TrgSel_HwUnitType Unit, TrgSel_UnitOutputType TriggerOutput);

LOCAL_INLINE boolean TrgSel_LL_Get_Lock(TrgSel_HwUnitType Unit, TrgSel_UnitOutputType TriggerOutput);
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
 * @brief        This function initializes the TRGSEL module.
 * @details      Set the configuration register for channel enable, trig and source.
 *
 * @param[in]    pTrgMuxConfig - pointer to TrgMux configuration structure
 * @param[in]    Unit          - trgsel index
 */
#if ((TRGSEL0_ENABLED == STD_ON) || (TRGSEL1_ENABLED == STD_ON) || (TRGSEL2_ENABLED == STD_ON) || \
     (TRGSEL3_ENABLED == STD_ON) || (TRGSEL4_ENABLED == STD_ON) || (TRGSEL5_ENABLED == STD_ON) || \
     (TRGSEL6_ENABLED == STD_ON) || (TRGSEL7_ENABLED == STD_ON) || (TRGSEL8_ENABLED == STD_ON))
LOCAL_INLINE void TrgSel_LL_Init(TrgSel_HwUnitType Unit, const TrgSel_OutputRegType *TrgSelOutConfig)
{
    VAR(uint32, AUTOMATIC) RegIdx = 0;
    for (RegIdx = 0; RegIdx < (uint8)TRGSEL_NUM_REGS[Unit]; RegIdx++)
    {
        REG_WRITE32(TRGSEL_REG_ADDR((Unit), (RegIdx)), TrgSelOutConfig[RegIdx]);
    }
}
#endif /* (TRGSEL0_ENABLED == STD_ON) || (TRGSEL1_ENABLED == STD_ON) || (TRGSEL2_ENABLED == STD_ON)                                                                                          \
     || (TRGSEL3_ENABLED == STD_ON) || (TRGSEL4_ENABLED == STD_ON) || (TRGSEL5_ENABLED == STD_ON) \
     || (TRGSEL6_ENABLED == STD_ON) || (TRGSEL7_ENABLED == STD_ON) || (TRGSEL8_ENABLED == STD_ON) */

/**
 * @brief        This is low level function to deinit the trgsel module.
 * @details      Set the configuration register to default value.
 *
 * @param[in]    Unit          - trgsel index
 */
LOCAL_INLINE void TrgSel_LL_DeInit(TrgSel_HwUnitType Unit)
{
    VAR(uint32, AUTOMATIC) RegIdx = 0;
    for (RegIdx = 0; RegIdx < (uint8)TRGSEL_NUM_REGS[Unit]; RegIdx++)
    {
        REG_WRITE32((TRGSEL_REG_ADDR((Unit), (RegIdx))), 0);
    }
}

LOCAL_INLINE void TrgSel_LL_Config_Sel(TrgSel_HwUnitType     Unit,
                                       TrgSel_UnitOutputType TriggerOutput,
                                       TrgSel_SourceType     TriggerSource)
{
    uint32 RegIdx = TriggerOutput / TRGSEL_REGSIZE;
    uint32 SelIdx = TriggerOutput % TRGSEL_REGSIZE;
    REG_RMW32((TRGSEL_REG_ADDR((Unit), (RegIdx))),
              TRGSEL_REG_SEL_MASK(SelIdx),
              ((TriggerSource) << (TRGSEL_BITS_TO_SHIFT * SelIdx)));
}

LOCAL_INLINE void TrgSel_LL_Enable_Lock(TrgSel_HwUnitType Unit, TrgSel_UnitOutputType TriggerOutput)
{
    uint32 RegIdx = TriggerOutput / TRGSEL_REGSIZE;
    REG_RMW32((TRGSEL_REG_ADDR((Unit), (RegIdx))), TRGSEL_LK_BIT_MASK_U32, TRGSEL_LOCK_EN_U32);
}

LOCAL_INLINE boolean TrgSel_LL_Get_Lock(TrgSel_HwUnitType Unit, TrgSel_UnitOutputType TriggerOutput)
{
    uint32 RegIdx = TriggerOutput / TRGSEL_REGSIZE;
    return (TRGSEL_GET_LOCK((Unit), (RegIdx)));
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define TRGSEL_START_SEC_CODE
#include "TrgSel_MemMap.h"
/**
 * @brief        This is high level function to init the trgsel module.
 * @details      Call trgsel low level init functions.
 *
 * @param[in]    pTrgSelConfig - trgsel config set
 */
TRGSEL_TEXT_SECTION void TrgSel_HL_Init(const TrgSel_ConfigType *pTrgSelConfig)
{
#if (TRGSEL0_ENABLED == STD_ON)
    TrgSel_LL_Init(0U, pTrgSelConfig->pTrgSel0_Config);
#endif /*TRGSEL0_ENABLED == STD_ON*/

#if (TRGSEL1_ENABLED == STD_ON)
    TrgSel_LL_Init(1U, pTrgSelConfig->pTrgSel1_Config);
#endif /*TRGSEL1_ENABLED == STD_ON*/

#if (TRGSEL2_ENABLED == STD_ON)
    TrgSel_LL_Init(2U, pTrgSelConfig->pTrgSel2_Config);
#endif /*TRGSEL2_ENABLED == STD_ON*/

#if (TRGSEL3_ENABLED == STD_ON)
    TrgSel_LL_Init(3U, pTrgSelConfig->pTrgSel3_Config);
#endif /*TRGSEL3_ENABLED == STD_ON*/

#ifdef TRGSEL_FC7240_SUPPORT

#if (TRGSEL4_ENABLED == STD_ON)
    TrgSel_LL_Init(4U, pTrgSelConfig->pTrgSel4_Config);
#endif /*TRGSEL4_ENABLED == STD_ON*/

#if (TRGSEL5_ENABLED == STD_ON)
    TrgSel_LL_Init(5U, pTrgSelConfig->pTrgSel5_Config);
#endif /*TRGSEL5_ENABLED == STD_ON*/

#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || \
     (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))

#if (TRGSEL4_ENABLED == STD_ON)
    TrgSel_LL_Init(4U, pTrgSelConfig->pTrgSel4_Config);
#endif /*TRGSEL4_ENABLED == STD_ON*/

#if (TRGSEL5_ENABLED == STD_ON)
    TrgSel_LL_Init(5U, pTrgSelConfig->pTrgSel5_Config);
#endif /*TRGSEL5_ENABLED == STD_ON*/

#if (TRGSEL6_ENABLED == STD_ON)
    TrgSel_LL_Init(6U, pTrgSelConfig->pTrgSel6_Config);
#endif /*TRGSEL6_ENABLED == STD_ON*/

#if (TRGSEL7_ENABLED == STD_ON)
    TrgSel_LL_Init(7U, pTrgSelConfig->pTrgSel7_Config);
#endif /*TRGSEL7_ENABLED == STD_ON*/

#if (TRGSEL8_ENABLED == STD_ON)
    TrgSel_LL_Init(8U, pTrgSelConfig->pTrgSel8_Config);
#endif /*TRGSEL8_ENABLED == STD_ON*/

#endif /*#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) \
          || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))*/
#endif /*#ifdef TRGSEL_FC7240_SUPPORT*/
}

/**
 * @brief        This is high level function to deinit the trgsel module.
 * @details      Call trgsel low level deinit functions.
 *
 * @param[in]    None
 */
TRGSEL_TEXT_SECTION void TrgSel_HL_DeInit(void)
{
    TrgSel_LL_DeInit(0U);
    TrgSel_LL_DeInit(1U);
    TrgSel_LL_DeInit(2U);
    TrgSel_LL_DeInit(3U);
#ifdef TRGSEL_FC7240_SUPPORT
    TrgSel_LL_DeInit(4U);
    TrgSel_LL_DeInit(5U);
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || \
     (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
    TrgSel_LL_DeInit(4U);
    TrgSel_LL_DeInit(5U);
    TrgSel_LL_DeInit(6U);
    TrgSel_LL_DeInit(7U);
    TrgSel_LL_DeInit(8U);
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) \
          || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
}

TRGSEL_TEXT_SECTION boolean TrgSel_HL_Get_Lock(TrgSel_OutputType TriggerOutput)
{
    boolean TrgSelLockStatus = FALSE;
    if ((uint8)TriggerOutput < TRGSEL0_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE0, (uint32)TriggerOutput);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_1_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE1,
                                              (uint32)TriggerOutput - TRGSEL0_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_2_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE2,
                                              (uint32)TriggerOutput - TRGSEL0_1_MAX_OUTPUTS);
    }
#ifdef TRGSEL_FC7240_SUPPORT
    else if ((uint8)TriggerOutput < TRGSEL0_3_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE3,
                                              (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_4_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE4,
                                              (uint32)TriggerOutput - TRGSEL0_3_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_5_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE5,
                                              (uint32)TriggerOutput - TRGSEL0_4_MAX_OUTPUTS);
    }
    else
    {
        /*Do nothing */
    }
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || \
     (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
    else if ((uint8)TriggerOutput < TRGSEL0_3_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE3,
                                              (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_4_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE4,
                                              (uint32)TriggerOutput - TRGSEL0_3_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_5_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE5,
                                              (uint32)TriggerOutput - TRGSEL0_4_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_6_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE6,
                                              (uint32)TriggerOutput - TRGSEL0_5_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_7_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE7,
                                              (uint32)TriggerOutput - TRGSEL0_6_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_8_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE8,
                                              (uint32)TriggerOutput - TRGSEL0_7_MAX_OUTPUTS);
    }
    else
    {
        /*Do nothing */
    }
#else
    else if ((uint8)TriggerOutput < TRGSEL0_3_MAX_OUTPUTS)
    {
        TrgSelLockStatus = TrgSel_LL_Get_Lock(TRGSEL_INSTANCE3,
                                              (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS);
    }
    else
    {
        /*Do nothing */
    }
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) \
          || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
    return TrgSelLockStatus;
}

TRGSEL_TEXT_SECTION void TrgSel_HL_Config_Sel(TrgSel_OutputType TriggerOutput,
                                              TrgSel_SourceType TriggerSource)
{
    /* @brief config Trigger Mux source input
     */
    if ((uint8)TriggerOutput < TRGSEL0_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE0, (uint32)TriggerOutput, TriggerSource);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_1_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE1,
                             (uint32)TriggerOutput - TRGSEL0_MAX_OUTPUTS,
                             TriggerSource);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_2_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE2,
                             (uint32)TriggerOutput - TRGSEL0_1_MAX_OUTPUTS,
                             TriggerSource);
    }
#ifdef TRGSEL_FC7240_SUPPORT
    else if ((uint8)TriggerOutput < TRGSEL0_3_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE3,
                             (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS,
                             TriggerSource);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_4_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE4,
                             (uint32)TriggerOutput - TRGSEL0_3_MAX_OUTPUTS,
                             TriggerSource);
    }
    else
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE5,
                             (uint32)TriggerOutput - TRGSEL0_4_MAX_OUTPUTS,
                             TriggerSource);
    }
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || \
     (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
    else if ((uint8)TriggerOutput < TRGSEL0_3_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE3,
                             (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS,
                             TriggerSource);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_4_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE4,
                             (uint32)TriggerOutput - TRGSEL0_3_MAX_OUTPUTS,
                             TriggerSource);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_5_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE5,
                             (uint32)TriggerOutput - TRGSEL0_4_MAX_OUTPUTS,
                             TriggerSource);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_6_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE6,
                             (uint32)TriggerOutput - TRGSEL0_5_MAX_OUTPUTS,
                             TriggerSource);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_7_MAX_OUTPUTS)
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE7,
                             (uint32)TriggerOutput - TRGSEL0_6_MAX_OUTPUTS,
                             TriggerSource);
    }
    else
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE8,
                             (uint32)TriggerOutput - TRGSEL0_7_MAX_OUTPUTS,
                             TriggerSource);
    }
#else
    else
    {
        TrgSel_LL_Config_Sel(TRGSEL_INSTANCE3,
                             (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS,
                             TriggerSource);
    }
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) \
          || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
}

TRGSEL_TEXT_SECTION void TrgSel_HL_Enable_Lock(TrgSel_OutputType TriggerOutput)
{
    /* @brief Set LK bit for Triggermux register
     */
    if ((uint8)TriggerOutput < TRGSEL0_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE0, (uint32)TriggerOutput);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_1_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE1, (uint32)TriggerOutput - TRGSEL0_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_2_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE2, (uint32)TriggerOutput - TRGSEL0_1_MAX_OUTPUTS);
    }

#ifdef TRGSEL_FC7240_SUPPORT
    else if ((uint8)TriggerOutput < TRGSEL0_3_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE3, (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_4_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE4, (uint32)TriggerOutput - TRGSEL0_3_MAX_OUTPUTS);
    }
    else
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE5, (uint32)TriggerOutput - TRGSEL0_4_MAX_OUTPUTS);
    }
#else
#if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) || \
     (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT)))
    else if ((uint8)TriggerOutput < TRGSEL0_3_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE3, (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_4_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE4, (uint32)TriggerOutput - TRGSEL0_3_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_5_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE5, (uint32)TriggerOutput - TRGSEL0_4_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_6_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE6, (uint32)TriggerOutput - TRGSEL0_5_MAX_OUTPUTS);
    }
    else if ((uint8)TriggerOutput < TRGSEL0_7_MAX_OUTPUTS)
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE7, (uint32)TriggerOutput - TRGSEL0_6_MAX_OUTPUTS);
    }
    else
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE8, (uint32)TriggerOutput - TRGSEL0_7_MAX_OUTPUTS);
    }
#else
    else
    {
        TrgSel_LL_Enable_Lock(TRGSEL_INSTANCE3, (uint32)TriggerOutput - TRGSEL0_2_MAX_OUTPUTS);
    }
#endif /* #if ((defined(TRGSEL_FC7300DQ_SUPPORT)) || (defined(TRGSEL_FC7300F4MDDXXXXXT1C_SUPPORT)) \
          || (defined(TRGSEL_FC7300F4MDSXXXXXT1C_SUPPORT))) */
#endif /* #ifdef TRGSEL_FC7240_SUPPORT */
}

#define TRGSEL_STOP_SEC_CODE
#include "TrgSel_MemMap.h"

#ifdef __cplusplus
}
#endif
/** @} */
