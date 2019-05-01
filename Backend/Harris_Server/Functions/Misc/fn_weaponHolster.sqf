/*
    Author: Nicholas Jo'Foski
    Description: Handles the players weapon holster
*/

NZF_weaponHolster = {
	params ["_mode"];
	switch (_mode) do
	{
		case "holster":
		{
			if (currentWeapon player != "") then {
				NZF_hWep = currentWeapon player;
				player action ["SwitchWeapon", player, player, 100];
			};
		};
		case "unholster":
		{
			if (!isNil "NZF_hWep" && NZF_hWep in [primaryWeapon player, secondaryWeapon player, handgunWeapon player]) then {
				player selectWeapon NZF_hWep;
			};
		};
	};
};