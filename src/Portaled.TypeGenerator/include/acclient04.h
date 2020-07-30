

struct HashList<unsigned long,CInputMap *,1>
{
  IntrusiveHashList<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1> m_ihlIntrusive;
};


struct __declspec(align(8)) CMasterInputMap : DBObj
{
  PStringBase<char> m_strName;
  Turbine_GUID m_guidMap;
  SmartArray<DeviceKeyMapEntry,1> m_rgDevices;
  HashList<ControlSpecification,unsigned long,1> m_listMetaKeys;
  HashList<unsigned long,CInputMap *,1> m_hashSections;
  unsigned int m_dwUsedMetaKeys;
};


struct IntrusiveHashTable<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashData<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *>
{
  QualifiedControl m_hashKey;
  HashList<QualifiedControl,unsigned long,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *> : IntrusiveHashData<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *>, DLListData
{
};


struct HashList<QualifiedControl,unsigned long,1>_HashListData : IntrusiveHashListData<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *>
{
  unsigned int m_data;
};


struct IntrusiveHashListIterator<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1>
{
  HashList<unsigned long,CInputMap *,1>_HashListData *m_pData;
  IntrusiveHashList<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<unsigned long,CInputMap *,1> >
{
  IntrusiveHashListIterator<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1> m_iter;
};


struct IntrusiveHashListIterator<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1>
{
  HashList<ControlSpecification,unsigned long,1>_HashListData *m_pData;
  IntrusiveHashList<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<ControlSpecification,unsigned long,1> >
{
  IntrusiveHashListIterator<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1> m_iter;
};


struct IntrusiveHashIterator<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1>
{
  IntrusiveHashTable<ControlSpecification,HashList<ControlSpecification,unsigned long,1>_HashListData *,1> *m_currHashTable;
  HashList<ControlSpecification,unsigned long,1>_HashListData **m_currBucket;
  HashList<ControlSpecification,unsigned long,1>_HashListData *m_currElement;
};


struct InputMapList : List<unsigned long>
{
};


struct IntrusiveHashData<unsigned long,ActionState *>
{
  unsigned int m_hashKey;
  ActionState *m_hashNext;
};


struct SmartArray<ActionState_SingleKeyInfo,1>
{
  ActionState_SingleKeyInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct ActionState : IntrusiveHashData<unsigned long,ActionState *>
{
  long double m_timeActionBegan;
  unsigned int m_cRepeatCount;
  unsigned int m_toggle;
  IInputActionCallback *m_pcCallback;
  SmartArray<ActionState_SingleKeyInfo,1> m_rgKeys;
};


struct ActionState_SingleKeyInfo
{
  ControlSpecification key;
  float extent;
};


struct AutoRegisterInputHandler : CInputHandler
{
  unsigned int m_RegisteredTypes;
};


struct HashBaseData<unsigned long>
{
  HashBaseData<unsigned long>Vtbl *vfptr;
  HashBaseData<unsigned long> *hash_next;
  unsigned int id;
};


struct HashBaseData<unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashBaseData<unsigned long> *this, unsigned int);
};



struct TSBlockedEntry
{
  TSBlockedEntry *m_pNext;
  unsigned int m_stamp;
  ReferenceCountTemplate_1048576_0 *m_pObj;
};


struct TSRecv
{
  int receivedFirstEntry_;
  TSRecvMode mode_;
  unsigned int overflowLimit_;
  unsigned int highestStamp_;
  TSBlockedEntry head_;
  int numBlockedStamps_;
  long double blockedSince_;
};


struct ListIterator<NoticeHandler *>
{
  ListIterator<NoticeHandler *>Vtbl *vfptr;
  ListNode<NoticeHandler *> *_current;
  List<NoticeHandler *> *_list;
};


struct ListIterator<NoticeHandler *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<NoticeHandler *> *this, unsigned int);
};


struct ListNode<NoticeHandler *>
{
  NoticeHandler *data;
  ListNode<NoticeHandler *> *next;
  ListNode<NoticeHandler *> *prev;
};


struct List<NoticeHandler *>
{
  List<NoticeHandler *>Vtbl *vfptr;
  ListNode<NoticeHandler *> *_head;
  ListNode<NoticeHandler *> *_tail;
  unsigned int _num_elements;
};




struct List<NoticeHandler *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<NoticeHandler *> *this, unsigned int);
};


