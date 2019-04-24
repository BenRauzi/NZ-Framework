
class Harris_phone_uber
{
	idd = 5027;
	movingEnabled = false;
	onLoad = "[] spawn Harris_uberOpened";
	class controls 
	{		
		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_uber.paa";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Frame_Image: RscPicture
		{
			idc = 1201;

			text = "Harris_Client\Phone\frame.paa";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Back_button: phoneButton
		{
			idc = 1613;
			x = 0.436042 * safezoneW + safezoneX;
			y = 0.189222 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 5027; createDialog 'Harris_Phone_mainScreen'";
		};
		class call_button: phoneButton
		{
			idc = 1600;
			x = 0.442239 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			action = "if (count (missionNamespace getVariable 'uberDrivers') == 0) exitWith {}; closeDialog 5027; [] call Harris_phoneCall";
		};
		class message_button: phoneButton
		{
			idc = 1601;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog  5027; createDialog 'Harris_phone_sendMessageUber'";
		};
		class Ubers_Lb: RscListBox
		{
			idc = 1500;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.33 * safezoneH;
			onLbSelChanged = "[_this select 1] call Harris_onUberLbChanged";
		};
		class DriverDistance_Text: RscPhoneText
		{
			idc = 1602;
			text = "Test"; //--- ToDo: Localize;
			style = ST_LEFT;
			colorText[] = {0,0,0,1};
			x = 0.521667 * safezoneW + safezoneX;
			y = 0.630148 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 0.03;
		};
		class DriverVehicle_Text: RscPhoneText
		{
			idc = 1603;
			text = "Test2"; //--- ToDo: Localize;
			style = ST_LEFT;
			colorText[] = {0,0,0,1};
			x = 0.51599 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 0.03;
		};
		class Uber_On_Picture: RscPicture
		{
			idc = 1203;
			text = "Harris_Client\phone\selectedIcon.paa";
			x = 0.528854 * safezoneW + safezoneX;
			y = 0.245 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
		};
		class Uber_Off_Picture: RscPicture
		{
			idc = 1205;
			text = "Harris_Client\phone\selectedIcon.paa";
			x = 0.542187 * safezoneW + safezoneX;
			y = 0.24537 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
		};
		class Uber_On_Button: phoneButton
		{
			idc = 1604;
			x = 0.538698 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			action = "[] call Harris_onDutyUber";
		};
		class Uber_Off_button: phoneButton
		{
			idc = 1605;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			action = "[] call Harris_offDutyUber";
		};
	};
};