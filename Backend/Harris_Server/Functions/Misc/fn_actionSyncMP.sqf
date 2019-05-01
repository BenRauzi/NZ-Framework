/*
    Author: Nicholas Jo'Foski
    Description: Hides target locally
*/

NZF_actionSyncMP = {
	params ["_unit","_anim"]; 
	_unit playAction _anim;
	if (_unit == player) then {
		player playAction _anim;
	};
};