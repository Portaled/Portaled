



struct _CERT_PRIVATE_KEY_VALIDITY
{
  _FILETIME NotBefore;
  _FILETIME NotAfter;
};


struct _CMSG_KEY_AGREE_KEY_ENCRYPT_INFO
{
  unsigned int cbSize;
  _CRYPTOAPI_BLOB EncryptedKey;
};


struct _CMSG_KEY_AGREE_ENCRYPT_INFO
{
  unsigned int cbSize;
  unsigned int dwRecipientIndex;
  _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  _CRYPTOAPI_BLOB UserKeyingMaterial;
  unsigned int dwOriginatorChoice;
  $B231DDA85B3C8A62A08B97AB01700C9A ___u5;
  unsigned int cKeyAgreeKeyEncryptInfo;
  _CMSG_KEY_AGREE_KEY_ENCRYPT_INFO **rgpKeyAgreeKeyEncryptInfo;
  unsigned int dwFlags;
};




struct _KEY_TYPE_SUBTYPE
{
  unsigned int dwKeySpec;
  _GUID Type;
  _GUID Subtype;
};


struct IProcessInitControl : IUnknown
{
};


struct tagEMRCREATEDIBPATTERNBRUSHPT
{
  tagEMR emr;
  unsigned int ihBrush;
  unsigned int iUsage;
  unsigned int offBmi;
  unsigned int cbBmi;
  unsigned int offBits;
  unsigned int cbBits;
};


struct tagAUXCAPS2A
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  char szPname[32];
  unsigned __int16 wTechnology;
  unsigned __int16 wReserved1;
  unsigned int dwSupport;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct _CHANGER_ELEMENT_STATUS_EX
{
  _CHANGER_ELEMENT Element;
  _CHANGER_ELEMENT SrcElementAddress;
  unsigned int Flags;
  unsigned int ExceptionCode;
  char TargetId;
  char Lun;
  unsigned __int16 Reserved;
  char PrimaryVolumeID[36];
  char AlternateVolumeID[36];
  char VendorIdentification[8];
  char ProductIdentification[16];
  char SerialNumber[32];
};



struct _DRIVER_INFO_5W
{
  unsigned int cVersion;
  unsigned __int16 *pName;
  unsigned __int16 *pEnvironment;
  unsigned __int16 *pDriverPath;
  unsigned __int16 *pDataFile;
  unsigned __int16 *pConfigFile;
  unsigned int dwDriverAttributes;
  unsigned int dwConfigVersion;
  unsigned int dwDriverVersion;
};


struct IPersistMoniker : IUnknown
{
};



struct SmartArray<ArchiveVersionRow_VersionEntry,1>
{
  ArchiveVersionRow_VersionEntry *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct PrimitiveInplaceArray<ArchiveVersionRow_VersionEntry,8,1> : SmartArray<ArchiveVersionRow_VersionEntry,1>
{
  char m_aPrimitiveInplaceMemory[64];
};


struct tagPOINTFX
{
  _FIXED x;
  _FIXED y;
};




struct _CERT_X942_DH_VALIDATION_PARAMS
{
  _CRYPT_BIT_BLOB seed;
  unsigned int pgenCounter;
};


struct _CERT_X942_DH_PARAMETERS
{
  _CRYPTOAPI_BLOB p;
  _CRYPTOAPI_BLOB g;
  _CRYPTOAPI_BLOB q;
  _CRYPTOAPI_BLOB j;
  _CERT_X942_DH_VALIDATION_PARAMS *pValidationParams;
};


struct IOleWindow : IUnknown
{
};


struct IOleInPlaceActiveObject : IOleWindow
{
};


struct IOleInPlaceUIWindow : IOleWindow
{
};



struct tagGUITHREADINFO
{
  unsigned int cbSize;
  unsigned int flags;
  HWND__ *hwndActive;
  HWND__ *hwndFocus;
  HWND__ *hwndCapture;
  HWND__ *hwndMenuOwner;
  HWND__ *hwndMoveSize;
  HWND__ *hwndCaret;
  tagRECT rcCaret;
};


struct __declspec(align(4)) _CHANGER_INITIALIZE_ELEMENT_STATUS
{
  _CHANGER_ELEMENT_LIST ElementList;
  char BarCodeScan;
};




struct tagPAINTSTRUCT
{
  HDC__ *hdc;
  int fErase;
  tagRECT rcPaint;
  int fRestore;
  int fIncUpdate;
  char rgbReserved[32];
};


struct _DISCDLGSTRUCTA
{
  unsigned int cbStructure;
  HWND__ *hwndOwner;
  char *lpLocalName;
  char *lpRemoteName;
  unsigned int dwFlags;
};





struct _SINGLE_LIST_ENTRY
{
  _SINGLE_LIST_ENTRY *Next;
};


struct _SYSTEM_ALARM_OBJECT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int Flags;
  _GUID ObjectType;
  _GUID InheritedObjectType;
  unsigned int SidStart;
};


struct _SYSTEM_AUDIT_CALLBACK_OBJECT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int Flags;
  _GUID ObjectType;
  _GUID InheritedObjectType;
  unsigned int SidStart;
};


struct tagWNDCLASSEXW
{
  unsigned int cbSize;
  unsigned int style;
  int (__stdcall *lpfnWndProc)(HWND__ *, unsigned int, unsigned int, int);
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE__ *hInstance;
  HICON__ *hIcon;
  HICON__ *hCursor;
  HBRUSH__ *hbrBackground;
  const unsigned __int16 *lpszMenuName;
  const unsigned __int16 *lpszClassName;
  HICON__ *hIconSm;
};


struct tagMONITORINFO
{
  unsigned int cbSize;
  tagRECT rcMonitor;
  tagRECT rcWork;
  unsigned int dwFlags;
};


struct tagMONITORINFOEXA : tagMONITORINFO
{
  char szDevice[32];
};


struct _CMSG_ENCRYPTED_ENCODE_INFO
{
  unsigned int cbSize;
  _CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
  void *pvEncryptionAuxInfo;
};


struct __declspec(align(8)) _PARTITION_INFORMATION
{
  _LARGE_INTEGER StartingOffset;
  _LARGE_INTEGER PartitionLength;
  unsigned int HiddenSectors;
  unsigned int PartitionNumber;
  char PartitionType;
  char BootIndicator;
  char RecognizedPartition;
  char RewritePartition;
};




struct tagEXCEPINFO
{
  unsigned __int16 wCode;
  unsigned __int16 wReserved;
  unsigned __int16 *bstrSource;
  unsigned __int16 *bstrDescription;
  unsigned __int16 *bstrHelpFile;
  unsigned int dwHelpContext;
  void *pvReserved;
  int (__stdcall *pfnDeferredFillIn)(tagEXCEPINFO *);
  int scode;
};


struct __declspec(align(4)) tagEMRINVERTRGN
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int cbRgnData;
  char RgnData[1];
};



struct _RTL_VERIFIER_DLL_DESCRIPTOR
{
  unsigned __int16 *DllName;
  unsigned int DllFlags;
  void *DllAddress;
  _RTL_VERIFIER_THUNK_DESCRIPTOR *DllThunks;
};






struct _RTL_CRITICAL_SECTION
{
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo;
  int LockCount;
  int RecursionCount;
  void *OwningThread;
  void *LockSemaphore;
  unsigned int SpinCount;
};


struct _LIST_ENTRY
{
  _LIST_ENTRY *Flink;
  _LIST_ENTRY *Blink;
};


struct _RTL_CRITICAL_SECTION_DEBUG
{
  unsigned __int16 Type;
  unsigned __int16 CreatorBackTraceIndex;
  _RTL_CRITICAL_SECTION *CriticalSection;
  _LIST_ENTRY ProcessLocksList;
  unsigned int EntryCount;
  unsigned int ContentionCount;
  unsigned int Spare[2];
};





struct Turbine_Debug
{
  Turbine_DebugVtbl *vfptr;
};


struct Turbine_DebugVtbl
{
  bool (__thiscall *InitDebug)(Turbine_Debug *this);
};




struct Turbine_Debug_AssertOnFailureFmtHelper
{
  TResult m_hrExpressionResult;
  const char *m_szFile;
  const char *m_szCondition;
  int m_iLine;
  unsigned int *m_rdwFlags;
};


struct _EXCEPTION_POINTERS
{
  _EXCEPTION_RECORD *ExceptionRecord;
  _CONTEXT *ContextRecord;
};




struct DbgReportObject
{
  void *m_pUserDebuggingData;
  PStringBase<char> m_sSummary;
  PStringBase<char> m_sReport;
  DbgReportContext m_cContext;
};


struct SerializationBehavior<SB_Primitive>
{
};


struct tagMIDIOUTCAPS2A
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  char szPname[32];
  unsigned __int16 wTechnology;
  unsigned __int16 wVoices;
  unsigned __int16 wNotes;
  unsigned __int16 wChannelMask;
  unsigned int dwSupport;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct _CERT_REVOCATION_PARA
{
  unsigned int cbSize;
  _CERT_CONTEXT *pIssuerCert;
  unsigned int cCertStore;
  void **rgCertStore;
  void *hCrlStore;
  _FILETIME *pftTimeToUse;
};


struct __declspec(align(8)) _DISK_RECORD
{
  _LARGE_INTEGER ByteOffset;
  _LARGE_INTEGER StartTime;
  _LARGE_INTEGER EndTime;
  void *VirtualAddress;
  unsigned int NumberOfBytes;
  char DeviceNumber;
  char ReadRequest;
};








struct _IMAGE_ROM_HEADERS
{
  _IMAGE_FILE_HEADER FileHeader;
  _IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
};


struct tagSCROLLBARINFO
{
  unsigned int cbSize;
  tagRECT rcScrollBar;
  int dxyLineButton;
  int xyThumbTop;
  int xyThumbBottom;
  int reserved;
  unsigned int rgstate[6];
};







struct _HISTOGRAM_BUCKET
{
  unsigned int Reads;
  unsigned int Writes;
};








struct _TOKEN_USER
{
  _SID_AND_ATTRIBUTES User;
};


struct tagEMREXTTEXTOUTA
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int iGraphicsMode;
  float exScale;
  float eyScale;
  tagEMRTEXT emrtext;
};


struct _CMSG_CMS_SIGNER_INFO
{
  unsigned int dwVersion;
  _CERT_ID SignerId;
  _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  _CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
  _CRYPTOAPI_BLOB EncryptedHash;
  _CRYPT_ATTRIBUTES AuthAttrs;
  _CRYPT_ATTRIBUTES UnauthAttrs;
};


union $4B797564FA54ACBD8AF4F39A7F09FEB1
{
  unsigned int oInst;
  tagVARIANT *lpvarValue;
};


struct tagVARDESC
{
  int memid;
  unsigned __int16 *lpstrSchema;
  $4B797564FA54ACBD8AF4F39A7F09FEB1 ___u2;
  tagELEMDESC elemdescVar;
  unsigned __int16 wVarFlags;
  tagVARKIND varkind;
};


struct IPropertySetStorage : IUnknown
{
};




struct tagCONVINFO
{
  unsigned int cb;
  unsigned int hUser;
  HCONV__ *hConvPartner;
  HSZ__ *hszSvcPartner;
  HSZ__ *hszServiceReq;
  HSZ__ *hszTopic;
  HSZ__ *hszItem;
  unsigned int wFmt;
  unsigned int wType;
  unsigned int wStatus;
  unsigned int wConvst;
  unsigned int wLastError;
  HCONVLIST__ *hConvList;
  tagCONVCONTEXT ConvCtxt;
  HWND__ *hwnd;
  HWND__ *hwndPartner;
};


struct IEnumSTATPROPSETSTG : IUnknown
{
};


struct tagEMRANGLEARC
{
  tagEMR emr;
  _POINTL ptlCenter;
  unsigned int nRadius;
  float eStartAngle;
  float eSweepAngle;
};


struct _PROPSHEETPAGEA_V1
{
  unsigned int dwSize;
  unsigned int dwFlags;
  HINSTANCE__ *hInstance;
  $F2E003516E3D3EB93273B8D5D1F8D68A ___u3;
  $864CA0437219939730246E31FD89420B ___u4;
  const char *pszTitle;
  int (__stdcall *pfnDlgProc)(HWND__ *, unsigned int, unsigned int, int);
  int lParam;
  unsigned int (__stdcall *pfnCallback)(HWND__ *, unsigned int, _PROPSHEETPAGEA *);
  unsigned int *pcRefParent;
};


struct IWrappedProtocol : IUnknown
{
};


struct tagCANDIDATEFORM
{
  unsigned int dwIndex;
  unsigned int dwStyle;
  tagPOINT ptCurrentPos;
  tagRECT rcArea;
};


struct PStringBaseIter_Common<char>
{
  PStringBaseIter_Common<char>Vtbl *vfptr;
  unsigned int curr;
  unsigned int mark;
};


struct PStringBaseIter_Common<char>Vtbl
{
  unsigned int (__thiscall *GetStrLen)(PStringBaseIter_Common<char> *this);
  const char *(__thiscall *IndexToConstPointer)(PStringBaseIter_Common<char> *this, unsigned int);
  char (__thiscall *IndexToChar)(PStringBaseIter_Common<char> *this, unsigned int);
  PStringBase<char> *(__thiscall *GetPStringPtr)(PStringBaseIter_Common<char> *this);
};


