/*
	Author: Ben Harris
	Description: On Duty handler for all jobs (PD/EMS Inclusive)
	 e.g. ["Cop", true] call NZF_onDuty; -- on duty
	 e.g. ["Cop", false] call NZF_onDuty; -- off duty
*/

NZF_onDuty = {
	params["_job", "_bool"]; // _bool == on or off duty

	if !(_bool) exitWith { player setVariable ["currentJob", ["Civilian"], true]}; // Sets job back as civilian

	switch(_job) do
	{
		case "Cop":
		{
			player setVariable ["currentJob", ["Cop", player getVariable "copLevel"], true]; // Sets job to cop
		};
		case "Medic":
		{
			player setVariable ["currentJob", ["Cop", player getVariable "medicLevel"], true]; // Sets Job to Medic
		};
	};	
};