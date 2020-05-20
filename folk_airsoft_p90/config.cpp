#define _ARMA_
#define ROF_AIRSOFT_BB_SHORTNAME "6mm BB"
#define ROF_AIRSOFT_LETHAL_SHORTNAME "6mm lethal"

class cfgPatches
{
    class rof_weapons_airsoft_P90
    {
        units[] = {
            "rof_weapon_airsoft_p90_black",
            "rof_weapon_airsoft_p90_camo",
            "rof_weapon_airsoft_p90_khaki",
            "rof_weapon_airsoft_p90_hex",
            "rof_weapon_lethal_airsoft_p90_black",
            "rof_weapon_lethal_airsoft_p90_camo",
            "rof_weapon_lethal_airsoft_p90_khaki",
            "rof_weapon_lethal_airsoft_p90_hex",
        };
        weapons[] = {
            "rof_weap_airsoft_p90_black",
            "rof_weap_airsoft_p90_camo",
            "rof_weap_airsoft_p90_khaki",
            "rof_weap_airsoft_p90_hex",
        };
        requiredversion = 1.94;
        requiredaddons[] = {
            "rof_weapons_airsoft_core",
            "A3_Weapons_F_Mod",
        };
        version = "1.0.1";
        author = "Boberro (Republic of Folk)";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;

class cfgWeapons
{
    class Rifle_Base_F;

    class SMG_03_TR_BASE : Rifle_Base_F
    {
        class OpticsModes
        {
            class Kolimator
            {
            };
        };
        class Single : Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType
            {
            };
            class SilencedSound : BaseSoundModeType
            {
            };
        };
        class FullAuto : Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType
            {
            };
            class SilencedSound : BaseSoundModeType
            {
            };
        };
    };
    class SMG_03_black : SMG_03_TR_BASE
    {
        class OpticsModes : OpticsModes
        {
            class Kolimator : Kolimator
            {
            };
            class IronSight : Kolimator
            {
            };
        };
        class Single : Single
        {
            class StandardSound : StandardSound
            {
            };
            class SilencedSound : SilencedSound
            {
            };
        };
        class FullAuto : FullAuto
        {
            class StandardSound : StandardSound
            {
            };
            class SilencedSound : SilencedSound
            {
            };
        };
        class WeaponSlotsInfo
        {
            class MuzzleSlot
            {
            };
        };
    };

    class rof_weap_airsoft_p90_black : SMG_03_black
    {
        author = "Bohemia Interactive / Republic of Folk";
        displayName = "Replica P90 (Black)";
        descriptionShort = "Most popular beginners' airsoft SMG";
        magazines[] = {"rof_50rnd_6mm_bb_airsoft_p90", "rof_100rnd_6mm_bb_airsoft_p90", "rof_300rnd_6mm_bb_airsoft_p90", "rof_50rnd_6mm_lethal_airsoft_p90", "rof_100rnd_6mm_lethal_airsoft_p90", "rof_300rnd_6mm_lethal_airsoft_p90"};
        discreteDistance[] = {25};
        maxZeroing = 25;
        initSpeed = 107; // 350fps
        modes[] = {"Single", "FullAuto"};
        magazineWell[] = {};
        recoil = "rof_recoil_aeg";
        baseWeapon = "rof_weap_airsoft_p90_black";

        class OpticsModes : OpticsModes
        {
            class Kolimator : Kolimator
            {
                distanceZoomMin = 25;
                distanceZoomMax = 25;
            };
            class IronSight : IronSight
            {
                distanceZoomMin = 25;
                distanceZoomMax = 25;
            };
        };
        class Single : Single
        {
            dispersion = 0.0072;

            class StandardSound : StandardSound
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
            class SilencedSound : SilencedSound
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
        };
        class FullAuto : FullAuto
        {
            dispersion = 0.0072;

