/*
	Author: Ben Harris
	Description: Open Set Name Menu
*/

NZF_openSetName = {
	params["_ct"];

	createDialog "NZF_setName";
	
	NZF_toSetName = _ct;
	_currentName = profileNamespace getVariable	[str (getPlayerUID NZF_toSetName), "Unknown"];
	ctrlSetText	[1000, format ["Current Name: %1"], _currentName];
};