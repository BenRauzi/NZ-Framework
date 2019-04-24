class Harris_phone_keys
{
	idd = 5003;
	movingEnabled = false;
	onLoad = "[] spawn Harris_updateKeys;";
	class controls 
	{
		class Back_button: phoneButton
		{
			idc = 1613;
			x = 0.436042 * safezoneW + safezoneX;
			y = 0.189222 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 0; createDialog 'Harris_Phone_mainScreen'";
		};
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_key.paa";
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
		class Keys_List: RscListbox
		{
			idc = 2701;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.37 * safezoneH;
		};
		class NearbyPlayers: RscCombo
		{
			idc = 2702;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.026 * safezoneH;
		};
		class Use_Button: phoneButton
		{
			idc = 6232;
			x = 0.444896 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.03 * safezoneH;
			onButtonClick = "[] call Harris_giveKeyPhone";
		};
		class Drop_Button: phoneButton
		{
			idc = 6233;
			x = 0.505208 * safezoneW + safezoneX;
			y = 0.698148 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.03 * safezoneH;
			onButtonClick = "[] call Harris_keyDropPhone";
		};
	};
};