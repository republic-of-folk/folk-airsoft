class CfgVehicles
{
    class Weapon_Base_F;

    class rof_weapon_airsoft_kozlice_base : Weapon_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        author = "$STR_rof_weapons_airsoft_kozlice_Author";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_AssaultRifles";
        vehicleClass = "WeaponsPrimary";
        class TransportMagazines
        {
            // class rof_30rnd_6mm_bb_airsoft_stanag
            // {
            //     magazine = "rof_30rnd_6mm_bb_airsoft_stanag";
            //     count = 1;
            // };
        };
    };
    class rof_weapon_lethal_airsoft_kozlice_base : Weapon_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        author = "$STR_rof_weapons_airsoft_kozlice_Author";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_AssaultRifles";
        vehicleClass = "WeaponsPrimary";
        class TransportMagazines
        {
            // class rof_30rnd_6mm_lethal_airsoft_stanag
            // {
            //     magazine = "rof_30rnd_6mm_lethal_airsoft_stanag";
            //     count = 1;
            // };
        };
    };

    class rof_weapon_airsoft_kozlice : rof_weapon_airsoft_kozlice_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "$STR_rof_weapons_airsoft_kozlice_rof_weapon_airsoft_kozlice0";
        class TransportWeapons
        {
            class rof_weap_airsoft_kozlice
            {
                weapon = "rof_weap_airsoft_kozlice";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_kozlice : rof_weapon_airsoft_kozlice_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "$STR_rof_weapons_airsoft_kozlice_rof_weapon_lethal_airsoft_kozlice0";
        class TransportWeapons
        {
            class rof_weap_airsoft_kozlice
            {
                weapon = "rof_weap_airsoft_kozlice";
                count = 1;
            };
        };
    };
};