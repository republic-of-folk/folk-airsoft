class CfgVehicles
{
    class Pistol_Base_F;

    class rof_weapon_airsoft_p99_base : Pistol_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        author = "$STR_rof_weapons_airsoft_P99_Author";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_Pistols";
        vehicleClass = "WeaponsHandguns";

        class TransportWeapons
        {
            class rof_weap_airsoft_p99
            {
                weapon = "rof_weap_airsoft_p99";
                count = 1;
            };
        };
    };
    class rof_weapon_airsoft_p99 : rof_weapon_airsoft_p99_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "$STR_rof_weapons_airsoft_P99_rof_weapon_airsoft_p990";

        class TransportMagazines
        {
            class rof_16rnd_6mm_bb_airsoft_mag
            {
                magazine = "rof_16rnd_6mm_bb_airsoft_mag";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_p99 : rof_weapon_airsoft_p99_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "$STR_rof_weapons_airsoft_P99_rof_weapon_lethal_airsoft_p990";

        class TransportMagazines
        {
            class rof_16rnd_6mm_lethal_airsoft_mag
            {
                magazine = "rof_16rnd_6mm_lethal_airsoft_mag";
                count = 1;
            };
        };
    };
};