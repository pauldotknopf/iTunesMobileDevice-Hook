#define MOCK_METHODS

using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Remoting;
using System.Security.Permissions;
using System.Text;
using System.Windows.Forms;



namespace GenerateStubs
{
    class MethodSig
    {
        public MethodSig(string methodName, string returnType, params string[] parameters)
        {
            MethodName = methodName;
            ReturnType = returnType;
            Params = parameters.ToList();
        }

        public string MethodName;
        public string ReturnType;
        public List<string> Params;
    }

    class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
#if MOCK_METHODS
            foreach (var method in Methods.Split(new string[] { Environment.NewLine }, StringSplitOptions.None))
            {
                if (!MethodSignatures.Any(x => x.MethodName == method))
                {
                    MethodSignatures.Add(new MethodSig(method, "mach_error_t"));
                }
            }
#endif

            var sb = new StringBuilder();
            foreach (var method in Methods.Split(new string[] {Environment.NewLine}, StringSplitOptions.None))
            {
                var commented = MethodSignatures.Any(x => x.MethodName == method);
                sb.AppendLine(string.Format((commented ? "// " : "") + "#pragma comment(linker, \"/export:{0}=iTunesMobileDeviceReal.{0}\")", method));
            }

            Clipboard.SetText(sb.ToString());
            Console.WriteLine("All link redirects sent to clipboard");
            Console.ReadLine();

            sb = new StringBuilder();
            foreach (var method in MethodSignatures)
            {
                sb.AppendLine(string.Format("typedef {0}(*tf_{1})({2});", method.ReturnType, method.MethodName, string.Join(", ", method.Params)));
            }

            Clipboard.SetText(sb.ToString());
            Console.WriteLine("All typedefs sent to clipboard");
            Console.ReadLine();

            sb = new StringBuilder();
            foreach (var method in MethodSignatures)
            {
                sb.AppendLine(string.Format("static tf_{0} method_{0} = NULL;", method.MethodName));
            }

            Clipboard.SetText(sb.ToString());
            Console.WriteLine("All statics sent to clipboard");
            Console.ReadLine();

            sb = new StringBuilder();
            foreach (var method in MethodSignatures)
            {
                sb.AppendLine(string.Format("GET_METHOD_PROC_ADDR({0});", method.MethodName));
            }

            Clipboard.SetText(sb.ToString());
            Console.WriteLine("All GET_METHOD_PROC_ADDR sent to clipboard");
            Console.ReadLine();

            sb = new StringBuilder();
            foreach (var method in MethodSignatures)
            {
                sb.AppendLine(string.Format("extern \"C\" {0} __declspec(dllexport) {1}({2})", method.ReturnType, method.MethodName, string.Join(", ", method.Params)));
                sb.AppendLine("{");
                sb.AppendLine("		ENSURE_MOBILEDEVICE_LOADED;");
                sb.AppendLine(string.Format("     OutputDebugStringA(\"{0}\");", method.MethodName));
                //sb.AppendLine(string.Format("     MessageBoxA(NULL, \"{0}\", \"iTMDHook\", MB_OK | MB_ICONINFORMATION);", method.MethodName));
                //sb.AppendLine(string.Format("     std::ofstream log(\"D:\\itmdlog.txt\", std::ios_base::app | std::ios_base::out);"));
                //sb.AppendLine(string.Format("     log << \"{0}\\n\";", method.MethodName));

                var methodInvoke = string.Format("method_{0}({1})", method.MethodName,
                    string.Join(", ", method.Params.Select(x => x.Substring(x.LastIndexOf(" ", StringComparison.Ordinal)).Replace("*", ""))));

                sb.AppendLine(method.ReturnType == "void"
                   ? "		" + methodInvoke + ";"
                   : "		return " + methodInvoke + ";");

                sb.AppendLine();
                sb.AppendLine("}");
            }

