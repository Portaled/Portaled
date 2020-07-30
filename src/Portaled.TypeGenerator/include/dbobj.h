
#ifndef DBOBJ_H
#define DBOBJ_H

#include "core.h"
#include "primitive.h"
#include "enums.h"
#include "hash.h"
#include "list.h"
#include "dbocache.h"
#include "string.h"



struct AC1Legacy_Vector3 : Vector3
{
};


struct Plane
{
	AC1Legacy_Vector3 N;
	float d;
};






class DBOCache
{
	public:
		virtual void* __vecDelDtor (unsigned int);
		virtual void DONOTUSE_1();
		virtual void DONOTUSE_2();
		//virtual struct Collection* GetCollection (IDClass_tagDataID_32_0);
		virtual struct Collection* GetCollection(unsigned int);
		virtual bool SetCollection(struct Collection*);
		virtual unsigned int Release(unsigned int);
		//virtual unsigned int Release(IDClass_tagDataID_32_0);
		virtual bool AddObj(DBObj*);
		virtual bool RemoveObj(unsigned int);
		//virtual bool RemoveObj(IDClass_tagDataID_32_0);
		virtual bool CanLoadFromDisk();
		virtual bool CanRequestFromNet();
		virtual void FlushFreeObjects();
		virtual bool SaveObjectToDisk(PreprocHeader*, DBObj*);
		virtual bool ReloadObject(unsigned int);
		//virtual bool ReloadObject(IDClass_tagDataID_32_0);
		virtual void LastWords();
		virtual bool AddObj_Internal(DBObj*);
		virtual void RemoveObj_Internal(DBObj*);
		virtual void FreeObject(DBObj*);
		virtual void DestroyObj(DBObj*);
		virtual void FreelistAdd(DBObj*);
		virtual void FreelistRemove(DBObj*);
		virtual DBObj* FreelistRemoveOldest();

//		DBOCacheVtbl* vfptr;
		//AutoGrowHashTable<IDClass_tagDataID_32_0, DBObj*> m_ObjTable;
		DBObjTable m_ObjTable;
		unsigned int m_dbtype;
		HashTable<unsigned long, float, 0> m_fidelityTable;
		bool m_fCanKeepFreeObjs;
		bool m_fKeepFreeObjs;
		bool m_bFreelistActive;
		FreelistDef m_freelistDef;
		DBObj* m_pOldestFree;
		DBObj* m_pYoungestFree;
		unsigned int m_nFree;
		unsigned int m_nTotalCount;
		void* m_pfnAllocator;


};



struct InputMapConflictsValue
{
	unsigned int m_eInputMap;
	List<unsigned long> m_listConflictingInputMaps;
};


const struct ActionMap : DBObj
{
	HashList<unsigned long, HashList<unsigned long, ActionMapValue, 1>, 1> m_hashInputMaps;
	IDClass_tagDataID_32_0 m_didStringTable;
	HashTable<unsigned long, InputMapConflictsValue, 0> m_hashConflictingMaps;
};

struct BBox
{
	Vector3 m_vMin;
	Vector3 m_vMax;
};


struct CVertexArray
{
	void* vertex_memory;
	BBox bbox;
	VertexType vertex_type;
	unsigned int num_vertices;
	CVertex* vertices;
};


struct __declspec(align(8)) CGfxObj : DBObj
{
	CMaterial* material;
	unsigned int num_surfaces;
	CSurface** m_rgSurfaces;
	CVertexArray vertex_array;
	unsigned int num_physics_polygons;
	CPolygon* physics_polygons;
	MeshBuffer* constructed_mesh;
	int use_built_mesh;
	CSphere* physics_sphere;
	BSPTREE* physics_bsp;
	AC1Legacy_Vector3 sort_center;
	unsigned int num_polygons;
	CPolygon* polygons;
	CSphere* drawing_sphere;
	BSPTREE* drawing_bsp;
	BBox gfx_bound_box;
	IDClass_tagDataID_32_0 m_didDegrade;
};



struct CommandListElement
{
	CommandListElement* next;
	CommandListElement* prev;
	unsigned int command;
	float speed;
	int hold_run;
};

struct CommandList
{
	CommandListElement* head;
	CommandListElement* mouse_command;
	CommandListElement* current;
};

struct Frame
{
	float qw;
	float qx;
	float qy;
	float qz;
	float m_fl2gv[9];
	AC1Legacy_Vector3 m_fOrigin;
};

struct Position : PackObj
{
	unsigned int objcell_id;
	Frame frame;
};

struct NoticeHandler
{
	void* vfptr;//NoticeHandlerVtbl* vfptr;
};

struct ReferenceCountTemplate
{
	void* vfptr;
	unsigned int m_cRef;
};

struct Turbine_RefCount : ReferenceCountTemplate
{
};



struct IDListNode
{
	unsigned int id;
	IDListNode* prev;
	IDListNode* next;
};


struct IDList : PackObj
{
	IDListNode* first;
	IDListNode* last;
	IDListNode* curNode;
	int numIDs;
	int curNum;
};



struct InventoryPlacement : PackObj
{
	unsigned int iid_;
	unsigned int loc_;
	unsigned int priority_;
};


struct CObjectInventory : LongHashData
{
	IDList _itemsList;
	IDList _containersList;
	PackableList<InventoryPlacement> _invPlacement;
};

template <typename T>
struct __declspec(align(8)) AC1Legacy_PQueueArray_PQueueNode
{
	T key;
	void* data;
};


template <typename K, typename V>
struct PQueueArray_PQueueNode
{
	K key;
	V data;
};

template <typename T>
struct AC1Legacy_PQueueArray
{
	void* vfptr;
	AC1Legacy_PQueueArray_PQueueNode<T>* A;
	int curNumNodes;
	int allocatedNodes;
	int minAllocatedNodes;
};


struct CObjectMaint
{
	Interface _interface;
	NoticeHandler noticeHandler;
	Turbine_RefCount m_cTurbineRefCount;
	int is_active;
	IntrusiveHashTable<unsigned long, CLostCell*, 0> lost_cell_table;
	LongHash<CPhysicsObj> object_table;
	LongHash<CPhysicsObj> null_object_table;
	LongHash<CWeenieObject> weenie_object_table;
	LongHash<CWeenieObject> null_weenie_object_table;
	HashSet<unsigned long> visible_object_table;
	HashTable<unsigned long, double, 0> destruction_object_table;
	LongHash<CObjectInventory> object_inventory_table;
	AC1Legacy_PQueueArray<double> object_destruction_queue;
};


struct __declspec(align(8)) SerializeUsingPackDBObj
{
	DBObj dbobj;
	PackObj packobj;
};

template <typename T>
struct DArray
{
	T* data;
	unsigned int blocksize;
	unsigned int next_available;
	unsigned int sizeOf;
};

struct CPartCell
{
	void* vfptr;
	unsigned int num_shadow_parts;
	DArray<CShadowPart*> shadow_part_list;
};




