

struct ATL__ATL_COM_MODULE70
{
  unsigned int cbSize;
  HINSTANCE__ *m_hInstTypeLib;
  ATL__ATL_OBJMAP_ENTRY30 **m_ppAutoObjMapFirst;
  ATL__ATL_OBJMAP_ENTRY30 **m_ppAutoObjMapLast;
  ATL_CComCriticalSection m_csObjMap;
};


struct ATL__AtlCreateWndData
{
  void *m_pThis;
  unsigned int m_dwThreadID;
  ATL__AtlCreateWndData *m_pNext;
};


struct ATL_CSimpleArray<unsigned short,ATL_CSimpleArrayEqualHelper<unsigned short> >
{
  unsigned __int16 *m_aT;
  int m_nSize;
  int m_nAllocSize;
};


struct ATL__ATL_WIN_MODULE70
{
  unsigned int cbSize;
  ATL_CComCriticalSection m_csWindowCreate;
  ATL__AtlCreateWndData *m_pCreateWndList;
  ATL_CSimpleArray<unsigned short,ATL_CSimpleArrayEqualHelper<unsigned short> > m_rgWindowClassAtoms;
};


struct ATL__ATL_TERMFUNC_ELEM
{
  void (__stdcall *pFunc)(unsigned int);
  unsigned int dw;
  ATL__ATL_TERMFUNC_ELEM *pNext;
};


struct ATL__ATL_MODULE70
{
  unsigned int cbSize;
  int m_nLockCnt;
  ATL__ATL_TERMFUNC_ELEM *m_pTermFuncs;
  ATL_CComCriticalSection m_csStaticDataInitAndTypeInfo;
};


struct __unaligned __declspec(align(1)) ATL__stdcallthunk
{
  unsigned int m_mov;
  unsigned int m_this;
  char m_jmp;
  unsigned int m_relproc;
};


struct ATL_CDynamicStdCallThunk
{
  ATL__stdcallthunk *pThunk;
};


struct ATL_CComAllocator
{
};


struct ATL_CHandle
{
  void *m_h;
};


struct __declspec(align(4)) ATL_CCritSecLock
{
  _RTL_CRITICAL_SECTION *m_cs;
  bool m_bLocked;
};


struct ATL_CAtlComModule : ATL__ATL_COM_MODULE70
{
};


struct ATL_CAtlWinModule : ATL__ATL_WIN_MODULE70
{
};


struct ATL_CSimpleArray<unsigned short,ATL_CSimpleArrayEqualHelper<unsigned short> >_Wrapper
{
  unsigned __int16 t;
};


struct ATL_CAtlModule : ATL__ATL_MODULE70
{
  ATL_CAtlModuleVtbl *vfptr;
  IGlobalInterfaceTable *m_pGIT;
};


struct ATL_CAtlModuleVtbl
{
  int (__thiscall *Lock)(ATL_CAtlModule *this);
  int (__thiscall *Unlock)(ATL_CAtlModule *this);
  int (__thiscall *GetLockCount)(ATL_CAtlModule *this);
  HRESULT (__thiscall *GetGITPtr)(ATL_CAtlModule *this, IGlobalInterfaceTable **);
  HRESULT (__thiscall *AddCommonRGSReplacements)(ATL_CAtlModule *this, IRegistrarBase *);
};


struct IRegistrarBase : IUnknown
{
};


struct ATL__ATL_REGMAP_ENTRY
{
  const unsigned __int16 *szKey;
  const unsigned __int16 *szData;
};


struct ATL_CAtlModuleT<ATL_CComModule> : ATL_CAtlModule
{
};


struct ATL_CComModule : ATL_CAtlModuleT<ATL_CComModule>
{
  ATL__ATL_OBJMAP_ENTRY30 *m_pObjMap;
};


struct ATL_CRTThreadTraits
{
};


struct ATL_Win32ThreadTraits
{
};


struct ATL_CComApartment
{
  unsigned int m_dwThreadID;
  void *m_hThread;
  int m_nLockCnt;
};


struct ATL__AtlAptCreateObjData
{
  HRESULT (__stdcall *pfnCreateInstance)(void *, _GUID *, void **);
  _GUID *piid;
  void *hEvent;
  IStream *pStream;
  HRESULT hRes;
};


struct ATL_CComSimpleThreadAllocator
{
  int m_nThread;
};


struct ATL_CRegKey
{
  HKEY__ *m_hKey;
};


struct ATL_CExpansionVectorEqualHelper
{
};


struct ATL_CSimpleMap<char *,unsigned short *,ATL_CExpansionVectorEqualHelper>
{
  char **m_aKey;
  unsigned __int16 **m_aVal;
  int m_nSize;
};


struct ATL_CExpansionVector : ATL_CSimpleMap<char *,unsigned short *,ATL_CExpansionVectorEqualHelper>
{
};


struct ATL_CRegObject : IRegistrarBase
{
  ATL_CExpansionVector m_RepMap;
  ATL_CComAutoCriticalSection m_csMap;
};


struct ATL_CRegParser
{
  char *m_pchCur;
  ATL_CRegObject *m_pRegObj;
};


struct ATL_CRegParser_CParseBuffer
{
  int nPos;
  int nSize;
  char *p;
};


struct ATL_CTempBuffer<char,1024,ATL_CCRTAllocator>
{
  char *m_p;
  char m_abFixedBuffer[1024];
};


struct ATL_CTempBuffer<char,256,ATL_CCRTAllocator>
{
  char *m_p;
  char m_abFixedBuffer[256];
};


struct ATL_CTempBuffer<unsigned char,256,ATL_CCRTAllocator>
{
  char *m_p;
  char m_abFixedBuffer[256];
};


struct ATL_CComPtrBase<ITypeLib>
{
  ITypeLib *p;
};


struct ATL_CComPtr<ITypeLib> : ATL_CComPtrBase<ITypeLib>
{
};


struct ATL__NoAddRefReleaseOnCComPtr<ITypeLib> : ITypeLib
{
};


struct ICatRegister : IUnknown
{
};


struct ATL_CComPtrBase<ICatRegister>
{
  ICatRegister *p;
};


struct ATL_CComPtr<ICatRegister> : ATL_CComPtrBase<ICatRegister>
{
};


struct ATL__NoAddRefReleaseOnCComPtr<ICatRegister> : ICatRegister
{
};


struct IRegistrar : IRegistrarBase
{
};


struct __declspec(align(4)) ATL_CComCritSecLock<ATL_CComCriticalSection>
{
  ATL_CComCriticalSection *m_cs;
  bool m_bLocked;
};


struct IConnectionPointContainer : IUnknown
{
};


struct ATL_CComPtrBase<IConnectionPointContainer>
{
  IConnectionPointContainer *p;
};


struct ATL_CComPtr<IConnectionPointContainer> : ATL_CComPtrBase<IConnectionPointContainer>
{
};


struct ATL_CComPtrBase<IConnectionPoint>
{
  IConnectionPoint *p;
};


struct ATL_CComPtr<IConnectionPoint> : ATL_CComPtrBase<IConnectionPoint>
{
};


struct ATL__NoAddRefReleaseOnCComPtr<IConnectionPointContainer> : IConnectionPointContainer
{
};


struct ATL__NoAddRefReleaseOnCComPtr<IConnectionPoint> : IConnectionPoint
{
};


struct IEnumConnections : IUnknown
{
};


struct IEnumConnectionPoints : IUnknown
{
};


struct ATL__ATL_INTMAP_ENTRY
{
  _GUID *piid;
  unsigned int dw;
  HRESULT (__stdcall *pFunc)(void *, _GUID *, void **, unsigned int);
};


struct CTextureRenderer : CBaseVideoRenderer
{
  int m_lVidWidth;
  int m_lVidHeight;
  int m_lVidPitch;
  UISurface *m_pUISurface;
  IDirect3DTexture9 *m_pTexture;
  _D3DFORMAT m_TextureFormat;
};


struct ATL__NoAddRefReleaseOnCComPtr<IGraphBuilder> : IGraphBuilder
{
};


struct ATL__NoAddRefReleaseOnCComPtr<IMediaControl> : IMediaControl
{
};


struct ATL__NoAddRefReleaseOnCComPtr<IMediaPosition> : IMediaPosition
{
};


struct ATL__NoAddRefReleaseOnCComPtr<IMediaEvent> : IMediaEvent
{
};


struct ATL__NoAddRefReleaseOnCComPtr<IBaseFilter> : IBaseFilter
{
};


struct ATL_CComPtrBase<IPin>
{
  IPin *p;
};


struct ATL_CComPtr<IPin> : ATL_CComPtrBase<IPin>
{
};


struct ATL_IAtlAutoThreadModule
{
  ATL_IAtlAutoThreadModuleVtbl *vfptr;
};


struct ATL_IAtlAutoThreadModuleVtbl
{
  HRESULT (__thiscall *CreateInstance)(ATL_IAtlAutoThreadModule *this, void *, _GUID *, void **);
};


struct ATL_CAtlAutoThreadModuleT<ATL_CAtlAutoThreadModule,ATL_CComSimpleThreadAllocator,-1> : ATL_IAtlAutoThreadModule
{
  unsigned int dwThreadID;
  int m_nThreads;
  ATL_CComApartment *m_pApartments;
  ATL_CComSimpleThreadAllocator m_Allocator;
};


struct ATL_CSimpleMap<char *,unsigned short *,ATL_CExpansionVectorEqualHelper>_Wrapper<char *>
{
  char *t;
};


struct ATL_CSimpleMap<char *,unsigned short *,ATL_CExpansionVectorEqualHelper>_Wrapper<unsigned short *>
{
  unsigned __int16 *t;
};


struct PlatformString_StringAccessor
{
  HINSTANCE__ *h;
};


struct _STL_binary_function<GraphicsResource const *,GraphicsResource const *,bool>
{
};


struct MySTLSortFunction_LRU : _STL_binary_function<GraphicsResource const *,GraphicsResource const *,bool>
{
};


struct _STL__BothPtrType<GraphicsResource * *,GraphicsResource * *>
{
};


struct _STL__OKToMemCpy<GraphicsResource *,GraphicsResource *>
{
};


struct __declspec(align(4)) $32F96AD321CDC6745C0A66C54DC7D599
{
  unsigned int lsurfCount;
  bool outside;
};


struct ProfilerTypes_GlobalStatsType
{
  $32F96AD321CDC6745C0A66C54DC7D599 AC1;
  unsigned int TextureVideoMemoryAllocated;
  unsigned int SurfaceVideoMemoryAllocated;
  unsigned int StaticVertexBufferVideoMemoryAllocated;
  unsigned int DynamicVertexBufferVideoMemoryAllocated;
  unsigned int StaticIndexBufferVideoMemoryAllocated;
  unsigned int DynamicIndexBufferVideoMemoryAllocated;
  unsigned int SurfaceMemoryAllocated;
  unsigned int UISurfaceMemoryAllocated;
  unsigned int MeshVertexMemoryAllocated;
  unsigned int MeshTriangleMemoryAllocated;
  unsigned int MeshTopologyMemoryAllocated;
  unsigned int FontMemoryAllocated;
  unsigned int AudioMemoryAllocated;
  unsigned int SoundSources;
  unsigned int MovieMemoryAllocated;
  unsigned int LandBlockMemoryAllocated;
  unsigned int Direct3DHardwareStalls;
  unsigned int CompositorResourceMemoryAllocated;
  unsigned int CompositorTextureMemoryAllocated;
  unsigned int AC1_ImgTexMemoryAllocated;
  unsigned int AC1_D3DXMeshMemoryAllocated;
};


struct $EA7D754458462534F92FF185238D0A0C
{
  unsigned int lightStaticCount;
  unsigned int lightDynamicCount;
  unsigned int framePushCount;
  unsigned int polyCount;
  unsigned int blockCount;
  unsigned int landcellCount;
  unsigned int objectCount;
  unsigned int portalCount;
};


struct ProfilerTypes_FrameStatsType
{
  unsigned int TrianglesRendered;
  unsigned int VerticesRendered;
  unsigned int BatchesRendered;
  unsigned int UISurfacesRendered;
  unsigned int VerticesSkinned;
  unsigned int TexturesUploaded;
  unsigned int TextureMemoryUploaded;
  unsigned int VerticesUploaded;
  unsigned int VertexBufferMemoryUploaded;
  unsigned int RecycledDynamicVertices;
  unsigned int IndicesUploaded;
  unsigned int IndexBufferMemoryUploaded;
  unsigned int ParticlesRendered;
  unsigned int ParticleSystemsRendered;
  unsigned int MaterialLayersApplied;
  unsigned int D3DTextureChanges;
  unsigned int D3DStreamChanges;
  unsigned int TextureVideoMemoryUsed;
  unsigned int SurfaceVideoMemoryUsed;
  unsigned int VertexBufferVideoMemoryUsed;
  unsigned int IndexBufferVideoMemoryUsed;
  unsigned int ArtAssetMeshVideoMemoryUsed;
  unsigned int ArtAssetTextureVideoMemoryUsed;
  unsigned int SoundsPlaying;
  unsigned int SoundsQueued;
  unsigned int UIElementsProcessed;
  $EA7D754458462534F92FF185238D0A0C AC1;
};


struct ProfilerStats
{
  ProfilerTypes_GlobalStatsType Global;
  ProfilerTypes_FrameStatsType Categories[5];
};


struct Profiler
{
};


struct BV_VertexFormatType
{
  unsigned int OffsetMWeights;
  unsigned int OffsetMatrices;
  unsigned int OffsetNormal;
  unsigned int NumMatrices;
  unsigned int Size;
};


struct ID3DXBuffer : IUnknown
{
};


struct _D3DXATTRIBUTERANGE
{
  unsigned int AttribId;
  unsigned int FaceStart;
  unsigned int FaceCount;
  unsigned int VertexStart;
  unsigned int VertexCount;
};


