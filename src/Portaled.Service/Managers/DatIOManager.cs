﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Portaled.Interop;
using Portaled.Service.DBObj;

namespace Portaled.Service.Managers
{
    public static class DatIOManager
    {
        static bool _initialized = false;

        internal static Portaled.Interop.DBCache _DBCache;
        internal static Portaled.Interop.AsyncCache _AsyncCache;

        /// <summary>
        /// Type IDs loaded via blocking get from disk
        /// </summary>
        static List<uint> dataTypesLoadedAsyncCache;

        public unsafe static void Initialize()
        {
            if (_initialized)
                return;

            _initialized = true;

            dataTypesLoadedAsyncCache = new List<uint>() { 1, 2, 3, 6, 7, 8, 10, 11, 12, 14, 26, 27, 34, 35, 36, 37, 38, 40, 42, 43, 44, 46, 49,
                0x10000002, 0x10000003, 0x10000004, 0x10000005, 0x10000006, 0x10000009, 0x1000000c, 0x10000010, 0x1000001d };

            var cacheptr = new IntPtr(*(int*)new IntPtr(0x00837bac).ToPointer());

            _DBCache = Portaled.Interop.DBCache.__CreateInstance(cacheptr);
            _AsyncCache = _DBCache.AsyncCache;

            var caches = new Dictionary<uint, Portaled.Interop.DBOCache>();
            var cachesList = new List<DBCache>();
            for (uint i = 0; i < 200; i++)
            {
                var qdid1 = new Portaled.Interop.QualifiedDataID(0, i);
                var ocache = _AsyncCache.GetDBOCache(qdid1);
                if (ocache != null)
                {
                    SetupCache(i, ocache);
                }
            }

            StringBuilder sb = new StringBuilder();
            foreach(var cache in cachesList)
            {
                sb.AppendLine($"{cache.DBType},{cache.Allocator.ToInt32().ToString("X4")}");
            }
            var s = sb.ToString();
        }

        public static T GetByDID<T>(uint did)
            where T : DBObjEx
        {
            var cache = Caches.CacheDict[typeof(T)];
            if (cache == null)
                return null;
            var cacheex = (DBCache<T>)cache;
            var obj = cacheex.GetByDID(did);
            return obj;
        }

