class CfgWeapons
{
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    // class optic_Holosight_smg;

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
    class rof_optic_ACO_grn_asg: ItemCore
    {
        author = "$STR_rof_weapons_airsoft_core_Author";
        scope = 2;
        displayName = "$STR_rof_weapons_airsoft_core_optic_ACO_grn_asg0";
        picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_ACO_grn_smg_ca.paa";
        model = "\A3\weapons_f\acc\acco_Aco_op_smg_F";
        descriptionShort = "$STR_rof_weapons_airsoft_core_optic_ACO_grn_asg1";
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
};