
#ifndef HASH_H
#define HASH_H

#include "core.h"
#include "primitive.h"
#include "enums.h"



struct DLListData
{
	DLListData* dllist_next;
	DLListData* dllist_prev;
};


struct DLListBase
{
	DLListData* head_;
	DLListData* tail_;
};


struct ActionMapValue
{
	unsigned int m_eToggleType;
	UserBindingValue m_userBindingData;
};

template <typename K, typename V, size_t S>
struct IntrusiveHashListData;

template <typename K, typename V, size_t S>
struct HashList
{
	//IntrusiveHashList_HashListData<K, HashList<K, HashList<K, V, S>, S>*, S> m_ihlIntrusive;
	void* m_ihlIntrusive;
};

template <typename K, typename V, size_t S>
__declspec(align(4)) struct HashList_HashListData //LIKELY WRONG
{
	IntrusiveHashListData<K, HashList<K, V, S>*, S> parent;
	bool m_data;
};

template <typename K, typename V, size_t S>
struct IntrusiveHashTable
{
	//IntrusiveHashTable_HashListData<K, HashList<K, HashList<K, V, S>, S>*, S>Vtbl* vfptr;
	void* vfptr; //only has vecdeldtor
	V* m_aInplaceBuckets[23];
	V** m_buckets;
	V** m_firstInterestingBucket;
	unsigned int m_numBuckets;
	unsigned int m_numElements;
};


template <typename K, typename V, size_t S>
struct IntrusiveHashList
{
	IntrusiveHashTable<K, HashList_HashListData<K, V, S>*, S> m_hash;
	DLListBase m_list;
};

template <typename K, typename V>
struct IntrusiveHashData
{
	K m_hashKey;
	V m_hashNext;
};

template <typename K, typename V, size_t S>
struct IntrusiveHashListData
{
	IntrusiveHashData<K, HashList_HashListData<K, V, S>*> parent;
	DLListData listdata;
};

template <typename K, typename V, size_t S> struct HashTable;
template <typename K, typename V> struct HashTableData;
template <typename K, typename V, size_t S>
struct HashTable
{
	void* vfptr; //only has vecdeldtor
	IntrusiveHashTable<K, HashTableData<K, V>*, S> m_intrusiveTable;
};

template <typename K, typename V>
struct HashTableData
{
	IntrusiveHashData<K, HashTableData<K, V>*> parent;
	CAsyncGetRequest* m_data;
};

template <typename T>
struct HashBaseData
{
	void* vfptr;
	HashBaseData<T>* hash_next;
	unsigned int id;
};

template <typename T>
struct HashBase
{
	void* vfptr;
	unsigned int table_mask;
	unsigned int key_shift;
	HashBaseData<T>** buckets;
	unsigned int table_size;
	int fPlacementNew_;
};

template <typename T>
struct LongHash : HashBase<unsigned long>
{
};

template <typename T>
struct HashSetData : IntrusiveHashData<T, HashSetData<T>*>
{
};

template <typename T>
struct HashSet
{
	void* vfptr;
	IntrusiveHashTable<T, HashSetData<T>*, 1> m_intrusiveTable;
};

struct LongHashData : HashBaseData<unsigned long>
{
};

template <typename K, typename V>
struct AutoGrowHashTable : HashTable<K, V, 1>
{
};

template <typename K, typename V>
struct PackableHashData
{
	K _key;
	V _data;
	PackableHashData<K, V>* _next;
	int _hashVal;
};

template <typename K, typename V>
struct PackableHashTable
{
	PackObj packobj;
	int m_fThrowawayDuplicateKeysOnUnPack;
	PackableHashData<K, V>** _buckets;
	unsigned int _table_size;
	unsigned int _currNum;
};

#endif