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
        author = "$STR_rof_weapons_airsoft_P90_Author";
        displayName = "$STR_rof_weapons_airsoft_P90_rof_weap_airsoft_p90_black0";
        descriptionShort = "$STR_rof_weapons_airsoft_P90_rof_weap_airsoft_p90_black1";
        magazines[] = {"rof_50rnd_6mm_bb_airsoft_p90"};
        discreteDistance[] = {25};
        maxZeroing = 25;
        initSpeed = 107; // 350fps
        modes[] = {"Single", "FullAuto"};
        magazineWell[] = {"rof_weapons_airsoft_p90"};
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
                compatibleItems[] = {"rof_muzzle_airsoft_snds"};
            };
        };
    };
    class rof_weap_airsoft_p90_camo : rof_weap_airsoft_p90_black
    {
        displayName = "$STR_rof_weapons_airsoft_P90_rof_weap_airsoft_p90_camo0";
        picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_camo_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
        baseWeapon = "rof_weap_airsoft_p90_camo";
    };
    class rof_weap_airsoft_p90_khaki : rof_weap_airsoft_p90_black
    {
        displayName = "$STR_rof_weapons_airsoft_P90_rof_weap_airsoft_p90_khaki0";
        picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_khaki_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
        baseWeapon = "rof_weap_airsoft_p90_khaki";
    };
    class rof_weap_airsoft_p90_hex : rof_weap_airsoft_p90_black
    {
        displayName = "$STR_rof_weapons_airsoft_P90_rof_weap_airsoft_p90_hex0";
        picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_hex_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
        baseWeapon = "rof_weap_airsoft_p90_hex";
    };
};