/*
    Author: Nicholas Jo'Foski
    Description: Spawns an item at the players feet
*/

NZF_spawnItem = {
    params["_item", "_amount", "_local"];
    if (isNil "_item") exitWith {};
    if (isNil "_amount") then {_amount = 1;};
    if (isNil "_local") then {_local = 0;};
    holder = false;
    switch (_local) do { 
    	case 1:
    	{
    		holder = "groundWeaponHolder" createVehicleLocal position player;
    	};
    	case 0:
    	{
			holder = "groundWeaponHolder" createVehicle position player;
    	};
    	default {
   			holder = "groundWeaponHolder" createVehicle position player;
    	}; 
    };
    holder setPos (getpos Player);
	holder addItemCargoGlobal [_item, _amount];
	holder = nil;
};

NZF_spawnItem = { 
    params["_item", "_amount"]; 
    if (isNil "_item") exitWith {}; 
    if (isNil "_amount") then {_amount = 1;}; 
    if (isNil "holder") then {
    	holder = "groundWeaponHolder" createVehicle position player;
    	holder setPos (getpos Player); 
	};
 	holder addItemCargoGlobal [_item, _amount]; 
 	//holder = nil; 
};