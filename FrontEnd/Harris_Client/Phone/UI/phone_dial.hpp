class Harris_phone_dial
{
	idd = 5005;
	movingEnabled = false;
	class controls 
	{
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_call_dial.paa";
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
			action = "closeDialog 5005; createDialog 'Harris_Phone_mainScreen'";
		};
		class Number_Text: RscPhoneText
		{
			idc = 1600;
			text = "Enter Number"; //--- ToDo: Localize;
			style = ST_CENTER;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class Button_1: phoneButton
		{
			idc = 1601;
			x = 0.44125 * safezoneW + safezoneX;
			y = 0.425778 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[1] call Harris_Dial";
		};
		class Button_2: phoneButton
		{
			idc = 1602;
			x = 0.483855 * safezoneW + safezoneX;
			y = 0.426852 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[2] call Harris_Dial";
		};
		class Button_3: phoneButton
		{
			idc = 1603;
			x = 0.53073 * safezoneW + safezoneX;
			y = 0.427777 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[3] call Harris_Dial";
		};
		class Button_4: phoneButton
		{
			idc = 1604;
			x = 0.441146 * safezoneW + safezoneX;
			y = 0.498148 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[4] call Harris_Dial";
		};
		class Button_5: phoneButton
		{
			idc = 1605;
			x = 0.484375 * safezoneW + safezoneX;
			y = 0.498148 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[5] call Harris_Dial";
		};
		class Button_6: phoneButton
		{
			idc = 1606;
			x = 0.530208 * safezoneW + safezoneX;
			y = 0.495371 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[6] call Harris_Dial";
		};
		class Button_7: phoneButton
		{
			idc = 1607;
			x = 0.440105 * safezoneW + safezoneX;
			y = 0.565741 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[7] call Harris_Dial";
		};
		class Button_8: phoneButton
		{
			idc = 1608;
			x = 0.485937 * safezoneW + safezoneX;
			y = 0.564815 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[8] call Harris_Dial";
		};
		class Button_9: phoneButton
		{
			idc = 1609;
			x = 0.53125 * safezoneW + safezoneX;
			y = 0.562037 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[9] call Harris_Dial";
		};
		class Button_Hash: phoneButton
		{
			idc = 1610;
			x = 0.532291 * safezoneW + safezoneX;
			y = 0.628704 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[] call Harris_clearDial";
			tooltip = "Clear";
		};
		class Button_0: phoneButton
		{
			idc = 1611;
			x = 0.488542 * safezoneW + safezoneX;
			y = 0.631481 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
			action = "[0] call Harris_Dial";
		};
		class Button_Star: phoneButton
		{
			idc = 1612;
			x = 0.44375 * safezoneW + safezoneX;
			y = 0.633333 * safezoneH + safezoneY;
			w = 0.03 * safezoneW;
			h = 0.05 * safezoneH;
		};
		class Dial_Button: phoneButton
		{
			idc = 1613;
			x = 0.445313 * safezoneW + safezoneX;
			y = 0.696295 * safezoneH + safezoneY;
			w = 0.11 * safezoneW;
			h = 0.035 * safezoneH;
			action = "closeDialog 5005; [] call Harris_phoneCall";
		};
	};
};