        private static void SetupCache(uint type, Interop.DBOCache ocache)
        {
            DBCache cache = null;
            switch (type)
            {
                case 1:
                    cache = new DBCache<DBObj.CLandBlock>(ocache);
                    Caches.CacheDict[typeof(DBObj.CLandBlock)] = cache;
                    break;
                case 2:
                    cache = new DBCache<DBObj.CLandBlockInfo>(ocache);
                    Caches.CacheDict[typeof(DBObj.CLandBlockInfo)] = cache;
                    break;
                case 3:
                    cache = new DBCache<DBObj.CEnvCell>(ocache);
                    Caches.CacheDict[typeof(DBObj.CEnvCell)] = cache;
                    break;
                case 6:
                    cache = new DBCache<DBObj.CGfxObj>(ocache);
                    Caches.CacheDict[typeof(DBObj.CGfxObj)] = cache;
                    break;
                case 7:
                    cache = new DBCache<DBObj.CSetup>(ocache);
                    Caches.CacheDict[typeof(DBObj.CSetup)] = cache;
                    break;
                case 8:
                    cache = new DBCache<DBObj.CAnimation>(ocache);
                    Caches.CacheDict[typeof(DBObj.CAnimation)] = cache;
                    break;
                case 10:
                    cache = new DBCache<DBObj.Palette>(ocache);
                    Caches.CacheDict[typeof(DBObj.Palette)] = cache;
                    break;
                case 11:
                    cache = new DBCache<DBObj.ImgTex>(ocache);
                    Caches.CacheDict[typeof(DBObj.ImgTex)] = cache;
                    break;
                case 12:
                    cache = new DBCache<DBObj.RenderSurface>(ocache);
                    Caches.CacheDict[typeof(DBObj.RenderSurface)] = cache;
                    break;
                case 13:
                    cache = new DBCache<DBObj.CSurface>(ocache);
                    Caches.CacheDict[typeof(DBObj.CSurface)] = cache;
                    break;
                case 14:
                    cache = new DBCache<DBObj.CMotionTable>(ocache);
                    Caches.CacheDict[typeof(DBObj.CMotionTable)] = cache;
                    break;
                case 15:
                    cache = new DBCache<DBWave>(ocache);
                    Caches.CacheDict[typeof(DBWave)] = cache;
                    break;
                case 16:
                    cache = new DBCache<DBObj.CEnvironment>(ocache);
                    Caches.CacheDict[typeof(DBObj.CEnvironment)] = cache;
                    break;
                case 17:
                    cache = new DBCache<DBObj.ChatPoseTable>(ocache);
                    Caches.CacheDict[typeof(DBObj.ChatPoseTable)] = cache;
                    break;
                case 18:
                    cache = new DBCache<DBObj.cWObjHierRootNode>(ocache);
                    Caches.CacheDict[typeof(DBObj.cWObjHierRootNode)] = cache;
                    break;
                case 19:
                    cache = new DBCache<DBObj.BadData>(ocache);
                    Caches.CacheDict[typeof(DBObj.BadData)] = cache;
                    break;
                case 20:
                    cache = new DBCache<DBObj.BadData>(ocache);
                    Caches.CacheDict[typeof(DBObj.BadData)] = cache;
                    break;
                case 21:
                    cache = new DBCache<DBObj.DBFile2IDTable>(ocache);
                    Caches.CacheDict[typeof(DBObj.DBFile2IDTable)] = cache;
                    break;
                case 22:
                    cache = new DBCache<DBObj.NameFilterTable>(ocache);
                    Caches.CacheDict[typeof(DBObj.NameFilterTable)] = cache;
                    break;
                case 24:
                    cache = new DBCache<DBObj.PalSet>(ocache);
                    Caches.CacheDict[typeof(DBObj.PalSet)] = cache;
                    break;
                case 25:
                    cache = new DBCache<DBObj.ClothingTable>(ocache);
                    Caches.CacheDict[typeof(DBObj.ClothingTable)] = cache;
                    break;
                case 26:
                    cache = new DBCache<DBObj.GfxObjDegradeInfo>(ocache);
                    Caches.CacheDict[typeof(DBObj.GfxObjDegradeInfo)] = cache;
                    break;
                case 27:
                    cache = new DBCache<DBObj.Scene>(ocache);
                    Caches.CacheDict[typeof(DBObj.Scene)] = cache;
                    break;
                case 28:
                    cache = new DBCache<DBObj.CRegionDesc>(ocache);
                    Caches.CacheDict[typeof(DBObj.CRegionDesc)] = cache;
                    break;
                case 29:
                    cache = new DBCache<DBObj.CMasterInputMap>(ocache);
                    Caches.CacheDict[typeof(DBObj.CMasterInputMap)] = cache;
                    break;
                case 30:
                    cache = new DBCache<DBObj.RenderTexture>(ocache);
                    Caches.CacheDict[typeof(DBObj.RenderTexture)] = cache;
                    break;
                case 31:
                    cache = new DBCache<DBObj.RenderMaterial>(ocache);
                    Caches.CacheDict[typeof(DBObj.RenderMaterial)] = cache;
                    break;
                case 32:
                    cache = new DBCache<DBObj.MaterialModifier>(ocache);
                    Caches.CacheDict[typeof(DBObj.MaterialModifier)] = cache;
                    break;
                case 33:
                    cache = new DBCache<DBObj.MaterialInstance>(ocache);
                    Caches.CacheDict[typeof(DBObj.MaterialInstance)] = cache;
                    break;
                case 34:
                    cache = new DBCache<DBObj.CSoundTable>(ocache);
                    Caches.CacheDict[typeof(DBObj.CSoundTable)] = cache;
                    break;
                case 35:
                    cache = new DBCache<DBObj.LayoutDesc>(ocache);
                    Caches.CacheDict[typeof(DBObj.LayoutDesc)] = cache;
                    break;
                case 36:
                    cache = new DBCache<DBObj.EnumMapper>(ocache);
                    Caches.CacheDict[typeof(DBObj.EnumMapper)] = cache;
                    break;
                case 37:
                    cache = new DBCache<DBObj.StringTable>(ocache);
                    Caches.CacheDict[typeof(DBObj.StringTable)] = cache;
                    break;
                case 38:
                    cache = new DBCache<DBObj.EnumIDMap>(ocache);
                    Caches.CacheDict[typeof(DBObj.EnumIDMap)] = cache;
                    break;
                case 39:
                    cache = new DBCache<DBObj.ActionMap>(ocache);
                    Caches.CacheDict[typeof(DBObj.ActionMap)] = cache;
                    break;
                case 40:
                    cache = new DBCache<DBObj.DualEnumIDMap>(ocache);
                    Caches.CacheDict[typeof(DBObj.DualEnumIDMap)] = cache;
                    break;
                case 41:
                    cache = new DBCache<DBObj.ACString>(ocache);
                    Caches.CacheDict[typeof(DBObj.ACString)] = cache;
                    break;
                case 42:
                    cache = new DBCache<DBObj.ParticleEmitterInfo>(ocache);
                    Caches.CacheDict[typeof(DBObj.ParticleEmitterInfo)] = cache;
                    break;
                case 43:
                    cache = new DBCache<DBObj.PhysicsScript>(ocache);
                    Caches.CacheDict[typeof(DBObj.PhysicsScript)] = cache;
                    break;
                case 44:
                    cache = new DBCache<DBObj.PhysicsScriptTable>(ocache);
                    Caches.CacheDict[typeof(DBObj.PhysicsScriptTable)] = cache;
                    break;
                case 45:
                    cache = new DBCache<DBObj.MasterProperty>(ocache);
                    Caches.CacheDict[typeof(DBObj.MasterProperty)] = cache;
                    break;
                case 46:
                    cache = new DBCache<DBObj.Font>(ocache);
                    Caches.CacheDict[typeof(DBObj.Font)] = cache;
                    break;
                case 47:
                    cache = new DBCache<DBObj.FontLocal>(ocache);
                    Caches.CacheDict[typeof(DBObj.FontLocal)] = cache;
                    break;
                case 48:
                    cache = new DBCache<DBObj.CLanguageInfo>(ocache);
                    Caches.CacheDict[typeof(DBObj.CLanguageInfo)] = cache;
                    break;
                case 49:
                    cache = new DBCache<DBObj.DBPropertyCollection>(ocache);
                    Caches.CacheDict[typeof(DBObj.DBPropertyCollection)] = cache;
                    break;
                case 67:
                    cache = new DBCache<DBObj.RenderMesh>(ocache);
                    Caches.CacheDict[typeof(DBObj.RenderMesh)] = cache;
                    break;
                default:
                    return;
            }
            Caches.CacheDictPtr[cache.Underlying.__Instance] = cache;
        }

