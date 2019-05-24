/*
	Author: Ben Harris
	Description: Controls the Twitter System

	["Ben Harris","test"] call NZF_addMessage;
	[NZF_TwitterMessages,0] call NZF_updateTwitter

	NZF_twitterUI = uiNameSpace getVariable ["NZF_TwitterFeed",displayNull];
	_text = NZF_twitterUI displayCtrl 1100;
	_text ctrlSetStructuredText parseText "<t size='1' color='#22ffd9' align='left' font='PuristaBold'>test: </t><br/><t size='1' font='PuristaBold' align='left' color='#bab6b7'>test</t> <br/>"
*/


NZF_openTwitterType = {
	if !(player getVariable ["NZF_TwitterEnabled",true]) exitWith {}; // Added by Nicholas Jo'Foski to stop players restrained sending messages
	createDialog "NZF_twitterType";	

	if !(isNull (uiNameSpace getVariable ["NZF_TwitterFeed",displayNull])) then {
		ctrlShow [1000, false];
	} else {
		ctrlShow [1000, true];
	};

	_listBox = ((findDisplay 5002) displayCtrl 1400);

	_count = (count NZF_TwitterMessages-1);
	if (count NZF_TwitterMessages == 0) then {
		_count = 0;
	};


	_listBox ctrlSetPosition [-0.705,0.84+0.04*(count NZF_TwitterMessages-1)];
	_listBox ctrlCommit 0;
};
