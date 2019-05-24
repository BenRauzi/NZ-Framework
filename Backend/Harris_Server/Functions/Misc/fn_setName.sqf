/*
	Author: Ben Harris
	Description: Sets player name
*/
NZF_setName = {
	if (ctrlText 1400 != "") then {
		profileNamespace setVariable [str (getPlayerUID NZF_toSetName), ctrlText 1400];
	} else {
		profileNamespace setVariable [str (getPlayerUID NZF_toSetName), nil];
	};
};