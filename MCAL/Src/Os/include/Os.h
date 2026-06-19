
#ifndef OS_H
#define OS_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "ComStack_Types.h"
#include "Platform_Types.h"

#include "Os_Cfg.h"

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
typedef unsigned char OSBYTE;
typedef unsigned char *OSBYTEPTR;

typedef unsigned short OSWORD;
typedef signed short OSSHORT;

typedef unsigned short *OSWORDPTR;
typedef unsigned int OSDWORD;

typedef OSWORD OSObjectType;            /* bits [15] - Core Id, bits [14..11] - ObjType, bits [10..0] - ObjId, */

typedef OSObjectType TaskType;          /* used in task, events api ... */

typedef OSDWORD TickType;               /* Type for timers ticks - use by counter, alarm, schedule table alarm */
typedef TickType  *TickRefType;         /* OSEK: Reference to counter value - use by counter and alarm */

typedef OSObjectType CounterType;

typedef enum
{
  OS_CORE_ID_MASTER = 0,
  OS_CORE_ID_0 = 0, /* Core0 */
  OS_CORE_ID_1 = 1, /* Core1 */
  OS_CORE_ID_2 = 2, /* Core2 */
} CoreIdType;
/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

extern CoreIdType GetCoreID(void);

extern uint32 GetCounterValue(CounterType CounterID, TickRefType Value);

extern void GetElapsedValue(CounterType CounterID, TickRefType Value, TickRefType ElapsedValue);

#ifdef __cplusplus
}
#endif

#endif /* OS_H */

/** @} */