struct SmartArray<VertexRange,1>
{
  VertexRange *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<RenderVertexStreamD3D *,1>
{
  RenderVertexStreamD3D **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderVertexBufferD3D : RenderVertexBuffer
{
  SmartArray<VertexRange,1> m_saDirtyVertices;
  SmartArray<RenderVertexStreamD3D *,1> m_saVertexStreams;
};


struct PrimD3DRender : Render
{
};


struct __declspec(align(4)) AlphaListEntry
{
  MeshBuffer *pMeshBuffer;
  int surfaceNum;
  CSurface *surface;
  CMaterial *material;
  Matrix4 worldMatrix;
  bool bNewObject;
  bool overrideClipmapSetting;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,RenderVertexStreamD3D *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,RenderVertexStreamD3D *> **m_buckets;
  HashTableData<unsigned long,RenderVertexStreamD3D *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,RenderVertexStreamD3D *,0>
{
  HashTable<unsigned long,RenderVertexStreamD3D *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,RenderVertexStreamD3D *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,RenderVertexStreamD3D *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,RenderVertexStreamD3D *> *m_hashNext;
};


struct HashTableData<unsigned long,RenderVertexStreamD3D *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *>
{
  RenderVertexStreamD3D *m_data;
};


struct D3DPolyRender : PrimD3DRender
{
  HINSTANCE__ *m_hD3D9DLL;
  IDirect3D9 *m_pDirect3D;
  HashTable<unsigned long,RenderVertexStreamD3D *,0> m_DynamicVertexStreamHash;
  RenderIndexStreamD3D *m_pDynamicIndexStream;
  float m_GlobalMipmapLODBias;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *,0> *m_currHashTable;
  HashTableData<unsigned long,RenderVertexStreamD3D *> **m_currBucket;
  HashTableData<unsigned long,RenderVertexStreamD3D *> *m_currElement;
};


struct HashIterator<unsigned long,RenderVertexStreamD3D *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,RenderVertexStreamD3D *> *,0> m_iter;
};


struct RenderIndexBufferD3D : RenderIndexBuffer
{
  RenderIndexStreamD3D *m_pIndexStream;
};


struct _DDCOLORKEY
{
  unsigned int dwColorSpaceLowValue;
  unsigned int dwColorSpaceHighValue;
};


union $83FB4F737B5EDC31066F75BACF4F71E0
{
  unsigned int dwCaps4;
  unsigned int dwVolumeDepth;
};


struct _DDSCAPS2
{
  unsigned int dwCaps;
  unsigned int dwCaps2;
  unsigned int dwCaps3;
  $83FB4F737B5EDC31066F75BACF4F71E0 ___u3;
};


struct $C25A9065B81808D2E7112BE513398F8C
{
  unsigned __int16 wFlipMSTypes;
  unsigned __int16 wBltMSTypes;
};


union $DAED55BFC94E6097478CA68F0B175AFE
{
  unsigned int dwRGBBitCount;
  unsigned int dwYUVBitCount;
  unsigned int dwZBufferBitDepth;
  unsigned int dwAlphaBitDepth;
  unsigned int dwLuminanceBitCount;
  unsigned int dwBumpBitCount;
  unsigned int dwPrivateFormatBitCount;
};


union $CF4E6002FA4B19EC2239361E8AC5A039
{
  unsigned int dwRBitMask;
  unsigned int dwYBitMask;
  unsigned int dwStencilBitDepth;
  unsigned int dwLuminanceBitMask;
  unsigned int dwBumpDuBitMask;
  unsigned int dwOperations;
};


union $0799939390DD23A21DB7A0CEB77AB1BC
{
  unsigned int dwGBitMask;
  unsigned int dwUBitMask;
  unsigned int dwZBitMask;
  unsigned int dwBumpDvBitMask;
  $C25A9065B81808D2E7112BE513398F8C MultiSampleCaps;
};


union $01AE0C4CAA17A9DEB3CF9215716A3B58
{
  unsigned int dwBBitMask;
  unsigned int dwVBitMask;
  unsigned int dwStencilBitMask;
  unsigned int dwBumpLuminanceBitMask;
};


union $F006553FDB25FB59A59693178CCFF094
{
  unsigned int dwRGBAlphaBitMask;
  unsigned int dwYUVAlphaBitMask;
  unsigned int dwLuminanceAlphaBitMask;
  unsigned int dwRGBZBitMask;
  unsigned int dwYUVZBitMask;
};


struct _DDPIXELFORMAT
{
  unsigned int dwSize;
  unsigned int dwFlags;
  unsigned int dwFourCC;
  $DAED55BFC94E6097478CA68F0B175AFE ___u3;
  $CF4E6002FA4B19EC2239361E8AC5A039 ___u4;
  $0799939390DD23A21DB7A0CEB77AB1BC ___u5;
  $01AE0C4CAA17A9DEB3CF9215716A3B58 ___u6;
  $F006553FDB25FB59A59693178CCFF094 ___u7;
};


union $00F4D6FA838FAD5B65924731E0E9CCBC
{
  int lPitch;
  unsigned int dwLinearSize;
};


union $DE343801BC75A137C516A9D9B3162490
{
  unsigned int dwBackBufferCount;
  unsigned int dwDepth;
};


union $FA885138A45ED3CE38760E5920CA9439
{
  unsigned int dwMipMapCount;
  unsigned int dwRefreshRate;
  unsigned int dwSrcVBHandle;
};


union $96D785A73F636DC638A4513F822CFEF9
{
  _DDCOLORKEY ddckCKDestOverlay;
  unsigned int dwEmptyFaceColor;
};


union $CB6693ED8D1BE723E48336199FDC2244
{
  _DDPIXELFORMAT ddpfPixelFormat;
  unsigned int dwFVF;
};


struct _DDSURFACEDESC2
{
  unsigned int dwSize;
  unsigned int dwFlags;
  unsigned int dwHeight;
  unsigned int dwWidth;
  $00F4D6FA838FAD5B65924731E0E9CCBC ___u4;
  $DE343801BC75A137C516A9D9B3162490 ___u5;
  $FA885138A45ED3CE38760E5920CA9439 ___u6;
  unsigned int dwAlphaBitDepth;
  unsigned int dwReserved;
  void *lpSurface;
  $96D785A73F636DC638A4513F822CFEF9 ___u10;
  _DDCOLORKEY ddckCKDestBlt;
  _DDCOLORKEY ddckCKSrcOverlay;
  _DDCOLORKEY ddckCKSrcBlt;
  $CB6693ED8D1BE723E48336199FDC2244 ___u14;
  _DDSCAPS2 ddsCaps;
  unsigned int dwTextureStage;
};


struct _IJL_RECT
{
  int left;
  int top;
  int right;
  int bottom;
};


struct _HUFFMAN_TABLE
{
  int huff_class;
  int ident;
  unsigned int huffelem[256];
  unsigned __int16 huffval[256];
  unsigned __int16 mincode[17];
  __int16 maxcode[18];
  unsigned __int16 valptr[17];
};


struct __declspec(align(4)) _JPEGHuffTable
{
  char *bits;
  char *vals;
  char hclass;
  char ident;
};


struct _QUANT_TABLE
{
  int precision;
  int ident;
  __int16 *elements;
  __int16 elarray[84];
};


struct __declspec(align(4)) _JPEGQuantTable
{
  char *quantizer;
  char ident;
};


struct _FRAME_COMPONENT
{
  int ident;
  int hsampling;
  int vsampling;
  int quant_sel;
};


struct _FRAME
{
  int precision;
  int width;
  int height;
  int MCUheight;
  int MCUwidth;
  int max_hsampling;
  int max_vsampling;
  int ncomps;
  int horMCU;
  int totalMCU;
  _FRAME_COMPONENT *comps;
  int restart_interv;
  int SeenAllDCScans;
  int SeenAllACScans;
};


struct _SCAN_COMPONENT
{
  int comp;
  int hsampling;
  int vsampling;
  _HUFFMAN_TABLE *dc_table;
  _HUFFMAN_TABLE *ac_table;
  _QUANT_TABLE *quant_table;
};


struct _SCAN
{
  int ncomps;
  int gray_scale;
  int start_spec;
  int end_spec;
  int approx_high;
  int approx_low;
  unsigned int restart_interv;
  int curxMCU;
  int curyMCU;
  int dc_diff[4];
  _SCAN_COMPONENT *comps;
};


struct _SAMPLING_STATE
{
  __int16 *top_row;
  __int16 *cur_row;
  __int16 *bottom_row;
  __int16 *last_row;
  int cur_row_number;
};


struct _RAW_DATA_TYPES_STATE
{
  int data_type;
  unsigned __int16 *raw_ptrs[4];
};


struct __declspec(align(4)) _ENTROPYSTRUCT
{
  unsigned int offset;
  int dcval1;
  int dcval2;
  int dcval3;
  int dcval4;
  unsigned __int64 bit_buffer_64;
  int bitbuf_bits_valid;
  char unread_marker;
};


struct _STATE
{
  unsigned __int64 bit_buffer_64;
  void *ctx;
  int bitbuf_bits_valid;
  char *cur_entropy_ptr;
  char *start_entropy_ptr;
  char *end_entropy_ptr;
  int entropy_bytes_processed;
  int entropy_buf_maxsize;
  int entropy_bytes_left;
  int Prog_EndOfBlock_Run;
  char *DIB_ptr;
  char unread_marker;
  _PROCESSOR_TYPE processor_type;
  int cur_scan_comp;
  void *file;
  char JPGBuffer[4096];
};


struct __declspec(align(8)) _JPEG_PROPERTIES
{
  _IJLIOTYPE iotype;
  _IJL_RECT roi;
  _DCTTYPE dcttype;
  _FAST_MCU_PROCESSING_TYPE fast_processing;
  int interrupt;
  char *DIBBytes;
  int DIBWidth;
  int DIBHeight;
  int DIBPadBytes;
  int DIBChannels;
  _IJL_COLOR DIBColor;
  _IJL_JPGSUBSAMPLING DIBSubsampling;
  int DIBLineBytes;
  const char *JPGFile;
  char *JPGBytes;
  int JPGSizeBytes;
  int JPGWidth;
  int JPGHeight;
  int JPGChannels;
  _IJL_COLOR JPGColor;
  _IJL_JPGSUBSAMPLING JPGSubsampling;
  int JPGThumbWidth;
  int JPGThumbHeight;
  int cconversion_reqd;
  int upsampling_reqd;
  int jquality;
  int jinterleaveType;
  int numxMCUs;
  int numyMCUs;
  int nqtables;
  int maxquantindex;
  int nhuffActables;
  int nhuffDctables;
  int maxhuffindex;
  _QUANT_TABLE jFmtQuant[4];
  _HUFFMAN_TABLE jFmtAcHuffman[4];
  _HUFFMAN_TABLE jFmtDcHuffman[4];
  __int16 *jEncFmtQuant[4];
  _HUFFMAN_TABLE *jEncFmtAcHuffman[4];
  _HUFFMAN_TABLE *jEncFmtDcHuffman[4];
  int use_external_qtables;
  int use_external_htables;
  _JPEGQuantTable rawquanttables[4];
  _JPEGHuffTable rawhufftables[8];
  char HuffIdentifierAC[4];
  char HuffIdentifierDC[4];
  _FRAME jframe;
  int needframe;
  _SCAN *jscan;
  _STATE state;
  int SawAdobeMarker;
  int AdobeXform;
  _ENTROPYSTRUCT *rowoffsets;
  char *MCUBuf;
  char tMCUBuf[1440];
  _PROCESSOR_TYPE processor_type;
  _RAW_DATA_TYPES_STATE *raw_coefs;
  int progressive_found;
  __int16 *coef_buffer;
  _UPSAMPLING_TYPE upsampling_type;
  _SAMPLING_STATE *sampling_state_ptr;
  unsigned __int16 AdobeVersion;
  unsigned __int16 AdobeFlags0;
  unsigned __int16 AdobeFlags1;
  int jfif_app0_detected;
  unsigned __int16 jfif_app0_version;
  char jfif_app0_units;
  unsigned __int16 jfif_app0_Xdensity;
  unsigned __int16 jfif_app0_Ydensity;
  char *jpeg_comment;
  unsigned __int16 jpeg_comment_size;
};


struct _JPEG_CORE_PROPERTIES
{
  int UseJPEGPROPERTIES;
  char *DIBBytes;
  int DIBWidth;
  int DIBHeight;
  int DIBPadBytes;
  int DIBChannels;
  _IJL_COLOR DIBColor;
  _IJL_JPGSUBSAMPLING DIBSubsampling;
  const char *JPGFile;
  char *JPGBytes;
  int JPGSizeBytes;
  int JPGWidth;
  int JPGHeight;
  int JPGChannels;
  _IJL_COLOR JPGColor;
  _IJL_JPGSUBSAMPLING JPGSubsampling;
  int JPGThumbWidth;
  int JPGThumbHeight;
  int cconversion_reqd;
  int upsampling_reqd;
  int jquality;
  _JPEG_PROPERTIES jprops;
};


struct ImageDecoder
{
  ImageDecoderVtbl *vfptr;
  RGBAUnion *m_pPal;
  DataSource *m_pDataSrc;
  int m_width;
  int m_height;
  int m_pitch;
  int m_bpp;
  char *m_pDataDst;
  PixelFormatDesc m_dstPFD;
  PixelFormatDesc m_argbPFD;
};


struct ImageDecoderVtbl
{
  int (__thiscall *ReadHeader)(ImageDecoder *this, int *, int *, PixelFormatID *);
  int (__thiscall *Decode)(ImageDecoder *this);
};


struct __declspec(align(4)) SurfaceWindowLocker
{
  SurfaceWindow *m_pSurface;
  bool m_bLocked;
};


struct PixelOp<unsigned long>
{
};


struct SmartArray<unsigned char,0>
{
  char *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct FastSmartArray<unsigned char> : SmartArray<unsigned char,0>
{
};


struct FontReference
{
  IDClass<_tagDataID,32,0> dataID;
  Font *font;
};


struct SmartArray<FontReference,1>
{
  FontReference *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct FontMapper
{
};


struct CSIHeader
{
  unsigned int ImageType;
  unsigned __int16 ImageWidth;
  unsigned __int16 ImageHeight;
};


struct CSIDecoder : ImageDecoder
{
  CSIHeader mCSIHeader;
};


struct ALPHeader
{
  unsigned int ImageType;
  unsigned __int16 ImageWidth;
  unsigned __int16 ImageHeight;
};


struct ALPDecoder : ImageDecoder
{
  ALPHeader mALPHeader;
};


struct TGAHeader
{
  char IdLength;
  char CmapType;
  char ImageType;
  unsigned __int16 CmapIndex;
  unsigned __int16 CmapLength;
  char CmapEntrySize;
  unsigned __int16 X_Origin;
  unsigned __int16 Y_Origin;
  unsigned __int16 ImageWidth;
  unsigned __int16 ImageHeight;
  char PixelDepth;
  char ImagDesc;
};


struct TGADecoder : ImageDecoder
{
  TGAHeader mTGAHeader;
};


struct ILBMHeader
{
  unsigned __int16 width;
  unsigned __int16 height;
  __int16 xorg;
  __int16 yorg;
  char num_bitplanes;
  char mask;
  char compression;
  char reserved;
  unsigned __int16 transparent_color;
  char xAspect;
  char yAspect;
  __int16 pagewidth;
  __int16 pageheight;
};


struct ILBMDecoder : ImageDecoder
{
  ILBMHeader mILBMHeader;
};


struct D3DLevelResourceType
{
  RenderSurfaceD3D *m_Resources[6];
};


struct SmartArray<D3DLevelResourceType,1>
{
  D3DLevelResourceType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) RenderTextureD3D : RenderTexture
{
  IDirect3DTexture9 *m_p2DTextureD3D;
  IDirect3DCubeTexture9 *m_pCubeTextureD3D;
  SmartArray<D3DLevelResourceType,1> m_D3DSurfaces;
};


struct SmartArray<Font *,1>
{
  Font **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct TextureBasedFontVertexType
{
  Vector3 Origin;
  unsigned int Diffuse;
  TexCoordPair TexCoord;
};


struct SmartArray<TextureBasedFontVertexType,1>
{
  TextureBasedFontVertexType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderMeshQueryVertexType
{
  Vector3 Origin;
  Vector3 Normal;
};


struct SmartArray<RenderMeshQueryVertexType,1>
{
  RenderMeshQueryVertexType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<unsigned short,1>
{
  unsigned __int16 *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderMeshFragmentTopology_TopBatchType
{
  RenderMeshBatch *m_pBatch;
  SmartArray<unsigned short,1> m_BatchVertexToTopVertexIndices;
};


struct SmartArray<RenderMeshFragmentTopology_TopBatchType,1>
{
  RenderMeshFragmentTopology_TopBatchType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct OBJECTINFO
{
  CPhysicsObj *object;
  int state;
  float scale;
  float step_up_height;
  float step_down_height;
  int ethereal;
  int step_down;
  unsigned int targetID;
};


struct DArray<CPhysicsObj const *>
{
  CPhysicsObj **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct COLLISIONINFO
{
  int last_known_contact_plane_valid;
  Plane last_known_contact_plane;
  int last_known_contact_plane_is_water;
  int contact_plane_valid;
  Plane contact_plane;
  unsigned int contact_plane_cell_id;
  unsigned int last_known_contact_plane_cell_id;
  int contact_plane_is_water;
  int sliding_normal_valid;
  AC1Legacy_Vector3 sliding_normal;
  int collision_normal_valid;
  AC1Legacy_Vector3 collision_normal;
  AC1Legacy_Vector3 adjust_offset;
  unsigned int num_collide_object;
  DArray<CPhysicsObj const *> collide_object;
  CPhysicsObj *last_collided_object;
  int collided_with_environment;
  int frames_stationary_fall;
};


struct CTransition
{
  OBJECTINFO object_info;
  SPHEREPATH sphere_path;
  COLLISIONINFO collision_info;
  CELLARRAY cell_array;
  CObjCell *new_cell_ptr;
};


struct PhysObjProfile
{
  IDClass<_tagDataID,32,0> setup;
  IDClass<_tagDataID,32,0> motion_table;
  IDClass<_tagDataID,32,0> sound_table;
  IDClass<_tagDataID,32,0> physics_effect_table;
  unsigned int physics_bitmask;
  unsigned int placement;
  long double scale;
  long double friction;
  long double elasticity;
  long double translucency;
  PScriptType default_script;
  long double default_script_intensity;
};


struct ShadePackage
{
  long double _val[4];
};


struct EtherealWeenieType
{
  unsigned __int64 m_wtype_mask;
  SmartArray<unsigned long,1> m_ethereal_list;
  SmartArray<unsigned long,1> m_solid_list;
};


struct EtherealPhysicsType
{
  unsigned int m_eEtherealityBitfield;
};


struct LOSParameters
{
  EtherealWeenieType m_weenie_LOS;
  EtherealPhysicsType m_physics_LOS;
  RayIntersectionType_Type m_intersect_type;
  int m_bTraversePortals;
  int m_bCheckedOutside;
  unsigned int m_initial_cell_id;
  Ray m_initial_ray;
  Ray m_current_ray;
  unsigned int m_current_cell_id;
  float m_delta;
  unsigned int m_trace_result;
  unsigned int m_final_cell_id;
  Ray m_final_ray;
  Vector3 m_impact_normal;
  unsigned int m_portal_index;
  LandDefs_Direction m_dir;
  unsigned int m_next_block_id;
};


struct SetPositionStruct
{
  Position pos;
  unsigned int flags;
  AC1Legacy_Vector3 line;
  float xrad;
  float yrad;
  unsigned int num_tries;
};


union $6E56156ABBED5B0767B81AF559A00DDB
{
  long double birthtime;
  long double last_update_time;
};


struct Particle
{
  $6E56156ABBED5B0767B81AF559A00DDB ___u0;
  long double lifespan;
  long double lifetime;
  Frame start_frame;
  AC1Legacy_Vector3 offset;
  AC1Legacy_Vector3 a;
  AC1Legacy_Vector3 b;
  AC1Legacy_Vector3 c;
  float start_scale;
  float final_scale;
  float start_trans;
  float final_trans;
};


struct ParticleEmitter
{
  unsigned int id;
  CPhysicsObj *parent;
  unsigned int part_index;
  Frame parent_offset;
  CPhysicsObj *physobj;
  ParticleEmitterInfo *info;
  Particle *particles;
  CPhysicsPart **part_storage;
  CPhysicsPart **parts;
  int degraded_out;
  float degrade_distance;
  long double creation_time;
  int num_particles;
  int total_emitted;
  long double last_emit_time;
  AC1Legacy_Vector3 last_emit_offset;
  int stopped;
  long double last_update_time;
};


struct DetectionInfo
{
  unsigned int object_id;
  DetectionType object_status;
};


struct AttackCone
{
  int part_index;
  Vec2D left;
  Vec2D right;
  float radius;
  float height;
};


struct ObjectInfo
{
  unsigned int object_id;
  unsigned int hit_location;
};


struct DArray<ObjectInfo>
{
  ObjectInfo *data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct AttackInfo
{
  unsigned int attack_id;
  int part_index;
  float attack_radius;
  unsigned int waiting_for_cells;
  unsigned int num_objects;
  DArray<ObjectInfo> object_list;
};


struct SmartArray<CPhysicsObj *,1>
{
  CPhysicsObj **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<LIGHTINFO *,1>
{
  LIGHTINFO **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) CreatureMode
{
  SmartArray<CPhysicsObj *,1> creature_mode_objects;
  SmartArray<LIGHTINFO *,1> creature_mode_lights;
  CEnvCell *creature_cell;
  Frame creature_view_frame;
  RGBColor m_clrAmbientLight;
  float m_fFOVRadians;
  bool m_bUseSmartboxFOV;
  bool m_bUseSharpMode;
};


struct UIElement_Viewport : UIElement, CreatureMode
{
};


struct UIVertex
{
  Vector3 m_vOrigin;
  float m_fU;
  float m_fV;
};


struct __MIDL___MIDL_itf_strmif_0130_0001
{
  _GUID Clsid;
  unsigned __int16 *Name;
};


struct ISeekingPassThru : IUnknown
{
};


struct IFilterGraph2 : IGraphBuilder
{
};


struct IFilterMapper : IUnknown
{
};


struct IEnumRegFilters : IUnknown
{
};


struct QzCComPtr<IPinConnection>
{
  IPinConnection *p;
};


struct CMemAllocator : CBaseAllocator
{
  char *m_pBuffer;
};


struct tag_TRUECOLORINFO
{
  unsigned int dwBitMasks[3];
  tagRGBQUAD bmiColors[256];
};


union $34B9ED96A88855EA5FA4CC4779B41A70
{
  tagRGBQUAD bmiColors[256];
  unsigned int dwBitMasks[3];
  tag_TRUECOLORINFO TrueColorInfo;
};


struct __declspec(align(8)) tagVIDEOINFO
{
  tagRECT rcSource;
  tagRECT rcTarget;
  unsigned int dwBitRate;
  unsigned int dwBitErrorRate;
  __int64 AvgTimePerFrame;
  tagBITMAPINFOHEADER bmiHeader;
  $34B9ED96A88855EA5FA4CC4779B41A70 ___u6;
};


struct CSeekingPassThru : ISeekingPassThru, CUnknown
{
  CPosPassThru *m_pPosPassThru;
};


struct CAMMsgEvent : CAMEvent
{
};


struct PrimVertex
{
  Vector3 m_vOrigin;
  TexCoordPair m_UVs[1];
};


struct TimeOfDay
{
  AC1Legacy_PStringBase<char> time_of_day_name;
  float begin;
  int is_night;
};


struct AC1Legacy_SmartArray<TimeOfDay *>
{
  TimeOfDay **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct WeekDay
{
  AC1Legacy_PStringBase<char> week_day_name;
};


struct AC1Legacy_SmartArray<WeekDay *>
{
  WeekDay **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct Season
{
  AC1Legacy_PStringBase<char> season_name;
  int begin;
};


struct AC1Legacy_SmartArray<Season *>
{
  Season **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct GameTime
{
  long double zero_time_of_year;
  int zero_year;
  float day_length;
  int days_per_year;
  AC1Legacy_SmartArray<TimeOfDay *> times_of_day;
  AC1Legacy_SmartArray<WeekDay *> days_of_the_week;
  AC1Legacy_SmartArray<Season *> seasons;
  AC1Legacy_PStringBase<char> year_spec;
  long double year_length;
  float present_time_of_day;
  long double time_of_day_begin;
  long double time_of_next_event;
  float present_time_in_day_unit;
  int current_year;
  int current_day;
  int current_season;
  int current_week_day;
  int current_time_of_day;
  long double clock_offset;
  long double time_zero_start_delta;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CEnvCell *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CEnvCell *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,CEnvCell *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,CEnvCell *> **m_buckets;
  HashTableData<unsigned long,CEnvCell *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,CEnvCell *,0>
{
  HashTable<unsigned long,CEnvCell *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CEnvCell *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,CEnvCell *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,CEnvCell *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CEnvCell *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CEnvCell *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,CEnvCell *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,CEnvCell *> *m_hashNext;
};


struct HashTableData<unsigned long,CEnvCell *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,CEnvCell *> *>
{
  CEnvCell *m_data;
};



struct DetectionCylsphere
{
  unsigned int context_id;
  float radius;
  int object_detected;
  DetectionInfo info;
  unsigned int detection_type;
};


struct ACRender : Render
{
};


struct __declspec(align(8)) TargettedVoyeurInfo
{
  unsigned int object_id;
  long double quantum;
  float radius;
  Position last_sent_position;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,CEnvCell *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,CEnvCell *> *,0> *m_currHashTable;
  HashTableData<unsigned long,CEnvCell *> **m_currBucket;
  HashTableData<unsigned long,CEnvCell *> *m_currElement;
};


struct HashIterator<unsigned long,CEnvCell *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,CEnvCell *> *,0> m_iter;
};


struct IntermitSound : AmbientSound
{
  float play_chance;
  float min_dist[8];
  float max_dist[8];
  unsigned int num_dir;
  LandDefs_Direction sound_dir[8];
};


struct GfxVelocityDesc
{
  IDClass<_tagDataID,32,0> id;
  CVec2Duv offset;
  CVec2Duv total;
};


struct AC1Legacy_SmartArray<GfxVelocityDesc *>
{
  GfxVelocityDesc **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct ConstantSound : AmbientSound
{
  float current_volume;
};



struct AC1Legacy_SmartArray<PalShiftSubPal *>
{
  PalShiftSubPal **m_data;
  unsigned int m_size;
  unsigned int m_num;
};




struct AC1Legacy_SmartArray<PalShiftRoadCode *>
{
  PalShiftRoadCode **m_data;
  unsigned int m_size;
  unsigned int m_num;
};



struct AC1Legacy_SmartArray<PalShiftTerrainPal *>
{
  PalShiftTerrainPal **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct AC1Legacy_SmartArray<PalShiftTex *>
{
  PalShiftTex **m_data;
  unsigned int m_size;
  unsigned int m_num;
};




struct AC1Legacy_SmartArray<TerrainAlphaMap *>
{
  TerrainAlphaMap **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct AC1Legacy_SmartArray<RoadAlphaMap *>
{
  RoadAlphaMap **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct AC1Legacy_SmartArray<TerrainTex *>
{
  TerrainTex **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct AC1Legacy_SmartArray<TMTerrainDesc *>
{
  TMTerrainDesc **m_data;
  unsigned int m_size;
  unsigned int m_num;
};





struct AC1Legacy_SmartArray<CSurface *>
{
  CSurface **m_data;
  unsigned int m_size;
  unsigned int m_num;
};




struct AC1Legacy_SmartArray<CSceneType *>
{
  CSceneType **m_data;
  unsigned int m_size;
  unsigned int m_num;
};




struct AC1Legacy_SmartArray<CTerrainType *>
{
  CTerrainType **m_data;
  unsigned int m_size;
  unsigned int m_num;
};




struct AC1Legacy_SmartArray<SkyObjectReplace *>
{
  SkyObjectReplace **m_data;
  unsigned int m_size;
  unsigned int m_num;
};



struct AC1Legacy_SmartArray<SkyTimeOfDay *>
{
  SkyTimeOfDay **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct AC1Legacy_SmartArray<SkyObject *>
{
  SkyObject **m_data;
  unsigned int m_size;
  unsigned int m_num;
};






struct AC1Legacy_SmartArray<DayGroup *>
{
  DayGroup **m_data;
  unsigned int m_size;
  unsigned int m_num;
};



struct AC1Legacy_SmartArray<AmbientSTBDesc *>
{
  AmbientSTBDesc **m_data;
  unsigned int m_size;
  unsigned int m_num;
};










struct PhysicsGlobals
{
};


struct PhysicsTimer
{
};


struct InterfacePtr<CObjectMaint>
{
  CObjectMaint *m_pInterface;
  TResult m_trStatus;
};


struct GraphicsOptions
{
};


struct PositionPack : PackObj
{
  unsigned __int16 instance_timestamp;
  unsigned __int16 position_timestamp;
  unsigned __int16 teleport_timestamp;
  unsigned __int16 force_position_timestamp;
  Position position;
  AC1Legacy_Vector3 velocity;
  unsigned int placement_id;
  int has_contact;
};


struct CMotionInterp_MotionNode : LListData
{
  unsigned int context_id;
  unsigned int motion;
  unsigned int jump_error_code;
};


struct HashSorterIterator<unsigned long,ElementDesc>
{
  HashSorterNode<unsigned long,ElementDesc> *m_iter;
};


struct HashSorter<unsigned long,ElementDesc>_AscendingByKey
{
};


struct HashSorter<unsigned long,ElementDesc>_AscendingByData
{
};


struct HashSorter<unsigned long,ElementDesc>_DescendingByKey
{
};


struct HashSorter<unsigned long,ElementDesc>_DescendingByData
{
};


struct DBObjGrabber<LayoutDesc>
{
  LayoutDesc *m_object;
};


struct _STL__BothPtrType<HashSorterNode<unsigned long,ElementDesc> *,HashSorterNode<unsigned long,ElementDesc> *>
{
};


struct _STL__OKToMemCpy<HashSorterNode<unsigned long,ElementDesc>,HashSorterNode<unsigned long,ElementDesc> >
{
};


struct MediaDescResolver
{
};


struct SerializationBehavior<SB_Container<SB_TypeAlloc<MediaDescResolver,SB_Default>,&SB_DEFAULT_ITEM_NAME> >
{
};


struct SB_Container<SB_TypeAlloc<MediaDescResolver,SB_Default>,&SB_DEFAULT_ITEM_NAME> : SerializationBehavior<SB_Container<SB_TypeAlloc<MediaDescResolver,SB_Default>,&SB_DEFAULT_ITEM_NAME> >
{
};


struct SerializationBehavior<SB_TypeAlloc<MediaDescResolver,SB_Default> >
{
};


struct SB_TypeAlloc<MediaDescResolver,SB_Default> : SerializationBehavior<SB_TypeAlloc<MediaDescResolver,SB_Default> >
{
};


struct UIElement_Field : UIElement
{
  bool m_rolloverStateChange;
  unsigned int m_oldState;
};


struct StringDownload : AsyncCacheCallback
{
  StringInfo m_info;
  unsigned int m_fontDIDNum;
  unsigned int m_fontColorNum;
  AsyncContext m_prefetchContext;
};


struct SmartArray<StringDownload *,1>
{
  StringDownload **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) UIElement_Text : UIElement_Scrollable, CInputHandler
{
  GlyphList m_glyphList;
  unsigned int m_nCursorPos;
  unsigned int m_nSelectionStart;
  unsigned int m_nSelectionEnd;
  GlyphList m_glTruncate;
  unsigned int m_nTruncationPos;
  int m_cxTrailer;
  int m_cyTrailer;
  unsigned int m_cxAdjustedLineNumber;
  int m_cxAdjustedLineSize;
  unsigned int m_bitField;
  unsigned int m_eHorizontalJustification;
  unsigned int m_eVerticalJustification;
  bool (__cdecl *m_filter)(unsigned __int16);
  RGBAColor m_curFontColor;
  Font *m_curFontObj;
  RGBAColor m_curTagFontColor;
  unsigned int m_curOutlineColor;
  int m_margU;
  int m_margD;
  int m_margL;
  int m_margR;
  long double m_lastCursorMoveTime;
  long double m_lastFlashFlipTime;
  Box2D m_lastCursor;
  SmartArray<StringDownload *,1> m_downloadQueue;
};


struct UIElement_Button : UIElement_Text
{
  bool mousePressedOnButton;
  bool hotClickingInProgress;
  long double nextHotClickTime;
};


struct __declspec(align(8)) UIElement_Scrollbar : UIElement_Button
{
  UIElement *m_pWidget;
  long double m_tAnimStartTime;
  long double m_tAnimEndTime;
  float m_fAnimStartPos;
  float m_fAnimEndPos;
  int m_nMouseWidgetXOffset;
  int m_nMouseWidgetYOffset;
  long double m_nNextPageTime;
  tagPOINT m_ptDragStart;
  float m_fResetPosition;
  bool m_bWidgetDragActive;
  tagRECT m_rectScrollingArea;
  unsigned int m_eIncrementButtonID;
  unsigned int m_eDecrementButtonID;
  unsigned int m_bitField;
};


struct UIElement_Meter : UIElement
{
  bool m_framemeter;
  bool m_animating;
  long double m_animStartTime;
  long double m_animEndTime;
  float m_anim_start_pos;
  float m_anim_end_pos;
  int m_currentFrame;
  float m_fOldPosition;
  UIElement *m_pcChildImage;
  unsigned int m_eDirection;
};


struct __declspec(align(8)) UIElement_Menu : UIElement_Button
{
  UIElement *m_popup;
  UIElement_ListBox *m_listBox;
  bool m_open;
  unsigned int m_uiListBoxXBorder;
  unsigned int m_uiListBoxYBorder;
};


struct __declspec(align(4)) UIElement_Dragbar : UIElement
{
  bool m_mousePressed;
};


struct UIElement_Panel : UIElement
{
  HashTable<unsigned long,unsigned long,0> m_TabPageHash;
  HashTable<unsigned long,unsigned long,0> m_PageTabHash;
  unsigned int m_OpenPageToken;
  unsigned int m_OpenTabToken;
};


struct __declspec(align(4)) UIElement_Resizebar : UIElement
{
  bool m_mousePressed;
};


struct IAlternateDCProvider
{
  IAlternateDCProviderVtbl *vfptr;
};


struct IAlternateDCProviderVtbl
{
  bool (__thiscall *GetDC)(IAlternateDCProvider *this, HWND__ *, HDC__ **);
  bool (__thiscall *ReleaseDC)(IAlternateDCProvider *this, HDC__ *, int *);
};


struct IBrowserCallback
{
  IBrowserCallbackVtbl *vfptr;
};


struct IBrowserCallbackVtbl
{
  void (__thiscall *BeforeNavigate2)(IBrowserCallback *this, const unsigned __int16 *, unsigned __int16 *, bool *);
  void (__thiscall *DownloadBegin)(IBrowserCallback *this);
  void (__thiscall *ProgressChange)(IBrowserCallback *this, int, int);
  void (__thiscall *DownloadComplete)(IBrowserCallback *this);
  void (__thiscall *NavigateComplete2)(IBrowserCallback *this, const unsigned __int16 *);
  void (__thiscall *NavigateError)(IBrowserCallback *this, const unsigned __int16 *, const unsigned __int16 *, int, bool *);
  void (__thiscall *DocumentComplete)(IBrowserCallback *this, const unsigned __int16 *);
  void (__thiscall *TitleChange)(IBrowserCallback *this, const unsigned __int16 *);
};


struct IBrowserControl : IUnknown
{
};


struct __declspec(align(2)) UIElement_Browser : UIElement, IAlternateDCProvider, IBrowserCallback
{
  IBrowserControl *m_pWebBrowser;
  bool m_fFullScreen;
  bool m_fLastTrueVisibility;
  bool m_fAllowFullscreenBrowser;
};


struct UIElement_ColorPicker : UIElement
{
  bool m_bDisplaySelection;
  RGBAColor m_rgbaCurrentSelected;
  unsigned int m_nCurrentSelection;
};


struct UIElement_GroupBox : UIElement
{
  unsigned int m_idSelectedButton;
};


struct Dialog : UIElement_Field
{
  unsigned int m_nContext;
  PropertyCollection m_cData;
  long double m_tNow;
  long double m_tExpiration;
  UIElement *m_pcPendingDisplay;
  UIElement_Text *m_pcPendingDisplayText;
};


struct ConfirmationDialog : Dialog
{
};


struct __declspec(align(8)) ConfirmationMenuDialog : Dialog
{
  UIElement_Menu *m_pcMenu;
};


struct ConfirmationTextInputDialog : Dialog
{
};


struct __declspec(align(8)) MenuDialog : Dialog
{
  UIElement_Menu *m_pcMenu;
};


struct MessageDialog : Dialog
{
};


struct TextInputDialog : Dialog
{
};


struct __declspec(align(8)) WaitDialog : Dialog
{
  unsigned int m_eKey;
};


struct MouseOverNotificationLogic
{
};


struct BaseCriteria
{
};


struct MouseOverCriteria : BaseCriteria
{
};


struct ToolTipCriteria : BaseCriteria
{
};


struct DropTargetCriteria : BaseCriteria
{
};


struct NonDBObjLayoutDesc : LayoutDesc
{
};


struct NonDBObjElementDesc : ElementDesc
{
};


struct DBObjGrabber<RenderSurface>
{
  RenderSurface *m_object;
};


struct MouseHitTester<MouseOverCriteria>
{
};


struct HierarchyNotifier<MouseOverNotificationLogic>
{
};


struct SurfaceUsageSummary
{
  unsigned int Bytes;
  PStringBase<char> Name;
  unsigned int ElementWidth;
  unsigned int ElementHeight;
  unsigned int SurfaceWidth;
  unsigned int SurfaceHeight;
};


struct SmartArray<SurfaceUsageSummary,1>
{
  SurfaceUsageSummary *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct _STL_binary_function<SurfaceUsageSummary,SurfaceUsageSummary,bool>
{
};


struct _STL_less<SurfaceUsageSummary> : _STL_binary_function<SurfaceUsageSummary,SurfaceUsageSummary,bool>
{
};


struct _STL__BothPtrType<SurfaceUsageSummary *,SurfaceUsageSummary *>
{
};


struct _STL__OKToMemCpy<SurfaceUsageSummary,SurfaceUsageSummary>
{
};


struct __declspec(align(4)) View
{
  int x0;
  int x1;
  int y0;
  int y1;
  bool valid;
};


struct SmartArray<View,1>
{
  View *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct TextTagFactory
{
};


struct DBObjGrabber<Font>
{
  Font *m_object;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DialogInfo> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DialogInfo> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,DialogInfo> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,DialogInfo> **m_buckets;
  HashTableData<unsigned long,DialogInfo> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DialogInfo> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DialogInfo> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,DialogInfo> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,DialogInfo> *m_hashNext;
};


struct DialogInfo
{
  PropertyCollection data;
  Dialog *pointer;
  UIFramework *parent;
  unsigned int context;
};


struct HashTableData<unsigned long,DialogInfo> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,DialogInfo> *>
{
  DialogInfo m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,DialogInfo> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DialogInfo> *,0> *m_currHashTable;
  HashTableData<unsigned long,DialogInfo> **m_currBucket;
  HashTableData<unsigned long,DialogInfo> *m_currElement;
};


struct HashIterator<unsigned long,DialogInfo,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,DialogInfo> *,0> m_iter;
};


struct HashTable<unsigned long,DialogInfo,0>
{
  HashTable<unsigned long,DialogInfo,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,DialogInfo> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,DialogInfo,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,DialogInfo,0> *this, unsigned int);
};


struct ListIterator<DialogInfo>
{
  ListIterator<DialogInfo>Vtbl *vfptr;
  ListNode<DialogInfo> *_current;
  List<DialogInfo> *_list;
};


struct ListIterator<DialogInfo>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<DialogInfo> *this, unsigned int);
};


struct ListNode<DialogInfo>
{
  DialogInfo data;
  ListNode<DialogInfo> *next;
  ListNode<DialogInfo> *prev;
};


struct List<DialogInfo>
{
  List<DialogInfo>Vtbl *vfptr;
  ListNode<DialogInfo> *_head;
  ListNode<DialogInfo> *_tail;
  unsigned int _num_elements;
};


struct List<DialogInfo>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<DialogInfo> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> **m_buckets;
  HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *m_hashNext;
};


struct HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *>
{
  void (__cdecl *m_data)(PropertyCollection *);
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *,0> *m_currHashTable;
  HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> **m_currBucket;
  HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *m_currElement;
};


struct HashIterator<unsigned long,void (__cdecl*)(PropertyCollection const &),0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *,0> m_iter;
};


struct HashTable<unsigned long,void (__cdecl*)(PropertyCollection const &),0>
{
  HashTable<unsigned long,void (__cdecl*)(PropertyCollection const &),0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,void (__cdecl*)(PropertyCollection const &)> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,void (__cdecl*)(PropertyCollection const &),0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,void (__cdecl*)(PropertyCollection const &),0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *,0>Vtbl *vfptr;
  HashTableData<unsigned long,List<DialogInfo> > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,List<DialogInfo> > **m_buckets;
  HashTableData<unsigned long,List<DialogInfo> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,List<DialogInfo> > *m_hashNext;
};


struct HashTableData<unsigned long,List<DialogInfo> > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *>
{
  List<DialogInfo> m_data;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *,0> *m_currHashTable;
  HashTableData<unsigned long,List<DialogInfo> > **m_currBucket;
  HashTableData<unsigned long,List<DialogInfo> > *m_currElement;
};


struct HashIterator<unsigned long,List<DialogInfo>,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *,0> m_iter;
};


struct HashTable<unsigned long,List<DialogInfo>,0>
{
  HashTable<unsigned long,List<DialogInfo>,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<DialogInfo> > *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,List<DialogInfo>,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,List<DialogInfo>,0> *this, unsigned int);
};


struct DialogFactory
{
};


struct TextTag_IID : TextTag
{
  unsigned int m_IID;
};


struct TextTag_IIDEnum : TextTag
{
  unsigned int m_IID;
  unsigned int m_enum;
};


struct TextTag_IIDString : TextTag
{
  unsigned int m_IID;
  PStringBase<unsigned short> m_string;
};


struct TextTag_DID : TextTag
{
  IDClass<_tagDataID,32,0> m_DID;
};


struct GamePlayUI : UIMainFramework
{
};


struct OrderHdr : PackObj
{
  unsigned int stamp_;
};


struct gmGlobalEventHandler : GlobalEventHandler
{
};


struct CShortCutData : ShortCutData
{
};


struct PackableLLIter<AC1Legacy_PStringBase<char> >
{
  PackableLLIter<AC1Legacy_PStringBase<char> >Vtbl *vfptr;
  PackableLLNode<AC1Legacy_PStringBase<char> > *_current;
};


struct PackableLLIter<AC1Legacy_PStringBase<char> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<AC1Legacy_PStringBase<char> > *this, unsigned int);
};


struct PackableLLIter<Enchantment>
{
  PackableLLIter<Enchantment>Vtbl *vfptr;
  PackableLLNode<Enchantment> *_current;
};


struct PackableLLIter<Enchantment>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<Enchantment> *this, unsigned int);
};


struct JumpPack : PackObj
{
  float extent;
  AC1Legacy_Vector3 velocity;
  Position position;
  unsigned __int16 instance_timestamp;
  unsigned __int16 server_control_timestamp;
  unsigned __int16 teleport_timestamp;
  unsigned __int16 force_position_ts;
};


struct TurnEventPack : PackObj
{
  float relative_degrees;
};


struct PackableLLIter<ItemProfile>
{
  PackableLLIter<ItemProfile>Vtbl *vfptr;
  PackableLLNode<ItemProfile> *_current;
};


struct PackableLLIter<ItemProfile>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<ItemProfile> *this, unsigned int);
};


struct UIGlobals
{
};


struct __declspec(align(8)) gmUIElement_BurdenIndicator : UIElement_Button, gmNoticeHandler
{
};


struct gmUIElement_EffectsIndicator : UIElement_Button, gmNoticeHandler
{
  unsigned int m_eEffectTypeIndicator;
};


struct gmUIElement_LinkStatusIndicator : UIElement_Button, gmNoticeHandler
{
  unsigned int m_eLinkState;
  long double m_ttLastUpdate;
  long double m_ttLastFlash;
};


struct __declspec(align(8)) gmUIElement_MiniGameIndicator : UIElement_Button, gmNoticeHandler
{
};


struct gmUIElement_PortalStormIndicator : UIElement_Button, gmNoticeHandler
{
  long double m_ttLastPortalStormWarningTime;
};


struct __declspec(align(8)) gmUIElement_VitaeIndicator : UIElement_Button, gmNoticeHandler
{
};


struct UIElement_SmartBoxWrapper : UIElement_Field, gmNoticeHandler
{
  unsigned int m_cFlipCount;
  long double m_timeNextFlip;
  unsigned int m_iidUnderMouse;
  unsigned int m_iidSelectedObject;
  UIElement_SmartBoxWrapper_SearchReason m_SearchReason;
  bool m_fMouseMovementActive;
  bool m_fMouseMovementInProgress;
  SECTION_3D m_CurrentSection;
  unsigned int m_dropItemID;
  unsigned int m_targetMode;
  UIElement *m_dragIcon;
};


struct LongHash<IconData> : HashBase<unsigned long>
{
};


struct IconData : LongHashData
{
  IDClass<_tagDataID,32,0> m_idIcon;
  IDClass<_tagDataID,32,0> m_idCustomOverlay;
  IDClass<_tagDataID,32,0> m_idCustomUnderlay;
  ITEM_TYPE m_itemType;
  unsigned int m_effects;
  Graphic *m_pIcon;
  Graphic *m_pDragIcon;
};


struct WCategoryGrabber : DBObjGrabber<DualEnumIDMap>
{
};


struct UIElement_UIItem : UIElement_Field, gmNoticeHandler
{
  unsigned int itemID;
  unsigned int spellID;
  int containerDisplay;
  ACCWeenieObject *weenObj;
  unsigned int effects;
  int waiting;
  int selected;
  int isOpenable;
  int isContainer;
  int isContainerHolder;
  int valid;
  int dragOverState;
  int unghostable;
  int isSlot;
  int shortcutState;
  int m_sellState;
  int m_tradeState;
  bool m_selectable;
  int m_shortcutNum;
  int m_delayedShortcutNum;
  bool m_shortcutGhosted;
  int m_quantity;
  int openState;
  long double m_heartbeatInterval;
  long double m_lastHeartbeat;
  UIElement *m_elem_Icon;
  UIElement *m_elem_Icon_Overlays;
  UIElement *m_elem_Icon_Selected;
  UIElement *m_elem_Icon_Ghosted;
  UIElement *m_elem_Icon_ShortcutNum;
  UIElement *m_elem_Icon_SellState;
  UIElement *m_elem_Icon_TradeState;
  UIElement *m_elem_Icon_OpenContainer;
  UIElement *m_elem_Icon_DragAccept;
  UIElement_Meter *m_elem_Icon_CapacityBar;
  UIElement_Meter *m_elem_Icon_StructureBar;
  UIElement_Text *m_elem_Icon_Quantity;
  UIElement_Text *m_elem_Text;
  UIElement *m_dragIcon;
  UIElement *m_elem_Icon_Cooldown_10;
  UIElement *m_elem_Icon_Cooldown_20;
  UIElement *m_elem_Icon_Cooldown_30;
  UIElement *m_elem_Icon_Cooldown_40;
  UIElement *m_elem_Icon_Cooldown_50;
  UIElement *m_elem_Icon_Cooldown_60;
  UIElement *m_elem_Icon_Cooldown_70;
  UIElement *m_elem_Icon_Cooldown_80;
  UIElement *m_elem_Icon_Cooldown_90;
  UIElement *m_elem_Icon_Cooldown_100;
};


struct List<UIElement_UIItem *>
{
  List<UIElement_UIItem *>Vtbl *vfptr;
  ListNode<UIElement_UIItem *> *_head;
  ListNode<UIElement_UIItem *> *_tail;
  unsigned int _num_elements;
};


struct UIElement_ItemList : UIElement_ListBox, gmNoticeHandler
{
  unsigned int parentContainerID;
  unsigned int openItemID;
  unsigned int removedItemID;
  UIElement_ItemList *childList;
  UIElement_ItemList *parentList;
  bool containerList;
  bool vendorItemList;
  bool shortcutList;
  bool salvageList;
  UIElement_UIItem *m_pendingItem;
  int m_cellW;
  int m_cellH;
  List<UIElement_UIItem *> m_listUIItemCache;
  ItemListDragHandler *m_dragHandler;
  bool m_singleSelection;
  bool m_dragScrollItemScrolling;
  bool m_dragScrollSpellScrolling;
  bool m_dragScrollVertical;
  bool m_dragScrollHorizontal;
  int m_dragScrollMarginWidth;
  int m_dragScrollMarginHeight;
  bool m_inDragScrollRegion;
  int m_dragScrollJumpDistance;
  float m_dragScrollDelay;
  long double m_nextDragScrollTime;
};


struct List<UIElement_UIItem *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<UIElement_UIItem *> *this, unsigned int);
};


struct ListNode<UIElement_UIItem *>
{
  UIElement_UIItem *data;
  ListNode<UIElement_UIItem *> *next;
  ListNode<UIElement_UIItem *> *prev;
};


struct ItemListDragHandler
{
  ItemListDragHandlerVtbl *vfptr;
};


struct ItemListDragHandlerVtbl
{
  bool (__thiscall *OnItemListDragOver)(ItemListDragHandler *this, UIElement_UIItem *, unsigned int, unsigned int, DropItemFlags);
};


struct ListIterator<UIElement_UIItem *>
{
  ListIterator<UIElement_UIItem *>Vtbl *vfptr;
  ListNode<UIElement_UIItem *> *_current;
  List<UIElement_UIItem *> *_list;
};


struct ListIterator<UIElement_UIItem *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<UIElement_UIItem *> *this, unsigned int);
};


struct gmCG3DView
{
  CPlayerSystem *m_pPlayerSystem;
  UIElement_Viewport *m_pViewport;
  CPhysicsObj *m_pPlayerObject;
  CPhysicsObj *m_pbgObject;
  IDClass<_tagDataID,32,0> m_didAnimation;
  IDClass<_tagDataID,32,0> m_didAnimationRest;
  IDClass<_tagDataID,32,0> m_didAnimArray[5];
  long double m_dLastAnimTime;
  IDClass<_tagDataID,32,0> m_bgSetupID;
  IDClass<_tagDataID,32,0> m_alternateSetupID;
  float m_fHeading;
  IDClass<_tagDataID,32,0> m_SetupID;
  Vector3 m_vectPosition;
  Vector3 m_vectDirection;
};


struct gmBarberUI_tagChoices
{
  int iNumChoices;
  int iCurrentChoice;
  int iNumColors;
  int iCurrentColor;
  long double dShade;
};


struct gmBarberUI_tagColorWheel
{
  unsigned int iRed;
  unsigned int iGreen;
  unsigned int iBlue;
  UIElement *pColor;
  UIElement *pPointer;
  Graphic *pGraphic;
  gmBarberUI_EParts ePart;
};


struct gmBarberUI : UIElement_Field, gmNoticeHandler
{
  CPlayerSystem *m_pPlayerSystem;
  UIElement_Button *m_pRotateClockButton;
  UIElement_Button *m_pRotateCounterClockButton;
  UIElement_Button *m_pHairSpin;
  UIElement_Button *m_pEyesSpin;
  UIElement_Button *m_pNoseSpin;
  UIElement_Button *m_pMouthSpin;
  UIElement_Button *m_pSkinSpin;
  UIElement_Button *m_pApplyButton;
  UIElement_Button *m_pCancelButton;
  UIElement_Button *m_pOption1Checkbox;
  UIElement_Button *m_pOption2Checkbox;
  UIElement_Button *m_pOption3Checkbox;
  UIElement_Scrollbar *m_pShadeScroll;
  UIElement *m_pFaceChoices;
  UIElement *m_pGradCircle;
  Graphic *m_pGradGraphic;
  Graphic *m_pGradPlug;
  UIElement *m_pCurSelection;
  UIElement_Viewport *m_pViewport;
  gmCG3DView *m_p3DView;
  int m_iCurColor;
  int m_iPartIndex;
  int m_iHoldheadgear;
  bool m_bRotating;
  float m_fCurHeading;
  float m_fTargHeading;
  long double m_dAnimStartTime;
  long double m_dAnimDuration;
  long double m_dLastRotateTime;
  long double m_dRotationPerSec;
  gmBarberUI_ERotateDirection m_eRotateDir;
  gmBarberUI_tagChoices m_tChoices[9];
  gmBarberUI_EParts m_eCurPart;
  gmBarberUI_tagColorWheel m_tColorWheel[9];
};


struct IOptionChangeHandler
{
  IOptionChangeHandlerVtbl *vfptr;
};


struct IOptionChangeHandlerVtbl
{
  void (__thiscall *OnOptionChanged)(IOptionChangeHandler *this, UIOption *);
  void (__thiscall *OnOptionChangeConfirmed)(IOptionChangeHandler *this, UIOption *, bool);
};


const struct UIOption : gmNoticeHandler
{
  bool m_confirmChange;
  bool m_bDelayConfirmation;
  unsigned int m_dialogContext;
  bool m_shouldReloadOptions;
  bool m_shouldRefreshOptionsPanel;
  bool (__cdecl *m_noticeFuncPtr)();
  IOptionChangeHandler *m_pOCH;
  unsigned int m_nUserData;
};


struct _STL_pair<unsigned long,_STL_pair<QualifiedControl,unsigned long> >
{
  unsigned int first;
  _STL_pair<QualifiedControl,unsigned long> second;
};


struct SmartArray<_STL_pair<unsigned long,_STL_pair<QualifiedControl,unsigned long> >,1>
{
  _STL_pair<unsigned long,_STL_pair<QualifiedControl,unsigned long> > *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<UIElement_Button *,1>
{
  UIElement_Button **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct UIOption_ActionKeyMap : UIOption, UIElement_Text
{
  UIElement_Button *m_buttonClear;
  SmartArray<UIElement_Button *,1> m_aKeyButtons;
  unsigned int m_idInputAction;
  unsigned int m_idInputMap;
  List<QualifiedControl> m_qclDefaults;
  List<QualifiedControl> m_qclSaved;
  List<QualifiedControl> m_qclCurrent;
  QualifiedControl m_qcBindingBeingChanged;
  int m_nBindingBeingChanged;
  unsigned int m_ctxtDialog;
  unsigned int m_ctxtOverwriteBindingDialog;
  unsigned int m_ctxtCantOverwriteBindingDialog;
  int m_skipConfirmation;
};


struct SmartArray<UIOption *,1>
{
  UIOption **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct OptionPage : UIElement, IOptionChangeHandler
{
  SmartArray<UIOption *,1> m_UIOptionArray;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,UIElement_ListBox *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,UIElement_ListBox *> **m_buckets;
  HashTableData<unsigned long,UIElement_ListBox *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,UIElement_ListBox *,0>
{
  HashTable<unsigned long,UIElement_ListBox *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,UIElement_ListBox *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,UIElement_ListBox *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,UIElement_ListBox *> *m_hashNext;
};


struct HashTableData<unsigned long,UIElement_ListBox *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *>
{
  UIElement_ListBox *m_data;
};


struct gmKeyboardUI : OptionPage, gmNoticeHandler
{
  UIElement_Button *m_pKeyboardLoadKeymapButton;
  UIElement_Button *m_pKeyboardSaveKeymapButton;
  UIElement_Text *m_pKeyboardCurrentKeymapLabel;
  UIElement_Button *m_pKeyboardResetToDefaultsButton;
  UIElement_Button *m_pKeyboardRevertToSavedButton;
  UIElement_Button *m_pKeyboardOKButton;
  UIElement_Button *m_pKeyboardCancelButton;
  HashTable<unsigned long,UIElement_ListBox *,0> m_hashMappingListBoxes;
  unsigned int m_uiLoadKeymapDialogContext;
  unsigned int m_uiSaveKeymapDialogContext;
  unsigned int m_uiCantOverwriteReadOnlyKeymapDialogContext;
  unsigned int m_uiOverwriteKeymapDialogContext;
  List<PStringBase<char> > m_listCachedKeymapFilenames;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *,0> *m_currHashTable;
  HashTableData<unsigned long,UIElement_ListBox *> **m_currBucket;
  HashTableData<unsigned long,UIElement_ListBox *> *m_currElement;
};


struct HashIterator<unsigned long,UIElement_ListBox *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,UIElement_ListBox *> *,0> m_iter;
};


struct gmPowerbarUI : UIElement_Field, gmNoticeHandler
{
  PowerBarMode m_pbmCurrentMode;
  UIElement_Field *m_RecklessnessField;
};


struct RadarInfo
{
  ACCWeenieObject *object;
  RGBAColor color;
  RadarBlipShape shape;
};


struct SmartArray<RadarInfo,1>
{
  RadarInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) gmRadarUI : UIElement_Field, gmNoticeHandler, QualityChangeHandler
{
  float m_fRadarRange;
  SmartArray<RadarInfo,1> m_aRadarInfos;
  unsigned int m_iidObjectUnderMouse;
  float m_fPlayerHeading;
  Vector2 m_vecCenterPoint;
  int m_nRadarRadius;
  float m_fNorthTokenMagnitude;
  float m_fEastTokenMagnitude;
  float m_fSouthTokenMagnitude;
  float m_fWestTokenMagnitude;
  UIElement *m_pNorthToken;
  UIElement *m_pEastToken;
  UIElement *m_pSouthToken;
  UIElement *m_pWestToken;
  UIElement *m_pCoordinateContainerField;
  UIElement_Text *m_pCombinedCoordsText;
  UIElement_Text *m_pXCoordText;
  UIElement_Text *m_pYCoordText;
  UIElement *m_pLockUIButton;
  UIElement *m_pDragButton;
  long double m_ttNextUpdateTime;
  long double m_fCurXCoord;
  long double m_fCurYCoord;
  unsigned int m_eWindowID;
};


struct SmartArray<RenderSurface *,1>
{
  RenderSurface **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) VividTargetIndicator : gmNoticeHandler, QualityChangeHandler
{
  unsigned int m_idSelectedTarget;
  RGBAColor m_clrSelectedObjectColor;
  unsigned int m_vtiCurrent;
  RGBAColor m_clrOnScreen;
  RGBAColor m_clrOffScreen;
  SmartArray<RenderSurface *,1> m_rgSourceImages;
  UIElement *m_pOffScreen;
  UIElement *m_pOnScreen;
  SmartArray<UIElement *,1> m_rgOnScreenCorners;
  bool m_bDisplayOn;
  bool m_bEnabled;
};


struct __declspec(align(8)) gmSmartBoxUI : UIElement_SmartBoxWrapper
{
  SmartBox *m_pSmartBox;
  CPhysicsObj *teleportObj;
  long double gameVDist;
  TeleportAnimState teleportAnimState;
  long double teleportRotationStartTime;
  long double teleportRotationDuration;
  long double teleportRotationStartAngle;
  long double teleportRotationEndAngle;
  long double teleportTransitionStartTime;
  long double teleportRotationCurAngle;
  float teleportCurVDist;
  UIElement_Text *m_pFPSDisplay;
  UIElement_Viewport *m_pPortalSpace;
  VividTargetIndicator m_vti;
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
};


struct SmartArray<StringInfo,1>
{
  StringInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct gmSpewBoxUI : UIElement_Field, gmNoticeHandler
{
  UIElement_ListBox *m_listBox;
  SmartArray<StringInfo,1> m_spewBoxPending;
  int m_maxConcurrentItems;
};


struct __declspec(align(4)) gmCombatPanelUI_PanelChildInfo
{
  UIElement *child;
  unsigned int panelID;
  bool bShouldBeDefault;
};


struct SmartArray<gmCombatPanelUI_PanelChildInfo,1>
{
  gmCombatPanelUI_PanelChildInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct gmCombatPanelUI : UIElement_Field, gmNoticeHandler
{
  SmartArray<gmCombatPanelUI_PanelChildInfo,1> m_childrenInfoArray;
  UIElement *m_currentlyShownPanel;
  UIElement *m_pDefaultPanel;
};


struct gmFloatyCombatPanelUI : gmCombatPanelUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct __declspec(align(4)) gmEnvPanelUI_PanelChildInfo
{
  UIElement *child;
  unsigned int panelID;
  bool bShouldBeDefault;
};


struct SmartArray<gmEnvPanelUI_PanelChildInfo,1>
{
  gmEnvPanelUI_PanelChildInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct gmEnvPanelUI : UIElement_Field, gmNoticeHandler
{
  SmartArray<gmEnvPanelUI_PanelChildInfo,1> m_childrenInfoArray;
  UIElement *m_currentlyShownPanel;
  UIElement *m_pDefaultPanel;
};


struct gmFloatyEnvPanelUI : gmEnvPanelUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct InfoRegion : QualityChangeHandler
{
  StatType m_StatType;
  UIElement *m_pElement;
  UIElement_Text *m_pLabelText;
  UIElement_Text *m_pValueText;
};


struct AttributeInfoRegion : InfoRegion
{
  unsigned int m_Attribute;
};


struct __declspec(align(4)) Attribute2ndInfoRegion : InfoRegion
{
  unsigned int m_CurAttribute;
  unsigned int m_MaxAttribute;
  bool m_bShowPercent;
};


struct SkillInfoRegion : InfoRegion
{
  unsigned int m_Skill;
  SKILL_ADVANCEMENT_CLASS m_AdvancementClass;
};


struct EffectInfoRegion : InfoRegion
{
  unsigned int m_Spell;
};


struct ExamineSubUI
{
  ExamineSubUIVtbl *vfptr;
  unsigned int cur_objid;
  ACCWeenieObject *cur_weenobj;
  AppraisalProfile cur_prof;
  gmExaminationUI *m_pParentElement;
};


struct ExamineSubUIVtbl
{
  void (__thiscall *Init)(ExamineSubUI *this, unsigned int, ACCWeenieObject *);
  void (__thiscall *SetAppraiseInfo)(ExamineSubUI *this, AppraisalProfile *, int);
  void (__thiscall *Show)(ExamineSubUI *this, bool);
};


struct gmExaminationUI : UIElement_Field, gmNoticeHandler
{
  ExamineSubUI *m_activeUI;
  ItemExamineUI *m_itemUI;
  CreatureExamineUI *m_creatureUI;
  CharExamineUI *m_charUI;
  SpellExamineUI *m_spellUI;
  UIElement_Text *m_displayedNameText;
  unsigned int awaiting_appraisal_ID;
  unsigned int current_appraisal_ID;
  bool m_examineNewlySelectedItem;
  long double m_timeNextUpdate;
};


struct ItemExamineUI : ExamineSubUI
{
  UIElement *m_itemExamineBaseField;
  UIElement_Text *m_itemValueText;
  UIElement_Text *m_itemBurdenText;
  UIElement_Text *m_itemDisplayText;
  UIElement_Text *m_itemInscriptionText;
  UIElement_Text *m_itemInscriptionSignatureText;
  UIElement *m_itemInscriptionBackground;
  UIElement *m_itemIcon;
  AC1Legacy_PStringBase<char> m_scribe_name;
  AC1Legacy_PStringBase<char> m_scribe_account;
  AC1Legacy_PStringBase<char> m_old_inscription;
  int mod_high_font;
  int mod_low_font;
};


struct BasicCreatureExamineUI : ExamineSubUI
{
  UIElement *m_basicCreatureExamineBaseField;
  UIElement *m_creatureInfoSubPanel;
  UIElement *m_characterInfoSubPanel;
  UIElement_Text *m_levelValueText;
  UIElement_Viewport *m_pPaperDoll;
  CPhysicsObj *m_p3DObj;
  UIElement_ListBox *m_extraInfoList;
};


struct CreatureExamineUI : BasicCreatureExamineUI
{
  UIElement_Text *m_creatureDisplayName;
};


struct CharExamineUI : BasicCreatureExamineUI
{
  UIElement_Text *m_displayText_Heritage;
  UIElement_Text *m_displayText_Profession;
  UIElement_Text *m_displayText_PlayerKiller;
  UIElement_Text *m_displayText_AllegianceName;
};


struct SpellExamineUI : ExamineSubUI
{
  UIElement *m_spellExamineBaseField;
  UIElement_Text *m_magicSchoolText;
  UIElement_Text *m_spellManaText;
  UIElement_Text *m_spellRangeText;
  UIElement_Text *m_spellDurationText;
  UIElement_Text *m_spellDisplayText;
  UIElement *m_spellIcon;
  UIElement_ListBox *m_formulaListBox;
  unsigned int cur_spellid;
  int m_componentListX;
  int m_componentListW;
};


struct SmartArray<InfoRegion *,1>
{
  InfoRegion **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) gmFloatyExaminationUI : gmExaminationUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct gmIndicatorsUI : UIElement_Field, gmNoticeHandler
{
};


struct gmFloatyIndicatorsUI : gmIndicatorsUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct ChatInterface : gmNoticeHandler, UIElement_Field
{
  unsigned int m_eWindowID;
  float m_fDefaultOpacity;
  float m_fActiveOpacity;
  float m_fCurrentOpacity;
  UIElement_Text *m_chatEntry;
  UIElement_Text *m_chatLog;
  UIElement *m_chatNewNonVisibleTextIndicator;
  unsigned __int64 m_llTextTypeFilter;
  UIElement_Text *m_pChatTargetButtonText;
  PStringBaseArray<unsigned short> m_InputHistory;
  unsigned int m_LastInputHistoryPos;
  ClientCommunicationSystem *m_pCCS;
};


struct SmartArray<UIElement_Text *,1>
{
  UIElement_Text **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct gmMainChatUI : ChatInterface
{
  UIElement_Text *m_pSquelchToggleButton;
  SmartArray<UIElement_Text *,1> m_aTalkFocusButtons;
  UIElement_Text *m_pChatTargetButtonText;
  bool m_Maximized;
  int m_OldY;
  int m_OldHeight;
};


struct gmFloatyMainChatUI : gmMainChatUI
{
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct gmPanelUI_PanelChildInfo
{
  UIElement *child;
  unsigned int panelID;
};


struct SmartArray<gmPanelUI_PanelChildInfo,1>
{
  gmPanelUI_PanelChildInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) gmPanelUI : UIElement_Field, gmNoticeHandler
{
  SmartArray<gmPanelUI_PanelChildInfo,1> m_childrenInfoArray;
  UIElement *m_currentlyShownPanel;
  UIElement *m_previouslyShownPanel;
  UIElement *m_pPanelPagesFrame;
  bool m_bStretchMode;
};


struct gmFloatyPanelUI : gmPanelUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct gmFloatyPowerBarUI : gmPowerbarUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct gmVitalsUI : UIElement_Field, gmNoticeHandler, QualityChangeHandler
{
  UIElement_Meter *m_pHealthMeter;
  UIElement_Meter *m_pStaminaMeter;
  UIElement_Meter *m_pManaMeter;
  UIElement_Text *m_pHealthLabel;
  UIElement_Text *m_pStaminaLabel;
  UIElement_Text *m_pManaLabel;
};


struct gmFloatySideVitalsUI : gmVitalsUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct PanelButtonInfo
{
  UIElement *button;
  unsigned int panelID;
};


struct SmartArray<PanelButtonInfo,1>
{
  PanelButtonInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<UIElement_ItemList *,1>
{
  UIElement_ItemList **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct gmToolbarUI : UIElement_Field, gmNoticeHandler, ItemListDragHandler
{
  SmartArray<PanelButtonInfo,1> m_buttonInfoArray;
  UIElement *m_pUseObjectButton;
  UIElement *m_pExamineObjectButton;
  UIElement *m_pSelObjectField;
  UIElement_Text *m_pSelObjectName;
  UIElement_Meter *m_pSelObjectHealthMeter;
  UIElement_Meter *m_pSelObjectManaMeter;
  UIElement_Text *m_pStackSizeEntryBox;
  UIElement_Scrollbar *m_pStackSizeSlider;
  UIElement *m_pInventoryButtonDragOverlay;
  unsigned int m_iidSelectedObject;
  SmartArray<UIElement_ItemList *,1> m_shortcutSlots;
  unsigned int m_lastShortcutNumDragged;
  bool m_bToolbarActive;
  unsigned int m_idAmmoObject;
};


struct gmFloatyToolbarUI : gmToolbarUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct gmFloatyVitalsUI : gmVitalsUI
{
  unsigned int m_eWindowID;
  UIElement *m_pTopBorder;
  UIElement *m_pLeftBorder;
  UIElement *m_pBottomBorder;
  UIElement *m_pRightBorder;
  UIElement *m_pTopLeftCorner;
  UIElement *m_pTopRightCorner;
  UIElement *m_pBottomLeftCorner;
  UIElement *m_pBottomRightCorner;
  UIElement *m_pTopBorder_Locked;
  UIElement *m_pLeftBorder_Locked;
  UIElement *m_pBottomBorder_Locked;
  UIElement *m_pRightBorder_Locked;
  UIElement *m_pTopLeftCorner_Locked;
  UIElement *m_pTopRightCorner_Locked;
  UIElement *m_pBottomLeftCorner_Locked;
  UIElement *m_pBottomRightCorner_Locked;
};


struct gmFloatyChatUI : ChatInterface
{
};


struct gmAdminQualitiesUI : UIElement_Field, gmNoticeHandler
{
};


struct AttributeQualityBlob
{
  unsigned int m_eQuality;
  int m_nSavedValue;
  int m_nCurValue;
  UIElement_Text *m_pCurValueText;
};


struct IntegerQualityBlob
{
  unsigned int m_eQuality;
  int m_nSavedValue;
  int m_nCurValue;
  UIElement_Text *m_pCurValueText;
};


struct __declspec(align(8)) LongIntegerQualityBlob
{
  unsigned int m_eQuality;
  __int64 m_nSavedValue;
  __int64 m_nCurValue;
  UIElement_Text *m_pCurValueText;
};


struct __declspec(align(4)) BoolQualityBlob
{
  unsigned int m_eQuality;
  bool m_bSavedValue;
  bool m_bCurValue;
};


struct __declspec(align(8)) FloatQualityBlob
{
  unsigned int m_eQuality;
  long double m_fSavedValue;
  long double m_fCurValue;
  UIElement_Text *m_pCurValueText;
};


struct StringQualityBlob
{
  unsigned int m_eQuality;
  AC1Legacy_PStringBase<char> m_strSavedValue;
  AC1Legacy_PStringBase<char> m_strCurValue;
  UIElement_Text *m_pCurValueText;
};


struct DataIDQualityBlob
{
  unsigned int m_eQuality;
  IDClass<_tagDataID,32,0> m_didSavedValue;
  IDClass<_tagDataID,32,0> m_didCurValue;
  UIElement_Text *m_pCurValueText;
};


struct InstanceIDQualityBlob
{
  unsigned int m_eQuality;
  unsigned int m_iidSavedValue;
  unsigned int m_iidCurValue;
  UIElement_Text *m_pCurValueText;
};


struct SkillQualityBlob
{
  unsigned int m_eQuality;
  Skill m_skillSavedValue;
  Skill m_skillCurValue;
  UIElement_Menu *m_pAdvancementMenu;
  UIElement_Text *m_pCurInitLevelText;
};


struct PositionQualityBlob
{
  unsigned int m_eQuality;
  Position m_posSavedValue;
  Position m_posCurValue;
  UIElement_Text *m_pCurValueText;
};


struct BodyPartQualityBlob
{
  unsigned int m_eQuality;
  BodyPart m_partSavedValue;
  BodyPart m_partCurValue;
  UIElement_Menu *m_pDamageTypeMenu;
  UIElement_Text *m_pCurDamage;
  UIElement_Text *m_pCurDamageVariance;
  UIElement_Text *m_pSlashArmorValue;
  UIElement_Text *m_pPierceArmorValue;
  UIElement_Text *m_pBludgeonArmorValue;
  UIElement_Text *m_pColdArmorValue;
  UIElement_Text *m_pFireArmorValue;
  UIElement_Text *m_pAcidArmorValue;
  UIElement_Text *m_pElectricArmorValue;
};


struct gmCombatUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Field *m_RecklessnessField;
};


struct gmExternalContainerUI : UIElement_Field, gmNoticeHandler, ObjectRangeHandler, ItemListDragHandler
{
  UIElement_ItemList *m_topContainer;
  UIElement_ItemList *m_containerList;
  UIElement_ItemList *m_itemList;
  unsigned int groundObjectID;
};


struct gmSalvageUI : UIElement_Field, gmNoticeHandler, ItemListDragHandler
{
  UIElement_ItemList *m_salvageList;
  UIElement *m_salvageButton;
  unsigned int m_toolID;
  unsigned int m_material;
};


struct gmSecureTradeUI : UIElement_Field, gmNoticeHandler, ObjectRangeHandler, ItemListDragHandler
{
  UIElement_Button *m_pTradeButton;
  UIElement_Text *m_pSelfPlayerName;
  UIElement_Text *m_pSelfTotalItemsLabel;
  UIElement_ItemList *m_pSelfItemsList;
  UIElement *m_pOtherTradeStatusIndicator;
  UIElement_Text *m_pOtherPlayerName;
  UIElement_Text *m_pOtherTotalItemsLabel;
  UIElement_ItemList *m_pOtherItemsList;
  UIElement_Button *m_pClearAllItemsButton;
  unsigned int splitItemID;
  IDClass<_tagDataID,32,0> splitItemClassID;
  unsigned int splitItemStackSize;
};


struct gmSlumlordUI : UIElement_Panel, gmNoticeHandler, ObjectRangeHandler, ItemListDragHandler
{
  unsigned int m_iidOwner;
  HouseProfile *m_pHouseProfile;
  HouseProfile *m_pBackupHouseProfile;
  HouseOp m_eCurrentHouseOp;
  UIElement_ItemList *m_pCurItemList;
  UIElement_Text *m_pBuyRequirementsText;
  UIElement_Text *m_pBuyHouseOwnerText;
  UIElement_ItemList *m_pBuyItemList;
  UIElement_Button *m_pBuyButton;
  UIElement_Text *m_pRentRequirementsText;
  UIElement_Text *m_pRentHouseOwnerText;
  UIElement_ItemList *m_pRentItemList;
  UIElement_Button *m_pRentButton;
  unsigned int m_uiHousePurchaseDialogContext;
  unsigned int m_uiRentPaymentByProxyDialogContext;
};


struct __declspec(align(4)) SpellCastSubMenu : ItemListDragHandler
{
  UIElement_ItemList *m_spellItemList;
  UIElement *m_spellTabElement;
  unsigned int m_selectedSpellID;
  unsigned int m_numSpells;
  int m_tabIndex;
  bool m_endowmentSelected;
};


struct gmSpellcastingUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Panel *m_spellcastPanel;
  UIElement_Text *m_spellName;
  UIElement_Button *m_spellcastButton;
  UIElement *m_endowmentIcon;
  UIElement *m_endowmentIcon_Overlay;
  UIElement *m_endowmentIcon_Underlay;
  UIElement *m_endowmentIcon_Selected;
  UIElement *m_spellcastBackground;
  bool m_endowmentPresent;
  unsigned int m_endowmentItemID;
  unsigned int m_endowmentSpellID;
  SpellCastSubMenu m_subMenus[8];
};


struct VendorSubUI
{
  VendorSubUIVtbl *vfptr;
  gmVendorUI *m_parent;
};


struct VendorSubUIVtbl
{
  void (__thiscall *OpenVendor)(VendorSubUI *this, bool);
  void (__thiscall *CloseVendor)(VendorSubUI *this);
  void (__thiscall *HandleSetSelectedItem)(VendorSubUI *this, unsigned int, unsigned int);
};


struct gmVendorUI : UIElement_Field, gmNoticeHandler, QualityChangeHandler, ObjectRangeHandler
{
  UIElement_Panel *m_vendorPanel;
  unsigned int shopVendorID;
  VendorProfile *shopVendorProfile;
  PackableList<ItemProfile> *shopItemProfileList;
  PackableList<ItemProfile> m_buyList;
  PackableList<ItemProfile> m_sellList;
  VendorItemsUI *m_itemsUI;
  VendorBuyUI *m_buyUI;
  VendorSellUI *m_sellUI;
  int m_totalValue;
  int m_last_sale;
};


struct VendorItemsUI : VendorSubUI
{
  UIElement_ItemList *m_shopList;
  UIElement_Menu *m_itemTypeMenu;
  UIElement_Text *m_itemNameText;
  UIElement_Text *m_itemCostText;
  UIElement *m_buyButton;
  UIElement *m_addButton;
  int m_numTypeFilters;
};


struct VendorBuyUI : VendorSubUI
{
  UIElement_ItemList *m_buyShopList;
  UIElement_Text *m_buyListText;
  UIElement_Text *m_buyPurseText;
  UIElement *m_buyItemButton;
  UIElement *m_buyAllButton;
  UIElement *m_buyClearItemButton;
  UIElement *m_buyClearListButton;
  int m_transactionValue;
};


struct __declspec(align(4)) VendorSellUI : VendorSubUI, ItemListDragHandler
{
  UIElement_ItemList *m_sellShopList;
  UIElement_Text *m_sellListText;
  UIElement_Text *m_sellPurseText;
  UIElement *m_sellItemButton;
  UIElement *m_sellAllButton;
  UIElement *m_sellClearItemButton;
  UIElement *m_sellClearListButton;
  int m_transactionValue;
  UIElement_UIItem *m_splitItem;
  IDClass<_tagDataID,32,0> m_splitItemClassID;
  __int16 m_splitItemStackSize;
};


struct gmAbuseUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Text *m_pNameBox;
  UIElement_Text *m_pEntryBox;
  UIElement_Text *m_pResultText;
  UIElement_Button *m_pContinueButton;
};


struct gmBookUI : UIElement_Field, gmNoticeHandler, ObjectRangeHandler
{
  UIElement *m_nextButton;
  UIElement *m_prevButton;
  UIElement_Text *m_titleText;
  UIElement_Text *m_pageText;
  UIElement_Menu *m_pageMenu;
  UIElement_Text *m_menuSelectionPageNumText;
  unsigned int bookID;
  int maxNumPages;
  PageDataList *pageDataList;
  int curPage;
  int requestPending;
  AC1Legacy_PStringBase<char> inscription;
  unsigned int scribeID;
  AC1Legacy_PStringBase<char> scribeName;
};


struct gmCharacterInfoUI : UIElement_Field, gmNoticeHandler, QualityChangeHandler
{
  UIElement_Text *m_pMainText;
};


struct SmartArray<EffectInfoRegion *,1>
{
  EffectInfoRegion **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) gmEffectsUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Text *m_pInfoText;
  UIElement_ListBox *m_pListBox;
  SmartArray<EffectInfoRegion *,1> m_rgTokens;
  unsigned int m_effectsUIType;
  long double m_nextDurationUpdate;
  unsigned int m_SelectedSpell;
  bool m_bNeedToRebuild;
};


struct __declspec(align(8)) gmLinkStatusUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Text *m_pMainText;
  long double m_nextUpdateTime;
  long double m_lastPingRequestTime;
  long double m_pingRoundTripTime;
  bool m_bPleaseRequestPing;
};


struct TCoord
{
  int x;
  int y;
};


struct AC1Legacy_SmartArray<TChessPiece<CBasePiece> *>
{
  TChessPiece<CBasePiece> **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct CChessLogic<CBasePiece>
{
  CChessLogic<CBasePiece>Vtbl *vfptr;
  TChessPiece<CBasePiece> *m_Board[8][8];
  AC1Legacy_SmartArray<TChessPiece<CBasePiece> *> m_Pieces[2];
  int m_CurPlayer;
  int m_bLastMoveWasCheck;
  TCoord m_EnPassantAttackSite;
  TCoord m_EnPassantVictimPos;
};


struct CChessLogic<CBasePiece>Vtbl
{
  void *(__thiscall *__vecDelDtor)(CChessLogic<CBasePiece> *this, unsigned int);
  void (__thiscall *MovePiece)(CChessLogic<CBasePiece> *this, TChessPiece<CBasePiece> *);
  void (__thiscall *AttackPiece)(CChessLogic<CBasePiece> *this, TChessPiece<CBasePiece> *, TChessPiece<CBasePiece> *);
};


struct CBasePiece
{
  IDClass<_tagDataID,32,0> m_didIcon;
};


struct TChessPiece<CBasePiece> : CBasePiece
{
  TChessPiece<CBasePiece>Vtbl *vfptr;
  ChessPieceType m_Type;
  int m_Player;
  TCoord m_CurPos;
  TCoord m_LastKnownGoodPos;
  int m_bMoved;
};


struct TChessPiece<CBasePiece>Vtbl
{
  int (__thiscall *bCanGoTo)(TChessPiece<CBasePiece> *this, int, int);
  int (__thiscall *bCanAttack)(TChessPiece<CBasePiece> *this, int, int);
  unsigned int (__thiscall *Pack)(TChessPiece<CBasePiece> *this, void **, unsigned int);
  int (__thiscall *UnPack)(TChessPiece<CBasePiece> *this, void **, unsigned int);
  unsigned int (__thiscall *GetPackSize)(TChessPiece<CBasePiece> *this);
};


struct gmMiniGameUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Button *m_pResignButton;
  UIElement_Button *m_pPassButton;
  UIElement_Button *m_pStalemateButton;
  int m_iTeam;
  unsigned int m_idCurrentGame;
  gmMiniGameUI_GameState m_state;
  int m_fStalemate;
  GameBoardGrid *m_pGameBoard;
  unsigned int m_uiResignDialogContext;
};


struct GameBoardGrid : CChessLogic<CBasePiece>
{
  gmMiniGameUI *m_gameUI;
  UIElement_ListBox *m_pieceListBox;
  IDClass<_tagDataID,32,0> m_didWhitePawn;
  IDClass<_tagDataID,32,0> m_didWhiteRook;
  IDClass<_tagDataID,32,0> m_didWhiteBishop;
  IDClass<_tagDataID,32,0> m_didWhiteKnight;
  IDClass<_tagDataID,32,0> m_didWhiteQueen;
  IDClass<_tagDataID,32,0> m_didWhiteKing;
  IDClass<_tagDataID,32,0> m_didBlackPawn;
  IDClass<_tagDataID,32,0> m_didBlackRook;
  IDClass<_tagDataID,32,0> m_didBlackBishop;
  IDClass<_tagDataID,32,0> m_didBlackKnight;
  IDClass<_tagDataID,32,0> m_didBlackQueen;
  IDClass<_tagDataID,32,0> m_didBlackKing;
  TChessPiece<CBasePiece> *m_rgPreviousBoard[8][8];
  TCoord m_coordSelected;
};


struct gmUrgentAssistanceUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Text *m_pEntryBox;
  UIElement_Button *m_pContinueButton;
};


struct gmVitaeUI : UIElement_Field, gmNoticeHandler, QualityChangeHandler
{
  UIElement_Text *m_pMainText;
  float m_currentVitae;
};


struct gm3DItemsUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Text *m_contentsText;
  UIElement_ItemList *m_itemList;
};


struct gmBackpackUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Text *m_burdenText;
  UIElement_Meter *m_burdenMeter;
  UIElement_ItemList *m_topContainer;
  UIElement_ItemList *m_containerList;
};


struct __declspec(align(8)) gmPaperDollUI : UIElement_Field, gmNoticeHandler, QualityChangeHandler, ItemListDragHandler
{
  UIElement_ItemList *m_neckSlot;
  UIElement_ItemList *m_leftWristSlot;
  UIElement_ItemList *m_leftRingSlot;
  UIElement_ItemList *m_rightWristSlot;
  UIElement_ItemList *m_rightRingSlot;
  UIElement_ItemList *m_weaponReadySlot;
  UIElement_ItemList *m_ammoReadySlot;
  UIElement_ItemList *m_shieldReadySlot;
  UIElement_ItemList *m_clothesPantsSlot;
  UIElement_ItemList *m_clothesShirtSlot;
  UIElement_ItemList *m_trinketOneSlot;
  UIElement_ItemList *m_cloakSlot;
  UIElement_ItemList *m_sigilOneSlot;
  UIElement_ItemList *m_sigilTwoSlot;
  UIElement_ItemList *m_sigilThreeSlot;
  UIElement_ItemList *m_headSlot;
  UIElement_ItemList *m_chestSlot;
  UIElement_ItemList *m_abdomenSlot;
  UIElement_ItemList *m_upperArmSlot;
  UIElement_ItemList *m_lowerArmSlot;
  UIElement_ItemList *m_handSlot;
  UIElement_ItemList *m_upperLegSlot;
  UIElement_ItemList *m_lowerLegSlot;
  UIElement_ItemList *m_footSlot;
  CPhysicsObj *m_pInventoryObject;
  UIElement_Viewport *m_pPaperDoll;
  IDClass<_tagDataID,32,0> m_didAnimation;
  UIElement *m_dragIcon;
  UIElement *m_paperDollDragMask;
  UIElement *m_paperDollDragOverlay;
  UIElement *m_sigilOneItem;
  UIElement *m_sigilTwoItem;
  UIElement *m_sigilThreeItem;
  UIElement_Button *m_SlotCheckbox;
  RenderSurface *m_clickMap;
  unsigned int m_cFlipCount;
  long double m_timeNextFlip;
  unsigned int m_selectionMask;
};


struct gmInventoryUI : UIElement_Field, gmNoticeHandler
{
  gmPaperDollUI *m_paperDollUI;
  gmBackpackUI *m_backpackUI;
  gm3DItemsUI *m_3DItemsUI;
  UIElement_Text *m_titleText;
};


struct gmHouseUI : UIElement_Field, gmNoticeHandler
{
  HouseData *m_pHouseData;
  UIElement_ListBox *m_pTextBox;
};


struct gmMapUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Text *m_pDateTimeText;
  UIElement_Text *m_pCoordinateText;
  UIElement *m_pPlayerLocationIcon;
  UIElement *m_pHouseLocationIcon;
  UIElement *m_pMap;
  Box2D m_boxMapMarkerArea;
  long double m_nextUpdate;
  Position m_HousePosition;
};


struct gmMapUI_LocationRolloverInfo
{
  unsigned int X;
  unsigned int Y;
  unsigned int Width;
  unsigned int Height;
  const wchar_t *Name;
};


struct UIOption_Checkbox : UIOption, UIElement_Button
{
  bool m_default;
  bool m_saved;
  bool m_current;
  PStringBase<char> m_prefName;
  unsigned int m_propName;
  PlayerOption m_playerOption;
};


struct __declspec(align(8)) UIOption_Slider : UIOption, UIElement_Scrollbar
{
  float m_default;
  float m_saved;
  float m_current;
  PStringBase<char> m_prefName;
  unsigned int m_propName;
  float m_lowerValue;
  float m_upperValue;
  unsigned int m_numStops;
  unsigned __int16 m_precision;
  bool m_setAsInt;
};


struct UIOption_CheckboxSlider : UIOption, UIElement
{
  UIOption_Checkbox *m_pToggle;
  UIOption_Slider *m_pSlider;
  PStringBase<char> m_prefName;
};


struct UIOption_Menu : UIOption, UIElement_Menu
{
  unsigned int m_default;
  unsigned int m_saved;
  unsigned int m_current;
  PStringBase<char> m_prefName;
};


struct PlayerOptionPage : OptionPage
{
  UIElement_ListBox *m_pOptionBox;
};


struct gmCharacterSettingsUI : PlayerOptionPage, gmNoticeHandler
{
};


struct UIOption_CheckboxBitfield64_ChildInfo
{
  unsigned __int64 llMask;
  StringInfo siLabel;
  StringInfo siTooltip;
};


struct SmartArray<UIOption_CheckboxBitfield64_ChildInfo,1>
{
  UIOption_CheckboxBitfield64_ChildInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct UIOption_CheckboxBitfield64 : UIOption, UIElement_ListBox
{
  unsigned __int64 m_default;
  unsigned __int64 m_saved;
  unsigned __int64 m_current;
  PStringBase<char> m_prefName;
  unsigned int m_propName;
  UIOption_CheckboxBitfield64_PropertyType m_propType;
  SmartArray<UIOption_CheckboxBitfield64_ChildInfo,1> m_rgChildValues;
};


struct List<DualHashData<UIOption_Slider *,UIOption_Slider *> *>
{
  List<DualHashData<UIOption_Slider *,UIOption_Slider *> *>Vtbl *vfptr;
  ListNode<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *_head;
  ListNode<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *_tail;
  unsigned int _num_elements;
};


struct List<DualHashData<UIOption_Slider *,UIOption_Slider *> *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *this, unsigned int);
};


struct ListNode<DualHashData<UIOption_Slider *,UIOption_Slider *> *>
{
  DualHashData<UIOption_Slider *,UIOption_Slider *> *data;
  ListNode<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *next;
  ListNode<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *prev;
};


struct DualHashData<UIOption_Slider *,UIOption_Slider *>
{
  UIOption_Slider *m_left_data;
  UIOption_Slider *m_right_data;
};


struct DualHash<UIOption_Slider *,UIOption_Slider *>
{
  unsigned int m_num_buckets;
  unsigned int m_num_elements;
  List<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *m_left_buckets;
  List<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *m_right_buckets;
};


struct gmChatOptionsUI : PlayerOptionPage, gmNoticeHandler
{
  DualHash<UIOption_Slider *,UIOption_Slider *> m_hashSliderLinks;
};


struct ListIterator<DualHashData<UIOption_Slider *,UIOption_Slider *> *>
{
  ListIterator<DualHashData<UIOption_Slider *,UIOption_Slider *> *>Vtbl *vfptr;
  ListNode<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *_current;
  List<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *_list;
};


struct ListIterator<DualHashData<UIOption_Slider *,UIOption_Slider *> *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *this, unsigned int);
};


struct DualHashIter<UIOption_Slider *,UIOption_Slider *>
{
  List<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *m_curr_bucket;
  List<DualHashData<UIOption_Slider *,UIOption_Slider *> *> *m_end_bucket;
  ListIterator<DualHashData<UIOption_Slider *,UIOption_Slider *> *> m_curr_element;
  ListIterator<DualHashData<UIOption_Slider *,UIOption_Slider *> *> m_end_element;
};


struct gmConfigUI : PlayerOptionPage, gmNoticeHandler
{
  UIOption_Slider *m_pStiffness;
  UIOption_Slider *m_pAdjustmentSpeed;
  UIOption_Slider *m_pSensitivity;
  UIOption_Checkbox *m_pSlope;
  UIOption_Checkbox *m_pInvert;
  UIOption_Checkbox *m_pMouseTurn;
};


struct gmGameplayOptionsUI : UIElement_Field, gmNoticeHandler
{
};


struct gmStatManagementUI : UIElement_Field, gmNoticeHandler, QualityChangeHandler
{
  UIElement_Text *m_pNameText;
  UIElement_Text *m_pHeritageText;
  UIElement_Text *m_pPKStatusText;
  UIElement_Text *m_pLevelText;
  UIElement_Text *m_pTotalXPText;
  UIElement_Text *m_pXPToLevelText;
  UIElement_Text *m_pLuminanceLabelText;
  UIElement_Text *m_pLuminanceText;
  UIElement_Meter *m_pXPToLevelMeter;
  UIElement_ListBox *m_pListBox;
  SmartArray<InfoRegion *,1> m_rgTokens;
  bool m_bAwaitingRaise;
  unsigned int m_titleID;
};


struct gmAttributeUI : gmStatManagementUI
{
  int m_SelectedIndex;
};


struct gmSkillUI : gmStatManagementUI
{
  unsigned int m_SelectedSkill;
  int m_SelectedIndex;
};


struct gmCharacterTitleUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Text *m_pDisplayTitleText;
  UIElement_Button *m_pDisplayButton;
  UIElement_ListBox *m_pTitleListBox;
  CharacterTitleTable m_characterTitleTable;
};


struct PageInfo
{
  PStringBase<unsigned short> m_Label;
  PStringBase<unsigned short> m_Title;
  PStringBase<unsigned short> m_Notes;
  int m_PageNumber;
  bool m_TimerRunning;
  long double m_TimerStamp;
  int m_Days;
  int m_Hours;
  int m_Minutes;
  bool m_LocationSet;
  long double m_xCoord;
  long double m_yCoord;
};


struct gmJournalUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Button *m_pStartTimerButton;
  UIElement_Text *m_pLabelEditBox;
  UIElement_Text *m_pTitleEditBox;
  UIElement_Text *m_pNotesEditBox;
  UIElement_Text *m_pDaysEditBox;
  UIElement_Text *m_pHoursEditBox;
  UIElement_Text *m_pMinutesEditBox;
  UIElement_Text *m_pLocationStaticText;
  UIElement_Text *m_pTimerStaticText;
  UIElement_Text *m_pDaysStaticText;
  UIElement_Text *m_pHoursStaticText;
  UIElement_Text *m_pMinutesStaticText;
  UIElement_Text *m_pPageNumberStaticText;
  bool m_Loaded;
  unsigned int m_CurrentPage;
  PageInfo m_Info;
  long double m_timeNextUpdate;
};


struct ContractInfo
{
  PStringBase<unsigned short> m_Name;
  PStringBase<unsigned short> m_Status;
  CContractTracker m_ContractTracker;
};


struct _STL_allocator<ContractInfo>
{
};


struct _STL__STLP_alloc_proxy<ContractInfo *,ContractInfo,_STL_allocator<ContractInfo> > : _STL_allocator<ContractInfo>
{
  ContractInfo *_M_data;
};


struct _STL__Vector_base<ContractInfo,_STL_allocator<ContractInfo> >
{
  ContractInfo *_M_start;
  ContractInfo *_M_finish;
  _STL__STLP_alloc_proxy<ContractInfo *,ContractInfo,_STL_allocator<ContractInfo> > _M_end_of_storage;
};


struct _STL_vector<ContractInfo,_STL_allocator<ContractInfo> > : _STL__Vector_base<ContractInfo,_STL_allocator<ContractInfo> >
{
};


struct gmContractsUI : UIElement_Field, gmNoticeHandler
{
  _STL_vector<ContractInfo,_STL_allocator<ContractInfo> > m_ContractList;
  UIElement_ListBox *m_pContractsBox;
  UIElement_Text *m_pProgressText;
  UIElement_Text *m_pContactText;
  UIElement_Text *m_pAreaText;
  UIElement_Text *m_pContactLocText;
  UIElement_Text *m_pTimedText;
  UIElement_Text *m_pNotesText;
  ContractSortCriteria m_SortCriteria;
  bool m_ReverseSort;
  int m_LastClickIndex;
  long double m_LastClickTime;
  long double m_timeNextUpdate;
};


struct _STL_allocator<ContractInfo>_rebind<ContractInfo>
{
};


struct _STL_allocator<PageInfo>
{
};


struct _STL__STLP_alloc_proxy<PageInfo *,PageInfo,_STL_allocator<PageInfo> > : _STL_allocator<PageInfo>
{
  PageInfo *_M_data;
};


struct _STL__Vector_base<PageInfo,_STL_allocator<PageInfo> >
{
  PageInfo *_M_start;
  PageInfo *_M_finish;
  _STL__STLP_alloc_proxy<PageInfo *,PageInfo,_STL_allocator<PageInfo> > _M_end_of_storage;
};


struct _STL_vector<PageInfo,_STL_allocator<PageInfo> > : _STL__Vector_base<PageInfo,_STL_allocator<PageInfo> >
{
};


struct gmPageListUI : UIElement_Field, gmNoticeHandler
{
  _STL_vector<PageInfo,_STL_allocator<PageInfo> > m_PageListPages;
  UIElement_ListBox *m_pPageListBox;
  UIElement_Text *m_pSearchEditBox;
  JournalSortCriteria m_SortCriteria;
  bool m_ReverseSort;
  int m_LastClickIndex;
  long double m_LastClickTime;
  long double m_timeNextUpdate;
};


struct _STL_allocator<PageInfo>_rebind<PageInfo>
{
};


struct gmAllegianceUI : UIElement_Field, gmNoticeHandler, QualityChangeHandler
{
  bool m_bAwaitingUpdate;
  unsigned int m_iidSelectedVassal;
  unsigned int m_iidPossibleNewPatron;
  unsigned int m_iidPossibleKickedVassal;
  unsigned int m_uiAcceptSwearServerContextID;
  UIElement_Text *m_pAllegianceName;
  UIElement_Text *m_pPlayerFollowers;
  UIElement_Text *m_pPlayerRank;
  UIElement *m_pMonarchField;
  UIElement_Text *m_pMonarchLabel;
  UIElement_Text *m_pMonarchName;
  UIElement_Text *m_pMonarchFollowers;
  UIElement *m_pPatronField;
  UIElement_Text *m_pPatronName;
  UIElement_ListBox *m_pVassalListBox;
  UIElement_Button *m_pSwearButton;
  UIElement_Button *m_pBreakButton;
  UIElement_Button *m_pKickButton;
  unsigned int m_swearContext;
  unsigned int m_acceptSwearContext;
  unsigned int m_breakContext;
  unsigned int m_kickContext;
};


struct gmFellowshipUI : UIElement_Field, gmNoticeHandler
{
  CFellowship *m_pFellowship;
  unsigned int m_iidSelectedFellow;
  unsigned int m_uiAcceptFellowRequestServerContextID;
  unsigned int m_fellowRequestContext;
  UIElement *m_pNotInAFellowshipFrame;
  UIElement *m_pInAFellowshipFrame;
  UIElement_Text *m_pFellowshipNameEntryBox;
  UIElement_Button *m_pCreateFellowshipButton;
  UIElement_Text *m_pFellowshipName;
  UIElement_ListBox *m_pFellowsListBox;
  UIElement_Button *m_pFellowLeaderButton;
  UIElement_Button *m_pFellowQuitButton;
  UIElement_Button *m_pFellowOpenButton;
  UIElement_Button *m_pFellowRecruitButton;
  UIElement_Button *m_pFellowDismissButton;
  UIElement_Button *m_pFellowDisbandButton;
};


struct gmFriendsUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Button *m_pAddButton;
  UIElement_Button *m_pRemoveButton;
  UIElement_Button *m_pTellButton;
  UIElement_ListBox *m_pFriendsListBox;
  UIElement_Text *m_pFriendNameEditBox;
  FriendDataList m_friendsList;
};