struct LIGHTINFO
{
	int type;
	Frame offset;
	AC1Legacy_Vector3 viewerspace_location;
	RGBColor color;
	float intensity;
	float falloff;
	float cone_angle;
};


const struct LIGHTOBJ
{
	LIGHTINFO* lightinfo;
	Frame global_offset;
	int state;
};


template <typename T>
struct LongNIValHash : HashBase<unsigned long>
{
};




struct CLandBlockStruct
{
	RGBColor* vertex_lighting;
	LandDefs_Direction trans_dir;
	int side_vertex_count;
	int side_polygon_count;
	int side_cell_count;
	LandDefs_WaterType water_type;
	char* height;
	unsigned __int16* terrain;
	CVertexArray vertex_array;
	CPolygon* polygons;
	unsigned int num_surface_strips;
	CSurfaceTriStrips* surface_strips;
	unsigned int block_surface_index;
	CLandCell* lcell;
	int* SWtoNEcut;
};

struct CLandBlock
{
	SerializeUsingPackDBObj dbobj;
	CLandBlockStruct lbstruct;
	SqCoord block_coord;
	Frame block_frame;
	float max_zval;
	float min_zval;
	int dyn_objs_init_done;
	int lbi_exists;
	LandDefs_Direction dir;
	SqCoord closest;
	BoundingType in_view;
	CLandBlockInfo* lbi;
	unsigned int num_static_objects;
	DArray<CPhysicsObj*> static_objects;
	unsigned int num_buildings;
	CBuildingObj** buildings;
	unsigned int stab_num;
	unsigned int* stablist;
	CLandCell** draw_array;
	unsigned int draw_array_size;
};


struct CPhysicsObj;

template <typename T>
struct DLList : DLListBase
{
};


struct CAnimHook
{
	void* vfptr;
	CAnimHook* next_hook;
	int direction_;
};


struct AnimFrame
{
	AFrame* frame;
	unsigned int num_frame_hooks;
	CAnimHook* hooks;
	unsigned int num_parts;
};

struct CSequence : PackObj
{
	DLList<AnimSequenceNode> anim_list;
	AnimSequenceNode* first_cyclic;
	AC1Legacy_Vector3 velocity;
	AC1Legacy_Vector3 omega;
	CPhysicsObj* hook_obj;
	long double frame_number;
	AnimSequenceNode* curr_anim;
	AnimFrame* placement_frame;
	unsigned int placement_frame_id;
	int bIsTrivial;
};


class GraphicsResource
{
	public:
		virtual void* __vecDelDtor(unsigned int);
		virtual bool CopyInto(GraphicsResource*);
		virtual bool PurgeResource();
		virtual bool RestoreResource();

