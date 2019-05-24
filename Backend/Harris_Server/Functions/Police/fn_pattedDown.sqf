NZF_pattedDown = {
	Life_evidence = "plp_ctm_PlasticBoxGrey" createVehicle getPosAtl player;
	Life_evidence setPosATL [((getPosAtl player) select 0),((getPosAtl player) select 1) + 1,(getPosAtl player) select 2];
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

	["Patted", "You have been patted down by the Police.", true] spawn NZF_Notifications;
};