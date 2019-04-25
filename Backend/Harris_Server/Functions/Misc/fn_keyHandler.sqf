/*
	Author: Ben Harris
	Description: Master Keyhandler
*/

Harris_keyHandler = {
	_ctrl = _this select 0;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	_handled = false;

	switch (_this select 1) do
	{
		case 15:
		{
			if (alive player && !_alt && !_shift && !_ctrlKey && !(isNull (findDisplay 46)) && (isNull (findDisplay 1723))) then {
					[]call Harris_openInteraction;
					_handled = true;
			};
		};
	};

	_handled;
};

