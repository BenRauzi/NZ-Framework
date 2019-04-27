/*
    Author: Nicholas Jo'Foski
    Description: Opens the character creation dialog
*/

NZF_openCharacterCreation = {
    0 fadeSound 0;
 	// Spawn Building 
    cObj = "Land_Offices_01_V1_F" createVehicleLocal [0,0,0];
    cObj enableSimulation false; 
    cObj allowDamage false; 
    cObj setPos [0,0,1000]; 
    // Spawn AI 
    cNPC = "C_man_1" createVehicleLocal [0,0,0]; 
    cNPC attachTo [cObj,[11.5,7.5,-7.07]];
    detach cNPC;
    cNPC enableSimulation false; 
    cNPC allowDamage false; 
    cNPC setDir 180; 
    removeUniform cNPC; 
    removeHeadgear cNPC; 
    [cNPC, "STAND_U1", "NONE"] call BIS_fnc_ambientAnim; 
 
    // Fade out screen
    cutText ["","Black Out", 2];
    sleep 5;

    // Setup Camera
    cCam = "CAMERA" camCreate [0,0,0];
    showCinemaBorder false;
    cCam cameraEffect ["INTERNAL", "BACK"];    
    cCam attachTo [cObj,[11,5.5,-6.15]];   
    cCam camSetFocus [0,0];  
    cCam camCommit 0;

    // Fade in screen
    cutText ["","Black In", 5];
    5 fadeSound 0.3;

    // Create Dialog
    createDialog "createCharacter";
    (findDisplay 1000) displaySetEventHandler ["KeyDown","if((_this select 1) isEqualTo 1) then {true}"];

    // Load Faces
	_facesArray = [];
	_cfg = (configFile >> "CfgFaces"); 
	for "_i" from 0 to count _cfg -1 do { 
	        for "_u" from 0 to (count(_cfg select _i) -1) do {
	            if (!(configName((_cfg select _i) select _u) in ["Default","Custom","Woman_A3","Animal"]) && (getText(((_cfg select _i) select _u) >> "displayname")) != "") then {
	                _facesArray pushBack [configName((_cfg select _i) select _u),getText(((_cfg select _i) select _u) >> "displayname")];
	            };
	        };
	};
    {
    	_index = lbAdd [1004, _x select 1];
    	lbSetData [1004, _index, _x select 0]; // Needs to be changed to ID number to save to profileNameSpace to prevent people changing heads out of the server
	} forEach _facesArray;
	lbSetCurSel [1004, 0];

	{ // Insert "None" options to certain sections
		_index = lbAdd [_x, "None"];
		lbSetData [_x, _index, "None"];
	} forEach [1008,1010,1012,1014];

    { // Load Uniforms
    	_index = lbAdd [1006, getText (configFile >> "CfgWeapons" >> _x >> "DisplayName")];
    	lbSetData [1006, _index, _x]; // Needs to be changed to ID number to save to profileNameSpace to prevent people changing uniforms out of the server
	} forEach ["U_C_man_casual_1_F","U_C_man_casual_2_F","U_C_man_casual_3_F"]; // Should be moved to a global array in server config
	lbSetCurSel [1006, 0];

    { // Load Vests
    	_index = lbAdd [1008, getText (configFile >> "CfgWeapons" >> _x >> "DisplayName")];
    	lbSetData [1008, _index, _x]; // Needs to be changed to ID number to save to profileNameSpace to prevent people changing vests out of the server
	} forEach ["V_Safety_yellow_F","V_Safety_orange_F","V_Safety_blue_F","V_Press_F"]; // Should be moved to a global array in server config
	lbSetCurSel [1008, 0];

    { // Load Backpacks
    	_index = lbAdd [1010, getText (configFile >> "CfgVehicles" >> _x >> "DisplayName")];
    	lbSetData [1010, _index, _x]; // Needs to be changed to ID number to save to profileNameSpace to prevent people changing backpacks out of the server
	} forEach ["B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_khk","B_AssaultPack_sgg"]; // Should be moved to a global array in server config
	lbSetCurSel [1010, 0];

    { // Load Glasses
    	_index = lbAdd [1012, getText (configFile >> "CfgGlasses" >> _x >> "DisplayName")];
    	lbSetData [1012, _index, _x]; // Needs to be changed to ID number to save to profileNameSpace to prevent people changing glasses out of the server
	} forEach ["G_Aviator","G_Spectacles","G_Spectacles_Tinted","G_Shades_Black"]; // Should be moved to a global array in server config
	lbSetCurSel [1012, 0];

    { // Load Headgear
    	_index = lbAdd [1014, getText (configFile >> "CfgWeapons" >> _x >> "DisplayName")];
    	lbSetData [1014, _index, _x]; // Needs to be changed to ID number to save to profileNameSpace to prevent people changing headgear out of the server
	} forEach ["H_Cap_grn_BI","H_Cap_blk","H_Cap_blu","H_Cap_grn"]; // Should be moved to a global array in server config
	lbSetCurSel [1014, 0];
};