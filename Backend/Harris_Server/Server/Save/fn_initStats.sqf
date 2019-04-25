/*
	Author: Ben Harris
	Description: Checks if the player exists, if they do initialise stats and if they don't then set stats and restart.
*/

Harris_initStats = {
	params["_player"];

	_checkstr = format ["existPlayerInfo:%1", getPlayerUID _player];
	_check = [0, _checkstr] call MySQL_fnc_ExtDBquery;

	_doesExist = (_check select 0) select 0;

	if !(_doesExist) then {
		_insertstr = format["insertPlayerInfo:%1:%2:%3:%4", getPlayerUID _player, name _player, round(random(99999)), 5000];
		_insert = [0, _insertstr] call MySQL_fnc_ExtDBquery;
	} else {
		diag_log (getPlayerUID _player);
		_infoStr = format["playerInfo:%1", getPlayerUID _player];
		_info = [_infoStr, 2] call MySQL_fnc_ExtDBasync;

		_info = _info select 0;

		_cash = _info select 1;
		_bankAccount = _info select 2;
	};
};