/*
	Author: Ben Harris
	Description: Receives Ticket Information
*/

NZF_receiveTicket = {
	params["_info", "_sender"];

	createDialog "Harris_getCitation";

	ctrlSetText [1000, _info select 0]; // First Name
	ctrlSetText [1001, _info select 1]; // Last Name
	ctrlSetText [1002, _info select 2]; // Middle Initial
	ctrlSetText [1003, _info select 3]; // Dob
	ctrlSetText [1005, _info select 4]; // Country
	ctrlSetText [1004, _info select 5]; // Driver License
	ctrlSetText [2100, _info select 6]; // Court Session Required
	ctrlSetText [1006, _info select 7]; // Police Officer's Name
	ctrlSetText [1402, _info select 8]; // Police Officer's Badge #
	ctrlSetText [1400, _info select 9]; // Violation Description
	ctrlSetText [1401, str (_info select 10)]; // Ticket Price

	Harris_priceToPay = _price;
	Harris_ticketSender = _sender;
};