struct PStringBaseIter_Const<char> : PStringBaseIter_Common<char>
{
  PStringBase<char> *pstring_ptr;
};


struct tagEMRSETARCDIRECTION
{
  tagEMR emr;
  unsigned int iArcDirection;
};





struct __declspec(align(8)) _TAPE_SET_POSITION
{
  unsigned int Method;
  unsigned int Partition;
  _LARGE_INTEGER Offset;
  char Immediate;
};




struct _CONNECTDLGSTRUCTA
{
  unsigned int cbStructure;
  HWND__ *hwndOwner;
  _NETRESOURCEA *lpConnRes;
  unsigned int dwFlags;
  unsigned int dwDevNum;
};




struct IParseDisplayName : IUnknown
{
};


struct FileNodeName_Double : IFileNodeName
{
  long double m_name;
};


struct _CERT_REQUEST_INFO
{
  unsigned int dwVersion;
  _CRYPTOAPI_BLOB Subject;
  _CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
  unsigned int cAttribute;
  _CRYPT_ATTRIBUTE *rgAttribute;
};






struct __unaligned __declspec(align(2)) _IMAGE_LINENUMBER
{
  $024A9AD87DA22F97CCD4130050D7BF17 Type;
  unsigned __int16 Linenumber;
};




struct tagMIXERLINEA
{
  unsigned int cbStruct;
  unsigned int dwDestination;
  unsigned int dwSource;
  unsigned int dwLineID;
  unsigned int fdwLine;
  unsigned int dwUser;
  unsigned int dwComponentType;
  unsigned int cChannels;
  unsigned int cConnections;
  unsigned int cControls;
  char szShortName[16];
  char szName[64];
  $428257C9868A469D077AA3A343E95D70 Target;
};


struct _EXCEPTION_DEBUG_INFO
{
  _EXCEPTION_RECORD ExceptionRecord;
  unsigned int dwFirstChance;
};


struct _CERT_POLICY_QUALIFIER_INFO
{
  char *pszPolicyQualifierId;
  _CRYPTOAPI_BLOB Qualifier;
};


struct _CERT_POLICY_INFO
{
  char *pszPolicyIdentifier;
  unsigned int cPolicyQualifier;
  _CERT_POLICY_QUALIFIER_INFO *rgPolicyQualifier;
};


struct _CERT_POLICIES_INFO
{
  unsigned int cPolicyInfo;
  _CERT_POLICY_INFO *rgPolicyInfo;
};


struct _CMSG_CTRL_KEY_TRANS_DECRYPT_PARA
{
  unsigned int cbSize;
  unsigned int hCryptProv;
  unsigned int dwKeySpec;
  _CMSG_KEY_TRANS_RECIPIENT_INFO *pKeyTrans;
  unsigned int dwRecipientIndex;
};



struct tagNEWTEXTMETRICEXA
{
  tagNEWTEXTMETRICA ntmTm;
  tagFONTSIGNATURE ntmFontSig;
};


struct _DISPLAY_DEVICEA
{
  unsigned int cb;
  char DeviceName[32];
  char DeviceString[128];
  unsigned int StateFlags;
  char DeviceID[128];
  char DeviceKey[128];
};


struct _PRINTER_INFO_6
{
  unsigned int dwStatus;
};


struct AsyncIPipeDouble : IUnknown
{
};


struct _OFNOTIFYEXW
{
  tagNMHDR hdr;
  tagOFNW *lpOFN;
  void *psf;
  void *pidl;
};





struct tagMCI_BREAK_PARMS
{
  unsigned int dwCallback;
  int nVirtKey;
  HWND__ *hwndBreak;
};


struct _CERT_PHYSICAL_STORE_INFO
{
  unsigned int cbSize;
  char *pszOpenStoreProvider;
  unsigned int dwOpenEncodingType;
  unsigned int dwOpenFlags;
  _CRYPTOAPI_BLOB OpenParameters;
  unsigned int dwFlags;
  unsigned int dwPriority;
};





struct tagMCI_ANIM_WINDOW_PARMSW
{
  unsigned int dwCallback;
  HWND__ *hWnd;
  unsigned int nCmdShow;
  const unsigned __int16 *lpstrText;
};


struct _CERT_KEYGEN_REQUEST_INFO
{
  unsigned int dwVersion;
  _CERT_PUBLIC_KEY_INFO SubjectPublicKeyInfo;
  unsigned __int16 *pwszChallengeString;
};





struct $BEA19A8FD43CDAFAF202C6F3A43A4084
{
  unsigned __int16 *pPackageName;
  _GUID PolicyId;
};


struct $E50625293C37C0408886B8B223FA5D41
{
  _GUID ObjectId;
  _GUID PolicyId;
};


union __MIDL___MIDL_itf_wtypes_0003_0001___MIDL___MIDL_itf_wtypes_0003_0005
{
  _GUID clsid;
  unsigned __int16 *pFileExt;
  unsigned __int16 *pMimeType;
  unsigned __int16 *pProgId;
  unsigned __int16 *pFileName;
  $BEA19A8FD43CDAFAF202C6F3A43A4084 ByName;
  $E50625293C37C0408886B8B223FA5D41 ByObjectId;
};


struct __MIDL___MIDL_itf_wtypes_0003_0001
{
  unsigned int tyspec;
  __MIDL___MIDL_itf_wtypes_0003_0001___MIDL___MIDL_itf_wtypes_0003_0005 tagged_union;
};


struct IPersist : IUnknown
{
};


struct IPersistStream : IPersist
{
};


struct _SOCKET_ADDRESS_LIST
{
  int iAddressCount;
  _SOCKET_ADDRESS Address[1];
};


struct _SHFILEINFOW
{
  HICON__ *hIcon;
  int iIcon;
  unsigned int dwAttributes;
  unsigned __int16 szDisplayName[260];
  unsigned __int16 szTypeName[80];
};





struct _CRYPT_ENCODE_PARA
{
  unsigned int cbSize;
  void *(__stdcall *pfnAlloc)(unsigned int);
  void (__stdcall *pfnFree)(void *);
};


struct _DOC_INFO_3W
{
  unsigned __int16 *pDocName;
  unsigned __int16 *pOutputFile;
  unsigned __int16 *pDatatype;
  unsigned int dwFlags;
};


struct IAddrExclusionControl : IUnknown
{
};


struct IPrintDialogServices : IUnknown
{
};


struct PFileNodeIter
{
  PFileNode *file_node;
  unsigned int curr_index;
  PStringBase<char> search_string;
};


struct __declspec(align(4)) tagEMREXTSELECTCLIPRGN
{
  tagEMR emr;
  unsigned int cbRgnData;
  unsigned int iMode;
  char RgnData[1];
};




struct _FORM_INFO_1A
{
  unsigned int Flags;
  char *pName;
  tagSIZE Size;
  _RECTL ImageableArea;
};





struct tagTITLEBARINFO
{
  unsigned int cbSize;
  tagRECT rcTitleBar;
  unsigned int rgstate[6];
};




struct _RPC_IF_ID
{
  _GUID Uuid;
  unsigned __int16 VersMajor;
  unsigned __int16 VersMinor;
};


struct _CERT_KEY_ATTRIBUTES_INFO
{
  _CRYPTOAPI_BLOB KeyId;
  _CRYPT_BIT_BLOB IntendedKeyUsage;
  _CERT_PRIVATE_KEY_VALIDITY *pPrivateKeyUsagePeriod;
};





struct _COAUTHINFO
{
  unsigned int dwAuthnSvc;
  unsigned int dwAuthzSvc;
  unsigned __int16 *pwszServerPrincName;
  unsigned int dwAuthnLevel;
  unsigned int dwImpersonationLevel;
  _COAUTHIDENTITY *pAuthIdentityData;
  unsigned int dwCapabilities;
};


struct _COSERVERINFO
{
  unsigned int dwReserved1;
  unsigned __int16 *pwszName;
  _COAUTHINFO *pAuthInfo;
  unsigned int dwReserved2;
};


struct tagBIND_OPTS2 : tagBIND_OPTS
{
  unsigned int dwTrackFlags;
  unsigned int dwClassContext;
  unsigned int locale;
  _COSERVERINFO *pServerInfo;
};


union _userHMETAFILE___MIDL_IWinTypes_0004
{
  int hInproc;
  _BYTE_BLOB *hRemote;
  __int64 hInproc64;
};


struct _userHMETAFILE
{
  int fContext;
  _userHMETAFILE___MIDL_IWinTypes_0004 u;
};




struct tagENUMLOGFONTA
{
  tagLOGFONTA elfLogFont;
  char elfFullName[64];
  char elfStyle[32];
};


struct tagEMRALPHABLEND
{
  tagEMR emr;
  _RECTL rclBounds;
  int xDest;
  int yDest;
  int cxDest;
  int cyDest;
  unsigned int dwRop;
  int xSrc;
  int ySrc;
  tagXFORM xformSrc;
  unsigned int crBkColorSrc;
  unsigned int iUsageSrc;
  unsigned int offBmiSrc;
  unsigned int cbBmiSrc;
  unsigned int offBitsSrc;
  unsigned int cbBitsSrc;
  int cxSrc;
  int cySrc;
};


struct tagMOUSEHOOKSTRUCT
{
  tagPOINT pt;
  HWND__ *hwnd;
  unsigned int wHitTestCode;
  unsigned int dwExtraInfo;
};


struct tagMIXERCONTROLA
{
  unsigned int cbStruct;
  unsigned int dwControlID;
  unsigned int dwControlType;
  unsigned int fdwControl;
  unsigned int cMultipleItems;
  char szShortName[16];
  char szName[64];
  $C980AEBE6C9A6676CE771A252444CFA9 Bounds;
  $D57FBB56CFB6CB9AA7C272D88EF9A29F Metrics;
};


struct _CRYPT_CONTENT_INFO
{
  char *pszObjId;
  _CRYPTOAPI_BLOB Content;
};


struct IPersistStorage : IPersist
{
};


struct __declspec(align(4)) tagEMRGLSRECORD
{
  tagEMR emr;
  unsigned int cbData;
  char Data[1];
};




struct tagDDEML_MSG_HOOK_DATA
{
  unsigned int uiLo;
  unsigned int uiHi;
  unsigned int cbData;
  unsigned int Data[8];
};


struct tagMONMSGSTRUCT
{
  unsigned int cb;
  HWND__ *hwndTo;
  unsigned int dwTime;
  void *hTask;
  unsigned int wMsg;
  unsigned int wParam;
  int lParam;
  tagDDEML_MSG_HOOK_DATA dmhd;
};


struct _PSHNOTIFY
{
  tagNMHDR hdr;
  int lParam;
};





struct Logger_ILoggingOutputHandler : ReferenceCountTemplate_1048576_0
{
};


struct Logger_ITextFileOutputHandler : Logger_ILoggingOutputHandler
{
};


struct Logger_LogMacro
{
  Logger_LoggingSeverity m_ls;
  unsigned int m_lc;
};


struct tagEMRSTRETCHBLT
{
  tagEMR emr;
  _RECTL rclBounds;
  int xDest;
  int yDest;
  int cxDest;
  int cyDest;
  unsigned int dwRop;
  int xSrc;
  int ySrc;
  tagXFORM xformSrc;
  unsigned int crBkColorSrc;
  unsigned int iUsageSrc;
  unsigned int offBmiSrc;
  unsigned int cbBmiSrc;
  unsigned int offBitsSrc;
  unsigned int cbBitsSrc;
  int cxSrc;
  int cySrc;
};


struct _ACCESS_DENIED_CALLBACK_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int SidStart;
};


struct _TOKEN_GROUPS
{
  unsigned int GroupCount;
  _SID_AND_ATTRIBUTES Groups[1];
};


struct _TOKEN_PRIVILEGES
{
  unsigned int PrivilegeCount;
  _LUID_AND_ATTRIBUTES Privileges[1];
};


struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION
{
  unsigned int SecurityLimitFlags;
  void *JobToken;
  _TOKEN_GROUPS *SidsToDisable;
  _TOKEN_PRIVILEGES *PrivilegesToDelete;
  _TOKEN_GROUPS *RestrictedSids;
};




struct _IMAGE_THUNK_DATA32
{
  $E6E24A7F5B6F8B597C18331DB62781EC u1;
};


struct _remoteMETAFILEPICT
{
  int mm;
  int xExt;
  int yExt;
  _userHMETAFILE *hMF;
};


union _userHMETAFILEPICT___MIDL_IWinTypes_0005
{
  int hInproc;
  _remoteMETAFILEPICT *hRemote;
  __int64 hInproc64;
};


struct _userHMETAFILEPICT
{
  int fContext;
  _userHMETAFILEPICT___MIDL_IWinTypes_0005 u;
};


union _userSTGMEDIUM__STGMEDIUM_UNION___MIDL_IAdviseSink_0003
{
  _userHMETAFILEPICT *hMetaFilePict;
  _userHENHMETAFILE *hHEnhMetaFile;
  _GDI_OBJECT *hGdiHandle;
  _userHGLOBAL *hGlobal;
  unsigned __int16 *lpszFileName;
  _BYTE_BLOB *pstm;
  _BYTE_BLOB *pstg;
};


