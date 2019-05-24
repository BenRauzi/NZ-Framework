/*
	Author: Ben Harris
	Description: Controls the Twitter System

	["Ben Harris","test"] call NZF_addMessage;
	[NZF_TwitterMessages,0] call NZF_updateTwitter

	NZF_twitterUI = uiNameSpace getVariable ["NZF_TwitterFeed",displayNull];
	_text = NZF_twitterUI displayCtrl 1100;
	_text ctrlSetStructuredText parseText "<t size='1' color='#22ffd9' align='left' font='PuristaBold'>test: </t><br/><t size='1' font='PuristaBold' align='left' color='#bab6b7'>test</t> <br/>"
*/

NZF_sendMessage = {

	_text = ctrlText ((findDisplay 5002) displayCtrl 1400);
	closeDialog 0;
	if (count _text > 40 or count _text < 1) exitWith { ["Message Too Long", "This Message must be less than 40 characters", "Failure"] call NZF_Notifications; };
	[name player, _text, profileNamespace getVariable ['colour', "1"]] call NZF_addMessage;
};