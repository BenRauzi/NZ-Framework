/*
	Author: Ben Harris
	Description: Config Init for both Server and Client
*/

Harris_configInit = {
	NZF_startBank = 5000;
	NZF_startCar = "C_Hatchback_01_sport_F";
	NZF_maxIdentities = 3;
	
	NZF_createCharUniforms = ["U_C_man_casual_1_F","U_C_man_casual_2_F","U_C_man_casual_3_F"];
	NZF_createCharVests = ["V_Safety_yellow_F","V_Safety_orange_F","V_Safety_blue_F","V_Press_F"];
	NZF_createCharBackpacks = ["B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_khk","B_AssaultPack_sgg"];
	NZF_createCharGlasses = ["G_Aviator","G_Spectacles","G_Spectacles_Tinted","G_Shades_Black"];
	NZF_createCharHeadgear = ["H_Cap_grn_BI","H_Cap_blk","H_Cap_blu","H_Cap_grn"];

	NZF_ATCFreq = "80.7";

	NZF_spawnLocations = [
		["Rautake","Rautake_SP"],
		["Lifou","Lifou_SP"],
		["Moddergat","Moddergat_SP"],
		["Tuvunaka","Tuvanaka_SP"]
	];

	NZF_licenseList = [
		["Driver's License","NZF_license_driver"],
		["Truck License","NZF_license_truck"],
		["Boat License","NZF_license_boat"],
		["Firearms License","NZF_license_firearms"]
	];

	NZF_shopList = [
		["Firearms Store","NZF_firearmStore",[
			["Handguns",[
				["hgun_Rook40_F","Pew Pew Pew",760],
				["hgun_Rook40_F","Pew Pew Pew",760,"NZF_license_boat"]
			]],
			["Rifles",[
				["hgun_Rook40_F","Pew Pew Pew Pew",900],
				["hgun_Rook40_F","Pew Pew Pew Pew Pew Pew Pew",1000]
			]]
		],"NZF_license_firearms"],
		["Continental Store","NZF_continentalStore",[
			["Items",[
				["ToolKit","Mr. FixIt",250]
			]],
			["Food",[
				["hgun_Rook40_F","Pew Pew Pew Munch Munch Pew Pew",760],
				["hgun_Rook40_F","Pew Pew Pew Munch Munch Pew Pew",760]
			]]
		],0],
		["Clothing Store","NZF_clothingStore",[
			["Clothing",[
				["H_Cap_grn_BI",nil,10],
				["H_Cap_blk",nil,10],
				["H_Cap_blu",nil,10],
				["H_Cap_grn",nil,10],
				["G_Aviator",nil,15],
				["G_Spectacles",nil,15],
				["G_Spectacles_Tinted",nil,15],
				["G_Shades_Black",nil,15],
				["U_C_man_casual_1_F",nil,25],
				["U_C_man_casual_2_F",nil,25],
				["U_C_man_casual_3_F",nil,25],
				["V_Safety_yellow_F",nil,30],
				["V_Safety_orange_F",nil,30],
				["V_Safety_blue_F",nil,30],
				["V_Press_F",nil,40],
				["B_AssaultPack_blk",nil,50],
				["B_AssaultPack_cbr",nil,50],
				["B_AssaultPack_khk",nil,50],
				["B_AssaultPack_sgg",nil,50]
			]]
		],0],
		["Vehicle Store","NZF_vehicleStore",[
			["Cars",[
				["C_Quadbike_01_F",nil,250],
				["C_Quadbike_01_black_F",nil,250],
				["C_Quadbike_01_blue_F",nil,250],
				["C_Quadbike_01_red_F",nil,250],
				["C_Quadbike_01_white_F",nil,250],
				["C_Hatchback_01_F",nil,500],
				["C_Hatchback_01_sport_F",nil,650],
				["C_SUV_01_F",nil,350]
			]],
			["Planes",[
				["C_Plane_Civil_01_F",nil,5640],
				["C_Plane_Civil_01_racing_F",nil,10345]
			]]
		],"NZF_license_driver"]
	];
}