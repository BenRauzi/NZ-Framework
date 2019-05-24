/*
	Author: Ben Harris
	Description: Selects your identity
*/

NZF_identitySelect = {
	_data = call compile(lbData [1500, (lbCurSel 1500)]);

	if (isNil "_data") exitWith {};

	player setVariable ["currentIdentity", _data, true];

	(findDisplay 46) displayAddEventHandler ["KeyDown","_this call NZF_keyHandler"];

	_selfInfo = (player getVariable "currentIdentity") select 0;
	NZF_selfName = format["%1 %2", _selfInfo select 0, _selfInfo select 1];

};