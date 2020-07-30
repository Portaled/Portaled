

struct _tagRemBINDINFO
{
  unsigned int cbSize;
  unsigned __int16 *szExtraInfo;
  unsigned int grfBindInfoF;
  unsigned int dwBindVerb;
  unsigned __int16 *szCustomVerb;
  unsigned int cbstgmedData;
  unsigned int dwOptions;
  unsigned int dwOptionsFlags;
  unsigned int dwCodePage;
  _REMSECURITY_ATTRIBUTES securityAttributes;
  _GUID iid;
  IUnknown *pUnk;
  unsigned int dwReserved;
};


struct _EVENTSFORLOGFILE
{
  unsigned int ulSize;
  unsigned __int16 szLogicalLogFile[256];
  unsigned int ulNumRecords;
  _EVENTLOGRECORD pEventLogRecords[];
};


struct IXMLHttpRequest : IDispatch
{
};



struct _CRYPT_CSP_PROVIDER
{
  unsigned int dwKeySpec;
  unsigned __int16 *pwszProviderName;
  _CRYPT_BIT_BLOB Signature;
};


struct _ACCESS_DENIED_OBJECT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int Flags;
  _GUID ObjectType;
  _GUID InheritedObjectType;
  unsigned int SidStart;
};

struct _CTL_ANY_SUBJECT_INFO
{
  _CRYPT_ALGORITHM_IDENTIFIER SubjectAlgorithm;
  _CRYPTOAPI_BLOB SubjectIdentifier;
};


struct _NOTIFYICONDATAW
{
  unsigned int cbSize;
  HWND__ *hWnd;
  unsigned int uID;
  unsigned int uFlags;
  unsigned int uCallbackMessage;
  HICON__ *hIcon;
  unsigned __int16 szTip[128];
  unsigned int dwState;
  unsigned int dwStateMask;
  unsigned __int16 szInfo[256];
  $30417D6DC3305618FB171BBBD15A8541 ___u10;
  unsigned __int16 szInfoTitle[64];
  unsigned int dwInfoFlags;
  _GUID guidItem;
};


struct _PRIVKEYVER3
{
  unsigned int magic;
  unsigned int bitlenP;
  unsigned int bitlenQ;
  unsigned int bitlenJ;
  unsigned int bitlenX;
  _DSSSEED DSSSeed;
};



struct FileNodeName_PString : IFileNodeName
{
  PStringBase<char> m_name;
};


struct _FORMAT_PARAMETERS
{
  _MEDIA_TYPE MediaType;
  unsigned int StartCylinderNumber;
  unsigned int EndCylinderNumber;
  unsigned int StartHeadNumber;
  unsigned int EndHeadNumber;
};


struct _DRAGINFOW
{
  unsigned int uSize;
  tagPOINT pt;
  int fNC;
  unsigned __int16 *lpFileList;
  unsigned int grfKeyState;
};


struct tagIMEMENUITEMINFOW
{
  unsigned int cbSize;
  unsigned int fType;
  unsigned int fState;
  unsigned int wID;
  HBITMAP__ *hbmpChecked;
  HBITMAP__ *hbmpUnchecked;
  unsigned int dwItemData;
  unsigned __int16 szString[80];
  HBITMAP__ *hbmpItem;
};


struct _tagVersionHandle
{
};


struct tagEMRSETCOLORADJUSTMENT
{
  tagEMR emr;
  tagCOLORADJUSTMENT ColorAdjustment;
};


struct _CERT_NAME_INFO
{
  unsigned int cRDN;
  _CERT_RDN *rgRDN;
};


struct signed_storage_type<16>
{
};


struct tagNONCLIENTMETRICSW
{
  unsigned int cbSize;
  int iBorderWidth;
  int iScrollWidth;
  int iScrollHeight;
  int iCaptionWidth;
  int iCaptionHeight;
  tagLOGFONTW lfCaptionFont;
  int iSmCaptionWidth;
  int iSmCaptionHeight;
  tagLOGFONTW lfSmCaptionFont;
  int iMenuWidth;
  int iMenuHeight;
  tagLOGFONTW lfMenuFont;
  tagLOGFONTW lfStatusFont;
  tagLOGFONTW lfMessageFont;
};


struct _NDR_USER_MARSHAL_INFO
{
  unsigned int InformationLevel;
  _NDR_USER_MARSHAL_INFO_LEVEL1 Level1;
};


struct tagEMRSETVIEWPORTORGEX
{
  tagEMR emr;
  _POINTL ptlOrigin;
};


struct _SERVICE_TABLE_ENTRYA
{
  char *lpServiceName;
  void (__stdcall *lpServiceProc)(unsigned int, char **);
};

struct _RGNDATAHEADER
{
  unsigned int dwSize;
  unsigned int iType;
  unsigned int nCount;
  unsigned int nRgnSize;
  tagRECT rcBound;
};


struct __declspec(align(4)) _RGNDATA
{
  _RGNDATAHEADER rdh;
  char Buffer[1];
};


struct _CMSG_STREAM_INFO
{
  unsigned int cbContent;
  int (__stdcall *pfnStreamOutput)(const void *, char *, unsigned int, int);
  void *pvArg;
};


struct _CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO
{
  unsigned int cbSize;
  _CMSG_SIGNED_ENCODE_INFO SignedInfo;
  _CMSG_ENVELOPED_ENCODE_INFO EnvelopedInfo;
};


struct tagEMRSETTEXTCOLOR
{
  tagEMR emr;
  unsigned int crColor;
};



struct _AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA
{
  unsigned int cbSize;
  unsigned int dwRegPolicySettings;
  _CMSG_SIGNER_INFO *pSignerInfo;
};


struct IOleCache2 : IOleCache
{
};

struct ISynchronizeMutex : ISynchronize
{
};



struct tagDELETEITEMSTRUCT
{
  unsigned int CtlType;
  unsigned int CtlID;
  unsigned int itemID;
  HWND__ *hwndItem;
  unsigned int itemData;
};


struct tagHSZPAIR
{
  HSZ__ *hszSvc;
  HSZ__ *hszTopic;
};

struct _s__ThrowInfo
{
  unsigned int attributes;
  void (__cdecl *pmfnUnwind)();
  int (*pForwardCompat)(...);
  _s__CatchableTypeArray *pCatchableTypeArray;
};


struct tagMONITORINFOEXW : tagMONITORINFO
{
  unsigned __int16 szDevice[32];
};


union $43C20A614106E062FD3785E9387CFC92
{
  _SYSTEMTIME SystemTime;
  _FILETIME FileTime;
};


struct tagRPC_EXTENDED_ERROR_INFO
{
  unsigned int Version;
  unsigned __int16 *ComputerName;
  unsigned int ProcessID;
  $43C20A614106E062FD3785E9387CFC92 u;
  unsigned int GeneratingComponent;
  unsigned int Status;
  unsigned __int16 DetectionLocation;
  unsigned __int16 Flags;
  int NumberOfParameters;
  tagRPC_EE_INFO_PARAM Parameters[4];
};


struct IOleInPlaceFrame : IOleInPlaceUIWindow
{
};


struct _SYSTEM_POWER_POLICY
{
  unsigned int Revision;
  POWER_ACTION_POLICY PowerButton;
  POWER_ACTION_POLICY SleepButton;
  POWER_ACTION_POLICY LidClose;
  _SYSTEM_POWER_STATE LidOpenWake;
  unsigned int Reserved;
  POWER_ACTION_POLICY Idle;
  unsigned int IdleTimeout;
  char IdleSensitivity;
  char DynamicThrottle;
  char Spare2[2];
  _SYSTEM_POWER_STATE MinSleep;
  _SYSTEM_POWER_STATE MaxSleep;
  _SYSTEM_POWER_STATE ReducedLatencySleep;
  unsigned int WinLogonFlags;
  unsigned int Spare3;
  unsigned int DozeS4Timeout;
  unsigned int BroadcastCapacityResolution;
  SYSTEM_POWER_LEVEL DischargePolicy[4];
  unsigned int VideoTimeout;
  char VideoDimDisplay;
  unsigned int VideoReserved[3];
  unsigned int SpindownTimeout;
  char OptimizeForPower;
  char FanThrottleTolerance;
  char ForcedThrottle;
  char MinThrottle;
  POWER_ACTION_POLICY OverThrottled;
};


struct tagEMRMASKBLT
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
  int xMask;
  int yMask;
  unsigned int iUsageMask;
  unsigned int offBmiMask;
  unsigned int cbBmiMask;
  unsigned int offBitsMask;
  unsigned int cbBitsMask;
};


struct IAdviseSink2 : IAdviseSink
{
};


struct IOleAdviseHolder : IUnknown
{
};


struct tagEMRPIXELFORMAT
{
  tagEMR emr;
  tagPIXELFORMATDESCRIPTOR pfd;
};

struct _SYSTEM_AUDIT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int SidStart;
};


struct tagMCI_OVLY_RECT_PARMS
{
  unsigned int dwCallback;
  tagRECT rc;
};



struct ITypeInfo2 : ITypeInfo
{
};


struct __declspec(align(4)) tagTLIBATTR
{
  _GUID guid;
  unsigned int lcid;
  tagSYSKIND syskind;
  unsigned __int16 wMajorVerNum;
  unsigned __int16 wMinorVerNum;
  unsigned __int16 wLibFlags;
};


struct IEnumSTATSTG : IUnknown
{
};


struct tagSTATSTG
{
  unsigned __int16 *pwcsName;
  unsigned int type;
  _ULARGE_INTEGER cbSize;
  _FILETIME mtime;
  _FILETIME ctime;
  _FILETIME atime;
  unsigned int grfMode;
  unsigned int grfLocksSupported;
  _GUID clsid;
  unsigned int grfStateBits;
  unsigned int reserved;
};


struct PStringSimple<char>
{
  PSRefBufferCharData<char> *m_charbuffer;
};


struct tagMENUINFO
{
  unsigned int cbSize;
  unsigned int fMask;
  unsigned int dwStyle;
  unsigned int cyMax;
  HBRUSH__ *hbrBack;
  unsigned int dwContextHelpID;
  unsigned int dwMenuData;
};


struct CommandLineArg
{
  int ArgType;
  char ShortVersion;
  PStringBase<char> LongVersion;
  PStringBase<char> Description;
  void *VariableToModify;
  unsigned int ValueToStore;
  unsigned int UserData;
};


struct tagINTERFACEDATA
{
  tagMETHODDATA *pmethdata;
  unsigned int cMembers;
};


struct _CRYPTPROTECT_PROMPTSTRUCT
{
  unsigned int cbSize;
  unsigned int dwPromptFlags;
  HWND__ *hwndApp;
  const unsigned __int16 *szPrompt;
};


struct OPENCARDNAME_EXW
{
  unsigned int dwStructSize;
  unsigned int hSCardContext;
  HWND__ *hwndOwner;
  unsigned int dwFlags;
  const unsigned __int16 *lpstrTitle;
  const unsigned __int16 *lpstrSearchDesc;
  HICON__ *hIcon;
  OPENCARD_SEARCH_CRITERIAW *pOpenCardSearchCriteria;
  unsigned int (__stdcall *lpfnConnect)(unsigned int, unsigned __int16 *, unsigned __int16 *, void *);
  void *pvUserData;
  unsigned int dwShareMode;
  unsigned int dwPreferredProtocols;
  unsigned __int16 *lpstrRdr;
  unsigned int nMaxRdr;
  unsigned __int16 *lpstrCard;
  unsigned int nMaxCard;
  unsigned int dwActiveProtocol;
  unsigned int hCardHandle;
};


struct IExternalConnection : IUnknown
{
};


struct ArchiveVersionRow
{
  ArchiveVersionRowVtbl *vfptr;
  PrimitiveInplaceArray<ArchiveVersionRow_VersionEntry,8,1> m_aVersions;
};


struct ArchiveVersionRowVtbl
{
  unsigned int (__thiscall *GetVersionByToken)(ArchiveVersionRow *this, unsigned int);
};


struct AutoStoreVersionArchive_tagSerializeVersionRow : ArchiveInitializer
{
  unsigned int m_hSerialize;
  IDClass<_tagVersionHandle,32,0> m_hVersionRow;
  ArchiveVersionRow m_rowInitialData;
};


struct __declspec(align(4)) AutoStoreVersionArchive : Archive
{
  AutoStoreVersionArchive_tagSerializeVersionRow m_SerializeVersionRow;
  bool m_bOnSerializingDoneCalled;
};


struct _RTL_VERIFIER_PROVIDER_DESCRIPTOR
{
  unsigned int Length;
  _RTL_VERIFIER_DLL_DESCRIPTOR *ProviderDlls;
  void (__cdecl *ProviderDllLoadCallback)(unsigned __int16 *, void *, unsigned int, void *);
  void (__cdecl *ProviderDllUnloadCallback)(unsigned __int16 *, void *, unsigned int, void *);
  unsigned __int16 *VerifierImage;
  unsigned int VerifierFlags;
  unsigned int VerifierDebug;
};

struct __declspec(align(4)) FileNodeName_CellID : IFileNodeName
{
  IDClass<_tagCellID,16,65535> m_name;
};

struct IXMLDOMParseError : IDispatch
{
};


struct _CRYPT_SEQUENCE_OF_ANY
{
  unsigned int cValue;
  _CRYPTOAPI_BLOB *rgValue;
};


struct IMonikerProp : IUnknown
{
};


struct IEnumVARIANT : IUnknown
{
};

struct _SYSTEM_AUDIT_OBJECT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int Flags;
  _GUID ObjectType;
  _GUID InheritedObjectType;
  unsigned int SidStart;
};


struct tagMONCBSTRUCT
{
  unsigned int cb;
  unsigned int dwTime;
  void *hTask;
  unsigned int dwRet;
  unsigned int wType;
  unsigned int wFmt;
  HCONV__ *hConv;
  HSZ__ *hsz1;
  HSZ__ *hsz2;
  HDDEDATA__ *hData;
  unsigned int dwData1;
  unsigned int dwData2;
  tagCONVCONTEXT cc;
  unsigned int cbData;
  unsigned int Data[8];
};


struct _CRYPT_PKCS8_IMPORT_PARAMS
{
  _CRYPTOAPI_BLOB PrivateKey;
  int (__stdcall *pResolvehCryptProvFunc)(_CRYPT_PRIVATE_KEY_INFO *, unsigned int *, void *);
  void *pVoidResolveFunc;
  int (__stdcall *pDecryptPrivateKeyFunc)(_CRYPT_ALGORITHM_IDENTIFIER, _CRYPTOAPI_BLOB, char *, unsigned int *, void *);
  void *pVoidDecryptFunc;
};


struct __declspec(align(4)) tagEMRGDICOMMENT
{
  tagEMR emr;
  unsigned int cbData;
  char Data[1];
};


struct _CRYPT_ENCRYPT_MESSAGE_PARA
{
  unsigned int cbSize;
  unsigned int dwMsgEncodingType;
  unsigned int hCryptProv;
  _CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
  void *pvEncryptionAuxInfo;
  unsigned int dwFlags;
  unsigned int dwInnerContentType;
};


struct IBindStatusCallback : IUnknown
{
};


struct SerializationBehavior<SB_As32Bit_Compressed>
{
};


struct provider_info
{
  unsigned int (__cdecl *pi_R0_1val)(void *, val_context *, unsigned int, void *, unsigned int *, unsigned int);
  unsigned int (__cdecl *pi_R0_allvals)(void *, val_context *, unsigned int, void *, unsigned int *, unsigned int);
  unsigned int (__cdecl *pi_R3_1val)(void *, val_context *, unsigned int, void *, unsigned int *, unsigned int);
  unsigned int (__cdecl *pi_R3_allvals)(void *, val_context *, unsigned int, void *, unsigned int *, unsigned int);
  unsigned int pi_flags;
  void *pi_key_context;
};


struct ICodeInstall : IWindowForBindingUI
{
};


struct XMLDOMDocumentEvents : IDispatch
{
};

struct tagEMRSETCOLORSPACE
{
  tagEMR emr;
  unsigned int ihCS;
};



struct _JOB_INFO_2W
{
  unsigned int JobId;
  unsigned __int16 *pPrinterName;
  unsigned __int16 *pMachineName;
  unsigned __int16 *pUserName;
  unsigned __int16 *pDocument;
  unsigned __int16 *pNotifyName;
  unsigned __int16 *pDatatype;
  unsigned __int16 *pPrintProcessor;
  unsigned __int16 *pParameters;
  unsigned __int16 *pDriverName;
  _devicemodeW *pDevMode;
  unsigned __int16 *pStatus;
  void *pSecurityDescriptor;
  unsigned int Status;
  unsigned int Priority;
  unsigned int Position;
  unsigned int StartTime;
  unsigned int UntilTime;
  unsigned int TotalPages;
  unsigned int Size;
  _SYSTEMTIME Submitted;
  unsigned int Time;
  unsigned int PagesPrinted;
};



struct _CHANGER_SEND_VOLUME_TAG_INFORMATION
{
  _CHANGER_ELEMENT StartingElement;
  unsigned int ActionCode;
  char VolumeIDTemplate[40];
};



struct _CERT_REGISTRY_STORE_CLIENT_GPT_PARA
{
  HKEY__ *hKeyBase;
  unsigned __int16 *pwszRegPath;
};


struct IDummyHICONIncluder : IUnknown
{
};


struct tagENUMLOGFONTW
{
  tagLOGFONTW elfLogFont;
  unsigned __int16 elfFullName[64];
  unsigned __int16 elfStyle[32];
};


struct _PRINTER_INFO_3
{
  void *pSecurityDescriptor;
};


struct IRpcHelper : IUnknown
{
};


struct _CONSOLE_FONT_INFO
{
  unsigned int nFont;
  _COORD dwFontSize;
};

struct _DISCDLGSTRUCTW
{
  unsigned int cbStructure;
  HWND__ *hwndOwner;
  unsigned __int16 *lpLocalName;
  unsigned __int16 *lpRemoteName;
  unsigned int dwFlags;
};