        internal static void OnBeforeBlockingLoadInto(Interop.DBObj dbobj, QualifiedDataID qdid, DBOCache dbocache)
        {
            if (!Caches.CacheDictPtr.TryGetValue(dbocache.__Instance, out var dbocacheex))
                return;
        }

        internal static void OnAfterBlockingLoadInto(Interop.DBObj dbobj, QualifiedDataID qdid, DBOCache dbocache)
        {
            if (!Caches.CacheDictPtr.TryGetValue(dbocache.__Instance, out var dbocacheex))
                return;
        }

        internal static void OnBeforeBlockingGetFromDisk(Interop.DBObj dbobj, QualifiedDataID qdid, DBOCache dbocache)
        {

            if (!Caches.CacheDictPtr.TryGetValue(dbocache.__Instance, out var dbocacheex))
                return;
        }

        internal static void OnAfterBlockingGetFromDisk(Interop.DBObj dbobj, QualifiedDataID qdid, DBOCache dbocache)
        {
            //if (dataTypesLoadedAsyncCache.Contains(qdid.Type))
            //{
                EnsureObjLoad(qdid, dbobj);
            //}
        }

        internal static void OnSerializeFromCachePack(Interop.DBObj dbobj)
        {
            var id = dbobj.MDID.Id.Id;
            if (id >= 0x0A000000 && id < 0x0A00FFFE)
            {

            }
        }