struct gmSquelchUI : UIElement_Field, gmNoticeHandler
{
  UIElement_Button *m_pSquelchCharacterButton;
  UIElement_Button *m_pSquelchAccountButton;
  UIElement_Button *m_pRemoveButton;
  UIElement_ListBox *m_pSquelchListBox;
  UIElement_Text *m_pSquelchNameEditBox;
  FriendDataList m_squelchList;
};


struct gmSpellbookUI : UIElement_Field, gmNoticeHandler
{
  UIElement_ItemList *m_spellList;
  unsigned int m_selectedSpellID;
  UIElement *m_btnSchool_Creature;
  UIElement *m_btnSchool_Item;
  UIElement *m_btnSchool_Life;
  UIElement *m_btnSchool_War;
  UIElement *m_btnSchool_Void;
  UIElement *m_btnLevel_1;
  UIElement *m_btnLevel_2;
  UIElement *m_btnLevel_3;
  UIElement *m_btnLevel_4;
  UIElement *m_btnLevel_5;
  UIElement *m_btnLevel_6;
  UIElement *m_btnLevel_7;
  UIElement *m_btnLevel_8;
};


struct SpellComponentRegion
{
  IDClass<_tagDataID,32,0> classID;
  unsigned int objectID;
  IDClass<_tagDataID,32,0> iconID;
  unsigned int numItems;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *,0>Vtbl *vfptr;
  HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *m_aInplaceBuckets[23];
  HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> **m_buckets;
  HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<IDClass<_tagDataID,32,0>,SpellComponentRegion *,0>
{
  HashTable<IDClass<_tagDataID,32,0>,SpellComponentRegion *,0>Vtbl *vfptr;
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *,0> m_intrusiveTable;
};


struct HashTable<IDClass<_tagDataID,32,0>,SpellComponentRegion *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<IDClass<_tagDataID,32,0>,SpellComponentRegion *,0> *this, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *m_hashNext;
};


