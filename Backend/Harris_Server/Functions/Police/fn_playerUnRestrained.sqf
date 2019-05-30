/*
	Author: Nicholas Jo'Foski
	Description: Unrestrains the player
*/

NZF_playerUnRestrained ={
	if (isNil {player getVariable "NZF_Restrained"}) then {
		player setVariable ["NZF_Restrained", [false,""], true];
	};
	if ((player getVariable "NZF_Restrained") select 0) then {
		player playAction ("Foski_UnCuff_" + ((player getVariable "NZF_Restrained") select 1));
		player setVariable ["NZF_Restrained", [false,""], true];
		player forceWalk false;
	};
};