

struct _MINIDUMP_THREAD_CALLBACK
{
  unsigned int ThreadId;
  void *ThreadHandle;
  _CONTEXT Context;
  unsigned int SizeOfContext;
  unsigned __int64 StackBase;
  unsigned __int64 StackEnd;
};


struct _MINIDUMP_THREAD_EX_CALLBACK
{
  unsigned int ThreadId;
  void *ThreadHandle;
  _CONTEXT Context;
  unsigned int SizeOfContext;
  unsigned __int64 StackBase;
  unsigned __int64 StackEnd;
  unsigned __int64 BackingStoreBase;
  unsigned __int64 BackingStoreEnd;
};


struct __unaligned __declspec(align(4)) _MINIDUMP_MODULE_CALLBACK
{
  unsigned __int16 *FullPath;
  unsigned __int64 BaseOfImage;
  unsigned int SizeOfImage;
  unsigned int CheckSum;
  unsigned int TimeDateStamp;
  tagVS_FIXEDFILEINFO VersionInfo;
  void *CvRecord;
  unsigned int SizeOfCvRecord;
  void *MiscRecord;
  unsigned int SizeOfMiscRecord;
};


struct _MINIDUMP_INCLUDE_THREAD_CALLBACK
{
  unsigned int ThreadId;
};


struct _MINIDUMP_INCLUDE_MODULE_CALLBACK
{
  unsigned __int64 BaseOfImage;
};


union $E5E73350B1A7046B2C4DFC7549D55EF5
{
  _MINIDUMP_THREAD_CALLBACK Thread;
  _MINIDUMP_THREAD_EX_CALLBACK ThreadEx;
  _MINIDUMP_MODULE_CALLBACK Module;
  _MINIDUMP_INCLUDE_THREAD_CALLBACK IncludeThread;
  _MINIDUMP_INCLUDE_MODULE_CALLBACK IncludeModule;
};


struct __unaligned __declspec(align(4)) _MINIDUMP_CALLBACK_INPUT
{
  unsigned int ProcessId;
  void *ProcessHandle;
  unsigned int CallbackType;
  $E5E73350B1A7046B2C4DFC7549D55EF5 ___u3;
};


struct $E28313B8039FDDB7F6DA095DA91FFECE
{
  unsigned int ModuleWriteFlags;
  int Cancel;
};


union $E036263384B8212C57FA1F2967EAD08D
{
  $E28313B8039FDDB7F6DA095DA91FFECE __s0;
  unsigned int ThreadWriteFlags;
  unsigned __int64 MemoryBase;
  int CheckCancel;
};


struct __unaligned __declspec(align(4)) _MINIDUMP_CALLBACK_OUTPUT
{
  $E036263384B8212C57FA1F2967EAD08D ___u0;
  unsigned int MemorySize;
};


struct _MINIDUMP_CALLBACK_INFORMATION
{
  int (__stdcall *CallbackRoutine)(void *, _MINIDUMP_CALLBACK_INPUT *const , _MINIDUMP_CALLBACK_OUTPUT *);
  void *CallbackParam;
};


struct _tagADDRESS64
{
  unsigned __int64 Offset;
  unsigned __int16 Segment;
  ADDRESS_MODE Mode;
};


struct WindowsResourceName
{
  PStringBase<char> m_strResName;
  HINSTANCE__ *m_hInstance;
};


struct WindowsVersionResource_LANGANDCODEPAGE
{
  unsigned __int16 wLangID;
  unsigned __int16 wCodePage;
};


struct WindowsVersionResource
{
  SmartBuffer m_sbData;
  unsigned int m_cLangCodepagePairs;
  PStringBase<char> m_modulePath;
  PStringBase<char> m_activeLanguage;
  WindowsVersionResource_LANGANDCODEPAGE *m_pLangCodepagePairs;
  tagVS_FIXEDFILEINFO *m_pFixedFileInfo;
};


struct Resource : WindowsVersionResource
{
};


struct _KDHELP64
{
  unsigned __int64 Thread;
  unsigned int ThCallbackStack;
  unsigned int ThCallbackBStore;
  unsigned int NextCallback;
  unsigned int FramePointer;
  unsigned __int64 KiCallUserMode;
  unsigned __int64 KeUserCallbackDispatcher;
  unsigned __int64 SystemRangeStart;
  unsigned __int64 Reserved[8];
};


struct DbgReportGenPage
{
  DbgReportGenPageVtbl *vfptr;
};


union $AF7944D52A4FC68F023E7F32ED11E073
{
  DbgReportGenPage_FunctionSignatureHasChanged (__thiscall *ShouldReport)(DbgReportGenPage *this);
  bool (__thiscall *ShouldReport)(DbgReportGenPage *this, DbgReportContext *);
};


struct DbgReportGenPageVtbl
{
  void *(__thiscall *__vecDelDtor)(DbgReportGenPage *this, unsigned int);
  PStringBase<char> *(__thiscall *GenReport)(DbgReportGenPage *this, PStringBase<char> *result, void *, DbgReportContext *);
  PStringBase<char> *(__thiscall *GetReportName)(DbgReportGenPage *this, PStringBase<char> *result);
  _BYTE gapC[4];
  $AF7944D52A4FC68F023E7F32ED11E073 ___u3;
};


struct SmartArray<DbgReportGenPage *,1>
{
  DbgReportGenPage **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct DbgReportGenerator
{
};


struct HResultDebugData
{
  HRESULT hr;
  char szName[128];
  char szDescription[512];
};


struct ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData
{
  unsigned int nMemoryFormatVersion;
  unsigned int nElementsAllocated;
  unsigned int nElementsUsed;
  HResultDebugData *aData;
};


struct __declspec(align(4)) ProcessGlobalVariable<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData,DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData>,EnvVarTable>_Container
{
  int m_buffer[4];
  unsigned int m_refcount;
  ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData *m_object;
  bool m_allocated;
  char m_variableName[100];
};


struct ProcessGlobalVariable<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData,DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData>,EnvVarTable>
{
  ProcessGlobalVariable<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData,DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData>,EnvVarTable>_Container *m_globalContainer;
};


struct ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>
{
  bool m_bProcessGlobal;
  void *m_hLock;
  ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData *m_data;
  ProcessGlobalVariable<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData,DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData>,EnvVarTable> *m_ppGlobalData;
};


struct ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData
{
  unsigned int nMemoryFormatVersion;
  unsigned int nElementsAllocated;
  unsigned int nElementsUsed;
  bool (__cdecl **aData)(HResultDebugData *);
};


struct __declspec(align(4)) ProcessGlobalVariable<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData,DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData>,EnvVarTable>_Container
{
  int m_buffer[4];
  unsigned int m_refcount;
  ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData *m_object;
  bool m_allocated;
  char m_variableName[100];
};


struct ProcessGlobalVariable<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData,DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData>,EnvVarTable>
{
  ProcessGlobalVariable<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData,DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData>,EnvVarTable>_Container *m_globalContainer;
};


struct ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>
{
  bool m_bProcessGlobal;
  void *m_hLock;
  ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData *m_data;
  ProcessGlobalVariable<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData,DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData>,EnvVarTable> *m_ppGlobalData;
};


struct IntrusiveHashTable<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *,1>
{
  IntrusiveHashTable<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *,1>Vtbl *vfptr;
  HashSetData<bool (__cdecl*)(HResultDebugData &)> *m_aInplaceBuckets[23];
  HashSetData<bool (__cdecl*)(HResultDebugData &)> **m_buckets;
  HashSetData<bool (__cdecl*)(HResultDebugData &)> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashSet<bool (__cdecl*)(HResultDebugData &)>
{
  HashSet<bool (__cdecl*)(HResultDebugData &)>Vtbl *vfptr;
  IntrusiveHashTable<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *,1> m_intrusiveTable;
};


struct HashSet<bool (__cdecl*)(HResultDebugData &)>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashSet<bool (__cdecl*)(HResultDebugData &)> *this, unsigned int);
};


struct IntrusiveHashTable<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *,1> *this, unsigned int);
};


struct IntrusiveHashData<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *>
{
  bool (__cdecl *m_hashKey)(HResultDebugData *);
  HashSetData<bool (__cdecl*)(HResultDebugData &)> *m_hashNext;
};


struct HashSetData<bool (__cdecl*)(HResultDebugData &)> : IntrusiveHashData<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *>
{
};


struct IntrusiveHashIterator<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *,1>
{
  IntrusiveHashTable<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *,1> *m_currHashTable;
  HashSetData<bool (__cdecl*)(HResultDebugData &)> **m_currBucket;
  HashSetData<bool (__cdecl*)(HResultDebugData &)> *m_currElement;
};


struct HashSetIterator<bool (__cdecl*)(HResultDebugData &)>
{
  IntrusiveHashIterator<bool (__cdecl*)(HResultDebugData &),HashSetData<bool (__cdecl*)(HResultDebugData &)> *,1> m_iter;
};


struct DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<HResultDebugData>_SharedData>
{
};


struct DefaultFactory<ThreadsafeGrowableProcessGlobalSortedArray<bool (__cdecl*)(HResultDebugData &)>_SharedData>
{
};


struct GetHResultDebugData_functor
{
  bool m_bFound;
  HRESULT m_hr;
  HResultDebugData *m_rData;
};


struct EnvVarTable
{
};


struct CPluginManagerTemplate<DialogBoxGateway> : CPluginManager
{
};


struct DialogBoxGateways : CPluginManagerTemplate<DialogBoxGateway>
{
};


struct EmergencyMemoryPool
{
  void *m_pReservedMemory;
};


struct DebugWorkerThreadData
{
  void *hRunning;
  unsigned int idThread;
};


struct CPluginManagerTemplate<CrashCleaner> : CPluginManager
{
};


struct CrashCleaners : CPluginManagerTemplate<CrashCleaner>
{
};


struct ExceptionThreadInfo : DebugWorkerThreadData
{
  _EXCEPTION_POINTERS *pep;
  unsigned int dwRetVal;
  DbgReportContext ctxt;
};


struct ProtectedDebug : Turbine_Debug
{
};


struct Turbine_InplaceString<100,char>
{
  char *m_pBuffer;
  char m_buffer[100];
};


struct KeyBlob3DES
{
  _PUBLICKEYSTRUC hdr;
  unsigned int aiPrivKeyAlg;
  char KeyData[24];
  char KeyNul;
  char NonZeroPadding[37];
  char bBlockType;
  char Reserved;
};


struct ConsoleIconManager : DialogBoxGateway, CrashCleaner
{
  void *m_hIconBig;
  void *m_hIconSmall;
  void *m_hOldIconBig;
  void *m_hOldIconSmall;
  HINSTANCE__ *m_hKernel32;
  HWND__ *(__stdcall *m_pfGetConsoleWindow)();
};


struct SmartArray<CommandLineArg const *,1>
{
  CommandLineArg **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<unsigned short *,1>
{
  wchar_t **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct ANSIColorStatus
{
  bool m_bInitialized;
  void *m_hConsole;
  unsigned __int16 m_wDefaultAttr;
  unsigned __int16 m_attr;
};


struct RollingCheckSum
{
  unsigned __int16 r;
  unsigned __int16 c1;
  unsigned __int16 c2;
  unsigned int sum;
};


struct AlphaConvertArgs
{
  BlitBufferArgs cSrcArgs;
  BlitBufferArgs cDstArgs;
  unsigned int nWidth;
  unsigned int nHeight;
};


union $819301611F7490D574F9372B1FFF10F3
{
  $BE04DE07FBB24F5591135A12C9DFFCDB __s0;
  unsigned int u;
};


struct BlitPixel
{
  $819301611F7490D574F9372B1FFF10F3 ___u0;
};


struct __declspec(align(4)) BlitArgs
{
  BlitMode eMode;
  BlitBufferArgs cSrcArgs;
  BlitBufferArgs cDstArgs;
  unsigned int nWidth;
  unsigned int nHeight;
  char i8AlphaModifier;
};


struct BlitFormat_XRGB
{
};


struct __m128
{
  float m128_f32[4];
};


struct BlitFormat_AXXX
{
};


struct BlitFormat_Fill
{
};


struct BlitFormat_A
{
};


struct BlitFormat_RGB
{
};


union __m64
{
  unsigned __int64 m64_u64;
  float m64_f32[2];
  char m64_i8[8];
  __int16 m64_i16[4];
  int m64_i32[2];
  __int64 m64_i64;
  char m64_u8[8];
  unsigned __int16 m64_u16[4];
  unsigned int m64_u32[2];
};


struct BlitFormat_ARGB
{
};


struct $BC9F15B4AC80A70032D51FD269E4EFCD
{
  char b;
  char g;
  char r;
  char strength;
};


union $F4FDDF44A27C1DC1C7A30FE4234AF741
{
  $BC9F15B4AC80A70032D51FD269E4EFCD __s0;
  unsigned int dwARGB;
};


struct ColorArgs
{
  BlitMode eMode;
  $F4FDDF44A27C1DC1C7A30FE4234AF741 ___u1;
  BlitBufferArgs cMaskArgs;
  unsigned int nWidth;
  unsigned int nHeight;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> **m_buckets;
  HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &),0>
{
  HashTable<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &),0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &),0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &),0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *m_hashNext;
};


struct HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *>
{
  UIElement *(__cdecl *m_data)(LayoutDesc *, ElementDesc *);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *,1>Vtbl *vfptr;
  HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > **m_buckets;
  HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> >,1>
{
  HashTable<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> >,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *,1> m_intrusiveTable;
};


struct HashTable<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> >,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> >,1> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *m_hashNext;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *,1>Vtbl *vfptr;
  HashTableData<unsigned long,SmartArray<UIMessageData,1> > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,SmartArray<UIMessageData,1> > **m_buckets;
  HashTableData<unsigned long,SmartArray<UIMessageData,1> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,SmartArray<UIMessageData,1>,1>
{
  HashTable<unsigned long,SmartArray<UIMessageData,1>,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *,1> m_intrusiveTable;
};


struct AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > : HashTable<unsigned long,SmartArray<UIMessageData,1>,1>
{
};


struct HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *>
{
  AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > m_data;
};


struct HashTable<unsigned long,SmartArray<UIMessageData,1>,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,SmartArray<UIMessageData,1>,1> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,SmartArray<UIMessageData,1> > *m_hashNext;
};


struct SmartArray<UIMessageData,1>
{
  UIMessageData *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct HashTableData<unsigned long,SmartArray<UIMessageData,1> > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *>
{
  SmartArray<UIMessageData,1> m_data;
};


struct UIMessageData
{
  UIListener *pListener;
  int nCount;
};


struct AutoGrowHashTable<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > : HashTable<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> >,1>
{
};


struct UIMessageRemovalData
{
  UIListener *pListener;
  SmartArray<UIMessageData,1> *pListenerArray;
};


struct SmartArray<UIMessageRemovalData,1>
{
  UIMessageRemovalData *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *,1>Vtbl *vfptr;
  HashTableData<unsigned long,SmartArray<UIElement *,1> > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,SmartArray<UIElement *,1> > **m_buckets;
  HashTableData<unsigned long,SmartArray<UIElement *,1> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,SmartArray<UIElement *,1>,1>
{
  HashTable<unsigned long,SmartArray<UIElement *,1>,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *,1> m_intrusiveTable;
};


struct HashTable<unsigned long,SmartArray<UIElement *,1>,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,SmartArray<UIElement *,1>,1> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,SmartArray<UIElement *,1> > *m_hashNext;
};


struct HashTableData<unsigned long,SmartArray<UIElement *,1> > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *>
{
  SmartArray<UIElement *,1> m_data;
};


struct AutoGrowHashTable<unsigned long,SmartArray<UIElement *,1> > : HashTable<unsigned long,SmartArray<UIElement *,1>,1>
{
};


struct List<UIElementMessageInfo>
{
  List<UIElementMessageInfo>Vtbl *vfptr;
  ListNode<UIElementMessageInfo> *_head;
  ListNode<UIElementMessageInfo> *_tail;
  unsigned int _num_elements;
};


struct List<UIElementMessageInfo>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<UIElementMessageInfo> *this, unsigned int);
};


struct ListNode<UIElementMessageInfo>
{
  UIElementMessageInfo data;
  ListNode<UIElementMessageInfo> *next;
  ListNode<UIElementMessageInfo> *prev;
};


struct ContextMenuData
{
  ContextMenuDataVtbl *vfptr;
  unsigned int m_entryType;
  StringInfo m_siText;
  IDClass<_tagDataID,32,0> m_didHandler;
  unsigned int m_ahtHint;
  ContextMenu *m_subMenu;
  bool m_bActive;
  bool m_bBoolEntry;
  bool m_bBoolEntryActive;
  IDClass<_tagDataID,32,0> m_didIcon;
};


struct ContextMenuDataVtbl
{
  void *(__thiscall *__vecDelDtor)(ContextMenuData *this, unsigned int);
};


