
#include <Windows.h>

typedef unsigned int mach_error_t;

typedef int(*tf_AFCErrnoToAFCError)(
	int err,
	char **msg
	);

typedef void(*tf_AMDeviceRelease)(
	void* device
	);

typedef tf_AMDeviceRelease tf_AMDeviceRetain;

typedef mach_error_t(*tf_AMDeviceConnect)(
	void* device
	);

typedef mach_error_t(*tf_AMDeviceStartHouseArrestService)(
	void* *device,
	void* identifier,
	void *unknown,
	void* handle,
	unsigned int *what
	);

static HINSTANCE MobileDeviceDllHandle = NULL;
static tf_AFCErrnoToAFCError method_AFCErrnoToAFCError = NULL;
static tf_AMDeviceRelease method_AMDeviceRelease = NULL;
static tf_AMDeviceRetain method_AMDeviceRetain = NULL;
static tf_AMDeviceConnect method_AMDeviceConnect = NULL;
static tf_AMDeviceStartHouseArrestService method_AMDeviceStartHouseArrestService = NULL;

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
	GET_METHOD_PROC_ADDR(AMDeviceConnect);
	GET_METHOD_PROC_ADDR(AMDeviceStartHouseArrestService);

	MobileDeviceDllHandle = dllHandle;

	return 0;
}