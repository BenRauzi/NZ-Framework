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
	  				if !(isNil {_x select 3}) then {
	  					_licenseStatus = [_x select 3] call NZF_getLicense;
						if (_licenseStatus) then {
							_iName = "Unknown Item";
			  				if (isNil {_x select 1}) then {
			  					_iName = getText (configFile >> ([_x select 0] call NZF_getConfigName) >> (_x select 0) >> "displayName");
			  				} else {
			  					_iName = _x select 1;
			  				};
						   	_index = lbAdd [3006, _iName];
						    lbSetData [3006, _index, (_x select 0) + "," + str (_x select 2)];
						    lbSetPicture [3006, _index, getText (configFile >> ([_x select 0] call NZF_getConfigName) >> (_x select 0) >> "picture")];
						    lbSetCurSel [3006, 0];
						};
	  				} else {
		  				_iName = "Unknown Item";
		  				if (isNil {_x select 1}) then {
		  					_iName = getText (configFile >> ([_x select 0] call NZF_getConfigName) >> (_x select 0) >> "displayName");
		  				} else {
		  					_iName = _x select 1;
		  				};
					   	_index = lbAdd [3006, _iName];
					    lbSetData [3006, _index, (_x select 0) + "," + str (_x select 2)];
					    lbSetPicture [3006, _index, getText (configFile >> ([_x select 0] call NZF_getConfigName) >> (_x select 0) >> "picture")];
					    lbSetCurSel [3006, 0];
					};
	  			} forEach (_x select 1);
	  		};
  		} forEach (_x select 2);
	} forEach NZF_shopList;
	[] call NZF_shopLBChange;
};