struct _userSTGMEDIUM__STGMEDIUM_UNION
{
  unsigned int tymed;
  _userSTGMEDIUM__STGMEDIUM_UNION___MIDL_IAdviseSink_0003 u;
};


struct _userSTGMEDIUM
{
  IUnknown *pUnkForRelease;
};


struct _DISK_EXTENT
{
  unsigned int DiskNumber;
  _LARGE_INTEGER StartingOffset;
  _LARGE_INTEGER ExtentLength;
};


struct _VOLUME_DISK_EXTENTS
{
  unsigned int NumberOfDiskExtents;
  _DISK_EXTENT Extents[1];
};


struct IInternetPriority : IUnknown
{
};


struct _wireSAFEARR_HAVEIID
{
  unsigned int Size;
  IUnknown **apUnknown;
  _GUID iid;
};


struct ANON_OBJECT_HEADER
{
  unsigned __int16 Sig1;
  unsigned __int16 Sig2;
  unsigned __int16 Version;
  unsigned __int16 Machine;
  unsigned int TimeDateStamp;
  _GUID ClassID;
  unsigned int SizeOfData;
};


struct __declspec(align(4)) tagEMREXTESCAPE
{
  tagEMR emr;
  int iEscape;
  int cbEscData;
  char EscData[1];
};


struct tagMCI_ANIM_RECT_PARMS
{
  unsigned int dwCallback;
  tagRECT rc;
};


struct tagLOGCOLORSPACEA
{
  unsigned int lcsSignature;
  unsigned int lcsVersion;
  unsigned int lcsSize;
  int lcsCSType;
  int lcsIntent;
  tagICEXYZTRIPLE lcsEndpoints;
  unsigned int lcsGammaRed;
  unsigned int lcsGammaGreen;
  unsigned int lcsGammaBlue;
  char lcsFilename[260];
};


struct tagEMRCREATECOLORSPACE
{
  tagEMR emr;
  unsigned int ihCS;
  tagLOGCOLORSPACEA lcs;
};


struct tagMIDIINCAPS2A
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  char szPname[32];
  unsigned int dwSupport;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};



struct IErrorLog : IUnknown
{
};


struct tagCUSTDATA
{
  unsigned int cCustData;
  tagCUSTDATAITEM *prgCustData;
};


struct _WSAPROTOCOL_INFOW
{
  unsigned int dwServiceFlags1;
  unsigned int dwServiceFlags2;
  unsigned int dwServiceFlags3;
  unsigned int dwServiceFlags4;
  unsigned int dwProviderFlags;
  _GUID ProviderId;
  unsigned int dwCatalogEntryId;
  _WSAPROTOCOLCHAIN ProtocolChain;
  int iVersion;
  int iAddressFamily;
  int iMaxSockAddr;
  int iMinSockAddr;
  int iSocketType;
  int iProtocol;
  int iProtocolMaxOffset;
  int iNetworkByteOrder;
  int iSecurityScheme;
  unsigned int dwMessageSize;
  unsigned int dwProviderReserved;
  unsigned __int16 szProtocol[256];
};





struct _RemotableHandle
{
  int fContext;
  _RemotableHandle___MIDL_IWinTypes_0009 u;
};


struct __declspec(align(8)) _DISK_HISTOGRAM
{
  _LARGE_INTEGER DiskSize;
  _LARGE_INTEGER Start;
  _LARGE_INTEGER End;
  _LARGE_INTEGER Average;
  _LARGE_INTEGER AverageRead;
  _LARGE_INTEGER AverageWrite;
  unsigned int Granularity;
  unsigned int Size;
  unsigned int ReadCount;
  unsigned int WriteCount;
  _HISTOGRAM_BUCKET *Histogram;
};


struct tagEMRSETWORLDTRANSFORM
{
  tagEMR emr;
  tagXFORM xform;
};



struct _CERT_POLICY_MAPPINGS_INFO
{
  unsigned int cPolicyMapping;
  _CERT_POLICY_MAPPING *rgPolicyMapping;
};


struct ISynchronizeHandle : IUnknown
{
};


struct ISynchronizeEvent : ISynchronizeHandle
{
};


struct _CMSG_MAIL_LIST_ENCRYPT_INFO
{
  unsigned int cbSize;
  unsigned int dwRecipientIndex;
  _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  _CRYPTOAPI_BLOB EncryptedKey;
  unsigned int dwFlags;
};



struct IViewObject : IUnknown
{
};




struct _WIN32_FILE_ATTRIBUTE_DATA
{
  unsigned int dwFileAttributes;
  _FILETIME ftCreationTime;
  _FILETIME ftLastAccessTime;
  _FILETIME ftLastWriteTime;
  unsigned int nFileSizeHigh;
  unsigned int nFileSizeLow;
};




struct _PRINTER_INFO_9A
{
  _devicemodeA *pDevMode;
};


struct _JOB_INFO_1W
{
  unsigned int JobId;
  unsigned __int16 *pPrinterName;
  unsigned __int16 *pMachineName;
  unsigned __int16 *pUserName;
  unsigned __int16 *pDocument;
  unsigned __int16 *pDatatype;
  unsigned __int16 *pStatus;
  unsigned int Status;
  unsigned int Priority;
  unsigned int Position;
  unsigned int TotalPages;
  unsigned int PagesPrinted;
  _SYSTEMTIME Submitted;
};



struct _CRL_DIST_POINT_NAME
{
  unsigned int dwDistPointNameChoice;
  _CERT_ALT_NAME_INFO FullName;
};



struct tagEMRPOLYLINE16
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int cpts;
  tagPOINTS apts[1];
};


struct IEncodingFilterFactory : IUnknown
{
};


struct tagMENUBARINFO
{
  unsigned int cbSize;
  tagRECT rcBar;
  HMENU__ *hMenu;
  HWND__ *hwndMenu;
  __int32 fBarFocused : 1;
  __int32 fFocused : 1;
};


struct __declspec(align(4)) tagINTERFACEINFO
{
  IUnknown *pUnk;
  _GUID iid;
  unsigned __int16 wMethod;
};


struct IXMLDOMEntityReference : IXMLDOMNode
{
};


struct _ACCESS_DENIED_CALLBACK_OBJECT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int Flags;
  _GUID ObjectType;
  _GUID InheritedObjectType;
  unsigned int SidStart;
};


struct _DRAGINFOA
{
  unsigned int uSize;
  tagPOINT pt;
  int fNC;
  char *lpFileList;
  unsigned int grfKeyState;
};



struct _CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY
{
  char *pszObjId;
  unsigned int cValue;
  _CRYPTOAPI_BLOB *rgValue;
};


struct tagEMRSCALEVIEWPORTEXTEX
{
  tagEMR emr;
  int xNum;
  int xDenom;
  int yNum;
  int yDenom;
};


struct tagJOYCAPS2W
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned __int16 szPname[32];
  unsigned int wXmin;
  unsigned int wXmax;
  unsigned int wYmin;
  unsigned int wYmax;
  unsigned int wZmin;
  unsigned int wZmax;
  unsigned int wNumButtons;
  unsigned int wPeriodMin;
  unsigned int wPeriodMax;
  unsigned int wRmin;
  unsigned int wRmax;
  unsigned int wUmin;
  unsigned int wUmax;
  unsigned int wVmin;
  unsigned int wVmax;
  unsigned int wCaps;
  unsigned int wMaxAxes;
  unsigned int wNumAxes;
  unsigned int wMaxButtons;
  unsigned __int16 szRegKey[32];
  unsigned __int16 szOEMVxD[260];
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};



struct tagEMRELLIPSE
{
  tagEMR emr;
  _RECTL rclBox;
};


struct _ACCESS_ALLOWED_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int SidStart;
};


struct tagENHMETAHEADER
{
  unsigned int iType;
  unsigned int nSize;
  _RECTL rclBounds;
  _RECTL rclFrame;
  unsigned int dSignature;
  unsigned int nVersion;
  unsigned int nBytes;
  unsigned int nRecords;
  unsigned __int16 nHandles;
  unsigned __int16 sReserved;
  unsigned int nDescription;
  unsigned int offDescription;
  unsigned int nPalEntries;
  tagSIZE szlDevice;
  tagSIZE szlMillimeters;
  unsigned int cbPixelFormat;
  unsigned int offPixelFormat;
  unsigned int bOpenGL;
  tagSIZE szlMicrometers;
};


struct _CMSG_CTRL_KEY_AGREE_DECRYPT_PARA
{
  unsigned int cbSize;
  unsigned int hCryptProv;
  unsigned int dwKeySpec;
  _CMSG_KEY_AGREE_RECIPIENT_INFO *pKeyAgree;
  unsigned int dwRecipientIndex;
  unsigned int dwRecipientEncryptedKeyIndex;
  _CRYPT_BIT_BLOB OriginatorPublicKey;
};



struct OPENCARD_SEARCH_CRITERIAW
{
  unsigned int dwStructSize;
  unsigned __int16 *lpstrGroupNames;
  unsigned int nMaxGroupNames;
  _GUID *rgguidInterfaces;
  unsigned int cguidInterfaces;
  unsigned __int16 *lpstrCardNames;
  unsigned int nMaxCardNames;
  int (__stdcall *lpfnCheck)(unsigned int, unsigned int, void *);
  unsigned int (__stdcall *lpfnConnect)(unsigned int, unsigned __int16 *, unsigned __int16 *, void *);
  void (__stdcall *lpfnDisconnect)(unsigned int, unsigned int, void *);
  void *pvUserData;
  unsigned int dwShareMode;
  unsigned int dwPreferredProtocols;
};


struct _PRINTER_NOTIFY_INFO
{
  unsigned int Version;
  unsigned int Flags;
  unsigned int Count;
  _PRINTER_NOTIFY_INFO_DATA aData[1];
};


struct ISurrogate : IUnknown
{
};


struct CaseInsensitiveStringBase<PStringBase<unsigned short> > : PStringBase<unsigned short>
{
};


struct _WSANAMESPACE_INFOW
{
  _GUID NSProviderId;
  unsigned int dwNameSpace;
  int fActive;
  unsigned int dwVersion;
  unsigned __int16 *lpszIdentifier;
};



struct tagMCI_OVLY_WINDOW_PARMSA
{
  unsigned int dwCallback;
  HWND__ *hWnd;
  unsigned int nCmdShow;
  const char *lpstrText;
};


struct _CERT_AUTHORITY_INFO_ACCESS
{
  unsigned int cAccDescr;
  _CERT_ACCESS_DESCRIPTION *rgAccDescr;
};


struct _WSANSClassInfoW
{
  unsigned __int16 *lpszName;
  unsigned int dwNameSpace;
  unsigned int dwValueType;
  unsigned int dwValueSize;
  void *lpValue;
};


struct __declspec(align(4)) tagEMRSETICMPROFILE
{
  tagEMR emr;
  unsigned int dwFlags;
  unsigned int cbName;
  unsigned int cbData;
  char Data[1];
};


struct _CERT_GENERAL_SUBTREE
{
  _CERT_ALT_NAME_ENTRY Base;
  unsigned int dwMinimum;
  int fMaximum;
  unsigned int dwMaximum;
};

struct IDataFilter : IUnknown
{
};


struct ITypeLib : IUnknown
{
};


struct ITypeLib2 : ITypeLib
{
};


struct PSRefBufferStatistics<unsigned short> : ReferenceCountTemplate<268435456,0>
{
  unsigned int m_size;
  unsigned int m_hash;
  unsigned int m_len;
};


struct PSRefBuffer<unsigned short> : PSRefBufferStatistics<unsigned short>, PSRefBufferCharData<unsigned short>
{
};


struct PStringSimple<unsigned short>
{
  PSRefBufferCharData<unsigned short> *m_charbuffer;
};


struct _HTTPSPolicyCallbackData
{
  $B5432B5766EACA8D7A891B0C9CA17601 ___u0;
  unsigned int dwAuthType;
  unsigned int fdwChecks;
  unsigned __int16 *pwszServerName;
};


struct tagWAVEINCAPSW
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  unsigned __int16 szPname[32];
  unsigned int dwFormats;
  unsigned __int16 wChannels;
  unsigned __int16 wReserved1;
};


struct tagMCI_OVLY_LOAD_PARMSA
{
  unsigned int dwCallback;
  const char *lpfilename;
  tagRECT rc;
};


struct _wireSAFEARR_BSTR
{
  unsigned int Size;
  _FLAGGED_WORD_BLOB **aBstr;
};


struct _wireSAFEARR_UNKNOWN
{
  unsigned int Size;
  IUnknown **apUnknown;
};


struct _wireSAFEARR_DISPATCH
{
  unsigned int Size;
  IDispatch **apDispatch;
};


struct _wireSAFEARR_VARIANT
{
  unsigned int Size;
  _wireVARIANT **aVariant;
};


union _wireSAFEARRAY_UNION___MIDL_IOleAutomationTypes_0001
{
  _wireSAFEARR_BSTR BstrStr;
  _wireSAFEARR_UNKNOWN UnknownStr;
  _wireSAFEARR_DISPATCH DispatchStr;
  _wireSAFEARR_VARIANT VariantStr;
  _wireSAFEARR_BRECORD RecordStr;
  _wireSAFEARR_HAVEIID HaveIidStr;
  _BYTE_SIZEDARR ByteStr;
  _SHORT_SIZEDARR WordStr;
  _LONG_SIZEDARR LongStr;
  _HYPER_SIZEDARR HyperStr;
};