struct IMalloc : IUnknown
{
};

struct type_infoVtbl
{
  void *(__thiscall *__vecDelDtor)(type_info *this, unsigned int);
};

struct _PERF_OBJECT_TYPE
{
  unsigned int TotalByteLength;
  unsigned int DefinitionLength;
  unsigned int HeaderLength;
  unsigned int ObjectNameTitleIndex;
  unsigned __int16 *ObjectNameTitle;
  unsigned int ObjectHelpTitleIndex;
  unsigned __int16 *ObjectHelpTitle;
  unsigned int DetailLevel;
  unsigned int NumCounters;
  int DefaultCounter;
  int NumInstances;
  unsigned int CodePage;
  _LARGE_INTEGER PerfTime;
  _LARGE_INTEGER PerfFreq;
};


struct tagCOMPOSITIONFORM
{
  unsigned int dwStyle;
  tagPOINT ptCurrentPos;
  tagRECT rcArea;
};


struct IForegroundTransfer : IUnknown
{
};


struct CSpinLock<512,0>
{
  volatile int m_Lock;
  unsigned int m_hCurThread;
  unsigned int m_nEnterCount;
};


struct __declspec(align(8)) TimeSource_QueryPerformanceCounter
{
  long double m_rPerfsPerSecond;
  unsigned __int64 m_qwPerfsPerMS;
  unsigned __int64 m_qwPerfCountTolerance;
  TimeSource_QueryPerformanceCounter_StateData m_cVolatileState;
  CSpinLock<512,0> m_SpinLock;
};


struct __declspec(align(8)) TimerInstance<TimeSource_QueryPerformanceCounter> : ReferenceCountTemplate_1048576_0
{
  TimeSource_QueryPerformanceCounter m_cTimeSource;
  long double m_rExternalOffset;
  long double m_tElapsedTime;
  long double m_tExternalTime;
  bool m_bInitialized;
};


struct PreciseTimerInstance : TimerInstance<TimeSource_QueryPerformanceCounter>
{
};


struct Timer
{
};


struct _tagPROTOCOLFILTERDATA
{
  unsigned int cbSize;
  IInternetProtocolSink *pProtocolSink;
  IInternetProtocol *pProtocol;
  IUnknown *pUnk;
  unsigned int dwFilterFlags;
};


struct HashTable<unsigned short,long,1>
{
  HashTable<unsigned short,long,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned short,HashTableData<unsigned short,long> *,1> m_intrusiveTable;
};


struct HashTable<unsigned short,long,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned short,long,1> *this, unsigned int);
};


struct HashIterator<unsigned short,long,1>
{
  IntrusiveHashIterator<unsigned short,HashTableData<unsigned short,long> *,1> m_iter;
};



struct _NT_TIB32
{
  unsigned int ExceptionList;
  unsigned int StackBase;
  unsigned int StackLimit;
  unsigned int SubSystemTib;
  $E38888FFFF2E8047BDBD55C921E86469 ___u4;
  unsigned int ArbitraryUserPointer;
  unsigned int Self;
};


struct _IMAGE_NT_HEADERS64
{
  unsigned int Signature;
  _IMAGE_FILE_HEADER FileHeader;
  _IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

struct IntrusiveSmartPointer<PFileNode>
{
  PFileNode *m_data;
};


struct TransientArchive : Archive
{
};


struct _CERT_EXTENSIONS
{
  unsigned int cExtension;
  _CERT_EXTENSION *rgExtension;
};


struct _CMC_DATA_INFO
{
  unsigned int cTaggedAttribute;
  _CMC_TAGGED_ATTRIBUTE *rgTaggedAttribute;
  unsigned int cTaggedRequest;
  _CMC_TAGGED_REQUEST *rgTaggedRequest;
  unsigned int cTaggedContentInfo;
  _CMC_TAGGED_CONTENT_INFO *rgTaggedContentInfo;
  unsigned int cTaggedOtherMsg;
  _CMC_TAGGED_OTHER_MSG *rgTaggedOtherMsg;
};

struct signed_storage_type<8>
{
};


struct HWAVEOUT__
{
  int unused;
};


struct tagOIFI
{
  unsigned int cb;
  int fMDIApp;
  HWND__ *hwndFrame;
  HACCEL__ *haccel;
  unsigned int cAccelEntries;
};


struct tagEMRGRADIENTFILL
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int nVer;
  unsigned int nTri;
  unsigned int ulMode;
  _TRIVERTEX Ver[1];
};

struct _CRYPT_DECODE_PARA
{
  unsigned int cbSize;
  void *(__stdcall *pfnAlloc)(unsigned int);
  void (__stdcall *pfnFree)(void *);
};


union $2624F01EDE3D6081EF95D5F93B7D5EA7
{
  HWND__ *hwndOwner;
  unsigned int cMultipleItems;
};


struct tMIXERCONTROLDETAILS
{
  unsigned int cbStruct;
  unsigned int dwControlID;
  unsigned int cChannels;
  $2624F01EDE3D6081EF95D5F93B7D5EA7 ___u3;
  unsigned int cbDetails;
  void *paDetails;
};


struct _SE_IMPERSONATION_STATE
{
  void *Token;
  char CopyOnOpen;
  char EffectiveOnly;
  _SECURITY_IMPERSONATION_LEVEL Level;
};


struct IXMLDOMText : IXMLDOMCharacterData
{
};


struct IXMLDOMCDATASection : IXMLDOMText
{
};


struct tagEMREXTFLOODFILL
{
  tagEMR emr;
  _POINTL ptlStart;
  unsigned int crColor;
  unsigned int iMode;
};


struct _ACCESS_ALLOWED_CALLBACK_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int SidStart;
};


struct List<PStringBase<char> >
{
  List<PStringBase<char> >Vtbl *vfptr;
  ListNode<PStringBase<char> > *_head;
  ListNode<PStringBase<char> > *_tail;
  unsigned int _num_elements;
};


struct List<PStringBase<char> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<PStringBase<char> > *this, unsigned int);
};


struct ListNode<PStringBase<char> >
{
  PStringBase<char> data;
  ListNode<PStringBase<char> > *next;
  ListNode<PStringBase<char> > *prev;
};



struct tagWAVEINCAPS2W
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  unsigned __int16 szPname[32];
  unsigned int dwFormats;
  unsigned __int16 wChannels;
  unsigned __int16 wReserved1;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct tagCBT_CREATEWNDA
{
  tagCREATESTRUCTA *lpcs;
  HWND__ *hwndInsertAfter;
};


struct AsyncIAdviseSink : IUnknown
{
};


struct AsyncIAdviseSink2 : AsyncIAdviseSink
{
};


struct ILockBytes : IUnknown
{
};


struct _AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_STATUS
{
  unsigned int cbSize;
  int fCommercial;
};


struct __declspec(align(4)) _REPARSE_GUID_DATA_BUFFER
{
  unsigned int ReparseTag;
  unsigned __int16 ReparseDataLength;
  unsigned __int16 Reserved;
  _GUID ReparseGuid;
  $6177A0AD8E9F0D390D62242D769E2CDF GenericReparseBuffer;
};


struct _SECURITY_DESCRIPTOR
{
  char Revision;
  char Sbz1;
  unsigned __int16 Control;
  void *Owner;
  void *Group;
  _ACL *Sacl;
  _ACL *Dacl;
};


struct SmartArray<PStringBase<unsigned short>,1>
{
  PStringBase<unsigned short> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct PStringBaseArray<unsigned short> : SmartArray<PStringBase<unsigned short>,1>
{
};


struct _CRYPT_ENCRYPTED_PRIVATE_KEY_INFO
{
  _CRYPT_ALGORITHM_IDENTIFIER EncryptionAlgorithm;
  _CRYPTOAPI_BLOB EncryptedPrivateKey;
};


struct _USER_MARSHAL_CB
{
  unsigned int Flags;
  _MIDL_STUB_MESSAGE *pStubMsg;
  const char *pReserve;
  unsigned int Signature;
  _USER_MARSHAL_CB_TYPE CBType;
  const char *pFormat;
  const char *pTypeFormat;
};


struct tagTTPOLYCURVE
{
  unsigned __int16 wType;
  unsigned __int16 cpfx;
  tagPOINTFX apfx[1];
};


struct OPENCARDNAMEA
{
  unsigned int dwStructSize;
  HWND__ *hwndOwner;
  unsigned int hSCardContext;
  char *lpstrGroupNames;
  unsigned int nMaxGroupNames;
  char *lpstrCardNames;
  unsigned int nMaxCardNames;
  _GUID *rgguidInterfaces;
  unsigned int cguidInterfaces;
  char *lpstrRdr;
  unsigned int nMaxRdr;
  char *lpstrCard;
  unsigned int nMaxCard;
  const char *lpstrTitle;
  unsigned int dwFlags;
  void *pvUserData;
  unsigned int dwShareMode;
  unsigned int dwPreferredProtocols;
  unsigned int dwActiveProtocol;
  unsigned int (__stdcall *lpfnConnect)(unsigned int, char *, char *, void *);
  int (__stdcall *lpfnCheck)(unsigned int, unsigned int, void *);
  void (__stdcall *lpfnDisconnect)(unsigned int, unsigned int, void *);
  unsigned int hCardHandle;
};


struct IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *,1>
{
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *,1>Vtbl *vfptr;
  HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *m_aInplaceBuckets[23];
  HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> **m_buckets;
  HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long,1>
{
  HashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long,1>Vtbl *vfptr;
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *,1> m_intrusiveTable;
};


struct HashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long,1> *this, unsigned int);
};


struct IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *,1> *this, unsigned int);
};


struct IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *>
{
  CaseInsensitiveStringBase<PStringBase<unsigned short> > m_hashKey;
  HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *m_hashNext;
};


struct HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> : IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *>
{
  int m_data;
};




struct COMPILE_TIME_ASSERTION_FAILURE<1>
{
};


struct _CHAR_INFO
{
  $B34434447B6B77C7D7B1493D8CD04E6E Char;
  unsigned __int16 Attributes;
};


union $5A0781B19CEC5CB1D03BCA3F64B2EC45
{
  SCARD_T0_COMMAND CmdBytes;
  char rgbHeader[5];
};


struct __declspec(align(2)) SCARD_T0_REQUEST
{
  _SCARD_IO_REQUEST ioRequest;
  char bSw1;
  char bSw2;
  $5A0781B19CEC5CB1D03BCA3F64B2EC45 ___u3;
};


struct ICatalogFileInfo : IUnknown
{
};


struct tagEMRCREATEPALETTE
{
  tagEMR emr;
  unsigned int ihPal;
  tagLOGPALETTE lgpl;
};


struct FileNodeName_Int64 : IFileNodeName
{
  __int64 m_name;
};

struct IBlockingLock : IUnknown
{
};

struct ReferenceCountTemplate<1048576,2>
{
  ReferenceCountTemplate<1048576,2>Vtbl *vfptr;
  unsigned int m_cRef;
};


struct ReferenceCountTemplate<1048576,2>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ReferenceCountTemplate<1048576,2> *this, unsigned int);
};


struct __declspec(align(4)) _CHANGER_SET_POSITION
{
  _CHANGER_ELEMENT Transport;
  _CHANGER_ELEMENT Destination;
  char Flip;
};


struct ICreateTypeInfo : IUnknown
{
};


struct ITimeAndNoticeControl : IUnknown
{
};


struct tagDRAWITEMSTRUCT
{
  unsigned int CtlType;
  unsigned int CtlID;
  unsigned int itemID;
  unsigned int itemAction;
  unsigned int itemState;
  HWND__ *hwndItem;
  HDC__ *hDC;
  tagRECT rcItem;
  unsigned int itemData;
};


struct _tagStartParam
{
  _GUID iid;
  IBindCtx *pIBindCtx;
  IUnknown *pItf;
};


struct IntrusiveHashIterator<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *,1>
{
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *,1> *m_currHashTable;
  HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> **m_currBucket;
  HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *m_currElement;
};


struct HashIterator<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long,1>
{
  IntrusiveHashIterator<CaseInsensitiveStringBase<PStringBase<unsigned short> >,HashTableData<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> *,1> m_iter;
};


struct tagPDEXW
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  void *hDevMode;
  void *hDevNames;
  HDC__ *hDC;
  unsigned int Flags;
  unsigned int Flags2;
  unsigned int ExclusionFlags;
  unsigned int nPageRanges;
  unsigned int nMaxPageRanges;
  tagPRINTPAGERANGE *lpPageRanges;
  unsigned int nMinPage;
  unsigned int nMaxPage;
  unsigned int nCopies;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpPrintTemplateName;
  IUnknown *lpCallback;
  unsigned int nPropertyPages;
  _PSP **lphPropertyPages;
  unsigned int nStartPage;
  unsigned int dwResultAction;
};


struct AsyncIUnknown : IUnknown
{
};


struct _PRINTER_INFO_2W
{
  unsigned __int16 *pServerName;
  unsigned __int16 *pPrinterName;
  unsigned __int16 *pShareName;
  unsigned __int16 *pPortName;
  unsigned __int16 *pDriverName;
  unsigned __int16 *pComment;
  unsigned __int16 *pLocation;
  _devicemodeW *pDevMode;
  unsigned __int16 *pSepFile;
  unsigned __int16 *pPrintProcessor;
  unsigned __int16 *pDatatype;
  unsigned __int16 *pParameters;
  void *pSecurityDescriptor;
  unsigned int Attributes;
  unsigned int Priority;
  unsigned int DefaultPriority;
  unsigned int StartTime;
  unsigned int UntilTime;
  unsigned int Status;
  unsigned int cJobs;
  unsigned int AveragePPM;
};

struct SmartArray<CommandLineArg,1>
{
  CommandLineArg *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};

struct PStringBaseIter<char> : PStringBaseIter_Common<char>
{
  PStringBase<char> *pstring_ptr;
};


struct IXMLDOMProcessingInstruction : IXMLDOMNode
{
};

struct FileNodeName_Int32 : IFileNodeName
{
  int m_name;
};


struct SB_Primitive : SerializationBehavior<SB_Primitive>
{
};


struct tagMONLINKSTRUCT
{
  unsigned int cb;
  unsigned int dwTime;
  void *hTask;
  int fEstablished;
  int fNoData;
  HSZ__ *hszSvc;
  HSZ__ *hszTopic;
  HSZ__ *hszItem;
  unsigned int wFmt;
  int fServer;
  HCONV__ *hConvServer;
  HCONV__ *hConvClient;
};


struct RPC_IF_ID_VECTOR
{
  unsigned int Count;
  _RPC_IF_ID *IfId[1];
};


struct _RPC_CLIENT_INTERFACE
{
  unsigned int Length;
  _RPC_SYNTAX_IDENTIFIER InterfaceId;
  _RPC_SYNTAX_IDENTIFIER TransferSyntax;
  RPC_DISPATCH_TABLE *DispatchTable;
  unsigned int RpcProtseqEndpointCount;
  _RPC_PROTSEQ_ENDPOINT *RpcProtseqEndpoint;
  unsigned int Reserved;
  const void *InterpreterInfo;
  unsigned int Flags;
};


struct _AppBarData
{
  unsigned int cbSize;
  HWND__ *hWnd;
  unsigned int uCallbackMessage;
  unsigned int uEdge;
  tagRECT rc;
  int lParam;
};


struct _CTL_USAGE_MATCH
{
  unsigned int dwType;
  _CTL_USAGE Usage;
};

struct RPC_IMPORT_CONTEXT_P
{
  void *LookupContext;
  void *ProposedHandle;
  _RPC_BINDING_VECTOR *Bindings;
};



struct SYSTEM_POWER_CAPABILITIES
{
  char PowerButtonPresent;
  char SleepButtonPresent;
  char LidPresent;
  char SystemS1;
  char SystemS2;
  char SystemS3;
  char SystemS4;
  char SystemS5;
  char HiberFilePresent;
  char FullWake;
  char VideoDimPresent;
  char ApmPresent;
  char UpsPresent;
  char ThermalControl;
  char ProcessorThrottle;
  char ProcessorMinThrottle;
  char ProcessorMaxThrottle;
  char spare2[4];
  char DiskSpinDown;
  char spare3[8];
  char SystemBatteriesPresent;
  char BatteriesAreShortTerm;
  BATTERY_REPORTING_SCALE BatteryScale[3];
  _SYSTEM_POWER_STATE AcOnLineWake;
  _SYSTEM_POWER_STATE SoftLidWake;
  _SYSTEM_POWER_STATE RtcWake;
  _SYSTEM_POWER_STATE MinDeviceWakeState;
  _SYSTEM_POWER_STATE DefaultLowLatencyWake;
};


struct IGlobalInterfaceTable : IUnknown
{
};


struct AC1Legacy_PStringBaseIter_Common<char>
{
  AC1Legacy_PStringBaseIter_Common<char>Vtbl *vfptr;
  unsigned int curr;
  unsigned int mark;
};


union $6F738F6F69A265665F8822F1AC0CB51C
{
  int (__thiscall *Split)(AC1Legacy_PStringBaseIter_Common<char> *this, AC1Legacy_PStringBase<char> *, AC1Legacy_PStringBase<char> *, AC1Legacy_PStringBase<char> *);
  int (__thiscall *Split)(AC1Legacy_PStringBaseIter_Common<char> *this, AC1Legacy_PStringBase<char> *, AC1Legacy_PStringBase<char> *);
};


struct AC1Legacy_PStringBaseIter_Common<char>Vtbl
{
  unsigned int (__thiscall *GetStrLen)(AC1Legacy_PStringBaseIter_Common<char> *this);
  _BYTE gap4[4];
  $6F738F6F69A265665F8822F1AC0CB51C ___u1;
  const char *(__thiscall *IndexToConstPointer)(AC1Legacy_PStringBaseIter_Common<char> *this, unsigned int);
  char (__thiscall *IndexToChar)(AC1Legacy_PStringBaseIter_Common<char> *this, unsigned int);
};




