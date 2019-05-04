/*
	Author: Ben Harris
	Description: HUD Loop
*/

NZF_hudLoop = {
	while{true}do
	{
		if (isNull (uiNamespace getVariable ['NZF_HUD', displayNull])) then {
			13 cutRsc ["NZF_HUD", "PLAIN"];
		};

		if (NZF_Thirst mod 10 != 0) then {
			((uiNamespace getVariable 'NZF_HUD') displayCtrl 1200) ctrlSetText format["\Harris_Client\HUD\%1%2.paa", NZF_Thirst + 10 - NZF_Thirst mod 10, "%"];
		} else {
			((uiNamespace getVariable 'NZF_HUD') displayCtrl 1200) ctrlSetText format["\Harris_Client\HUD\%1%2.paa", NZF_Thirst, "%"];
		};
		
		if (NZF_Hunger mod 10 != 0) then {
			((uiNamespace getVariable 'NZF_HUD') displayCtrl 1201) ctrlSetText format["\Harris_Client\HUD\%1%2.paa", NZF_Hunger + 10 - NZF_Hunger mod 10, "%"];
		} else {
			((uiNamespace getVariable 'NZF_HUD') displayCtrl 1201) ctrlSetText format["\Harris_Client\HUD\%1%2.paa", NZF_Hunger, "%"];
		};
		sleep 1;
	};
};
