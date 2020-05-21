#define _ARMA_

class cfgPatches
{
	class rof_weapons_airsoft_hk416
	{
		units[] = {
            "rof_weapon_airsoft_hk416_blk",
            "rof_weapon_airsoft_hk416_khk",
            "rof_weapon_airsoft_hk416_snd",
            "rof_weapon_lethal_airsoft_hk416_blk",
            "rof_weapon_lethal_airsoft_hk416_khk",
            "rof_weapon_lethal_airsoft_hk416_snd",
        };
		weapons[] = {
            "rof_weap_airsoft_hk416_blk",
            "rof_weap_airsoft_hk416_khk",
            "rof_weap_airsoft_hk416_snd",
        };
		requiredversion = 1.94;
		requiredaddons[] = {
			"rof_weapons_airsoft_core",
            "A3_Weapons_F_Exp",
        };
		version = "1.0.1";
		author = "Boberro (Republic of Folk)";
	};
};

#include "CfgWeapons.hpp"

#include "CfgVehicles.hpp"
