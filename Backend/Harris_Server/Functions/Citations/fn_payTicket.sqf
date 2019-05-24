/*
	Author: Ben Harris
	Description: Pays / Doesn't pay the ticket 
*/

NZF_payTicket = {

	_check = [NZF_priceToPay, 1] call NZF_canPay; // Check if they have enough cash

	if !(_check) exitWith { 
		closeDialog 0;
		["Error", "You cannot afford this ticket", "Failure"] spawn NZF_Notifications;
		["Error", "This person cannot afford the ticket", "Failure"] remoteExec ["NZF_Notifications", NZF_ticketSender];
	};

	[NZF_priceToPay] call NZF_removeCash;


	_name = format ["%1 has paid the ticket", NZF_selfName];

	["Success", _name, "Success"] remoteExec ["NZF_Notifications", NZF_ticketSender];

	closeDialog 0;

	NZF_ticketSender = nil;
	Harris_priceToPay = nil;
};