struct AC1Legacy_PStringBaseIter_Const<char> : AC1Legacy_PStringBaseIter_Common<char>
{
  AC1Legacy_PStringBase<char> *pstring_ptr;
};


struct __declspec(align(4)) AC1Legacy_PSRefBuffer<unsigned short> : ReferenceCountTemplate<268435456,0>
{
  unsigned int m_len;
  unsigned int m_size;
  unsigned int m_hash;
  unsigned __int16 m_data[1];
};


struct AC1Legacy_PStringBase<unsigned short>
{
  AC1Legacy_PSRefBuffer<unsigned short> *m_buffer;
};


struct AC1Legacy_PStringBaseIter<char> : AC1Legacy_PStringBaseIter_Common<char>
{
  AC1Legacy_PStringBase<char> *pstring_ptr;
};


struct AC1Legacy_PStringBaseIter_Common<unsigned short>
{
  AC1Legacy_PStringBaseIter_Common<unsigned short>Vtbl *vfptr;
  unsigned int curr;
  unsigned int mark;
};


union $1BA74283D25ECAA42E70144003C3E81D
{
  int (__thiscall *Split)(AC1Legacy_PStringBaseIter_Common<unsigned short> *this, AC1Legacy_PStringBase<unsigned short> *, AC1Legacy_PStringBase<unsigned short> *, AC1Legacy_PStringBase<unsigned short> *);
  int (__thiscall *Split)(AC1Legacy_PStringBaseIter_Common<unsigned short> *this, AC1Legacy_PStringBase<unsigned short> *, AC1Legacy_PStringBase<unsigned short> *);
};


struct AC1Legacy_PStringBaseIter_Common<unsigned short>Vtbl
{
  unsigned int (__thiscall *GetStrLen)(AC1Legacy_PStringBaseIter_Common<unsigned short> *this);
  _BYTE gap4[4];
  $1BA74283D25ECAA42E70144003C3E81D ___u1;
  const unsigned __int16 *(__thiscall *IndexToConstPointer)(AC1Legacy_PStringBaseIter_Common<unsigned short> *this, unsigned int);
  unsigned __int16 (__thiscall *IndexToChar)(AC1Legacy_PStringBaseIter_Common<unsigned short> *this, unsigned int);
};


struct AC1Legacy_PStringBaseIter<unsigned short> : AC1Legacy_PStringBaseIter_Common<unsigned short>
{
  AC1Legacy_PStringBase<unsigned short> *pstring_ptr;
};


struct IDirectWriterLock : IUnknown
{
};


struct __declspec(align(4)) tagEMRGLSBOUNDEDRECORD
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int cbData;
  char Data[1];
};


struct PFileNodeIter_NonConst
{
  PFileNode *file_node;
  unsigned int curr_index;
  PStringBase<char> search_string;
};


struct _IMAGE_IMPORT_DESCRIPTOR
{
  $980F6A28C67C8F3640106D01D4C85A6A ___u0;
  unsigned int TimeDateStamp;
  unsigned int ForwarderChain;
  unsigned int Name;
  unsigned int FirstThunk;
};


struct ILayoutStorage : IUnknown
{
};


struct _DRAWPATRECT
{
  tagPOINT ptPosition;
  tagPOINT ptSize;
  unsigned __int16 wStyle;
  unsigned __int16 wPattern;
};

struct TextFileOutputHandler : Logger_ITextFileOutputHandler
{
  _iobuf *m_fileLog;
  bool m_fFirstWrite;
  PStringBase<char> m_strFilename;
  InstanceDiviner *m_pidLogInstance;
};


struct tagEMRBITBLT
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
};


struct _SERVICE_FAILURE_ACTIONSW
{
  unsigned int dwResetPeriod;
  unsigned __int16 *lpRebootMsg;
  unsigned __int16 *lpCommand;
  unsigned int cActions;
  _SC_ACTION *lpsaActions;
};


struct tagEMRSETMAPPERFLAGS
{
  tagEMR emr;
  unsigned int dwFlags;
};


struct tagMDINEXTMENU
{
  HMENU__ *hmenuIn;
  HMENU__ *hmenuNext;
  HWND__ *hwndNext;
};


struct IXMLDocument : IDispatch
{
};


struct IXMLElement : IDispatch
{
};


struct UDATE
{
  _SYSTEMTIME st;
  unsigned __int16 wDayOfYear;
};


struct _SYSTEM_NUMA_INFORMATION
{
  unsigned int HighestNodeNumber;
  unsigned int Reserved;
  $6E03E74EEA369F7A495E2D00D4F13CF6 ___u2;
};


struct tagEMRSETPALETTEENTRIES
{
  tagEMR emr;
  unsigned int ihPal;
  unsigned int iStart;
  unsigned int cEntries;
  tagPALETTEENTRY aPalEntries[1];
};


struct CONFIRMSAFETY
{
  _GUID clsid;
  IUnknown *pUnk;
  unsigned int dwFlags;
};


struct IXMLDocument2 : IDispatch
{
};


struct tagEMRRESIZEPALETTE
{
  tagEMR emr;
  unsigned int ihPal;
  unsigned int cEntries;
};


struct ICreateTypeInfo2 : ICreateTypeInfo
{
};


struct _OBJECT_TYPE_LIST
{
  unsigned __int16 Level;
  unsigned __int16 Sbz;
  _GUID *ObjectType;
};


struct _TIME_ZONE_INFORMATION
{
  int Bias;
  unsigned __int16 StandardName[32];
  _SYSTEMTIME StandardDate;
  int StandardBias;
  unsigned __int16 DaylightName[32];
  _SYSTEMTIME DaylightDate;
  int DaylightBias;
};


struct _CERT_POLICY95_QUALIFIER1
{
  unsigned __int16 *pszPracticesReference;
  char *pszNoticeIdentifier;
  char *pszNSINoticeIdentifier;
  unsigned int cCPSURLs;
  _CPS_URLS *rgCPSURLs;
};


struct tagTPMPARAMS
{
  unsigned int cbSize;
  tagRECT rcExclude;
};



struct __declspec(align(4)) FileNodeName_Bool : IFileNodeName
{
  bool m_name;
};


struct IFillLockBytes : IUnknown
{
};


struct _WINDOW_BUFFER_SIZE_RECORD
{
  _COORD dwSize;
};


union $BFD9864D5D4DBE09E6EB25C9B55618A2
{
  _KEY_EVENT_RECORD KeyEvent;
  _MOUSE_EVENT_RECORD MouseEvent;
  _WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
  _MENU_EVENT_RECORD MenuEvent;
  _FOCUS_EVENT_RECORD FocusEvent;
};


struct _INPUT_RECORD
{
  unsigned __int16 EventType;
  $BFD9864D5D4DBE09E6EB25C9B55618A2 Event;
};



union $D6F7B6344D8BA26871832F81AC67D28E
{
  HKEY__ *hKeyBase;
  void *pvBase;
};


struct _CERT_SYSTEM_STORE_RELOCATE_PARA
{
  $D6F7B6344D8BA26871832F81AC67D28E ___u0;
  $644E3772CE471009796AF877D4363EF9 ___u1;
};


struct IInternetSession : IUnknown
{
};


struct IXMLDOMImplementation : IDispatch
{
};

struct __declspec(align(8)) _DISK_PERFORMANCE
{
  _LARGE_INTEGER BytesRead;
  _LARGE_INTEGER BytesWritten;
  _LARGE_INTEGER ReadTime;
  _LARGE_INTEGER WriteTime;
  _LARGE_INTEGER IdleTime;
  unsigned int ReadCount;
  unsigned int WriteCount;
  unsigned int QueueDepth;
  unsigned int SplitCount;
  _LARGE_INTEGER QueryTime;
  unsigned int StorageDeviceNumber;
  unsigned __int16 StorageManagerName[8];
};


struct _MIDL_SERVER_INFO_
{
  _MIDL_STUB_DESC *pStubDesc;
  int (__stdcall *const *DispatchTable)();
  const char *ProcString;
  const unsigned __int16 *FmtStringOffset;
  void (__stdcall *const *ThunkTable)(_MIDL_STUB_MESSAGE *);
  _RPC_SYNTAX_IDENTIFIER *pTransferSyntax;
  unsigned int nCount;
  _MIDL_SYNTAX_INFO *pSyntaxInfo;
};


struct Archive_tagSetCurrentCoreVersion : ArchiveInitializer
{
};


struct Archive_SetVersionRow : ArchiveInitializer
{
  ArchiveVersionRow *m_rInitialData;
};


struct CStopWatch
{
  CStopWatchVtbl *vfptr;
  long double m_startTime;
};


struct CStopWatchVtbl
{
  void *(__thiscall *__vecDelDtor)(CStopWatch *this, unsigned int);
  void (__thiscall *Start)(CStopWatch *this);
  long double (__thiscall *Stop)(CStopWatch *this);
};


struct StopWatchScope
{
  CStopWatch *m_pcWatch;
};



struct _IMAGE_THUNK_DATA64
{
  $0055FF1BE34206123B9C488F0A43FAA0 u1;
};


struct IProgressNotify : IUnknown
{
};


struct _QOS_SD_MODE
{
  QOS_OBJECT_HDR ObjectHdr;
  unsigned int ShapeDiscardMode;
};


struct FileNodeName_Hex : FileNodeName_UInt32
{
};

struct IOleInPlaceSite : IOleWindow
{
};


struct IRpcChannelBuffer2 : IRpcChannelBuffer
{
};


struct AsyncIPipeByte : IUnknown
{
};


struct IOplockStorage : IUnknown
{
};


struct tagNEWTEXTMETRICEXW
{
  tagNEWTEXTMETRICW ntmTm;
  tagFONTSIGNATURE ntmFontSig;
};


struct tagHARDWAREHOOKSTRUCT
{
  HWND__ *hwnd;
  unsigned int message;
  unsigned int wParam;
  int lParam;
};


struct IPrintDialogCallback : IUnknown
{
};


union $6542325C3C981D0D8A9D1619BB5CA76C
{
  unsigned int (__cdecl *GetPackSize)(PackObj *this, sockaddr_in);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const unsigned __int64);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const __int64);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const float);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const long double);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const unsigned int);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const int);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const char);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const char);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const unsigned __int16);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const __int16);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const unsigned int);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const int);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, IDClass<_tagDataID,32,0>);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, const bool);
  unsigned int (__cdecl *GetPackSize)(PackObj *this, PackObj *);
  unsigned int (__thiscall *GetPackSize)(PackObj *this);
  unsigned int (__thiscall *GetPackSize)(PackObj *this);
};


union $502EB7DEF18680948DF01F6246BFD63D
{
  unsigned int (__cdecl *Pack)(PackObj *this, sockaddr_in, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const unsigned __int64, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const __int64, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const float, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const long double, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const unsigned int, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const int, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const char, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const char, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const unsigned __int16, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const __int16, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const unsigned int, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const int, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, IDClass<_tagDataID,32,0>, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, const bool, void **, unsigned int);
  unsigned int (__cdecl *Pack)(PackObj *this, PackObj *, void **, unsigned int);
  unsigned int (__thiscall *Pack)(PackObj *this, void **, unsigned int);
};


union $8A2AEE37BD7CF5CDD944EA9781371506
{
  int (__cdecl *UnPack)(PackObj *this, sockaddr_in *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, unsigned __int64 *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, __int64 *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, float *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, long double *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, unsigned int *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, int *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, char *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, char *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, unsigned __int16 *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, __int16 *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, unsigned int *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, int *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, IDClass<_tagDataID,32,0> *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, bool *, void **, unsigned int);
  int (__cdecl *UnPack)(PackObj *this, PackObj *, void **, unsigned int);
  int (__thiscall *UnPack)(PackObj *this, void **, unsigned int);
};


struct PackObjVtbl
{
  void *(__thiscall *__vecDelDtor)(PackObj *this, unsigned int);
  _BYTE gap4[4];
  $6542325C3C981D0D8A9D1619BB5CA76C ___u1;
  $502EB7DEF18680948DF01F6246BFD63D ___u2;
  $8A2AEE37BD7CF5CDD944EA9781371506 ___u3;
};



struct IRpcChannelBuffer3 : IRpcChannelBuffer2
{
};


struct IPipeByte : IUnknown
{
};


struct IAddrTrackingControl : IUnknown
{
};


struct IXTLRuntime : IXMLDOMNode
{
};


struct IRpcSyntaxNegotiate : IUnknown
{
};


struct ISynchronizeContainer : IUnknown
{
};


struct get_storage_type<128>
{
};


struct IHttpSecurity : IWindowForBindingUI
{
};


struct FallocPool
{
  const unsigned int m_chunkSize;
  const unsigned int m_chunksPerPool;
  _STL_vector<unsigned char *,_STL_allocator<unsigned char *> > m_poolArray;
  char *m_firstFreeChunk;
  void (__cdecl *m_dumpFunction)(char *, unsigned int);
};


struct InstanceID : _InstanceID
{
};

struct tagMCI_ANIM_UPDATE_PARMS
{
  unsigned int dwCallback;
  tagRECT rc;
  HDC__ *hDC;
};


struct IXMLDOMNotation : IXMLDOMNode
{
};


struct IXMLDOMEntity : IXMLDOMNode
{
};


struct PStringBaseIter_Const<unsigned short> : PStringBaseIter_Common<unsigned short>
{
  PStringBase<unsigned short> *pstring_ptr;
};


struct SB_As32Bit_Compressed : SerializationBehavior<SB_As32Bit_Compressed>
{
};

struct FileNodeName_Binary : IFileNodeName
{
  SmartBuffer m_name;
};


struct IAsyncRpcChannelBuffer : IRpcChannelBuffer2
{
};


struct IThumbnailExtractor : IUnknown
{
};


struct List<PStringBase<unsigned short> >
{
  List<PStringBase<unsigned short> >Vtbl *vfptr;
  ListNode<PStringBase<unsigned short> > *_head;
  ListNode<PStringBase<unsigned short> > *_tail;
  unsigned int _num_elements;
};


struct List<PStringBase<unsigned short> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<PStringBase<unsigned short> > *this, unsigned int);
};


struct ListNode<PStringBase<unsigned short> >
{
  PStringBase<unsigned short> data;
  ListNode<PStringBase<unsigned short> > *next;
  ListNode<PStringBase<unsigned short> > *prev;
};


struct AsyncIPipeLong : IUnknown
{
};


struct ITypeFactory : IUnknown
{
};


struct IInternetHostSecurityManager : IUnknown
{
};


union _GDI_NONREMOTE___MIDL_IWinTypes_0002
{
  int hInproc;
  _DWORD_BLOB *hRemote;
};


struct _GDI_NONREMOTE
{
  int fContext;
  _GDI_NONREMOTE___MIDL_IWinTypes_0002 u;
};


struct ICreateErrorInfo : IUnknown
{
};


struct SB_Default : SerializationBehavior<SB_Default>
{
};


struct ArgumentParser
{
  ArgumentParserVtbl *vfptr;
  PStringBase<char> m_ErrorText;
  PStringBase<char> m_CmdChars;
  wchar_t **m_argv;
  int m_argc;
  int m_CurArg;
};


union $E4207F95E5F7AB975433DCEF2755BD4E
{
  bool (__thiscall *ParseArgs)(ArgumentParser *this, SmartArray<PStringBase<unsigned short>,1> *, bool);
  bool (__thiscall *ParseArgs)(ArgumentParser *this, SmartArray<PStringBase<char>,1> *, bool);
  bool (__thiscall *ParseArgs)(ArgumentParser *this, wchar_t **, int, bool);
  bool (__thiscall *ParseArgs)(ArgumentParser *this, char **, int, bool);
};


union $265A78220A9CA372583908AB0F9710E0
{
  bool (__thiscall *ParseCommandLine)(ArgumentParser *this, const wchar_t *, bool);
  bool (__thiscall *ParseCommandLine)(ArgumentParser *this, const char *, bool);
};


union $1EB8EA8E909DC4F6388AD20955686A79
{
  bool (__thiscall *EvaluateCommandLineArg)(ArgumentParser *this, CommandLineArg *, PStringBase<char> *);
  bool (__thiscall *EvaluateCommandLineArg)(ArgumentParser *this, CommandLineArg *, PStringBase<unsigned short> *);
};


struct ArgumentParserVtbl
{
  void (__thiscall *Usage)(ArgumentParser *this);
  _BYTE gap4[12];
  $E4207F95E5F7AB975433DCEF2755BD4E ___u1;
  _BYTE gap14[4];
  $265A78220A9CA372583908AB0F9710E0 ___u2;
  void (__thiscall *DisplayUsage)(ArgumentParser *this, ArgumentParser_CommandLineArgList *);
  void (__thiscall *SetErrorText)(ArgumentParser *this, PStringBase<char> *);
  void (__thiscall *AppendOutputText)(ArgumentParser *this, const char *, ArgumentParser_OutputTextType);
  int (__thiscall *AppendAndWordWrap)(ArgumentParser *this, const char *, int, int, ArgumentParser_OutputTextType);
  void (__thiscall *AppendArgumentText)(ArgumentParser *this, PStringBase<char>, PStringBase<char>, PStringBase<char>);
  void (__thiscall *FinishOutputText)(ArgumentParser *this);
  int (__thiscall *GetCharactersToWrapUsageTo)(ArgumentParser *this);
  void (__thiscall *BuildCommandLineArgs)(ArgumentParser *this, ArgumentParser_CommandLineArgList *);
  _BYTE gap3C[4];
  $1EB8EA8E909DC4F6388AD20955686A79 ___u11;
  bool (__thiscall *OnCommandLineEvaluationDone)(ArgumentParser *this);
  bool (__thiscall *IsCommandLineArgument)(ArgumentParser *this, PStringBase<unsigned short> *, bool);
};


