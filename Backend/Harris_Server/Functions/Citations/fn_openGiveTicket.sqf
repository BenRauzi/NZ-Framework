/*
	Author: Ben Harris
	Description: Opens the 'Give Ticket' Menu
*/

NZF_openGiveTicket = {
	params["_ct"];

	NZF_ticketTarget = _ct;

	createDialog "NZF_giveCitation";

	_playerInfo =  (cursorObject getVariable "currentIdentity") select 0;
	NZF_first = _playerInfo select 0;
	NZF_second = _playerInfo select 1;
	NZF_middle = _playerInfo select 2;
	NZF_dob = _playerInfo select 4;
	NZF_originCountry = _playerInfo select 6;

	ctrlSetText [1000, NZF_first];
	ctrlSetText [1001, NZF_second];
	ctrlSetText [1002, NZF_middle];
	ctrlSetText [1003, NZF_dob];
	ctrlSetText [1005, NZF_originCountry];

	if (["NZF_license_driver"] call NZF_getLicense;) then {
		ctrlSetText [1004, "Yes"];
	} else  {
		ctrlSetText [1004, "No"];
	};

	_toAdd = ["True", "False"];

	{
		_index = lbAdd [2100, _x];
		lbSetData [2100, _index, _x];
	} forEach _toAdd;

	lbSetCurSel [2100, 0];

	ctrlSetText [1006, NZF_selfName];

};