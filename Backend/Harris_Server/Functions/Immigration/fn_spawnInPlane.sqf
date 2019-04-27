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
    sleep 10;
    cutText ["","Black Out", 2];
    5 fadeSound 0;
    3 fadeMusic 0;
    sleep 3;
    {
        deleteVehicle _x;
    } forEach [_plane,pilot,coPilot];
    player setPos (getMarkerPos "newCharacterSpawn");
    player setDir (markerDir "newCharacterSpawn");
    player switchCamera "Internal";
    player allowDamage true;
    titleText ["<t font='EtelkaMonospaceProBold' size='1.5'>1 Hour Later</t>", "PLAIN", 0.3,true,true];
    sleep 6;
    5 fadeSound 1;
    cutText ["","Black In", 2];
};