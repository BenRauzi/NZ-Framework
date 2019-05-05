/*
    Author: Nicholas Jo'Foski
    Description: Loads the shops items
*/

NZF_loadShopItems = {
	params ["_shop"];
	lbClear 3006;
	{
  		{
  			if (_x select 0 == ((lbData[3005,(lbCurSel 3005)]) splitString ",") select 1) exitWith {
	  			{
				   	_index = lbAdd [3006, _x select 1];
				    lbSetData [3006, _index, (_x select 0) + "," + str (_x select 2)];
	  			} forEach (_x select 1);
	  		};
  		} forEach (_x select 2);
	} forEach NZF_shopList;
	[] call NZF_shopLBChange;
};