struct HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *>
{
  SpellComponentRegion *m_data;
};


struct __declspec(align(4)) gmSpellComponentUI : UIElement_Field, gmNoticeHandler
{
  unsigned int selObjectID;
  UIElement_ListBox *m_pComponentListBox;
  SmartArray<unsigned long,1> m_aCategoryTitles;
  HashTable<IDClass<_tagDataID,32,0>,SpellComponentRegion *,0> m_hashComponentRegions;
  bool m_bBroadcastSelection;
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *,0>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *,0> *m_currHashTable;
  HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> **m_currBucket;
  HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *m_currElement;
};


struct HashIterator<IDClass<_tagDataID,32,0>,SpellComponentRegion *,0>
{
  IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,SpellComponentRegion *> *,0> m_iter;
};


struct __declspec(align(8)) UIOption_CheckboxBitfield : UIOption_Checkbox
{
  unsigned int m_bitmask;
};


struct gmCGHeritagePage : UIElement_Field, gmNoticeHandler
{
  CPlayerSystem *m_pPlayerSystem;
  gmCharGenMainUI *m_pMainFramework;
  UIElement_Button *m_pAluButton;
  UIElement_Button *m_pGhuButton;
  UIElement_Button *m_pShoButton;
  UIElement_Button *m_pViaButton;
  UIElement_Button *m_pShadButton;
  UIElement_Button *m_pPenButton;
  UIElement_Button *m_pGearButton;
  UIElement_Button *m_pUndButton;
  UIElement_Button *m_pEmpButton;
  UIElement_Button *m_pAunTButton;
  UIElement_Button *m_pLugButton;
  UIElement_Button *m_pOlthoiButton;
  UIElement_Button *m_pOlthoiAcidButton;
  UIElement_Text *m_pText;
  UIElement *m_pBackground;
};


