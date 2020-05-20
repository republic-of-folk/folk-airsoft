#define _ARMA_
#define ROF_AIRSOFT_BB_SHORTNAME "6mm BB"
#define ROF_AIRSOFT_LETHAL_SHORTNAME "6mm lethal"

class cfgPatches
{
	class rof_weapons_airsoft_hk416
	{
		units[] = {
            "rof_weapon_airsoft_hk416_black",
            "rof_weapon_lethal_airsoft_hk416_black",
        };
		weapons[] = {
            "rof_weap_airsoft_hk416_black",
        };
		requiredversion = 1.94;
		requiredaddons[] = {
			"rof_weapons_airsoft_core",
            "A3_Weapons_F_Exp",
        };
		version = "1.0.1";
		author = "Boberro (Republic of Folk)";
	};
};

class cfgWeapons
{
    class Rifle_Base_F;
    class arifle_SPAR_01_base_F : Rifle_Base_F {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class rof_weap_airsoft_hk416_base : arifle_SPAR_01_base_F {
        author = "Bohemia Interactive / Republic of Folk";
        descriptionShort = "Airsoft assault rifle for all your tacticool needs";
        magazines[] = {
            "rof_30rnd_6mm_bb_airsoft_stanag",
            "rof_100rnd_6mm_bb_airsoft_stanag",
            "rof_300rnd_6mm_bb_airsoft_stanag",
            "rof_30rnd_6mm_lethal_airsoft_stanag",
            "rof_100rnd_6mm_lethal_airsoft_stanag",
            "rof_300rnd_6mm_lethal_airsoft_stanag",
        };
        discreteDistance[] = {25};
        maxZeroing = 25;
        initSpeed = 107; // 350fps
        modes[] = {"Single", "FullAuto"};
        magazineWell[] = {};
        recoil = "rof_recoil_aeg";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            // class MuzzleSlot : MuzzleSlot {
            //     compatibleItems[] = {};
            // };
            // class CowsSlot : CowsSlot {};
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
    class rof_weap_airsoft_hk416_black : rof_weap_airsoft_hk416_base {
        scope = 2;
        displayName = "Replica HK416 (Black)";
        baseWeapon = "rof_weap_airsoft_hk416_black";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};
    };
    class rof_weap_airsoft_hk416_khk : rof_weap_airsoft_hk416_base {
        scope = 2;
        displayName = "Replica HK416 (Khaki)";
        baseWeapon = "rof_weap_airsoft_hk416_khk";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_khk_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"};
    };
    class rof_weap_airsoft_hk416_snd : rof_weap_airsoft_hk416_base {
        scope = 2;
        displayName = "Replica HK416 (Sand)";
        baseWeapon = "rof_weap_airsoft_hk416_snd";
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_snd_F_X_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};        
    };
};

class cfgVehicles
{
    class Weapon_Base_F;

    class rof_weapon_airsoft_hk416_base : Weapon_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        author = "Bohemia Interactive / Republic of Folk";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_AssaultRifles";
        vehicleClass = "WeaponsPrimary";
        class TransportMagazines
        {
            class rof_30rnd_6mm_bb_airsoft_stanag
            {
                magazine = "rof_30rnd_6mm_bb_airsoft_stanag";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_hk416_base : Weapon_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        author = "Bohemia Interactive / Republic of Folk";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_AssaultRifles";
        vehicleClass = "WeaponsPrimary";
        class TransportMagazines
        {
            class rof_30rnd_6mm_lethal_airsoft_stanag
            {
                magazine = "rof_30rnd_6mm_lethal_airsoft_stanag";
                count = 1;
            };
        };
    };
    class rof_weapon_airsoft_hk416_black : rof_weapon_airsoft_hk416_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica HK416 (Black)";
        class TransportWeapons
        {
            class rof_weap_airsoft_hk416_black
            {
                weapon = "rof_weap_airsoft_hk416_black";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_hk416_black : rof_weapon_lethal_airsoft_hk416_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica (lethal) HK416 (Black)";
        class TransportWeapons
        {
            class rof_weap_airsoft_hk416_black
            {
                weapon = "rof_weap_airsoft_hk416_black";
                count = 1;
            };
        };
    };
};