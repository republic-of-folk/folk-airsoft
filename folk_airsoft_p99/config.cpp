#define _ARMA_

class cfgPatches
{
    class rof_weapons_airsoft_P99
    {
        units[] = {
            "rof_weapon_airsoft_p99",
            "rof_weapon_lethal_airsoft_p99",
        };
        weapons[] = {
            "rof_weap_airsoft_p99",
        };
        requiredversion = 1.94;
        requiredaddons[] = {
            "rof_weapons_airsoft_core",
        };
        version = "1.0.1";
        author = "Boberro (Republic of Folk)";
    };
};

#include "CfgWeapons.hpp"

#include "CfgVehicles.hpp"
