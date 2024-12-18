author = "AChesheireCat";
description = "Soviet VDV Airborne c. 1985-1989. Includes a complete SF class section. This loadout is specifically intended to replicate the heliborne/mounted component during the Soviet-Afghan war. Note that the MAT, HMG, and HAT roles have reduced primary ammo for weight reasons. (Last updated: 2024/12/17)";
#include "undef.hpp" // Reset defines

// Rifleman_02 is a marksman

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "rhs_uniform_afghanka_para"
#define CAMO_VEST "rhs_6b2_lifchik","rhs_6b2_chicom"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "rhs_tortila_khaki"
#define CAMO_HEADGEAR "cwr3_o_headgear_ssh68","cwr3_o_headgear_ssh68","cwr3_o_headgear_ssh68_net"
#define CAMO_HEADGEAR_SPECIAL "PLOT_ARMOR_H_Bandanna_cbr"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "rhs_uniform_df15"
#define CAMO_VEST_PILOT "PLOT_ARMOR_V_Pockets_F"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "vn_o_helmet_zsh3_02"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_o_uniform_m1972_tanker"
#define CAMO_VEST_VICC "cwr3_o_vest_beltkit_officer"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "vn_o_helmet_tsh3_01","vn_o_helmet_tsh3_02"
// Rifle
#define RIFLE "rhs_weap_aks74"
#define RIFLE_MAG "CUP_30Rnd_545x39_AK_M:7","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M:3"
#define RIFLE_ATTACHMENTS "rhs_acc_dtk1983"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
// GL Rifle
#define GLRIFLE "rhs_weap_aks74_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "rhs_VOG25:5"
#define GLRIFLE_MAG_FLARE "rhs_VG40OP_red:4"
#define GLRIFLE_MAG_ILLUM "CUP_IlumFlareWhite_GP25_M:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74_45"
#define AR_MAG "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:10"
// AT
#define AT "CUP_launch_RPG26"
#define AT_MAG 
// MMG
#define MMG "CUP_lmg_PKMN"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7VM_M:3"
#define MAT_MAG2 "CUP_PG7VL_M:2"
#define MAT_OPTIC "CUP_optic_PGO7V2"
// HMG
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HAT
#define HAT "ace_compat_rhs_afrf3_metis_carry"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "ace_compat_rhs_afrf3_mag_9M131F:2"
// SAM
#define SAM "CUP_launch_9K32Strela"
#define SAM_MAG 
// Sniper
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:10"
#define SNIPER_ATTACHMENTS "cup_optic_pso_1"
// Spotter
#define SPOTTER "rhs_weap_akms"
#define SPOTTER_MAG "CUP_30Rnd_762x39_AK47_bakelite_M:7","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M:3"
#define SPOTTER_ATTACHMENTS "rhs_acc_pbs1"
// SMG
#define SMG "rhs_weap_aks74u"
#define SMG_MAG "hlc_30Rnd_545x39_EP_ak:5"
#define SMG_ATTACHMENTS "rhs_acc_pgs64_74u"
// Pistol
#define PISTOL "CUP_hgun_Makarov"
#define PISTOL_MAG "CUP_8Rnd_9x18_Makarov_M:3"
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "rhs_mag_rgd5:2"
#define SIDE_SMOKE "SmokeShell:2"
#define OFF_FRAG "rhs_mag_rgn:2"
#define DEF_FRAG "rhs_mag_rgo:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

#define NVG "cwr3_o_nvg_pnv57_tsh3"
#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMO_TOOL "ACE_Clacker"


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "rhs_6b2_RPK"
#define CAMO_VEST_FTL CAMO_VEST
#define CAMO_VEST_SL CAMO_VEST
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_VEST_MARKSMAN "rhs_6b2_SVD"
#define CAMO_BACKPACK_LAT "rhs_rd54"
#define CAMO_BACKPACK_AR "rhs_rd54"
#define CAMO_BACKPACK_FTL "rhs_rd54"
#define CAMO_BACKPACK_SL "cwr3_o_backpack_rd54_r148"
#define CAMO_BACKPACK_MEDIC "rhs_medic_bag_XL"
#define MMG_ATTACHMENTS "rhs_acc_1p29"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