union $C87DFA00798C9C4882F594BD343E8A2C
{
  __int64 llVal;
  int lVal;
  char bVal;
  __int16 iVal;
  float fltVal;
  long double dblVal;
  __int16 boolVal;
  int scode;
  tagCY cyVal;
  long double date;
  _FLAGGED_WORD_BLOB *bstrVal;
  IUnknown *punkVal;
  IDispatch *pdispVal;
  _wireSAFEARRAY **parray;
  _wireBRECORD *brecVal;
  char *pbVal;
  __int16 *piVal;
  int *plVal;
  __int64 *pllVal;
  float *pfltVal;
  long double *pdblVal;
  __int16 *pboolVal;
  int *pscode;
  tagCY *pcyVal;
  long double *pdate;
  _FLAGGED_WORD_BLOB **pbstrVal;
  IUnknown **ppunkVal;
  IDispatch **ppdispVal;
  _wireSAFEARRAY ***pparray;
  _wireVARIANT **pvarVal;
  char cVal;
  unsigned __int16 uiVal;
  unsigned int ulVal;
  unsigned __int64 ullVal;
  int intVal;
  unsigned int uintVal;
  tagDEC decVal;
  tagDEC *pdecVal;
  char *pcVal;
  unsigned __int16 *puiVal;
  unsigned int *pulVal;
  unsigned __int64 *pullVal;
  int *pintVal;
  unsigned int *puintVal;
};


struct _wireVARIANT
{
  unsigned int clSize;
  unsigned int rpcReserved;
  unsigned __int16 vt;
  unsigned __int16 wReserved1;
  unsigned __int16 wReserved2;
  unsigned __int16 wReserved3;
  $C87DFA00798C9C4882F594BD343E8A2C ___u6;
};


struct __unaligned __declspec(align(4)) _wireSAFEARRAY_UNION
{
  unsigned int sfType;
  _wireSAFEARRAY_UNION___MIDL_IOleAutomationTypes_0001 u;
};


struct _wireSAFEARRAY
{
  unsigned __int16 cDims;
  unsigned __int16 fFeatures;
  unsigned int cbElements;
  unsigned int cLocks;
  __unaligned __declspec(align(1)) _wireSAFEARRAY_UNION uArrayStructs;
  tagSAFEARRAYBOUND rgsabound[1];
};


struct _CMSG_CTRL_ADD_SIGNER_UNAUTH_ATTR_PARA
{
  unsigned int cbSize;
  unsigned int dwSignerIndex;
  _CRYPTOAPI_BLOB blob;
};

struct tagMCI_OVLY_OPEN_PARMSA
{
  unsigned int dwCallback;
  unsigned int wDeviceID;
  const char *lpstrDeviceType;
  const char *lpstrElementName;
  const char *lpstrAlias;
  unsigned int dwStyle;
  HWND__ *hWndParent;
};


struct _CMC_TAGGED_CERT_REQUEST
{
  unsigned int dwBodyPartID;
  _CRYPTOAPI_BLOB SignedCertRequest;
};


struct _CMC_TAGGED_REQUEST
{
  unsigned int dwTaggedRequestChoice;
  _CMC_TAGGED_CERT_REQUEST *pTaggedCertRequest;
};


struct _userFLAG_STGMEDIUM
{
  int ContextFlags;
  int fPassOwnership;
  _userSTGMEDIUM Stgmed;
};


struct IInternetBindInfo : IUnknown
{
};


struct tagMENUGETOBJECTINFO
{
  unsigned int dwFlags;
  unsigned int uPos;
  HMENU__ *hmenu;
  void *riid;
  void *pvObj;
};



struct _CTL_VERIFY_USAGE_PARA
{
  unsigned int cbSize;
  _CRYPTOAPI_BLOB ListIdentifier;
  unsigned int cCtlStore;
  void **rghCtlStore;
  unsigned int cSignerStore;
  void **rghSignerStore;
};


struct HashTable<Turbine_GUID,Interface *,1>
{
  HashTable<Turbine_GUID,Interface *,1>Vtbl *vfptr;
  IntrusiveHashTable<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *,1> m_intrusiveTable;
};


struct HashTable<Turbine_GUID,Interface *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<Turbine_GUID,Interface *,1> *this, unsigned int);
};


struct HashIterator<Turbine_GUID,Interface *,1>
{
  IntrusiveHashIterator<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *,1> m_iter;
};


struct _CMSG_KEY_TRANS_ENCRYPT_INFO
{
  unsigned int cbSize;
  unsigned int dwRecipientIndex;
  _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  _CRYPTOAPI_BLOB EncryptedKey;
  unsigned int dwFlags;
};


struct _CRYPT_RETRIEVE_AUX_INFO
{
  unsigned int cbSize;
  _FILETIME *pLastSyncTime;
};


struct _IMAGE_SECTION_HEADER
{
  char Name[8];
  $22971E98F1DCAE471B592EC18ECB1551 Misc;
  unsigned int VirtualAddress;
  unsigned int SizeOfRawData;
  unsigned int PointerToRawData;
  unsigned int PointerToRelocations;
  unsigned int PointerToLinenumbers;
  unsigned __int16 NumberOfRelocations;
  unsigned __int16 NumberOfLinenumbers;
  unsigned int Characteristics;
};


struct tagPOLYTEXTW
{
  int x;
  int y;
  unsigned int n;
  const unsigned __int16 *lpstr;
  unsigned int uiFlags;
  tagRECT rcl;
  int *pdx;
};


struct OPENCARDNAMEW
{
  unsigned int dwStructSize;
  HWND__ *hwndOwner;
  unsigned int hSCardContext;
  unsigned __int16 *lpstrGroupNames;
  unsigned int nMaxGroupNames;
  unsigned __int16 *lpstrCardNames;
  unsigned int nMaxCardNames;
  _GUID *rgguidInterfaces;
  unsigned int cguidInterfaces;
  unsigned __int16 *lpstrRdr;
  unsigned int nMaxRdr;
  unsigned __int16 *lpstrCard;
  unsigned int nMaxCard;
  const unsigned __int16 *lpstrTitle;
  unsigned int dwFlags;
  void *pvUserData;
  unsigned int dwShareMode;
  unsigned int dwPreferredProtocols;
  unsigned int dwActiveProtocol;
  unsigned int (__stdcall *lpfnConnect)(unsigned int, unsigned __int16 *, unsigned __int16 *, void *);
  int (__stdcall *lpfnCheck)(unsigned int, unsigned int, void *);
  void (__stdcall *lpfnDisconnect)(unsigned int, unsigned int, void *);
  unsigned int hCardHandle;
};


struct _CRL_REVOCATION_INFO
{
  _CRL_ENTRY *pCrlEntry;
  _CRL_CONTEXT *pCrlContext;
  _CERT_CHAIN_CONTEXT *pCrlIssuerChain;
};


struct _BIDI_REQUEST_DATA
{
  unsigned int dwReqNumber;
  unsigned __int16 *pSchema;
  _BIDI_DATA data;
};


struct _BIDI_REQUEST_CONTAINER
{
  unsigned int Version;
  unsigned int Flags;
  unsigned int Count;
  _BIDI_REQUEST_DATA aData[1];
};


struct IDropSource : IUnknown
{
};


struct InstanceDiviner
{
  PStringBase<char> m_NameStem;
  void *m_hMutex;
  unsigned int m_Index;
};


struct tagFINDREPLACEW
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HINSTANCE__ *hInstance;
  unsigned int Flags;
  unsigned __int16 *lpstrFindWhat;
  unsigned __int16 *lpstrReplaceWith;
  unsigned __int16 wFindWhatLen;
  unsigned __int16 wReplaceWithLen;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const unsigned __int16 *lpTemplateName;
};

struct _QualityOfService
{
  _flowspec SendingFlowspec;
  _flowspec ReceivingFlowspec;
  _WSABUF ProviderSpecific;
};

struct tagICONMETRICSA
{
  unsigned int cbSize;
  int iHorzSpacing;
  int iVertSpacing;
  int iTitleWrap;
  tagLOGFONTA lfFont;
};


struct wavehdr_tag
{
  char *lpData;
  unsigned int dwBufferLength;
  unsigned int dwBytesRecorded;
  unsigned int dwUser;
  unsigned int dwFlags;
  unsigned int dwLoops;
  wavehdr_tag *lpNext;
  unsigned int reserved;
};


struct tagMETAFILEPICT
{
  int mm;
  int xExt;
  int yExt;
  HMETAFILE__ *hMF;
};


struct ITypeComp : IUnknown
{
};


struct ITypeInfo : IUnknown
{
};


union tagBINDPTR
{
  tagFUNCDESC *lpfuncdesc;
  tagVARDESC *lpvardesc;
  ITypeComp *lptcomp;
};


struct _FOCUS_EVENT_RECORD
{
  int bSetFocus;
};


union $E5EC784184F61E2D1DB730C15D65FB8F
{
  void *hIcon;
  void *hMonitor;
};


struct _SHELLEXECUTEINFOA
{
  unsigned int cbSize;
  unsigned int fMask;
  HWND__ *hwnd;
  const char *lpVerb;
  const char *lpFile;
  const char *lpParameters;
  const char *lpDirectory;
  int nShow;
  HINSTANCE__ *hInstApp;
  void *lpIDList;
  const char *lpClass;
  HKEY__ *hkeyClass;
  unsigned int dwHotKey;
  $E5EC784184F61E2D1DB730C15D65FB8F ___u13;
  void *hProcess;
};


struct _CRYPT_HASH_MESSAGE_PARA
{
  unsigned int cbSize;
  unsigned int dwMsgEncodingType;
  unsigned int hCryptProv;
  _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  void *pvHashAuxInfo;
};


struct _CERT_BASIC_CONSTRAINTS_INFO
{
  _CRYPT_BIT_BLOB SubjectType;
  int fPathLenConstraint;
  unsigned int dwPathLenConstraint;
  unsigned int cSubtreesConstraint;
  _CRYPTOAPI_BLOB *rgSubtreesConstraint;
};



struct _WSAServiceClassInfoW
{
  _GUID *lpServiceClassId;
  unsigned __int16 *lpszServiceClassName;
  unsigned int dwCount;
  _WSANSClassInfoW *lpClassInfos;
};



struct _NTFS_STATISTICS
{
  unsigned int LogFileFullExceptions;
  unsigned int OtherExceptions;
  unsigned int MftReads;
  unsigned int MftReadBytes;
  unsigned int MftWrites;
  unsigned int MftWriteBytes;
  $7C924936EBD9EC1686BC09279527D86D MftWritesUserLevel;
  unsigned __int16 MftWritesFlushForLogFileFull;
  unsigned __int16 MftWritesLazyWriter;
  unsigned __int16 MftWritesUserRequest;
  unsigned int Mft2Writes;
  unsigned int Mft2WriteBytes;
  $7C924936EBD9EC1686BC09279527D86D Mft2WritesUserLevel;
  unsigned __int16 Mft2WritesFlushForLogFileFull;
  unsigned __int16 Mft2WritesLazyWriter;
  unsigned __int16 Mft2WritesUserRequest;
  unsigned int RootIndexReads;
  unsigned int RootIndexReadBytes;
  unsigned int RootIndexWrites;
  unsigned int RootIndexWriteBytes;
  unsigned int BitmapReads;
  unsigned int BitmapReadBytes;
  unsigned int BitmapWrites;
  unsigned int BitmapWriteBytes;
  unsigned __int16 BitmapWritesFlushForLogFileFull;
  unsigned __int16 BitmapWritesLazyWriter;
  unsigned __int16 BitmapWritesUserRequest;
  $C659373CAE9F9E74FDBB0AC0E68C9269 BitmapWritesUserLevel;
  unsigned int MftBitmapReads;
  unsigned int MftBitmapReadBytes;
  unsigned int MftBitmapWrites;
  unsigned int MftBitmapWriteBytes;
  unsigned __int16 MftBitmapWritesFlushForLogFileFull;
  unsigned __int16 MftBitmapWritesLazyWriter;
  unsigned __int16 MftBitmapWritesUserRequest;
  $7C924936EBD9EC1686BC09279527D86D MftBitmapWritesUserLevel;
  unsigned int UserIndexReads;
  unsigned int UserIndexReadBytes;
  unsigned int UserIndexWrites;
  unsigned int UserIndexWriteBytes;
  unsigned int LogFileReads;
  unsigned int LogFileReadBytes;
  unsigned int LogFileWrites;
  unsigned int LogFileWriteBytes;
  $A9C6E7883B3D8C453F1F4181F1444E70 Allocate;
};

struct _SYSTEM_ALARM_CALLBACK_OBJECT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int Flags;
  _GUID ObjectType;
  _GUID InheritedObjectType;
  unsigned int SidStart;
};

struct _CMC_ADD_ATTRIBUTES_INFO
{
  unsigned int dwCmcDataReference;
  unsigned int cCertReference;
  unsigned int *rgdwCertReference;
  unsigned int cAttribute;
  _CRYPT_ATTRIBUTE *rgAttribute;
};


