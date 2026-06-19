// PRQA S 4603,1340,3397,2985,3397,3344,3432 EOF
/**
 *   @file    CDD_Cordic.c
 *   @version 1.5.1
 *
 *   @brief   AUTOSAR Cordic - Cordic driver source file.
 *   @details
 *
 *   @addtogroup Cordic
 *   @{
 */
/*==================================================================================================
*   PERIPHERAL           : Cordic
*   PLATFORM             : Flagchip FC7xxx
*   AUTOSAR VERSION      : 4.6.0
*   AUTOSAR REVISION     : ASR_REL_4_6_0
*   SOFTWARE VERSION     : 1.5.1
*   VENDOR               : Flagchip Semiconductors
*
*   Copyright 2024-2026 Flagchip Semiconductors Co., Ltd.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
*   Revision History:
*
*   Version     Date          Initials      CR#          Descriptions
*   ---------   ----------    ------------- ----------   ---------------
*   1.1.0       02/04/2025    QXW0054       N/A          Release version
==================================================================================================*/
#include "Cordic_Regs.h"
#include "Cordic_RegOps.h"
#include "CDD_Cordic.h"
/**
 * @brief Sign bit for the CORDIC algorithm.
 *
 * Represents the sign bit in a single-precision floating-point number.
 */
#define CORDIC_SIGN_BIT 0x80000000UL

/**
 * @brief Exponent bit for the CORDIC algorithm.
 *
 * Represents the exponent bits in a single-precision floating-point number.
 */
#define CORDIC_EXP_BIT  0x7F800000UL

/**
 * @brief Tail bit for the CORDIC algorithm.
 *
 * Represents the mantissa bits in a single-precision floating-point number.
 */
#define CORDIC_TAIL_BIT 0x007FFFFFUL

#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
/**
 * @brief Scaling factor K for the CORDIC algorithm.
 *
 * Represents the scaling factor used in the CORDIC algorithm.
 */
#define REVERSE_SCALEING_FACTOR_K         0x4dba76b2

#define REVERSE_SCALEING_FACTOR_KF        1304065714.f

#define REVERSE_SCALEING_FACTOR_KF_DIV32  40752053.5625f
/**
 * @brief Adjusted scaling factor KA for the CORDIC algorithm.
 *
 * Represents the adjusted scaling factor used in the CORDIC algorithm.
 */
#define REVERSE_SCALEING_FACTOR_KA        2593080084

#define REVERSE_SCALEING_FACTOR_KA_DIV2   1296540042

#define REVERSE_SCALEING_FACTOR_KA_DIV16  2162067505

#define REVERSE_SCALEING_FACTOR_KAF       2593080084.f

#define REVERSE_SCALEING_FACTOR_KAF_DIV16 162067505.25f

#define MAX_CONVERT_COEFF                 2147483648.f

#define MAX_CONVERT_COEFF_I               2147483648

#define MAX_CONVERT_COEFF_I_DIV2          1073741824

#define MAX_CONVERT_COEFF_DIV180          11930464.711111f

#define MAX_CONVERT_COEFF_DIV32           67108864.f

#define MAX_CONVERT_COEFF_DIV2            1073741824.f

#define MAX_CONVERT_COEFF_DIV4            536870912.f

#define MAX_CONVERT_COEFF_DIV16           134217728.f

#define ARCTANH_XINPUT_FIX_COEFF          MAX_CONVERT_COEFF_I_DIV2

#define ARCTANH_YINPUT_FIX_COEFF(Y)       (sint32)(Y * MAX_CONVERT_COEFF_DIV2)

#define ARCTANH_OUTPUT_FIX_COEFF          MAX_CONVERT_COEFF_DIV2

#define SINHCOSH_XINPUT1_FIX_COEFF        REVERSE_SCALEING_FACTOR_KA_DIV2

#define SINHCOSH_ZINPUT2_FIX_COEFF(Z)     (sint32)(Z * MAX_CONVERT_COEFF_DIV2)

