/*
	Author: Ben Harris
	Description: Master Keyhandler
*/

NZF_keyHandler = {
	_ctrl = _this select 0;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	_handled = false;

	switch (_this select 1) do
	{
		case 15: // TAB
		{
			// Interaction Menu
			if (alive player && !_alt && !_shift && !_ctrlKey && !(isNull (findDisplay 46)) && (isNull (findDisplay 1723))) then {
					[] call Harris_openInteraction;
					_handled = true;
			};
		};

		case 35: // H
		{
			// Holster & Unholster Weapon
			if !(((player getVariable ["NZF_Surrendering", false]) select 0) || ((player getVariable ["NZF_Restrained", false]) select 0)) then {
				if (_shift && !_ctrlKey) then {
					["holster"] call NZF_weaponHolster;
				};
				if (!_shift && _ctrlKey) then {
					["unholster"] call NZF_weaponHolster;
				};
			};
		};

		case 48: // B
		{
			// Surrender
			if (_shift) then {
				[] spawn NZF_playerSurrender;
				_handled = true; // Prevent binoculars coming out
			};
		};

		case 28:
		{
			if (isNull (findDisplay 5002)) then { [] call NZF_openTwitterType; } else { [] call NZF_sendMessage }; true;
		};

	};

	_handled;
};