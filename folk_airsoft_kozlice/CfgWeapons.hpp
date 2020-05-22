class CfgWeapons
{
    class Rifle_Long_Base_F;
    class sgun_HunterShotgun_01_base_F : Rifle_Long_Base_F {};

    class rof_weap_airsoft_kozlice_base : sgun_HunterShotgun_01_base_F {
        author = "$STR_rof_weapons_airsoft_kozlice_Author";
        descriptionShort = "$STR_rof_weapons_airsoft_kozlice_rof_weap_airsoft_kozlice_base0";
        discreteDistance[] = {25};
        maxZeroing = 25;
        initSpeed = 107; // 350fps
        recoil = "rof_recoil_aeg";
        modes[] = {"Single"};
        magazines[] = {"rof_2rnd_6mm_airsoft_shotgun"};
        magazineWell[] = {"rof_weapons_airsoft_kozlice"};
    };

    class rof_weap_airsoft_kozlice : rof_weap_airsoft_kozlice_base {
        scope = 2;
        baseWeapon = "rof_weap_airsoft_kozlice";
        displayName = "$STR_rof_weapons_airsoft_kozlice_rof_weap_airsoft_kozlice0";
        picture = "a3\Weapons_F_Enoch\Shotguns\HunterShotgun_01\Data\UI\gear_HunterShotgun_01_X_CA.paa";
    };
};