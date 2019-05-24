Harris_updateTwitter = {
	disableSerialization;
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
