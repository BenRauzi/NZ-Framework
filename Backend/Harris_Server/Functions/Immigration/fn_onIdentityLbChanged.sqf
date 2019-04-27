/*
	Author: Ben Harris
	Description: Updates the displayed information about the user
*/

NZF_onIdentityLbChanged = {
	_ctrl = [77777, 77778, 77779, 77780, 77781, 77782,71324,71328,71325,71329,71327,71326,1202];

	{
		ctrlShow [_x, true];
	} forEach _ctrl;


	_rawData = lbData [1500, (lbCurSel 1500)];
	_data = (call compile _rawData) select 0;

	ctrlSetText [77777, _data select 0];
	ctrlSetText [77778, _data select 2];
	ctrlSetText [77779, _data select 1];
	ctrlSetText [77780, _data select 3];
	ctrlSetText [77781, _data select 5];
	ctrlSetText [77782, _data select 4];

	ctrlSetText [71324, _data select 0];
	ctrlSetText [71328, _data select 2];
	ctrlSetText [71325, _data select 1];
	ctrlSetText [71329, _data select 3];
	ctrlSetText [71326, _data select 6];
	ctrlSetText [71327, _data select 4];

	ctrlSetText [71330, getPlayerUID player];
};