struct SmartArray<ContextMenuData,1>
{
  ContextMenuData *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct ContextMenu : UIListener
{
  InstanceID m_weenieTarget;
  UIElement *m_pParentDisplay;
  UIElement *m_pRoot;
  SmartArray<ContextMenuData,1> m_data;
  StringInfo m_siInfoText;
  bool m_bDrawInactive;
  bool m_initted;
  UIElement *m_display;
  UIElement_ListBox *m_listbox;
  UIElement *m_mouseChild;
  ContextMenu *m_pOpenSubMenu;
  long double m_mouseTime;
  float m_openDelay;
  bool m_open;
  bool m_bTopLevel;
  bool m_bUpperLeftSet;
  bool m_bLowerLeftSet;
  int m_iX0;
  int m_iY0;
};


struct UIElement_Scrollable : UIElement
{
  unsigned int m_eHorizonalScrollbarID;
  unsigned int m_eVerticalScrollbarID;
  int m_iScrollableX;
  int m_iScrollableY;
  int m_iScrollableWidth;
  int m_iScrollableHeight;
};


struct __declspec(align(8)) UIElement_ListBox : UIElement_Scrollable
{
  SmartArray<UIElement *,1> m_listItems;
  UIElement *m_pSelectedItem;
  UIElement *m_dragLastOver;
  unsigned int m_lastDragOverState;
  int m_nCols;
  int m_nRows;
  SmartArray<long,1> m_nItemHeights;
  SmartArray<long,1> m_nItemWidths;
  long double m_nAnimStartTime;
  long double m_nAnimEndTime;
  int m_nAnimStartX;
  int m_nAnimStartY;
  int m_nAnimEndX;
  int m_nAnimEndY;
  unsigned int m_bitField;
};


struct UIElementManager : CInputHandler, IInputActionCallback
{
  SmartArray<UIElement *,1> m_deleteQueue;
  SmartArray<UIElement *,1> m_elementList;
  HashTable<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &),0> m_classCreateMethodTable;
  LayoutDesc *m_pHollowLayoutDesc;
  ElementDesc *m_pHollowElementDesc;
  UIElement *m_pRootElement;
  Vector3 m_vGlobalScale;
  AutoGrowHashTable<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > m_elementListenerTable;
  AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > m_globalMessageListenerTable;
  SmartArray<UIMessageRemovalData,1> m_aUIMessageRemovalData;
  AutoGrowHashTable<unsigned long,SmartArray<UIElement *,1> > m_elementInputActionListenerTable;
  List<UIElementMessageInfo> m_listQueuedElementMessages;
  bool m_bBroadcastingMessage;
  IDClass<_tagDataID,32,0> m_defaultCursorDID;
  int m_defaultCursorHotX;
  int m_defaultCursorHotY;
  IDClass<_tagDataID,32,0> m_lastCursorDID;
  int m_lastCursorHotX;
  int m_lastCursorHotY;
  bool m_bPerformMouseHitTest;
  UIElement *m_pElementLastOver;
  UIElement *m_pElementLastEntered;
  UIElement *m_pElementWithMouseCapture;
  UIElement *m_pElementLastDragCursorOver;
  HashSet<unsigned long> m_setActionsTriggeringCapture;
  unsigned int m_nMouseCapture;
  bool m_bDoVisualMouseDebugging;
  IDClass<_tagDataID,32,0> m_debugFontDID;
  bool m_bMouseHasLeftTheWindow;
  long double m_lastMouseMoveTime;
  long double m_tooltipStart;
  bool m_tooltipEnable;
  float m_tooltipDelay;
  float m_tooltipDuration;
  UIElement *m_pTooltipOwner;
  UIElement *m_pTooltipElement;
  long double m_buttonDownTime;
  int m_dragX;
  int m_dragY;
  int m_dragBaseX;
  int m_dragBaseY;
  UIElement *m_pcPotentialDragElement;
  UIElement *m_dragElement;
  UIElement *m_dragOwner;
  bool m_bDragStarted;
  bool m_bHoverStarted;
  UIElement *m_focusElement;
  UIElement *m_activeElement;
  SmartArray<UIElement *,1> m_activatableElements;
  ContextMenu *m_pCSM;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,BasePropertyDesc *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,BasePropertyDesc *> **m_buckets;
  HashTableData<unsigned long,BasePropertyDesc *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,BasePropertyDesc *,0>
{
  HashTable<unsigned long,BasePropertyDesc *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,BasePropertyDesc *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,BasePropertyDesc *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,BasePropertyDesc *> *m_hashNext;
};


struct HashTableData<unsigned long,BasePropertyDesc *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *>
{
  BasePropertyDesc *m_data;
};




struct DBObjGrabber<MasterProperty>
{
  MasterProperty *m_object;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *,1> *m_currHashTable;
  HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > **m_currBucket;
  HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *m_currElement;
};


struct HashIterator<unsigned long,CaseInsensitiveStringBase<PStringBase<char> >,1>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,CaseInsensitiveStringBase<PStringBase<char> > > *,1> m_iter;
};


struct EnumMapper_iterator
{
  EnumMapper *m_mapper;
  HashIterator<unsigned long,CaseInsensitiveStringBase<PStringBase<char> >,1> m_iter;
};


struct SceneTool
{
};


struct List<Glyph>
{
  List<Glyph>Vtbl *vfptr;
  ListNode<Glyph> *_head;
  ListNode<Glyph> *_tail;
  unsigned int _num_elements;
};


struct SmartArray<GlyphLine,1>
{
  GlyphLine *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) GlyphList
{
  GlyphListVtbl *vfptr;
  List<Glyph> m_glyphList;
  SmartArray<GlyphLine,1> m_glyphLines;
  unsigned int m_nMaxCharacters;
  bool m_bTrimFromTop;
  unsigned int m_cxLastRecalcWidth;
  unsigned int m_nFirstInvalidPosition;
  bool m_bOneLine;
};


struct GlyphListVtbl
{
  void *(__thiscall *__vecDelDtor)(GlyphList *this, unsigned int);
};


struct List<Glyph>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<Glyph> *this, unsigned int);
};


struct Glyph
{
  unsigned __int16 m_data;
  int m_width;
  int m_height;
  RGBAColor m_color;
  Font *m_font;
  TextTag *m_tag;
};


struct ListNode<Glyph>
{
  Glyph data;
  ListNode<Glyph> *next;
  ListNode<Glyph> *prev;
};


struct GlyphLine
{
  GlyphLineVtbl *vfptr;
  unsigned int m_nIndex;
  int m_nLineWidth;
  int m_nLineHeight;
};


struct TextTag : ReferenceCountTemplate_1048576_0
{
  unsigned int m_type;
  unsigned int m_format;
};


struct GlyphLineVtbl
{
  void *(__thiscall *__vecDelDtor)(GlyphLine *this, unsigned int);
};


struct QuickWindow : ReferenceCountTemplate<1048576,1>
{
  unsigned int m_WindowID;
  int m_X;
  int m_Y;
  unsigned int m_Width;
  unsigned int m_Height;
  unsigned int m_BorderWidth;
  unsigned int m_BorderHeight;
  RGBAColor m_ColorAndOpacity;
  RenderTexture *m_pBackgroundTexture;
  int m_ClientAreaX;
  int m_ClientAreaY;
  unsigned int m_ClientAreaWidth;
  unsigned int m_ClientAreaHeight;
};


struct __declspec(align(8)) DebugConsole : ReferenceCountTemplate<1048576,1>, CInputHandler, NoticeHandler, IConsoleCallbackObject, IInputActionCallback
{
  bool m_WantActivateInput;
  bool m_WantDeactivateInput;
  bool m_IsInputActive;
  bool m_AlwaysDrawOutput;
  float m_BackgroundOpacity;
  GlyphList *m_pInputBuffer;
  GlyphList *m_pOutputBuffer;
  bool m_OutputBufferIsDirty;
  QuickWindow *m_pOutputWindow;
  QuickWindow *m_pInputWindow;
  unsigned int m_NumOutputLines;
  unsigned int m_NumOutputCharactersPerLine;
  unsigned int m_OutputScrollPos;
  PStringBaseArray<char> m_OutputLines;
  unsigned int m_NumInputCharactersPerLine;
  unsigned int m_InputCursorPos;
  bool m_IsInputCursorVisible;
  long double m_LastInputCursorStateTime;
  PStringBaseArray<char> m_InputHistory;
  PStringBase<char> m_LastTabCompletionWord;
  PStringBase<char> m_LastTabCompletionString;
  int m_LastInputHistoryPos;
  RenderTexture *m_pOutputBackgroundTexture;
  RenderTexture *m_pInputBackgroundTexture;
  bool m_EchoInput;
};


struct ProfilerUIWindow
{
  unsigned int m_WindowHandle;
  bool m_AutoPositionWindow;
  ProfilerTypes_CategoryType m_Category;
  QuickWindow *m_pQuickWindow;
};


struct SmartArray<ProfilerUIWindow *,1>
{
  ProfilerUIWindow **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct QuickButton : QuickWindow
{
  bool m_IsPressed;
  bool m_IsChecked;
  PStringBase<char> m_ButtonLabel;
};


struct SmartArray<QuickButton *,1>
{
  QuickButton **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) BudgetStatInfo
{
  PStringBase<char> strName;
  unsigned int nGraphicLevel[5];
  bool bIsMem;
};


struct BudgetStatItem
{
  BudgetStatInfo sInfo;
  unsigned int nValue;
  ProfilerBudget_Status nStatus;
};


struct SmartArray<BudgetStatItem,1>
{
  BudgetStatItem *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct ProfilerDBObjStat
{
  unsigned int DBType;
  PStringBase<char> DBTypeName;
  unsigned int NumActive;
  unsigned int NumFree;
  long double LastLocalTimeNotEmpty;
  long double LastLocalTimeChanged;
};


struct SmartArray<ProfilerDBObjStat,1>
{
  ProfilerDBObjStat *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct ProfilerUI : ReferenceCountTemplate<1048576,1>, IInputActionCallback
{
  bool m_IsActive;
  bool m_WantActivate;
  bool m_WantDeactivate;
  SmartArray<ProfilerUIWindow *,1> m_Windows;
  unsigned int m_MemoryCountersStatsWindowHandle;
  unsigned int m_BlockResourcesStatsWindowHandle;
  unsigned int m_DBObjStatsWindowHandle;
  unsigned int m_DPVSStatsWindowHandle;
  unsigned int m_MemoryProbeStatsWindowHandle;
  QuickWindow *m_pToggleToolbarWindow;
  QuickWindow *m_pStatsToolbarWindow;
  QuickWindow *m_pCategoryWindow;
  SmartArray<QuickButton *,1> m_ToolbarButtons;
  SmartArray<QuickButton *,1> m_CategoryButtons;
  unsigned int m_nGraphicsQualityLevel;
  SmartArray<BudgetStatItem,1> m_budgetStatArray;
  unsigned int m_CurrentYPixel;
  unsigned int m_nSystemMemoryAllocated;
  unsigned int m_nPeakSystemMemoryAllocated;
  unsigned int m_nVirtualMemoryReserved;
  unsigned int m_nPeakVirtualMemoryReserved;
  SmartArray<ProfilerDBObjStat,1> m_DBObjStats;
  OSSpecificProfilerUIInfo *m_pOSSpecificProfiler;
};


struct OSSpecificProfilerUIInfo
{
  OSSpecificProfilerUIInfoVtbl *vfptr;
};


struct OSSpecificProfilerUIInfoVtbl
{
  void (__thiscall *FillInOSSpecificInfo)(OSSpecificProfilerUIInfo *this, ProfilerUI *);
  unsigned int (__thiscall *GetSystemMemoryAllocated)(OSSpecificProfilerUIInfo *this);
  unsigned int (__thiscall *GetPeakSystemMemoryAllocated)(OSSpecificProfilerUIInfo *this);
  unsigned int (__thiscall *GetVirtualMemoryReserved)(OSSpecificProfilerUIInfo *this);
  unsigned int (__thiscall *GetPeakVirtualMemoryReserved)(OSSpecificProfilerUIInfo *this);
};


struct TexCoordPair
{
  float u;
  float v;
};


struct _D3DXIMAGE_INFO
{
  unsigned int Width;
  unsigned int Height;
  unsigned int Depth;
  unsigned int MipLevels;
  _D3DFORMAT Format;
  _D3DRESOURCETYPE ResourceType;
  _D3DXIMAGE_FILEFORMAT ImageFileFormat;
};


struct IDirectSound : IUnknown
{
};


struct IDirectSoundBuffer : IUnknown
{
};


struct IDirectSound3DListener : IUnknown
{
};


struct IDirectSound3DBuffer : IUnknown
{
};


struct _DSCAPS
{
  unsigned int dwSize;
  unsigned int dwFlags;
  unsigned int dwMinSecondarySampleRate;
  unsigned int dwMaxSecondarySampleRate;
  unsigned int dwPrimaryBuffers;
  unsigned int dwMaxHwMixingAllBuffers;
  unsigned int dwMaxHwMixingStaticBuffers;
  unsigned int dwMaxHwMixingStreamingBuffers;
  unsigned int dwFreeHwMixingAllBuffers;
  unsigned int dwFreeHwMixingStaticBuffers;
  unsigned int dwFreeHwMixingStreamingBuffers;
  unsigned int dwMaxHw3DAllBuffers;
  unsigned int dwMaxHw3DStaticBuffers;
  unsigned int dwMaxHw3DStreamingBuffers;
  unsigned int dwFreeHw3DAllBuffers;
  unsigned int dwFreeHw3DStaticBuffers;
  unsigned int dwFreeHw3DStreamingBuffers;
  unsigned int dwTotalHwMemBytes;
  unsigned int dwFreeHwMemBytes;
  unsigned int dwMaxContigFreeHwMemBytes;
  unsigned int dwUnlockTransferRateHwBuffers;
  unsigned int dwPlayCpuOverheadSwBuffers;
  unsigned int dwReserved1;
  unsigned int dwReserved2;
};


struct _DSBCAPS
{
  unsigned int dwSize;
  unsigned int dwFlags;
  unsigned int dwBufferBytes;
  unsigned int dwUnlockTransferRate;
  unsigned int dwPlayCpuOverhead;
};


struct _DSBUFFERDESC
{
  unsigned int dwSize;
  unsigned int dwFlags;
  unsigned int dwBufferBytes;
  unsigned int dwReserved;
  tWAVEFORMATEX *lpwfxFormat;
  _GUID guid3DAlgorithm;
};


struct _DS3DBUFFER
{
  unsigned int dwSize;
  _D3DVECTOR vPosition;
  _D3DVECTOR vVelocity;
  unsigned int dwInsideConeAngle;
  unsigned int dwOutsideConeAngle;
  _D3DVECTOR vConeOrientation;
  int lConeOutsideVolume;
  float flMinDistance;
  float flMaxDistance;
  unsigned int dwMode;
};


struct _DS3DLISTENER
{
  unsigned int dwSize;
  _D3DVECTOR vPosition;
  _D3DVECTOR vVelocity;
  _D3DVECTOR vOrientFront;
  _D3DVECTOR vOrientTop;
  float flDistanceFactor;
  float flRolloffFactor;
  float flDopplerFactor;
};


struct VertexRange
{
  unsigned int m_nFirstVertex;
  unsigned int m_nNumVertices;
};


struct MoveToStatePack : PackObj
{
  RawMotionState raw_motion_state;
  Position position;
  int contact;
  int longjump_mode;
  unsigned __int16 instance_timestamp;
  unsigned __int16 server_control_timestamp;
  unsigned __int16 teleport_timestamp;
  unsigned __int16 force_position_ts;
};


struct AutonomousPositionPack : PackObj
{
  Position position;
  int contact;
  unsigned __int16 instance_timestamp;
  unsigned __int16 server_control_timestamp;
  unsigned __int16 teleport_timestamp;
  unsigned __int16 force_position_ts;
};


struct TurnToEventPack : PackObj
{
  float absolute_degrees;
  int run;
};



struct CLanguageInfoInterface
{
  CLanguageInfo *m_pLanguageInfo;
};


struct BaseInfo
{
  unsigned int elementID;
  IDClass<_tagDataID,32,0> layoutID;
};


struct SmartArray<BaseInfo,1>
{
  BaseInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *,0>Vtbl *vfptr;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *m_aInplaceBuckets[23];
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > **m_buckets;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0>,0>
{
  HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0>,0>Vtbl *vfptr;
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *,0> m_intrusiveTable;
};


struct HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0>,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0>,0> *this, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *,0> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *m_hashNext;
};


struct HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *>
{
  HashTable<unsigned long,ElementDesc,0> m_data;
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *,0> *m_currHashTable;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > **m_currBucket;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *m_currElement;
};


struct HashIterator<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0>,0>
{
  IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,ElementDesc,0> > *,0> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *,0> *m_currHashTable;
  HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> **m_currBucket;
  HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *m_currElement;
};


struct HashIterator<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &),0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,UIElement * (__cdecl*)(LayoutDesc const &,ElementDesc const &)> *,0> m_iter;
};


struct ListIterator<UIElementMessageInfo>
{
  ListIterator<UIElementMessageInfo>Vtbl *vfptr;
  ListNode<UIElementMessageInfo> *_current;
  List<UIElementMessageInfo> *_list;
};


struct ListIterator<UIElementMessageInfo>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<UIElementMessageInfo> *this, unsigned int);
};


struct RenderStateCacheType_SamplerType
{
  TexAddress AddressModeU;
  TexAddress AddressModeV;
  TexFilterMode MinFilterMode;
  TexFilterMode MipFilterMode;
  TexFilterMode MagFilterMode;
  float MipmapLODBias;
};


struct RenderStateCacheType_StageType
{
  void *pTexture;
  unsigned int FFAlphaArg1;
  unsigned int FFAlphaArg2;
  TextureOp FFAlphaOp;
  unsigned int FFColorArg1;
  unsigned int FFColorArg2;
  TextureOp FFColorOp;
  unsigned int FFTexCoordIndex;
  unsigned int FFTextureTransformFlags;
};


struct RenderStateCacheType
{
  bool m_bForceStates;
  bool AlphaBlendEnable;
  bool AlphaTestEnable;
  AlphaTestFunc AlphaTestFunction;
  unsigned int AlphaTestRef;
  BlendOpType BlendOp;
  unsigned int ColorWriteEnable;
  CullModeType CullMode;
  float DepthBias;
  bool DepthBufferEnable;
  DepthTestMode DepthTestFunction;
  bool DepthWriteEnable;
  BlendMode DestBlend;
  unsigned int FFAmbientColor32;
  ColorSource FFAmbientColorSource;
  ColorSource FFDiffuseColorSource;
  RGBAColor FFFogColor;
  bool FFFogEnable;
  bool FFFogSystemDisabled;
  bool FFFogUserDisabled;
  bool FFFogAlphaDisabled;
  float FFFogFarDistance;
  float FFFogNearDistance;
  bool FFLighting;
  bool FFLightEnable[8];
  ColorSource FFEmissiveColorSource;
  ColorSource FFSpecularColorSource;
  bool FFSpecularEnable;
  unsigned int FFTextureFactor32;
  FillModeType FillMode;
  bool MultiSampleAntialias;
  void *pVertexBuffer;
  BlendMode SourceBlend;
  RenderStateCacheType_SamplerType Samplers[16];
  RenderStateCacheType_StageType Stages[8];
};


