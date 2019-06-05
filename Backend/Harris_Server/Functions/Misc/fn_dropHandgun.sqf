/*
    Author: Nicholas Jo'Foski
    Description: Allows the player to drop their handgun while surrendered / restrained
*/

NZF_dropHandgun = {
	[_this select 0] spawn {
		_var = _this select 0;
		if (isNil "_var") exitWith {};
		if (((player getVariable _var) select 0) && currentWeapon player != "") then {
			_action = player addAction ["Drop Handgun", {
				_ammo = 0;
				_gun = currentWeapon player;
				_mag = (getArray (configfile >> "CfgWeapons" >> _gun >> "magazines")) select 0;
				if (player ammo _gun > 0) then {_ammo = 1;};
				player removeWeapon _gun;
				_gunI = "GroundWeaponHolder" createvehicle position player;
				_gunI setPos (getPos player);
				_gunI addItemCargoGlobal [_gun,1];
				_gunI addItemCargoGlobal [_mag,_ammo];
				player removeAction (_this select 2);
			}];
			waitUntil {(!((player getVariable _var) select 0)) || currentWeapon player == ""};
			player removeAction _action;
		};
	};
};