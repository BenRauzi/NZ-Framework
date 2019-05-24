/*
	Author: Ben Harris
	Description: Ejects all players from target vehicle
*/
NZF_pulloutAction = {
	params["_ct"];
	
	{
		[] remoteExecCall ["NZF_ejectPlayer", _x];
	} forEach (crew _ct);
};