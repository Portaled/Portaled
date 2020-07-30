

struct _STL__Floating_limits<float,24,6,-125,128,-37,38,1,1> : _STL__Numeric_limits_base<float>
{
};


struct _STL_numeric_limits<float> : _STL__Floating_limits<float,24,6,-125,128,-37,38,1,1>
{
};


union _STL__F_rep
{
  unsigned __int16 rep[2];
  float val;
};


struct _STL__Numeric_limits_base<double>
{
};


struct _STL__Floating_limits<double,53,15,-1021,1024,-307,308,1,1> : _STL__Numeric_limits_base<double>
{
};


struct _STL_numeric_limits<double> : _STL__Floating_limits<double,53,15,-1021,1024,-307,308,1,1>
{
};


union _STL__D_rep
{
  unsigned __int16 rep[4];
  long double val;
};


struct _STL__Numeric_limits_base<long double>
{
};


struct _STL__Floating_limits<long double,53,15,-1021,1024,-307,308,0,1> : _STL__Numeric_limits_base<long double>
{
};


struct _STL_numeric_limits<long double> : _STL__Floating_limits<long double,53,15,-1021,1024,-307,308,0,1>
{
};


union _STL__L_rep
{
  unsigned __int16 rep[8];
  long double val;
};


struct IntrusiveHashIterator<UIElement *,HashSetData<UIElement *> *,1>
{
  IntrusiveHashTable<UIElement *,HashSetData<UIElement *> *,1> *m_currHashTable;
  HashSetData<UIElement *> **m_currBucket;
  HashSetData<UIElement *> *m_currElement;
};


struct HashSetIterator<UIElement *>
{
  IntrusiveHashIterator<UIElement *,HashSetData<UIElement *> *,1> m_iter;
};


struct Range
{
  int low;
  int high;
};


struct OldList
{
  OldListVtbl *vfptr;
  void *current;
  int numItems;
  void **pointBuff;
  int pointBuffSize;
  int curNum;
  int multiInsertStartNum;
};


struct OldListVtbl
{
  void *(__thiscall *__vecDelDtor)(OldList *this, unsigned int);
};


struct __declspec(align(4)) UISurface : ReferenceCountTemplate<1048576,1>
{
  RenderTexture *m_pLocalTexture;
  RenderSurface *m_pLocalSurface;
  RenderTexture *m_pRemoteTexture;
  RenderVertexBuffer *m_pVertexBuffer;
  bool m_bHasAlpha;
  unsigned int m_nPhysicalWidth;
  unsigned int m_nPhysicalHeight;
  bool m_IsInitialized;
};


struct IntrusiveHashListIterator<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1>
{
  HashList<UIRegion *,UIRegion *,1>_HashListData *m_pData;
  IntrusiveHashList<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<UIRegion *,UIRegion *,1> >
{
  IntrusiveHashListIterator<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashSetData<unsigned long> *,1>
{
  IntrusiveHashTable<unsigned long,HashSetData<unsigned long> *,1> *m_currHashTable;
  HashSetData<unsigned long> **m_currBucket;
  HashSetData<unsigned long> *m_currElement;
};


struct HashSetIterator<unsigned long>
{
  IntrusiveHashIterator<unsigned long,HashSetData<unsigned long> *,1> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,StateDesc> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,StateDesc> *,0> *m_currHashTable;
  HashTableData<unsigned long,StateDesc> **m_currBucket;
  HashTableData<unsigned long,StateDesc> *m_currElement;
};


struct HashIterator<unsigned long,StateDesc,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,StateDesc> *,0> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,ElementDesc> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ElementDesc> *,0> *m_currHashTable;
  HashTableData<unsigned long,ElementDesc> **m_currBucket;
  HashTableData<unsigned long,ElementDesc> *m_currElement;
};


struct HashIterator<unsigned long,ElementDesc,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,ElementDesc> *,0> m_iter;
};


struct HashSorterNode<unsigned long,ElementDesc>
{
  const unsigned int *m_key;
  ElementDesc *m_data;
};


struct SmartArray<HashSorterNode<unsigned long,ElementDesc>,1>
{
  HashSorterNode<unsigned long,ElementDesc> *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct HashSorter<unsigned long,ElementDesc>
{
  SmartArray<HashSorterNode<unsigned long,ElementDesc>,1> m_list;
};


struct ContentProfile : PackObj
{
  unsigned int m_iid;
  unsigned int m_uContainerProperties;
};


struct PackableLLIter<ContentProfile>
{
  PackableLLIter<ContentProfile>Vtbl *vfptr;
  PackableLLNode<ContentProfile> *_current;
};


struct PackableLLIter<ContentProfile>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<ContentProfile> *this, unsigned int);
};


struct PackableLLNode<ContentProfile>
{
  ContentProfile data;
  PackableLLNode<ContentProfile> *next;
  PackableLLNode<ContentProfile> *prev;
};


struct PackableList<ContentProfile> : PackObj
{
  PackableLLNode<ContentProfile> *head;
  PackableLLNode<ContentProfile> *tail;
  unsigned int curNum;
};


struct Trade : PackObj
{
  PackableList<ContentProfile> _self_list;
  PackableList<ContentProfile> _partner_list;
  unsigned int _partner;
  long double _stamp;
  unsigned int _status;
  int _initiator;
  int _accepted;
  int _p_accepted;
};


struct SpellCategoryDB
{
};


struct RestrictionDB : PackObj
{
  unsigned int _bitmask;
  unsigned int _monarch_iid;
  PHashTable<unsigned long,unsigned long> _table;
};


struct __declspec(align(8)) PublicWeenieDesc : WeenieDesc
{
  AC1Legacy_PStringBase<char> _name;
  AC1Legacy_PStringBase<char> _plural_name;
  IDClass<_tagDataID,32,0> _wcid;
  IDClass<_tagDataID,32,0> _iconID;
  IDClass<_tagDataID,32,0> _iconOverlayID;
  IDClass<_tagDataID,32,0> _iconUnderlayID;
  unsigned int _containerID;
  unsigned int _wielderID;
  unsigned int _priority;
  unsigned int _valid_locations;
  unsigned int _location;
  int _itemsCapacity;
  int _containersCapacity;
  ITEM_TYPE _type;
  unsigned int _value;
  ITEM_USEABLE _useability;
  float _useRadius;
  ITEM_TYPE _targetType;
  unsigned int _effects;
  AMMO_TYPE _ammoType;
  COMBAT_USE _combatUse;
  unsigned int _structure;
  unsigned int _maxStructure;
  unsigned int _stackSize;
  unsigned int _maxStackSize;
  unsigned int _bitfield;
  int _blipColor;
  RadarEnum _radar_enum;
  int _burden;
  unsigned int _spellID;
  unsigned int _house_owner_iid;
  RestrictionDB *_db;
  PScriptType _pscript;
  unsigned int _hook_type;
  ITEM_TYPE _hook_item_types;
  unsigned int _monarch;
  int _material_type;
  float _workmanship;
  int _cooldown_id;
  long double _cooldown_duration;
  unsigned int _pet_owner;
};


struct ItemProfile : PackObj
{
  int amount;
  unsigned int iid;
  PublicWeenieDesc *pwd;
};


struct PackableLLNode<ItemProfile>
{
  ItemProfile data;
  PackableLLNode<ItemProfile> *next;
  PackableLLNode<ItemProfile> *prev;
};


struct PackableList<ItemProfile> : PackObj
{
  PackableLLNode<ItemProfile> *head;
  PackableLLNode<ItemProfile> *tail;
  unsigned int curNum;
};


struct gmNoticeHandler : NoticeHandler
{
};


struct CBaseQualities
{
  CBaseQualitiesVtbl *vfptr;
  unsigned int _weenie_type;
  PackableHashTable<unsigned long,long> *_intStatsTable;
  PackableHashTable<unsigned long,__int64> *_int64StatsTable;
  PackableHashTable<unsigned long,int> *_boolStatsTable;
  PackableHashTable<unsigned long,double> *_floatStatsTable;
  PackableHashTable<unsigned long,AC1Legacy_PStringBase<char> > *_strStatsTable;
  PackableHashTable<unsigned long,IDClass<_tagDataID,32,0> > *_didStatsTable;
  PackableHashTable<unsigned long,unsigned long> *_iidStatsTable;
  PackableHashTable<unsigned long,Position> *_posStatsTable;
};


struct CBaseQualitiesVtbl
{
  void *(__thiscall *__vecDelDtor)(CBaseQualities *this, unsigned int);
  int (__thiscall *EnchantFloat)(CBaseQualities *this, unsigned int, long double *) __declspec(align(8));
  int (__thiscall *GetFloatEnchantmentDetails)(CBaseQualities *this, unsigned int, EnchantedQualityDetails *);
  int (__thiscall *InqRunRate)(CBaseQualities *this, float *);
  int (__thiscall *InqMaxRunRate)(CBaseQualities *this, float *);
  int (__thiscall *InqJumpVelocity)(CBaseQualities *this, float, float *);
  int (__thiscall *CanJump)(CBaseQualities *this, float);
  int (__thiscall *JumpStaminaCost)(CBaseQualities *this, float, int *);
  unsigned int (__thiscall *Pack)(CBaseQualities *this, void **, unsigned int);
  int (__thiscall *UnPack)(CBaseQualities *this, void **, unsigned int);
  int (__thiscall *InqWeenieTypeString)(CBaseQualities *this, char *, const unsigned int);
};


struct PackableHashTable<unsigned long,Position> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,Position> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashData<unsigned long,Position>
{
  unsigned int _key;
  Position _data;
  PackableHashData<unsigned long,Position> *_next;
  int _hashVal;
};


struct Attribute : PackObj
{
  unsigned int _level_from_cp;
  unsigned int _init_level;
  unsigned int _cp_spent;
};


struct SecondaryAttribute : Attribute
{
  unsigned int _current_level;
};


struct AttributeCache : PackObj
{
  Attribute *_strength;
  Attribute *_endurance;
  Attribute *_quickness;
  Attribute *_coordination;
  Attribute *_focus;
  Attribute *_self;
  SecondaryAttribute *_health;
  SecondaryAttribute *_stamina;
  SecondaryAttribute *_mana;
};


struct Skill : PackObj
{
  SKILL_ADVANCEMENT_CLASS _sac;
  unsigned int _pp;
  unsigned int _init_level;
  unsigned int _level_from_pp;
  int _resistance_of_last_check;
  long double _last_used_time;
};