struct gmCharGenMainUI : UIMainFramework, gmNoticeHandler
{
  CPlayerSystem *m_pPlayerSystem;
  UIElement *m_rootField;
  UIElement *m_ProgressBar;
  UIElement *m_MainMenu;
  UIElement *m_pMasterPage;
  gmCGHeritagePage *m_pHeritagePage;
  gmCGProfessionPage *m_pProfessionPage;
  gmCGSkillsPage *m_pSkillsPage;
  gmCGAppearancePage *m_pAppearancePage;
  gmCGTownPage *m_pTownPage;
  gmCGSummaryPage *m_pSummaryPage;
  UIElement_Button *m_pHeritageButton;
  UIElement_Button *m_pProfessionButton;
  UIElement_Button *m_pSkillsButton;
  UIElement_Button *m_pAppearanceButton;
  UIElement_Button *m_pTownButton;
  UIElement_Button *m_pSummaryButton;
  UIElement_Button *m_pLeftButton;
  UIElement_Button *m_pRightButton;
  UIElement_Button *m_pFinishButton;
  UIElement_Button *m_pHelpButton;
  UIElement_Button *m_pExitButton;
  UIElement_Button *m_pRandomButton;
  gmCharGenMainUI_ECGProgress m_eProgressState;
  bool m_bAwaitingCharSetForLogin;
  unsigned int m_uiExitContext;
  unsigned int m_uiPleaseWaitContext;
  unsigned int m_uiErrorMessageContext;
  unsigned int m_uiCreditWarningContext;
  unsigned int m_uiRandomizeWarningContext;
  unsigned int m_uiToDRequiredMessage;
};


