/*
	Author: Ben Harris
	Description: Restrains player
*/
NZF_escort = {
	params ["_ct"];
	
	[] remoteExecCall ["NZF_escorted", _ct];
	_ct attachTo [player, [0.5, 0, 0]];
};