struct NoticeHandlerVtbl
{
  bool (__thiscall *IsEngine)(NoticeHandler *this);
  _BYTE gap4[8];
  void (__thiscall *RecvNotice_RuntimeDDDStatus)(NoticeHandler *this, bool, unsigned int, unsigned int);
  void (__thiscall *RecvNotice_ItemAttributesChanged)(NoticeHandler *this, unsigned int, unsigned int);
  void (__thiscall *RecvNotice_ServerSaysAttemptFailed)(NoticeHandler *this, unsigned int);
  void (__thiscall *RecvNotice_ServerSaysMoveItem)(NoticeHandler *this, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
  void (__thiscall *RecvNotice_SetSelectedItem)(NoticeHandler *this, unsigned int, unsigned int);
  void (__thiscall *RecvNotice_CharacterError)(NoticeHandler *this, charError);
  void (__thiscall *RecvNotice_ServerDied)(NoticeHandler *this);
  void (__thiscall *RecvNotice_WorldName)(NoticeHandler *this, AC1Legacy_PStringBase<char> *);
  void (__thiscall *RecvNotice_BeingDeleted)(NoticeHandler *this, CWeenieObject *);
  void (__thiscall *RecvNotice_CreateObject)(NoticeHandler *this, unsigned int);
  void (__thiscall *RecvNotice_CloseDialog)(NoticeHandler *this, unsigned int, PropertyCollection *);
  void (__thiscall *RecvNotice_DisplayFinalStringInfo)(NoticeHandler *this, unsigned int, StringInfo *, StringInfo *, unsigned int);
  void (__thiscall *RecvNotice_DisplayStringInfo)(NoticeHandler *this, unsigned int, StringInfo *);
  void (__thiscall *RecvNotice_DisplayWeenieError)(NoticeHandler *this, unsigned int, AC1Legacy_PStringBase<char> *);
  void (__thiscall *RecvNotice_OpenDialog)(NoticeHandler *this, unsigned int);
  void (__thiscall *RecvNotice_SmartBoxObjectFound)(NoticeHandler *this, unsigned int);
  void (__thiscall *RecvNotice_TextTag_DIDClick)(NoticeHandler *this, unsigned int, IDClass<_tagDataID,32,0>);
  void (__thiscall *RecvNotice_TextTag_IIDClick)(NoticeHandler *this, unsigned int, unsigned int);
  void (__thiscall *RecvNotice_TextTag_IIDEnumClick)(NoticeHandler *this, unsigned int, unsigned int, unsigned int);
  void (__thiscall *RecvNotice_TextTag_IIDStringClick)(NoticeHandler *this, unsigned int, unsigned int, PStringBase<unsigned short> *);
  void (__thiscall *RecvNotice_UpdateGameView)(NoticeHandler *this, unsigned int, unsigned int, unsigned int, unsigned int);
};


struct NoticeRegistrar
{
  NoticeRegistrarVtbl *vfptr;
  HashTable<unsigned long,List<NoticeHandler *> *,0> *m_handlers;
};


struct CWeenieObject : LongHashData, NoticeRegistrar
{
  long double update_time;
  NIList<NetBlob *> *netblob_list;
  TSRecv blobOrdering;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BaseProperty> *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BaseProperty> *,1>Vtbl *vfptr;
  HashTableData<unsigned long,BaseProperty> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,BaseProperty> **m_buckets;
  HashTableData<unsigned long,BaseProperty> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,BaseProperty,1>
{
  HashTable<unsigned long,BaseProperty,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BaseProperty> *,1> m_intrusiveTable;
};


struct AutoGrowHashTable<unsigned long,BaseProperty> : HashTable<unsigned long,BaseProperty,1>
{
};




struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringInfoData *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringInfoData *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,StringInfoData *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,StringInfoData *> **m_buckets;
  HashTableData<unsigned long,StringInfoData *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,StringInfoData *,0>
{
  HashTable<unsigned long,StringInfoData *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringInfoData *> *,0> m_intrusiveTable;
};


const struct StringInfo
{
  PStringBase<char> m_strToken;
  unsigned int m_stringID;
  IDClass<_tagDataID,32,0> m_tableID;
  HashTable<unsigned long,StringInfoData *,0> m_variables;
  PStringBase<unsigned short> m_LiteralValue;
  char m_Override;
  PStringBase<char> m_strEnglish;
  PStringBase<char> m_strComment;
};


struct NoticeRegistrarVtbl
{
  void *(__thiscall *__vecDelDtor)(NoticeRegistrar *this, unsigned int);
  bool (__thiscall *RegisterNoticeHandler)(NoticeRegistrar *this, unsigned int, NoticeHandler *);
  bool (__thiscall *UnRegisterNoticeHandler)(NoticeRegistrar *this, unsigned int, NoticeHandler *);
  bool (__thiscall *UnRegisterAllNoticeHandlers)(NoticeRegistrar *this, NoticeHandler *);
  List<NoticeHandler *> *(__thiscall *GetNoticeHandlers)(NoticeRegistrar *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,List<NoticeHandler *> *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,List<NoticeHandler *> *> **m_buckets;
  HashTableData<unsigned long,List<NoticeHandler *> *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,List<NoticeHandler *> *,0>
{
  HashTable<unsigned long,List<NoticeHandler *> *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *,0> m_intrusiveTable;
};


struct PropertyCollectionVtbl
{
  void *(__thiscall *__vecDelDtor)(PropertyCollection *this, unsigned int);
  void (__thiscall *Destroy)(PropertyCollection *this);
};


struct HashTable<unsigned long,BaseProperty,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,BaseProperty,1> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BaseProperty> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BaseProperty> *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,BaseProperty> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,BaseProperty> *m_hashNext;
};



struct HashTableData<unsigned long,BaseProperty> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,BaseProperty> *>
{
  BaseProperty m_data;
};


struct HashTable<unsigned long,StringInfoData *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,StringInfoData *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringInfoData *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringInfoData *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,StringInfoData *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,StringInfoData *> *m_hashNext;
};


struct HashTableData<unsigned long,StringInfoData *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,StringInfoData *> *>
{
  StringInfoData *m_data;
};


struct HashTable<unsigned long,List<NoticeHandler *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,List<NoticeHandler *> *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,List<NoticeHandler *> *> *m_hashNext;
};


struct HashTableData<unsigned long,List<NoticeHandler *> *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *>
{
  List<NoticeHandler *> *m_data;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AvailableProperty> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AvailableProperty> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,AvailableProperty> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,AvailableProperty> **m_buckets;
  HashTableData<unsigned long,AvailableProperty> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,AvailableProperty,0>
{
  HashTable<unsigned long,AvailableProperty,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AvailableProperty> *,0> m_intrusiveTable;
};


struct AvailablePropertySet
{
  HashTable<unsigned long,AvailableProperty,0> m_reqHash;
};


struct BasePropertyDesc : ReferenceCountTemplate<1048576,1>
{
  unsigned int m_propertyName;
  unsigned int m_propertyType;
  unsigned int m_propertyGroup;
  unsigned int m_propertyProvider;
  unsigned int m_data;
  unsigned int m_ePatchFlags;
  BasePropertyValue *m_defaultValue;
  BasePropertyValue *m_minValue;
  BasePropertyValue *m_maxValue;
  AvailablePropertySet m_availableProperties;
  PropertyInheritanceType_Type m_inheritanceType;
  PropertyDatFileType_Type m_datFileType;
  PropertyPropagationType_Type m_propagationType;
  PropertyCachingType_Type m_cachingType;
  bool m_bRequired;
  bool m_bReadOnly;
  bool m_bPropagateToChildren;
  bool m_bNoCheckpoint;
  bool m_bAbsoluteTimeStamp;
  bool m_bGroupable;
  bool m_bAllAvailable;
  bool m_bDoNotReplay;
  bool m_bRecorded;
  bool m_bToolOnly;
  unsigned int m_nMinElements;
  unsigned int m_nMaxElements;
  PStringBase<char> m_strHelp;
  float m_fPredictionTimeout;
};


struct BasePropertyValue : ReferenceCountTemplate<1048576,1>
{
};


struct StringInfoData
{
  StringInfoDataVtbl *vfptr;
  unsigned __int16 m_eType;
  unsigned int m_eVarID;
};


struct HashTable<unsigned long,AvailableProperty,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,AvailableProperty,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AvailableProperty> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AvailableProperty> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,AvailableProperty> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,AvailableProperty> *m_hashNext;
};


struct AvailableProperty
{
  unsigned int m_name;
};


struct HashTableData<unsigned long,AvailableProperty> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,AvailableProperty> *>
{
  AvailableProperty m_data;
};


struct StringInfoDataVtbl
{
  void *(__thiscall *__vecDelDtor)(StringInfoData *this, unsigned int);
  void (__thiscall *GetSubDataIDs)(StringInfoData *this, QualifiedDataIDArray *);
  void (__thiscall *GetSubPrivateIDs)(StringInfoData *this, QualifiedDataIDArray *, IDClass<_tagDataID,32,0>);
  bool (__thiscall *IsValid)(StringInfoData *this, bool);
  void (__thiscall *Serialize)(StringInfoData *this, Archive *);
  PStringBase<unsigned short> *(__thiscall *ToString)(StringInfoData *this, PStringBase<unsigned short> *result);
};


struct StrHashData
{
  StrHashData *hash_next;
  const char *name;
};


struct CharacterIdentity : PackObj
{
  unsigned int gid_;
  AC1Legacy_PStringBase<char> name_;
  unsigned int secondsGreyedOut_;
};


struct AC1Legacy_SmartArray<CharacterIdentity>
{
  CharacterIdentity *m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct accountID : AC1Legacy_PStringBase<char>
{
  int fIsDarkMajestyExpansion_;
  int m_fIsThroneOfDestinyExpansion;
  int m_fPreOrderedThroneOfDestinyExpansion;
};


const struct CharacterSet : PackObj, StrHashData
{
  AC1Legacy_SmartArray<CharacterIdentity> set_;
  AC1Legacy_SmartArray<CharacterIdentity> delSet_;
  unsigned int status_;
  int numAllowedCharacters_;
  accountID account_;
  int m_fUseTurbineChat;
  int m_fHasThroneofDestiny;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *,0> *m_currHashTable;
  HashTableData<unsigned long,List<NoticeHandler *> *> **m_currBucket;
  HashTableData<unsigned long,List<NoticeHandler *> *> *m_currElement;
};


struct HashIterator<unsigned long,List<NoticeHandler *> *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,List<NoticeHandler *> *> *,0> m_iter;
};


struct IntrusiveHashTable<unsigned long,CLostCell *,0>
{
  IntrusiveHashTable<unsigned long,CLostCell *,0>Vtbl *vfptr;
  CLostCell *m_aInplaceBuckets[23];
  CLostCell **m_buckets;
  CLostCell **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,CLostCell *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,CLostCell *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,CLostCell *>
{
  unsigned int m_hashKey;
  CLostCell *m_hashNext;
};


struct DArray<CPhysicsObj *>
{
  CPhysicsObj **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct CLostCell : IntrusiveHashData<unsigned long,CLostCell *>
{
  unsigned int num_objects;
  DArray<CPhysicsObj *> objects;
};


struct DArray<CShadowObj>
{
  CShadowObj *data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct AC1Legacy_SmartArray<CAnimHook *>
{
  CAnimHook **m_data;
  unsigned int m_size;
  unsigned int m_num;
};



struct __declspec(align(4)) CPhysicsObj : LongHashData
{
  NIList<NetBlob *> *netblob_list;
  CPartArray *part_array;
  AC1Legacy_Vector3 player_vector;
  float player_distance;
  float CYpt;
  CSoundTable *sound_table;
  bool m_bExaminationObject;
  ScriptManager *script_manager;
  PhysicsScriptTable *physics_script_table;
  PScriptType default_script;
  float default_script_intensity;
  CPhysicsObj *parent;
  CHILDLIST *children;
  Position m_position;
  CObjCell *cell;
  unsigned int num_shadow_objects;
  DArray<CShadowObj> shadow_objects;
  unsigned int state;
  unsigned int transient_state;
  float elasticity;
  float translucency;
  float translucencyOriginal;
  float friction;
  float massinv;
  MovementManager *movement_manager;
  PositionManager *position_manager;
  int last_move_was_autonomous;
  int jumped_this_frame;
  long double update_time;
  AC1Legacy_Vector3 m_velocityVector;
  AC1Legacy_Vector3 m_accelerationVector;
  AC1Legacy_Vector3 m_omegaVector;
  PhysicsObjHook *hooks;
  AC1Legacy_SmartArray<CAnimHook *> anim_hooks;
  float m_scale;
  float attack_radius;
  DetectionManager *detection_manager;
  AttackManager *attack_manager;
  TargetManager *target_manager;
  ParticleManager *particle_manager;
  CWeenieObject *weenie_obj;
  Plane contact_plane;
  unsigned int contact_plane_cell_id;
  AC1Legacy_Vector3 sliding_normal;
  AC1Legacy_Vector3 cached_velocity;
  LongNIValHash<CPhysicsObj_CollisionRecord> *collision_table;
  int colliding_with_environment;
  unsigned __int16 update_times[9];
};


template <typename T>
struct DLList : DLListBase
{
};




struct CSequence : PackObj
{
  DLList<AnimSequenceNode> anim_list;
  AnimSequenceNode *first_cyclic;
  AC1Legacy_Vector3 velocity;
  AC1Legacy_Vector3 omega;
  CPhysicsObj *hook_obj;
  long double frame_number;
  AnimSequenceNode *curr_anim;
  AnimFrame *placement_frame;
  unsigned int placement_frame_id;
  int bIsTrivial;
};


struct CPartArray
{
  unsigned int pa_state;
  CPhysicsObj *owner;
  CSequence sequence;
  MotionTableManager *motion_table_manager;
  CSetup *setup;
  unsigned int num_parts;
  CPhysicsPart **parts;
  AC1Legacy_Vector3 scale;
  Palette **pals;
  LIGHTLIST *lights;
  AnimFrame *last_animframe;
};


struct __declspec(align(8)) SerializeUsingPackDBObj : DBObj, PackObj
{
};


struct IntrusiveHashData<unsigned long,SoundTableData *>
{
  unsigned int m_hashKey;
  SoundTableData *m_hashNext;
};


struct IntrusiveHashTable<unsigned long,SoundTableData *,0>
{
  IntrusiveHashTable<unsigned long,SoundTableData *,0>Vtbl *vfptr;
  SoundTableData *m_aInplaceBuckets[23];
  SoundTableData **m_buckets;
  SoundTableData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct SoundTableData : PackObj, IntrusiveHashData<unsigned long,SoundTableData *>
{
  IntrusiveHashTable<unsigned long,SoundTableData *,0> sound_hash_;
  unsigned int num_stdatas_;
  SoundData *data_;
};


const struct __declspec(align(8)) CSoundTable : SerializeUsingPackDBObj
{
  SoundTableData sound_data_;
};


struct ScriptManager
{
  CPhysicsObj *physobj;
  ScriptData *curr_data;
  ScriptData *last_data;
  int hook_index;
  long double next_hook_time;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,PhysicsScriptTableData *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,PhysicsScriptTableData *> **m_buckets;
  HashTableData<unsigned long,PhysicsScriptTableData *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,PhysicsScriptTableData *,0>
{
  HashTable<unsigned long,PhysicsScriptTableData *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *,0> m_intrusiveTable;
};


const struct __declspec(align(8)) PhysicsScriptTable : SerializeUsingPackDBObj
{
  HashTable<unsigned long,PhysicsScriptTableData *,0> script_table;
};


struct __declspec(align(4)) SArray<CPhysicsObj *>
{
  CPhysicsObj **data;
  unsigned __int16 sizeOf;
};


struct __declspec(align(4)) SArray<Frame>
{
  Frame *data;
  unsigned __int16 sizeOf;
};


struct __declspec(align(4)) SArray<unsigned long>
{
  unsigned int *data;
  unsigned __int16 sizeOf;
};


struct CHILDLIST
{
  unsigned __int16 num_objects;
  SArray<CPhysicsObj *> objects;
  SArray<Frame> frames;
  SArray<unsigned long> part_numbers;
  SArray<unsigned long> location_ids;
};


struct DArray<CShadowPart *>
{
  CShadowPart **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct CPartCell
{
  CPartCellVtbl *vfptr;
  unsigned int num_shadow_parts;
  DArray<CShadowPart *> shadow_part_list;
};


struct DArray<LIGHTOBJ const *>
{
  LIGHTOBJ **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct DArray<CShadowObj *>
{
  CShadowObj **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


const struct __declspec(align(8)) CObjCell : SerializeUsingPackDBObj, CPartCell
{
  LandDefs_WaterType water_type;
  Position pos;
  unsigned int num_objects;
  DArray<CPhysicsObj *> object_list;
  unsigned int num_lights;
  DArray<LIGHTOBJ const *> light_list;
  unsigned int num_shadow_objects;
  DArray<CShadowObj *> shadow_object_list;
  unsigned int restriction_obj;
  ClipPlaneList **clip_planes;
  unsigned int num_stabs;
  unsigned int *stab_list;
  int seen_outside;
  LongNIValHash<GlobalVoyeurInfo> *voyeur_table;
  CLandBlock *myLandBlock_;
};


struct CShadowObj : LongHashData
{
  CPhysicsObj *physobj;
  unsigned int cell_id;
  CObjCell *cell;
};


struct MovementManager
{
  CMotionInterp *motion_interpreter;
  MoveToManager *moveto_manager;
  CPhysicsObj *physics_obj;
  CWeenieObject *weenie_obj;
};


struct PositionManager
{
  InterpolationManager *interpolation_manager;
  StickyManager *sticky_manager;
  ConstraintManager *constraint_manager;
  CPhysicsObj *physics_obj;
};


struct PhysicsObjHook
{
  PhysicsObjHookVtbl *vfptr;
  __declspec(align(8)) PhysicsObjHook_HookType hook_type;
  long double time_created;
  long double interpolation_time;
  PhysicsObjHook *prev;
  PhysicsObjHook *next;
  void *user_data;
};


struct CAnimHook
{
  CAnimHookVtbl *vfptr;
  CAnimHook *next_hook;
  int direction_;
};


struct LongNIHash<DetectionCylsphere>
{
  LongNIHashData **buckets;
  int table_size;
};


struct AC1Legacy_SmartArray<unsigned long>
{
  unsigned int *m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct __declspec(align(8)) DetectionManager
{
  CPhysicsObj *physobj;
  LongNIHash<DetectionInfo> *detection_objects;
  unsigned int num_pending_global_detect_updates;
  CELLARRAY *cell_array;
  long double last_update_time;
  Position last_global_update;
  LongNIHash<DetectionCylsphere> detection_table;
  AC1Legacy_SmartArray<unsigned long> pending_deletions;
};


struct LongNIHash<AttackInfo>
{
  LongNIHashData **buckets;
  int table_size;
};


struct AttackManager
{
  float attack_radius;
  unsigned int current_attack;
  LongNIHash<AttackInfo> pending_attacks;
};


struct TargetManager
{
  CPhysicsObj *physobj;
  TargetInfo *target_info;
  LongNIHash<TargettedVoyeurInfo> *voyeur_table;
  long double last_update_time;
};


struct LongNIHash<ParticleEmitter>
{
  LongNIHashData **buckets;
  int table_size;
};


struct ParticleManager
{
  unsigned int next_emitter_id;
  LongNIHash<ParticleEmitter> particle_table;
};


struct LongNIValHash<CPhysicsObj_CollisionRecord> : HashBase<unsigned long>
{
};


struct AnimSequenceNode : PackObj, DLListData
{
  CAnimation *anim;
  float framerate;
  int low_frame;
  int high_frame;
};


struct AnimFrame
{
  AFrame *frame;
  unsigned int num_frame_hooks;
  CAnimHook *hooks;
  unsigned int num_parts;
};



struct DLList<MotionTableManager_AnimNode> : DLListBase
{
};



struct CSphere
{
  AC1Legacy_Vector3 center;
  float radius;
};



const struct CSetup : SerializeUsingPackDBObj
{
  unsigned int num_parts;
  IDClass<_tagDataID,32,0> *parts;
  unsigned int *parent_index;
  AC1Legacy_Vector3 *default_scale;
  unsigned int num_cylsphere;
  CCylSphere *cylsphere;
  unsigned int num_sphere;
  CSphere *sphere;
  int has_physics_bsp;
  int allow_free_heading;
  float height;
  float radius;
  float step_down_height;
  float step_up_height;
  CSphere sorting_sphere;
  CSphere selection_sphere;
  unsigned int num_lights;
  LIGHTINFO *lights;
  AC1Legacy_Vector3 anim_scale;
  LongHash<LocationType> *holding_locations;
  LongHash<LocationType> *connection_points;
  LongHash<PlacementType> placement_frames;
  IDClass<_tagDataID,32,0> default_anim_id;
  IDClass<_tagDataID,32,0> default_script_id;
  IDClass<_tagDataID,32,0> default_mtable_id;
  IDClass<_tagDataID,32,0> default_stable_id;
  IDClass<_tagDataID,32,0> default_phstable_id;
};


struct CPhysicsPart
{
  float CYpt;
  AC1Legacy_Vector3 viewer_heading;
  GfxObjDegradeInfo *degrades;
  unsigned int deg_level;
  int deg_mode;
  int draw_state;
  CGfxObj **gfxobj;
  AC1Legacy_Vector3 gfxobj_scale;
  Position pos;
  Position draw_pos;
  CMaterial *material;
  CSurface **surfaces;
  IDClass<_tagDataID,32,0> original_palette_id;
  float curTranslucency;
  float curDiffuse;
  float curLuminosity;
  Palette *shiftPal;
  unsigned int m_current_render_frame_num;
  CPhysicsObj *physobj;
  int physobj_index;
};


struct __declspec(align(8)) Palette : SerializeUsingPackDBObj
{
  unsigned int num_colors;
  float min_lighting;
  unsigned int *ARGB;
};


struct LIGHTLIST
{
  unsigned int num_lights;
  LIGHTOBJ *lightobj;
};


struct IntrusiveHashTable<unsigned long,SoundTableData *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,SoundTableData *,0> *this, unsigned int);
};


struct SoundData
{
  IDClass<_tagDataID,32,0> sound_id_;
  float priority_;
  float probability_;
  float volume_;
};


struct ScriptData
{
  long double start_time;
  PhysicsScript *script;
  ScriptData *next_data;
};


struct HashTable<unsigned long,PhysicsScriptTableData *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,PhysicsScriptTableData *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,PhysicsScriptTableData *> *m_hashNext;
};


struct HashTableData<unsigned long,PhysicsScriptTableData *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,PhysicsScriptTableData *> *>
{
  PhysicsScriptTableData *m_data;
};


union $513534915C086D85FE6716A30C591AE0
{
  void (__thiscall *~CPartCell)(CPartCell *this);
  void *(__thiscall *__vecDelDtor)(CPartCell *this, unsigned int);
};


struct CPartCellVtbl
{
  void (__thiscall *add_part)(CPartCell *this, CPhysicsPart *, ClipPlaneList **, Frame *, unsigned int);
  void (__thiscall *remove_part)(CPartCell *this, CPhysicsPart *);
  $513534915C086D85FE6716A30C591AE0 ___u2;
};


struct CShadowPart
{
  unsigned int num_planes;
  ClipPlaneList **planes;
  Frame *frame;
  CPhysicsPart *part;
};


const struct LIGHTOBJ
{
  LIGHTINFO *lightinfo;
  Frame global_offset;
  int state;
};


struct DArray<ClipPlane>
{
  ClipPlane *data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct ClipPlaneList
{
  unsigned int cplane_num;
  DArray<ClipPlane> cplane_list;
  int leaf_contains_obj;
};


struct LongNIValHash<GlobalVoyeurInfo> : HashBase<unsigned long>
{
};





struct CLandBlockStruct
{
  RGBColor *vertex_lighting;
  LandDefs_Direction trans_dir;
  int side_vertex_count;
  int side_polygon_count;
  int side_cell_count;
  LandDefs_WaterType water_type;
  char *height;
  unsigned __int16 *terrain;
  CVertexArray vertex_array;
  CPolygon *polygons;
  unsigned int num_surface_strips;
  CSurfaceTriStrips *surface_strips;
  unsigned int block_surface_index;
  CLandCell *lcell;
  int *SWtoNEcut;
};


struct SqCoord
{
  int x;
  int y;
};


struct CLandBlock : SerializeUsingPackDBObj, CLandBlockStruct
{
  SqCoord block_coord;
  Frame block_frame;
  float max_zval;
  float min_zval;
  int dyn_objs_init_done;
  int lbi_exists;
  LandDefs_Direction dir;
  SqCoord closest;
  BoundingType in_view;
  CLandBlockInfo *lbi;
  unsigned int num_static_objects;
  DArray<CPhysicsObj *> static_objects;
  unsigned int num_buildings;
  CBuildingObj **buildings;
  unsigned int stab_num;
  unsigned int *stablist;
  CLandCell **draw_array;
  unsigned int draw_array_size;
};


struct LListBase
{
  LListData *head_;
  LListData *tail_;
};


struct LList<ActionNode> : LListBase
{
};


struct RawMotionState : PackObj
{
  LList<ActionNode> actions;
  HoldKey current_holdkey;
  unsigned int current_style;
  unsigned int forward_command;
  HoldKey forward_holdkey;
  float forward_speed;
  unsigned int sidestep_command;
  HoldKey sidestep_holdkey;
  float sidestep_speed;
  unsigned int turn_command;
  HoldKey turn_holdkey;
  float turn_speed;
};


struct InterpretedMotionState : PackObj
{
  unsigned int current_style;
  unsigned int forward_command;
  float forward_speed;
  unsigned int sidestep_command;
  float sidestep_speed;
  unsigned int turn_command;
  float turn_speed;
  LList<ActionNode> actions;
};


struct LList<CMotionInterp_MotionNode> : LListBase
{
};


struct CMotionInterp
{
  int initted;
  CWeenieObject *weenie_obj;
  CPhysicsObj *physics_obj;
  RawMotionState raw_state;
  InterpretedMotionState interpreted_state;
  float current_speed_factor;
  int standing_longjump;
  float jump_extent;
  unsigned int server_action_stamp;
  float my_run_rate;
  LList<CMotionInterp_MotionNode> pending_motions;
};


struct $9DF5898AC3667EE63853CA774377241C
{
  unsigned __int32 can_walk : 1;
  unsigned __int32 can_run : 1;
  unsigned __int32 can_sidestep : 1;
  unsigned __int32 can_walk_backwards : 1;
  unsigned __int32 can_charge : 1;
  unsigned __int32 fail_walk : 1;
  unsigned __int32 use_final_heading : 1;
  unsigned __int32 sticky : 1;
  unsigned __int32 move_away : 1;
  unsigned __int32 move_towards : 1;
  unsigned __int32 use_spheres : 1;
  unsigned __int32 set_hold_key : 1;
  unsigned __int32 autonomous : 1;
  unsigned __int32 modify_raw_state : 1;
  unsigned __int32 modify_interpreted_state : 1;
  unsigned __int32 cancel_moveto : 1;
  unsigned __int32 stop_completely : 1;
  unsigned __int32 disable_jump_during_link : 1;
};


union $219484CD3FACC896A58537BA7B2DDF4E
{
  unsigned int bitfield;
  $9DF5898AC3667EE63853CA774377241C __s1;
};


struct MovementParameters : PackObj
{
  $219484CD3FACC896A58537BA7B2DDF4E ___u1;
  float distance_to_object;
  float min_distance;
  float desired_heading;
  float speed;
  float fail_distance;
  float walk_run_threshhold;
  unsigned int context_id;
  HoldKey hold_key_to_apply;
  unsigned int action_stamp;
};


struct DLList<MoveToManager_MovementNode> : DLListBase
{
};


struct __declspec(align(8)) MoveToManager
{
  MovementTypes_Type movement_type;
  Position sought_position;
  Position current_target_position;
  Position starting_position;
  MovementParameters movement_params;
  float previous_heading;
  float previous_distance;
  long double previous_distance_time;
  float original_distance;
  long double original_distance_time;
  unsigned int fail_progress_count;
  unsigned int sought_object_id;
  unsigned int top_level_object_id;
  float sought_object_radius;
  float sought_object_height;
  unsigned int current_command;
  unsigned int aux_command;
  int moving_away;
  int initialized;
  DLList<MoveToManager_MovementNode> pending_actions;
  CPhysicsObj *physics_obj;
  CWeenieObject *weenie_obj;
};


struct LList<InterpolationNode> : LListBase
{
};


struct InterpolationManager
{
  LList<InterpolationNode> position_queue;
  CPhysicsObj *physics_obj;
  int keep_heading;
  unsigned int frame_counter;
  float original_distance;
  float progress_quantum;
  int node_fail_counter;
  Position blipto_position;
};


struct StickyManager
{
  unsigned int target_id;
  float target_radius;
  Position target_position;
  CPhysicsObj *physics_obj;
  int initialized;
  long double sticky_timeout_time;
};


struct ConstraintManager
{
  CPhysicsObj *physics_obj;
  int is_constrained;
  float constraint_pos_offset;
  Position constraint_pos;
  float constraint_distance_start;
  float constraint_distance_max;
};


struct PhysicsObjHookVtbl
{
  int (__thiscall *Execute)(PhysicsObjHook *this, CPhysicsObj *);
};


struct CAnimHookVtbl
{
  void *(__thiscall *__vecDelDtor)(CAnimHook *this, unsigned int);
  void (__thiscall *Execute)(CAnimHook *this, CPhysicsObj *);
  int (__thiscall *GetType)(CAnimHook *this);
  void (__thiscall *GetSubDataIDs)(CAnimHook *this, QualifiedDataIDArray *);
  unsigned int (__thiscall *pack_size)(CAnimHook *this);
  unsigned int (__thiscall *Pack)(CAnimHook *this, void **, unsigned int);
  int (__thiscall *UnPack)(CAnimHook *this, void **, unsigned int);
};


struct LongNIHash<DetectionInfo>
{
  LongNIHashData **buckets;
  int table_size;
};


struct DArray<CELLINFO>
{
  CELLINFO *data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct CELLARRAY
{
  int added_outside;
  int do_not_load_cells;
  unsigned int num_cells;
  DArray<CELLINFO> cells;
};


struct LongNIHashData
{
  LongNIHashData *next;
  void *data;
  unsigned int key;
};


struct TargetInfo
{
  unsigned int context_id;
  unsigned int object_id;
  float radius;
  long double quantum;
  Position target_position;
  Position interpolated_position;
  AC1Legacy_Vector3 interpolated_heading;
  AC1Legacy_Vector3 velocity;
  TargetStatus status;
  long double last_update_time;
};


struct LongNIHash<TargettedVoyeurInfo>
{
  LongNIHashData **buckets;
  int table_size;
};


struct HashBase<unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashBase<unsigned long> *this, unsigned int);
};


struct __declspec(align(8)) CAnimation : SerializeUsingPackDBObj
{
  AFrame *pos_frames;
  AnimFrame *part_frames;
  int has_hooks;
  unsigned int num_parts;
  unsigned int num_frames;
};


struct AFrame
{
  AC1Legacy_Vector3 m_fOrigin;
  float qw;
  float qx;
  float qy;
  float qz;
};


struct LongNIValHash<unsigned long> : HashBase<unsigned long>
{
};


struct LongHash<MotionData> : HashBase<unsigned long>
{
};


struct LongNIValHash<LongHash<MotionData> *> : HashBase<unsigned long>
{
};



struct MotionList
{
  unsigned int motion;
  float speed_mod;
  MotionList *next;
};


struct CCylSphere
{
  AC1Legacy_Vector3 low_pt;
  float height;
  float radius;
};


struct RGBColor
{
  float r;
  float g;
  float b;
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


struct LongHash<LocationType> : HashBase<unsigned long>
{
};


struct GfxObjDegradeInfo : SerializeUsingPackDBObj
{
  unsigned int num_degrades;
  GfxObjInfo *degrades;
};




struct _D3DCOLORVALUE
{
  float r;
  float g;
  float b;
  float a;
};


struct _D3DMATERIAL9
{
  _D3DCOLORVALUE Diffuse;
  _D3DCOLORVALUE Ambient;
  _D3DCOLORVALUE Specular;
  _D3DCOLORVALUE Emissive;
  float Power;
};


struct CMaterial : ReferenceCountTemplate_1048576_0
{
  int has_alpha;
  _D3DMATERIAL9 d3d_material;
};


struct GraphicsResource
{
  GraphicsResourceVtbl *vfptr;
  __declspec(align(8)) bool m_bIsLost;
  long double m_TimeUsed;
  unsigned int m_FrameUsed;
  bool m_bIsThrashable;
  bool m_AutoRestore;
  unsigned int m_nResourceSize;
  unsigned int m_ListIndex;
};


struct CSurface : DBObj, GraphicsResource
{
  unsigned int type;
  SurfaceHandlerEnum handler;
  unsigned int color_value;
  int solid_index;
  IDClass<_tagDataID,32,0> indexed_texture_id;
  ImgTex *base1map;
  Palette *base1pal;
  float translucency;
  float luminosity;
  float diffuse;
  IDClass<_tagDataID,32,0> orig_texture_id;
  IDClass<_tagDataID,32,0> orig_palette_id;
  float orig_luminosity;
  float orig_diffuse;
};


struct OldSmartArray<PhysicsScriptData *>
{
  PhysicsScriptData **data;
  int grow_size;
  int mem_size;
  int num_in_array;
};


const struct PhysicsScript : SerializeUsingPackDBObj
{
  OldSmartArray<PhysicsScriptData *> script_data;
  long double length;
};


struct AC1Legacy_SmartArray<ScriptAndModData>
{
  ScriptAndModData *m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct PhysicsScriptTableData
{
  AC1Legacy_SmartArray<ScriptAndModData> script_array;
};


struct ClipPlane
{
  Plane *plane;
  Sidedness side;
};


struct $393C16A032292777F0C3725FFB2C0008
{
  float x;
  float y;
  float z;
};


union $D554C44E56C320449443B6F5D299EEA7
{
  $393C16A032292777F0C3725FFB2C0008 __s0;
  AC1Legacy_Vector3 vertex;
};


struct CVertex
{
  $D554C44E56C320449443B6F5D299EEA7 ___u0;
  unsigned int reserve4;
  unsigned int reserve5;
  unsigned int reserve6;
  unsigned int reserve7;
  unsigned int reserve8;
};


struct CPolygon
{
  CVertex **vertices;
  unsigned __int16 *vertex_ids;
  Vec2Dscreen **screen;
  __int16 poly_id;
  char num_pts;
  char stippling;
  int sides_type;
  char *pos_uv_indices;
  char *neg_uv_indices;
  unsigned __int16 pos_surface;
  unsigned __int16 neg_surface;
  Plane plane;
};


struct CSurfaceTriStrips
{
  unsigned int surface_index;
  unsigned int num_strips;
  CTriangleStrip *strips;
};


struct __declspec(align(8)) CSortCell : CObjCell
{
  CBuildingObj *building;
};


struct CLandCell : CSortCell
{
  CPolygon **polygons;
  BoundingType in_view;
};


struct CLandBlockInfo : SerializeUsingPackDBObj
{
  unsigned int num_objects;
  IDClass<_tagDataID,32,0> *object_ids;
  Frame *object_frames;
  unsigned int num_buildings;
  BuildInfo **buildings;
  PackableHashTable<unsigned long,unsigned long> *restriction_table;
  PackableHashTable<unsigned long,PackableList<unsigned long> > *cell_ownership;
  unsigned int num_cells;
  unsigned int *cell_ids;
  CEnvCell **cells;
};


struct __declspec(align(8)) CBuildingObj : CPhysicsObj
{
  unsigned int num_portals;
  CBldPortal **portals;
  unsigned int num_leaves;
  CPartCell **leaf_cells;
  unsigned int num_shadow;
  DArray<CShadowPart *> shadow_list;
};


struct LListData
{
  LListData *llist_next;
};


struct CELLINFO
{
  unsigned int cell_id;
  CObjCell *cell;
};


struct GfxObjInfo
{
  IDClass<_tagDataID,32,0> gfxobj_id;
  int degrade_mode;
  float min_dist;
  float ideal_dist;
  float max_dist;
};


struct CVec2Duv
{
  float u;
  float v;
};


struct MeshBuffer
{
  ID3DXMesh *pMesh;
  RenderMesh *pRenderMesh;
  unsigned int meshFVF;
  float detailTilingFactorSet;
  char *isStippledOrAlphaedMask;
  char burnedInStaticLights;
  bool m_bUseUVAnimation;
  CVec2Duv m_vUVDelta;
  unsigned int m_RemoteSizeInBytes;
};


struct BSPTREE
{
  BSPNODE *root_node;
};


struct GraphicsResourceVtbl
{
  void *(__thiscall *__vecDelDtor)(GraphicsResource *this, unsigned int);
  bool (__thiscall *CopyInto)(GraphicsResource *this, GraphicsResource *);
  bool (__thiscall *PurgeResource)(GraphicsResource *this);
  bool (__thiscall *RestoreResource)(GraphicsResource *this);
};



struct __declspec(align(4)) ImgTex : DBObj, GraphicsResource
{
  SmartArray<IDClass<_tagDataID,32,0>,1> m_SourceLevels;
  RenderSurface *m_pImageData;
  Palette *m_pPalette;
  int m_cPitch;
  unsigned __int64 m_TextureCode;
  IDirect3DTexture9 *m_pD3DTexture;
  RenderTexture *m_pRenderTexture;
  RenderTexture *m_pSystemMemTexture;
  bool m_IsLocked;
};


struct __declspec(align(8)) PhysicsScriptData
{
  long double start_time;
  CAnimHook *hook;
};


struct ScriptAndModData
{
  float mod;
  IDClass<_tagDataID,32,0> script_id;
};


struct $85F0D5969A169BFD0C0CC9B8ED0AF4DC
{
  float xw;
  float yw;
  float zw;
};


union $259E54BBBD27690FA1563991A264962E
{
  $85F0D5969A169BFD0C0CC9B8ED0AF4DC __s0;
  AC1Legacy_Vector3 vertex_w;
};


struct Vec2Dscreen
{
  $259E54BBBD27690FA1563991A264962E ___u0;
  float w;
};


struct CTriangleStrip
{
  unsigned int num_indices;
  unsigned __int16 *indices;
};


struct BuildInfo
{
  IDClass<_tagDataID,32,0> building_id;
  Frame building_frame;
  unsigned int num_leaves;
  unsigned int num_portals;
  CBldPortal **portals;
};


struct PackableHashTable<unsigned long,unsigned long> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,unsigned long> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashTable<unsigned long,PackableList<unsigned long> > : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,PackableList<unsigned long> > **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct DArray<portal_view_type *>
{
  portal_view_type **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct CEnvCell : CObjCell
{
  unsigned int num_surfaces;
  CSurface **surfaces;
  CCellStruct *structure;
  CEnvironment *env;
  unsigned int num_portals;
  CCellPortal *portals;
  unsigned int num_static_objects;
  IDClass<_tagDataID,32,0> *static_object_ids;
  Frame *static_object_frames;
  CPhysicsObj **static_objects;
  RGBColor *light_array;
  int incell_timestamp;
  MeshBuffer *constructed_mesh;
  int use_built_mesh;
  unsigned int m_current_render_frame_num;
  unsigned int num_view;
  DArray<portal_view_type *> portal_view;
};


struct CBldPortal
{
  int portal_side;
  unsigned int other_cell_id;
  int other_portal_id;
  int exact_match;
  unsigned int num_stabs;
  unsigned int *stab_list;
  float sidedness;
};


struct ID3DXBaseMesh : IUnknown
{
};


struct ID3DXMesh : ID3DXBaseMesh
{
};


struct SmartArray<RenderMeshFragment *,1>
{
  RenderMeshFragment **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) RenderMesh : DBObj
{
  unsigned int m_InstanceFlags;
  unsigned int m_MeshAppearanceType;
  RenderMeshMaterialArray *m_pMaterialArray;
  RenderMeshVerticesArray *m_pVerticesArray;
  RenderMeshIndicesArray *m_pIndicesArray;
  SmartArray<RenderMeshFragment *,1> m_Fragments;
  SmartArray<unsigned long,1> m_RenderLODFragmentIndices;
  SmartArray<unsigned long,1> m_OccluderFragmentIndices;
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


union $429348390AB0EFA2F7BE9421CDFA9E37
{
  int type;
  char type_string[4];
};


struct BSPNODE
{
  BSPNODEVtbl *vfptr;
  CSphere sphere;
  Plane splitting_plane;
  $429348390AB0EFA2F7BE9421CDFA9E37 ___u3;
  unsigned int num_polys;
  CPolygon **in_polys;
  BSPNODE *pos_node;
  BSPNODE *neg_node;
};


struct RenderSurfaceSourceData
{
  unsigned int width;
  unsigned int height;
  unsigned int imageSize;
  char *sourceBits;
  PixelFormatDesc pfDesc;
};


struct SurfaceWindow
{
  SurfaceWindowVtbl *vfptr;
  RenderSurface *surface;
  SurfaceWindow *parent;
  tagRECT rect;
  unsigned int lockCount;
  bool writable;
  void *data;
  int pitch;
};


struct __declspec(align(4)) RenderSurface : DBObj, GraphicsResource
{
  RenderSurfaceSourceData sourceData;
  unsigned int width;
  unsigned int height;
  unsigned int size;
  SurfaceWindow window;
  bool locked;
  PixelFormatDesc pfDesc;
  void *m_pSurfaceBits;
  IDClass<_tagDataID,32,0> m_didPalatte;
  bool m_IsDirty;
  bool m_ReadOnlyLock;
};



struct IDirect3DBaseTexture9 : IDirect3DResource9
{
};


struct IDirect3DTexture9 : IDirect3DBaseTexture9
{
};


struct SmartArray<DBLevelInfo,1>
{
  DBLevelInfo *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) RenderTexture : DBObj, GraphicsResource
{
  TextureType m_TextureType;
  unsigned int m_nNumLevels;
  PixelFormatID m_PixelFormat;
  unsigned int m_Flags;
  bool m_bDropLevelsCalled;
  unsigned int m_ManagedRefCount;
  long double m_LastManagedReleaseTime;
  bool m_AllowManagement;
  SmartArray<DBLevelInfo,1> m_SourceLevels;
  unsigned int m_nWidth;
  unsigned int m_nHeight;
  unsigned int m_nEdgeLength;
};


struct PackableHashData<unsigned long,unsigned long>
{
  unsigned int _key;
  unsigned int _data;
  PackableHashData<unsigned long,unsigned long> *_next;
  int _hashVal;
};


struct PackableList<unsigned long> : PackObj
{
  PackableLLNode<unsigned long> *head;
  PackableLLNode<unsigned long> *tail;
  unsigned int curNum;
};


struct PackableHashData<unsigned long,PackableList<unsigned long> >
{
  unsigned int _key;
  PackableList<unsigned long> _data;
  PackableHashData<unsigned long,PackableList<unsigned long> > *_next;
  int _hashVal;
};


struct CCellStruct
{
  unsigned int cellstruct_id;
  CVertexArray vertex_array;
  unsigned int num_portals;
  CPolygon **portals;
  unsigned int num_surface_strips;
  CSurfaceTriStrips *surface_strips;
  unsigned int num_polygons;
  CPolygon *polygons;
  BSPTREE *drawing_bsp;
  unsigned int num_physics_polygons;
  CPolygon *physics_polygons;
  BSPTREE *physics_bsp;
  BSPTREE *cell_bsp;
};


struct CEnvironment : SerializeUsingPackDBObj
{
  unsigned int num_cells;
  CCellStruct *cells;
};


struct CCellPortal
{
  unsigned int other_cell_id;
  CEnvCell *other_cell_ptr;
  CPolygon *portal;
  int portal_side;
  int other_portal_id;
  int exact_match;
};


struct DArray<portal_info>
{
  portal_info *data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct DArray<view_poly>
{
  view_poly *data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct DArray<view_vertex>
{
  view_vertex *data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct view_type
{
  unsigned int vertex_count_total;
  DArray<view_poly> poly;
  DArray<view_vertex> vertex;
};


struct portal_view_type
{
  DArray<portal_info> portal;
  view_type view;
  float max_indist;
  unsigned int view_count;
  int cell_view_done;
  int view_timestamp;
  int update_count;
};


struct SmartArray<_STL_pair<IDClass<_tagDataID,32,0>,MaterialInstance *>,1>
{
  _STL_pair<IDClass<_tagDataID,32,0>,MaterialInstance *> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderMeshMaterialArray : ReferenceCountTemplate<1048576,1>
{
  SmartArray<_STL_pair<IDClass<_tagDataID,32,0>,MaterialInstance *>,1> m_Materials;
};


struct SmartArray<RenderVertexBuffer *,1>
{
  RenderVertexBuffer **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderMeshVerticesArray : ReferenceCountTemplate<1048576,1>
{
  SmartArray<RenderVertexBuffer *,1> m_VertexArrays;
};


struct SmartArray<RenderIndexBuffer *,1>
{
  RenderIndexBuffer **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderMeshIndicesArray : ReferenceCountTemplate<1048576,1>
{
  SmartArray<RenderIndexBuffer *,1> m_IndexArrays;
};


struct SmartArray<RenderMeshBatch *,1>
{
  RenderMeshBatch **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderMeshFragment : ReferenceCountTemplate<1048576,1>
{
  unsigned int m_Type;
  SmartArray<RenderMeshBatch *,1> m_MaterialBatches;
  RenderMeshFragmentTopology *m_pTopology;
  unsigned int m_AttribID;
};


struct BSPNODEVtbl
{
  void *(__thiscall *__vecDelDtor)(BSPNODE *this, unsigned int);
  int (__thiscall *sphere_intersects_poly)(BSPNODE *this, CSphere *, AC1Legacy_Vector3 *, CPolygon **, AC1Legacy_Vector3 *);
  int (__thiscall *sphere_intersects_solid)(BSPNODE *this, CSphere *, int);
  int (__thiscall *point_intersects_solid)(BSPNODE *this, AC1Legacy_Vector3 *);
  int (__thiscall *sphere_intersects_solid_poly)(BSPNODE *this, CSphere *, float, int *, CPolygon **, int);
  unsigned int (__thiscall *TraceRay)(BSPNODE *this, Ray *, float *, Vector3 *);
  void (__thiscall *find_walkable)(BSPNODE *this, SPHEREPATH *, CSphere *, CPolygon **, AC1Legacy_Vector3 *, AC1Legacy_Vector3 *, int *);
  int (__thiscall *hits_walkable)(BSPNODE *this, SPHEREPATH *, CSphere *, AC1Legacy_Vector3 *);
};


struct SurfaceWindowVtbl
{
  void *(__thiscall *__vecDelDtor)(SurfaceWindow *this, unsigned int);
};


struct DBLevelResource
{
  PStringBase<char> m_Name;
  IDClass<_tagDataID,32,0> m_LevelID;
  RenderSurface *m_pResource;
};


struct DBLevelInfo
{
  DBLevelResource m_Resources[6];
};


struct PackableLLNode<unsigned long>
{
  unsigned int data;
  PackableLLNode<unsigned long> *next;
  PackableLLNode<unsigned long> *prev;
};


struct portal_info
{
  int seen;
  int inflag;
};


struct view_poly
{
  int vertex_count;
  int vertex_index;
  float xmin;
  float xmax;
  float ymin;
  float ymax;
};


struct Vec2D
{
  float x;
  float y;
};


struct view_vertex
{
  Vec2D pt;
  Plane plane;
};


struct _STL_pair<IDClass<_tagDataID,32,0>,MaterialInstance *>
{
  IDClass<_tagDataID,32,0> first;
  MaterialInstance *second;
};


const struct VertexFormatInfo
{
  unsigned int format;
  unsigned int size;
  bool bFVFCompatible;
  unsigned int formatFVF;
  unsigned int numWeights;
  unsigned int numTCPairs;
  unsigned int numMatrices;
  unsigned int offsetOrigin;
  unsigned int offsetWeight0;
  unsigned int offsetWeight1;
  unsigned int offsetWeight2;
  unsigned int offsetWeight3;
  unsigned int offsetWeight4;
  unsigned int offsetNormal;
  unsigned int offsetPointSize;
  unsigned int offsetDiffuse;
  unsigned int offsetSpecular;
  unsigned int offsetTCPair[8];
  unsigned int offsetVectorS;
  unsigned int offsetVectorT;
  unsigned int offsetMatrices;
  unsigned int offsetMWeights;
};


struct __declspec(align(4)) VertexArray : ReferenceCountTemplate<1048576,1>
{
  VertexFormatInfo vertexFormat;
  unsigned int numVertices;
  void *vertices;
  bool staticVertices;
  bool locked;
  bool m_bStripHWExtraTexCoords;
  bool m_OnlyWriteOnce;
  BBox m_BoundingBox;
  SmartArray<unsigned long,1> m_InfluencedBoneIndexArray;
  bool m_IsYAndZSwapped;
};


struct __declspec(align(4)) RenderVertexBuffer : VertexArray
{
  bool m_UseVirtualArray;
  VertexFormatInfo m_HardwareVertexFormat;
  void *m_pVirtualArray;
  bool m_IsVirtualArrayLocked;
  bool m_NeedRefreshVirtualArray;
  BBox m_VirtualArrayBoundingBox;
  bool m_IsVirtualArrayBoundingBoxValid;
};


struct __declspec(align(4)) RenderIndexBuffer
{
  RenderIndexBufferVtbl *vfptr;
  unsigned int m_nNumIndices;
  unsigned int m_nActualNumIndices;
  char indexSize;
  char *indices;
  bool staticData;
  bool m_OnlyWriteOnce;
  bool locked;
  bool needRefresh;
  bool m_bUseIndexCaching;
  unsigned int m_nMinVertexIndex;
  unsigned int m_nMaxVertexIndex;
  bool m_bNeedRecalcMinMax;
};


struct RenderMeshBatch : ReferenceCountTemplate<1048576,1>
{
  PrimType m_PrimitivesType;
  RenderMesh *m_pContainerMesh;
  unsigned int m_MaterialIndex;
  unsigned int m_VertexArrayIndex;
  unsigned int m_IndexArrayIndex;
  unsigned int m_FirstIndex;
  unsigned int m_NumPrimitives;
  const void *m_pIBTrickUserObjectPointer;
  unsigned int m_IBTrickVertexSkinningID;
  unsigned int m_IBTrickStreamFrameID;
  unsigned int m_IBTrickBaseVertexIndex;
};


struct SmartArray<RenderMeshFragmentTopology_TopVertexType,1>
{
  RenderMeshFragmentTopology_TopVertexType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<RenderMeshFragmentTopology_TopTriangleType,1>
{
  RenderMeshFragmentTopology_TopTriangleType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<RenderMeshFragmentTopology_TopEdgeType,1>
{
  RenderMeshFragmentTopology_TopEdgeType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderMeshFragmentTopology : ReferenceCountTemplate<1048576,1>
{
  SmartArray<RenderMeshFragmentTopology_TopVertexType,1> m_TopVertices;
  SmartArray<RenderMeshFragmentTopology_TopTriangleType,1> m_TopTriangles;
  SmartArray<RenderMeshFragmentTopology_TopEdgeType,1> m_TopEdges;
};


const struct Ray
{
  Vector3 pt;
  Vector3 dir;
  float length;
};


struct SPHEREPATH
{
  unsigned int num_sphere;
  CSphere *local_sphere;
  AC1Legacy_Vector3 local_low_point;
  CSphere *global_sphere;
  AC1Legacy_Vector3 global_low_point;
  CSphere *localspace_sphere;
  AC1Legacy_Vector3 localspace_low_point;
  AC1Legacy_Vector3 *localspace_curr_center;
  AC1Legacy_Vector3 *global_curr_center;
  Position localspace_pos;
  AC1Legacy_Vector3 localspace_z;
  CObjCell *begin_cell;
  Position *begin_pos;
  Position *end_pos;
  CObjCell *curr_cell;
  Position curr_pos;
  AC1Legacy_Vector3 global_offset;
  int step_up;
  AC1Legacy_Vector3 step_up_normal;
  int collide;
  CObjCell *check_cell;
  Position check_pos;
  SPHEREPATH_InsertType insert_type;
  int step_down;
  SPHEREPATH_InsertType backup;
  CObjCell *backup_cell;
  Position backup_check_pos;
  int obstruction_ethereal;
  int hits_interior_cell;
  int bldg_check;
  float walkable_allowance;
  float walk_interp;
  float step_down_amt;
  CSphere walkable_check_pos;
  CPolygon *walkable;
  int check_walkable;
  AC1Legacy_Vector3 walkable_up;
  Position walkable_pos;
  float walkable_scale;
  int cell_array_valid;
  int neg_step_up;
  AC1Legacy_Vector3 neg_collision_normal;
  int neg_poly_hit;
  int placement_allows_sliding;
};


struct SmartArray<ModifierRef *,1>
{
  ModifierRef **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<MaterialModifier *,1>
{
  MaterialModifier **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) MaterialInstance : DBObj
{
  PStringBase<char> m_materialName;
  IDClass<_tagDataID,32,0> m_materialID;
  PStringBase<char> m_materialTypeName;
  unsigned int m_materialType;
  SmartArray<ModifierRef *,1> m_aModifierRefs;
  bool m_AllowStencilShadows;
  bool m_WantDiscardGeometry;
  RenderMaterial *m_pMaterial;
  SmartArray<MaterialModifier *,1> m_aModifiers;
  RenderMaterial *m_pModifiedMaterial;
  bool m_bNeedRefresh;
};


struct RenderIndexBufferVtbl
{
  void *(__thiscall *__vecDelDtor)(RenderIndexBuffer *this, unsigned int);
  bool (__thiscall *Startup)(RenderIndexBuffer *this, const unsigned int, const char, const bool, const bool, const bool);
  void (__thiscall *Shutdown)(RenderIndexBuffer *this);
  RenderIndexBuffer *(__thiscall *Duplicate)(RenderIndexBuffer *this);
};


struct RenderMeshFragmentTopology_TopVertexType
{
  char m_BatchIndex;
  unsigned __int16 m_VertexIndex;
};


struct RenderMeshFragmentTopology_TopTriangleType
{
  unsigned __int16 m_TopVertexIndices[3];
  unsigned __int16 m_TopEdgeIndices[3];
};


struct RenderMeshFragmentTopology_TopEdgeType
{
  unsigned __int16 m_TopVertexIndices[2];
  unsigned __int16 m_NeighbourTopTriangleIndices[2];
};


struct ModifierRef
{
  PStringBase<char> name;
  IDClass<_tagDataID,32,0> id;
};


struct SmartArray<MaterialProperty *,1>
{
  MaterialProperty **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) MaterialModifier : DBObj
{
  SmartArray<MaterialProperty *,1> properties;
};


struct SmartArray<MaterialLayer *,1>
{
  MaterialLayer **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<MaterialShaderConstant,1>
{
  MaterialShaderConstant *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


const struct RenderMaterial : DBObj
{
  bool m_IsInstance;
  MaterialModifier properties;
  SmartArray<MaterialLayer *,1> layers;
  SmartArray<PStringBase<char>,1> m_MaterialShaderConstantNames;
  SmartArray<MaterialShaderConstant,1> m_MaterialShaderConstants;
  bool m_IsOptimized;
  bool m_SupportsLighting;
  bool m_SupportsMultiPassLighting;
  bool m_SupportsCombinedAmbientPass;
  bool m_SupportsGlowing;
  bool m_NeedsAlphaBlendPass;
  bool m_UsesVideoPost;
  float m_Opacity;
  char m_LayerIndices[45][8][3];
};


struct SmartArray<MaterialField *,1>
{
  MaterialField **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct MaterialProperty
{
  PStringBase<char> name;
  unsigned int nameID;
  RMDataType dataType;
  unsigned int dataLength;
  void *data;
  PStringBase<char> dataName;
  bool m_IsShaderConstant;
  SmartArray<MaterialField *,1> fields;
  RenderTexture *m_pCachedTexture;
};


struct SmartArray<ShaderResourceType,1>
{
  ShaderResourceType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<LayerStage *,1>
{
  LayerStage **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<LayerModifier *,1>
{
  LayerModifier **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct Waveform
{
  WaveformType type;
  float base;
  float base_vel;
  float amplitude;
  float amplitude_vel;
  float phase;
  float phase_vel;
  float frequency;
  float frequency_vel;
  float roughness;
  float roughness_vel;
};


struct MaterialLayer
{
  unsigned int m_Options;
  unsigned int m_TrueFlags;
  unsigned int m_FalseFlags;
  RenderPassType m_RenderPass;
  SmartArray<ShaderResourceType,1> m_ShaderResources;
  SmartArray<LayerStage *,1> m_Stages;
  SmartArray<LayerModifier *,1> m_FFModifiers;
  BlendMode m_SourceBlend;
  BlendMode m_DestBlend;
  BlendOpType m_BlendOp;
  DepthTestMode m_DepthTest;
  bool m_DepthWrite;
  CullModeType m_CullMode;
  bool m_AlphaTest;
  Waveform m_AlphaTestRef;
  RGBAColor m_cDiffuse;
  RGBAColor m_cSpecular;
  Waveform m_wSpecularPower;
  RGBAColor m_cDye;
};


struct MaterialShaderConstant
{
  unsigned int m_PropertyType;
  BasePropertyValue *m_pPropertyValue;
};


union $711395BEB0BC82EB565F28100BC5C8E8
{
  unsigned int tcIndex;
  unsigned int stageIndex;
  unsigned int modifierIndex;
};


struct MaterialField
{
  RMFieldType fieldType;
  RMDataType dataType;
  unsigned int layerIndex;
  $711395BEB0BC82EB565F28100BC5C8E8 ___u3;
};


struct ShaderResourceType
{
  ShaderVersionType Version;
  PStringBase<char> VertexShaderFunctionName;
  PStringBase<char> PixelShaderFunctionName;
  SmartBuffer BinaryVertexShaderData;
  SmartBuffer BinaryPixelShaderData;
};


struct __declspec(align(4)) LayerStage
{
  PStringBase<char> m_SamplerName;
  PStringBase<char> m_TextureFileName;
  IDClass<_tagDataID,32,0> m_TextureDID;
  RenderTexture *m_pTexture;
  unsigned int m_SpecialTexture;
  TexAddress m_AddressModeU;
  TexAddress m_AddressModeV;
  TexFilterMode m_MinFilterMode;
  TexFilterMode m_MagFilterMode;
  TexFilterMode m_MipFilterMode;
  TextureOp m_FFColorOp;
  unsigned int m_FFColorArg1;
  unsigned int m_FFColorArg2;
  TextureOp m_FFAlphaOp;
  unsigned int m_FFAlphaArg1;
  unsigned int m_FFAlphaArg2;
  unsigned int m_FFTexCoordIndex;
  bool m_FFUseProjection;
};


struct LayerModifier
{
  LayerModifierVtbl *vfptr;
};


struct LayerModifierVtbl
{
  LayerModType (__thiscall *GetType)(LayerModifier *this);
  unsigned int (__thiscall *GetSize)(LayerModifier *this) __declspec(align(8));
  bool (__thiscall *DoesModifyVertex)(LayerModifier *this);
  LayerModifier *(__thiscall *Copy)(LayerModifier *this);
  void (__thiscall *Apply)(LayerModifier *this, void *, VertexFormatInfo *);
  void (__thiscall *ApplyTextureTransform)(LayerModifier *this, Matrix4 *);
  void (__thiscall *Serialize)(LayerModifier *this, Archive *);
  bool (__thiscall *LoadFromFileNode)(LayerModifier *this, PFileNode *, RenderMaterial *, const unsigned int, const unsigned int);
  bool (__thiscall *SaveToFileNode)(LayerModifier *this, PFileNode *, RenderMaterial *, const unsigned int, const unsigned int);
};


struct LongHash<CPhysicsObj> : HashBase<unsigned long>
{
};


struct LongHash<CWeenieObject> : HashBase<unsigned long>
{
};


struct IntrusiveHashTable<unsigned long,HashSetData<unsigned long> *,1>
{
  IntrusiveHashTable<unsigned long,HashSetData<unsigned long> *,1>Vtbl *vfptr;
  HashSetData<unsigned long> *m_aInplaceBuckets[23];
  HashSetData<unsigned long> **m_buckets;
  HashSetData<unsigned long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashSet<unsigned long>
{
  HashSet<unsigned long>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashSetData<unsigned long> *,1> m_intrusiveTable;
};


struct HashSet<unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashSet<unsigned long> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashSetData<unsigned long> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashSetData<unsigned long> *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashSetData<unsigned long> *>
{
  unsigned int m_hashKey;
  HashSetData<unsigned long> *m_hashNext;
};


struct HashSetData<unsigned long> : IntrusiveHashData<unsigned long,HashSetData<unsigned long> *>
{
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,double> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,double> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,double> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,double> **m_buckets;
  HashTableData<unsigned long,double> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,double,0>
{
  HashTable<unsigned long,double,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,double> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,double,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,double,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,double> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,double> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,double> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,double> *m_hashNext;
};


struct HashTableData<unsigned long,double> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,double> *>
{
  long double m_data;
};


struct LongHash<CObjectInventory> : HashBase<unsigned long>
{
};



struct AC1Legacy_PQueueArray<double>Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_PQueueArray<double> *this, unsigned int);
};





struct EnvCollisionProfile
{
  AC1Legacy_Vector3 velocity;
  unsigned int _bitfield;
};


struct ObjCollisionProfile
{
  unsigned int id;
  AC1Legacy_Vector3 velocity;
  IDClass<_tagDataID,32,0> wcid;
  ITEM_TYPE itemType;
  unsigned int _bitfield;
};


struct AtkCollisionProfile
{
  int part;
  unsigned int id;
  unsigned int location;
};


struct VisualDesc : PackObj
{
};


struct WeenieDesc : PackObj
{
};


struct __declspec(align(4)) PhysicsDesc : PackObj
{
  unsigned int bitfield;
  void *movement_buffer;
  unsigned int buff_length;
  int autonomous_movement;
  unsigned int animframe_id;
  Position pos;
  unsigned int state;
  float object_scale;
  float friction;
  float elasticity;
  float translucency;
  AC1Legacy_Vector3 velocity;
  AC1Legacy_Vector3 acceleration;
  AC1Legacy_Vector3 omega;
  unsigned int num_children;
  unsigned int *child_ids;
  unsigned int *child_location_ids;
  unsigned int parent_id;
  unsigned int location_id;
  IDClass<_tagDataID,32,0> mtable_id;
  IDClass<_tagDataID,32,0> stable_id;
  IDClass<_tagDataID,32,0> phstable_id;
  PScriptType default_script;
  float default_script_intensity;
  IDClass<_tagDataID,32,0> setup_id;
  unsigned __int16 timestamps[9];
};




struct PackableLLNode<InventoryPlacement>
{
  InventoryPlacement data;
  PackableLLNode<InventoryPlacement> *next;
  PackableLLNode<InventoryPlacement> *prev;
};


struct PackableList<InventoryPlacement> : PackObj
{
  PackableLLNode<InventoryPlacement> *head;
  PackableLLNode<InventoryPlacement> *tail;
  unsigned int curNum;
};



struct BlobFragHeader_t
{
  unsigned __int64 blobID;
  unsigned __int16 numFrags;
  unsigned __int16 blobFragSize;
  unsigned __int16 blobNum;
  unsigned __int16 queueID;
};


struct BlobFrag : ReferenceCountTemplate_1048576_0
{
  BlobFrag *blobNextFrag_;
  BlobFragHeader_t *hdrWrite_;
  BlobFragHeader_t *hdrRead_;
  BlobFragHeader_t memberHeader_;
  const char *dat_;
  NetBlob *myBlob_;
};


struct QualityChangeHandler
{
  QualityChangeHandlerVtbl *vfptr;
};


struct QualityChangeHandlerVtbl
{
  void (__thiscall *OnQualityChanged)(QualityChangeHandler *this, CWeenieObject *, StatType, unsigned int);
  void (__thiscall *OnQualityRemoved)(QualityChangeHandler *this, CWeenieObject *, StatType, unsigned int);
};


struct SmartArray<QualityChangeHandler *,1>
{
  QualityChangeHandler **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashData<unsigned long,QualityHandler *>
{
  unsigned int m_hashKey;
  QualityHandler *m_hashNext;
};


struct IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *,0>
{
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *,0>Vtbl *vfptr;
  HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *m_aInplaceBuckets[23];
  HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> **m_buckets;
  HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned __int64,SmartArray<QualityChangeHandler *,1> *,0>
{
  HashTable<unsigned __int64,SmartArray<QualityChangeHandler *,1> *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *,0> m_intrusiveTable;
};


struct __unaligned __declspec(align(4)) QualityHandler : IntrusiveHashData<unsigned long,QualityHandler *>
{
  HashTable<unsigned __int64,SmartArray<QualityChangeHandler *,1> *,0> m_handlers;
};


struct HashTable<unsigned __int64,SmartArray<QualityChangeHandler *,1> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned __int64,SmartArray<QualityChangeHandler *,1> *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *,0> *this, unsigned int);
};


struct __declspec(align(8)) IntrusiveHashData<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *>
{
  unsigned __int64 m_hashKey;
  HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *m_hashNext;
};


struct __declspec(align(8)) HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> : IntrusiveHashData<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *>
{
  SmartArray<QualityChangeHandler *,1> *m_data;
};


struct IntrusiveHashIterator<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *,0>
{
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *,0> *m_currHashTable;
  HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> **m_currBucket;
  HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *m_currElement;
};


struct HashIterator<unsigned __int64,SmartArray<QualityChangeHandler *,1> *,0>
{
  IntrusiveHashIterator<unsigned __int64,HashTableData<unsigned __int64,SmartArray<QualityChangeHandler *,1> *> *,0> m_iter;
};


struct IntrusiveHashTable<unsigned long,QualityHandler *,1>
{
  IntrusiveHashTable<unsigned long,QualityHandler *,1>Vtbl *vfptr;
  QualityHandler *m_aInplaceBuckets[23];
  QualityHandler **m_buckets;
  QualityHandler **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,QualityHandler *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,QualityHandler *,1> *this, unsigned int);
};


struct IntrusiveHashIterator<unsigned long,QualityHandler *,1>
{
  IntrusiveHashTable<unsigned long,QualityHandler *,1> *m_currHashTable;
  QualityHandler **m_currBucket;
  QualityHandler *m_currElement;
};


struct QualityRegistrar
{
  QualityRegistrarVtbl *vfptr;
  IntrusiveHashTable<unsigned long,QualityHandler *,1> m_handlers;
  QualityHandler m_PlayerQualityHandler;
  QualityHandler m_GlobalQualityHandler;
};


union $C4AF27E3A6DBF3C888B03EB609542EE3
{
  bool (__thiscall *UnRegisterAllQualityHandler)(QualityRegistrar *this, QualityChangeHandler *);
  bool (__thiscall *UnRegisterAllQualityHandler)(QualityRegistrar *this, unsigned int);
};


struct QualityRegistrarVtbl
{
  void *(__thiscall *__vecDelDtor)(QualityRegistrar *this, unsigned int);
  bool (__thiscall *RegisterQualityHandler)(QualityRegistrar *this, unsigned int, StatType, unsigned int, QualityChangeHandler *);
  bool (__thiscall *RegisterQualityHandlerForThePlayer)(QualityRegistrar *this, StatType, unsigned int, QualityChangeHandler *);
  bool (__thiscall *UnRegisterQualityHandler)(QualityRegistrar *this, unsigned int, StatType, unsigned int, QualityChangeHandler *);
  bool (__thiscall *UnRegisterQualityHandlerForThePlayer)(QualityRegistrar *this, StatType, unsigned int, QualityChangeHandler *);
  _BYTE gap14[4];
  $C4AF27E3A6DBF3C888B03EB609542EE3 ___u5;
};


struct CLinkStatusSnapshot
{
  float RoundTripDelay;
  unsigned __int16 nPktsSent;
  unsigned __int16 nPktsRetransmitted;
  unsigned __int16 nPktsReceived;
  unsigned __int16 nPktsNAKed;
  unsigned int nBytesSent;
  unsigned int nBytesReceived;
  float TimeSinceLastGotData;
  float SnapshotDuration;
};


struct __declspec(align(8)) CLinkStatusAverages_CAverager<float,4>
{
  float m_Samples[4];
  long double m_CurTotal;
  unsigned __int16 m_nSamples;
  unsigned __int16 m_idxFirst;
};


struct __declspec(align(8)) CLinkStatusAverages_CAverager<unsigned short,40>
{
  unsigned __int16 m_Samples[40];
  long double m_CurTotal;
  unsigned __int16 m_nSamples;
  unsigned __int16 m_idxFirst;
};


struct __declspec(align(8)) CLinkStatusAverages_CAverager<unsigned long,2>
{
  unsigned int m_Samples[2];
  long double m_CurTotal;
  unsigned __int16 m_nSamples;
  unsigned __int16 m_idxFirst;
};


struct __declspec(align(8)) CLinkStatusAverages_CAverager<double,2>
{
  long double m_Samples[2];
  long double m_CurTotal;
  unsigned __int16 m_nSamples;
  unsigned __int16 m_idxFirst;
};


struct CLinkStatusAverages
{
  CLinkStatusSnapshot m_Snapshot;
  long double m_LocalTimeOfSnapshot;
  CLinkStatusAverages_CAverager<float,4> m_RoundTripDelays;
  CLinkStatusAverages_CAverager<unsigned short,40> m_nPktsSent;
  CLinkStatusAverages_CAverager<unsigned short,40> m_nPktsRetransmitted;
  CLinkStatusAverages_CAverager<unsigned short,40> m_nPktsReceived;
  CLinkStatusAverages_CAverager<unsigned short,40> m_nPktsNAKed;
  CLinkStatusAverages_CAverager<unsigned long,2> m_nBytesSent;
  CLinkStatusAverages_CAverager<unsigned long,2> m_nBytesReceived;
  CLinkStatusAverages_CAverager<double,2> m_TimeDiffs;
};


struct StreamPackObj : PackObj
{
};


struct CBufferIterator
{
  const char *m_pBuf;
  unsigned int m_dwCurOfs;
  unsigned int m_cbBufSize;
};


struct NetAuthenticator_CGrowBuffer
{
  char *m_pBuf;
  unsigned int m_cbAllocatedSize;
  unsigned int m_cbCurSize;
};


struct NetAuthenticator : StreamPackObj
{
  unsigned int m_dwAuthType;
  unsigned int m_dwAuthFlags;
  unsigned int m_dwConnectionSequenceNumber;
  accountID m_Account;
  accountID m_AccountToLogonAs;
  NetAuthenticator_CGrowBuffer m_CryptoData;
  NetAuthenticator_CGrowBuffer m_ExtraData;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,StringInfoData *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StringInfoData *> *,0> *m_currHashTable;
  HashTableData<unsigned long,StringInfoData *> **m_currBucket;
  HashTableData<unsigned long,StringInfoData *> *m_currElement;
};


struct HashIterator<unsigned long,StringInfoData *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,StringInfoData *> *,0> m_iter;
};


struct NetError : PackObj
{
  unsigned int m_stringID;
  int m_tableID;
};


struct IQueuedUIEventDeliverer : Interface
{
};


struct InterfaceInfo<IQueuedUIEventDeliverer>
{
};


struct CLinkStatusPlugin : CPluginPrototype
{
};


struct LinkStatusHolder : CLinkStatusPlugin
{
  $DDE4C8BA43F9A489C0C96F0C76F0F3BD m_eLinkState;
  long double m_tLastHeardFromCurServer;
  float m_fConnectionProgress;
  float m_fPacketLoss;
  NetError m_errFinal;
  int m_nodropKick;
};


struct IntrusiveHashTable<UIElement *,HashSetData<UIElement *> *,1>
{
  IntrusiveHashTable<UIElement *,HashSetData<UIElement *> *,1>Vtbl *vfptr;
  HashSetData<UIElement *> *m_aInplaceBuckets[23];
  HashSetData<UIElement *> **m_buckets;
  HashSetData<UIElement *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashSet<UIElement *>
{
  HashSet<UIElement *>Vtbl *vfptr;
  IntrusiveHashTable<UIElement *,HashSetData<UIElement *> *,1> m_intrusiveTable;
};


struct HashSet<UIElement *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashSet<UIElement *> *this, unsigned int);
};


struct IntrusiveHashTable<UIElement *,HashSetData<UIElement *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<UIElement *,HashSetData<UIElement *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<UIElement *,HashSetData<UIElement *> *>
{
  UIElement *m_hashKey;
  HashSetData<UIElement *> *m_hashNext;
};


struct HashSetData<UIElement *> : IntrusiveHashData<UIElement *,HashSetData<UIElement *> *>
{
};


struct CTimestamp<unsigned long,0>
{
  unsigned int m_timestamp;
};


struct UIListener : IInputActionCallback
{
  HashSet<UIElement *> m_hashElementsRegisteredWith;
  CTimestamp<unsigned long,0> m_tsSerialNumberLastListenedTo;
};


struct Box2D
{
  int m_x0;
  int m_y0;
  int m_x1;
  int m_y1;
};


struct IntrusiveHashTable<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1>
{
  IntrusiveHashTable<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1>Vtbl *vfptr;
  HashList<UIRegion *,UIRegion *,1>_HashListData *m_aInplaceBuckets[23];
  HashList<UIRegion *,UIRegion *,1>_HashListData **m_buckets;
  HashList<UIRegion *,UIRegion *,1>_HashListData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashList<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1>
{
  IntrusiveHashTable<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1> m_hash;
  DLListBase m_list;
};


struct HashList<UIRegion *,UIRegion *,1>
{
  IntrusiveHashList<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1> m_ihlIntrusive;
};


struct UIRegion : UIListener
{
  Box2D m_box;
  tagPOINT m_ptTilingOffset;
  int m_zlevel;
  Graphic *m_image;
  Graphic *m_alphaImage;
  float m_alphaBlendMod;
  unsigned __int32 m_mouseOverTop : 1;
  unsigned __int32 m_visible : 1;
  unsigned __int32 m_transparent : 1;
  unsigned __int32 m_bEraseBackground : 1;
  unsigned __int32 m_mouseOver : 1;
  unsigned __int32 m_bTooltip : 1;
  unsigned __int32 m_bBlockClicks : 1;
  unsigned __int32 m_bDrawAfterChildren : 1;
  BlitMode m_eBlitMode;
  UIRegion *m_parent;
  UIObject *m_object;
  HashList<UIRegion *,UIRegion *,1> m_children;
  HashSet<unsigned long> m_mouseDownTable;
};


struct SmartArray<MediaDesc *,1>
{
  MediaDesc **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct StateDesc
{
  StateDescVtbl *vfptr;
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
  SmartArray<MediaDesc *,1> m_media;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StateDesc> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StateDesc> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,StateDesc> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,StateDesc> **m_buckets;
  HashTableData<unsigned long,StateDesc> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,StateDesc,0>
{
  HashTable<unsigned long,StateDesc,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StateDesc> *,0> m_intrusiveTable;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ElementDesc> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ElementDesc> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,ElementDesc> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,ElementDesc> **m_buckets;
  HashTableData<unsigned long,ElementDesc> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,ElementDesc,0>
{
  HashTable<unsigned long,ElementDesc,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ElementDesc> *,0> m_intrusiveTable;
};


struct __unaligned __declspec(align(4)) ElementDesc : StateDesc
{
  unsigned int m_elementID;
  unsigned int m_type;
  unsigned int m_engineType;
  unsigned int m_baseElement;
  IDClass<_tagDataID,32,0> m_baseLayout;
  unsigned int m_defaultState;
  unsigned int m_leftEdge;
  unsigned int m_topEdge;
  unsigned int m_rightEdge;
  unsigned int m_bottomEdge;
  HashTable<unsigned long,StateDesc,0> m_states;
  HashTable<unsigned long,ElementDesc,0> m_children;
  unsigned int m_uiReadOrder;
  PStringBase<char> m_strComments;
  PStringBase<char> m_strName;
};


struct $B3063E6E2789ED8335ADD9A2B80B8500
{
  unsigned __int32 m_bResizeLine : 1;
  unsigned __int32 m_bDragable : 1;
  unsigned __int32 m_bActivatable : 1;
  unsigned __int32 m_bActivateOnShow : 1;
  unsigned __int32 m_bSaveLocation : 1;
  unsigned __int32 m_bSaveSize : 1;
  unsigned __int32 m_bSaveVisible : 1;
  unsigned __int32 m_bContextMenu : 1;
  unsigned __int32 m_bNotifyOnDraw : 1;
  unsigned __int32 m_bNotifyOnResize : 1;
  unsigned __int32 m_bNotifyOnMove : 1;
  unsigned __int32 m_bNotifyOnParentChange : 1;
  unsigned __int32 m_bNotifyOnCreate : 1;
  unsigned __int32 m_bNotifyOnMouseMove : 1;
  unsigned __int32 m_bShouldOwnObject : 1;
  unsigned __int32 m_bObjectIsTemporary : 1;
  unsigned __int32 m_bDoesOwnObject : 1;
  unsigned __int32 m_bIsInitialized : 1;
  unsigned __int32 m_bIsMoving : 1;
  unsigned __int32 m_bIsResizing : 1;
  unsigned __int32 m_bIsActive : 1;
  unsigned __int32 m_bIsRootElement : 1;
  unsigned __int32 m_bWantsFocus : 1;
  unsigned __int32 m_bWantsDblClicks : 1;
  unsigned __int32 m_bNotifyOnHover : 1;
};


union $CD6AA5D2FBD52F9BFA9C695D4D20E488
{
  unsigned int m_nFlags;
  $B3063E6E2789ED8335ADD9A2B80B8500 __s1;
};


struct IntrusiveHashTable<UIListener *,HashSetData<UIListener *> *,1>
{
  IntrusiveHashTable<UIListener *,HashSetData<UIListener *> *,1>Vtbl *vfptr;
  HashSetData<UIListener *> *m_aInplaceBuckets[23];
  HashSetData<UIListener *> **m_buckets;
  HashSetData<UIListener *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashSet<UIListener *>
{
  HashSet<UIListener *>Vtbl *vfptr;
  IntrusiveHashTable<UIListener *,HashSetData<UIListener *> *,1> m_intrusiveTable;
};


struct IntrusiveHashIterator<UIListener *,HashSetData<UIListener *> *,1>
{
  IntrusiveHashTable<UIListener *,HashSetData<UIListener *> *,1> *m_currHashTable;
  HashSetData<UIListener *> **m_currBucket;
  HashSetData<UIListener *> *m_currElement;
};


struct HashSetIterator<UIListener *>
{
  IntrusiveHashIterator<UIListener *,HashSetData<UIListener *> *,1> m_iter;
};


struct UIElement : UIRegion
{
  UIElement *m_itemDragged;
  UIElement *m_pFocusElement;
  MediaMachine m_mediaMachine;
  LayoutDesc *m_layout;
  ElementDesc m_desc;
  unsigned int m_state;
  StateDesc *m_curStateDesc;
  PropertyCollection m_instanceProperties;
  BorderLocation m_currentBorder;
  int m_DragStartX;
  int m_DragStartY;
  int m_DragStartHeight;
  int m_DragStartWidth;
  int m_mouseInitialX;
  int m_mouseInitialY;
  bool (__cdecl *m_dragDropCallback)(UIElement *, UIElement *);
  UILocationData m_defaultLocation;
  StringInfo m_TTText;
  bool m_bShouldBeMouseVisible;
  bool m_bIsMouseVisible;
  int m_cursorHotX;
  int m_cursorHotY;
  IDClass<_tagDataID,32,0> m_cursorDID;
  $CD6AA5D2FBD52F9BFA9C695D4D20E488 ___u24;
  unsigned int m_eClampGameView;
  Box2D m_surfaceBox;
  HashSet<UIListener *> m_hashListeners;
  HashSetIterator<UIListener *> m_iterListeners;
  unsigned int m_idInputMap;
};


struct Graphic
{
  GraphicVtbl *vfptr;
  IDClass<_tagDataID,32,0> m_id;
  RenderSurface *m_image;
};


struct SmartArray<Box2D,1>
{
  Box2D *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(8)) UIObject : ReferenceCountTemplate<1048576,1>
{
  bool m_bVisible;
  bool m_bTemporary;
  unsigned int m_eClampGameView;
  int m_nDepth;
  long double m_tTouchTime;
  unsigned int m_nVirtualX;
  unsigned int m_nVirtualY;
  unsigned int m_nVirtualWidth;
  unsigned int m_nVirtualHeight;
  Vector3 m_vScale;
  UIRegion *m_pOwner;
  SmartArray<Box2D,1> m_dirtyRects;
};


struct IntrusiveHashTable<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1> *this, unsigned int);
};


struct IntrusiveHashData<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *>
{
  UIRegion *m_hashKey;
  HashList<UIRegion *,UIRegion *,1>_HashListData *m_hashNext;
};


struct IntrusiveHashListData<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *> : IntrusiveHashData<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *>, DLListData
{
};


struct HashList<UIRegion *,UIRegion *,1>_HashListData : IntrusiveHashListData<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *>
{
  UIRegion *m_data;
};


struct MediaMachine : UIListener
{
  UIElement *m_owner;
  SmartArray<MediaDesc *,1> m_array;
  unsigned int m_curIndex;
};


const struct __declspec(align(8)) LayoutDesc : DBObj
{
  unsigned int m_displayWidth;
  unsigned int m_displayHeight;
  HashTable<unsigned long,ElementDesc,0> m_elements;
  PStringBase<char> m_strElementHeader;
  PStringBase<char> m_strElementWHeader;
  PStringBase<char> m_strStateHeader;
  PStringBase<char> m_strStateWHeader;
};


struct StateDescVtbl
{
  void *(__thiscall *__vecDelDtor)(StateDesc *this, unsigned int);
  _BYTE gap4[4];
  void (__thiscall *GetSubDataIDs)(StateDesc *this, QualifiedDataIDArray *);
  bool (__thiscall *ToFileNode)(StateDesc *this, PFileNode *);
  bool (__thiscall *FromFileNode)(StateDesc *this, PFileNode *);
  bool (__thiscall *PositionToFileNode)(StateDesc *this, PFileNode *);
  bool (__thiscall *HandleNode)(StateDesc *this, PFileNode *, bool *);
  bool (__thiscall *CheckFFN)(StateDesc *this, PFileNode *);
  void (__thiscall *UpdateSizeAndPosition)(StateDesc *this, Box2D *, Box2D *, unsigned int, unsigned int, unsigned int, unsigned int);
};


struct MediaDesc
{
  MediaDescVtbl *vfptr;
  unsigned int m_type;
};


struct HashTable<unsigned long,StateDesc,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,StateDesc,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StateDesc> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StateDesc> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,StateDesc> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,StateDesc> *m_hashNext;
};


struct HashTableData<unsigned long,StateDesc> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,StateDesc> *>
{
  StateDesc m_data;
};


struct HashTable<unsigned long,ElementDesc,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,ElementDesc,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ElementDesc> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ElementDesc> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,ElementDesc> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,ElementDesc> *m_hashNext;
};


struct __unaligned __declspec(align(4)) HashTableData<unsigned long,ElementDesc> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,ElementDesc> *>
{
  ElementDesc m_data;
};


struct __declspec(align(4)) UILocationData
{
  float m_x0;
  float m_y0;
  float m_x1;
  float m_y1;
  bool m_shown;
};


struct HashSet<UIListener *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashSet<UIListener *> *this, unsigned int);
};


struct IntrusiveHashTable<UIListener *,HashSetData<UIListener *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<UIListener *,HashSetData<UIListener *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<UIListener *,HashSetData<UIListener *> *>
{
  UIListener *m_hashKey;
  HashSetData<UIListener *> *m_hashNext;
};


struct HashSetData<UIListener *> : IntrusiveHashData<UIListener *,HashSetData<UIListener *> *>
{
};


struct GraphicVtbl
{
  void *(__thiscall *__vecDelDtor)(Graphic *this, unsigned int);
};


union $73BCD4327A7125F3B031E3246642C21A
{
  MD_Data_Anim *(__thiscall *DynamicCast_Anim)(MediaDesc *this);
  MD_Data_Anim *(__thiscall *DynamicCast_Anim)(MediaDesc *this);
};


union $5AA5FBC1CECDC46DFE1240D9C07E0651
{
  MD_Data_Image *(__thiscall *DynamicCast_Image)(MediaDesc *this);
  MD_Data_Image *(__thiscall *DynamicCast_Image)(MediaDesc *this);
};


union $BB9CFF75681CCA641DB5530033E91950
{
  MD_Data_Alpha *(__thiscall *DynamicCast_Alpha)(MediaDesc *this);
  MD_Data_Alpha *(__thiscall *DynamicCast_Alpha)(MediaDesc *this);
};


union $F77030DADABF91CC3164AF37CCD559E4
{
  MD_Data_Pause *(__thiscall *DynamicCast_Pause)(MediaDesc *this);
  MD_Data_Pause *(__thiscall *DynamicCast_Pause)(MediaDesc *this);
};


union $F803B8AF0044DCC71E9011F59A06A856
{
  MD_Data_Jump *(__thiscall *DynamicCast_Jump)(MediaDesc *this);
  MD_Data_Jump *(__thiscall *DynamicCast_Jump)(MediaDesc *this);
};


union $F7D5D97A8E08C0B530D31DC7D14B8639
{
  MD_Data_Message *(__thiscall *DynamicCast_Message)(MediaDesc *this);
  MD_Data_Message *(__thiscall *DynamicCast_Message)(MediaDesc *this);
};


union $4E9420DC06C1E1C0EB974BD3CAA6D06A
{
  MD_Data_Sound *(__thiscall *DynamicCast_Sound)(MediaDesc *this);
  MD_Data_Sound *(__thiscall *DynamicCast_Sound)(MediaDesc *this);
};


union $78366A95185C2A8AAD805379F3CC236D
{
  MD_Data_State *(__thiscall *DynamicCast_State)(MediaDesc *this);
  MD_Data_State *(__thiscall *DynamicCast_State)(MediaDesc *this);
};


union $99890344B0404F7C90FF8D0C7644840C
{
  MD_Data_Movie *(__thiscall *DynamicCast_Movie)(MediaDesc *this);
  MD_Data_Movie *(__thiscall *DynamicCast_Movie)(MediaDesc *this);
};


union $C1632C608BF8981F3AAAC6B352894F97
{
  MD_Data_Cursor *(__thiscall *DynamicCast_Cursor)(MediaDesc *this);
  MD_Data_Cursor *(__thiscall *DynamicCast_Cursor)(MediaDesc *this);
};


union $FAAB953FC7A0A2BBF7332DBF4FD603F0
{
  MD_Data_Fade *(__thiscall *DynamicCast_Fade)(MediaDesc *this);
  MD_Data_Fade *(__thiscall *DynamicCast_Fade)(MediaDesc *this);
};


struct MediaDescVtbl
{
  void *(__thiscall *__vecDelDtor)(MediaDesc *this, unsigned int);
  __declspec(align(16)) $73BCD4327A7125F3B031E3246642C21A ___u1;
  __declspec(align(8)) $5AA5FBC1CECDC46DFE1240D9C07E0651 ___u2;
  __declspec(align(8)) $BB9CFF75681CCA641DB5530033E91950 ___u3;
  __declspec(align(8)) $F77030DADABF91CC3164AF37CCD559E4 ___u4;
  __declspec(align(8)) $F803B8AF0044DCC71E9011F59A06A856 ___u5;
  __declspec(align(8)) $F7D5D97A8E08C0B530D31DC7D14B8639 ___u6;
  __declspec(align(8)) $4E9420DC06C1E1C0EB974BD3CAA6D06A ___u7;
  __declspec(align(8)) $78366A95185C2A8AAD805379F3CC236D ___u8;
  __declspec(align(8)) $99890344B0404F7C90FF8D0C7644840C ___u9;
  __declspec(align(8)) $C1632C608BF8981F3AAAC6B352894F97 ___u10;
  __declspec(align(8)) $FAAB953FC7A0A2BBF7332DBF4FD603F0 ___u11;
  float (__thiscall *GetDuration)(MediaDesc *this);
  bool (__thiscall *ToFileNode)(MediaDesc *this, PFileNode *);
  bool (__thiscall *FromFileNode)(MediaDesc *this, PFileNode *);
};


const struct __declspec(align(8)) MD_Data_Anim : MediaDesc
{
  float m_duration;
  unsigned int m_drawMode;
  SmartArray<IDClass<_tagDataID,32,0>,1> m_frames;
  long double m_StartTime;
  int m_displayedFrameNum;
};


const struct MD_Data_Image : MediaDesc
{
  IDClass<_tagDataID,32,0> m_file;
  unsigned int m_drawMode;
};


const struct __unaligned __declspec(align(4)) MD_Data_Alpha : MediaDesc
{
  IDClass<_tagDataID,32,0> m_file;
};


const struct MD_Data_Pause : MediaDesc
{
  float m_minDuration;
  float m_maxDuration;
  long double m_endTime;
};


const struct MD_Data_Jump : MediaDesc
{
  unsigned int m_jumpItemIndex;
  float m_probability;
};


const struct MD_Data_Message : MediaDesc
{
  unsigned int m_messageID;
  float m_probability;
};


const struct MD_Data_Sound : MediaDesc
{
  IDClass<_tagDataID,32,0> m_file;
  SoundType m_stype;
};


const struct MD_Data_State : MediaDesc
{
  unsigned int m_stateID;
  float m_probability;
};


const struct __unaligned __declspec(align(4)) MD_Data_Movie : MediaDesc
{
  PStringBase<char> m_strFileName;
  bool m_StretchToFullScreen;
  __declspec(align(4)) MovieTheatre *m_pMovieTheatre;
};


const struct __unaligned __declspec(align(4)) MD_Data_Cursor : MediaDesc
{
  IDClass<_tagDataID,32,0> m_file;
  int m_xHotspot;
  int m_yHotspot;
};


const struct MD_Data_Fade : MediaDesc
{
  float m_startAlpha;
  float m_endAlpha;
  float m_duration;
  long double m_startTime;
};


struct ATL_CComPtrBase<IGraphBuilder>
{
  IGraphBuilder *p;
};


struct ATL_CComPtr<IGraphBuilder> : ATL_CComPtrBase<IGraphBuilder>
{
};


struct ATL_CComPtrBase<IMediaControl>
{
  IMediaControl *p;
};


struct ATL_CComPtr<IMediaControl> : ATL_CComPtrBase<IMediaControl>
{
};


struct ATL_CComPtrBase<IMediaPosition>
{
  IMediaPosition *p;
};


struct ATL_CComPtr<IMediaPosition> : ATL_CComPtrBase<IMediaPosition>
{
};


struct ATL_CComPtrBase<IMediaEvent>
{
  IMediaEvent *p;
};


struct ATL_CComPtr<IMediaEvent> : ATL_CComPtrBase<IMediaEvent>
{
};


struct ATL_CComPtrBase<IBaseFilter>
{
  IBaseFilter *p;
};


struct ATL_CComPtr<IBaseFilter> : ATL_CComPtrBase<IBaseFilter>
{
};


struct MovieTheatre : ReferenceCountTemplate<1048576,1>
{
  UIElement *m_pOwner;
  unsigned int m_Flags;
  bool m_bStopped;
  ATL_CComPtr<IGraphBuilder> m_pGB;
  ATL_CComPtr<IMediaControl> m_pMC;
  ATL_CComPtr<IMediaPosition> m_pMP;
  ATL_CComPtr<IMediaEvent> m_pME;
  ATL_CComPtr<IBaseFilter> m_pRenderer;
};


struct IFilterGraph : IUnknown
{
};


struct IGraphBuilder : IFilterGraph
{
};


struct IMediaControl : IDispatch
{
};


struct IMediaPosition : IDispatch
{
};


struct IMediaEvent : IDispatch
{
};


struct IMediaFilter : IPersist
{
};


struct IBaseFilter : IMediaFilter
{
};


struct SmartArray<UIChildFramework *,1>
{
  UIChildFramework **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct UIFramework : UIListener
{
  bool m_bCanForceHide;
  bool m_bIsForcedHidden;
  bool m_shown;
  SmartArray<UIChildFramework *,1> m_children;
};


struct UIChildFramework : UIFramework
{
  UIFramework *m_parent;
};


struct SmartArray<UIElement *,1>
{
  UIElement **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct UIMainFramework : UIFramework
{
  SmartArray<UIElement *,1> m_rootElements;
};


struct UIPersistantData : NoticeHandler
{
  CharacterSet _charSet;
  bool _receivedSet;
  unsigned int m_iidSelectedAvatar;
};


struct UIFlow : Interface, NoticeHandler, UIListener
{
  Turbine_RefCount m_cTurbineRefCount;
  unsigned int _curMode;
  unsigned int _nextMode;
  UIMainFramework *_curUI;
  UIPersistantData *_data;
  StringInfo _nextText;
};


struct NetInitializer
{
};


struct $03CB7E004CA5755A24201E14CFC75D1E
{
  unsigned int cBad;
  unsigned int cMisc;
  unsigned int cAck;
  unsigned int cNak;
  unsigned int cPak;
  unsigned int cHeaderOnly;
  unsigned int cDataOnly;
  unsigned int cHeaderAndData;
};


struct LoggingFunctions
{
  void (__cdecl *pfnRecvLogger)(PacketInfo *, unsigned int);
  void (__cdecl *pfnSendLogger)(PacketInfo *, unsigned int);
  void (__cdecl *pfnUncompressedRecvLogger)(PacketInfo *, unsigned int);
  void (__cdecl *pfnUncompressedSendLogger)(PacketInfo *, unsigned int);
  unsigned int dwUserLoggingData;
};


struct SharedNet
{
  SharedNetVtbl *vfptr;
  __declspec(align(8)) NetInitializer m_AutoInit;
  unsigned int m_sockRead;
  unsigned int m_sockWrite;
  PortalDH *dh_;
  unsigned __int16 netID_;
  __declspec(align(8)) _BYTE receivers_[34816];
  ReceiverData *connectionsHead_;
  ReceiverData *connectionsTail_;
  long double lastDidUseTime_;
  CQuickTimer m_UseTime_TimeLimit;
  $03CB7E004CA5755A24201E14CFC75D1E m_packetStatsIncoming;
  PerfMonCounter<unsigned __int64> *m_pBytesSentCounter;
  PerfMonCounter<unsigned __int64> *m_pBytesReceivedCounter;
  PerfMonCounter<unsigned __int64> *m_pBadPacketsReceivedCounter;
  PerfMonCounter<unsigned __int64> *m_pBadPacketsReceivedRawCounter;
  PerfMonCounter<unsigned __int64> *m_pPacketsRetransmittedCounter;
  LoggingFunctions m_Loggers;
  CNetLayerPacket *m_pIncomingPacket;
};


struct SharedNetVtbl
{
  void (__thiscall *AddToPerfCounter)(SharedNet *this, NetPerfCounter, int);
  _BYTE gap4[8];
  bool (__thiscall *ProcessConnection)(SharedNet *this, ReceiverData *);
  void (__thiscall *OnUseTimeTimeout)(SharedNet *this);
  void (__thiscall *BeforeCheckingSocket)(SharedNet *this);
  bool (__thiscall *ReadAndProcessPackets)(SharedNet *this);
  int (__thiscall *ReadNextPacket)(SharedNet *this, unsigned int, CNetLayerPacket *);
  bool (__thiscall *ProcessPacket)(SharedNet *this, CNetLayerPacket *);
  bool (__thiscall *VerifyHeader)(SharedNet *this, CNetLayerPacket *);
  bool (__thiscall *SplitPacketData)(SharedNet *this, CNetLayerPacket *);
  bool (__thiscall *ProcessNewRemoteInterval)(SharedNet *this, CNetLayerPacket *);
  bool (__thiscall *ProcessOptionalHeaders)(SharedNet *this, CNetLayerPacket *);
  bool (__thiscall *ProcessOptionalHeader)(SharedNet *this, COptionalHeader *, CNetLayerPacket *);
  bool (__thiscall *ProcessBlobFrags)(SharedNet *this, CNetLayerPacket *);
  void (__thiscall *SetConnectionState)(SharedNet *this, unsigned __int16, ConnectionState);
  void (__thiscall *HandleTimeSynch)(SharedNet *this, CTimeSyncHeader *, CNetLayerPacket *);
  void (__thiscall *HandleNak)(SharedNet *this, CSeqIDListHeader<4096,33> *, CNetLayerPacket *);
  void (__thiscall *HandlePak)(SharedNet *this, COnePrimHeader<16384,1,unsigned long> *, CNetLayerPacket *);
  void (__thiscall *HandleEmptyAck)(SharedNet *this, CSeqIDListHeader<8192,33> *, CNetLayerPacket *);
};


struct AC1Legacy_vlong : PackObj
{
  AC1Legacy_vlong_value *value;
  int negative;
};


struct PortalDH
{
  AC1Legacy_vlong shared_base_;
  AC1Legacy_vlong shared_prime_;
};


struct AVL<unsigned long,unsigned long>
{
  AVLNode<unsigned long,unsigned long> *_root;
  unsigned int _currNum;
};


struct ReceiverData
{
  unsigned __int16 m_RecID;
  unsigned __int16 iteration_;
  unsigned int highestIDReceived_;
  ReceiverData *next_;
  ReceiverData *prev_;
  long double timeStamp_;
  long double m_LocalTimeLastGotData;
  CryptoSystem *cryptoOutgoing_;
  CryptoSystem *cryptoIncoming_;
  NetKeyExch *keyExch_;
  unsigned __int16 m_NetID;
  sockaddr_in m_Addr;
  unsigned __int16 m_CurrentRemoteInterval;
  ReceiverState m_NakState;
  ConnectionState m_ConnectionState;
  AVL<unsigned long,unsigned long> m_SeqIDsWeNAKed;
  long double m_TimeLastConnectionStateChanged;
  long double lastSentHandshake_;
  unsigned int m_BytesReceived;
  unsigned __int64 m_qwReferralCookie;
};


struct List<PerfMonCounterInfo_PerfMonCounterNameHelp>
{
  List<PerfMonCounterInfo_PerfMonCounterNameHelp>Vtbl *vfptr;
  ListNode<PerfMonCounterInfo_PerfMonCounterNameHelp> *_head;
  ListNode<PerfMonCounterInfo_PerfMonCounterNameHelp> *_tail;
  unsigned int _num_elements;
};


struct __declspec(align(4)) PerfMonCounterInfo : ReferenceCountTemplate_1048576_0
{
  unsigned int m_CounterType;
  List<PerfMonCounterInfo_PerfMonCounterNameHelp> m_CounterNamesList;
  bool m_fCounterExistedPreviously;
};


struct PerfMonCounter<unsigned __int64> : PerfMonCounterInfo
{
  unsigned __int64 m_counter;
};


const struct PacketInfo
{
  unsigned int cbPacketInfo;
  sockaddr *saRemote;
  unsigned int cbData;
  const void *pvData;
  _WSABUF *aIOVecs;
  unsigned int nVecs;
  unsigned int cbRemote;
  PacketInfo_Protocol eProto;
  _WSABUF iovOldSchool;
};


struct NetPacket : ReferenceCountTemplate_1048576_0
{
  NetPacket *next_;
  COptionalHeader *specialFragList_[32];
  unsigned int numSpecialFrags_;
  BlobFrag *fragList_[29];
  unsigned int numFrags_;
  unsigned __int16 recipient_;
  unsigned int realPriority_;
  unsigned int size_;
  unsigned int seqNum_;
  unsigned int cryptoKey_;
  unsigned int checksum_;
  unsigned int flags_;
};


struct ProtoHeader
{
  unsigned int seqID_;
  unsigned int header_;
  unsigned int checksum_;
  unsigned __int16 recID_;
  unsigned __int16 interval_;
  unsigned __int16 datalen_;
  unsigned __int16 iteration_;
};


struct CNetLayerPacket : NetPacket
{
  ProtoHeader m_Hdr;
  char m_Data[65484];
  sockaddr_in m_Addr;
  CBufferIterator m_Iter;
  bool m_bValid;
  ReceiverData *m_pRecv;
  RecipientData *m_pRecip;
  unsigned int m_CryptoKey;
};


struct COptionalHeader : ReferenceCountTemplate_1048576_0
{
  unsigned int m_dwMask;
  unsigned int m_Flags;
  char *m_pData;
  unsigned int m_cbData;
};


const struct CTimeSyncHeader : COptionalHeader
{
  long double m_time;
};


const struct CSeqIDListHeader<4096,33> : COptionalHeader
{
  unsigned int m_IDs[115];
};


const struct COnePrimHeader<16384,1,unsigned long> : COptionalHeader
{
  unsigned int m_Prim;
};


const struct CSeqIDListHeader<8192,33> : COptionalHeader
{
  unsigned int m_IDs[115];
};


struct AC1Legacy_flex_unit
{
  unsigned int *a;
  unsigned int z;
  unsigned int n;
};


struct AC1Legacy_vlong_value : AC1Legacy_flex_unit
{
  unsigned int share;
};


struct CryptoSystem
{
  unsigned int lastIter_;
  unsigned int seed_;
  QTIsaac<8,unsigned long> *pGenerator_;
};


struct NetKeyExch : PackObj
{
  PortalDH *dh_;
  AC1Legacy_vlong rnum_;
  int fInitialized_;
};


struct __declspec(align(4)) AVLNode<unsigned long,unsigned long>
{
  AVLNode<unsigned long,unsigned long> *_left;
  AVLNode<unsigned long,unsigned long> *_right;
  AVLNode<unsigned long,unsigned long> *_parent;
  int _leftHeight;
  int _rightHeight;
  int _height;
  unsigned int _key;
  unsigned int *_data;
  bool _parentsize;
};


struct List<PerfMonCounterInfo_PerfMonCounterNameHelp>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<PerfMonCounterInfo_PerfMonCounterNameHelp> *this, unsigned int);
};


struct PerfMonCounterInfo_PerfMonCounterNameHelp
{
  unsigned __int16 m_languageID;
  PStringBase<unsigned short> m_name;
  PStringBase<unsigned short> m_help;
};


struct ListNode<PerfMonCounterInfo_PerfMonCounterNameHelp>
{
  PerfMonCounterInfo_PerfMonCounterNameHelp data;
  ListNode<PerfMonCounterInfo_PerfMonCounterNameHelp> *next;
  ListNode<PerfMonCounterInfo_PerfMonCounterNameHelp> *prev;
};


struct NIList<unsigned long>
{
  NIListElement<unsigned long> *head_;
  NIListElement<unsigned long> *tail_;
};


struct NIList<NetPacket *>
{
  NIListElement<NetPacket *> *head_;
  NIListElement<NetPacket *> *tail_;
};


struct IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *,0>
{
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *,0>Vtbl *vfptr;
  HashTableData<unsigned __int64,unsigned __int64> *m_aInplaceBuckets[23];
  HashTableData<unsigned __int64,unsigned __int64> **m_buckets;
  HashTableData<unsigned __int64,unsigned __int64> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned __int64,unsigned __int64,0>
{
  HashTable<unsigned __int64,unsigned __int64,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *,0> m_intrusiveTable;
};


struct SentPacketStore
{
  NIList<NetPacket *> m_sentPacketList;
  HashTable<unsigned __int64,unsigned __int64,0> m_sentNetBlobIDInfo;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,int> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,int> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,int> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,int> **m_buckets;
  HashTableData<unsigned long,int> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,int,0>
{
  HashTable<unsigned long,int,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,int> *,0> m_intrusiveTable;
};


struct IntervalData
{
  unsigned __int16 intervalID_;
  int nBytes_;
  int FlowLevel_;
  int nPkts_;
};


struct FlowQueue
{
  FlowQueueVtbl *vfptr;
  __declspec(align(8)) NetPacket *waitingPacketsHead_;
  NetPacket *waitingPacketsTail_;
  NIList<unsigned long> m_ackList;
  SentPacketStore m_sentPacketStore;
  NIList<unsigned long> m_emptyAckList;
  HashTable<unsigned long,int,0> empties_;
  unsigned int emptyAcks_[116];
  int emptyNum_;
  int m_cPacketsSent;
  int m_cPacketsAcked;
  unsigned int highestIDSent_;
  sockaddr_in addr_;
  RecipientData *myRecip_;
  ReceiverData *myReceiverData_;
  unsigned __int16 netID_;
  IntervalData CurLocalInterval_;
  PQueueArray<unsigned long,void *> pqueueSpecial_;
  long double intervalTime_;
  unsigned __int16 lastIntervalAcked_;
};


struct ClientFlowQueue : FlowQueue
{
  PQueueArray<unsigned long,void *> pqueue_;
  int bytesPrevSent_;
};


struct RecipientData
{
  long double lastTouched_;
  long double timeAllocated_;
  ConnectionState m_ConnectionState;
  NIList<NetBlob *> waitingBlobs_;
  ClientFlowQueue flowQueue_;
  RecipientData *next_;
  unsigned __int16 recID_;
  int onQueue_;
  Indicator *dependencies_;
  unsigned int gidPlayer_;
  unsigned int flushNum_;
};


struct QTIsaac<8,unsigned long>_randctx
{
  unsigned int randcnt;
  unsigned int *randrsl;
  unsigned int *randmem;
  unsigned int randa;
  unsigned int randb;
  unsigned int randc;
};


struct QTIsaac<8,unsigned long>
{
  QTIsaac<8,unsigned long>Vtbl *vfptr;
  QTIsaac<8,unsigned long>_randctx m_rc;
};


struct FlowQueueVtbl
{
  void *(__thiscall *__vecDelDtor)(FlowQueue *this, unsigned int);
  _BYTE gap4[4];
  NetBlob *(__thiscall *Dequeue)(FlowQueue *this, int);
  void (__thiscall *IncrementLocalInterval)(FlowQueue *this, unsigned int);
  int (__thiscall *WireRoomLeft)(FlowQueue *this, int);
  int (__thiscall *FragQueueRoomLeft)(FlowQueue *this, int);
  void (__thiscall *RecordBytesSent)(FlowQueue *this, int);
  void (__thiscall *RecordBytesQueued)(FlowQueue *this, int);
  void (__thiscall *RecordBytesDequeued)(FlowQueue *this, int);
  void (__thiscall *EnqueuePacket)(FlowQueue *this, NetPacket *, NetPacket **, NetPacket **);
  NetPacket *(__thiscall *DequeuePacket)(FlowQueue *this, NetPacket **, NetPacket **);
};


struct NIListElement<unsigned long>
{
  unsigned int data_;
  NIListElement<unsigned long> *next_;
};


struct NIListElement<NetPacket *>
{
  NetPacket *data_;
  NIListElement<NetPacket *> *next_;
};


struct HashTable<unsigned __int64,unsigned __int64,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned __int64,unsigned __int64,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *,0> *this, unsigned int);
};


struct __declspec(align(8)) IntrusiveHashData<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *>
{
  unsigned __int64 m_hashKey;
  HashTableData<unsigned __int64,unsigned __int64> *m_hashNext;
};


struct HashTableData<unsigned __int64,unsigned __int64> : IntrusiveHashData<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *>
{
  unsigned __int64 m_data;
};


struct HashTable<unsigned long,int,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,int,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,int> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,int> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,int> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,int> *m_hashNext;
};


struct HashTableData<unsigned long,int> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,int> *>
{
  int m_data;
};


struct PQueueArray<unsigned long,void *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PQueueArray<unsigned long,void *> *this, unsigned int);
};


struct HashBase<unsigned __int64>
{
  HashBase<unsigned __int64>Vtbl *vfptr;
  unsigned __int64 table_mask;
  unsigned int key_shift;
  HashBaseData<unsigned __int64> **buckets;
  unsigned int table_size;
  int fPlacementNew_;
};


struct UI64Hash<NetBlob> : HashBase<unsigned __int64>
{
};


struct UI64Hash<ArrivedEphInfo> : HashBase<unsigned __int64>
{
};


struct Indicator
{
  IndicatorVtbl *vfptr;
  UI64Hash<NetBlob> waitingBlobs_;
  UI64Hash<ArrivedEphInfo> arrivedEphBlobs_;
  ArrivedEphInfo *firstInfo_;
  long double flushStamp_;
};


struct QTIsaac<8,unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(QTIsaac<8,unsigned long> *this, unsigned int);
  void (__thiscall *randinit)(QTIsaac<8,unsigned long> *this, QTIsaac<8,unsigned long>_randctx *, bool);
  void (__thiscall *srand)(QTIsaac<8,unsigned long> *this, unsigned int, unsigned int, unsigned int, unsigned int *);
  void (__thiscall *isaac)(QTIsaac<8,unsigned long> *this, QTIsaac<8,unsigned long>_randctx *);
  void (__thiscall *shuffle)(QTIsaac<8,unsigned long> *this, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
};


struct IndicatorVtbl
{
  void *(__thiscall *__vecDelDtor)(Indicator *this, unsigned int);
};


struct HashBase<unsigned __int64>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashBase<unsigned __int64> *this, unsigned int);
};


struct ArrivedEphInfo : UI64HashData
{
  ArrivedEphInfo *m_next;
  unsigned __int64 m_latestNetBlobID;
  long double m_timeStamp;
};


struct IntrusiveHashData<int,CAsyncStateHandler *>
{
  int m_hashKey;
  CAsyncStateHandler *m_hashNext;
};


struct IntrusiveHashListData<int,CAsyncStateHandler *> : IntrusiveHashData<int,CAsyncStateHandler *>, DLListData
{
};


struct CAsyncStateHandler : IntrusiveHashListData<int,CAsyncStateHandler *>
{
  CAsyncStateHandlerVtbl *vfptr;
  CAsyncStateMachine *m_pMachine;
};


struct CAsyncStateHandlerVtbl
{
  void *(__thiscall *__vecDelDtor)(CAsyncStateHandler *this, unsigned int);
  void (__thiscall *OnContextBegun)(CAsyncStateHandler *this, AsyncContext);
  void (__thiscall *OnStateBegun)(CAsyncStateHandler *this, AsyncContext);
  void (__thiscall *OnStateEnded)(CAsyncStateHandler *this, AsyncContext, AsyncStateMachineStatus);
  void (__thiscall *OnContextEnded)(CAsyncStateHandler *this, AsyncContext, AsyncStateMachineStatus);
  void (__thiscall *CleanupContextData)(CAsyncStateHandler *this, AsyncContext);
  void (__thiscall *OnStateHandlerInit)(CAsyncStateHandler *this);
  void (__thiscall *OnStateHandlerDone)(CAsyncStateHandler *this);
};


struct IntrusiveHashTable<int,CAsyncStateHandler *,1>
{
  IntrusiveHashTable<int,CAsyncStateHandler *,1>Vtbl *vfptr;
  CAsyncStateHandler *m_aInplaceBuckets[23];
  CAsyncStateHandler **m_buckets;
  CAsyncStateHandler **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashList<int,CAsyncStateHandler *,1>
{
  IntrusiveHashTable<int,CAsyncStateHandler *,1> m_hash;
  DLListBase m_list;
};


struct IntrusiveHashTable<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1>
{
  IntrusiveHashTable<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1>Vtbl *vfptr;
  CAsyncStateMachine_CAsyncStateData *m_aInplaceBuckets[23];
  CAsyncStateMachine_CAsyncStateData **m_buckets;
  CAsyncStateMachine_CAsyncStateData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashList<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1>
{
  IntrusiveHashTable<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1> m_hash;
  DLListBase m_list;
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,1>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,1>Vtbl *vfptr;
  HashTableData<PStringBase<char>,unsigned long> *m_aInplaceBuckets[23];
  HashTableData<PStringBase<char>,unsigned long> **m_buckets;
  HashTableData<PStringBase<char>,unsigned long> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<PStringBase<char>,unsigned long,1>
{
  HashTable<PStringBase<char>,unsigned long,1>Vtbl *vfptr;
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,1> m_intrusiveTable;
};


struct AutoGrowHashTable<PStringBase<char>,unsigned long> : HashTable<PStringBase<char>,unsigned long,1>
{
};


struct CAsyncStateMachine
{
  CAsyncStateMachineVtbl *vfptr;
  IntrusiveHashList<int,CAsyncStateHandler *,1> m_States;
  int m_iLowState;
  IntrusiveHashList<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1> m_ContextHash;
  AutoGrowHashTable<PStringBase<char>,unsigned long> m_DataNames;
  unsigned int m_dwNextContextNumber;
  PreciseTimerInstance *m_pTimer;
};


struct CAsyncStateMachineVtbl
{
  void *(__thiscall *__vecDelDtor)(CAsyncStateMachine *this, unsigned int);
  _BYTE gap4[4];
  void (__thiscall *OnContextBegun)(CAsyncStateMachine *this, AsyncContext);
  void (__thiscall *OnContextEnded)(CAsyncStateMachine *this, AsyncContext, AsyncStateMachineStatus);
  void (__thiscall *CleanupContextData)(CAsyncStateMachine *this, AsyncContext);
  AsyncStateMachineStatus (__thiscall *Advance)(CAsyncStateMachine *this, AsyncContext, int);
  AsyncStateMachineStatus (__thiscall *OnHandlerDoneOK)(CAsyncStateMachine *this, AsyncContext, int);
  void (__thiscall *OnHandlerFailed)(CAsyncStateMachine *this, AsyncContext);
  CAsyncStateMachine_CAsyncStateData *(__thiscall *AllocateStateData)(CAsyncStateMachine *this, AsyncContext);
};


struct IntrusiveHashTable<int,CAsyncStateHandler *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<int,CAsyncStateHandler *,1> *this, unsigned int);
};


struct IntrusiveHashTable<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1> *this, unsigned int);
};


struct IntrusiveHashData<AsyncContext,CAsyncStateMachine_CAsyncStateData *>
{
  AsyncContext m_hashKey;
  CAsyncStateMachine_CAsyncStateData *m_hashNext;
};


struct IntrusiveHashListData<AsyncContext,CAsyncStateMachine_CAsyncStateData *> : IntrusiveHashData<AsyncContext,CAsyncStateMachine_CAsyncStateData *>, DLListData
{
};


struct SmartArray<long,1>
{
  int *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct CAsyncStateMachine_CAsyncStateData : ReferenceCountTemplate_1048576_0, IntrusiveHashListData<AsyncContext,CAsyncStateMachine_CAsyncStateData *>
{
  SmartArray<long,1> Data;
  AsyncStateMachineStatus eStatus;
  bool bAdvancing;
  int iDelayedNextStateNumber;
  CAsyncStateHandler *pCurrentState;
  int iMaxStateNumber;
  long double tContextBegan;
  long double tCurStateBegan;
};


struct HashTable<PStringBase<char>,unsigned long,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<PStringBase<char>,unsigned long,1> *this, unsigned int);
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,1> *this, unsigned int);
};


struct CClientsideLoginStateHandler : CAsyncStateHandler
{
  unsigned int m_idxRecipientID;
  unsigned int m_idxServerAddr;
  unsigned int m_idxNetAuth;
  unsigned int m_idxFailureReason;
};


struct CPluginManagerTemplate<CLinkStatusPlugin> : CPluginManager
{
};


struct ClientNet_CLogonData
{
  AsyncContext hCurrentContext;
  int timeLastLoginRequestSent;
  sockaddr_in ServerAddr;
  NetAuthenticator *pNetAuth;
  int nRequestsSent;
  bool bMyTurn;
  NetError FailureReason;
};


struct ClientNet_CReferralQueueEntry
{
  unsigned int nAuthsSent;
  unsigned __int16 idServer;
  long double localtimeToSendNextWorldAuth;
  sockaddr_in ServerAddr;
  unsigned __int64 qwCookie;
};


struct SmartArray<ClientNet_CReferralQueueEntry,1>
{
  ClientNet_CReferralQueueEntry *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct __declspec(align(4)) ClientNet_CSwitchHistory
{
  CTimestamp<unsigned long,0> LastSwitchStamp;
  bool bBeenSwitchedBefore;
};


struct ClientNet : SharedNet, CClientsideLoginStateHandler, CPluginManagerTemplate<CLinkStatusPlugin>
{
  ClientNet_CLogonData m_LogonData;
  CAsyncStateMachine m_ConnectionFSM;
  SmartArray<ClientNet_CReferralQueueEntry,1> m_ReferralQueue;
  unsigned __int16 logonRecID_;
  unsigned __int16 currServerRecID_;
  unsigned int m_dwCurrentConnectionSequenceNumber;
  ClientNet_CSwitchHistory m_WorldSwitchHistory;
  ClientNet_CSwitchHistory m_LogonSwitchHistory;
  bool logOffSent_;
  bool fCurrentlyInGame_;
  long double _timeClientSpeedHackDetection;
  long double m_LastDidUseTime;
  CLinkStatusSnapshot m_CurrentLinkStatus;
  CLinkStatusAverages m_LinkStatusAverages;
};


struct GlobalEventHandler : NoticeRegistrar
{
};


struct CameraManager : CInputHandler, IInputActionCallback
{
  float t_stiffness;
  float r_stiffness;
  unsigned int pivot_object_id;
  int pivot_part_index;
  AC1Legacy_Vector3 pivot_offset;
  unsigned int target_object_id;
  int target_part_index;
  AC1Legacy_Vector3 target_offset;
  AC1Legacy_Vector3 direction;
  CameraTarget target_status;
  AC1Legacy_Vector3 viewer_offset;
  bool m_bAlignCameraToSlope;
  float m_rCameraStiffness;
  float m_rCameraAdjustmentSpeed;
  unsigned int m_dwPivotOffsetMovement;
  unsigned int m_dwCameraOffsetMovement;
  float m_rMovementSpeed;
  float scale;
  long double last_update_time;
  AC1Legacy_Vector3 old_velocities[5];
  int old_velocity_num;
  bool m_bEnabled;
  CameraSet *m_pCurrentCameraSet;
};


struct __declspec(align(8)) CellManager
{
  LScape *lscape;
  Ambient *ambient_sounds;
  unsigned int last_prefetch_cell_id;
  long double last_prefetch_check;
  bool blocking_for_cells;
  bool all_cells_available;
  unsigned int num_cells_waiting;
  unsigned int total_num_cells_waiting;
  CObjCell *curr_cell;
  Position load_pos;
  int keep_lscape_loaded;
};


struct CPhysics
{
  CObjectMaint *obj_maint;
  SmartBox *smartbox;
  CPhysicsObj *player;
  LongHashIter<CPhysicsObj> *iter;
};


struct LScape
{
  int mid_radius;
  int mid_width;
  CLandBlock **land_blocks;
  CLandBlock **block_draw_list;
  unsigned int loaded_cell_id;
  unsigned int viewer_cell_id;
  int viewer_b_xoff;
  int viewer_b_yoff;
  GameSky *sky;
  CSurface *landscape_detail_surface;
  CSurface *environment_detail_surface;
  CSurface *building_detail_surface;
  CSurface *object_detail_surface;
};


struct DArray<AmbientSound *>
{
  AmbientSound **data;
  unsigned int blocksize;
  unsigned int next_available;
  unsigned int sizeOf;
};


struct Ambient
{
  Position player_pos;
  float total_sound_count;
  unsigned int num_sounds;
  DArray<AmbientSound *> sounds;
  AC1Legacy_PQueueArray<double> sound_queue;
};



struct CameraSet : ReferenceCountTemplate_1048576_0
{
  CameraManager *cm;
  SmartBox *sbox;
  int looking_down;
  int in_map_mode;
  int mouselook_active;
  int camera_movement_active;
  int targeting;
  int rot_left;
  int rot_right;
  int lower;
  int raise;
  int farther;
  int closer;
  float current_stiffness;
  __int16 mouselook_x_extent;
  __int16 mouselook_y_extent;
  AC1Legacy_Vector3 lookdown_saved_offset;
  AC1Legacy_Vector3 lookdown_saved_target_dir;
  long double m_ttLastRotate;
  long double m_ttLastRaiseOrLower;
  long double m_ttLastZoom;
  long double m_LastServerMessage;
  long double m_LastMouseMovement;
};


struct HashBaseIter<unsigned long>
{
  HashBase<unsigned long> *myHash_;
  unsigned int curBucket_;
  HashBaseData<unsigned long> *curPtr_;
  HashBaseData<unsigned long> *lastThisChain_;
  int fEnd_;
};


struct LongHashIter<CPhysicsObj> : HashBaseIter<unsigned long>
{
};


struct AC1Legacy_SmartArray<CelestialPosition>
{
  CelestialPosition *m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct AC1Legacy_SmartArray<CPhysicsObj *>
{
  CPhysicsObj **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct GameSky
{
  AC1Legacy_SmartArray<CelestialPosition> sky_obj_pos;
  AC1Legacy_SmartArray<CPhysicsObj *> sky_obj;
  AC1Legacy_SmartArray<unsigned long> property_array;
  CEnvCell *before_sky_cell;
  CEnvCell *after_sky_cell;
};


struct AmbientSound
{
  AmbientSoundVtbl *vfptr;
  int on_queue;
  float sound_count;
  AmbientSTBDesc *desc;
  unsigned int ambient_sound_id;
  int constant_sound;
};



struct CelestialPosition
{
  IDClass<_tagDataID,32,0> gfx_id;
  IDClass<_tagDataID,32,0> pes_id;
  float heading;
  float rotation;
  AC1Legacy_Vector3 tex_velocity;
  float transparent;
  float luminosity;
  float max_bright;
  unsigned int properties;
};


struct AmbientSoundVtbl
{
  void (__thiscall *ResetCount)(AmbientSound *this);
  float (__thiscall *GetVolume)(AmbientSound *this);
  int (__thiscall *CanHear)(AmbientSound *this);
  int (__thiscall *PlayNow)(AmbientSound *this);
  float (__thiscall *GetPlayInterval)(AmbientSound *this);
  void (__thiscall *AddTo)(AmbientSound *this, float, AC1Legacy_Vector3 *, LandDefs_Direction);
  void (__thiscall *UpdateSound)(AmbientSound *this, float);
  int (__thiscall *GetSoundPos)(AmbientSound *this, Position *);
};


struct AC1Legacy_SmartArray<AmbientSoundDesc *>
{
  AmbientSoundDesc **m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct AmbientSTBDesc
{
  IDClass<_tagDataID,32,0> stb_id;
  int stb_not_found;
  AC1Legacy_SmartArray<AmbientSoundDesc *> ambient_sounds;
  CSoundTable *sound_table;
  unsigned int play_count;
};


struct AmbientSoundDesc
{
  SoundType stype;
  int is_continuous;
  float volume;
  float base_chance;
  float min_rate;
  float max_rate;
};


struct PQueueArray<double,void *>
{
  PQueueArray<double,void *>Vtbl *vfptr;
  PQueueArray<double,void *>_PQueueNode *A;
  int curNumNodes;
  int allocatedNodes;
  int minAllocatedNodes;
};


struct NetInterface
{
};


struct PacketController
{
  PacketControllerVtbl *vfptr;
  __declspec(align(8)) ClientNet *net_;
  RecipientData **recipients_;
  NIList<NetBlob *> *netQueues_[12];
  RecipientData *haveNaks_;
  PQueueArray<double,void *> FlowControlTimers;
  long double lastEmpty_;
  unsigned __int64 m_curNonEphemeralID;
  NetInterface netInterface_;
  PerfMonCounter<unsigned __int64> *m_pSendBlobCallsCounter;
};


struct PacketControllerVtbl
{
  unsigned __int64 (__thiscall *GetNonEphemeralID)(PacketController *this);
};


struct PQueueArray<double,void *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PQueueArray<double,void *> *this, unsigned int);
};


struct __declspec(align(8)) PQueueArray<double,void *>_PQueueNode
{
  long double key;
  void *data;
};


struct AlreadyRunningCheck
{
  void *m_UniqueClientSemaphore;
};


struct __declspec(align(8)) Client : Interface, ArgumentParser, CDDDStatusPlugin, IInputActionCallback, LinkStatusHolder
{
  Turbine_RefCount m_cTurbineRefCount;
  PStringBase<char> m_FullOutputText;
  PStringBase<char> m_preferencesFile;
  int m_fWindowed;
  int m_fUseMemoryManager;
  int m_fReadOnlyDatFiles;
  accountID m_account;
  PStringBase<char> m_pPrimer;
  PStringBase<char> m_LanguageStr;
  PStringBase<char> m_hostName;
  int m_noflowqueue;
  int m_port;
  int m_clientPort;
  int m_latencyDelay;
  int m_latencyPercent;
  int m_Language;
  PStringBase<unsigned short> m_worldName;
  CLCache *m_pDBCache;
  UIFlow *m_ui;
  bool m_connected;
  NetAuthenticator m_netAuth;
  ClientNet *m_net;
  GlobalEventHandler *m_eventHandler;
  QualityRegistrar *m_qualityRegistrar;
  PStringBase<char> m_strPreferenceBindInterface;
  bool m_bPreferenceComputeUniquePort;
  unsigned int m_nPreferenceUserSpecifiedPort;
  IQueuedUIEventDeliverer *m_UIQueueManager;
  NetAuthenticator *pNetAuth_;
  SmartBox *smartbox_;
  NIList<NetBlob *> *m_logonEventQueue;
  PacketController *packControl_;
  NIList<NetBlob *> **netQueues_;
  AlreadyRunningCheck m_running_check;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> **m_buckets;
  HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,UIMainFramework * (__cdecl*)(void),0>
{
  HashTable<unsigned long,UIMainFramework * (__cdecl*)(void),0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,UIMainFramework * (__cdecl*)(void),0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,UIMainFramework * (__cdecl*)(void),0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *m_hashNext;
};


struct HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *>
{
  UIMainFramework *(__cdecl *m_data)();
};


struct PhysicsTimestampPack : PackObj
{
  unsigned __int16 ts1;
  unsigned __int16 ts2;
};


struct SmartArray<BaseProperty,1>
{
  BaseProperty *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,BaseProperty> *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,BaseProperty> *,1> *m_currHashTable;
  HashTableData<unsigned long,BaseProperty> **m_currBucket;
  HashTableData<unsigned long,BaseProperty> *m_currElement;
};


struct HashIterator<unsigned long,BaseProperty,1>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,BaseProperty> *,1> m_iter;
};


struct EnchantedQualityDetails
{
  long double rRawValue;
  long double rValueIncreasingMultiplier;
  long double rValueDecreasingMultiplier;
  long double rValueIncreasingAdditive;
  long double rValueDecreasingAdditive;
};


struct Attribute_QualityType
{
};


struct Attribute_2nd_QualityType
{
};


struct Skill_QualityType
{
};


struct Int_QualityType
{
};


struct Bool_QualityType
{
};


struct Float_QualityType
{
};


struct DataID_QualityType
{
};


struct InstanceID_QualityType
{
};


struct Int64_QualityType
{
};


struct BodyDamageValue_QualityType
{
};


struct BodyDamageVariance_QualityType
{
};


struct BodyArmorValue_QualityType
{
};


struct Position_QualityType
{
};


struct String_QualityType
{
};


struct ArmorCache : PackObj
{
  int _base_armor;
  int _armor_vs_slash;
  int _armor_vs_pierce;
  int _armor_vs_bludgeon;
  int _armor_vs_cold;
  int _armor_vs_fire;
  int _armor_vs_acid;
  int _armor_vs_electric;
  int _armor_vs_nether;
};


struct ArmorProfile : PackObj
{
  float mod_vs_slash;
  float mod_vs_pierce;
  float mod_vs_bludgeon;
  float mod_vs_cold;
  float mod_vs_fire;
  float mod_vs_acid;
  float mod_vs_electric;
  float mod_vs_nether;
};


struct BodyPartSelectionData : PackObj
{
  float HLF;
  float MLF;
  float LLF;
  float HRF;
  float MRF;
  float LRF;
  float HLB;
  float MLB;
  float LLB;
  float HRB;
  float MRB;
  float LRB;
};


struct BodyPart : PackObj
{
  DAMAGE_TYPE _dtype;
  int _dval;
  float _dvar;
  ArmorCache _acache;
  BODY_HEIGHT _bh;
  BodyPartSelectionData *_bpsd;
};


struct AllegianceRankData : PackObj
{
  unsigned int _id;
  unsigned int _rank;
};


struct AllegianceData : PackObj
{
  unsigned int _id;
  AC1Legacy_PStringBase<char> _name;
  unsigned int _gender;
  unsigned int _hg;
  unsigned int _rank;
  unsigned int _level;
  unsigned int _bitfield;
  unsigned int _cp_tithed;
  unsigned int _cp_cached;
  unsigned int _loyalty;
  unsigned int _leadership;
  int _time_online;
  int _allegiance_age;
};


struct PackableLLNode<AllegianceRankData>
{
  AllegianceRankData data;
  PackableLLNode<AllegianceRankData> *next;
  PackableLLNode<AllegianceRankData> *prev;
};


struct PackableList<AllegianceRankData> : PackObj
{
  PackableLLNode<AllegianceRankData> *head;
  PackableLLNode<AllegianceRankData> *tail;
  unsigned int curNum;
};


struct PackableLLIter<unsigned long>
{
  PackableLLIter<unsigned long>Vtbl *vfptr;
  PackableLLNode<unsigned long> *_current;
};


struct PackableLLIter<unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<unsigned long> *this, unsigned int);
};


struct Mat33
{
  float e[9];
};


struct VecMat
{
  float e[3];
};


struct AC1Legacy_Quaternion
{
  float e[4];
};


struct Random
{
};


struct LandDefs
{
};


struct DBTypeDef
{
  IDClass<_tagDataID,32,0> m_base_did;
  IDClass<_tagDataID,32,0> m_top_did;
  SmartArray<PStringBase<char>,1> m_extensions;
  unsigned int m_packVersion;
  DBUpdateType_Type m_updateType;
  bool m_bHasFile;
  bool m_bIsPortalType;
  bool m_bIsCellType;
  bool m_bIsLocalType;
  PStringBase<char> m_strDataDir;
  bool m_bIsClientType;
  bool m_bIsServerType;
  bool m_bIsEngineType;
  bool m_bIsDIDPackedToDats;
  bool m_bIsWBEditable;
  bool m_bIsCategorized;
  bool m_bForceExpire;
  FreelistDef m_freelistDef;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,float> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,float> *,0> *m_currHashTable;
  HashTableData<unsigned long,float> **m_currBucket;
  HashTableData<unsigned long,float> *m_currElement;
};


struct HashIterator<unsigned long,float,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,float> *,0> m_iter;
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *,1> *m_currHashTable;
  HashTableData<IDClass<_tagDataID,32,0>,DBObj *> **m_currBucket;
  HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *m_currElement;
};


struct HashIterator<IDClass<_tagDataID,32,0>,DBObj *,1>
{
  IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,DBObj *> *,1> m_iter;
};


struct PackableNIListElt<LBRange> : PackObj
{
  LBRange *next_;
  LBRange *prev_;
  PackableNIList<LBRange> *list_;
};


struct LBRange : PackableNIListElt<LBRange>
{
  unsigned int lowID;
  unsigned int highID;
  unsigned int srvID;
  int deletePending_;
  int isFrozen_;
  int toGetNoLandblocks_;
  int numBlocksLoaded_;
  int numBlocksLoadedWithUniques_;
  int numUniquesInLoadedBlocks_;
  int loadInUnpopulatedBlocks_;
};


struct PackableNIList<LBRange> : PackObj
{
  __unaligned __declspec(align(1)) LBRange head_;
  __unaligned __declspec(align(1)) LBRange tail_;
  int numElts_;
};


struct LBRanges : PackableNIList<LBRange>
{
};


struct PackableNIListElt<LBMigrationReqBookkeep> : PackObj
{
  LBMigrationReqBookkeep *next_;
  LBMigrationReqBookkeep *prev_;
  struct PackableNIList<LBMigrationReqBookkeep> *list_;
};


struct LBMigrationReqBookkeep : PackableNIListElt<LBMigrationReqBookkeep>
{
  LBRange region;
  unsigned int destSrv;
  unsigned int requestingSrv;
  int seq;
  int flags_;
};


struct LBUnit
{
  unsigned int lbID;
  unsigned int srvID;
  unsigned __int16 numBookies;
  unsigned __int16 computedLoad_;
  unsigned int numUniques_;
  struct SLandBlock *lb;
  struct BlockStatusEntry *m_pBSE;
  unsigned __int16 flags_;
  int fPendingCreate_;
  int fIsLoaded_;
  long double m_timeLastCheckpointed;
};


struct LBEventQueue : PackObj
{
  unsigned int lbID;
  struct OEList *evQ;
};


struct LBMigrationDataBookkeep : PackObj
{
  LBRange region;
  int numBlksWithObjects;
  unsigned int *lbIDs;
  long double *m_rgCheckpointTimes;
  int numEvQueues;
  LBEventQueue *lbEvqs;
};


struct BlockListEntry
{
  unsigned int blockID_;
};


struct LFQueue<unsigned long>
{
  unsigned int *buckets_;
  int numBuckets_;
  volatile int m_dwProducerBucketIndex;
  volatile int m_dwConsumerBucketIndex;
  List<unsigned long> m_backupList;
  int m_dwBackupListLen;
  SharedCriticalSection m_backupListCritSec;
};


struct NIDListNode<SLandBlock *>
{
  struct SLandBlock *data_;
  NIDListNode<SLandBlock *> *next_;
  NIDListNode<SLandBlock *> *prev_;
};


struct NIDList<SLandBlock *>
{
  NIDListNode<SLandBlock *> head_;
  NIDListNode<SLandBlock *> tail_;
};


struct NIList<BlockListEntry>
{
  struct NIListElement<BlockListEntry> *head_;
  struct NIListElement<BlockListEntry> *tail_;
};


struct LongNIHash<BlockListEntry>
{
  LongNIHashData **buckets;
  int table_size;
};


struct BlockListLoader
{
  BlockListLoaderVtbl *vfptr;
  NIList<BlockListEntry> blockList_;
  LongNIHash<BlockListEntry> blockHash_;
};


struct AlwaysLoaded : BlockListLoader
{
  CQuickTimer m_timerDoUseTime;
  int fEnableDontTouch_;
  long double lastDontTouchMode_;
  int fInDontTouchMode_;
  long double timeStartedNotTouchingCurrentBlock_;
};


struct LongHash<BlockCreationInfo> : HashBase<unsigned long>
{
};


struct LongHash<BlockUpdate> : HashBase<unsigned long>
{
};


struct IntrusiveHashTable<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *,0>
{
  IntrusiveHashTable<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *,0>Vtbl *vfptr;
  AC1Legacy_HashTableData<unsigned long,double> *m_aInplaceBuckets[23];
  AC1Legacy_HashTableData<unsigned long,double> **m_buckets;
  AC1Legacy_HashTableData<unsigned long,double> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct AC1Legacy_HashTable<unsigned long,double>
{
  AC1Legacy_HashTable<unsigned long,double>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *,0> m_intrusiveTable;
};


struct List<ODBCRequest *>
{
  List<ODBCRequest *>Vtbl *vfptr;
  ListNode<ODBCRequest *> *_head;
  ListNode<ODBCRequest *> *_tail;
  unsigned int _num_elements;
};


struct LFQueue<ODBCRequest *>
{
  struct ODBCRequest **buckets_;
  int numBuckets_;
  volatile int m_dwProducerBucketIndex;
  volatile int m_dwConsumerBucketIndex;
  List<ODBCRequest *> m_backupList;
  int m_dwBackupListLen;
  SharedCriticalSection m_backupListCritSec;
};


struct SCellDB
{
  SCellDBVtbl *vfptr;
  __declspec(align(8)) int numMigrationsInProgress_;
  LFQueue<unsigned long> landblockCreationRequests_;
  int numAllocatedLandblocks_;
  struct SLandBlockCreator *landBlockCreator_;
  CQuickTimer m_timerPruneInactiveLandblocks;
  int numInactiveLandblocks_;
  NIDList<SLandBlock *> inactiveList_;
  struct SLandBlock *migratePendingListHead_;
  AlwaysLoaded m_blocksAlwaysLoaded;
  BlockListLoader m_blocksForbidLogin;
  BlockListLoader m_blocksForbidCorpseDrop;
  int m_cur_block_x;
  int m_cur_block_y;
  long double m_cur_block_ts;
  int fInCreateLandBlockInternal_;
  unsigned int blockIDCurrentlyFetching_;
  struct CheckMgrBlockInfo *checkMgr_;
  int fShuttingDown_;
  struct ODBCThread *requestThread_;
  LongHash<BlockCreationInfo> blockLookupHash_;
  int numBlockLookups_;
  LongHash<BlockUpdate> blockUpdateHash_;
  int numBlockUpdates_;
  LongHash<BlockUpdate> blockInsertHash_;
  int numBlockInserts_;
  AC1Legacy_HashTable<unsigned long,double> m_blockingLoadFailures;
  long double lastCheckpointedLoadedBlocks_;
  LFQueue<ODBCRequest *> blockLookupResponseQ_;
  LFQueue<ODBCRequest *> blockUpdateResponseQ_;
  LFQueue<ODBCRequest *> blockInsertResponseQ_;
};


struct SCellDBVtbl
{
  void *(__thiscall *__vecDelDtor)(SCellDB *this, unsigned int);
  void (__thiscall *ServerSettingTime)(SCellDB *this, long double);
  int (__thiscall *StartupCheckpointing)(SCellDB *this, char *, char *, unsigned int);
};


struct BlockListLoaderVtbl
{
  void *(__thiscall *__vecDelDtor)(BlockListLoader *this, unsigned int);
  int (__thiscall *Reload)(BlockListLoader *this, const char *);
  int (__thiscall *fEntryInBlockList)(BlockListLoader *this, unsigned int);
};


struct AC1Legacy_HashTable<unsigned long,double>Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_HashTable<unsigned long,double> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *>
{
  unsigned int m_hashKey;
  AC1Legacy_HashTableData<unsigned long,double> *m_hashNext;
};


struct AC1Legacy_HashTableData<unsigned long,double> : IntrusiveHashData<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *>
{
  long double m_data;
};


struct List<ODBCRequest *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<ODBCRequest *> *this, unsigned int);
};


struct ListNode<ODBCRequest *>
{
  struct ODBCRequest *data;
  ListNode<ODBCRequest *> *next;
  ListNode<ODBCRequest *> *prev;
};


struct IntrusiveHashIterator<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *,0>
{
  IntrusiveHashTable<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *,0> *m_currHashTable;
  AC1Legacy_HashTableData<unsigned long,double> **m_currBucket;
  AC1Legacy_HashTableData<unsigned long,double> *m_currElement;
};


struct AC1Legacy_HashIterator<unsigned long,double>
{
  IntrusiveHashIterator<unsigned long,AC1Legacy_HashTableData<unsigned long,double> *,0> m_iter;
};


struct PHashTable<unsigned long,unsigned long> : HashTable<unsigned long,unsigned long,0>, StreamPackObj
{
};


struct AllegianceNode : PackObj
{
  AllegianceNode *_patron;
  AllegianceNode *_peer;
  AllegianceNode *_vassal;
  AllegianceData _data;
};


struct AC1Legacy_SmartArray<AC1Legacy_PStringBase<char> >
{
  AC1Legacy_PStringBase<char> *m_data;
  unsigned int m_size;
  unsigned int m_num;
};


struct PSmartArray<AC1Legacy_PStringBase<char> > : StreamPackObj, AC1Legacy_SmartArray<AC1Legacy_PStringBase<char> >
{
};


struct AllegianceHierarchy : PackObj
{
  AllegianceVersion m_oldVersion;
  AllegianceNode *m_pMonarch;
  unsigned int m_total;
  int m_monarchBroadcastTime;
  int m_spokesBroadcastTime;
  unsigned int m_monarchBroadcastsToday;
  unsigned int m_spokesBroadcastsToday;
  AC1Legacy_PStringBase<char> m_motd;
  AC1Legacy_PStringBase<char> m_motdSetBy;
  AC1Legacy_PStringBase<char> m_AllegianceName;
  int m_NameLastSetTime;
  unsigned int m_chatRoomID;
  PHashTable<unsigned long,unsigned long> m_AllegianceOfficers;
  PSmartArray<AC1Legacy_PStringBase<char> > m_OfficerTitles;
  Position m_BindPoint;
  int m_isLocked;
  unsigned int m_ApprovedVassal;
};


struct AllegianceProfile : PackObj
{
  AllegianceHierarchy _allegiance;
  unsigned int _total_members;
  unsigned int _total_vassals;
};


struct AllegianceAppraisalProfile : PackObj
{
  AC1Legacy_PStringBase<char> m_AllegianceName;
  AC1Legacy_PStringBase<char> _mtitle;
  AC1Legacy_PStringBase<char> _ptitle;
  int _followers;
};


struct CharGenData : DBObj
{
};


struct CharGenResult : PackObj
{
};


struct CmdStruct
{
  char args[256];
  unsigned int size;
  unsigned int curr;
  unsigned int command;
};


struct PackableHashIterator<unsigned long,long>
{
  PackableHashIterator<unsigned long,long>Vtbl *vfptr;
  PackableHashData<unsigned long,long> *_current;
  PackableHashData<unsigned long,long> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,long> *this, unsigned int);
};


struct PackableHashData<unsigned long,long>
{
  unsigned int _key;
  int _data;
  PackableHashData<unsigned long,long> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,long> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,long> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};



struct PackableHashData<unsigned long,double>
{
  unsigned int _key;
  long double _data;
  PackableHashData<unsigned long,double> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,double> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,double> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashData<unsigned long,AC1Legacy_PStringBase<char> >
{
  unsigned int _key;
  AC1Legacy_PStringBase<char> _data;
  PackableHashData<unsigned long,AC1Legacy_PStringBase<char> > *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,AC1Legacy_PStringBase<char> > : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,AC1Legacy_PStringBase<char> > **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,AvailableProperty> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,AvailableProperty> *,0> *m_currHashTable;
  HashTableData<unsigned long,AvailableProperty> **m_currBucket;
  HashTableData<unsigned long,AvailableProperty> *m_currElement;
};


struct HashIterator<unsigned long,AvailableProperty,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,AvailableProperty> *,0> m_iter;
};


struct PerlinNoise
{
};


struct PackUsingSerialize<PackObj> : PackObj
{
  bool m_fArchiveValid;
  AutoStoreVersionArchive m_ar;
};


struct PackObjPropertyCollection : PackUsingSerialize<PackObj>, PropertyCollection
{
};


struct PackableHashData<IDClass<_tagDataID,32,0>,long>
{
  IDClass<_tagDataID,32,0> _key;
  int _data;
  PackableHashData<IDClass<_tagDataID,32,0>,long> *_next;
  int _hashVal;
};


struct PackableHashTable<IDClass<_tagDataID,32,0>,long> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<IDClass<_tagDataID,32,0>,long> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashIterator<IDClass<_tagDataID,32,0>,long>
{
  PackableHashIterator<IDClass<_tagDataID,32,0>,long>Vtbl *vfptr;
  PackableHashData<IDClass<_tagDataID,32,0>,long> *_current;
  PackableHashData<IDClass<_tagDataID,32,0>,long> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<IDClass<_tagDataID,32,0>,long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<IDClass<_tagDataID,32,0>,long> *this, unsigned int);
};


struct ShortCutData : PackObj
{
  int index_;
  unsigned int objectID_;
  unsigned int spellID_;
};


struct ShortCutManager : PackObj
{
  ShortCutData *shortCuts_[18];
};


struct GenericQualitiesData : PackObj
{
  PackableHashTable<unsigned long,long> *m_pIntStatsTable;
  PackableHashTable<unsigned long,int> *m_pBoolStatsTable;
  PackableHashTable<unsigned long,double> *m_pFloatStatsTable;
  PackableHashTable<unsigned long,AC1Legacy_PStringBase<char> > *m_pStrStatsTable;
};


struct PlayerModule : PackObj
{
  ShortCutManager *shortcuts_;
  PackableList<unsigned long> favorite_spells_[8];
  PackableHashTable<IDClass<_tagDataID,32,0>,long> *desired_comps_;
  unsigned int options_;
  unsigned int options2_;
  unsigned int spell_filters_;
  GenericQualitiesData *m_pPlayerOptionsData;
  PackObjPropertyCollection m_colGameplayOptions;
  AC1Legacy_PStringBase<char> m_TimeStampFormat;
};


struct PackableHashData<unsigned long,__int64>
{
  unsigned int _key;
  __int64 _data;
  PackableHashData<unsigned long,__int64> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,__int64> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,__int64> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashData<unsigned long,IDClass<_tagDataID,32,0> >
{
  unsigned int _key;
  IDClass<_tagDataID,32,0> _data;
  PackableHashData<unsigned long,IDClass<_tagDataID,32,0> > *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,IDClass<_tagDataID,32,0> > : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,IDClass<_tagDataID,32,0> > **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PSmartArray<unsigned long> : StreamPackObj, AC1Legacy_SmartArray<unsigned long>
{
};


struct CreatureAppraisalProfile : PackObj
{
  unsigned int strength;
  unsigned int endurance;
  unsigned int quickness;
  unsigned int coordination;
  unsigned int focus;
  unsigned int self;
  unsigned int health;
  unsigned int stamina;
  unsigned int mana;
  unsigned int max_health;
  unsigned int max_stamina;
  unsigned int max_mana;
  unsigned int enchantment_bitfield;
};


struct HookAppraisalProfile : PackObj
{
  unsigned int mBitfield;
  unsigned int mValidLocations;
  AMMO_TYPE mAmmoType;
};


struct __declspec(align(8)) WeaponProfile : PackObj
{
  DAMAGE_TYPE damage_type;
  unsigned int weapon_skill;
  int weapon_time;
  int weapon_damage;
  long double damage_variance;
  long double damage_mod;
  long double weapon_length;
  long double max_velocity;
  long double weapon_offense;
  int max_velocity_estimated;
};


struct AppraisalProfile : PackObj
{
  int success_flag;
  CreatureAppraisalProfile *creature_profile;
  HookAppraisalProfile *hook_profile;
  WeaponProfile *weapon_profile;
  ArmorProfile *armor_profile;
  PackableHashTable<unsigned long,long> *_intStatsTable;
  PackableHashTable<unsigned long,__int64> *_int64StatsTable;
  PackableHashTable<unsigned long,int> *_boolStatsTable;
  PackableHashTable<unsigned long,double> *_floatStatsTable;
  PackableHashTable<unsigned long,AC1Legacy_PStringBase<char> > *_strStatsTable;
  PackableHashTable<unsigned long,IDClass<_tagDataID,32,0> > *_didStatsTable;
  PSmartArray<unsigned long> *_spellBook;
  unsigned int armor_ench_bitfield;
  unsigned int weapon_ench_bitfield;
  unsigned int resist_ench_bitfield;
  int base_armor_head;
  int base_armor_chest;
  int base_armor_groin;
  int base_armor_bicep;
  int base_armor_wrist;
  int base_armor_hand;
  int base_armor_thigh;
  int base_armor_shin;
  int base_armor_foot;
};


struct PackableHashIterator<unsigned long,Fellow>
{
  PackableHashIterator<unsigned long,Fellow>Vtbl *vfptr;
  PackableHashData<unsigned long,Fellow> *_current;
  PackableHashData<unsigned long,Fellow> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,Fellow>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,Fellow> *this, unsigned int);
};


struct Fellow : PackObj
{
  AC1Legacy_PStringBase<char> _name;
  unsigned int _level;
  unsigned int _cp_cache;
  unsigned int _lum_cache;
  int _share_loot;
  unsigned int _max_health;
  unsigned int _max_stamina;
  unsigned int _max_mana;
  unsigned int _current_health;
  unsigned int _current_stamina;
  unsigned int _current_mana;
};


struct PackableHashData<unsigned long,Fellow>
{
  unsigned int _key;
  Fellow _data;
  PackableHashData<unsigned long,Fellow> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,Fellow> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,Fellow> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct QuestProfile : PackObj
{
  long double _last_update;
  int _real_time;
  unsigned int _num_completions;
};


struct QuestDef : PackObj
{
  AC1Legacy_PStringBase<char> _fullname;
  int _mindelta;
  int _maxsolves;
};


struct AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<unsigned short> > : AC1Legacy_PStringBase<unsigned short>
{
};


struct AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> > : AC1Legacy_PStringBase<char>
{
};


struct PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestProfile>
{
  AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> > _key;
  QuestProfile _data;
  PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestProfile> *_next;
  int _hashVal;
};


struct PackableHashTable<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestProfile> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestProfile> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct QuestTable : PackObj
{
  PackableHashTable<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestProfile> _quest_table;
};


struct Fellowship : PackObj
{
  PackableHashTable<unsigned long,Fellow> _fellowship_table;
  AC1Legacy_PStringBase<char> _name;
  unsigned int _leader;
  int _share_xp;
  int _even_xp_split;
  int _open_fellow;
  int _locked;
  PackableHashTable<unsigned long,long> _fellows_departed;
};


union $C5EC65FAD35F61F41D84ED9E3D001807
{
  unsigned int m_idPieceToMove;
  int m_xGrid;
  int m_xFrom;
};


union $30EFC6471DBF0CA0DB303A60997DD882
{
  int m_yGrid;
  int m_yFrom;
};


struct GameMoveData : PackObj
{
  MoveType m_type;
  unsigned int m_idPlayer;
  $C5EC65FAD35F61F41D84ED9E3D001807 ___u3;
  $30EFC6471DBF0CA0DB303A60997DD882 ___u4;
  int m_xTo;
  int m_yTo;
};


struct Cylsphere
{
  Vector3 low_pt;
  float height;
  float radius;
};


struct Sphere
{
  Vector3 center;
  float radius;
};


struct SmartArray<Vector3,1>
{
  Vector3 *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct AC1Modern_Plane
{
  Vector3 N;
  float d;
};


struct SimplePolygon
{
  SimplePolygonVtbl *vfptr;
  SmartArray<Vector3,1> m_vertices;
};


struct SimplePolygonVtbl
{
  void (__thiscall *Serialize)(SimplePolygon *this, Archive *);
  bool (__thiscall *FromFileNode)(SimplePolygon *this, PFileNode *);
  bool (__thiscall *ToFileNode)(SimplePolygon *this, PFileNode *);
  SimplePolygonType (__thiscall *GetType)(SimplePolygon *this);
  bool (__thiscall *IsValid)(SimplePolygon *this);
  bool (__thiscall *Transform)(SimplePolygon *this, SimplePolygon *, Matrix4 *);
};


struct PackableHashIterator<unsigned long,unsigned long>
{
  PackableHashIterator<unsigned long,unsigned long>Vtbl *vfptr;
  PackableHashData<unsigned long,unsigned long> *_current;
  PackableHashData<unsigned long,unsigned long> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,unsigned long> *this, unsigned int);
};


struct PackableHashIterator<unsigned long,PackableList<unsigned long> >
{
  PackableHashIterator<unsigned long,PackableList<unsigned long> >Vtbl *vfptr;
  PackableHashData<unsigned long,PackableList<unsigned long> > *_current;
  PackableHashData<unsigned long,PackableList<unsigned long> > **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,PackableList<unsigned long> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,PackableList<unsigned long> > *this, unsigned int);
};


struct PackableLLIter<SalvageResult>
{
  PackableLLIter<SalvageResult>Vtbl *vfptr;
  PackableLLNode<SalvageResult> *_current;
};


struct PackableLLIter<SalvageResult>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<SalvageResult> *this, unsigned int);
};


struct __declspec(align(8)) SalvageResult : PackObj
{
  unsigned int m_material;
  long double m_workmanship;
  int m_units;
};


struct PackableLLNode<SalvageResult>
{
  SalvageResult data;
  PackableLLNode<SalvageResult> *next;
  PackableLLNode<SalvageResult> *prev;
};


struct PackableList<SalvageResult> : PackObj
{
  PackableLLNode<SalvageResult> *head;
  PackableLLNode<SalvageResult> *tail;
  unsigned int curNum;
};


struct UIElementMessageInfo
{
  unsigned int idElement;
  UIElement *pElement;
  unsigned int idMessage;
  unsigned int dwParam1;
  unsigned int dwParam2;
  tagPOINT ptWindow;
  tagPOINT ptElement;
  CTimestamp<unsigned long,0> tsSerialNumber;
};


struct __declspec(align(4)) DragDropInfo : ReferenceCountTemplate_1048576_0
{
  UIElement *element;
  UIElement *owner;
  UIElement *catcher;
  bool success;
};


struct _STL__Numeric_limits_base<float>
{
};
