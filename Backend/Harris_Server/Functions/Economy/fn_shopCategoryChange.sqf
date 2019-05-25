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
			};
		} forEach (_x select 2);
	} forEach NZF_shopList;
	switch (NZF_curShopCategory) do { 
		case "vehicle":
		{
			if !(isObjectHidden shObj || isObjectHidden shNPC) then {
				{
					_x hideObject true;
				} forEach [shObj,shNPC];
			};
			if (isNil "NZF_curShopVeh") then {
				NZF_curShopVeh = "I_Quadbike_01_F" createVehicleLocal [0,0,0];
				NZF_curShopVeh enableSimulation false;
				NZF_curShopVeh allowDamage false;
			    NZF_curShopVeh attachTo [shObj,[6,15,-5.5]];
			    detach NZF_curShopVeh;
			    NZF_curShopVeh setDir 130;
			};
		};
		default
		{
			if (isObjectHidden shObj || isObjectHidden shNPC) then {
				{
					_x hideObject false;
				} forEach [shObj,shNPC];
			};
			if !(isNil "NZF_curShopVeh") then {
				deleteVehicle NZF_curShopVeh;
				NZF_curShopVeh = nil;
			};
		};
	};
	[(((lbData[3005,(lbCurSel 3005)]) splitString ',') select 0)] spawn NZF_loadShopItems;
};