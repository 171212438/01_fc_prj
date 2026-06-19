#ifndef SYSTICK_HW_H
#define SYSTICK_HW_H

#include "Mcal.h"
#include "Systick_Type.h"

FUNC(void, SYSTICK_CODE) SystickLL_Init
(
    P2CONST(Systick_ConfigType, AUTOMATIC, SISTYICK_APPL_CONST) pCfgPtr
);

FUNC(void, SYSTICK_CODE) SystickLL_Enable(void);

FUNC(void, SYSTICK_CODE) SystickLL_Disable(void);

FUNC(void, SYSTICK_CODE) SystickLL_DeInit(void);

#endif /* SYSTICK_HW_H */