		__declspec(align(8)) bool m_bIsLost;
		long double m_TimeUsed;
		unsigned int m_FrameUsed;
		bool m_bIsThrashable;
		bool m_AutoRestore;
		unsigned int m_nResourceSize;
		unsigned int m_ListIndex;
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

struct RenderSurfaceSourceData
{
	unsigned int width;
	unsigned int height;
	unsigned int imageSize;
	char* sourceBits;
	PixelFormatDesc pfDesc;
};


struct RenderSurface;

struct SurfaceWindow
{
	void* vfptr;
	RenderSurface* surface;
	SurfaceWindow* parent;
	tagRECT rect;
	unsigned int lockCount;
	bool writable;
	void* data;
	int pitch;
};


struct __declspec(align(4)) RenderSurface
{
	DBObj dbobj;
	GraphicsResource gfxresource;
	RenderSurfaceSourceData sourceData;
	unsigned int width;
	unsigned int height;
	unsigned int size;
	SurfaceWindow window;
	bool locked;
	PixelFormatDesc pfDesc;
	void* m_pSurfaceBits;
	IDClass_tagDataID_32_0 m_didPalatte;
	bool m_IsDirty;
	bool m_ReadOnlyLock;
};


struct IUnknown
{
	void* vfptr;
};


struct IDirect3DResource9 : IUnknown
{

};
struct IDirect3DSurface9 : IDirect3DResource9
{
};

__declspec(align(8)) struct RenderSurfaceD3D
{
	RenderSurface parent;
	IDirect3DSurface9* m_pD3DSurface;
	_D3DPOOL m_pool;
	bool m_CountAsSystemMemory;
	bool m_CountAsVideoMemory;
};



struct __declspec(align(8)) RenderTexture
{
	DBObj dbobj;
	GraphicsResource gfxresource;
	TextureType m_TextureType;
	unsigned int m_nNumLevels;
	PixelFormatID m_PixelFormat;
	unsigned int m_Flags;
	bool m_bDropLevelsCalled;
	unsigned int m_ManagedRefCount;
	long double m_LastManagedReleaseTime;
	bool m_AllowManagement;
	SmartArray<DBLevelInfo> m_SourceLevels;
	unsigned int m_nWidth;
	unsigned int m_nHeight;
	unsigned int m_nEdgeLength;
};



struct __declspec(align(8)) Palette
{
	SerializeUsingPackDBObj dbobj;
	unsigned int num_colors;
	float min_lighting;
	unsigned int* ARGB;
};


struct __declspec(align(4)) ImgTex
{
	DBObj dbobj;
	GraphicsResource gfxresource;
	SmartArray<IDClass_tagDataID_32_0> m_SourceLevels;
	RenderSurface* m_pImageData;
	Palette* m_pPalette;
	int m_cPitch;
	unsigned __int64 m_TextureCode;
	IDirect3DTexture9* m_pD3DTexture;
	RenderTexture* m_pRenderTexture;
	RenderTexture* m_pSystemMemTexture;
	bool m_IsLocked;
};



struct CSurface
{
	DBObj dbobj;
	GraphicsResource gfxresource;
	unsigned int type;
	SurfaceHandlerEnum handler;
	unsigned int color_value;
	int solid_index;
	IDClass_tagDataID_32_0 indexed_texture_id;
	ImgTex* base1map;
	Palette* base1pal;
	float translucency;
	float luminosity;
	float diffuse;
	IDClass_tagDataID_32_0 orig_texture_id;
	IDClass_tagDataID_32_0 orig_palette_id;
	float orig_luminosity;
	float orig_diffuse;
};


struct CPhysicsPart
{
	float CYpt;
	AC1Legacy_Vector3 viewer_heading;
	GfxObjDegradeInfo* degrades;
	unsigned int deg_level;
	int deg_mode;
	int draw_state;
	CGfxObj** gfxobj;
	AC1Legacy_Vector3 gfxobj_scale;
	Position pos;
	Position draw_pos;
	CMaterial* material;
	CSurface** surfaces;
	IDClass_tagDataID_32_0 original_palette_id;
	float curTranslucency;
	float curDiffuse;
	float curLuminosity;
	Palette* shiftPal;
	unsigned int m_current_render_frame_num;
	CPhysicsObj* physobj;
	int physobj_index;
};


struct LocationType
{
	LongHashData data;
	unsigned int part_id;
	Frame frame;
};


struct PlacementType
{
	LongHashData data;
	AnimFrame anim_frame;
};


struct CCylSphere
{
	AC1Legacy_Vector3 low_pt;
	float height;
	float radius;
};



struct CSphere
{
	AC1Legacy_Vector3 center;
	float radius;
};



const struct CSetup
{
	SerializeUsingPackDBObj dbobj;
	unsigned int num_parts;
	IDClass_tagDataID_32_0* parts;
	unsigned int* parent_index;
	AC1Legacy_Vector3* default_scale;
	unsigned int num_cylsphere;
	CCylSphere* cylsphere;
	unsigned int num_sphere;
	CSphere* sphere;
	int has_physics_bsp;
	int allow_free_heading;
	float height;
	float radius;
	float step_down_height;
	float step_up_height;
	CSphere sorting_sphere;
	CSphere selection_sphere;
	unsigned int num_lights;
	LIGHTINFO* lights;
	AC1Legacy_Vector3 anim_scale;
	LongHash<LocationType>* holding_locations;
	LongHash<LocationType>* connection_points;
	LongHash<PlacementType> placement_frames;
	IDClass_tagDataID_32_0 default_anim_id;
	IDClass_tagDataID_32_0 default_script_id;
	IDClass_tagDataID_32_0 default_mtable_id;
	IDClass_tagDataID_32_0 default_stable_id;
	IDClass_tagDataID_32_0 default_phstable_id;
};




struct LIGHTLIST
{
	unsigned int num_lights;
	LIGHTOBJ* lightobj;
};

struct MotionState
{
	unsigned int style;
	unsigned int substate;
	float substate_mod;
	MotionList* modifier_head;
	MotionList* action_head;
	MotionList* action_tail;
};


struct MotionTableManager_AnimNode : DLListData
{
	unsigned int motion;
	unsigned int num_anims;
};




struct AnimData : PackObj
{
	IDClass_tagDataID_32_0 anim_id;
	int low_frame;
	int high_frame;
	float framerate;
};


struct __declspec(align(4)) MotionData
{
	PackObj obj;
	LongHashData data;
	char num_anims;
	AnimData* anims;
	AC1Legacy_Vector3 velocity;
	AC1Legacy_Vector3 omega;
	char bitfield;
};


const struct __declspec(align(8)) CMotionTable : SerializeUsingPackDBObj
{
	LongNIValHash<unsigned long> style_defaults;
	LongHash<MotionData> cycles;
	LongHash<MotionData> modifiers;
	LongNIValHash<LongHash<MotionData>*> links;
	unsigned int default_style;
};


struct MotionTableManager
{
	CPhysicsObj* physics_obj;
	CMotionTable* table;
	MotionState state;
	int animation_counter;
	DLList<MotionTableManager_AnimNode> pending_animations;
};


struct CPartArray
{
	unsigned int pa_state;
	CPhysicsObj* owner;
	CSequence sequence;
	MotionTableManager* motion_table_manager; //Fine
	struct CSetup* setup;
	unsigned int num_parts;
	CPhysicsPart** parts; //Not showing up correctly
	AC1Legacy_Vector3 scale;
	Palette** pals;
	LIGHTLIST* lights;
	AnimFrame* last_animframe;
};


const __declspec(align(8)) struct PhysicsScriptTable
{
	SerializeUsingPackDBObj packobj;
	HashTable<unsigned long, PhysicsScriptTableData*, 0> script_table;
};


struct __declspec(align(4)) CPhysicsObj
{
	LongHashData hashdata;
	//NIList<NetBlob*>* netblob_list;
	void* netblob_list;
	CPartArray* part_array;
	AC1Legacy_Vector3 player_vector;
	float player_distance;
	float CYpt;
	CSoundTable* sound_table;
	bool m_bExaminationObject;
	ScriptManager* script_manager;
	PhysicsScriptTable* physics_script_table;
	PScriptType default_script;
	float default_script_intensity;
	CPhysicsObj* parent;
	CHILDLIST* children;
	Position m_position;
	CObjCell* cell;
	unsigned int num_shadow_objects;
	DArray<CShadowObj> shadow_objects;
	unsigned int state;
	unsigned int transient_state;
	float elasticity;
	float translucency;
	float translucencyOriginal;
	float friction;
	float massinv;
	MovementManager* movement_manager;
	PositionManager* position_manager;
	int last_move_was_autonomous;
	int jumped_this_frame;
	long double update_time;
	AC1Legacy_Vector3 m_velocityVector;
	AC1Legacy_Vector3 m_accelerationVector;
	AC1Legacy_Vector3 m_omegaVector;
	PhysicsObjHook* hooks;
	AC1Legacy_SmartArray<CAnimHook*> anim_hooks;
	float m_scale;
	float attack_radius;
	DetectionManager* detection_manager;
	AttackManager* attack_manager;
	TargetManager* target_manager;
	ParticleManager* particle_manager;
	CWeenieObject* weenie_obj;
	Plane contact_plane;
	unsigned int contact_plane_cell_id;
	AC1Legacy_Vector3 sliding_normal;
	AC1Legacy_Vector3 cached_velocity;
	LongNIValHash<CPhysicsObj_CollisionRecord>* collision_table;
	int colliding_with_environment;
	unsigned __int16 update_times[9];
};


const __declspec(align(8)) struct CObjCell
{
	SerializeUsingPackDBObj dbobj;
	CPartCell cellpart;
	LandDefs_WaterType water_type;
	Position pos;
	unsigned int num_objects;
	DArray<CPhysicsObj*> object_list;
	unsigned int num_lights;
	DArray<LIGHTOBJ const*> light_list;
	unsigned int num_shadow_objects;
	DArray<CShadowObj*> shadow_object_list;
	unsigned int restriction_obj;
	ClipPlaneList** clip_planes;
	unsigned int num_stabs;
	unsigned int* stab_list;
	int seen_outside;
	LongNIValHash<GlobalVoyeurInfo>* voyeur_table;
	CLandBlock* myLandBlock_;
};


struct GameSky
{
	AC1Legacy_SmartArray<CelestialPosition> sky_obj_pos;
	AC1Legacy_SmartArray<CPhysicsObj*> sky_obj;
	AC1Legacy_SmartArray<unsigned long> property_array;
	CEnvCell* before_sky_cell;
	CEnvCell* after_sky_cell;
};


struct LScape
{
	int mid_radius;
	int mid_width;
	CLandBlock** land_blocks;
	CLandBlock** block_draw_list;
	unsigned int loaded_cell_id;
	unsigned int viewer_cell_id;
	int viewer_b_xoff;
	int viewer_b_yoff;
	GameSky* sky;
	CSurface* landscape_detail_surface;
	CSurface* environment_detail_surface;
	CSurface* building_detail_surface;
	CSurface* object_detail_surface;
};


struct SmartBox
{
	//SmartBoxVtbl* vfptr;
	void* vfptr;
	int testMode;
	Position viewer;
	CObjCell* viewer_cell;
	unsigned int head_index;
	Position viewer_sought_position;
	CameraManager* camera_manager;
	CellManager* cell_manager;
	CPhysics* physics;
	CObjectMaint* m_pObjMaint;
	LScape* lscape;
	Ambient* ambient_sounds;
	CommandInterpreter* cmdinterp;
	int creature_mode;
	float m_fGameFOV;
	float m_fViewDistFOV;
	bool m_bUseViewDistance;
	float game_ambient_level;
	unsigned int game_ambient_color;
	int game_degrades_disabled;
	int hidden;
	int position_update_complete;
	int waiting_for_teleport;
	int has_been_teleported;
	void* in_queue; //NIList<NetBlob*>* in_queue;
	void* netblob_list;//NIList<NetBlob*>* netblob_list;
	_iobuf* position_and_movement_file;
	unsigned int player_id;
	CPhysicsObj* player;
	unsigned int target_object_id;
	void(__cdecl* target_callback)(unsigned int, ObjectSelectStatus, tagRECT*, const float);
	unsigned int num_cells;
	CEnvCell** cells;
	unsigned int num_objects;
	CPhysicsObj** objects;
	void(__cdecl* m_renderingCallback)();
};


struct IInputActionCallback
{
	void* vfptr;
};


struct CommandInterpreter
{
	IInputActionCallback parent;
	SmartBox* smartbox;
	CPhysicsObj* player;
	CommandList SubstateList;
	CommandList TurnList;
	CommandList SidestepList;
	unsigned int autonomy_level;
	int controlled_by_server;
	int hold_run;
	int hold_sidestep;
	int transient_state;
	int enabled;
	int auto_run;
	int mouselook_active;
	int mouseleft_down;
	float autorun_speed;
	unsigned int action_stamp;
	long double last_sent_position_time;
	Position last_sent_position;
	Plane last_sent_contact_plane;
	const long double time_between_position_events;
};

struct TDynamicCircularArray
{
	void* vfptr;
	AsyncCache_CCallbackHandler** A;
	unsigned int first;
	unsigned int next;
	unsigned int count;
	unsigned int max;
	unsigned int growsize;
};

struct QualifiedDataID
{
	unsigned int Type;
	IDClass_tagDataID_32_0 ID;
};


template <typename K, typename V, size_t S>
struct IntrusiveHashIterator
{
	IntrusiveHashTable<K, V, S>* m_currHashTable;
	V* m_currBucket;
	V m_currElement;
};

struct QualifiedDataIDArray : IntrusiveHashTable<QualifiedDataID, DBObjSaveInfo*, 1>
{
	IntrusiveHashIterator<QualifiedDataID, DBObjSaveInfo*, 1> m_CurBracketIterator;
	unsigned int m_LastBracketIndex;
};



union E6132C438F0B638693FB2F3E0AF1DACE5
{
	unsigned int Op;
	AsyncCache_AsyncOperation eOp;
};

struct AsyncCache_CAsyncRequest : ReferenceCountTemplate_1048576_0
{
	AsyncResult Result;
	E6132C438F0B638693FB2F3E0AF1DACE5 ___u2;
	QualifiedDataID qdid;
	SmartArray<AsyncCache_CAsyncRequest_CCallbackWrapper> m_pCallbacks;
	DBObj* m_pObj;
};


struct AsyncCacheCallback
{
	void* vfptr;
};


/*
 __declspec(align(4)) struct AsyncCache
{
	void* vfptr;
	TDynamicCircularArray m_PendingCallbacks;
	AutoGrowHashTable<QualifiedDataID, CAsyncGetRequest*> m_PendingGets;
	AutoGrowHashTable<AsyncContext, AsyncCache_CCallbackHandler*> m_BusyCallbacks;
	unsigned int dwNextCallbackHandle;
	bool m_bCallingPendingCallbacks;
};
*/

__declspec(align(4)) class AsyncCache
{
	public:
		virtual DBObj* (BlockingGet)(unsigned int, QualifiedDataID*);
		//_BYTE gap4[16];
		virtual void UNUSED1();
		virtual void UNUSED2();
		virtual void UNUSED3();
		virtual void UNUSED4();
		virtual AsyncContext* AsyncGet(AsyncContext* result, unsigned int, QualifiedDataID*, AsyncCacheCallback*, unsigned int);
		virtual void AsyncGetImmediate(AsyncContext*, unsigned int, QualifiedDataIDArray*, AsyncCacheCallback*, unsigned int);
		virtual void UNUSED5(); //virtual __declspec(align(8)) $F1026C46A91364D736E48DC9BF562217 ___u3;
		virtual void UNUSED6();
		virtual AsyncContext*  AsyncSave(AsyncContext* result, QualifiedDataID*, Cache_Pack_t*, unsigned __int64, AsyncCacheCallback*, unsigned int);
		virtual void UNUSED7();//virtual _BYTE gap28[8];
		virtual void UNUSED8();
		//virtual $3578EF11CE7628A82DA0CA7D8F8BA153 ___u5;
		virtual void UNUSED9();
		virtual void ReleaseContext(AsyncContext);
		virtual DBOCache*  GetDBOCache(QualifiedDataID*);
		virtual bool IsOnDisk(QualifiedDataID*);
		virtual bool AreOnDisk(QualifiedDataIDArray*);
		virtual void UseTime(); //__declspec(align(8));
		virtual void UNUSED10();
		virtual void HashAndEnqueue(CAsyncGetRequest*);
		virtual void EnqueueAsyncRequest(AsyncCache_CAsyncRequest*);
		virtual void UnhashPendingGet(CAsyncGetRequest*, CAsyncGetRequest*);
		virtual void FlushPendingRequests();
		virtual void OnRequestFinished(AsyncCache_CAsyncRequest*);
		virtual void OnGetRequestFinished(CAsyncGetRequest*);
		virtual void OnSaveRequestFinished(CAsyncSaveRequest*);
		virtual void OnPurgeRequestFinished(CAsyncPurgeRequest*);
		virtual void NotifyCallback(AsyncCache_CAsyncRequest*);
		virtual void OnAsyncGetFinished(CAsyncGetRequest*);
		virtual void CallPendingCallbacks();
		virtual DBObj* BlockingGetFromDisk(QualifiedDataID*, DBOCache*);
		virtual bool BlockingLoadInto(DBObj*, QualifiedDataID*, DBOCache*);
		virtual bool SerializeFromCachePack(DBObj*, Cache_Pack_t*);
		virtual DBObj* GetIfInMemory(QualifiedDataID*, DBOCache*);
		virtual DBObj* GetFreeObj(QualifiedDataID*, DBOCache*);
		virtual bool AsyncGetFromOtherSources(QualifiedDataID*, DBOCache*);
		virtual void OnAsyncGetFromOtherSourcesFailed(QualifiedDataID*);
		virtual bool AddObjToDBOCache(DBObj*, DBOCache*);
		virtual DiskController* GetDiskController(QualifiedDataID*, unsigned __int64);
		virtual bool LoadData(QualifiedDataID*, Cache_Pack_t*, unsigned __int64);
		virtual bool SaveData(QualifiedDataID*, Cache_Pack_t*, unsigned __int64);
		virtual bool PurgeData(QualifiedDataID*, unsigned __int64);

		TDynamicCircularArray m_PendingCallbacks;
		AutoGrowHashTable<QualifiedDataID, CAsyncGetRequest*> m_PendingGets;
		AutoGrowHashTable<AsyncContext, AsyncCache_CCallbackHandler*> m_BusyCallbacks;
		unsigned int dwNextCallbackHandle;
		bool m_bCallingPendingCallbacks;
};


struct IDataGraph
{
	void* vfptr;
};


struct DBCache
{
	Interface _interface;
	AsyncCache asyncCache;
	Turbine_RefCount m_cTurbineRefCount;
	IDClass_tagDataID_32_0 m_MasterMapID;
	unsigned int m_CurrentRegion;
	unsigned int m_LocalLanguage;
	bool m_bRuntime;
	bool m_bIsClient;
	bool m_bIsServer;
	IDataGraph* m_pDataGraph;
};

struct WaveFile
{
	void* vfptr;
	tWAVEFORMATEX* m_pwfmt;
	char* m_pData;
	HMMIO__* m_hmmio;
	unsigned int m_mmr;
	_MMCKINFO m_mmckiRiff;
	_MMCKINFO m_mmckiFmt;
	_MMCKINFO m_mmckiData;
	unsigned int m_nDuration;
	unsigned int m_nBlockAlign;
	unsigned int m_nAvgDataRate;
	unsigned int m_nDataSize;
	unsigned int m_nFormatSize;
	unsigned int m_nBytesPlayed;
};

struct DBWave
{
	SerializeUsingPackDBObj packobj;
	WaveFile wave;
};


struct ChatPoseTable
{
	SerializeUsingPackDBObj packobj;
	void* _chatPostHash; //PackableHashTable<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >, AC1Legacy_PStringBase<char> > _chatPoseHash;
	void* _chatEmoteHash; // PackableHashTable<AC1Legacy_PStringBase<char>, ChatEmoteData> _chatEmoteHash;
};

struct ReferenceCountTemplate_268435456_0
{
	void* vfptr;
	unsigned int m_cRef;
};

struct __declspec(align(4)) AC1Legacy_PSRefBuffer_char
{
	ReferenceCountTemplate_268435456_0 reftemplate;
	unsigned int m_len;
	unsigned int m_size;
	unsigned int m_hash;
	char m_data[1];
};


struct AC1Legacy_PStringBase_char
{
	AC1Legacy_PSRefBuffer_char* m_buffer;
};


