class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;

class CfgWeapons
{
    class Pistol_Base_F;

    class hgun_P07_F : Pistol_Base_F
    {
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
        class WeaponSlotsInfo
        {
            class MuzzleSlot;
        };
    };

    class rof_weap_airsoft_p99 : hgun_P07_F
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "$STR_rof_weapons_airsoft_P99_Author";
        displayName = "$STR_rof_weapons_airsoft_P99_rof_weap_airsoft_p990";
        descriptionShort = "$STR_rof_weapons_airsoft_P99_rof_weap_airsoft_p991";
        magazines[] = {"rof_16rnd_6mm_bb_airsoft_mag"};
        magazineWell[] = {"rof_weapons_airsoft_p99"};
        baseWeapon = "rof_weap_airsoft_p99";
        discreteDistance[] = {25};
        maxZeroing = 25;
        initSpeed = 107; // 350fps

        class Single : Single
        {
            class StandardSound : StandardSound
            {
                SoundSetShot[] = {"P07_silencerShot_SoundSet", "P07_silencerTail_SoundSet", "P07_silencerInteriorTail_SoundSet"};
            };
            class SilencedSound : SilencedSound
            {
                SoundSetShot[] = {"P07_silencerShot_SoundSet", "P07_silencerTail_SoundSet", "P07_silencerInteriorTail_SoundSet"};
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
};