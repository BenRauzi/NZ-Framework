/*
	Author: Ben Harris
	Description: Tells if the player can pay for something

	Params:
		0: Amount of Cash / Bank they want to spend
		1: Account they want to spend (0=Cash, 1=Bank)

	Returns:
		Boolean: True - Can Pay; False - Can't pay.
*/

NZF_canPay = {
	params["_amount", "_type"];

	_type = ["cash", "bank"] select _type;
	
	if (_amount <= player getVariable [_type, 0]) exitWith { true; };

	false;
};