 __unaligned __declspec(align(4)) struct cWObjHierNode
{
	AC1Legacy_SmartArray<cWObjHierNode*> smartarray;
	AC1Legacy_PStringBase_char _menu_name;
	unsigned int _wcid;
};


struct __declspec(align(8)) cWObjHierRootNode
{
	SerializeUsingPackDBObj packobj;
	cWObjHierNode node;
};

struct __declspec(align(8)) BadData
{
	SerializeUsingPackDBObj packobj;
	PackableHashTable<unsigned int, int> _bad;
};


 __declspec(align(8)) struct TabooTable
{
	DBObj dbobj;
	HashTable<unsigned long, HashTable<unsigned long, List<PStringBase_char>, 0>, 0> m_audienceToBannedPatterns;
};

struct TReadOnlyFile2IDTable
{
	void* vfptr;
};



struct TFileEntry
{
	ReferenceCountTemplate referencetemplate;
	PStringBase_char m_pPath;
	PStringBase_char m_pFileName;
	unsigned int m_did;
	unsigned int m_dbtype;
	FileEntryType m_EntryType;
	bool m_bAuthoritative;
	int m_tFileWriteTime;
};


struct TDBTypeEntry
{
	bool bRecursed;
	bool bRegistered;
	PStringBase_char pRootGamePath;
	PStringBase_char pRootEngPath;
	PStringBase_char TypeName;
	unsigned int  HighestDIDAssigned;
	AutoGrowHashTable<unsigned int, TFileEntry*> DIDs;
};

struct TFile2IDTable
{
	TReadOnlyFile2IDTable readonlyfile2idtable;
	AutoGrowHashTable<PStringBase_char, TFileEntry*> m_CacheByFileName;
	AutoGrowHashTable<unsigned long, TDBTypeEntry*> m_CacheByDID;
};

struct __declspec(align(8)) DBFile2IDTable
{
	DBObj dbobj;
	TFile2IDTable file2idtable;
};


//---



struct NameFilterLanguageData
{
	unsigned int m_MaximumSameCharactersInARow;
	unsigned int m_MaximumVowelsInARow;
	unsigned int m_FirstNCharactersMustHaveAVowel;
	unsigned int m_VowelContainingSubstringLength;
	PStringBase_ushort m_ExtraAllowedCharacters;
	SmartArray<PStringBase_ushort> m_CompoundLetterGroups;
};


struct __declspec(align(8)) NameFilterTable
{
	DBObj dbobj;
	HashTable<unsigned long, NameFilterLanguageData, 0> m_LanguageData;
};


//---

struct PalSet
{
	SerializeUsingPackDBObj dbobj;
	unsigned int num_pals;
	unsigned int* palette_IDs; //TODO: Marshal as array,  DID
};

//---


struct CloSubpalEffect : PackObj
{
	unsigned int numRanges;
	unsigned int* rangeStart;
	unsigned int* rangeLength;
	unsigned int palSet; //DID
};

struct CloPaletteTemplate : PackObj
{
	unsigned int iconID;  //DID
	unsigned int numSubpalEffects;
	CloSubpalEffect* subpalEffects;
};

struct ClothingBase
{
	PackObj packobj;
	unsigned int numObjectEffects;
	CloObjectEffect* objectEffects; //TODO: Marshal as array
};

struct ClothingTable
{
	SerializeUsingPackDBObj packobj;
	PackableHashTable<unsigned int, ClothingBase> _cloBaseHash;
	PackableHashTable<unsigned long, CloPaletteTemplate> _paletteTemplatesHash;
};


//---


struct ObjectDesc
{
	unsigned int obj_id; //DID
	Frame base_loc;
	float freq;
	float displace_x;
	float displace_y;
	float min_scale;
	float max_scale;
	float max_rot;
	float min_slope;
	float max_slope;
	int align;
	int orient;
	int weenie_obj;
};

__declspec(align(8)) struct Scene
{
	SerializeUsingPackDBObj packobj;
	unsigned int version;
	unsigned int num_objects;
	ObjectDesc* objects;
};


//---


struct FileNameDesc
{
	AC1Legacy_PStringBase_char height_map;
	AC1Legacy_PStringBase_char terrain_map;
	AC1Legacy_PStringBase_char scene_map;
	AC1Legacy_PStringBase_char encounter_type_map;
};

struct SkyObject
{
	char* object_name;
	float begin_time;
	float end_time;
	float begin_angle;
	float end_angle;
	AC1Legacy_Vector3 tex_velocity;
	unsigned int properties;
	unsigned int default_gfx_object;  //DID
	unsigned int default_pes_object; //DID
};

struct SkyObjectReplace
{
	unsigned int object_index;
	SkyObject* object;
	unsigned int gfx_obj_id; //DID
	float rotate;
	float transparent;
	float luminosity;
	float max_bright;
};

struct SkyTimeOfDay
{
	float begin;
	float dir_bright;
	float dir_heading;
	float dir_pitch;
	unsigned int dir_color; //RGBAUnion
	float amb_bright;
	unsigned int amb_color; //RGBAUnion
	int world_fog;
	float min_world_fog;
	float max_world_fog;
	unsigned int world_fog_color; //RGBAUnion
	AC1Legacy_SmartArray<SkyObjectReplace*> sky_obj_replace;
};

struct DayGroup
{
	AC1Legacy_PStringBase_char day_name;
	float chance_of_occur;
	AC1Legacy_SmartArray<SkyTimeOfDay*> sky_time;
	AC1Legacy_SmartArray<SkyObject*> sky_objects;
};

struct __declspec(align(8)) SkyDesc
{
	unsigned int present_day_group;
	long double tick_size;
	long double light_tick_size;
	AC1Legacy_SmartArray<DayGroup*> day_groups;
};

struct CSoundDesc
{
	AC1Legacy_SmartArray<AmbientSTBDesc*> stb_desc;
};

struct CSceneType
{
	PStringBase_char scene_name;
	SmartArray<unsigned int> scenes;
	AmbientSTBDesc* sound_table_desc;
};


struct CSceneDesc
{
	AC1Legacy_SmartArray<CSceneType*> scene_types;
};



struct PalShiftSubPal
{
	unsigned int sub_pal_index;
	unsigned int sub_pal_length;
};

struct PalShiftTerrainPal
{
	LandDefs_TerrainType terrain_index;
	unsigned int pal_id; //DID
};

struct PalShiftRoadCode
{
	unsigned int road_code;
	LandDefs_PalType* sub_pal_type;
};

struct PalShiftTex
{
	unsigned int tex_gid; //DID
	AC1Legacy_SmartArray<PalShiftSubPal*> sub_pal;
	AC1Legacy_SmartArray<PalShiftRoadCode*> road_code;
	AC1Legacy_SmartArray<PalShiftTerrainPal*> terrain_pal;
};


struct Subpalette
{
	PackObj packobj;
	unsigned int subID; //DID
	unsigned int offset;
	unsigned int numcolors;
	Subpalette* prev;
	Subpalette* next;
};

struct PalShift
{
	unsigned int cur_tex;
	AC1Legacy_SmartArray<PalShiftTex*> land_tex;
	Subpalette* sub_pals;
	unsigned int maxsubs;
};

struct RoadAlphaMap
{
	unsigned int rcode;
	unsigned int road_tex_gid; //DID
	ImgTex* texture;
};

struct TerrainAlphaMap
{
	unsigned int tcode;
	unsigned int tex_gid; //DID
	ImgTex* texture;
};


struct TerrainTex
{
	unsigned int tex_gid;  //DID
	ImgTex* base_texture;
	float min_slope;
	unsigned int tex_tiling;
	unsigned int max_vert_bright;
	unsigned int min_vert_bright;
	unsigned int max_vert_saturate;
	unsigned int min_vert_saturate;
	unsigned int max_vert_hue;
	unsigned int min_vert_hue;
	unsigned int detail_tex_tiling;
	unsigned int detail_tex_gid; //DID
};

struct TMTerrainDesc
{
	LandDefs_TerrainType terrain_type;
	AC1Legacy_SmartArray<TerrainTex*> terrain_tex;
};


struct TexMerge
{
	unsigned int base_tex_size;
	AC1Legacy_SmartArray<TerrainAlphaMap*> corner_terrain_maps;
	AC1Legacy_SmartArray<TerrainAlphaMap*> side_terrain_maps;
	AC1Legacy_SmartArray<RoadAlphaMap*> road_maps;
	AC1Legacy_SmartArray<TMTerrainDesc*> terrain_desc;
};

struct SurfInfo
{
	unsigned int palcode;
	unsigned int lcell_count;
	CSurface* surface;
	unsigned int surf_num;
};

struct CTerrainType
{
	AC1Legacy_PStringBase_char terrain_name;
	unsigned int terrain_color; //RGBAUnion
	AC1Legacy_SmartArray<CSceneType*> scene_types;
};


struct LandSurf
{
	PalShift* pal_shift;
	TexMerge* tex_merge;
	LongNIValHash<SurfInfo*>* surf_info;
	unsigned int num_lsurf;
	CSurface** lsurf;
	unsigned int num_unique_surfaces;
	unsigned int num_block_surfs;
	AC1Legacy_SmartArray<CSurface*> block_surf_array;
	char* curr_tex;
};

struct CTerrainDesc
{
	LandSurf* land_surfaces;
	AC1Legacy_SmartArray<CTerrainType*> terrain_types;
};


struct EncounterType
{
	unsigned int* encounter; //DID
};

struct CEncounterDesc
{
	unsigned int num_encounter_type;
	EncounterType** encounter_table;
	char* encounter_map;
};



struct RegionMisc
{
	unsigned int version;
	unsigned int game_map; //DID
	unsigned int autotest_map; //DID
	unsigned int autotest_map_size;
	unsigned int clear_cell;  //DID
	unsigned int clear_monster;  //DID
};




struct CRegionDesc 
{
	SerializeUsingPackDBObj packobj;
	unsigned int region_number;
	AC1Legacy_PStringBase_char region_name;
	unsigned int version;
	int minimize_pal;
	unsigned int parts_mask;
	FileNameDesc* file_info;
	SkyDesc* sky_info;
	CSoundDesc* sound_info;
	CSceneDesc* scene_info;
	CTerrainDesc* terrain_info;
	CEncounterDesc* encounter_info;
	void* water_info; //WaterDesc type, shows as blank in header files
	void* fog_info; //FogDesc type, shows as blank in header files
	void* dist_fog_info; //DistanceFogDesc type, shows as blank in header files
	void* region_map_info; //RegionMapDesc type, shows as blank in header files
	RegionMisc* region_misc;
};

//---

struct EnumMapper
{
	DBObj dbobj;
	unsigned int m_base_emp_did; //did
	EnumMapper* m_base_emp;
	AutoGrowHashTable<unsigned long, PStringBase_char> m_id_to_string_map; //AutoGrowHashTable<unsigned long, CaseInsensitiveStringBase<PStringBase_char > > m_id_to_string_map;
	AutoGrowHashTable<PStringBase_char, unsigned long> m_string_to_id_map; //AutoGrowHashTable<CaseInsensitiveStringBase<PStringBase_char>, unsigned long> m_string_to_id_map;
};

//---

struct StringTable
{
	DBObj dbobj;
	unsigned int m_version;
	PStringBase_ushort m_description;
	unsigned int m_language;
	HashTable<unsigned long, StringTableString*, 0> m_strings;
};

//---


struct EnumIDMap
{
	DBObj dbobj;
	/*HashTable<unsigned long, IDClass<_tagDataID, 32, 0>, 0> m_EnumToID;
	HashTable<unsigned long, IDClass<_tagDataID, 32, 0>, 0> m_EnumToIDInternal;
	HashTable<unsigned long, PStringBase<char>, 0> m_EnumToName;
	HashTable<unsigned long, PStringBase<char>, 0> m_EnumToNameInternal;*/
	HashTable<unsigned long, unsigned int, 0> m_EnumToID;
	HashTable<unsigned long, unsigned int, 0> m_EnumToIDInternal;
	HashTable<unsigned long, PStringBase_char, 0> m_EnumToName;
	HashTable<unsigned long, PStringBase_char, 0> m_EnumToNameInternal;
};

//---

