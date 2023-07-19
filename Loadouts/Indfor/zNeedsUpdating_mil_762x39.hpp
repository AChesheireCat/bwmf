// author = "watermelon";
// description = "paste your loadout config from the arseanal exporter";
#include "undef.hpp" // Reset defines

// Camo set
#define CAMO_UNIFORM "MNP_CombatUniform_Militia_C","MNP_CombatUniform_Militia_F","MNP_CombatUniform_Militia_E","MNP_CombatUniform_Militia_A","MNP_CombatUniform_Militia_B","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DA","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DF","MNP_CombatUniform_Rebel_B"
#define CAMO_VEST "CUP_V_O_TK_Vest_1","CUP_V_O_SLA_M23_1_BRN","CUP_V_O_SLA_M23_1_OD","CUP_V_B_PASGT_desert","CUP_V_B_PASGT_OD","CUP_V_B_PASGT_no_bags_desert","CUP_V_B_PASGT_no_bags_OD"
#define CAMO_BACKPACK "CUP_B_AlicePack_OD","CUP_B_AlicePack_Khaki","B_Battle_Belt_XL_F"
#define CARRYALL "B_Carryall_oli","B_Carryall_green_F"
#define CAMO_HEADGEAR "CUP_H_USArmy_Helmet_M1_Olive","CUP_H_USArmy_Helmet_M1_m81","CUP_H_USArmy_Helmet_M1_plain_Olive","CUP_H_USArmy_Helmet_M1_plain_M81","CUP_H_RUS_SSH68_Olive","CUP_H_RUS_SSH68_Green","CUP_H_TKI_Lungee_Open_01","CUP_H_TKI_Lungee_01","CUP_H_TKI_Lungee_02","CUP_H_TKI_Lungee_03","CUP_H_TKI_Lungee_04","CUP_H_TKI_Lungee_05","CUP_H_TKI_Lungee_06","CUP_H_TKI_Lungee_Open_01","CUP_H_TKI_Lungee_Open_02","CUP_H_TKI_Lungee_Open_03","CUP_H_TKI_Lungee_Open_04","CUP_H_TKI_Lungee_Open_05","CUP_H_TKI_Lungee_Open_06","CUP_H_TKI_Pakol_1_01","CUP_H_TKI_Pakol_1_02","CUP_H_TKI_Pakol_1_03","CUP_H_TKI_Pakol_1_04","CUP_H_TKI_Pakol_1_05","CUP_H_TKI_Pakol_1_06","CUP_H_TKI_Pakol_2_01","CUP_H_TKI_Pakol_2_02","CUP_H_TKI_Pakol_2_03","CUP_H_TKI_Pakol_2_04","CUP_H_TKI_Pakol_2_05","CUP_H_TKI_Pakol_2_06"
#define CAMO_HEADGEAR_SPECIAL CAMO_HEADGEAR
// Pilot camo Set
#define CAMO_UNIFORM_PILOT "CUP_U_B_CZ_WDL_NoKneepads","CUP_U_B_CZ_WDL_Kneepads_Gloves"
#define CAMO_VEST_PILOT "CUP_V_O_TK_Vest_1","CUP_V_O_SLA_M23_1_BRN","CUP_V_O_SLA_M23_1_OD"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4"
// Vehicle camo set
#define CAMO_UNIFORM_VICC "CUP_U_B_CZ_WDL_NoKneepads","CUP_U_B_CZ_WDL_Kneepads_Gloves"
#define CAMO_VEST_VICC "CUP_V_O_TK_Vest_1","CUP_V_O_SLA_M23_1_BRN","CUP_V_O_SLA_M23_1_OD"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_F"
#define CAMO_HEADGEAR_VICC "CUP_H_RUS_K6_3_khaki"
// Rifle
#define RIFLE "CUP_arifle_Sa58P","CUP_arifle_Sa58V","CUP_arifle_Sa58V_wood","CUP_arifle_AKM_Early","CUP_arifle_AKMS_Early","CUP_arifle_AKS","CUP_arifle_TYPE_56_2_Early"
#define RIFLE_MAG "potato_magazine_762x39_30rnd_reload_tracer_Yellow:7","potato_magazine_762x39_30rnd_tracer_Yellow:3"
#define RIFLE_ATTACHMENTS
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS
// GL Rifle
#define GLRIFLE "CUP_arifle_AKM_GL_Early","CUP_arifle_AKMS_GL_Early"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M:5"
#define GLRIFLE_MAG_FLARE "CUP_FlareYellow_GP25_M:4"
// Carbine
#define CARBINE "CUP_arifle_Sa58s","CUP_arifle_OTS14_GROZA_762"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74"
#define AR_MAG "potato_magazine_762x39_75rnd_tracer_Yellow:5"
// AT
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7V_M"
// MMG
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "potato_box_762x54_100rnd_tracer_Yellow:5"
// MAT
#define MAT "CUP_launch_Metis"
#define MAT_MAG "CUP_AT13_M:2"
#define MAT_MAG2 MAT_MAG
#define MAT_OPTIC
// HMG
#define HMG "CUP_DSHKM_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M:4"
// HAT
#define HAT "CUP_SPG9_carry"
#define HAT_TRI_HI "ace_csw_spg9CarryTripod"
#define HAT_TRI_LO HAT_TRI_HI
#define HAT_MAG "CUP_16Rnd_PG9_AT_M","CUP_16Rnd_OG9_HE_M"
// SAM
#define SAM "rhs_weap_igla"
#define SAM_MAG "rhs_mag_9k38_rocket:2"
#define SAM_MAG2 "rhs_mag_9k38_rocket:2"
// Sniper Rifle
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "potato_magazine_762x54_10rnd:10"
#define SNIPER_ATTACHMENTS "cup_optic_pso_3_open"
// Spotter Rifle
#define SPOTTER "CUP_SKS"
#define SPOTTER_MAG "potato_magazine_762x39_10rnd:10"
#define SPOTTER_ATTACHMENTS
// SMG
#define SMG "CUP_smg_SA61"
#define SMG_MAG "potato_magazine_32_ACP_20rnd:5"
// Pistol
#define PISTOL "rhs_weap_pya"
#define PISTOL_MAG "potato_magazine_9x19_16rnd:4"
#define PISTOL_ATTACHMENTS
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,GLRIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,GLRIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,GLRIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
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
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpackItems[] += {MMG_MAG};
  backpack[] = {CARRYALL};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
  backpack[] = {CARRYALL};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  backpack[] = {CARRYALL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG2)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter: Fic_Spotter {// Spotter
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  headgear[] = {CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};

class pilot {// Pilot
  uniform[] = {CAMO_UNIFORM_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  weapons[] = {SMG};
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
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: rifleman {
  items[] += {BASE_ENG,,BASE_MEDICAL};
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
  backpack[] = {CARRYALL};
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
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
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
  weapons[] = {RIFLE};
  launchers[] = {HMG_TRI_HI};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {// HMG Gunner
  launchers[] = {HMG};
  backpack[] = {CARRYALL};
};
class hmgag: rifleman {// HMG Spotter
  launchers[] = {HMG_TRI_LO};
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
  weapons[] = {RIFLE};
  launchers[] = {HAT_TRI_HI};
  backpackItems[] = {HAT_MAG};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  launchers[] = {HAT};
  backpack[] = {CARRYALL};
};
class hatag: rifleman {// HAT Spotter
  launchers[] = {HAT_TRI_LO};
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG2};
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