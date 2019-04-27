/*
    Author: Nicholas Jo'Foski
    Description: Spawns in a plane for new characters (identities) to get moved into
*/

NZF_spawnInPlane = {
    _plane = createVehicle ["C_Plane_Civil_01_F", [11882.4,15932.5,500], [], 0, "FLY"];
    spawnInPlane = missionNamespace getVariable ["spawnInPlane", []];
    spawnInPlane pushBack _plane;
    _plane allowDamage false;
    clearBackpackCargoGlobal _plane; // Remove Parachutes
    clearItemCargoGlobal _plane; // Remove Items
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
    [true] call NZF_moveInPlane;
    waitUntil {isTouchingGround _plane || !(alive _plane) || isNull _plane};
    spawnInPlane = missionNamespace getVariable ["spawnInPlane", []];
    spawnInPlane deleteAt (spawnInPlane find _plane);
    missionNamespace setVariable ["spawnInPlane", spawnInPlane, true];
    {
        if (isPlayer _x) then {
            [] remoteExec ["NZF_planeLanded", _x, false];
        };
    } forEach (crew _plane);
    sleep 15;
    {
        deleteVehicle _x;
    } forEach [_plane,pilot,coPilot];
};

/*
    What will happen to the plane if the player disconnects before it lands? Most likely wont get deleted?
*/