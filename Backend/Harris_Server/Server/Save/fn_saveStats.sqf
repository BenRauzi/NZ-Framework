/*
	Author: Ben Harris
	Description: Saves the users's stats
*/
Harris_saveStats = {
	params["_player", "_info"];

	_cash = _player getVariable ["cash", 0];
	_bank = _player getVariable ["bank", 0];
	_items = getUnitLoadout _player;

	_identity = (_player getVariable "currentIdentity") select 1;
	_bankaccount = _info select 0;

	_playerItems = (_info select 3);
	{
		if (_x select 1 == _identity) exitWith {
			_playerItems deleteAt _forEachIndex;
		};
	} forEach _playerItems; //loadout example of multi-identity
	_playerItems pushBack [_items, _identity];

	_licenses = (_info select 4);
	{
		if (_x select 1 == _identity) exitWith {
			_licenses deleteAt _forEachIndex;
		};
	} forEach _licenses; //loadout example of multi-identity
	_licenses pushBack [(_player getVariable "currentIdentity") select 3, _identity];

	_info set [1, _cash];
	_info set [2, _bank];
	_info = [_bankaccount, _cash, _bank, _playerItems, _licenses];

	[_info] remoteExecCall ["NZF_statsReturned", _player];

	_insertstr = format["updatePlayerInfo:%1:%2:%3:%4:%5", _cash, _bank, _playerItems, _licenses, getPlayerUID _player];
	_insert = [0, _insertstr] call MySQL_fnc_ExtDBquery;
}; 