#define SINHCOSH_OUTPUT_FIX_COEFF         MAX_CONVERT_COEFF_DIV2

#define LIN_XINPUT_FIX_COEFF(X)           (sint32)((X + 1.f) * MAX_CONVERT_COEFF_DIV16)

#define LIN_YINPUT_FIX_COEFF(Y)           (sint32)((Y - 1.f) * MAX_CONVERT_COEFF_DIV16)

#define LIN_OUTPUT_FIX_COEFF              MAX_CONVERT_COEFF_DIV32

#define SQRT_XINPUT_FIX_COEFF(X)          (sint32)((X + 0.25f) * MAX_CONVERT_COEFF_DIV4)

#define SQRT_YINPUT_FIX_COEFF(Y)          (sint32)((Y - 0.25f) * MAX_CONVERT_COEFF_DIV4)

#define SQRT_OUTPUT_FIX_COEFF             444614671.4214072f

#else

/**
 * @brief Scaling factor K for the CORDIC algorithm.
 *
 * Represents the scaling factor used in the CORDIC algorithm.
 */
#define REVERSE_SCALEING_FACTOR_K         81504122

#define REVERSE_SCALEING_FACTOR_KF        81504122.f

#define REVERSE_SCALEING_FACTOR_KF_DIV32  2547003.8125f

/**
 * @brief Adjusted scaling factor KA for the CORDIC algorithm.
 *
 * Represents the adjusted scaling factor used in the CORDIC algorithm.
 */
#define REVERSE_SCALEING_FACTOR_KA        162067583

#define REVERSE_SCALEING_FACTOR_KA_DIV2   81033791

#define REVERSE_SCALEING_FACTOR_KA_DIV16  10129224

#define REVERSE_SCALEING_FACTOR_KAF_DIV16 10129223.9375f

#define REVERSE_SCALEING_FACTOR_KAF       162067583.f

#define MAX_CONVERT_COEFF                 134217728.f

#define MAX_CONVERT_COEFF_I               134217728UL

#define MAX_CONVERT_COEFF_I_DIV2          67108864

#define MAX_CONVERT_COEFF_DIV180          10007997.084103f

#define MAX_CONVERT_COEFF_DIV32           4194304.f

#define MAX_CONVERT_COEFF_DIV2            67108864.f

#define MAX_CONVERT_COEFF_DIV16           8388608.f

#define ARCTANH_XINPUT_FIX_COEFF          MAX_CONVERT_COEFF_I

#define ARCTANH_YINPUT_FIX_COEFF(Y)       Float2Fix_Convert(Y)

#define ARCTANH_OUTPUT_FIX_COEFF          MAX_CONVERT_COEFF

#define SINHCOSH_XINPUT1_FIX_COEFF        REVERSE_SCALEING_FACTOR_KA

#define SINHCOSH_ZINPUT2_FIX_COEFF(Z)     Float2Fix_Convert(Z)

#define SINHCOSH_OUTPUT_FIX_COEFF         MAX_CONVERT_COEFF

#define LIN_XINPUT_FIX_COEFF(X)           Float2Fix_Convert(X + 1.f)

#define LIN_YINPUT_FIX_COEFF(Y)           Float2Fix_Convert(Y - 1.f)

#define LIN_OUTPUT_FIX_COEFF              MAX_CONVERT_COEFF_DIV2

#define SQRT_XINPUT_FIX_COEFF(X)          Float2Fix_Convert(X + 0.25f)

#define SQRT_YINPUT_FIX_COEFF(Y)          Float2Fix_Convert(Y - 0.25f)

#define SQRT_OUTPUT_FIX_COEFF             111153667.8553518f

#endif

#define CORDIC_START_SEC_CODE
#include "Cordic_MemMap.h"
/*************** Local Functions ***************/
/**
 * @brief Converts a floating-point number to a fixed-point representation.
 *
 * This function converts a floating-point number into a fixed-point
 * representation suitable for use in the CORDIC algorithm.
 *
 * @param nFloat Pointer to the floating-point number to convert.
 * @return The converted fixed-point representation.
 */
