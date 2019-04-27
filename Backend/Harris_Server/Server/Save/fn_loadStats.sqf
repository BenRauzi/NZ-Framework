/*
	Author: Ben Harris 
	Description: Loads the players stats
*/

Harris_loadStats = {
	params["_info"];

	player setVariable ["dataReceived", true];

	waitUntil{!isNil {player getVariable "currentIdentity"}};

	_identity = (player getVariable "currentIdentity") select 1;

	_info = _info select 0;

	_bankAccount = _info select 1;

	{
		if (_x select 1 == _identity) exitWith {
			player setVariable ["cash", _x select 0, true];
		};
	} forEach (_info select 2);
};