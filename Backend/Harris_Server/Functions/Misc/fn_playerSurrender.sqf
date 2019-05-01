/*
    Author: Nicholas Jo'Foski
    Description: Makes the player surrender, also works inside of vehicles
*/

NZF_playerSurrender = {
	params ["_mode"];
	switch (_mode) do
	{
		case "start":
		{
			if !(player getVariable ["NZF_Surrendering",false]) then { // If the player is currently not surrendering
				if (vehicle player == player && !(currentWeapon player isKindOf ["Pistol", configFile >> "CfgWeapons"])) then {
					["holster"] call NZF_weaponHolster;
				};
				player setVariable ["NZF_Surrendering", true, true];
				player setVariable ["tf_unable_to_use_radio", true, true]; // Disable TFR Radio
				["Foski_Surrender"] call Foski_dropHandgun;
				if (vehicle player != player) then { 
				    [player,"Foski_Surrender"] remoteExecCall ["Foski_SurrenderSyncMP", 0]; 
				} else {
					player playAction "Foski_Surrender";
				};
			};
		};
		case "stop":
		{

		};
	};


	if !(player getVariable ["NZF_Surrendering",false]) then {
		if (vehicle player == player && !(currentWeapon player isKindOf ["Pistol", configFile >> "CfgWeapons"])) then {
			["holster"] call NZF_weaponHolster;
		};

	};
};

/*
NZF_playerSurrender = {
	[] spawn {
		if (isNil {player getVariable "Foski_Surrender"}) then {player setVariable ["Foski_Surrender", false, true];};
		if (!(player getVariable ["Foski_Restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed && !life_paintball) then {
			if (vehicle player == player && !(currentWeapon player == "" || currentWeapon player isKindOf ["Pistol", configFile >> "CfgWeapons"])) then {
				Holstlife_curWep_h = currentWeapon player;
				player action ["SwitchWeapon", player, player, 100];
				player switchcamera cameraView;
				[[player,"AmovPercMstpSnonWnonDnon"],"life_fnc_animSync",true,false] spawn bis_fnc_mp;
				player switchMove "AmovPercMstpSnonWnonDnon";
			};
			if (player getVariable ["Foski_Surrender", false]) then {
				player setVariable ["Foski_Surrender", false, true];
				player setVariable ["surrender", false, true];
			  	player setVariable ["tf_unable_to_use_radio", false, true];
			  	player setVariable ["Harris_TwitterEnabled", true, true];
				if (vehicle player != player) then { 
			    	[player,"Foski_StopSurrendering"] remoteExecCall ["Foski_SurrenderSyncMP", 0]; 
				} else {player playAction "Foski_StopSurrendering";};
			} else {
				player setVariable ["Foski_Surrender", true, true];
				player setVariable ["surrender", true, true];
				player setVariable ["tf_unable_to_use_radio", true, true];
				player setVariable ["Harris_TwitterEnabled", false, true];
				["Foski_Surrender"] call Foski_dropHandgun;
				if (vehicle player != player) then { 
				    [player,"Foski_Surrender"] remoteExecCall ["Foski_SurrenderSyncMP", 0]; 
				} else {player playAction "Foski_Surrender"};
			};
		};

		// Manage the surrendered player 
		while {true} do {
			if !(player getVariable "Foski_Surrender") exitWith {player setVariable ["tf_unable_to_use_radio", false, true]; player setVariable["surrender", false, true]; player setVariable ["Harris_TwitterEnabled", true, true]; player setVariable ["Harris_InteractionEnabled", true, true];};
			// Block Certain Actions
			if (vehicle player != player) then { // Constantly loop animation to stop it from being overidden
				[player,"Foski_Surrender"] remoteExecCall ["Foski_SurrenderSyncMP", 0]; 
			} else {player playAction "Foski_Surrender"}; 
			player setVariable ["tf_unable_to_use_radio", true, true]; // Disable the use of a radio
			player setVariable ["Harris_TwitterEnabled", false, true]; // Disable typing in twitter
			player setVariable ["Harris_InteractionEnabled", false, true]; // Disable the interaction menu
			// Block any type of weapon switching | V
			if (vehicle player == player && !(currentWeapon player == "" || currentWeapon player isKindOf ["Pistol", configFile >> "CfgWeapons"])) then { // Changed to '! isKindOf "Pistol"' to stop bino's coming out as well
				Holstlife_curWep_h = currentWeapon player;
				player action ["SwitchWeapon", player, player, 100];
				player switchcamera cameraView;
				[[player,"AmovPercMstpSnonWnonDnon"],"life_fnc_animSync",true,false] spawn bis_fnc_mp;
				player switchMove "AmovPercMstpSnonWnonDnon";
			};
			if (currentVisionMode player == 1) then {player action ["nvGogglesOff", player];}; // Check if the player has enabled night vision, if so disable it
			sleep 0.1;
		};
	};
};