struct IMPORT_OBJECT_HEADER
{
  unsigned __int16 Sig1;
  unsigned __int16 Sig2;
  unsigned __int16 Version;
  unsigned __int16 Machine;
  unsigned int TimeDateStamp;
  unsigned int SizeOfData;
  $4CFA15F5CE489CDF0BD78DFB308FEF36 ___u6;
  unsigned __int16 Type : 2;
  unsigned __int16 NameType : 3;
  unsigned __int16 Reserved : 11;
};


struct tagMSGBOXPARAMSW
{
  unsigned int cbSize;
  HWND__ *hwndOwner;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpszText;
  const unsigned __int16 *lpszCaption;
  unsigned int dwStyle;
  const unsigned __int16 *lpszIcon;
  unsigned int dwContextHelpId;
  void (__stdcall *lpfnMsgBoxCallback)(tagHELPINFO *);
  unsigned int dwLanguageId;
};


struct IContinue : IUnknown
{
};


struct _CRYPT_TIME_STAMP_REQUEST_INFO
{
  char *pszTimeStampAlgorithm;
  char *pszContentType;
  _CRYPTOAPI_BLOB Content;
  unsigned int cAttribute;
  _CRYPT_ATTRIBUTE *rgAttribute;
};


struct _CERT_AUTHORITY_KEY_ID2_INFO
{
  _CRYPTOAPI_BLOB KeyId;
  _CERT_ALT_NAME_INFO AuthorityCertIssuer;
  _CRYPTOAPI_BLOB AuthorityCertSerialNumber;
};


struct _WSAServiceClassInfoA
{
  _GUID *lpServiceClassId;
  char *lpszServiceClassName;
  unsigned int dwCount;
  _WSANSClassInfoA *lpClassInfos;
};


struct tagNONCLIENTMETRICSA
{
  unsigned int cbSize;
  int iBorderWidth;
  int iScrollWidth;
  int iScrollHeight;
  int iCaptionWidth;
  int iCaptionHeight;
  tagLOGFONTA lfCaptionFont;
  int iSmCaptionWidth;
  int iSmCaptionHeight;
  tagLOGFONTA lfSmCaptionFont;
  int iMenuWidth;
  int iMenuHeight;
  tagLOGFONTA lfMenuFont;
  tagLOGFONTA lfStatusFont;
  tagLOGFONTA lfMessageFont;
};


struct PStringBaseIter_Common<unsigned short>
{
  PStringBaseIter_Common<unsigned short>Vtbl *vfptr;
  unsigned int curr;
  unsigned int mark;
};


struct PStringBaseIter_Common<unsigned short>Vtbl
{
  unsigned int (__thiscall *GetStrLen)(PStringBaseIter_Common<unsigned short> *this);
  const unsigned __int16 *(__thiscall *IndexToConstPointer)(PStringBaseIter_Common<unsigned short> *this, unsigned int);
  unsigned __int16 (__thiscall *IndexToChar)(PStringBaseIter_Common<unsigned short> *this, unsigned int);
  PStringBase<unsigned short> *(__thiscall *GetPStringPtr)(PStringBaseIter_Common<unsigned short> *this);
};


struct PStringBaseIter<unsigned short> : PStringBaseIter_Common<unsigned short>
{
  PStringBase<unsigned short> *pstring_ptr;
};


struct tagCREATESTRUCTW
{
  void *lpCreateParams;
  HINSTANCE__ *hInstance;
  HMENU__ *hMenu;
  HWND__ *hwndParent;
  int cy;
  int cx;
  int y;
  int x;
  int style;
  const unsigned __int16 *lpszName;
  const unsigned __int16 *lpszClass;
  unsigned int dwExStyle;
};


struct tagCBT_CREATEWNDW
{
  tagCREATESTRUCTW *lpcs;
  HWND__ *hwndInsertAfter;
};


struct ICancelMethodCalls : IUnknown
{
};


struct _RPC_SERVER_INTERFACE
{
  unsigned int Length;
  _RPC_SYNTAX_IDENTIFIER InterfaceId;
  _RPC_SYNTAX_IDENTIFIER TransferSyntax;
  RPC_DISPATCH_TABLE *DispatchTable;
  unsigned int RpcProtseqEndpointCount;
  _RPC_PROTSEQ_ENDPOINT *RpcProtseqEndpoint;
  void *DefaultManagerEpv;
  const void *InterpreterInfo;
  unsigned int Flags;
};


struct IServiceProvider : IUnknown
{
};


struct IStdMarshalInfo : IUnknown
{
};


struct FLASHWINFO
{
  unsigned int cbSize;
  HWND__ *hwnd;
  unsigned int dwFlags;
  unsigned int uCount;
  unsigned int dwTimeout;
};


struct _PERF_DATA_BLOCK
{
  unsigned __int16 Signature[4];
  unsigned int LittleEndian;
  unsigned int Version;
  unsigned int Revision;
  unsigned int TotalByteLength;
  unsigned int HeaderLength;
  unsigned int NumObjectTypes;
  int DefaultObject;
  _SYSTEMTIME SystemTime;
  _LARGE_INTEGER PerfTime;
  _LARGE_INTEGER PerfFreq;
  _LARGE_INTEGER PerfTime100nSec;
  unsigned int SystemNameLength;
  unsigned int SystemNameOffset;
};

struct _CERT_AUTHORITY_KEY_ID_INFO
{
  _CRYPTOAPI_BLOB KeyId;
  _CRYPTOAPI_BLOB CertIssuer;
  _CRYPTOAPI_BLOB CertSerialNumber;
};


struct _CERT_PAIR
{
  _CRYPTOAPI_BLOB Forward;
  _CRYPTOAPI_BLOB Reverse;
};


union $7A727655067EA29DD1B3C3F7D79CBFD1
{
  void *FiberData;
  unsigned int Version;
};


struct _NT_TIB
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
  void *StackBase;
  void *StackLimit;
  void *SubSystemTib;
  $7A727655067EA29DD1B3C3F7D79CBFD1 ___u4;
  void *ArbitraryUserPointer;
  _NT_TIB *Self;
};


struct tagWINDOWPLACEMENT
{
  unsigned int length;
  unsigned int flags;
  unsigned int showCmd;
  tagPOINT ptMinPosition;
  tagPOINT ptMaxPosition;
  tagRECT rcNormalPosition;
};



struct _ENUM_SERVICE_STATUSW
{
  unsigned __int16 *lpServiceName;
  unsigned __int16 *lpDisplayName;
  _SERVICE_STATUS ServiceStatus;
};


struct _CROSS_CERT_DIST_POINTS_INFO
{
  unsigned int dwSyncDeltaTime;
  unsigned int cDistPoint;
  _CERT_ALT_NAME_INFO *rgDistPoint;
};


struct __declspec(align(4)) _CHANGER_MOVE_MEDIUM
{
  _CHANGER_ELEMENT Transport;
  _CHANGER_ELEMENT Source;
  _CHANGER_ELEMENT Destination;
  char Flip;
};


struct FileNodeName_UInt64 : IFileNodeName
{
  unsigned __int64 m_name;
};


struct FileNodeName_LongHex : FileNodeName_UInt64
{
};



struct _ENCRYPTION_CERTIFICATE_LIST
{
  unsigned int nUsers;
  _ENCRYPTION_CERTIFICATE **pUsers;
};


struct tagMULTI_QI
{
  _GUID *pIID;
  IUnknown *pItf;
  HRESULT hr;
};



struct tagMENUITEMINFOW
{
  unsigned int cbSize;
  unsigned int fMask;
  unsigned int fType;
  unsigned int fState;
  unsigned int wID;
  HMENU__ *hSubMenu;
  HBITMAP__ *hbmpChecked;
  HBITMAP__ *hbmpUnchecked;
  unsigned int dwItemData;
  unsigned __int16 *dwTypeData;
  unsigned int cch;
  HBITMAP__ *hbmpItem;
};


struct IHttpNegotiate : IUnknown
{
};


struct IHttpNegotiate2 : IHttpNegotiate
{
};


struct IPersistFile : IPersist
{
};


struct _CRL_DIST_POINT
{
  _CRL_DIST_POINT_NAME DistPointName;
  _CRYPT_BIT_BLOB ReasonFlags;
  _CERT_ALT_NAME_INFO CRLIssuer;
};


struct _CRL_DIST_POINTS_INFO
{
  unsigned int cDistPoint;
  _CRL_DIST_POINT *rgDistPoint;
};


struct _PERF_BIN
{
  unsigned int NumberOfBins;
  unsigned int TypeOfBin;
  _BIN_RANGE BinsRanges[1];
};


struct _UUID_VECTOR
{
  unsigned int Count;
  _GUID *Uuid[1];
};

struct tagDISPPARAMS
{
  tagVARIANT *rgvarg;
  int *rgdispidNamedArgs;
  unsigned int cArgs;
  unsigned int cNamedArgs;
};

struct __declspec(align(4)) tagMONHSZSTRUCTW
{
  unsigned int cb;
  int fsAction;
  unsigned int dwTime;
  HSZ__ *hsz;
  void *hTask;
  unsigned __int16 str[1];
};


struct _SCONTEXT_QUEUE
{
  unsigned int NumberOfObjects;
  $3FA64165D15A4602C29B2D9B0DA4A5E9 **ArrayOfObjects;
};


struct IMallocSpy : IUnknown
{
};


struct get_storage_type<32>
{
};

struct _RPC_TRANSFER_SYNTAX
{
  _GUID Uuid;
  unsigned __int16 VersMajor;
  unsigned __int16 VersMinor;
};


struct _CRYPT_VERIFY_MESSAGE_PARA
{
  unsigned int cbSize;
  unsigned int dwMsgAndCertEncodingType;
  unsigned int hCryptProv;
  _CERT_CONTEXT *(__stdcall *pfnGetSignerCertificate)(void *, unsigned int, _CERT_INFO *, void *);
  void *pvGetArg;
};


struct _SC_ACTION
{
  _SC_ACTION_TYPE Type;
  unsigned int Delay;
};


struct _SERVICE_FAILURE_ACTIONSA
{
  unsigned int dwResetPeriod;
  char *lpRebootMsg;
  char *lpCommand;
  unsigned int cActions;
  _SC_ACTION *lpsaActions;
};

struct _CMSG_SIGNER_ENCODE_INFO
{
  unsigned int cbSize;
  _CERT_INFO *pCertInfo;
  unsigned int hCryptProv;
  unsigned int dwKeySpec;
  _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  void *pvHashAuxInfo;
  unsigned int cAuthAttr;
  _CRYPT_ATTRIBUTE *rgAuthAttr;
  unsigned int cUnauthAttr;
  _CRYPT_ATTRIBUTE *rgUnauthAttr;
};


struct _CMSG_SIGNED_ENCODE_INFO
{
  unsigned int cbSize;
  unsigned int cSigners;
  _CMSG_SIGNER_ENCODE_INFO *rgSigners;
  unsigned int cCertEncoded;
  _CRYPTOAPI_BLOB *rgCertEncoded;
  unsigned int cCrlEncoded;
  _CRYPTOAPI_BLOB *rgCrlEncoded;
};

struct tagEMREXTCREATEPEN
{
  tagEMR emr;
  unsigned int ihPen;
  unsigned int offBmi;
  unsigned int cbBmi;
  unsigned int offBits;
  unsigned int cbBits;
  tagEXTLOGPEN elp;
};


struct tagMCI_OVLY_SAVE_PARMSA
{
  unsigned int dwCallback;
  const char *lpfilename;
  tagRECT rc;
};


struct IBindHost : IUnknown
{
};

struct __unaligned __declspec(align(2)) _IMAGE_RELOCATION
{
  $66A2FC5ED47CB5912809650DAB14E256 ___u0;
  unsigned int SymbolTableIndex;
  unsigned __int16 Type;
};

union $D11897121FA469DB9A286CEED6604466
{
  _PROPSHEETPAGEA *ppsp;
  _PSP **phpage;
};


union $9B13CF1907B2A2D6EEDADD7F82C9448F
{
  HBITMAP__ *hbmWatermark;
  const char *pszbmWatermark;
};


union $CB51224B72799F923F5CF25F0E639B42
{
  HBITMAP__ *hbmHeader;
  const char *pszbmHeader;
};


struct _PROPSHEETHEADERA
{
  unsigned int dwSize;
  unsigned int dwFlags;
  HWND__ *hwndParent;
  HINSTANCE__ *hInstance;
  $864CA0437219939730246E31FD89420B ___u4;
  const char *pszCaption;
  unsigned int nPages;
  $E3CAD8411F77256CCB020CE77D197F57 ___u7;
  $D11897121FA469DB9A286CEED6604466 ___u8;
  int (__stdcall *pfnCallback)(HWND__ *, unsigned int, int);
  $9B13CF1907B2A2D6EEDADD7F82C9448F ___u10;
  HPALETTE__ *hplWatermark;
  $CB51224B72799F923F5CF25F0E639B42 ___u12;
};


struct tagCHOOSEFONTW
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HDC__ *hDC;
  tagLOGFONTW *lpLogFont;
  int iPointSize;
  unsigned int Flags;
  unsigned int rgbColors;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const unsigned __int16 *lpTemplateName;
  HINSTANCE__ *hInstance;
  unsigned __int16 *lpszStyle;
  unsigned __int16 nFontType;
  unsigned __int16 ___MISSING_ALIGNMENT__;
  int nSizeMin;
  int nSizeMax;
};


