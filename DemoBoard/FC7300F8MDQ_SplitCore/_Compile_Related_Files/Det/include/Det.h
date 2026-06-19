
#ifndef DET_H
#define DET_H
/*******************************************************************************
*   Includes
*******************************************************************************/
#include "Std_Types.h"

/*******************************************************************************
*   Macro
*******************************************************************************/
#define DET_VENDOR_ID                   ((uint16)174)
#define DET_MODULE_ID                   ((uint16)15)
#define DET_INSTANCE_ID                 ((uint8)0)
#define DET_SW_MAJOR_VERSION            (0)
#define DET_SW_MINOR_VERSION            (3)
#define DET_SW_PATCH_VERSION            (0)

#define DET_AR_RELEASE_MAJOR_VERSION    (4)
#define DET_AR_RELEASE_MINOR_VERSION    (6)
#define DET_AR_RELEASE_REVISION_VERSION (0)

#define DET_E_PARAM_POINTER             ((uint8)1)

#define DET_E_CANNOT_REPORT             ((uint8)1)
#define DET_E_WRONG_MODULE              ((uint8)2)
#define DET_E_WRONG_INSTANCE            ((uint8)3)
#define DET_E_WRONG_API                 ((uint8)4)
#define DET_E_WRONG_ERROR               ((uint8)5)

#define DET_E_UNAVAILABLE               ((uint8)1)

/* API ID*/
#define DET_INIT_APIID                  ((uint8)0)
#define DET_REPORTERROR_APIID           ((uint8)1)
#define DET_START_APIID                 ((uint8)2)
#define DET_GETVERSION_APIID            ((uint8)3)
#define DET_REPORTRUNTIMEERROR_APIID    ((uint8)4)
#define DET_REPORTTRANSIENTERROR_APIID  ((uint8)5)


typedef struct
{
    uint8   unused;
} Det_ConfigType;

/*******************************************************************************
*   Global Function Declaration
*******************************************************************************/

extern void Det_Init
(
    Det_ConfigType ConfigPtr
);
extern Std_ReturnType Det_ReportError
(
    uint16 ModuleId,
    uint8 InstanceId,
    uint8 ApiId,
    uint8 ErrorId
);

extern Std_ReturnType Det_ReportRuntimeError
(
    uint16 ModuleId,
    uint8 InstanceId,
    uint8 ApiId,
    uint8 ErrorId
);

extern Std_ReturnType Det_ReportTransientError
(
    uint16 ModuleId,
    uint8 InstanceId,
    uint8 ApiId,
    uint8 FaultId
);


extern void Det_Start(void);

extern void Det_GetVersionInfo
(
    Std_VersionInfoType VersionInfo
);


#endif/* DET_H */
