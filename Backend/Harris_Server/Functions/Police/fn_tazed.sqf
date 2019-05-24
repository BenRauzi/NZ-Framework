/*
	Author: Ben Harris
	Descirption: Tazes the player
*/

NZF_tazed = {
	[] remoteExecCall ["KK_fnc_forceRagdoll", player];
	player setVariable ["NZF_unconscious", true, true];
	playSound3D ["NZF_Client\Sounds\tazer.ogg", player, false, getpos player, 1, 1, 125];
	life_iztazed = true;
	sleep 2;
	player setVariable ["NZF_unconscious", nil, true];
	life_iztazed = false;
};