struct DArray<CEnvCell *>
{
  CEnvCell **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct CellListType
{
  CEnvCell *cell;
  float dist;
};


struct DArray<CellListType *>
{
  CellListType **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct PView
{
  portal_view_type outside_view;
  int draw_landscape;
  CBldPortal **outdoor_portal_list;
  DArray<CEnvCell *> cell_draw_list;
  unsigned int cell_draw_num;
  DArray<CellListType *> cell_todo_list;
  unsigned int cell_todo_num;
  LScape *lscape;
};


struct RenderDeviceD3D : RenderDevice
{
  unsigned int m_AdapterID;
  _D3DDEVTYPE m_D3DDeviceType;
  _D3DCAPS9 m_D3DCaps;
  tagRECT m_PresentSourceRect;
  tagRECT m_PresentDestRect;
  HWND__ *m_hPresentWindow;
  unsigned int m_nFrontBufferWidth;
  unsigned int m_nFrontBufferHeight;
  IDirect3DDevice9 *m_pDirect3DDevice;
  IDirect3DSwapChain9 *m_pPrimarySwapChain;
  bool m_bForceStates;
  RenderStateCacheType m_State;
  bool m_bMaterialAlphaMode;
  _D3DMATERIAL9 *m_pD3DCurrMaterial;
  _D3DMATERIAL9 m_defaultMaterial;
  bool m_currentlyDrawingSky;
  CMaterial *m_pCurrMaterial;
  IDirect3DVertexBuffer9 *m_primitiveVbuf;
  IDirect3DTexture9 *m_pSolidColorTexture;
  unsigned int m_currentSolidColor;
  float m_gammaBrightnessVal;
  bool m_ParticleState;
  SmartArray<unsigned long,1> m_DefaultSamplerMappings;
  TextureBasedFont *m_pDebugFont;
  unsigned int m_DebugFontWidth;
  unsigned int m_DebugFontHeight;
  unsigned int m_TotalVideoMemoryInBytes;
};


struct MaterialGraphicsStatesType
{
  bool WantFFLighting;
  bool WantFFDyeColorInTFactor;
  bool WantFFSpecularLighting;
  bool WantFFVertexDiffuse;
  bool WantFFVertexSpecular;
  bool WantFFDistanceFog;
  RGBAColor MaterialDiffuseColor;
  RGBAColor MaterialSpecularColor;
  float MaterialSpecularPower;
  RGBAColor MaterialDyeColor;
  RGBAColor AmbientLight;
  unsigned int MaterialAlphaTestRef;
};


struct RenderVertexStreamD3D : GraphicsResource
{
  IDirect3DVertexBuffer9 *m_pD3DVertexBuffer;
  unsigned int m_nNumVertices;
  VertexFormatInfo m_VertexFormatInfo;
  unsigned int m_Flags;
  unsigned int m_nNextVertexIndex;
  unsigned int m_nIdealVertexCount;
  unsigned int m_nStreamFrameID;
  unsigned int m_WriteLockCount;
};


struct __declspec(align(8)) RenderIndexStreamD3D : GraphicsResource
{
  unsigned int m_Flags;
  unsigned int m_IndexSizeInBytes;
  unsigned int m_NumIndices;
  IDirect3DIndexBuffer9 *m_pDirect3DIndexBuffer;
  unsigned int m_StreamFrameID;
  unsigned int m_NextRemoteIndex;
  unsigned int m_WriteLockCount;
};



struct IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *,1>
{
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *,1>Vtbl *vfptr;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *m_aInplaceBuckets[23];
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> **m_buckets;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *,1>
{
  HashTable<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *,1>Vtbl *vfptr;
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *,1> m_intrusiveTable;
};


struct HashTable<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *,1> *this, unsigned int);
};


struct IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *>
{
  CaseInsensitiveStringBase<PStringBase<char> > m_hashKey;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *m_hashNext;
};


struct HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> : IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *>
{
  TFileEntry *m_data;
};


struct AutoGrowHashTable<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> : HashTable<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *,1>
{
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *,1>Vtbl *vfptr;
  HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *m_aInplaceBuckets[23];
  HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> **m_buckets;
  HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<IDClass<_tagDataID,32,0>,TFileEntry *,1>
{
  HashTable<IDClass<_tagDataID,32,0>,TFileEntry *,1>Vtbl *vfptr;
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *,1> m_intrusiveTable;
};


struct HashTable<IDClass<_tagDataID,32,0>,TFileEntry *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<IDClass<_tagDataID,32,0>,TFileEntry *,1> *this, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *m_hashNext;
};


struct HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *>
{
  TFileEntry *m_data;
};


struct AutoGrowHashTable<IDClass<_tagDataID,32,0>,TFileEntry *> : HashTable<IDClass<_tagDataID,32,0>,TFileEntry *,1>
{
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *,1> *m_currHashTable;
  HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> **m_currBucket;
  HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *m_currElement;
};


struct HashIterator<IDClass<_tagDataID,32,0>,TFileEntry *,1>
{
  IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,TFileEntry *> *,1> m_iter;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *,1>Vtbl *vfptr;
  HashTableData<unsigned long,TDBTypeEntry *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,TDBTypeEntry *> **m_buckets;
  HashTableData<unsigned long,TDBTypeEntry *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,TDBTypeEntry *,1>
{
  HashTable<unsigned long,TDBTypeEntry *,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *,1> m_intrusiveTable;
};


struct HashTable<unsigned long,TDBTypeEntry *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,TDBTypeEntry *,1> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,TDBTypeEntry *> *m_hashNext;
};


struct HashTableData<unsigned long,TDBTypeEntry *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *>
{
  TDBTypeEntry *m_data;
};


struct AutoGrowHashTable<unsigned long,TDBTypeEntry *> : HashTable<unsigned long,TDBTypeEntry *,1>
{
};



struct TReadOnlyFile2IDTableVtbl
{
  IDClass<_tagDataID,32,0> *(__thiscall *GetDIDByFileName)(TReadOnlyFile2IDTable *this, IDClass<_tagDataID,32,0> *result, PStringBase<char>, unsigned int);
  _BYTE gap4[4];
  bool (__thiscall *GetFullPathByDID)(TReadOnlyFile2IDTable *this, IDClass<_tagDataID,32,0>, unsigned int, PStringBase<char> *);
  bool (__thiscall *GetFullPathByFileName)(TReadOnlyFile2IDTable *this, PStringBase<char>, unsigned int, PStringBase<char> *);
  PStringBase<char> *(__thiscall *GetDBTypeString)(TReadOnlyFile2IDTable *this, PStringBase<char> *result, unsigned int);
  IDClass<_tagDataID,32,0> *(__thiscall *GetHighestDID)(TReadOnlyFile2IDTable *this, IDClass<_tagDataID,32,0> *result, unsigned int);
  bool (__thiscall *GetDBTypes)(TReadOnlyFile2IDTable *this, SmartArray<unsigned long,1> *);
  bool (__thiscall *GetDIDs)(TReadOnlyFile2IDTable *this, SmartArray<IDClass<_tagDataID,32,0>,1> *, unsigned int);
  bool (__thiscall *GetFilePaths)(TReadOnlyFile2IDTable *this, SmartArray<PStringBase<char>,1> *);
};




struct OutputStream
{
  OutputStreamVtbl *vfptr;
  bool saving_to_string;
  _iobuf *file_ptr;
  PStringBase<char> *m_pstring_stream;
};


struct OutputStreamVtbl
{
  void *(__thiscall *__vecDelDtor)(OutputStream *this, unsigned int);
};


struct __declspec(align(4)) InputStream
{
  bool parsing_from_string;
  bool keep_locked;
  PStringBaseIter_Const<char> in_string_iter;
  _iobuf *in_file;
  unsigned __int16 line;
  unsigned __int16 col;
  unsigned int num_chars;
  char curr_char;
  bool done;
};


struct PFileParser
{
  NewParser *new_parser;
  _iobuf *locked_file;
  unsigned int num_retries;
  long double retry_delay;
  unsigned int indentation;
  bool separate_subnodes;
  bool first_subnode;
  bool want_blank;
  bool m_expandIncludes;
};


struct NewParser
{
  List<PStringBase<char> > include_path;
  bool error;
  InputStream in;
  PStringBase<char> curr_comment;
  PStringBase<char> curr_filename;
  PFileParser *file_parser;
  PStringBase<char> m_strDebug;
};


struct IDTableStorage : CPluginPrototype
{
};


struct IDTableStorageCallback
{
  IDTableStorageCallbackVtbl *vfptr;
};


struct IDTableStorageCallbackVtbl
{
  bool (__thiscall *ProcessTypeData)(IDTableStorageCallback *this, unsigned int, PStringBase<char> *);
  bool (__thiscall *ProcessMapping)(IDTableStorageCallback *this, PStringBase<char> *, IDClass<_tagDataID,32,0>, unsigned int);
};


struct MissingFilePlugin : CPluginPrototype
{
};


struct FileArray
{
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *,0> *m_currHashTable;
  HashTableData<unsigned long,BasePropertyDesc *> **m_currBucket;
  HashTableData<unsigned long,BasePropertyDesc *> *m_currElement;
};


struct HashIterator<unsigned long,BasePropertyDesc *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,BasePropertyDesc *> *,0> m_iter;
};


struct MasterPropertyGrabber : DBObjGrabber<MasterProperty>
{
};


struct WaveFileVtbl
{
  void *(__thiscall *__vecDelDtor)(WaveFile *this, unsigned int);
};


struct CDirSound
{
  tWAVEFORMATEX m_defaultFormat;
  HWND__ *m_hWindow;
  IDirectSound *m_pDirectSoundObj;
  IDirectSound3DListener *m_lpDs3dListener;
  IDirectSoundBuffer *m_3DSoundBuffer;
};


struct SoundBuf
{
  CDirSound *m_pCDirSound;
  IDirectSoundBuffer *m_pBuf;
  IDirectSound3DBuffer *m_p3DBuf;
  char *m_filename;
  int m_tagval;
  unsigned int m_bufsize;
  int m_3D;
  IDClass<_tagDataID,32,0> m_gid;
};


struct IntrusiveHashIterator<unsigned long,SoundTableData *,0>
{
  IntrusiveHashTable<unsigned long,SoundTableData *,0> *m_currHashTable;
  SoundTableData **m_currBucket;
  SoundTableData *m_currElement;
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,SoundBufRef *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  SoundBufRef *m_hashNext;
};


struct __unaligned __declspec(align(4)) SoundBufRef : IntrusiveHashData<IDClass<_tagDataID,32,0>,SoundBufRef *>
{
  SoundData data_;
  int links_;
  SoundBuf *sound_buf_;
  int buffer_num_;
};


struct SoundPlayingData
{
  SoundBuf *buffer;
  float priority;
  long double start_time;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,SoundBufRef *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,SoundBufRef *,0>Vtbl *vfptr;
  SoundBufRef *m_aInplaceBuckets[23];
  SoundBufRef **m_buckets;
  SoundBufRef **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,SoundBufRef *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,SoundBufRef *,0> *this, unsigned int);
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,SoundBufRef *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,SoundBufRef *,0> *m_currHashTable;
  SoundBufRef **m_currBucket;
  SoundBufRef *m_currElement;
};


struct SoundManager
{
};


struct CCliDatEvent_CDataFormat
{
  unsigned int eventType;
};


struct CCliDatEvent : NetBlob
{
};


struct CChatEvent_CDataFormat
{
  unsigned int eventType;
  unsigned int cbChatData;
};


struct CChatEvent : CCliDatEvent
{
};


struct ActionNode : LListData
{
  unsigned int action;
  float speed;
  unsigned int stamp;
  int autonomous;
};


struct RawMotionState_PackBitfield
{
  unsigned __int32 current_holdkey : 1;
  unsigned __int32 current_style : 1;
  unsigned __int32 forward_command : 1;
  unsigned __int32 forward_holdkey : 1;
  unsigned __int32 forward_speed : 1;
  unsigned __int32 sidestep_command : 1;
  unsigned __int32 sidestep_holdkey : 1;
  unsigned __int32 sidestep_speed : 1;
  unsigned __int32 turn_command : 1;
  unsigned __int32 turn_holdkey : 1;
  unsigned __int32 turn_speed : 1;
  unsigned __int32 num_actions : 5;
};


struct InterpretedMotionState_PackBitfield
{
  unsigned __int32 current_style : 1;
  unsigned __int32 forward_command : 1;
  unsigned __int32 forward_speed : 1;
  unsigned __int32 sidestep_command : 1;
  unsigned __int32 sidestep_speed : 1;
  unsigned __int32 turn_command : 1;
  unsigned __int32 turn_speed : 1;
  unsigned __int32 num_actions : 5;
};


struct LM_UVTranslate : LayerModifier
{
  unsigned int texCoordIndex;
  Waveform uTranslate;
  Waveform vTranslate;
};


struct LM_UVRotate : LayerModifier
{
  unsigned int texCoordIndex;
  Waveform rotate;
};


struct LM_UVScale : LayerModifier
{
  unsigned int texCoordIndex;
  Waveform uScale;
  Waveform vScale;
};


struct LM_UVTransform : LayerModifier
{
  unsigned int m_nStageIndex;
  Matrix4 m_mTransform;
};


struct Vertex
{
  Vector3 origin;
};


struct HWLightUsage
{
  bool carryOver;
  int lightClass;
  int index;
};


struct RenderConfig
{
  GraphicsDriver m_GraphicsDriver;
};


struct SmartArray<RenderDisplayModeType,1>
{
  RenderDisplayModeType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct Render
{
  RenderVtbl *vfptr;
  RenderConfig m_Config;
  unsigned int m_nDisplayAdapter;
  SmartArray<RenderDisplayModeType,1> m_DisplayModes;
};


struct RenderVtbl
{
  void *(__thiscall *__vecDelDtor)(Render *this, unsigned int);
  _BYTE gap4[8];
  RenderDevice *(__thiscall *CreateRenderDevice)(Render *this);
  int (__thiscall *InitInternal)(Render *this);
  void (__thiscall *CleanupInternal)(Render *this);
  int (__thiscall *Set3DViewInternal)(Render *this, int, int, int, int);
  void (__thiscall *SetFOVInternal)(Render *this, float);
  float (__thiscall *GetFogAdjustment)(Render *this, float);
  void (__thiscall *SetupViewportInternal)(Render *this);
  void (__thiscall *UpdateLightsInternal)(Render *this);
  void (__thiscall *SetMaterialInternal)(Render *this, CMaterial *);
  void (__thiscall *positionPushInternal)(Render *this, const int, Position *);
  int (__thiscall *positionPopInternal)(Render *this);
  void (__thiscall *CalcObjectMatrixInternal)(Render *this);
  Matrix4 *(__thiscall *GetObjectMatrixInternal)(Render *this);
  void (__thiscall *polyListFinishInternal)(Render *this);
  BoundingType (__thiscall *xformPointInternal)(Render *this, AC1Legacy_Vector3 *, Vec2D *);
};


struct RenderDisplayModeType
{
  unsigned int nWidth;
  unsigned int nHeight;
  PixelFormatID Format;
  unsigned int nRefreshRate;
};


struct SmartArray<bool (__cdecl*)(void),1>
{
  bool (__cdecl **m_data)();
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct Render_MouseSelectData
{
  bool bFoundPolygon;
  long double fClosestPolygon;
  unsigned int PolygonID;
  int PolygonIndex;
  bool bFoundSphere;
  long double fClosestSphere;
  unsigned int SphereID;
  int SphereIndex;
};


struct LightParms
{
  RGBColor ambient_color;
  RGBColor sunlight_color;
  AC1Legacy_Vector3 sunlight;
  bool m_bSunlightValid;
  RenderLight m_Sunlight;
  int num_static_lights;
  RenderLight static_lights[60];
  RenderLight *sorted_static_lights[60];
  int num_dynamic_lights;
  RenderLight dynamic_lights[10];
  RenderLight *sorted_dynamic_lights[10];
};


struct DrawParms
{
  AC1Legacy_Vector3 viewpoint;
  Plane CY;
};


struct frameContext
{
  DrawParms viewer;
  Position position;
  Vector3 object_offset;
  float object_scale;
  Vector3 object_scale_vec;
  long double pm[28];
  int era;
  Vec2Dscreen *xformNext;
};


struct polyListEntry
{
  CPolygon *poly;
  int planeMask;
};


struct ViewIntervalType
{
  float bound[32];
};


struct IKeystone : IUnknown
{
};


struct IResourceNotify : IUnknown
{
};


struct IKeystoneBaseWindow : IResourceNotify
{
};


struct IKeystoneWindow : IKeystoneBaseWindow
{
};


struct IKeystoneControl : IKeystoneBaseWindow
{
};


struct IKeystoneResource : IResourceNotify
{
};


struct IKeystoneResourceImage : IKeystoneResource
{
};


struct IKeystoneResourceKSML : IKeystoneResource
{
};


struct IKeystoneResourceFont : IKeystoneResource
{
};


struct IKeystoneDocument : IKeystoneBaseWindow
{
};


struct KSWNDCLASS
{
  unsigned __int16 *lpResourceName;
  HRESULT (__cdecl *fnWndProc)(IKeystoneWindow *, unsigned int, unsigned int, int);
  unsigned __int16 *(__cdecl *fnASPCallback)(const unsigned __int16 *);
  HRESULT (__cdecl *fnSoundCallback)(const unsigned __int16 *);
};


struct ATTNAMESSTRUCT
{
  int iNumAttributes;
  const unsigned __int16 **lpAttributeNames;
  unsigned int *lpAttributeTypes;
  unsigned int *lpAttributeGroups;
};


struct Region
{
  tagRECT *m_lpBoundingERect;
  tagRECT *m_lpFirstERect;
  int m_iNumRects;
  int m_iNumAllocatedRects;
};


struct KeyStone
{
};


struct IntrusiveHashIterator<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *,1>
{
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *,1> *m_currHashTable;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> **m_currBucket;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *m_currElement;
};


struct HashIterator<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long,1>
{
  IntrusiveHashIterator<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *,1> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *,1> *m_currHashTable;
  HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > **m_currBucket;
  HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *m_currElement;
};


struct HashIterator<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> >,1>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,AutoGrowHashTable<unsigned long,SmartArray<UIMessageData,1> > > *,1> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *,1> *m_currHashTable;
  HashTableData<unsigned long,SmartArray<UIMessageData,1> > **m_currBucket;
  HashTableData<unsigned long,SmartArray<UIMessageData,1> > *m_currElement;
};


struct HashIterator<unsigned long,SmartArray<UIMessageData,1>,1>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,SmartArray<UIMessageData,1> > *,1> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *,1> *m_currHashTable;
  HashTableData<unsigned long,SmartArray<UIElement *,1> > **m_currBucket;
  HashTableData<unsigned long,SmartArray<UIElement *,1> > *m_currElement;
};


