NZF_updateTwitter = {
	disableSerialization;
	params["_twitterMessages","_inst"];

	NZF_twitterMessages = _twitterMessages;

	_displayText = "";
	{
		_displayText = _displayText + _x;
	} forEach _twitterMessages;

	if (isNull NZF_twitterUI) then {
		5 cutRsc ["NZF_TwitterFeed","PLAIN"];
	};

	NZF_twitterUI = uiNameSpace getVariable ["NZF_TwitterFeed",displayNull];
	_text = NZF_twitterUI displayCtrl 1100;
	_text ctrlSetStructuredText parseText _displayText;

	if (_inst == 0) then {
		[(NZF_twitterMessages select (count NZF_twitterMessages - 1))] spawn {
			sleep 20;
			_index = NZF_twitterMessages find (_this select 0);
			if (_index != -1) then {
					NZF_twitterMessages deleteAt _index;
					[NZF_twitterMessages,1] call NZF_updateTwitter;
			}; 
			if (count NZF_twitterMessages == 0) then {
				5 cutText ["","PLAIN"];
				NZF_twitterUI = displayNull;
			};
		};
	};
};
