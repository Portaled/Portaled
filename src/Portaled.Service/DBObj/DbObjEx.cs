using Portaled.Interop;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;

namespace Portaled.Service.DBObj
{
    /*
     * DBType	Allocator	Obj Type
        1	4F7A70	CLandBlock
        2	4F7A50	CLandBlockInfo
        3	4F7AF0	CEnvCell
        6	4F7B10	CGfxObj
        7	4F7B50	CSetup
        8	4F7B30	CAnimation
        10	4F7B70	Palette
        11	4F7B90	ImgTex
        12	444500	RenderSurface
        13	4F7BB0	CSurface
        14	4FA280	CMotionTable
        15	4F7BD0	DBWave
        16	4F7C00	CEnvironment
        17	4F7C20	ChatPoseTable
        18	4F7C40	cWObjHierRootNode
        19	4F7C60	BadData
        20	4F7C80	TabooTable
        21	4F7CA0	DBFile2IDTable
        22	4F7D40	NameFilterTable
        24	4F7D60	PalSet
        25	4F7D80	ClothingTable
        26	4F7DA0	GfxObjDegradeInfo
        27	4F7DC0	Scene
        28	4F7DE0	CRegionDesc
        29	4F7E00	CMasterInputMap
        30	44C660	RenderTexture
        31	449950	RenderMaterial
        32	4505A0	MaterialModifier
        33	44D3F0	MaterialInstance
        34	4F7E20	CSoundTable
        35	459340	LayoutDesc
        36	41C0F0	EnumMapper
        37	430960	StringTable
        38	416850	EnumIDMap
        39	4F7E50	ActionMap
        40	4FB7E0	DualEnumIDMap
        41	4F7E70	String
        42	4F7E90	ParticleEmitterInfo
        43	4F7EB0	PhysicsScript
        44	4F7ED0	PhysicsScriptTable
        45	428F50	MasterProperty
        46	4F8270	Font
        47	4F8800	FontLocal
        48	4224D0	CLanguageInfo
        49	4F7EF0	DBPropertyCollection
        67	445520	RenderMesh
    */
    public abstract class DBObjEx
    {
        internal static DBObjEx CreateFrom(Interop.DBObj obj, uint DBType)
        {
            switch (DBType)
            {
                case 1:
                    return new CLandBlock() { Underlying = Interop.CLandBlock.__CreateInstance(obj.__Instance) };
                case 2:
                    return new CLandBlockInfo() { Underlying = Interop.CLandBlockInfo.__CreateInstance(obj.__Instance) };
                case 3:
                    return new CEnvCell() { Underlying = Interop.CEnvCell.__CreateInstance(obj.__Instance) };
                case 6:
                    return new CGfxObj() { Underlying = Interop.CGfxObj.__CreateInstance(obj.__Instance) };
                case 7:
                    return new CSetup() { Underlying = Interop.CSetup.__CreateInstance(obj.__Instance) };
                case 8:
                    return new CAnimation() { Underlying = Interop.CAnimation.__CreateInstance(obj.__Instance) };
                case 10:
                    return new Palette() { Underlying = Interop.Palette.__CreateInstance(obj.__Instance) };
                case 11:
                    return new ImgTex() { Underlying = Interop.ImgTex.__CreateInstance(obj.__Instance) };
                case 12:
                    return new RenderSurface() { Underlying = Interop.RenderSurface.__CreateInstance(obj.__Instance) };
                case 13:
                    return new CSurface() { Underlying = Interop.CSurface.__CreateInstance(obj.__Instance) };
                case 14:
                    return new CMotionTable() { Underlying = Interop.CMotionTable.__CreateInstance(obj.__Instance) };
                case 15:
                    return new DBWave() { Underlying = Interop.DBWave.__CreateInstance(obj.__Instance) };
                case 16:
                    return new CEnvironment() { Underlying = Interop.CEnvironment.__CreateInstance(obj.__Instance) };
                case 17:
                    return new ChatPoseTable() { Underlying = Interop.ChatPoseTable.__CreateInstance(obj.__Instance) };
                case 18:
                    return new cWObjHierRootNode() { Underlying = Interop.CWObjHierRootNode.__CreateInstance(obj.__Instance) };
                case 19:
                    return new BadData() { Underlying = Interop.BadData.__CreateInstance(obj.__Instance) };
                case 20:
                    return new TabooTable() { Underlying = Interop.TabooTable.__CreateInstance(obj.__Instance) };
                case 21:
                    return new DBFile2IDTable() { Underlying = Interop.DBFile2IDTable.__CreateInstance(obj.__Instance) };
                case 22:
                    return new NameFilterTable() { Underlying = Interop.NameFilterTable.__CreateInstance(obj.__Instance) };
                case 24:
                    return new PalSet() { Underlying = Interop.PalSet.__CreateInstance(obj.__Instance) };
                case 25:
                    return new ClothingTable() { Underlying = Interop.ClothingTable.__CreateInstance(obj.__Instance) };
                case 26:
                    return new GfxObjDegradeInfo() { Underlying = Interop.GfxObjDegradeInfo.__CreateInstance(obj.__Instance) };
                case 27:
                    return new Scene() { Underlying = Interop.Scene.__CreateInstance(obj.__Instance) };
                case 28:
                    return new CRegionDesc() { Underlying = Interop.CRegionDesc.__CreateInstance(obj.__Instance) };
                case 29:
                    return new CMasterInputMap() { Underlying = Interop.CMasterInputMap.__CreateInstance(obj.__Instance) };
                case 30:
                    return new RenderTexture() { Underlying = Interop.RenderTexture.__CreateInstance(obj.__Instance) };
                case 31:
                    return new RenderMaterial() { Underlying = Interop.RenderMaterial.__CreateInstance(obj.__Instance) };
                case 32:
                    return new MaterialModifier() { Underlying = Interop.MaterialModifier.__CreateInstance(obj.__Instance) };
                case 33:
                    return new MaterialInstance() { Underlying = Interop.MaterialInstance.__CreateInstance(obj.__Instance) };
                case 34:
                    return new CSoundTable() { Underlying = Interop.CSoundTable.__CreateInstance(obj.__Instance) };
                case 35:
                    return new LayoutDesc() { Underlying = Interop.LayoutDesc.__CreateInstance(obj.__Instance) };
                case 36:
                    return new EnumMapper() { Underlying = Interop.EnumMapper.__CreateInstance(obj.__Instance) };
                case 37:
                    return new StringTable() { Underlying = Interop.StringTable.__CreateInstance(obj.__Instance) };
                case 38:
                    return new EnumIDMap() { Underlying = Interop.EnumIDMap.__CreateInstance(obj.__Instance) };
                case 39:
                    return new ActionMap() { Underlying = Interop.ActionMap.__CreateInstance(obj.__Instance) };
                case 40:
                    return new DualEnumIDMap() { Underlying = Interop.DualEnumIDMap.__CreateInstance(obj.__Instance) };
                case 41:
                    return new ACString() { Underlying = Interop.ACString.__CreateInstance(obj.__Instance) };
                case 42:
                    return new ParticleEmitterInfo() { Underlying = Interop.ParticleEmitterInfo.__CreateInstance(obj.__Instance) };
                case 43:
                    return new PhysicsScript() { Underlying = Interop.PhysicsScript.__CreateInstance(obj.__Instance) };
                case 44:
                    return new PhysicsScriptTable() { Underlying = Interop.PhysicsScriptTable.__CreateInstance(obj.__Instance) };
                case 45:
                    return new MasterProperty() { Underlying = Interop.MasterProperty.__CreateInstance(obj.__Instance) };
                case 46:
                    return new Font() { Underlying = Interop.Font.__CreateInstance(obj.__Instance) };
                case 47:
                    return new FontLocal() { Underlying = Interop.FontLocal.__CreateInstance(obj.__Instance) };
                case 48:
                    return new CLanguageInfo() { Underlying = Interop.CLanguageInfo.__CreateInstance(obj.__Instance) };
                case 49:
                    return new DBPropertyCollection() { Underlying = Interop.DBPropertyCollection.__CreateInstance(obj.__Instance) };
                case 67:
                    return new DualEnumIDMap() { Underlying = Interop.DualEnumIDMap.__CreateInstance(obj.__Instance) };
                default:
                    throw new NotImplementedException();
            }
        }