struct PackableHashData<unsigned long,Skill>
{
  unsigned int _key;
  Skill _data;
  PackableHashData<unsigned long,Skill> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,Skill> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,Skill> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashData<long,BodyPart>
{
  int _key;
  BodyPart _data;
  PackableHashData<long,BodyPart> *_next;
  int _hashVal;
};


struct PackableHashTable<long,BodyPart> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<long,BodyPart> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct Body : PackObj
{
  PackableHashTable<long,BodyPart> _body_part_table;
};


struct SpellBookPage : PackObj
{
  float _casting_likelihood;
};


struct PackableHashData<unsigned long,SpellBookPage>
{
  unsigned int _key;
  SpellBookPage _data;
  PackableHashData<unsigned long,SpellBookPage> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,SpellBookPage> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,SpellBookPage> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct CSpellBook : PackObj
{
  PackableHashTable<unsigned long,SpellBookPage> _spellbook;
};


struct StatMod : PackObj
{
  unsigned int type;
  unsigned int key;
  float val;
};


struct Enchantment : PackObj
{
  unsigned int _id;
  unsigned int m_SpellSetID;
  unsigned int _spell_category;
  int _power_level;
  long double _start_time;
  long double _duration;
  unsigned int _caster;
  float _degrade_modifier;
  float _degrade_limit;
  long double _last_time_degraded;
  StatMod _smod;
};


struct PackableLLNode<Enchantment>
{
  Enchantment data;
  PackableLLNode<Enchantment> *next;
  PackableLLNode<Enchantment> *prev;
};


struct PackableList<Enchantment> : PackObj
{
  PackableLLNode<Enchantment> *head;
  PackableLLNode<Enchantment> *tail;
  unsigned int curNum;
};


struct CEnchantmentRegistry : PackObj
{
  PackableList<Enchantment> *_mult_list;
  PackableList<Enchantment> *_add_list;
  PackableList<Enchantment> *_cooldown_list;
  Enchantment *_vitae;
  unsigned int m_cHelpfulEnchantments;
  unsigned int m_cHarmfulEnchantments;
};


struct EventFilter : PackObj
{
  unsigned int num_events;
  unsigned int *event_filter;
};


union $8CE6913025E23AEA9D70623073A7213E
{
  float shade;
  float probability;
};


union $D964D710509AC1F6A386CD137FA59473
{
  DestinationType destination;
  RegenerationType regen_algorithm;
};


union $84ACB31EA67D08504ED00D0F279E10D9
{
  int stack_size;
  int max_number;
  int amount;
};


struct CreationProfile : PackObj
{
  IDClass<_tagDataID,32,0> wcid;
  int try_to_bond;
  unsigned int palette;
  $8CE6913025E23AEA9D70623073A7213E ___u4;
  $D964D710509AC1F6A386CD137FA59473 ___u5;
  $84ACB31EA67D08504ED00D0F279E10D9 ___u6;
};


struct Emote : PackObj
{
  unsigned int type;
  float delay;
  float extent;
  unsigned int amount;
  unsigned __int64 amount64;
  unsigned __int64 heroxp64;
  unsigned __int64 min64;
  unsigned __int64 max64;
  unsigned int min;
  unsigned int max;
  long double fmin;
  long double fmax;
  unsigned int stat;
  unsigned int motion;
  PScriptType pscript;
  SoundType sound;
  CreationProfile cprof;
  Frame frame;
  unsigned int spellid;
  AC1Legacy_PStringBase<char> teststring;
  AC1Legacy_PStringBase<char> msg;
  long double percent;
  int display;
  unsigned int wealth_rating;
  unsigned int treasure_class;
  int treasure_type;
  Position mPosition;
};


struct PackableLLNode<Emote>
{
  Emote data;
  PackableLLNode<Emote> *next;
  PackableLLNode<Emote> *prev;
};


struct PackableList<Emote> : PackObj
{
  PackableLLNode<Emote> *head;
  PackableLLNode<Emote> *tail;
  unsigned int curNum;
};


struct EmoteSet : PackObj
{
  unsigned int category;
  float probability;
  IDClass<_tagDataID,32,0> classID;
  AC1Legacy_PStringBase<char> quest;
  unsigned int style;
  unsigned int substyle;
  unsigned int vendorType;
  float minhealth;
  float maxhealth;
  PackableList<Emote> emotes;
};


struct PackableLLNode<EmoteSet>
{
  EmoteSet data;
  PackableLLNode<EmoteSet> *next;
  PackableLLNode<EmoteSet> *prev;
};


struct PackableList<EmoteSet> : PackObj
{
  PackableLLNode<EmoteSet> *head;
  PackableLLNode<EmoteSet> *tail;
  unsigned int curNum;
};


struct PackableHashData<unsigned long,PackableList<EmoteSet> >
{
  unsigned int _key;
  PackableList<EmoteSet> _data;
  PackableHashData<unsigned long,PackableList<EmoteSet> > *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,PackableList<EmoteSet> > : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,PackableList<EmoteSet> > **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct CEmoteTable : PackObj
{
  PackableHashTable<unsigned long,PackableList<EmoteSet> > _emote_table;
};


struct PackableLLNode<CreationProfile>
{
  CreationProfile data;
  PackableLLNode<CreationProfile> *next;
  PackableLLNode<CreationProfile> *prev;
};


struct PackableList<CreationProfile> : PackObj
{
  PackableLLNode<CreationProfile> *head;
  PackableLLNode<CreationProfile> *tail;
  unsigned int curNum;
};


struct PageData : PackObj
{
  unsigned int authorID;
  AC1Legacy_PStringBase<char> authorName;
  AC1Legacy_PStringBase<char> authorAccount;
  int textIncluded;
  int ignoreAuthor;
  AC1Legacy_PStringBase<char> pageText;
  PageData *prev;
  PageData *next;
};


struct PageDataList : PackObj
{
  PageData *first;
  PageData *last;
  int numPages;
  int maxNumPages;
  int maxNumCharsPerPage;
  int packWithText;
};


struct GeneratorProfile : PackObj
{
  float probability;
  IDClass<_tagDataID,32,0> type;
  long double delay;
  int initCreate;
  int maxNum;
  RegenerationType whenCreate;
  RegenLocationType whereCreate;
  int stackSize;
  unsigned int ptid;
  float shade;
  Position pos_val;
  unsigned int slot;
};


struct PackableLLNode<GeneratorProfile>
{
  GeneratorProfile data;
  PackableLLNode<GeneratorProfile> *next;
  PackableLLNode<GeneratorProfile> *prev;
};


struct PackableList<GeneratorProfile> : PackObj
{
  PackableLLNode<GeneratorProfile> *head;
  PackableLLNode<GeneratorProfile> *tail;
  unsigned int curNum;
};


struct GeneratorTable : PackObj
{
  PackableList<GeneratorProfile> _profile_list;
};


struct __declspec(align(8)) GeneratorRegistryNode : PackObj
{
  IDClass<_tagDataID,32,0> m_wcidOrTtype;
  long double ts;
  int m_bTreasureType;
  unsigned int slot;
  int checkpointed;
  int shop;
  int amount;
};


struct PackableHashData<unsigned long,GeneratorRegistryNode>
{
  unsigned int _key;
  GeneratorRegistryNode _data;
  PackableHashData<unsigned long,GeneratorRegistryNode> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,GeneratorRegistryNode> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,GeneratorRegistryNode> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct GeneratorRegistry : PackObj
{
  PackableHashTable<unsigned long,GeneratorRegistryNode> _registry;
};


struct GeneratorQueueNode : PackObj
{
  unsigned int slot;
  long double when;
};


struct PackableLLNode<GeneratorQueueNode>
{
  GeneratorQueueNode data;
  PackableLLNode<GeneratorQueueNode> *next;
  PackableLLNode<GeneratorQueueNode> *prev;
};


struct PackableList<GeneratorQueueNode> : PackObj
{
  PackableLLNode<GeneratorQueueNode> *head;
  PackableLLNode<GeneratorQueueNode> *tail;
  unsigned int curNum;
};


struct GeneratorQueue : PackObj
{
  PackableList<GeneratorQueueNode> _queue;
};


struct CACQualities : SerializeUsingPackDBObj, CBaseQualities
{
  AttributeCache *_attribCache;
  PackableHashTable<unsigned long,Skill> *_skillStatsTable;
  Body *_body;
  CSpellBook *_spell_book;
  CEnchantmentRegistry *_enchantment_reg;
  EventFilter *_event_filter;
  CEmoteTable *_emote_table;
  PackableList<CreationProfile> *_create_list;
  PageDataList *_pageDataList;
  GeneratorTable *_generator_table;
  GeneratorRegistry *_generator_registry;
  GeneratorQueue *_generator_queue;
};


struct CAllegianceProfile : AllegianceProfile
{
};


struct CFellowship : Fellowship
{
};


struct HousePayment : PackObj
{
  IDClass<_tagDataID,32,0> wcid;
  int num;
  int paid;
  AC1Legacy_PStringBase<char> name;
  AC1Legacy_PStringBase<char> pname;
};


struct PackableLLNode<HousePayment>
{
  HousePayment data;
  PackableLLNode<HousePayment> *next;
  PackableLLNode<HousePayment> *prev;
};


struct PackableList<HousePayment> : PackObj
{
  PackableLLNode<HousePayment> *head;
  PackableLLNode<HousePayment> *tail;
  unsigned int curNum;
};


struct HousePaymentList : PackableList<HousePayment>
{
};


struct HouseData : PackObj
{
  int m_buy_time;
  int m_rent_time;
  HousePaymentList m_buy;
  HousePaymentList m_rent;
  Position m_pos;
  unsigned int m_type;
  int m_maintenance_free;
};


struct HouseProfile : PackObj
{
  unsigned int _id;
  unsigned int _owner;
  AC1Legacy_PStringBase<char> _name;
  unsigned int _bitmask;
  HousePaymentList _buy;
  HousePaymentList _rent;
  int _min_level;
  int _max_level;
  int _min_alleg_rank;
  int _max_alleg_rank;
  int _maintenance_free;
  unsigned int _type;
};


struct CContractTracker : PackObj
{
  unsigned int _version;
  unsigned int _contract_id;
  unsigned int _contract_stage;
  long double _time_when_done;
  long double _time_when_repeats;
  long double _time_of_server_update;
};


struct AC1Legacy_List<unsigned long>
{
  AC1Legacy_List<unsigned long>Vtbl *vfptr;
  AC1Legacy_ListNode<unsigned long> *_head;
  AC1Legacy_ListNode<unsigned long> *_tail;
  unsigned int _num_elements;
};


struct AC1Legacy_List<unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_List<unsigned long> *this, unsigned int);
};


struct AC1Legacy_ListNode<unsigned long>
{
  unsigned int data;
  AC1Legacy_ListNode<unsigned long> *next;
  AC1Legacy_ListNode<unsigned long> *prev;
};


struct PList<unsigned long> : AC1Legacy_List<unsigned long>, PackObj
{
};


struct CharacterTitleTable : PackObj
{
  unsigned int mDisplayTitle;
  PList<unsigned long> mTitleList;
};


struct PackableHashData<unsigned long,CContractTracker>
{
  unsigned int _key;
  CContractTracker _data;
  PackableHashData<unsigned long,CContractTracker> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,CContractTracker> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,CContractTracker> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct CContractTrackerTable : PackObj
{
  PackableHashTable<unsigned long,CContractTracker> _contractTrackerHash;
};


struct AC1Legacy_List<FriendData>
{
  AC1Legacy_List<FriendData>Vtbl *vfptr;
  AC1Legacy_ListNode<FriendData> *_head;
  AC1Legacy_ListNode<FriendData> *_tail;
  unsigned int _num_elements;
};


struct AC1Legacy_List<FriendData>Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_List<FriendData> *this, unsigned int);
};


struct FriendData : PackObj
{
  unsigned int m_id;
  AC1Legacy_PStringBase<char> m_name;
  int m_online;
  int m_appearOffline;
  PList<unsigned long> m_friendsList;
  PList<unsigned long> m_friendOfList;
};


struct AC1Legacy_ListNode<FriendData>
{
  FriendData data;
  AC1Legacy_ListNode<FriendData> *next;
  AC1Legacy_ListNode<FriendData> *prev;
};


struct PList<FriendData> : AC1Legacy_List<FriendData>, PackObj
{
};


struct FriendDataList : PList<FriendData>
{
};


struct CPlayerModule : Interface, PlayerModule
{
  bool m_bDirty;
  long double m_timeFirstDirtied;
};


struct VendorProfile : PackObj
{
  unsigned int item_types;
  int min_value;
  int max_value;
  int magic;
  float buy_price;
  float sell_price;
  IDClass<_tagDataID,32,0> trade_id;
  int trade_num;
  AC1Legacy_PStringBase<char> trade_name;
};


struct CAllegianceHierarchy : AllegianceHierarchy
{
};


struct GuestInfo : PackObj
{
  int _item_storage_permission;
  AC1Legacy_PStringBase<char> _char_name;
};


struct PackableHashData<unsigned long,GuestInfo>
{
  unsigned int _key;
  GuestInfo _data;
  PackableHashData<unsigned long,GuestInfo> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,GuestInfo> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,GuestInfo> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct HAR : PackObj
{
  unsigned int _bitmask;
  unsigned int _monarch_iid;
  PackableHashTable<unsigned long,GuestInfo> _guest_table;
  PList<unsigned long> _roommate_list;
};


struct HookGroupData : PackObj
{
  unsigned int _version;
  PackableHashTable<unsigned long,int> _data;
};


struct HouseWHouseData : PackObj
{
  unsigned int _wHouseIID;
  int _iHooksInUse;
  unsigned int _version;
  HookGroupData _hookGroupData;
};


struct PackableLLNode<HouseWHouseData>
{
  HouseWHouseData data;
  PackableLLNode<HouseWHouseData> *next;
  PackableLLNode<HouseWHouseData> *prev;
};


struct PackableList<HouseWHouseData> : PackObj
{
  PackableLLNode<HouseWHouseData> *head;
  PackableLLNode<HouseWHouseData> *tail;
  unsigned int curNum;
};


struct House : PackObj
{
  unsigned int _id;
  unsigned int _htype;
  IDClass<_tagDataID,32,0> _wcid;
  unsigned int _owner;
  AC1Legacy_PStringBase<char> _name;
  AC1Legacy_PStringBase<char> _account;
  unsigned int _bitmask;
  int _buy_time;
  int _rent_time;
  PackableList<unsigned long> _houses;
  HousePaymentList _buy;
  HousePaymentList _rent;
  HAR _access;
  Position _boot_pos;
  Position _house_pos;
  int _maintenance_free;
  int _min_level;
  int _max_level;
  int _min_alleg_rank;
  int _max_alleg_rank;
  int _iMaxUsableHooks;
  int _iCurrentHooksUsed;
  HookGroupData _hookGroupData;
  unsigned int _currentHookGroupValue;
  PackableList<HouseWHouseData> _housesData;
};


struct CAllegianceData : AllegianceData
{
};


struct CAllegianceNode : AllegianceNode
{
};


struct MovementStruct
{
  MovementTypes_Type type;
  unsigned int motion;
  unsigned int object_id;
  unsigned int top_level_id;
  Position pos;
  float radius;
  float height;
  MovementParameters *params;
};


struct MovementReturn : PackObj
{
  MovementParameters params;
  unsigned int object_id;
  unsigned int error;
  Position position;
  float object_radius;
  float object_height;
};


struct _D3DVECTOR
{
  float x;
  float y;
  float z;
};


struct _D3DRECT
{
  int x1;
  int y1;
  int x2;
  int y2;
};


struct $40942CBCB8F0A1CDBC81269929B28324
{
  float _11;
  float _12;
  float _13;
  float _14;
  float _21;
  float _22;
  float _23;
  float _24;
  float _31;
  float _32;
  float _33;
  float _34;
  float _41;
  float _42;
  float _43;
  float _44;
};


union $9980042F4352C1E97EEF76FD77AF4F45
{
  $40942CBCB8F0A1CDBC81269929B28324 __s0;
  float m[4][4];
};


struct _D3DMATRIX
{
  $9980042F4352C1E97EEF76FD77AF4F45 ___u0;
};


struct _D3DVIEWPORT9
{
  unsigned int X;
  unsigned int Y;
  unsigned int Width;
  unsigned int Height;
  float MinZ;
  float MaxZ;
};


struct _D3DCLIPSTATUS9
{
  unsigned int ClipUnion;
  unsigned int ClipIntersection;
};




struct _D3DLIGHT9
{
  _D3DLIGHTTYPE Type;
  _D3DCOLORVALUE Diffuse;
  _D3DCOLORVALUE Specular;
  _D3DCOLORVALUE Ambient;
  _D3DVECTOR Position;
  _D3DVECTOR Direction;
  float Range;
  float Falloff;
  float Attenuation0;
  float Attenuation1;
  float Attenuation2;
  float Theta;
  float Phi;
};


struct _D3DVERTEXELEMENT9
{
  unsigned __int16 Stream;
  unsigned __int16 Offset;
  char Type;
  char Method;
  char Usage;
  char UsageIndex;
};


struct _D3DDISPLAYMODE
{
  unsigned int Width;
  unsigned int Height;
  unsigned int RefreshRate;
  _D3DFORMAT Format;
};



struct _D3DDEVICE_CREATION_PARAMETERS
{
  unsigned int AdapterOrdinal;
  _D3DDEVTYPE DeviceType;
  HWND__ *hFocusWindow;
  unsigned int BehaviorFlags;
};


struct _D3DPRESENT_PARAMETERS_
{
  unsigned int BackBufferWidth;
  unsigned int BackBufferHeight;
  _D3DFORMAT BackBufferFormat;
  unsigned int BackBufferCount;
  _D3DMULTISAMPLE_TYPE MultiSampleType;
  unsigned int MultiSampleQuality;
  _D3DSWAPEFFECT SwapEffect;
  HWND__ *hDeviceWindow;
  int Windowed;
  int EnableAutoDepthStencil;
  _D3DFORMAT AutoDepthStencilFormat;
  unsigned int Flags;
  unsigned int FullScreen_RefreshRateInHz;
  unsigned int PresentationInterval;
};


struct _D3DGAMMARAMP
{
  unsigned __int16 red[256];
  unsigned __int16 green[256];
  unsigned __int16 blue[256];
};


struct _D3DVERTEXBUFFER_DESC
{
  _D3DFORMAT Format;
  _D3DRESOURCETYPE Type;
  unsigned int Usage;
  _D3DPOOL Pool;
  unsigned int Size;
  unsigned int FVF;
};


struct _D3DINDEXBUFFER_DESC
{
  _D3DFORMAT Format;
  _D3DRESOURCETYPE Type;
  unsigned int Usage;
  _D3DPOOL Pool;
  unsigned int Size;
};


struct _D3DSURFACE_DESC
{
  _D3DFORMAT Format;
  _D3DRESOURCETYPE Type;
  unsigned int Usage;
  _D3DPOOL Pool;
  _D3DMULTISAMPLE_TYPE MultiSampleType;
  unsigned int MultiSampleQuality;
  unsigned int Width;
  unsigned int Height;
};


struct _D3DVOLUME_DESC
{
  _D3DFORMAT Format;
  _D3DRESOURCETYPE Type;
  unsigned int Usage;
  _D3DPOOL Pool;
  unsigned int Width;
  unsigned int Height;
  unsigned int Depth;
};


struct _D3DLOCKED_RECT
{
  int Pitch;
  void *pBits;
};


struct _D3DBOX
{
  unsigned int Left;
  unsigned int Top;
  unsigned int Right;
  unsigned int Bottom;
  unsigned int Front;
  unsigned int Back;
};


struct _D3DLOCKED_BOX
{
  int RowPitch;
  int SlicePitch;
  void *pBits;
};


struct _D3DRECTPATCH_INFO
{
  unsigned int StartVertexOffsetWidth;
  unsigned int StartVertexOffsetHeight;
  unsigned int Width;
  unsigned int Height;
  unsigned int Stride;
  _D3DBASISTYPE Basis;
  _D3DDEGREETYPE Degree;
};


struct _D3DTRIPATCH_INFO
{
  unsigned int StartVertexOffset;
  unsigned int NumVertices;
  _D3DBASISTYPE Basis;
  _D3DDEGREETYPE Degree;
};


struct __unaligned __declspec(align(4)) _D3DADAPTER_IDENTIFIER9
{
  char Driver[512];
  char Description[512];
  char DeviceName[32];
  _LARGE_INTEGER DriverVersion;
  unsigned int VendorId;
  unsigned int DeviceId;
  unsigned int SubSysId;
  unsigned int Revision;
  _GUID DeviceIdentifier;
  unsigned int WHQLLevel;
};


struct _D3DRASTER_STATUS
{
  int InVBlank;
  unsigned int ScanLine;
};


struct _D3DVSHADERCAPS2_0
{
  unsigned int Caps;
  int DynamicFlowControlDepth;
  int NumTemps;
  int StaticFlowControlDepth;
};


struct _D3DPSHADERCAPS2_0
{
  unsigned int Caps;
  int DynamicFlowControlDepth;
  int NumTemps;
  int StaticFlowControlDepth;
  int NumInstructionSlots;
};


struct _D3DCAPS9
{
  _D3DDEVTYPE DeviceType;
  unsigned int AdapterOrdinal;
  unsigned int Caps;
  unsigned int Caps2;
  unsigned int Caps3;
  unsigned int PresentationIntervals;
  unsigned int CursorCaps;
  unsigned int DevCaps;
  unsigned int PrimitiveMiscCaps;
  unsigned int RasterCaps;
  unsigned int ZCmpCaps;
  unsigned int SrcBlendCaps;
  unsigned int DestBlendCaps;
  unsigned int AlphaCmpCaps;
  unsigned int ShadeCaps;
  unsigned int TextureCaps;
  unsigned int TextureFilterCaps;
  unsigned int CubeTextureFilterCaps;
  unsigned int VolumeTextureFilterCaps;
  unsigned int TextureAddressCaps;
  unsigned int VolumeTextureAddressCaps;
  unsigned int LineCaps;
  unsigned int MaxTextureWidth;
  unsigned int MaxTextureHeight;
  unsigned int MaxVolumeExtent;
  unsigned int MaxTextureRepeat;
  unsigned int MaxTextureAspectRatio;
  unsigned int MaxAnisotropy;
  float MaxVertexW;
  float GuardBandLeft;
  float GuardBandTop;
  float GuardBandRight;
  float GuardBandBottom;
  float ExtentsAdjust;
  unsigned int StencilCaps;
  unsigned int FVFCaps;
  unsigned int TextureOpCaps;
  unsigned int MaxTextureBlendStages;
  unsigned int MaxSimultaneousTextures;
  unsigned int VertexProcessingCaps;
  unsigned int MaxActiveLights;
  unsigned int MaxUserClipPlanes;
  unsigned int MaxVertexBlendMatrices;
  unsigned int MaxVertexBlendMatrixIndex;
  float MaxPointSize;
  unsigned int MaxPrimitiveCount;
  unsigned int MaxVertexIndex;
  unsigned int MaxStreams;
  unsigned int MaxStreamStride;
  unsigned int VertexShaderVersion;
  unsigned int MaxVertexShaderConst;
  unsigned int PixelShaderVersion;
  float PixelShader1xMaxValue;
  unsigned int DevCaps2;
  float MaxNpatchTessellationLevel;
  unsigned int Reserved5;
  unsigned int MasterAdapterOrdinal;
  unsigned int AdapterOrdinalInGroup;
  unsigned int NumberOfAdaptersInGroup;
  unsigned int DeclTypes;
  unsigned int NumSimultaneousRTs;
  unsigned int StretchRectFilterCaps;
  _D3DVSHADERCAPS2_0 VS20Caps;
  _D3DPSHADERCAPS2_0 PS20Caps;
  unsigned int VertexTextureFilterCaps;
  unsigned int MaxVShaderInstructionsExecuted;
  unsigned int MaxPShaderInstructionsExecuted;
  unsigned int MaxVertexShader30InstructionSlots;
  unsigned int MaxPixelShader30InstructionSlots;
};


struct IDirect3DDevice9 : IUnknown
{
};


struct D3DXFLOAT16
{
  unsigned __int16 value;
};


struct D3DXVECTOR2
{
  float x;
  float y;
};


struct D3DXVECTOR2_16F
{
  D3DXFLOAT16 x;
  D3DXFLOAT16 y;
};


struct D3DXVECTOR3 : _D3DVECTOR
{
};


struct D3DXVECTOR3_16F
{
  D3DXFLOAT16 x;
  D3DXFLOAT16 y;
  D3DXFLOAT16 z;
};


struct D3DXVECTOR4
{
  float x;
  float y;
  float z;
  float w;
};


struct D3DXVECTOR4_16F
{
  D3DXFLOAT16 x;
  D3DXFLOAT16 y;
  D3DXFLOAT16 z;
  D3DXFLOAT16 w;
};


struct D3DXMATRIX : _D3DMATRIX
{
};


struct _D3DXMATRIXA16 : D3DXMATRIX
{
};


struct D3DXQUATERNION
{
  float x;
  float y;
  float z;
  float w;
};


struct D3DXPLANE
{
  float a;
  float b;
  float c;
  float d;
};


struct D3DXCOLOR
{
  float r;
  float g;
  float b;
  float a;
};


struct ID3DXSprite : IUnknown
{
};


struct _D3DXFONT_DESCA
{
  int Height;
  unsigned int Width;
  unsigned int Weight;
  unsigned int MipLevels;
  int Italic;
  char CharSet;
  char OutputPrecision;
  char Quality;
  char PitchAndFamily;
  char FaceName[32];
};


struct _D3DXFONT_DESCW
{
  int Height;
  unsigned int Width;
  unsigned int Weight;
  unsigned int MipLevels;
  int Italic;
  char CharSet;
  char OutputPrecision;
  char Quality;
  char PitchAndFamily;
  unsigned __int16 FaceName[32];
};


struct ID3DXFont : IUnknown
{
};


struct IDirect3D9 : IUnknown
{
};


struct IDirect3DSwapChain9 : IUnknown
{
};




struct IDirect3DVolume9 : IUnknown
{
};


struct IDirect3DVolumeTexture9 : IDirect3DBaseTexture9
{
};


struct IDirect3DCubeTexture9 : IDirect3DBaseTexture9
{
};


struct IDirect3DVertexBuffer9 : IDirect3DResource9
{
};


struct IDirect3DIndexBuffer9 : IDirect3DResource9
{
};


struct IDirect3DStateBlock9 : IUnknown
{
};


struct IDirect3DVertexDeclaration9 : IUnknown
{
};


struct IDirect3DVertexShader9 : IUnknown
{
};


struct IDirect3DPixelShader9 : IUnknown
{
};


struct IDirect3DQuery9 : IUnknown
{
};





union $59A0841E51207CD0525C7823E30AD252
{
  BlitDataFormat eBlitFormat;
  MaskDataFormat eMaskFormat;
};


union $F9EB96C766845D46422FD33D7F6A4A36
{
  char *pDstBuf;
  const char *pSrcBuf;
};


struct BlitBufferArgs
{
  $59A0841E51207CD0525C7823E30AD252 ___u0;
  $F9EB96C766845D46422FD33D7F6A4A36 ___u1;
  unsigned int iStride;
};


struct __declspec(align(2)) RenderDevicePresentation
{
  HWND__ *hRenderWindow;
  unsigned int Width;
  unsigned int Height;
  bool FullScreen;
  unsigned int FSRefreshRate;
  unsigned int FSBitsPerPixel;
  bool FSTripleBuffering;
  bool FSSyncToDisplayRefresh;
  bool Antialiasing;
};


struct __declspec(align(2)) RenderDeviceConfig
{
  HWND__ *hFocusWindow;
  bool bUseStencilBuffer;
  bool bSoftwareVertexProcessing;
  bool bUsePureDevice;
};


struct __declspec(align(4)) RenderDeviceCaps
{
  unsigned int MaxTextureWidth;
  unsigned int MaxTextureHeight;
  unsigned int MaxSimultaneousTextures;
  unsigned int MaxTextureBlendStages;
  unsigned int MaxSimultaneousRenderTargets;
  unsigned int MaxActiveLights;
  unsigned int MaxUserClipPlanes;
  bool bCanDoSinglePassDetailing;
  bool bTexOpDotProduct3;
  bool bTexOpBumpEnvMap;
  bool bDestinationAlpha;
  bool bSquareTexturesOnly;
  bool b3DTextures;
  bool bCubeTextures;
  bool bColorWriteControl;
  bool bHardwareVertexProcessing;
  bool bOcclusionQueries;
  bool bSimpleNonPowerOfTwoTextures;
  bool bPointSprites;
  bool bAutoGenMipMaps;
  bool bDynamicTextures;
  bool bSlopeScaleDepthBias;
  bool bBlendOp;
  bool bTwoSidedStencil;
  bool bCompressedTextures;
};


struct RenderDeviceDisplayInfo
{
  bool bStencilBuffer;
  bool bTextureRenderTargets;
  bool bMultiSampling;
  bool bMultiSample_2_Samples;
  bool bMultiSample_4_Samples;
  PixelFormatID pfRenderTargets;
  PixelFormatID pfDepthBuffers;
  PixelFormatID pfRGBTextures;
  PixelFormatID pfARGBTextures;
  PixelFormatID pfAlphaTextures;
  PixelFormatID pfRGBSurfaces;
  PixelFormatID pfARGBSurfaces;
  PixelFormatID pfAlphaSurfaces;
  PixelFormatID pfLowRGBSurfaces;
  PixelFormatID pfLowARGBSurfaces;
  PixelFormatID pfLowAlphaSurfaces;
};


const struct RenderLight
{
  _D3DLIGHT9 d3dLight;
  int d3dLightIndex;
  unsigned int cellID;
  LIGHTINFO info;
  float distancesq;
};


struct SmartArray<RenderLight,1>
{
  RenderLight *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct RenderDevice_GraphicsStatesType
{
  Matrix4 ModelToWorldMatrix;
  Matrix4 WorldToViewMatrix;
  Matrix4 ViewToClipMatrix;
  RGBAColor AmbientLight;
  RGBAColor DistanceFogColor;
  float DistanceFogNear;
  float DistanceFogFar;
  float DistantSpriteOpacityNear;
  float DistantSpriteOpacityRange;
  float OpacityFogNearDistance;
  float OpacityFogRange;
  RenderLight *pMPLightSource;
  RenderTexture *pMPLightProjectorTexture;
  SmartArray<RenderLight,1> FFLightSources;
  bool ChangedFFLightSources;
  RGBAColor FrameBufferBloomRGBAmount;
  Vector4 PixelFilterTexCoords[15];
  Vector4 BSVLightOriginAndExtrusionOffset;
  float FrameBufferViewportOffsetX;
  float FrameBufferViewportOffsetY;
  float FrameBufferViewportScaleX;
  float FrameBufferViewportScaleY;
};


struct RenderDevice
{
  RenderDeviceVtbl *vfptr;
  RenderDevicePresentation m_presentation;
  RenderDeviceConfig m_config;
  RenderDeviceCaps m_caps;
  RenderDeviceDisplayInfo m_displayInfo;
  unsigned int m_viewportX;
  unsigned int m_viewportY;
  unsigned int m_viewportWidth;
  unsigned int m_viewportHeight;
  unsigned int m_RenderTargetWidth;
  unsigned int m_RenderTargetHeight;
  float m_DisplayAspectRatio;
  float m_ViewportAspectRatio;
  bool m_bOpenScene;
  bool m_bDeviceLost;
  unsigned int m_nFrameStamp;
  RenderSurface *m_pFrameBufferSurface;
  RenderSurface *m_pDepthStencilSurface;
  RenderSurface *m_pRenderTarget;
  RenderSurface *m_pDepthStencilTarget;
  bool m_WireframeMode;
  bool m_ReverseCulling;
  RenderDevice_GraphicsStatesType m_GState;
  TextureBasedFont *m_pDebugFont;
  unsigned int m_DebugFontWidth;
  unsigned int m_DebugFontHeight;
};


struct RenderDeviceVtbl
{
  void *(__thiscall *__vecDelDtor)(RenderDevice *this, unsigned int);
  _BYTE gap4[12];
  RenderSurface *(__thiscall *CreateSurface)(RenderDevice *this);
  RenderTexture *(__thiscall *CreateTexture)(RenderDevice *this);
  RenderIndexBuffer *(__thiscall *CreateIndexBuffer)(RenderDevice *this);
  RenderVertexBuffer *(__thiscall *CreateVertexBuffer)(RenderDevice *this);
  void (__thiscall *BeginScene)(RenderDevice *this);
  void (__thiscall *EndScene)(RenderDevice *this);
  void (__thiscall *Flip)(RenderDevice *this);
  void (__thiscall *Clear)(RenderDevice *this, unsigned int, RGBAColor *, const float);
  bool (__thiscall *IsResetPossible)(RenderDevice *this);
  void (__thiscall *SetRenderTarget)(RenderDevice *this, const unsigned int, RenderSurface *, RenderSurface *);
  bool (__thiscall *ResetDevice)(RenderDevice *this, RenderDevicePresentation *);
  RenderSurface *(__thiscall *GenerateSurfaceFromFrontBuffer)(RenderDevice *this);
  void (__thiscall *SetViewport)(RenderDevice *this, unsigned int, unsigned int, unsigned int, unsigned int, bool);
  void (__thiscall *SetLandscape)(RenderDevice *this, LScape *);
  void (__thiscall *DrawInside)(RenderDevice *this, CEnvCell *);
  void (__thiscall *DrawPortal)(RenderDevice *this, CPortalPoly *, int, int);
  void (__thiscall *DrawBlock)(RenderDevice *this, CLandBlock *);
  void (__thiscall *DrawLandCell)(RenderDevice *this, CLandCell *);
  void (__thiscall *DrawSortCell)(RenderDevice *this, CSortCell *);
  void (__thiscall *DrawEnvCell)(RenderDevice *this, CEnvCell *);
  void (__thiscall *DrawObjCell)(RenderDevice *this, CObjCell *);
  void (__thiscall *DrawObjCellForDummies)(RenderDevice *this, CObjCell *);
  void (__thiscall *DrawBuilding)(RenderDevice *this, CBuildingObj *);
  void (__thiscall *DrawBuildingLeaf)(RenderDevice *this, unsigned int);
  ObjectDrawStatus (__thiscall *DrawMesh)(RenderDevice *this, CGfxObj *, Position *, bool);
  void (__thiscall *DrawDetailMesh)(RenderDevice *this, CGfxObj *, Position *);
};


struct FixedArray<TextureBasedFontCharacter>
{
  TextureBasedFontCharacter *m_data;
  unsigned int m_num;
};


struct __declspec(align(4)) TextureBasedFont : ReferenceCountTemplate<1048576,1>
{
  IDClass<_tagDataID,32,0> m_SourceFontDID;
  RenderTexture *m_pTexture;
  RenderMaterial *m_pMaterial;
  unsigned __int16 m_FirstUnicodeCharacter;
  unsigned __int16 m_LastUnicodeCharacter;
  unsigned int m_MaxCharacterHeight;
  unsigned int m_HorizontalSpacing;
  unsigned int m_VerticalSpacing;
  FixedArray<TextureBasedFontCharacter> m_Characters;
  bool m_IsReadyToRender;
  bool m_QueuedTextUsesScaling;
};


struct CPortalPoly
{
  unsigned int portal_index;
  CPolygon *portal;
};


struct __declspec(align(4)) TextureBasedFontCharacter
{
  float m_U0;
  float m_V0;
  float m_U1;
  float m_V1;
  char m_Width;
  char m_Height;
  char m_HorizontalOffsetBefore;
  char m_HorizontalOffsetAfter;
  char m_VerticalOffsetBefore;
};


struct SmartArray<GraphicsResource *,1>
{
  GraphicsResource **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *,1>
{
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *,1>Vtbl *vfptr;
  HashTableData<unsigned __int64,ImgTex *> *m_aInplaceBuckets[23];
  HashTableData<unsigned __int64,ImgTex *> **m_buckets;
  HashTableData<unsigned __int64,ImgTex *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned __int64,ImgTex *,1>
{
  HashTable<unsigned __int64,ImgTex *,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *,1> m_intrusiveTable;
};


struct HashTable<unsigned __int64,ImgTex *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned __int64,ImgTex *,1> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *,1> *this, unsigned int);
};


struct __declspec(align(8)) IntrusiveHashData<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *>
{
  unsigned __int64 m_hashKey;
  HashTableData<unsigned __int64,ImgTex *> *m_hashNext;
};


struct __declspec(align(8)) HashTableData<unsigned __int64,ImgTex *> : IntrusiveHashData<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *>
{
  ImgTex *m_data;
};


struct AutoGrowHashTable<unsigned __int64,ImgTex *> : HashTable<unsigned __int64,ImgTex *,1>
{
};


struct IntrusiveHashTable<ImgTex *,HashSetData<ImgTex *> *,1>
{
  IntrusiveHashTable<ImgTex *,HashSetData<ImgTex *> *,1>Vtbl *vfptr;
  HashSetData<ImgTex *> *m_aInplaceBuckets[23];
  HashSetData<ImgTex *> **m_buckets;
  HashSetData<ImgTex *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashSet<ImgTex *>
{
  HashSet<ImgTex *>Vtbl *vfptr;
  IntrusiveHashTable<ImgTex *,HashSetData<ImgTex *> *,1> m_intrusiveTable;
};


struct HashSet<ImgTex *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashSet<ImgTex *> *this, unsigned int);
};


struct IntrusiveHashTable<ImgTex *,HashSetData<ImgTex *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<ImgTex *,HashSetData<ImgTex *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<ImgTex *,HashSetData<ImgTex *> *>
{
  ImgTex *m_hashKey;
  HashSetData<ImgTex *> *m_hashNext;
};


struct HashSetData<ImgTex *> : IntrusiveHashData<ImgTex *,HashSetData<ImgTex *> *>
{
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ImgTex *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ImgTex *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,ImgTex *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,ImgTex *> **m_buckets;
  HashTableData<unsigned long,ImgTex *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,ImgTex *,0>
{
  HashTable<unsigned long,ImgTex *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ImgTex *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,ImgTex *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,ImgTex *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ImgTex *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ImgTex *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,ImgTex *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,ImgTex *> *m_hashNext;
};


struct HashTableData<unsigned long,ImgTex *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,ImgTex *> *>
{
  ImgTex *m_data;
};


struct IntrusiveHashTable<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *,0>
{
  IntrusiveHashTable<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *,0>Vtbl *vfptr;
  HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *m_aInplaceBuckets[23];
  HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> **m_buckets;
  HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *,0>
{
  HashTable<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *,0>Vtbl *vfptr;
  IntrusiveHashTable<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *,0> m_intrusiveTable;
};


struct HashTable<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *,0> *this, unsigned int);
};


struct IntrusiveHashTable<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *>
{
  PixelFormatID m_hashKey;
  HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *m_hashNext;
};


struct HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> : IntrusiveHashData<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *>
{
  HashTable<unsigned long,ImgTex *,0> *m_data;
};


struct IntrusiveHashIterator<ImgTex *,HashSetData<ImgTex *> *,1>
{
  IntrusiveHashTable<ImgTex *,HashSetData<ImgTex *> *,1> *m_currHashTable;
  HashSetData<ImgTex *> **m_currBucket;
  HashSetData<ImgTex *> *m_currElement;
};


struct HashSetIterator<ImgTex *>
{
  IntrusiveHashIterator<ImgTex *,HashSetData<ImgTex *> *,1> m_iter;
};


struct IntrusiveHashIterator<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *,0>
{
  IntrusiveHashTable<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *,0> *m_currHashTable;
  HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> **m_currBucket;
  HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *m_currElement;
};


struct HashIterator<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *,0>
{
  IntrusiveHashIterator<enum PixelFormatID,HashTableData<enum PixelFormatID,HashTable<unsigned long,ImgTex *,0> *> *,0> m_iter;
};


struct ClientSystem : Interface, gmNoticeHandler
{
};


struct InterfaceInfo<ClientSystem>
{
};


struct PackableLLIter<GeneratorProfile>
{
  PackableLLIter<GeneratorProfile>Vtbl *vfptr;
  PackableLLNode<GeneratorProfile> *_current;
};


struct PackableLLIter<GeneratorProfile>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<GeneratorProfile> *this, unsigned int);
};


