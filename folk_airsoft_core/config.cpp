#define _ARMA_

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
            "rof_item_rof_muzzle_snds",
        };
        weapons[] = {
            "rof_optic_Aco_asg",
            "rof_optic_ACO_grn_asg",
            "rof_optic_Holosight_asg",
            "rof_optic_Holosight_arid_asg",
            "rof_optic_Holosight_blk_asg",
            "rof_optic_Holosight_khk_asg",
            "rof_optic_Holosight_lush_asg",
            "rof_muzzle_snds",
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
            "rof_30rnd_6mm_bb_airsoft_stanag_snd",
            "rof_100rnd_6mm_bb_airsoft_stanag",
            "rof_100rnd_6mm_bb_airsoft_stanag_snd",
            "rof_300rnd_6mm_bb_airsoft_stanag",
            "rof_300rnd_6mm_bb_airsoft_stanag_snd",
            "rof_30rnd_6mm_lethal_airsoft_stanag",
            "rof_30rnd_6mm_lethal_airsoft_stanag_snd",
            "rof_100rnd_6mm_lethal_airsoft_stanag",
            "rof_100rnd_6mm_lethal_airsoft_stanag_snd",
            "rof_300rnd_6mm_lethal_airsoft_stanag",
            "rof_300rnd_6mm_lethal_airsoft_stanag_snd",
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

#include "CfgMagazineWells.hpp"

#include "CfgWeapons.hpp"

#include "CfgVehicles.hpp"