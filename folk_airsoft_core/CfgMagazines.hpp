class CfgMagazines
{
    class 16Rnd_9x21_Mag;
    class 50Rnd_570x28_SMG_03;
    class 30Rnd_556x45_Stanag;

    // Pistol
    class rof_16rnd_6mm_bb_airsoft_mag : 16Rnd_9x21_Mag
    {
        author = "Bohemia Interactive / Republic of Folk";
        displayName = "6mm airsoft 16rnd magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        descriptionShort = "Low-capacity magazine for green gas airsoft replica pistol";
        ammo = "rof_B_6mm_020g_bb";
        count = 16;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
    };
    class rof_16rnd_6mm_lethal_airsoft_mag : rof_16rnd_6mm_bb_airsoft_mag
    {
        displayName = "6mm airsoft (lethal) 16rnd magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };

    // P90
    class rof_50rnd_6mm_bb_airsoft_p90 : 50Rnd_570x28_SMG_03
    {
        author = "Bohemia Interactive / Republic of Folk";
        displayName = "6mm airsoft 50rnd P90 magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb";
        count = 50;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
        descriptionShort = "Real-capacity magazine for airsoft replica of P90";
    };
    class rof_100rnd_6mm_bb_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
    {
        displayName = "6mm airsoft 100rnd P90 magazine";
        count = 100;
        descriptionShort = "Mid-capacity magazine for airsoft replica of P90";
    };
    class rof_300rnd_6mm_bb_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
    {
        displayName = "6mm airsoft 300rnd P90 magazine";
        count = 300;
        descriptionShort = "High-capacity magazine for airsoft replica of P90";
    };
    class rof_50rnd_6mm_lethal_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
    {
        displayName = "6mm airsoft (lethal) 50rnd P90 magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_100rnd_6mm_lethal_airsoft_p90 : rof_100rnd_6mm_bb_airsoft_p90
    {
        displayName = "6mm airsoft (lethal) 100rnd P90 magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_300rnd_6mm_lethal_airsoft_p90 : rof_300rnd_6mm_bb_airsoft_p90
    {
        displayName = "6mm airsoft (lethal) 300rnd P90 magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };

    // STANAG
    class rof_30rnd_6mm_bb_airsoft_stanag : 30Rnd_556x45_Stanag
    {
        author = "Bohemia Interactive / Republic of Folk";
        displayName = "6mm airsoft 30rnd STANAG magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb";
        count = 30;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
        descriptionShort = "Real-capacity STANAG magazine airsoft replica";
    };
    class rof_30rnd_6mm_bb_airsoft_stanag_snd : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft 30rnd STANAG magazine (Sand)";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_100rnd_6mm_bb_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft 100rnd STANAG magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb";
        count = 100;
        descriptionShort = "Mid-capacity STANAG magazine airsoft replica";
    };
    class rof_100rnd_6mm_bb_airsoft_stanag_snd : rof_100rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft 100rnd STANAG magazine (Sand)";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_300rnd_6mm_bb_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft 300rnd STANAG magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        ammo = "rof_B_6mm_020g_bb";
        count = 300;
        descriptionShort = "High-capacity STANAG magazine airsoft replica";
    };
    class rof_300rnd_6mm_bb_airsoft_stanag_snd : rof_300rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft 300rnd STANAG magazine (Sand)";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_30rnd_6mm_lethal_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 30rnd STANAG magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_30rnd_6mm_lethal_airsoft_stanag_snd : rof_30rnd_6mm_lethal_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 30rnd STANAG magazine (Sand)";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_100rnd_6mm_lethal_airsoft_stanag : rof_100rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 100rnd STANAG magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_100rnd_6mm_lethal_airsoft_stanag_snd : rof_100rnd_6mm_lethal_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 100rnd STANAG magazine (Sand)";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
    class rof_300rnd_6mm_lethal_airsoft_stanag : rof_300rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 300rnd STANAG magazine";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Lethal_Shortname";
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_300rnd_6mm_lethal_airsoft_stanag_snd : rof_300rnd_6mm_lethal_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 300rnd STANAG magazine (Sand)";
        displaynameshort = "$STR_rof_weapons_airsoft_core_BB_Shortname";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
    };
};