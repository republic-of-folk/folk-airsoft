class CfgVehicles
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

    class rof_weapon_airsoft_hk416_blk : rof_weapon_airsoft_hk416_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica HK416 (Black)";
        class TransportWeapons
        {
            class rof_weap_airsoft_hk416_blk
            {
                weapon = "rof_weap_airsoft_hk416_blk";
                count = 1;
            };
        };
    };
    class rof_weapon_airsoft_hk416_khk : rof_weapon_airsoft_hk416_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica HK416 (Khaki)";
        class TransportWeapons
        {
            class rof_weap_airsoft_hk416_khk
            {
                weapon = "rof_weap_airsoft_hk416_khk";
                count = 1;
            };
        };
    };
    class rof_weapon_airsoft_hk416_snd : rof_weapon_airsoft_hk416_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica HK416 (Sand)";
        class TransportWeapons
        {
            class rof_weap_airsoft_hk416_snd
            {
                weapon = "rof_weap_airsoft_hk416_snd";
                count = 1;
            };
        };
    };

    class rof_weapon_lethal_airsoft_hk416_blk : rof_weapon_lethal_airsoft_hk416_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica (lethal) HK416 (Black)";
        class TransportWeapons
        {
            class rof_weap_airsoft_hk416_blk
            {
                weapon = "rof_weap_airsoft_hk416_blk";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_hk416_khk : rof_weapon_lethal_airsoft_hk416_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica (lethal) HK416 (Khaki)";
        class TransportWeapons
        {
            class rof_weap_airsoft_hk416_khk
            {
                weapon = "rof_weap_airsoft_hk416_khk";
                count = 1;
            };
        };
    };
    class rof_weapon_lethal_airsoft_hk416_snd : rof_weapon_lethal_airsoft_hk416_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Airsoft replica (lethal) HK416 (Sand)";
        class TransportWeapons
        {
            class rof_weap_airsoft_hk416_snd
            {
                weapon = "rof_weap_airsoft_hk416_snd";
                count = 1;
            };
        };
    };
};