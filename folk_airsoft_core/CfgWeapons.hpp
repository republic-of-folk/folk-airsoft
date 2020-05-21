class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;    

    // ACO
    class rof_optic_Aco_asg: ItemCore
    {
        author = "$STR_rof_weapons_airsoft_core_Author";
        scope = 2;
        displayName = "$STR_rof_weapons_airsoft_core_optic_Aco_asg0";
        picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_Aco_smg_ca.paa";
        model = "\A3\weapons_f\acc\acco_Aco_smg_F";
        descriptionShort = "$STR_rof_weapons_airsoft_core_optic_Aco_asg1";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass = 4;
            modelOptics = "\A3\Weapons_F\empty";
            optics = 1;
            class OpticsModes
            {
                class ACO
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 25;
                    distanceZoomMax = 25;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"Default"};
                };
            };
        };
        inertia = 0;
    };
    class rof_optic_ACO_grn_asg: rof_optic_Aco_asg
    {
        displayName = "$STR_rof_weapons_airsoft_core_optic_ACO_grn_asg0";
        picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_ACO_grn_smg_ca.paa";
        model = "\A3\weapons_f\acc\acco_Aco_op_smg_F";
    };

    // Holosight
    class rof_optic_Holosight_asg : ItemCore
    {
        scope = 2;
        author = "$STR_rof_weapons_airsoft_core_Author";
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_Holosight_asg0";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_optic_Holosight_asg1";
        picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_Holosight_smg_ca.paa";
        model = "\A3\weapons_f\acc\acco_EOTxps3_smg_F";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass = 6;
            modelOptics = "\A3\Weapons_F\empty";
            optics = 1;
            class OpticsModes
            {
                class ACO
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 25;
                    distanceZoomMax = 25;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = {"OpticsBlur1"};
                };
            };
        };
        inertia = 0;
    };
    class rof_optic_Holosight_arid_asg : rof_optic_Holosight_asg {
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_Holosight_arid_asg0";
        model = "\A3\Weapons_F\Acc\acco_holosight_arid_F.p3d";
        picture = "\a3\Weapons_F_Enoch\Acc\Data\UI\icon_optic_Holosight_arid_F_ca.paa";
    };
    class rof_optic_Holosight_blk_asg : rof_optic_Holosight_asg {
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_Holosight_blk_asg0";
        model = "\A3\Weapons_F\Acc\acco_holosight_blk_F.p3d";
        picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Holosight_blk_F_ca.paa";
    };
    class rof_optic_Holosight_khk_asg : rof_optic_Holosight_asg {
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_Holosight_khk_asg0";
        model = "\A3\Weapons_F\Acc\acco_holosight_khk_F.p3d";
        picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Holosight_khk_F_ca.paa";
    };
    class rof_optic_Holosight_lush_asg : rof_optic_Holosight_asg {
        displayName = "$STR_rof_weapons_airsoft_core_rof_optic_Holosight_lush_asg0";
        model = "\A3\Weapons_F\Acc\acco_holosight_lush_F.p3d";
        picture = "\a3\Weapons_F_Enoch\Acc\Data\UI\icon_optic_Holosight_lush_F_ca.paa";
    };
};