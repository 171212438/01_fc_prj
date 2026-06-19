#ifndef _INTERRUPT_MANAGER_H_
#define _INTERRUPT_MANAGER_H_
#include "flexcore_device_header.h"
#include "flexcore_system.h"

#ifdef __cplusplus
extern "C" {
#endif

void IntMgr_EnableInterrupt(FlexCore_IRQn_Type eIrq);
void IntMgr_DisableInterrupt(FlexCore_IRQn_Type eIrq);
void IntMgr_DisableGlobalInterrupt(void);
void IntMgr_EnableGlobalInterrupt(void);

#ifdef __cplusplus
}
#endif

#endif  /* _INTERRUPT_MANAGER_H_ */
