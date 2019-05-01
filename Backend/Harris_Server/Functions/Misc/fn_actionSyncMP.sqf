/*
    Author: Nicholas Jo'Foski
    Description: Plays an action on a target globally (for everyone on the server)
*/

NZF_actionSyncMP = {
	params ["_unit","_anim"]; 
	_unit playAction _anim;
	if (_unit == player) then {
		player playAction _anim;
	};
};