 __declspec(align(8)) struct DualEnumIDMap
{
	EnumIDMap enumidmap;
	HashTable<unsigned int, unsigned long, 0> m_IDToEnum;
};

//---


 __declspec(align(8)) struct ACString
{
	DBObj dbobj;
	PStringBase_char str;
};


 //---

 struct ParticleEmitterInfo
 {
	 SerializeUsingPackDBObj packobj;
	 int emitter_type;
	 int particle_type;
	 int is_parent_local;
	 unsigned int gfxobj_id; //DID
	 unsigned int hw_gfxobj_id; //DID
	 long double birthrate;
	 int max_particles;
	 int initial_particles;
	 int total_particles;
	 long double total_seconds;
	 long double lifespan_rand;
	 long double lifespan;
	 CSphere sorting_sphere;
	 AC1Legacy_Vector3 offset_dir;
	 float min_offset;
	 float max_offset;
	 AC1Legacy_Vector3 a;
	 AC1Legacy_Vector3 b;
	 AC1Legacy_Vector3 c;
	 float min_a;
	 float max_a;
	 float min_b;
	 float max_b;
	 float min_c;
	 float max_c;
	 float scale_rand;
	 float start_scale;
	 float final_scale;
	 float trans_rand;
	 float start_trans;
	 float final_trans;
 };

