using System;
using System.Runtime.InteropServices;
using System.Reflection;
using System.Diagnostics;
using Decal.Interop.Core;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Decal.Interop.Inject;
using Portaled.Service;
using Portaled.Interop;
using Portaled.Service.Managers;
using NAudio.Mixer;
using Portaled.Service.DBObj;
using NAudio.Wave;

namespace Portaled.Hook
{
    public static unsafe class Hook
    {
        public static DeviareLiteInterop.HookLib cHook;

        static Hook()
        {
            cHook = new DeviareLiteInterop.HookLib();
        }

        class Memloc
        {
            public string Key { get; set; }
            public string Value { get; set; }
            public bool MemlocIsAddr { get { return !Value.StartsWith("0x0000"); } }
        }
    }

    unsafe static class HookMain
    {
        public static class DBCache
        {
            public static class Get
            {
                static IntPtr addr = new IntPtr(0x413b80);

                [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
                public delegate IntPtr Del(uint qdid, uint type);

                public static Del oldDel =
                    (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((qdid, type) => {
                        var result = oldDel(qdid, type);
                        PortaledLoader.Instance.WriteToChat($"DBCache::Get({qdid.ToString("X4")},{type})");
                        return result;

                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
            public static class PreFetch
            {
                static IntPtr addr = new IntPtr(0x414fe0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate float Del(void* dbCacheThis, Structures.QualifiedDataID* qdid);

                public static Del oldDel =
                    (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((dbCacheThis, qdid) => {
                        PortaledLoader.Instance.WriteToChat($"DBCache::PreFetch({new IntPtr(dbCacheThis).ToInt32()}{qdid->Type}-{qdid->ID.Unknown1}");
                        return oldDel(dbCacheThis, qdid);
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class DBOCache
        {
            public static class GetIfInMemory
            {
                static IntPtr addr = new IntPtr(0x416eb0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr dbocache, uint qdid, int arg3);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                static Portaled.Interop.AsyncCache cache;

                static Dictionary<uint, Portaled.Interop.DBOCache> caches = new Dictionary<uint, Portaled.Interop.DBOCache>();
                static bool cachesInitialized = false;
                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((dbocache, qdid, arg3) =>
                    {
                        var retval = oldDel(dbocache, qdid, arg3);

                        if (DateTime.Now - PortaledLoader.BeginTime > TimeSpan.FromSeconds(2))
                        {
                            var cmdInterp = PortaledLoader.Instance?.Host?.Actions?.CommandInterpreter;
                            if (cmdInterp != null)
                            {
                                var intptr = new IntPtr(cmdInterp.Value);
                                var cmdInterpEx = Interop.CommandInterpreter.__CreateInstance(intptr);
                                if (cmdInterpEx.Smartbox == null)
                                    return retval;

                                var sbox = cmdInterpEx.Smartbox;
                                var physicsObjPlayer = cmdInterpEx.Player;//FINE
                                if (physicsObjPlayer == null)
                                    return retval;
                                var partarray = physicsObjPlayer.PartArray;
                                var parts = partarray.Parts; //BROKEN
                                var setup = partarray.Setup;
                                var cache = setup.Dbobj.Dbobj.MPMaintainer;
                                
                                var table = cache.MObjTable.MIntrusiveTable;
                                var buckets = table.Buckets;
                                /*
                                 * 
                                CPartArray* partArray = physicsObjPlayer.part_array;
                                CPhysicsPart** parts = partArray->parts;
                                CPhysicsPart* parts2 = *parts;
                                CPhysicsPart parts3 = *parts2; 

                                Core.ACTypes.CSurface* surfaces = *(Core.ACTypes.CSurface**)parts2->surfaces;
                                CGfxObj* gfx = *parts2->gfxobj;
                                
                                Core.ACTypes.ImgTex* tex = (Core.ACTypes.ImgTex*)surfaces->base1map;*/ //table.Buckets[(0x0200058e % table.MNumBuckets)].MData.MDID.Id.Id == 0x0200058e

                                foreach(var bucket in buckets)
                                {
                                    if (bucket != null)
                                    {
                                        if (bucket.MData != null)
                                        {
                                            var qdid1 = bucket.MData.MDID.Id.Id;
                                            if (qdid1 >= 0x02000000 && qdid1 < 0x03000000)
                                            {
                                                var csetup = Portaled.Interop.CSetup.__CreateInstance(bucket.MData.__Instance);
                                                //0x009d3808
                                                //0x009d3930
                                            }
                                        }
                                    }
                                }

                                var cacheptr = new IntPtr(*(int*)new IntPtr(0x00837bac).ToPointer());
                                
                                var cachemain = Portaled.Interop.DBCache.__CreateInstance(cacheptr);
                                if (GetIfInMemory.cache == null)
                                    GetIfInMemory.cache = cachemain.AsyncCache;


                                DatIOManager.Initialize();

                                var t1 = Portaled.Service.Managers.DatIOManager.GetByDID<Portaled.Service.DBObj.RenderSurface>(0x060018F9);
                                var t2 = t1.Underlying.MPSurfaceBits;
                                var t3 = t1.Underlying.SourceData.SourceBits;


                                physicsObjPlayer.Friction = Portaled.Service.PortaledLoader.Friction;
                            }
                        }
                        
                        return retval;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class CLOCache
        {
            public static class Ctor
            {
                static IntPtr addr = new IntPtr(0x4fd0a0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr thisptr, IntPtr allocatorFunction, uint dbtype);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));


                public static List<IntPtr> DBOCaches = new List<IntPtr>();
                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((thisptr, allocatorFunction, dbtype) =>
                    {
                        DBOCaches.Add(thisptr);
                        return oldDel(thisptr, allocatorFunction, dbtype);
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }

        }

        public static class CSurface
        {
            public static class InitEnd
            {
                static IntPtr addr = new IntPtr(0x537140);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr csurface, int init_type);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                static List<int> textureIds = new List<int>();
                static Random r = new Random();
                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((surface, type) =>
                    {
                        var tex = oldDel(surface, type);
                        return tex;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class ImgTex
        {
            public static class Serialize
            {
                static IntPtr addr = new IntPtr(0x540290);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr tex, IntPtr archive);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((tex, archive) =>
                    {
                        var result = oldDel(tex, archive);
                        return result;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class DBWave
        {
            public static class Unpack
            {
                static IntPtr addr = new IntPtr(0x5527B0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr dbwave, IntPtr addr, uint size);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((dbwave, addr, size) =>
                    {
                        var result = oldDel(dbwave, addr, size);
                        var wave = Interop.DBWave.__CreateInstance(dbwave);
                        return result;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }
        public static class SmartBox
        {
            //DOESN'T WORK, CRASHES RANDOMLY
            public static class ProcessObjectNetBlobs
            {
                static IntPtr addr = new IntPtr(0x454bc0);

                [UnmanagedFunctionPointer(CallingConvention.StdCall)]
                public delegate uint Del(IntPtr smartbox, IntPtr physicsObj);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((smartbox, physicsObj) =>
                    {
                        var result = oldDel(smartbox, physicsObj);
                        return result;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }

        }


        public static class AsyncCache
        {
            public static class BlockingLoadInto
            {
                static IntPtr addr = new IntPtr(0x417c60);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr asyncCache, IntPtr dbObj, IntPtr qdid, IntPtr dbocache);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((_asyncCache, _dbobj, _qdid, _dbocache) =>
                    {
                        var dbobj = Interop.DBObj.__CreateInstance(_dbobj);
                        var qdid = Interop.QualifiedDataID.__CreateInstance(_qdid);
                        var dbocache = Interop.DBOCache.__CreateInstance(_dbocache);
                        DatIOManager.OnBeforeBlockingLoadInto(dbobj, qdid, dbocache);
                        var res = oldDel(_asyncCache, _dbobj, _qdid, _dbocache);
                        DatIOManager.OnAfterBlockingLoadInto(dbobj, qdid, dbocache);
                        return res;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }

            public static class BlockingGetFromDisk
            {
                static IntPtr addr = new IntPtr(0x417c60);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr asyncCache, IntPtr foo, IntPtr qdid, IntPtr dbocache);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((_asyncCache, foo, _qdid, _dbocache) =>
                    {
                        var dbobj = Interop.DBObj.__CreateInstance(foo);
                        var qdid = Interop.QualifiedDataID.__CreateInstance(_qdid);
                        var dbocache = Interop.DBOCache.__CreateInstance(_dbocache);
                        
                        
                        DatIOManager.OnBeforeBlockingGetFromDisk(dbobj, qdid, dbocache);
                        var res = oldDel(_asyncCache, foo, _qdid, _dbocache);
                        var loadedDBObj = Interop.DBObj.__CreateInstance(res);
                        DatIOManager.OnAfterBlockingGetFromDisk(dbobj, qdid, dbocache);
                        return res;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }

            public static class SerializeFromCachePack
            {
                static IntPtr addr = new IntPtr(0x417ac0);

                [UnmanagedFunctionPointer(CallingConvention.StdCall)]
                public delegate IntPtr Del(IntPtr dbobj, IntPtr cachepack);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((_dbobj, _cachepack) =>
                    {
                        var dbobj = Interop.DBObj.__CreateInstance(_dbobj);

                        var res = oldDel(_dbobj, _cachepack);
                        DatIOManager.OnSerializeFromCachePack(dbobj);
                        return res;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class SoundBufRef
        {
            public static class Ctor
            {
                static IntPtr addr = new IntPtr(0x550d20);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr _soundBufRef, uint did);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((_soundBufRef, did) =>
                    {
                        var res = oldDel(_soundBufRef, did);
                        var dbobj = Interop.SoundBufRef.__CreateInstance(_soundBufRef);
                        return res;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }
        public class SoundManager
        { 
            public static class CreateSound
            {
                static IntPtr addr = new IntPtr(0x551800);

                [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
                public delegate void Del(uint did);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((did) =>
                    {
                        oldDel(did);
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class DBObj
        {
            public static class Get
            {
                static IntPtr addr = new IntPtr(0x415430);

                [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
                public delegate IntPtr Del(IntPtr _qdid, IntPtr two);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));
                public static void H()
                {
                    var del = new Del((_qdid, two) => DatIOManager.ClientFunctions.DBObjGet(_qdid, two));
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(del);
                    Hook.cHook.Hook(addr, newFuncAddr, 0x0020);

                    /*
                    if (type == (uint)0xf)
                    {
                        var dbobj = Interop.DBWave.__CreateInstance(res.__Instance);
                        DatIOManager.OnGet<DBWave>(dbobj);
                        var wavdata = new byte[dbobj.Wave.MNDataSize];
                        var sz = dbobj.Wave.MNDataSize;
                        var srcdata = (byte*)dbobj.Wave.MPData;
                        for (int i = 0; i < sz; i++)
                        {
                            wavdata[i] = *srcdata++;
                        }
                        using (var ms = new MemoryStream()
                        {
                            using (var reader = new WaveFileReader(ms))
                            {
                                reader.Read(srcdata, 0, sz);
                            }
                        }

                    }
                    if (id >= (uint)0x0A000000 && id < (uint)0x0A00FFFE)
                    {
                        //var dbobj = Interop.DBWave.__CreateInstance(res);
                    }
                    return res.__Instance;

                    /*
                    var dbcache = new IntPtr(0x837bac);




                    for (int i = 0; i < 200; i++)
                    {
                        A++;
                    }
                    var qdid = QualifiedDataID.__CreateInstance(_qdid);
                    var id = qdid.ID.Id.Id;
                    var type = qdid.Type;
                    if (type == (uint)0xf)
                    {

                    }
                    if (id >= (uint)0x0A000000 && id < (uint)0x0A00FFFE)
                    {
                        //var dbobj = Interop.DBWave.__CreateInstance(res);
                    }
                    if (A > 100)
                    {
                        var res = oldDel(_qdid, two);
                        return res;
                    }

                    return IntPtr.Zero;*/

                    //    }));

                }
            }

        }

        static bool hooked = false;
        public static void HookAll()
        {
            if (hooked)
                return;

            hooked = true;
            //  DBCache.PreFetch.H();
            /*
            DBCache.Get.H();
            DBOCache.GetIfInMemory.H();
           // CSurface.InitEnd.H();
            ImgTex.Serialize.H();
            CLOCache.Ctor.H();
            //  SmartBox.ProcessObjectNetBlobs.H();

            AsyncCache.SerializeFromCachePack.H();
            AsyncCache.BlockingLoadInto.H();
            AsyncCache.BlockingGetFromDisk.H();

            DBWave.Unpack.H();
            SoundBufRef.Ctor.H();
            SoundManager.CreateSound.H();*/
            DBObj.Get.H();
        }

        
    }

    public static class Structures
    {
        public struct QualifiedDataID
        {
            public long Type { get; set; }
            public IDClass__tagDataID_32_0 ID { get; set;  }
        }

        public struct IDClass__tagDataID_32_0
        {
            public int Unknown1;
        }
    }

}