struct AutoGrowHashTable<unsigned short,long> : HashTable<unsigned short,long,1>
{
};


const struct ArgumentParser_CommandLineArgList : SmartArray<CommandLineArg,1>
{
  AutoGrowHashTable<CaseInsensitiveStringBase<PStringBase<unsigned short> >,long> m_LongNamesHash;
  AutoGrowHashTable<unsigned short,long> m_ShortNamesHash;
};


struct IInternalUnknown : IUnknown
{
};


struct TimestamppedTextFileOutputHandler : TextFileOutputHandler
{
};


struct FileNodeName_InstanceID : IFileNodeName
{
  InstanceID m_name;
};


struct IROTData : IUnknown
{
};

struct IAuthenticate : IUnknown
{
};


struct Turbine_RefCountNoMT : ReferenceCountTemplate<1048576,3>
{
};


struct IXMLError : IUnknown
{
};


struct InterfaceInfo<Interface>
{
};


struct ISoftDistExt : IUnknown
{
};


struct get_storage_type<16>
{
};


struct IXMLAttribute : IDispatch
{
};


struct IPipeLong : IUnknown
{
};


struct ErrorStream
{
  PStringBase<char> m_strBuffer;
};


struct IPipeDouble : IUnknown
{
};


struct IAsyncHttpClientListener
{
  IAsyncHttpClientListenerVtbl *vfptr;
};


struct IAsyncHttpClientListenerVtbl
{
  void (__thiscall *OnResponse)(IAsyncHttpClientListener *this, SmartBuffer *, unsigned int);
  void (__thiscall *OnDownloadStatus)(IAsyncHttpClientListener *this, unsigned int, unsigned int, unsigned int);
  void (__thiscall *OnError)(IAsyncHttpClientListener *this, HRESULT, unsigned int);
};

struct __CRT_LIST_ENTRY
{
  __CRT_LIST_ENTRY *Flink;
  __CRT_LIST_ENTRY *Blink;
};


struct _CRT_CRITICAL_SECTION_DEBUG
{
  unsigned __int16 Type;
  unsigned __int16 CreatorBackTraceIndex;
  _CRT_CRITICAL_SECTION *CriticalSection;
  __CRT_LIST_ENTRY ProcessLocksList;
  unsigned int EntryCount;
  unsigned int ContentionCount;
  unsigned int Depth;
  void *OwnerBackTrace[5];
};


struct _CRT_CRITICAL_SECTION
{
  _CRT_CRITICAL_SECTION_DEBUG *DebugInfo;
  int LockCount;
  int RecursionCount;
  void *OwningThread;
  void *LockSemaphore;
  unsigned int Reserved;
};


struct ios
{
  iosVtbl *vfptr;
  streambuf *bp;
  int state;
  int ispecial;
  int ospecial;
  int isfx_special;
  int osfx_special;
  int x_delbuf;
  ostream *x_tie;
  int x_flags;
  int x_precision;
  char x_fill;
  int x_width;
  int LockFlg;
  _CRT_CRITICAL_SECTION x_lock;
};


struct iosVtbl
{
  void *(__thiscall *__vecDelDtor)(ios *this, unsigned int);
};


struct streambuf
{
  streambufVtbl *vfptr;
  int _fAlloc;
  int _fUnbuf;
  int x_lastc;
  char *_base;
  char *_ebuf;
  char *_pbase;
  char *_pptr;
  char *_epptr;
  char *_eback;
  char *_gptr;
  char *_egptr;
  int LockFlg;
  _CRT_CRITICAL_SECTION x_lock;
};


struct streambufVtbl
{
  void *(__thiscall *__vecDelDtor)(streambuf *this, unsigned int);
  _BYTE gap4[4];
  streambuf *(__thiscall *setbuf)(streambuf *this, char *, int);
  int (__thiscall *seekoff)(streambuf *this, int, ios_seek_dir, int);
  int (__thiscall *seekpos)(streambuf *this, int, int);
  int (__thiscall *xsputn)(streambuf *this, const char *, int);
  int (__thiscall *xsgetn)(streambuf *this, char *, int);
  int (__thiscall *overflow)(streambuf *this, int);
  int (__thiscall *underflow)(streambuf *this);
  int (__thiscall *pbackfail)(streambuf *this, int);
  int (__thiscall *doallocate)(streambuf *this);
};


struct istream_withassign : istream
{
};


struct ostream_withassign : ostream
{
};


struct iostream : istream
{
  _BYTE[8];
};


struct filebuf : streambuf
{
  int x_fd;
  int x_fOpened;
};


struct ifstream : istream
{
};


struct ofstream : ostream
{
};


struct fstream : iostream
{
};


struct _STL___char_traits_base<char,int>
{
};


struct _STL_char_traits<char> : _STL___char_traits_base<char,int>
{
};


struct _STL_allocator<char>
{
};


struct _STL__STLP_alloc_proxy<char *,char,_STL_allocator<char> > : _STL_allocator<char>
{
  char *_M_data;
};


struct _STL__String_base<char,_STL_allocator<char> >
{
  char *_M_start;
  char *_M_finish;
  _STL__STLP_alloc_proxy<char *,char,_STL_allocator<char> > _M_end_of_storage;
};


struct _STL_basic_string<char,_STL_char_traits<char>,_STL_allocator<char> > : _STL__String_base<char,_STL_allocator<char> >
{
};


struct _STL__String_reserve_t
{
};


struct _STL_allocator<unsigned short>
{
};


struct _STL__STLP_alloc_proxy<unsigned short *,unsigned short,_STL_allocator<unsigned short> > : _STL_allocator<unsigned short>
{
  unsigned __int16 *_M_data;
};


struct _STL__String_base<unsigned short,_STL_allocator<unsigned short> >
{
  unsigned __int16 *_M_start;
  unsigned __int16 *_M_finish;
  _STL__STLP_alloc_proxy<unsigned short *,unsigned short,_STL_allocator<unsigned short> > _M_end_of_storage;
};


struct _STL_basic_string<unsigned short,_STL_char_traits<unsigned short>,_STL_allocator<unsigned short> > : _STL__String_base<unsigned short,_STL_allocator<unsigned short> >
{
};


struct _STL___char_traits_base<unsigned short,unsigned short>
{
};


struct _STL_char_traits<unsigned short> : _STL___char_traits_base<unsigned short,unsigned short>
{
};


struct __declspec(align(4)) _STL_locale_facet : _STL__Refcount_Base
{
  _STL_locale_facetVtbl *vfptr;
  const bool _M_delete;
};


struct _STL_locale_facetVtbl
{
  void *(__thiscall *__vecDelDtor)(_STL_locale_facet *this, unsigned int);
};


struct _STL_locale_id
{
  unsigned int _M_index;
};


struct _STL_locale
{
  struct _STL__Locale_impl *_M_impl;
};


struct _STL_ctype_base
{
};


struct _STL_ctype<unsigned short> : _STL_locale_facet, _STL_ctype_base
{
};


struct __declspec(align(4)) _STL_ctype<char> : _STL_locale_facet, _STL_ctype_base
{
  _STL_ctype_base_mask *_M_ctype_table;
  bool _M_delete;
};


struct _STL_ctype<char>__Is_mask
{
  _STL_ctype_base_mask __m;
};


struct _STL_hash<char *>
{
};


struct _STL_hash<char const *>
{
};


struct _STL_hash<char>
{
};


struct _STL_hash<unsigned char>
{
};


struct _STL_hash<signed char>
{
};


struct _STL_hash<short>
{
};


struct _STL_hash<unsigned short>
{
};


struct _STL_hash<int>
{
};


struct _STL_hash<unsigned int>
{
};


struct _STL_hash<long>
{
};


struct _STL_hash<unsigned long>
{
};


struct _STL_hash<__int64>
{
};


struct _STL_hash<unsigned __int64>
{
};


struct _STL_hash<_STL_basic_string<char,_STL_char_traits<char>,_STL_allocator<char> > >
{
};


struct _STL_hash<_STL_basic_string<unsigned short,_STL_char_traits<unsigned short>,_STL_allocator<unsigned short> > >
{
};


struct HttpClientImplementation
{
  HttpClientImplementationVtbl *vfptr;
  void *m_internetSession;
};


struct HttpClientImplementationVtbl
{
  void *(__thiscall *__vecDelDtor)(HttpClientImplementation *this, unsigned int);
  _BYTE gap4[4];
  void (__thiscall *Terminate)(HttpClientImplementation *this);
  unsigned int (__thiscall *GetThrottle)(HttpClientImplementation *this);
  void (__thiscall *SetThrottle)(HttpClientImplementation *this, unsigned int);
  HRESULT (__thiscall *GetToFileHandle)(HttpClientImplementation *this, _STL_basic_string<unsigned short,_STL_char_traits<unsigned short>,_STL_allocator<unsigned short> > *, void *, unsigned int, unsigned int);
  HRESULT (__thiscall *GetToSmartBuffer)(HttpClientImplementation *this, _STL_basic_string<unsigned short,_STL_char_traits<unsigned short>,_STL_allocator<unsigned short> > *, SmartBuffer *, unsigned int, unsigned int);
  HRESULT (__thiscall *PostToSmartBuffer)(HttpClientImplementation *this, _STL_basic_string<unsigned short,_STL_char_traits<unsigned short>,_STL_allocator<unsigned short> > *, SmartBuffer *, SmartBuffer *);
  HRESULT (__thiscall *PostToFileHandle)(HttpClientImplementation *this, _STL_basic_string<unsigned short,_STL_char_traits<unsigned short>,_STL_allocator<unsigned short> > *, SmartBuffer *, void *);
};


struct IHttpClientListener : IUnknown
{
};


struct __declspec(align(2)) PortalThread
{
  PortalThreadVtbl *vfptr;
  void *m_hThread;
  unsigned int m_idThread;
  bool m_fThreadRunning;
  bool m_fShouldExit;
  bool m_fThreadHasEverRun;
};


struct PortalThreadVtbl
{
  void *(__thiscall *__vecDelDtor)(PortalThread *this, unsigned int);
  int (__thiscall *Startup)(PortalThread *this);
  void (__thiscall *SetShouldExit)(PortalThread *this, bool);
  void (__thiscall *WakeForTheReaper)(PortalThread *this);
};


struct IntrusiveLFData
{
  IntrusiveLFData *m_pLFNext;
};


struct Intrusive_MWMR_LFStack
{
  IntrusiveLFData *volatile m_pStack;
};


struct Intrusive_MWSR_LFQueue
{
  Intrusive_MWMR_LFStack m_lfStack;
  volatile int m_nAdds;
  volatile int m_nRemoves;
  IntrusiveLFData *m_pQueue;
  IntrusiveLFData *m_pQueueTail;
};


struct SharedCriticalSection
{
  SharedCriticalSectionVtbl *vfptr;
  _RTL_CRITICAL_SECTION myCritSection_;
  unsigned int lockHolder_;
  int lockCount_;
};


struct SharedCriticalSectionVtbl
{
  void *(__thiscall *__vecDelDtor)(SharedCriticalSection *this, unsigned int);
  void (__thiscall *EnterCriticalSection)(SharedCriticalSection *this);
};


struct IAsyncHttpClient
{
  IAsyncHttpClientVtbl *vfptr;
};


struct IAsyncHttpClientVtbl
{
  bool (__thiscall *Initialize)(IAsyncHttpClient *this, IAsyncHttpClientListener *);
  bool (__thiscall *IsInitialized)(IAsyncHttpClient *this);
  void (__thiscall *Terminate)(IAsyncHttpClient *this);
  bool (__thiscall *Get)(IAsyncHttpClient *this, const wchar_t *, unsigned int);
  bool (__thiscall *Post)(IAsyncHttpClient *this, const wchar_t *, SmartBuffer *, unsigned int);
  bool (__thiscall *UseTime)(IAsyncHttpClient *this);
};



struct WinInetAsyncHttpClient_HttpDownloadEvent : ReferenceCountTemplate_1048576_0
{
};


struct List<WinInetAsyncHttpClient_HttpDownloadEvent *>
{
  List<WinInetAsyncHttpClient_HttpDownloadEvent *>Vtbl *vfptr;
  ListNode<WinInetAsyncHttpClient_HttpDownloadEvent *> *_head;
  ListNode<WinInetAsyncHttpClient_HttpDownloadEvent *> *_tail;
  unsigned int _num_elements;
};


struct List<WinInetAsyncHttpClient_HttpDownloadEvent *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<WinInetAsyncHttpClient_HttpDownloadEvent *> *this, unsigned int);
};


struct ListNode<WinInetAsyncHttpClient_HttpDownloadEvent *>
{
  WinInetAsyncHttpClient_HttpDownloadEvent *data;
  ListNode<WinInetAsyncHttpClient_HttpDownloadEvent *> *next;
  ListNode<WinInetAsyncHttpClient_HttpDownloadEvent *> *prev;
};


struct LFQueue<WinInetAsyncHttpClient_HttpDownloadEvent *>
{
  WinInetAsyncHttpClient_HttpDownloadEvent **buckets_;
  int numBuckets_;
  volatile int m_dwProducerBucketIndex;
  volatile int m_dwConsumerBucketIndex;
  List<WinInetAsyncHttpClient_HttpDownloadEvent *> m_backupList;
  int m_dwBackupListLen;
  SharedCriticalSection m_backupListCritSec;
};


struct WinInetAsyncHttpClient_HttpDownloadRequest : ReferenceCountTemplate_1048576_0
{
  unsigned int m_context;
};


struct List<WinInetAsyncHttpClient_HttpDownloadRequest *>
{
  List<WinInetAsyncHttpClient_HttpDownloadRequest *>Vtbl *vfptr;
  ListNode<WinInetAsyncHttpClient_HttpDownloadRequest *> *_head;
  ListNode<WinInetAsyncHttpClient_HttpDownloadRequest *> *_tail;
  unsigned int _num_elements;
};


struct List<WinInetAsyncHttpClient_HttpDownloadRequest *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<WinInetAsyncHttpClient_HttpDownloadRequest *> *this, unsigned int);
};


struct ListNode<WinInetAsyncHttpClient_HttpDownloadRequest *>
{
  WinInetAsyncHttpClient_HttpDownloadRequest *data;
  ListNode<WinInetAsyncHttpClient_HttpDownloadRequest *> *next;
  ListNode<WinInetAsyncHttpClient_HttpDownloadRequest *> *prev;
};


struct LFQueue<WinInetAsyncHttpClient_HttpDownloadRequest *>
{
  WinInetAsyncHttpClient_HttpDownloadRequest **buckets_;
  int numBuckets_;
  volatile int m_dwProducerBucketIndex;
  volatile int m_dwConsumerBucketIndex;
  List<WinInetAsyncHttpClient_HttpDownloadRequest *> m_backupList;
  int m_dwBackupListLen;
  SharedCriticalSection m_backupListCritSec;
};


struct HttpClient
{
  HttpClientVtbl *vfptr;
  HttpClientImplementation *m_implementation;
};


struct HttpClientVtbl
{
  void *(__thiscall *__vecDelDtor)(HttpClient *this, unsigned int);
  bool (__thiscall *Initialize)(HttpClient *this, IHttpClientListener *);
  void (__thiscall *Terminate)(HttpClient *this);
  unsigned int (__thiscall *GetThrottle)(HttpClient *this);
  void (__thiscall *SetThrottle)(HttpClient *this, unsigned int);
};


struct WinInetAsyncHttpClient : IAsyncHttpClient, PortalThread, IAsyncHttpClientListener, IHttpClientListener
{
  IAsyncHttpClientListener *m_listener;
  PortalEvent m_event;
  LFQueue<WinInetAsyncHttpClient_HttpDownloadEvent *> m_eventQueue;
  LFQueue<WinInetAsyncHttpClient_HttpDownloadRequest *> m_requestQueue;
  HttpClient m_client;
  $E787915F5035F3690E728927C602C3BC m_state;
  unsigned int m_currentContext;
};


struct WinInetAsyncHttpClient_OnResponseEvent : WinInetAsyncHttpClient_HttpDownloadEvent
{
  SmartBuffer m_response;
  unsigned int m_context;
};


struct WinInetAsyncHttpClient_OnErrorEvent : WinInetAsyncHttpClient_HttpDownloadEvent
{
  HRESULT m_error;
  unsigned int m_context;
};


struct WinInetAsyncHttpClient_OnDownloadStatusEvent : WinInetAsyncHttpClient_HttpDownloadEvent
{
  unsigned int m_fileSize;
  unsigned int m_bytesDownloaded;
  unsigned int m_context;
};


struct WinInetAsyncHttpClient_GetRequest : WinInetAsyncHttpClient_HttpDownloadRequest
{
  _STL_basic_string<unsigned short,_STL_char_traits<unsigned short>,_STL_allocator<unsigned short> > m_url;
};


struct WinInetAsyncHttpClient_PostRequest : WinInetAsyncHttpClient_GetRequest
{
  SmartBuffer m_postData;
};



struct ListIterator<PStringBase<char> >
{
  ListIterator<PStringBase<char> >Vtbl *vfptr;
  ListNode<PStringBase<char> > *_current;
  List<PStringBase<char> > *_list;
};


struct ListIterator<PStringBase<char> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<PStringBase<char> > *this, unsigned int);
};


struct _STL_allocator<char>_rebind<char>
{
};


struct _STL_allocator<unsigned short>_rebind<unsigned short>
{
};


struct _STL_allocator<char const *>
{
};


struct _STL__STLP_alloc_proxy<char const * *,char const *,_STL_allocator<char const *> > : _STL_allocator<char const *>
{
  const char **_M_data;
};


struct _STL__Vector_base<char const *,_STL_allocator<char const *> >
{
  const char **_M_start;
  const char **_M_finish;
  _STL__STLP_alloc_proxy<char const * *,char const *,_STL_allocator<char const *> > _M_end_of_storage;
};


struct _STL_vector<char const *,_STL_allocator<char const *> > : _STL__Vector_base<char const *,_STL_allocator<char const *> >
{
};


