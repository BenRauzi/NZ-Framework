/*
    Author: Nicholas Jo'Foski
    Description: Spawns an item at the players feet
*/

NZF_spawnItem = { 
    params["_item", "_amount"]; 
    if (isNil "_item") exitWith {}; 
    if (isNil "_amount") then {_amount = 1;}; 
    if (isNil "holder") then {
    	holder = "groundWeaponHolder" createVehicle position player;
    	holder setPos (getpos Player); 
	};
 	holder addItemCargoGlobal [_item, _amount]; 
};