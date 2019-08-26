#define _ARMA_
#define ROF_AIRSOFT_BB_SHORTNAME "6mm BB"
#define ROF_AIRSOFT_LETHAL_SHORTNAME "6mm lethal"

class cfgPatches
{
	class rof_weapons_airsoft_core
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredversion = 1.94;
		requiredaddons[] = {
			"A3_Data_F_Enoch_Loadorder"};
		version = "1.0";
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
