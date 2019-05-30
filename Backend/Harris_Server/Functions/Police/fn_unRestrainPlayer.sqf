/*
	Author: Nicholas Jo'Foski
	Description: UnRestrains a player
*/

NZF_unRestrainPlayer ={
	params ["_person"];
	if (isNil "_person") exitWith {};
	if !((_person getVariable "NZF_Restrained") select 0) exitWith {};
	[] remoteExecCall ["NZF_playerUnRestrained", _person];
};