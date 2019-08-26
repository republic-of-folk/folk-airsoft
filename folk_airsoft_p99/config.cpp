#define _ARMA_
#define ROF_AIRSOFT_BB_SHORTNAME "6mm BB"
#define ROF_AIRSOFT_LETHAL_SHORTNAME "6mm lethal"

class cfgPatches
{
	class rof_weapons_airsoft_P99
	{
		units[] = {
			"rof_weapon_airsoft_p99",
			"rof_weapon_lethal_airsoft_p99"};
		weapons[] = {
			"rof_weap_airsoft_p99"};
		magazines[] = {
			"rof_16rnd_6mm_bb_airsoft_mag",
			"rof_16rnd_6mm_lethal_airsoft_mag"};
		requiredversion = 1.94;
		requiredaddons[] = {
			"rof_weapons_airsoft_core"};
		version = "1.0";
		author = "Boberro (Republic of Folk)";
	};
};

class CfgMagazines
{
	class 16Rnd_9x21_Mag;

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
};

class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;

class cfgWeapons
{
	class Pistol_Base_F;

	class hgun_P07_F : Pistol_Base_F
	{
		class Single : Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
			};
			class SilencedSound : BaseSoundModeType
			{
			};
		};
		class WeaponSlotsInfo
		{
			class MuzzleSlot;
		};
	};

	class rof_weap_airsoft_p99 : hgun_P07_F
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Bohemia Interactive / Republic of Folk";
		displayName = "Replica P99";
		descriptionShort = "Gas blowback airsoft replica of P99 pistol";
		magazines[] = {"rof_16rnd_6mm_bb_airsoft_mag", "rof_16rnd_6mm_lethal_airsoft_mag"};
		magazineWell[] = {};
		baseWeapon = "rof_weap_airsoft_p99";
		distanceZoomMin = 25;
		distanceZoomMax = 25;

		class Single : Single
		{
			class StandardSound : StandardSound
			{
				SoundSetShot[] = {"P07_silencerShot_SoundSet", "P07_silencerTail_SoundSet", "P07_silencerInteriorTail_SoundSet"};
			};
			class SilencedSound : SilencedSound
			{
				SoundSetShot[] = {"P07_silencerShot_SoundSet", "P07_silencerTail_SoundSet", "P07_silencerInteriorTail_SoundSet"};
			};
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = {};
			};
		};
	};
};

class cfgVehicles
{
	class Pistol_Base_F;

	class rof_weapon_airsoft_p99_base : Pistol_Base_F
	{
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		author = "Bohemia Interactive / Republic of Folk";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_Pistols";
		vehicleClass = "WeaponsHandguns";

		class TransportWeapons
		{
			class rof_weap_airsoft_p99
			{
				weapon = "rof_weap_airsoft_p99";
				count = 1;
			};
		};
	};
	class rof_weapon_airsoft_p99 : rof_weapon_airsoft_p99_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Airsoft replica P99";

		class TransportMagazines
		{
			class rof_16rnd_6mm_bb_airsoft_mag
			{
				magazine = "rof_16rnd_6mm_bb_airsoft_mag";
				count = 1;
			};
		};
	};
	class rof_weapon_lethal_airsoft_p99 : rof_weapon_airsoft_p99_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Airsoft replica (lethal) P99";

		class TransportMagazines
		{
			class rof_16rnd_6mm_lethal_airsoft_mag
			{
				magazine = "rof_16rnd_6mm_lethal_airsoft_mag";
				count = 1;
			};
		};
	};
};