struct PackableHashIterator<unsigned long,GeneratorRegistryNode>
{
  PackableHashIterator<unsigned long,GeneratorRegistryNode>Vtbl *vfptr;
  PackableHashData<unsigned long,GeneratorRegistryNode> *_current;
  PackableHashData<unsigned long,GeneratorRegistryNode> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,GeneratorRegistryNode>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,GeneratorRegistryNode> *this, unsigned int);
};


struct PackableLLIter<GeneratorQueueNode>
{
  PackableLLIter<GeneratorQueueNode>Vtbl *vfptr;
  PackableLLNode<GeneratorQueueNode> *_current;
};


struct PackableLLIter<GeneratorQueueNode>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<GeneratorQueueNode> *this, unsigned int);
};


struct PackableLLIter<EmoteSet>
{
  PackableLLIter<EmoteSet>Vtbl *vfptr;
  PackableLLNode<EmoteSet> *_current;
};


struct PackableLLIter<EmoteSet>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<EmoteSet> *this, unsigned int);
};


struct PackableHashIterator<unsigned long,PackableList<EmoteSet> >
{
  PackableHashIterator<unsigned long,PackableList<EmoteSet> >Vtbl *vfptr;
  PackableHashData<unsigned long,PackableList<EmoteSet> > *_current;
  PackableHashData<unsigned long,PackableList<EmoteSet> > **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,PackableList<EmoteSet> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,PackableList<EmoteSet> > *this, unsigned int);
};


struct PackableLLIter<Emote>
{
  PackableLLIter<Emote>Vtbl *vfptr;
  PackableLLNode<Emote> *_current;
};


struct PackableLLIter<Emote>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<Emote> *this, unsigned int);
};


struct PlayerDesc : CACQualities
{
};


struct InterfaceInfo<PlayerDesc>
{
};


struct InterfaceInfo<CPlayerModule>
{
};


struct SpellFormula : PackObj
{
  unsigned int _comps[8];
};


struct Spell : PackObj
{
  unsigned int _spell_id;
};


struct MetaSpell : PackObj
{
  SpellType _sp_type;
  Spell *_spell;
};


struct CSpellBase : PackObj
{
  AC1Legacy_PStringBase<char> _name;
  AC1Legacy_PStringBase<char> _desc;
  unsigned int _school;
  IDClass<_tagDataID,32,0> _iconID;
  unsigned int _category;
  unsigned int _bitfield;
  int _base_mana;
  int _mana_mod;
  float _base_range_constant;
  float _base_range_mod;
  int _power;
  float _spell_economy_mod;
  unsigned int _formula_version;
  float _component_loss;
  SpellFormula _formula;
  PScriptType _caster_effect;
  PScriptType _target_effect;
  PScriptType _fizzle_effect;
  long double _recovery_interval;
  float _recovery_amount;
  int _display_order;
  unsigned int _non_component_target_type;
  MetaSpell _meta_spell;
};


struct SquelchInfo : PackObj
{
  AC1Legacy_vlong _squelch_msgs;
  int _is_zone_squelch;
  AC1Legacy_PStringBase<char> _name;
};


struct PackableHashIterator<AC1Legacy_PStringBase<char>,unsigned long>
{
  PackableHashIterator<AC1Legacy_PStringBase<char>,unsigned long>Vtbl *vfptr;
  PackableHashData<AC1Legacy_PStringBase<char>,unsigned long> *_current;
  PackableHashData<AC1Legacy_PStringBase<char>,unsigned long> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<AC1Legacy_PStringBase<char>,unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<AC1Legacy_PStringBase<char>,unsigned long> *this, unsigned int);
};


struct PackableHashData<AC1Legacy_PStringBase<char>,unsigned long>
{
  AC1Legacy_PStringBase<char> _key;
  unsigned int _data;
  PackableHashData<AC1Legacy_PStringBase<char>,unsigned long> *_next;
  int _hashVal;
};


struct PackableHashTable<AC1Legacy_PStringBase<char>,unsigned long> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<AC1Legacy_PStringBase<char>,unsigned long> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct PackableHashIterator<unsigned long,SquelchInfo>
{
  PackableHashIterator<unsigned long,SquelchInfo>Vtbl *vfptr;
  PackableHashData<unsigned long,SquelchInfo> *_current;
  PackableHashData<unsigned long,SquelchInfo> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,SquelchInfo>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,SquelchInfo> *this, unsigned int);
};


struct PackableHashData<unsigned long,SquelchInfo>
{
  unsigned int _key;
  SquelchInfo _data;
  PackableHashData<unsigned long,SquelchInfo> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,SquelchInfo> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,SquelchInfo> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct SquelchDB : PackObj
{
  PackableHashTable<AC1Legacy_PStringBase<char>,unsigned long> _account_hash;
  PackableHashTable<unsigned long,SquelchInfo> _character_hash;
  SquelchInfo _global_squelch_info;
};


struct PackableLLNode<AC1Legacy_PStringBase<char> >
{
  AC1Legacy_PStringBase<char> data;
  PackableLLNode<AC1Legacy_PStringBase<char> > *next;
  PackableLLNode<AC1Legacy_PStringBase<char> > *prev;
};


struct PackableList<AC1Legacy_PStringBase<char> > : PackObj
{
  PackableLLNode<AC1Legacy_PStringBase<char> > *head;
  PackableLLNode<AC1Legacy_PStringBase<char> > *tail;
  unsigned int curNum;
};


struct TurbineChatBlob
{
  unsigned int m_targetID;
  HRESULT m_hResult;
  unsigned int m_ChatType;
};


struct ChannelSystem
{
};


struct AC1Legacy_ListIterator<unsigned long>
{
  AC1Legacy_ListIterator<unsigned long>Vtbl *vfptr;
  AC1Legacy_ListNode<unsigned long> *_current;
  AC1Legacy_List<unsigned long> *_list;
};


struct AC1Legacy_ListIterator<unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_ListIterator<unsigned long> *this, unsigned int);
};


struct AC1Legacy_ListIterator<FriendData>
{
  AC1Legacy_ListIterator<FriendData>Vtbl *vfptr;
  AC1Legacy_ListNode<FriendData> *_current;
  AC1Legacy_List<FriendData> *_list;
};


struct AC1Legacy_ListIterator<FriendData>Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_ListIterator<FriendData> *this, unsigned int);
};



struct TextureMapChange : PackObj
{
  unsigned int part_index;
  IDClass<_tagDataID,32,0> old_tex_id;
  IDClass<_tagDataID,32,0> new_tex_id;
  TextureMapChange *prev;
  TextureMapChange *next;
};


struct AnimPartChange : PackObj
{
  unsigned int part_index;
  IDClass<_tagDataID,32,0> part_id;
  AnimPartChange *prev;
  AnimPartChange *next;
};


struct ObjDesc : VisualDesc
{
  IDClass<_tagDataID,32,0> paletteID;
  Subpalette *firstSubpal;
  Subpalette *lastSubpal;
  int num_subpalettes;
  TextureMapChange *firstTMChange;
  TextureMapChange *lastTMChange;
  int num_texture_map_changes;
  AnimPartChange *firstAPChange;
  AnimPartChange *lastAPChange;
  int num_anim_part_changes;
};


struct SmartArray<Position,1>
{
  Position *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct ACCharGenStartArea
{
  ACCharGenStartAreaVtbl *vfptr;
  PStringBase<char> name;
  SmartArray<Position,1> mPositionList;
};


struct ACCharGenStartAreaVtbl
{
  void (__thiscall *Serialize)(ACCharGenStartArea *this, Archive *);
};


struct SmartArray<ACCharGenStartArea,1>
{
  ACCharGenStartArea *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,HeritageGroup_CG> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,HeritageGroup_CG> **m_buckets;
  HashTableData<unsigned long,HeritageGroup_CG> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,HeritageGroup_CG,0>
{
  HashTable<unsigned long,HeritageGroup_CG,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,HeritageGroup_CG,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,HeritageGroup_CG,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,HeritageGroup_CG> *m_hashNext;
};


struct SmartArray<Skill_CG,1>
{
  Skill_CG *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<Template_CG,1>
{
  Template_CG *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Sex_CG> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Sex_CG> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,Sex_CG> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,Sex_CG> **m_buckets;
  HashTableData<unsigned long,Sex_CG> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,Sex_CG,0>
{
  HashTable<unsigned long,Sex_CG,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Sex_CG> *,0> m_intrusiveTable;
};


struct HeritageGroup_CG
{
  HeritageGroup_CGVtbl *vfptr;
  PStringBase<char> name;
  IDClass<_tagDataID,32,0> iconImage;
  IDClass<_tagDataID,32,0> setupID;
  IDClass<_tagDataID,32,0> environmentSetupID;
  int numAttributeCredits;
  int numSkillCredits;
  SmartArray<unsigned long,1> mPrimaryStartAreaList;
  SmartArray<unsigned long,1> mSecondaryStartAreaList;
  SmartArray<Skill_CG,1> mSkillList;
  SmartArray<Template_CG,1> mTemplateList;
  HashTable<unsigned long,Sex_CG,0> mGenderList;
};


struct HashTableData<unsigned long,HeritageGroup_CG> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *>
{
  HeritageGroup_CG m_data;
};


struct HeritageGroup_CGVtbl
{
  void (__thiscall *Serialize)(HeritageGroup_CG *this, Archive *);
};


struct Skill_CG
{
  Skill_CGVtbl *vfptr;
  int skillNum;
  int normalCost;
  int primaryCost;
};


struct Template_CG
{
  Template_CGVtbl *vfptr;
  PStringBase<char> name;
  IDClass<_tagDataID,32,0> iconImage;
  unsigned int titleID;
  int strength;
  int endurance;
  int coordination;
  int quickness;
  int focus;
  int self;
  SmartArray<int,1> mNormalSkillsList;
  SmartArray<int,1> mPrimarySkillsList;
};


struct HashTable<unsigned long,Sex_CG,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,Sex_CG,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Sex_CG> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Sex_CG> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,Sex_CG> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,Sex_CG> *m_hashNext;
};


struct SmartArray<HairStyle_CG,1>
{
  HairStyle_CG *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<EyesStrip_CG,1>
{
  EyesStrip_CG *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<FaceStrip_CG,1>
{
  FaceStrip_CG *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<Style_CG,1>
{
  Style_CG *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct Sex_CG
{
  Sex_CGVtbl *vfptr;
  PStringBase<char> name;
  int scaling;
  IDClass<_tagDataID,32,0> setup;
  IDClass<_tagDataID,32,0> soundTable;
  IDClass<_tagDataID,32,0> iconImage;
  ObjDesc objDesc;
  IDClass<_tagDataID,32,0> physicsTable;
  IDClass<_tagDataID,32,0> motionTable;
  IDClass<_tagDataID,32,0> combatTable;
  IDClass<_tagDataID,32,0> basePalette;
  IDClass<_tagDataID,32,0> skinPalSet;
  SmartArray<IDClass<_tagDataID,32,0>,1> mHairColorList;
  SmartArray<HairStyle_CG,1> mHairStyleList;
  SmartArray<IDClass<_tagDataID,32,0>,1> mEyeColorList;
  SmartArray<EyesStrip_CG,1> mEyeStripList;
  SmartArray<FaceStrip_CG,1> mNoseStripList;
  SmartArray<FaceStrip_CG,1> mMouthStripList;
  SmartArray<Style_CG,1> mHeadgearList;
  SmartArray<Style_CG,1> mShirtList;
  SmartArray<Style_CG,1> mPantsList;
  SmartArray<Style_CG,1> mFootwearList;
  SmartArray<unsigned long,1> mClothingColorsList;
};


struct HashTableData<unsigned long,Sex_CG> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,Sex_CG> *>
{
  Sex_CG m_data;
};


struct Skill_CGVtbl
{
  void (__thiscall *Serialize)(Skill_CG *this, Archive *);
};


struct Template_CGVtbl
{
  void (__thiscall *Serialize)(Template_CG *this, Archive *);
};


struct Sex_CGVtbl
{
  void (__thiscall *Serialize)(Sex_CG *this, Archive *);
};


struct HairStyle_CG
{
  HairStyle_CGVtbl *vfptr;
  IDClass<_tagDataID,32,0> iconImage;
  bool bald;
  IDClass<_tagDataID,32,0> alternateSetup;
  ObjDesc objDesc;
};


struct EyesStrip_CG
{
  EyesStrip_CGVtbl *vfptr;
  IDClass<_tagDataID,32,0> iconImage;
  IDClass<_tagDataID,32,0> iconImage_Bald;
  ObjDesc objDesc;
  ObjDesc objDesc_Bald;
};


struct FaceStrip_CG
{
  FaceStrip_CGVtbl *vfptr;
  IDClass<_tagDataID,32,0> iconImage;
  ObjDesc objDesc;
};


struct Style_CG
{
  Style_CGVtbl *vfptr;
  PStringBase<char> name;
  IDClass<_tagDataID,32,0> clothingTable;
  IDClass<_tagDataID,32,0> weenieDefault;
};


struct HairStyle_CGVtbl
{
  void (__thiscall *Serialize)(HairStyle_CG *this, Archive *);
};


struct EyesStrip_CGVtbl
{
  void (__thiscall *Serialize)(EyesStrip_CG *this, Archive *);
};


struct FaceStrip_CGVtbl
{
  void (__thiscall *Serialize)(FaceStrip_CG *this, Archive *);
};


struct Style_CGVtbl
{
  void (__thiscall *Serialize)(Style_CG *this, Archive *);
};


struct ACCharGenData : CharGenData
{
  SmartArray<ACCharGenStartArea,1> mStartAreaList;
  HashTable<unsigned long,HeritageGroup_CG,0> mHeritageGroupList;
};


struct __declspec(align(8)) ACCharGenResult : CharGenResult
{
  unsigned int heritageGroup;
  unsigned int gender;
  int eyesStrip;
  int noseStrip;
  int mouthStrip;
  int hairColor;
  int eyeColor;
  int hairStyle;
  int headgearStyle;
  int shirtStyle;
  int trousersStyle;
  int footwearStyle;
  unsigned int headgearColor;
  unsigned int shirtColor;
  unsigned int trousersColor;
  unsigned int footwearColor;
  long double skinShade;
  long double hairShade;
  long double headgearShade;
  long double shirtShade;
  long double trousersShade;
  long double footwearShade;
  int templateNum;
  int strength;
  int endurance;
  int coordination;
  int quickness;
  int focus;
  int self;
  int numSkills;
  SKILL_ADVANCEMENT_CLASS *skillAdvancementClasses;
  AC1Legacy_PStringBase<char> name;
  int slot;
  IDClass<_tagDataID,32,0> classID;
  unsigned int startArea;
  int isAdmin;
  int isEnvoy;
};


struct CharAppearanceData
{
  IDClass<_tagDataID,32,0> base_palette;
  IDClass<_tagDataID,32,0> head_object;
  IDClass<_tagDataID,32,0> eyes_texture;
  IDClass<_tagDataID,32,0> nose_texture;
  IDClass<_tagDataID,32,0> mouth_texture;
  IDClass<_tagDataID,32,0> default_eyes_texture;
  IDClass<_tagDataID,32,0> default_nose_texture;
  IDClass<_tagDataID,32,0> default_mouth_texture;
  IDClass<_tagDataID,32,0> hair_palette;
  IDClass<_tagDataID,32,0> eyes_palette;
  IDClass<_tagDataID,32,0> skin_palette;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *,0> *m_currHashTable;
  HashTableData<unsigned long,HeritageGroup_CG> **m_currBucket;
  HashTableData<unsigned long,HeritageGroup_CG> *m_currElement;
};


struct HashIterator<unsigned long,HeritageGroup_CG,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,HeritageGroup_CG> *,0> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,Sex_CG> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Sex_CG> *,0> *m_currHashTable;
  HashTableData<unsigned long,Sex_CG> **m_currBucket;
  HashTableData<unsigned long,Sex_CG> *m_currElement;
};


struct HashIterator<unsigned long,Sex_CG,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,Sex_CG> *,0> m_iter;
};


struct SkillRecord
{
  char name[30];
  unsigned int id;
};


struct List<SkillRecord *>
{
  List<SkillRecord *>Vtbl *vfptr;
  ListNode<SkillRecord *> *_head;
  ListNode<SkillRecord *> *_tail;
  unsigned int _num_elements;
};


struct CharGenState
{
  CharGenStateVtbl *vfptr;
  ACCharGenResult charGenResult;
  int beginRequest;
  int heritageGroupFrozen;
  int sexFrozen;
  int appearanceFrozen;
  int clothingFrozen;
  unsigned int mHeritageGroup;
  unsigned int mGender;
  int eyesStrip;
  int noseStrip;
  int mouthStrip;
  int hairColor;
  int eyeColor;
  int hairStyle;
  int headgearStyle;
  int headgearColor;
  int shirtStyle;
  int shirtColor;
  int trousersStyle;
  int trousersColor;
  int footwearStyle;
  int footwearColor;
  int numHeadgearColors;
  int numShirtColors;
  int numTrousersColors;
  int numFootwearColors;
  unsigned int *headgearPaletteTemplateIDs;
  unsigned int *shirtPaletteTemplateIDs;
  unsigned int *trousersPaletteTemplateIDs;
  unsigned int *footwearPaletteTemplateIDs;
  IDClass<_tagDataID,32,0> *headgearPalSetIDs;
  IDClass<_tagDataID,32,0> *shirtPalSetIDs;
  IDClass<_tagDataID,32,0> *trousersPalSetIDs;
  IDClass<_tagDataID,32,0> *footwearPalSetIDs;
  long double skinShade;
  long double hairShade;
  long double headgearShade;
  long double shirtShade;
  long double trousersShade;
  long double footwearShade;
  Method_CG method;
  AdvancedMethod_CG advancedMethod;
  int template_;
  int strength;
  int endurance;
  int coordination;
  int quickness;
  int focus;
  int self;
  int totalAtrbCredits;
  int remainingAtrbCredits;
  int atrbMin;
  int atrbMax;
  int totalNumSkills;
  SKILL_ADVANCEMENT_CLASS *skillLevels;
  int totalSkillCredits;
  int remainingSkillCredits;
  int *spellKnown;
  List<SkillRecord *> skillRecordList;
  char name[33];
  int linkingWord;
  int startArea;
  IDClass<_tagDataID,32,0> setupID;
  IDClass<_tagDataID,32,0> animID;
  int setupChanged;
  int slot;
  char password[20];
  CG_VERIFICATION_RESPONSE verificationState;
  int createAsAdmin;
  int createAsEnvoy;
  int bAttribLocked[7];
  SkillTable *skillTable;
  Attribute2ndTable *attribute2ndTable;
  EnterChargen enterChargen;
  ACCharGenData *charGenData;
};


union $A0F97670E669114D706A75D718F5A366
{
  int (__thiscall *GetRandomInt)(CharGenState *this, int, int);
  int (__thiscall *GetRandomInt)(CharGenState *this, int);
};


struct CharGenStateVtbl
{
  void (__thiscall *UpdateTrueFacePal)(CharGenState *this);
  __declspec(align(8)) $A0F97670E669114D706A75D718F5A366 ___u1;
  long double (__thiscall *GetRandomReal)(CharGenState *this);
};


struct List<SkillRecord *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<SkillRecord *> *this, unsigned int);
};


struct ListNode<SkillRecord *>
{
  SkillRecord *data;
  ListNode<SkillRecord *> *next;
  ListNode<SkillRecord *> *prev;
};


struct PackableHashTable<unsigned long,SkillBase> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,SkillBase> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct __declspec(align(8)) SkillTable : SerializeUsingPackDBObj
{
  PackableHashTable<unsigned long,SkillBase> _skillBaseHash;
};


struct SkillFormula : PackObj
{
  unsigned int _w;
  unsigned int _x;
  unsigned int _y;
  unsigned int _z;
  unsigned int _attr1;
  unsigned int _attr2;
};


struct Attribute2ndBase : PackObj
{
  SkillFormula _formula;
};


struct Attribute2ndTable : SerializeUsingPackDBObj
{
  Attribute2ndBase _max_health;
  Attribute2ndBase _max_stamina;
  Attribute2ndBase _max_mana;
};


struct SkillBase : PackObj
{
  AC1Legacy_PStringBase<char> _description;
  AC1Legacy_PStringBase<char> _name;
  IDClass<_tagDataID,32,0> _iconID;
  unsigned int _trained_cost;
  unsigned int _specialized_cost;
  SKILL_CATEGORY _category;
  int _chargen_use;
  SKILL_ADVANCEMENT_CLASS _min_level;
  SkillFormula _formula;
  long double _upper_bound;
  long double _lower_bound;
  long double _learn_mod;
};


struct PackableHashData<unsigned long,SkillBase>
{
  unsigned int _key;
  SkillBase _data;
  PackableHashData<unsigned long,SkillBase> *_next;
  int _hashVal;
};


struct ListIterator<SkillRecord *>
{
  ListIterator<SkillRecord *>Vtbl *vfptr;
  ListNode<SkillRecord *> *_current;
  List<SkillRecord *> *_list;
};


struct ListIterator<SkillRecord *>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<SkillRecord *> *this, unsigned int);
};


struct __declspec(align(8)) ServerCharGenState : CharGenState
{
  unsigned int m_seed1;
  unsigned int m_seed2;
  unsigned int m_cPulls;
};


struct __declspec(align(8)) ClientCharGenState : CharGenState
{
  Palette *grayFacePal;
  Palette *trueFacePal;
  int trueFacePalChangeNum;
};


struct PackableLLIter<InventoryPlacement>
{
  PackableLLIter<InventoryPlacement>Vtbl *vfptr;
  PackableLLNode<InventoryPlacement> *_current;
};


struct PackableLLIter<InventoryPlacement>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<InventoryPlacement> *this, unsigned int);
};


