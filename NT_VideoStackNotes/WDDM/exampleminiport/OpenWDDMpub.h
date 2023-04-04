
NTSTATUS
OpenWDDM_AddDevice(
    IN_CONST_PDEVICE_OBJECT     PhysicalDeviceObject,
    OUT_PPVOID                  MiniportDeviceContext);

NTSTATUS
OpenWDDM_StartDevice(
    IN_CONST_PVOID          MiniportDeviceContext,
    IN_PDXGK_START_INFO     DxgkStartInfo,
    IN_PDXGKRNL_INTERFACE   DxgkInterface,
    OUT_PULONG              NumberOfVideoPresentSources,
    OUT_PULONG              NumberOfChildren);

NTSTATUS
OpenWDDM_StopDevice(
    IN_CONST_PVOID  MiniportDeviceContext);

NTSTATUS
OpenWDDM_RemoveDevice(
    IN_CONST_PVOID  MiniportDeviceContext);