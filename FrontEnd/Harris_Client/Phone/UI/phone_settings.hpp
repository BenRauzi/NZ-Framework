class Harris_phone_settings
{
	idd = 5008;
	movingEnabled = false;
	onLoad = "[] spawn Harris_openSettings";
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_setting.paa";
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
			action = "closeDialog 0; createDialog 'Harris_Phone_mainScreen'";
		};
		class Background1_Button: phoneButton
		{
			idc = 1600;
			x = 0.460938 * safezoneW + safezoneX;
			y = 0.324926 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.08 * safezoneH;
			tooltip = "Set Background"; //--- ToDo: Localize;
			action = "[1] call Harris_setBackground";
		};
		class Background2_Button: phoneButton
		{
			idc = 1601;
			x = 0.486979 * safezoneW + safezoneX;
			y = 0.325 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.08 * safezoneH;
			tooltip = "Set Background"; //--- ToDo: Localize;
			action = "[2] call Harris_setBackground";
		};
		class Background3_Button: phoneButton
		{
			idc = 1602;
			x = 0.513542 * safezoneW + safezoneX;
			y = 0.325 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.08 * safezoneH;
			tooltip = "Set Background"; //--- ToDo: Localize;
			action = "[3] call Harris_setBackground";
		};
		class BackgroundMore_Button: phoneButton
		{
			idc = 1603;
			x = 0.539583 * safezoneW + safezoneX;
			y = 0.325 * safezoneH + safezoneY;
			w = 0.025 * safezoneW;
			h = 0.08 * safezoneH;
			tooltip = "More Backgrounds"; //--- ToDo: Localize;
			action = "closeDialog 5008; createDialog 'Harris_phone_settingsBackgrounds';";
		};
		class Anon_On: phoneButton
		{
			idc = 1604;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.01 * safezoneW;
			h = 0.02 * safezoneH;
			action = "[true] call Harris_switchAnonCalling";
		};
		class Anon_Off: phoneButton
		{
			idc = 1605;
			x = 0.54375 * safezoneW + safezoneX;
			y = 0.456482 * safezoneH + safezoneY;
			w = 0.01 * safezoneW;
			h = 0.02 * safezoneH;
			action = "[false] call Harris_switchAnonCalling";
		};
		class Block_On: phoneButton
		{
			idc = 1606;
			x = 0.529687 * safezoneW + safezoneX;
			y = 0.482407 * safezoneH + safezoneY;
			w = 0.01 * safezoneW;
			h = 0.02 * safezoneH;
			action = "[true] call Harris_switchBlockCalling";
		};
		class Block_Off: phoneButton
		{
			idc = 1607;
			x = 0.54375 * safezoneW + safezoneX;
			y = 0.482407 * safezoneH + safezoneY;
			w = 0.01 * safezoneW;
			h = 0.02 * safezoneH;
			action = "[false] call Harris_switchBlockCalling";
		};
		class Ringtone_Combo: RscCombo
		{
			idc = 2100;
			x = 0.449531 * safezoneW + safezoneX;
			y = 0.553148 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.03 * safezoneH;
			onLbSelChanged = "[_this select 1] call Harris_changeRingTone";
		};
		class Colour_Combo: RscCombo
		{
			idc = 2101;
			x = 0.491666 * safezoneW + safezoneX;
			y = 0.637037 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;
			onLbSelChanged = "[lbData [2101,lbCurSel 2101]] call Harris_setTwitterName";
		};
		class Tag_Edit: RscPhoneEdit
		{
			idc = 1400;
			text = "None"; //--- ToDo: Localize;
			x = 0.492187 * safezoneW + safezoneX;
			y = 0.664815 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.025 * safezoneH;
		};
		class Block_On_Icon: RscPicture
		{
			idc = 1202;
			text = "Harris_Client\phone\selectedIcon.paa";
			x = 0.521042 * safezoneW + safezoneX;
			y = 0.467148 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
		};
		class Anon_On_Icon: RscPicture
		{
			idc = 1203;
			text = "Harris_Client\phone\selectedIcon.paa";
			x = 0.521042 * safezoneW + safezoneX;
			y = 0.443 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
		};
		class Block_Off_Icon: RscPicture
		{
			idc = 1204;
			text = "Harris_Client\phone\selectedIcon.paa";
			x = 0.533958 * safezoneW + safezoneX;
			y = 0.467148 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
		};
		class Anon_Off_Icon: RscPicture
		{
			idc = 1205;
			text = "Harris_Client\phone\selectedIcon.paa";
			x = 0.533958 * safezoneW + safezoneX;
			y = 0.442926 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
		};
	};
};