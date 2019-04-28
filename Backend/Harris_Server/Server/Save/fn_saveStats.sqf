/*
	Author: Ben Harris
	Description: Saves the users's stats
*/
Harris_saveStats = {
	params["_player"];

	_cash = _player getVariable ["cash", 0];
	_bank = _player getVariable ["bank", 0];
	_items = getUnitLoadout _player;

	_identity = (_player getVariable "currentIdentity") select 1;
	_info = _player getVariable "playerInfo";
	_bankaccount = _info select 0;

	_playerItems = (_info select 3);
	{
		if (_x select 1 == _identity) exitWith {
			_playerItems deleteAt _forEachIndex;
		};
	} forEach _playerItems; //loadout example of multi-identity
	_playerItems pushBack [_items, _identity];

	_info set [1, _cash];
	_info set [2, _bank];

	_info = [_bankaccount, _cash, _bank, _playerItems];

	_player setVariable ["playerInfo", _info, true];

	_insertstr = format["updatePlayerInfo:%1:%2:%3:%4", _cash, _bank, _playerItems, getPlayerUID _player];
	_insert = [0, _insertstr] call MySQL_fnc_ExtDBquery;
}; 

//[allPlayers select 0] call Harris_saveStats;