class CfgMagazines
{
    class 16Rnd_9x21_Mag;
    class 50Rnd_570x28_SMG_03;
    class 30Rnd_556x45_Stanag;
    class 2Rnd_12Gauge_Pellets;

    // Pistol
    class rof_16rnd_6mm_bb_airsoft_mag : 16Rnd_9x21_Mag
    {
        author = "$STR_rof_weapons_airsoft_core_Author";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        displayName = "$STR_rof_weapons_airsoft_core_rof_16rnd_6mm_bb_airsoft_mag0";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_16rnd_6mm_bb_airsoft_mag1";
        ammo = "rof_B_6mm_020g_bb";
        count = 16;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
    };
    class rof_16rnd_6mm_lethal_airsoft_mag : rof_16rnd_6mm_bb_airsoft_mag
    {
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        displayName = "$STR_rof_weapons_airsoft_core_rof_16rnd_6mm_lethal_airsoft_mag0";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_16rnd_6mm_lethal_airsoft_mag1";
        ammo = "rof_B_6mm_020g_lethal";
    };

    // P90
    class rof_50rnd_6mm_bb_airsoft_p90 : 50Rnd_570x28_SMG_03
    {
        author = "$STR_rof_weapons_airsoft_core_Author";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        displayName = "$STR_rof_weapons_airsoft_core_rof_50rnd_6mm_bb_airsoft_p900";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_50rnd_6mm_bb_airsoft_p901";
        ammo = "rof_B_6mm_020g_bb";
        count = 50;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
    };
    class rof_100rnd_6mm_bb_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_100rnd_6mm_bb_airsoft_p900";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_100rnd_6mm_bb_airsoft_p901";
        count = 100;
    };
    class rof_300rnd_6mm_bb_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_300rnd_6mm_bb_airsoft_p900";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_300rnd_6mm_bb_airsoft_p901";
        count = 300;
    };
    class rof_50rnd_6mm_lethal_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_50rnd_6mm_lethal_airsoft_p900";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_100rnd_6mm_lethal_airsoft_p90 : rof_100rnd_6mm_bb_airsoft_p90
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_100rnd_6mm_lethal_airsoft_p900";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_300rnd_6mm_lethal_airsoft_p90 : rof_300rnd_6mm_bb_airsoft_p90
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_300rnd_6mm_lethal_airsoft_p900";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };

    // STANAG
    class rof_30rnd_6mm_bb_airsoft_stanag : 30Rnd_556x45_Stanag
    {
        author = "$STR_rof_weapons_airsoft_core_Author";
        displayName = "$STR_rof_weapons_airsoft_core_rof_30rnd_6mm_bb_airsoft_stanag0";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_30rnd_6mm_bb_airsoft_stanag1";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb";
        count = 30;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
    };
    class rof_30rnd_6mm_bb_airsoft_stanag_snd : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_30rnd_6mm_bb_airsoft_stanag_snd0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_100rnd_6mm_bb_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_100rnd_6mm_bb_airsoft_stanag0";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_100rnd_6mm_bb_airsoft_stanag1";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb";
        count = 100;
    };
    class rof_100rnd_6mm_bb_airsoft_stanag_snd : rof_100rnd_6mm_bb_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_100rnd_6mm_bb_airsoft_stanag_snd0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_300rnd_6mm_bb_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_300rnd_6mm_bb_airsoft_stanag0";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_300rnd_6mm_bb_airsoft_stanag1";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb";
        count = 300;
    };
    class rof_300rnd_6mm_bb_airsoft_stanag_snd : rof_300rnd_6mm_bb_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_300rnd_6mm_bb_airsoft_stanag_snd0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_30rnd_6mm_lethal_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_30rnd_6mm_lethal_airsoft_stanag0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_30rnd_6mm_lethal_airsoft_stanag_snd : rof_30rnd_6mm_lethal_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_30rnd_6mm_lethal_airsoft_stanag_snd0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_100rnd_6mm_lethal_airsoft_stanag : rof_100rnd_6mm_bb_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_100rnd_6mm_lethal_airsoft_stanag0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_100rnd_6mm_lethal_airsoft_stanag_snd : rof_100rnd_6mm_lethal_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_100rnd_6mm_lethal_airsoft_stanag_snd0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_300rnd_6mm_lethal_airsoft_stanag : rof_300rnd_6mm_bb_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_300rnd_6mm_lethal_airsoft_stanag0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_300rnd_6mm_lethal_airsoft_stanag_snd : rof_300rnd_6mm_lethal_airsoft_stanag
    {
        displayName = "$STR_rof_weapons_airsoft_core_rof_300rnd_6mm_lethal_airsoft_stanag_snd0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };

    // Shotgun
    class rof_2rnd_6mm_airsoft_shotgun : 2Rnd_12Gauge_Pellets {
        author = "$STR_rof_weapons_airsoft_core_Author";
        displayName = "$STR_rof_weapons_airsoft_core_rof_2rnd_6mm_airsoft_shotgun0";
        descriptionShort = "$STR_rof_weapons_airsoft_core_rof_2rnd_6mm_airsoft_shotgun1";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb_submunition";
        count = 2;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
    };
    class rof_2rnd_6mm_lethal_airsoft_shotgun : rof_2rnd_6mm_airsoft_shotgun {
        displayName = "$STR_rof_weapons_airsoft_core_rof_2rnd_6mm_lethal_airsoft_shotgun0";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb_submunition_lethal";
    };
};