/*
    Author: Nicholas Jo'Foski
    Filename: fn_spawnInPlane.sqf
    Description: Spawns in a plane for new players!
*/

NZF_spawnInPlane = {
    _plane = createVehicle ["C_Plane_Civil_01_F", [11882.4,15932.5,500], [], 0, "FLY"];
    spawnInPlane = missionNamespace getVariable ["spawnInPlane", []];
    spawnInPlane pushBack _plane;
    _plane allowDamage false;
    missionNamespace setVariable ["spawnInPlane", spawnInPlane, true];
    createVehicleCrew _plane;
    _plane landAt 0;
    _plane lock true;
    pilot = driver _plane;
    {
        if ((!isPlayer _x) && (_x != pilot)) exitWith {
            coPilot = _x;
        };
    } forEach crew _plane;
    {
        _x forceAddUniform "U_Marshal";
        _x addHeadgear "H_HeadSet_" + selectRandom ["black","orange","red","white","yellow"] + "_F";
        _x setFace selectRandom ["WhiteHead_18","WhiteHead_04","TanoanHead_A3_08","Barklem","AsianHead_A3_04"];
    } forEach [pilot,coPilot];
    [true] spawn NZF_moveInPlane;
    // Need to work on this part
    waitUntil {isTouchingGround _plane || !(alive _plane) || isNull _plane};
    spawnInPlane = missionNamespace getVariable ["spawnInPlane", []];
    spawnInPlane deleteAt (spawnInPlane find _plane);
    missionNamespace setVariable ["spawnInPlane", spawnInPlane, true];
    {
        deleteVehicle _x;
    } forEach [_plane,pilot,coPilot];
};