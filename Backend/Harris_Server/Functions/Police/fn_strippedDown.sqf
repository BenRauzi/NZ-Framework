NZF_strippedDown = {
	Life_evidence = "plp_ctm_PlasticBoxGrey" createVehicle getPosAtl player;
	Life_evidence setPosAtl (getPosAtl player);
	Life_evidence setVariable ["evidence", true];

	_itemsBag = backpackItems player;
	_itemsVest = vestItems player;
	_itemsUni = uniformItems player;
	_wep = primaryWeapon player;
	_sec = secondaryWeapon player;
	_side = handgunWeapon player;
	_mags = magazines player;
	_uni = uniform player;
	_vest = vest player;
	_bag = backpack player;
	_hat = headgear player;
	_glasses = goggles player;
	_weps2 = [];
	_items2 = [];

	l_items = [_itemsBag, _itemsVest, _itemsUni];
	_weps = [_wep, _sec, _side];

	{
		if (_x != "") then {
			_weps2 pushBack _x;
		};
	} foreach _weps;
	{ 
		if !(_x isEqualTo []) then { 
		   _items2 pushBack _x; 
		}; 
 	} foreach l_items;
 	{
		{
			Life_evidence addItemCargoGlobal [_x, 1];
			removeAllItems player;
		} foreach _x;
	} foreach _items2;

	{
		Life_evidence addWeaponCargoGlobal [_x, 1];
		removeAllWeapons player;
	} foreach _weps2;


	if ((count _mags) != 0) then {
		{
			Life_evidence addMagazineCargoGlobal [_x, 1];
			player removeMagazine _x;
		} foreach _mags;
	};


	if (_uni != "") then {
		Life_evidence addItemCargoGlobal [_uni, 1];
	};
	if (_vest != "") then {
		Life_evidence addItemCargoGlobal [_vest, 1];
	};
	if (_bag != "") then {
		Life_evidence addBackpackCargoGlobal [_bag, 1];
	};
	if (_glasses != "") then {
		Life_evidence addItemCargoGlobal [_glasses, 1];
	};
	if (_hat != "") then {
		Life_evidence addItemCargoGlobal [_hat, 1];
	};

	removeBackpack player;
	removeUniform player;
	removeGoggles player;
	removeHeadgear player;
	removeVest player;

	["Stripped Down", "You have been Stripped Down", true] spawn NZF_Notifications;
};