CORDIC_TEXT_SECTION static sint32 Float2Fix_Convert(const float32 nFloat)
{
    sint32 nFix;
    uint32 temp;
    sint32 exp;
    uint32 tail;
    /* Step1: get the sign bit */
    temp = *(uint32 *)(&nFloat);
    nFix = (sint32)(temp & CORDIC_SIGN_BIT);
    /* Step2: get the integer bits */
    exp  = (sint32)(((temp & CORDIC_EXP_BIT) >> 23) - 127U);
    tail = (temp & CORDIC_TAIL_BIT) | 0x00800000U;
#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
    /* Step3: get the fractional bits */
    if ((8 + exp) < 0)
    {
        nFix = (sint32)((uint32)nFix | (tail & (~(0xFFFFFFFFU << (23 - exp)))) >> (-8 - exp));
    }
    else
    {
        nFix = (sint32)((uint32)nFix | (tail & (~(0xFFFFFFFFU << (23 - exp)))) << (8 + exp));
    }
    if ((uint32)nFix & CORDIC_SIGN_BIT)
    {
        nFix = (sint32)((((uint32)nFix ^ 0x7FFFFFFFU) + 1) | CORDIC_SIGN_BIT);
    }
#else
    nFix = (sint32)((uint32)nFix | ((tail >> (23 - exp)) << 27));
    /* Step3: get the fractional bits */
    if ((4 + exp) < 0)
    {
        nFix = (sint32)((uint32)nFix | (tail & (~(0xFFFFFFFFU << (23 - exp)))) >> (-4 - exp));
    }
    else
    {
        nFix = (sint32)((uint32)nFix | (tail & (~(0xFFFFFFFFU << (23 - exp)))) << (4 + exp));
    }
    if ((uint32)nFix & CORDIC_SIGN_BIT)
    {
        nFix = (sint32)((((uint32)nFix ^ 0x7FFFFFFFU) + 1) | CORDIC_SIGN_BIT);
    }
#endif
    return nFix;
}

/*****************  Global Functions *******************/
/**
 * @brief The function to calculate sin & cos
 *
 * @param radian the input value to calculate
 *
 * input range (−90°, +90°)/180°
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Sin_Cos(const float32 radian, CORDIC_SinCos_Type *const rst)
{

    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;
    /* angles are expressed in radian, multiplied by a constant number. 𝜃/180 * 𝜋c (where 𝜋c
     * is 13.42177) */

    float32 tmp = 0;
#if ((DEVICE_SERIES == FC7300F8MDQxxxxT1B) || (DEVICE_SERIES == FC7300F4MDDxxxxT1C) || \
     (DEVICE_SERIES == FC7300F4MDSxxxxT1C) || (DEVICE_SERIES == FC7240F2MDSxxxxT1A))
    sint32 fix_radian = Float2Fix_Convert(radian);
#else
    sint32 fix_radian = Float2Fix_Convert(radian * 13.42177f);
#endif
    sint32 x_input = REVERSE_SCALEING_FACTOR_K;
    Cordic_HWA_Set_XInput(pCORDIC, x_input);
    Cordic_HWA_Set_YInput(pCORDIC, 0);
    Cordic_HWA_Set_ZInput(pCORDIC, fix_radian);
    /* Disable interrupt + Iteration Number16 + Trigonometric system + Rotate mode */
    Cordic_HWA_SetCtrl(pCORDIC,
                       CORDIC_CTR_VAL(0,
                                      FALSE,
                                      (uint32)CORDIC_Iteration_16,
                                      (uint32)CORDIC_Trigonometric,
                                      (uint32)CORDIC_Rotate));
    while (!Cordic_HWA_Get_Stat(pCORDIC))
    {
    }
    Cordic_HWA_Clear_Stat(pCORDIC);
    tmp       = (float32)Cordic_HWA_Get_YOutput(pCORDIC) / MAX_CONVERT_COEFF;
    rst->sinx = tmp;
    tmp       = (float32)Cordic_HWA_Get_XOutput(pCORDIC) / MAX_CONVERT_COEFF;
    rst->cosx = tmp;
}

