class rof_weapons_airsoft_OpticRail;

class CfgWeapons
{
    class Rifle;
    class UGL_F;

    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
    };
    class arifle_SPAR_01_base_F : Rifle_Base_F {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot;
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
        class Single;
        class FullAuto;
    };

    class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F
    {
        // author = "$STR_A3_Bohemia_Interactive";
        // _generalMacro = "arifle_SPAR_01_GL_base_F";
        // scope = 0;
        // model = "\A3\Weapons_F_Exp\Rifles\SPAR_01\SPAR_01_GL_F.p3d";
        // UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
        // hiddenSelections[] = {"camo1","camo2","camo3"};
        // handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"};
        // reloadAction = "GestureReloadSPAR_01";
        // inertia = 0.6;
        // aimTransitionSpeed = 0.9;
        // class WeaponSlotsInfo: WeaponSlotsInfo
        // {
        //     class UnderBarrelSlot: UnderBarrelSlot
        //     {
        //         compatibleItems[] = {};
        //     };
        //     mass = 110;
        // };
        // class EGLM: UGL_F
        // {
        //     displayName = "$STR_A3_CfgWeapons_arifle_SPAR_01_GL_base_F_EGLM0";
        //     useModelOptics = 0;
        //     useExternalOptic = 0;
        //     cameraDir = "OP_look";
        //     discreteDistance[] = {50,100,150,200,250,300,350,400};
        //     discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
        //     discreteDistanceInitIndex = 1;
        //     reloadAction = "GestureReloadSPARUGL";
        // };
        // aiDispersionCoefY = 6.0;
        // aiDispersionCoefX = 4.0;
        // muzzles[] = {"this","EGLM"};

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : MuzzleSlot {};
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
            class UnderBarrelSlot : UnderBarrelSlot {};
        };
        class Single;
        class FullAuto;
        class EGLM: UGL_F {};
    };
    

    class rof_weap_airsoft_hk416_base : arifle_SPAR_01_base_F {
        author = "$STR_rof_weapons_airsoft_hk416_Author";
        descriptionShort = "$STR_rof_weapons_airsoft_hk416_rof_weap_airsoft_hk416_base0";
        magazines[] = {"rof_30rnd_6mm_bb_airsoft_stanag"};
        discreteDistance[] = {25};
        maxZeroing = 25;
        initSpeed = 107; // 350fps
        modes[] = {"Single", "FullAuto"};
        magazineWell[] = {"rof_weapons_airsoft_stanag"};
        recoil = "rof_recoil_aeg";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : MuzzleSlot {
                compatibleItems[] = {"rof_muzzle_airsoft_snds"};
            };
            class CowsSlot : rof_weapons_airsoft_OpticRail {};
            // class PointerSlot : PointerSlot {};
            // class UnderBarrelSlot : UnderBarrelSlot {};
        };

        class Single : Single
        {
            dispersion = 0.0072;

            class basesoundmodetype;
            class StandardSound : basesoundmodetype
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
            class SilencedSound : basesoundmodetype
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
        };
        class FullAuto : FullAuto
        {
            dispersion = 0.0072;

            class basesoundmodetype;
            class StandardSound : basesoundmodetype
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
            class SilencedSound : basesoundmodetype
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
        };
    };

    class rof_weap_airsoft_hk416_GL_base : arifle_SPAR_01_GL_base_F {
        author = "$STR_rof_weapons_airsoft_hk416_Author";
        descriptionShort = "$STR_rof_weapons_airsoft_hk416_rof_weap_airsoft_hk416_GL_base0";
        magazines[] = {"rof_30rnd_6mm_bb_airsoft_stanag"};
        discreteDistance[] = {25};
        maxZeroing = 25;
        initSpeed = 107; // 350fps
        modes[] = {"Single", "FullAuto"};
        magazineWell[] = {"rof_weapons_airsoft_stanag"};
        recoil = "rof_recoil_aeg";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : MuzzleSlot {
                compatibleItems[] = {"rof_muzzle_airsoft_snds"};
            };
            class CowsSlot : rof_weapons_airsoft_OpticRail {};
            // class PointerSlot : PointerSlot {};
            // class UnderBarrelSlot : UnderBarrelSlot {};
        };

        class Single : Single
        {
            dispersion = 0.0072;

            class basesoundmodetype;
            class StandardSound : basesoundmodetype
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
            class SilencedSound : basesoundmodetype
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
        };
        class FullAuto : FullAuto
        {
            dispersion = 0.0072;

            class basesoundmodetype;
            class StandardSound : basesoundmodetype
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
            class SilencedSound : basesoundmodetype
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
        };

        class EGLM: EGLM
        {
            discreteDistance[] = {50};
            discreteDistanceCameraPoint[] = {"OP_eye_50"};
            discreteDistanceInitIndex = 0;
        };
    };
    
    class rof_weap_airsoft_hk416_blk : rof_weap_airsoft_hk416_base {
        scope = 2;
        displayName = "$STR_rof_weapons_airsoft_hk416_rof_weap_airsoft_hk416_blk0";
        baseWeapon = "rof_weap_airsoft_hk416_blk";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
    };
    class rof_weap_airsoft_hk416_khk : rof_weap_airsoft_hk416_base {
        scope = 2;
        displayName = "$STR_rof_weapons_airsoft_hk416_rof_weap_airsoft_hk416_khk0";
        baseWeapon = "rof_weap_airsoft_hk416_khk";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_khk_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
    };
    class rof_weap_airsoft_hk416_snd : rof_weap_airsoft_hk416_base {
        scope = 2;
        displayName = "$STR_rof_weapons_airsoft_hk416_rof_weap_airsoft_hk416_snd0";
        baseWeapon = "rof_weap_airsoft_hk416_snd";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_snd_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};        
        magazines[] = {"rof_30rnd_6mm_bb_airsoft_stanag_snd"};
    };

    class rof_weap_airsoft_hk416_GL_blk : rof_weap_airsoft_hk416_GL_base {
        scope = 2;
        displayName = "$STR_rof_weapons_airsoft_hk416_rof_weap_airsoft_hk416_GL_blk0";
        baseWeapon = "rof_weap_airsoft_hk416_GL_blk";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_blk_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_co.paa"};
    };

    class rof_weap_airsoft_hk416_GL_khk : rof_weap_airsoft_hk416_GL_base {
        scope = 2;
        displayName = "$STR_rof_weapons_airsoft_hk416_rof_weap_airsoft_hk416_GL_khk0";
        baseWeapon = "rof_weap_airsoft_hk416_GL_khk";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_khk_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_khk_F_01_co.paa"};
    };

    class rof_weap_airsoft_hk416_GL_snd : rof_weap_airsoft_hk416_GL_base {
        scope = 2;
        displayName = "$STR_rof_weapons_airsoft_hk416_rof_weap_airsoft_hk416_GL_snd0";
        baseWeapon = "rof_weap_airsoft_hk416_GL_snd";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_snd_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_snd_F_01_co.paa"};
        magazines[] = {"rof_30rnd_6mm_bb_airsoft_stanag_snd"};
    };
};