        internal virtual void OnBeforeBlockingLoadInto() { }
        internal virtual void OnAfterBlockingLoadInto() { }

        internal virtual void OnBeforeBlockingGetFromDisk() { }
        internal virtual void OnAfterBlockingGetFromDisk() { }
    }

    public abstract class DBObjEx<T> : DBObjEx
    {
        public T Underlying { get; internal set; }
    }

    public class DbObjEx : DBObjEx<Portaled.Interop.CLandBlock>
    {
    }


    public class CLandBlock : DBObjEx<Portaled.Interop.CLandBlock> { }
    public class CLandBlockInfo : DBObjEx<Portaled.Interop.CLandBlockInfo> { }
    public class CEnvCell : DBObjEx<Portaled.Interop.CEnvCell> { }
    public class CGfxObj : DBObjEx<Portaled.Interop.CGfxObj> { }
    public class CSetup : DBObjEx<Portaled.Interop.CSetup>
    {
    }
    public class CAnimation : DBObjEx<Portaled.Interop.CAnimation> { }
    public class Palette : DBObjEx<Portaled.Interop.Palette> { }
    public class ImgTex : DBObjEx<Portaled.Interop.ImgTex>
    {
        internal override void OnBeforeBlockingLoadInto()
        {
        }

        internal override void OnAfterBlockingLoadInto()
        {
        }
    }
    public class RenderSurface : DBObjEx<Portaled.Interop.RenderSurface>
    {
        static System.Drawing.Bitmap bmp;
        static RenderSurface()
        {
            //   bmp = (Bitmap)Bitmap.FromFile(@"C:\dev\AC\ACClient\Portaled\src\Portaled.Service\bin\Debug\Assets\TimAllen.png");

        }

