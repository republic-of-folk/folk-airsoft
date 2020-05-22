class CfgAmmo
{
    class BulletBase;
    class rof_B_6mm_020g_bb : BulletBase
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        cartridge = "";

        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        cost = 5;
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
        visibleFire = 3;
        visibleFireTime = 2;
        
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

    class rof_B_6mm_020g_bb_submunition : rof_B_6mm_020g_bb
    {
        simulationStep = 0.0001;
        airFriction = -0.0067; //
        submunitionAmmo = "rof_B_6mm_020g_bb_submunition_deploy";
        submunitionConeAngle = 0.8;
        submunitionConeType[] = {"poissondisc",12};
        triggerSpeedCoef[] = {0.85,1};
        triggerTime = 0.001;
    };
    class rof_B_6mm_020g_bb_submunition_deploy : rof_B_6mm_020g_bb {
        simulationStep = 0.0001;
    };

    class rof_B_6mm_020g_bb_submunition_lethal : rof_B_6mm_020g_bb_submunition {
        hit = 9;
        submunitionAmmo = "rof_B_6mm_020g_bb_submunition_lethal_deploy";
    };
    class rof_B_6mm_020g_bb_submunition_lethal_deploy : rof_B_6mm_020g_bb_submunition_deploy {
        hit = 9;
    };
};