/**
 * @brief The function to calculate circular radical add
 *
 * @param1 x the first input value
 *
 * @param2 y the second input value
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Radical_Add(const float32              x,
                                                const float32              y,
                                                CORDIC_Radical_Type *const rst)
{
    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;
    sint32             x_input = (sint32)(REVERSE_SCALEING_FACTOR_KF_DIV32 * x);
    sint32             y_input = (sint32)(REVERSE_SCALEING_FACTOR_KF_DIV32 * y);
    Cordic_HWA_Set_XInput(pCORDIC, x_input);
    Cordic_HWA_Set_YInput(pCORDIC, y_input);

    Cordic_HWA_Set_ZInput(pCORDIC, 0);
    /* Disable interrupt + Iteration Number16 + Trigonometric system + Vector mode */
    Cordic_HWA_SetCtrl(pCORDIC,
                       CORDIC_CTR_VAL(5,
                                      FALSE,
                                      (uint32)CORDIC_Iteration_16,
                                      (uint32)CORDIC_Trigonometric,
                                      (uint32)CORDIC_Vector));
    while (!Cordic_HWA_Get_Stat(pCORDIC))
    {
    }
    Cordic_HWA_Clear_Stat(pCORDIC);
    *rst = (CORDIC_Radical_Type)(Cordic_HWA_Get_XOutput(pCORDIC)) / MAX_CONVERT_COEFF_DIV32;
}

/**
 * @brief The function to calculate circular arctan
 *
 * @param y the input value
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Arctan_F(const float32 y, CORDIC_Arctan_Type *const rst)
{
    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;
    if ((y > 96.6) || (y < -96.6))
    {
        *rst = (float32)89.4069;
    }
    else
    {
        sint32 x_input = 1342177;
        sint32 y_input = (sint32)(y * 1342177);
        Cordic_HWA_Set_XInput(pCORDIC, x_input);
        Cordic_HWA_Set_YInput(pCORDIC, y_input);
        Cordic_HWA_Set_ZInput(pCORDIC, 0);
        /* Disable interrupt + Iteration Number16 + Trigonometric system + Vector mode */
        Cordic_HWA_SetCtrl(pCORDIC,
                           CORDIC_CTR_VAL(0,
                                          FALSE,
                                          (uint32)CORDIC_Iteration_16,
                                          (uint32)CORDIC_Trigonometric,
                                          (uint32)CORDIC_Vector));
        while (!Cordic_HWA_Get_Stat(pCORDIC))
        {
        }
        Cordic_HWA_Clear_Stat(pCORDIC);
        /* 10007997.084103 = 134217728.f * 13.42177 / 180 */;
        *rst = (CORDIC_Arctan_Type)(Cordic_HWA_Get_ZOutput(pCORDIC)) / MAX_CONVERT_COEFF_DIV180;
    }
}

/**
 * @brief The function to calculate circular arctan
 *
 * @param1 x the first input value
 *
 * @param2 y the second input value
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Arctan(const sint32 x, const sint32 y, CORDIC_Arctan_Type *const rst)
{
    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;
    Cordic_HWA_Set_XInput(pCORDIC, x);
    Cordic_HWA_Set_YInput(pCORDIC, y);
    Cordic_HWA_Set_ZInput(pCORDIC, 0);
    /* Disable interrupt + Iteration Number16 + Trigonometric system + Vector mode */
    Cordic_HWA_SetCtrl(pCORDIC,
                       CORDIC_CTR_VAL(0,
                                      FALSE,
                                      (uint32)CORDIC_Iteration_16,
                                      (uint32)CORDIC_Trigonometric,
                                      (uint32)CORDIC_Vector));
    while (!Cordic_HWA_Get_Stat(pCORDIC))
    {
    }
    Cordic_HWA_Clear_Stat(pCORDIC);
    /*** 11,930,464.711111 = 2147483648.f / 180 ***/;
    *rst = (CORDIC_Arctan_Type)(Cordic_HWA_Get_ZOutput(pCORDIC)) / MAX_CONVERT_COEFF_DIV180;
}

