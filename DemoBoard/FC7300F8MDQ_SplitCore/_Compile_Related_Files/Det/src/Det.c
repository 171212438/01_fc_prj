#include "Det.h"

/*******************************************************************************
*   Global Function Define
*******************************************************************************/

FUNC(void, DET_CODE) Det_Init
(
		Det_ConfigType ConfigPtr
)
{
    (void)ConfigPtr;
}


void Det_Start(void)
{
    /* empty */
}

Std_ReturnType Det_ReportError
(
    uint16 ModuleId,
    uint8 InstanceId,
    uint8 ApiId,
    uint8 ErrorId
)
{
    (void)ModuleId;
    (void)InstanceId;
    (void)ApiId;
    (void)ErrorId;
    return E_OK;
}

Std_ReturnType Det_ReportRuntimeError
(
    uint16 ModuleId,
    uint8 InstanceId,
    uint8 ApiId,
    uint8 ErrorId
)
{

    (void)ModuleId;
    (void)InstanceId;
    (void)ApiId;
    (void)ErrorId;
    return E_OK;
}

Std_ReturnType Det_ReportTransientError
(
    uint16 ModuleId,
    uint8 InstanceId,
    uint8 ApiId,
    uint8 FaultId
)
{

    (void)ModuleId;
    (void)InstanceId;
    (void)ApiId;
    (void)FaultId;
    return E_OK;
}

void Det_GetVersionInfo
(
    Std_VersionInfoType VersionInfo
)
{
    (void)VersionInfo;
}



