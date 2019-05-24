NZF_patDown = {
	params["_ct","_type"];
	NZF_patDownCoolDown = true;

	if (_type == 1) then {
		["Patting Down", "Patting Suspect Down...", false] spawn NZF_Notifications;
		[] remoteExecCall ["NZF_pattedDown", _ct];
	} else {
		["Stripping Down", "Stripping Suspect Down...", false] spawn NZF_Notifications;
		[] remoteExecCall ["NZF_strippedDown", _ct];
	};

	sleep 30;

	NZF_patDownCoolDown = false;
};