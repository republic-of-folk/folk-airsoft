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
            "rof_item_optic_Holosight_asg",
            "rof_item_optic_Holosight_arid_asg",
            "rof_item_optic_Holosight_blk_asg",
            "rof_item_optic_Holosight_khk_asg",
            "rof_item_optic_Holosight_lush_asg",
        };
        weapons[] = {
            "rof_optic_Aco_asg",
            "rof_optic_ACO_grn_asg",
            "rof_optic_Holosight_asg",
            "rof_optic_Holosight_arid_asg",
            "rof_optic_Holosight_blk_asg",
            "rof_optic_Holosight_khk_asg",
            "rof_optic_Holosight_lush_asg",
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

#include "CfgRails.hpp"

#include "CfgRecoils.hpp"

#include "CfgAmmo.hpp"

#include "CfgMagazines.hpp"

#include "CfgWeapons.hpp"

#include "CfgVehicles.hpp"