struct _STL_allocator<char const *>_rebind<char const *>
{
};


struct PixelFormatDesc
{
  PixelFormatID format;
  unsigned int flags;
  unsigned int fourCC;
  char bitsPerPixel;
  unsigned int redBitMask;
  unsigned int greenBitMask;
  unsigned int blueBitMask;
  unsigned int alphaBitMask;
  char redBitCount;
  char greenBitCount;
  char blueBitCount;
  char alphaBitCount;
  char redBitOffset;
  char greenBitOffset;
  char blueBitOffset;
  char alphaBitOffset;
  unsigned int redMax;
  unsigned int greenMax;
  unsigned int blueMax;
  unsigned int alphaMax;
};



struct CircularArray<char,32768,1>
{
  unsigned int m_nStartIndex;
  unsigned int m_nEndIndex;
  unsigned int m_nNumElements;
  char m_aMemory[32768];
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *,0>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *,0>Vtbl *vfptr;
  HashTableData<PStringBase<char>,GRPCommand *> *m_aInplaceBuckets[23];
  HashTableData<PStringBase<char>,GRPCommand *> **m_buckets;
  HashTableData<PStringBase<char>,GRPCommand *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<PStringBase<char>,GRPCommand *,0>
{
  HashTable<PStringBase<char>,GRPCommand *,0>Vtbl *vfptr;
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *,0> m_intrusiveTable;
};


struct HashTable<PStringBase<char>,GRPCommand *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<PStringBase<char>,GRPCommand *,0> *this, unsigned int);
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *>
{
  PStringBase<char> m_hashKey;
  HashTableData<PStringBase<char>,GRPCommand *> *m_hashNext;
};


struct HashTableData<PStringBase<char>,GRPCommand *> : IntrusiveHashData<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *>
{
  GRPCommand *m_data;
};


struct GRPGeneric
{
  GRPGenericVtbl *vfptr;
  PStringBase<char> m_Name;
  PStringBase<char> m_Description;
};


struct GRPCommand : GRPGeneric
{
};


union $479604A1880A22E30D8DCA20AC86CD62
{
  GRPGeneric *(__thiscall *AsGeneric)(GRPGeneric *this);
  GRPGeneric *(__thiscall *AsGeneric)(GRPGeneric *this);
};


union $700D252F69A887878D06C49D26064033
{
  GRPCommand *(__thiscall *AsCommand)(GRPGeneric *this);
  GRPCommand *(__thiscall *AsCommand)(GRPGeneric *this);
};


union $D354D9AAC60C23AFFCECBD8FEC321672
{
  GRPNoArgsCommand *(__thiscall *AsNoArgsCommand)(GRPGeneric *this);
  GRPNoArgsCommand *(__thiscall *AsNoArgsCommand)(GRPGeneric *this);
};


union $BFB9C0B919E9155C81FE38D13EBE2837
{
  GRPWithArgsCommand *(__thiscall *AsWithArgsCommand)(GRPGeneric *this);
  GRPWithArgsCommand *(__thiscall *AsWithArgsCommand)(GRPGeneric *this);
};


union $2DF1AE3C76809F1301F034F2C4416025
{
  GRPObject *(__thiscall *AsObject)(GRPGeneric *this);
  GRPObject *(__thiscall *AsObject)(GRPGeneric *this);
};


union $3C1600877FA571EEAC749C067AE55A1C
{
  GRPMetaDataObject *(__thiscall *AsMetaDataObject)(GRPGeneric *this);
  GRPMetaDataObject *(__thiscall *AsMetaDataObject)(GRPGeneric *this);
};


union $9DD6053BF78569BA489683522D97C1E0
{
  GRPVariableObject *(__thiscall *AsVariableObject)(GRPGeneric *this);
  GRPVariableObject *(__thiscall *AsVariableObject)(GRPGeneric *this);
};


union $BF2F986D04E2DDDED6360C7E911CE701
{
  GRPShadowVariableObject *(__thiscall *AsShadowVariableObject)(GRPGeneric *this);
  GRPShadowVariableObject *(__thiscall *AsShadowVariableObject)(GRPGeneric *this);
};


union $A3D3562330EC9062B9418DE85DAEB965
{
  GRPTypedVariableObject *(__thiscall *AsTypedVariableObject)(GRPGeneric *this);
  GRPTypedVariableObject *(__thiscall *AsTypedVariableObject)(GRPGeneric *this);
};


struct GRPGenericVtbl
{
  _BYTE gap0[4];
  $479604A1880A22E30D8DCA20AC86CD62 ___u0;
  _BYTE gap8[4];
  $700D252F69A887878D06C49D26064033 ___u1;
  _BYTE gap10[4];
  $D354D9AAC60C23AFFCECBD8FEC321672 ___u2;
  _BYTE gap18[4];
  $BFB9C0B919E9155C81FE38D13EBE2837 ___u3;
  _BYTE gap20[4];
  $2DF1AE3C76809F1301F034F2C4416025 ___u4;
  _BYTE gap28[4];
  $3C1600877FA571EEAC749C067AE55A1C ___u5;
  _BYTE gap30[4];
  $9DD6053BF78569BA489683522D97C1E0 ___u6;
  _BYTE gap38[4];
  $BF2F986D04E2DDDED6360C7E911CE701 ___u7;
  _BYTE gap40[4];
  $A3D3562330EC9062B9418DE85DAEB965 ___u8;
};


const struct GRPNoArgsCommand : GRPCommand
{
  bool (__cdecl *m_FunctionPointerNoArgs)();
};


const struct __unaligned __declspec(align(4)) GRPWithArgsCommand : GRPCommand
{
  PStringBase<char> m_Usage;
  bool (__cdecl *m_FunctionPointerWithArgs)(PStringBaseArray<char> *);
};


const struct __unaligned __declspec(align(4)) GRPObject : GRPGeneric
{
};


const struct __unaligned __declspec(align(4)) GRPMetaDataObject : GRPObject
{
  void *m_pObject;
  const struct MetaData_ClassData *m_pClassData;
};


const struct __unaligned __declspec(align(4)) GRPVariableObject : GRPObject
{
};


const struct GRPShadowVariableObject : GRPVariableObject
{
  PStringBase<char> m_ValueString;
};


struct FixedArray<PStringBase<char> >
{
  PStringBase<char> *m_data;
  unsigned int m_num;
};


struct FixedArray<unsigned long>
{
  unsigned int *m_data;
  unsigned int m_num;
};


const struct __unaligned __declspec(align(4)) GRPTypedVariableObject : GRPVariableObject
{
  void *m_pVariable;
  GRVDataType m_Type;
  void (__cdecl *m_OnChangedCallbackFunction)(PStringBase<char> *);
  FixedArray<PStringBase<char> > m_Choices;
  FixedArray<unsigned long> m_ChoiceValues;
  bool m_IsGlobal;
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *,0>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *,0>Vtbl *vfptr;
  HashTableData<PStringBase<char>,GRPObject *> *m_aInplaceBuckets[23];
  HashTableData<PStringBase<char>,GRPObject *> **m_buckets;
  HashTableData<PStringBase<char>,GRPObject *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<PStringBase<char>,GRPObject *,0>
{
  HashTable<PStringBase<char>,GRPObject *,0>Vtbl *vfptr;
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *,0> m_intrusiveTable;
};


struct HashTable<PStringBase<char>,GRPObject *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<PStringBase<char>,GRPObject *,0> *this, unsigned int);
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *>
{
  PStringBase<char> m_hashKey;
  HashTableData<PStringBase<char>,GRPObject *> *m_hashNext;
};


struct HashTableData<PStringBase<char>,GRPObject *> : IntrusiveHashData<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *>
{
  GRPObject *m_data;
};


struct IConsoleCallbackObject
{
  IConsoleCallbackObjectVtbl *vfptr;
};


struct IConsoleCallbackObjectVtbl
{
  void (__thiscall *ConsoleCallback_OnTextAdded)(IConsoleCallbackObject *this, PStringBase<char> *);
};


struct SmartArray<IConsoleCallbackObject *,1>
{
  IConsoleCallbackObject **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct GlobalRegistryInstance
{
  CircularArray<char,32768,1> m_Characters;
  HashTable<PStringBase<char>,GRPCommand *,0> m_CommandHash;
  HashTable<PStringBase<char>,GRPObject *,0> m_ObjectHash;
  SmartArray<IConsoleCallbackObject *,1> m_ConsoleCallbackObjects;
};


struct ICIDM
{
  ICIDMVtbl *vfptr;
};


union $3A12A35673ABAF6F36D474785B94EEE7
{
  bool (__thiscall *AddKeyMap)(ICIDM *this, PStringBase<char>);
  bool (__thiscall *AddKeyMap)(ICIDM *this, unsigned int);
};




union $6C55AAF44FF814F2A14F72D46C5F36D9
{
  PStringBase<char> *(__thiscall *GetNameFromKey)(ICIDM *this, PStringBase<char> *result, QualifiedControl *);
  PStringBase<char> *(__thiscall *GetNameFromKey)(ICIDM *this, PStringBase<char> *result, ControlSpecification);
};


struct QualifiedControl
{
  ControlSpecification m_key;
  unsigned int m_metamode;
  unsigned int m_activation;
};


struct ICIDMVtbl
{
  void *(__thiscall *__vecDelDtor)(ICIDM *this, unsigned int);
  _BYTE gap4[20];
  int (__thiscall *GetMouseX)(ICIDM *this);
  int (__thiscall *GetMouseY)(ICIDM *this);
  bool (__thiscall *SetMouseXY)(ICIDM *this, int, int);
  bool (__thiscall *ClearKeyMap)(ICIDM *this);
  _BYTE gap28[4];
  $3A12A35673ABAF6F36D474785B94EEE7 ___u5;
  bool (__thiscall *SaveKeyMap)(ICIDM *this, PStringBase<char>);
  bool (__thiscall *RegisterInputMap)(ICIDM *this, unsigned int, IInputActionCallback *, int);
  bool (__thiscall *UnregisterInputMap)(ICIDM *this, unsigned int, IInputActionCallback *);
  void (__thiscall *UnregisterCallback)(ICIDM *this, IInputActionCallback *);
  bool (__thiscall *SetActionMap)(ICIDM *this, unsigned int);
  ActionMap *(__thiscall *GetActionMap)(ICIDM *this);
  bool (__thiscall *RegisterInputHandler)(ICIDM *this, CInputHandler *, unsigned int);
  bool (__thiscall *UnregisterInputHandler)(ICIDM *this, CInputHandler *, unsigned int);
  bool (__thiscall *IsMetaKey)(ICIDM *this, ControlSpecification);
  DeviceType (__thiscall *GetDeviceTypeFromKey)(ICIDM *this, ControlSpecification);
  bool (__thiscall *ShiftKeyDown)(ICIDM *this);
  bool (__thiscall *CtrlKeyDown)(ICIDM *this);
  bool (__thiscall *AltKeyDown)(ICIDM *this);
  void (__thiscall *SetMouseLookMode)(ICIDM *this, bool);
  bool (__thiscall *GetMouseLookMode)(ICIDM *this);
  void (__thiscall *ConfigureMouseLookMode)(ICIDM *this, MouseLookBehavior, int, int);
  int (__thiscall *OnMessage)(ICIDM *this, tagMSG *, bool *);
  void (__thiscall *Activate)(ICIDM *this, bool);
  void (__thiscall *OnUIElementActivationChanging)(ICIDM *this);
  __declspec(align(8)) $6C55AAF44FF814F2A14F72D46C5F36D9 ___u25;
  PStringBase<char> *(__thiscall *GetNameFromMetaKey)(ICIDM *this, PStringBase<char> *result, ControlSpecification);
  bool (__thiscall *BindAction)(ICIDM *this, QualifiedControl, unsigned int, unsigned int);
  bool (__thiscall *UnbindByKey)(ICIDM *this, QualifiedControl, unsigned int);
  bool (__thiscall *FindKeysForAction)(ICIDM *this, unsigned int, unsigned int, List<QualifiedControl> *);
  bool (__thiscall *FindConflictingInputMaps)(ICIDM *this, unsigned int, List<unsigned long> *);
  bool (__thiscall *FindConflictingControls)(ICIDM *this, QualifiedControl *, unsigned int, SmartArray<_STL_pair<QualifiedControl,unsigned long>,1> *);
  bool (__thiscall *UnbindAllByAction)(ICIDM *this, unsigned int, unsigned int);
  unsigned int (__thiscall *GetDoubleClickDelay)(ICIDM *this);
  unsigned int (__thiscall *GetTapDelay)(ICIDM *this);
  void (__thiscall *SetTextMode)(ICIDM *this, bool);
  bool (__thiscall *GetTextMode)(ICIDM *this);
};




struct _STL_allocator<bool>
{
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1>Vtbl *vfptr;
  HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *m_aInplaceBuckets[23];
  HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData **m_buckets;
  HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashList<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>
{
  IntrusiveHashList<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1> m_ihlIntrusive;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,InputMapConflictsValue> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,InputMapConflictsValue> **m_buckets;
  HashTableData<unsigned long,InputMapConflictsValue> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,InputMapConflictsValue,0>
{
  HashTable<unsigned long,InputMapConflictsValue,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *,0> m_intrusiveTable;
};




struct CInputHandler
{
  CInputHandlerVtbl *vfptr;
};


struct List<QualifiedControl>
{
  List<QualifiedControl>Vtbl *vfptr;
  ListNode<QualifiedControl> *_head;
  ListNode<QualifiedControl> *_tail;
  unsigned int _num_elements;
};


struct List<unsigned long>
{
  List<unsigned long>Vtbl *vfptr;
  ListNode<unsigned long> *_head;
  ListNode<unsigned long> *_tail;
  unsigned int _num_elements;
};


struct SmartArray<_STL_pair<QualifiedControl,unsigned long>,1>
{
  _STL_pair<QualifiedControl,unsigned long> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IInputActionCallbackVtbl
{
  void *(__thiscall *__vecDelDtor)(IInputActionCallback *this, unsigned int);
  bool (__thiscall *OnAction)(IInputActionCallback *this, InputEvent *);
  CallbackLoseFocusResult (__thiscall *OnLoseFocus)(IInputActionCallback *this, const unsigned int, unsigned int, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *,1>Vtbl *vfptr;
  HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *m_aInplaceBuckets[23];
  HashTableData<IDClass<_tagDataID,32,0>,DBObj *> **m_buckets;
  HashTableData<IDClass<_tagDataID,32,0>,DBObj *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<IDClass<_tagDataID,32,0>,DBObj *,1>
{
  HashTable<IDClass<_tagDataID,32,0>,DBObj *,1>Vtbl *vfptr;
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *,1> m_intrusiveTable;
};


struct AutoGrowHashTable<IDClass<_tagDataID,32,0>,DBObj *> : HashTable<IDClass<_tagDataID,32,0>,DBObj *,1>
{
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,float> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,float> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,float> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,float> **m_buckets;
  HashTableData<unsigned long,float> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,float,0>
{
  HashTable<unsigned long,float,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,float> *,0> m_intrusiveTable;
};



struct IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *>
{
  unsigned int m_hashKey;
  HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *> : IntrusiveHashData<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *>, DLListData
{
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1>Vtbl *vfptr;
  HashList<unsigned long,ActionMapValue,1>_HashListData *m_aInplaceBuckets[23];
  HashList<unsigned long,ActionMapValue,1>_HashListData **m_buckets;
  HashList<unsigned long,ActionMapValue,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashList<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct HashList<unsigned long,ActionMapValue,1>
{
  IntrusiveHashList<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1> m_ihlIntrusive;
};


struct HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData : IntrusiveHashListData<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *>
{
  HashList<unsigned long,ActionMapValue,1> m_data;
};


struct HashTable<unsigned long,InputMapConflictsValue,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,InputMapConflictsValue,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,InputMapConflictsValue> *m_hashNext;
};


struct InputMapConflictsValue
{
  unsigned int m_eInputMap;
  List<unsigned long> m_listConflictingInputMaps;
};


struct HashTableData<unsigned long,InputMapConflictsValue> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *>
{
  InputMapConflictsValue m_data;
};


struct CInputHandlerVtbl
{
  void (__thiscall *ActionHandler)(CInputHandler *this, InputEvent *);
  void (__thiscall *MouseMoveHandler)(CInputHandler *this, int, int);
  void (__thiscall *MouseLookHandler)(CInputHandler *this, int, int);
  void (__thiscall *FocusSwitchHandler)(CInputHandler *this, bool, int);
  void (__thiscall *CharacterHandler)(CInputHandler *this, wchar_t);
  bool (__thiscall *KeyHitHandler)(CInputHandler *this, QualifiedControl *, unsigned int *);
};


struct List<QualifiedControl>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<QualifiedControl> *this, unsigned int);
};


struct ListNode<QualifiedControl>
{
  QualifiedControl data;
  ListNode<QualifiedControl> *next;
  ListNode<QualifiedControl> *prev;
};


struct List<unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<unsigned long> *this, unsigned int);
};


struct ListNode<unsigned long>
{
  unsigned int data;
  ListNode<unsigned long> *next;
  ListNode<unsigned long> *prev;
};


struct _STL_pair<QualifiedControl,unsigned long>
{
  QualifiedControl first;
  unsigned int second;
};


const struct __declspec(align(8)) InputEvent
{
  unsigned int m_InputAction;
  unsigned int m_InputMapID;
  QualifiedControl m_InputKey;
  float m_InputExtent;
  unsigned int m_InputTimestamp;
  unsigned int m_ToggleType;
  bool m_fStart;
  long double m_timeActionBegan;
  unsigned int m_cRepeatDelta;
  unsigned int m_cRepeatTotal;
  tagPOINT m_ptMousePos;
  IInputActionCallback *m_pcCallback;
};


struct DBOCacheVtbl
{
  void *(__thiscall *__vecDelDtor)(DBOCache *this, unsigned int);
  _BYTE gap4[8];
  struct Collection *(__thiscall *GetCollection)(DBOCache *this, IDClass<_tagDataID,32,0>);
  bool (__thiscall *SetCollection)(DBOCache *this, struct Collection *);
  unsigned int (__thiscall *Release)(DBOCache *this, IDClass<_tagDataID,32,0>);
  bool (__thiscall *AddObj)(DBOCache *this, DBObj *);
  bool (__thiscall *RemoveObj)(DBOCache *this, IDClass<_tagDataID,32,0>);
  bool (__thiscall *CanLoadFromDisk)(DBOCache *this);
  bool (__thiscall *CanRequestFromNet)(DBOCache *this);
  void (__thiscall *FlushFreeObjects)(DBOCache *this);
  bool (__thiscall *SaveObjectToDisk)(DBOCache *this, PreprocHeader *, DBObj *);
  bool (__thiscall *ReloadObject)(DBOCache *this, IDClass<_tagDataID,32,0>);
  void (__thiscall *LastWords)(DBOCache *this);
  bool (__thiscall *AddObj_Internal)(DBOCache *this, DBObj *);
  void (__thiscall *RemoveObj_Internal)(DBOCache *this, DBObj *);
  void (__thiscall *FreeObject)(DBOCache *this, DBObj *);
  void (__thiscall *DestroyObj)(DBOCache *this, DBObj *);
  void (__thiscall *FreelistAdd)(DBOCache *this, DBObj *);
  void (__thiscall *FreelistRemove)(DBOCache *this, DBObj *);
  DBObj *(__thiscall *FreelistRemoveOldest)(DBOCache *this);
};


struct HashTable<IDClass<_tagDataID,32,0>,DBObj *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<IDClass<_tagDataID,32,0>,DBObj *,1> *this, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *m_hashNext;
};


struct HashTableData<IDClass<_tagDataID,32,0>,DBObj *> : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *>
{
  DBObj *m_data;
};


struct HashTable<unsigned long,float,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,float,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,float> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,float> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,float> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,float> *m_hashNext;
};


struct HashTableData<unsigned long,float> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,float> *>HashList
{
  float m_data;
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *>
{
  unsigned int m_hashKey;
  HashList<unsigned long,ActionMapValue,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *> : IntrusiveHashData<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *>, DLListData
{
};



struct HashList<unsigned long,ActionMapValue,1>_HashListData : IntrusiveHashListData<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *>
{
  ActionMapValue m_data;
};


const struct PreprocHeader
{
  PStringBase<char> header_data[4];
};







struct InterfaceInfo<IObjectFactory>
{
};



struct SmartArray<IDClass<_tagDataID,32,0>,1>
{
  IDClass<_tagDataID,32,0> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashData<QualifiedDataID,DBObjSaveInfo *>
{
  QualifiedDataID m_hashKey;
  DBObjSaveInfo *m_hashNext;
};


struct DBObjSaveInfo : IntrusiveHashData<QualifiedDataID,DBObjSaveInfo *>
{
  unsigned int m_dwSubDataIDFlags;
};


struct IntrusiveHashTable<QualifiedDataID,DBObjSaveInfo *,1>
{
  IntrusiveHashTable<QualifiedDataID,DBObjSaveInfo *,1>Vtbl *vfptr;
  DBObjSaveInfo *m_aInplaceBuckets[23];
  DBObjSaveInfo **m_buckets;
  DBObjSaveInfo **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<QualifiedDataID,DBObjSaveInfo *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<QualifiedDataID,DBObjSaveInfo *,1> *this, unsigned int);
};


struct IntrusiveHashIterator<QualifiedDataID,DBObjSaveInfo *,1>
{
  IntrusiveHashTable<QualifiedDataID,DBObjSaveInfo *,1> *m_currHashTable;
  DBObjSaveInfo **m_currBucket;
  DBObjSaveInfo *m_currElement;
};


struct QualifiedDataIDArray : IntrusiveHashTable<QualifiedDataID,DBObjSaveInfo *,1>
{
  IntrusiveHashIterator<QualifiedDataID,DBObjSaveInfo *,1> m_CurBracketIterator;
  unsigned int m_LastBracketIndex;
};



struct IDataGraphVtbl
{
  bool (__thiscall *add_did)(IDataGraph *this, IDClass<_tagDataID,32,0>);
  _BYTE gap4[4];
  bool (__thiscall *remove_did)(IDataGraph *this, IDClass<_tagDataID,32,0>);
  bool (__thiscall *add_iid)(IDataGraph *this, unsigned int);
  bool (__thiscall *add_iid_iid_link)(IDataGraph *this, unsigned int, unsigned int);
  bool (__thiscall *add_iid_did_link)(IDataGraph *this, unsigned int, IDClass<_tagDataID,32,0>);
  bool (__thiscall *remove_iid)(IDataGraph *this, unsigned int);
  bool (__thiscall *add)(IDataGraph *this, const struct DataKey *);
  bool (__thiscall *add_link)(IDataGraph *this, const struct DataKey *, const struct DataKey *);
  bool (__thiscall *remove)(IDataGraph *this, const struct DataKey *);
  bool (__thiscall *remove_link)(IDataGraph *this, const struct DataKey *, const struct DataKey *);
  bool (__thiscall *check_did_link)(IDataGraph *this, IDClass<_tagDataID,32,0>, IDClass<_tagDataID,32,0>);
  bool (__thiscall *check_iid_link)(IDataGraph *this, unsigned int, unsigned int);
  bool (__thiscall *check_iid_did_link)(IDataGraph *this, unsigned int, IDClass<_tagDataID,32,0>);
  bool (__thiscall *check_ancestor_did)(IDataGraph *this, IDClass<_tagDataID,32,0>, IDClass<_tagDataID,32,0>);
};


struct IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *,1>
{
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *,1>Vtbl *vfptr;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *m_aInplaceBuckets[23];
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> **m_buckets;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long,1>
{
  HashTable<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long,1>Vtbl *vfptr;
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *,1> m_intrusiveTable;
};


struct AutoGrowHashTable<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> : HashTable<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long,1>
{
};



struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *,1>Vtbl *vfptr;
  HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > **m_buckets;
  HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,CaseInsensitiveStringBase<PStringBase<char> >,1>
{
  HashTable<unsigned long,CaseInsensitiveStringBase<PStringBase<char> >,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *,1> m_intrusiveTable;
};


struct AutoGrowHashTable<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > : HashTable<unsigned long,CaseInsensitiveStringBase<PStringBase<char> >,1>
{
};


struct HashTable<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long,1> *this, unsigned int);
};


struct IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *,1> *this, unsigned int);
};


struct IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *>
{
  CaseInsensitiveStringBase<PStringBase<char> > m_hashKey;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *m_hashNext;
};


struct HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> : IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *>
{
  unsigned int m_data;
};


struct HashTable<unsigned long,CaseInsensitiveStringBase<PStringBase<char> >,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,CaseInsensitiveStringBase<PStringBase<char> >,1> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *m_hashNext;
};