struct HashIterator<unsigned long,SmartArray<UIElement *,1>,1>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,SmartArray<UIElement *,1> > *,1> m_iter;
};


struct IntrusiveHashIterator<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *,1>
{
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *,1> *m_currHashTable;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> **m_currBucket;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *m_currElement;
};


struct HashIterator<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *,1>
{
  IntrusiveHashIterator<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,TFileEntry *> *,1> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *,1> *m_currHashTable;
  HashTableData<unsigned long,TDBTypeEntry *> **m_currBucket;
  HashTableData<unsigned long,TDBTypeEntry *> *m_currElement;
};


struct HashIterator<unsigned long,TDBTypeEntry *,1>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,TDBTypeEntry *> *,1> m_iter;
};


struct IInteractiveOutputHandler : Logger_ILoggingOutputHandler
{
};


struct __declspec(align(4)) SuperGenericDlg
{
  SuperGenericDlgVtbl *vfptr;
  GenericDialogTextObject *pTitle;
  GenericDialogTextObject *pText;
  GenericDialogTextObject *pEmailTitle;
  GenericDialogTextObject *pEmailText;
  PStringBase<char> EmailAddress;
  bool bAllowSendEmail;
  PStringBase<char> Buttons[10];
  int nButtons;
  int TimeoutMS;
  int idxCancelBtn;
  int idxButtonChosen;
  bool bEmailSent;
  bool bTimedOut;
};


struct SuperGenericDlgVtbl
{
  int (__thiscall *Create)(SuperGenericDlg *this);
};


struct GenericDialogTextObject
{
  GenericDialogTextObjectVtbl *vfptr;
};


struct GenericDialogTextObjectVtbl
{
  void *(__thiscall *__vecDelDtor)(GenericDialogTextObject *this, unsigned int);
  PStringBase<char> *(__thiscall *GetText)(GenericDialogTextObject *this, PStringBase<char> *result);
};


struct NormalDialogTextObject : GenericDialogTextObject
{
  PStringBase<char> m_sText;
};


struct IntrusiveHashTable<PStringBase<char>,HashSetData<PStringBase<char> > *,1>
{
  IntrusiveHashTable<PStringBase<char>,HashSetData<PStringBase<char> > *,1>Vtbl *vfptr;
  HashSetData<PStringBase<char> > *m_aInplaceBuckets[23];
  HashSetData<PStringBase<char> > **m_buckets;
  HashSetData<PStringBase<char> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashSet<PStringBase<char> >
{
  HashSet<PStringBase<char> >Vtbl *vfptr;
  IntrusiveHashTable<PStringBase<char>,HashSetData<PStringBase<char> > *,1> m_intrusiveTable;
};


struct HashSet<PStringBase<char> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashSet<PStringBase<char> > *this, unsigned int);
};


struct IntrusiveHashTable<PStringBase<char>,HashSetData<PStringBase<char> > *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<PStringBase<char>,HashSetData<PStringBase<char> > *,1> *this, unsigned int);
};


struct IntrusiveHashData<PStringBase<char>,HashSetData<PStringBase<char> > *>
{
  PStringBase<char> m_hashKey;
  HashSetData<PStringBase<char> > *m_hashNext;
};


struct HashSetData<PStringBase<char> > : IntrusiveHashData<PStringBase<char>,HashSetData<PStringBase<char> > *>
{
};


struct InteractiveOutputHandler : IInteractiveOutputHandler
{
  bool m_fAllowExit;
  bool m_fIgnoreAll;
  HashSet<PStringBase<char> > m_setReportedErrors;
};


struct InteractiveOutputHandler_StackEmailDialogTextObject : GenericDialogTextObject
{
  DbgReportObject m_rReportObj;
  PStringBase<char> m_sText;
};


struct IntrusiveHashIterator<PStringBase<char>,HashSetData<PStringBase<char> > *,1>
{
  IntrusiveHashTable<PStringBase<char>,HashSetData<PStringBase<char> > *,1> *m_currHashTable;
  HashSetData<PStringBase<char> > **m_currBucket;
  HashSetData<PStringBase<char> > *m_currElement;
};


struct HashSetIterator<PStringBase<char> >
{
  IntrusiveHashIterator<PStringBase<char>,HashSetData<PStringBase<char> > *,1> m_iter;
};


struct __declspec(align(4)) DataSource
{
  DataSourceVtbl *vfptr;
  char *pData;
  char *pStartData;
  char *pszName;
  int dataSize;
  bool bSrcLSBFirst;
};


struct DataSourceVtbl
{
  void *(__thiscall *__vecDelDtor)(DataSource *this, unsigned int);
  void (__thiscall *Close)(DataSource *this);
};


struct FileSource : DataSource
{
  void *hFile;
  void *hMemoryFile;
  char *pBuffer;
};


struct DiskTransactInfoResolver
{
};


struct SerializationBehavior<SB_TypeAlloc<DiskTransactInfoResolver,SB_Default> >
{
};


struct SB_TypeAlloc<DiskTransactInfoResolver,SB_Default> : SerializationBehavior<SB_TypeAlloc<DiskTransactInfoResolver,SB_Default> >
{
};


struct MasterDBMap
{
  MasterDBMapVtbl *vfptr;
};


union $652595AA0FF74562D1A8A8F66B5C4A2F
{
  unsigned int (__thiscall *DivineType_Internal)(MasterDBMap *this, PStringBase<char> *);
  unsigned int (__thiscall *DivineType_Internal)(MasterDBMap *this, IDClass<_tagDataID,32,0>);
};


struct MasterDBMapVtbl
{
  bool (__thiscall *InitDBTypeDef_Internal)(MasterDBMap *this);
  _BYTE gap4[4];
  $652595AA0FF74562D1A8A8F66B5C4A2F ___u1;
  bool (__thiscall *InqTypeByString_Internal)(MasterDBMap *this, PStringBase<char> *, unsigned int *);
  bool (__thiscall *InqStringByType_Internal)(MasterDBMap *this, unsigned int, PStringBase<char> *);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBTypeDef> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBTypeDef> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,DBTypeDef> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,DBTypeDef> **m_buckets;
  HashTableData<unsigned long,DBTypeDef> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,DBTypeDef,0>
{
  HashTable<unsigned long,DBTypeDef,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBTypeDef> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,DBTypeDef,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,DBTypeDef,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBTypeDef> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBTypeDef> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,DBTypeDef> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,DBTypeDef> *m_hashNext;
};


struct HashTableData<unsigned long,DBTypeDef> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,DBTypeDef> *>
{
  DBTypeDef m_data;
};


struct HashSorterIterator<long,DataHistory_IterationData>
{
  HashSorterNode<long,DataHistory_IterationData> *m_iter;
};


struct HashSorter<long,DataHistory_IterationData>_AscendingByKey
{
};


struct HashSorter<long,DataHistory_IterationData>_AscendingByData
{
};


struct HashSorter<long,DataHistory_IterationData>_DescendingByKey
{
};


struct HashSorter<long,DataHistory_IterationData>_DescendingByData
{
};


struct IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,0>
{
  IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,0>Vtbl *vfptr;
  HashTableData<long,DataHistory_IterationData> *m_aInplaceBuckets[23];
  HashTableData<long,DataHistory_IterationData> **m_buckets;
  HashTableData<long,DataHistory_IterationData> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<long,DataHistory_IterationData,0>
{
  HashTable<long,DataHistory_IterationData,0>Vtbl *vfptr;
  IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,0> m_intrusiveTable;
};


struct HashTable<long,DataHistory_IterationData,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<long,DataHistory_IterationData,0> *this, unsigned int);
};


struct IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,0> *this, unsigned int);
};


struct IntrusiveHashIterator<long,HashTableData<long,DataHistory_IterationData> *,0>
{
  IntrusiveHashTable<long,HashTableData<long,DataHistory_IterationData> *,0> *m_currHashTable;
  HashTableData<long,DataHistory_IterationData> **m_currBucket;
  HashTableData<long,DataHistory_IterationData> *m_currElement;
};


struct HashIterator<long,DataHistory_IterationData,0>
{
  IntrusiveHashIterator<long,HashTableData<long,DataHistory_IterationData> *,0> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,DBTypeDef> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DBTypeDef> *,0> *m_currHashTable;
  HashTableData<unsigned long,DBTypeDef> **m_currBucket;
  HashTableData<unsigned long,DBTypeDef> *m_currElement;
};


struct HashIterator<unsigned long,DBTypeDef,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,DBTypeDef> *,0> m_iter;
};


struct _STL_binary_function<DataHistory_DataIDHistoryData,DataHistory_DataIDHistoryData,bool>
{
};


struct _STL_less<DataHistory_DataIDHistoryData> : _STL_binary_function<DataHistory_DataIDHistoryData,DataHistory_DataIDHistoryData,bool>
{
};


struct _STL__BothPtrType<DataHistory_DataIDHistoryData *,DataHistory_DataIDHistoryData *>
{
};


struct _STL__BothPtrType<HashSorterNode<long,DataHistory_IterationData> *,HashSorterNode<long,DataHistory_IterationData> *>
{
};


struct _STL__OKToMemCpy<DataHistory_DataIDHistoryData,DataHistory_DataIDHistoryData>
{
};


struct _STL__OKToMemCpy<HashSorterNode<long,DataHistory_IterationData>,HashSorterNode<long,DataHistory_IterationData> >
{
};


struct LookFile
{
  PStringBase<unsigned short> _path;
  PStringBase<char> _key_path;
  PStringBase<char> _key;
};


struct DBObjGrabber<EnumMapper>
{
  EnumMapper *m_object;
};


struct EnumeratedBitfield<unsigned long>
{
  DBObjGrabber<EnumMapper> m_enumMapper;
};


struct EnumeratedBitfield<unsigned __int64>
{
  DBObjGrabber<EnumMapper> m_enumMapper;
};


struct IntrusiveSmartPointer<AsyncCache_CCallbackHandler>
{
  AsyncCache_CCallbackHandler *m_data;
};


struct IntrusiveHashData<QualifiedDataID,HashSetData<QualifiedDataID> *>
{
  QualifiedDataID m_hashKey;
  HashSetData<QualifiedDataID> *m_hashNext;
};


struct HashSetData<QualifiedDataID> : IntrusiveHashData<QualifiedDataID,HashSetData<QualifiedDataID> *>
{
};


struct IntrusiveHashTable<QualifiedDataID,HashSetData<QualifiedDataID> *,1>
{
  IntrusiveHashTable<QualifiedDataID,HashSetData<QualifiedDataID> *,1>Vtbl *vfptr;
  HashSetData<QualifiedDataID> *m_aInplaceBuckets[23];
  HashSetData<QualifiedDataID> **m_buckets;
  HashSetData<QualifiedDataID> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<QualifiedDataID,HashSetData<QualifiedDataID> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<QualifiedDataID,HashSetData<QualifiedDataID> *,1> *this, unsigned int);
};


struct IntrusiveHashIterator<QualifiedDataID,HashSetData<QualifiedDataID> *,1>
{
  IntrusiveHashTable<QualifiedDataID,HashSetData<QualifiedDataID> *,1> *m_currHashTable;
  HashSetData<QualifiedDataID> **m_currBucket;
  HashSetData<QualifiedDataID> *m_currElement;
};


struct HashSetIterator<QualifiedDataID>
{
  IntrusiveHashIterator<QualifiedDataID,HashSetData<QualifiedDataID> *,1> m_iter;
};


struct HashSet<QualifiedDataID>
{
  HashSet<QualifiedDataID>Vtbl *vfptr;
  IntrusiveHashTable<QualifiedDataID,HashSetData<QualifiedDataID> *,1> m_intrusiveTable;
};


struct HashSet<QualifiedDataID>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashSet<QualifiedDataID> *this, unsigned int);
};


struct DBCachePrefetchCallback : AsyncCacheCallback
{
  AsyncContext m_PreFetchContext;
  HashSet<QualifiedDataID> m_hashRequestedIDs;
};


struct $326D7E393BD4781DA7F26A036F74B02F
{
  unsigned __int32 m_raw_value : 28;
  unsigned __int32 m_inheritance_depth : 4;
};


union $FC71640D3AC27D295CA1E82105FCDDE6
{
  unsigned int m_val;
  $326D7E393BD4781DA7F26A036F74B02F m_valBitfield;
};


struct PEnum
{
  PStringBase<char> m_str;
  $FC71640D3AC27D295CA1E82105FCDDE6 ___u1;
  unsigned __int16 m_headerIndex;
  bool m_assigned_value;
  bool m_forced_value;
  bool m_client;
  bool m_server;
  bool m_internal;
  PStringBase<char> m_symbol;
  PStringBase<char> m_filename;
  PStringBase<char> m_comment_string;
  PFileNode *m_data_node;
};


struct PAlias
{
  PStringBase<char> m_str;
  SmartArray<PStringBase<char>,1> m_val;
  unsigned __int64 m_realVal;
  unsigned __int16 m_headerIndex;
  PStringBase<char> m_symbol;
  PStringBase<char> m_comment_string;
  PStringBase<char> m_gen_comment;
};


struct SmartArray<PEnum,1>
{
  PEnum *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<PAlias,1>
{
  PAlias *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) PEnumMapper
{
  SmartArray<PEnum,1> m_enum_array;
  SmartArray<PAlias,1> m_alias_array;
  EnumMapper m_enum_mapper;
  AutoGrowHashTable<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> m_all_mappings;
  unsigned int m_nextEnumValue;
  unsigned int m_inheritance_depth;
  unsigned int m_numbering_type;
  bool m_allCode;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<char> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<char> > *,0>Vtbl *vfptr;
  HashTableData<unsigned long,PStringBase<char> > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,PStringBase<char> > **m_buckets;
  HashTableData<unsigned long,PStringBase<char> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,PStringBase<char>,0>
{
  HashTable<unsigned long,PStringBase<char>,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<char> > *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,PStringBase<char>,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,PStringBase<char>,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<char> > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<char> > *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,PStringBase<char> > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,PStringBase<char> > *m_hashNext;
};


struct HashTableData<unsigned long,PStringBase<char> > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,PStringBase<char> > *>
{
  PStringBase<char> m_data;
};



struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,PStringBase<char> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<char> > *,0> *m_currHashTable;
  HashTableData<unsigned long,PStringBase<char> > **m_currBucket;
  HashTableData<unsigned long,PStringBase<char> > *m_currElement;
};


struct HashIterator<unsigned long,PStringBase<char>,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,PStringBase<char> > *,0> m_iter;
};


struct EnumIDMap_iterator
{
  EnumIDMap *m_mapper;
  HashIterator<unsigned long,PStringBase<char>,0> m_iter;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *,0>Vtbl *vfptr;
  HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *m_aInplaceBuckets[23];
  HashTableData<IDClass<_tagDataID,32,0>,unsigned long> **m_buckets;
  HashTableData<IDClass<_tagDataID,32,0>,unsigned long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<IDClass<_tagDataID,32,0>,unsigned long,0>
{
  HashTable<IDClass<_tagDataID,32,0>,unsigned long,0>Vtbl *vfptr;
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *,0> m_intrusiveTable;
};


struct HashTable<IDClass<_tagDataID,32,0>,unsigned long,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<IDClass<_tagDataID,32,0>,unsigned long,0> *this, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *,0> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *m_hashNext;
};


struct HashTableData<IDClass<_tagDataID,32,0>,unsigned long> : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *>
{
  unsigned int m_data;
};




struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *,0> *m_currHashTable;
  HashTableData<IDClass<_tagDataID,32,0>,unsigned long> **m_currBucket;
  HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *m_currElement;
};


struct HashIterator<IDClass<_tagDataID,32,0>,unsigned long,0>
{
  IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,unsigned long> *,0> m_iter;
};


struct _STL_hash<PStringBase<char> >
{
};


struct _STL_hash<PStringBase<unsigned short> >
{
};


struct _STL_hash<CaseInsensitiveStringBase<PStringBase<char> > >
{
};


struct _STL_hash<CaseInsensitiveStringBase<PStringBase<unsigned short> > >
{
};


struct _STL_hash<InstanceID>
{
};


struct _STL_hash<IDClass<_tagDataID,32,0> >
{
};


struct _STL_hash<IDClass<_tagCellID,16,65535> >
{
};


struct ProjectSettings
{
};


struct _STL_binary_function<PStringBase<char>,PStringBase<char>,bool>
{
};


struct _STL_equal_to<PStringBase<char> > : _STL_binary_function<PStringBase<char>,PStringBase<char>,bool>
{
};


