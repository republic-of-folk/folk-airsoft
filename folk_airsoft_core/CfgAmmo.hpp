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
};