struct HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *>
{
  CaseInsensitiveStringBase<PStringBase<char> > m_data;
};



struct AsyncCacheCallbackVtbl
{
  void (__thiscall *OnContextFinished)(AsyncCacheCallback *this, AsyncContext, AsyncResult, unsigned int);
  void (__thiscall *OnTopLevelRequestFinished)(AsyncCacheCallback *this, AsyncContext, QualifiedDataID, AsyncResult, unsigned int, int, void *);
};


struct DatIDStamp
{
  _GUID _maj_vnum;
  unsigned int _min_vnum;
};


struct DiskFileInfo_t
{
  int magic_;
  int iBlockSize_;
  unsigned int fileSize_;
  DATFILE_TYPE data_set_lm;
  unsigned int data_subset_lm;
  int firstFree_;
  int finalFree_;
  int iFreeBlocks_;
  int btreeRoot_;
  int young_lru_lm;
  int old_lru_lm;
  bool use_lru_fm;
  IDClass<_tagDataID,32,0> master_map_id_m;
  int eng_pack_vnum;
  int game_pack_vnum;
  DatIDStamp id_vnum;
};


struct DiskHeaderBlock_t
{
  char acVersionStr_[256];
  char acTransactionRecord[64];
  DiskFileInfo_t FileInfo_;
};


struct TDynamicCircularArray<AsyncCache_CCallbackHandler *>
{
  TDynamicCircularArray<AsyncCache_CCallbackHandler *>Vtbl *vfptr;
  AsyncCache_CCallbackHandler **A;
  unsigned int first;
  unsigned int next;
  unsigned int count;
  unsigned int max;
  unsigned int growsize;
};


struct IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *,1>
{
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *,1>Vtbl *vfptr;
  HashTableData<QualifiedDataID,CAsyncGetRequest *> *m_aInplaceBuckets[23];
  HashTableData<QualifiedDataID,CAsyncGetRequest *> **m_buckets;
  HashTableData<QualifiedDataID,CAsyncGetRequest *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<QualifiedDataID,CAsyncGetRequest *,1>
{
  HashTable<QualifiedDataID,CAsyncGetRequest *,1>Vtbl *vfptr;
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *,1> m_intrusiveTable;
};


struct AutoGrowHashTable<QualifiedDataID,CAsyncGetRequest *> : HashTable<QualifiedDataID,CAsyncGetRequest *,1>
{
};


struct IntrusiveHashTable<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *,1>
{
  IntrusiveHashTable<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *,1>Vtbl *vfptr;
  HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *m_aInplaceBuckets[23];
  HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> **m_buckets;
  HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<AsyncContext,AsyncCache_CCallbackHandler *,1>
{
  HashTable<AsyncContext,AsyncCache_CCallbackHandler *,1>Vtbl *vfptr;
  IntrusiveHashTable<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *,1> m_intrusiveTable;
};


struct AutoGrowHashTable<AsyncContext,AsyncCache_CCallbackHandler *> : HashTable<AsyncContext,AsyncCache_CCallbackHandler *,1>
{
};



union $F1026C46A91364D736E48DC9BF562217
{
  AsyncContext *(__thiscall *AsyncPurge)(AsyncCache *this, AsyncContext *result, QualifiedDataIDArray *, AsyncCacheCallback *, unsigned int);
  AsyncContext *(__thiscall *AsyncPurge)(AsyncCache *this, AsyncContext *result, QualifiedDataID *, AsyncCacheCallback *, unsigned int);
};


union $3578EF11CE7628A82DA0CA7D8F8BA153
{
  bool (__thiscall *AddToAsyncGet)(AsyncCache *this, unsigned int, QualifiedDataIDArray *, void *);
  bool (__thiscall *AddToAsyncGet)(AsyncCache *this, AsyncContext, SmartArray<_STL_pair<unsigned long,QualifiedDataIDArray>,1> *);
  bool (__thiscall *AddToAsyncGet)(AsyncCache *this, AsyncContext, unsigned int, QualifiedDataIDArray *);
};


struct AsyncCacheVtbl
{
  DBObj *(__thiscall *BlockingGet)(AsyncCache *this, unsigned int, QualifiedDataID *);
  _BYTE gap4[16];
  AsyncContext *(__thiscall *AsyncGet)(AsyncCache *this, AsyncContext *result, unsigned int, QualifiedDataID *, AsyncCacheCallback *, unsigned int);
  void (__thiscall *AsyncGetImmediate)(AsyncCache *this, AsyncContext *, unsigned int, QualifiedDataIDArray *, AsyncCacheCallback *, unsigned int);
  __declspec(align(8)) $F1026C46A91364D736E48DC9BF562217 ___u3;
  AsyncContext *(__thiscall *AsyncSave)(AsyncCache *this, AsyncContext *result, QualifiedDataID *, Cache_Pack_t *, unsigned __int64, AsyncCacheCallback *, unsigned int);
  _BYTE gap28[8];
  $3578EF11CE7628A82DA0CA7D8F8BA153 ___u5;
  void (__thiscall *ReleaseContext)(AsyncCache *this, AsyncContext);
  DBOCache *(__thiscall *GetDBOCache)(AsyncCache *this, QualifiedDataID *);
  bool (__thiscall *IsOnDisk)(AsyncCache *this, QualifiedDataID *);
  bool (__thiscall *AreOnDisk)(AsyncCache *this, QualifiedDataIDArray *);
  void (__thiscall *UseTime)(AsyncCache *this) __declspec(align(8));
  void (__thiscall *HashAndEnqueue)(AsyncCache *this, CAsyncGetRequest *);
  void (__thiscall *EnqueueAsyncRequest)(AsyncCache *this, AsyncCache_CAsyncRequest *);
  void (__thiscall *UnhashPendingGet)(AsyncCache *this, CAsyncGetRequest *, CAsyncGetRequest *);
  void (__thiscall *FlushPendingRequests)(AsyncCache *this);
  void (__thiscall *OnRequestFinished)(AsyncCache *this, AsyncCache_CAsyncRequest *);
  void (__thiscall *OnGetRequestFinished)(AsyncCache *this, CAsyncGetRequest *);
  void (__thiscall *OnSaveRequestFinished)(AsyncCache *this, CAsyncSaveRequest *);
  void (__thiscall *OnPurgeRequestFinished)(AsyncCache *this, CAsyncPurgeRequest *);
  void (__thiscall *NotifyCallback)(AsyncCache *this, AsyncCache_CAsyncRequest *);
  void (__thiscall *OnAsyncGetFinished)(AsyncCache *this, CAsyncGetRequest *);
  void (__thiscall *CallPendingCallbacks)(AsyncCache *this);
  DBObj *(__thiscall *BlockingGetFromDisk)(AsyncCache *this, QualifiedDataID *, DBOCache *);
  bool (__thiscall *BlockingLoadInto)(AsyncCache *this, DBObj *, QualifiedDataID *, DBOCache *);
  bool (__thiscall *SerializeFromCachePack)(AsyncCache *this, DBObj *, Cache_Pack_t *);
  DBObj *(__thiscall *GetIfInMemory)(AsyncCache *this, QualifiedDataID *, DBOCache *);
  DBObj *(__thiscall *GetFreeObj)(AsyncCache *this, QualifiedDataID *, DBOCache *);
  bool (__thiscall *AsyncGetFromOtherSources)(AsyncCache *this, QualifiedDataID *, DBOCache *);
  void (__thiscall *OnAsyncGetFromOtherSourcesFailed)(AsyncCache *this, QualifiedDataID *);
  bool (__thiscall *AddObjToDBOCache)(AsyncCache *this, DBObj *, DBOCache *);
  DiskController *(__thiscall *GetDiskController)(AsyncCache *this, QualifiedDataID *, unsigned __int64);
  bool (__thiscall *LoadData)(AsyncCache *this, QualifiedDataID *, Cache_Pack_t *, unsigned __int64);
  bool (__thiscall *SaveData)(AsyncCache *this, QualifiedDataID *, Cache_Pack_t *, unsigned __int64);
  bool (__thiscall *PurgeData)(AsyncCache *this, QualifiedDataID *, unsigned __int64);
};


struct TDynamicCircularArray<AsyncCache_CCallbackHandler *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(TDynamicCircularArray<AsyncCache_CCallbackHandler *> *this, unsigned int);
  unsigned int (__thiscall *Add)(TDynamicCircularArray<AsyncCache_CCallbackHandler *> *this, AsyncCache_CCallbackHandler *const *);
  void (__thiscall *Remove)(TDynamicCircularArray<AsyncCache_CCallbackHandler *> *this, unsigned int);
  AsyncCache_CCallbackHandler *(__thiscall *RemoveAndReturn)(TDynamicCircularArray<AsyncCache_CCallbackHandler *> *this, unsigned int);
  void (__thiscall *Clear)(TDynamicCircularArray<AsyncCache_CCallbackHandler *> *this);
};


struct SmartArray<AsyncCache_CAsyncRequest *,1>
{
  AsyncCache_CAsyncRequest **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) AsyncCache_CCallbackHandler : ReferenceCountTemplate_1048576_0
{
  int m_nRequestsPending;
  AsyncCacheCallback *m_pCallbackPlugin;
  AsyncResult m_AccumulatedResults;
  unsigned int m_dwUser1;
  SmartArray<AsyncCache_CAsyncRequest *,1> m_TopLevelReqs;
  AsyncContext m_hContext;
  bool m_bContextFinished;
};


struct HashTable<QualifiedDataID,CAsyncGetRequest *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<QualifiedDataID,CAsyncGetRequest *,1> *this, unsigned int);
};


struct IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *>
{
  QualifiedDataID m_hashKey;
  HashTableData<QualifiedDataID,CAsyncGetRequest *> *m_hashNext;
};


struct HashTableData<QualifiedDataID,CAsyncGetRequest *> : IntrusiveHashData<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *>
{
  CAsyncGetRequest *m_data;
};


struct HashTable<AsyncContext,AsyncCache_CCallbackHandler *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<AsyncContext,AsyncCache_CCallbackHandler *,1> *this, unsigned int);
};


struct IntrusiveHashTable<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *>
{
  AsyncContext m_hashKey;
  HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *m_hashNext;
};

struct HashTableData<K,V> : IntrusiveHashData<K,HashTableData<K,V>*>
{
  V m_data;
};


struct HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> : IntrusiveHashData<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *>
{
  AsyncCache_CCallbackHandler *m_data;
};


struct Cache_Pack_t
{
  int m_dwOffset;
  unsigned int m_iVersion;
  SmartBuffer m_buff;
};


const struct SmartArray<_STL_pair<unsigned long,QualifiedDataIDArray>,1>
{
  _STL_pair<unsigned long,QualifiedDataIDArray> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};