struct IntrusiveHashIterator<unsigned long,CLostCell *,0>
{
  IntrusiveHashTable<unsigned long,CLostCell *,0> *m_currHashTable;
  CLostCell **m_currBucket;
  CLostCell *m_currElement;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,double> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,double> *,0> *m_currHashTable;
  HashTableData<unsigned long,double> **m_currBucket;
  HashTableData<unsigned long,double> *m_currElement;
};


struct HashIterator<unsigned long,double,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,double> *,0> m_iter;
};


struct InterfaceInfo<CObjectMaint>
{
};


struct ACCObjectMaint : CObjectMaint
{
  ObjDesc *player_objdesc;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned char> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned char> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,unsigned char> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,unsigned char> **m_buckets;
  HashTableData<unsigned long,unsigned char> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,unsigned char,0>
{
  HashTable<unsigned long,unsigned char,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned char> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,unsigned char,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,unsigned char,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned char> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,unsigned char> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,unsigned char> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,unsigned char> *m_hashNext;
};


struct __declspec(align(4)) HashTableData<unsigned long,unsigned char> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,unsigned char> *>
{
  char m_data;
};


struct PHashTable<unsigned long,unsigned char> : HashTable<unsigned long,unsigned char,0>, StreamPackObj
{
};


struct __declspec(align(4)) WTimeStamper : PackObj
{
  PHashTable<unsigned long,unsigned char> _table;
  char _house_ts;
};


struct ACWTimeStamper : WTimeStamper
{
};


struct ACCWeenieObject : CWeenieObject
{
  CObjectInventory *objInventory;
  int valid;
  int awaitingAuthentication;
  int markedForDeletion;
  int movedWhileMarkedForDeletion;
  int beingRemoved;
  PositionState current_state;
  int selected;
  int waiting;
  int sellState;
  int tradeState;
  int shortcutNum;
  bool m_bShortcutGhosted;
  unsigned int preRemoveContainerID;
  unsigned int preRemoveWielderID;
  unsigned int preRemoveLocation;
  unsigned int preRemoveContainerPlace;
  CPhysicsObj *_phys_obj;
  PublicWeenieDesc pwd;
  ACWTimeStamper *_stamper;
  PlayerDesc *m_pQualities;
};


struct ClientObjMaintSystem : ClientSystem, ACCObjectMaint
{
};


struct InterfaceInfo<ClientObjMaintSystem>
{
};


struct CContract : PackObj
{
  unsigned int _version;
  unsigned int _contract_id;
  AC1Legacy_PStringBase<char> _contract_name;
  AC1Legacy_PStringBase<char> _description;
  AC1Legacy_PStringBase<char> _description_progress;
  AC1Legacy_PStringBase<char> _name_npc_start;
  AC1Legacy_PStringBase<char> _name_npc_end;
  AC1Legacy_PStringBase<char> _questflag_stamped;
  AC1Legacy_PStringBase<char> _questflag_started;
  AC1Legacy_PStringBase<char> _questflag_finished;
  AC1Legacy_PStringBase<char> _questflag_progress;
  AC1Legacy_PStringBase<char> _questflag_timer;
  AC1Legacy_PStringBase<char> _questflag_repeat_time;
  Position _location_npc_start;
  Position _location_npc_end;
  Position _location_quest_area;
};


struct PackableHashIterator<unsigned long,CContract>
{
  PackableHashIterator<unsigned long,CContract>Vtbl *vfptr;
  PackableHashData<unsigned long,CContract> *_current;
  PackableHashData<unsigned long,CContract> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,CContract>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,CContract> *this, unsigned int);
};


struct PackableHashData<unsigned long,CContract>
{
  unsigned int _key;
  CContract _data;
  PackableHashData<unsigned long,CContract> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,CContract> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,CContract> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct __declspec(align(8)) CContractTable : SerializeUsingPackDBObj
{
  PackableHashTable<unsigned long,CContract> _contractHash;
};


struct PackableHashIterator<unsigned long,CContractTracker>
{
  PackableHashIterator<unsigned long,CContractTracker>Vtbl *vfptr;
  PackableHashData<unsigned long,CContractTracker> *_current;
  PackableHashData<unsigned long,CContractTracker> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,CContractTracker>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,CContractTracker> *this, unsigned int);
};


struct __declspec(align(4)) ClientUISystem : ClientSystem, IInputActionCallback
{
  Turbine_RefCount m_cTurbineRefCount;
  unsigned int m_cBusy;
  unsigned int groundObject;
  unsigned int requestedGroundObject;
  unsigned int vendorID;
  unsigned int attemptOpenVendorID;
  unsigned int attemptSaleObjectID;
  Target_Mode targetMode;
  IDClass<_tagDataID,32,0> m_didCurrentCursor;
  CSoundTable *soundTable;
  bool m_bLeaveTargetMode;
  CameraSet *m_pCameraSet;
  bool m_bRadarVisible;
  bool m_bRadarBlank;
};


struct __declspec(align(8)) SalvageOperationsResultData : PackObj
{
  unsigned int m_skillUsed;
  PackableList<unsigned long> m_notSalvagable;
  PackableList<SalvageResult> m_salvageResults;
  long double m_percentReturn;
  int m_augBonus;
};


struct SalvageDataBlob
{
  unsigned int itemID;
  AC1Legacy_PStringBase<char> name;
  unsigned int material;
  int workmanship;
  int value;
  int isMaterial;
  int power;
  int numberItems;
};


struct SalvageOperationData : PackableList<unsigned long>
{
  unsigned int m_material;
  unsigned int m_skillUsed;
  int m_maxWorkmanship;
  int m_minWorkmanship;
  long double m_percentageReturn;
  int m_totalSalvageWorkmanship;
  int m_totalSalvageValue;
  int m_totalCombineWorkmanship;
  int m_totalCombineValue;
  int m_totalNumberItems;
  int m_totalCombinePower;
};


struct InterfaceInfo<ClientUISystem>
{
};


struct AdminAccountData : PackObj
{
  AC1Legacy_PStringBase<char> accountName;
  unsigned int bookieID;
};


struct AdminPlayerData : PackObj
{
  AC1Legacy_PStringBase<char> name;
  unsigned int bookieID;
};


struct FullPlayerData : PackObj
{
  unsigned int bookieID;
  AC1Legacy_PStringBase<char> character_name;
  AC1Legacy_PStringBase<char> player_name;
  AC1Legacy_PStringBase<char> ip_address;
  Position position;
};


struct __declspec(align(4)) ClientAdminSystem : ClientSystem
{
  Turbine_RefCount m_cTurbineRefCount;
  bool m_bIsBooting;
};



struct PackableLLNode<AdminPlayerData>
{
  AdminPlayerData data;
  PackableLLNode<AdminPlayerData> *next;
  PackableLLNode<AdminPlayerData> *prev;
};


struct PackableList<AdminPlayerData> : PackObj
{
  PackableLLNode<AdminPlayerData> *head;
  PackableLLNode<AdminPlayerData> *tail;
  unsigned int curNum;
};


struct InterfaceInfo<ClientAdminSystem>
{
};


struct ClientAllegianceSystem : ClientSystem
{
  Turbine_RefCount m_cTurbineRefCount;
  CAllegianceProfile m_allegianceProfile;
};


struct InterfaceInfo<ClientAllegianceSystem>
{
};


struct ClientCombatSystem : ClientSystem, IInputActionCallback, QualityChangeHandler
{
  Turbine_RefCount m_cTurbineRefCount;
  bool jump_pending;
  bool m_bTrackingTarget;
  COMBAT_MODE combatMode;
  COMBAT_MODE pendingCombatMode;
  ATTACK_HEIGHT requestedAttackHeight;
  long double buildStartTime;
  bool buildInProgress;
  PowerBarMode powerBarMode;
  float latestPowerBarLevel;
  bool attackInProgress;
  bool attackServerResponsePending;
  bool attackRequestInProgress;
  float requestedAttackPower;
  bool repeatAttacking;
  bool currentBuildIsAutomatic;
  bool targetWillinglyLost;
  bool attackWhenResponseReceived;
  float attackWhenResponseReceived_Power;
  float m_rUIRequestedPower;
  bool m_bAdvancedCombatMode;
  long double lastAttackedTime;
};


struct InterfaceInfo<ClientCombatSystem>
{
};


struct IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *,1>
{
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *,1>Vtbl *vfptr;
  ClientCommunicationSystem_CmdHashData *m_aInplaceBuckets[23];
  ClientCommunicationSystem_CmdHashData **m_buckets;
  ClientCommunicationSystem_CmdHashData **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *,1> *this, unsigned int);
};


struct IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *>
{
  CaseInsensitiveStringBase<PStringBase<char> > m_hashKey;
  ClientCommunicationSystem_CmdHashData *m_hashNext;
};


struct ClientCommunicationSystem_CmdHashData : IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *>
{
  bool (__thiscall *func)(ClientCommunicationSystem *this, int, char **);
  bool (__thiscall *help)(ClientCommunicationSystem *this, ClientCommunicationSystem_HelpType, const char *, PStringBase<char> *) __declspec(align(8));
};


struct ClientCommunicationSystem : ClientSystem, QualityChangeHandler
{
  Turbine_RefCount m_cTurbineRefCount;
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *,1> m_hashCommands;
  PStringBase<char> m_strLastCommandLine;
  PStringBase<char> m_strCurrentCommand;
  unsigned int m_idCurrentCommandSource;
  int m_LastSpamCheck;
  int m_ChatMessageCount;
  PStringBase<char> m_strLogName;
};


struct ChatRoomTracker : PackObj
{
  unsigned int m_allegianceRoomID;
  unsigned int mGeneralChatRoomID;
  unsigned int mTradeChatRoomID;
  unsigned int mLFGChatRoomID;
  unsigned int mRoleplayChatRoomID;
  unsigned int mOlthoiChatRoomID;
  unsigned int mSocietyChatRoomID;
  unsigned int mSocietyCelHanChatRoomID;
  unsigned int mSocietyEldWebChatRoomID;
  unsigned int mSocietyRadBloChatRoomID;
};


struct IntrusiveHashIterator<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *,1>
{
  IntrusiveHashTable<CaseInsensitiveStringBase<PStringBase<char> >,ClientCommunicationSystem_CmdHashData *,1> *m_currHashTable;
  ClientCommunicationSystem_CmdHashData **m_currBucket;
  ClientCommunicationSystem_CmdHashData *m_currElement;
};


struct ChatDisplayInfo
{
  unsigned int m_ltt;
  AC1Legacy_PStringBase<char> m_display;
  int m_doDisplayText;
};


struct InterfaceInfo<ClientCommunicationSystem>
{
};


struct ClientFellowshipSystem : ClientSystem
{
  Turbine_RefCount m_cTurbineRefCount;
  CFellowship *m_pFellowship;
};


struct InterfaceInfo<ClientFellowshipSystem>
{
};


struct PackableLLIter<HousePayment>
{
  PackableLLIter<HousePayment>Vtbl *vfptr;
  PackableLLNode<HousePayment> *_current;
};


struct PackableLLIter<HousePayment>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<HousePayment> *this, unsigned int);
};


struct PackableHashIterator<unsigned long,GuestInfo>
{
  PackableHashIterator<unsigned long,GuestInfo>Vtbl *vfptr;
  PackableHashData<unsigned long,GuestInfo> *_current;
  PackableHashData<unsigned long,GuestInfo> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,GuestInfo>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,GuestInfo> *this, unsigned int);
};


struct ClientHousingSystem : ClientSystem
{
  Turbine_RefCount m_cTurbineRefCount;
};


struct InterfaceInfo<ClientHousingSystem>
{
};


struct SpellSetTierList : PackObj
{
  unsigned int m_PieceCount;
  PList<unsigned long> m_SpellList;
};


struct AC1Legacy_List<SpellSetTierList>
{
  AC1Legacy_List<SpellSetTierList>Vtbl *vfptr;
  AC1Legacy_ListNode<SpellSetTierList> *_head;
  AC1Legacy_ListNode<SpellSetTierList> *_tail;
  unsigned int _num_elements;
};


struct AC1Legacy_List<SpellSetTierList>Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_List<SpellSetTierList> *this, unsigned int);
};


struct AC1Legacy_ListNode<SpellSetTierList>
{
  SpellSetTierList data;
  AC1Legacy_ListNode<SpellSetTierList> *next;
  AC1Legacy_ListNode<SpellSetTierList> *prev;
};


struct PList<SpellSetTierList> : AC1Legacy_List<SpellSetTierList>, PackObj
{
};


struct SpellSet : PackObj
{
  PList<SpellSetTierList> m_countTiers;
};


struct AC1Legacy_ListIterator<SpellSetTierList>
{
  AC1Legacy_ListIterator<SpellSetTierList>Vtbl *vfptr;
  AC1Legacy_ListNode<SpellSetTierList> *_current;
  AC1Legacy_List<SpellSetTierList> *_list;
};


struct AC1Legacy_ListIterator<SpellSetTierList>Vtbl
{
  void *(__thiscall *__vecDelDtor)(AC1Legacy_ListIterator<SpellSetTierList> *this, unsigned int);
};


struct PackableHashIterator<unsigned long,CSpellBase>
{
  PackableHashIterator<unsigned long,CSpellBase>Vtbl *vfptr;
  PackableHashData<unsigned long,CSpellBase> *_current;
  PackableHashData<unsigned long,CSpellBase> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,CSpellBase>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,CSpellBase> *this, unsigned int);
};


struct PackableHashData<unsigned long,CSpellBase>
{
  unsigned int _key;
  CSpellBase _data;
  PackableHashData<unsigned long,CSpellBase> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,CSpellBase> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,CSpellBase> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SpellSet> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SpellSet> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,SpellSet> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,SpellSet> **m_buckets;
  HashTableData<unsigned long,SpellSet> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,SpellSet,0>
{
  HashTable<unsigned long,SpellSet,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SpellSet> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,SpellSet,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,SpellSet,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SpellSet> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SpellSet> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,SpellSet> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,SpellSet> *m_hashNext;
};


struct HashTableData<unsigned long,SpellSet> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,SpellSet> *>
{
  SpellSet m_data;
};


struct PHashTable<unsigned long,SpellSet> : HashTable<unsigned long,SpellSet,0>, StreamPackObj
{
};


struct __declspec(align(8)) CSpellTable : SerializeUsingPackDBObj
{
  PackableHashTable<unsigned long,CSpellBase> _spellBaseHash;
  PHashTable<unsigned long,SpellSet> m_SpellSetHash;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,SpellSet> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,SpellSet> *,0> *m_currHashTable;
  HashTableData<unsigned long,SpellSet> **m_currBucket;
  HashTableData<unsigned long,SpellSet> *m_currElement;
};


struct HashIterator<unsigned long,SpellSet,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,SpellSet> *,0> m_iter;
};


struct SpellComponentBase : PackObj
{
  AC1Legacy_PStringBase<char> _name;
  SpellComponentCategory _category;
  IDClass<_tagDataID,32,0> _iconID;
  SpellComponentType _type;
  unsigned int _gesture;
  float _time;
  AC1Legacy_PStringBase<char> _text;
  float _CDM;
};


struct PackableHashIterator<unsigned long,SpellComponentBase>
{
  PackableHashIterator<unsigned long,SpellComponentBase>Vtbl *vfptr;
  PackableHashData<unsigned long,SpellComponentBase> *_current;
  PackableHashData<unsigned long,SpellComponentBase> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,SpellComponentBase>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,SpellComponentBase> *this, unsigned int);
};


struct PackableHashData<unsigned long,SpellComponentBase>
{
  unsigned int _key;
  SpellComponentBase _data;
  PackableHashData<unsigned long,SpellComponentBase> *_next;
  int _hashVal;
};


struct PackableHashTable<unsigned long,SpellComponentBase> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<unsigned long,SpellComponentBase> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct __declspec(align(8)) SpellComponentTable : SerializeUsingPackDBObj
{
  PackableHashTable<unsigned long,SpellComponentBase> _spellComponentBaseHash;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Graphic *> *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Graphic *> *,1>Vtbl *vfptr;
  HashTableData<unsigned long,Graphic *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,Graphic *> **m_buckets;
  HashTableData<unsigned long,Graphic *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,Graphic *,1>
{
  HashTable<unsigned long,Graphic *,1>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Graphic *> *,1> m_intrusiveTable;
};


struct HashTable<unsigned long,Graphic *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,Graphic *,1> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Graphic *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Graphic *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,Graphic *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,Graphic *> *m_hashNext;
};


