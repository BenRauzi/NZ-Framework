/*
	Author: Ben Harris
	Description: Main Initialisation File for the Client
*/

Harris_clientInit = {

	NZF_startBank = 5000;
	NZF_startCar = "C_Hatchback_01_sport_F";
	NZF_maxIdentities = 3;
	
	NZF_createCharUniforms = ["U_C_man_casual_1_F","U_C_man_casual_2_F","U_C_man_casual_3_F"];
	NZF_createCharVests = ["V_Safety_yellow_F","V_Safety_orange_F","V_Safety_blue_F","V_Press_F"];
	NZF_createCharBackpacks = ["B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_khk","B_AssaultPack_sgg"];
	NZF_createCharGlasses = ["G_Aviator","G_Spectacles","G_Spectacles_Tinted","G_Shades_Black"];
	NZF_createCharHeadgear = ["H_Cap_grn_BI","H_Cap_blk","H_Cap_blu","H_Cap_grn"];

	NZF_spawnLocations = [
		["Spawn Name1","Marker Name1"],
		["Spawn Name2","Marker Name2"],
		["Spawn Name3","Marker Name3"]
	];

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

};