struct __declspec(align(4)) gmCGProfessionPage_tagSlider
{
  UIElement *pAttribField;
  UIElement_Button *pLockButton;
  UIElement_Text *pAttribText;
  UIElement_Scrollbar *pSlider;
  UIElement_Text *pAttibValue;
  bool bLocked;
};


struct gmCGProfessionPage : UIElement_Field, gmNoticeHandler
{
  CPlayerSystem *m_pPlayerSystem;
  gmCharGenMainUI *m_pMainFramework;
  UIElement_Text *m_pAvailableValue;
  UIElement_Text *m_pHealthValue;
  UIElement_Text *m_pStaminaValue;
  UIElement_Text *m_pManaValue;
  UIElement_Text *m_pTextBox;
  UIElement_Button *m_pCurProfButton;
  gmCGProfessionPage_tagSlider m_tSliderArray[7];
};


struct gmCGSkillsPage_tagSkillRecord
{
  UIElement *pEntry;
  UIElement_Text *pUpCostText;
  UIElement_Text *pDownCostText;
  UIElement_Text *pSkillLevelText;
  UIElement_Button *pSkillUpButton;
  UIElement_Button *pSkillDownButton;
  PStringBase<unsigned short> strName;
  PStringBase<unsigned short> strDesc;
  PStringBase<unsigned short> strFormula;
  int iSkillID;
  int iSkillLevel;
  int iTrainCost;
  int iSpecCost;
  int iMinlevel;
  bool bUntrainable;
  bool bUnspecializable;
  SKILL_ADVANCEMENT_CLASS saCurClass;
  SkillFormula formSkill;
};


