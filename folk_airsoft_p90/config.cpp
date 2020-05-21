#define _ARMA_

class cfgPatches
{
    class rof_weapons_airsoft_P90
    {
        units[] = {
            "rof_weapon_airsoft_p90_black",
            "rof_weapon_airsoft_p90_camo",
            "rof_weapon_airsoft_p90_khaki",
            "rof_weapon_airsoft_p90_hex",
            "rof_weapon_lethal_airsoft_p90_black",
            "rof_weapon_lethal_airsoft_p90_camo",
            "rof_weapon_lethal_airsoft_p90_khaki",
            "rof_weapon_lethal_airsoft_p90_hex",
        };
        weapons[] = {
            "rof_weap_airsoft_p90_black",
            "rof_weap_airsoft_p90_camo",
            "rof_weap_airsoft_p90_khaki",
            "rof_weap_airsoft_p90_hex",
        };
        requiredversion = 1.94;
        requiredaddons[] = {
            "rof_weapons_airsoft_core",
            "A3_Weapons_F_Mod",
        };
        version = "1.0.1";
        author = "Boberro (Republic of Folk)";
    };
};

#include "CfgWeapons.hpp"

#include "CfgVehicles.hpp"