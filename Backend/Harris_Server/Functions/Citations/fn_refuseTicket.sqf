/*
	Author: Ben Harris
	Description: Refuses Ticket
*/

NZF_refuseTicket = {
	["Refused", "This citizen refused the ticket", "Failure"] remoteExec ["NZF_Notifications", NZF_ticketSender];	

	Harris_priceToPay = nil;
	Harris_ticketSender = nil;
};