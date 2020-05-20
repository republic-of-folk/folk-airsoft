#define _ARMA_
#define ROF_AIRSOFT_BB_SHORTNAME "6mm BB"
#define ROF_AIRSOFT_LETHAL_SHORTNAME "6mm lethal"

class cfgPatches
{
    class rof_weapons_airsoft_core
    {
        units[] = {};
        weapons[] = {};
        magazines[] = {
            "rof_16rnd_6mm_bb_airsoft_mag",
            "rof_16rnd_6mm_lethal_airsoft_mag",
            "rof_50rnd_6mm_bb_airsoft_p90",
            "rof_100rnd_6mm_bb_airsoft_p90",
            "rof_300rnd_6mm_bb_airsoft_p90",
            "rof_50rnd_6mm_lethal_airsoft_p90",
            "rof_100rnd_6mm_lethal_airsoft_p90",
            "rof_300rnd_6mm_lethal_airsoft_p90",
            "rof_30rnd_6mm_bb_airsoft_stanag",
            "rof_100rnd_6mm_bb_airsoft_stanag",
            "rof_300rnd_6mm_bb_airsoft_stanag",
            "rof_30rnd_6mm_lethal_airsoft_stanag",
            "rof_100rnd_6mm_lethal_airsoft_stanag",
            "rof_300rnd_6mm_lethal_airsoft_stanag",
        };
        requiredversion = 1.94;
        requiredaddons[] = {
            "A3_Weapons_F",
            "A3_Data_F_Enoch_Loadorder",
        };
        version = "1.0.1";
        author = "Boberro (Republic of Folk)";
    };
};

class CfgRecoils
{
    class recoil_default;
    class rof_recoil_aeg : recoil_default
    {
        permanent = 0;
        temporary = 0.0033;
    };
};

class cfgAmmo
{
    class BulletBase;
    class rof_B_6mm_020g_bb : BulletBase
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        cartridge = "";

        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        cost = 100;
        typicalSpeed = 380;
        airFriction = -0.0016;
        caliber = 1.2;
        deflecting = -1;
        airLock = 1;
        tracerScale = 0.75;
        tracerStartTime = 0.01;
        tracerEndTime = 20;
        nvgOnly = 0;

        audibleFire = 30;
        aiAmmoUsageFlags = 64;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
    };
    class rof_B_6mm_020g_lethal : rof_B_6mm_020g_bb
    {
        hit = 9;
    };
};

class CfgMagazines
{
    class 16Rnd_9x21_Mag;
    class 50Rnd_570x28_SMG_03;
    class 30Rnd_556x45_Stanag;

    class rof_16rnd_6mm_bb_airsoft_mag : 16Rnd_9x21_Mag
    {
        author = "Bohemia Interactive / Republic of Folk";
        displayName = "6mm airsoft 16rnd magazine";
        displaynameshort = ROF_AIRSOFT_BB_SHORTNAME;
        descriptionShort = "Low-capacity magazine for green gas airsoft replica pistol";
        ammo = "rof_B_6mm_020g_bb";
        count = 16;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
    };
    class rof_16rnd_6mm_lethal_airsoft_mag : rof_16rnd_6mm_bb_airsoft_mag
    {
        displayName = "6mm airsoft (lethal) 16rnd magazine";
        displaynameshort = ROF_AIRSOFT_LETHAL_SHORTNAME;
        ammo = "rof_B_6mm_020g_lethal";
    };

    class rof_50rnd_6mm_bb_airsoft_p90 : 50Rnd_570x28_SMG_03
    {
        author = "Bohemia Interactive / Republic of Folk";
        displayName = "6mm airsoft 50rnd P90 magazine";
        displaynameshort = ROF_AIRSOFT_BB_SHORTNAME;
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
        displaynameshort = ROF_AIRSOFT_LETHAL_SHORTNAME;
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_100rnd_6mm_lethal_airsoft_p90 : rof_100rnd_6mm_bb_airsoft_p90
    {
        displayName = "6mm airsoft (lethal) 100rnd P90 magazine";
        displaynameshort = ROF_AIRSOFT_LETHAL_SHORTNAME;
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_300rnd_6mm_lethal_airsoft_p90 : rof_300rnd_6mm_bb_airsoft_p90
    {
        displayName = "6mm airsoft (lethal) 300rnd P90 magazine";
        displaynameshort = ROF_AIRSOFT_LETHAL_SHORTNAME;
        ammo = "rof_B_6mm_020g_lethal";
    };

    class rof_30rnd_6mm_bb_airsoft_stanag : 30Rnd_556x45_Stanag
    {
        author = "Bohemia Interactive / Republic of Folk";
        displayName = "6mm airsoft 30rnd STANAG magazine";
        displaynameshort = ROF_AIRSOFT_BB_SHORTNAME;
        ammo = "rof_B_6mm_020g_bb";
        count = 30;
        initSpeed = 107; // 350fps
        tracersEvery = 1;
        descriptionShort = "Real-capacity STANAG magazine airsoft replica";
    };
    class rof_100rnd_6mm_bb_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft 100rnd STANAG magazine";
        displaynameshort = ROF_AIRSOFT_BB_SHORTNAME;
        ammo = "rof_B_6mm_020g_bb";
        count = 100;
        descriptionShort = "Mid-capacity STANAG magazine airsoft replica";
    };
    class rof_300rnd_6mm_bb_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft 300rnd STANAG magazine";
        displaynameshort = ROF_AIRSOFT_BB_SHORTNAME;
        ammo = "rof_B_6mm_020g_bb";
        count = 300;
        descriptionShort = "High-capacity STANAG magazine airsoft replica";
    };
    class rof_30rnd_6mm_lethal_airsoft_stanag : rof_30rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 30rnd STANAG magazine";
        displaynameshort = ROF_AIRSOFT_LETHAL_SHORTNAME;
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_100rnd_6mm_lethal_airsoft_stanag : rof_100rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 100rnd STANAG magazine";
        displaynameshort = ROF_AIRSOFT_LETHAL_SHORTNAME;
        ammo = "rof_B_6mm_020g_lethal";
    };
    class rof_300rnd_6mm_lethal_airsoft_stanag : rof_300rnd_6mm_bb_airsoft_stanag
    {
        displayName = "6mm airsoft (lethal) 300rnd STANAG magazine";
        displaynameshort = ROF_AIRSOFT_LETHAL_SHORTNAME;
        ammo = "rof_B_6mm_020g_lethal";
    };
};