struct HashTableData<unsigned long,Graphic *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,Graphic *> *>
{
  Graphic *m_data;
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *,1>Vtbl *vfptr;
  HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *m_aInplaceBuckets[23];
  HashTableData<IDClass<_tagDataID,32,0>,Graphic *> **m_buckets;
  HashTableData<IDClass<_tagDataID,32,0>,Graphic *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<IDClass<_tagDataID,32,0>,Graphic *,1>
{
  HashTable<IDClass<_tagDataID,32,0>,Graphic *,1>Vtbl *vfptr;
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *,1> m_intrusiveTable;
};


struct HashTable<IDClass<_tagDataID,32,0>,Graphic *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<IDClass<_tagDataID,32,0>,Graphic *,1> *this, unsigned int);
};


struct IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *>
{
  IDClass<_tagDataID,32,0> m_hashKey;
  HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *m_hashNext;
};


struct HashTableData<IDClass<_tagDataID,32,0>,Graphic *> : IntrusiveHashData<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *>
{
  Graphic *m_data;
};


struct ClientMagicSystem : ClientSystem
{
  Turbine_RefCount m_cTurbineRefCount;
  CSpellTable *spellTable;
  SpellComponentTable *spellComponentTable;
  unsigned int selectedSpell;
  HashTable<unsigned long,Graphic *,1> m_hashSpellIconTable;
  HashTable<IDClass<_tagDataID,32,0>,Graphic *,1> m_hashSpellComponentIconTable;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,Graphic *> *,1>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Graphic *> *,1> *m_currHashTable;
  HashTableData<unsigned long,Graphic *> **m_currBucket;
  HashTableData<unsigned long,Graphic *> *m_currElement;
};


struct HashIterator<unsigned long,Graphic *,1>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,Graphic *> *,1> m_iter;
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *,1> *m_currHashTable;
  HashTableData<IDClass<_tagDataID,32,0>,Graphic *> **m_currBucket;
  HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *m_currElement;
};


struct HashIterator<IDClass<_tagDataID,32,0>,Graphic *,1>
{
  IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashTableData<IDClass<_tagDataID,32,0>,Graphic *> *,1> m_iter;
};


struct InterfaceInfo<ClientMagicSystem>
{
};


struct ClientMiniGameSystem : ClientSystem
{
  Turbine_RefCount m_cTurbineRefCount;
};


struct InterfaceInfo<ClientMiniGameSystem>
{
};


struct ComponentData : DLListData
{
  IDClass<_tagDataID,32,0> classID;
  AC1Legacy_PStringBase<char> componentName;
  IDClass<_tagDataID,32,0> componentIconID;
  HashTable<unsigned long,unsigned long,0> objects;
  unsigned int numItems;
};



struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *,0>Vtbl *vfptr;
  HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *m_aInplaceBuckets[23];
  HashTableData<unsigned long,IDClass<_tagDataID,32,0> > **m_buckets;
  HashTableData<unsigned long,IDClass<_tagDataID,32,0> > **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,IDClass<_tagDataID,32,0>,0>
{
  HashTable<unsigned long,IDClass<_tagDataID,32,0>,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,IDClass<_tagDataID,32,0>,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,IDClass<_tagDataID,32,0>,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *m_hashNext;
};


struct HashTableData<unsigned long,IDClass<_tagDataID,32,0> > : IntrusiveHashData<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *>
{
  IDClass<_tagDataID,32,0> m_data;
};


struct ComponentTracker
{
  SpellComponentTable *spellComponentTable;
  DLList<ComponentData> *componentLists[7];
  HashTable<unsigned long,IDClass<_tagDataID,32,0>,0> objectIDHash;
  HashSet<IDClass<_tagDataID,32,0> > classIDHash;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *,0> *m_currHashTable;
  HashTableData<unsigned long,IDClass<_tagDataID,32,0> > **m_currBucket;
  HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *m_currElement;
};


struct HashIterator<unsigned long,IDClass<_tagDataID,32,0>,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,IDClass<_tagDataID,32,0> > *,0> m_iter;
};


struct CInvSlotInfo
{
  unsigned int m_itemID;
  unsigned int m_invLoc;
};


struct ObjectRangeHandler
{
  ObjectRangeHandlerVtbl *vfptr;
};


struct ObjectRangeHandlerVtbl
{
  void (__thiscall *OnObjectRangeExit)(ObjectRangeHandler *this, unsigned int);
  void (__thiscall *OnObjectRangeTimeout)(ObjectRangeHandler *this, unsigned int);
};


struct ListIterator<ObjectRangeInfo>
{
  ListIterator<ObjectRangeInfo>Vtbl *vfptr;
  ListNode<ObjectRangeInfo> *_current;
  List<ObjectRangeInfo> *_list;
};


struct ListIterator<ObjectRangeInfo>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<ObjectRangeInfo> *this, unsigned int);
};


struct __declspec(align(8)) ObjectRangeInfo
{
  ObjectRangeHandler *m_handler;
  unsigned int m_objectID;
  long double m_range;
  bool m_useRadii;
  bool m_ignoreZDelta;
  long double m_timeInterval;
  long double m_timeOut;
  long double m_executeAtTime;
  long double m_nextUpdate;
  bool m_queuedForDeletion;
};


struct ListNode<ObjectRangeInfo>
{
  ObjectRangeInfo data;
  ListNode<ObjectRangeInfo> *next;
  ListNode<ObjectRangeInfo> *prev;
};


struct List<ObjectRangeInfo>
{
  List<ObjectRangeInfo>Vtbl *vfptr;
  ListNode<ObjectRangeInfo> *_head;
  ListNode<ObjectRangeInfo> *_tail;
  unsigned int _num_elements;
};


struct List<ObjectRangeInfo>Vtbl
{
  void *(__thiscall *__vecDelDtor)(List<ObjectRangeInfo> *this, unsigned int);
};


struct CInvSlotModule
{
  CInvSlotInfo *neckSlot;
  CInvSlotInfo *leftWristSlot;
  CInvSlotInfo *leftRingSlot;
  CInvSlotInfo *rightWristSlot;
  CInvSlotInfo *rightRingSlot;
  CInvSlotInfo *weaponReadySlot;
  CInvSlotInfo *ammoReadySlot;
  CInvSlotInfo *shieldReadySlot;
  CInvSlotInfo *clothesPantsSlot;
  CInvSlotInfo *clothesShirtSlot;
  CInvSlotInfo *trinketOneSlot;
  CInvSlotInfo *cloakSlot;
  CInvSlotInfo *sigilOneSlot;
  CInvSlotInfo *sigilTwoSlot;
  CInvSlotInfo *sigilThreeSlot;
  CInvSlotInfo *headSlot;
  CInvSlotInfo *chestSlot;
  CInvSlotInfo *abdomenSlot;
  CInvSlotInfo *upperArmSlot;
  CInvSlotInfo *lowerArmSlot;
  CInvSlotInfo *handSlot;
  CInvSlotInfo *upperLegSlot;
  CInvSlotInfo *lowerLegSlot;
  CInvSlotInfo *footSlot;
};


struct CPlayerSystem : ClientSystem, IInputActionCallback, QualityChangeHandler, ObjectRangeHandler
{
  Turbine_RefCount m_cTurbineRefCount;
  accountID account_;
  ClientCharGenState *m_pCharGenState;
  CPlayerModule playerModule;
  unsigned int playerID;
  bool m_accountHasThroneofDestiny;
  long double logOnRequestTime;
  long double logOffRequestTime;
  long double logOffTime;
  long double deleteCharRequestTime;
  bool fReadyToEnterGame;
  bool awaitingLogOn;
  bool sendLoginCompletePending;
  bool initialLoginComplete;
  bool allContainedObjectsReceived;
  bool player_initialized;
  bool player_desc_received;
  long double playerInitTime;
  bool loggingOff;
  bool logOffRequested;
  bool connectionLost;
  bool awaitingExpiration;
  long double expirationTime;
  unsigned int inventoryMask;
  unsigned int clothingPriorityMask;
  bool teleportInProgress;
  float m_fLoad;
  bool m_layoutFromFile;
  unsigned int lastFullyMergedSrcID;
  unsigned int lastFullyMergedDstID;
  CInvSlotModule m_invSlotModule;
  unsigned int blockingID;
  unsigned int blockedID;
  unsigned int blockingDestID;
  unsigned int blockedSpellTargetID;
  unsigned int blockedSpellID;
  UI_SLOT_SIDE blockedSide;
  int unblockAttemptNum;
  unsigned int mOpenContainerID;
  NIList<unsigned long> pending_components_list;
  ComponentTracker *componentTracker;
  List<ObjectRangeInfo> m_objectRangeCheckList;
  CContractTrackerTable m_contractTrackerTable;
};


struct InterfaceInfo<CPlayerSystem>
{
};


struct ClientTradeSystem : ClientSystem
{
  Turbine_RefCount m_cTurbineRefCount;
  Trade *m_pTrade;
  unsigned int m_iidTradeInitiator;
  unsigned int m_iidTradePartner;
  unsigned int attemptTradeToPlayerID;
  unsigned int attemptTradeObjectID;
};


struct InterfaceInfo<ClientTradeSystem>
{
};


struct SmartArray<ClientSystem *,1>
{
  ClientSystem **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct UIQueueManager : IQueuedUIEventDeliverer
{
  Turbine_RefCount m_cTurbineRefCount;
  NIList<NetBlob *> m_rgWaitingBlobs;
  bool m_fCrucialOrderedEventsReceived;
  NIList<NetBlob *> *m_pUIQueue;
  SmartArray<ClientSystem *,1> m_rgSystems;
  ClientMagicSystem *m_pMagicSystem;
  ClientCommunicationSystem *m_pCommunicationSystem;
  ClientObjMaintSystem *m_pObjMaintSystem;
  ClientUISystem *m_pUISystem;
  ClientAllegianceSystem *m_pAllegianceSystem;
  ClientFellowshipSystem *m_pFellowshipSystem;
  CPlayerSystem *m_pPlayerSystem;
  ClientHousingSystem *m_pHousingSystem;
  ClientMiniGameSystem *m_pMiniGameSystem;
  ClientAdminSystem *m_pAdminSystem;
  ClientCombatSystem *m_pCombatSystem;
  ClientTradeSystem *m_pTradeSystem;
};


struct InterfaceInfo<UIQueueManager>
{
};


struct __declspec(align(8)) gmClient : Client, NoticeHandler
{
  PStringBase<char> m_startChar;
  PStringBase<char> m_createChar;
  PStringBase<char> m_strKeymapFile;
  bool m_bKeymapLoaded;
  PStringBase<char> m_strZoneTicket;
  PStringBase<char> m_strGLSTicket;
  PStringBase<unsigned short> m_wstrMigrationURL;
  PStringBase<char> m_strVGPassword;
};


struct ClassFactoryForceClient_ClassType : IObjectFactory
{
  Turbine_RefCount m_cTurbineRefCount;
};


struct CCommunicationSystem
{
  CCommunicationSystemVtbl *vfptr;
  CCommunicationSystem_ChatInterfaceProvider *m_pChatInterfaceProvider;
  AC1ClientChatManager *m_pChatManager;
  int m_fUseTurbineChat;
  PStringBase<char> m_TurbineChatDllName;
};


struct CCommunicationSystemVtbl
{
  int (__thiscall *StartupTurbineChat_Internal)(CCommunicationSystem *this, AC1Legacy_PStringBase<char>);
  CCommunicationSystem_ChatInterfaceProvider *(__thiscall *CreateChatInterfaceProvider)(CCommunicationSystem *this);
};


struct IChatNetwork : IUnknown
{
};


struct IChatClientEventSink : IUnknown
{
};


struct IChatClientAsyncResultSink : IUnknown
{
};


struct CCommunicationSystem_ChatInterfaceProvider : IChatNetwork, IChatClientEventSink, IChatClientAsyncResultSink
{
};


struct TurbineDwExceptionFilter_WatsonCrashReportHelper : CPluginPrototype
{
};


struct AC1ClientChatManager : TurbineDwExceptionFilter_WatsonCrashReportHelper
{
  IChatClient *m_pChatClient;
  HINSTANCE__ *m_hChatClientLib;
};


struct IChatNetworkSink : IUnknown
{
};


struct IChatClient : IChatNetworkSink
{
};


struct __declspec(align(2)) DisplayPrefs
{
  unsigned int Resolution;
  bool FullScreen;
  unsigned int RefreshRate;
  bool TripleBuffering;
  bool SyncToRefresh;
  bool Antialiasing;
};


struct DialogBoxGateway : CPluginPrototype
{
};


struct Device_DeviceDialogBoxGateway : DialogBoxGateway
{
};


struct Device
{
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *,0>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *,0>Vtbl *vfptr;
  HashTableData<PStringBase<char>,UIPreferenceItem *> *m_aInplaceBuckets[23];
  HashTableData<PStringBase<char>,UIPreferenceItem *> **m_buckets;
  HashTableData<PStringBase<char>,UIPreferenceItem *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *>
{
  PStringBase<char> m_hashKey;
  HashTableData<PStringBase<char>,UIPreferenceItem *> *m_hashNext;
};


struct HashTableData<PStringBase<char>,UIPreferenceItem *> : IntrusiveHashData<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *>
{
  UIPreferenceItem *m_data;
};


struct UIPreferenceItem
{
  UIPreferenceItemVtbl *vfptr;
  PStringBase<char> m_strPreference;
  unsigned int m_dataType;
  unsigned int m_eStringTable;
  unsigned int m_tokenPreference;
  unsigned int m_tokenTooltip;
};


struct UIPreferenceItemVtbl
{
  void *(__thiscall *__vecDelDtor)(UIPreferenceItem *this, unsigned int);
  bool (__thiscall *SetInteger)(UIPreferenceItem *this, const int) __declspec(align(16));
  bool (__thiscall *InqIntegerRange)(UIPreferenceItem *this, int *, int *);
  bool (__thiscall *SetIntegerRange)(UIPreferenceItem *this, const int, const int);
  bool (__thiscall *InqEnum)(UIPreferenceItem *this, unsigned int *);
  bool (__thiscall *SetEnum)(UIPreferenceItem *this, const unsigned int);
  bool (__thiscall *InqEnumChoices)(UIPreferenceItem *this, SmartArray<unsigned long,1> *);
  bool (__thiscall *SetEnumChoices)(UIPreferenceItem *this, SmartArray<unsigned long,1> *);
  bool (__thiscall *InqEnumValues)(UIPreferenceItem *this, SmartArray<unsigned long,1> *);
  bool (__thiscall *InqFloat)(UIPreferenceItem *this, float *);
  bool (__thiscall *SetFloat)(UIPreferenceItem *this, const float);
  bool (__thiscall *InqFloatRange)(UIPreferenceItem *this, float *, float *);
  bool (__thiscall *SetFloatRange)(UIPreferenceItem *this, const float, const float);
  bool (__thiscall *InqString)(UIPreferenceItem *this, PStringBase<char> *);
  bool (__thiscall *SetString)(UIPreferenceItem *this, PStringBase<char> *);
  bool (__thiscall *InqCachedBool)(UIPreferenceItem *this, bool *);
  bool (__thiscall *SetCachedBool)(UIPreferenceItem *this, const bool);
  bool (__thiscall *InqCachedInteger)(UIPreferenceItem *this, int *);
  bool (__thiscall *SetCachedInteger)(UIPreferenceItem *this, const int);
  bool (__thiscall *InqCachedEnum)(UIPreferenceItem *this, unsigned int *);
  bool (__thiscall *SetCachedEnum)(UIPreferenceItem *this, const unsigned int);
  bool (__thiscall *InqCachedFloat)(UIPreferenceItem *this, float *);
  bool (__thiscall *SetCachedFloat)(UIPreferenceItem *this, const float);
  bool (__thiscall *InqCachedString)(UIPreferenceItem *this, PStringBase<char> *);
  bool (__thiscall *SetCachedString)(UIPreferenceItem *this, PStringBase<char> *);
};


struct IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *,0>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *,0> *m_currHashTable;
  HashTableData<PStringBase<char>,UIPreferenceItem *> **m_currBucket;
  HashTableData<PStringBase<char>,UIPreferenceItem *> *m_currElement;
};


struct HashIterator<PStringBase<char>,UIPreferenceItem *,0>
{
  IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *,0> m_iter;
};


struct HashTable<PStringBase<char>,UIPreferenceItem *,0>
{
  HashTable<PStringBase<char>,UIPreferenceItem *,0>Vtbl *vfptr;
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,UIPreferenceItem *> *,0> m_intrusiveTable;
};


struct HashTable<PStringBase<char>,UIPreferenceItem *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<PStringBase<char>,UIPreferenceItem *,0> *this, unsigned int);
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *,0> *m_currHashTable;
  HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> **m_currBucket;
  HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *m_currElement;
};


struct HashIterator<unsigned long,UIMainFramework * (__cdecl*)(void),0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,UIMainFramework * (__cdecl*)(void)> *,0> m_iter;
};


struct ClassFactoryForceUIFlow_ClassType : IObjectFactory
{
  Turbine_RefCount m_cTurbineRefCount;
};


struct gmUIFlow : UIFlow, gmNoticeHandler
{
};


struct ClassRegistrarUIFlow_ClassType
{
};


struct RenderPrefs
{
  unsigned int TextureFiltering;
  bool LandscapeDetailTextures;
  bool EnvironmentDetailTextures;
  bool MultiPassAlpha;
  unsigned int LandscapeTextureDetail;
  unsigned int EnvironmentTextureDetail;
  unsigned int SceneryDrawDistance;
  unsigned int LandscapeDrawDistance;
  unsigned int AspectRatio;
  unsigned int DisplayAdapter;
  unsigned int MaxHardwareClass;
  float ScreenBrightness;
  float FieldOfView;
  unsigned int ModelDetail;
};


struct Vector2
{
  float x;
  float y;
};


struct IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *,0>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *,0> *m_currHashTable;
  HashTableData<PStringBase<char>,GRPCommand *> **m_currBucket;
  HashTableData<PStringBase<char>,GRPCommand *> *m_currElement;
};


struct HashIterator<PStringBase<char>,GRPCommand *,0>
{
  IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,GRPCommand *> *,0> m_iter;
};


struct IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *,0>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *,0> *m_currHashTable;
  HashTableData<PStringBase<char>,GRPObject *> **m_currBucket;
  HashTableData<PStringBase<char>,GRPObject *> *m_currElement;
};


struct HashIterator<PStringBase<char>,GRPObject *,0>
{
  IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,GRPObject *> *,0> m_iter;
};


struct ClassRegistrarGlobalRegistryCommands_ClassType
{
};


struct GlobalRegistryCommands : Interface
{
};


struct RefCountInterface<GlobalRegistryCommands> : GlobalRegistryCommands, ReferenceCountTemplate_1048576_0
{
};


struct GlobalRegistry
{
};


struct GlobalRegistryDestroyer
{
};


struct CircularArray<char,32768,1>_iterator
{
  CircularArray<char,32768,1> *m_pcArray;
  unsigned int m_nIndex;
};


struct CircularArray<char,32768,1>_const_iterator
{
  CircularArray<char,32768,1> *m_pcArray;
  unsigned int m_nIndex;
};


struct UserPreferences
{
};


struct ClientRegKey
{
};


struct CGrowBuffer
{
  char *m_pbBuffer;
  unsigned int m_cbSize;
};


struct UIPreferences
{
};


struct IntrusiveHashIterator<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *,1>
{
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *,1> *m_currHashTable;
  HashTableData<QualifiedDataID,CAsyncGetRequest *> **m_currBucket;
  HashTableData<QualifiedDataID,CAsyncGetRequest *> *m_currElement;
};


struct HashIterator<QualifiedDataID,CAsyncGetRequest *,1>
{
  IntrusiveHashIterator<QualifiedDataID,HashTableData<QualifiedDataID,CAsyncGetRequest *> *,1> m_iter;
};


struct IntrusiveHashIterator<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *,1>
{
  IntrusiveHashTable<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *,1> *m_currHashTable;
  HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> **m_currBucket;
  HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *m_currElement;
};


struct HashIterator<AsyncContext,AsyncCache_CCallbackHandler *,1>
{
  IntrusiveHashIterator<AsyncContext,HashTableData<AsyncContext,AsyncCache_CCallbackHandler *> *,1> m_iter;
};


struct IntrusiveHashIterator<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *,1>
{
  IntrusiveHashTable<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *,1> *m_currHashTable;
  HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData **m_currBucket;
  HashList<IDClass<_tagDataID,32,0>,bool,1>_HashListData *m_currElement;
};


struct CryptoHashTemplate<32771> : CryptoHash
{
};


struct CryptoHashTemplate<32772> : CryptoHash
{
};


struct IntrusiveHashIterator<QualifiedDataID,HashTableData<QualifiedDataID,long> *,1>
{
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,long> *,1> *m_currHashTable;
  HashTableData<QualifiedDataID,long> **m_currBucket;
  HashTableData<QualifiedDataID,long> *m_currElement;
};


struct HashIterator<QualifiedDataID,long,1>
{
  IntrusiveHashIterator<QualifiedDataID,HashTableData<QualifiedDataID,long> *,1> m_iter;
};


struct IntrusiveHashIterator<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *,1>
{
  IntrusiveHashTable<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *,1> *m_currHashTable;
  HashTableData<QualifiedDataID,MissingIteration *> **m_currBucket;
  HashTableData<QualifiedDataID,MissingIteration *> *m_currElement;
};


struct HashIterator<QualifiedDataID,MissingIteration *,1>
{
  IntrusiveHashIterator<QualifiedDataID,HashTableData<QualifiedDataID,MissingIteration *> *,1> m_iter;
};


struct IntrusiveHashIterator<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1>
{
  IntrusiveHashTable<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1> *m_currHashTable;
  HashList<QualifiedControl,unsigned long,1>_HashListData **m_currBucket;
  HashList<QualifiedControl,unsigned long,1>_HashListData *m_currElement;
};


struct IntrusiveHashListIterator<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1>
{
  HashList<QualifiedControl,unsigned long,1>_HashListData *m_pData;
  IntrusiveHashList<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1> *m_pHashList;
};


struct HashListIterator<HashList<QualifiedControl,unsigned long,1> >
{
  IntrusiveHashListIterator<QualifiedControl,HashList<QualifiedControl,unsigned long,1>_HashListData *,1> m_iter;
};


struct IntrusiveHashIterator<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1>
{
  IntrusiveHashTable<unsigned long,HashList<unsigned long,CInputMap *,1>_HashListData *,1> *m_currHashTable;
  HashList<unsigned long,CInputMap *,1>_HashListData **m_currBucket;
  HashList<unsigned long,CInputMap *,1>_HashListData *m_currElement;
};