struct IntrusiveHashTable<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *,0>
{
  IntrusiveHashTable<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *,0>Vtbl *vfptr;
  HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *m_aInplaceBuckets[23];
  HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> **m_buckets;
  HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned int,gmCGSkillsPage_tagSkillRecord,0>
{
  HashTable<unsigned int,gmCGSkillsPage_tagSkillRecord,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *,0> m_intrusiveTable;
};


struct gmCGSkillsPage : UIElement_Field, gmNoticeHandler
{
  gmCGSkillsPage_tagSkillRecord m_tConstInit;
  UIElement *m_pSpecEntry;
  UIElement *m_pTrainedEntry;
  UIElement *m_pUseableUntrainedEntry;
  UIElement *m_pUnuseableUntrainedEntry;
  UIElement_Text *m_pCreditsMeter;
  UIElement_Text *m_pInfoBoxTitle;
  UIElement_Text *m_pInfoBoxText;
  CPlayerSystem *m_pPlayerSystem;
  gmCharGenMainUI *m_pMainFramework;
  UIElement_ListBox *m_pSkillsListBox;
  HashTable<unsigned int,gmCGSkillsPage_tagSkillRecord,0> m_hashSkills;
};


struct gmCGAppearancePage_tagChoices
{
  int iNumChoices;
  int iCurrentChoice;
  int iNumColors;
  int iCurrentColor;
  long double dShade;
};


struct gmCGAppearancePage_tagColorWheel
{
  unsigned int iRed;
  unsigned int iGreen;
  unsigned int iBlue;
  UIElement *pColor;
  UIElement *pPointer;
  Graphic *pGraphic;
  gmCGAppearancePage_EParts ePart;
};


struct __declspec(align(8)) gmCGAppearancePage : UIElement_Field, gmNoticeHandler
{
  CPlayerSystem *m_pPlayerSystem;
  gmCharGenMainUI *m_pMainFramework;
  UIElement_Button *m_pFemaleButton;
  UIElement_Button *m_pMaleButton;
  UIElement_Button *m_pFaceButton;
  UIElement_Button *m_pClothesButton;
  UIElement_Button *m_pZoomInButton;
  UIElement_Button *m_pZoomOutButton;
  UIElement_Button *m_pRotateClockButton;
  UIElement_Button *m_pRotateCounterClockButton;
  UIElement_Button *m_pHairSpin;
  UIElement_Button *m_pEyesSpin;
  UIElement_Button *m_pNoseSpin;
  UIElement_Button *m_pMouthSpin;
  UIElement_Button *m_pSkinSpin;
  UIElement_Button *m_pHeadgearSpin;
  UIElement_Button *m_pShirtSpin;
  UIElement_Button *m_pTrousersSpin;
  UIElement_Button *m_pFootwearSpin;
  UIElement_Scrollbar *m_pShadeScroll;
  UIElement *m_pFaceChoices;
  UIElement *m_pClothesChoices;
  UIElement *m_pGradCircle;
  Graphic *m_pGradGraphic;
  Graphic *m_pGradPlug;
  UIElement *m_pCurSelection;
  UIElement_Viewport *m_pViewport;
  gmCG3DView *m_p3DView;
  int m_iCurColor;
  int m_iPartIndex;
  int m_iHoldheadgear;
  bool m_bShouldZoomAnimate;
  bool m_bRotating;
  bool m_bZoomedIn;
  AC1Legacy_Vector3 m_vectTargPosition;
  AC1Legacy_Vector3 m_vectStartPosition;
  AC1Legacy_Vector3 m_vectCurPosition;
  AC1Legacy_Vector3 m_vectTargDirection;
  AC1Legacy_Vector3 m_vectStartDirection;
  AC1Legacy_Vector3 m_vectCurDirection;
  float m_fCurHeading;
  float m_fTargHeading;
  long double m_dAnimStartTime;
  long double m_dAnimDuration;
  long double m_dLastRotateTime;
  long double m_dRotationPerSec;
  unsigned int m_LastHeritageGroup;
  gmCGAppearancePage_ERotateDirection m_eRotateDir;
  gmCGAppearancePage_EType m_eCurType;
  gmCGAppearancePage_tagChoices m_tChoices[9];
  gmCGAppearancePage_EParts m_eCurPart;
  gmCGAppearancePage_tagColorWheel m_tColorWheel[9];
  gmCGAppearancePage_EGender m_eGender;
};


struct gmCGTownPage : UIElement_Field, gmNoticeHandler
{
  CPlayerSystem *m_pPlayerSystem;
  gmCharGenMainUI *m_pMainFramework;
  UIElement_Button *m_pSanamarButton;
  UIElement_Button *m_pHoltButton;
  UIElement_Button *m_pYaraqButton;
  UIElement_Button *m_pShoushiButton;
  UIElement_Text *m_pTextBox;
  gmCGTownPage_ETown m_eCurTown;
};


struct gmCGSummaryPage : UIElement_Field, gmNoticeHandler
{
  CPlayerSystem *m_pPlayerSystem;
  gmCharGenMainUI *m_pMainFramework;
  UIElement_ListBox *m_pSummaryListbix;
  UIElement_Text *m_pNameText;
  UIElement_Text *m_pHowToText;
  UIElement_Scrollbar *m_pScoll;
  UIElement_Viewport *m_pViewport;
  gmCG3DView *m_p3DView;
  bool m_bNameEntered;
  unsigned int m_uiErrorMessageContext;
};


struct HashTable<unsigned int,gmCGSkillsPage_tagSkillRecord,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned int,gmCGSkillsPage_tagSkillRecord,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *m_hashNext;
};


struct HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> : IntrusiveHashData<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *>
{
  gmCGSkillsPage_tagSkillRecord m_data;
};


struct IntrusiveHashIterator<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *,0>
{
  IntrusiveHashTable<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *,0> *m_currHashTable;
  HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> **m_currBucket;
  HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *m_currElement;
};


struct HashIterator<unsigned int,gmCGSkillsPage_tagSkillRecord,0>
{
  IntrusiveHashIterator<unsigned int,HashTableData<unsigned int,gmCGSkillsPage_tagSkillRecord> *,0> m_iter;
};


struct __declspec(align(4)) gmGamePlayUI : GamePlayUI, gmNoticeHandler
{
  UIElement *m_pGameplayUI;
  UIElement *m_pSmartBoxUI;
  UIElement *m_pSmartBoxRadar;
  UIElement *m_pStackedVitals;
  UIElement *m_pSideBySideVitals;
  unsigned int m_waitContext;
  unsigned int m_logoutContext;
  unsigned int m_gameplayConfirmationContext;
  ConfirmationType m_gameplayConfirmationType;
  unsigned int m_gameplayConfirmationContextServer;
  bool m_endingSession;
  bool m_doEndSession;
  bool m_shouldQuitOnLogout;
  bool m_bLogoutConfirmed;
  bool m_bCurrentlyTogglingUIVisibility;
};


struct gmUIMainFramework : UIMainFramework
{
};


struct gmDataPatchUI : UIMainFramework, gmNoticeHandler, CDDDStatusPlugin
{
  UIElement *m_datapatchField;
  UIElement_Text *m_connectText;
  UIElement *m_connectMeter;
  UIElement_Text *m_patchText;
  UIElement *m_patchMeter;
  float m_fConnectLevel;
  float m_fPatchLevel;
  unsigned int m_expected;
  unsigned int m_recieved;
  long double m_timeNextDiskspaceCheck;
};


struct gmIntroUI : UIMainFramework, CInputHandler, gmNoticeHandler
{
  UIElement *m_introField;
  List<unsigned long> m_listStates;
};


struct gmCharacterManagementUI : UIMainFramework, gmNoticeHandler
{
  UIElement *m_rootField;
  UIElement_ListBox *m_charListField;
  UIElement *m_pCreateCharacterButton;
  UIElement *m_pEnterGameButton;
  UIElement *m_pDeleteCharacterButton;
  UIElement *m_pRestoreCharacterButton;
  unsigned int m_uiCharListSelectedItem;
  unsigned int m_iidSelectedCharacter;
  unsigned int m_errorMessageDialogContext;
  unsigned int m_confirmExitDialogContext;
  unsigned int m_deleteCharacterDialogContext;
  unsigned int m_pleaseWaitDialogContext;
  unsigned int m_enteringWorldDialogContext;
};


struct gmEpilogueUI : gmUIMainFramework, gmNoticeHandler
{
  UIElement *m_epilogueField;
};


struct gmDisconnectedUI : UIMainFramework, gmNoticeHandler
{
  UIElement *m_disconnectedField;
  UIElement_Text *m_errorText;
};


