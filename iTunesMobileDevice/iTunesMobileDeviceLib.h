
#include <Windows.h>

typedef unsigned int mach_error_t;

static HINSTANCE MobileDeviceDllHandle = NULL;

typedef int(*tf_AFCErrnoToAFCError)(int err, char **msg);
typedef void(*tf_AMDeviceRelease)(void* device);
typedef void(*tf_AMDeviceRetain)(void* device);
typedef mach_error_t(*tf_AFCConnectionClose)(void* conn);
typedef mach_error_t(*tf_AMDeviceConnect)(void* device);
typedef mach_error_t(*tf_AMDeviceStartHouseArrestService)(void* *device, void* identifier, void *unknown, void* handle, unsigned int *what);
typedef mach_error_t(*tf_AMDeviceStartService)(void* device, void* service_name, int* socket_fd);
typedef mach_error_t(*tf_AMDeviceStartServiceWithOptions)(void* device, void* service_name, void* options, int* socket);
typedef mach_error_t(*tf_AMDeviceStartSession)(void* device);
typedef mach_error_t(*tf_AMDeviceStopSession)(void* device);
typedef int(*tf_AMDeviceTransferApplication)(int socket_fd, void* path, void* options, void *callback, int callback_arg);
typedef int(*tf_AMDeviceTransferPath)(int unknown0, void *device, void* url, void* options, void *callback, int callback_arg);
typedef int(*tf_AMDeviceUninstallApplication)(int installFd, void* bundleId, void* options, void* callback, void *callback_arg);
typedef mach_error_t(*tf_AMDeviceUnpair)(void* device);
typedef mach_error_t(*tf_AMDeviceUpgradeApplication)(int unknown1, void* path, void* options, void* unknown2);





static tf_AFCErrnoToAFCError method_AFCErrnoToAFCError = NULL;
static tf_AMDeviceRelease method_AMDeviceRelease = NULL;
static tf_AMDeviceRetain method_AMDeviceRetain = NULL;
static tf_AFCConnectionClose method_AFCConnectionClose = NULL;
static tf_AMDeviceConnect method_AMDeviceConnect = NULL;
static tf_AMDeviceStartHouseArrestService method_AMDeviceStartHouseArrestService = NULL;
static tf_AMDeviceStartService method_AMDeviceStartService = NULL;
static tf_AMDeviceStartServiceWithOptions method_AMDeviceStartServiceWithOptions = NULL;
static tf_AMDeviceStartSession method_AMDeviceStartSession = NULL;
static tf_AMDeviceStopSession method_AMDeviceStopSession = NULL;
static tf_AMDeviceTransferApplication method_AMDeviceTransferApplication = NULL;
static tf_AMDeviceTransferPath method_AMDeviceTransferPath = NULL;
static tf_AMDeviceUninstallApplication method_AMDeviceUninstallApplication = NULL;
static tf_AMDeviceUnpair method_AMDeviceUnpair = NULL;
static tf_AMDeviceUpgradeApplication method_AMDeviceUpgradeApplication = NULL;





#define GET_METHOD_PROC_ADDR(v) method_##v## = (tf_##v##)GetProcAddress(dllHandle, #v); \
	if (!method_##v##) \
	{ \
		MessageBoxA(NULL, #v, "Error loading method", MB_OK | MB_ICONERROR); \
		return -1; \
	} \

static mach_error_t LoadReadMobileDeviceLibrary()
{
	if (MobileDeviceDllHandle)
		return 0;

	HINSTANCE dllHandle;
	DWORD retaddr;

	dllHandle = LoadLibraryA("iTunesMobileDeviceReal.dll");
	if (!dllHandle)
	{
		MessageBoxA(NULL, "Failed to load iTunesMobileDeviceReal.dll!", "Error", MB_OK | MB_ICONERROR);
		return -1;
	}

	GET_METHOD_PROC_ADDR(AFCErrnoToAFCError);
	GET_METHOD_PROC_ADDR(AMDeviceRelease);
	GET_METHOD_PROC_ADDR(AMDeviceRetain);
	GET_METHOD_PROC_ADDR(AFCConnectionClose);
	GET_METHOD_PROC_ADDR(AMDeviceConnect);
	GET_METHOD_PROC_ADDR(AMDeviceStartHouseArrestService);
	GET_METHOD_PROC_ADDR(AMDeviceStartService);
	GET_METHOD_PROC_ADDR(AMDeviceStartServiceWithOptions);
	GET_METHOD_PROC_ADDR(AMDeviceStartSession);
	GET_METHOD_PROC_ADDR(AMDeviceStopSession);
	GET_METHOD_PROC_ADDR(AMDeviceTransferApplication);
	GET_METHOD_PROC_ADDR(AMDeviceTransferPath);
	GET_METHOD_PROC_ADDR(AMDeviceUninstallApplication);
	GET_METHOD_PROC_ADDR(AMDeviceUnpair);
	GET_METHOD_PROC_ADDR(AMDeviceUpgradeApplication);

	MobileDeviceDllHandle = dllHandle;

	return 0;
}