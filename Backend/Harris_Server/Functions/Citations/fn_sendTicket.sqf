/*
	Author: Ben Harris
	Description: Gives the Ticket
*/

NZF_sendTicket = {

	_fields = [1004, 1402];
	{
		if ((ctrlText _x) isEqualTo "") exitWith { ["Error", "You must enter all fields", "Failure"] spawn NZF_Notifications; };
	} forEach _fields;

	if ((parseNumber (ctrlText 1401)) <= 0) exitWith {
		["Error", "You must enter a valid number", "Failure"] spawn NZF_Notifications;
	};

	_toSendArray = [NZF_first, NZF_second, NZF_middle, NZF_dob, NZF_originCountry, (ctrlText 1004), lbData [2100, ( lbCurSel 2100 )], name player, ( ctrlText 1402 ), ( ctrlText 1400 ), (parseNumber (ctrlText 1401))];
	[_toSendArray, player] remoteExecCall ["NZF_receiveTicket", NZF_ticketTarget];

	NZF_first = nil;
	NZF_second = nil;
	NZF_middle = nil;
	NZF_dob = nil;
	NZF_originCountry = nil;
	NZF_ticketTarget = nil;
};