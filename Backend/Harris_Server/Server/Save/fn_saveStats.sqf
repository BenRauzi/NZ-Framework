/*
	Author: Ben Harris
	Description: Saves the users's stats
*/
Harris_saveStats = {
	params["_player"];

	_cash = _player getVariable ["cash", 0];
	_bank = _player getVariable ["bank", 0];
	_items = getUnitLoadout _player;

	_identity = (player getVariable "currentIdentity") select 1;
	_info = player getVariable ["playerInfo", _info];

	{
		if (_x select 1 == _identity) exitWith {
			(_info select 3) deleteAt _forEachIndex;
			(_info select 3) pushBack [_items, _identity];
		};
	} forEach (_info select 3); //loadout example of multi-identity

	_info set [1, _cash];
	_info set [2, _bank];

	test = _info;

	player setVariable ["playerInfo", _info];
};