/*
    Author: Nicholas Jo'Foski
    Filename: fn_spawnInPlane.sqf
    Description: Spawns in a plane for new players!
*/

NZF_spawnInPlane = {
    _plane = createVehicle ["C_Plane_Civil_01_F", [11882.4,15932.5,500], [], 0, "FLY"];
    spawnInPlane = missionNamespace getVariable ["spawnInPlane", []];
    spawnInPlane pushBack _plane;
    missionNamespace setVariable ["spawnInPlane", spawnInPlane, true];
    createVehicleCrew _plane;
    _plane landAt 0;
    _plane lock true;
    [true] call NZF_moveInPlane;
    waitUntil {isTouchingGround _plane || isNull _plane};
    spawnInPlane = missionNamespace getVariable ["spawnInPlane", []];
    spawnInPlane deleteAt (spawnInPlane find _plane);
    missionNamespace setVariable ["spawnInPlane", spawnInPlane, true];
    deleteVehicle _plane;
};