struct _STL_unary_function<_STL_pair<PStringBase<char> const ,PStringBase<char> >,PStringBase<char> const >
{
};


struct _STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > > : _STL_unary_function<_STL_pair<PStringBase<char> const ,PStringBase<char> >,PStringBase<char> const >
{
};


struct _STL_allocator<void *>
{
};


struct _STL__STLP_alloc_proxy<void * *,void *,_STL_allocator<void *> > : _STL_allocator<void *>
{
  void **_M_data;
};


struct _STL__Vector_base<void *,_STL_allocator<void *> >
{
  void **_M_start;
  void **_M_finish;
  _STL__STLP_alloc_proxy<void * *,void *,_STL_allocator<void *> > _M_end_of_storage;
};


struct _STL_vector<void *,_STL_allocator<void *> > : _STL__Vector_base<void *,_STL_allocator<void *> >
{
};


struct _STL_allocator<_STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > > >
{
};


struct _STL__STLP_alloc_proxy<unsigned int,_STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_allocator<_STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > > > > : _STL_allocator<_STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > > >
{
  unsigned int _M_data;
};


struct _STL_hashtable<_STL_pair<PStringBase<char> const ,PStringBase<char> >,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > >
{
  _STL_hash<PStringBase<char> > _M_hash;
  _STL_equal_to<PStringBase<char> > _M_equals;
  _STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > > _M_get_key;
  _STL_vector<void *,_STL_allocator<void *> > _M_buckets;
  _STL__STLP_alloc_proxy<unsigned int,_STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_allocator<_STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > > > > _M_num_elements;
};


struct _STL_hash_map<PStringBase<char>,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > >
{
  _STL_hashtable<_STL_pair<PStringBase<char> const ,PStringBase<char> >,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > > _M_ht;
};


struct _STL_pair<PStringBase<char> const ,PStringBase<char> >
{
  PStringBase<char> first;
  PStringBase<char> second;
};


struct _STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > >
{
  _STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > > *_M_next;
  _STL_pair<PStringBase<char> const ,PStringBase<char> > _M_val;
};


struct _STL__Hashtable_iterator<_STL_pair<PStringBase<char> const ,PStringBase<char> >,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > >
{
  _STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > > *_M_cur;
  _STL_hashtable<_STL_pair<PStringBase<char> const ,PStringBase<char> >,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > > *_M_ht;
};


struct _STL__Ht_iterator<_STL_pair<PStringBase<char> const ,PStringBase<char> >,_STL__Nonconst_traits<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > > : _STL__Hashtable_iterator<_STL_pair<PStringBase<char> const ,PStringBase<char> >,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > >
{
};


struct _STL__Ht_iterator<_STL_pair<PStringBase<char> const ,PStringBase<char> >,_STL__Const_traits<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > > : _STL__Hashtable_iterator<_STL_pair<PStringBase<char> const ,PStringBase<char> >,PStringBase<char>,_STL_hash<PStringBase<char> >,_STL__Select1st<_STL_pair<PStringBase<char> const ,PStringBase<char> > >,_STL_equal_to<PStringBase<char> >,_STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > > >
{
};


struct _STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > >
{
};


struct _STL__Const_traits<_STL_pair<PStringBase<char> const ,PStringBase<char> > >
{
};


struct _STL__Nonconst_traits<_STL_pair<PStringBase<char> const ,PStringBase<char> > >
{
};


struct _STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > >_rebind<_STL__Hashtable_node<_STL_pair<PStringBase<char> const ,PStringBase<char> > > >
{
};


struct _STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > >_rebind<void *>
{
};


struct _STL_allocator<_STL_pair<PStringBase<char> const ,PStringBase<char> > >_rebind<_STL_pair<PStringBase<char> const ,PStringBase<char> > >
{
};


struct _STL_allocator<void *>_rebind<void *>
{
};


struct _STL__IsPOD<void *>
{
};


struct _STL_binary_function<unsigned int,unsigned int,bool>
{
};


struct _STL_less<unsigned int> : _STL_binary_function<unsigned int,unsigned int,bool>
{
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,ArchiveVersionRow> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,ArchiveVersionRow> **m_buckets;
  HashTableData<unsigned long,ArchiveVersionRow> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,ArchiveVersionRow> *m_hashNext;
};


struct HashTableData<unsigned long,ArchiveVersionRow> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *>
{
  ArchiveVersionRow m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *,0> *m_currHashTable;
  HashTableData<unsigned long,ArchiveVersionRow> **m_currBucket;
  HashTableData<unsigned long,ArchiveVersionRow> *m_currElement;
};


struct HashIterator<unsigned long,ArchiveVersionRow,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *,0> m_iter;
};


struct HashTable<unsigned long,ArchiveVersionRow,0>
{
  HashTable<unsigned long,ArchiveVersionRow,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ArchiveVersionRow> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,ArchiveVersionRow,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,ArchiveVersionRow,0> *this, unsigned int);
};


struct __declspec(align(8)) QualifiedIteration
{
  unsigned __int64 idDatFile;
  int idIteration;
};


struct DDD_RequestDataMessage : FakeMessageData
{
  QualifiedDataID m_qdid;
};


struct DDD_ErrorMessage : FakeMessageData
{
  QualifiedDataID m_qdid;
  CliDatError m_eError;
};


struct SmartArray<CAllIterationList_PTaggedIterationList,1>
{
  CAllIterationList_PTaggedIterationList *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct CAllIterationList
{
  CAllIterationListVtbl *vfptr;
  SmartArray<CAllIterationList_PTaggedIterationList,1> m_Lists;
};


struct CAllIterationListVtbl
{
  void (__thiscall *Serialize)(CAllIterationList *this, Archive *);
};


struct __declspec(align(8)) CAllIterationList_PTaggedIterationList
{
  CAllIterationList_PTaggedIterationListVtbl *vfptr;
  unsigned __int64 idDatFile;
  CMostlyConsecutiveIntSet List;
};


struct CAllIterationList_PTaggedIterationListVtbl
{
  void (__thiscall *Serialize)(CAllIterationList_PTaggedIterationList *this, Archive *);
};


struct DDD_InterrogationResponseMessage : FakeMessageData
{
  unsigned int m_ClientLanguage;
  CAllIterationList m_ItersWithKeys;
  CAllIterationList m_ItersWithoutKeys;
  unsigned int m_dwFlags;
};


struct SmartArray<QualifiedIteration,1>
{
  QualifiedIteration *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *,0>
{
  IntrusiveHashTable<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *,0>Vtbl *vfptr;
  HashTableData<QualifiedIteration,IterationKey> *m_aInplaceBuckets[23];
  HashTableData<QualifiedIteration,IterationKey> **m_buckets;
  HashTableData<QualifiedIteration,IterationKey> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<QualifiedIteration,IterationKey,0>
{
  HashTable<QualifiedIteration,IterationKey,0>Vtbl *vfptr;
  IntrusiveHashTable<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *,0> m_intrusiveTable;
};


struct HashTable<QualifiedIteration,IterationKey,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<QualifiedIteration,IterationKey,0> *this, unsigned int);
};


struct IntrusiveHashTable<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *,0> *this, unsigned int);
};


struct __declspec(align(8)) IntrusiveHashData<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *>
{
  QualifiedIteration m_hashKey;
  HashTableData<QualifiedIteration,IterationKey> *m_hashNext;
};


struct HashTableData<QualifiedIteration,IterationKey> : IntrusiveHashData<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *>
{
  IterationKey m_data;
};


struct DDD_BeginPullDDDMessage : FakeMessageData
{
  unsigned int m_cbDataExpected;
  SmartArray<QualifiedIteration,1> m_IterationsToDownload;
  HashTable<QualifiedIteration,IterationKey,0> m_Keys;
};


struct IntrusiveHashIterator<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *,0>
{
  IntrusiveHashTable<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *,0> *m_currHashTable;
  HashTableData<QualifiedIteration,IterationKey> **m_currBucket;
  HashTableData<QualifiedIteration,IterationKey> *m_currElement;
};


struct HashIterator<QualifiedIteration,IterationKey,0>
{
  IntrusiveHashIterator<QualifiedIteration,HashTableData<QualifiedIteration,IterationKey> *,0> m_iter;
};


struct SmartArray<DDD_DataMessage *,1>
{
  DDD_DataMessage **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) DDD_IterationDataMessage : FakeMessageData
{
  unsigned int m_cbTotalData;
  MissingIteration m_IterationData;
  SmartArray<DDD_DataMessage *,1> m_Data;
};


struct DDD_EndDDDMessage : FakeMessageData
{
};


struct DDD_PatchPendingMessage : FakeMessageData
{
  unsigned int m_nLinePosition;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UILocationData> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UILocationData> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,UILocationData> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,UILocationData> **m_buckets;
  HashTableData<unsigned long,UILocationData> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UILocationData> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UILocationData> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,UILocationData> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,UILocationData> *m_hashNext;
};


struct HashTableData<unsigned long,UILocationData> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,UILocationData> *>
{
  UILocationData m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,UILocationData> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UILocationData> *,0> *m_currHashTable;
  HashTableData<unsigned long,UILocationData> **m_currBucket;
  HashTableData<unsigned long,UILocationData> *m_currElement;
};


struct HashIterator<unsigned long,UILocationData,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,UILocationData> *,0> m_iter;
};


struct HashTable<unsigned long,UILocationData,0>
{
  HashTable<unsigned long,UILocationData,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UILocationData> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,UILocationData,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,UILocationData,0> *this, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *,0>Vtbl *vfptr;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *m_aInplaceBuckets[23];
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > **m_buckets;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *,0> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *m_hashNext;
};


struct HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *>
{
  HashTable<unsigned long,UILocationData,0> m_data;
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *,0> *m_currHashTable;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > **m_currBucket;
  HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *m_currElement;
};


struct HashIterator<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0>,0>
{
  IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *,0> m_iter;
};


struct HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0>,0>
{
  HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0>,0>Vtbl *vfptr;
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0> > *,0> m_intrusiveTable;
};


struct HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0>,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0>,0> *this, unsigned int);
};


struct UISaveLocations
{
  HashTable<IDClass<_tagDataID,32,0>,HashTable<unsigned long,UILocationData,0>,0> m_myHash;
};


struct DBObjGrabber<EnumIDMap>
{
  EnumIDMap *m_object;
};


struct DBObjGrabber<DualEnumIDMap>
{
  DualEnumIDMap *m_object;
};


struct __declspec(align(8)) DBFile2IDTable : DBObj, TFile2IDTable
{
};


struct ListIterator<StringTableMetaLanguage_Node const *>
{
  ListIterator<StringTableMetaLanguage_Node const *>Vtbl *vfptr;
  ListNode<StringTableMetaLanguage_Node const *> *_current;
  List<StringTableMetaLanguage_Node const *> *_list;
};


struct ListIterator<StringTableMetaLanguage_Node const *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<StringTableMetaLanguage_Node const *> *this, unsigned int);
};


struct ListNode<StringTableMetaLanguage_Node const *>
{
  StringTableMetaLanguage_Node *data;
  ListNode<StringTableMetaLanguage_Node const *> *next;
  ListNode<StringTableMetaLanguage_Node const *> *prev;
};


struct List<StringTableMetaLanguage_Node const *>
{
  List<StringTableMetaLanguage_Node const *>Vtbl *vfptr;
  ListNode<StringTableMetaLanguage_Node const *> *_head;
  ListNode<StringTableMetaLanguage_Node const *> *_tail;
  unsigned int _num_elements;
};


const struct StringTableMetaLanguage_Node
{
  PStringBase<unsigned short> text;
  StringTableMetaLanguage_NodeType type;
  List<StringTableMetaLanguage_Node const *> children;
  int ID;
  bool bForceCapital;
  PStringBase<unsigned short> flags;
  int pos;
};


struct List<StringTableMetaLanguage_Node const *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<StringTableMetaLanguage_Node const *> *this, unsigned int);
};


struct StringTableMetaLanguage_RenderErr
{
  int pos;
  StringTableMetaLanguage_RenderErrorCode code;
  PStringBase<char> msg;
};



struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,NameFilterLanguageData> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,NameFilterLanguageData> **m_buckets;
  HashTableData<unsigned long,NameFilterLanguageData> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,NameFilterLanguageData> *m_hashNext;
};


struct HashTableData<unsigned long,NameFilterLanguageData> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *>
{
  NameFilterLanguageData m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *,0> *m_currHashTable;
  HashTableData<unsigned long,NameFilterLanguageData> **m_currBucket;
  HashTableData<unsigned long,NameFilterLanguageData> *m_currElement;
};


struct HashIterator<unsigned long,NameFilterLanguageData,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *,0> m_iter;
};


struct HashTable<unsigned long,NameFilterLanguageData,0>
{
  HashTable<unsigned long,NameFilterLanguageData,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,NameFilterLanguageData> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,NameFilterLanguageData,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,NameFilterLanguageData,0> *this, unsigned int);
};



struct List<PFileNode *>
{
  List<PFileNode *>Vtbl *vfptr;
  ListNode<PFileNode *> *_head;
  ListNode<PFileNode *> *_tail;
  unsigned int _num_elements;
};


struct List<PFileNode *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<PFileNode *> *this, unsigned int);
};


struct ListNode<PFileNode *>
{
  PFileNode *data;
  ListNode<PFileNode *> *next;
  ListNode<PFileNode *> *prev;
};


struct MMapUtil : DataSource
{
  bool fFileOpen_;
  bool fFileAlreadyExisted_;
  char *loadDataFileAddr_;
  void *loadDataFile_;
  void *loadDataFileMapping_;
};


struct ListIterator<PFileNode *>
{
  ListIterator<PFileNode *>Vtbl *vfptr;
  ListNode<PFileNode *> *_current;
  List<PFileNode *> *_list;
};


struct ListIterator<PFileNode *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<PFileNode *> *this, unsigned int);
};


struct _STL__BothPtrType<void * *,void * *>
{
};


struct _STL__OKToMemCpy<void *,void *>
{
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *,0>Vtbl *vfptr;
  HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > **m_buckets;
  HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *m_hashNext;
};


struct IntrusiveSmartPointer<BasePropertyValue>
{
  BasePropertyValue *m_data;
};


struct HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *>
{
  IntrusiveSmartPointer<BasePropertyValue> m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *,0> *m_currHashTable;
  HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > **m_currBucket;
  HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *m_currElement;
};


struct HashIterator<unsigned long,IntrusiveSmartPointer<BasePropertyValue>,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *,0> m_iter;
};


struct HashTable<unsigned long,IntrusiveSmartPointer<BasePropertyValue>,0>
{
  HashTable<unsigned long,IntrusiveSmartPointer<BasePropertyValue>,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IntrusiveSmartPointer<BasePropertyValue> > *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,IntrusiveSmartPointer<BasePropertyValue>,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,IntrusiveSmartPointer<BasePropertyValue>,0> *this, unsigned int);
};


struct TriStatePropertyValue : BasePropertyValue
{
  TriState m_value;
};




struct ArrayPropertyValue : BasePropertyValue
{
  SmartArray<BaseProperty,1> m_value;
};


struct Bitfield32PropertyValue : BasePropertyValue
{
  unsigned int m_value;
};


struct Bitfield64PropertyValue : BasePropertyValue
{
  unsigned __int64 m_value;
};


struct __declspec(align(4)) BoolPropertyValue : BasePropertyValue
{
  bool m_value;
};


struct ColorPropertyValue : BasePropertyValue
{
  RGBAColor m_value;
};


struct DataFilePropertyValue : BasePropertyValue
{
  IDClass<_tagDataID,32,0> m_value;
};


struct EnumPropertyValue : BasePropertyValue
{
  unsigned int m_value;
};


struct FloatPropertyValue : BasePropertyValue
{
  float m_value;
};


struct InstanceIDPropertyValue : BasePropertyValue
{
  unsigned int m_value;
};


struct IntegerPropertyValue : BasePropertyValue
{
  int m_value;
};


struct LongIntegerPropertyValue : BasePropertyValue
{
  __int64 m_value;
};


struct PositionPropertyValue : BasePropertyValue
{
  Position m_value;
};


struct StringInfoPropertyValue : BasePropertyValue
{
  StringInfo m_value;
};


struct StringPropertyValue : BasePropertyValue
{
  PStringBase<char> m_value;
};


struct StringTokenPropertyValue : BasePropertyValue
{
  unsigned int m_value;
  PStringBase<char> m_tokenName;
};


struct StructPropertyValue : BasePropertyValue
{
  AutoGrowHashTable<unsigned long,BaseProperty> m_value;
};


struct TimeStampPropertyValue : BasePropertyValue
{
  long double m_value;
};


struct VectorPropertyValue : BasePropertyValue
{
  Vector3 m_value;
};


struct WaveformPropertyValue : BasePropertyValue
{
  Waveform m_value;
};


struct SerializationBehavior<SB_Hash<SB_Default,SB_Alloc<SB_DefaultAllocator,0,SB_Default>,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> >
{
};


struct SB_Hash<SB_Default,SB_Alloc<SB_DefaultAllocator,0,SB_Default>,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> : SerializationBehavior<SB_Hash<SB_Default,SB_Alloc<SB_DefaultAllocator,0,SB_Default>,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> >
{
};


struct SB_Hash<SB_Default,SB_Alloc<SB_DefaultAllocator,0,SB_Default>,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME>_SB_HashData
{
};


struct InsensitivePStringSort : _STL_binary_function<PStringBase<char>,PStringBase<char>,bool>
{
};


struct _STL_binary_function<unsigned long,unsigned long,bool>
{
};


struct PropertyGroupNameSort : _STL_binary_function<unsigned long,unsigned long,bool>
{
};


struct _STL_binary_function<BaseProperty,BaseProperty,bool>
{
};


struct BasePropertyNameSort : _STL_binary_function<BaseProperty,BaseProperty,bool>
{
};


