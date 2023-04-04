#include "drivertest.h"
#include <debug.h>

NTSTATUS
OpenWDDM_AddDevice(
    IN_CONST_PDEVICE_OBJECT     PhysicalDeviceObject,
    OUT_PPVOID                  MiniportDeviceContext)
{
    DPRINT1("OpenWDDM_AddDevice\n");
    __debugbreak();
    /* Not much to do here! we aren't a real GPU*/
    return STATUS_SUCCESS;
}

NTSTATUS
OpenWDDM_StartDevice(
    IN_CONST_PVOID          MiniportDeviceContext,
    IN_PDXGK_START_INFO     DxgkStartInfo,
    IN_PDXGKRNL_INTERFACE   DxgkInterface,
    OUT_PULONG              NumberOfVideoPresentSources,
    OUT_PULONG              NumberOfChildren)
{
    DPRINT1("OpenWDDM_StartDevice\n");
    __debugbreak();
    return 0;
}

NTSTATUS
OpenWDDM_StopDevice(
    IN_CONST_PVOID  MiniportDeviceContext)
{
    DPRINT1("OpenWDDM_StopDevice\n");
    __debugbreak();
    return 0;
}

NTSTATUS
OpenWDDM_RemoveDevice(
    IN_CONST_PVOID  MiniportDeviceContext)
{
    DPRINT1("OpenWDDM_RemoveDevice\n");
    __debugbreak();
    return STATUS_SUCCESS;
}