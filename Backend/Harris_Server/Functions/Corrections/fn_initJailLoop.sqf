/*
	Author: Ben Harris
	Description: The main jail loop. Also sets a variable every 60 seconds so they remaining jail time can be retrieved
*/
NZF_initJailLoop = {
	params["_time", "_crimes"];
	
	player setVariable ["jailTime", _time, true];

	normalGear = getUnitLoadout player;

	player setUnitLoadout [[],[],[],["U_I_C_Soldier_Bandit_5_F",[]],[],[],"","",[],["ItemMap","","","ItemCompass","ItemWatch",""]];	

	_random = (round(random (NZF_jailMarkers - 1))) + 1; // This prevents 21 or 0 being generated as random numbers when there are 20 cells. 
	player setPos (getMarkerPos format["jail_marker_%1", _random]);

	if (isNull (uiNamespace getVariable ['NZF_jailHud', displayNull])) then {
		15 cutRsc ["NZF_jailHud", "PLAIN"];

		((uiNamespace getVariable 'NZF_jailHud') displayCtrl 1003) ctrlSetText _crimes;
	};
	for "_i" from _time to 0 step -1 do {
		((uiNamespace getVariable 'NZF_jailHud') displayCtrl 1002) ctrlSetText ([_i,"HH:MM:SS"] call BIS_fnc_secondsToString);

		if (player distance (getMarkerPos "DOC_Marker") > 100) exitWith { ["Excaped!", "You have escaped from Jail! The cops will be looking for you!", "Warning"] spawn NZF_Notifications; player setVariable ["jailTime", nil, true]; 	15 cutText ["", "PLAIN"];};
		if (_i mod 60 = 0) then {
			player setVariable ["jailTime", _i, true];
		};

 		uiSleep 1;
	};

	[] call NZF_jailRelease;
};