        public RenderSurface() { }
        public RenderSurface(IntPtr dbobj)
        {
            this.Underlying = Portaled.Interop.RenderSurface.__CreateInstance(dbobj);
        }

        public void Load()
        {
            var result = Underlying.Gfxresource.RestoreResource();
        }

        internal unsafe override void OnAfterBlockingLoadInto()
        {
            return;
            var bits = this.Underlying.SourceData.SourceBits;
            if (new IntPtr(bits) == IntPtr.Zero)
                return;
            if (this.Underlying.SourceData.PfDesc.Format == Portaled.Interop.PixelFormatID.PFID_A8R8G8B8)
            {
                ModifyBitsA8R8G8B8(bits);
            }
        }

        unsafe void ModifyBitsA8R8G8B8(sbyte* bits)
        {
            var sz = this.Underlying.SourceData.ImageSize;
            var height = this.Underlying.SourceData.Height;
            var width = this.Underlying.SourceData.Width;

            var bmp2 = new Bitmap(bmp, new Size((int)width, (int)height));

            int offset = 0;
            var srcbits = bmp2.LockBits(new Rectangle(0, 0, (int)width, (int)height), System.Drawing.Imaging.ImageLockMode.ReadOnly, System.Drawing.Imaging.PixelFormat.Format32bppArgb);
            var srcptr0 = (sbyte*)srcbits.Scan0.ToPointer();
            for (int y = 0; y < height; y++)
            {
                var srcoffset = srcbits.Stride * y;

                for (int x = 0; x < width; x++)
                {
                    var srcptr = srcptr0 + srcoffset;
                    var dataptr = bits + offset;
                    *(dataptr + 0) = *srcptr;
                    *(dataptr + 1) = *(srcptr + 1);
                    *(dataptr + 2) = *(srcptr + 2);
                    offset += 4;
                    srcoffset += 4;
                }
            }
        }
    }
    public class CSurface : DBObjEx<Portaled.Interop.CSurface>
    {
    }
    public class CMotionTable : DBObjEx<Portaled.Interop.CMotionTable>
    {
    }
    public class DBWave : DBObjEx<Portaled.Interop.DBWave>
    {
        internal override void OnAfterBlockingLoadInto()
        {
            var mmio = this.Underlying.Wave.MHmmio;
            //this.Underlying.Wave.MMmckiData.Ckid
        }