            Clipboard.SetText(sb.ToString());
            Console.WriteLine("All Overrides sent to clipboard");
            Console.ReadLine();

//            
//{
//    ENSURE_MOBILEDEVICE_LOADED_VOID;
//    OutputDebugStringA("AMDeviceRelease");
//    method_AMDeviceRelease(device);
//}

        }

        public static List<MethodSig> MethodSignatures = new List<MethodSig>
        {
            //#pragma comment(linker, "/export:AFCErrnoToAFCError=iTunesMobileDeviceReal.AFCErrnoToAFCError")
            new MethodSig("AFCErrnoToAFCError", "int", "int err", "char **msg"),
            //#pragma comment(linker, "/export:AFCLockCreate=iTunesMobileDeviceReal.AFCLockCreate")
            //#pragma comment(linker, "/export:AFCLockFree=iTunesMobileDeviceReal.AFCLockFree")
            //#pragma comment(linker, "/export:AFCLockLock=iTunesMobileDeviceReal.AFCLockLock")
            //#pragma comment(linker, "/export:AFCLockTryLock=iTunesMobileDeviceReal.AFCLockTryLock")
            //#pragma comment(linker, "/export:AFCLockUnlock=iTunesMobileDeviceReal.AFCLockUnlock")
            //#pragma comment(linker, "/export:AFCStringCopy=iTunesMobileDeviceReal.AFCStringCopy")
            //#pragma comment(linker, "/export:AMDeviceRelease=iTunesMobileDeviceReal.AMDeviceRelease")
             new MethodSig("AMDeviceRelease", "void", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceRetain=iTunesMobileDeviceReal.AMDeviceRetain")
            new MethodSig("AMDeviceRetain", "void", "void* device"),
            //#pragma comment(linker, "/export:AMSAddAppleSearchPathsToEnvironmentFromReg=iTunesMobileDeviceReal.AMSAddAppleSearchPathsToEnvironmentFromReg")
            //#pragma comment(linker, "/export:MISProfileCopyPayload=iTunesMobileDeviceReal.MISProfileCopyPayload")
            //#pragma comment(linker, "/export:MISProfileCopySignerSubjectSummary=iTunesMobileDeviceReal.MISProfileCopySignerSubjectSummary")
            //#pragma comment(linker, "/export:MISProfileCreateDataRepresentation=iTunesMobileDeviceReal.MISProfileCreateDataRepresentation")
            //#pragma comment(linker, "/export:MISProfileCreateWithData=iTunesMobileDeviceReal.MISProfileCreateWithData")
            //#pragma comment(linker, "/export:MISProfileCreateWithFile=iTunesMobileDeviceReal.MISProfileCreateWithFile")
            //#pragma comment(linker, "/export:MISProfileGetValue=iTunesMobileDeviceReal.MISProfileGetValue")
            //#pragma comment(linker, "/export:MISProfileIsMutable=iTunesMobileDeviceReal.MISProfileIsMutable")
            //#pragma comment(linker, "/export:MISProfileValidateSignature=iTunesMobileDeviceReal.MISProfileValidateSignature")
            //#pragma comment(linker, "/export:MISProfileValidateSignatureWithAnchors=iTunesMobileDeviceReal.MISProfileValidateSignatureWithAnchors")
            //#pragma comment(linker, "/export:MISProfileWriteToFile=iTunesMobileDeviceReal.MISProfileWriteToFile")
            //#pragma comment(linker, "/export:MISProvisioningProfileCheckValidity=iTunesMobileDeviceReal.MISProvisioningProfileCheckValidity")
            //#pragma comment(linker, "/export:MISProvisioningProfileGetCreationDate=iTunesMobileDeviceReal.MISProvisioningProfileGetCreationDate")
            //#pragma comment(linker, "/export:MISProvisioningProfileGetDeveloperCertificates=iTunesMobileDeviceReal.MISProvisioningProfileGetDeveloperCertificates")
            //#pragma comment(linker, "/export:MISProvisioningProfileGetExpirationDate=iTunesMobileDeviceReal.MISProvisioningProfileGetExpirationDate")
            //#pragma comment(linker, "/export:MISProvisioningProfileGetName=iTunesMobileDeviceReal.MISProvisioningProfileGetName")
            //#pragma comment(linker, "/export:MISProvisioningProfileGetProvisionedDevices=iTunesMobileDeviceReal.MISProvisioningProfileGetProvisionedDevices")
            //#pragma comment(linker, "/export:MISProvisioningProfileGetUUID=iTunesMobileDeviceReal.MISProvisioningProfileGetUUID")
            //#pragma comment(linker, "/export:MISProvisioningProfileGetVersion=iTunesMobileDeviceReal.MISProvisioningProfileGetVersion")
            //#pragma comment(linker, "/export:MISProvisioningProfileIncludesDevice=iTunesMobileDeviceReal.MISProvisioningProfileIncludesDevice")
            //#pragma comment(linker, "/export:MISProvisioningProfileProvisionsAllDevices=iTunesMobileDeviceReal.MISProvisioningProfileProvisionsAllDevices")
            //#pragma comment(linker, "/export:MISProvisioningProfileValidateSignature=iTunesMobileDeviceReal.MISProvisioningProfileValidateSignature")
            //#pragma comment(linker, "/export:USBMuxListenForDevices=iTunesMobileDeviceReal.USBMuxListenForDevices")
            //#pragma comment(linker, "/export:AFCConnectionClose=iTunesMobileDeviceReal.AFCConnectionClose")
             new MethodSig("AFCConnectionClose", "mach_error_t", "void* conn"),
            //#pragma comment(linker, "/export:AFCConnectionCopyLastErrorInfo=iTunesMobileDeviceReal.AFCConnectionCopyLastErrorInfo")
            //#pragma comment(linker, "/export:AFCConnectionCreate=iTunesMobileDeviceReal.AFCConnectionCreate")
            //#pragma comment(linker, "/export:AFCConnectionGetContext=iTunesMobileDeviceReal.AFCConnectionGetContext")
            //#pragma comment(linker, "/export:AFCConnectionGetFSBlockSize=iTunesMobileDeviceReal.AFCConnectionGetFSBlockSize")
            //#pragma comment(linker, "/export:AFCConnectionGetIOTimeout=iTunesMobileDeviceReal.AFCConnectionGetIOTimeout")
            //#pragma comment(linker, "/export:AFCConnectionGetSecureContext=iTunesMobileDeviceReal.AFCConnectionGetSecureContext")
            //#pragma comment(linker, "/export:AFCConnectionGetSocketBlockSize=iTunesMobileDeviceReal.AFCConnectionGetSocketBlockSize")
            //#pragma comment(linker, "/export:AFCConnectionGetStatus=iTunesMobileDeviceReal.AFCConnectionGetStatus")
            //#pragma comment(linker, "/export:AFCConnectionGetTypeID=iTunesMobileDeviceReal.AFCConnectionGetTypeID")
            //#pragma comment(linker, "/export:AFCConnectionInvalidate=iTunesMobileDeviceReal.AFCConnectionInvalidate")
            //#pragma comment(linker, "/export:AFCConnectionIsValid=iTunesMobileDeviceReal.AFCConnectionIsValid")
            //#pragma comment(linker, "/export:AFCConnectionOpen=iTunesMobileDeviceReal.AFCConnectionOpen")
            new MethodSig("AFCConnectionOpen", "afc_error_t", "void* handle", "unsigned int io_timeout", "void* conn"),
            //#pragma comment(linker, "/export:AFCConnectionProcessOperation=iTunesMobileDeviceReal.AFCConnectionProcessOperation")
            //#pragma comment(linker, "/export:AFCConnectionProcessOperations=iTunesMobileDeviceReal.AFCConnectionProcessOperations")
            //#pragma comment(linker, "/export:AFCConnectionScheduleWithRunLoop=iTunesMobileDeviceReal.AFCConnectionScheduleWithRunLoop")
            //#pragma comment(linker, "/export:AFCConnectionSetCallBack=iTunesMobileDeviceReal.AFCConnectionSetCallBack")
            //#pragma comment(linker, "/export:AFCConnectionSetContext=iTunesMobileDeviceReal.AFCConnectionSetContext")
            //#pragma comment(linker, "/export:AFCConnectionSetDisposeSecureContextOnInvalidate=iTunesMobileDeviceReal.AFCConnectionSetDisposeSecureContextOnInvalidate")
            //#pragma comment(linker, "/export:AFCConnectionSetFSBlockSize=iTunesMobileDeviceReal.AFCConnectionSetFSBlockSize")
            //#pragma comment(linker, "/export:AFCConnectionSetFatalError=iTunesMobileDeviceReal.AFCConnectionSetFatalError")
            //#pragma comment(linker, "/export:AFCConnectionSetIOTimeout=iTunesMobileDeviceReal.AFCConnectionSetIOTimeout")
            //#pragma comment(linker, "/export:AFCConnectionSetSecureContext=iTunesMobileDeviceReal.AFCConnectionSetSecureContext")
            //#pragma comment(linker, "/export:AFCConnectionSetSocketBlockSize=iTunesMobileDeviceReal.AFCConnectionSetSocketBlockSize")
            //#pragma comment(linker, "/export:AFCConnectionSubmitOperation=iTunesMobileDeviceReal.AFCConnectionSubmitOperation")
            //#pragma comment(linker, "/export:AFCConnectionUnscheduleFromRunLoop=iTunesMobileDeviceReal.AFCConnectionUnscheduleFromRunLoop")
            //#pragma comment(linker, "/export:AFCCopyErrorString=iTunesMobileDeviceReal.AFCCopyErrorString")
            //#pragma comment(linker, "/export:AFCCopyPacketTypeString=iTunesMobileDeviceReal.AFCCopyPacketTypeString")
            //#pragma comment(linker, "/export:AFCDeviceInfoOpen=iTunesMobileDeviceReal.AFCDeviceInfoOpen")
            //#pragma comment(linker, "/export:AFCDirectoryClose=iTunesMobileDeviceReal.AFCDirectoryClose")
            //#pragma comment(linker, "/export:AFCDirectoryCreate=iTunesMobileDeviceReal.AFCDirectoryCreate")
            new MethodSig("AFCDirectoryCreate", "afc_error_t", "void* conn", "const char *dirname"),
            //#pragma comment(linker, "/export:AFCDirectoryOpen=iTunesMobileDeviceReal.AFCDirectoryOpen")
            //#pragma comment(linker, "/export:AFCDirectoryRead=iTunesMobileDeviceReal.AFCDirectoryRead")
            //#pragma comment(linker, "/export:AFCDiscardBodyData=iTunesMobileDeviceReal.AFCDiscardBodyData")
            //#pragma comment(linker, "/export:AFCDiscardData=iTunesMobileDeviceReal.AFCDiscardData")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateCloseOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateCloseOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateGetPositionOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateGetPositionOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateLockOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateLockOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateReadAtPositionOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateReadAtPositionOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateReadOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateReadOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateSetImmutableHintOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateSetImmutableHintOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateSetPositionOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateSetPositionOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateSetSizeOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateSetSizeOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateUnlockOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateUnlockOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateWriteAtPositionOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateWriteAtPositionOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorCreateWriteOperation=iTunesMobileDeviceReal.AFCFileDescriptorCreateWriteOperation")
            //#pragma comment(linker, "/export:AFCFileDescriptorGetTypeID=iTunesMobileDeviceReal.AFCFileDescriptorGetTypeID")
            //#pragma comment(linker, "/export:AFCFileDescriptorInvalidate=iTunesMobileDeviceReal.AFCFileDescriptorInvalidate")
            //#pragma comment(linker, "/export:AFCFileDescriptorIsValid=iTunesMobileDeviceReal.AFCFileDescriptorIsValid")
            //#pragma comment(linker, "/export:AFCFileInfoOpen=iTunesMobileDeviceReal.AFCFileInfoOpen")
            new MethodSig("AFCFileInfoOpen", "afc_error_t", "void *conn", "const char *path", "void *info"),
            //#pragma comment(linker, "/export:AFCFileRefClose=iTunesMobileDeviceReal.AFCFileRefClose")
            new MethodSig("AFCFileRefClose", "int", "void* hAFC", "INT64 handle"),
            //#pragma comment(linker, "/export:AFCFileRefLock=iTunesMobileDeviceReal.AFCFileRefLock")
            //#pragma comment(linker, "/export:AFCFileRefOpen=iTunesMobileDeviceReal.AFCFileRefOpen")
            new MethodSig("AFCFileRefOpen", "afc_error_t", "void* conn", "const char *path", "unsigned long long mode", "void *ref"),
            //#pragma comment(linker, "/export:AFCFileRefRead=iTunesMobileDeviceReal.AFCFileRefRead")
            new MethodSig("AFCFileRefRead", "int", "void* hAFC", "INT64 handle", "void *buffer", "UINT32 *len"),
            //#pragma comment(linker, "/export:AFCFileRefSeek=iTunesMobileDeviceReal.AFCFileRefSeek")
            new MethodSig("AFCFileRefSeek", "afc_error_t", "void* conn", "void* ref", "unsigned long long offset1", "unsigned long long offset2"),
            //#pragma comment(linker, "/export:AFCFileRefSetFileSize=iTunesMobileDeviceReal.AFCFileRefSetFileSize")
            //#pragma comment(linker, "/export:AFCFileRefTell=iTunesMobileDeviceReal.AFCFileRefTell")
            new MethodSig("AFCFileRefTell", "int", "void* hAFC", "INT64 handle", "long *position"),
            //#pragma comment(linker, "/export:AFCFileRefUnlock=iTunesMobileDeviceReal.AFCFileRefUnlock")
            //#pragma comment(linker, "/export:AFCFileRefWrite=iTunesMobileDeviceReal.AFCFileRefWrite")
            //#pragma comment(linker, "/export:AFCFlushData=iTunesMobileDeviceReal.AFCFlushData")
            new MethodSig("AFCFlushData", "int", "void* hAFC", "INT64 handle"),
            //#pragma comment(linker, "/export:AFCGetClientVersionString=iTunesMobileDeviceReal.AFCGetClientVersionString")
            //#pragma comment(linker, "/export:AFCKeyValueClose=iTunesMobileDeviceReal.AFCKeyValueClose")
            new MethodSig("AFCKeyValueClose", "int", "void* val"),
            //#pragma comment(linker, "/export:AFCKeyValueRead=iTunesMobileDeviceReal.AFCKeyValueRead")
            new MethodSig("AFCKeyValueRead", "int", "void *data", "void* key", "void* val"),
            //#pragma comment(linker, "/export:AFCLinkPath=iTunesMobileDeviceReal.AFCLinkPath")
            //#pragma comment(linker, "/export:AFCOperationCopyPacketData=iTunesMobileDeviceReal.AFCOperationCopyPacketData")
            //#pragma comment(linker, "/export:AFCOperationCreateGetConnectionInfo=iTunesMobileDeviceReal.AFCOperationCreateGetConnectionInfo")
            //#pragma comment(linker, "/export:AFCOperationCreateGetDeviceInfo=iTunesMobileDeviceReal.AFCOperationCreateGetDeviceInfo")
            //#pragma comment(linker, "/export:AFCOperationCreateGetFileHash=iTunesMobileDeviceReal.AFCOperationCreateGetFileHash")
            //#pragma comment(linker, "/export:AFCOperationCreateGetFileHashWithRange=iTunesMobileDeviceReal.AFCOperationCreateGetFileHashWithRange")
            //#pragma comment(linker, "/export:AFCOperationCreateGetFileInfo=iTunesMobileDeviceReal.AFCOperationCreateGetFileInfo")
            //#pragma comment(linker, "/export:AFCOperationCreateGetSizeOfPathContents=iTunesMobileDeviceReal.AFCOperationCreateGetSizeOfPathContents")
            //#pragma comment(linker, "/export:AFCOperationCreateLinkPath=iTunesMobileDeviceReal.AFCOperationCreateLinkPath")
            //#pragma comment(linker, "/export:AFCOperationCreateMakeDirectory=iTunesMobileDeviceReal.AFCOperationCreateMakeDirectory")
            //#pragma comment(linker, "/export:AFCOperationCreateOpenFile=iTunesMobileDeviceReal.AFCOperationCreateOpenFile")
            //#pragma comment(linker, "/export:AFCOperationCreatePacketHeaderDictionary=iTunesMobileDeviceReal.AFCOperationCreatePacketHeaderDictionary")
            //#pragma comment(linker, "/export:AFCOperationCreateReadDirectory=iTunesMobileDeviceReal.AFCOperationCreateReadDirectory")
            //#pragma comment(linker, "/export:AFCOperationCreateRemovePath=iTunesMobileDeviceReal.AFCOperationCreateRemovePath")
            //#pragma comment(linker, "/export:AFCOperationCreateRemovePathAndContents=iTunesMobileDeviceReal.AFCOperationCreateRemovePathAndContents")
            //#pragma comment(linker, "/export:AFCOperationCreateRenamePath=iTunesMobileDeviceReal.AFCOperationCreateRenamePath")
            //#pragma comment(linker, "/export:AFCOperationCreateSetConnectionOptions=iTunesMobileDeviceReal.AFCOperationCreateSetConnectionOptions")
            //#pragma comment(linker, "/export:AFCOperationCreateSetModTime=iTunesMobileDeviceReal.AFCOperationCreateSetModTime")
            //#pragma comment(linker, "/export:AFCOperationGetContext=iTunesMobileDeviceReal.AFCOperationGetContext")
            //#pragma comment(linker, "/export:AFCOperationGetResultObject=iTunesMobileDeviceReal.AFCOperationGetResultObject")
            //#pragma comment(linker, "/export:AFCOperationGetResultStatus=iTunesMobileDeviceReal.AFCOperationGetResultStatus")
            //#pragma comment(linker, "/export:AFCOperationGetState=iTunesMobileDeviceReal.AFCOperationGetState")
            //#pragma comment(linker, "/export:AFCOperationGetTypeID=iTunesMobileDeviceReal.AFCOperationGetTypeID")
            //#pragma comment(linker, "/export:AFCOperationSetContext=iTunesMobileDeviceReal.AFCOperationSetContext")
            //#pragma comment(linker, "/export:AFCReadData=iTunesMobileDeviceReal.AFCReadData")
            //#pragma comment(linker, "/export:AFCReadPacket=iTunesMobileDeviceReal.AFCReadPacket")
            //#pragma comment(linker, "/export:AFCReadPacketBody=iTunesMobileDeviceReal.AFCReadPacketBody")
            //#pragma comment(linker, "/export:AFCReadPacketHeader=iTunesMobileDeviceReal.AFCReadPacketHeader")
            //#pragma comment(linker, "/export:AFCRemovePath=iTunesMobileDeviceReal.AFCRemovePath")
            //#pragma comment(linker, "/export:AFCRenamePath=iTunesMobileDeviceReal.AFCRenamePath")
            //#pragma comment(linker, "/export:AFCSendData=iTunesMobileDeviceReal.AFCSendData")
            //#pragma comment(linker, "/export:AFCSendDataPacket=iTunesMobileDeviceReal.AFCSendDataPacket")
            //#pragma comment(linker, "/export:AFCSendHeader=iTunesMobileDeviceReal.AFCSendHeader")
            //#pragma comment(linker, "/export:AFCSendPacket=iTunesMobileDeviceReal.AFCSendPacket")
            //#pragma comment(linker, "/export:AFCSendStatus=iTunesMobileDeviceReal.AFCSendStatus")
            //#pragma comment(linker, "/export:AFCValidateHeader=iTunesMobileDeviceReal.AFCValidateHeader")
            //#pragma comment(linker, "/export:AMDCopyArrayOfDevicesMatchingQuery=iTunesMobileDeviceReal.AMDCopyArrayOfDevicesMatchingQuery")
            //#pragma comment(linker, "/export:AMDCopyAuthenticationIdentityForDevice=iTunesMobileDeviceReal.AMDCopyAuthenticationIdentityForDevice")
            //#pragma comment(linker, "/export:AMDCopyErrorText=iTunesMobileDeviceReal.AMDCopyErrorText")
            //#pragma comment(linker, "/export:AMDCopySystemBonjourUniqueID=iTunesMobileDeviceReal.AMDCopySystemBonjourUniqueID")
            //#pragma comment(linker, "/export:AMDFUModeDeviceCopyAuthInstallPreflightOptions=iTunesMobileDeviceReal.AMDFUModeDeviceCopyAuthInstallPreflightOptions")
            //#pragma comment(linker, "/export:AMDFUModeDeviceCopyBoardConfig=iTunesMobileDeviceReal.AMDFUModeDeviceCopyBoardConfig")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetBoardID=iTunesMobileDeviceReal.AMDFUModeDeviceGetBoardID")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetChipID=iTunesMobileDeviceReal.AMDFUModeDeviceGetChipID")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetECID=iTunesMobileDeviceReal.AMDFUModeDeviceGetECID")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetLocationID=iTunesMobileDeviceReal.AMDFUModeDeviceGetLocationID")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetProductID=iTunesMobileDeviceReal.AMDFUModeDeviceGetProductID")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetProductType=iTunesMobileDeviceReal.AMDFUModeDeviceGetProductType")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetProductionMode=iTunesMobileDeviceReal.AMDFUModeDeviceGetProductionMode")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetProgress=iTunesMobileDeviceReal.AMDFUModeDeviceGetProgress")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetSecurityDomain=iTunesMobileDeviceReal.AMDFUModeDeviceGetSecurityDomain")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetSecurityEpoch=iTunesMobileDeviceReal.AMDFUModeDeviceGetSecurityEpoch")
            //#pragma comment(linker, "/export:AMDFUModeDeviceGetTypeID=iTunesMobileDeviceReal.AMDFUModeDeviceGetTypeID")
            //#pragma comment(linker, "/export:AMDFUModeDeviceIsBootstrapOnly=iTunesMobileDeviceReal.AMDFUModeDeviceIsBootstrapOnly")
            //#pragma comment(linker, "/export:AMDFUModeDeviceRequestAbbreviatedSendSync=iTunesMobileDeviceReal.AMDFUModeDeviceRequestAbbreviatedSendSync")
            //#pragma comment(linker, "/export:AMDGetPairingRecordDirectoryPath=iTunesMobileDeviceReal.AMDGetPairingRecordDirectoryPath")
            //#pragma comment(linker, "/export:AMDListenForNotifications=iTunesMobileDeviceReal.AMDListenForNotifications")
            //#pragma comment(linker, "/export:AMDObserveNotification=iTunesMobileDeviceReal.AMDObserveNotification")
            //#pragma comment(linker, "/export:AMDPostNotification=iTunesMobileDeviceReal.AMDPostNotification")
            //#pragma comment(linker, "/export:AMDSecureListenForNotifications=iTunesMobileDeviceReal.AMDSecureListenForNotifications")
            //#pragma comment(linker, "/export:AMDSecureObserveNotification=iTunesMobileDeviceReal.AMDSecureObserveNotification")
            //#pragma comment(linker, "/export:AMDSecurePostNotification=iTunesMobileDeviceReal.AMDSecurePostNotification")
            //#pragma comment(linker, "/export:AMDSecureShutdownNotificationProxy=iTunesMobileDeviceReal.AMDSecureShutdownNotificationProxy")
            //#pragma comment(linker, "/export:AMDServiceConnectionCreate=iTunesMobileDeviceReal.AMDServiceConnectionCreate")
            //#pragma comment(linker, "/export:AMDServiceConnectionGetSecureIOContext=iTunesMobileDeviceReal.AMDServiceConnectionGetSecureIOContext")
            //#pragma comment(linker, "/export:AMDServiceConnectionGetSocket=iTunesMobileDeviceReal.AMDServiceConnectionGetSocket")
            //#pragma comment(linker, "/export:AMDServiceConnectionGetTypeID=iTunesMobileDeviceReal.AMDServiceConnectionGetTypeID")
            //#pragma comment(linker, "/export:AMDServiceConnectionInvalidate=iTunesMobileDeviceReal.AMDServiceConnectionInvalidate")
            //#pragma comment(linker, "/export:AMDServiceConnectionReceive=iTunesMobileDeviceReal.AMDServiceConnectionReceive")
            //#pragma comment(linker, "/export:AMDServiceConnectionReceiveMessage=iTunesMobileDeviceReal.AMDServiceConnectionReceiveMessage")
            //#pragma comment(linker, "/export:AMDServiceConnectionSend=iTunesMobileDeviceReal.AMDServiceConnectionSend")
            //#pragma comment(linker, "/export:AMDServiceConnectionSendMessage=iTunesMobileDeviceReal.AMDServiceConnectionSendMessage")
            //#pragma comment(linker, "/export:AMDSetLogLevel=iTunesMobileDeviceReal.AMDSetLogLevel")
            //#pragma comment(linker, "/export:AMDShutdownNotificationProxy=iTunesMobileDeviceReal.AMDShutdownNotificationProxy")
            //#pragma comment(linker, "/export:AMDeviceActivate=iTunesMobileDeviceReal.AMDeviceActivate")
            //#pragma comment(linker, "/export:AMDeviceArchiveApplication=iTunesMobileDeviceReal.AMDeviceArchiveApplication")
            //#pragma comment(linker, "/export:AMDeviceCheckCapabilitiesMatch=iTunesMobileDeviceReal.AMDeviceCheckCapabilitiesMatch")
            //#pragma comment(linker, "/export:AMDeviceConnect=iTunesMobileDeviceReal.AMDeviceConnect")
            new MethodSig("AMDeviceConnect", "mach_error_t", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceCopyAuthInstallPreflightOptions=iTunesMobileDeviceReal.AMDeviceCopyAuthInstallPreflightOptions")
            //#pragma comment(linker, "/export:AMDeviceCopyDeviceIdentifier=iTunesMobileDeviceReal.AMDeviceCopyDeviceIdentifier")
            new MethodSig("AMDeviceCopyDeviceIdentifier", "int", "void* device"), // TODO: Return type is CStringRef
            //#pragma comment(linker, "/export:AMDeviceCopyDeviceLocation=iTunesMobileDeviceReal.AMDeviceCopyDeviceLocation")
            //#pragma comment(linker, "/export:AMDeviceCopyProvisioningProfiles=iTunesMobileDeviceReal.AMDeviceCopyProvisioningProfiles")
            //#pragma comment(linker, "/export:AMDeviceCopyValue=iTunesMobileDeviceReal.AMDeviceCopyValue")
            new MethodSig("AMDeviceCopyValue", "int", "void* device", "unsigned int unknown", "void* cfString"), // TODO: Return type is CStringRef
            //#pragma comment(linker, "/export:AMDeviceCopyValueWithError=iTunesMobileDeviceReal.AMDeviceCopyValueWithError")
            //#pragma comment(linker, "/export:AMDeviceCreateHouseArrestService=iTunesMobileDeviceReal.AMDeviceCreateHouseArrestService")
            new MethodSig("AMDeviceCreateHouseArrestService", "int", "void* unknown1", "void* unknown2"),
            //#pragma comment(linker, "/export:AMDeviceCreateWakeupToken=iTunesMobileDeviceReal.AMDeviceCreateWakeupToken")
            new MethodSig("AMDeviceCreateWakeupToken", "int", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceDeactivate=iTunesMobileDeviceReal.AMDeviceDeactivate")
            //#pragma comment(linker, "/export:AMDeviceDisconnect=iTunesMobileDeviceReal.AMDeviceDisconnect")
            new MethodSig("AMDeviceDisconnect", "mach_error_t", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceEnterRecovery=iTunesMobileDeviceReal.AMDeviceEnterRecovery")
            //#pragma comment(linker, "/export:AMDeviceExtendedPairWithOptions=iTunesMobileDeviceReal.AMDeviceExtendedPairWithOptions")
            //#pragma comment(linker, "/export:AMDeviceGetConnectionID=iTunesMobileDeviceReal.AMDeviceGetConnectionID")
            new MethodSig("AMDeviceGetConnectionID", "mach_error_t", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceGetInterfaceSpeed=iTunesMobileDeviceReal.AMDeviceGetInterfaceSpeed")
            //#pragma comment(linker, "/export:AMDeviceGetInterfaceType=iTunesMobileDeviceReal.AMDeviceGetInterfaceType")
            new MethodSig("AMDeviceGetInterfaceType", "UINT32", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceGetTypeID=iTunesMobileDeviceReal.AMDeviceGetTypeID")
            //#pragma comment(linker, "/export:AMDeviceGetUserInfo=iTunesMobileDeviceReal.AMDeviceGetUserInfo")
            //#pragma comment(linker, "/export:AMDeviceGetWirelessBuddyFlags=iTunesMobileDeviceReal.AMDeviceGetWirelessBuddyFlags")
            new MethodSig("AMDeviceGetWirelessBuddyFlags", "mach_error_t","void* device", "long* flags"),
            //#pragma comment(linker, "/export:AMDeviceInstallApplication=iTunesMobileDeviceReal.AMDeviceInstallApplication")
            //#pragma comment(linker, "/export:AMDeviceInstallProvisioningProfile=iTunesMobileDeviceReal.AMDeviceInstallProvisioningProfile")
            //#pragma comment(linker, "/export:AMDeviceIsPaired=iTunesMobileDeviceReal.AMDeviceIsPaired")
            new MethodSig("AMDeviceIsPaired", "int","void* device"),
            //#pragma comment(linker, "/export:AMDeviceIsValid=iTunesMobileDeviceReal.AMDeviceIsValid")
            //#pragma comment(linker, "/export:AMDeviceLookupApplicationArchives=iTunesMobileDeviceReal.AMDeviceLookupApplicationArchives")
            //#pragma comment(linker, "/export:AMDeviceLookupApplications=iTunesMobileDeviceReal.AMDeviceLookupApplications")
            new MethodSig("AMDeviceLookupApplications", "int", "void* device", "int zero", "void* result"),
            //#pragma comment(linker, "/export:AMDeviceNotificationSubscribe=iTunesMobileDeviceReal.AMDeviceNotificationSubscribe")
            new MethodSig("AMDeviceNotificationSubscribe", "mach_error_t", "void* callback", "void* unused1", "void* unused2", "void* unused3", " void* am_device_notification_ptr"),
            //#pragma comment(linker, "/export:AMDeviceNotificationUnsubscribe=iTunesMobileDeviceReal.AMDeviceNotificationUnsubscribe")
            //#pragma comment(linker, "/export:AMDevicePair=iTunesMobileDeviceReal.AMDevicePair")
            //#pragma comment(linker, "/export:AMDevicePairWithOptions=iTunesMobileDeviceReal.AMDevicePairWithOptions")
            //#pragma comment(linker, "/export:AMDevicePowerAssertionCreate=iTunesMobileDeviceReal.AMDevicePowerAssertionCreate")
            //#pragma comment(linker, "/export:AMDevicePowerAssertionGetTypeID=iTunesMobileDeviceReal.AMDevicePowerAssertionGetTypeID")
            //#pragma comment(linker, "/export:AMDevicePreflightOperationCreate=iTunesMobileDeviceReal.AMDevicePreflightOperationCreate")
            //#pragma comment(linker, "/export:AMDevicePreflightOperationGetRunLoopSource=iTunesMobileDeviceReal.AMDevicePreflightOperationGetRunLoopSource")
            //#pragma comment(linker, "/export:AMDevicePreflightOperationGetTypeID=iTunesMobileDeviceReal.AMDevicePreflightOperationGetTypeID")
            //#pragma comment(linker, "/export:AMDevicePreflightOperationInvalidate=iTunesMobileDeviceReal.AMDevicePreflightOperationInvalidate")
            //#pragma comment(linker, "/export:AMDeviceRemoveApplicationArchive=iTunesMobileDeviceReal.AMDeviceRemoveApplicationArchive")
            //#pragma comment(linker, "/export:AMDeviceRemoveProvisioningProfile=iTunesMobileDeviceReal.AMDeviceRemoveProvisioningProfile")
            //#pragma comment(linker, "/export:AMDeviceRemoveValue=iTunesMobileDeviceReal.AMDeviceRemoveValue")
            //#pragma comment(linker, "/export:AMDeviceRequestAbbreviatedSendSync=iTunesMobileDeviceReal.AMDeviceRequestAbbreviatedSendSync")
            //#pragma comment(linker, "/export:AMDeviceRestoreApplication=iTunesMobileDeviceReal.AMDeviceRestoreApplication")
            //#pragma comment(linker, "/export:AMDeviceSecureArchiveApplication=iTunesMobileDeviceReal.AMDeviceSecureArchiveApplication")
            //#pragma comment(linker, "/export:AMDeviceSecureCheckCapabilitiesMatch=iTunesMobileDeviceReal.AMDeviceSecureCheckCapabilitiesMatch")
            //#pragma comment(linker, "/export:AMDeviceSecureInstallApplication=iTunesMobileDeviceReal.AMDeviceSecureInstallApplication")
            //#pragma comment(linker, "/export:AMDeviceSecureRemoveApplicationArchive=iTunesMobileDeviceReal.AMDeviceSecureRemoveApplicationArchive")
            //#pragma comment(linker, "/export:AMDeviceSecureRestoreApplication=iTunesMobileDeviceReal.AMDeviceSecureRestoreApplication")
            //#pragma comment(linker, "/export:AMDeviceSecureStartService=iTunesMobileDeviceReal.AMDeviceSecureStartService")
            //#pragma comment(linker, "/export:AMDeviceSecureTransferPath=iTunesMobileDeviceReal.AMDeviceSecureTransferPath")
            //#pragma comment(linker, "/export:AMDeviceSecureUninstallApplication=iTunesMobileDeviceReal.AMDeviceSecureUninstallApplication")
            //#pragma comment(linker, "/export:AMDeviceSecureUpgradeApplication=iTunesMobileDeviceReal.AMDeviceSecureUpgradeApplication")
            //#pragma comment(linker, "/export:AMDeviceSetUserInfo=iTunesMobileDeviceReal.AMDeviceSetUserInfo")
            //#pragma comment(linker, "/export:AMDeviceSetValue=iTunesMobileDeviceReal.AMDeviceSetValue")
            //#pragma comment(linker, "/export:AMDeviceSetWirelessBuddyFlags=iTunesMobileDeviceReal.AMDeviceSetWirelessBuddyFlags")
            new MethodSig("AMDeviceSetWirelessBuddyFlags", "mach_error_t","void* device", "long flags"),
            //#pragma comment(linker, "/export:AMDeviceStartHouseArrestService=iTunesMobileDeviceReal.AMDeviceStartHouseArrestService")
            new MethodSig("AMDeviceStartHouseArrestService", "mach_error_t", "void* *device", "void* identifier", "void *unknown", "void* handle", "unsigned int *what"),
            //#pragma comment(linker, "/export:AMDeviceStartService=iTunesMobileDeviceReal.AMDeviceStartService")
            new MethodSig("AMDeviceStartService", "mach_error_t", "void* device", "void* service_name", "int* socket_fd"),
            //#pragma comment(linker, "/export:AMDeviceStartServiceWithOptions=iTunesMobileDeviceReal.AMDeviceStartServiceWithOptions")
            new MethodSig("AMDeviceStartServiceWithOptions", "mach_error_t", "void* device", "void* service_name", "void* options", "int* socket"),
            //#pragma comment(linker, "/export:AMDeviceStartSession=iTunesMobileDeviceReal.AMDeviceStartSession")
            new MethodSig("AMDeviceStartSession", "mach_error_t", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceStopSession=iTunesMobileDeviceReal.AMDeviceStopSession")
            new MethodSig("AMDeviceStopSession", "mach_error_t", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceTransferApplication=iTunesMobileDeviceReal.AMDeviceTransferApplication")
            new MethodSig("AMDeviceTransferApplication", "int", "int socket_fd", "void* path", "void* options", "void *callback", "int callback_arg"),
            //#pragma comment(linker, "/export:AMDeviceTransferPath=iTunesMobileDeviceReal.AMDeviceTransferPath")
            new MethodSig("AMDeviceTransferPath", "int", "int unknown0", "void *device", "void* url", "void* options", "void *callback", "int callback_arg"),
            //#pragma comment(linker, "/export:AMDeviceUninstallApplication=iTunesMobileDeviceReal.AMDeviceUninstallApplication")
            new MethodSig("AMDeviceUninstallApplication", "int", "int installFd", "void* bundleId", "void* options", "void* callback", "void *callback_arg"),
            //#pragma comment(linker, "/export:AMDeviceUnpair=iTunesMobileDeviceReal.AMDeviceUnpair")
            new MethodSig("AMDeviceUnpair", "mach_error_t", "void* device"),
            //#pragma comment(linker, "/export:AMDeviceUpgradeApplication=iTunesMobileDeviceReal.AMDeviceUpgradeApplication")
            new MethodSig("AMDeviceUpgradeApplication", "mach_error_t", "int unknown1", "void* path", "void* options", "void* unknown2"),
            //#pragma comment(linker, "/export:AMDeviceValidatePairing=iTunesMobileDeviceReal.AMDeviceValidatePairing")
            new MethodSig("AMDeviceValidatePairing", "mach_error_t", "void* device")
            //#pragma comment(linker, "/export:AMDeviceWakeupOperationCreateWithToken=iTunesMobileDeviceReal.AMDeviceWakeupOperationCreateWithToken")
            //#pragma comment(linker, "/export:AMDeviceWakeupOperationGetTypeID=iTunesMobileDeviceReal.AMDeviceWakeupOperationGetTypeID")
            //#pragma comment(linker, "/export:AMDeviceWakeupOperationInvalidate=iTunesMobileDeviceReal.AMDeviceWakeupOperationInvalidate")
            //#pragma comment(linker, "/export:AMDeviceWakeupOperationSchedule=iTunesMobileDeviceReal.AMDeviceWakeupOperationSchedule")
            //#pragma comment(linker, "/export:AMDeviceWakeupUsingToken=iTunesMobileDeviceReal.AMDeviceWakeupUsingToken")
            //#pragma comment(linker, "/export:AMRAuthInstallCopyLocalizedStringForServerError=iTunesMobileDeviceReal.AMRAuthInstallCopyLocalizedStringForServerError")
            //#pragma comment(linker, "/export:AMRAuthInstallCopyPreflightOptions=iTunesMobileDeviceReal.AMRAuthInstallCopyPreflightOptions")
            //#pragma comment(linker, "/export:AMRAuthInstallFinalize=iTunesMobileDeviceReal.AMRAuthInstallFinalize")
            //#pragma comment(linker, "/export:AMRAuthInstallPreflight=iTunesMobileDeviceReal.AMRAuthInstallPreflight")
            //#pragma comment(linker, "/export:AMRAuthInstallRegisterProxyCredentialsCallback=iTunesMobileDeviceReal.AMRAuthInstallRegisterProxyCredentialsCallback")
            //#pragma comment(linker, "/export:AMRLog=iTunesMobileDeviceReal.AMRLog")
            //#pragma comment(linker, "/export:AMRLogv=iTunesMobileDeviceReal.AMRLogv")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceCopyAuthInstallPreflightOptions=iTunesMobileDeviceReal.AMRecoveryModeDeviceCopyAuthInstallPreflightOptions")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceCopyBoardConfig=iTunesMobileDeviceReal.AMRecoveryModeDeviceCopyBoardConfig")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice=iTunesMobileDeviceReal.AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceCopyIMEI=iTunesMobileDeviceReal.AMRecoveryModeDeviceCopyIMEI")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceCopySerialNumber=iTunesMobileDeviceReal.AMRecoveryModeDeviceCopySerialNumber")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetBoardID=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetBoardID")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetChipID=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetChipID")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetECID=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetECID")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetLocationID=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetLocationID")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetProductID=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetProductID")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetProductType=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetProductType")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetProductionMode=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetProductionMode")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetProgress=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetProgress")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetSecurityDomain=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetSecurityDomain")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetSecurityEpoch=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetSecurityEpoch")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceGetTypeID=iTunesMobileDeviceReal.AMRecoveryModeDeviceGetTypeID")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceIsBootstrapOnly=iTunesMobileDeviceReal.AMRecoveryModeDeviceIsBootstrapOnly")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceReboot=iTunesMobileDeviceReal.AMRecoveryModeDeviceReboot")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceRequestAbbreviatedSendSync=iTunesMobileDeviceReal.AMRecoveryModeDeviceRequestAbbreviatedSendSync")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceSendBlindCommandToDevice=iTunesMobileDeviceReal.AMRecoveryModeDeviceSendBlindCommandToDevice")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceSendCommandToDevice=iTunesMobileDeviceReal.AMRecoveryModeDeviceSendCommandToDevice")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceSendFileToDevice=iTunesMobileDeviceReal.AMRecoveryModeDeviceSendFileToDevice")
            //#pragma comment(linker, "/export:AMRecoveryModeDeviceSetAutoBoot=iTunesMobileDeviceReal.AMRecoveryModeDeviceSetAutoBoot")
            //#pragma comment(linker, "/export:AMRecoveryModeGetSoftwareBuildVersion=iTunesMobileDeviceReal.AMRecoveryModeGetSoftwareBuildVersion")
            //#pragma comment(linker, "/export:AMRestorableBuildCopyRestoreBundleURL=iTunesMobileDeviceReal.AMRestorableBuildCopyRestoreBundleURL")
            //#pragma comment(linker, "/export:AMRestorableBuildCopySupportedBoardConfigs=iTunesMobileDeviceReal.AMRestorableBuildCopySupportedBoardConfigs")
            //#pragma comment(linker, "/export:AMRestorableBuildCopySupportedVariants=iTunesMobileDeviceReal.AMRestorableBuildCopySupportedVariants")
            //#pragma comment(linker, "/export:AMRestorableBuildCreate=iTunesMobileDeviceReal.AMRestorableBuildCreate")
            //#pragma comment(linker, "/export:AMRestorableCommitStashBag=iTunesMobileDeviceReal.AMRestorableCommitStashBag")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopyAMDevice=iTunesMobileDeviceReal.AMRestorableDeviceCopyAMDevice")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopyAuthInstallPreflightOptions=iTunesMobileDeviceReal.AMRestorableDeviceCopyAuthInstallPreflightOptions")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopyBoardConfig=iTunesMobileDeviceReal.AMRestorableDeviceCopyBoardConfig")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopyDFUModeDevice=iTunesMobileDeviceReal.AMRestorableDeviceCopyDFUModeDevice")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopyDefaultRestoreOptions=iTunesMobileDeviceReal.AMRestorableDeviceCopyDefaultRestoreOptions")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopyRecoveryModeDevice=iTunesMobileDeviceReal.AMRestorableDeviceCopyRecoveryModeDevice")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopyRestoreModeDevice=iTunesMobileDeviceReal.AMRestorableDeviceCopyRestoreModeDevice")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopyRestoreOptionsFromDocument=iTunesMobileDeviceReal.AMRestorableDeviceCopyRestoreOptionsFromDocument")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopySerialDevicePath=iTunesMobileDeviceReal.AMRestorableDeviceCopySerialDevicePath")
            //#pragma comment(linker, "/export:AMRestorableDeviceCopySerialNumber=iTunesMobileDeviceReal.AMRestorableDeviceCopySerialNumber")
            //#pragma comment(linker, "/export:AMRestorableDeviceCreateFromAMDevice=iTunesMobileDeviceReal.AMRestorableDeviceCreateFromAMDevice")
            //#pragma comment(linker, "/export:AMRestorableDeviceEnableExtraDFUDevices=iTunesMobileDeviceReal.AMRestorableDeviceEnableExtraDFUDevices")
            //#pragma comment(linker, "/export:AMRestorableDeviceGetDFUModeDevice=iTunesMobileDeviceReal.AMRestorableDeviceGetDFUModeDevice")
            //#pragma comment(linker, "/export:AMRestorableDeviceGetECID=iTunesMobileDeviceReal.AMRestorableDeviceGetECID")
            //#pragma comment(linker, "/export:AMRestorableDeviceGetFusingInfo=iTunesMobileDeviceReal.AMRestorableDeviceGetFusingInfo")
            //#pragma comment(linker, "/export:AMRestorableDeviceGetLocationID=iTunesMobileDeviceReal.AMRestorableDeviceGetLocationID")
            //#pragma comment(linker, "/export:AMRestorableDeviceGetProductID=iTunesMobileDeviceReal.AMRestorableDeviceGetProductID")
            //#pragma comment(linker, "/export:AMRestorableDeviceGetProductType=iTunesMobileDeviceReal.AMRestorableDeviceGetProductType")
            //#pragma comment(linker, "/export:AMRestorableDeviceGetRecoveryModeDevice=iTunesMobileDeviceReal.AMRestorableDeviceGetRecoveryModeDevice")
            //#pragma comment(linker, "/export:AMRestorableDeviceGetState=iTunesMobileDeviceReal.AMRestorableDeviceGetState")
            //#pragma comment(linker, "/export:AMRestorableDeviceRegisterForNotifications=iTunesMobileDeviceReal.AMRestorableDeviceRegisterForNotifications")
            //#pragma comment(linker, "/export:AMRestorableDeviceRestore=iTunesMobileDeviceReal.AMRestorableDeviceRestore")
            //#pragma comment(linker, "/export:AMRestorableDeviceSendBlindCommand=iTunesMobileDeviceReal.AMRestorableDeviceSendBlindCommand")
            //#pragma comment(linker, "/export:AMRestorableDeviceSendCommand=iTunesMobileDeviceReal.AMRestorableDeviceSendCommand")
            //#pragma comment(linker, "/export:AMRestorableDeviceSendFile=iTunesMobileDeviceReal.AMRestorableDeviceSendFile")
            //#pragma comment(linker, "/export:AMRestorableDeviceSetLogFileURL=iTunesMobileDeviceReal.AMRestorableDeviceSetLogFileURL")
            //#pragma comment(linker, "/export:AMRestorableDeviceSetProxyCredentialsCallback=iTunesMobileDeviceReal.AMRestorableDeviceSetProxyCredentialsCallback")
            //#pragma comment(linker, "/export:AMRestorableDeviceUnregisterForNotifications=iTunesMobileDeviceReal.AMRestorableDeviceUnregisterForNotifications")
            //#pragma comment(linker, "/export:AMRestorableEnableLogStreaming=iTunesMobileDeviceReal.AMRestorableEnableLogStreaming")
            //#pragma comment(linker, "/export:AMRestorableGetIdentifyingErrorCode=iTunesMobileDeviceReal.AMRestorableGetIdentifyingErrorCode")
            //#pragma comment(linker, "/export:AMRestorableLogToFile=iTunesMobileDeviceReal.AMRestorableLogToFile")
            //#pragma comment(linker, "/export:AMRestorablePersonalizeCopyManifestTag=iTunesMobileDeviceReal.AMRestorablePersonalizeCopyManifestTag")
            //#pragma comment(linker, "/export:AMRestorablePersonalizeSendFile=iTunesMobileDeviceReal.AMRestorablePersonalizeSendFile")
            //#pragma comment(linker, "/export:AMRestorableSetGlobalLocationIDFilter=iTunesMobileDeviceReal.AMRestorableSetGlobalLocationIDFilter")
            //#pragma comment(linker, "/export:AMRestorableSetGlobalLogFileURL=iTunesMobileDeviceReal.AMRestorableSetGlobalLogFileURL")
            //#pragma comment(linker, "/export:AMRestorableSetLogLevel=iTunesMobileDeviceReal.AMRestorableSetLogLevel")
            //#pragma comment(linker, "/export:AMRestoreCreateBootArgsByAddingArg=iTunesMobileDeviceReal.AMRestoreCreateBootArgsByAddingArg")
            //#pragma comment(linker, "/export:AMRestoreCreateBootArgsByRemovingArg=iTunesMobileDeviceReal.AMRestoreCreateBootArgsByRemovingArg")
            //#pragma comment(linker, "/export:AMRestoreCreateDefaultOptions=iTunesMobileDeviceReal.AMRestoreCreateDefaultOptions")
            //#pragma comment(linker, "/export:AMRestoreCreatePathsForBundle=iTunesMobileDeviceReal.AMRestoreCreatePathsForBundle")
            //#pragma comment(linker, "/export:AMRestoreDisableFileLogging=iTunesMobileDeviceReal.AMRestoreDisableFileLogging")
            //#pragma comment(linker, "/export:AMRestoreEnableExtraDFUDevices=iTunesMobileDeviceReal.AMRestoreEnableExtraDFUDevices")
            //#pragma comment(linker, "/export:AMRestoreEnableFileLogging=iTunesMobileDeviceReal.AMRestoreEnableFileLogging")
            //#pragma comment(linker, "/export:AMRestoreGetSupportedPayloadVersion=iTunesMobileDeviceReal.AMRestoreGetSupportedPayloadVersion")
            //#pragma comment(linker, "/export:AMRestoreGetTransformedDFUType=iTunesMobileDeviceReal.AMRestoreGetTransformedDFUType")
            //#pragma comment(linker, "/export:AMRestoreGetTransformedFirmwareTypeValue=iTunesMobileDeviceReal.AMRestoreGetTransformedFirmwareTypeValue")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceCopyBoardConfig=iTunesMobileDeviceReal.AMRestoreModeDeviceCopyBoardConfig")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceCopyEcid=iTunesMobileDeviceReal.AMRestoreModeDeviceCopyEcid")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceCopyIMEI=iTunesMobileDeviceReal.AMRestoreModeDeviceCopyIMEI")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceCopyRestoreLog=iTunesMobileDeviceReal.AMRestoreModeDeviceCopyRestoreLog")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceCopySerialNumber=iTunesMobileDeviceReal.AMRestoreModeDeviceCopySerialNumber")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceCreate=iTunesMobileDeviceReal.AMRestoreModeDeviceCreate")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceGetDeviceID=iTunesMobileDeviceReal.AMRestoreModeDeviceGetDeviceID")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceGetLocationID=iTunesMobileDeviceReal.AMRestoreModeDeviceGetLocationID")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceGetProgress=iTunesMobileDeviceReal.AMRestoreModeDeviceGetProgress")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceGetTypeID=iTunesMobileDeviceReal.AMRestoreModeDeviceGetTypeID")
            //#pragma comment(linker, "/export:AMRestoreModeDeviceReboot=iTunesMobileDeviceReal.AMRestoreModeDeviceReboot")
            //#pragma comment(linker, "/export:AMRestoreModeGetLastFailureLog=iTunesMobileDeviceReal.AMRestoreModeGetLastFailureLog")
            //#pragma comment(linker, "/export:AMRestorePerformDFURestore=iTunesMobileDeviceReal.AMRestorePerformDFURestore")
            //#pragma comment(linker, "/export:AMRestorePerformRecoveryModeRestore=iTunesMobileDeviceReal.AMRestorePerformRecoveryModeRestore")
            //#pragma comment(linker, "/export:AMRestorePerformRestoreModeRestore=iTunesMobileDeviceReal.AMRestorePerformRestoreModeRestore")
            //#pragma comment(linker, "/export:AMRestorePerformRestoreModeRestoreWithError=iTunesMobileDeviceReal.AMRestorePerformRestoreModeRestoreWithError")
            //#pragma comment(linker, "/export:AMRestoreRegisterForDeviceNotifications=iTunesMobileDeviceReal.AMRestoreRegisterForDeviceNotifications")
            //#pragma comment(linker, "/export:AMRestoreSetLogLevel=iTunesMobileDeviceReal.AMRestoreSetLogLevel")
            //#pragma comment(linker, "/export:AMRestoreUnregisterForDeviceNotifications=iTunesMobileDeviceReal.AMRestoreUnregisterForDeviceNotifications")
            //#pragma comment(linker, "/export:AMSArchiveBackup=iTunesMobileDeviceReal.AMSArchiveBackup")
            //#pragma comment(linker, "/export:AMSBackupWithOptions=iTunesMobileDeviceReal.AMSBackupWithOptions")
            //#pragma comment(linker, "/export:AMSBeginSync=iTunesMobileDeviceReal.AMSBeginSync")
            //#pragma comment(linker, "/export:AMSBeginSyncForDataClasses=iTunesMobileDeviceReal.AMSBeginSyncForDataClasses")
            //#pragma comment(linker, "/export:AMSCancelBackupRestore=iTunesMobileDeviceReal.AMSCancelBackupRestore")
            //#pragma comment(linker, "/export:AMSCancelCrashReportCopy=iTunesMobileDeviceReal.AMSCancelCrashReportCopy")
            //#pragma comment(linker, "/export:AMSCancelSync=iTunesMobileDeviceReal.AMSCancelSync")
            //#pragma comment(linker, "/export:AMSCancelSyncDiagnostics=iTunesMobileDeviceReal.AMSCancelSyncDiagnostics")
            //#pragma comment(linker, "/export:AMSChangeBackupPassword=iTunesMobileDeviceReal.AMSChangeBackupPassword")
            //#pragma comment(linker, "/export:AMSCleanup=iTunesMobileDeviceReal.AMSCleanup")
            //#pragma comment(linker, "/export:AMSClearDataClasses=iTunesMobileDeviceReal.AMSClearDataClasses")
            //#pragma comment(linker, "/export:AMSConnectToCrashReportCopyTarget=iTunesMobileDeviceReal.AMSConnectToCrashReportCopyTarget")
            //#pragma comment(linker, "/export:AMSCopyApplicationListFromBackup=iTunesMobileDeviceReal.AMSCopyApplicationListFromBackup")
            //#pragma comment(linker, "/export:AMSCopyCrashReportPath=iTunesMobileDeviceReal.AMSCopyCrashReportPath")
            //#pragma comment(linker, "/export:AMSCopyCrashReportsFromTarget=iTunesMobileDeviceReal.AMSCopyCrashReportsFromTarget")
            //#pragma comment(linker, "/export:AMSCopySourcesForRestoreCompatibleWith=iTunesMobileDeviceReal.AMSCopySourcesForRestoreCompatibleWith")
            //#pragma comment(linker, "/export:AMSDisconnectFromCrashReportCopyTarget=iTunesMobileDeviceReal.AMSDisconnectFromCrashReportCopyTarget")
            //#pragma comment(linker, "/export:AMSEnableCloudBackup=iTunesMobileDeviceReal.AMSEnableCloudBackup")
            //#pragma comment(linker, "/export:AMSEnableSyncServices=iTunesMobileDeviceReal.AMSEnableSyncServices")
            //#pragma comment(linker, "/export:AMSGetAOSUsername=iTunesMobileDeviceReal.AMSGetAOSUsername")
            //#pragma comment(linker, "/export:AMSGetApplicationProviderInfo=iTunesMobileDeviceReal.AMSGetApplicationProviderInfo")
            //#pragma comment(linker, "/export:AMSGetBackupInfo=iTunesMobileDeviceReal.AMSGetBackupInfo")
            //#pragma comment(linker, "/export:AMSGetBackupPasswordFromKeychainForTarget=iTunesMobileDeviceReal.AMSGetBackupPasswordFromKeychainForTarget")
            //#pragma comment(linker, "/export:AMSGetCalendarDayLimit=iTunesMobileDeviceReal.AMSGetCalendarDayLimit")
            //#pragma comment(linker, "/export:AMSGetClientIdentifierAndDisplayNameForTarget=iTunesMobileDeviceReal.AMSGetClientIdentifierAndDisplayNameForTarget")
            //#pragma comment(linker, "/export:AMSGetCollectionsForDataClassName=iTunesMobileDeviceReal.AMSGetCollectionsForDataClassName")
            //#pragma comment(linker, "/export:AMSGetCrashReportCopyPreferencesForTarget=iTunesMobileDeviceReal.AMSGetCrashReportCopyPreferencesForTarget")
            //#pragma comment(linker, "/export:AMSGetDataChangeAlertInfo=iTunesMobileDeviceReal.AMSGetDataChangeAlertInfo")
            //#pragma comment(linker, "/export:AMSGetDataClassInfoForTarget=iTunesMobileDeviceReal.AMSGetDataClassInfoForTarget")
            //#pragma comment(linker, "/export:AMSGetDefaultOutlookCalendarMapping=iTunesMobileDeviceReal.AMSGetDefaultOutlookCalendarMapping")
            //#pragma comment(linker, "/export:AMSGetLastSyncDateForDataClass=iTunesMobileDeviceReal.AMSGetLastSyncDateForDataClass")
            //#pragma comment(linker, "/export:AMSGetNewRecordCalendarName=iTunesMobileDeviceReal.AMSGetNewRecordCalendarName")
            //#pragma comment(linker, "/export:AMSGetNewRecordGroupName=iTunesMobileDeviceReal.AMSGetNewRecordGroupName")
            //#pragma comment(linker, "/export:AMSGetNumberOfCrashReportsToCopy=iTunesMobileDeviceReal.AMSGetNumberOfCrashReportsToCopy")
            //#pragma comment(linker, "/export:AMSGetNumberOfCrashReportsToSubmit=iTunesMobileDeviceReal.AMSGetNumberOfCrashReportsToSubmit")
            //#pragma comment(linker, "/export:AMSGetSourcesForRestore=iTunesMobileDeviceReal.AMSGetSourcesForRestore")
            //#pragma comment(linker, "/export:AMSGetSupportedDataClassNames=iTunesMobileDeviceReal.AMSGetSupportedDataClassNames")
            //#pragma comment(linker, "/export:AMSInitialize=iTunesMobileDeviceReal.AMSInitialize")
            //#pragma comment(linker, "/export:AMSIsSyncServicesEnabled=iTunesMobileDeviceReal.AMSIsSyncServicesEnabled")
            //#pragma comment(linker, "/export:AMSRefreshCollectionsForDataClassName=iTunesMobileDeviceReal.AMSRefreshCollectionsForDataClassName")
            //#pragma comment(linker, "/export:AMSRegisterCallbacks=iTunesMobileDeviceReal.AMSRegisterCallbacks")
            //#pragma comment(linker, "/export:AMSRegisterClientWithTargetIdentifierAndDisplayName=iTunesMobileDeviceReal.AMSRegisterClientWithTargetIdentifierAndDisplayName")
            //#pragma comment(linker, "/export:AMSResetSyncData=iTunesMobileDeviceReal.AMSResetSyncData")
            //#pragma comment(linker, "/export:AMSRestoreWithApplications=iTunesMobileDeviceReal.AMSRestoreWithApplications")
            //#pragma comment(linker, "/export:AMSRunSyncDiagnostics=iTunesMobileDeviceReal.AMSRunSyncDiagnostics")
            //#pragma comment(linker, "/export:AMSSetBackupPasswordInKeychain=iTunesMobileDeviceReal.AMSSetBackupPasswordInKeychain")
            //#pragma comment(linker, "/export:AMSSetCalendarDayLimit=iTunesMobileDeviceReal.AMSSetCalendarDayLimit")
            //#pragma comment(linker, "/export:AMSSetCrashReportCopyPreferencesForTarget=iTunesMobileDeviceReal.AMSSetCrashReportCopyPreferencesForTarget")
            //#pragma comment(linker, "/export:AMSSetDataChangeAlertInfo=iTunesMobileDeviceReal.AMSSetDataChangeAlertInfo")
            //#pragma comment(linker, "/export:AMSSetDataClassInfoForTarget=iTunesMobileDeviceReal.AMSSetDataClassInfoForTarget")
            //#pragma comment(linker, "/export:AMSSetDefaultOutlookCalendarMapping=iTunesMobileDeviceReal.AMSSetDefaultOutlookCalendarMapping")
            //#pragma comment(linker, "/export:AMSSetDesignatedProviderForDataClassName=iTunesMobileDeviceReal.AMSSetDesignatedProviderForDataClassName")
            //#pragma comment(linker, "/export:AMSSetFilteredCollectionNamesForDataClassName=iTunesMobileDeviceReal.AMSSetFilteredCollectionNamesForDataClassName")
            //#pragma comment(linker, "/export:AMSSetNewRecordCalendarName=iTunesMobileDeviceReal.AMSSetNewRecordCalendarName")
            //#pragma comment(linker, "/export:AMSSetNewRecordGroupName=iTunesMobileDeviceReal.AMSSetNewRecordGroupName")
            //#pragma comment(linker, "/export:AMSSubmitCrashReportsFromTarget=iTunesMobileDeviceReal.AMSSubmitCrashReportsFromTarget")
            //#pragma comment(linker, "/export:AMSSubmitRestoreLogFromPath=iTunesMobileDeviceReal.AMSSubmitRestoreLogFromPath")
            //#pragma comment(linker, "/export:AMSUnregisterTarget=iTunesMobileDeviceReal.AMSUnregisterTarget")
            //#pragma comment(linker, "/export:ASRServerHandleConnection=iTunesMobileDeviceReal.ASRServerHandleConnection")
            //#pragma comment(linker, "/export:RCGetSystemPartitionExtrasSizeForDevice=iTunesMobileDeviceReal.RCGetSystemPartitionExtrasSizeForDevice")
            //#pragma comment(linker, "/export:USBMuxConnectByPort=iTunesMobileDeviceReal.USBMuxConnectByPort")
            //#pragma comment(linker, "/export:USBMuxListenerClose=iTunesMobileDeviceReal.USBMuxListenerClose")
            //#pragma comment(linker, "/export:USBMuxListenerCreate=iTunesMobileDeviceReal.USBMuxListenerCreate")
            //#pragma comment(linker, "/export:USBMuxListenerSetDebug=iTunesMobileDeviceReal.USBMuxListenerSetDebug")
            //#pragma comment(linker, "/export:kAFCErrorCodeKey=iTunesMobileDeviceReal.kAFCErrorCodeKey")
            //#pragma comment(linker, "/export:kAFCErrorDebugDescriptionKey=iTunesMobileDeviceReal.kAFCErrorDebugDescriptionKey")
            //#pragma comment(linker, "/export:kAFCErrorDescriptionKey=iTunesMobileDeviceReal.kAFCErrorDescriptionKey")
            //#pragma comment(linker, "/export:kAFCErrorDomain=iTunesMobileDeviceReal.kAFCErrorDomain")
            //#pragma comment(linker, "/export:kAFCErrorDomainKey=iTunesMobileDeviceReal.kAFCErrorDomainKey")
            //#pragma comment(linker, "/export:kAFCErrorExtendedInfoKey=iTunesMobileDeviceReal.kAFCErrorExtendedInfoKey")
            //#pragma comment(linker, "/export:kAFCErrorFileLineKey=iTunesMobileDeviceReal.kAFCErrorFileLineKey")
            //#pragma comment(linker, "/export:kAFCErrorFileNameKey=iTunesMobileDeviceReal.kAFCErrorFileNameKey")
            //#pragma comment(linker, "/export:kAFCErrorLocalizedDescriptionKey=iTunesMobileDeviceReal.kAFCErrorLocalizedDescriptionKey")
            //#pragma comment(linker, "/export:kAFCErrorLocalizedFailureReasonKey=iTunesMobileDeviceReal.kAFCErrorLocalizedFailureReasonKey")
            //#pragma comment(linker, "/export:kAFCErrorLocalizedRecoverySuggestionKey=iTunesMobileDeviceReal.kAFCErrorLocalizedRecoverySuggestionKey")
            //#pragma comment(linker, "/export:kAFCErrorUnderlyingErrorKey=iTunesMobileDeviceReal.kAFCErrorUnderlyingErrorKey")
            //#pragma comment(linker, "/export:kAFCErrorVersionKey=iTunesMobileDeviceReal.kAFCErrorVersionKey")
            //#pragma comment(linker, "/export:kAFCHeaderKeyHeaderLength=iTunesMobileDeviceReal.kAFCHeaderKeyHeaderLength")
            //#pragma comment(linker, "/export:kAFCHeaderKeyPacketData=iTunesMobileDeviceReal.kAFCHeaderKeyPacketData")
            //#pragma comment(linker, "/export:kAFCHeaderKeyPacketID=iTunesMobileDeviceReal.kAFCHeaderKeyPacketID")
            //#pragma comment(linker, "/export:kAFCHeaderKeyPacketLength=iTunesMobileDeviceReal.kAFCHeaderKeyPacketLength")
            //#pragma comment(linker, "/export:kAFCHeaderKeyPacketType=iTunesMobileDeviceReal.kAFCHeaderKeyPacketType")
            //#pragma comment(linker, "/export:kAFCHeaderKeySignature=iTunesMobileDeviceReal.kAFCHeaderKeySignature")
            //#pragma comment(linker, "/export:kAMRestorableInvalidClientID=iTunesMobileDeviceReal.kAMRestorableInvalidClientID")
        };

        public static string Methods = @"AFCErrnoToAFCError
AFCLockCreate
AFCLockFree
AFCLockLock
AFCLockTryLock
AFCLockUnlock
AFCStringCopy
AMDeviceRelease
AMDeviceRetain
AMSAddAppleSearchPathsToEnvironmentFromReg
MISProfileCopyPayload
MISProfileCopySignerSubjectSummary
MISProfileCreateDataRepresentation
MISProfileCreateWithData
MISProfileCreateWithFile
MISProfileGetValue
MISProfileIsMutable
MISProfileValidateSignature
MISProfileValidateSignatureWithAnchors
MISProfileWriteToFile
MISProvisioningProfileCheckValidity
MISProvisioningProfileGetCreationDate
MISProvisioningProfileGetDeveloperCertificates
MISProvisioningProfileGetExpirationDate
MISProvisioningProfileGetName
MISProvisioningProfileGetProvisionedDevices
MISProvisioningProfileGetUUID
MISProvisioningProfileGetVersion
MISProvisioningProfileIncludesDevice
MISProvisioningProfileProvisionsAllDevices
MISProvisioningProfileValidateSignature
USBMuxListenForDevices
AFCConnectionClose
AFCConnectionCopyLastErrorInfo
AFCConnectionCreate
AFCConnectionGetContext
AFCConnectionGetFSBlockSize
AFCConnectionGetIOTimeout
AFCConnectionGetSecureContext
AFCConnectionGetSocketBlockSize
AFCConnectionGetStatus
AFCConnectionGetTypeID
AFCConnectionInvalidate
AFCConnectionIsValid
AFCConnectionOpen
AFCConnectionProcessOperation
AFCConnectionProcessOperations
AFCConnectionScheduleWithRunLoop
AFCConnectionSetCallBack
AFCConnectionSetContext
AFCConnectionSetDisposeSecureContextOnInvalidate
AFCConnectionSetFSBlockSize
AFCConnectionSetFatalError
AFCConnectionSetIOTimeout
AFCConnectionSetSecureContext
AFCConnectionSetSocketBlockSize
AFCConnectionSubmitOperation
AFCConnectionUnscheduleFromRunLoop
AFCCopyErrorString
AFCCopyPacketTypeString
AFCDeviceInfoOpen
AFCDirectoryClose
AFCDirectoryCreate
AFCDirectoryOpen
AFCDirectoryRead
AFCDiscardBodyData
AFCDiscardData
AFCFileDescriptorCreateCloseOperation
AFCFileDescriptorCreateGetPositionOperation
AFCFileDescriptorCreateLockOperation
AFCFileDescriptorCreateReadAtPositionOperation
AFCFileDescriptorCreateReadOperation
AFCFileDescriptorCreateSetImmutableHintOperation
AFCFileDescriptorCreateSetPositionOperation
AFCFileDescriptorCreateSetSizeOperation
AFCFileDescriptorCreateUnlockOperation
AFCFileDescriptorCreateWriteAtPositionOperation
AFCFileDescriptorCreateWriteOperation
AFCFileDescriptorGetTypeID
AFCFileDescriptorInvalidate
AFCFileDescriptorIsValid
AFCFileInfoOpen
AFCFileRefClose
AFCFileRefLock
AFCFileRefOpen
AFCFileRefRead
AFCFileRefSeek
AFCFileRefSetFileSize
AFCFileRefTell
AFCFileRefUnlock
AFCFileRefWrite
AFCFlushData
AFCGetClientVersionString
AFCKeyValueClose
AFCKeyValueRead
AFCLinkPath
AFCOperationCopyPacketData
AFCOperationCreateGetConnectionInfo
AFCOperationCreateGetDeviceInfo
AFCOperationCreateGetFileHash
AFCOperationCreateGetFileHashWithRange
AFCOperationCreateGetFileInfo
AFCOperationCreateGetSizeOfPathContents
AFCOperationCreateLinkPath
AFCOperationCreateMakeDirectory
AFCOperationCreateOpenFile
AFCOperationCreatePacketHeaderDictionary
AFCOperationCreateReadDirectory
AFCOperationCreateRemovePath
AFCOperationCreateRemovePathAndContents
AFCOperationCreateRenamePath
AFCOperationCreateSetConnectionOptions
AFCOperationCreateSetModTime
AFCOperationGetContext
AFCOperationGetResultObject
AFCOperationGetResultStatus
AFCOperationGetState
AFCOperationGetTypeID
AFCOperationSetContext
AFCReadData
AFCReadPacket
AFCReadPacketBody
AFCReadPacketHeader
AFCRemovePath
AFCRenamePath
AFCSendData
AFCSendDataPacket
AFCSendHeader
AFCSendPacket
AFCSendStatus
AFCValidateHeader
AMDCopyArrayOfDevicesMatchingQuery
AMDCopyAuthenticationIdentityForDevice
AMDCopyErrorText
AMDCopySystemBonjourUniqueID
AMDFUModeDeviceCopyAuthInstallPreflightOptions
AMDFUModeDeviceCopyBoardConfig
AMDFUModeDeviceGetBoardID
AMDFUModeDeviceGetChipID
AMDFUModeDeviceGetECID
AMDFUModeDeviceGetLocationID
AMDFUModeDeviceGetProductID
AMDFUModeDeviceGetProductType
AMDFUModeDeviceGetProductionMode
AMDFUModeDeviceGetProgress
AMDFUModeDeviceGetSecurityDomain
AMDFUModeDeviceGetSecurityEpoch
AMDFUModeDeviceGetTypeID
AMDFUModeDeviceIsBootstrapOnly
AMDFUModeDeviceRequestAbbreviatedSendSync
AMDGetPairingRecordDirectoryPath
AMDListenForNotifications
AMDObserveNotification
AMDPostNotification
AMDSecureListenForNotifications
AMDSecureObserveNotification
AMDSecurePostNotification
AMDSecureShutdownNotificationProxy
AMDServiceConnectionCreate
AMDServiceConnectionGetSecureIOContext
AMDServiceConnectionGetSocket
AMDServiceConnectionGetTypeID
AMDServiceConnectionInvalidate
AMDServiceConnectionReceive
AMDServiceConnectionReceiveMessage
AMDServiceConnectionSend
AMDServiceConnectionSendMessage
AMDSetLogLevel
AMDShutdownNotificationProxy
AMDeviceActivate
AMDeviceArchiveApplication
AMDeviceCheckCapabilitiesMatch
AMDeviceConnect
AMDeviceCopyAuthInstallPreflightOptions
AMDeviceCopyDeviceIdentifier
AMDeviceCopyDeviceLocation
AMDeviceCopyProvisioningProfiles
AMDeviceCopyValue
AMDeviceCopyValueWithError
AMDeviceCreateHouseArrestService
AMDeviceCreateWakeupToken
AMDeviceDeactivate
AMDeviceDisconnect
AMDeviceEnterRecovery
AMDeviceExtendedPairWithOptions
AMDeviceGetConnectionID
AMDeviceGetInterfaceSpeed
AMDeviceGetInterfaceType
AMDeviceGetTypeID
AMDeviceGetUserInfo
AMDeviceGetWirelessBuddyFlags
AMDeviceInstallApplication
AMDeviceInstallProvisioningProfile
AMDeviceIsPaired
AMDeviceIsValid
AMDeviceLookupApplicationArchives
AMDeviceLookupApplications
AMDeviceNotificationSubscribe
AMDeviceNotificationUnsubscribe
AMDevicePair
AMDevicePairWithOptions
AMDevicePowerAssertionCreate
AMDevicePowerAssertionGetTypeID
AMDevicePreflightOperationCreate
AMDevicePreflightOperationGetRunLoopSource
AMDevicePreflightOperationGetTypeID
AMDevicePreflightOperationInvalidate
AMDeviceRemoveApplicationArchive
AMDeviceRemoveProvisioningProfile
AMDeviceRemoveValue
AMDeviceRequestAbbreviatedSendSync
AMDeviceRestoreApplication
AMDeviceSecureArchiveApplication
AMDeviceSecureCheckCapabilitiesMatch
AMDeviceSecureInstallApplication
AMDeviceSecureRemoveApplicationArchive
AMDeviceSecureRestoreApplication
AMDeviceSecureStartService
AMDeviceSecureTransferPath
AMDeviceSecureUninstallApplication
AMDeviceSecureUpgradeApplication
AMDeviceSetUserInfo
AMDeviceSetValue
AMDeviceSetWirelessBuddyFlags
AMDeviceStartHouseArrestService
AMDeviceStartService
AMDeviceStartServiceWithOptions
AMDeviceStartSession
AMDeviceStopSession
AMDeviceTransferApplication
AMDeviceTransferPath
AMDeviceUninstallApplication
AMDeviceUnpair
AMDeviceUpgradeApplication
AMDeviceValidatePairing
AMDeviceWakeupOperationCreateWithToken
AMDeviceWakeupOperationGetTypeID
AMDeviceWakeupOperationInvalidate
AMDeviceWakeupOperationSchedule
AMDeviceWakeupUsingToken
AMRAuthInstallCopyLocalizedStringForServerError
AMRAuthInstallCopyPreflightOptions
AMRAuthInstallFinalize
AMRAuthInstallPreflight
AMRAuthInstallRegisterProxyCredentialsCallback
AMRLog
AMRLogv
AMRecoveryModeDeviceCopyAuthInstallPreflightOptions
AMRecoveryModeDeviceCopyBoardConfig
AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice
AMRecoveryModeDeviceCopyIMEI
AMRecoveryModeDeviceCopySerialNumber
AMRecoveryModeDeviceGetBoardID
AMRecoveryModeDeviceGetChipID
AMRecoveryModeDeviceGetECID
AMRecoveryModeDeviceGetLocationID
AMRecoveryModeDeviceGetProductID
AMRecoveryModeDeviceGetProductType
AMRecoveryModeDeviceGetProductionMode
AMRecoveryModeDeviceGetProgress
AMRecoveryModeDeviceGetSecurityDomain
AMRecoveryModeDeviceGetSecurityEpoch
AMRecoveryModeDeviceGetTypeID
AMRecoveryModeDeviceIsBootstrapOnly
AMRecoveryModeDeviceReboot
AMRecoveryModeDeviceRequestAbbreviatedSendSync
AMRecoveryModeDeviceSendBlindCommandToDevice
AMRecoveryModeDeviceSendCommandToDevice
AMRecoveryModeDeviceSendFileToDevice
AMRecoveryModeDeviceSetAutoBoot
AMRecoveryModeGetSoftwareBuildVersion
AMRestorableBuildCopyRestoreBundleURL
AMRestorableBuildCopySupportedBoardConfigs
AMRestorableBuildCopySupportedVariants
AMRestorableBuildCreate
AMRestorableCommitStashBag
AMRestorableDeviceCopyAMDevice
AMRestorableDeviceCopyAuthInstallPreflightOptions
AMRestorableDeviceCopyBoardConfig
AMRestorableDeviceCopyDFUModeDevice
AMRestorableDeviceCopyDefaultRestoreOptions
AMRestorableDeviceCopyRecoveryModeDevice
AMRestorableDeviceCopyRestoreModeDevice
AMRestorableDeviceCopyRestoreOptionsFromDocument
AMRestorableDeviceCopySerialDevicePath
AMRestorableDeviceCopySerialNumber
AMRestorableDeviceCreateFromAMDevice
AMRestorableDeviceEnableExtraDFUDevices
AMRestorableDeviceGetDFUModeDevice
AMRestorableDeviceGetECID
AMRestorableDeviceGetFusingInfo
AMRestorableDeviceGetLocationID
AMRestorableDeviceGetProductID
AMRestorableDeviceGetProductType
AMRestorableDeviceGetRecoveryModeDevice
AMRestorableDeviceGetState
AMRestorableDeviceRegisterForNotifications
AMRestorableDeviceRestore
AMRestorableDeviceSendBlindCommand
AMRestorableDeviceSendCommand
AMRestorableDeviceSendFile
AMRestorableDeviceSetLogFileURL
AMRestorableDeviceSetProxyCredentialsCallback
AMRestorableDeviceUnregisterForNotifications
AMRestorableEnableLogStreaming
AMRestorableGetIdentifyingErrorCode
AMRestorableLogToFile
AMRestorablePersonalizeCopyManifestTag
AMRestorablePersonalizeSendFile
AMRestorableSetGlobalLocationIDFilter
AMRestorableSetGlobalLogFileURL
AMRestorableSetLogLevel
AMRestoreCreateBootArgsByAddingArg
AMRestoreCreateBootArgsByRemovingArg
AMRestoreCreateDefaultOptions
AMRestoreCreatePathsForBundle
AMRestoreDisableFileLogging
AMRestoreEnableExtraDFUDevices
AMRestoreEnableFileLogging
AMRestoreGetSupportedPayloadVersion
AMRestoreGetTransformedDFUType
AMRestoreGetTransformedFirmwareTypeValue
AMRestoreModeDeviceCopyBoardConfig
AMRestoreModeDeviceCopyEcid
AMRestoreModeDeviceCopyIMEI
AMRestoreModeDeviceCopyRestoreLog
AMRestoreModeDeviceCopySerialNumber
AMRestoreModeDeviceCreate
AMRestoreModeDeviceGetDeviceID
AMRestoreModeDeviceGetLocationID
AMRestoreModeDeviceGetProgress
AMRestoreModeDeviceGetTypeID
AMRestoreModeDeviceReboot
AMRestoreModeGetLastFailureLog
AMRestorePerformDFURestore
AMRestorePerformRecoveryModeRestore
AMRestorePerformRestoreModeRestore
AMRestorePerformRestoreModeRestoreWithError
AMRestoreRegisterForDeviceNotifications
AMRestoreSetLogLevel
AMRestoreUnregisterForDeviceNotifications
AMSArchiveBackup
AMSBackupWithOptions
AMSBeginSync
AMSBeginSyncForDataClasses
AMSCancelBackupRestore
AMSCancelCrashReportCopy
AMSCancelSync
AMSCancelSyncDiagnostics
AMSChangeBackupPassword
AMSCleanup
AMSClearDataClasses
AMSConnectToCrashReportCopyTarget
AMSCopyApplicationListFromBackup
AMSCopyCrashReportPath
AMSCopyCrashReportsFromTarget
AMSCopySourcesForRestoreCompatibleWith
AMSDisconnectFromCrashReportCopyTarget
AMSEnableCloudBackup
AMSEnableSyncServices
AMSGetAOSUsername
AMSGetApplicationProviderInfo
AMSGetBackupInfo
AMSGetBackupPasswordFromKeychainForTarget
AMSGetCalendarDayLimit
AMSGetClientIdentifierAndDisplayNameForTarget
AMSGetCollectionsForDataClassName
AMSGetCrashReportCopyPreferencesForTarget
AMSGetDataChangeAlertInfo
AMSGetDataClassInfoForTarget
AMSGetDefaultOutlookCalendarMapping
AMSGetLastSyncDateForDataClass
AMSGetNewRecordCalendarName
AMSGetNewRecordGroupName
AMSGetNumberOfCrashReportsToCopy
AMSGetNumberOfCrashReportsToSubmit
AMSGetSourcesForRestore
AMSGetSupportedDataClassNames
AMSInitialize
AMSIsSyncServicesEnabled
AMSRefreshCollectionsForDataClassName
AMSRegisterCallbacks
AMSRegisterClientWithTargetIdentifierAndDisplayName
AMSResetSyncData
AMSRestoreWithApplications
AMSRunSyncDiagnostics
AMSSetBackupPasswordInKeychain
AMSSetCalendarDayLimit
AMSSetCrashReportCopyPreferencesForTarget
AMSSetDataChangeAlertInfo
AMSSetDataClassInfoForTarget
AMSSetDefaultOutlookCalendarMapping
AMSSetDesignatedProviderForDataClassName
AMSSetFilteredCollectionNamesForDataClassName
AMSSetNewRecordCalendarName
AMSSetNewRecordGroupName
AMSSubmitCrashReportsFromTarget
AMSSubmitRestoreLogFromPath
AMSUnregisterTarget
ASRServerHandleConnection
RCGetSystemPartitionExtrasSizeForDevice
USBMuxConnectByPort
USBMuxListenerClose
USBMuxListenerCreate
USBMuxListenerSetDebug
kAFCErrorCodeKey
kAFCErrorDebugDescriptionKey
kAFCErrorDescriptionKey
kAFCErrorDomain
kAFCErrorDomainKey
kAFCErrorExtendedInfoKey
kAFCErrorFileLineKey
kAFCErrorFileNameKey
kAFCErrorLocalizedDescriptionKey
kAFCErrorLocalizedFailureReasonKey
kAFCErrorLocalizedRecoverySuggestionKey
kAFCErrorUnderlyingErrorKey
kAFCErrorVersionKey
kAFCHeaderKeyHeaderLength
kAFCHeaderKeyPacketData
kAFCHeaderKeyPacketID
kAFCHeaderKeyPacketLength
kAFCHeaderKeyPacketType
kAFCHeaderKeySignature
kAMRestorableInvalidClientID";
    }
}

