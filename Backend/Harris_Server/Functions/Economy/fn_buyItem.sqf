/*
    Author: Nicholas Jo'Foski
    Description: Buys the selected item
*/

NZF_buyItem = {
	params ["_dName","_cName","_price","_vSpawn"];
	if ([_price,0] call NZF_canPay) then { // Can afford item
		if (_dName == "") then {_dName = getText (configFile >> ([_cName] call NZF_getConfigName) >> _cName >> "displayName");}; // Just incase someone manually calls this function
		[_price] call NZF_removeCash;

		// Add Item/Clothing OR Spawn Vehicle
		_exit = false;
		switch ([_cName] call NZF_getConfigName) do {
			case "CfgVehicles":
			{
				// If item is a backpack instead of an actual vehicle
				if ((_cName call BIS_fnc_itemType) select 1 == "BackPack") exitWith {
	                player addBackpack _cName;
				};

				// Now spawn the actual vehicle
				if (count (nearestObjects [(getMarkerPos _vSpawn),["Car","Motorcycle","Ship","Air"],5]) > 0) exitWith {
					["Vehicle Spawn Error", "There is currently a vehicle blocking the spawn point, you have been fully refunded.", "Failure"] call NZF_Notifications;
					_exit = true;
				};
				_veh = _cName createVehicle [0,0,0];
				_veh allowDamage false;
				_veh lock true;
				_veh setPosATL (getMarkerPos _vSpawn);
				_veh setDir (markerDir _vSpawn);
				_veh allowDamage true;

				// Add vehicle ownership and db crap here...
			};
			default 
			{
				holder = nil; // here just for testing
				if ((_cName call BIS_fnc_itemType) select 0 == "Equipment") then { // Is clothing, not an item
					switch ((_cName call BIS_fnc_itemType) select 1) do { 
						case "Glasses":
						{
							[goggles player] call NZF_spawnItem;
							player addGoggles _cName;
						};
						case "Headgear":
						{
							[headgear player] call NZF_spawnItem;
							player addHeadgear _cName;
						};
						case "Vest":
						{
							_vItems = vestItems player;
							[vest player] call NZF_spawnItem;
							player addVest _cName;
							{
								if (player canAddItemToVest _x) then {
									player addItemToVest _x;
								} else {
									[_x] call NZF_spawnItem;
								};
							} forEach _vItems;
						};
						case "Uniform":
						{
							_uItems = uniformItems player;
							[uniform player] call NZF_spawnItem;
							player addUniform _cName;
							{
								if (player canAddItemToUniform _x) then {
									player addItemToUniform _x;
								} else {
									[_x] call NZF_spawnItem;
								};
							} forEach _uItems;
						};
						default {}; 
					};
				} else { // Is a item, not clothing
					if (player canAdd _cName) then {
						player addItem _cName;
					} else {
						[_cName] call NZF_spawnItem;
					};
				};
			}; 
		};
		if (_exit) exitWith {[_price] call NZF_addCash;};
		["Item Purchased", format["You have successfully purchased a %1, for a total of $%2.",_dName,_price], "Success"] call NZF_Notifications;
	} else { // Can't afford item
		_priceLack = 0;
		if (_price - ([] call NZF_getCash) <= 0) then {
			_priceLack = "0";
		} else {
			_priceLack = str (_price - ([] call NZF_getCash));
		};
		["Invalid Funds", format["You do not have enough money to purchase this item, you lack $%1.",_priceLack], "Failure"] call NZF_Notifications;
	};
};