struct __declspec(align(8)) gmCreditsUI : gmUIMainFramework
{
  unsigned int m_waitContext;
  int m_lastPicture;
  int m_lastX;
  int m_lastY;
  BaseProperty m_pictureProp;
  unsigned int m_numPictures;
  float m_duration;
  long double m_endTime;
  SmartArray<UIElement *,1> m_aPictureElements;
  UIElement *m_pictureField;
  UIElement *m_textField;
  UIElement_Text *m_textArea;
  bool m_alternate;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,unsigned char> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned char> *,0> *m_currHashTable;
  HashTableData<unsigned long,unsigned char> **m_currBucket;
  HashTableData<unsigned long,unsigned char> *m_currElement;
};


struct HashIterator<unsigned long,unsigned char,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,unsigned char> *,0> m_iter;
};


struct DiskSpace
{
};


struct PackableHashIterator<unsigned long,SkillBase>
{
  PackableHashIterator<unsigned long,SkillBase>Vtbl *vfptr;
  PackableHashData<unsigned long,SkillBase> *_current;
  PackableHashData<unsigned long,SkillBase> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,SkillBase>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,SkillBase> *this, unsigned int);
};


struct CloTextureEffect : PackObj
{
  IDClass<_tagDataID,32,0> oldTexID;
  IDClass<_tagDataID,32,0> newTexID;
};


struct PackableHashIterator<IDClass<_tagDataID,32,0>,ClothingBase>
{
  PackableHashIterator<IDClass<_tagDataID,32,0>,ClothingBase>Vtbl *vfptr;
  PackableHashData<IDClass<_tagDataID,32,0>,ClothingBase> *_current;
  PackableHashData<IDClass<_tagDataID,32,0>,ClothingBase> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<IDClass<_tagDataID,32,0>,ClothingBase>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<IDClass<_tagDataID,32,0>,ClothingBase> *this, unsigned int);
};





struct PackableHashData<IDClass<_tagDataID,32,0>,ClothingBase>
{
  IDClass<_tagDataID,32,0> _key;
  ClothingBase _data;
  PackableHashData<IDClass<_tagDataID,32,0>,ClothingBase> *_next;
  int _hashVal;
};


struct CloObjectEffect : PackObj
{
  unsigned int partNum;
  IDClass<_tagDataID,32,0> objectID;
  unsigned int numTextureEffects;
  CloTextureEffect *textureEffects;
};


struct PackableHashTable<IDClass<_tagDataID,32,0>,ClothingBase> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<IDClass<_tagDataID,32,0>,ClothingBase> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashIterator<unsigned long,CloPaletteTemplate>
{
  PackableHashIterator<unsigned long,CloPaletteTemplate>Vtbl *vfptr;
  PackableHashData<unsigned long,CloPaletteTemplate> *_current;
  PackableHashData<unsigned long,CloPaletteTemplate> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,CloPaletteTemplate>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,CloPaletteTemplate> *this, unsigned int);
};




struct PackableHashData<unsigned long,CloPaletteTemplate>
{
  unsigned int _key;
  CloPaletteTemplate _data;
  PackableHashData<unsigned long,CloPaletteTemplate> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,CloPaletteTemplate> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,CloPaletteTemplate> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};





struct InterfacePtr<PlayerDesc>
{
  PlayerDesc *m_pInterface;
  TResult m_trStatus;
};


struct IntrusiveHashData<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *>
{
  unsigned int m_hashKey;
  HashList<unsigned long,List<unsigned long>,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *> : IntrusiveHashData<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *>, DLListData
{
};


struct HashList<unsigned long,List<unsigned long>,1>_HashListData : IntrusiveHashListData<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *>
{
  List<unsigned long> m_data;
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1>Vtbl *vfptr;
  HashList<unsigned long,List<unsigned long>,1>_HashListData *m_aInplaceBuckets[23];
  HashList<unsigned long,List<unsigned long>,1>_HashListData **m_buckets;
  HashList<unsigned long,List<unsigned long>,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct IntrusiveHashListIterator<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1>
{
  HashList<unsigned long,List<unsigned long>,1>_HashListData *m_pData;
  IntrusiveHashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<unsigned long,List<unsigned long>,1> >
{
  IntrusiveHashListIterator<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1> m_iter;
};


struct HashList<unsigned long,List<unsigned long>,1>
{
  IntrusiveHashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1> m_ihlIntrusive;
};


struct IntrusiveHashData<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *>
{
  unsigned int m_hashKey;
  HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *> : IntrusiveHashData<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *>, DLListData
{
};


struct HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData : IntrusiveHashListData<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *>
{
  HashList<unsigned long,List<unsigned long>,1> m_data;
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1>Vtbl *vfptr;
  HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *m_aInplaceBuckets[23];
  HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData **m_buckets;
  HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashList<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct IntrusiveHashListIterator<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1>
{
  HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *m_pData;
  IntrusiveHashList<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1> >
{
  IntrusiveHashListIterator<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1> m_iter;
};


struct HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>
{
  IntrusiveHashList<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1> m_ihlIntrusive;
};


struct IntrusiveHashIterator<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,List<unsigned long>,1>_HashListData *,1> *m_currHashTable;
  HashList<unsigned long,List<unsigned long>,1>_HashListData **m_currBucket;
  HashList<unsigned long,List<unsigned long>,1>_HashListData *m_currElement;
};


struct IntrusiveHashIterator<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *,1> *m_currHashTable;
  HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData **m_currBucket;
  HashList<unsigned long,HashList<unsigned long,List<unsigned long>,1>,1>_HashListData *m_currElement;
};


struct _STL_pair<unsigned long,unsigned long>
{
  unsigned int first;
  unsigned int second;
};


struct gmCCommunicationSystem : CCommunicationSystem
{
  unsigned int talkFocus;
  unsigned int m_uiAllowedTalkFocusBitmask;
  SquelchDB _squelch_db;
  int chatSquelched;
  unsigned int m_iidLastSpeakableTarget;
  PStringBase<char> lastTelleeName;
  unsigned int lastTeller;
  PStringBase<char> lastTellerName;
  AC1Legacy_PStringBase<char> lastAtMonarchUserName;
  AC1Legacy_PStringBase<char> lastAtPatronUserName;
  AC1Legacy_PStringBase<char> system_message_string;
  ChatRoomTracker *crt;
  int m_WantsToBeInAllegChat;
};


struct gmCCommunicationSystem_uiChatInterfaceProvider : CCommunicationSystem_ChatInterfaceProvider
{
};


struct GenItemHolder
{
};


struct ItemHolder : GenItemHolder
{
};


struct TinkeringSystem
{
};


struct TradeSystem
{
};


struct InterfacePtr<ClientObjMaintSystem>
{
  ClientObjMaintSystem *m_pInterface;
  TResult m_trStatus;
};


struct PackableHashIterator<unsigned long,SpellBookPage>
{
  PackableHashIterator<unsigned long,SpellBookPage>Vtbl *vfptr;
  PackableHashData<unsigned long,SpellBookPage> *_current;
  PackableHashData<unsigned long,SpellBookPage> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,SpellBookPage>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,SpellBookPage> *this, unsigned int);
};


struct ItemUses
{
  int _useable_bitfield;
};


struct InterfacePtr<CPlayerModule>
{
  CPlayerModule *m_pInterface;
  TResult m_trStatus;
};


struct PackableHashIterator<long,BodyPart>
{
  PackableHashIterator<long,BodyPart>Vtbl *vfptr;
  PackableHashData<long,BodyPart> *_current;
  PackableHashData<long,BodyPart> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<long,BodyPart>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<long,BodyPart> *this, unsigned int);
};


struct VitaeSystem
{
};


struct EncumbranceSystem
{
};


struct AppraisalSystem
{
};


struct SkillSystem
{
};


struct ExperienceSystem
{
};


struct WTimer
{
};


struct CombatSystem
{
};


struct TPawnPiece<CBasePiece> : TChessPiece<CBasePiece>
{
};


struct TRookPiece<CBasePiece> : TChessPiece<CBasePiece>
{
};


struct TKnightPiece<CBasePiece> : TChessPiece<CBasePiece>
{
};


struct TBishopPiece<CBasePiece> : TChessPiece<CBasePiece>
{
};


struct TQueenPiece<CBasePiece> : TChessPiece<CBasePiece>
{
};


struct TKingPiece<CBasePiece> : TChessPiece<CBasePiece>
{
};


struct $0347B0C8B57FEA7C4E26DB8A56AF7EAE
{
  int x;
  int y;
  int iSide;
  ChessPieceType type;
};


struct DBObjGrabber<SkillTable>
{
  SkillTable *m_object;
};


struct AC1Modern_PositionBase
{
  AC1Modern_PositionBaseVtbl *vfptr;
  char m_iBlockX;
  char m_iBlockY;
  IDClass<_tagCellID,16,65535> m_cCellID;
};


struct AC1Modern_PositionBaseVtbl
{
  Vector3 *(__thiscall *GetOrigin)(AC1Modern_PositionBase *this);
  Quaternion *(__thiscall *GetOrientation)(AC1Modern_PositionBase *this);
  bool (__thiscall *IsValid)(AC1Modern_PositionBase *this);
  PStringBase<char> *(__thiscall *ToString)(AC1Modern_PositionBase *this, PStringBase<char> *result);
  PStringBase<unsigned short> *(__thiscall *ToStringW)(AC1Modern_PositionBase *this, PStringBase<unsigned short> *result);
  bool (__thiscall *ToFileNode)(AC1Modern_PositionBase *this, PFileNode *);
  bool (__thiscall *HandleFileNode)(AC1Modern_PositionBase *this, PFileNode *, bool *);
};


struct DBObjGrabber<CContractTable>
{
  CContractTable *m_object;
};


struct _STL__BothPtrType<ContractInfo *,ContractInfo *>
{
};


struct _STL__OKToMemCpy<ContractInfo,ContractInfo>
{
};


struct _STL__BothPtrType<PageInfo *,PageInfo *>
{
};


struct _STL__OKToMemCpy<PageInfo,PageInfo>
{
};


struct FellowshipSystem
{
};


struct DBObjGrabber<DBPropertyCollection>
{
  DBPropertyCollection *m_object;
};


struct DBObjGrabber<Attribute2ndTable>
{
  Attribute2ndTable *m_object;
};


struct CLOCache : DBOCache
{
};


struct __declspec(align(4)) LockGrabber<SharedCriticalSection>
{
  SharedCriticalSection *m_Lock;
  bool m_bEntered;
};




struct ChatEmoteData : PackObj
{
  AC1Legacy_PStringBase<char> myEmote;
  AC1Legacy_PStringBase<char> otherEmote;
};


struct PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,AC1Legacy_PStringBase<char> >
{
  AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> > _key;
  AC1Legacy_PStringBase<char> _data;
  PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,AC1Legacy_PStringBase<char> > *_next;
  int _hashVal;
};


struct PackableHashTable<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,AC1Legacy_PStringBase<char> > : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,AC1Legacy_PStringBase<char> > **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashData<AC1Legacy_PStringBase<char>,ChatEmoteData>
{
  AC1Legacy_PStringBase<char> _key;
  ChatEmoteData _data;
  PackableHashData<AC1Legacy_PStringBase<char>,ChatEmoteData> *_next;
  int _hashVal;
};


struct PackableHashTable<AC1Legacy_PStringBase<char>,ChatEmoteData> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<AC1Legacy_PStringBase<char>,ChatEmoteData> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};



struct AC1Legacy_SmartArray<cWObjHierNode *>
{
  cWObjHierNode **m_data;
  unsigned int m_size;
  unsigned int m_num;
};



struct PackableHashData<IDClass<_tagDataID,32,0>,int>
{
  IDClass<_tagDataID,32,0> _key;
  int _data;
  PackableHashData<IDClass<_tagDataID,32,0>,int> *_next;
  int _hashVal;
};


struct PackableHashTable<IDClass<_tagDataID,32,0>,int> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<IDClass<_tagDataID,32,0>,int> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};





struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *,0> *m_currHashTable;
  HashTableData<unsigned long,PhysicsScriptTableData *> **m_currBucket;
  HashTableData<unsigned long,PhysicsScriptTableData *> *m_currElement;
};


struct HashIterator<unsigned long,PhysicsScriptTableData *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *,0> m_iter;
};


struct CThreadsafeDiskController : DiskController
{
  SharedCriticalSection m_DiskLock;
  CMostlyConsecutiveIntSet m_Iters;
};


struct LongNIValHashIter<unsigned long> : HashBaseIter<unsigned long>
{
};


struct LongNIValHashIter<LongHash<MotionData> *> : HashBaseIter<unsigned long>
{
};


struct LogTextTypeEnumMapper
{
};


struct MovementSystem
{
};


struct WOrderHdr : PackObj
{
  int isFromWeenie_;
  unsigned int iid_;
  unsigned int stamp_;
};


struct WeenieTypeEnumMapper
{
};


struct QualityFilter : SerializeUsingPackDBObj
{
  int *_int_stat_filter;
  int *_int64_stat_filter;
  int *_bool_stat_filter;
  int *_float_stat_filter;
  int *_string_stat_filter;
  int *_did_stat_filter;
  int *_iid_stat_filter;
  int *_position_stat_filter;
};


struct LongNIValHashIter<SurfInfo *> : HashBaseIter<unsigned long>
{
};


struct LongNIValHashData<SurfInfo *> : HashBaseData<unsigned long>
{
  SurfInfo *data;
};


struct LongHashIter<CWeenieObject> : HashBaseIter<unsigned long>
{
};


struct LongHashIter<CObjectInventory> : HashBaseIter<unsigned long>
{
};


struct PackableHashIterator<unsigned long,int>
{
  PackableHashIterator<unsigned long,int>Vtbl *vfptr;
  PackableHashData<unsigned long,int> *_current;
  PackableHashData<unsigned long,int> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,int>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,int> *this, unsigned int);
};


struct NOOPHook : CAnimHook
{
};


struct SoundTableHook : CAnimHook
{
  SoundType sound_type_;
};


struct SoundHook : CAnimHook
{
  IDClass<_tagDataID,32,0> gid_;
};


struct SoundTweakedHook : CAnimHook
{
  IDClass<_tagDataID,32,0> gid_;
  float prio;
  float prob;
  float vol;
};


struct ReplaceObjectHook : CAnimHook
{
  AnimPartChange ap_change;
};


struct AttackHook : CAnimHook
{
  AttackCone attack_cone;
};


struct EtherealHook : CAnimHook
{
  int ethereal;
};


struct NoDrawHook : CAnimHook
{
  int _no_draw;
};


struct DefaultScriptPartHook : CAnimHook
{
  unsigned int _part_index;
};


struct DefaultScriptHook : CAnimHook
{
};


struct TransparentHook : CAnimHook
{
  float start;
  float end;
  float time;
};


struct TransparentPartHook : CAnimHook
{
  unsigned int part;
  float start;
  float end;
  float time;
};


struct LuminousPartHook : CAnimHook
{
  unsigned int part;
  float start;
  float end;
  float time;
};


struct LuminousHook : CAnimHook
{
  float start;
  float end;
  float time;
};


struct DiffusePartHook : CAnimHook
{
  unsigned int part;
  float start;
  float end;
  float time;
};


struct DiffuseHook : CAnimHook
{
  float start;
  float end;
  float time;
};


struct ScaleHook : CAnimHook
{
  float end;
  float time;
};


struct CreateParticleHook : CAnimHook
{
  IDClass<_tagDataID,32,0> emitter_info_id;
  unsigned int part_index;
  Frame offset;
  unsigned int emitter_id;
};


struct CreateBlockingParticleHook : CreateParticleHook
{
};


struct DestroyParticleHook : CAnimHook
{
  unsigned int emitter_id;
};


struct StopParticleHook : CAnimHook
{
  unsigned int emitter_id;
};


struct CallPESHook : CAnimHook
{
  IDClass<_tagDataID,32,0> pes;
  float pause;
};


struct AnimDoneHook : CAnimHook
{
};


struct SetOmegaHook : CAnimHook
{
  AC1Legacy_Vector3 axis;
};


struct TextureVelocityPartHook : CAnimHook
{
  unsigned int part_index;
  float u_speed;
  float v_speed;
};


struct TextureVelocityHook : CAnimHook
{
  float u_speed;
  float v_speed;
};


struct SetLightHook : CAnimHook
{
  int _lights_on;
};


struct FPHook : PhysicsObjHook
{
  float start_value;
  float end_value;
};


struct VectorHook : PhysicsObjHook
{
  AC1Legacy_Vector3 start_vector;
  AC1Legacy_Vector3 end_vector;
};


struct LongNIValHashIter<CPhysicsObj_CollisionRecord> : HashBaseIter<unsigned long>
{
};


struct LongNIValHashData<CPhysicsObj_CollisionRecord> : HashBaseData<unsigned long>
{
  CPhysicsObj_CollisionRecord data;
};


struct LongNIHashIter<DetectionCylsphere>
{
  LongNIHash<DetectionCylsphere> *hash;
  int bucketNo;
  LongNIHashData *curDat;
  int fDone;
};


struct LongNIHashIter<DetectionInfo>
{
  LongNIHash<DetectionInfo> *hash;
  int bucketNo;
  LongNIHashData *curDat;
  int fDone;
};


struct LongNIHashIter<AttackInfo>
{
  LongNIHash<AttackInfo> *hash;
  int bucketNo;
  LongNIHashData *curDat;
  int fDone;
};


struct LongNIHashIter<TargettedVoyeurInfo>
{
  LongNIHash<TargettedVoyeurInfo> *hash;
  int bucketNo;
  LongNIHashData *curDat;
  int fDone;
};


struct LongNIHashIter<ParticleEmitter>
{
  LongNIHash<ParticleEmitter> *hash;
  int bucketNo;
  LongNIHashData *curDat;
  int fDone;
};


struct LongHashIter<LocationType> : HashBaseIter<unsigned long>
{
};


struct LongHashIter<PlacementType> : HashBaseIter<unsigned long>
{
};


struct LongHashIter<MotionData> : HashBaseIter<unsigned long>
{
};


struct DArray<unsigned long>
{
  unsigned int *data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct LongNIValHashData<unsigned long> : HashBaseData<unsigned long>
{
  unsigned int data;
};


struct LongNIValHashData<LongHash<MotionData> *> : HashBaseData<unsigned long>
{
  LongHash<MotionData> *data;
};


struct MoveToManager_MovementNode : DLListData
{
  MovementTypes_Type type;
  float heading;
};
