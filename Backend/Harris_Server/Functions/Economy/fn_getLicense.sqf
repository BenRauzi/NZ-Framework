/*
    Author: Nicholas Jo'Foski
    Description: Checks if the player has a particular license
*/

NZF_getLicense = {
	params ["_license","_dName"];
	_pLicenses = (player getVariable "currentIdentity") select 3;
	if (isNil "_license") exitWith {_pLicenses};
	if (typeName _license == "SCALAR") exitWith {
		if (_license == 0) exitWith {true};
	};
	if !(isNil "_dName") exitWith {
		{
			if (_license == _x select 1) exitWith {
				_x select 0;
			};
		} forEach NZF_licenseList;
	};
	if (_license in _pLicenses) then {
		true;
	} else {
		false;
	};
};