#define _ARMA_
#define ROF_AIRSOFT_BB_SHORTNAME "6mm BB"
#define ROF_AIRSOFT_LETHAL_SHORTNAME "6mm lethal"

class cfgPatches
{
    class rof_weapons_airsoft_core
    {
        units[] = {
            "rof_item_optic_Aco_asg",
            "rof_item_optic_ACO_grn_asg",
        };
        weapons[] = {
            "rof_optic_Aco_asg",
            "rof_optic_ACO_grn_asg",
        };
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
            "A3_Data_F_Enoch_Loadorder",
            "cba_main",
        };
        version = "1.0.1";
        author = "Boberro (Republic of Folk)";
    };
};

class asdg_OpticRail;   // External class reference
class rof_weapons_airsoft_OpticRail: asdg_OpticRail 
{
    class compatibleItems 
    {
        rof_optic_Aco_asg = 1;
        rof_optic_ACO_grn_asg = 1;
    };
};

#include "CfgRecoils.hpp"

#include "CfgAmmo.hpp"

#include "CfgMagazines.hpp"

#include "CfgWeapons.hpp"

#include "CfgVehicles.hpp"