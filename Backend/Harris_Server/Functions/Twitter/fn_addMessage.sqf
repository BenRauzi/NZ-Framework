/*
	Author: Ben Harris
	Description: Controls the Twitter System

	["Ben Harris","test"] call Harris_addMessage;
	[Harris_TwitterMessages,0] call Harris_updateTwitter

	Harris_twitterUI = uiNameSpace getVariable ["Harris_TwitterFeed",displayNull];
	_text = Harris_twitterUI displayCtrl 1100;
	_text ctrlSetStructuredText parseText "<t size='1' color='#22ffd9' align='left' font='PuristaBold'>test: </t><br/><t size='1' font='PuristaBold' align='left' color='#bab6b7'>test</t> <br/>"
*/

Harris_addMessage = {
	disableSerialization;
	params["_name","_message", "_colour"];

	if (isNil "_colour") then {
		_colour = "default";
	};
	
	switch(_colour)do
	{
		case 'Red':
		{
			_colour = "#FF0000"
		};
		case 'Green':
		{
			_colour = "#42FF00"
		};
		case 'Gold':
		{
			_colour = "#FFD700"
		};
		case 'Blue':
		{
			_colour = "#00C1FF"
		};
		default
		{
			_colour = "#22ffd9"
		};
	};

	_message= format["<t size='1' color='%3' align='left' font='PuristaBold'>%1: </t><t size='1' font='PuristaBold' align='left' color='#bab6b7'>%2</t> <br/>", _name, _message, _colour];
	Harris_twitterMessages pushBack	_message;

	if (count Harris_twitterMessages > 6) then {
		Harris_twitterMessages deleteAt 0;
	};

	if (isMultiplayer) then {
		[Harris_twitterMessages, 0] remoteExecCall ["Harris_updateTwitter", 0];
	} else {
		[Harris_twitterMessages, 0] call Harris_updateTwitter;
	};
	
};