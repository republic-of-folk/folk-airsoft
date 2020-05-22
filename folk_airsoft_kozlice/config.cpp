#define _ARMA_

class cfgPatches
{
    class rof_weapons_airsoft_kozlice
    {
        units[] = {
            "rof_weapon_airsoft_kozlice",
            "rof_weapon_lethal_airsoft_kozlice",
        };
        weapons[] = {
            "rof_weap_airsoft_kozlice",
        };
        requiredversion = 1.94;
        requiredaddons[] = {
            "rof_weapons_airsoft_core",
            "A3_Weapons_F_Enoch_Rifles_HunterShotgun_01",
        };
        version = "1.0.1";
        author = "Boberro (Republic of Folk)";
    };
};

#include "CfgWeapons.hpp"

#include "CfgVehicles.hpp"
