/*
	Author: Ben Harris
	Description: Survival Loop
*/

NZF_survivalLoop = {
	while{true}do
	{
		[-10] call NZF_modifyThirst;
		[-5] call NZF_modifyHunger;
		sleep 150;
	};
};

NZF_lowNutrients = {
	while{true}do {
		_bool = [true] call NZF_checkNutrients;
		if (_bool) exitWith {};

		["Dying", "You're dying of starvation", "Warning"] spawn NZF_Notifications;
		//Do Damage
		sleep 20;
	};
};

NZF_checkNutrients = {
	params["_bool"];
	if (_bool) then {
		if !(NZF_Thirst < 0 || NZF_Hunger < 0) exitWith {
			true;
		};
	} else {
		if (NZF_Thirst < 0 || NZF_Hunger < 0) exitWith {
			[] call NZF_lowNutrients;
		};
	};
	
};

NZF_modifyThirst = {
	params["_amount"];
	if (_amount < 0) then {
		_total = NZF_Thirst + _amount;
		if (_total < 0) then {
			NZF_Thirst = 0;
		} else {
			NZF_Thirst = _total;
		}
	} else {
		_total = NZF_Thirst + _amount;
		if (_total > 100) then {
			NZF_Thirst = 100;
		} else {
			NZF_Thirst = _total;
		};
	}
};

NZF_modifyHunger = {
	params["_amount"];
	if (_amount < 0) then {
		_total = NZF_Hunger + _amount;
		if (_total < 0) then {
			NZF_Hunger = 0;
		} else {
			NZF_Hunger = _total;
		}
	} else {
		_total = NZF_Hunger + _amount;
		if (_total > 100) then {
			NZF_Hunger = 100;
		} else {
			NZF_Hunger = _total;
		};
	}
};
