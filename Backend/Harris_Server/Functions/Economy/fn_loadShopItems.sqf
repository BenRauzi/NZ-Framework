/*
    Author: Nicholas Jo'Foski
    Description: Loads the shops items (Really jank and shitty because you can't use multiple exitWiths inside of each other, but it works so....)
*/

NZF_loadShopItems = {
	params ["_shop"];
	lbClear 3006;
	{
  		{
  			if (_x select 0 == ((lbData[3005,(lbCurSel 3005)]) splitString ",") select 1) exitWith {
  				if (count (_x) <= 0) exitWith {};
	  			{
	  				if ((NZF_curShopCategory == "vehicle" && (_x select 0) isKindOf "LandVehicle" || (_x select 0) isKindOf "Air" || (_x select 0) isKindOf "Ship") || NZF_curShopCategory == "item") then {
						if (isNil {_x select 3} || {[_x select 3] call NZF_getLicense}) then {
							_iName = "Unknown Item";
								if (isNil {_x select 1}) then {
									_iName = getText (configFile >> ([_x select 0] call NZF_getConfigName) >> (_x select 0) >> "displayName");
								} else {
									_iName = _x select 1;
								};
						   	_index = lbAdd [3006, _iName];
						    lbSetData [3006, _index, (_x select 0) + "," + str (_x select 2)];
						    lbSetPicture [3006, _index, getText (configFile >> ([_x select 0] call NZF_getConfigName) >> (_x select 0) >> "picture")];
						    if (NZF_curShopCategory == "vehicle") then {
						    	lbSetTooltip [3006, _index, format["Vehicle Information\n-----------------------------\nMax Speed: %1 km/h\nHorse Power: %2\nPassenger Seats: %3\nStorage Capacity: %4\nFuel Capacity: %5",getNumber(configFile >> "CfgVehicles" >> (_x select 0) >> "maxSpeed"),getNumber(configFile >> "CfgVehicles" >> (_x select 0) >> "enginePower"),getNumber(configFile >> "CfgVehicles" >> (_x select 0) >> "transportSoldier"),getNumber(configFile >> "CfgVehicles" >> (_x select 0) >> "maximumLoad"),getNumber(configFile >> "CfgVehicles" >> (_x select 0) >> "fuelCapacity")]];
						    };
						    lbSetCurSel [3006, 0];
						};
					};
	  			} forEach (_x select 1);
	  		};
  		} forEach (_x select 2);
	} forEach NZF_shopList;
	[] call NZF_shopLBChange;
};