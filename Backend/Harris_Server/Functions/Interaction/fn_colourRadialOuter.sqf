/*
	Author: Ben Harris
	Description: Colours the outer radial buttons
*/
Harris_colourRadialOuter = {
	params["_toChange","_bool"];

	if (_bool) then {
		{
			((findDisplay 1723) displayCtrl _x)  ctrlSetTextColor [0.95,0.71,0,1];
		} forEach _toChange;
	} else {
		{
			((findDisplay 1723) displayCtrl _x)  ctrlSetTextColor [1, 1, 1, 1];
		} forEach _toChange;
	};
}