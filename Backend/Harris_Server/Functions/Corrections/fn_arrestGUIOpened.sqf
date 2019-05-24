/*
	Author: Ben Harris
	Description: Initalises the Arrest GUI
*/

NZF_arrestGUIOpened = {
	waitUntil {!isNull (findDisplay 5065)};

	_playerInfo =  (cursorObject getVariable "currentIdentity") select 0;

	ctrlSetText [1000, _playerInfo select 0];
	ctrlSetText [1001, _playerInfo select 1];
	ctrlSetText [1002, _playerInfo select 2];
	ctrlSetText [1003, _playerInfo select 4];
	ctrlSetText [1005, _playerInfo select 6];
};