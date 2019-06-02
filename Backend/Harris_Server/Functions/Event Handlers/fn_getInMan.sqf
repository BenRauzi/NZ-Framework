/*
    Author: Nicholas Jo'Foski
    Description: Get in Man Event Handler
*/

NZF_getInMan = {
	params ["_vehicle", "_role", "_unit", "_turret"];
	
    // Prevent restrained players getting into driver, co-pilot and gunner seats of vehicles
    if ((_role == "driver" || _role == "gunner" || "Turret" in (assignedVehicleRole player)) && ((player getVariable "NZF_Restrained") select 0)) then {
        if (vehicle player isKindOf 'Air') then {
            player action["GetOut",vehicle player];
        } else {
            player action["eject",vehicle player];
        };
    };

    // Set aircraft long range radio to the ATC freq
    if (vehicle player isKindOf "Air") then {
    	[(call TFAR_fnc_activeLrRadio), 1, NZF_ATCFreq] call TFAR_fnc_SetChannelFrequency;
    };
};