/*
    Author: Nicholas Jo'Foski
    Description: Seat Switch Man Event Handler
*/

NZF_seatSwitchedMan = {
	params ["_unit1", "_unit2", "_vehicle"];
	
    // Prevent restrained players switching into driver, co-pilot and gunner seats of vehicles
    if ((driver _vehicle == _unit1 || gunner _vehicle == _unit1 || "Turret" in (assignedVehicleRole player)) && _unit1 getVariable ["Foski_Restrained", false]) then {
        if (vehicle player isKindOf 'Air') then {
            player action["GetOut",vehicle player];
        } else {
            player action["eject",vehicle player];
        };
    };
};