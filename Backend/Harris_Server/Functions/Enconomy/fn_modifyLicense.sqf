/*
    Author: Nicholas Jo'Foski
    Description: Adds or removes a players license -- NEED TO MAKE NZF_playerLicenses A GLOBAL VARIABLE
*/

NZF_modifyLicense = {
	params ["_mode","_license"];
	{
		if (_license == _x select 1) exitWith {
			switch (_mode) do
			{
				case "add":
				{
					if !(_license in NZF_playerLicenses) then {
						NZF_playerLicenses pushBack _license;
					};
				};
				case "remove":
				{
					if (_license in NZF_playerLicenses) then {
						NZF_playerLicenses deleteAt (NZF_playerLicenses find _license);
					};
				};
			};
		};
	} forEach NZF_licenseList;
};