 //---


 const __declspec(align(8)) struct MasterProperty
 {
	 DBObj dbobj;
	 EnumMapper m_emapper;
	 HashTable<unsigned long, BasePropertyDesc*, 0> m_properties;
 };


 //---


  __unaligned __declspec(align(1))  struct FontCharDesc
 {
	 unsigned __int16 m_Unicode;
	 unsigned __int16 m_OffsetX;
	 unsigned __int16 m_OffsetY;
	 char m_Width;
	 char m_Height;
	 char m_HorizontalOffsetBefore;
	 char m_HorizontalOffsetAfter;
	 char m_VerticalOffsetBefore;
 };

 struct Font
 {
	 DBObj dbobj;
	 unsigned int maxCharHeight;
	 unsigned int maxCharWidth;
	 unsigned int numCharacters;
	 FontCharDesc* charDescs;
	 unsigned int m_NumHorizontalBorderPixels;
	 unsigned int m_NumVerticalBorderPixels;
	 int m_BaselineOffset;
	 PStringBase_char m_ForegroundSurfaceFileName;
	 unsigned int m_ForegroundSurfaceDataID; //did
	 RenderSurface* m_pForegroundSurface;
	 PStringBase_char m_BackgroundSurfaceFileName;
	 unsigned int m_BackgroundSurfaceDataID; //did
	 RenderSurface* m_pBackgroundSurface;
	 unsigned __int16 minUnicodeChar;
	 unsigned __int16 maxUnicodeChar;
	 unsigned int unicodeRangeLength;
	 unsigned __int16* characterMap;
 };


