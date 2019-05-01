/*
	Author: Ben Harris
	Description: On Duty handler for all jobs (PD/EMS Inclusive)
	 e.g. ["Cop", true] call NZF_onDuty; -- on duty
	 e.g. ["Cop", false] call NZF_onDuty; -- off duty
*/

NZF_onDuty = {
	params["_job", "_bool"]; // _bool == on or off duty

	switch(_job) do
	{
		case "Cop":
		{
			if(_bool) then {
				player setVariable ["currentJob", ["Cop", player getVariable "copLevel"], true];
			} else {
				player setVariable ["currentJob", ["Civilian"], true];
			};
		};
		case "Medic":
		{
			if(_bool) then {
				player setVariable ["currentJob", ["Cop", player getVariable "medicLevel"], true];
			} else {
				player setVariable ["currentJob", ["Civilian"], true];
			};
		};
	};	
};