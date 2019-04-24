Harris_BookButtons = 
[
	["Kill", "Kill"],
	["Kill Vehicle", "KillVehicle"],
	["Godmode On/Off", "Godmode"],
	["Heal", "Heal"],
	["Open Arsenal (Target)", "OpenArsenalT"],
	["Open Arsenal (Self)", "OpenArsenal"]
];

button1 = 1501;
book_curPage = 1;
Harris_bookWords = [];
bookid = 0;
Harris_openBook = {

	createDialog "Book_Read";

	{
		ctrlShow[_x, false];
	} forEach [2500,21777,2501,2502,2503,2504,2510,2513,12312];

	bookPlayers = [];
	{
		bookPlayers pushBack _x;
		_index = lbAdd [1500, format["%1 - %2", name _x, getPlayerUID _x]];
		lbSetData [1500,_index, str _forEachIndex];
	} forEach allPlayers;
	lbSetCurSel [1500,0];
	for "_count" from 0 to 9 do {
		if !(_count > count Harris_BookButtons - 1) then {
			_id = button1 + _count;

			ctrlSetText [_id, (Harris_BookButtons select _count) select 0];
			Harris_bookWords pushBack ((Harris_BookButtons select _count) select 1);
		};
	};
};

Harris_BookUpdate1 = {
	_text = ctrlText 1512;

	lbClear 1500;
	bookPlayers = [];
	{
		if ((name _x) find _text > -1 || _text == "") then {
			bookPlayers pushBack _x;
			_index = lbAdd [1500, format["%1 - %2", name _x, getPlayerUID _x]];
			lbSetData [1500,_index, str _forEachIndex];
		};
	} forEach allPlayers;
};

Harris_bookHandler = {
	params["_index"];

	_index = _index * book_curPage;
	if (_index == 0 && book_curPage != 1) then {
		_index = 10 * book_curPage;
	};

	_cmd = Harris_bookWords select _index;

	_data = lbData [1500, (lbCurSel 1500)];
	_person = (bookPlayers select call compile(_data));

	switch(_cmd)do
	{
		case "Kill":
		{
			_person setDamage 1;
			systemChat format["%1 Killed", name _person];
		};
		case "KillVehicle":
		{
			if(vehicle _person != _person) then {
				(vehicle _person) setDamage 1;
			} else {
				systemChat format["%1 is not in a vehicle", name _person];
			};
		};
		case "Godmode":
		{
			if (isDamageAllowed _person) then {
				_person allowDamage false;
				systemChat format["Godmode enabled for player %1", name _person];
			} else {
				_person allowDamage true;
				systemChat format["Godmode disabled for player %1", name _person];
			};
		};
		case "Heal":
		{
			_person setDamage 0;
			systemChat format["Healed %1", name _person];
		};
		case "OpenArsenalT":
		{
			if (_person == player) then {
				closeDialog 0;
			};
			["Open",true] remoteExec ["BIS_fnc_arsenal", _person];
			systemChat format["Opened Arsenal for %1", _person]; 
		};
		case "OpenArsenal":
		{
			closeDialog 0;
			["Open",true] spawn BIS_fnc_arsenal; 
		};
		case "GiveCash":
		{
			[] remoteExec ["{KWEFookxWQOk = KWEFookxWQOk + 10000}", _person];
			systemChat format["Gave %1 $10,000", _person];
		};
	};

};

Harris_switchBookPage = {
	


	if (bookid == 1) then {
		{
			ctrlShow[_x, false];
		} forEach [2500,21777,2501,2502,2503,2504,2510,12312];
		{
			ctrlShow[_x, true];
		} forEach [1500,1501,1502,1503,1504,1505,1506,1507,1508,1509,1510,1512];
		bookid = bookid - 1;
		ctrlSetText[1511, ">"];
	} else {
		{
			ctrlShow[_x, true];
		} forEach [2500,21777,2501,2502,2503,2504,2510,12312];
		{
			ctrlShow[_x, false];
		} forEach [1500,1501,1502,1503,1504,1505,1506,1507,1508,1509,1510,1512];
		bookid = bookid + 1;
		ctrlSetText[1511, "<"];	
	};
};

Harris_bookRun = {
	params["_form"];

	switch(_form)do
	{
		case 1:
		{
			call compile (ctrlText 2500);
		};
		case 2:
		{
			[ctrlText 2500] remoteExec ["Harris_bookExe",0];
		};
		case 3:
		{
			[ctrlText 2500] remoteExec ["Harris_bookExe",2];
		};	
	};
};

Harris_bookExe = {
	params["_params"];

	call compile _params;
};


[] spawn Harris_openBook;
