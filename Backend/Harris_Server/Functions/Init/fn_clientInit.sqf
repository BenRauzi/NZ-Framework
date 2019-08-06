/*
	Author: Ben Harris
	Description: Main Initialisation File for the Client
*/

Harris_clientInit = {
	NZF_Shops = [];
	{
		NZF_Shops pushBack (_x select 1);
	} forEach NZF_shopList;
	
	cutText ["Fetching Player Information","BLACK FADED",0];
	[player] remoteExecCall	["Harris_initStats", 2];
	waitUntil{!isNull (findDisplay 46)};
	createDialog "NZF_identityListGUI";

	waitUntil{!isNil {player getVariable "dataReceived"}};
	player setVariable ["dataReceived", nil];
	cutText ["Player Information Received... Please Wait","BLACK FADED",0];

	outerImage = [1210,2210,3210,4210,5210,6210,7210,8210];
	outerIcon1 = [1211,2211,3211,4211,5211,6211,7211,8211];
	outerIcon2 = [1212,2212,3212,4212,5212,6212,7212,8212];
	outerIcon3 = [1213,2213,3213,4213,5213,6213,7213,8213];
	outerIcon4 = [1214,2214,3214,4214,5214,6214,7214,8214];

	outerText1 = [1215,2215,3215,4215,5215,6215,7215,8215];
	outerText2 = [1216,2216,3216,4216,5216,6216,7216,8216];
	outerText3 = [1217,2217,3217,4217,5217,6217,7217,8217];
	outerText4 = [1218,2218,3218,4218,5218,6218,7218,8218];

	outerButton1 = [1219,2219,3219,4219,5219,6219,7219,8219];
	outerButton2 = [1220,2220,3220,4220,5220,6220,7220,8220];
	outerButton3 = [1221,2221,3221,4221,5221,6221,7221,8221];
	outerButton4 = [1222,2222,3222,4222,5222,6222,7222,8222];

	Harris_MessagesN = 0;
	message1_active = false;
	message2_active = false;
	message3_active = false;
	message4_active = false;
	message5_active = false;

	player_damage = 0;

	player addEventHandler["HandleDamage","_this call NZF_handleDamage"];

	NZF_Thirst = 100;
	NZF_Hunger = 100;

	Harris_twitterColours = 
	[
		["Default", "default",true],
		["Red","Red", getPlayerUID player in ["76561198072625284","76561198099644981","76561198062192032"]],
		["Blue","Blue",getPlayerUID player in ["76561198072625284","76561198099644981","76561198062192032"]],
		["Gold","Gold",getPlayerUID player in ["76561198072625284","76561198099644981","76561198062192032"]],
		["Green","Green",getPlayerUID player in ["76561198072625284","76561198099644981","76561198062192032"]]
	];

	NZF_jailMarkers = 20;

	[] call NZF_playerTags;

	player setVariable ["NZF_Surrendering",[false],true];
	player setVariable ["NZF_Restrained",[false,""],true];

	// Setup Event Handlers
	player addEventHandler ["InventoryOpened",{_this call NZF_inventoryOpened}];
	player addEventHandler["GetInMan",{_this call NZF_getInMan}];
	player addEventHandler["SeatSwitchedMan",{_this call NZF_seatSwitchedMan}];

	[] call Harris_configInit;
};