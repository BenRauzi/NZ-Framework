/*
    Author: Nicholas Jo'Foski
    Filename: fn_moveInPlane.sqf
    Description: Moves the newly joined player into a plane!
*/

NZF_moveInPlane = {
    params["_bool"];
    if (count (missionNamespace getVariable ["spawnInPlane", []]) <= 0 && !_bool) exitWith {
        [] spawn NZF_spawnInPlane;
    };
    something = false;
    {
        if (count fullCrew _x <= 3) exitWith {
            player switchCamera "Internal";
            player moveInCargo _x;
        };
        something = true;
    } forEach (missionNamespace getVariable ["spawnInPlane", []]);
    if (something && !_bool) then {
        [] spawn NZF_spawnInPlane;
    };
};