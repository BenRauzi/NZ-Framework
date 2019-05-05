/*
    Author: Nicholas Jo'Foski
    Description: Loads the shops items
*/

NZF_loadShopItems = {
	params ["_shop"];
	_display = findDisplay 3000;
	_category = ((_display) displayCtrl 3005);
	_itemsLB = ((_display) displayCtrl 3006);
	lbClear _itemsLB;
	{ 
  		{
  		systemChat str _x;
  			if (_x select 0 == ((lbData[_category,(lbCurSel _category)]) splitString ",") select 1) exitWith {
	  			{
	  				systemChat str _x;
				   	_index = lbAdd [_itemsLB, _x select 1];
				    lbSetData [_itemsLB, _index, _x select 0];
	  			} forEach (_x select 1);
	  		};
  		} forEach (_x select 2);
	} forEach NZF_shopList;
};