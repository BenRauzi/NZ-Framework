/*
	Author: Ben Harris
	Description: Stops Escort on Player
*/
NZF_escortStop = {
	{
		if (_x isKindOf 'Man') then {
			detach _x;
			[] remoteExecCall ["NZF_unescorted", _x];
		};
	} forEach attachedObjects player;
};