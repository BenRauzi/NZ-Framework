/*
    Author: Nicholas Jo'Foski
    Description: Updates the dialog when the listbox option is changed
*/

NZF_shopLBChange = {
	if (lbCurSel 3006 == -1) exitWith {};
	_item = ((lbData[3006,(lbCurSel 3006)]) splitString ",") select 0;
	_itemPrice = ((lbData[3006,(lbCurSel 3006)]) splitString ",") select 1;
	ctrlSetText [3007, "Item Price: $" + _itemPrice];
	ctrlSetText [3008, "You Lack: $" + str (parseNumber _itemPrice - (player getVariable "cash"))];
};