 //---

 struct FontLocal //Same data structure as font
 {
	 Font font;
 };

 //---


 struct CLanguageInfo
 {
	 DBObj dbobj;
	 int version;
	 unsigned __int16 base;
	 unsigned __int16 numDecimalDigits;
	 bool leadingZero;
	 unsigned __int16 groupingSize;
	 PStringBase_ushort numerals;
	 PStringBase_ushort decimalSeperator;
	 PStringBase_ushort groupingSeperator;
	 PStringBase_ushort negativeNumberFormat;
	 bool isZeroSingular;
	 bool isOneSingular;
	 bool isNegativeOneSingular;
	 bool isTwoOrMoreSingular;
	 bool isNegativeTwoOrLessSingular;
	 PStringBase_ushort treasurePrefixLetters;
	 PStringBase_ushort treasureMiddleLetters;
	 PStringBase_ushort treasureSuffixLetters;
	 PStringBase_ushort malePlayerLetters;
	 PStringBase_ushort femalePlayerLetters;
	 unsigned int m_ImeEnabledSetting;
	 unsigned int m_symbolColor;
	 unsigned int m_symbolColorText;
	 unsigned int m_symbolHeight;
	 unsigned int m_symbolTranslucence;
	 unsigned int m_symbolPlacement;
	 unsigned int m_candColorBase;
	 unsigned int m_candColorBorder;
	 unsigned int m_candColorText;
	 unsigned int m_compColorInput;
	 unsigned int m_compColorTargetConv;
	 unsigned int m_compColorConverted;
	 unsigned int m_compColorTargetNotConv;
	 unsigned int m_compColorInputErr;
	 unsigned int m_compTranslucence;
	 unsigned int m_compColorText;
	 unsigned int m_otherIME;
	 int m_wordWrapOnSpace;
	 PStringBase_ushort m_additionalSettings;
	 unsigned int m_additionalFlags;
 };

 //---


 struct BaseProperty
 {
	 BasePropertyDesc* m_pcPropertyDesc;
	 BasePropertyValue* m_pcPropertyValue;
 };


 const struct PropertyCollection
 {
	 PropertyCollectionVtbl* vfptr;
	 AutoGrowHashTable<unsigned long, BaseProperty> m_hashProperties;
 };

 struct DBPropertyCollection
 {
	 PropertyCollection propertycollection;
	 DBObj dbobj;
 };


 //---


 struct SoundTableData
 {
	 PackObj packobj;
	 IntrusiveHashData<unsigned long, SoundTableData*> hashdata;
	 IntrusiveHashTable<unsigned long, SoundTableData*, 0> sound_hash_;
	 unsigned int num_stdatas_;
	 SoundData* data_;
 };