struct tagWNDCLASSW
{
  unsigned int style;
  int (__stdcall *lpfnWndProc)(HWND__ *, unsigned int, unsigned int, int);
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE__ *hInstance;
  HICON__ *hIcon;
  HICON__ *hCursor;
  HBRUSH__ *hbrBackground;
  const unsigned __int16 *lpszMenuName;
  const unsigned __int16 *lpszClassName;
};


struct get_storage_type<64>
{
};


struct _MOUSE_EVENT_RECORD
{
  _COORD dwMousePosition;
  unsigned int dwButtonState;
  unsigned int dwControlKeyState;
  unsigned int dwEventFlags;
};

struct ISupportErrorInfo : IUnknown
{
};


struct tagMCI_OVLY_LOAD_PARMSW
{
  unsigned int dwCallback;
  const unsigned __int16 *lpfilename;
  tagRECT rc;
};

struct IXMLDOMCharacterData : IXMLDOMNode
{
};

struct _CONNECTDLGSTRUCTW
{
  unsigned int cbStructure;
  HWND__ *hwndOwner;
  _NETRESOURCEW *lpConnRes;
  unsigned int dwFlags;
  unsigned int dwDevNum;
};


struct tagWINDOWPOS
{
  HWND__ *hwnd;
  HWND__ *hwndInsertAfter;
  int x;
  int y;
  int cx;
  int cy;
  unsigned int flags;
};


struct tagNCCALCSIZE_PARAMS
{
  tagRECT rgrc[3];
  tagWINDOWPOS *lppos;
};


struct __declspec(align(4)) tagMONHSZSTRUCTA
{
  unsigned int cb;
  int fsAction;
  unsigned int dwTime;
  HSZ__ *hsz;
  void *hTask;
  char str[1];
};


struct $A8190F32671C10E499C9152ECD0E18EB
{
  HWND__ *hWnd;
  unsigned int uMsg;
  unsigned int context;
};


struct $DDAE3F5DF773C3225C713D84A4FB06FB
{
  _OVERLAPPED *lpOverlapped;
};


struct $6492E435AA1AD81AEB2AB01FC9CD0C9C
{
  _OVERLAPPED *lpOverlapped;
  void (__stdcall *lpfnCompletionProc)(unsigned int, unsigned int, _OVERLAPPED *, unsigned int);
};


struct $291C7B13150DF1ADA705841E5D09C730
{
  _OVERLAPPED *lpOverlapped;
  void *hPort;
  unsigned int Key;
};


union $10618F2B72024E68298047DD578E3DD7
{
  $A8190F32671C10E499C9152ECD0E18EB WindowMessage;
  $DDAE3F5DF773C3225C713D84A4FB06FB Event;
  $6492E435AA1AD81AEB2AB01FC9CD0C9C Apc;
  $291C7B13150DF1ADA705841E5D09C730 Port;
};


struct _WSACOMPLETION
{
  _WSACOMPLETIONTYPE Type;
  $10618F2B72024E68298047DD578E3DD7 Parameters;
};

struct tagCOMPAREITEMSTRUCT
{
  unsigned int CtlType;
  unsigned int CtlID;
  HWND__ *hwndItem;
  unsigned int itemID1;
  unsigned int itemData1;
  unsigned int itemID2;
  unsigned int itemData2;
  unsigned int dwLocaleId;
};

struct $34B59DAB5B49726BB742663EC7E89904
{
  unsigned int songptrpos;
};


union $69FE64524C3A11954EA258521C7E807E
{
  unsigned int ms;
  unsigned int sample;
  unsigned int cb;
  unsigned int ticks;
  $F10B7358C253DFE8D052089404AC5994 smpte;
  $34B59DAB5B49726BB742663EC7E89904 midi;
};


struct mmtime_tag
{
  unsigned int wType;
  $69FE64524C3A11954EA258521C7E807E u;
};


struct tagCHOOSECOLORW
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HWND__ *hInstance;
  unsigned int rgbResult;
  unsigned int *lpCustColors;
  unsigned int Flags;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const unsigned __int16 *lpTemplateName;
};


struct tagMCI_OVLY_WINDOW_PARMSW
{
  unsigned int dwCallback;
  HWND__ *hWnd;
  unsigned int nCmdShow;
  const unsigned __int16 *lpstrText;
};


struct _CERT_USAGE_MATCH
{
  unsigned int dwType;
  _CTL_USAGE Usage;
};


struct _CERT_CHAIN_PARA
{
  unsigned int cbSize;
  _CERT_USAGE_MATCH RequestedUsage;
};


struct IMarshal : IUnknown
{
};


struct IMarshal2 : IMarshal
{
};


struct IClassFactory : IUnknown
{
};


struct ICallFactory : IUnknown
{
};


struct IRootStorage : IUnknown
{
};


struct _ENUM_SERVICE_STATUSA
{
  char *lpServiceName;
  char *lpDisplayName;
  _SERVICE_STATUS ServiceStatus;
};


struct tagEMRRESTOREDC
{
  tagEMR emr;
  int iRelative;
};


struct IXMLDSOControl : IDispatch
{
};


struct _MESSAGE_RESOURCE_DATA
{
  unsigned int NumberOfBlocks;
  _MESSAGE_RESOURCE_BLOCK Blocks[1];
};


struct tagIMECHARPOSITION
{
  unsigned int dwSize;
  unsigned int dwCharPos;
  tagPOINT pt;
  unsigned int cLineHeight;
  tagRECT rcDocument;
};


struct $76AB39CB3BA6462F2B11E491095E1B7A
{
  _SINGLE_LIST_ENTRY Next;
  unsigned __int16 Depth;
  unsigned __int16 Sequence;
};


union _SLIST_HEADER
{
  unsigned __int64 Alignment;
  $76AB39CB3BA6462F2B11E491095E1B7A __s1;
};

struct tagCURSORINFO
{
  unsigned int cbSize;
  unsigned int flags;
  HICON__ *hCursor;
  tagPOINT ptScreenPos;
};

struct ITypeChangeEvents : IUnknown
{
};

struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION
{
  _JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
  _IO_COUNTERS IoInfo;
  unsigned int ProcessMemoryLimit;
  unsigned int JobMemoryLimit;
  unsigned int PeakProcessMemoryUsed;
  unsigned int PeakJobMemoryUsed;
};


struct tagPSDW
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  void *hDevMode;
  void *hDevNames;
  unsigned int Flags;
  tagPOINT ptPaperSize;
  tagRECT rtMinMargin;
  tagRECT rtMargin;
  HINSTANCE__ *hInstance;
  int lCustData;
  unsigned int (__stdcall *lpfnPageSetupHook)(HWND__ *, unsigned int, unsigned int, int);
  unsigned int (__stdcall *lpfnPagePaintHook)(HWND__ *, unsigned int, unsigned int, int);
  const unsigned __int16 *lpPageSetupTemplateName;
  void *hPageSetupTemplate;
};


struct _DRIVER_INFO_6A
{
  unsigned int cVersion;
  char *pName;
  char *pEnvironment;
  char *pDriverPath;
  char *pDataFile;
  char *pConfigFile;
  char *pHelpFile;
  char *pDependentFiles;
  char *pMonitorName;
  char *pDefaultDataType;
  char *pszzPreviousNames;
  _FILETIME ftDriverDate;
  unsigned __int64 dwlDriverVersion;
  char *pszMfgName;
  char *pszOEMUrl;
  char *pszHardwareID;
  char *pszProvider;
};


struct AsyncIMultiQI : IUnknown
{
};


struct _tagBINDINFO
{
  unsigned int cbSize;
  unsigned __int16 *szExtraInfo;
  tagSTGMEDIUM stgmedData;
  unsigned int grfBindInfoF;
  unsigned int dwBindVerb;
  unsigned __int16 *szCustomVerb;
  unsigned int cbstgmedData;
  unsigned int dwOptions;
  unsigned int dwOptionsFlags;
  unsigned int dwCodePage;
  _SECURITY_ATTRIBUTES securityAttributes;
  _GUID iid;
  IUnknown *pUnk;
  unsigned int dwReserved;
};


struct _WGLSWAP
{
  HDC__ *hdc;
  unsigned int uiFlags;
};


struct _SHELLEXECUTEINFOW
{
  unsigned int cbSize;
  unsigned int fMask;
  HWND__ *hwnd;
  const unsigned __int16 *lpVerb;
  const unsigned __int16 *lpFile;
  const unsigned __int16 *lpParameters;
  const unsigned __int16 *lpDirectory;
  int nShow;
  HINSTANCE__ *hInstApp;
  void *lpIDList;
  const unsigned __int16 *lpClass;
  HKEY__ *hkeyClass;
  unsigned int dwHotKey;
  $E5EC784184F61E2D1DB730C15D65FB8F ___u13;
  void *hProcess;
};


struct _CERT_NAME_CONSTRAINTS_INFO
{
  unsigned int cPermittedSubtree;
  _CERT_GENERAL_SUBTREE *rgPermittedSubtree;
  unsigned int cExcludedSubtree;
  _CERT_GENERAL_SUBTREE *rgExcludedSubtree;
};



struct tagCLEANLOCALSTORAGE
{
  IUnknown *pInterface;
  void *pStorage;
  unsigned int flags;
};


struct tagCHARSETINFO
{
  unsigned int ciCharset;
  unsigned int ciACP;
  tagFONTSIGNATURE fs;
};


struct tagTTPOLYGONHEADER
{
  unsigned int cb;
  unsigned int dwType;
  tagPOINTFX pfxStart;
};


struct IBindProtocol : IUnknown
{
};


struct IBinding : IUnknown
{
};



struct _CERT_DSS_PARAMETERS
{
  _CRYPTOAPI_BLOB p;
  _CRYPTOAPI_BLOB q;
  _CRYPTOAPI_BLOB g;
};


struct _NCB
{
  char ncb_command;
  char ncb_retcode;
  char ncb_lsn;
  char ncb_num;
  char *ncb_buffer;
  unsigned __int16 ncb_length;
  char ncb_callname[16];
  char ncb_name[16];
  char ncb_rto;
  char ncb_sto;
  void (__stdcall *ncb_post)(_NCB *);
  char ncb_lana_num;
  char ncb_cmd_cplt;
  char ncb_reserve[10];
  void *ncb_event;
};


struct _CERT_CHAIN
{
  unsigned int cCerts;
  _CRYPTOAPI_BLOB *certs;
  _CRYPT_KEY_PROV_INFO keyLocatorInfo;
};


struct IMAGE_COR20_HEADER
{
  unsigned int cb;
  unsigned __int16 MajorRuntimeVersion;
  unsigned __int16 MinorRuntimeVersion;
  _IMAGE_DATA_DIRECTORY MetaData;
  unsigned int Flags;
  unsigned int EntryPointToken;
  _IMAGE_DATA_DIRECTORY Resources;
  _IMAGE_DATA_DIRECTORY StrongNameSignature;
  _IMAGE_DATA_DIRECTORY CodeManagerTable;
  _IMAGE_DATA_DIRECTORY VTableFixups;
  _IMAGE_DATA_DIRECTORY ExportAddressTableJumps;
  _IMAGE_DATA_DIRECTORY ManagedNativeHeader;
};


struct __unaligned __declspec(align(2)) _SHFILEOPSTRUCTA
{
  HWND__ *hwnd;
  unsigned int wFunc;
  const char *pFrom;
  const char *pTo;
  unsigned __int16 fFlags;
  int fAnyOperationsAborted;
  void *hNameMappings;
  const char *lpszProgressTitle;
};

struct _CHANGER_ELEMENT_STATUS
{
  _CHANGER_ELEMENT Element;
  _CHANGER_ELEMENT SrcElementAddress;
  unsigned int Flags;
  unsigned int ExceptionCode;
  char TargetId;
  char Lun;
  unsigned __int16 Reserved;
  char PrimaryVolumeID[36];
  char AlternateVolumeID[36];
};


struct _READ_ELEMENT_ADDRESS_INFO
{
  unsigned int NumberOfElements;
  _CHANGER_ELEMENT_STATUS ElementStatus[1];
};



struct _STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *> : _STL__Bit_iterator_base
{
};


struct _STL_allocator<unsigned int>
{
};


struct _STL__STLP_alloc_proxy<unsigned int *,unsigned int,_STL_allocator<unsigned int> > : _STL_allocator<unsigned int>
{
  unsigned int *_M_data;
};


struct _STL__Bvector_base<_STL_allocator<bool> >
{
  _STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *> _M_start;
  _STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *> _M_finish;
  _STL__STLP_alloc_proxy<unsigned int *,unsigned int,_STL_allocator<unsigned int> > _M_end_of_storage;
};


struct _STL_vector<bool,_STL_allocator<bool> > : _STL__Bvector_base<_STL_allocator<bool> >
{
};


struct _STL_forward_iterator_tag : _STL_input_iterator_tag
{
};


struct _STL_bidirectional_iterator_tag : _STL_forward_iterator_tag
{
};


struct _STL_random_access_iterator_tag : _STL_bidirectional_iterator_tag
{
};


struct _STL__Bit_iter<bool,bool const *> : _STL__Bit_iterator_base
{
};