struct SmartArray<AsyncCache_CAsyncRequest_CCallbackWrapper,1>
{
  AsyncCache_CAsyncRequest_CCallbackWrapper *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct AsyncCache_CAsyncRequest : ReferenceCountTemplate_1048576_0
{
  AsyncResult Result;
  $6132C438F0B638693FB2F3E0AF1DACE5 ___u2;
  QualifiedDataID qdid;
  SmartArray<AsyncCache_CAsyncRequest_CCallbackWrapper,1> m_pCallbacks;
  DBObj *m_pObj;
};


struct SmartArray<CAsyncGetRequest *,1>
{
  CAsyncGetRequest **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct CAsyncGetRequest : AsyncCache_CAsyncRequest
{
  unsigned int GSDIType;
  SmartArray<CAsyncGetRequest *,1> RequestsWaitingForMe;
  SmartArray<CAsyncGetRequest *,1> RequestsImWaitingFor;
  Cache_Pack_t Buf;
  int nGetsRemaining;
  DBOCache *pObjCache;
  unsigned int m_dwGetRequestFlags;
};


struct __declspec(align(8)) CAsyncSaveRequest : AsyncCache_CAsyncRequest
{
  Cache_Pack_t Buf;
  unsigned __int64 idTargetDatFile;
  unsigned int dwDiskControllerSaveFlags;
  unsigned int idIteration;
  DiskController *pDisk;
};


struct CAsyncPurgeRequest : AsyncCache_CAsyncRequest
{
};


struct DiskConBase
{
  DiskConBaseVtbl *vfptr;
  bool initialized_fm;
  bool read_only_fm;
  bool expandable_fm;
  DATFILE_TYPE data_set_lm;
  unsigned int data_subset_lm;
};


struct DiskDev
{
  void *_fd;
};


struct __declspec(align(4)) CLBlockAllocator
{
  DiskFileInfo_t *file_info_mp;
  DiskDev file_man_m;
  bool expandable_mf;
};


struct BTEntry
{
  unsigned __int32 comp_ : 1;
  unsigned __int32 resv_ : 15;
  unsigned __int32 ver_ : 16;
  IDClass<_tagDataID,32,0> GID_;
  int Offset_;
  unsigned int size_;
  int date_;
  int iter_;
};


struct BTNode
{
  int NextNode_[62];
  int NumEntries_;
  BTEntry Entry_[61];
};


struct BTMemNode
{
  int time_stamp_lm;
  bool dirty_fm;
  BTMemNode *ahead_pm;
  BTMemNode *behind_pm;
  int offset_m;
  BTNode node_m;
};


struct BTree
{
  BTMemNode mem_root_node_m;
  BTMemNode *mem_nodes_pm;
  int nodesInMem_;
  int _time_stamp;
  CLBlockAllocator *pBlkMan_;
  DiskFileInfo_t *file_info_pm;
  LRU_List *lru_man_pm;
};


struct DiskController : DiskConBase
{
  CLBlockAllocator block_man_m;
  BTree did_tree_m;
  PStringBase<char> filename_m;
  DiskFileInfo_t file_info_m;
};


struct _STL_pair<unsigned long,QualifiedDataIDArray>
{
  unsigned int first;
  QualifiedDataIDArray second;
};


struct AsyncCache_CAsyncRequest_CCallbackWrapper
{
  AsyncCache_CCallbackHandler *pCallbackHandler;
  unsigned int dwTimesFinished;
};


struct DiskConBaseVtbl
{
  void *(__thiscall *__vecDelDtor)(DiskConBase *this, unsigned int);
  _BYTE gap4[8];
  bool (__thiscall *LoadData)(DiskConBase *this, IDClass<_tagDataID,32,0>, Cache_Pack_t *);
  bool (__thiscall *SaveData)(DiskConBase *this, IDClass<_tagDataID,32,0>, Cache_Pack_t *, int);
  bool (__thiscall *DeleteData)(DiskConBase *this, IDClass<_tagDataID,32,0>, int);
  bool (__thiscall *DeleteDataByMask)(DiskConBase *this, IDClass<_tagDataID,32,0>, IDClass<_tagDataID,32,0>);
  bool (__thiscall *IsMember)(DiskConBase *this, IDClass<_tagDataID,32,0>, BTEntry *);
  bool (__thiscall *GetMembers)(DiskConBase *this, SmartArray<BTEntry,1> *);
  int (__thiscall *HowmuchFreeSpace)(DiskConBase *this);
  bool (__thiscall *LoadIterationList)(DiskConBase *this, CMostlyConsecutiveIntSet *);
  bool (__thiscall *SaveIterationList)(DiskConBase *this, CMostlyConsecutiveIntSet *);
  DATFILE_TYPE (__thiscall *GetDataset)(DiskConBase *this);
  unsigned int (__thiscall *GetSubset)(DiskConBase *this);
  unsigned __int64 (__thiscall *GetDatFileID)(DiskConBase *this);
  bool (__thiscall *IsInitialized)(DiskConBase *this);
  bool (__thiscall *IsReadOnly)(DiskConBase *this);
  bool (__thiscall *IsExpandable)(DiskConBase *this);
  IDClass<_tagDataID,32,0> *(__thiscall *GetMasterMapDID)(DiskConBase *this, IDClass<_tagDataID,32,0> *result);
  IDClass<_tagDataID,32,0> *(__thiscall *SetMasterMapDID)(DiskConBase *this, IDClass<_tagDataID,32,0> *result, IDClass<_tagDataID,32,0>);
  void (__thiscall *SetDatIDStamp)(DiskConBase *this, DatIDStamp *);
  DatIDStamp *(__thiscall *GetDatIDStamp)(DiskConBase *this, DatIDStamp *result);
  PStringBase<char> *(__thiscall *GetFilename)(DiskConBase *this);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *,1>Vtbl *vfptr;
  HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *m_aInplaceBuckets[23];
  HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData **m_buckets;
  HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


enum _STL__Deque_iterator_base<ConnectionCache_Entry>__Constants
{
	_blocksize = 0x80,
	__buffer_size = 0x6,
};


struct IntrusiveHashList<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *,1>Vtbl *vfptr;
  HashSetData<IDClass<_tagDataID,32,0> > *m_aInplaceBuckets[23];
  HashSetData<IDClass<_tagDataID,32,0> > **m_buckets;
  HashSetData<IDClass<_tagDataID,32,0> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashSet<IDClass<_tagDataID,32,0> >
{
  HashSet<IDClass<_tagDataID,32,0> >Vtbl *vfptr;
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *,1> m_intrusiveTable;
};


struct LRU_List
{
  bool initialized_fm;
  bool empty_fm;
  int used_count_lm;
  HashList<IDClass<_tagDataID,32,0>,bool,1> used_table_m;
  HashSet<IDClass<_tagDataID,32,0> > dead_table_m;
  LRUB_Mem_t *young_pm;
  LRUB_Mem_t *old_pm;
  CLBlockAllocator *block_man_pm;
  DiskFileInfo_t *file_info_pm;
};


struct SmartArray<BTEntry,1>
{
  BTEntry *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<int,1>
{
  int *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) CMostlyConsecutiveIntSet
{
  CMostlyConsecutiveIntSetVtbl *vfptr;
  SmartArray<int,1> m_Ints;
  bool m_bSorted;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *> : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *>, DLListData
{
};


struct __declspec(align(4)) HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData : IntrusiveHashListData<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *>
{
  bool m_data;
};


struct HashSet<IDClass<_tagDataID,32,0> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashSet<IDClass<_tagDataID,32,0> > *this, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *,1> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashSetData<IDClass<_tagDataID,32,0> > *m_hashNext;
};


struct HashSetData<IDClass<_tagDataID,32,0> > : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *>
{
};


struct LRUB_Mem_t
{
  int offset_lm;
  int size_lm;
  int max_lm;
  int above_lm;
  int below_lm;
  LRUB_Info_t *info_pm;
  IDClass<_tagDataID,32,0> *DIds_pm;
  char *buffer_cpm;
};


struct CMostlyConsecutiveIntSetVtbl
{
  void (__thiscall *Serialize)(CMostlyConsecutiveIntSet *this, Archive *);
};


struct LRUB_Info_t
{
  int link_padding_lm;
  int younger_lm;
  int older_lm;
  int used_lm;
};


struct __declspec(align(4)) DiskConInitInfo
{
  PStringBase<char> file;
  PStringBase<unsigned short> path;
  DATFILE_TYPE data_set_lm;
  unsigned int data_subset_lm;
  unsigned int open_flags_lm;
  int file_size_lm;
  int block_size_lm;
  int eng_pack_vnum;
  int game_pack_vnum;
  bool eng_only;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBOCache *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBOCache *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,DBOCache *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,DBOCache *> **m_buckets;
  HashTableData<unsigned long,DBOCache *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBOCache *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBOCache *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,DBOCache *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,DBOCache *> *m_hashNext;
};


struct HashTableData<unsigned long,DBOCache *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,DBOCache *> *>
{
  DBOCache *m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,DBOCache *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBOCache *> *,0> *m_currHashTable;
  HashTableData<unsigned long,DBOCache *> **m_currBucket;
  HashTableData<unsigned long,DBOCache *> *m_currElement;
};


struct HashIterator<unsigned long,DBOCache *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,DBOCache *> *,0> m_iter;
};


struct HashTable<unsigned long,DBOCache *,0>
{
  HashTable<unsigned long,DBOCache *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBOCache *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,DBOCache *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,DBOCache *,0> *this, unsigned int);
};


struct DBCache : Interface, AsyncCache
{
  Turbine_RefCount m_cTurbineRefCount;
  IDClass<_tagDataID,32,0> m_MasterMapID;
  unsigned int m_CurrentRegion;
  unsigned int m_LocalLanguage;
  bool m_bRuntime;
  bool m_bIsClient;
  bool m_bIsServer;
  IDataGraph *m_pDataGraph;
};


struct DiskTransactInfo
{
  DiskTransactInfoVtbl *vfptr;
  DiskTransactType m_eTransactType;
  int m_nMagicNumber;
};


union $EB6C3E6B43502D9FB12B288571E51E5E
{
  DeleteLeafTransactInfo *(__thiscall *DynamicCast_DeleteLeaf)(DiskTransactInfo *this);
  DeleteLeafTransactInfo *(__thiscall *DynamicCast_DeleteLeaf)(DiskTransactInfo *this);
};


union $1DDE850D9D8C596053BE4AEB57B5D99A
{
  DeleteInternalTransactInfo *(__thiscall *DynamicCast_DeleteInternal)(DiskTransactInfo *this);
  DeleteInternalTransactInfo *(__thiscall *DynamicCast_DeleteInternal)(DiskTransactInfo *this);
};


union $BF0203DDF0FCB360387C05FB32E89F3F
{
  MergeNodesTransactInfo *(__thiscall *DynamicCast_MergeNodes)(DiskTransactInfo *this);
  MergeNodesTransactInfo *(__thiscall *DynamicCast_MergeNodes)(DiskTransactInfo *this);
};


union $C2F2F30BB244F35CC32E9A70D938AC29
{
  UpdateObjectTransactInfo *(__thiscall *DynamicCast_UpdateObject)(DiskTransactInfo *this);
  UpdateObjectTransactInfo *(__thiscall *DynamicCast_UpdateObject)(DiskTransactInfo *this);
};


union $47867FB9099229E9FC5FE506170018EE
{
  SplitNodeTransactInfo *(__thiscall *DynamicCast_SplitNode)(DiskTransactInfo *this);
  SplitNodeTransactInfo *(__thiscall *DynamicCast_SplitNode)(DiskTransactInfo *this);
};


union $C39D49C99F0F3EF6F3720D8009B94A5E
{
  RotateEntryTransactInfo *(__thiscall *DynamicCast_RotateEntry)(DiskTransactInfo *this);
  RotateEntryTransactInfo *(__thiscall *DynamicCast_RotateEntry)(DiskTransactInfo *this);
};


union $6109F4A2A6CCAE5C432E9EFB25FD6D6A
{
  LRUExpandTransactInfo *(__thiscall *DynamicCast_LRUExpand)(DiskTransactInfo *this);
  LRUExpandTransactInfo *(__thiscall *DynamicCast_LRUExpand)(DiskTransactInfo *this);
};


union $288C75BFF0961B3EBFEB488320648ABF
{
  LRUDeleteTransactInfo *(__thiscall *DynamicCast_LRUDelete)(DiskTransactInfo *this);
  LRUDeleteTransactInfo *(__thiscall *DynamicCast_LRUDelete)(DiskTransactInfo *this);
};


struct DiskTransactInfoVtbl
{
  void (__thiscall *Serialize)(DiskTransactInfo *this, Archive *);
  _BYTE gap4[12];
  $EB6C3E6B43502D9FB12B288571E51E5E ___u1;
  _BYTE gap14[4];
  $1DDE850D9D8C596053BE4AEB57B5D99A ___u2;
  _BYTE gap1C[4];
  $BF0203DDF0FCB360387C05FB32E89F3F ___u3;
  _BYTE gap24[4];
  $C2F2F30BB244F35CC32E9A70D938AC29 ___u4;
  _BYTE gap2C[4];
  $47867FB9099229E9FC5FE506170018EE ___u5;
  _BYTE gap34[4];
  $C39D49C99F0F3EF6F3720D8009B94A5E ___u6;
  _BYTE gap3C[4];
  $6109F4A2A6CCAE5C432E9EFB25FD6D6A ___u7;
  _BYTE gap44[4];
  $288C75BFF0961B3EBFEB488320648ABF ___u8;
};


const struct DeleteLeafTransactInfo : DiskTransactInfo
{
  IDClass<_tagDataID,32,0> m_cObjectDID;
  int m_nNodeOffset;
  int m_nIndex;
};


const struct __unaligned __declspec(align(4)) DeleteInternalTransactInfo : DiskTransactInfo
{
  IDClass<_tagDataID,32,0> m_cTargetDID;
  IDClass<_tagDataID,32,0> m_cDonorDID;
  int m_nTargetOffset;
  int m_nDonorOffset;
  int m_nTargetIndex;
  int m_nDonorIndex;
};


const struct MergeNodesTransactInfo : DiskTransactInfo
{
  int m_nNodeOffset;
  int m_nLeftOffset;
  int m_nRightOffset;
  int m_nIndex;
  int m_nNodeEntries;
};


const struct __unaligned __declspec(align(4)) AddObjectTransactInfo : DiskTransactInfo
{
  BTEntry m_entry;
  int m_nFirstFreeBlock;
  int m_nNodeEntries;
};


const struct __unaligned __declspec(align(4)) UpdateObjectTransactInfo : AddObjectTransactInfo
{
  int m_nEntryIndex;
  int m_nOldOffset;
};


const struct __unaligned __declspec(align(4)) SplitNodeTransactInfo : DiskTransactInfo
{
  int m_nParentOffset;
  int m_nParentEntries;
  int m_nSplitIndex;
  int m_nFirstFreeBlock;
};


const struct __unaligned __declspec(align(4)) RotateEntryTransactInfo : DiskTransactInfo
{
  int m_nParentOffset;
  IDClass<_tagDataID,32,0> m_cEntryDID;
  int m_nIndex;
  int m_nNodeEntryCount;
  int m_nSiblingEntryCount;
  bool m_bLeftSibling;
};


struct LRUExpandTransactInfo : DiskTransactInfo
{
  int m_nYoungOffset;
  int m_nFirstFreeBlock;
  IDClass<_tagDataID,32,0> m_cTargetDID;
};


const struct LRUDeleteTransactInfo : DiskTransactInfo
{
  int m_nBlockOffset;
  int m_nOldOffset;
  int m_nYoungOffset;
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *,1> *m_currHashTable;
  HashSetData<IDClass<_tagDataID,32,0> > **m_currBucket;
  HashSetData<IDClass<_tagDataID,32,0> > *m_currElement;
};


struct HashSetIterator<IDClass<_tagDataID,32,0> >
{
  IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashSetData<IDClass<_tagDataID,32,0> > *,1> m_iter;
};


struct IntrusiveSmartPointer<CryptoKey>
{
  CryptoKey *m_data;
};


struct CryptoProvider : ReferenceCountTemplate_1048576_0
{
  unsigned int m_hProv;
  unsigned int m_LastError;
  PStringBase<char> m_ContainerName;
  unsigned __int32 m_bMachineKeyset : 1;
  IntrusiveSmartPointer<CryptoKey> m_spIdentityKey;
  IntrusiveSmartPointer<CryptoKey> m_spExchangeKey;
};


struct IntrusiveSmartPointer<CryptoProvider>
{
  CryptoProvider *m_data;
};


struct CryptoKey : ReferenceCountTemplate_1048576_0
{
  unsigned int m_hKey;
  IntrusiveSmartPointer<CryptoProvider> m_spProv;
};


struct CryptoHash : ReferenceCountTemplate_1048576_0
{
  unsigned int m_algID;
  unsigned int m_hHash;
  IntrusiveSmartPointer<CryptoProvider> m_spProv;
};


struct IntrusiveSmartPointer<CryptoHash>
{
  CryptoHash *m_data;
};


struct CryptoProvider_RSA_SChannel : CryptoProvider
{
};


struct IntrusiveSmartPointer<CryptoProvider_RSA_SChannel>
{
  CryptoProvider_RSA_SChannel *m_data;
};


struct CryptoProvider_AES : CryptoProvider
{
};


struct IntrusiveSmartPointer<CryptoProvider_AES>
{
  CryptoProvider_AES *m_data;
};


struct CryptoKey3DES : CryptoKey
{
};


struct IntrusiveSmartPointer<CryptoKey3DES>
{
  CryptoKey3DES *m_data;
};


struct CryptoKeyRC4 : CryptoKey
{
};


struct IntrusiveSmartPointer<CryptoKeyRC4>
{
  CryptoKeyRC4 *m_data;
};


struct CryptoKeyAES : CryptoKey
{
};


struct IntrusiveSmartPointer<CryptoKeyAES>
{
  CryptoKeyAES *m_data;
};


struct CryptoKeyRSA : CryptoKey
{
};


struct IntrusiveSmartPointer<CryptoKeyRSA>
{
  CryptoKeyRSA *m_data;
};


struct CryptoKeyRSAPublic : CryptoKey
{
};


struct IntrusiveSmartPointer<CryptoKeyRSAPublic>
{
  CryptoKeyRSAPublic *m_data;
};


struct IterationKey
{
  __int64 m_Storage64;
};


struct SmartArray<QualifiedDataID,1>
{
  QualifiedDataID *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) MissingIteration
{
  MissingIterationVtbl *vfptr;
  unsigned __int64 idDatFile;
  int idIteration;
  SmartArray<QualifiedDataID,1> IDsToDownload;
  SmartArray<QualifiedDataID,1> IDsToPurge;
};


struct MissingIterationVtbl
{
  void (__thiscall *Serialize)(MissingIteration *this, Archive *);
};


struct SmartArray<MissingIteration,1>
{
  MissingIteration *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,1>
{
  IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,1>Vtbl *vfptr;
  HashTableData<long,DataHistory_IterationData> *m_aInplaceBuckets[23];
  HashTableData<long,DataHistory_IterationData> **m_buckets;
  HashTableData<long,DataHistory_IterationData> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<long,DataHistory_IterationData,1>
{
  HashTable<long,DataHistory_IterationData,1>Vtbl *vfptr;
  IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,1> m_intrusiveTable;
};


struct HashTable<long,DataHistory_IterationData,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<long,DataHistory_IterationData,1> *this, unsigned int);
};


struct IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,1> *this, unsigned int);
};


