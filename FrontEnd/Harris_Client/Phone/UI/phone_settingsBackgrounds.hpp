class Harris_phone_settingsBackgrounds
{
	idd = 5009;
	movingEnabled = false;
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\settingsBackgrounds.paa";
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
			action = "closeDialog 0; createDialog 'Harris_phone_settings';";
		};
		class Background1_Button: phoneButton
		{
			idc = 1600;
			x = 0.442239 * safezoneW + safezoneX;
			y = 0.34137 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [1] call Harris_setBackground";
		};
		class Background2_Button: phoneButton
		{
			idc = 1601;
			x = 0.471354 * safezoneW + safezoneX;
			y = 0.342593 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [2] call Harris_setBackground";
		};
		class Background3_Button: phoneButton
		{
			idc = 1602;
			x = 0.501562 * safezoneW + safezoneX;
			y = 0.341667 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [3] call Harris_setBackground";
		};
		class Background4_Button: phoneButton
		{
			idc = 1603;
			x = 0.530729 * safezoneW + safezoneX;
			y = 0.342593 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [4] call Harris_setBackground";
		};
		class Background5_Button: phoneButton
		{
			idc = 1604;
			x = 0.44375 * safezoneW + safezoneX;
			y = 0.425 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [5] call Harris_setBackground";
		};
		class Background6_button: phoneButton
		{
			idc = 1605;
			x = 0.472917 * safezoneW + safezoneX;
			y = 0.425926 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [6] call Harris_setBackground";
		};
		class Background7_Button: phoneButton
		{
			idc = 1606;
			x = 0.502083 * safezoneW + safezoneX;
			y = 0.425 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [7] call Harris_setBackground";
		};
		class Background8_Button: phoneButton
		{
			idc = 1607;
			x = 0.530729 * safezoneW + safezoneX;
			y = 0.426852 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [8] call Harris_setBackground";
		};
		class Background9_Button: phoneButton
		{
			idc = 1608;
			x = 0.444271 * safezoneW + safezoneX;
			y = 0.510185 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [9] call Harris_setBackground";
		};
		class Background10_Button: phoneButton
		{
			idc = 1609;
			x = 0.472917 * safezoneW + safezoneX;
			y = 0.511111 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [10] call Harris_setBackground";
		};
		class Background11_Button: phoneButton
		{
			idc = 1610;
			x = 0.502083 * safezoneW + safezoneX;
			y = 0.511111 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.077 * safezoneH;
			action = "closeDialog 5009; createDialog 'Harris_phone_settings'; [11] call Harris_setBackground";
		};
	};
};