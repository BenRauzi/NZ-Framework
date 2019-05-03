/*
	Author: Ben Harris
	Description: Spawns the blood UI
*/
NZF_setBlood = {
	params["_damage"];
	

	_bloodOverlay = uiNamespace getVariable ["NZF_bloodOverlay", displayNull];
	if (isNull _bloodOverlay) then {
		15 cutRsc ["NZF_bloodOverlay", "PLAIN"];
	};

	_damageChange = _damage - player_damage;


	for "_i" from player_damage to _damage step (_damageChange / 10) do {
		(_bloodOverlay displayCtrl 1200) ctrlSetTextColor [1,1,1,_i];
		sleep 0.05;
	};
	player_damage = _damage;

	if (player_damage == 0) then {
		(_bloodOverlay displayCtrl 1200) ctrlSetTextColor [1,1,1,0];
	};
};