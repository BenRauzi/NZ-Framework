/*
    Author: Nicholas Jo'Foski
    Description: Updates the dialog when the listbox option is changed
*/

NZF_shopLBChange = {
	if (lbCurSel 3006 == -1) exitWith {};

	// Prices
	_item = ((lbData[3006,(lbCurSel 3006)]) splitString ",") select 0;
	_itemPrice = ((lbData[3006,(lbCurSel 3006)]) splitString ",") select 1;
	_priceLack = 0;
	if (parseNumber _itemPrice - ([] call NZF_getCash) <= 0) then {
		_priceLack = "0";
	} else {
		_priceLack = str (parseNumber _itemPrice - ([] call NZF_getCash));
	};
	ctrlSetText [3007, "Item Price: $" + _itemPrice];
	ctrlSetText [3008, "You Lack: $" + _priceLack];

	// Vehicles
	if (NZF_curShopCategory == "vehicle") exitWith {
		if !(isNil "NZF_curShopVeh") then {
			deleteVehicle NZF_curShopVeh;
		};
		NZF_curShopVeh = _item createVehicleLocal [0,0,0];
		NZF_curShopVeh enableSimulation false;
		NZF_curShopVeh allowDamage false;
	    NZF_curShopVeh attachTo [shObj,[6,15,-5.5]];
	    detach NZF_curShopVeh;
	    NZF_curShopVeh setDir 130;
	};

	// Clothing Items Crap
	shNPC setUnitLoadout (getUnitLoadout player);
	if ((_item call BIS_fnc_itemType) select 0 == "Equipment") then {
		switch ((_item call BIS_fnc_itemType) select 1) do { 
			case "Glasses":
			{
				shNPC addGoggles _item;
			};
			case "Headgear":
			{
				shNPC addHeadgear _item;
			};
			case "Vest":
			{
				shNPC addVest _item;
			};
			case "Backpack":
			{
				removeBackpack shNPC;
				shNPC addBackpack _item;
			};
			case "Uniform":
			{
				shNPC forceAddUniform _item;
			};
			default {}; 
		};
	};
};