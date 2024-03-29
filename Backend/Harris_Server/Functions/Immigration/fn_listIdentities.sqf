/*
	Author: Ben Harris
	Description: Lists all the users identities so they can select one
*/

NZF_listIdentities = {
	waitUntil{!isNull (findDisplay 5041)};
	(findDisplay 5041) displaySetEventHandler ["KeyDown","if((_this select 1) isEqualTo 1) then {true}"];


	_ctrl = [77777, 77778, 77779, 77780, 77781, 77782,71324,71328,71325,71329,71327,71326,1202];

	{
			ctrlShow [_x, false];
	} forEach _ctrl;

	if (count(profileNamespace getVariable ["identityInfo", []]) >= NZF_maxIdentities && !(getPlayerUID player in ["76561198072625284","76561198099644981","76561198062192032"])) then {
		ctrlShow [1601, false];
		ctrlShow [1201, false];
	};

	{
		_info = _x select 0;

		_name = format ["%1 %2. %3", (_info select 0), (_info select 2), (_info select 1)];
		_index = lbAdd [1500, _name];
		lbSetData [1500, _index, str _x];

	} forEach (profileNamespace getVariable ["identityInfo", []]);
}; 