struct _STL__BothPtrType<PStringBase<char> *,PStringBase<char> *>
{
};


struct _STL__BothPtrType<unsigned long *,unsigned long *>
{
};


struct _STL__BothPtrType<BaseProperty *,BaseProperty *>
{
};


struct _STL__OKToMemCpy<PStringBase<char>,PStringBase<char> >
{
};


struct _STL__OKToMemCpy<unsigned long,unsigned long>
{
};


struct _STL__OKToMemCpy<BaseProperty,BaseProperty>
{
};


struct StringTableGen
{
  StringTableGenVtbl *vfptr;
};


struct StringTableGenVtbl
{
  void *(__thiscall *__vecDelDtor)(StringTableGen *this, unsigned int);
  void (__thiscall *Reset)(StringTableGen *this);
  bool (__thiscall *Save)(StringTableGen *this);
  bool (__thiscall *AddString)(StringTableGen *this, PStringBase<char>, PStringBase<char>, PStringBase<char>, PStringBase<char>, PStringBase<char>);
  void (__thiscall *Report)(StringTableGen *this);
};


struct MasterStringTableGen
{
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *,0>Vtbl *vfptr;
  HashTableData<unsigned long,PStringBase<unsigned short> > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,PStringBase<unsigned short> > **m_buckets;
  HashTableData<unsigned long,PStringBase<unsigned short> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,PStringBase<unsigned short> > *m_hashNext;
};


struct HashTableData<unsigned long,PStringBase<unsigned short> > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *>
{
  PStringBase<unsigned short> m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *,0> *m_currHashTable;
  HashTableData<unsigned long,PStringBase<unsigned short> > **m_currBucket;
  HashTableData<unsigned long,PStringBase<unsigned short> > *m_currElement;
};


struct HashIterator<unsigned long,PStringBase<unsigned short>,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *,0> m_iter;
};


struct HashTable<unsigned long,PStringBase<unsigned short>,0>
{
  HashTable<unsigned long,PStringBase<unsigned short>,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PStringBase<unsigned short> > *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,PStringBase<unsigned short>,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,PStringBase<unsigned short>,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringTableString *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringTableString *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,StringTableString *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,StringTableString *> **m_buckets;
  HashTableData<unsigned long,StringTableString *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringTableString *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringTableString *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,StringTableString *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,StringTableString *> *m_hashNext;
};


struct HashTableData<unsigned long,StringTableString *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,StringTableString *> *>
{
  StringTableString *m_data;
};


struct StringTableString
{
  IDClass<_tagDataID,32,0> m_table;
  PStringBase<char> m_name;
  SmartArray<PStringBase<unsigned short>,1> m_comments;
  SmartArray<PStringBase<unsigned short>,1> m_strings;
  SmartArray<unsigned long,1> m_variables;
  SmartArray<PStringBase<unsigned short>,1> m_varNames;
  unsigned int m_numWords;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,StringTableString *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringTableString *> *,0> *m_currHashTable;
  HashTableData<unsigned long,StringTableString *> **m_currBucket;
  HashTableData<unsigned long,StringTableString *> *m_currElement;
};


struct HashIterator<unsigned long,StringTableString *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,StringTableString *> *,0> m_iter;
};


struct HashSorterNode<unsigned long,StringTableString *>
{
  const unsigned int *m_key;
  StringTableString **m_data;
};


struct SmartArray<HashSorterNode<unsigned long,StringTableString *>,1>
{
  HashSorterNode<unsigned long,StringTableString *> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct HashSorter<unsigned long,StringTableString *>
{
  SmartArray<HashSorterNode<unsigned long,StringTableString *>,1> m_list;
};


struct HashTable<unsigned long,StringTableString *,0>
{
  HashTable<unsigned long,StringTableString *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringTableString *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,StringTableString *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,StringTableString *,0> *this, unsigned int);
};


struct HashSorterIterator<unsigned long,StringTableString *>
{
  HashSorterNode<unsigned long,StringTableString *> *m_iter;
};


struct HashSorter<unsigned long,StringTableString *>_AscendingByKey
{
};


struct HashSorter<unsigned long,StringTableString *>_AscendingByData
{
};


struct HashSorter<unsigned long,StringTableString *>_DescendingByKey
{
};


struct HashSorter<unsigned long,StringTableString *>_DescendingByData
{
};


struct StringTableStringTableAscending
{
};


struct DBObjGrabber<StringTable>
{
  StringTable *m_object;
};


struct _STL__BothPtrType<HashSorterNode<unsigned long,StringTableString *> *,HashSorterNode<unsigned long,StringTableString *> *>
{
};


struct _STL__OKToMemCpy<HashSorterNode<unsigned long,StringTableString *>,HashSorterNode<unsigned long,StringTableString *> >
{
};


struct StringInfoDataResolver
{
};


struct StringInfo_StringInfoData : StringInfoData
{
  StringInfo m_cVal;
};


struct __declspec(align(8)) Double_StringInfoData : StringInfoData
{
  long double m_fVal;
  unsigned __int16 m_iPrecision;
};


struct LInt_StringInfoData : StringInfoData
{
  __int64 m_iVal;
};


struct ULInt_StringInfoData : StringInfoData
{
  unsigned __int64 m_iVal;
};


struct Formatted_StringInfoData
{
  Formatted_StringInfoDataVtbl *vfptr;
  bool m_bGrouping;
  unsigned __int16 m_iBase;
};


struct Formatted_StringInfoDataVtbl
{
  void (__thiscall *Serialize)(Formatted_StringInfoData *this, Archive *);
};


struct Formatted_Double_StringInfoData : Double_StringInfoData, Formatted_StringInfoData
{
};


struct Formatted_LInt_StringInfoData : LInt_StringInfoData, Formatted_StringInfoData
{
};


struct Formatted_ULInt_StringInfoData : ULInt_StringInfoData, Formatted_StringInfoData
{
};


struct SerializationBehavior<SB_Hash<SB_Default,SB_TypeAlloc<StringInfoDataResolver,SB_Default>,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> >
{
};


struct SB_Hash<SB_Default,SB_TypeAlloc<StringInfoDataResolver,SB_Default>,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> : SerializationBehavior<SB_Hash<SB_Default,SB_TypeAlloc<StringInfoDataResolver,SB_Default>,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> >
{
};


struct SB_Hash<SB_Default,SB_TypeAlloc<StringInfoDataResolver,SB_Default>,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME>_SB_HashData
{
};


struct SerializationBehavior<SB_TypeAlloc<StringInfoDataResolver,SB_Default> >
{
};


struct SB_TypeAlloc<StringInfoDataResolver,SB_Default> : SerializationBehavior<SB_TypeAlloc<StringInfoDataResolver,SB_Default> >
{
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *,0>Vtbl *vfptr;
  HashTableData<unsigned long,List<PStringBase<char> > > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,List<PStringBase<char> > > **m_buckets;
  HashTableData<unsigned long,List<PStringBase<char> > > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,List<PStringBase<char> > > *m_hashNext;
};


struct HashTableData<unsigned long,List<PStringBase<char> > > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *>
{
  List<PStringBase<char> > m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *,0> *m_currHashTable;
  HashTableData<unsigned long,List<PStringBase<char> > > **m_currBucket;
  HashTableData<unsigned long,List<PStringBase<char> > > *m_currElement;
};


struct HashIterator<unsigned long,List<PStringBase<char> >,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *,0> m_iter;
};


struct HashTable<unsigned long,List<PStringBase<char> >,0>
{
  HashTable<unsigned long,List<PStringBase<char> >,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<PStringBase<char> > > *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,List<PStringBase<char> >,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,List<PStringBase<char> >,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *,0>Vtbl *vfptr;
  HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > **m_buckets;
  HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *m_hashNext;
};


struct HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *>
{
  HashTable<unsigned long,List<PStringBase<char> >,0> m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *,0> *m_currHashTable;
  HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > **m_currBucket;
  HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *m_currElement;
};


struct HashIterator<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0>,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *,0> m_iter;
};


struct HashTable<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0>,0>
{
  HashTable<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0>,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0> > *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0>,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0>,0> *this, unsigned int);
};


struct __declspec(align(8)) TabooTable : DBObj
{
  HashTable<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0>,0> m_audienceToBannedPatterns;
};


struct NameFilterSystem
{
};


struct TabooTableAdaptor
{
};


struct DBObjGrabber<TabooTable>
{
  TabooTable *m_object;
};


struct PerfMonInstaller
{
  PStringBase<char> m_appName;
  PStringBase<unsigned short> m_appNameWide;
  PStringBase<char> m_registryPath;
};


struct List<PerfMonCounterInfo *>
{
  List<PerfMonCounterInfo *>Vtbl *vfptr;
  ListNode<PerfMonCounterInfo *> *_head;
  ListNode<PerfMonCounterInfo *> *_tail;
  unsigned int _num_elements;
};


struct List<PerfMonCounterInfo *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<PerfMonCounterInfo *> *this, unsigned int);
};


struct ListNode<PerfMonCounterInfo *>
{
  PerfMonCounterInfo *data;
  ListNode<PerfMonCounterInfo *> *next;
  ListNode<PerfMonCounterInfo *> *prev;
};


struct ListNode<unsigned short>
{
  unsigned __int16 data;
  ListNode<unsigned short> *next;
  ListNode<unsigned short> *prev;
};


struct List<unsigned short>
{
  List<unsigned short>Vtbl *vfptr;
  ListNode<unsigned short> *_head;
  ListNode<unsigned short> *_tail;
  unsigned int _num_elements;
};


struct List<unsigned short>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<unsigned short> *this, unsigned int);
};


struct ListIterator<unsigned short>
{
  ListIterator<unsigned short>Vtbl *vfptr;
  ListNode<unsigned short> *_current;
  List<unsigned short> *_list;
};


struct ListIterator<unsigned short>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<unsigned short> *this, unsigned int);
};


struct PerfMonCounter<unsigned long> : PerfMonCounterInfo
{
  unsigned int m_counter;
};


struct ListIterator<PerfMonCounterInfo *>
{
  ListIterator<PerfMonCounterInfo *>Vtbl *vfptr;
  ListNode<PerfMonCounterInfo *> *_current;
  List<PerfMonCounterInfo *> *_list;
};


struct ListIterator<PerfMonCounterInfo *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<PerfMonCounterInfo *> *this, unsigned int);
};


struct __declspec(align(2)) _MIDL_TYPE_FORMAT_STRING
{
  __int16 Pad;
  char Format[27];
};


struct __declspec(align(2)) _MIDL_PROC_FORMAT_STRING
{
  __int16 Pad;
  char Format[29];
};


struct __declspec(align(4)) PerfMonCounterManager : CrashCleaner
{
  RpcServer *m_pRpcServer;
  List<PerfMonCounterInfo *> m_counters;
  bool m_fInstalling;
};


struct SmartArray<__int64,1>
{
  __int64 *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct AC1Legacy_ListIterator<AC1Legacy_PStringBase<char> >
{
  AC1Legacy_ListIterator<AC1Legacy_PStringBase<char> >Vtbl *vfptr;
  AC1Legacy_ListNode<AC1Legacy_PStringBase<char> > *_current;
  AC1Legacy_List<AC1Legacy_PStringBase<char> > *_list;
};


struct AC1Legacy_ListIterator<AC1Legacy_PStringBase<char> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_ListIterator<AC1Legacy_PStringBase<char> > *this, unsigned int);
};


struct AC1Legacy_ListNode<AC1Legacy_PStringBase<char> >
{
  AC1Legacy_PStringBase<char> data;
  AC1Legacy_ListNode<AC1Legacy_PStringBase<char> > *next;
  AC1Legacy_ListNode<AC1Legacy_PStringBase<char> > *prev;
};


struct AC1Legacy_List<AC1Legacy_PStringBase<char> >
{
  AC1Legacy_List<AC1Legacy_PStringBase<char> >Vtbl *vfptr;
  AC1Legacy_ListNode<AC1Legacy_PStringBase<char> > *_head;
  AC1Legacy_ListNode<AC1Legacy_PStringBase<char> > *_tail;
  unsigned int _num_elements;
};


struct AC1Legacy_List<AC1Legacy_PStringBase<char> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_List<AC1Legacy_PStringBase<char> > *this, unsigned int);
};


struct FilenameList
{
  OldList pathList;
  OldList fileList;
  char fullname[256];
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *,0> *m_currHashTable;
  HashTableData<unsigned long,InputMapConflictsValue> **m_currBucket;
  HashTableData<unsigned long,InputMapConflictsValue> *m_currElement;
};


struct HashIterator<unsigned long,InputMapConflictsValue,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,InputMapConflictsValue> *,0> m_iter;
};


struct IntrusiveHashListIterator<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1>
{
  HashList<unsigned long,ActionMapValue,1>_HashListData *m_pData;
  IntrusiveHashList<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<unsigned long,ActionMapValue,1> >
{
  IntrusiveHashListIterator<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1> m_iter;
};


struct IntrusiveHashListIterator<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1>
{
  HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *m_pData;
  IntrusiveHashList<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1> >
{
  IntrusiveHashListIterator<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,ActionMapValue,1>_HashListData *,1> *m_currHashTable;
  HashList<unsigned long,ActionMapValue,1>_HashListData **m_currBucket;
  HashList<unsigned long,ActionMapValue,1>_HashListData *m_currElement;
};


struct IntrusiveHashIterator<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *,1> *m_currHashTable;
  HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData **m_currBucket;
  HashList<unsigned long,HashList<unsigned long,ActionMapValue,1>,1>_HashListData *m_currElement;
};


struct __declspec(align(8)) UISurfaceObject : UIObject
{
  Matrix4 m_transform;
  Matrix4 m_invTransform;
  Matrix4 m_rotMatrix;
  UISurface *m_surface;
  RenderMaterial *m_material;
  float m_opacity;
  bool m_bTile;
  int m_virtualXRot;
  int m_virtualYRot;
  int m_virtualZRot;
};


struct CImeFontWrapper
{
  CImeFontWrapperVtbl *vfptr;
  unsigned int m_color;
  int m_x;
  int m_y;
  Font *m_font;
};


struct CImeFontWrapperVtbl
{
  void (__thiscall *SetHeight)(CImeFontWrapper *this, unsigned int);
  void (__thiscall *SetColor)(CImeFontWrapper *this, unsigned int);
  void (__thiscall *SetPosition)(CImeFontWrapper *this, int, int);
  void (__thiscall *GetTextExtent)(CImeFontWrapper *this, const char *, unsigned int *, unsigned int *);
  void (__thiscall *DrawTextA)(CImeFontWrapper *this, const char *);
};


struct __declspec(align(4)) UIViewportObject : UIObject
{
  float m_rOriginalVDist;
  bool m_fOriginalDegrades;
};


struct UIRectangleObject : UIObject
{
  RGBAColor m_color;
};


struct IntrusiveHashData<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *>
{
  UIObject *m_hashKey;
  HashList<UIObject *,UIObject *,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *> : IntrusiveHashData<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *>, DLListData
{
};


struct HashList<UIObject *,UIObject *,1>_HashListData : IntrusiveHashListData<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *>
{
  UIObject *m_data;
};


struct IntrusiveHashTable<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1>
{
  IntrusiveHashTable<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1>Vtbl *vfptr;
  HashList<UIObject *,UIObject *,1>_HashListData *m_aInplaceBuckets[23];
  HashList<UIObject *,UIObject *,1>_HashListData **m_buckets;
  HashList<UIObject *,UIObject *,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashList<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1>
{
  IntrusiveHashTable<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct IntrusiveHashListIterator<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1>
{
  HashList<UIObject *,UIObject *,1>_HashListData *m_pData;
  IntrusiveHashList<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<UIObject *,UIObject *,1> >
{
  IntrusiveHashListIterator<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1> m_iter;
};


struct HashList<UIObject *,UIObject *,1>
{
  IntrusiveHashList<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1> m_ihlIntrusive;
};


struct RenderUI
{
};


struct _STL_binary_function<UIObject *,UIObject *,bool>
{
};


struct UIObjectSort : _STL_binary_function<UIObject *,UIObject *,bool>
{
};


struct IntrusiveHashIterator<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1>
{
  IntrusiveHashTable<UIObject *,HashList<UIObject *,UIObject *,1>_HashListData *,1> *m_currHashTable;
  HashList<UIObject *,UIObject *,1>_HashListData **m_currBucket;
  HashList<UIObject *,UIObject *,1>_HashListData *m_currElement;
};


struct List<CInputHandler *>
{
  List<CInputHandler *>Vtbl *vfptr;
  ListNode<CInputHandler *> *_head;
  ListNode<CInputHandler *> *_tail;
  unsigned int _num_elements;
};


struct List<CInputHandler *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<CInputHandler *> *this, unsigned int);
};


struct ListNode<CInputHandler *>
{
  CInputHandler *data;
  ListNode<CInputHandler *> *next;
  ListNode<CInputHandler *> *prev;
};


struct List<CInputManager_InputMapEntry>
{
  List<CInputManager_InputMapEntry>Vtbl *vfptr;
  ListNode<CInputManager_InputMapEntry> *_head;
  ListNode<CInputManager_InputMapEntry> *_tail;
  unsigned int _num_elements;
};


struct List<CInputManager_InputMapEntry>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<CInputManager_InputMapEntry> *this, unsigned int);
};


struct CInputManager_InputMapEntry
{
  unsigned int m_mapID;
  IInputActionCallback *m_pcCallback;
  int m_nPriority;
};


struct ListNode<CInputManager_InputMapEntry>
{
  CInputManager_InputMapEntry data;
  ListNode<CInputManager_InputMapEntry> *next;
  ListNode<CInputManager_InputMapEntry> *prev;
};


struct IntrusiveHashTable<unsigned long,ActionState *,1>
{
  IntrusiveHashTable<unsigned long,ActionState *,1>Vtbl *vfptr;
  ActionState *m_aInplaceBuckets[23];
  ActionState **m_buckets;
  ActionState **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,ActionState *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,ActionState *,1> *this, unsigned int);
};