        internal override void OnAfterBlockingGetFromDisk()
        {
        }
    }
    public class CEnvironment : DBObjEx<Portaled.Interop.CEnvironment>
    {
    }
    public class ChatPoseTable : DBObjEx<Portaled.Interop.ChatPoseTable>
    {
        
    }
    public class cWObjHierRootNode : DBObjEx<Portaled.Interop.CWObjHierRootNode>
    {

    }
    public class BadData : DBObjEx<Portaled.Interop.BadData>
    {
    }

    public class TabooTable : DBObjEx<Portaled.Interop.TabooTable>
    {
    }

    public class DBFile2IDTable : DBObjEx<Portaled.Interop.DBFile2IDTable>
    {
    }

    public class NameFilterTable : DBObjEx<Portaled.Interop.NameFilterTable> { }
    public class PalSet : DBObjEx<Portaled.Interop.PalSet> { }
    public class ClothingTable : DBObjEx<Portaled.Interop.ClothingTable> { }
    public class GfxObjDegradeInfo : DBObjEx<Portaled.Interop.GfxObjDegradeInfo> { }
    public class Scene : DBObjEx<Portaled.Interop.Scene> { }
    public class CRegionDesc : DBObjEx<Portaled.Interop.CRegionDesc> { }
    public class CMasterInputMap : DBObjEx<Portaled.Interop.CMasterInputMap> { }
    public class RenderTexture : DBObjEx<Portaled.Interop.RenderTexture> { }
    public class RenderMaterial : DBObjEx<Portaled.Interop.RenderMaterial> { }
    public class MaterialModifier : DBObjEx<Portaled.Interop.MaterialModifier> { }
    public class MaterialInstance : DBObjEx<Portaled.Interop.MaterialInstance> { }
    public class CSoundTable : DBObjEx<Portaled.Interop.CSoundTable> { }
    public class LayoutDesc : DBObjEx<Portaled.Interop.LayoutDesc> { }
    public class EnumMapper : DBObjEx<Portaled.Interop.EnumMapper> { }
    public class StringTable : DBObjEx<Portaled.Interop.StringTable> { }
    public class EnumIDMap : DBObjEx<Portaled.Interop.EnumIDMap> { }
    public class ActionMap : DBObjEx<Portaled.Interop.ActionMap> { }
    public class DualEnumIDMap : DBObjEx<Portaled.Interop.DualEnumIDMap> { }
    public class ACString : DBObjEx<Portaled.Interop.ACString> { }
    public class ParticleEmitterInfo : DBObjEx<Portaled.Interop.ParticleEmitterInfo> { }
    public class PhysicsScript : DBObjEx<Portaled.Interop.PhysicsScript> { }
    public class PhysicsScriptTable : DBObjEx<Portaled.Interop.PhysicsScriptTable> { }
    public class MasterProperty : DBObjEx<Portaled.Interop.MasterProperty> { }
    public class Font : DBObjEx<Portaled.Interop.Font> { }
    public class FontLocal : DBObjEx<Portaled.Interop.FontLocal> { }
    public class CLanguageInfo : DBObjEx<Portaled.Interop.CLanguageInfo> { }
    public class DBPropertyCollection : DBObjEx<Portaled.Interop.DBPropertyCollection> { }
    public class RenderMesh : DBObjEx<Portaled.Interop.RenderMesh> { }
}
