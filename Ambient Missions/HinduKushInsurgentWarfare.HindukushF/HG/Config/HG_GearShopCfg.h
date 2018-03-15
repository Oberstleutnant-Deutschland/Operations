/*
    Author - HoverGuy
    © All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available gear shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class ShopCategory - Shop category, can only be Glasses/Headgear/Uniform/Vest/Backpack/MissileLauncher/RocketLauncher/Handgun/AssaultRifle/MachineGun/SubmachineGun/SniperRifle
		{
			content - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the item appears in the list else no
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Glasses
	{
		displayName = "$STR_HG_SHOP_FACEWEARS";
		content[] =
		{
			{"G_Balaclava_blk",5,"true"},
			{"G_Bandanna_shades",5,"true"},
			{"G_Aviator",5,"true"},
			{"CUP_RUS_Balaclava_blk",5,"true"},
			{"CUP_RUS_Balaclava_grn",5,"true"},
			{"G_Balaclava_oli",5,"true"},
			{"G_Bandanna_aviator",5,"true"},
			{"G_Bandanna_blk",5,"true"},
			{"G_Bandanna_khk",5,"true"},
			{"G_Bandanna_oli",5,"true"},
			{"G_Bandanna_tan",5,"true"},
			{"CUP_TK_NeckScarf",5,"true"},
			{"CUP_FR_NeckScarf",5,"true"},
			{"CUP_FR_NeckScarf2",5,"true"},
			{"G_Squares",5,"true"},
			{"TRYK_Beard_BK",5,"true"},
			{"TRYK_Beard_BL",5,"true"},
			{"TRYK_Beard",5,"true"},
			{"TRYK_Beard_BW",5,"true"},
			{"TRYK_Beard_Gr",5,"true"},
			{"TRYK_Beard_BK2",5,"true"},
			{"TRYK_Beard_BL2",5,"true"},
			{"TRYK_Beard2",5,"true"},
			{"TRYK_Beard_BW2",5,"true"},
			{"TRYK_Beard_Gr2",5,"true"},
			{"TRYK_Beard_BK3",5,"true"},
			{"TRYK_Beard_BL3",5,"true"},
			{"TRYK_Beard3",5,"true"},
			{"TRYK_Beard_BW3",5,"true"},
			{"TRYK_Beard_Gr3",5,"true"},
			{"TRYK_Beard_BK4",5,"true"},
			{"TRYK_Beard_BL4",5,"true"},
			{"TRYK_Beard4",5,"true"},
			{"TRYK_Beard_BW4",5,"true"},
			{"TRYK_Beard_Gr4",5,"true"}
		};
	};
	
	class Headgear
	{
		displayName = "$STR_HG_SHOP_HEADGEARS";
		content[] =
		{
			{"Headgear_H_Shemag_olive",10,"true"},
			{"Headgear_H_ShemagOpen_tan",10,"true"},
			{"Headgear_H_ShemagOpen_khk",10,"true"},
			{"CUP_H_TKI_Lungee_Open_01",5,"true"},
			{"CUP_H_TK_Lungee",10,"true"},
			{"CUP_H_TKI_Lungee_Open_02",10,"true"},
			{"CUP_H_TKI_Lungee_Open_03",10,"true"},
			{"CUP_H_TKI_Lungee_Open_04",10,"true"},
			{"CUP_H_TKI_Lungee_Open_05",10,"true"},
			{"CUP_H_TKI_Lungee_Open_06",10,"true"},
			{"CUP_H_TKI_Lungee_01",10,"true"},
			{"CUP_H_TKI_Lungee_02",10,"true"},
			{"CUP_H_TKI_Lungee_03",10,"true"},
			{"CUP_H_TKI_Lungee_04",10,"true"},
			{"CUP_H_TKI_Lungee_05",10,"true"},
			{"CUP_H_TKI_Lungee_06",10,"true"},
			{"CUP_H_TKI_Pakol_1_01",10,"true"},
			{"CUP_H_TKI_Pakol_2_04",10,"true"},
			{"CUP_H_TKI_Pakol_2_05",10,"true"},
			{"CUP_H_TKI_Pakol_2_06",10,"true"},
			{"CUP_H_TKI_Pakol_1_02",10,"true"},
			{"CUP_H_TKI_Pakol_1_03",10,"true"},
			{"CUP_H_TKI_Pakol_1_04",10,"true"},
			{"CUP_H_TKI_Pakol_1_05",10,"true"},
			{"CUP_H_TKI_Pakol_1_06",10,"true"},
			{"CUP_H_TKI_Pakol_2_01",10,"true"},
			{"CUP_H_TKI_Pakol_2_02",10,"true"},
			{"CUP_H_TKI_Pakol_2_03",10,"true"},
			{"CUP_H_TKI_SkullCap_01",10,"true"},
			{"CUP_H_TKI_SkullCap_02",10,"true"},
			{"CUP_H_TKI_SkullCap_03",10,"true"},
			{"CUP_H_TKI_SkullCap_04",10,"true"},
			{"CUP_H_TKI_SkullCap_05",10,"true"},
			{"CUP_H_TKI_SkullCap_06",10,"true"},
			{"CUP_H_SLA_Helmet",50,"true"}
	    };
	};
	
	class Uniform
	{
		displayName = "$STR_HG_SHOP_UNIFORMS";
		content[] =
		{
		    {"CUP_O_TKI_Khet_Jeans_04",25,"true"},
			{"CUP_O_TKI_Khet_Jeans_03",25,"true"},
			{"CUP_O_TKI_Khet_Jeans_02",25,"true"},
			{"CUP_O_TKI_Khet_Jeans_01",25,"true"},
			{"CUP_O_TKI_Khet_Partug_01",25,"true"},
			{"CUP_O_TKI_Khet_Partug_02",25,"true"},
			{"CUP_O_TKI_Khet_Partug_03",25,"true"},
			{"CUP_O_TKI_Khet_Partug_04",25,"true"},
			{"CUP_O_TKI_Khet_Partug_05",25,"true"},
			{"CUP_O_TKI_Khet_Partug_06",25,"true"},
			{"CUP_O_TKI_Khet_Partug_07",25,"true"},
			{"CUP_O_TKI_Khet_Partug_08",25,"true"},
			{"U_C_HunterBody_grn",75,"true"},
			{"U_BG_Guerilla3_1",50,"true"},
			{"U_BG_Guerilla2_3",50,"true"},
			{"U_BG_Guerilla2_1",50,"true"},
			{"U_BG_Guerilla2_2",50,"true"},
			{"U_BG_Guerrilla_6_1",75,"true"},
			{"CUP_U_C_Citizen_03",50,"true"},
			{"CUP_U_C_Citizen_02",50,"true"},
			{"CUP_U_C_Citizen_01",50,"true"},
			{"CUP_U_C_Citizen_04",50,"true"},
			{"U_I_C_Soldier_Bandit_3_F",50,"true"},
			{"CUP_U_C_Villager_01",50,"true"},
			{"CUP_U_C_Villager_02",50,"true"},
			{"CUP_U_C_Villager_03",50,"true"},
			{"CUP_U_C_Villager_04",50,"true"},
			{"CUP_U_C_Woodlander_01",50,"true"},
			{"CUP_U_C_Woodlander_02",50,"true"},
			{"CUP_U_C_Woodlander_03",50,"true"},
			{"CUP_U_C_Woodlander_04",50,"true"},
			{"CUP_U_C_Worker_03",50,"true"},
			{"CUP_U_C_Worker_02",50,"true"},
			{"CUP_U_C_Worker_01",50,"true"},
			{"CUP_U_C_Worker_04",50,"true"},
			{"U_C_Poor_1",5,"true"},
			{"U_C_Mechanic_01_F",50,"true"},
			{"CUP_U_C_Mechanic_01",60,"true"},
			{"CUP_U_C_Mechanic_02",60,"true"},
			{"CUP_U_C_Mechanic_03",60,"true"}
		};
	};
	
	class Vest
	{
		displayName = "$STR_HG_SHOP_VESTS";
		content[] =
		{
		    {"CUP_V_I_Guerilla_Jacket",75,"true"},
			{"V_LegStrapBag_black_F",50,"true"},
			{"V_LegStrapBag_coyote_F",50,"true"},
			{"V_LegStrapBag_olive_F",50,"true"},
			{"CUP_V_B_GER_Carrier_Rig_3_Brown",115,"true"},
			{"CUP_V_B_GER_Carrier_Rig_2_Brown",115,"true"},
			{"CUP_V_I_RACS_Carrier_Rig_3",115,"true"},
			{"CUP_V_I_RACS_Carrier_Rig_2",115,"true"},
			{"CUP_V_I_RACS_Carrier_Rig_wdl_3",115,"true"},
			{"CUP_V_I_RACS_Carrier_Rig_wdl_2",115,"true"},
			{"V_BandollierB_blk",100,"true"},
			{"V_BandollierB_cbr",100,"true"},
			{"V_BandollierB_rgr",100,"true"},
			{"V_BandollierB_khk",100,"true"},
			{"V_BandollierB_oli",100,"true"},
			{"CUP_V_RUS_Smersh_1",125,"true"},
			{"CUP_V_O_Ins_Carrier_Rig_Com",125,"true"},
			{"CUP_V_O_Ins_Carrier_Rig_Light",125,"true"},
			{"CUP_V_O_Ins_Carrier_Rig_MG",125,"true"},
			{"CUP_V_RUS_Smersh_2",125,"true"},
			{"CUP_V_O_TK_CrewBelt",25,"true"},
			{"CUP_V_OI_TKI_Jacket1_04",75,"true"},
			{"CUP_V_OI_TKI_Jacket1_06",75,"true"},
			{"CUP_V_OI_TKI_Jacket1_01",75,"true"},
			{"CUP_V_OI_TKI_Jacket1_05",75,"true"},
			{"CUP_V_OI_TKI_Jacket1_02",65,"true"},
			{"CUP_V_OI_TKI_Jacket1_03",75,"true"},
			{"CUP_V_OI_TKI_Jacket4_04",100,"true"},
			{"CUP_V_OI_TKI_Jacket4_05",100,"true"},
			{"CUP_V_OI_TKI_Jacket4_02",100,"true"},
			{"CUP_V_OI_TKI_Jacket4_06",100,"true"},
			{"CUP_V_OI_TKI_Jacket4_03",100,"true"},
			{"CUP_V_OI_TKI_Jacket4_01",100,"true"},
			{"CUP_V_CDF_6B3_4_Green",250,"true"},
			{"CUP_V_CDF_6B3_4_DST",275,"true"},
			{"CUP_V_OI_TKI_Jacket5_04",5,"true"}
		};
	};
	
	class Backpack
	{
		displayName = "$STR_HG_SHOP_BACKPACKS";
		content[] =
		{
			{"B_FieldPack_cbr",200,"true"},
			{"B_FieldPack_blk",200,"true"},
			{"B_FieldPack_khk",200,"true"},
			{"B_FieldPack_oli",200,"true"},
			{"B_FieldPack_oucamo",150,"true"},
			{"B_Kitbag_cbr",250,"true"},
			{"B_Kitbag_rgr",250,"true"},
			{"B_Kitbag_sgg",250,"true"},
			{"B_Messenger_Black_F",100,"true"},
			{"B_Messenger_Coyote_F",100,"true"},
			{"B_Messenger_Gray_F",100,"true"},
			{"B_Messenger_Olive_F",100,"true"},
			{"CUP_B_RPGPack_Khaki",125,"true"},
			{"CUP_B_M2_Gun_Bag",800,"true"},
			{"CUP_B_M2_MiniTripod_Bag",100,"true"},
			{"CUP_B_M2_Tripod_Bag",200,"true"},
			{"CUP_B_DShkM_Gun_Bag",800,"true"},
			{"CUP_B_DShkM_TripodHigh_Bag",200,"true"},
			{"CUP_B_DShkM_TripodLow_Bag",100,"true"},
			{"ffaa_milan_tripode_Bag",10000,"true"},
			{"ffaa_tow_tripode_Bag",12000,"true"},
			{"ffaa_spike_tripode_Bag",20000,"true"},
			{"ffaa_Tripod_Bag",250,"true"},
			{"B_Carryall_cbr",300,"true"},
			{"B_Carryall_khk",300,"true"},
			{"B_Carryall_oli",300,"true"},
			{"B_AssaultPack_sgg",200,"true"},
			{"B_AssaultPack_khk",200,"true"},
			{"B_AssaultPack_rgr",200,"true"},
			{"B_AssaultPack_cbr",200,"true"},
			{"B_AssaultPack_blk",200,"true"}
		};
	};
	
	class MissileLauncher
	{
		displayName = "$STR_HG_SHOP_MISSILE_LAUNCHER";
		content[] =
		{
			{"CUP_launch_FIM92Stinger",38000,"true"},
			{"CUP_launch_Igla",33000,"true"},
			{"CUP_launch_9K32Strela",33000,"true"}
		};
	};
	
	class RocketLauncher
	{
		displayName = "$STR_HG_SHOP_ROCKET_LAUNCHER";
		content[] =
		{
			{"CUP_launch_RPG7V",2000,"true"},
			{"CUP_launch_RPG18",260,"true"}
		};
	};
	
	class Handgun
	{
		displayName = "$STR_HG_SHOP_HANDGUN";
		content[] =
		{
			{"CUP_hgun_SA61",600,"true"},
			{"CUP_hgun_Makarov",150,"true"},
			{"CUP_hgun_PB6P9",400,"true"},
			{"CUP_hgun_Colt1911",350,"true"}
		};
	};
	
	class AssaultRifle
	{
		displayName = "$STR_HG_SHOP_ASSAULT_RIFLE";
		content[] =
		{
			{"hlc_rifle_ak47",650,"true"},
			{"hlc_rifle_ak74",1000,"true"},
			{"hlc_rifle_akm",800,"true"},
			{"hlc_rifle_akmgl",1000,"true"},
			{"hlc_rifle_aks74",1000,"true"},
			{"hlc_rifle_aks74_GL",1250,"true"},
			{"CUP_arifle_AKS_Gold",3500000,"true"}
		};
	};
	
	class MachineGun
	{
		displayName = "$STR_HG_SHOP_MACHINE_GUN";
		content[] =
		{
			{"hlc_rifle_rpk",1750,"true"},
			{"hlc_rifle_rpk74n",2000,"true"},
			{"CUP_lmg_PKM",6000,"true"},
			{"hlc_lmg_MG42",45000,"true"}
		};
	};
	
	class SubmachineGun
	{
		displayName = "$STR_HG_SHOP_SUB_MACHINE_GUN";
		content[] =
		{
			{"hlc_rifle_aks74u",700,"true"}
		};
	};
	
	class SniperRifle
	{
		displayName = "$STR_HG_SHOP_SNIPER_RIFLE";
		content[] =
		{
			{"hlc_rifle_M1903A1_unertl",1500,"true"},
			{"bnae_mk1_t_virtual",2250,"true"},
			{"CUP_srifle_SVD",5000,"true"}
		};
	};
};
