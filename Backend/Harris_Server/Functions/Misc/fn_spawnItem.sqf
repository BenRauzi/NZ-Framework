/*
    Author: Nicholas Jo'Foski
    Description: Spawns an item at the players feet
*/

NZF_spawnItem = { 
    params["_item", "_amount"]; 
    if (isNil "_item") exitWith {}; 
    if (isNil "_amount") then {_amount = 1;}; 
    if (isNil "NZF_shopItemHolder") then {
    	NZF_shopItemHolder = "groundWeaponHolder" createVehicle position player;
    	NZF_shopItemHolder setPos (getpos player); 
	};
 	NZF_shopItemHolder addItemCargoGlobal [_item, _amount]; 
};