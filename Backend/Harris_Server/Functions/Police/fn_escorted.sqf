/*
	Author: Ben Harris
	Description: Escorts Self
*/

NZF_escorted = {
 	player setVariable ['Escorting',true, true];
	while {true} do {
		if (isEscort) then {
			player playMove "AmovPercMstpSnonWnonDnon_Ease";
		};
	};
};