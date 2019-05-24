/*
	Author: Ben Harris
	Description: Player Tags Master
*/
NZF_playerTags = {
	onEachFrame
	{
		 {
		   if ((_x != player) && isPlayer _x && (player distance _x) < 7 && (vehicle _x == _x) && !(lineIntersects [ eyePos player, eyePos _x, player, _x])) then {
	    		if (isNil {profileNamespace getVariable (str (getPlayerUID	_x))}) then {
	    			 drawIcon3D ["", [1, 1, 1, 1], [visiblePosition _x select 0, visiblePosition _x select 1,(_x selectionPosition "head" select 2) + (getPosAtl _x select 2) + 0.5], 0.2, 0.2, 45, (format ["%1 - %2", getPlayerUID _x select [13,17], profileNamespace getVariable [str (getPlayerUID _x), "Unknown"]]), 1, 0.04, "PuristaMedium"];
	    		} else {
	    			 drawIcon3D ["", [1, 1, 1, 1], [visiblePosition _x select 0, visiblePosition _x select 1,(_x selectionPosition "head" select 2) + (getPosAtl _x select 2) + 0.5], 0.2, 0.2, 45, (format ["%1 - %2", getPlayerUID _x select [13,17], profileNamespace getVariable [str (getPlayerUID _x), "Unknown"]]), 1, 0.04, "PuristaMedium"];
	    		};
		   };
		 } foreach nearestObjects [player, ["Man"], 7];
	};
};