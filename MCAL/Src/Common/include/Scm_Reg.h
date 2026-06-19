/**
 *   @file    Scm_regs.h
 *   @version 1.5.1
 *
 *   @brief AUTOSAR - Scm module register and macro definitions.
 *   @details Scm module registers, and macro definitions used to manipulate the module registers.
 *
 *   @addtogroup Common
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Common
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
*   0.1.0       15/07/2023    QXW0055       N/A          MCU_Scm_Regs Initial Version
*   0.2.0       30/09/2023    QXW0055       N/A          Version change
==================================================================================================*/
#ifndef _MCU_SCM_REGS_H_
/* PRQA S 0603 ++ #Misra-C:2012 Rule-1.3 There shall be no occurrence of undefined or critical
 * unspecified behaviour Reason: It is common definition in h files */
/* PRQA S 0602 ++ #Misra-C:2012 Rule-21.2 A reserved identifier or reserved macro name shall not be
 * declared Reason: It is common definition in h files */
#define _MCU_SCM_REGS_H_
/* PRQA S 0602 -- */
/* PRQA S 0603 -- */

#ifdef __cplusplus
extern "C"
{
#endif

#include "Std_Types.h"
#include "Common_Cfg.h"

#if (DEVICE_TYPE == FC7240F2MDS1P100T1A) || (DEVICE_TYPE == FC7240F2MDS1P144T1A) || \
    (DEVICE_TYPE == FC7240F2MDS1P176T1A) || (DEVICE_TYPE == FC7240F2MDS2P100T1A) || \
    (DEVICE_TYPE == FC7240F2MDS2P144T1A) || (DEVICE_TYPE == FC7240F2MDS2P176T1A)
#include "Scm_FC7240F2MDSxxxxT1A.h"
#elif (DEVICE_TYPE == FC7300F8MDT2A320T1B) || (DEVICE_TYPE == FC7300F8MDT2P176T1B)
#include "Scm_FC7300F8MDTxxxxT1B.h"
#elif (DEVICE_TYPE == FC7300F4MDD1A320T1B) || (DEVICE_TYPE == FC7300F4MDD2A320T1B) || \
    (DEVICE_TYPE == FC7300F4MDD3A320T1B) || (DEVICE_TYPE == FC7300F4MDD1P176T1B) ||   \
    (DEVICE_TYPE == FC7300F4MDD2P176T1B)
#include "Scm_FC7300F4MDDxxxxT1B.h"
#elif (DEVICE_TYPE == FC7300F4MDS1A320T1B) || (DEVICE_TYPE == FC7300F4MDS2A320T1B) || \
    (DEVICE_TYPE == FC7300F4MDS1P176T1B) || (DEVICE_TYPE == FC7300F4MDS2P176T1B)
#include "Scm_FC7300F4MDSxxxxT1B.h"
#elif (DEVICE_TYPE == FC7300F8MDQ1A320T1B) || (DEVICE_TYPE == FC7300F8MDQ1A257T1B) || \
    (DEVICE_TYPE == FC7300F8MDQ1P176T1B)
#include "Scm_FC7300F8MDQxxxxT1B.h"
#elif (DEVICE_TYPE == FC7300F4MDD1A180T1C) || (DEVICE_TYPE == FC7300F4MDD1A320T1C)
#include "Scm_FC7300F4MDDxxxxT1C.h"
#elif (DEVICE_TYPE == FC7300F4MDS1P144T1C) || (DEVICE_TYPE == FC7300F4MDS1A180T1C) || \
    (DEVICE_TYPE == FC7300F4MDS1A320T1C)
#include "Scm_FC7300F4MDSxxxxT1C.h"
#else
#error "No valid DEVICE_TYPE defined."
#endif

#endif /* _MCU_SCM_REGS_H_ */

/** @} */