//  init = "this addGoggles  ['gm_gc_army_facewear_schm41m'];"
//  init = "this addGoggles selectRandom ['cwr3_b_facewear_scrimnet_scarf_olive','rhs_scarf','vn_o_acc_goggles_01','vn_none','CUP_G_TK_RoundGlasses_blk','CUP_TK_NeckScarf','vn_b_acc_towel_02'];"

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL,CAMO_HEADGEAR_SPECIAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  items[] += {"ACE_UAVBattery:2"};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {"cwr3_o_backpack_rpg7"};
  backpackItems[] = {};
  magazines[] = {SMG_MAG,BASE_GRENADES,MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] = {SMG_MAG,BASE_GRENADES,MAT_MAG,MAT_MAG2};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  launchers[] = {"CUP_2b14_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:6"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:2","ACE_1Rnd_82mm_Mo_Smoke:4"};
};
class spotter: Fic_Spotter {// Spotter
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {CAMO_BACKPACK};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_OPTIC};
};
class pilot {// Pilot
  uniform[] = {CAMO_UNIFORM_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: Fic_Soldier_Carbine {
  items[] += {BASE_ENG,BASE_MEDICAL};
  backpackItems[] = {};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};
class demol: Fic_eng {// Demolitions Leader
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
  vest[] = {CAMO_VEST_MARKSMAN};
  weapons[] = {SNIPER};
  handguns[] = {PISTOL};
  magazines[] = {SNIPER_MAG,PISTOL_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class rifleman_03: rifleman {// Rifleman 3
};
class rifleman_04: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  backpack[] = {CARRYALL};
  backpackItems[] = {PL_MEDIC_MEDICAL};
};
class cm: plm {// Company Medic
};
class xo: coy {// XO
};
class plt: coy {// Platoon Leader
};
class sgt: plt {// Platoon Sergeant
};
class vicl: vicc {// Vehicle Commander
  items[] += {RADIO_MR};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG};
};
class hmgl: sl {// HMG Lead
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  magazines[] = {SMG_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {// HMG Gunner
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  magazines[] = {SMG_MAG,BASE_GRENADES,HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  magazines[] = {SMG_MAG,BASE_GRENADES,HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpackItems[] = {};
  magazines[] = {SMG_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  magazines[] = {SMG_MAG,BASE_GRENADES,HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  magazines[] = {SMG_MAG,BASE_GRENADES,HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {// Aircrew
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout

//SF Classes - This is intended to replicate a standard Reconnaissence unit

#define SF_UNIFORM "cwr3_o_uniform_kzs_v2"
#define SF_VEST "rhs_6b3_AK","rhs_6b3_AK_2","rhs_6b3_AK_3"
#define SF_VEST_AR "rhs_6b3_RPK"
#define SF_VEST_FTL "rhs_6b3_VOG","rhs_6b3_VOG_2"
#define SF_VEST_SL "rhs_6b3_R148"
#define SF_VEST_SNIPER SF_VEST
#define SF_HEADGEAR "PLOT_ARMOR_H_Bandanna_khk"
#define SF_BACKPACK "rhs_rd54"
#define SF_CARRYALL "rhs_tortila_khaki"

#define SF_RIFLE "rhs_weap_akms"
#define SF_RIFLE_MAG "hlc_30Rnd_762x39_b_ak:7","hlc_30Rnd_762x39_t_ak:3"
#define SF_RIFLE_ATTACHMENTS "cup_muzzle_bizon"

#define SF_CARBINE "rhs_weap_aks74n"
#define SF_CARBINE_MAG "hlc_45Rnd_545x39_t_rpk:3","hlc_30Rnd_545x39_EP_ak:7"
#define SF_CARBINE_ATTACHMENTS "rhs_acc_dtk1983"

#define SF_GLRIFLE "rhs_weap_aks74n_gp25"
#define SF_GLRIFLE_MAG SF_CARBINE_MAG
#define SF_GLRIFLE_MAG_HE GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE GLRIFLE_MAG_INSTANT,GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM GLRIFLE_MAG_FLARE

#define SF_AR AR
#define SF_AR_MAG AR_MAG
#define SF_AR_ATTACHMENTS 

#define SF_SNIPER SNIPER
#define SF_SNIPER_MAG SNIPER_MAG
#define SF_SNIPER_ATTACHMENTS SNIPER_ATTACHMENTS

#define SF_AT MAT
#define SF_AT_MAG MAT_MAG
#define SF_AT_ATTACHMENTS MAT_OPTIC

#define SF_PISTOL PISTOL_LIGHT
#define SF_PISTOL_MAG PISTOL_MAG
#define SF_PISTOL_ATTACHMENTS 

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  handguns[] = {SF_PISTOL};
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,BASE_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
  attachments[] = {SF_CARBINE_ATTACHMENTS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,BASE_GRENADES};
  launchers[] = {SF_AT};
  attachments[] = {SF_CARBINE_ATTACHMENTS};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  attachments[] = {SF_CARBINE_ATTACHMENTS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  handguns[] = {SF_PISTOL};
  magazines[] += {SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};