struct CInputManager : ICIDM
{
  tagPOINT m_ptMousePos;
  long double m_ttLastInputEvent;
  bool m_fWantMouseLookMode;
  bool m_fInMouseLookMode;
  bool m_textMode;
  bool m_lastFocus;
  List<CInputHandler *> m_actionList;
  List<CInputHandler *> m_characterList;
  List<CInputHandler *> m_mouseLookList;
  List<CInputHandler *> m_mouseMoveList;
  List<CInputHandler *> m_focusSwitchList;
  List<CInputManager_InputMapEntry> m_inputMapList;
  CInputHandler *m_pKeyHitHandler;
  float m_MouseLookSensitivity;
  float m_MouseLookSmoothingAmount;
  bool m_InvertMouseLookYAxis;
  bool m_UseMouseTurning;
  ActionMap *m_action_map;
  IntrusiveHashTable<unsigned long,ActionState *,1> m_hashActionStates;
};


struct ListIterator<CInputHandler *>
{
  ListIterator<CInputHandler *>Vtbl *vfptr;
  ListNode<CInputHandler *> *_current;
  List<CInputHandler *> *_list;
};


struct ListIterator<CInputHandler *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<CInputHandler *> *this, unsigned int);
};


struct ListIterator<CInputManager_InputMapEntry>
{
  ListIterator<CInputManager_InputMapEntry>Vtbl *vfptr;
  ListNode<CInputManager_InputMapEntry> *_current;
  List<CInputManager_InputMapEntry> *_list;
};


struct ListIterator<CInputManager_InputMapEntry>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<CInputManager_InputMapEntry> *this, unsigned int);
};


struct IntrusiveHashIterator<unsigned long,ActionState *,1>
{
  IntrusiveHashTable<unsigned long,ActionState *,1> *m_currHashTable;
  ActionState **m_currBucket;
  ActionState *m_currElement;
};


struct DIFILEEFFECT
{
  unsigned int dwSize;
  _GUID GuidEffect;
  DIEFFECT *lpDiEffect;
  char szFriendlyName[260];
};


struct IDirectInputEffect : IUnknown
{
};


union $2B592C5D314738FF28CBE4EC22051069
{
  const char *lptszActionName;
  unsigned int uResIdString;
};


struct _DIACTIONA
{
  unsigned int uAppData;
  unsigned int dwSemantic;
  unsigned int dwFlags;
  $2B592C5D314738FF28CBE4EC22051069 ___u3;
  _GUID guidInstance;
  unsigned int dwObjID;
  unsigned int dwHow;
};


struct _DIACTIONFORMATA
{
  unsigned int dwSize;
  unsigned int dwActionSize;
  unsigned int dwDataSize;
  unsigned int dwNumActions;
  _DIACTIONA *rgoAction;
  _GUID guidActionMap;
  unsigned int dwGenre;
  unsigned int dwBufferSize;
  int lAxisMin;
  int lAxisMax;
  HINSTANCE__ *hInstString;
  _FILETIME ftTimeStamp;
  unsigned int dwCRC;
  char tszActionMap[260];
};


struct _DICOLORSET
{
  unsigned int dwSize;
  unsigned int cTextFore;
  unsigned int cTextHighlight;
  unsigned int cCalloutLine;
  unsigned int cCalloutHighlight;
  unsigned int cBorder;
  unsigned int cControlFill;
  unsigned int cHighlightFill;
  unsigned int cAreaFill;
};


struct _DICONFIGUREDEVICESPARAMSA
{
  unsigned int dwSize;
  unsigned int dwcUsers;
  char *lptszUserNames;
  unsigned int dwcFormats;
  _DIACTIONFORMATA *lprgFormats;
  HWND__ *hwnd;
  _DICOLORSET dics;
  IUnknown *lpUnkDDSTarget;
};


struct _DIDEVICEIMAGEINFOA
{
  char tszImagePath[260];
  unsigned int dwFlags;
  unsigned int dwViewID;
  tagRECT rcOverlay;
  unsigned int dwObjID;
  unsigned int dwcValidPts;
  tagPOINT rgptCalloutLine[5];
  tagRECT rcCalloutRect;
  unsigned int dwTextAlign;
};


struct _DIDEVICEIMAGEINFOHEADERA
{
  unsigned int dwSize;
  unsigned int dwSizeImageInfo;
  unsigned int dwcViews;
  unsigned int dwcButtons;
  unsigned int dwcAxes;
  unsigned int dwcPOVs;
  unsigned int dwBufferSize;
  unsigned int dwBufferUsed;
  _DIDEVICEIMAGEINFOA *lprgImageInfoArray;
};


struct DIDEVICEOBJECTINSTANCEA
{
  unsigned int dwSize;
  _GUID guidType;
  unsigned int dwOfs;
  unsigned int dwType;
  unsigned int dwFlags;
  char tszName[260];
  unsigned int dwFFMaxForce;
  unsigned int dwFFForceResolution;
  unsigned __int16 wCollectionNumber;
  unsigned __int16 wDesignatorIndex;
  unsigned __int16 wUsagePage;
  unsigned __int16 wUsage;
  unsigned int dwDimension;
  unsigned __int16 wExponent;
  unsigned __int16 wReportId;
};


struct DIDEVICEINSTANCEA
{
  unsigned int dwSize;
  _GUID guidInstance;
  _GUID guidProduct;
  unsigned int dwDevType;
  char tszInstanceName[260];
  char tszProductName[260];
  _GUID guidFFDriver;
  unsigned __int16 wUsagePage;
  unsigned __int16 wUsage;
};


struct DIEFFECTINFOA
{
  unsigned int dwSize;
  _GUID guid;
  unsigned int dwEffType;
  unsigned int dwStaticParams;
  unsigned int dwDynamicParams;
  char tszName[260];
};


struct IDirectInputDevice8A : IUnknown
{
};


struct __declspec(align(4)) CInputManager_WIN32_InputDevice
{
  IDirectInputDevice8A *pDev;
  _GUID guidInstance;
  _GUID guidProduct;
  unsigned int iDeviceIndex;
  unsigned int nType;
  bool bActive;
};


struct IDirectInput8A : IUnknown
{
};


struct SmartArray<CInputManager_WIN32_InputDevice,1>
{
  CInputManager_WIN32_InputDevice *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *,0>
{
  IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *,0>Vtbl *vfptr;
  HashTableData<ControlSpecification,enum ControlType> *m_aInplaceBuckets[23];
  HashTableData<ControlSpecification,enum ControlType> **m_buckets;
  HashTableData<ControlSpecification,enum ControlType> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<ControlSpecification,enum ControlType,0>
{
  HashTable<ControlSpecification,enum ControlType,0>Vtbl *vfptr;
  IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *,0> m_intrusiveTable;
};


struct HashTable<ControlSpecification,enum ControlType,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<ControlSpecification,enum ControlType,0> *this, unsigned int);
};


struct IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *,0> *this, unsigned int);
};


struct IntrusiveHashData<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *>
{
  ControlSpecification m_hashKey;
  HashTableData<ControlSpecification,enum ControlType> *m_hashNext;
};


struct HashTableData<ControlSpecification,enum ControlType> : IntrusiveHashData<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *>
{
  ControlType m_data;
};


struct IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *,0>
{
  IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *,0>Vtbl *vfptr;
  HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *m_aInplaceBuckets[23];
  HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> **m_buckets;
  HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<ControlSpecification,CInputManager_WIN32_RecentControlState,0>
{
  HashTable<ControlSpecification,CInputManager_WIN32_RecentControlState,0>Vtbl *vfptr;
  IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *,0> m_intrusiveTable;
};


struct HashTable<ControlSpecification,CInputManager_WIN32_RecentControlState,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<ControlSpecification,CInputManager_WIN32_RecentControlState,0> *this, unsigned int);
};


struct IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *,0> *this, unsigned int);
};


struct IntrusiveHashData<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *>
{
  ControlSpecification m_hashKey;
  HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *m_hashNext;
};


struct CInputManager_WIN32_RecentControlState
{
  unsigned int dwData;
  ControlType type;
  unsigned int mode;
  unsigned int activation;
  unsigned int idActionMatched;
  unsigned int idInputMapMatched;
};


struct HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> : IntrusiveHashData<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *>
{
  CInputManager_WIN32_RecentControlState m_data;
};


struct IntrusiveHashTable<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1>
{
  IntrusiveHashTable<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1>Vtbl *vfptr;
  PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *m_aInplaceBuckets[23];
  PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData **m_buckets;
  PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1> *this, unsigned int);
};


struct IntrusiveHashData<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *>
{
  ControlSpecification m_hashKey;
  PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *m_hashNext;
};


struct CInputManager_WIN32_ButtonHistoryEntry : CTimestamp<unsigned long,0>
{
  tagPOINT ptMousePos;
};


struct IntrusivePriorityHashData<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *> : IntrusiveHashData<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *>
{
  CInputManager_WIN32_ButtonHistoryEntry m_PriorityHashPriority;
  unsigned int m_PriorityHashArrayIndex;
};


struct PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData : IntrusivePriorityHashData<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *>
{
};


struct SmartArray<PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1>
{
  PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusivePriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1>
{
  IntrusiveHashTable<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1> m_hashTable;
  SmartArray<PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1> m_array;
};


struct PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>
{
  IntrusivePriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1> m_cIntrusivePriorityHash;
};


struct __declspec(align(2)) CInputManager_WIN32 : CInputManager
{
  HRESULT (__stdcall *m_pfnDirectInputCreate)(HINSTANCE__ *, unsigned int, _GUID *, void **, IUnknown *);
  HINSTANCE__ *m_hDInputDLL;
  IDirectInput8A *m_pDI;
  HWND__ *m_hwnd;
  SmartArray<CInputManager_WIN32_InputDevice,1> m_aDevices;
  unsigned int m_nKeyboardDevice;
  unsigned int m_nMouseDevice;
  unsigned int m_nVirtualDevice;
  HashTable<ControlSpecification,enum ControlType,0> m_hashControlToType;
  HashTable<ControlSpecification,CInputManager_WIN32_RecentControlState,0> m_hashActiveControls;
  CMasterInputMap m_InputMap;
  unsigned int m_metaKeyMode;
  PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1> m_ButtonHistory;
  tagPOINT m_ptMousePosBeforeMouseLookMode;
  MouseLookBehavior m_eMouseLookBehavior;
  tagPOINT m_ptNonMousePointerMovement;
  bool m_fClientIsActive;
  bool m_fMainWindowHasFocus;
  int m_cSetCapture;
  bool m_bProcessingKeyDown;
  bool m_bProcessingActionInResponseToKeyDown;
  bool m_bIgnoreNextChar;
};


struct IntrusiveHashIterator<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *,0>
{
  IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *,0> *m_currHashTable;
  HashTableData<ControlSpecification,enum ControlType> **m_currBucket;
  HashTableData<ControlSpecification,enum ControlType> *m_currElement;
};


struct HashIterator<ControlSpecification,enum ControlType,0>
{
  IntrusiveHashIterator<ControlSpecification,HashTableData<ControlSpecification,enum ControlType> *,0> m_iter;
};


struct IntrusiveHashIterator<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *,0>
{
  IntrusiveHashTable<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *,0> *m_currHashTable;
  HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> **m_currBucket;
  HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *m_currElement;
};


struct HashIterator<ControlSpecification,CInputManager_WIN32_RecentControlState,0>
{
  IntrusiveHashIterator<ControlSpecification,HashTableData<ControlSpecification,CInputManager_WIN32_RecentControlState> *,0> m_iter;
};


struct ManagedLogFileOutputHandler : Logger_ITextFileOutputHandler
{
  PStringBase<char> m_strRootName;
  PStringBase<char> m_strUniqueKey;
  PStringBase<char> m_strFileName;
  PStringBase<char> m_strDescription;
  void *m_hLogFile;
  unsigned int m_cWrites;
  unsigned int m_cbWritten;
  unsigned int m_cTimesWrapped;
  char m_szTimeLogCreated[26];
  long double m_timePrintRealTime;
  bool m_fTimestampedOutput;
  unsigned int m_cbMaxSize;
  LOG_TRUNCATE_OP m_truncop;
  unsigned int m_dwCurrentFilePos;
};


struct ManagedLogFileOutputHandler_AsyncIOString : PStringBase<char>
{
};


struct DIPROPDWORD
{
  DIPROPHEADER diph;
  unsigned int dwData;
};


struct DIPROPRANGE
{
  DIPROPHEADER diph;
  int lMin;
  int lMax;
};


struct IntrusiveHashIterator<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1>
{
  IntrusiveHashTable<ControlSpecification,PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *,1> *m_currHashTable;
  PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData **m_currBucket;
  PriorityHash<ControlSpecification,CInputManager_WIN32_ButtonHistoryEntry,1>_PriorityHashData *m_currElement;
};


struct _STL__Numeric_limits_base<unsigned long>
{
};


struct _STL__Integer_limits<unsigned long,0,-1,-1,1> : _STL__Numeric_limits_base<unsigned long>
{
};


struct ListIterator<QualifiedControl>
{
  ListIterator<QualifiedControl>Vtbl *vfptr;
  ListNode<QualifiedControl> *_current;
  List<QualifiedControl> *_list;
};


struct ListIterator<QualifiedControl>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<QualifiedControl> *this, unsigned int);
};


struct ListIterator<Glyph>
{
  ListIterator<Glyph>Vtbl *vfptr;
  ListNode<Glyph> *_current;
  List<Glyph> *_list;
};


struct ListIterator<Glyph>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<Glyph> *this, unsigned int);
};


