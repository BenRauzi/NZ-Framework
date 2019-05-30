/*
	Author: Nicholas Jo'Foski
	Description: UnRestrains a player
*/

NZF_unRestrainPlayer ={
	params ["_person","_type"];
	if (isNil "_person") exitWith {};
	if (isNil "_type") then {_type = "cuff";};
	if !((_person getVariable "NZF_Restrained") select 0) exitWith {};
	[_type] remoteExecCall ["NZF_playerUnRestrained", _person];
	player playMove 'AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon';
};