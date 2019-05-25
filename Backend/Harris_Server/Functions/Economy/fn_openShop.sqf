/*
    Author: Nicholas Jo'Foski
    Description: Opens a shop
*/

NZF_openShop = {
	params ["_shop","_vSpawn"];
	if (isNil "_shop") exitWith {};
	{
		if (_shop == _x select 1) exitWith {
			_licenseStatus = [_x select 3] call NZF_getLicense;
			if !(_licenseStatus) then {
				_licenseDN = ([(_x select 3),true] call NZF_getLicense);
				["Incorrect License", format["You can only access this store if you have a valid %1.",_licenseDN], "Failure"] call NZF_Notifications;
			} else {
				0 fadeSound 1;
				NZF_curShopCategory = "item";
				if (isNil "_vSpawn") then {
					_vSpawn = "unknown";
				};
				NZF_curShopVSpawn = _vSpawn;

			 	// Spawn Building 
			    shObj = "Land_Offices_01_V1_F" createVehicleLocal [0,0,0];
			    shObj enableSimulation false; 
			    shObj allowDamage false;
			    shObj setPos [0,0,1000];

			    // Spawn NPC
			    shNPC = "C_man_1" createVehicleLocal [0,0,0];
			    shNPC allowDamage false;
			    shNPC enableSimulation false;
			    shNPC attachTo [shObj,[9.3,7.5,-7.07]];
			    detach shNPC;
			    shNPC setDir 150;
	    		shNPC setUnitLoadout (getUnitLoadout player);
	    		shNPC setFace ((player getvariable "currentidentity" select 2) select 0);
			    [shNPC, "STAND_U1", "ASIS"] call BIS_fnc_ambientAnim;

			    // Fade Out Screen
			    2 fadeSound 0;
			    20 cutText ["","BLACK Out",2];
			    sleep 3;

			    // Setup Camera
			    shCam = "CAMERA" camCreate [0,0,0];
			    showCinemaBorder false;
			    shCam cameraEffect ["INTERNAL", "BACK"];
			    shCam attachTo [shObj,[10.5,5.2,-6.15]];
			    shCam camSetFocus [0,0];
			    shCam camCommit 0;

			    // Fade In Screen
			    20 cutText ["","Black In", 5];
			    5 fadeSound 0.1;

		    	// Create Dialog 
		    	createDialog "NZF_shopDialog";
		    	ctrlSetText [3002, _x select 0];
		    	(findDisplay 3000) displaySetEventHandler ["KeyDown","if((_this select 1) isEqualTo 1) then {[] spawn {
		    	    closeDialog 0;
		    		20 cutText ['','Black Out', 2];
		    		5 fadeSound 0;
		    		sleep 5;
		    		deleteVehicle shObj;
		    		deleteVehicle shNPC;
		    		shCam cameraEffect ['terminate','back'];
		    		camDestroy shCam;
		    		shCam = nil;
		    		shObj = nil;
		    		shNPC = nil;
		    		20 cutText ['','Black in', 5];
	    			5 fadeSound 1;
	    			NZF_curShopCategory = nil;
	    			NZF_curShopVSpawn = nil;
					if !(isNil 'NZF_curShopVeh') then {
						deleteVehicle NZF_curShopVeh;
						NZF_curShopVeh = nil;
					};
	    			NZF_shopItemHolder = nil;
		    	};};"];

		    	{ // Load Categories
		    		if (count (_x select 1) > 0) then {
		    			_accessibleItem = false;
		    			{
		    				if (isNil {_x select 3} || {[_x select 3] call NZF_getLicense}) exitWith {
		    					_accessibleItem = true;
		    				};
		    			} forEach (_x select 1);
		    			if (_accessibleItem) then {
						   	_index = lbAdd [3005, _x select 0];
						    lbSetData [3005, _index, _shop + "," + (_x select 0)];
						};
					};
				} forEach (_x select 2);
				lbSetCurSel [3005, 0];
		    	[_shop] call NZF_loadShopItems;
			};
		};
	} forEach NZF_shopList;
};