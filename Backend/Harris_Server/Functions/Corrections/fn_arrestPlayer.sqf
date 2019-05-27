/*
	Author: Ben Harris
	Description: Retrieves data from the player and sends the arrest command to the player
*/

NZF_arrestPlayer = {
	_time = parseNumber (ctrlText 1401);	

	if (parseNumber _time >= 0) exitWith { ["Error", "Please Enter a valid time", "Failure"] spawn NZF_Notification; };

	_crimes = ctrlText 1400;
	if (count _crimes < 5) exitWith { ["Error", "Please Enter a valid set of crimes", "Failure"] spawn NZF_Notification; };

	_badge = ctrlText 1402;
	if (count _badge != 3) exitWith { ["Error", "Please Enter a valid bad number", "Failure"] spawn NZF_Notification; };
	_signature = ctrlText 1403;
	if (count _signature < 5) exitWith { ["Error", "Please Enter a valid signature", "Failure"] spawn NZF_Notification; };

	[_time, _crimes] remoteExecCall ["NZF_initJailLoop", Harris_currentCursorObject];

	closeDialog 0;
};