struct IntrusiveHashData<long,HashTableData<long,DataHistory_IterationData> *>
{
  int m_hashKey;
  HashTableData<long,DataHistory_IterationData> *m_hashNext;
};


struct SmartArray<DataHistory_DataIDHistoryData,1>
{
  DataHistory_DataIDHistoryData *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) DataHistory_IterationData
{
  SmartArray<DataHistory_DataIDHistoryData,1> m_IDs;
  unsigned int m_cbCompressed;
  unsigned int m_nIDsToPatch;
  unsigned int m_nIDsToPurge;
  DataHistory_IterationType m_IterationType;
  int m_AliasedIteration;
  IterationKey m_Key;
  PStringBase<char> m_BuildString;
};


struct HashTableData<long,DataHistory_IterationData> : IntrusiveHashData<long,HashTableData<long,DataHistory_IterationData> *>
{
  DataHistory_IterationData m_data;
};


struct DataHistory_DataIDHistoryData
{
  QualifiedDataID qdid;
  unsigned int cbCompressed;
  DataHistory_UpdateType utAction;
};


struct AutoGrowHashTable<long,DataHistory_IterationData> : HashTable<long,DataHistory_IterationData,1>
{
};


struct IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,long> *,1>
{
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,long> *,1>Vtbl *vfptr;
  HashTableData<QualifiedDataID,long> *m_aInplaceBuckets[23];
  HashTableData<QualifiedDataID,long> **m_buckets;
  HashTableData<QualifiedDataID,long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<QualifiedDataID,long,1>
{
  HashTable<QualifiedDataID,long,1>Vtbl *vfptr;
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,long> *,1> m_intrusiveTable;
};


struct HashTable<QualifiedDataID,long,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<QualifiedDataID,long,1> *this, unsigned int);
};


struct IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,long> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,long> *,1> *this, unsigned int);
};


struct IntrusiveHashData<QualifiedDataID,HashTableData<QualifiedDataID,long> *>
{
  QualifiedDataID m_hashKey;
  HashTableData<QualifiedDataID,long> *m_hashNext;
};


struct HashTableData<QualifiedDataID,long> : IntrusiveHashData<QualifiedDataID,HashTableData<QualifiedDataID,long> *>
{
  int m_data;
};


struct AutoGrowHashTable<QualifiedDataID,long> : HashTable<QualifiedDataID,long,1>
{
};


struct DataHistory_WriteOnlyData
{
  PStringBase<unsigned short> HistFileName;
  DataHistory_IterationData *pCurrentIteration;
  AutoGrowHashTable<QualifiedDataID,long> BackHash;
};


struct DataHistory
{
  AutoGrowHashTable<long,DataHistory_IterationData> m_Iterations;
  CMostlyConsecutiveIntSet m_IterList;
  DatIDStamp m_guidStamp;
  unsigned __int64 m_CorrespondingDatFileID;
  int m_idCurrentIteration;
  bool m_bNewXPackMode;
  PStringBase<char> m_CurrentBuildString;
  DataHistory_WriteOnlyData *m_pWriteData;
};


struct IntrusiveHashIterator<long,HashTableData<long,DataHistory_IterationData> *,1>
{
  IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,1> *m_currHashTable;
  HashTableData<long,DataHistory_IterationData> **m_currBucket;
  HashTableData<long,DataHistory_IterationData> *m_currElement;
};


struct HashIterator<long,DataHistory_IterationData,1>
{
  IntrusiveHashIterator<long,HashTableData<long,DataHistory_IterationData> *,1> m_iter;
};


struct HashSorterNode<long,DataHistory_IterationData>
{
  const int *m_key;
  DataHistory_IterationData *m_data;
};


struct SmartArray<HashSorterNode<long,DataHistory_IterationData>,1>
{
  HashSorterNode<long,DataHistory_IterationData> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct HashSorter<long,DataHistory_IterationData>
{
  SmartArray<HashSorterNode<long,DataHistory_IterationData>,1> m_list;
};


struct CPluginPrototype
{
  CPluginPrototypeVtbl *vfptr;
  CPluginManager *m_pManager;
};


struct CPluginPrototypeVtbl
{
  void *(__thiscall *__vecDelDtor)(CPluginPrototype *this, unsigned int);
  void (__thiscall *OnPluggedIn)(CPluginPrototype *this, CPluginManager *);
};


struct SmartArray<CPluginPrototype *,1>
{
  CPluginPrototype **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct CPluginManager
{
  SmartArray<CPluginPrototype *,1> m_Plugins;
};


struct HashBaseData<unsigned __int64>
{
  HashBaseData<unsigned __int64>Vtbl *vfptr;
  __declspec(align(8)) HashBaseData<unsigned __int64> *hash_next;
  unsigned __int64 id;
};


struct HashBaseData<unsigned __int64>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashBaseData<unsigned __int64> *this, unsigned int);
};


struct UI64HashData : HashBaseData<unsigned __int64>
{
};


struct NetBlob : ReferenceCountTemplate_1048576_0, PackObj, UI64HashData
{
  NetBlob_State state_;
  char *buf_;
  unsigned int bufSize_;
  unsigned int cMaxFragments_;
  unsigned int numFragments_;
  unsigned __int16 sender_;
  unsigned __int16 queueID_;
  unsigned int priority_;
  NetBlob *waitNext_;
  unsigned __int64 savedNetBlobID_;
};


struct NIListElement<NetBlob *>
{
  NetBlob *data_;
  NIListElement<NetBlob *> *next_;
};


struct NIList<NetBlob *>
{
  NIListElement<NetBlob *> *head_;
  NIListElement<NetBlob *> *tail_;
};


struct CDDDStatusPlugin : CPluginPrototype
{
};


struct List<AsyncCache_CAsyncRequest *>
{
  List<AsyncCache_CAsyncRequest *>Vtbl *vfptr;
  ListNode<AsyncCache_CAsyncRequest *> *_head;
  ListNode<AsyncCache_CAsyncRequest *> *_tail;
  unsigned int _num_elements;
};


struct List<AsyncCache_CAsyncRequest *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<AsyncCache_CAsyncRequest *> *this, unsigned int);
};


struct ListNode<AsyncCache_CAsyncRequest *>
{
  AsyncCache_CAsyncRequest *data;
  ListNode<AsyncCache_CAsyncRequest *> *next;
  ListNode<AsyncCache_CAsyncRequest *> *prev;
};


struct LFQueue<AsyncCache_CAsyncRequest *>
{
  AsyncCache_CAsyncRequest **buckets_;
  int numBuckets_;
  volatile int m_dwProducerBucketIndex;
  volatile int m_dwConsumerBucketIndex;
  List<AsyncCache_CAsyncRequest *> m_backupList;
  int m_dwBackupListLen;
  SharedCriticalSection m_backupListCritSec;
};


struct ThreadedCache : DBCache, PortalThread
{
  LFQueue<AsyncCache_CAsyncRequest *> m_WorkerThreadJobQueue;
  LFQueue<AsyncCache_CAsyncRequest *> m_WorkerThreadReplyQueue;
  PortalEvent m_evtWorkerHasJobs;
};


struct CPluginManagerTemplate<CDDDStatusPlugin> : CPluginManager
{
};


struct SmartArray<DiskController *,1>
{
  DiskController **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *,1>
{
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *,1>Vtbl *vfptr;
  HashTableData<QualifiedDataID,MissingIteration *> *m_aInplaceBuckets[23];
  HashTableData<QualifiedDataID,MissingIteration *> **m_buckets;
  HashTableData<QualifiedDataID,MissingIteration *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<QualifiedDataID,MissingIteration *,1>
{
  HashTable<QualifiedDataID,MissingIteration *,1>Vtbl *vfptr;
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *,1> m_intrusiveTable;
};


struct HashTable<QualifiedDataID,MissingIteration *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<QualifiedDataID,MissingIteration *,1> *this, unsigned int);
};


struct IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *>
{
  QualifiedDataID m_hashKey;
  HashTableData<QualifiedDataID,MissingIteration *> *m_hashNext;
};


struct HashTableData<QualifiedDataID,MissingIteration *> : IntrusiveHashData<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *>
{
  MissingIteration *m_data;
};


struct AutoGrowHashTable<QualifiedDataID,MissingIteration *> : HashTable<QualifiedDataID,MissingIteration *,1>
{
};


struct IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *,0>
{
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *,0>Vtbl *vfptr;
  HashTableData<unsigned __int64,DiskController *> *m_aInplaceBuckets[23];
  HashTableData<unsigned __int64,DiskController *> **m_buckets;
  HashTableData<unsigned __int64,DiskController *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned __int64,DiskController *,0>
{
  HashTable<unsigned __int64,DiskController *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned __int64,DiskController *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned __int64,DiskController *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *,0> *this, unsigned int);
};


struct __declspec(align(8)) IntrusiveHashData<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *>
{
  unsigned __int64 m_hashKey;
  HashTableData<unsigned __int64,DiskController *> *m_hashNext;
};


struct __declspec(align(8)) HashTableData<unsigned __int64,DiskController *> : IntrusiveHashData<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *>
{
  DiskController *m_data;
};


struct CLCache : ThreadedCache, CPluginManagerTemplate<CDDDStatusPlugin>
{
  SmartArray<DiskController *,1> m_DatFiles;
  bool m_fReadOnly;
  bool m_fEngineOnly;
  unsigned int m_ridDDDRegion;
  $E0971427BCD5BF40126DFC935D5F9371 m_DDDState;
  SmartArray<MissingIteration,1> m_MissingIters;
  AutoGrowHashTable<QualifiedDataID,MissingIteration *> m_PendingDownloads;
  HashTable<unsigned __int64,DiskController *,0> m_DatFileByIDTable;
  SmartArray<QualifiedDataID,1> m_EarlySaves;
  unsigned int m_cbEarlySaves;
  unsigned int m_eNameRuleLanguage;
  NIList<NetBlob *> *m_pNetQueue;
  PStringBase<unsigned short> m_strDatFilePath;
};


struct CLCache_CAsyncBeginDDDRequest : AsyncCache_CAsyncRequest
{
};


struct FakeMessageData
{
  FakeMessageDataVtbl *vfptr;
  unsigned int m_et;
};


struct FakeMessageDataVtbl
{
  void (__thiscall *Serialize)(FakeMessageData *this, Archive *);
};


struct __declspec(align(8)) DDD_DataMessage : FakeMessageData
{
  unsigned __int64 m_idDatFile;
  QualifiedDataID m_qdid;
  Cache_Pack_t m_cpData;
  int m_idIteration;
  bool m_bCompressed;
};


struct SmartArray<unsigned long,1>
{
  unsigned int *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct DDD_InterrogationMessage : FakeMessageData
{
  unsigned int m_dwServersRegion;
  unsigned int m_NameRuleLanguage;
  unsigned int m_dwProductID;
  SmartArray<unsigned long,1> m_SupportedLanguages;
};


struct DDD_BeginDDDMessage : FakeMessageData
{
  unsigned int m_cbDataExpected;
  SmartArray<MissingIteration,1> m_MissingIterations;
};


struct IntrusiveHashIterator<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *,0>
{
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *,0> *m_currHashTable;
  HashTableData<unsigned __int64,DiskController *> **m_currBucket;
  HashTableData<unsigned __int64,DiskController *> *m_currElement;
};


struct HashIterator<unsigned __int64,DiskController *,0>
{
  IntrusiveHashIterator<unsigned __int64,HashTableData<unsigned __int64,DiskController *> *,0> m_iter;
};


struct InterfaceInfo<CLCache>
{
};


struct ListIterator<unsigned long>
{
  ListIterator<unsigned long>Vtbl *vfptr;
  ListNode<unsigned long> *_current;
  List<unsigned long> *_list;
};


struct ListIterator<unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<unsigned long> *this, unsigned int);
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,0>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,0>Vtbl *vfptr;
  HashTableData<PStringBase<char>,unsigned long> *m_aInplaceBuckets[23];
  HashTableData<PStringBase<char>,unsigned long> **m_buckets;
  HashTableData<PStringBase<char>,unsigned long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<PStringBase<char>,unsigned long,0>
{
  HashTable<PStringBase<char>,unsigned long,0>Vtbl *vfptr;
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,0> m_intrusiveTable;
};


struct HashTable<PStringBase<char>,unsigned long,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<PStringBase<char>,unsigned long,0> *this, unsigned int);
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,0> *this, unsigned int);
};


struct IntrusiveHashData<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *>
{
  PStringBase<char> m_hashKey;
  HashTableData<PStringBase<char>,unsigned long> *m_hashNext;
};


struct HashTableData<PStringBase<char>,unsigned long> : IntrusiveHashData<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *>
{
  unsigned int m_data;
};


struct ControlNameMapper
{
  HashTable<PStringBase<char>,unsigned long,0> m_hashKeyboardSemantics;
  HashTable<PStringBase<char>,unsigned long,0> m_hashMouseSemantics;
  HashTable<PStringBase<char>,unsigned long,0> m_hashJoystickSemantics;
  HashTable<PStringBase<char>,unsigned long,0> m_hashVirtualSemantics;
};


struct IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,0>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,0> *m_currHashTable;
  HashTableData<PStringBase<char>,unsigned long> **m_currBucket;
  HashTableData<PStringBase<char>,unsigned long> *m_currElement;
};


struct HashIterator<PStringBase<char>,unsigned long,0>
{
  IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,0> m_iter;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned long> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned long> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,unsigned long> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,unsigned long> **m_buckets;
  HashTableData<unsigned long,unsigned long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned long> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned long> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,unsigned long> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,unsigned long> *m_hashNext;
};


struct HashTableData<unsigned long,unsigned long> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,unsigned long> *>
{
  unsigned int m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,unsigned long> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned long> *,0> *m_currHashTable;
  HashTableData<unsigned long,unsigned long> **m_currBucket;
  HashTableData<unsigned long,unsigned long> *m_currElement;
};


struct HashIterator<unsigned long,unsigned long,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,unsigned long> *,0> m_iter;
};


struct HashTable<unsigned long,unsigned long,0>
{
  HashTable<unsigned long,unsigned long,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned long> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,unsigned long,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,unsigned long,0> *this, unsigned int);
};


struct SmartArray<DeviceKeyMapEntry,1>
{
  DeviceKeyMapEntry *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1>
{
  IntrusiveHashTable<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1>Vtbl *vfptr;
  HashList<ControlSpecification,unsigned long,1>_HashListData *m_aInplaceBuckets[23];
  HashList<ControlSpecification,unsigned long,1>_HashListData **m_buckets;
  HashList<ControlSpecification,unsigned long,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashData<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *>
{
  ControlSpecification m_hashKey;
  HashList<ControlSpecification,unsigned long,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *> : IntrusiveHashData<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *>, DLListData
{
};


struct HashList<ControlSpecification,unsigned long,1>_HashListData : IntrusiveHashListData<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *>
{
  unsigned int m_data;
};


struct IntrusiveHashList<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1>
{
  IntrusiveHashTable<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct HashList<ControlSpecification,unsigned long,1>
{
  IntrusiveHashList<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1> m_ihlIntrusive;
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1>Vtbl *vfptr;
  HashList<unsigned long,CInputMap *,1>_HashListData *m_aInplaceBuckets[23];
  HashList<unsigned long,CInputMap *,1>_HashListData **m_buckets;
  HashList<unsigned long,CInputMap *,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *>
{
  unsigned int m_hashKey;
  HashList<unsigned long,CInputMap *,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *> : IntrusiveHashData<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *>, DLListData
{
};


struct HashList<unsigned long,CInputMap *,1>_HashListData : IntrusiveHashListData<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *>
{
  CInputMap *m_data;
};


struct IntrusiveHashTable<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1>
{
  IntrusiveHashTable<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1>Vtbl *vfptr;
  HashList<QualifiedControl,unsigned long,1>_HashListData *m_aInplaceBuckets[23];
  HashList<QualifiedControl,unsigned long,1>_HashListData **m_buckets;
  HashList<QualifiedControl,unsigned long,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashList<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1>
{
  IntrusiveHashTable<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct HashList<QualifiedControl,unsigned long,1>
{
  IntrusiveHashList<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1> m_ihlIntrusive;
};


struct CInputMap_ActionBindingList : HashList<QualifiedControl,unsigned long,1>
{
};


struct CInputMap
{
  CMasterInputMap *m_pParent;
  unsigned int m_eInputMapID;
  CInputMap_ActionBindingList m_listMappings;
};


struct IntrusiveHashList<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};