struct _STL_reverse_iterator<_STL__Bit_iter<bool,bool const *>,bool,bool,bool const *,int>
{
  _STL__Bit_iter<bool,bool const *> __current;
};


struct _STL_reverse_iterator<_STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *>,bool,_STL__Bit_reference,_STL__Bit_reference *,int>
{
  _STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *> __current;
};

struct _STL___true_type
{
};


struct _STL__Is_integer<int>
{
};


struct _STL___type_traits_aux<1>
{
};


struct _STL___type_traits<int> : _STL___type_traits_aux<1>
{
};


struct _STL_allocator<void>
{
};


struct _STL___type_traits<unsigned char> : _STL___type_traits_aux<1>
{
};


struct _STL__STLP_mutex_spin<0>
{
};


struct _STL___type_traits<long> : _STL___type_traits_aux<1>
{
};


struct _STL__PointerShim
{
};


struct _STL___type_traits<unsigned char *> : _STL___type_traits_aux<1>
{
};


struct _STL___type_traits<char> : _STL___type_traits_aux<1>
{
};


struct _STL__Is_integer<unsigned int>
{
};


struct _STL_output_iterator_tag
{
};


struct _STL_allocator<unsigned char *>
{
};


struct _STL__STLP_alloc_proxy<unsigned char * *,unsigned char *,_STL_allocator<unsigned char *> > : _STL_allocator<unsigned char *>
{
  char **_M_data;
};


struct _STL__Vector_base<unsigned char *,_STL_allocator<unsigned char *> >
{
  char **_M_start;
  char **_M_finish;
  _STL__STLP_alloc_proxy<unsigned char * *,unsigned char *,_STL_allocator<unsigned char *> > _M_end_of_storage;
};


struct _STL__Node_Alloc_Lock<1,0>
{
};


struct _STL__STLP_mutex_base
{
  volatile int _M_lock;
};


struct _STL__IsPtr<_STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *> >
{
};


struct _STL_unary_function<unsigned long,unsigned long>
{
};


struct _STL__Is_integer<__int64>
{
};


struct _STL___node_alloc<1,0>
{
};


struct _STL__Node_alloc_obj
{
  _STL__Node_alloc_obj *_M_free_list_link;
};


struct _STL__IsPtr<unsigned char *>
{
};


struct _STL__Is_integer<signed char>
{
};


struct _STL__Is_integer<long>
{
};


struct _STL___bool2type<1>
{
};


struct _STL___new_alloc
{
};


struct _STL___type_traits<float> : _STL___type_traits_aux<1>
{
};


struct _STL_iterator<_STL_output_iterator_tag,void,void,void,void>
{
};


struct _STL_allocator<bool>_rebind<bool>
{
};


struct _STL_allocator<bool>_rebind<unsigned int>
{
};


struct _STL___type_traits<unsigned short> : _STL___type_traits_aux<1>
{
};


struct _STL__Is_integer<unsigned __int64>
{
};


struct _STL_vector<unsigned char *,_STL_allocator<unsigned char *> > : _STL__Vector_base<unsigned char *,_STL_allocator<unsigned char *> >
{
};


struct _STL___false_type
{
};


struct _STL___type_traits<double> : _STL___type_traits_aux<1>
{
};


struct _STL___bool2type<0>
{
};


struct _STL_output_iterator : _STL_iterator<_STL_output_iterator_tag,void,void,void,void>
{
};


struct _STL__BothPtrType<_STL__Bit_iter<bool,bool const *>,_STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *> >
{
};


struct _STL_subtractive_rng : _STL_unary_function<unsigned long,unsigned long>
{
  unsigned int _M_table[55];
  unsigned int _M_index1;
  unsigned int _M_index2;
};


struct _STL__IsPtr<_STL__Bit_iter<bool,bool const *> >
{
};


struct _STL__Is_integer<unsigned char>
{
};


struct _STL___type_traits<unsigned int> : _STL___type_traits_aux<1>
{
};


struct _STL__Alloc_traits<unsigned int,_STL_allocator<bool> >
{
};


struct _STL___type_traits<unsigned long> : _STL___type_traits_aux<1>
{
};


struct _STL__Is_integer<char>
{
};


struct _STL___type_traits<bool> : _STL___type_traits_aux<1>
{
};


struct _STL_allocator<unsigned char *>_rebind<unsigned char *>
{
};


struct _STL__Alloc_traits<unsigned char *,_STL_allocator<unsigned char *> >
{
};


struct _STL___type_traits<unsigned __int64> : _STL___type_traits_aux<1>
{
};


struct _STL__Is_integer<unsigned long>
{
};


struct _STL___type_traits_aux<0>
{
};


struct _STL__STLP_mutex : _STL__STLP_mutex_base
{
};


struct _STL__Is_integer<bool>
{
};


struct _STL__BothPtrType<_STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *>,_STL__Bit_iter<_STL__Bit_reference,_STL__Bit_reference *> >
{
};


struct _STL__STLP_auto_lock
{
  _STL__STLP_mutex_base *_M_lock;
};


struct _STL__Land3<_STL___true_type,_STL___true_type,_STL___true_type>
{
};


struct _STL___type_traits<long double> : _STL___type_traits_aux<1>
{
};


struct _STL__Is_integer<short>
{
};


struct _STL__Alloc_traits<bool,_STL_allocator<bool> >
{
};


struct _STL__Land3<_STL___false_type,_STL___false_type,_STL___true_type>
{
};


struct _STL___less_2<unsigned long,unsigned long>
{
};


struct _STL___type_traits<signed char> : _STL___type_traits_aux<1>
{
};


struct _STL___type_traits<__int64> : _STL___type_traits_aux<1>
{
};


struct _STL__Is_integer<unsigned short>
{
};


struct _STL__Refcount_Base
{
  volatile int _M_ref_count;
};


struct _STL___type_traits<short> : _STL___type_traits_aux<1>
{
};


struct _CRYPT_KEY_SIGN_MESSAGE_PARA
{
  unsigned int cbSize;
  unsigned int dwMsgAndCertEncodingType;
  unsigned int hCryptProv;
  unsigned int dwKeySpec;
  _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  void *pvHashAuxInfo;
  _CRYPT_ALGORITHM_IDENTIFIER PubKeyAlgorithm;
};


struct IOleInPlaceObject : IOleWindow
{
};


struct tagEMRPLGBLT
{
  tagEMR emr;
  _RECTL rclBounds;
  _POINTL aptlDest[3];
  int xSrc;
  int ySrc;
  int cxSrc;
  int cySrc;
  tagXFORM xformSrc;
  unsigned int crBkColorSrc;
  unsigned int iUsageSrc;
  unsigned int offBmiSrc;
  unsigned int cbBmiSrc;
  unsigned int offBitsSrc;
  unsigned int cbBitsSrc;
  int xMask;
  int yMask;
  unsigned int iUsageMask;
  unsigned int offBmiMask;
  unsigned int cbBmiMask;
  unsigned int offBitsMask;
  unsigned int cbBitsMask;
};


struct _CMSG_HASHED_ENCODE_INFO
{
  unsigned int cbSize;
  unsigned int hCryptProv;
  _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  void *pvHashAuxInfo;
};


struct _DRIVE_LAYOUT_INFORMATION
{
  unsigned int PartitionCount;
  unsigned int Signature;
  _PARTITION_INFORMATION PartitionEntry[1];
};

struct _ENCRYPTION_CERTIFICATE_HASH
{
  unsigned int cbTotalLength;
  _SID *pUserSid;
  _EFS_HASH_BLOB *pHash;
  unsigned __int16 *lpDisplayInformation;
};


struct _ENCRYPTION_CERTIFICATE_HASH_LIST
{
  unsigned int nCert_Hash;
  _ENCRYPTION_CERTIFICATE_HASH **pUsers;
};

struct IXMLDOMElement : IXMLDOMNode
{
};


struct tagEMRCREATEMONOBRUSH
{
  tagEMR emr;
  unsigned int ihBrush;
  unsigned int iUsage;
  unsigned int offBmi;
  unsigned int cbBmi;
  unsigned int offBits;
  unsigned int cbBits;
};


union $3DB947FB3C116E5A2AEEBB0E9DD98DCD
{
  char *AnsiString;
  unsigned __int16 *UnicodeString;
  int LVal;
  __int16 SVal;
  unsigned __int64 PVal;
  tagBinaryParam BVal;
};


struct tagRPC_EE_INFO_PARAM
{
  tagExtendedErrorParamTypes ParameterType;
  $3DB947FB3C116E5A2AEEBB0E9DD98DCD u;
};



struct tagENUMLOGFONTEXA
{
  tagLOGFONTA elfLogFont;
  char elfFullName[64];
  char elfStyle[32];
  char elfScript[32];
};




struct tagStorageLayout
{
  unsigned int LayoutType;
  unsigned __int16 *pwcsElementName;
  _LARGE_INTEGER cOffset;
  _LARGE_INTEGER cBytes;
};


struct _GLYPHMETRICS
{
  unsigned int gmBlackBoxX;
  unsigned int gmBlackBoxY;
  tagPOINT gmptGlyphOrigin;
  __int16 gmCellIncX;
  __int16 gmCellIncY;
};



struct __declspec(align(4)) _FORMAT_EX_PARAMETERS
{
  _MEDIA_TYPE MediaType;
  unsigned int StartCylinderNumber;
  unsigned int EndCylinderNumber;
  unsigned int StartHeadNumber;
  unsigned int EndHeadNumber;
  unsigned __int16 FormatGapLength;
  unsigned __int16 SectorsPerTrack;
  unsigned __int16 SectorNumber[1];
};

struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION
{
  _LARGE_INTEGER TotalUserTime;
  _LARGE_INTEGER TotalKernelTime;
  _LARGE_INTEGER ThisPeriodTotalUserTime;
  _LARGE_INTEGER ThisPeriodTotalKernelTime;
  unsigned int TotalPageFaultCount;
  unsigned int TotalProcesses;
  unsigned int ActiveProcesses;
  unsigned int TotalTerminatedProcesses;
};


struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION
{
  _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
  _IO_COUNTERS IoInfo;
};


struct tagEMRSETMITERLIMIT
{
  tagEMR emr;
  float eMiterLimit;
};


struct tagEMRCREATEBRUSHINDIRECT
{
  tagEMR emr;
  unsigned int ihBrush;
  tagLOGBRUSH32 lb;
};




struct _CERT_DH_PARAMETERS
{
  _CRYPTOAPI_BLOB p;
  _CRYPTOAPI_BLOB g;
};


struct IInternetSecurityManager : IUnknown
{
};


struct IInternetSecurityMgrSite : IUnknown
{
};


union $01E08005B54EA45B04F6895D286FEE08
{
  _EXCEPTION_DEBUG_INFO Exception;
  _CREATE_THREAD_DEBUG_INFO CreateThread;
  _CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
  _EXIT_THREAD_DEBUG_INFO ExitThread;
  _EXIT_PROCESS_DEBUG_INFO ExitProcess;
  _LOAD_DLL_DEBUG_INFO LoadDll;
  _UNLOAD_DLL_DEBUG_INFO UnloadDll;
  _OUTPUT_DEBUG_STRING_INFO DebugString;
  _RIP_INFO RipInfo;
};


struct _DEBUG_EVENT
{
  unsigned int dwDebugEventCode;
  unsigned int dwProcessId;
  unsigned int dwThreadId;
  $01E08005B54EA45B04F6895D286FEE08 u;
};




struct _SHFILEINFOA
{
  HICON__ *hIcon;
  int iIcon;
  unsigned int dwAttributes;
  char szDisplayName[260];
  char szTypeName[80];
};

struct tagTYPEATTR
{
  _GUID guid;
  unsigned int lcid;
  unsigned int dwReserved;
  int memidConstructor;
  int memidDestructor;
  unsigned __int16 *lpstrSchema;
  unsigned int cbSizeInstance;
  tagTYPEKIND typekind;
  unsigned __int16 cFuncs;
  unsigned __int16 cVars;
  unsigned __int16 cImplTypes;
  unsigned __int16 cbSizeVft;
  unsigned __int16 cbAlignment;
  unsigned __int16 wTypeFlags;
  unsigned __int16 wMajorVerNum;
  unsigned __int16 wMinorVerNum;
  tagTYPEDESC tdescAlias;
  tagIDLDESC idldescType;
};


struct PSRefBufferStatistics<char> : ReferenceCountTemplate<268435456,0>
{
  unsigned int m_size;
  unsigned int m_hash;
  unsigned int m_len;
};


struct PSRefBuffer<char> : PSRefBufferStatistics<char>, PSRefBufferCharData<char>
{
};


