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

#include "CfgRecoils"

#include "CfgAmmo"

#include "CfgMagazines"