struct IntrusiveHashIterator<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1>
{
  IntrusiveHashTable<UIRegion *,HashList<UIRegion *,UIRegion *,1>_HashListData *,1> *m_currHashTable;
  HashList<UIRegion *,UIRegion *,1>_HashListData **m_currBucket;
  HashList<UIRegion *,UIRegion *,1>_HashListData *m_currElement;
};


struct IntrusiveHashIterator<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *,1>
{
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *,1> *m_currHashTable;
  HashTableData<unsigned __int64,ImgTex *> **m_currBucket;
  HashTableData<unsigned __int64,ImgTex *> *m_currElement;
};


struct HashIterator<unsigned __int64,ImgTex *,1>
{
  IntrusiveHashIterator<unsigned __int64,HashTableData<unsigned __int64,ImgTex *> *,1> m_iter;
};


struct ProgramTypeSystem
{
};


struct ClientNetConfiguration : LoggingFunctions
{
  AC1Legacy_PStringBase<char> DesiredInterface;
  unsigned int dwPort;
  int bAutoGenerateUniquePort;
};


struct __declspec(align(8)) $BD07A5DFE72F700984F780826E69DF6F
{
  long double ServerTime;
  unsigned __int64 qwCookie;
  unsigned int NetID;
  unsigned int OutgoingSeed;
  unsigned int IncomingSeed;
};


struct CConnectHeader : COptionalHeader
{
  $BD07A5DFE72F700984F780826E69DF6F m_Data;
};


struct __declspec(align(8)) CReferralStruct
{
  unsigned __int64 qwCookie;
  sockaddr_in Addr;
  unsigned __int16 idServer;
  unsigned __int16 padding;
};


struct COnePrimHeader<2048,1073741922,CReferralStruct> : COptionalHeader
{
  CReferralStruct m_Prim;
};


struct CServerSwitchStruct
{
  CTimestamp<unsigned long,0> dwSeqNo;
  ServerSwitchType Type;
};


struct COnePrimHeader<256,96,CServerSwitchStruct> : COptionalHeader
{
  CServerSwitchStruct m_Prim;
};


struct AC1Legacy_VERSION_NO_t
{
  char rr;
  char sc;
  char bb;
  char mm[2];
  char dd[2];
  char debug;
};


struct AVLIterator<unsigned long,unsigned long>
{
  AVLNode<unsigned long,unsigned long> *_current;
};


struct COptionalHeaderAllocatorTemplate<16777216,CTimeSyncHeader>
{
};


struct __unaligned __declspec(align(2)) CFlowStruct
{
  unsigned int cbDataRecvd;
  unsigned __int16 interval;
};


struct CICMDCommandStruct
{
  ICMDCommandEnum Cmd;
  unsigned int Param;
};


struct COptionalHeaderAllocatorTemplate<65536,CLogonHeader>
{
};


struct CLogonHeader_HandshakeWireData
{
  AC1Legacy_PStringBase<char> ClientVersion;
  unsigned int cbAuthData;
};


struct CLogonHeader : COptionalHeader
{
  CLogonHeader_HandshakeWireData m_UnpackedData;
  char m_PackedData[65504];
};


struct COptionalHeaderAllocatorTemplate<33554432,CEchoRequestHeader>
{
};


struct CEchoRequestHeader : COptionalHeader
{
  float m_LocalTime;
};


struct COptionalHeaderAllocatorTemplate<67108864,CEchoResponseHeader>
{
};


struct CEchoResponseHeader_CEchoResponseHeaderWireData
{
  float LocalTime;
  float HoldingTime;
};


struct CEchoResponseHeader : COptionalHeader
{
  CEchoResponseHeader_CEchoResponseHeaderWireData m_WireData;
  long double m_LocalTimeConstructed;
};


struct COptionalHeaderAllocatorTemplate<262144,CConnectHeader>
{
};


struct NakData
{
  NakDataVtbl *vfptr;
  unsigned int naks_[116];
  int datalength_;
  unsigned int header_;
};


struct NakDataVtbl
{
  void *(__thiscall *__vecDelDtor)(NakData *this, unsigned int);
};


struct ListIterator<PerfMonCounterInfo_PerfMonCounterNameHelp>
{
  ListIterator<PerfMonCounterInfo_PerfMonCounterNameHelp>Vtbl *vfptr;
  ListNode<PerfMonCounterInfo_PerfMonCounterNameHelp> *_current;
  List<PerfMonCounterInfo_PerfMonCounterNameHelp> *_list;
};


struct ListIterator<PerfMonCounterInfo_PerfMonCounterNameHelp>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<PerfMonCounterInfo_PerfMonCounterNameHelp> *this, unsigned int);
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,int> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,int> *,0> *m_currHashTable;
  HashTableData<unsigned long,int> **m_currBucket;
  HashTableData<unsigned long,int> *m_currElement;
};


struct HashIterator<unsigned long,int,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,int> *,0> m_iter;
};


struct IntrusiveHashListIterator<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1>
{
  CAsyncStateMachine_CAsyncStateData *m_pData;
  IntrusiveHashList<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1> *m_pHashList;
};


struct IntrusiveHashListIterator<int,CAsyncStateHandler *,1>
{
  CAsyncStateHandler *m_pData;
  IntrusiveHashList<int,CAsyncStateHandler *,1> *m_pHashList;
};


struct IntrusiveHashIterator<int,CAsyncStateHandler *,1>
{
  IntrusiveHashTable<int,CAsyncStateHandler *,1> *m_currHashTable;
  CAsyncStateHandler **m_currBucket;
  CAsyncStateHandler *m_currElement;
};


struct CrashCleaner : CPluginPrototype
{
};


struct NetInitializer_AllSocketsCrashCleaner : CrashCleaner
{
};


struct CFactory
{
  CFactoryVtbl *vfptr;
};


struct CFactoryVtbl
{
  void *(__thiscall *__vecDelDtor)(CFactory *this, unsigned int);
  CommandInterpreter *(__thiscall *MakeCommandInterpreter_Internal)(CFactory *this);
  CLCache *(__thiscall *Make_Client_Cache_Internal)(CFactory *this);
  CWeenieObject *(__thiscall *MakeCWeenieObject_Internal)(CFactory *this, unsigned int);
  GlobalEventHandler *(__thiscall *MakeGlobalEventHandler_Internal)(CFactory *this);
  QualityRegistrar *(__thiscall *MakeQualityRegistrar_Internal)(CFactory *this);
  CCommunicationSystem *(__thiscall *MakeCCommunicationSystem_Internal)(CFactory *this);
  SmartBox *(__thiscall *MakeSmartBox_Internal)(CFactory *this, NIList<NetBlob *> *);
};


struct ACCFactory : CFactory
{
};


struct AC1Legacy_Version
{
};


struct SmartArray<char *,1>
{
  char **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct IACPlugin : IUnknown
{
};


struct IAsheronsCall : IUnknown
{
};


struct APIManager
{
  IACPlugin *m_pPlugin;
  IAsheronsCall *m_pAsheronsCallImpl;
};


struct APIManager_IAsheronsCallImpl : IAsheronsCall
{
  int m_cRef;
};


struct IntrusiveHashIterator<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *,0>
{
  IntrusiveHashTable<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *,0> *m_currHashTable;
  HashTableData<unsigned __int64,unsigned __int64> **m_currBucket;
  HashTableData<unsigned __int64,unsigned __int64> *m_currElement;
};


struct HashIterator<unsigned __int64,unsigned __int64,0>
{
  IntrusiveHashIterator<unsigned __int64,HashTableData<unsigned __int64,unsigned __int64> *,0> m_iter;
};


struct IntrusiveHashIterator<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1>
{
  IntrusiveHashTable<AsyncContext,CAsyncStateMachine_CAsyncStateData *,1> *m_currHashTable;
  CAsyncStateMachine_CAsyncStateData **m_currBucket;
  CAsyncStateMachine_CAsyncStateData *m_currElement;
};


struct IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,1>
{
  IntrusiveHashTable<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,1> *m_currHashTable;
  HashTableData<PStringBase<char>,unsigned long> **m_currBucket;
  HashTableData<PStringBase<char>,unsigned long> *m_currElement;
};


struct HashIterator<PStringBase<char>,unsigned long,1>
{
  IntrusiveHashIterator<PStringBase<char>,HashTableData<PStringBase<char>,unsigned long> *,1> m_iter;
};


struct IEnumSTATSTGVtbl
{
  int (__stdcall *QueryInterface)(IEnumSTATSTG *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IEnumSTATSTG *);
  unsigned int (__stdcall *Release)(IEnumSTATSTG *);
  int (__stdcall *Next)(IEnumSTATSTG *, unsigned int, tagSTATSTG *, unsigned int *);
  int (__stdcall *Skip)(IEnumSTATSTG *, unsigned int);
  int (__stdcall *Reset)(IEnumSTATSTG *);
  int (__stdcall *Clone)(IEnumSTATSTG *, IEnumSTATSTG **);
};


struct IStreamVtbl
{
  int (__stdcall *QueryInterface)(IStream *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IStream *);
  unsigned int (__stdcall *Release)(IStream *);
  int (__stdcall *Read)(IStream *, void *, unsigned int, unsigned int *);
  int (__stdcall *Write)(IStream *, const void *, unsigned int, unsigned int *);
  int (__stdcall *Seek)(IStream *, _LARGE_INTEGER, unsigned int, _ULARGE_INTEGER *);
  int (__stdcall *SetSize)(IStream *, _ULARGE_INTEGER);
  int (__stdcall *CopyTo)(IStream *, IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER *, _ULARGE_INTEGER *);
  int (__stdcall *Commit)(IStream *, unsigned int);
  int (__stdcall *Revert)(IStream *);
  int (__stdcall *LockRegion)(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER, unsigned int);
  int (__stdcall *UnlockRegion)(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER, unsigned int);
  int (__stdcall *Stat)(IStream *, tagSTATSTG *, unsigned int);
  int (__stdcall *Clone)(IStream *, IStream **);
};


struct IOleUILinkInfoW
{
  IOleUILinkInfoWVtbl *lpVtbl;
};


struct IOleUILinkInfoWVtbl
{
  int (__stdcall *QueryInterface)(IOleUILinkInfoW *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IOleUILinkInfoW *);
  unsigned int (__stdcall *Release)(IOleUILinkInfoW *);
  unsigned int (__stdcall *GetNextLink)(IOleUILinkInfoW *, unsigned int);
  int (__stdcall *SetLinkUpdateOptions)(IOleUILinkInfoW *, unsigned int, unsigned int);
  int (__stdcall *GetLinkUpdateOptions)(IOleUILinkInfoW *, unsigned int, unsigned int *);
  int (__stdcall *SetLinkSource)(IOleUILinkInfoW *, unsigned int, unsigned __int16 *, unsigned int, unsigned int *, int);
  int (__stdcall *GetLinkSource)(IOleUILinkInfoW *, unsigned int, unsigned __int16 **, unsigned int *, unsigned __int16 **, unsigned __int16 **, int *, int *);
  int (__stdcall *OpenLinkSource)(IOleUILinkInfoW *, unsigned int);
  int (__stdcall *UpdateLink)(IOleUILinkInfoW *, unsigned int, int, int);
  int (__stdcall *CancelLink)(IOleUILinkInfoW *, unsigned int);
  int (__stdcall *GetLastUpdate)(IOleUILinkInfoW *, unsigned int, _FILETIME *);
};


struct __unaligned __declspec(align(1)) _SHITEMID
{
  unsigned __int16 cb;
  char abID[1];
};


struct _ITEMIDLIST
{
  _SHITEMID mkid;
};


struct _SecHandle
{
  unsigned int dwLower;
  unsigned int dwUpper;
};


struct _SecBuffer
{
  unsigned int cbBuffer;
  unsigned int BufferType;
  void *pvBuffer;
};


struct _SecBufferDesc
{
  unsigned int ulVersion;
  unsigned int cBuffers;
  _SecBuffer *pBuffers;
};


struct _SecPkgInfoW
{
  unsigned int fCapabilities;
  unsigned __int16 wVersion;
  unsigned __int16 wRPCID;
  unsigned int cbMaxToken;
  unsigned __int16 *Name;
  unsigned __int16 *Comment;
};


struct tagOLEUIPASTEENTRYW
{
  tagFORMATETC fmtetc;
  const unsigned __int16 *lpstrFormatName;
  const unsigned __int16 *lpstrResultText;
  unsigned int dwFlags;
  unsigned int dwScratchSpace;
};


struct tagOLEUIPASTESPECIALW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  HWND__ *hWndOwner;
  const unsigned __int16 *lpszCaption;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpszTemplate;
  HRSRC__ *hResource;
  IDataObject *lpSrcDataObj;
  tagOLEUIPASTEENTRYW *arrPasteEntries;
  int cPasteEntries;
  unsigned int *arrLinkTypes;
  int cLinkTypes;
  unsigned int cClsidExclude;
  _GUID *lpClsidExclude;
  int nSelectedIndex;
  int fLink;
  void *hMetaPict;
  tagSIZE sizel;
};


struct IOleUILinkContainerW
{
  IOleUILinkContainerWVtbl *lpVtbl;
};


struct IOleUILinkContainerWVtbl
{
  int (__stdcall *QueryInterface)(IOleUILinkContainerW *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IOleUILinkContainerW *);
  unsigned int (__stdcall *Release)(IOleUILinkContainerW *);
  unsigned int (__stdcall *GetNextLink)(IOleUILinkContainerW *, unsigned int);
  int (__stdcall *SetLinkUpdateOptions)(IOleUILinkContainerW *, unsigned int, unsigned int);
  int (__stdcall *GetLinkUpdateOptions)(IOleUILinkContainerW *, unsigned int, unsigned int *);
  int (__stdcall *SetLinkSource)(IOleUILinkContainerW *, unsigned int, unsigned __int16 *, unsigned int, unsigned int *, int);
  int (__stdcall *GetLinkSource)(IOleUILinkContainerW *, unsigned int, unsigned __int16 **, unsigned int *, unsigned __int16 **, unsigned __int16 **, int *, int *);
  int (__stdcall *OpenLinkSource)(IOleUILinkContainerW *, unsigned int);
  int (__stdcall *UpdateLink)(IOleUILinkContainerW *, unsigned int, int, int);
  int (__stdcall *CancelLink)(IOleUILinkContainerW *, unsigned int);
};


struct tagOLEUICHANGESOURCEW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  HWND__ *hWndOwner;
  const unsigned __int16 *lpszCaption;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpszTemplate;
  HRSRC__ *hResource;
  tagOFNW *lpOFN;
  unsigned int dwReserved1[4];
  IOleUILinkContainerW *lpOleUILinkContainer;
  unsigned int dwLink;
  unsigned __int16 *lpszDisplayName;
  unsigned int nFileLength;
  unsigned __int16 *lpszFrom;
  unsigned __int16 *lpszTo;
};


struct tagRASDIALPARAMSW
{
  unsigned int dwSize;
  unsigned __int16 szEntryName[257];
  unsigned __int16 szPhoneNumber[129];
  unsigned __int16 szCallbackNumber[129];
  unsigned __int16 szUserName[257];
  unsigned __int16 szPassword[257];
  unsigned __int16 szDomain[16];
  unsigned int dwSubEntry;
  unsigned int dwCallbackId;
};


struct _browseinfoW
{
  HWND__ *hwndOwner;
  _ITEMIDLIST *pidlRoot;
  unsigned __int16 *pszDisplayName;
  const unsigned __int16 *lpszTitle;
  unsigned int ulFlags;
  int (__stdcall *lpfn)(HWND__ *, unsigned int, int, int);
  int lParam;
  int iImage;
};


struct tagOLEUICONVERTW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  HWND__ *hWndOwner;
  const unsigned __int16 *lpszCaption;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpszTemplate;
  HRSRC__ *hResource;
  _GUID clsid;
  _GUID clsidConvertDefault;
  _GUID clsidActivateDefault;
  _GUID clsidNew;
  unsigned int dvAspect;
  unsigned __int16 wFormat;
  int fIsLinkedObject;
  void *hMetaPict;
  unsigned __int16 *lpszUserType;
  int fObjectsIconChanged;
  unsigned __int16 *lpszDefLabel;
  unsigned int cClsidExclude;
  _GUID *lpClsidExclude;
};


struct RASIPADDR
{
  char a;
  char b;
  char c;
  char d;
};


struct tagRASENTRYW
{
  unsigned int dwSize;
  unsigned int dwfOptions;
  unsigned int dwCountryID;
  unsigned int dwCountryCode;
  unsigned __int16 szAreaCode[11];
  unsigned __int16 szLocalPhoneNumber[129];
  unsigned int dwAlternateOffset;
  RASIPADDR ipaddr;
  RASIPADDR ipaddrDns;
  RASIPADDR ipaddrDnsAlt;
  RASIPADDR ipaddrWins;
  RASIPADDR ipaddrWinsAlt;
  unsigned int dwFrameSize;
  unsigned int dwfNetProtocols;
  unsigned int dwFramingProtocol;
  unsigned __int16 szScript[260];
  unsigned __int16 szAutodialDll[260];
  unsigned __int16 szAutodialFunc[260];
  unsigned __int16 szDeviceType[17];
  unsigned __int16 szDeviceName[129];
  unsigned __int16 szX25PadType[33];
  unsigned __int16 szX25Address[201];
  unsigned __int16 szX25Facilities[201];
  unsigned __int16 szX25UserData[201];
  unsigned int dwChannels;
  unsigned int dwReserved1;
  unsigned int dwReserved2;
  unsigned int dwSubEntries;
  unsigned int dwDialMode;
  unsigned int dwDialExtraPercent;
  unsigned int dwDialExtraSampleSeconds;
  unsigned int dwHangUpExtraPercent;
  unsigned int dwHangUpExtraSampleSeconds;
  unsigned int dwIdleDisconnectSeconds;
  unsigned int dwType;
  unsigned int dwEncryptionType;
  unsigned int dwCustomAuthKey;
  _GUID guidId;
  unsigned __int16 szCustomDialDll[260];
  unsigned int dwVpnStrategy;
  unsigned int dwfOptions2;
  unsigned int dwfOptions3;
  unsigned __int16 szDnsSuffix[256];
  unsigned int dwTcpWindowSize;
  unsigned __int16 szPrerequisitePbk[260];
  unsigned __int16 szPrerequisiteEntry[257];
  unsigned int dwRedialCount;
  unsigned int dwRedialPause;
};


struct IOleUIObjInfoW
{
  IOleUIObjInfoWVtbl *lpVtbl;
};


struct IOleUIObjInfoWVtbl
{
  int (__stdcall *QueryInterface)(IOleUIObjInfoW *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IOleUIObjInfoW *);
  unsigned int (__stdcall *Release)(IOleUIObjInfoW *);
  int (__stdcall *GetObjectInfo)(IOleUIObjInfoW *, unsigned int, unsigned int *, unsigned __int16 **, unsigned __int16 **, unsigned __int16 **, unsigned __int16 **);
  int (__stdcall *GetConvertInfo)(IOleUIObjInfoW *, unsigned int, _GUID *, unsigned __int16 *, _GUID *, _GUID **, unsigned int *);
  int (__stdcall *ConvertObject)(IOleUIObjInfoW *, unsigned int, _GUID *const );
  int (__stdcall *GetViewInfo)(IOleUIObjInfoW *, unsigned int, void **, unsigned int *, int *);
  int (__stdcall *SetViewInfo)(IOleUIObjInfoW *, unsigned int, void *, unsigned int, int, int);
};


struct tagOLEUIGNRLPROPSW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  unsigned int dwReserved1[2];
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  unsigned int dwReserved2[3];
  tagOLEUIOBJECTPROPSW *lpOP;
};


struct tagOLEUIOBJECTPROPSW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  _PROPSHEETHEADERW *lpPS;
  unsigned int dwObject;
  IOleUIObjInfoW *lpObjInfo;
  unsigned int dwLink;
  IOleUILinkInfoW *lpLinkInfo;
  tagOLEUIGNRLPROPSW *lpGP;
  tagOLEUIVIEWPROPSW *lpVP;
  tagOLEUILINKPROPSW *lpLP;
};


struct tagOLEUIVIEWPROPSW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  unsigned int dwReserved1[2];
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  unsigned int dwReserved2[3];
  tagOLEUIOBJECTPROPSW *lpOP;
  int nScaleMin;
  int nScaleMax;
};


struct tagOLEUILINKPROPSW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  unsigned int dwReserved1[2];
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  unsigned int dwReserved2[3];
  tagOLEUIOBJECTPROPSW *lpOP;
};


struct IStorageVtbl
{
  int (__stdcall *QueryInterface)(IStorage *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IStorage *);
  unsigned int (__stdcall *Release)(IStorage *);
  int (__stdcall *CreateStream)(IStorage *, const unsigned __int16 *, unsigned int, unsigned int, unsigned int, IStream **);
  int (__stdcall *OpenStream)(IStorage *, const unsigned __int16 *, void *, unsigned int, unsigned int, IStream **);
  int (__stdcall *CreateStorage)(IStorage *, const unsigned __int16 *, unsigned int, unsigned int, unsigned int, IStorage **);
  int (__stdcall *OpenStorage)(IStorage *, const unsigned __int16 *, IStorage *, unsigned int, unsigned __int16 **, unsigned int, IStorage **);
  int (__stdcall *CopyTo)(IStorage *, unsigned int, _GUID *, unsigned __int16 **, IStorage *);
  int (__stdcall *MoveElementTo)(IStorage *, const unsigned __int16 *, IStorage *, const unsigned __int16 *, unsigned int);
  int (__stdcall *Commit)(IStorage *, unsigned int);
  int (__stdcall *Revert)(IStorage *);
  int (__stdcall *EnumElements)(IStorage *, unsigned int, void *, unsigned int, IEnumSTATSTG **);
  int (__stdcall *DestroyElement)(IStorage *, const unsigned __int16 *);
  int (__stdcall *RenameElement)(IStorage *, const unsigned __int16 *, const unsigned __int16 *);
  int (__stdcall *SetElementTimes)(IStorage *, const unsigned __int16 *, _FILETIME *, _FILETIME *, _FILETIME *);
  int (__stdcall *SetClass)(IStorage *, _GUID *const );
  int (__stdcall *SetStateBits)(IStorage *, unsigned int, unsigned int);
  int (__stdcall *Stat)(IStorage *, tagSTATSTG *, unsigned int);
};