        /// <summary>
        /// Called each time after the DBObj is requested by the game engine.
        /// </summary>
        /// <param name="qdid"></param>
        /// <param name="dbobj"></param>
        internal static void OnGetFromDB(QualifiedDataID qdid, Interop.DBObj dbobj)
        {
            var ptr = dbobj.__Instance;
            if (Caches.trackedObjects.Contains(ptr))
                return;
            EnsureObjLoad(qdid, dbobj);
        }

        /// <summary>
        /// Call this method to ensure that the OnObjLoad is triggered if necessary
        /// </summary>
        private static void EnsureObjLoad(QualifiedDataID qdid, Interop.DBObj dbobj)
        {
            if (dbobj.MPMaintainer == null)
            {
                return;
            }
            if (!Caches.CacheDictPtr.TryGetValue(dbobj.MPMaintainer.__Instance, out var dbocacheex))
                return;
            if (Caches.trackedObjects.Contains(dbobj.__Instance))
                return;
            OnObjLoad(dbocacheex, qdid, dbobj);
        }

        /// <summary>
        /// Called when an object is loaded for the first time.
        /// Note that the timing of this function call may or may not be precise, 
        /// determining on the methodology the game engine used to load the object. 
        /// This is our best guess for when the object is loaded for the first time.
        /// </summary>
        /// <param name="qdid"></param>
        /// <param name="dbobj"></param>
        private static void OnObjLoad(DBCache cache, QualifiedDataID qdid, Interop.DBObj dbobj)
        {
            Caches.trackedObjects.Add(dbobj.__Instance);
            cache.OnLoad(dbobj, qdid);
        }

        static bool Written = false;
        public static void Write(string name)
        {
            if (Written)
                return;
            Written = true;
            File.WriteAllText(@"portaled-trace.txt", name);
        }
        public static class ClientFunctions
        {
            /// <summary>
            /// The rewritten function that AC Client is actually using in order to retrieve the resource by DID
            /// </summary>
            /// <param name="qdid"></param>
            /// <param name="obj"></param>
            /// <returns></returns>
            public static IntPtr DBObjGet(IntPtr _qdid, IntPtr _unused)
            {
                var cache = DatIOManager._AsyncCache;
                if (cache == null)
                    return IntPtr.Zero;
                var qdid = QualifiedDataID.__CreateInstance(_qdid);
                var res = cache.BlockingGet(2, qdid);
                if (res == null)
                    return IntPtr.Zero;

                DatIOManager.OnGetFromDB(qdid, res);
                
                return res.__Instance;
            }
        }

        internal static class Caches
        {
            internal static Dictionary<Type, DBCache> CacheDict = new Dictionary<Type, DBCache>();
            internal static Dictionary<IntPtr, DBCache> CacheDictPtr = new Dictionary<IntPtr, DBCache>();
            internal static HashSet<IntPtr> trackedObjects = new HashSet<IntPtr>();
        }
    }

    public abstract class DBCache
    {
        public uint DBType { get; protected set; }
        public IntPtr Allocator { get; protected set; }
        
        public Portaled.Interop.DBOCache Underlying { get; protected set; }

        internal abstract void OnLoad(Interop.DBObj dbobj, QualifiedDataID qdid);
    }

    public class DBCache<T> : DBCache
        where T : Portaled.Service.DBObj.DBObjEx
    {
        protected Dictionary<IntPtr, T> managedCache = new Dictionary<IntPtr, T>();
        internal DBCache(Portaled.Interop.DBOCache internalCache)
        {
            this.Underlying = internalCache;
            this.DBType = internalCache.MDbtype;
            this.Allocator = internalCache.MPfnAllocator;
        }

        public T GetByDID(uint did)
        {
            try
            {
                var qdid = new Portaled.Interop.QualifiedDataID(did, DBType);
                var obj = DatIOManager.ClientFunctions.DBObjGet(qdid.__Instance, IntPtr.Zero);
                if (obj == IntPtr.Zero)
                    return null;
                if (!DatIOManager.Caches.trackedObjects.Contains(obj))
                    return null;
                return managedCache[obj];
            }
            catch
            {
                return null;
            }
        }

        internal override void OnLoad(Interop.DBObj dbobj, QualifiedDataID qdid)
        {
            T obj = (T)DBObjEx.CreateFrom(dbobj, qdid.Type);
            managedCache[dbobj.__Instance] = obj;
            obj.OnLoad();
        }
    }
}
