/*
	Author: Ben Harris
	Description: Conducts boundary/invalid tests for the identity that the user wants to create
*/


NZF_createIdentity = {
	_first = ctrlText 1400;
	_len_first = count(_first);
	if (_len_first < 3 || _len_first > 15) exitWith {
		["Error", "Please enter a valid First Name", "Failure"] spawn NZF_Notifications;
	};

	_last = ctrlText 1401;
	_len_last = count(_last);
	if (_len_last < 3 || _len_last > 15) exitWith {
		["Error", "Please enter a valid Last Name", "Failure"] spawn NZF_Notifications;
	};

	_middle = ctrlText 1402;
	_len_middle = count(_middle);
	if (_len_middle != 1) exitWith {
		["Error", "Please enter a valid middle inital", "Failure"] spawn NZF_Notifications;
	};
	

	_sex = ctrlText 2100;
	if !(_sex isEqualTo"M" || _sex isEqualTo "F" || _sex isEqualTo "O") exitWith { ["Error", "You must either be Male (M) or Female (F) or Other (O)", true] spawn NZF_Notifications; };

	_DOB1 = ctrlText 1403;
	_DOB2 = ctrlText 1404;
	_DOB3 = ctrlText 1405;

	_DoB = format ["%1/%2/%3", _DOB1, _DOB2, _DOB3];

	_Eyecolour = lbData [2101, ( lbCurSel 2101 )];

	_previousResidency = ctrlText 1406;

	_len_prevR = count(_previousResidency);
	if (_len_prevR < 3 || _len_prevR > 51) exitWith {
		["Error", "Please enter a valid previous country of residence", "Failure"] spawn NZF_Notifications;
	};
	_signature = ctrlText 1410;

	[_first, _last, _middle, _sex, _DoB, _Eyecolour, _previousResidency] call NZF_identityCreate;
};