struct HRASCONN__
{
  int unused;
};


struct tagRASCONNW
{
  unsigned int dwSize;
  HRASCONN__ *hrasconn;
  unsigned __int16 szEntryName[257];
  unsigned __int16 szDeviceType[17];
  unsigned __int16 szDeviceName[129];
  unsigned __int16 szPhonebook[260];
  unsigned int dwSubEntry;
  _GUID guidEntry;
  unsigned int dwFlags;
  _LUID luid;
};


struct _SECURITY_FUNCTION_TABLE_W
{
  unsigned int dwVersion;
  int (__stdcall *EnumerateSecurityPackagesW)(unsigned int *, _SecPkgInfoW **);
  int (__stdcall *QueryCredentialsAttributesW)(_SecHandle *, unsigned int, void *);
  int (__stdcall *AcquireCredentialsHandleW)(unsigned __int16 *, unsigned __int16 *, unsigned int, void *, void *, void (__stdcall *)(void *, void *, unsigned int, void **, int *), void *, _SecHandle *, _LARGE_INTEGER *);
  int (__stdcall *FreeCredentialsHandle)(_SecHandle *);
  void *Reserved2;
  int (__stdcall *InitializeSecurityContextW)(_SecHandle *, _SecHandle *, unsigned __int16 *, unsigned int, unsigned int, unsigned int, _SecBufferDesc *, unsigned int, _SecHandle *, _SecBufferDesc *, unsigned int *, _LARGE_INTEGER *);
  int (__stdcall *AcceptSecurityContext)(_SecHandle *, _SecHandle *, _SecBufferDesc *, unsigned int, unsigned int, _SecHandle *, _SecBufferDesc *, unsigned int *, _LARGE_INTEGER *);
  int (__stdcall *CompleteAuthToken)(_SecHandle *, _SecBufferDesc *);
  int (__stdcall *DeleteSecurityContext)(_SecHandle *);
  int (__stdcall *ApplyControlToken)(_SecHandle *, _SecBufferDesc *);
  int (__stdcall *QueryContextAttributesW)(_SecHandle *, unsigned int, void *);
  int (__stdcall *ImpersonateSecurityContext)(_SecHandle *);
  int (__stdcall *RevertSecurityContext)(_SecHandle *);
  int (__stdcall *MakeSignature)(_SecHandle *, unsigned int, _SecBufferDesc *, unsigned int);
  int (__stdcall *VerifySignature)(_SecHandle *, _SecBufferDesc *, unsigned int, unsigned int *);
  int (__stdcall *FreeContextBuffer)(void *);
  int (__stdcall *QuerySecurityPackageInfoW)(unsigned __int16 *, _SecPkgInfoW **);
  void *Reserved3;
  void *Reserved4;
  int (__stdcall *ExportSecurityContext)(_SecHandle *, unsigned int, _SecBuffer *, void **);
  int (__stdcall *ImportSecurityContextW)(unsigned __int16 *, _SecBuffer *, void *, _SecHandle *);
  int (__stdcall *AddCredentialsW)(_SecHandle *, unsigned __int16 *, unsigned __int16 *, unsigned int, void *, void (__stdcall *)(void *, void *, unsigned int, void **, int *), void *, _LARGE_INTEGER *);
  void *Reserved8;
  int (__stdcall *QuerySecurityContextToken)(_SecHandle *, void **);
  int (__stdcall *EncryptMessage)(_SecHandle *, unsigned int, _SecBufferDesc *, unsigned int);
  int (__stdcall *DecryptMessage)(_SecHandle *, _SecBufferDesc *, unsigned int, unsigned int *);
  int (__stdcall *SetContextAttributesW)(_SecHandle *, unsigned int, void *, unsigned int);
};


struct tagOLEUIINSERTOBJECTW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  HWND__ *hWndOwner;
  const unsigned __int16 *lpszCaption;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpszTemplate;
  HRSRC__ *hResource;
  _GUID clsid;
  unsigned __int16 *lpszFile;
  unsigned int cchFile;
  unsigned int cClsidExclude;
  _GUID *lpClsidExclude;
  _GUID iid;
  unsigned int oleRender;
  tagFORMATETC *lpFormatEtc;
  IOleClientSite *lpIOleClientSite;
  IStorage *lpIStorage;
  void **ppvObj;
  int sc;
  void *hMetaPict;
};


struct tagOLEUIEDITLINKSW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  HWND__ *hWndOwner;
  const unsigned __int16 *lpszCaption;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpszTemplate;
  HRSRC__ *hResource;
  IOleUILinkContainerW *lpOleUILinkContainer;
};


struct ICDECOMPRESSEX
{
  unsigned int dwFlags;
  tagBITMAPINFOHEADER *lpbiSrc;
  void *lpSrc;
  tagBITMAPINFOHEADER *lpbiDst;
  void *lpDst;
  int xDst;
  int yDst;
  int dxDst;
  int dyDst;
  int xSrc;
  int ySrc;
  int dxSrc;
  int dySrc;
};


struct tagRASEAPINFO
{
  unsigned int dwSizeofEapInfo;
  char *pbEapInfo;
};


struct tagOLEUIBUSYW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  HWND__ *hWndOwner;
  const unsigned __int16 *lpszCaption;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpszTemplate;
  HRSRC__ *hResource;
  HTASK__ *hTask;
  HWND__ **lphWndDialog;
};


struct ICSETSTATUSPROC
{
  unsigned int dwFlags;
  int lParam;
  int (__stdcall *Status)(int, unsigned int, int);
};


struct tagQOCINFO
{
  unsigned int dwSize;
  unsigned int dwFlags;
  unsigned int dwInSpeed;
  unsigned int dwOutSpeed;
};


struct tagRASDIALEXTENSIONS
{
  unsigned int dwSize;
  unsigned int dwfOptions;
  HWND__ *hwndParent;
  unsigned int reserved;
  unsigned int reserved1;
  tagRASEAPINFO RasEapInfo;
};


struct HIC__
{
  int unused;
};


struct __declspec(align(4)) tagHW_PROFILE_INFOW
{
  unsigned int dwDockInfo;
  unsigned __int16 szHwProfileGuid[39];
  unsigned __int16 szHwProfileName[80];
};


struct ICDRAWSUGGEST
{
  tagBITMAPINFOHEADER *lpbiIn;
  tagBITMAPINFOHEADER *lpbiSuggest;
  int dxSrc;
  int dySrc;
  int dxDst;
  int dyDst;
  HIC__ *hicDecompressor;
};


struct tagRASSUBENTRYW
{
  unsigned int dwSize;
  unsigned int dwfFlags;
  unsigned __int16 szDeviceType[17];
  unsigned __int16 szDeviceName[129];
  unsigned __int16 szLocalPhoneNumber[129];
  unsigned int dwAlternateOffset;
};


struct tagOLEUICHANGEICONW
{
  unsigned int cbStruct;
  unsigned int dwFlags;
  HWND__ *hWndOwner;
  const unsigned __int16 *lpszCaption;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  int lCustData;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpszTemplate;
  HRSRC__ *hResource;
  void *hMetaPict;
  _GUID clsid;
  unsigned __int16 szIconExe[260];
  int cchIconExe;
};


struct __declspec(align(4)) tagRASENTRYNAMEW
{
  unsigned int dwSize;
  unsigned __int16 szEntryName[257];
  unsigned int dwFlags;
  unsigned __int16 szPhonebookPath[261];
};


struct tagRASDEVINFOW
{
  unsigned int dwSize;
  unsigned __int16 szDeviceType[17];
  unsigned __int16 szDeviceName[129];
};


struct __declspec(align(4)) tagRASCONNSTATUSW
{
  unsigned int dwSize;
  tagRASCONNSTATE rasconnstate;
  unsigned int dwError;
  unsigned __int16 szDeviceType[17];
  unsigned __int16 szDeviceName[129];
  unsigned __int16 szPhoneNumber[129];
};


struct DLLMap
{
  const char *szDLLName;
  HINSTANCE__ *hMod;
};


struct _UNICODE_STRING
{
  unsigned __int16 Length;
  unsigned __int16 MaximumLength;
  unsigned __int16 *Buffer;
};


struct _DIOBJECTDATAFORMAT
{
  _GUID *pguid;
  unsigned int dwOfs;
  unsigned int dwType;
  unsigned int dwFlags;
};


struct _DIDATAFORMAT
{
  unsigned int dwSize;
  unsigned int dwObjSize;
  unsigned int dwFlags;
  unsigned int dwDataSize;
  unsigned int dwNumObjs;
  _DIOBJECTDATAFORMAT *rgodf;
};


struct DIEFFESCAPE
{
  unsigned int dwSize;
  unsigned int dwCommand;
  void *lpvInBuffer;
  unsigned int cbInBuffer;
  void *lpvOutBuffer;
  unsigned int cbOutBuffer;
};


struct DIENVELOPE
{
  unsigned int dwSize;
  unsigned int dwAttackLevel;
  unsigned int dwAttackTime;
  unsigned int dwFadeLevel;
  unsigned int dwFadeTime;
};


struct DIEFFECT
{
  unsigned int dwSize;
  unsigned int dwFlags;
  unsigned int dwDuration;
  unsigned int dwSamplePeriod;
  unsigned int dwGain;
  unsigned int dwTriggerButton;
  unsigned int dwTriggerRepeatInterval;
  unsigned int cAxes;
  unsigned int *rgdwAxes;
  int *rglDirection;
  DIENVELOPE *lpEnvelope;
  unsigned int cbTypeSpecificParams;
  void *lpvTypeSpecificParams;
  unsigned int dwStartDelay;
};


struct SHEPHANDLE
{
  unsigned int dwEffect;
  unsigned int dwTag;
};


struct IDirectInputEffectShepherdVtbl
{
  HRESULT (__stdcall *QueryInterface)(IDirectInputEffectShepherd *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IDirectInputEffectShepherd *);
  unsigned int (__stdcall *Release)(IDirectInputEffectShepherd *);
  HRESULT (__stdcall *DeviceID)(IDirectInputEffectShepherd *, unsigned int, unsigned int, void *);
  HRESULT (__stdcall *GetVersions)(IDirectInputEffectShepherd *, DIDRIVERVERSIONS *);
  HRESULT (__stdcall *Escape)(IDirectInputEffectShepherd *, SHEPHANDLE *, DIEFFESCAPE *);
  HRESULT (__stdcall *DeviceEscape)(IDirectInputEffectShepherd *, SHEPHANDLE *, DIEFFESCAPE *);
  HRESULT (__stdcall *SetGain)(IDirectInputEffectShepherd *, SHEPHANDLE *, unsigned int);
  HRESULT (__stdcall *SendForceFeedbackCommand)(IDirectInputEffectShepherd *, SHEPHANDLE *, unsigned int);
  HRESULT (__stdcall *GetForceFeedbackState)(IDirectInputEffectShepherd *, SHEPHANDLE *, DIDEVICESTATE *);
  HRESULT (__stdcall *DownloadEffect)(IDirectInputEffectShepherd *, unsigned int, SHEPHANDLE *, DIEFFECT *, unsigned int);
  HRESULT (__stdcall *DestroyEffect)(IDirectInputEffectShepherd *, SHEPHANDLE *);
  HRESULT (__stdcall *StartEffect)(IDirectInputEffectShepherd *, SHEPHANDLE *, unsigned int, unsigned int);
  HRESULT (__stdcall *StopEffect)(IDirectInputEffectShepherd *, SHEPHANDLE *);
  HRESULT (__stdcall *GetEffectStatus)(IDirectInputEffectShepherd *, SHEPHANDLE *, unsigned int *);
  HRESULT (__stdcall *SetGlobalGain)(IDirectInputEffectShepherd *, unsigned int);
};


struct IDirectInputEffectShepherd
{
  IDirectInputEffectShepherdVtbl *lpVtbl;
};


struct DIDRIVERVERSIONS
{
  unsigned int dwSize;
  unsigned int dwFirmwareRevision;
  unsigned int dwHardwareRevision;
  unsigned int dwFFDriverVersion;
};


struct DIDEVICESTATE
{
  unsigned int dwSize;
  unsigned int dwState;
  unsigned int dwLoad;
};


