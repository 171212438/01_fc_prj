#ifndef SYSTICK_H
#define SYSTICK_H

#include "Mcal.h"
#include "Systick_Cfg.h"

FUNC(void, SYSTICK_CODE) Systick_Init
(
    P2CONST(Systick_ConfigType, AUTOMATIC, SYSTICK_APPL_CONST) ConfigPtr
);

FUNC(void, SYSTICK_CODE) Systick_Enable(void);

FUNC(void, SYSTICK_CODE) Systick_Disable(void);

FUNC(void, SYSTICK_CODE) Systick_DeInit(void);

FUNC(void, SYSTICK_CODE) Systick_RunTask(void);
#endif /* SYSTICK_H */
