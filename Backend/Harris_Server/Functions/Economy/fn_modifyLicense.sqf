/*
    Author: Nicholas Jo'Foski
    Description: Adds or removes a players license
*/

NZF_modifyLicense = {
	params ["_mode","_license"];
	{
		_pLicenses = (player getVariable "currentIdentity") select 3;
		switch (_mode) do
		{
			case "add":
			{
				if (_license == _x select 1 && !(_license in _pLicenses)) then {
					_pLicenses pushBack _license;
				};
			};
			case "remove":
			{
				if (_license in _pLicenses) then {
					_pLicenses deleteAt (_pLicenses find _license);
				};
			};
		};
	} forEach NZF_licenseList;
};