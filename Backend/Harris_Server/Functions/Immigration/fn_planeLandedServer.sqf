/*
    Author: Ben Harris
    Description: Executed when the plane lands :) 
*/

NZF_planeLandedServer = {
    params["_plane", "_pilot", "_copilot"];
    waitUntil {isTouchingGround _plane || !(alive _plane) || isNull _plane}; 
    spawnInPlane = missionNamespace getVariable ["spawnInPlane", []]; 
    spawnInPlane deleteAt (spawnInPlane find _plane); 
    missionNamespace setVariable ["spawnInPlane", spawnInPlane, true];
    _players = []; 
    { 
        if (isPlayer _x) then { 
            _players pushBack _x; 
        }; 
    } forEach (crew _plane); 
    missionNamespace setVariable ["test", _players, true];
    { 
        [] remoteExec ["NZF_planeLanded", _x, false]; 
    } forEach (missionNamespace getVariable "test"); 
    sleep 15; 
    { 
        deleteVehicle _x; 
    } forEach [_plane,_pilot,_coPilot]; 
    _players = nil;
    _pilot = nil;
    _coPilot = nil;
};