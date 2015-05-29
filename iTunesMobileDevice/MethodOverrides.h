extern "C" int __declspec(dllexport) AFCErrnoToAFCError(int err, char **msg)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCErrnoToAFCError");
	return method_AFCErrnoToAFCError(err, msg);

}
extern "C" void __declspec(dllexport) AMDeviceRelease(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceRelease");
	method_AMDeviceRelease(device);

}
extern "C" void __declspec(dllexport) AMDeviceRetain(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceRetain");
	method_AMDeviceRetain(device);

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionClose(void* conn)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionClose");
	return method_AFCConnectionClose(conn);

}
extern "C" afc_error_t __declspec(dllexport) AFCConnectionOpen(void* handle, unsigned int io_timeout, void* conn)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionOpen");
	return method_AFCConnectionOpen(handle, io_timeout, conn);

}
extern "C" afc_error_t __declspec(dllexport) AFCDirectoryCreate(void* conn, const char *dirname)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCDirectoryCreate");
	return method_AFCDirectoryCreate(conn, dirname);

}
extern "C" afc_error_t __declspec(dllexport) AFCFileInfoOpen(void *conn, const char *path, void *info)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileInfoOpen");
	return method_AFCFileInfoOpen(conn, path, info);

}
extern "C" int __declspec(dllexport) AFCFileRefClose(void* hAFC, INT64 handle)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefClose");
	return method_AFCFileRefClose(hAFC, handle);

}
extern "C" afc_error_t __declspec(dllexport) AFCFileRefOpen(void* conn, const char *path, unsigned long long mode, void *ref)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefOpen");
	return method_AFCFileRefOpen(conn, path, mode, ref);

}
extern "C" int __declspec(dllexport) AFCFileRefRead(void* hAFC, INT64 handle, void *buffer, UINT32 *len)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefRead");
	return method_AFCFileRefRead(hAFC, handle, buffer, len);

}
extern "C" afc_error_t __declspec(dllexport) AFCFileRefSeek(void* conn, void* ref, unsigned long long offset1, unsigned long long offset2)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefSeek");
	return method_AFCFileRefSeek(conn, ref, offset1, offset2);

}
extern "C" int __declspec(dllexport) AFCFileRefTell(void* hAFC, INT64 handle, long *position)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefTell");
	return method_AFCFileRefTell(hAFC, handle, position);

}
extern "C" int __declspec(dllexport) AFCFlushData(void* hAFC, INT64 handle)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFlushData");
	return method_AFCFlushData(hAFC, handle);

}
extern "C" int __declspec(dllexport) AFCKeyValueClose(void* val)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCKeyValueClose");
	return method_AFCKeyValueClose(val);

}
extern "C" int __declspec(dllexport) AFCKeyValueRead(void *data, void* key, void* val)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCKeyValueRead");
	return method_AFCKeyValueRead(data, key, val);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceConnect(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceConnect");
	return method_AMDeviceConnect(device);

}
extern "C" int __declspec(dllexport) AMDeviceCopyDeviceIdentifier(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCopyDeviceIdentifier");
	return method_AMDeviceCopyDeviceIdentifier(device);

}
extern "C" int __declspec(dllexport) AMDeviceCopyValue(void* device, unsigned int unknown, void* cfString)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCopyValue");
	return method_AMDeviceCopyValue(device, unknown, cfString);

}
extern "C" int __declspec(dllexport) AMDeviceCreateHouseArrestService(void* unknown1, void* unknown2)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCreateHouseArrestService");
	return method_AMDeviceCreateHouseArrestService(unknown1, unknown2);

}
extern "C" int __declspec(dllexport) AMDeviceCreateWakeupToken(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCreateWakeupToken");
	return method_AMDeviceCreateWakeupToken(device);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceDisconnect(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceDisconnect");
	return method_AMDeviceDisconnect(device);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceGetConnectionID(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceGetConnectionID");
	return method_AMDeviceGetConnectionID(device);

}
extern "C" UINT32 __declspec(dllexport) AMDeviceGetInterfaceType(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceGetInterfaceType");
	return method_AMDeviceGetInterfaceType(device);

}
extern "C" int __declspec(dllexport) AMDeviceIsPaired(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceIsPaired");
	return method_AMDeviceIsPaired(device);

}
extern "C" int __declspec(dllexport) AMDeviceLookupApplications(void* device, int zero, void* result)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceLookupApplications");
	return method_AMDeviceLookupApplications(device, zero, result);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceNotificationSubscribe(void* callback, void* unused1, void* unused2, void* unused3, void* am_device_notification_ptr)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceNotificationSubscribe");
	return method_AMDeviceNotificationSubscribe(callback, unused1, unused2, unused3, am_device_notification_ptr);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceStartHouseArrestService(void* *device, void* identifier, void *unknown, void* handle, unsigned int *what)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceStartHouseArrestService");
	return method_AMDeviceStartHouseArrestService(device, identifier, unknown, handle, what);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceStartService(void* device, void* service_name, int* socket_fd)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceStartService");
	return method_AMDeviceStartService(device, service_name, socket_fd);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceStartServiceWithOptions(void* device, void* service_name, void* options, int* socket)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceStartServiceWithOptions");
	return method_AMDeviceStartServiceWithOptions(device, service_name, options, socket);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceStartSession(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceStartSession");
	return method_AMDeviceStartSession(device);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceStopSession(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceStopSession");
	return method_AMDeviceStopSession(device);

}
extern "C" int __declspec(dllexport) AMDeviceTransferApplication(int socket_fd, void* path, void* options, void *callback, int callback_arg)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceTransferApplication");
	return method_AMDeviceTransferApplication(socket_fd, path, options, callback, callback_arg);

}
extern "C" int __declspec(dllexport) AMDeviceTransferPath(int unknown0, void *device, void* url, void* options, void *callback, int callback_arg)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceTransferPath");
	return method_AMDeviceTransferPath(unknown0, device, url, options, callback, callback_arg);

}
extern "C" int __declspec(dllexport) AMDeviceUninstallApplication(int installFd, void* bundleId, void* options, void* callback, void *callback_arg)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceUninstallApplication");
	return method_AMDeviceUninstallApplication(installFd, bundleId, options, callback, callback_arg);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceUnpair(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceUnpair");
	return method_AMDeviceUnpair(device);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceUpgradeApplication(int unknown1, void* path, void* options, void* unknown2)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceUpgradeApplication");
	return method_AMDeviceUpgradeApplication(unknown1, path, options, unknown2);

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceValidatePairing(void* device)
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceValidatePairing");
	return method_AMDeviceValidatePairing(device);

}
extern "C" mach_error_t __declspec(dllexport) AFCLockCreate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCLockCreate");
	return method_AFCLockCreate();

}
extern "C" mach_error_t __declspec(dllexport) AFCLockFree()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCLockFree");
	return method_AFCLockFree();

}
extern "C" mach_error_t __declspec(dllexport) AFCLockLock()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCLockLock");
	return method_AFCLockLock();

}
extern "C" mach_error_t __declspec(dllexport) AFCLockTryLock()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCLockTryLock");
	return method_AFCLockTryLock();

}
extern "C" mach_error_t __declspec(dllexport) AFCLockUnlock()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCLockUnlock");
	return method_AFCLockUnlock();

}
extern "C" mach_error_t __declspec(dllexport) AFCStringCopy()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCStringCopy");
	return method_AFCStringCopy();

}
extern "C" mach_error_t __declspec(dllexport) AMSAddAppleSearchPathsToEnvironmentFromReg()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSAddAppleSearchPathsToEnvironmentFromReg");
	return method_AMSAddAppleSearchPathsToEnvironmentFromReg();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileCopyPayload()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileCopyPayload");
	return method_MISProfileCopyPayload();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileCopySignerSubjectSummary()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileCopySignerSubjectSummary");
	return method_MISProfileCopySignerSubjectSummary();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileCreateDataRepresentation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileCreateDataRepresentation");
	return method_MISProfileCreateDataRepresentation();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileCreateWithData()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileCreateWithData");
	return method_MISProfileCreateWithData();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileCreateWithFile()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileCreateWithFile");
	return method_MISProfileCreateWithFile();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileGetValue()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileGetValue");
	return method_MISProfileGetValue();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileIsMutable()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileIsMutable");
	return method_MISProfileIsMutable();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileValidateSignature()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileValidateSignature");
	return method_MISProfileValidateSignature();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileValidateSignatureWithAnchors()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileValidateSignatureWithAnchors");
	return method_MISProfileValidateSignatureWithAnchors();

}
extern "C" mach_error_t __declspec(dllexport) MISProfileWriteToFile()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProfileWriteToFile");
	return method_MISProfileWriteToFile();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileCheckValidity()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileCheckValidity");
	return method_MISProvisioningProfileCheckValidity();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileGetCreationDate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileGetCreationDate");
	return method_MISProvisioningProfileGetCreationDate();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileGetDeveloperCertificates()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileGetDeveloperCertificates");
	return method_MISProvisioningProfileGetDeveloperCertificates();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileGetExpirationDate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileGetExpirationDate");
	return method_MISProvisioningProfileGetExpirationDate();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileGetName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileGetName");
	return method_MISProvisioningProfileGetName();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileGetProvisionedDevices()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileGetProvisionedDevices");
	return method_MISProvisioningProfileGetProvisionedDevices();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileGetUUID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileGetUUID");
	return method_MISProvisioningProfileGetUUID();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileGetVersion()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileGetVersion");
	return method_MISProvisioningProfileGetVersion();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileIncludesDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileIncludesDevice");
	return method_MISProvisioningProfileIncludesDevice();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileProvisionsAllDevices()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileProvisionsAllDevices");
	return method_MISProvisioningProfileProvisionsAllDevices();

}
extern "C" mach_error_t __declspec(dllexport) MISProvisioningProfileValidateSignature()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("MISProvisioningProfileValidateSignature");
	return method_MISProvisioningProfileValidateSignature();

}
extern "C" mach_error_t __declspec(dllexport) USBMuxListenForDevices()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("USBMuxListenForDevices");
	return method_USBMuxListenForDevices();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionCopyLastErrorInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionCopyLastErrorInfo");
	return method_AFCConnectionCopyLastErrorInfo();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionCreate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionCreate");
	return method_AFCConnectionCreate();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionGetContext()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionGetContext");
	return method_AFCConnectionGetContext();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionGetFSBlockSize()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionGetFSBlockSize");
	return method_AFCConnectionGetFSBlockSize();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionGetIOTimeout()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionGetIOTimeout");
	return method_AFCConnectionGetIOTimeout();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionGetSecureContext()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionGetSecureContext");
	return method_AFCConnectionGetSecureContext();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionGetSocketBlockSize()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionGetSocketBlockSize");
	return method_AFCConnectionGetSocketBlockSize();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionGetStatus()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionGetStatus");
	return method_AFCConnectionGetStatus();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionGetTypeID");
	return method_AFCConnectionGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionInvalidate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionInvalidate");
	return method_AFCConnectionInvalidate();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionIsValid()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionIsValid");
	return method_AFCConnectionIsValid();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionProcessOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionProcessOperation");
	return method_AFCConnectionProcessOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionProcessOperations()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionProcessOperations");
	return method_AFCConnectionProcessOperations();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionScheduleWithRunLoop()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionScheduleWithRunLoop");
	return method_AFCConnectionScheduleWithRunLoop();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSetCallBack()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSetCallBack");
	return method_AFCConnectionSetCallBack();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSetContext()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSetContext");
	return method_AFCConnectionSetContext();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSetDisposeSecureContextOnInvalidate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSetDisposeSecureContextOnInvalidate");
	return method_AFCConnectionSetDisposeSecureContextOnInvalidate();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSetFSBlockSize()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSetFSBlockSize");
	return method_AFCConnectionSetFSBlockSize();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSetFatalError()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSetFatalError");
	return method_AFCConnectionSetFatalError();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSetIOTimeout()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSetIOTimeout");
	return method_AFCConnectionSetIOTimeout();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSetSecureContext()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSetSecureContext");
	return method_AFCConnectionSetSecureContext();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSetSocketBlockSize()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSetSocketBlockSize");
	return method_AFCConnectionSetSocketBlockSize();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionSubmitOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionSubmitOperation");
	return method_AFCConnectionSubmitOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCConnectionUnscheduleFromRunLoop()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCConnectionUnscheduleFromRunLoop");
	return method_AFCConnectionUnscheduleFromRunLoop();

}
extern "C" mach_error_t __declspec(dllexport) AFCCopyErrorString()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCCopyErrorString");
	return method_AFCCopyErrorString();

}
extern "C" mach_error_t __declspec(dllexport) AFCCopyPacketTypeString()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCCopyPacketTypeString");
	return method_AFCCopyPacketTypeString();

}
extern "C" mach_error_t __declspec(dllexport) AFCDeviceInfoOpen()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCDeviceInfoOpen");
	return method_AFCDeviceInfoOpen();

}
extern "C" mach_error_t __declspec(dllexport) AFCDirectoryClose()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCDirectoryClose");
	return method_AFCDirectoryClose();

}
extern "C" mach_error_t __declspec(dllexport) AFCDirectoryOpen()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCDirectoryOpen");
	return method_AFCDirectoryOpen();

}
extern "C" mach_error_t __declspec(dllexport) AFCDirectoryRead()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCDirectoryRead");
	return method_AFCDirectoryRead();

}
extern "C" mach_error_t __declspec(dllexport) AFCDiscardBodyData()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCDiscardBodyData");
	return method_AFCDiscardBodyData();

}
extern "C" mach_error_t __declspec(dllexport) AFCDiscardData()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCDiscardData");
	return method_AFCDiscardData();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateCloseOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateCloseOperation");
	return method_AFCFileDescriptorCreateCloseOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateGetPositionOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateGetPositionOperation");
	return method_AFCFileDescriptorCreateGetPositionOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateLockOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateLockOperation");
	return method_AFCFileDescriptorCreateLockOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateReadAtPositionOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateReadAtPositionOperation");
	return method_AFCFileDescriptorCreateReadAtPositionOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateReadOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateReadOperation");
	return method_AFCFileDescriptorCreateReadOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateSetImmutableHintOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateSetImmutableHintOperation");
	return method_AFCFileDescriptorCreateSetImmutableHintOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateSetPositionOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateSetPositionOperation");
	return method_AFCFileDescriptorCreateSetPositionOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateSetSizeOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateSetSizeOperation");
	return method_AFCFileDescriptorCreateSetSizeOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateUnlockOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateUnlockOperation");
	return method_AFCFileDescriptorCreateUnlockOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateWriteAtPositionOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateWriteAtPositionOperation");
	return method_AFCFileDescriptorCreateWriteAtPositionOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorCreateWriteOperation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorCreateWriteOperation");
	return method_AFCFileDescriptorCreateWriteOperation();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorGetTypeID");
	return method_AFCFileDescriptorGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorInvalidate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorInvalidate");
	return method_AFCFileDescriptorInvalidate();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileDescriptorIsValid()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileDescriptorIsValid");
	return method_AFCFileDescriptorIsValid();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileRefLock()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefLock");
	return method_AFCFileRefLock();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileRefSetFileSize()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefSetFileSize");
	return method_AFCFileRefSetFileSize();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileRefUnlock()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefUnlock");
	return method_AFCFileRefUnlock();

}
extern "C" mach_error_t __declspec(dllexport) AFCFileRefWrite()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCFileRefWrite");
	return method_AFCFileRefWrite();

}
extern "C" mach_error_t __declspec(dllexport) AFCGetClientVersionString()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCGetClientVersionString");
	return method_AFCGetClientVersionString();

}
extern "C" mach_error_t __declspec(dllexport) AFCLinkPath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCLinkPath");
	return method_AFCLinkPath();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCopyPacketData()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCopyPacketData");
	return method_AFCOperationCopyPacketData();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateGetConnectionInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateGetConnectionInfo");
	return method_AFCOperationCreateGetConnectionInfo();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateGetDeviceInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateGetDeviceInfo");
	return method_AFCOperationCreateGetDeviceInfo();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateGetFileHash()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateGetFileHash");
	return method_AFCOperationCreateGetFileHash();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateGetFileHashWithRange()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateGetFileHashWithRange");
	return method_AFCOperationCreateGetFileHashWithRange();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateGetFileInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateGetFileInfo");
	return method_AFCOperationCreateGetFileInfo();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateGetSizeOfPathContents()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateGetSizeOfPathContents");
	return method_AFCOperationCreateGetSizeOfPathContents();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateLinkPath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateLinkPath");
	return method_AFCOperationCreateLinkPath();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateMakeDirectory()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateMakeDirectory");
	return method_AFCOperationCreateMakeDirectory();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateOpenFile()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateOpenFile");
	return method_AFCOperationCreateOpenFile();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreatePacketHeaderDictionary()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreatePacketHeaderDictionary");
	return method_AFCOperationCreatePacketHeaderDictionary();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateReadDirectory()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateReadDirectory");
	return method_AFCOperationCreateReadDirectory();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateRemovePath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateRemovePath");
	return method_AFCOperationCreateRemovePath();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateRemovePathAndContents()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateRemovePathAndContents");
	return method_AFCOperationCreateRemovePathAndContents();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateRenamePath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateRenamePath");
	return method_AFCOperationCreateRenamePath();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateSetConnectionOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateSetConnectionOptions");
	return method_AFCOperationCreateSetConnectionOptions();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationCreateSetModTime()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationCreateSetModTime");
	return method_AFCOperationCreateSetModTime();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationGetContext()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationGetContext");
	return method_AFCOperationGetContext();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationGetResultObject()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationGetResultObject");
	return method_AFCOperationGetResultObject();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationGetResultStatus()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationGetResultStatus");
	return method_AFCOperationGetResultStatus();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationGetState()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationGetState");
	return method_AFCOperationGetState();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationGetTypeID");
	return method_AFCOperationGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AFCOperationSetContext()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCOperationSetContext");
	return method_AFCOperationSetContext();

}
extern "C" mach_error_t __declspec(dllexport) AFCReadData()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCReadData");
	return method_AFCReadData();

}
extern "C" mach_error_t __declspec(dllexport) AFCReadPacket()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCReadPacket");
	return method_AFCReadPacket();

}
extern "C" mach_error_t __declspec(dllexport) AFCReadPacketBody()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCReadPacketBody");
	return method_AFCReadPacketBody();

}
extern "C" mach_error_t __declspec(dllexport) AFCReadPacketHeader()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCReadPacketHeader");
	return method_AFCReadPacketHeader();

}
extern "C" mach_error_t __declspec(dllexport) AFCRemovePath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCRemovePath");
	return method_AFCRemovePath();

}
extern "C" mach_error_t __declspec(dllexport) AFCRenamePath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCRenamePath");
	return method_AFCRenamePath();

}
extern "C" mach_error_t __declspec(dllexport) AFCSendData()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCSendData");
	return method_AFCSendData();

}
extern "C" mach_error_t __declspec(dllexport) AFCSendDataPacket()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCSendDataPacket");
	return method_AFCSendDataPacket();

}
extern "C" mach_error_t __declspec(dllexport) AFCSendHeader()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCSendHeader");
	return method_AFCSendHeader();

}
extern "C" mach_error_t __declspec(dllexport) AFCSendPacket()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCSendPacket");
	return method_AFCSendPacket();

}
extern "C" mach_error_t __declspec(dllexport) AFCSendStatus()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCSendStatus");
	return method_AFCSendStatus();

}
extern "C" mach_error_t __declspec(dllexport) AFCValidateHeader()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AFCValidateHeader");
	return method_AFCValidateHeader();

}
extern "C" mach_error_t __declspec(dllexport) AMDCopyArrayOfDevicesMatchingQuery()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDCopyArrayOfDevicesMatchingQuery");
	return method_AMDCopyArrayOfDevicesMatchingQuery();

}
extern "C" mach_error_t __declspec(dllexport) AMDCopyAuthenticationIdentityForDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDCopyAuthenticationIdentityForDevice");
	return method_AMDCopyAuthenticationIdentityForDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMDCopyErrorText()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDCopyErrorText");
	return method_AMDCopyErrorText();

}
extern "C" mach_error_t __declspec(dllexport) AMDCopySystemBonjourUniqueID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDCopySystemBonjourUniqueID");
	return method_AMDCopySystemBonjourUniqueID();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceCopyAuthInstallPreflightOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceCopyAuthInstallPreflightOptions");
	return method_AMDFUModeDeviceCopyAuthInstallPreflightOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceCopyBoardConfig()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceCopyBoardConfig");
	return method_AMDFUModeDeviceCopyBoardConfig();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetBoardID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetBoardID");
	return method_AMDFUModeDeviceGetBoardID();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetChipID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetChipID");
	return method_AMDFUModeDeviceGetChipID();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetECID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetECID");
	return method_AMDFUModeDeviceGetECID();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetLocationID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetLocationID");
	return method_AMDFUModeDeviceGetLocationID();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetProductID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetProductID");
	return method_AMDFUModeDeviceGetProductID();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetProductType()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetProductType");
	return method_AMDFUModeDeviceGetProductType();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetProductionMode()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetProductionMode");
	return method_AMDFUModeDeviceGetProductionMode();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetProgress()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetProgress");
	return method_AMDFUModeDeviceGetProgress();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetSecurityDomain()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetSecurityDomain");
	return method_AMDFUModeDeviceGetSecurityDomain();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetSecurityEpoch()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetSecurityEpoch");
	return method_AMDFUModeDeviceGetSecurityEpoch();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceGetTypeID");
	return method_AMDFUModeDeviceGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceIsBootstrapOnly()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceIsBootstrapOnly");
	return method_AMDFUModeDeviceIsBootstrapOnly();

}
extern "C" mach_error_t __declspec(dllexport) AMDFUModeDeviceRequestAbbreviatedSendSync()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDFUModeDeviceRequestAbbreviatedSendSync");
	return method_AMDFUModeDeviceRequestAbbreviatedSendSync();

}
extern "C" mach_error_t __declspec(dllexport) AMDGetPairingRecordDirectoryPath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDGetPairingRecordDirectoryPath");
	return method_AMDGetPairingRecordDirectoryPath();

}
extern "C" mach_error_t __declspec(dllexport) AMDListenForNotifications()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDListenForNotifications");
	return method_AMDListenForNotifications();

}
extern "C" mach_error_t __declspec(dllexport) AMDObserveNotification()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDObserveNotification");
	return method_AMDObserveNotification();

}
extern "C" mach_error_t __declspec(dllexport) AMDPostNotification()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDPostNotification");
	return method_AMDPostNotification();

}
extern "C" mach_error_t __declspec(dllexport) AMDSecureListenForNotifications()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDSecureListenForNotifications");
	return method_AMDSecureListenForNotifications();

}
extern "C" mach_error_t __declspec(dllexport) AMDSecureObserveNotification()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDSecureObserveNotification");
	return method_AMDSecureObserveNotification();

}
extern "C" mach_error_t __declspec(dllexport) AMDSecurePostNotification()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDSecurePostNotification");
	return method_AMDSecurePostNotification();

}
extern "C" mach_error_t __declspec(dllexport) AMDSecureShutdownNotificationProxy()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDSecureShutdownNotificationProxy");
	return method_AMDSecureShutdownNotificationProxy();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionCreate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionCreate");
	return method_AMDServiceConnectionCreate();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionGetSecureIOContext()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionGetSecureIOContext");
	return method_AMDServiceConnectionGetSecureIOContext();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionGetSocket()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionGetSocket");
	return method_AMDServiceConnectionGetSocket();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionGetTypeID");
	return method_AMDServiceConnectionGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionInvalidate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionInvalidate");
	return method_AMDServiceConnectionInvalidate();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionReceive()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionReceive");
	return method_AMDServiceConnectionReceive();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionReceiveMessage()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionReceiveMessage");
	return method_AMDServiceConnectionReceiveMessage();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionSend()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionSend");
	return method_AMDServiceConnectionSend();

}
extern "C" mach_error_t __declspec(dllexport) AMDServiceConnectionSendMessage()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDServiceConnectionSendMessage");
	return method_AMDServiceConnectionSendMessage();

}
extern "C" mach_error_t __declspec(dllexport) AMDSetLogLevel()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDSetLogLevel");
	return method_AMDSetLogLevel();

}
extern "C" mach_error_t __declspec(dllexport) AMDShutdownNotificationProxy()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDShutdownNotificationProxy");
	return method_AMDShutdownNotificationProxy();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceActivate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceActivate");
	return method_AMDeviceActivate();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceArchiveApplication()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceArchiveApplication");
	return method_AMDeviceArchiveApplication();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceCheckCapabilitiesMatch()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCheckCapabilitiesMatch");
	return method_AMDeviceCheckCapabilitiesMatch();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceCopyAuthInstallPreflightOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCopyAuthInstallPreflightOptions");
	return method_AMDeviceCopyAuthInstallPreflightOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceCopyDeviceLocation()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCopyDeviceLocation");
	return method_AMDeviceCopyDeviceLocation();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceCopyProvisioningProfiles()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCopyProvisioningProfiles");
	return method_AMDeviceCopyProvisioningProfiles();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceCopyValueWithError()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceCopyValueWithError");
	return method_AMDeviceCopyValueWithError();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceDeactivate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceDeactivate");
	return method_AMDeviceDeactivate();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceEnterRecovery()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceEnterRecovery");
	return method_AMDeviceEnterRecovery();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceExtendedPairWithOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceExtendedPairWithOptions");
	return method_AMDeviceExtendedPairWithOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceGetInterfaceSpeed()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceGetInterfaceSpeed");
	return method_AMDeviceGetInterfaceSpeed();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceGetTypeID");
	return method_AMDeviceGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceGetUserInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceGetUserInfo");
	return method_AMDeviceGetUserInfo();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceGetWirelessBuddyFlags()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceGetWirelessBuddyFlags");
	return method_AMDeviceGetWirelessBuddyFlags();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceInstallApplication()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceInstallApplication");
	return method_AMDeviceInstallApplication();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceInstallProvisioningProfile()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceInstallProvisioningProfile");
	return method_AMDeviceInstallProvisioningProfile();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceIsValid()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceIsValid");
	return method_AMDeviceIsValid();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceLookupApplicationArchives()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceLookupApplicationArchives");
	return method_AMDeviceLookupApplicationArchives();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceNotificationUnsubscribe()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceNotificationUnsubscribe");
	return method_AMDeviceNotificationUnsubscribe();

}
extern "C" mach_error_t __declspec(dllexport) AMDevicePair()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDevicePair");
	return method_AMDevicePair();

}
extern "C" mach_error_t __declspec(dllexport) AMDevicePairWithOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDevicePairWithOptions");
	return method_AMDevicePairWithOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMDevicePowerAssertionCreate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDevicePowerAssertionCreate");
	return method_AMDevicePowerAssertionCreate();

}
extern "C" mach_error_t __declspec(dllexport) AMDevicePowerAssertionGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDevicePowerAssertionGetTypeID");
	return method_AMDevicePowerAssertionGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AMDevicePreflightOperationCreate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDevicePreflightOperationCreate");
	return method_AMDevicePreflightOperationCreate();

}
extern "C" mach_error_t __declspec(dllexport) AMDevicePreflightOperationGetRunLoopSource()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDevicePreflightOperationGetRunLoopSource");
	return method_AMDevicePreflightOperationGetRunLoopSource();

}
extern "C" mach_error_t __declspec(dllexport) AMDevicePreflightOperationGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDevicePreflightOperationGetTypeID");
	return method_AMDevicePreflightOperationGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AMDevicePreflightOperationInvalidate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDevicePreflightOperationInvalidate");
	return method_AMDevicePreflightOperationInvalidate();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceRemoveApplicationArchive()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceRemoveApplicationArchive");
	return method_AMDeviceRemoveApplicationArchive();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceRemoveProvisioningProfile()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceRemoveProvisioningProfile");
	return method_AMDeviceRemoveProvisioningProfile();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceRemoveValue()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceRemoveValue");
	return method_AMDeviceRemoveValue();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceRequestAbbreviatedSendSync()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceRequestAbbreviatedSendSync");
	return method_AMDeviceRequestAbbreviatedSendSync();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceRestoreApplication()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceRestoreApplication");
	return method_AMDeviceRestoreApplication();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureArchiveApplication()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureArchiveApplication");
	return method_AMDeviceSecureArchiveApplication();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureCheckCapabilitiesMatch()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureCheckCapabilitiesMatch");
	return method_AMDeviceSecureCheckCapabilitiesMatch();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureInstallApplication()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureInstallApplication");
	return method_AMDeviceSecureInstallApplication();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureRemoveApplicationArchive()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureRemoveApplicationArchive");
	return method_AMDeviceSecureRemoveApplicationArchive();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureRestoreApplication()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureRestoreApplication");
	return method_AMDeviceSecureRestoreApplication();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureStartService()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureStartService");
	return method_AMDeviceSecureStartService();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureTransferPath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureTransferPath");
	return method_AMDeviceSecureTransferPath();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureUninstallApplication()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureUninstallApplication");
	return method_AMDeviceSecureUninstallApplication();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSecureUpgradeApplication()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSecureUpgradeApplication");
	return method_AMDeviceSecureUpgradeApplication();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSetUserInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSetUserInfo");
	return method_AMDeviceSetUserInfo();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSetValue()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSetValue");
	return method_AMDeviceSetValue();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceSetWirelessBuddyFlags()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceSetWirelessBuddyFlags");
	return method_AMDeviceSetWirelessBuddyFlags();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceWakeupOperationCreateWithToken()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceWakeupOperationCreateWithToken");
	return method_AMDeviceWakeupOperationCreateWithToken();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceWakeupOperationGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceWakeupOperationGetTypeID");
	return method_AMDeviceWakeupOperationGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceWakeupOperationInvalidate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceWakeupOperationInvalidate");
	return method_AMDeviceWakeupOperationInvalidate();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceWakeupOperationSchedule()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceWakeupOperationSchedule");
	return method_AMDeviceWakeupOperationSchedule();

}
extern "C" mach_error_t __declspec(dllexport) AMDeviceWakeupUsingToken()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMDeviceWakeupUsingToken");
	return method_AMDeviceWakeupUsingToken();

}
extern "C" mach_error_t __declspec(dllexport) AMRAuthInstallCopyLocalizedStringForServerError()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRAuthInstallCopyLocalizedStringForServerError");
	return method_AMRAuthInstallCopyLocalizedStringForServerError();

}
extern "C" mach_error_t __declspec(dllexport) AMRAuthInstallCopyPreflightOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRAuthInstallCopyPreflightOptions");
	return method_AMRAuthInstallCopyPreflightOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMRAuthInstallFinalize()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRAuthInstallFinalize");
	return method_AMRAuthInstallFinalize();

}
extern "C" mach_error_t __declspec(dllexport) AMRAuthInstallPreflight()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRAuthInstallPreflight");
	return method_AMRAuthInstallPreflight();

}
extern "C" mach_error_t __declspec(dllexport) AMRAuthInstallRegisterProxyCredentialsCallback()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRAuthInstallRegisterProxyCredentialsCallback");
	return method_AMRAuthInstallRegisterProxyCredentialsCallback();

}
extern "C" mach_error_t __declspec(dllexport) AMRLog()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRLog");
	return method_AMRLog();

}
extern "C" mach_error_t __declspec(dllexport) AMRLogv()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRLogv");
	return method_AMRLogv();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceCopyAuthInstallPreflightOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceCopyAuthInstallPreflightOptions");
	return method_AMRecoveryModeDeviceCopyAuthInstallPreflightOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceCopyBoardConfig()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceCopyBoardConfig");
	return method_AMRecoveryModeDeviceCopyBoardConfig();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice");
	return method_AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceCopyIMEI()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceCopyIMEI");
	return method_AMRecoveryModeDeviceCopyIMEI();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceCopySerialNumber()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceCopySerialNumber");
	return method_AMRecoveryModeDeviceCopySerialNumber();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetBoardID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetBoardID");
	return method_AMRecoveryModeDeviceGetBoardID();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetChipID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetChipID");
	return method_AMRecoveryModeDeviceGetChipID();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetECID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetECID");
	return method_AMRecoveryModeDeviceGetECID();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetLocationID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetLocationID");
	return method_AMRecoveryModeDeviceGetLocationID();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetProductID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetProductID");
	return method_AMRecoveryModeDeviceGetProductID();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetProductType()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetProductType");
	return method_AMRecoveryModeDeviceGetProductType();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetProductionMode()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetProductionMode");
	return method_AMRecoveryModeDeviceGetProductionMode();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetProgress()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetProgress");
	return method_AMRecoveryModeDeviceGetProgress();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetSecurityDomain()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetSecurityDomain");
	return method_AMRecoveryModeDeviceGetSecurityDomain();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetSecurityEpoch()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetSecurityEpoch");
	return method_AMRecoveryModeDeviceGetSecurityEpoch();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceGetTypeID");
	return method_AMRecoveryModeDeviceGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceIsBootstrapOnly()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceIsBootstrapOnly");
	return method_AMRecoveryModeDeviceIsBootstrapOnly();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceReboot()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceReboot");
	return method_AMRecoveryModeDeviceReboot();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceRequestAbbreviatedSendSync()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceRequestAbbreviatedSendSync");
	return method_AMRecoveryModeDeviceRequestAbbreviatedSendSync();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceSendBlindCommandToDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceSendBlindCommandToDevice");
	return method_AMRecoveryModeDeviceSendBlindCommandToDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceSendCommandToDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceSendCommandToDevice");
	return method_AMRecoveryModeDeviceSendCommandToDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceSendFileToDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceSendFileToDevice");
	return method_AMRecoveryModeDeviceSendFileToDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeDeviceSetAutoBoot()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeDeviceSetAutoBoot");
	return method_AMRecoveryModeDeviceSetAutoBoot();

}
extern "C" mach_error_t __declspec(dllexport) AMRecoveryModeGetSoftwareBuildVersion()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRecoveryModeGetSoftwareBuildVersion");
	return method_AMRecoveryModeGetSoftwareBuildVersion();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableBuildCopyRestoreBundleURL()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableBuildCopyRestoreBundleURL");
	return method_AMRestorableBuildCopyRestoreBundleURL();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableBuildCopySupportedBoardConfigs()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableBuildCopySupportedBoardConfigs");
	return method_AMRestorableBuildCopySupportedBoardConfigs();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableBuildCopySupportedVariants()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableBuildCopySupportedVariants");
	return method_AMRestorableBuildCopySupportedVariants();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableBuildCreate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableBuildCreate");
	return method_AMRestorableBuildCreate();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableCommitStashBag()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableCommitStashBag");
	return method_AMRestorableCommitStashBag();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopyAMDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopyAMDevice");
	return method_AMRestorableDeviceCopyAMDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopyAuthInstallPreflightOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopyAuthInstallPreflightOptions");
	return method_AMRestorableDeviceCopyAuthInstallPreflightOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopyBoardConfig()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopyBoardConfig");
	return method_AMRestorableDeviceCopyBoardConfig();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopyDFUModeDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopyDFUModeDevice");
	return method_AMRestorableDeviceCopyDFUModeDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopyDefaultRestoreOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopyDefaultRestoreOptions");
	return method_AMRestorableDeviceCopyDefaultRestoreOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopyRecoveryModeDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopyRecoveryModeDevice");
	return method_AMRestorableDeviceCopyRecoveryModeDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopyRestoreModeDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopyRestoreModeDevice");
	return method_AMRestorableDeviceCopyRestoreModeDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopyRestoreOptionsFromDocument()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopyRestoreOptionsFromDocument");
	return method_AMRestorableDeviceCopyRestoreOptionsFromDocument();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopySerialDevicePath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopySerialDevicePath");
	return method_AMRestorableDeviceCopySerialDevicePath();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCopySerialNumber()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCopySerialNumber");
	return method_AMRestorableDeviceCopySerialNumber();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceCreateFromAMDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceCreateFromAMDevice");
	return method_AMRestorableDeviceCreateFromAMDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceEnableExtraDFUDevices()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceEnableExtraDFUDevices");
	return method_AMRestorableDeviceEnableExtraDFUDevices();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceGetDFUModeDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceGetDFUModeDevice");
	return method_AMRestorableDeviceGetDFUModeDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceGetECID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceGetECID");
	return method_AMRestorableDeviceGetECID();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceGetFusingInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceGetFusingInfo");
	return method_AMRestorableDeviceGetFusingInfo();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceGetLocationID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceGetLocationID");
	return method_AMRestorableDeviceGetLocationID();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceGetProductID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceGetProductID");
	return method_AMRestorableDeviceGetProductID();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceGetProductType()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceGetProductType");
	return method_AMRestorableDeviceGetProductType();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceGetRecoveryModeDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceGetRecoveryModeDevice");
	return method_AMRestorableDeviceGetRecoveryModeDevice();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceGetState()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceGetState");
	return method_AMRestorableDeviceGetState();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceRegisterForNotifications()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceRegisterForNotifications");
	return method_AMRestorableDeviceRegisterForNotifications();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceRestore()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceRestore");
	return method_AMRestorableDeviceRestore();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceSendBlindCommand()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceSendBlindCommand");
	return method_AMRestorableDeviceSendBlindCommand();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceSendCommand()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceSendCommand");
	return method_AMRestorableDeviceSendCommand();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceSendFile()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceSendFile");
	return method_AMRestorableDeviceSendFile();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceSetLogFileURL()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceSetLogFileURL");
	return method_AMRestorableDeviceSetLogFileURL();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceSetProxyCredentialsCallback()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceSetProxyCredentialsCallback");
	return method_AMRestorableDeviceSetProxyCredentialsCallback();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableDeviceUnregisterForNotifications()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableDeviceUnregisterForNotifications");
	return method_AMRestorableDeviceUnregisterForNotifications();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableEnableLogStreaming()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableEnableLogStreaming");
	return method_AMRestorableEnableLogStreaming();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableGetIdentifyingErrorCode()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableGetIdentifyingErrorCode");
	return method_AMRestorableGetIdentifyingErrorCode();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableLogToFile()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableLogToFile");
	return method_AMRestorableLogToFile();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorablePersonalizeCopyManifestTag()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorablePersonalizeCopyManifestTag");
	return method_AMRestorablePersonalizeCopyManifestTag();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorablePersonalizeSendFile()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorablePersonalizeSendFile");
	return method_AMRestorablePersonalizeSendFile();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableSetGlobalLocationIDFilter()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableSetGlobalLocationIDFilter");
	return method_AMRestorableSetGlobalLocationIDFilter();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableSetGlobalLogFileURL()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableSetGlobalLogFileURL");
	return method_AMRestorableSetGlobalLogFileURL();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorableSetLogLevel()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorableSetLogLevel");
	return method_AMRestorableSetLogLevel();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreCreateBootArgsByAddingArg()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreCreateBootArgsByAddingArg");
	return method_AMRestoreCreateBootArgsByAddingArg();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreCreateBootArgsByRemovingArg()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreCreateBootArgsByRemovingArg");
	return method_AMRestoreCreateBootArgsByRemovingArg();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreCreateDefaultOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreCreateDefaultOptions");
	return method_AMRestoreCreateDefaultOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreCreatePathsForBundle()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreCreatePathsForBundle");
	return method_AMRestoreCreatePathsForBundle();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreDisableFileLogging()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreDisableFileLogging");
	return method_AMRestoreDisableFileLogging();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreEnableExtraDFUDevices()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreEnableExtraDFUDevices");
	return method_AMRestoreEnableExtraDFUDevices();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreEnableFileLogging()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreEnableFileLogging");
	return method_AMRestoreEnableFileLogging();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreGetSupportedPayloadVersion()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreGetSupportedPayloadVersion");
	return method_AMRestoreGetSupportedPayloadVersion();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreGetTransformedDFUType()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreGetTransformedDFUType");
	return method_AMRestoreGetTransformedDFUType();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreGetTransformedFirmwareTypeValue()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreGetTransformedFirmwareTypeValue");
	return method_AMRestoreGetTransformedFirmwareTypeValue();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceCopyBoardConfig()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceCopyBoardConfig");
	return method_AMRestoreModeDeviceCopyBoardConfig();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceCopyEcid()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceCopyEcid");
	return method_AMRestoreModeDeviceCopyEcid();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceCopyIMEI()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceCopyIMEI");
	return method_AMRestoreModeDeviceCopyIMEI();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceCopyRestoreLog()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceCopyRestoreLog");
	return method_AMRestoreModeDeviceCopyRestoreLog();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceCopySerialNumber()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceCopySerialNumber");
	return method_AMRestoreModeDeviceCopySerialNumber();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceCreate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceCreate");
	return method_AMRestoreModeDeviceCreate();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceGetDeviceID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceGetDeviceID");
	return method_AMRestoreModeDeviceGetDeviceID();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceGetLocationID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceGetLocationID");
	return method_AMRestoreModeDeviceGetLocationID();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceGetProgress()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceGetProgress");
	return method_AMRestoreModeDeviceGetProgress();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceGetTypeID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceGetTypeID");
	return method_AMRestoreModeDeviceGetTypeID();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeDeviceReboot()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeDeviceReboot");
	return method_AMRestoreModeDeviceReboot();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreModeGetLastFailureLog()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreModeGetLastFailureLog");
	return method_AMRestoreModeGetLastFailureLog();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorePerformDFURestore()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorePerformDFURestore");
	return method_AMRestorePerformDFURestore();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorePerformRecoveryModeRestore()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorePerformRecoveryModeRestore");
	return method_AMRestorePerformRecoveryModeRestore();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorePerformRestoreModeRestore()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorePerformRestoreModeRestore");
	return method_AMRestorePerformRestoreModeRestore();

}
extern "C" mach_error_t __declspec(dllexport) AMRestorePerformRestoreModeRestoreWithError()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestorePerformRestoreModeRestoreWithError");
	return method_AMRestorePerformRestoreModeRestoreWithError();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreRegisterForDeviceNotifications()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreRegisterForDeviceNotifications");
	return method_AMRestoreRegisterForDeviceNotifications();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreSetLogLevel()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreSetLogLevel");
	return method_AMRestoreSetLogLevel();

}
extern "C" mach_error_t __declspec(dllexport) AMRestoreUnregisterForDeviceNotifications()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMRestoreUnregisterForDeviceNotifications");
	return method_AMRestoreUnregisterForDeviceNotifications();

}
extern "C" mach_error_t __declspec(dllexport) AMSArchiveBackup()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSArchiveBackup");
	return method_AMSArchiveBackup();

}
extern "C" mach_error_t __declspec(dllexport) AMSBackupWithOptions()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSBackupWithOptions");
	return method_AMSBackupWithOptions();

}
extern "C" mach_error_t __declspec(dllexport) AMSBeginSync()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSBeginSync");
	return method_AMSBeginSync();

}
extern "C" mach_error_t __declspec(dllexport) AMSBeginSyncForDataClasses()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSBeginSyncForDataClasses");
	return method_AMSBeginSyncForDataClasses();

}
extern "C" mach_error_t __declspec(dllexport) AMSCancelBackupRestore()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCancelBackupRestore");
	return method_AMSCancelBackupRestore();

}
extern "C" mach_error_t __declspec(dllexport) AMSCancelCrashReportCopy()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCancelCrashReportCopy");
	return method_AMSCancelCrashReportCopy();

}
extern "C" mach_error_t __declspec(dllexport) AMSCancelSync()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCancelSync");
	return method_AMSCancelSync();

}
extern "C" mach_error_t __declspec(dllexport) AMSCancelSyncDiagnostics()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCancelSyncDiagnostics");
	return method_AMSCancelSyncDiagnostics();

}
extern "C" mach_error_t __declspec(dllexport) AMSChangeBackupPassword()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSChangeBackupPassword");
	return method_AMSChangeBackupPassword();

}
extern "C" mach_error_t __declspec(dllexport) AMSCleanup()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCleanup");
	return method_AMSCleanup();

}
extern "C" mach_error_t __declspec(dllexport) AMSClearDataClasses()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSClearDataClasses");
	return method_AMSClearDataClasses();

}
extern "C" mach_error_t __declspec(dllexport) AMSConnectToCrashReportCopyTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSConnectToCrashReportCopyTarget");
	return method_AMSConnectToCrashReportCopyTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSCopyApplicationListFromBackup()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCopyApplicationListFromBackup");
	return method_AMSCopyApplicationListFromBackup();

}
extern "C" mach_error_t __declspec(dllexport) AMSCopyCrashReportPath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCopyCrashReportPath");
	return method_AMSCopyCrashReportPath();

}
extern "C" mach_error_t __declspec(dllexport) AMSCopyCrashReportsFromTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCopyCrashReportsFromTarget");
	return method_AMSCopyCrashReportsFromTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSCopySourcesForRestoreCompatibleWith()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSCopySourcesForRestoreCompatibleWith");
	return method_AMSCopySourcesForRestoreCompatibleWith();

}
extern "C" mach_error_t __declspec(dllexport) AMSDisconnectFromCrashReportCopyTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSDisconnectFromCrashReportCopyTarget");
	return method_AMSDisconnectFromCrashReportCopyTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSEnableCloudBackup()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSEnableCloudBackup");
	return method_AMSEnableCloudBackup();

}
extern "C" mach_error_t __declspec(dllexport) AMSEnableSyncServices()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSEnableSyncServices");
	return method_AMSEnableSyncServices();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetAOSUsername()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetAOSUsername");
	return method_AMSGetAOSUsername();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetApplicationProviderInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetApplicationProviderInfo");
	return method_AMSGetApplicationProviderInfo();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetBackupInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetBackupInfo");
	return method_AMSGetBackupInfo();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetBackupPasswordFromKeychainForTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetBackupPasswordFromKeychainForTarget");
	return method_AMSGetBackupPasswordFromKeychainForTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetCalendarDayLimit()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetCalendarDayLimit");
	return method_AMSGetCalendarDayLimit();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetClientIdentifierAndDisplayNameForTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetClientIdentifierAndDisplayNameForTarget");
	return method_AMSGetClientIdentifierAndDisplayNameForTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetCollectionsForDataClassName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetCollectionsForDataClassName");
	return method_AMSGetCollectionsForDataClassName();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetCrashReportCopyPreferencesForTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetCrashReportCopyPreferencesForTarget");
	return method_AMSGetCrashReportCopyPreferencesForTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetDataChangeAlertInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetDataChangeAlertInfo");
	return method_AMSGetDataChangeAlertInfo();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetDataClassInfoForTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetDataClassInfoForTarget");
	return method_AMSGetDataClassInfoForTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetDefaultOutlookCalendarMapping()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetDefaultOutlookCalendarMapping");
	return method_AMSGetDefaultOutlookCalendarMapping();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetLastSyncDateForDataClass()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetLastSyncDateForDataClass");
	return method_AMSGetLastSyncDateForDataClass();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetNewRecordCalendarName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetNewRecordCalendarName");
	return method_AMSGetNewRecordCalendarName();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetNewRecordGroupName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetNewRecordGroupName");
	return method_AMSGetNewRecordGroupName();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetNumberOfCrashReportsToCopy()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetNumberOfCrashReportsToCopy");
	return method_AMSGetNumberOfCrashReportsToCopy();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetNumberOfCrashReportsToSubmit()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetNumberOfCrashReportsToSubmit");
	return method_AMSGetNumberOfCrashReportsToSubmit();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetSourcesForRestore()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetSourcesForRestore");
	return method_AMSGetSourcesForRestore();

}
extern "C" mach_error_t __declspec(dllexport) AMSGetSupportedDataClassNames()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSGetSupportedDataClassNames");
	return method_AMSGetSupportedDataClassNames();

}
extern "C" mach_error_t __declspec(dllexport) AMSInitialize()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSInitialize");
	return method_AMSInitialize();

}
extern "C" mach_error_t __declspec(dllexport) AMSIsSyncServicesEnabled()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSIsSyncServicesEnabled");
	return method_AMSIsSyncServicesEnabled();

}
extern "C" mach_error_t __declspec(dllexport) AMSRefreshCollectionsForDataClassName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSRefreshCollectionsForDataClassName");
	return method_AMSRefreshCollectionsForDataClassName();

}
extern "C" mach_error_t __declspec(dllexport) AMSRegisterCallbacks()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSRegisterCallbacks");
	return method_AMSRegisterCallbacks();

}
extern "C" mach_error_t __declspec(dllexport) AMSRegisterClientWithTargetIdentifierAndDisplayName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSRegisterClientWithTargetIdentifierAndDisplayName");
	return method_AMSRegisterClientWithTargetIdentifierAndDisplayName();

}
extern "C" mach_error_t __declspec(dllexport) AMSResetSyncData()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSResetSyncData");
	return method_AMSResetSyncData();

}
extern "C" mach_error_t __declspec(dllexport) AMSRestoreWithApplications()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSRestoreWithApplications");
	return method_AMSRestoreWithApplications();

}
extern "C" mach_error_t __declspec(dllexport) AMSRunSyncDiagnostics()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSRunSyncDiagnostics");
	return method_AMSRunSyncDiagnostics();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetBackupPasswordInKeychain()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetBackupPasswordInKeychain");
	return method_AMSSetBackupPasswordInKeychain();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetCalendarDayLimit()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetCalendarDayLimit");
	return method_AMSSetCalendarDayLimit();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetCrashReportCopyPreferencesForTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetCrashReportCopyPreferencesForTarget");
	return method_AMSSetCrashReportCopyPreferencesForTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetDataChangeAlertInfo()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetDataChangeAlertInfo");
	return method_AMSSetDataChangeAlertInfo();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetDataClassInfoForTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetDataClassInfoForTarget");
	return method_AMSSetDataClassInfoForTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetDefaultOutlookCalendarMapping()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetDefaultOutlookCalendarMapping");
	return method_AMSSetDefaultOutlookCalendarMapping();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetDesignatedProviderForDataClassName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetDesignatedProviderForDataClassName");
	return method_AMSSetDesignatedProviderForDataClassName();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetFilteredCollectionNamesForDataClassName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetFilteredCollectionNamesForDataClassName");
	return method_AMSSetFilteredCollectionNamesForDataClassName();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetNewRecordCalendarName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetNewRecordCalendarName");
	return method_AMSSetNewRecordCalendarName();

}
extern "C" mach_error_t __declspec(dllexport) AMSSetNewRecordGroupName()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSetNewRecordGroupName");
	return method_AMSSetNewRecordGroupName();

}
extern "C" mach_error_t __declspec(dllexport) AMSSubmitCrashReportsFromTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSubmitCrashReportsFromTarget");
	return method_AMSSubmitCrashReportsFromTarget();

}
extern "C" mach_error_t __declspec(dllexport) AMSSubmitRestoreLogFromPath()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSSubmitRestoreLogFromPath");
	return method_AMSSubmitRestoreLogFromPath();

}
extern "C" mach_error_t __declspec(dllexport) AMSUnregisterTarget()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("AMSUnregisterTarget");
	return method_AMSUnregisterTarget();

}
extern "C" mach_error_t __declspec(dllexport) ASRServerHandleConnection()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("ASRServerHandleConnection");
	return method_ASRServerHandleConnection();

}
extern "C" mach_error_t __declspec(dllexport) RCGetSystemPartitionExtrasSizeForDevice()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("RCGetSystemPartitionExtrasSizeForDevice");
	return method_RCGetSystemPartitionExtrasSizeForDevice();

}
extern "C" mach_error_t __declspec(dllexport) USBMuxConnectByPort()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("USBMuxConnectByPort");
	return method_USBMuxConnectByPort();

}
extern "C" mach_error_t __declspec(dllexport) USBMuxListenerClose()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("USBMuxListenerClose");
	return method_USBMuxListenerClose();

}
extern "C" mach_error_t __declspec(dllexport) USBMuxListenerCreate()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("USBMuxListenerCreate");
	return method_USBMuxListenerCreate();

}
extern "C" mach_error_t __declspec(dllexport) USBMuxListenerSetDebug()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("USBMuxListenerSetDebug");
	return method_USBMuxListenerSetDebug();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorCodeKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorCodeKey");
	return method_kAFCErrorCodeKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorDebugDescriptionKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorDebugDescriptionKey");
	return method_kAFCErrorDebugDescriptionKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorDescriptionKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorDescriptionKey");
	return method_kAFCErrorDescriptionKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorDomain()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorDomain");
	return method_kAFCErrorDomain();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorDomainKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorDomainKey");
	return method_kAFCErrorDomainKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorExtendedInfoKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorExtendedInfoKey");
	return method_kAFCErrorExtendedInfoKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorFileLineKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorFileLineKey");
	return method_kAFCErrorFileLineKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorFileNameKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorFileNameKey");
	return method_kAFCErrorFileNameKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorLocalizedDescriptionKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorLocalizedDescriptionKey");
	return method_kAFCErrorLocalizedDescriptionKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorLocalizedFailureReasonKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorLocalizedFailureReasonKey");
	return method_kAFCErrorLocalizedFailureReasonKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorLocalizedRecoverySuggestionKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorLocalizedRecoverySuggestionKey");
	return method_kAFCErrorLocalizedRecoverySuggestionKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorUnderlyingErrorKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorUnderlyingErrorKey");
	return method_kAFCErrorUnderlyingErrorKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCErrorVersionKey()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCErrorVersionKey");
	return method_kAFCErrorVersionKey();

}
extern "C" mach_error_t __declspec(dllexport) kAFCHeaderKeyHeaderLength()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCHeaderKeyHeaderLength");
	return method_kAFCHeaderKeyHeaderLength();

}
extern "C" mach_error_t __declspec(dllexport) kAFCHeaderKeyPacketData()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCHeaderKeyPacketData");
	return method_kAFCHeaderKeyPacketData();

}
extern "C" mach_error_t __declspec(dllexport) kAFCHeaderKeyPacketID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCHeaderKeyPacketID");
	return method_kAFCHeaderKeyPacketID();

}
extern "C" mach_error_t __declspec(dllexport) kAFCHeaderKeyPacketLength()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCHeaderKeyPacketLength");
	return method_kAFCHeaderKeyPacketLength();

}
extern "C" mach_error_t __declspec(dllexport) kAFCHeaderKeyPacketType()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCHeaderKeyPacketType");
	return method_kAFCHeaderKeyPacketType();

}
extern "C" mach_error_t __declspec(dllexport) kAFCHeaderKeySignature()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAFCHeaderKeySignature");
	return method_kAFCHeaderKeySignature();

}
extern "C" mach_error_t __declspec(dllexport) kAMRestorableInvalidClientID()
{
	ENSURE_MOBILEDEVICE_LOADED;
	OutputDebugStringA("kAMRestorableInvalidClientID");
	return method_kAMRestorableInvalidClientID();

}