struct DIDEVICEOBJECTINSTANCEW
{
  unsigned int dwSize;
  _GUID guidType;
  unsigned int dwOfs;
  unsigned int dwType;
  unsigned int dwFlags;
  unsigned __int16 tszName[260];
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


struct DIPROPINFO
{
  _GUID *pguid;
  unsigned int iobj;
  unsigned int dwDevType;
};


struct DIPROPHEADER
{
  unsigned int dwSize;
  unsigned int dwHeaderSize;
  unsigned int dwObj;
  unsigned int dwHow;
};


struct DIDEVCAPS
{
  unsigned int dwSize;
  unsigned int dwFlags;
  unsigned int dwDevType;
  unsigned int dwAxes;
  unsigned int dwButtons;
  unsigned int dwPOVs;
  unsigned int dwFFSamplePeriod;
  unsigned int dwFFMinTimeResolution;
  unsigned int dwFirmwareRevision;
  unsigned int dwHardwareRevision;
  unsigned int dwFFDriverVersion;
};


union $983DBE8ABC3C6C5332AC355A10D6978F
{
  unsigned int RawValue;
  char On;
};


struct _HIDP_DATA
{
  unsigned __int16 DataIndex;
  unsigned __int16 Reserved;
  $983DBE8ABC3C6C5332AC355A10D6978F ___u2;
};


struct DIDEVICEINSTANCEW
{
  unsigned int dwSize;
  _GUID guidInstance;
  _GUID guidProduct;
  unsigned int dwDevType;
  unsigned __int16 tszInstanceName[260];
  unsigned __int16 tszProductName[260];
  _GUID guidFFDriver;
  unsigned __int16 wUsagePage;
  unsigned __int16 wUsage;
};


struct JOYRAMP
{
  int x;
  int y;
  unsigned int dx;
  int dy;
};


struct LMINMAX
{
  int Min;
  int Max;
};


struct DIDEVICEOBJECTDATA
{
  unsigned int dwOfs;
  unsigned int dwData;
  unsigned int dwTimeStamp;
  unsigned int dwSequence;
  unsigned int uAppData;
};


struct VXDINSTANCE
{
  unsigned int fl;
  void *pState;
  DIDEVICEOBJECTDATA *pBuffer;
  DIDEVICEOBJECTDATA *pEnd;
  DIDEVICEOBJECTDATA *pHead;
  DIDEVICEOBJECTDATA *pTail;
  unsigned int fOverflow;
  struct CDIDev *pdd;
  HWND__ *hwnd;
};


struct CEm
{
  VXDINSTANCE vi;
  CEm *pemNext;
  unsigned int *rgdwDf;
  unsigned int dwExtra;
  CEd *ped;
  int cAcquire;
  int cRef;
  int fWorkerThread;
  int fHidden;
};


struct CEd
{
  void *const pState;
  unsigned int *const pDevType;
  HRESULT (__stdcall *Acquire)(CEm *, int);
  int cAcquire;
  unsigned int cbData;
  unsigned int cRef;
};


struct HIDGROUPCAPS
{
  _HIDP_REPORT_TYPE type;
  unsigned int cObj;
  unsigned __int16 UsagePage;
  unsigned __int16 UsageMin;
  unsigned __int16 StringMin;
  unsigned __int16 StringMax;
  unsigned __int16 DesignatorMin;
  unsigned __int16 DesignatorMax;
  unsigned __int16 DataIndexMin;
  unsigned __int16 usGranularity;
  int lMask;
  unsigned __int16 BitSize;
  unsigned __int16 LinkCollection;
  LMINMAX Logical;
  LMINMAX Physical;
  int Null;
  unsigned int Units;
  unsigned __int16 Exponent;
  unsigned __int16 wReportId;
  int fReportDisabled;
  int Reserved;
  int IsAbsolute;
  int IsValue;
  int IsAlias;
  int IsSigned;
  int IsPolledPOV;
};


struct HIDREPORTINFO
{
  _HIDP_DATA *rgdata;
  void *pvReport;
  int cdataMax;
  int cdataUsed;
  unsigned int cbReport;
  int fNeedClear;
  int fChanged;
};


struct _DIAPPHACKS
{
  int fReacquire;
  int fNoSubClass;
  int fNativeAxisOnly;
  int fNoPollUnacquire;
  int fSucceedAcquire;
  int nMaxDeviceNameLength;
  unsigned int dwDevType;
};


struct JOYRANGECONVERT
{
  int fRaw;
  JOYRAMP rmpLow;
  JOYRAMP rmpHigh;
  unsigned int dwPmin;
  unsigned int dwPmax;
  unsigned int dwPc;
  int lMin;
  int lMax;
  int lC;
  unsigned int dwDz;
  unsigned int dwSat;
  int fFakeRaw;
  int fPolledPOV;
  int lMinPOV[5];
  int lMaxPOV[5];
};


struct HIDOBJCAPS
{
  HIDGROUPCAPS *pcaps;
  JOYRANGECONVERT *pjrc;
  int idata;
};


struct IDirectInputDeviceCallback
{
  IDirectInputDeviceCallbackVtbl *lpVtbl;
};


struct IDirectInputDeviceCallbackVtbl
{
  HRESULT (__stdcall *QueryInterface)(IDirectInputDeviceCallback *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IDirectInputDeviceCallback *);
  unsigned int (__stdcall *Release)(IDirectInputDeviceCallback *);
  HRESULT (__stdcall *GetInstance)(IDirectInputDeviceCallback *, void **);
  HRESULT (__stdcall *GetVersions)(IDirectInputDeviceCallback *, DIDRIVERVERSIONS *);
  HRESULT (__stdcall *GetDataFormat)(IDirectInputDeviceCallback *, _DIDATAFORMAT **);
  HRESULT (__stdcall *GetObjectInfo)(IDirectInputDeviceCallback *, DIPROPINFO *, DIDEVICEOBJECTINSTANCEW *);
  HRESULT (__stdcall *GetCapabilities)(IDirectInputDeviceCallback *, DIDEVCAPS *);
  HRESULT (__stdcall *Acquire)(IDirectInputDeviceCallback *);
  HRESULT (__stdcall *Unacquire)(IDirectInputDeviceCallback *);
  HRESULT (__stdcall *GetDeviceState)(IDirectInputDeviceCallback *, void *);
  HRESULT (__stdcall *GetDeviceInfo)(IDirectInputDeviceCallback *, DIDEVICEINSTANCEW *);
  HRESULT (__stdcall *GetProperty)(IDirectInputDeviceCallback *, DIPROPINFO *, DIPROPHEADER *);
  HRESULT (__stdcall *SetProperty)(IDirectInputDeviceCallback *, DIPROPINFO *, DIPROPHEADER *);
  HRESULT (__stdcall *SetEventNotification)(IDirectInputDeviceCallback *, void *);
  HRESULT (__stdcall *SetCooperativeLevel)(IDirectInputDeviceCallback *, HWND__ *, unsigned int);
  HRESULT (__stdcall *RunControlPanel)(IDirectInputDeviceCallback *, HWND__ *, unsigned int);
  HRESULT (__stdcall *CookDeviceData)(IDirectInputDeviceCallback *, unsigned int, DIDEVICEOBJECTDATA *);
  HRESULT (__stdcall *CreateEffect)(IDirectInputDeviceCallback *, IDirectInputEffectShepherd **);
  HRESULT (__stdcall *GetFFConfigKey)(IDirectInputDeviceCallback *, unsigned int, HKEY__ **);
  HRESULT (__stdcall *SendDeviceData)(IDirectInputDeviceCallback *, DIDEVICEOBJECTDATA *, unsigned int *, unsigned int);
  HRESULT (__stdcall *Poll)(IDirectInputDeviceCallback *);
  unsigned int (__stdcall *GetUsage)(IDirectInputDeviceCallback *, int);
  HRESULT (__stdcall *MapUsage)(IDirectInputDeviceCallback *, unsigned int, int *);
  HRESULT (__stdcall *SetDIData)(IDirectInputDeviceCallback *, unsigned int, void *);
};


struct _HIDP_CAPS
{
  unsigned __int16 Usage;
  unsigned __int16 UsagePage;
  unsigned __int16 InputReportByteLength;
  unsigned __int16 OutputReportByteLength;
  unsigned __int16 FeatureReportByteLength;
  unsigned __int16 Reserved[17];
  unsigned __int16 NumberLinkCollectionNodes;
  unsigned __int16 NumberInputButtonCaps;
  unsigned __int16 NumberInputValueCaps;
  unsigned __int16 NumberInputDataIndices;
  unsigned __int16 NumberOutputButtonCaps;
  unsigned __int16 NumberOutputValueCaps;
  unsigned __int16 NumberOutputDataIndices;
  unsigned __int16 NumberFeatureButtonCaps;
  unsigned __int16 NumberFeatureValueCaps;
  unsigned __int16 NumberFeatureDataIndices;
};


union $188C3972C44D0F3C154D65F555EC009A
{
  void *pvGroup2;
  HIDREPORTINFO hriIn;
};


struct CHid
{
  IDirectInputDeviceCallback dcb;
  $188C3972C44D0F3C154D65F555EC009A ___u1;
  HIDREPORTINFO hriOut;
  HIDREPORTINFO hriFea;
  void *pvPhys;
  void *pvStage;
  unsigned int cbPhys;
  VXDINSTANCE *pvi;
  unsigned int dwDevType;
  unsigned int dwAxes;
  unsigned int dwButtons;
  unsigned int dwPOVs;
  unsigned int dwCollections;
  void *hdev;
  void *hdevEm;
  unsigned int rgdwBase[4];
  HIDOBJCAPS *rghoc;
  _DIDATAFORMAT df;
  unsigned int ibButtonData;
  unsigned int cbButtonData;
  char **rgpbButtonMasks;
  _HIDP_PREPARSED_DATA *ppd;
  HIDGROUPCAPS *rgcaps;
  JOYRANGECONVERT *pjrcNext;
  _HIDP_CAPS caps;
  CEd ed;
  _OVERLAPPED o;
  unsigned int dwStartRead;
  unsigned int dwStopRead;
  int *rgiobj;
  int *rgipov;
  int *rgiaxis;
  int *rgicoll;
  unsigned int uiInstanceMax;
  char *ptszId;
  char *ptszPath;
  HKEY__ *hkInstType;
  unsigned int ccaps;
  int idJoy;
  HKEY__ *hkType;
  unsigned __int16 VendorID;
  unsigned __int16 ProductID;
  HWND__ *hwnd;
  int IsPolledInput;
  int fPIDdevice;
  unsigned __int16 wMaxReportId[3];
  char *pEnableReportId[3];
  unsigned int dwVersion;
  _DIAPPHACKS diHacks;
  int fEnableInputReport;
  int fFlags2Checked;
};


struct D3DXPlane
{
  float a;
  float b;
  float cc;
  float d;
};


struct D3DXMatrix
{
  float _11;
  float _12;
  float _13;
  float _14;
  float _21;
  float _22;
  float _23;
  float _24;
  float _31;
  float _32;
  float _33;
  float _34;
  float _41;
  float _42;
  float _43;
  float _44;
};


struct localVar0
{
  unsigned int l_ebp;
  unsigned int l_esi;
  unsigned int l_edi;
};


struct Param0
{
  localVar0 loc;
  unsigned int retAddr;
  unsigned int pOut;
  unsigned int OutStride;
  unsigned int pV;
  unsigned int VStride;
  unsigned int pM;
  unsigned int n;
};


struct SSE4xMatrix
{
  float _11;
  __declspec(align(16)) float _12;
  __declspec(align(16)) float _13;
  __declspec(align(16)) float _14;
  __declspec(align(16)) float _21;
  __declspec(align(16)) float _22;
  __declspec(align(16)) float _23;
  __declspec(align(16)) float _24;
  __declspec(align(16)) float _31;
  __declspec(align(16)) float _32;
  __declspec(align(16)) float _33;
  __declspec(align(16)) float _34;
  __declspec(align(16)) float _41;
  __declspec(align(16)) float _42;
  __declspec(align(16)) float _43;
  __declspec(align(16)) float _44;
};


struct D3DXVector2
{
  float x;
  float y;
};


struct D3DXVector3
{
  float x;
  float y;
  float z;
};


struct D3DXVector4
{
  float x;
  float y;
  float z;
  float w;
};


struct __unaligned __declspec(align(4)) localVar1
{
  __int64 l_absXY;
  __int64 l_absZW;
  unsigned int l_ebp;
  unsigned int l_esi;
  unsigned int l_edi;
};


struct Param1
{
  localVar1 loc;
  _BYTE gap1C[240];
  unsigned int retAddr;
  unsigned int pOut;
  unsigned int OutStride;
  unsigned int pV;
  unsigned int VStride;
  unsigned int pM;
  unsigned int n;
};


struct __unaligned __declspec(align(4)) localVar2
{
  SSE4xMatrix l_Matrix;
  unsigned int l_ebp;
  unsigned int l_esi;
  unsigned int l_edi;
};


struct Param2
{
  localVar2 loc;
  unsigned int retAddr;
  unsigned int pOut;
  unsigned int OutStride;
  unsigned int pV;
  unsigned int VStride;
  unsigned int pM;
  unsigned int n;
};


union $3FED14670831426F78C1F126725788C0
{
  unsigned __int16 freq;
  unsigned __int16 code;
};


union $2467CA9704E0472D4CCF1296A763D23A
{
  unsigned __int16 dad;
  unsigned __int16 len;
};


struct ct_data_s
{
  $3FED14670831426F78C1F126725788C0 fc;
  $2467CA9704E0472D4CCF1296A763D23A dl;
};


struct static_tree_desc_s
{
  ct_data_s *static_tree;
  const int *extra_bits;
  int extra_base;
  int elems;
  int max_length;
};


struct tree_desc_s
{
  ct_data_s *dyn_tree;
  int max_code;
  static_tree_desc_s *stat_desc;
};


struct z_stream_s
{
  char *next_in;
  unsigned int avail_in;
  unsigned int total_in;
  char *next_out;
  unsigned int avail_out;
  unsigned int total_out;
  char *msg;
  internal_state *state;
  void *(__stdcall *zalloc)(void *, unsigned int, unsigned int);
  void (__stdcall *zfree)(void *, void *);
  void *opaque;
  int data_type;
  unsigned int adler;
  unsigned int reserved;
};


struct internal_state
{
  z_stream_s *strm;
  int status;
  char *pending_buf;
  unsigned int pending_buf_size;
  char *pending_out;
  int pending;
  int noheader;
  char data_type;
  char method;
  int last_flush;
  unsigned int w_size;
  unsigned int w_bits;
  unsigned int w_mask;
  char *window;
  unsigned int window_size;
  unsigned __int16 *prev;
  unsigned __int16 *head;
  unsigned int ins_h;
  unsigned int hash_size;
  unsigned int hash_bits;
  unsigned int hash_mask;
  unsigned int hash_shift;
  int block_start;
  unsigned int match_length;
  unsigned int prev_match;
  int match_available;
  unsigned int strstart;
  unsigned int match_start;
  unsigned int lookahead;
  unsigned int prev_length;
  unsigned int max_chain_length;
  unsigned int max_lazy_match;
  int level;
  int strategy;
  unsigned int good_match;
  int nice_match;
  ct_data_s dyn_ltree[573];
  ct_data_s dyn_dtree[61];
  ct_data_s bl_tree[39];
  tree_desc_s l_desc;
  tree_desc_s d_desc;
  tree_desc_s bl_desc;
  unsigned __int16 bl_count[16];
  int heap[573];
  int heap_len;
  int heap_max;
  char depth[573];
  char *l_buf;
  unsigned int lit_bufsize;
  unsigned int last_lit;
  unsigned __int16 *d_buf;
  unsigned int opt_len;
  unsigned int static_len;
  unsigned int matches;
  int last_eob_len;
  unsigned __int16 bi_buf;
  int bi_valid;
};


struct $C95D6283330011CC4EEF9CC74F2A7D10
{
  char Exop;
  char Bits;
};


union $DD46B18654854916F6667C4170D3FC21
{
  $C95D6283330011CC4EEF9CC74F2A7D10 what;
  unsigned int pad;
};


struct inflate_huft_s
{
  $DD46B18654854916F6667C4170D3FC21 word;
  unsigned int base;
};


struct $64966452E9939E5E7B403922B2CF0D6B
{
  unsigned int table;
  unsigned int index;
  unsigned int *blens;
  unsigned int bb;
  inflate_huft_s *tb;
};


struct inflate_codes_state
{
  int dummy;
};


struct $78E85D1F8165050DC63FDF29DB99D9BE
{
  inflate_codes_state *codes;
};


union $485C92C620300F8E55C250912C475DAC
{
  unsigned int left;
  $64966452E9939E5E7B403922B2CF0D6B trees;
  $78E85D1F8165050DC63FDF29DB99D9BE decode;
};


struct inflate_blocks_state
{
  inflate_block_mode mode;
  $485C92C620300F8E55C250912C475DAC sub;
  unsigned int last;
  unsigned int bitk;
  unsigned int bitb;
  inflate_huft_s *hufts;
  char *window;
  char *end;
  char *read;
  char *write;
  unsigned int (__stdcall *checkfn)(unsigned int, const char *, unsigned int);
  unsigned int check;
};


struct $A1AD60A7CB977A1DBF6E2660B1E40DE7
{
  unsigned int was;
  unsigned int need;
};


union $EB85EA957B26374C26561B0141BC94C4
{
  unsigned int method;
  $A1AD60A7CB977A1DBF6E2660B1E40DE7 check;
  unsigned int marker;
};


struct $C8B6C426702CC79B517A3CDBB9F23084
{
  inflate_huft_s *tree;
  unsigned int need;
};


struct $A30D36EE59FB41C132336408835C9B9C
{
  unsigned int get;
  unsigned int dist;
};


union $FC2F6E85561386E8D0B825AC3DFE3BCD
{
  $C8B6C426702CC79B517A3CDBB9F23084 code;
  unsigned int lit;
  $A30D36EE59FB41C132336408835C9B9C copy;
};


struct config_s
{
  unsigned __int16 good_length;
  unsigned __int16 max_lazy;
  unsigned __int16 nice_length;
  unsigned __int16 max_chain;
  block_state (__stdcall *func)(internal_state *, int);
};


struct RpcServer
{
  unsigned int m_dwProtocols;
  void *m_hRpcInterface;
  char *m_pszServiceName;
  int m_fInterfaceAdded;
  int m_fEpRegistered;
  int m_fServerStarted;
  _RPC_BINDING_VECTOR *m_pBindingVector;
};


struct IntrusiveSmartPointer<ReferenceCountTemplate_1048576_0 >
{
  ReferenceCountTemplate_1048576_0 *m_data;
};


struct IFileNodeNameResolver
{
};


struct SerializationBehavior<SB_TypeAlloc<IFileNodeNameResolver,SB_Default> >
{
};


struct SB_TypeAlloc<IFileNodeNameResolver,SB_Default> : SerializationBehavior<SB_TypeAlloc<IFileNodeNameResolver,SB_Default> >
{
};


struct SerializationBehavior<SB_Container<SB_Alloc<SB_DefaultAllocator,0,SB_Default>,&SB_DEFAULT_ITEM_NAME> >
{
};


struct SB_Container<SB_Alloc<SB_DefaultAllocator,0,SB_Default>,&SB_DEFAULT_ITEM_NAME> : SerializationBehavior<SB_Container<SB_Alloc<SB_DefaultAllocator,0,SB_Default>,&SB_DEFAULT_ITEM_NAME> >
{
};


struct SerializationBehavior<SB_Alloc<SB_DefaultAllocator,0,SB_Default> >
{
};


struct SB_Alloc<SB_DefaultAllocator,0,SB_Default> : SerializationBehavior<SB_Alloc<SB_DefaultAllocator,0,SB_Default> >
{
};


struct _STL__BothPtrType<PFileNode * *,PFileNode * *>
{
};


struct _STL__OKToMemCpy<PFileNode *,PFileNode *>
{
};


struct CSpinLock<1048576,0>
{
  volatile int m_Lock;
  unsigned int m_hCurThread;
  unsigned int m_nEnterCount;
};


struct GrowBuffer_FreeGrowBuffer
{
  char *pData;
  unsigned int cbSize;
};


struct GrowBuffer_GrowExact___l2_FreeListLockAllocator
{
};


struct IntrusiveHashTable<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1>
{
  IntrusiveHashTable<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1>Vtbl *vfptr;
  InArchiveVersionStack_VersionRowHolder *m_aInplaceBuckets[23];
  InArchiveVersionStack_VersionRowHolder **m_buckets;
  InArchiveVersionStack_VersionRowHolder **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1> *this, unsigned int);
};


struct IntrusiveHashData<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *>
{
  IDClass<_tagVersionHandle,32,0> m_hashKey;
  InArchiveVersionStack_VersionRowHolder *m_hashNext;
};


struct IntrusiveHashListData<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *> : IntrusiveHashData<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *>, DLListData
{
};


struct InArchiveVersionStack_VersionRowHolder : IntrusiveHashListData<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *>
{
  ArchiveVersionRow m_VersionRow;
};


struct IntrusiveHashList<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1>
{
  IntrusiveHashTable<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1> m_hash;
  DLListBase m_list;
};


struct InArchiveVersionStack : IArchiveVersionStack
{
  Turbine_RefCount m_cTurbineRefCount;
  IntrusiveHashList<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1> m_hlVersions;
  InArchiveVersionStack_VersionRowHolder m_vrDefaultRow;
  unsigned int m_iLastSerialNumber;
};


struct IntrusiveHashListIterator<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1>
{
  InArchiveVersionStack_VersionRowHolder *m_pData;
  IntrusiveHashList<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1> *m_pHashList;
};


struct IntrusiveHashIterator<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1>
{
  IntrusiveHashTable<IDClass<_tagVersionHandle,32,0>,InArchiveVersionStack_VersionRowHolder *,1> *m_currHashTable;
  InArchiveVersionStack_VersionRowHolder **m_currBucket;
  InArchiveVersionStack_VersionRowHolder *m_currElement;
};


struct InterfaceInfo<InArchiveVersionStack>
{
};


struct QIOffset
{
  _GUID *key;
  int ofs;
};


struct $FE1231DAD5CA5754D6DF7FFC75236D77
{
  unsigned __int32 dwData : 30;
  unsigned __int32 bReserved : 1;
  unsigned __int32 bHasMoreVersions : 1;
};


union VersionTableHeader
{
  $FE1231DAD5CA5754D6DF7FFC75236D77 __s0;
  unsigned int magic;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,Interface *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Interface *> *,0> *m_currHashTable;
  HashTableData<unsigned long,Interface *> **m_currBucket;
  HashTableData<unsigned long,Interface *> *m_currElement;
};


struct HashIterator<unsigned long,Interface *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,Interface *> *,0> m_iter;
};


struct _STL_allocator<unsigned short const *>
{
};


struct _STL__STLP_alloc_proxy<unsigned short const * *,unsigned short const *,_STL_allocator<unsigned short const *> > : _STL_allocator<unsigned short const *>
{
  const unsigned __int16 **_M_data;
};


struct _STL__Vector_base<unsigned short const *,_STL_allocator<unsigned short const *> >
{
  const unsigned __int16 **_M_start;
  const unsigned __int16 **_M_finish;
  _STL__STLP_alloc_proxy<unsigned short const * *,unsigned short const *,_STL_allocator<unsigned short const *> > _M_end_of_storage;
};


struct _STL_vector<unsigned short const *,_STL_allocator<unsigned short const *> > : _STL__Vector_base<unsigned short const *,_STL_allocator<unsigned short const *> >
{
};


struct _STL_allocator<unsigned short const *>_rebind<unsigned short const *>
{
};


struct ListIterator<PStringBase<unsigned short> >
{
  ListIterator<PStringBase<unsigned short> >Vtbl *vfptr;
  ListNode<PStringBase<unsigned short> > *_current;
  List<PStringBase<unsigned short> > *_list;
};


struct ListIterator<PStringBase<unsigned short> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(ListIterator<PStringBase<unsigned short> > *this, unsigned int);
};


struct __declspec(align(4)) PSGlobalBuffer<char,1>
{
  PSGlobalStatisticsPlaceholder m_Statistics;
  _BYTE gap0[20];
  char m_CharData[1];
};


struct __declspec(align(4)) PSGlobalBuffer<char,6>
{
  PSGlobalStatisticsPlaceholder m_Statistics;
  _BYTE gap0[20];
  char m_CharData[6];
};


struct __declspec(align(4)) PSGlobalBuffer<unsigned short,1>
{
  PSGlobalStatisticsPlaceholder m_Statistics;
  _BYTE gap0[20];
  unsigned __int16 m_CharData[1];
};


struct PSGlobalBuffer<unsigned short,6>
{
  PSGlobalStatisticsPlaceholder m_Statistics;
  _BYTE gap0[20];
  unsigned __int16 m_CharData[6];
};


struct _STL__Rb_tree_node_base
{
  bool _M_color;
  _STL__Rb_tree_node_base *_M_parent;
  _STL__Rb_tree_node_base *_M_left;
  _STL__Rb_tree_node_base *_M_right;
};


struct _STL__Rb_tree_base_iterator
{
  _STL__Rb_tree_node_base *_M_node;
};


struct _STL_allocator<_STL__Rb_tree_node<unsigned char *> >
{
};


struct _STL_allocator<unsigned char *>_rebind<_STL__Rb_tree_node<unsigned char *> >
{
};


struct _STL_binary_function<unsigned char *,unsigned char *,bool>
{
};


struct _STL_less<unsigned char *> : _STL_binary_function<unsigned char *,unsigned char *,bool>
{
};


struct _STL__Rb_tree_node<unsigned char *> : _STL__Rb_tree_node_base
{
  char *_M_value_field;
};


struct _STL__STLP_alloc_proxy<_STL__Rb_tree_node<unsigned char *> *,_STL__Rb_tree_node<unsigned char *>,_STL_allocator<_STL__Rb_tree_node<unsigned char *> > > : _STL_allocator<_STL__Rb_tree_node<unsigned char *> >
{
  _STL__Rb_tree_node<unsigned char *> *_M_data;
};


struct _STL__Rb_tree_base<unsigned char *,_STL_allocator<unsigned char *> >
{
  _STL__STLP_alloc_proxy<_STL__Rb_tree_node<unsigned char *> *,_STL__Rb_tree_node<unsigned char *>,_STL_allocator<_STL__Rb_tree_node<unsigned char *> > > _M_header;
};


struct __declspec(align(4)) _STL__Rb_tree<unsigned char *,unsigned char *,_STL__Identity<unsigned char *>,_STL_less<unsigned char *>,_STL_allocator<unsigned char *> > : _STL__Rb_tree_base<unsigned char *,_STL_allocator<unsigned char *> >
{
  unsigned int _M_node_count;
  _STL_less<unsigned char *> _M_key_compare;
};


struct _STL__Rb_tree_iterator<unsigned char *,_STL__Const_traits<unsigned char *> > : _STL__Rb_tree_base_iterator
{
};


struct _STL_set<unsigned char *,_STL_less<unsigned char *>,_STL_allocator<unsigned char *> >
{
  _STL__Rb_tree<unsigned char *,unsigned char *,_STL__Identity<unsigned char *>,_STL_less<unsigned char *>,_STL_allocator<unsigned char *> > _M_t;
};


struct __declspec(align(4)) _STL_pair<_STL__Rb_tree_iterator<unsigned char *,_STL__Const_traits<unsigned char *> >,bool>
{
  _STL__Rb_tree_iterator<unsigned char *,_STL__Const_traits<unsigned char *> > first;
  bool second;
};


struct _STL__Rb_tree_iterator<unsigned char *,_STL__Nonconst_traits<unsigned char *> > : _STL__Rb_tree_base_iterator
{
};


struct __declspec(align(4)) _STL_pair<_STL__Rb_tree_iterator<unsigned char *,_STL__Nonconst_traits<unsigned char *> >,bool>
{
  _STL__Rb_tree_iterator<unsigned char *,_STL__Nonconst_traits<unsigned char *> > first;
  bool second;
};


struct _STL__Rb_global<bool>
{
};


struct _STL_unary_function<unsigned char *,unsigned char *>
{
};


struct _STL__Identity<unsigned char *> : _STL_unary_function<unsigned char *,unsigned char *>
{
};


struct IntrusiveHashTable<unsigned long,LogController_CategoryHandler *,0>
{
  IntrusiveHashTable<unsigned long,LogController_CategoryHandler *,0>Vtbl *vfptr;
  LogController_CategoryHandler *m_aInplaceBuckets[23];
  LogController_CategoryHandler **m_buckets;
  LogController_CategoryHandler **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<unsigned long,LogController_CategoryHandler *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,LogController_CategoryHandler *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,LogController_CategoryHandler *>
{
  unsigned int m_hashKey;
  LogController_CategoryHandler *m_hashNext;
};


struct SmartArray<Logger_ILoggingOutputHandler *,1>
{
  Logger_ILoggingOutputHandler **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct LogController_CategoryHandler : IntrusiveHashData<unsigned long,LogController_CategoryHandler *>
{
  bool m_fEnabled;
  SmartArray<Logger_ILoggingOutputHandler *,1> m_rgOutputPlugins;
  SmartArray<unsigned long,1> m_rgContextIDs;
};


struct LogController
{
  IntrusiveHashTable<unsigned long,LogController_CategoryHandler *,0> m_hashHandlers;
  unsigned int m_LastAssignedContext;
  LogController_CategoryHandler m_DefaultHandler;
  bool m_rgGloballyDisabledSeverities[6];
  Logger_ITextFileOutputHandler *m_plohTextFile;
  Logger_ILoggingOutputHandler *m_plohConsole;
  Logger_ILoggingOutputHandler *m_plohODS;
};


struct ConsoleOutputHandler : Logger_ILoggingOutputHandler
{
};


struct OutputDebugStringOutputHandler : Logger_ILoggingOutputHandler
{
};


struct IntrusiveHashIterator<unsigned long,LogController_CategoryHandler *,0>
{
  IntrusiveHashTable<unsigned long,LogController_CategoryHandler *,0> *m_currHashTable;
  LogController_CategoryHandler **m_currBucket;
  LogController_CategoryHandler *m_currElement;
};


struct Turbine_InplaceString<4096,char>
{
  char *m_pBuffer;
  char m_buffer[4096];
};


struct _tagADDRESS
{
  unsigned int Offset;
  unsigned __int16 Segment;
  ADDRESS_MODE Mode;
};


struct _KDHELP
{
  unsigned int Thread;
  unsigned int ThCallbackStack;
  unsigned int NextCallback;
  unsigned int FramePointer;
  unsigned int KiCallUserMode;
  unsigned int KeUserCallbackDispatcher;
  unsigned int SystemRangeStart;
  unsigned int ThCallbackBStore;
  unsigned int Reserved[8];
};


struct _tagSTACKFRAME
{
  _tagADDRESS AddrPC;
  _tagADDRESS AddrReturn;
  _tagADDRESS AddrFrame;
  _tagADDRESS AddrStack;
  void *FuncTableEntry;
  unsigned int Params[4];
  int Far;
  int Virtual;
  unsigned int Reserved[3];
  _KDHELP KdHelp;
  _tagADDRESS AddrBStore;
};


struct _IMAGEHLP_MODULE
{
  unsigned int SizeOfStruct;
  unsigned int BaseOfImage;
  unsigned int ImageSize;
  unsigned int TimeDateStamp;
  unsigned int CheckSum;
  unsigned int NumSyms;
  SYM_TYPE SymType;
  char ModuleName[32];
  char ImageName[256];
  char LoadedImageName[256];
};


struct __declspec(align(4)) _IMAGEHLP_SYMBOL
{
  unsigned int SizeOfStruct;
  unsigned int Address;
  unsigned int Size;
  unsigned int Flags;
  unsigned int MaxNameLength;
  char Name[1];
};


struct _IMAGEHLP_LINE
{
  unsigned int SizeOfStruct;
  void *Key;
  unsigned int LineNumber;
  char *FileName;
  unsigned int Address;
};


struct _MINIDUMP_EXCEPTION_INFORMATION
{
  unsigned int ThreadId;
  _EXCEPTION_POINTERS *ExceptionPointers;
  int ClientPointers;
};


struct _MINIDUMP_USER_STREAM
{
  unsigned int Type;
  unsigned int BufferSize;
  void *Buffer;
};


struct _MINIDUMP_USER_STREAM_INFORMATION
{
  unsigned int UserStreamCount;
  _MINIDUMP_USER_STREAM *UserStreamArray;
};