struct SmartArray<PStringBase<char>,1>
{
  PStringBase<char> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct PStringBaseArray<char> : SmartArray<PStringBase<char>,1>
{
};


struct _TOKEN_STATISTICS
{
  _LUID TokenId;
  _LUID AuthenticationId;
  _LARGE_INTEGER ExpirationTime;
  _TOKEN_TYPE TokenType;
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  unsigned int DynamicCharged;
  unsigned int DynamicAvailable;
  unsigned int GroupCount;
  unsigned int PrivilegeCount;
  _LUID ModifiedId;
};


struct tagMIXERLINECONTROLSA
{
  unsigned int cbStruct;
  unsigned int dwLineID;
  $476D211351DA30503E50D2F0E6E515B0 ___u2;
  unsigned int cControls;
  unsigned int cbmxctrl;
  tagMIXERCONTROLA *pamxctrl;
};


struct IXMLDOMComment : IXMLDOMCharacterData
{
};

struct tagQUERYCONTEXT
{
  unsigned int dwContext;
  tagCSPLATFORM Platform;
  unsigned int Locale;
  unsigned int dwVersionHi;
  unsigned int dwVersionLo;
};


struct _PRIVILEGE_SET
{
  unsigned int PrivilegeCount;
  unsigned int Control;
  _LUID_AND_ATTRIBUTES Privilege[1];
};


struct _TAPE_GET_POSITION
{
  unsigned int Type;
  unsigned int Partition;
  _LARGE_INTEGER Offset;
};


struct _CERT_CHAIN_POLICY_STATUS
{
  unsigned int cbSize;
  unsigned int dwError;
  int lChainIndex;
  int lElementIndex;
  void *pvExtraPolicyStatus;
};


struct _CRYPT_PKCS8_EXPORT_PARAMS
{
  unsigned int hCryptProv;
  unsigned int dwKeySpec;
  char *pszPrivateKeyObjId;
  int (__stdcall *pEncryptPrivateKeyFunc)(_CRYPT_ALGORITHM_IDENTIFIER *, _CRYPTOAPI_BLOB *, char *, unsigned int *, void *);
  void *pVoidEncryptFunc;
};


struct _tagHIT_LOGGING_INFO
{
  unsigned int dwStructSize;
  char *lpszLoggedUrlName;
  _SYSTEMTIME StartTime;
  _SYSTEMTIME EndTime;
  char *lpszExtendedInfo;
};


struct tagMCI_LOAD_PARMSW
{
  unsigned int dwCallback;
  const unsigned __int16 *lpfilename;
};


struct IErrorInfo : IUnknown
{
};


struct tagCWPSTRUCT
{
  int lParam;
  unsigned int wParam;
  unsigned int message;
  HWND__ *hwnd;
};


struct tagALTTABINFO
{
  unsigned int cbSize;
  int cItems;
  int cColumns;
  int cRows;
  int iColFocus;
  int iRowFocus;
  int cxItem;
  int cyItem;
  tagPOINT ptStart;
};




struct __declspec(align(4)) tagEMRPOLYDRAW16
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int cpts;
  tagPOINTS apts[1];
  char abTypes[1];
};


struct __declspec(align(8)) _VERIFY_INFORMATION
{
  _LARGE_INTEGER StartingOffset;
  unsigned int Length;
};


struct IOleLink : IUnknown
{
};


struct _QOS_SHAPING_RATE
{
  QOS_OBJECT_HDR ObjectHdr;
  unsigned int ShapingRate;
};


struct InterfacePtr<Interface>
{
  Interface *m_pInterface;
  TResult m_trStatus;
};


struct __declspec(align(4)) _TAPE_ERASE
{
  unsigned int Type;
  char Immediate;
};



struct IOleCache : IUnknown
{
};


struct tagEMRPOLYPOLYLINE16
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int nPolys;
  unsigned int cpts;
  unsigned int aPolyCounts[1];
  tagPOINTS apts[1];
};


struct _CRYPT_PRIVATE_KEY_INFO
{
  unsigned int Version;
  _CRYPT_ALGORITHM_IDENTIFIER Algorithm;
  _CRYPTOAPI_BLOB PrivateKey;
  _CRYPT_ATTRIBUTES *pAttributes;
};


struct _FLAG_STGMEDIUM
{
  int ContextFlags;
  int fPassOwnership;
  tagSTGMEDIUM Stgmed;
};


struct _PRINTER_INFO_9W
{
  _devicemodeW *pDevMode;
};


struct IViewObject2 : IViewObject
{
};


struct IRunnableObject : IUnknown
{
};


struct _FILE_PREFETCH
{
  unsigned int Type;
  unsigned int Count;
  unsigned __int64 Prefetch[1];
};


struct AutoGrowHashTable<Turbine_GUID,Interface *> : HashTable<Turbine_GUID,Interface *,1>
{
};


struct InterfaceSystem
{
  AutoGrowHashTable<Turbine_GUID,Interface *> m_classTable;
};

struct _ENUM_SERVICE_STATUS_PROCESSW
{
  unsigned __int16 *lpServiceName;
  unsigned __int16 *lpDisplayName;
  _SERVICE_STATUS_PROCESS ServiceStatusProcess;
};


struct IntrusiveHashTable<unsigned short,HashTableData<unsigned short,long> *,1>
{
  IntrusiveHashTable<unsigned short,HashTableData<unsigned short,long> *,1>Vtbl *vfptr;
  HashTableData<unsigned short,long> *m_aInplaceBuckets[23];
  HashTableData<unsigned short,long> **m_buckets;
  HashTableData<unsigned short,long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned short,HashTableData<unsigned short,long> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned short,HashTableData<unsigned short,long> *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned short,HashTableData<unsigned short,long> *>
{
  unsigned __int16 m_hashKey;
  HashTableData<unsigned short,long> *m_hashNext;
};


struct HashTableData<unsigned short,long> : IntrusiveHashData<unsigned short,HashTableData<unsigned short,long> *>
{
  int m_data;
};


struct IntrusiveHashIterator<unsigned short,HashTableData<unsigned short,long> *,1>
{
  IntrusiveHashTable<unsigned short,HashTableData<unsigned short,long> *,1> *m_currHashTable;
  HashTableData<unsigned short,long> **m_currBucket;
  HashTableData<unsigned short,long> *m_currElement;
};


struct IMultiQI : IUnknown
{
};



struct tagEMRCREATEPEN
{
  tagEMR emr;
  unsigned int ihPen;
  tagLOGPEN lopn;
};


struct _MIDL_STUBLESS_PROXY_INFO
{
  _MIDL_STUB_DESC *pStubDesc;
  const char *ProcFormatString;
  const unsigned __int16 *FormatStringOffset;
  _RPC_SYNTAX_IDENTIFIER *pTransferSyntax;
  unsigned int nCount;
  _MIDL_SYNTAX_INFO *pSyntaxInfo;
};



struct _KEY_EVENT_RECORD
{
  int bKeyDown;
  unsigned __int16 wRepeatCount;
  unsigned __int16 wVirtualKeyCode;
  unsigned __int16 wVirtualScanCode;
  $B34434447B6B77C7D7B1493D8CD04E6E uChar;
  unsigned int dwControlKeyState;
};


struct _PROPSHEETPAGEW_V1
{
  unsigned int dwSize;
  unsigned int dwFlags;
  HINSTANCE__ *hInstance;
  $70FB0961F5E6A70FCD54E042B35C595F ___u3;
  $5081588B5D1DA1CB8C31252C8B7A24CA ___u4;
  const unsigned __int16 *pszTitle;
  int (__stdcall *pfnDlgProc)(HWND__ *, unsigned int, unsigned int, int);
  int lParam;
  unsigned int (__stdcall *pfnCallback)(HWND__ *, unsigned int, _PROPSHEETPAGEW *);
  unsigned int *pcRefParent;
};


struct IXMLDOMDocumentType : IXMLDOMNode
{
};



struct _OBJECTID
{
  _GUID Lineage;
  unsigned int Uniquifier;
};


struct _SYSTEM_ALARM_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int SidStart;
};

struct tagEMRSETPIXELV
{
  tagEMR emr;
  _POINTL ptlPixel;
  unsigned int crColor;
};


struct _NT_TIB64
{
  unsigned __int64 ExceptionList;
  unsigned __int64 StackBase;
  unsigned __int64 StackLimit;
  unsigned __int64 SubSystemTib;
  $8662F439D215AAEDBB1F787C8B649648 ___u4;
  unsigned __int64 ArbitraryUserPointer;
  unsigned __int64 Self;
};

struct _CERT_NAME_VALUE
{
  unsigned int dwValueType;
  _CRYPTOAPI_BLOB Value;
};


struct _CPS_URLS
{
  unsigned __int16 *pszURL;
  _CRYPT_ALGORITHM_IDENTIFIER *pAlgorithm;
  _CRYPTOAPI_BLOB *pDigest;
};


struct IMessageFilter : IUnknown
{
};


struct __declspec(align(8)) _TAPE_GET_MEDIA_PARAMETERS
{
  _LARGE_INTEGER Capacity;
  _LARGE_INTEGER Remaining;
  unsigned int BlockSize;
  unsigned int PartitionCount;
  char WriteProtected;
};



struct IAsyncManager : IUnknown
{
};


struct IReleaseMarshalBuffers : IUnknown
{
};

struct _CRL_ISSUING_DIST_POINT
{
  _CRL_DIST_POINT_NAME DistPointName;
  int fOnlyContainsUserCerts;
  int fOnlyContainsCACerts;
  _CRYPT_BIT_BLOB OnlySomeReasonFlags;
  int fIndirectCRL;
};

struct IOleObject
{
  IOleObjectVtbl *lpVtbl;
};


struct IOleObjectVtbl
{
  int (__stdcall *QueryInterface)(IOleObject *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IOleObject *);
  unsigned int (__stdcall *Release)(IOleObject *);
  int (__stdcall *SetClientSite)(IOleObject *, IOleClientSite *);
  int (__stdcall *GetClientSite)(IOleObject *, IOleClientSite **);
  int (__stdcall *SetHostNames)(IOleObject *, const unsigned __int16 *, const unsigned __int16 *);
  int (__stdcall *Close)(IOleObject *, unsigned int);
  int (__stdcall *SetMoniker)(IOleObject *, unsigned int, IMoniker *);
  int (__stdcall *GetMoniker)(IOleObject *, unsigned int, unsigned int, IMoniker **);
  int (__stdcall *InitFromData)(IOleObject *, IDataObject *, int, unsigned int);
  int (__stdcall *GetClipboardData)(IOleObject *, unsigned int, IDataObject **);
  int (__stdcall *DoVerb)(IOleObject *, int, tagMSG *, IOleClientSite *, int, HWND__ *, tagRECT *);
  int (__stdcall *EnumVerbs)(IOleObject *, IEnumOLEVERB **);
  int (__stdcall *Update)(IOleObject *);
  int (__stdcall *IsUpToDate)(IOleObject *);
  int (__stdcall *GetUserClassID)(IOleObject *, _GUID *);
  int (__stdcall *GetUserType)(IOleObject *, unsigned int, unsigned __int16 **);
  int (__stdcall *SetExtent)(IOleObject *, unsigned int, tagSIZE *);
  int (__stdcall *GetExtent)(IOleObject *, unsigned int, tagSIZE *);
  int (__stdcall *Advise)(IOleObject *, IAdviseSink *, unsigned int *);
  int (__stdcall *Unadvise)(IOleObject *, unsigned int);
  int (__stdcall *EnumAdvise)(IOleObject *, IEnumSTATDATA **);
  int (__stdcall *GetMiscStatus)(IOleObject *, unsigned int, unsigned int *);
  int (__stdcall *SetColorScheme)(IOleObject *, tagLOGPALETTE *);
};


struct IOleClientSite
{
  IOleClientSiteVtbl *lpVtbl;
};


struct IEnumOLEVERB
{
  IEnumOLEVERBVtbl *lpVtbl;
};


struct IOleClientSiteVtbl
{
  int (__stdcall *QueryInterface)(IOleClientSite *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IOleClientSite *);
  unsigned int (__stdcall *Release)(IOleClientSite *);
  int (__stdcall *SaveObject)(IOleClientSite *);
  int (__stdcall *GetMoniker)(IOleClientSite *, unsigned int, unsigned int, IMoniker **);
  int (__stdcall *GetContainer)(IOleClientSite *, IOleContainer **);
  int (__stdcall *ShowObject)(IOleClientSite *);
  int (__stdcall *OnShowWindow)(IOleClientSite *, int);
  int (__stdcall *RequestNewObjectLayout)(IOleClientSite *);
};


struct IEnumOLEVERBVtbl
{
  int (__stdcall *QueryInterface)(IEnumOLEVERB *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IEnumOLEVERB *);
  unsigned int (__stdcall *Release)(IEnumOLEVERB *);
  int (__stdcall *Next)(IEnumOLEVERB *, unsigned int, tagOLEVERB *, unsigned int *);
  int (__stdcall *Skip)(IEnumOLEVERB *, unsigned int);
  int (__stdcall *Reset)(IEnumOLEVERB *);
  int (__stdcall *Clone)(IEnumOLEVERB *, IEnumOLEVERB **);
};



struct tagDIBSECTION
{
  tagBITMAP dsBm;
  tagBITMAPINFOHEADER dsBmih;
  unsigned int dsBitfields[3];
  void *dshSection;
  unsigned int dsOffset;
};


struct __declspec(align(4)) _WIN32_STREAM_ID
{
  unsigned int dwStreamId;
  unsigned int dwStreamAttributes;
  _LARGE_INTEGER Size;
  unsigned int dwStreamNameSize;
  unsigned __int16 cStreamName[1];
};


struct tagENUMLOGFONTEXW
{
  tagLOGFONTW elfLogFont;
  unsigned __int16 elfFullName[64];
  unsigned __int16 elfStyle[32];
  unsigned __int16 elfScript[32];
};
