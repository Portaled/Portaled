﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Portaled.Core.ACTypes
{

    public struct CInputHandler
    {
        public IntPtr vfptr;
    };

    public struct IInputActionCallback
    {
        public IntPtr vfptr;
    };

    public struct Vector3
    {
        public float x;
        public float y;
        public float z;
    };
    
    public struct AC1Legacy_Vector3
    {
        public Vector3 vector;
    }


    public unsafe struct AC1Legacy_SmartArray<T>
        where T : unmanaged
    {
        public T* m_data;
        public uint m_size;
        public uint m_num;
    };

    public unsafe struct CelestialPosition
    {
        public IDClass__tagDataID_32_0 gfx_id;
        public IDClass__tagDataID_32_0 pes_id;
        public float heading;
        public float rotation;
        public AC1Legacy_Vector3 tex_velocity;
        public float transparent;
        public float luminosity;
        public float max_bright;
        public uint properties;
    };

public unsafe struct GameSky
    {
        public AC1Legacy_SmartArray<CelestialPosition> sky_obj_pos;
        public AC1Legacy_SmartArray<TypedPointer<CPhysicsObj>> sky_obj;
        public AC1Legacy_SmartArray<uint> property_array;
        public CEnvCell* before_sky_cell;
        public CEnvCell* after_sky_cell;
    };

    public unsafe struct LScape
    {
        public uint mid_radius;
        public int mid_width;
        public CLandBlock** land_blocks;
        public CLandBlock** block_draw_list;
        public uint loaded_cell_id;
        public uint viewer_cell_id;
        public int viewer_b_xoff;
        public int viewer_b_yoff;
        public GameSky* sky;
        public CSurface* landscape_detail_surface;
        public CSurface* environment_detail_surface;
        public CSurface* building_detail_surface;
        public CSurface* object_detail_surface;
    };



    public struct PackObj
    {
        public IntPtr vfptr;
    };

    public unsafe struct Frame
    {
        public float qw;
        public float qx;
        public float qy;
        public float qz;
        public fixed float m_fl2gv[9];
        public AC1Legacy_Vector3 m_fOrigin;
    };

    public unsafe struct Position
    {
        public PackObj parent;
        public uint objcell_id;
        public Frame frame;
    };


    public enum SoundType
    {
        Sound_Invalid = 0x0,
        Sound_Speak1 = 0x1,
        Sound_Random = 0x2,
        Sound_Attack1 = 0x3,
        Sound_Attack2 = 0x4,
        Sound_Attack3 = 0x5,
        Sound_SpecialAttack1 = 0x6,
        Sound_SpecialAttack2 = 0x7,
        Sound_SpecialAttack3 = 0x8,
        Sound_Damage1 = 0x9,
        Sound_Damage2 = 0xA,
        Sound_Damage3 = 0xB,
        Sound_Wound1 = 0xC,
        Sound_Wound2 = 0xD,
        Sound_Wound3 = 0xE,
        Sound_Death1 = 0xF,
        Sound_Death2 = 0x10,
        Sound_Death3 = 0x11,
        Sound_Grunt1 = 0x12,
        Sound_Grunt2 = 0x13,
        Sound_Grunt3 = 0x14,
        Sound_Oh1 = 0x15,
        Sound_Oh2 = 0x16,
        Sound_Oh3 = 0x17,
        Sound_Heave1 = 0x18,
        Sound_Heave2 = 0x19,
        Sound_Heave3 = 0x1A,
        Sound_Knockdown1 = 0x1B,
        Sound_Knockdown2 = 0x1C,
        Sound_Knockdown3 = 0x1D,
        Sound_Swoosh1 = 0x1E,
        Sound_Swoosh2 = 0x1F,
        Sound_Swoosh3 = 0x20,
        Sound_Thump1 = 0x21,
        Sound_Smash1 = 0x22,
        Sound_Scratch1 = 0x23,
        Sound_Spear = 0x24,
        Sound_Sling = 0x25,
        Sound_Dagger = 0x26,
        Sound_ArrowWhiz1 = 0x27,
        Sound_ArrowWhiz2 = 0x28,
        Sound_CrossbowPull = 0x29,
        Sound_CrossbowRelease = 0x2A,
        Sound_BowPull = 0x2B,
        Sound_BowRelease = 0x2C,
        Sound_ThrownWeaponRelease1 = 0x2D,
        Sound_ArrowLand = 0x2E,
        Sound_Collision = 0x2F,
        Sound_HitFlesh1 = 0x30,
        Sound_HitLeather1 = 0x31,
        Sound_HitChain1 = 0x32,
        Sound_HitPlate1 = 0x33,
        Sound_HitMissile1 = 0x34,
        Sound_HitMissile2 = 0x35,
        Sound_HitMissile3 = 0x36,
        Sound_Footstep1 = 0x37,
        Sound_Footstep2 = 0x38,
        Sound_Walk1 = 0x39,
        Sound_Dance1 = 0x3A,
        Sound_Dance2 = 0x3B,
        Sound_Dance3 = 0x3C,
        Sound_Hidden1 = 0x3D,
        Sound_Hidden2 = 0x3E,
        Sound_Hidden3 = 0x3F,
        Sound_Eat1 = 0x40,
        Sound_Drink1 = 0x41,
        Sound_Open = 0x42,
        Sound_Close = 0x43,
        Sound_OpenSlam = 0x44,
        Sound_CloseSlam = 0x45,
        Sound_Ambient1 = 0x46,
        Sound_Ambient2 = 0x47,
        Sound_Ambient3 = 0x48,
        Sound_Ambient4 = 0x49,
        Sound_Ambient5 = 0x4A,
        Sound_Ambient6 = 0x4B,
        Sound_Ambient7 = 0x4C,
        Sound_Ambient8 = 0x4D,
        Sound_Waterfall = 0x4E,
        Sound_LogOut = 0x4F,
        Sound_LogIn = 0x50,
        Sound_LifestoneOn = 0x51,
        Sound_AttribUp = 0x52,
        Sound_AttribDown = 0x53,
        Sound_SkillUp = 0x54,
        Sound_SkillDown = 0x55,
        Sound_HealthUp = 0x56,
        Sound_HealthDown = 0x57,
        Sound_ShieldUp = 0x58,
        Sound_ShieldDown = 0x59,
        Sound_EnchantUp = 0x5A,
        Sound_EnchantDown = 0x5B,
        Sound_VisionUp = 0x5C,
        Sound_VisionDown = 0x5D,
        Sound_Fizzle = 0x5E,
        Sound_Launch = 0x5F,
        Sound_Explode = 0x60,
        Sound_TransUp = 0x61,
        Sound_TransDown = 0x62,
        Sound_BreatheFlaem = 0x63,
        Sound_BreatheAcid = 0x64,
        Sound_BreatheFrost = 0x65,
        Sound_BreatheLightning = 0x66,
        Sound_Create = 0x67,
        Sound_Destroy = 0x68,
        Sound_Lockpicking = 0x69,
        Sound_UI_EnterPortal = 0x6A,
        Sound_UI_ExitPortal = 0x6B,
        Sound_UI_GeneralQuery = 0x6C,
        Sound_UI_GeneralError = 0x6D,
        Sound_UI_TransientMessage = 0x6E,
        Sound_UI_IconPickUp = 0x6F,
        Sound_UI_IconSuccessfulDrop = 0x70,
        Sound_UI_IconInvalid_Drop = 0x71,
        Sound_UI_ButtonPress = 0x72,
        Sound_UI_GrabSlider = 0x73,
        Sound_UI_ReleaseSlider = 0x74,
        Sound_UI_NewTargetSelected = 0x75,
        Sound_UI_Roar = 0x76,
        Sound_UI_Bell = 0x77,
        Sound_UI_Chant1 = 0x78,
        Sound_UI_Chant2 = 0x79,
        Sound_UI_DarkWhispers1 = 0x7A,
        Sound_UI_DarkWhispers2 = 0x7B,
        Sound_UI_DarkLaugh = 0x7C,
        Sound_UI_DarkWind = 0x7D,
        Sound_UI_DarkSpeech = 0x7E,
        Sound_UI_Drums = 0x7F,
        Sound_UI_GhostSpeak = 0x80,
        Sound_UI_Breathing = 0x81,
        Sound_UI_Howl = 0x82,
        Sound_UI_LostSouls = 0x83,
        Sound_UI_Squeal = 0x84,
        Sound_UI_Thunder1 = 0x85,
        Sound_UI_Thunder2 = 0x86,
        Sound_UI_Thunder3 = 0x87,
        Sound_UI_Thunder4 = 0x88,
        Sound_UI_Thunder5 = 0x89,
        Sound_UI_Thunder6 = 0x8A,
        Sound_RaiseTrait = 0x8B,
        Sound_WieldObject = 0x8C,
        Sound_UnwieldObject = 0x8D,
        Sound_ReceiveItem = 0x8E,
        Sound_PickUpItem = 0x8F,
        Sound_DropItem = 0x90,
        Sound_ResistSpell = 0x91,
        Sound_PicklockFail = 0x92,
        Sound_LockSuccess = 0x93,
        Sound_OpenFailDueToLock = 0x94,
        Sound_TriggerActivated = 0x95,
        Sound_SpellExpire = 0x96,
        Sound_ItemManaDepleted = 0x97,
        Sound_TriggerActivated1 = 0x98,
        Sound_TriggerActivated2 = 0x99,
        Sound_TriggerActivated3 = 0x9A,
        Sound_TriggerActivated4 = 0x9B,
        Sound_TriggerActivated5 = 0x9C,
        Sound_TriggerActivated6 = 0x9D,
        Sound_TriggerActivated7 = 0x9E,
        Sound_TriggerActivated8 = 0x9F,
        Sound_TriggerActivated9 = 0xA0,
        Sound_TriggerActivated10 = 0xA1,
        Sound_TriggerActivated11 = 0xA2,
        Sound_TriggerActivated12 = 0xA3,
        Sound_TriggerActivated13 = 0xA4,
        Sound_TriggerActivated14 = 0xA5,
        Sound_TriggerActivated15 = 0xA6,
        Sound_TriggerActivated16 = 0xA7,
        Sound_TriggerActivated17 = 0xA8,
        Sound_TriggerActivated18 = 0xA9,
        Sound_TriggerActivated19 = 0xAA,
        Sound_TriggerActivated20 = 0xAB,
        Sound_TriggerActivated21 = 0xAC,
        Sound_TriggerActivated22 = 0xAD,
        Sound_TriggerActivated23 = 0xAE,
        Sound_TriggerActivated24 = 0xAF,
        Sound_TriggerActivated25 = 0xB0,
        Sound_TriggerActivated26 = 0xB1,
        Sound_TriggerActivated27 = 0xB2,
        Sound_TriggerActivated28 = 0xB3,
        Sound_TriggerActivated29 = 0xB4,
        Sound_TriggerActivated30 = 0xB5,
        Sound_TriggerActivated31 = 0xB6,
        Sound_TriggerActivated32 = 0xB7,
        Sound_TriggerActivated33 = 0xB8,
        Sound_TriggerActivated34 = 0xB9,
        Sound_TriggerActivated35 = 0xBA,
        Sound_TriggerActivated36 = 0xBB,
        Sound_TriggerActivated37 = 0xBC,
        Sound_TriggerActivated38 = 0xBD,
        Sound_TriggerActivated39 = 0xBE,
        Sound_TriggerActivated40 = 0xBF,
        Sound_TriggerActivated41 = 0xC0,
        Sound_TriggerActivated42 = 0xC1,
        Sound_TriggerActivated43 = 0xC2,
        Sound_TriggerActivated44 = 0xC3,
        Sound_TriggerActivated45 = 0xC4,
        Sound_TriggerActivated46 = 0xC5,
        Sound_TriggerActivated47 = 0xC6,
        Sound_TriggerActivated48 = 0xC7,
        Sound_TriggerActivated49 = 0xC8,
        Sound_TriggerActivated50 = 0xC9,
        Sound_HealthDownVoid = 0xCA,
        Sound_RegenDownVoid = 0xCB,
        Sound_SkillDownVoid = 0xCC,
        NUM_SOUND_TYPES = 0xCD,
        FORCE_SoundType_32_BIT = 0x7FFFFFFF,
    };

    public struct AmbientSoundDesc
    {
        public SoundType stype;
        public int is_continuous;
        public float volume;
        public float base_chance;
        public float min_rate;
        public float max_rate;
    };

    public unsafe struct AmbientSTBDesc
    {
        public IDClass__tagDataID_32_0 stb_id;
        public int stb_not_found;
        public AC1Legacy_SmartArray<TypedPointer<AmbientSoundDesc>> ambient_sounds;
        public CSoundTable* sound_table;
        public uint play_count;
    };

    public unsafe struct AmbientSound
    {
        public IntPtr vfptr;
        public int on_queue;
        public float sound_count;
        public AmbientSTBDesc* desc;
        public uint ambient_sound_id;
        public int constant_sound;
    };

    public unsafe struct DArray<T>
        where T : unmanaged
    {
        public T* data;
        public uint blocksize;
        public uint next_available;
        public uint sizeOf;
    };


    public unsafe struct AC1Legacy_PQueueArray_PQueueNode<T>
        where T : unmanaged
    {
        public T key;
        public void* data;
    }

    public unsafe struct AC1Legacy_PQueueArray<T>
        where T : unmanaged
    {
        public IntPtr vfptr;
        public AC1Legacy_PQueueArray_PQueueNode<T>* A;
        public int curNumNodes;
        public int allocatedNodes;
        public int minAllocatedNodes;
    };

    public unsafe struct Ambient
    {
        public Position player_pos;
        public float total_sound_count;
        public uint num_sounds;
        public DArray<TypedPointer<AmbientSound>> sounds;
        public AC1Legacy_PQueueArray<double> sound_queue;
    };


    [StructLayout(LayoutKind.Sequential, Pack = 8)]
    public unsafe struct CellManager //align 8
    {
        LScape* lscape;
        Ambient* ambient_sounds;
        public uint last_prefetch_cell_id;
        public double last_prefetch_check;
        public bool blocking_for_cells;
        public bool all_cells_available;
        public uint num_cells_waiting;
        public uint total_num_cells_waiting;
        public CObjCell* curr_cell;
        public Position load_pos;
        public int keep_lscape_loaded;
    };


    public unsafe struct CameraSet
    {
        public IntPtr refCountTemplateVfptr;
        public uint m_cRef;
        public CameraManager* cm;
        public SmartBox* sbox;
        public int looking_down;
        public int in_map_mode;
        public int mouselook_active;
        public int camera_movement_active;
        public int targeting;
        public int rot_left;
        public int rot_right;
        public int lower;
        public int raise;
        public int farther;
        public int closer;
        public float current_stiffness;
        public short mouselook_x_extent;
        public short mouselook_y_extent;
        public AC1Legacy_Vector3 lookdown_saved_offset;
        public AC1Legacy_Vector3 lookdown_saved_target_dir;
        public double m_ttLastRotate;
        public double m_ttLastRaiseOrLower;
        public double m_ttLastZoom;
        public double m_LastServerMessage;
        public double m_LastMouseMovement;
    };

    public enum CameraTarget
    {
        INVALID_TARGET = 0x0,
        LOOK_IN_DIRECTION = 0x1,
        LOOK_AT_OBJECT = 0x2,
        LOOK_AT_PIVOT = 0x4,
        ALIGN_WITH_PIVOT = 0x8,
        ALIGN_WITH_PLANE = 0x10,
        FORCE_CameraTarget_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct CameraManager
    {
        public CInputHandler inputHandler;
        public IInputActionCallback inputActionCallback;
        public float t_stiffness;
        public float r_stiffness;
        public uint pivot_object_id;
        public int pivot_part_index;
        public AC1Legacy_Vector3 pivot_offset;
        public uint target_object_id;
        public int target_part_index;
        public AC1Legacy_Vector3 target_offset;
        public AC1Legacy_Vector3 direction;
        public CameraTarget target_status;
        public AC1Legacy_Vector3 viewer_offset;
        public bool m_bAlignCameraToSlope;
        public float m_rCameraStiffness;
        public float m_rCameraAdjustmentSpeed;
        public uint m_dwPivotOffsetMovement;
        public uint m_dwCameraOffsetMovement;
        public float m_rMovementSpeed;
        public float scale;
        public double last_update_time;
        public AC1Legacy_Vector3 old_velocities1;
        public AC1Legacy_Vector3 old_velocities2;
        public AC1Legacy_Vector3 old_velocities3;
        public AC1Legacy_Vector3 old_velocities4;
        public AC1Legacy_Vector3 old_velocities5;
        public int old_velocity_num;
        public bool m_bEnabled;
        public CameraSet* m_pCurrentCameraSet;
    };

     /* 
        public Position viewer_sought_position;
        public CameraManager* camera_manager;
        public CellManager* cell_manager;
        public CPhysics* physics;
        public CObjectMaint* m_pObjMaint;
        public LScape* lscape;
        public Ambient* ambient_sounds;
        public CommandInterpreter* cmdinterp;
     */
}
