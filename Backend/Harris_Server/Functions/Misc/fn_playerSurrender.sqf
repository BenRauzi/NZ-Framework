/*
    Author: Nicholas Jo'Foski
    Description: Makes the player surrender, also works inside of vehicles
*/

NZF_playerSurrender = {
	if (player getVariable ["NZF_Surrendering", false]) then {
		player setVariable ["NZF_Surrendering", false, true];
		player setVariable ["tf_unable_to_use_radio", false];
		if (vehicle player != player) then {
		    [player,"Foski_StopSurrendering"] remoteExecCall ["NZF_actionSyncMP", 0];
		} else {
			player playAction "Foski_StopSurrendering";
		};
	} else {
		if (vehicle player == player && !(currentWeapon player == "" || currentWeapon player isKindOf ["Pistol", configFile >> "CfgWeapons"])) then {
			["holster"] call NZF_weaponHolster;
			[[player,"AmovPercMstpSnonWnonDnon"],"life_fnc_animSync", true, false] spawn bis_fnc_mp;
			player switchMove "AmovPercMstpSnonWnonDnon";
		};
		player setVariable ["NZF_Surrendering", true, true];
		player setVariable ["tf_unable_to_use_radio", true];
		["NZF_Surrendering"] call NZF_dropHandgun;
		if (vehicle player != player) then {
		    [player,"Foski_Surrender"] remoteExecCall ["NZF_actionSyncMP", 0];
		} else {
			player playAction "Foski_Surrender";
		};
	};
	// Manage the surrendered player 
	while {true} do {
		if !(player getVariable ["NZF_Surrendering", false]) exitWith {
			player setVariable ["tf_unable_to_use_radio", false];
		};
		// Block Certain Actions
		if (vehicle player == player && !(currentWeapon player == "" || currentWeapon player isKindOf ["Pistol", configFile >> "CfgWeapons"])) then { // Block any type of weapon switching
			["holster"] call NZF_weaponHolster;
			[[player,"AmovPercMstpSnonWnonDnon"],"life_fnc_animSync", true, false] spawn bis_fnc_mp;
			player switchMove "AmovPercMstpSnonWnonDnon";
		};
		if (vehicle player != player) then { // Constantly loop animation to stop it from being overidden
			[player,"Foski_Surrender"] remoteExecCall ["NZF_actionSyncMP", 0];
		} else {
			player playAction "Foski_Surrender";
		}; 
		player setVariable ["tf_unable_to_use_radio", true]; // Disable the use of a radio
		if (currentVisionMode player == 1) then { // Check if the player has enabled night vision, if so disable it
			player action ["nvGogglesOff", player];
		};
		sleep 0.2;
	};
};