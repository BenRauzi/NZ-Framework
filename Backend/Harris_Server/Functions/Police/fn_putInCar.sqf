/*
	Author: Ben Harris
	Description: Puts someone in the target vehicle
*/

NZF_putInCar = {
	params["_ct", "_mode"];

	try {
		if (!isNil "_mode") then {
			[_ct] remoteExecCall ["NZF_getInCar", NZF_currentEscort];
			NZF_currentEscort = nil;
		} else {
			if !(isPlayer _ct) exitWith {};
			_nearestVehicle = nearestObjects[getPosATL player,["Car","Motorcycle","Bicycle","Motorbike","Ship","Submarine","Air"], 10] select 0;
			[_nearestVehicle] remoteExecCall ["NZF_getInCar", _ct];
		};
	} catch {
		["Error", "There are no vehicles nearby", "Failure"] spawn NZF_Notifications;
	};
};
