/*
	Author: Nicholas Jo'Foski
	Description: Restrains a player
*/

NZF_restrainPlayer ={
	params ["_person","_type"];
	if (isNil "_person") exitWith {};
	if (isNil "_type") then {_type = "cuff";};
	_relDir = _person getRelDir player;
	_pos = "";
	if (_relDir < 90 || _relDir > 270) then {_pos = "front"}; // Front
	if (_relDir > 90 && _relDir < 270) then {_pos = "back"}; // Back
	[_pos,_type] remoteExecCall ["NZF_playerRestrained", _person];
	player playMove 'AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon';
};