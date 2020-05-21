class rof_weapons_airsoft_OpticRail;

class CfgWeapons
{
    class Rifle;
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
};