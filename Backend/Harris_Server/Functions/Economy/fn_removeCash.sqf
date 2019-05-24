/*
	Author: Ben Harris
	Description: Removes cash to the player
*/

NZF_removeCash = {
	params["_amount"];

	try {
		_cash = player getVariable ["cash", 0] - _amount;
		player setVariable ["cash", _cash, true];
	} catch {
		["Error", "Please input a number", "Failure"] spawn NZF_Notifications;
	};
};