/**
 * @brief The function to calculate circular Sinh & Cosh
 *
 * @param z the input value
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Sinh_Cosh(const float32 z, CORDIC_SinhCosh_Type *const rst)
{
    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;
    float32            tmp     = 0;
    sint32             z_input = SINHCOSH_ZINPUT2_FIX_COEFF(z);
    sint32             x_input = SINHCOSH_XINPUT1_FIX_COEFF;
    Cordic_HWA_Set_XInput(pCORDIC, x_input);
    Cordic_HWA_Set_YInput(pCORDIC, 0);
    Cordic_HWA_Set_ZInput(pCORDIC, z_input);
    /* Disable interrupt + Iteration Number16 + Hyperbolic system + Rotate mode */
    Cordic_HWA_SetCtrl(pCORDIC,
                       CORDIC_CTR_VAL(1,
                                      FALSE,
                                      (uint32)CORDIC_Iteration_16,
                                      (uint32)CORDIC_Hyperbolic,
                                      (uint32)CORDIC_Rotate));
    while (!Cordic_HWA_Get_Stat(pCORDIC))
    {
    }
    Cordic_HWA_Clear_Stat(pCORDIC);
    tmp        = (float32)(Cordic_HWA_Get_YOutput(pCORDIC)) / SINHCOSH_OUTPUT_FIX_COEFF;
    rst->sinxh = tmp;
    tmp        = (float32)(Cordic_HWA_Get_XOutput(pCORDIC)) / SINHCOSH_OUTPUT_FIX_COEFF;
    rst->cosxh = tmp;
}

/**
 * @brief The function to calculate circular radical sub
 *
 * @param1 x the first input value
 *
 * @param2 y the second input value
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Radical_Sub(const float32              x,
                                                const float32              y,
                                                CORDIC_Radical_Type *const rst)
{
    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;

    sint32 x_input = (sint32)(REVERSE_SCALEING_FACTOR_KAF_DIV16 * x);
    sint32 y_input = (sint32)(REVERSE_SCALEING_FACTOR_KAF_DIV16 * y);

    Cordic_HWA_Set_XInput(pCORDIC, x_input);
    Cordic_HWA_Set_YInput(pCORDIC, y_input);
    Cordic_HWA_Set_ZInput(pCORDIC, 0);
    /* Disable interrupt + Iteration Number16 + Hyperbolic system + Vector mode */
    Cordic_HWA_SetCtrl(pCORDIC,
                       CORDIC_CTR_VAL(4,
                                      FALSE,
                                      (uint32)CORDIC_Iteration_16,
                                      (uint32)CORDIC_Hyperbolic,
                                      (uint32)CORDIC_Vector));
    while (!Cordic_HWA_Get_Stat(pCORDIC))
    {
    }
    Cordic_HWA_Clear_Stat(pCORDIC);
    *rst = (CORDIC_Radical_Type)(Cordic_HWA_Get_XOutput(pCORDIC)) / MAX_CONVERT_COEFF_DIV16;
}

