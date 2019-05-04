/*
    Author: Nicholas Jo'Foski
    Description: Opens the spawn select dialog
*/

NZF_openSpawnSelect = {
    0 fadeSound 0;

 	// Spawn Building 
    sObj = "Land_Offices_01_V1_F" createVehicleLocal [0,0,0];
    sObj enableSimulation false; 
    sObj allowDamage false;
    sObj setPos [0,0,1000];

    // Spawn NPC
    sNPC = "C_man_1" createVehicleLocal [0,0,0];
    sNPC allowDamage false;
    sNPC enableSimulation false;
    sNPC attachTo [sObj,[9.3,7.5,-7.07]];
    detach sNPC;
    sNPC setDir 150;
    sNPC setUnitLoadout (getUnitLoadout player);
    sNPC setFace ((player getvariable "currentidentity" select 2) select 0);
    [sNPC, "STAND_U1", "ASIS"] call BIS_fnc_ambientAnim;

    // Play Random Funny Animations (Only a 1 in 100 chance)
    if ((random 100) > 99) then {
    	sNPC playAction (selectRandom ["Foski_Cuff_Back","Foski_Cuff_Front","Foski_Surrender","Foski_LongDab"]);
    };

    // Fade Out Screen
    cutText ["","BLACK FADED",0];
    sleep 3;

    // Setup Camera
    sCam = "CAMERA" camCreate [0,0,0];
    showCinemaBorder false;
    sCam cameraEffect ["INTERNAL", "BACK"];    
    sCam attachTo [sObj,[10.5,5.2,-6.15]];
    sCam camSetFocus [0,0];
    sCam camCommit 0;

    // Fade In Screen
    cutText ["","Black In", 5];
    5 fadeSound 0.3;
    
    // Create Dialog 
    createDialog "spawnSelect";
    (findDisplay 2000) displaySetEventHandler ["KeyDown","if((_this select 1) isEqualTo 1) then {true}"];
	
	{ // Load Spawn Locations
		_index = lbAdd [2004, (_x select 0)];
		lbSetData [2004, _index, (_x select 1)];
	} forEach NZF_spawnLocations;
	lbSetCurSel [2004, 0];

    sleep 10;
    closeDialog 0;
    sCam cameraEffect ["terminate","back"];
    camDestroy sCam;
    sCam = nil;
    deleteVehicle sObj;
    deleteVehicle sNPC;
    sObj = nil;
    sNPC = nil;
};