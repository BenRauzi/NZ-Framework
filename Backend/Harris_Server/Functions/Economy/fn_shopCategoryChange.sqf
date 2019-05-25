/*
    Author: Nicholas Jo'Foski
    Description: Updates the shop when the category is changed
*/

NZF_shopCategoryChange = {
	if (lbCurSel 3005 == -1) exitWith {};
	_curCatergory = lbText [3005,(lbCurSel 3005)];
	NZF_curShopCategory = "item";
	{
		{
			if ((_x select 0) == _curCatergory) then {
				{
					if ((_x select 0) isKindOf "LandVehicle" || (_x select 0) isKindOf "Air" || (_x select 0) isKindOf "Ship") exitWith {
						NZF_curShopCategory = "vehicle";
					};
				} forEach (_x select 1);
				systemChat str (_x select 0); // Here for testing
			};
		} forEach (_x select 2);
	} forEach NZF_shopList;
	systemChat NZF_curShopCategory;
	[(((lbData[3005,(lbCurSel 3005)]) splitString ',') select 0)] spawn NZF_loadShopItems;
};