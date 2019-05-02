/*
    Author: Nicholas Jo'Foski
    Description: Spawns in a plane for new characters (identities) to get moved into
*/

NZF_spawnInPlane = { 
    _plane = createVehicle ["C_Plane_Civil_01_F", [11882.4,15932.5,500], [], 0, "FLY"]; 
    spawnInPlane = missionNamespace getVariable ["spawnInPlane", []]; 
    spawnInPlane pushBack _plane; 
    _plane allowDamage false; 
    clearBackpackCargoGlobal _plane;     
    clearItemCargoGlobal _plane;     
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
        _x allowDamage false; 
    } forEach [pilot,coPilot]; 
    [true] call NZF_moveInPlane; 

    [_plane, pilot, coPilot] remoteExec ["NZF_planeLandedServer", 2];

    pilot = nil;
    coPilot = nil;
};