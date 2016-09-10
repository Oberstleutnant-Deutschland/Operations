//////////////////////////////
//    Dynamic-AI-Creator    //
//    Version 2.1 - 2009    //
//--------------------------//
//    DAC_Config_Units      //
//--------------------------//
//    Script by Silola      //
//    silola@freenet.de     //
//////////////////////////////

private ["_TypNumber","_TempArray","_Unit_Pool_S","_Unit_Pool_V","_Unit_Pool_T","_Unit_Pool_A"];
_TypNumber = _this select 0;_TempArray = [];

switch (_TypNumber) do
{
//-------------------------------------------------------------------------------------------------
// REDFOR (A3)
  case 0:
  {
      _Unit_Pool_S = ["O_T_crew_F","O_T_Helipilot_F","O_T_Soldier_SL_F","O_T_soldier_AR_F","O_T_soldier_AR_F","O_T_soldier_exp_F","O_T_soldier_GL_F","O_T_soldier_GL_F","O_T_soldier_M_F","O_T_medic_F","O_T_soldier_AA_F","O_T_oldier_repair_F","O_T_Soldier_F","O_T_Soldier_F","O_T_soldier_LAT_F","O_T_soldier_LAT_F","O_soldier_lite_F","O_T_soldier_TL_F","O_T_soldier_TL_F"];
      _Unit_Pool_V = ["O_T_MRAP_02_ghex_F","O_T_LSV_02_unarmed_ghex_F","O_T_LSV_02_armed_ghex_F","O_T_Truck_03_covered_ghex_F"];
    _Unit_Pool_T = ["O_MBT_02_arty_F","I_APC_Wheeled_03_cannon_F","O_APC_Tracked_02_cannon_F","O_APC_Wheeled_02_rcws_F","O_MBT_02_cannon_F","O_APC_Tracked_02_AA_F"];
    _Unit_Pool_A = ["O_Heli_Light_02_F"];
  };
//-------------------------------------------------------------------------------------------------
// BLUFOR (A3)
  case 1:
  {
      _Unit_Pool_S = ["B_T_crew_F","B_T_Helipilot_F","B_T_Soldier_SL_F","B_T_soldier_AR_F","B_T_soldier_AR_F","B_T_soldier_exp_F","B_T_soldier_GL_F","B_T_soldier_GL_F","B_T_soldier_AA_F","B_T_soldier_M_F","B_T_medic_F","B_T_soldier_repair_F","B_T_Soldier_F","B_T_Soldier_F","B_T_soldier_LAT_F","B_T_soldier_LAT_F","B_T_soldier_lite_F","B_T_soldier_TL_F","B_T_soldier_TL_F"];
      _Unit_Pool_V = ["B_T_MRAP_01_F","B_T_MRAP_01_gmg_F","B_T_MRAP_01_hmg_F"];
    _Unit_Pool_T = ["B_APC_Wheeled_01_cannon_F","B_APC_Tracked_01_AA_F","B_APC_Tracked_01_rcws_F","B_MBT_01_cannon_F","B_MBT_01_arty_F","B_MBT_01_mlrs_F"];
    _Unit_Pool_A = ["B_Heli_Light_01_armed_F","B_Heli_Transport_01_camo_F","B_Heli_Light_01_F"];
  };
//-------------------------------------------------------------------------------------------------
// Independent (A3)
  case 2:
  {
      _Unit_Pool_S = ["I_C_Soldier_Bandit_4_F","I_C_Helipilot_F","I_C_Soldier_Bandit_6_F","I_C_Soldier_Bandit_1_F","I_C_Soldier_Bandit_2_F","I_C_Soldier_Bandit_3_F","I_C_Soldier_Bandit_5_F","I_C_Soldier_Bandit_7_F","I_C_Soldier_Bandit_8_F"];
    _Unit_Pool_V = ["I_Truck_02_covered_F","I_Truck_02_transport_F","I_MRAP_03_hmg_F","I_MRAP_03_gmg_F","I_MRAP_03_F"];
    _Unit_Pool_T = ["I_MBT_03_cannon_F","I_APC_tracked_03_cannon_F","I_APC_Wheeled_03_cannon_F"];
    _Unit_Pool_A = ["I_Heli_light_03_F"];
  };
//-------------------------------------------------------------------------------------------------
// Civilians (A3)
  case 3:
  {
    _Unit_Pool_S = ["C_man_1","C_man_1","C_man_1","C_man_polo_1_F","C_man_polo_2_F","C_man_polo_3_F","C_man_polo_4_F","C_man_polo_5_F","C_man_polo_6_F","C_man_1_1_F","C_man_1_2_F","C_man_1_3_F"];
    _Unit_Pool_V = ["C_Van_01_box_F","C_Van_01_transport_F","C_Offroad_01_F","C_Hatchback_01_sport_F","C_Hatchback_01_F"];
    _Unit_Pool_T = ["C_Van_01_box_F","C_Van_01_transport_F","C_Offroad_01_F","C_Hatchback_01_sport_F","C_Hatchback_01_F"];
    _Unit_Pool_A = [];
  };

//-------------------------------------------------------------------------------------------------
  Default
  {
    if(DAC_Basic_Value != 5) then
    {
      DAC_Basic_Value = 5;publicvariable "DAC_Basic_Value",
      hintc "Error: DAC_Config_Units > No valid config number";
    };
    if(true) exitwith {};
  };
};

if(count _this == 2) then
{
  _TempArray = _TempArray + [_Unit_Pool_S,_Unit_Pool_V,_Unit_Pool_T,_Unit_Pool_A];
}
else
{
  _TempArray = _Unit_Pool_V + _Unit_Pool_T + _Unit_Pool_A;
};
_TempArray