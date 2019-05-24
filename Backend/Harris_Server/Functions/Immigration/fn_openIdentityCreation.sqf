/*
	Author: Ben Harris
	Description: Opens the identity creation menu
*/

NZF_openIdentityCreation = {
	createDialog "NZF_createIdentityGUI";
	(findDisplay 5041) displaySetEventHandler ["KeyDown","if((_this select 1) isEqualTo 1) then {true}"];
	{
		_index = lbAdd [2101, _x];
		lbSetData [2101, _index, _x];
	} forEach ["Blue","Brown", "Green", "Hazel"];

	ctrlSetText [1407, getPlayerUID player];	

	ctrlSetText [1408, format["$%1", NZF_startBank]];

	ctrlSetText [1409, getText(configFile >> "CfgVehicles" >> NZF_startCar >> "displayName")]; 

	(findDisplay 5042) displaySetEventHandler ["KeyDown","if((_this select 1) isEqualTo 1) then {true}"];
};