struct SmartArray<Glyph,1>
{
  Glyph *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct _STL_less<PStringBase<char> > : _STL_binary_function<PStringBase<char>,PStringBase<char>,bool>
{
};


struct _STL_pair<PStringBase<char>,PStringBase<char> >
{
  PStringBase<char> first;
  PStringBase<char> second;
};


struct SmartArray<_STL_pair<PStringBase<char>,PStringBase<char> >,1>
{
  _STL_pair<PStringBase<char>,PStringBase<char> > *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<GRPVariableObject const *,1>
{
  GRPVariableObject **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct PrefDisplayModeType
{
  unsigned int nWidth;
  unsigned int nHeight;
  unsigned int nSize;
  unsigned int nModeDesc;
};


struct SmartArray<PrefDisplayModeType,1>
{
  PrefDisplayModeType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct _STL_less<unsigned long> : _STL_binary_function<unsigned long,unsigned long,bool>
{
};


struct _STL_binary_function<PrefDisplayModeType,PrefDisplayModeType,bool>
{
};


struct _STL_less<PrefDisplayModeType> : _STL_binary_function<PrefDisplayModeType,PrefDisplayModeType,bool>
{
};


struct _STL__BothPtrType<PrefDisplayModeType *,PrefDisplayModeType *>
{
};


struct _STL__OKToMemCpy<PrefDisplayModeType,PrefDisplayModeType>
{
};


struct SourceImageData
{
  unsigned int *pData;
  unsigned int cxImage;
  unsigned int cyImage;
  unsigned int pitch;
};



struct tagCONNECTDATA
{
  IUnknown *pUnk;
  unsigned int dwCookie;
};


struct IConnectionPoint : IUnknown
{
};


struct _AMMediaType
{
  _GUID majortype;
  _GUID subtype;
  int bFixedSizeSamples;
  int bTemporalCompression;
  unsigned int lSampleSize;
  _GUID formattype;
  IUnknown *pUnk;
  unsigned int cbFormat;
  char *pbFormat;
};


struct _AllocatorProperties
{
  int cBuffers;
  int cbBuffer;
  int cbAlign;
  int cbPrefix;
};



struct _PinInfo
{
  IBaseFilter *pFilter;
  _PinDirection dir;
  unsigned __int16 achName[128];
};


struct _FilterInfo
{
  unsigned __int16 achName[128];
  IFilterGraph *pGraph;
};


struct tagAM_SAMPLE2_PROPERTIES
{
  unsigned int cbData;
  unsigned int dwTypeSpecificFlags;
  unsigned int dwSampleFlags;
  int lActual;
  __int64 tStart;
  __int64 tStop;
  unsigned int dwStreamId;
  _AMMediaType *pMediaType;
  char *pbBuffer;
  int cbBuffer;
};


struct __MIDL___MIDL_itf_strmif_0134_0001
{
  _GUID *clsMajorType;
  _GUID *clsMinorType;
};


struct __MIDL___MIDL_itf_strmif_0134_0002
{
  unsigned __int16 *strName;
  int bRendered;
  int bOutput;
  int bZero;
  int bMany;
  _GUID *clsConnectsToFilter;
  const unsigned __int16 *strConnectsToPin;
  unsigned int nMediaTypes;
  __MIDL___MIDL_itf_strmif_0134_0001 *lpMediaType;
};




struct tagQuality
{
  tagQualityMessageType Type;
  int Proportion;
  __int64 Late;
  __int64 TimeStamp;
};


struct CRefTime
{
  __int64 m_time;
};


struct CCritSec
{
  _RTL_CRITICAL_SECTION m_CritSec;
};


struct CAutoLock
{
  CCritSec *m_pLock;
};


struct CAMEvent
{
  void *m_hEvent;
};


struct _AMOVIESETUP_FILTER
{
  _GUID *clsID;
  const unsigned __int16 *strName;
  unsigned int dwMerit;
  unsigned int nPins;
  __MIDL___MIDL_itf_strmif_0134_0002 *lpPin;
};


struct CBaseObject
{
};


struct INonDelegatingUnknown
{
  INonDelegatingUnknownVtbl *vfptr;
};


struct INonDelegatingUnknownVtbl
{
  HRESULT (__stdcall *NonDelegatingQueryInterface)(INonDelegatingUnknown *this, _GUID *, void **);
  unsigned int (__stdcall *NonDelegatingAddRef)(INonDelegatingUnknown *this);
  unsigned int (__stdcall *NonDelegatingRelease)(INonDelegatingUnknown *this);
};


struct CUnknown : INonDelegatingUnknown, CBaseObject
{
  IUnknown *const m_pUnknown;
  volatile int m_cRef;
};


struct CFactoryTemplate
{
  const unsigned __int16 *m_Name;
  _GUID *m_ClsID;
  CUnknown *(__stdcall *m_lpfnNew)(IUnknown *, HRESULT *);
  void (__stdcall *m_lpfnInit)(int, _GUID *);
  _AMOVIESETUP_FILTER *m_pAMovieSetup_Filter;
};


struct __POSITION
{
  int unused;
};


struct CBaseList_CNode
{
  CBaseList_CNode *m_pPrev;
  CBaseList_CNode *m_pNext;
  void *m_pObject;
};


struct CBaseList_CNodeCache
{
  int m_iCacheSize;
  int m_iUsed;
  CBaseList_CNode *m_pHead;
};


struct CBaseList
{
  CBaseList_CNode *m_pFirst;
  CBaseList_CNode *m_pLast;
  int m_Count;
  CBaseList_CNodeCache m_Cache;
};


struct CMsg
{
  unsigned int uMsg;
  unsigned int dwFlags;
  void *lpParam;
  CAMEvent *pEvent;
};


struct CGenericList<CMsg> : CBaseList
{
};


struct CMsgThread
{
  CMsgThreadVtbl *vfptr;
  unsigned int m_ThreadId;
  void *m_hThread;
  CGenericList<CMsg> m_ThreadQueue;
  CCritSec m_Lock;
  void *m_hSem;
  int m_lWaiting;
};


struct CMsgThreadVtbl
{
  void (__thiscall *GetThreadMsg)(CMsgThread *this, CMsg *);
  void (__thiscall *OnThreadInit)(CMsgThread *this);
  int (__thiscall *ThreadMessageProc)(CMsgThread *this, unsigned int, unsigned int, void *, CAMEvent *);
};


struct CMediaType : _AMMediaType
{
};


struct FOURCCMap : _GUID
{
};


struct CBaseDispatch
{
  ITypeInfo *m_pti;
};


struct CMediaControl : IMediaControl, CUnknown
{
  CBaseDispatch m_basedisp;
};


struct IMediaEventEx : IMediaEvent
{
};


struct CMediaEvent : IMediaEventEx, CUnknown
{
  CBaseDispatch m_basedisp;
};


struct CMediaPosition : IMediaPosition, CUnknown
{
  CBaseDispatch m_basedisp;
};


struct COARefTime : CRefTime
{
};


struct IMediaSeeking : IUnknown
{
};


struct IPin : IUnknown
{
};


struct CPosPassThru : IMediaSeeking, CMediaPosition
{
  IPin *m_pPin;
};


struct IEnumMediaTypes : IUnknown
{
};


struct IBasicAudio : IDispatch
{
};


struct CBasicAudio : IBasicAudio, CUnknown
{
  CBaseDispatch m_basedisp;
};


struct IBasicVideo : IDispatch
{
};


struct IBasicVideo2 : IBasicVideo
{
};


struct CBaseBasicVideo : IBasicVideo2, CUnknown
{
  CBaseDispatch m_basedisp;
};


struct IVideoWindow : IDispatch
{
};


struct CBaseVideoWindow : IVideoWindow, CUnknown
{
  CBaseDispatch m_basedisp;
};


struct __declspec(align(8)) CSourcePosition : CMediaPosition
{
  COARefTime m_Duration;
  COARefTime m_Start;
  COARefTime m_Stop;
  long double m_Rate;
  CCritSec *m_pLock;
};


struct CSourceSeeking : IMediaSeeking, CUnknown
{
  CRefTime m_rtDuration;
  CRefTime m_rtStart;
  CRefTime m_rtStop;
  long double m_dRateSeeking;
  unsigned int m_dwSeekingCaps;
  CCritSec *m_pLock;
};


struct IDeferredCommand : IUnknown
{
};


struct CGenericList<CDeferredCommand> : CBaseList
{
};


struct CCmdQueue
{
  CCmdQueueVtbl *vfptr;
  __declspec(align(8)) CCritSec m_Lock;
  CGenericList<CDeferredCommand> m_listPresentation;
  CGenericList<CDeferredCommand> m_listStream;
  CAMEvent m_evDue;
  unsigned int m_dwAdvise;
  CRefTime m_tCurrentAdvise;
  IReferenceClock *m_pClock;
  int m_bRunning;
  CRefTime m_StreamTimeOffset;
};


struct CCmdQueueVtbl
{
  void *(__thiscall *__vecDelDtor)(CCmdQueue *this, unsigned int);
  _BYTE gap4[4];
  HRESULT (__thiscall *Insert)(CCmdQueue *this, CDeferredCommand *);
  HRESULT (__thiscall *Remove)(CCmdQueue *this, CDeferredCommand *);
  HRESULT (__thiscall *SetSyncSource)(CCmdQueue *this, IReferenceClock *);
  HRESULT (__thiscall *Run)(CCmdQueue *this, __int64);
  HRESULT (__thiscall *EndRun)(CCmdQueue *this);
  HRESULT (__thiscall *GetDueCommand)(CCmdQueue *this, CDeferredCommand **, int);
  HRESULT (__thiscall *GetCommandDueFor)(CCmdQueue *this, __int64, CDeferredCommand **);
};


struct IReferenceClock : IUnknown
{
};


struct CDispParams : tagDISPPARAMS
{
};


struct CDeferredCommand : CUnknown, IDeferredCommand
{
  CCmdQueue *m_pQueue;
  IUnknown *m_pUnk;
  __int64 m_time;
  _GUID *m_iid;
  int m_dispidMethod;
  __int16 m_wFlags;
  tagVARIANT *m_pvarResult;
  int m_bStream;
  CDispParams m_DispParams;
  int m_DispId;
  CBaseDispatch m_Dispatch;
  HRESULT m_hrResult;
};



struct __declspec(align(8)) CBaseMediaFilter : CUnknown, IMediaFilter
{
  _FilterState m_State;
  IReferenceClock *m_pClock;
  CRefTime m_tStart;
  _GUID m_clsid;
  CCritSec *m_pLock;
};


struct IAMovieSetup : IUnknown
{
};


struct IMediaEventSink : IUnknown
{
};


struct __declspec(align(8)) CBaseFilter : CUnknown, IBaseFilter, IAMovieSetup
{
  _FilterState m_State;
  IReferenceClock *m_pClock;
  CRefTime m_tStart;
  _GUID m_clsid;
  CCritSec *m_pLock;
  unsigned __int16 *m_pName;
  IFilterGraph *m_pGraph;
  IMediaEventSink *m_pSink;
  int m_PinVersion;
};


struct IEnumPins : IUnknown
{
};


struct IQualityControl : IUnknown
{
};


struct CBasePin : CUnknown, IPin, IQualityControl
{
  unsigned __int16 *m_pName;
  IPin *m_Connected;
  _PinDirection m_dir;
  CCritSec *m_pLock;
  bool m_bRunTimeError;
  bool m_bCanReconnectWhenActive;
  bool m_bTryMyTypesFirst;
  CBaseFilter *m_pFilter;
  IQualityControl *m_pQSink;
  int m_TypeVersion;
  CMediaType m_mt;
  CRefTime m_tStart;
  CRefTime m_tStop;
  long double m_dRate;
};


struct IEnumFilters : IUnknown
{
};


struct CGenericList<CBasePin> : CBaseList
{
};


struct CEnumPins : IEnumPins
{
  int m_Position;
  int m_PinCount;
  CBaseFilter *m_pFilter;
  int m_Version;
  int m_cRef;
  CGenericList<CBasePin> m_PinCache;
};


struct CEnumMediaTypes : IEnumMediaTypes
{
  int m_Position;
  CBasePin *m_pPin;
  int m_Version;
  int m_cRef;
};


struct IMemInputPin : IUnknown
{
};


struct IMemAllocator : IUnknown
{
};


struct CBaseInputPin : CBasePin, IMemInputPin
{
  IMemAllocator *m_pAllocator;
  char m_bReadOnly;
  char m_bFlushing;
  tagAM_SAMPLE2_PROPERTIES m_SampleProps;
};


struct IMediaSample : IUnknown
{
};


struct CBaseOutputPin : CBasePin
{
  IMemAllocator *m_pAllocator;
  IMemInputPin *m_pInputPin;
};


struct IPinFlowControl : IUnknown
{
};


struct IGraphConfig : IUnknown
{
};


struct __declspec(align(8)) CDynamicOutputPin : CBaseOutputPin, IPinFlowControl
{
  CCritSec m_BlockStateLock;
  void *m_hUnblockOutputPinEvent;
  void *m_hNotifyCallerPinBlockedEvent;
  CDynamicOutputPin_BLOCK_STATE m_BlockState;
  unsigned int m_dwBlockCallerThreadID;
  unsigned int m_dwNumOutstandingOutputPinUsers;
  void *m_hStopEvent;
  IGraphConfig *m_pGraphConfig;
  int m_bPinUsesReadOnlyAllocator;
};


struct IGraphConfigCallback : IUnknown
{
};


struct IPinConnection : IUnknown
{
};


struct CAutoUsingOutputPin
{
  CDynamicOutputPin *m_pOutputPin;
};


struct IMemAllocatorCallbackTemp : IMemAllocator
{
};


struct IMediaSample2 : IMediaSample
{
};


struct CBaseAllocator_CSampleList
{
  CMediaSample *m_List;
  int m_nOnList;
};


struct CMediaSample : IMediaSample2
{
  unsigned int m_dwFlags;
  unsigned int m_dwTypeSpecificFlags;
  char *m_pBuffer;
  int m_lActual;
  int m_cbBuffer;
  CBaseAllocator *m_pAllocator;
  CMediaSample *m_pNext;
  __int64 m_Start;
  __int64 m_End;
  __int64 m_MediaStart;
  int m_MediaEnd;
  _AMMediaType *m_pMediaType;
  unsigned int m_dwStreamId;
  int m_cRef;
};


struct CBaseAllocator : CUnknown, IMemAllocatorCallbackTemp, CCritSec
{
  CBaseAllocator_CSampleList m_lFree;
  void *m_hSem;
  int m_lWaiting;
  int m_lCount;
  int m_lAllocated;
  int m_lSize;
  int m_lAlignment;
  int m_lPrefix;
  int m_bChanged;
  int m_bCommitted;
  int m_bDecommitInProgress;
  IMemAllocatorNotifyCallbackTemp *m_pNotify;
  int m_fEnableReleaseCallback;
};


struct IMemAllocatorNotifyCallbackTemp : IUnknown
{
};


struct __declspec(align(8)) CRendererPosPassThru : CPosPassThru
{
  CCritSec m_PositionLock;
  __int64 m_StartMedia;
  __int64 m_EndMedia;
  int m_bReset;
};


struct __declspec(align(8)) CBaseRenderer : CBaseFilter
{
  CRendererPosPassThru *m_pPosition;
  CAMEvent m_RenderEvent;
  CAMEvent m_ThreadSignal;
  CAMEvent m_evComplete;
  int m_bAbort;
  int m_bStreaming;
  unsigned int m_dwAdvise;
  IMediaSample *m_pMediaSample;
  int m_bEOS;
  int m_bEOSDelivered;
  CRendererInputPin *m_pInputPin;
  CCritSec m_InterfaceLock;
  CCritSec m_RendererLock;
  IQualityControl *m_pQSink;
  int m_bRepaintStatus;
  volatile int m_bInReceive;
  __int64 m_SignalTime;
  unsigned int m_EndOfStreamTimer;
  CCritSec m_ObjectCreationLock;
};


struct __declspec(align(8)) CRendererInputPin : CBaseInputPin
{
  CBaseRenderer *m_pRenderer;
};


struct IQualProp : IUnknown
{
};


struct __declspec(align(8)) CBaseVideoRenderer : CBaseRenderer, IQualProp, IQualityControl
{
  int m_nNormal;
  int m_bSupplierHandlingQuality;
  int m_trThrottle;
  int m_trRenderAvg;
  int m_trRenderLast;
  int m_tRenderStart;
  int m_trEarliness;
  int m_trTarget;
  int m_trWaitAvg;
  int m_trFrameAvg;
  int m_trDuration;
  __int64 m_trRememberStampForPerf;
  int m_cFramesDropped;
  int m_cFramesDrawn;
  __int64 m_iTotAcc;
  __int64 m_iSumSqAcc;
  __int64 m_trLastDraw;
  __int64 m_iSumSqFrameTime;
  __int64 m_iSumFrameTime;
  int m_trLate;
  int m_trFrame;
  int m_tStreamingStart;
};


struct CAMSchedule_CAdvisePacket
{
  CAMSchedule_CAdvisePacket *m_next;
  unsigned int m_dwAdviseCookie;
  __int64 m_rtEventTime;
  __int64 m_rtPeriod;
  void *m_hNotify;
  int m_bPeriodic;
};


struct CAMSchedule : CBaseObject
{
  CAMScheduleVtbl *vfptr;
  CAMSchedule_CAdvisePacket head;
  CAMSchedule_CAdvisePacket z;
  volatile unsigned int m_dwNextCookie;
  volatile unsigned int m_dwAdviseCount;
  CCritSec m_Serialize;
  void *const m_ev;
  CAMSchedule_CAdvisePacket *m_pAdviseCache;
  unsigned int m_dwCacheCount;
};


struct CAMScheduleVtbl
{
  void *(__thiscall *__vecDelDtor)(CAMSchedule *this, unsigned int);
};


struct ATL_CTraceCategory
{
};


struct ATL_CAtlException
{
  HRESULT m_hr;
};


struct ATL_CComCriticalSection
{
  _RTL_CRITICAL_SECTION m_sec;
};


struct ATL_CComAutoCriticalSection : ATL_CComCriticalSection
{
};


struct ATL_CComFakeCriticalSection
{
};


struct ATL_CSimpleArray<HINSTANCE__ *,ATL_CSimpleArrayEqualHelper<HINSTANCE__ *> >
{
  HINSTANCE__ **m_aT;
  int m_nSize;
  int m_nAllocSize;
};


struct ATL__ATL_BASE_MODULE70
{
  unsigned int cbSize;
  HINSTANCE__ *m_hInst;
  HINSTANCE__ *m_hInstResource;
  bool m_bNT5orWin98;
  unsigned int dwAtlBuildVer;
  _GUID *pguidVer;
  ATL_CComCriticalSection m_csResource;
  ATL_CSimpleArray<HINSTANCE__ *,ATL_CSimpleArrayEqualHelper<HINSTANCE__ *> > m_rgResourceInstance;
};


struct ATL_CAtlBaseModule : ATL__ATL_BASE_MODULE70
{
};


struct ATL_CSimpleArray<HINSTANCE__ *,ATL_CSimpleArrayEqualHelper<HINSTANCE__ *> >_Wrapper
{
  HINSTANCE__ *t;
};


struct ATL_ATLSTRINGRESOURCEIMAGE
{
  unsigned __int16 nLength;
  unsigned __int16 achString[];
};


struct ATL_CCRTAllocator
{
};


struct ATL_CLocalAllocator
{
};


struct ATL_CGlobalAllocator
{
};


struct IObjectWithSite : IUnknown
{
};


struct ATL_CComPtrBase<IDispatch>
{
  IDispatch *p;
};


struct ATL_CComPtr<IDispatch> : ATL_CComPtrBase<IDispatch>
{
};


struct ATL_CComPtrBase<IUnknown>
{
  IUnknown *p;
};


struct ATL_CComPtr<IUnknown> : ATL_CComPtrBase<IUnknown>
{
};


struct ATL_CComQIPtr<IUnknown,&IID_IUnknown> : ATL_CComPtr<IUnknown>
{
};


struct ATL_CComBSTR
{
  unsigned __int16 *m_str;
};


struct ATL_CTempBuffer<char,128,ATL_CCRTAllocator>
{
  char *m_p;
  char m_abFixedBuffer[128];
};


struct ATL_CTempBuffer<unsigned short,128,ATL_CCRTAllocator>
{
  unsigned __int16 *m_p;
  char m_abFixedBuffer[128];
};


struct ATL_CComVariant : tagVARIANT
{
};


struct ATL_CComPtrBase<IPersistStream>
{
  IPersistStream *p;
};


struct ATL_CComPtr<IPersistStream> : ATL_CComPtrBase<IPersistStream>
{
};


struct ATL__NoAddRefReleaseOnCComPtr<IPersistStream> : IPersistStream
{
};


struct tagCATEGORYINFO
{
  _GUID catid;
  unsigned int lcid;
  unsigned __int16 szDescription[128];
};


struct _DLLVERSIONINFO
{
  unsigned int cbSize;
  unsigned int dwMajorVersion;
  unsigned int dwMinorVersion;
  unsigned int dwBuildNumber;
  unsigned int dwPlatformID;
};


struct ATL__ATL_CATMAP_ENTRY
{
  int iType;
  _GUID *pcatid;
};


struct ATL__ATL_OBJMAP_ENTRY30
{
  _GUID *pclsid;
  HRESULT (__stdcall *pfnUpdateRegistry)(int);
  HRESULT (__stdcall *pfnGetClassObject)(void *, _GUID *, void **);
  HRESULT (__stdcall *pfnCreateInstance)(void *, _GUID *, void **);
  IUnknown *pCF;
  unsigned int dwRegister;
  const char *(__stdcall *pfnGetObjectDescription)();
  ATL__ATL_CATMAP_ENTRY *(__cdecl *pfnGetCategoryMap)();
  void (__stdcall *pfnObjectMain)(bool);
};


struct ATL_CComMultiThreadModelNoCS
{
};


struct ATL_CComMultiThreadModel
{
};


struct ATL_CComSingleThreadModel
{
};