/**
 * @brief The function to calculate circular arctanh
 *
 * @param y the input value
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Arctanh(const float32 y, CORDIC_Arctanh_Type *const rst)
{
    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;

    sint32 x_input = ARCTANH_XINPUT_FIX_COEFF;
    sint32 y_input = ARCTANH_YINPUT_FIX_COEFF(y);

    Cordic_HWA_Set_XInput(pCORDIC, x_input);
    Cordic_HWA_Set_YInput(pCORDIC, y_input);
    Cordic_HWA_Set_ZInput(pCORDIC, 0);
    /* Disable interrupt + Iteration Number16 + Hyperbolic system + Vector mode */
    Cordic_HWA_SetCtrl(pCORDIC,
                       CORDIC_CTR_VAL(1,
                                      FALSE,
                                      (uint32)CORDIC_Iteration_16,
                                      (uint32)CORDIC_Hyperbolic,
                                      (uint32)CORDIC_Vector));
    while (!Cordic_HWA_Get_Stat(pCORDIC))
    {
    }
    Cordic_HWA_Clear_Stat(pCORDIC);
    /* 10007997.084103 = 134217728.f * 13.42177 / 180 */;
    *rst = (CORDIC_Arctanh_Type)(Cordic_HWA_Get_ZOutput(pCORDIC)) / ARCTANH_OUTPUT_FIX_COEFF;
}

/**
 * @brief The function to calculate ln
 *
 * @param y the input value (0.1068482375 , 9.3590687463)
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Extended_LN(const float32 y, CORDIC_Ln_Type *const rst)
{
    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;
    /*** 134217728 = 2147483648 / 16 ***/
    sint32 x_input = LIN_XINPUT_FIX_COEFF(y);
    sint32 y_input = LIN_YINPUT_FIX_COEFF(y);
    Cordic_HWA_Set_XInput(pCORDIC, x_input);
    Cordic_HWA_Set_YInput(pCORDIC, y_input);
    Cordic_HWA_Set_ZInput(pCORDIC, 0);
    /* Disable interrupt + Iteration Number16 + Hyperbolic system + Vector mode */
    Cordic_HWA_SetCtrl(pCORDIC,
                       CORDIC_CTR_VAL(4,
                                      FALSE,
                                      (uint32)CORDIC_Iteration_16,
                                      (uint32)CORDIC_Hyperbolic,
                                      (uint32)CORDIC_Vector));
    while (!Cordic_HWA_Get_Stat(pCORDIC))
    {
    }
    Cordic_HWA_Clear_Stat(pCORDIC);
    /*** 67108864 = 2147483648.f.f / 32 ***/;
    *rst = (CORDIC_Ln_Type)(Cordic_HWA_Get_ZOutput(pCORDIC)) / LIN_OUTPUT_FIX_COEFF;
}

/**
 * @brief The function to calculate sqrt
 *Cordic_Extended_Sqrt
 * @param y the input value (0.0267120594,2.3397671865)
 */
CORDIC_TEXT_SECTION void CDD_Cordic_Extended_Sqrt(const float32 y, CORDIC_Sqrt_Type *const rst)
{
    CORDIC_Type *const pCORDIC = CORDIC_BASE_PTRS;
    /*** 648270021 = 2593080084 / 4 ***/
    sint32 x_input = SQRT_XINPUT_FIX_COEFF(y);
    sint32 y_input = SQRT_YINPUT_FIX_COEFF(y);

    Cordic_HWA_Set_XInput(pCORDIC, x_input);
    Cordic_HWA_Set_YInput(pCORDIC, y_input);
    Cordic_HWA_Set_ZInput(pCORDIC, 0);
    /* Disable interrupt + Iteration Number16 + Hyperbolic system + Vector mode */
    Cordic_HWA_SetCtrl(pCORDIC,
                       CORDIC_CTR_VAL(2,
                                      FALSE,
                                      (uint32)CORDIC_Iteration_16,
                                      (uint32)CORDIC_Hyperbolic,
                                      (uint32)CORDIC_Vector));
    while (!Cordic_HWA_Get_Stat(pCORDIC))
    {
    }
    Cordic_HWA_Clear_Stat(pCORDIC);
    /*** 536870912 = 2147483648 / 4 ***/
    *rst = (CORDIC_Sqrt_Type)(Cordic_HWA_Get_XOutput(pCORDIC)) / SQRT_OUTPUT_FIX_COEFF;
}
/* PRQA S 2889 -- */
#define CORDIC_STOP_SEC_CODE
#include "Cordic_MemMap.h"