 const __declspec(align(8)) struct CSoundTable
 {
	 SerializeUsingPackDBObj packobj;
	 SoundTableData sound_data_;
 };


 //---




 struct StateDesc
 {
	 void* vfptr;
	 unsigned int m_uiIncorporationFlags;
	 unsigned int m_stateID;
	 bool m_bIsCode;
	 bool m_bPassToChildren;
	 int m_x;
	 int m_y;
	 int m_width;
	 int m_height;
	 int m_zLevel;
	 PropertyCollection m_properties;
	 SmartArray<MediaDesc*> m_media;
 };


 __unaligned __declspec(align(4)) struct ElementDesc
 {
	 StateDesc statedesc;
	 unsigned int m_elementID;
	 unsigned int m_type;
	 unsigned int m_engineType;
	 unsigned int m_baseElement;
	 unsigned int m_baseLayout; //DID
	 unsigned int m_defaultState;
	 unsigned int m_leftEdge;
	 unsigned int m_topEdge;
	 unsigned int m_rightEdge;
	 unsigned int m_bottomEdge;
	 HashTable<unsigned long, StateDesc, 0> m_states;
	 HashTable<unsigned long, ElementDesc, 0> m_children;
	 unsigned int m_uiReadOrder;
	 PStringBase_char m_strComments;
	 PStringBase_char m_strName;
 };


 const struct __declspec(align(8)) LayoutDesc
 {
	 DBObj dbobj;
	 unsigned int m_displayWidth;
	 unsigned int m_displayHeight;
	 HashTable<unsigned long, ElementDesc, 0> m_elements;
	 PStringBase_char m_strElementHeader;
	 PStringBase_char m_strElementWHeader;
	 PStringBase_char m_strStateHeader;
	 PStringBase_char m_strStateWHeader;
 };


 //---


 __declspec(align(8)) struct PhysicsScriptData
 {
	 long double start_time;
	 CAnimHook* hook;
 };

 struct OldSmartArray_PhysicsScriptData
 {
	 PhysicsScriptData** data;
	 int grow_size;
	 int mem_size;
	 int num_in_array;
 };

 const struct PhysicsScript
 {
	 SerializeUsingPackDBObj packobj;
	 OldSmartArray_PhysicsScriptData script_data;
	 long double length;
 };


 //---


 __declspec(align(4)) struct RenderMesh
 {
	 DBObj dbobj;
	 unsigned int m_InstanceFlags;
	 unsigned int m_MeshAppearanceType;
	 RenderMeshMaterialArray* m_pMaterialArray;
	 RenderMeshVerticesArray* m_pVerticesArray;
	 RenderMeshIndicesArray* m_pIndicesArray;
	 SmartArray<RenderMeshFragment*> m_Fragments;
	 SmartArray<unsigned long> m_RenderLODFragmentIndices;
	 SmartArray<unsigned long> m_OccluderFragmentIndices;
	 unsigned int m_ShadowLODFragmentIndex;
	 bool m_CachedSupportsLighting;
	 bool m_CachedSupportsMultiPassLighting;
	 bool m_CachedSupportsCombinedAmbientPass;
	 bool m_CachedIsGlowing;
	 bool m_CachedNeedAlphaBlendPass;
	 bool m_CachedHasSkeletalData;
	 bool m_CachedAllSkeletalLODsWereBlended;
	 unsigned int m_CachedSkeletalRenderLODIndex;
	 unsigned int m_CachedSkeletalShadowVolumeLODIndex;
	 BBox m_CachedRenderBoundingBox;
	 BBox m_CachedSkinnedBoundingBox;
	 bool m_IsSkinnedBoundingBoxValid;
 };


 //---


 struct CLandBlockInfo
 {
	 SerializeUsingPackDBObj packobj;
	 unsigned int num_objects;
	 unsigned int* object_ids;  //DID
	 Frame* object_frames;
	 unsigned int num_buildings;
	 BuildInfo** buildings;
	 PackableHashTable<unsigned long, unsigned long>* restriction_table;
	 PackableHashTable<unsigned long, PackableList<unsigned long> >* cell_ownership;
	 unsigned int num_cells;
	 unsigned int* cell_ids;
	 CEnvCell** cells;
 };



 //---



 struct CEnvCell
 {
	 CObjCell objcell;
	 unsigned int num_surfaces;
	 CSurface** surfaces;
	 CCellStruct* structure;
	 CEnvironment* env;
	 unsigned int num_portals;
	 CCellPortal* portals;
	 unsigned int num_static_objects;
	 unsigned int* static_object_ids; //DID
	 Frame* static_object_frames;
	 CPhysicsObj** static_objects;
	 RGBColor* light_array;
	 int incell_timestamp;
	 MeshBuffer* constructed_mesh;
	 int use_built_mesh;
	 unsigned int m_current_render_frame_num;
	 unsigned int num_view;
	 DArray<portal_view_type*> portal_view;
 };



 //---



 __declspec(align(8)) struct CAnimation
 {
	 SerializeUsingPackDBObj packobj;
	 AFrame* pos_frames;
	 AnimFrame* part_frames;
	 int has_hooks;
	 unsigned int num_parts;
	 unsigned int num_frames;
 };


 //---



 struct CCellStruct
 {
	 unsigned int cellstruct_id;
	 CVertexArray vertex_array;
	 unsigned int num_portals;
	 CPolygon** portals;
	 unsigned int num_surface_strips;
	 CSurfaceTriStrips* surface_strips;
	 unsigned int num_polygons;
	 CPolygon* polygons;
	 BSPTREE* drawing_bsp;
	 unsigned int num_physics_polygons;
	 CPolygon* physics_polygons;
	 BSPTREE* physics_bsp;
	 BSPTREE* cell_bsp;
 };



 struct CEnvironment
 {
	 SerializeUsingPackDBObj dbobj;
	 unsigned int num_cells;
	 CCellStruct* cells;
 };


 //---


 //---




 struct GfxObjInfo
 {
	 unsigned int gfxobj_id; //did
	 int degrade_mode;
	 float min_dist;
	 float ideal_dist;
	 float max_dist;
 };


 struct GfxObjDegradeInfo : SerializeUsingPackDBObj
 {
	 unsigned int num_degrades;
	 GfxObjInfo* degrades;
 };



 struct DeviceKeyMapEntry
 {
	 DeviceType dt;
	 Turbine_GUID guid;
 };



 struct ControlSpecification
 {
	 unsigned int m_dwKey; //See original h file for union type map
 };

 __declspec(align(8)) struct CMasterInputMap
 {
	 DBObj dbobj;
	 PStringBase_char m_strName;
	 Turbine_GUID m_guidMap;
	 SmartArray<DeviceKeyMapEntry> m_rgDevices;
	 HashList<ControlSpecification, unsigned long, 1> m_listMetaKeys;
	 HashList<unsigned long, CInputMap*, 1> m_hashSections;
	 unsigned int m_dwUsedMetaKeys;
 };


#endif
