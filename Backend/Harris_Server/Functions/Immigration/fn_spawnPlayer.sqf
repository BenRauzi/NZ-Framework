/*
    Author: Nicholas Jo'Foski
    Description: Spawns the player at the selected spawn point
*/

NZF_spawnPlayer = { 
    params ["_sMarker"];
    closeDialog 0;
    cutText ["","Black Out", 2];
    5 fadeSound 0;
    sleep 5;
    deleteVehicle sObj;
    deleteVehicle sNPC;
    sCam cameraEffect ["terminate","back"];
    camDestroy sCam;
    sCam = nil;
    sObj = nil;
    sNPC = nil;
    player setPos (getMarkerPos _sMarker);
    player setDir (markerDir _sMarker);
    player switchCamera "Internal";
    cutText ["","Black in", 5];
    5 fadeSound 1;
};