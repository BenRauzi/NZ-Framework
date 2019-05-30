/*
	Author: Nicholas Jo'Foski
	Description: Restrains and manages the player while restrained
*/

NZF_playerRestrained ={
	[_this select 0, _this select 1] spawn {
		// Restrain the player
		_pos = _this select 0;
		_type = _this select 1;
		if (isNil "_pos") then {
			_pos = "back";
		};
		if !(_pos in ["front","back"]) then {
			_pos = "back";
		};
		if (isNil {player getVariable "NZF_Restrained"}) then {
			player setVariable ["NZF_Restrained", [false,_pos], true];
		};
		if !((player getVariable "NZF_Restrained") select 0) then {
			if ((player getVariable "NZF_Surrendering") select 0) then {
				[] call Foski_playerSurrender;
			};
			sleep 0.1;
			player setVariable ["NZF_Restrained", [true, _pos], true];
			if !(currentWeapon player isKindOf ["Pistol", configFile >> "CfgWeapons"]) then {
				["holster"] call NZF_weaponHolster;
				[[player,"AmovPercMstpSnonWnonDnon"],"life_fnc_animSync", true, false] spawn bis_fnc_mp;
				player switchMove "AmovPercMstpSnonWnonDnon";
			};
			// Play Sound
			_snd = nil;
			switch (_type) do { 
				case "cuff":
				{
					_snd = "cuttingWire";
				};
				case "rope":{
					_snd = "cough";
				};
				default {}; 
			};
			if !(isNil "_snd") then {
				player say3D _snd;
			};
			sleep 0.2;
			player playAction ("Foski_Cuff_" + _pos);
			["NZF_Restrained"] call NZF_dropHandgun;
			player forceWalk true;
		};
		// Manage the restrained player
		while {true} do {
			if !((player getVariable "NZF_Restrained") select 0) exitWith {
				player setVariable ["tf_unable_to_use_radio", false];
			};
			// Block Certain Actions
			if !(currentWeapon player == "" || currentWeapon player isKindOf ["Pistol", configFile >> "CfgWeapons"]) then { // Changed to '! isKindOf "Pistol"' to stop bino's coming out as well
				["holster"] call NZF_weaponHolster;
				[[player,"AmovPercMstpSnonWnonDnon"],"life_fnc_animSync", true, false] spawn bis_fnc_mp;
				player switchMove "AmovPercMstpSnonWnonDnon";
			};
			player playAction ("Foski_Cuff_" + ((player getVariable "NZF_Restrained") select 1)); // Constantly loop animation to stop it from being overidden
			player setVariable ["tf_unable_to_use_radio", true]; // Disable the use of a radio
			if (currentVisionMode player == 1) then { // Check if the player has enabled night vision, if so disable it
				player action ["nvGogglesOff", player];
			};
			sleep 0.2;
		};
	};
};