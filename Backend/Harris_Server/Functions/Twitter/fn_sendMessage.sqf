/*
	Author: Ben Harris
	Description: Controls the Twitter System

	["Ben Harris","test"] call Harris_addMessage;
	[Harris_TwitterMessages,0] call Harris_updateTwitter

	Harris_twitterUI = uiNameSpace getVariable ["Harris_TwitterFeed",displayNull];
	_text = Harris_twitterUI displayCtrl 1100;
	_text ctrlSetStructuredText parseText "<t size='1' color='#22ffd9' align='left' font='PuristaBold'>test: </t><br/><t size='1' font='PuristaBold' align='left' color='#bab6b7'>test</t> <br/>"
*/

Harris_sendMessage = {

	_text = ctrlText ((findDisplay 5002) displayCtrl 1400);
	closeDialog 0;
	if (count _text > 40 or count _text < 1) exitWith { ["Message Too Long", "This Message must be less than 40 characters", "Failure"] call NZF_Notifications; };
	[name player, _text, profileNamespace getVariable ['colour', "1"]] call Harris_addMessage;
};