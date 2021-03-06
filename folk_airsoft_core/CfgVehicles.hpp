class CfgVehicles
{
    class Item_Base_F;

    // Sound Suppressors, decorative
    class rof_item_rof_muzzle_airsoft_snds : Item_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        author = "$STR_rof_weapons_airsoft_core_Author";
        editorCategory = "EdCat_WeaponAttachments";
        editorSubcategory = "EdSubcat_FrontSlot";
        vehicleClass = "WeaponAccessories";
        displayName = "$STR_rof_weapons_airsoft_core_rof_muzzle_airsoft_snds0";
        class TransportItems
        {
            class rof_muzzle_airsoft_snds
            {
                name = "rof_muzzle_airsoft_snds";
                count = 1;
            };
        };
    };

    // Scopes, ACO
    class rof_item_optic_airsoft_Aco_asg_base : Item_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        author = "$STR_rof_weapons_airsoft_core_Author";
        editorCategory = "EdCat_WeaponAttachments";
        editorSubcategory = "EdSubcat_TopSlot_Collimators";
        vehicleClass = "WeaponAccessories";
    };
    class rof_item_optic_airsoft_Aco_asg: rof_item_optic_airsoft_Aco_asg_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_rof_weapons_airsoft_core_optic_Aco_asg0";
        class TransportItems
        {
            class rof_optic_airsoft_Aco_asg
            {
                name = "rof_optic_airsoft_Aco_asg";
                count = 1;
            };
        };
    };
    class rof_item_optic_airsoft_ACO_grn_asg: rof_item_optic_airsoft_Aco_asg_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_rof_weapons_airsoft_core_optic_ACO_grn_asg0";
        class TransportItems
        {
            class rof_optic_airsoft_ACO_grn_asg
            {
                name = "rof_optic_airsoft_ACO_grn_asg";
                count = 1;
            };
        };
    };

    // Scopes, Holosight
    class rof_item_optic_airsoft_Holosight_asg_base: Item_Base_F
    {
        scope = 0;
        scopeCurator = 0;
        author = "$STR_rof_weapons_airsoft_core_Author";
        editorCategory = "EdCat_WeaponAttachments";
        editorSubcategory = "EdSubcat_TopSlot_Collimators";
        vehicleClass = "WeaponAccessories";
    };
    class rof_item_optic_airsoft_Holosight_asg: rof_item_optic_airsoft_Holosight_asg_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_airsoft_Holosight_asg0";
        class TransportItems
        {
            class rof_optic_airsoft_Holosight_asg
            {
                name = "rof_optic_airsoft_Holosight_asg";
                count = 1;
            };
        };
    };
    class rof_item_optic_airsoft_Holosight_arid_asg: rof_item_optic_airsoft_Holosight_asg_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_airsoft_Holosight_arid_asg0";
        class TransportItems
        {
            class rof_optic_airsoft_Holosight_arid_asg
            {
                name = "rof_optic_airsoft_Holosight_arid_asg";
                count = 1;
            };
        };
    };
    class rof_item_optic_airsoft_Holosight_blk_asg: rof_item_optic_airsoft_Holosight_asg_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_airsoft_Holosight_blk_asg0";
        class TransportItems
        {
            class rof_optic_airsoft_Holosight_blk_asg
            {
                name = "rof_optic_airsoft_Holosight_blk_asg";
                count = 1;
            };
        };
    };
    class rof_item_optic_airsoft_Holosight_khk_asg: rof_item_optic_airsoft_Holosight_asg_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_airsoft_Holosight_khk_asg0";
        class TransportItems
        {
            class rof_optic_airsoft_Holosight_khk_asg
            {
                name = "rof_optic_airsoft_Holosight_khk_asg";
                count = 1;
            };
        };
    };
    class rof_item_optic_airsoft_Holosight_lush_asg: rof_item_optic_airsoft_Holosight_asg_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_airsoft_Holosight_lush_asg0";
        class TransportItems
        {
            class rof_optic_airsoft_Holosight_lush_asg
            {
                name = "rof_optic_airsoft_Holosight_lush_asg";
                count = 1;
            };
        };
    };
};