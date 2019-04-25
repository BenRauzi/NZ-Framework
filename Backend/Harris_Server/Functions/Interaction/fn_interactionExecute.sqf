/*
	Author: Ben Harris
	Description: Executes interaction action

	Inner - [0] call Harris_interactionExecute;
	Outer = [0,1] call Harris_interactionExecute;
*/


Harris_interactionExecute = {
	params["_position","_array"];

	closeDialog 1723;
	if (isNil "_array") then {
		call compile (Harris_currentActions select _position);
	} else {
		index = _position - 1;
		call compile (getText (outerActions select index));
	};
};