            class StandardSound : StandardSound
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
            class SilencedSound : SilencedSound
            {
                soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : MuzzleSlot
            {
                compatibleItems[] = {};
            };
        };
    };
    class rof_weap_airsoft_p90_camo : rof_weap_airsoft_p90_black
    {
        displayName = "Replica P90 (Camo)";
        picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_camo_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
        baseWeapon = "rof_weap_airsoft_p90_camo";
    };
    class rof_weap_airsoft_p90_khaki : rof_weap_airsoft_p90_black
    {
        displayName = "Replica P90 (Khaki)";
        picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_khaki_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
        baseWeapon = "rof_weap_airsoft_p90_khaki";
    };
    class rof_weap_airsoft_p90_hex : rof_weap_airsoft_p90_black
    {
        displayName = "Replica P90 (Hex)";
        picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_hex_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
        baseWeapon = "rof_weap_airsoft_p90_hex";
    };
};

class cfgVehicles
{
    class Weapon_Base_F;

    class rof_weapon_airsoft_p90_base : Weapon_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        author = "Bohemia Interactive / Republic of Folk";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_SubMachineGuns";
        vehicleClass = "WeaponsPrimary";
        class TransportMagazines
        {
            class rof_50rnd_6mm_bb_airsoft_p90
            {
                magazine = "rof_50rnd_6mm_bb_airsoft_p90";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_p90_base : Weapon_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        author = "Bohemia Interactive / Republic of Folk";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_SubMachineGuns";
        vehicleClass = "WeaponsPrimary";
        class TransportMagazines
        {
            class rof_50rnd_6mm_lethal_airsoft_p90
            {
                magazine = "rof_50rnd_6mm_lethal_airsoft_p90";
                count = 1;
            };
        };
    };
    class rof_weapon_airsoft_p90_black : rof_weapon_airsoft_p90_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica P90 (Black)";
        class TransportWeapons
        {
            class rof_weap_airsoft_p90_black
            {
                weapon = "rof_weap_airsoft_p90_black";
                count = 1;
            };
        };
    };
    class rof_weapon_airsoft_p90_camo : rof_weapon_airsoft_p90_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica P90 (Camo)";
        class TransportWeapons
        {
            class rof_weap_airsoft_p90_camo
            {
                weapon = "rof_weap_airsoft_p90_camo";
                count = 1;
            };
        };
    };
    class rof_weapon_airsoft_p90_khaki : rof_weapon_airsoft_p90_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica P90 (Khaki)";
        class TransportWeapons
        {
            class rof_weap_airsoft_p90_khaki
            {
                weapon = "rof_weap_airsoft_p90_khaki";
                count = 1;
            };
        };
    };
    class rof_weapon_airsoft_p90_hex : rof_weapon_airsoft_p90_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica P90 (Hex)";
        class TransportWeapons
        {
            class rof_weap_airsoft_p90_hex
            {
                weapon = "rof_weap_airsoft_p90_hex";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_p90_black : rof_weapon_lethal_airsoft_p90_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica (lethal) P90 (Black)";
        class TransportWeapons
        {
            class rof_weap_airsoft_p90_black
            {
                weapon = "rof_weap_airsoft_p90_black";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_p90_camo : rof_weapon_lethal_airsoft_p90_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica (lethal) P90 (Camo)";
        class TransportWeapons
        {
            class rof_weap_airsoft_p90_camo
            {
                weapon = "rof_weap_airsoft_p90_camo";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_p90_khaki : rof_weapon_lethal_airsoft_p90_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica (lethal) P90 (Khaki)";
        class TransportWeapons
        {
            class rof_weap_airsoft_p90_khaki
            {
                weapon = "rof_weap_airsoft_p90_khaki";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_p90_hex : rof_weapon_lethal_airsoft_p90_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica (lethal) P90 (Hex)";
        class TransportWeapons
        {
            class rof_weap_airsoft_p90_hex
            {
                weapon = "rof_weap_airsoft_p90_hex";
                count = 1;
            };
        };
    };
};