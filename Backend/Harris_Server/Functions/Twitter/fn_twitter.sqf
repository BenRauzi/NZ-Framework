/*
	Author: Ben Harris
	Description: Controls the Twitter System

	["Ben Harris","test"] call Harris_addMessage;
	[Harris_TwitterMessages,0] call Harris_updateTwitter

	Harris_twitterUI = uiNameSpace getVariable ["Harris_TwitterFeed",displayNull];
	_text = Harris_twitterUI displayCtrl 1100;
	_text ctrlSetStructuredText parseText "<t size='1' color='#22ffd9' align='left' font='PuristaBold'>test: </t><br/><t size='1' font='PuristaBold' align='left' color='#bab6b7'>test</t> <br/>"
	*/

disableSerialization;
Harris_twitterMessages = [];
Harris_twitterUI = displayNull;
colour = "";
Harris_addMessage = {
	params["_name","_message", "_colour"];

	switch(_colour)do
	{
		case 'red':
		{
			_colour = "#FF0000"
		};
		case 'green':
		{
			_colour = "#42FF00"
		};
		case 'gold':
		{
			_colour = "#FFD700"
		};
		case 'blue':
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

Harris_updateTwitter = {
	params["_twitterMessages","_inst"];

	Harris_twitterMessages = _twitterMessages;

	_displayText = "";
	{
		_displayText = _displayText + _x;
	} forEach _twitterMessages;

	if (isNull Harris_twitterUI) then {
		5 cutRsc ["Harris_TwitterFeed","PLAIN"];
	};

	Harris_twitterUI = uiNameSpace getVariable ["Harris_TwitterFeed",displayNull];
	_text = Harris_twitterUI displayCtrl 1100;
	_text ctrlSetStructuredText parseText _displayText;

	if (_inst == 0) then {
		[(Harris_twitterMessages select (count Harris_twitterMessages - 1))] spawn {
			sleep 20;
			_index = Harris_twitterMessages find (_this select 0);
			if (_index != -1) then {
					Harris_twitterMessages deleteAt _index;
					[Harris_twitterMessages,1] call Harris_updateTwitter;
			}; 
			if (count Harris_twitterMessages == 0) then {
				5 cutText ["","PLAIN"];
				Harris_twitterUI = displayNull;
			};
		};
	};
};

Harris_openTwitterType = {
	createDialog "Harris_twitterType";	
	_listBox = ((findDisplay 5002) displayCtrl 1400);


	_listBox ctrlSetPosition [-0.705,0.82+0.04*(count Harris_TwitterMessages-1)];
	_listBox ctrlCommit 0;
};

Harris_sendMessage = {

	_text = ctrlText ((findDisplay 5002) displayCtrl 1400);
	closeDialog 0;
	if (count _text > 40 or count _text < 1) exitWith { ["Message Error", "This Message must be between 0-40 characters", "Failure"] call NZF_Notifications; };
	[name player, _text, colour] call Harris_addMessage;
};

(findDisplay 46) displaySetEventHandler ["KeyDown","if((_this select 1) isEqualTo 28) then {if (isNull (findDisplay 5002)) then { [] call Harris_openTwitterType; } else { [] call Harris_sendMessage }; };"];