/*
	Author: Ben Harris
	Description: Selects your identity
*/

NZF_identitySelect = {
	_data = call compile(lbData [1500, (lbCurSel 1500)]);

	if (isNil "_data") exitWith {};

	player setVariable ["currentIdentity", _data, true];

	cutText ["","BLACK IN",1]; 

	(findDisplay 46) displayAddEventHandler ["KeyDown","_this call NZF_keyHandler"];

};