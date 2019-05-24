/*
	Author: Ben Harris
	Description: Controls the Twitter System

	["Ben Harris","test"] call NZF_addMessage;
	[NZF_TwitterMessages,0] call NZF_updateTwitter

	NZF_twitterUI = uiNameSpace getVariable ["NZF_TwitterFeed",displayNull];
	_text = NZF_twitterUI displayCtrl 1100;
	_text ctrlSetStructuredText parseText "<t size='1' color='#22ffd9' align='left' font='PuristaBold'>test: </t><br/><t size='1' font='PuristaBold' align='left' color='#bab6b7'>test</t> <br/>"
*/

NZF_addMessage = {
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
	NZF_twitterMessages pushBack	_message;

	if (count NZF_twitterMessages > 6) then {
		NZF_twitterMessages deleteAt 0;
	};

	if (isMultiplayer) then {
		[NZF_twitterMessages, 0] remoteExecCall ["NZF_updateTwitter", 0];
	} else {
		[NZF_twitterMessages, 0] call NZF_updateTwitter;
	};
	
};