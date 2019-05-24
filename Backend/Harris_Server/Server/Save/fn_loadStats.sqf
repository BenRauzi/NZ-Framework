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

	player setVariable ["playerInfo", _info, true];

	_bankAccount = _info select 0;

	player setVariable ["cash", _info select 1, true];

	player setVariable ["bank", _info select 2, true];

	_gearLoaded = false;
	{
		if (_x select 1 == _identity) exitWith {
			player setUnitLoadout ( _x select 0);
			_gearLoaded = true;
		};
	} forEach (_info select 3); //loadout example of multi-identity

	{
		if (_x select 1 == _identity) exitWith {
			player setVariable ["copLevel", ( _x select 0)];
		};
	} forEach (_info select 4); //copLevel example of multi-identity

	{
		if (_x select 1 == _identity) exitWith {
			player setVariable ["medicLevel", ( _x select 0)];
		};
	} forEach (_info select 5); //medicLevel example of multi-identity

	{
		if (_x select 1 == _identity) exitWith {
			_identity = (player getVariable "currentIdentity");
			_identity set[3, _x select 0];
			player setVariable ["currentIdentity", _identity, true];
		};
	} forEach (_info select 6); //medicLevel example of multi-identity

	if (isNil {(player getVariable "currentIdentity") select 3}) then {
		_identity = (player getVariable "currentIdentity");
		_identity set[3, []];
		player setVariable ["currentIdentity", _identity, true];
	};

	if !(_gearLoaded) then {
		[] spawn NZF_openCharacterCreation;
		cutText ["","BLACK FADED",0];
	} else {
		cutText ["","BLACK FADED",0];
		[player, (player getVariable "currentIdentity" select 2) select 0] remoteExecCall ["NZF_setFaceGlobal", 0 , true];
		[] spawn NZF_openSpawnSelect;
	};
};