//TEXT

private ["_m","_nr","_NotYourLine","_YourLines","_ok","_myDisplay"];
_nr = {
private ["_m"];
_m = _this select 0;
{if (getmarkerpos _x distance player < getmarkerpos _m distance player) then {_m = _x;};} foreach _this;
_m 
};
_NotYourLine = _this select 0;
//ARRAY 
_YourLines = _this select 1;
LineSelected = nil;
disableserialization;
_ok = createDialog "ConversationDialog"; 
_myDisplay = findDisplay 1232;
{
lbAdd [1500, _x];
} foreach _YourLines;
lbSetCurSel [1500, 0];
if (count _this > 2 && {_this select 2 != ""}) then {
_tasks = [["VillageTasks\TaskCrate.sqf","Delivery Job"],["VillageTasks\TaskCivPOW.sqf","Rescue Civilian POW"],["VillageTasks\TaskEscort.sqf","Escort Civilian"]];
if ({isNil{_x getvariable "Ghost"}} count (nearestObjects [getmarkerpos ([] CALL NEARESTVILLAGE), ["Land_BarrelWater_F"], 50]) == 0) then {_tasks = _tasks + [["VillageTasks\TaskWater.sqf","Deliver Water"]];};
if (count ((getposATL  player) nearEntities [["C_SUV_01_F","C_Van_01_box_F","C_Van_01_transport_F","C_Hatchback_01_sport_F","C_Hatchback_01_F","C_Offroad_01_F","C_Quadbike_01_F"], 50]) > 0) then {_tasks = _tasks + [["VillageTasks\TaskRepair.sqf","Help to Repair Car"]];};
if ({getmarkercolor _x == "ColorRed" && getmarkerpos _x distance vehicle player < 300 && {alive _x && {side _x == EAST}} count (getmarkerpos _x nearEntities [["Man"],80]) > 0} count FORTRESSESMM > 0) then {_tasks = [["VillageTasks\TaskFortress.sqf","House to Capture"]];};
if !((getmarkerpos ([] CALL NEARESTVILLAGE)) distance (getposATL ([getmarkerpos ([] CALL NEARESTVILLAGE)] CALL RETURNGUARDPOST)) < 500) then {_tasks = _tasks + [["VillageTasks\TaskGuardPost.sqf","Guardpost Builder"]];};
SaOkmissionnamespace setvariable ["TaskChosen","Random Task"];
lbAdd [1502, "Random Task"];
lbSetData [1502, 0, "Random Task"];
{
lbAdd [1502, _x select 1];
lbSetData [1502, (_foreachIndex + 1), _x select 0];
} foreach _tasks;
lbSetCurSel [1502, 0];
};
if (count _this > 2 && {_this select 2 != ""}) then {
lbAdd [1501, "Money"];
//lbAdd [1501, "Men"];
_idxs = 0;
_m = FacMarkers call _nr;
if (getmarkerpos _m distance player < 6000 && {getmarkercolor _m == "ColorYellow"}) then {lbAdd [1501, "Factory"];_idxs = _idxs + 1;};
_m = PierMarkers call _nr;
if (getmarkerpos _m distance player < 6000 && {getmarkercolor _m == "ColorYellow"}) then {lbAdd [1501, "Pier"];_idxs = _idxs + 1;};
_m = StoMarkers call _nr;
if (getmarkerpos _m distance player < 6000 && {getmarkercolor _m == "ColorYellow"}) then {lbAdd [1501, "Storage"];_idxs = _idxs + 1;};
_m = PowMarkers call _nr;
if (getmarkerpos _m distance player < 6000 && {getmarkercolor _m == "ColorYellow"}) then {lbAdd [1501, "Power Plant"];_idxs = _idxs + 1;};
if (!isNil"RewardSelected") then {
_idxs = _idxs + 1;
while {RewardSelected != (lbText [1501, _idxs]) && {_idxs > -1}} do {_idxs = _idxs - 1;};
} else {_idxs = 0;};
lbSetCurSel [1501, _idxs];

};
(_myDisplay displayCtrl 1100) ctrlSetStructuredText (parseText _NotYourLine);
sleep 0.1;
while {dialog && {isNil"Spoke"}} do {
LineSelected = (lbCurSel 1500);
if (count _this > 2) then {
RewardSelected = (lbText [1501, (lbCurSel 1501)]); 
};
sleep 0.1;
};
player setvariable ["RewardSelected",RewardSelected,true];
if (isNil"Spoke") then {LineSelected = nil;};
if (!isNil"LineSelected" && {count _this > 3} && {count (_this select 3) > 0}) then {
_vs = _this select 3;
if (count _vs > LineSelected) then {
_p = _vs select LineSelected;
if (typename _p == "ARRAY") then {_p = _p call RETURNRANDOM;};
_civ = if (count _this > 4 && {!isNil{_this select 4}}) then {_this select 4} else {player};
[player, _civ, "PlaV", _p] SPAWN SAOKKBTELL;
player setvariable ["LastW", _p];
};
};

Spoke = nil;
closeDialog 0;
