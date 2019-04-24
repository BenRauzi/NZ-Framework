class Harris_phone_mainScreen
{
	idd = 5000;
	movingEnabled = false;
	onLoad = "[] spawn Harris_phoneOpened";
	class controls 
	{
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\background1.paa";
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
		class IconsMain_Image: RscPicture 
		{
			idc = 1202;

			text = "Harris_Client\Phone\icons.paa";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Inventory_Button: phoneButton
		{
			idc = 1600;

			x = 0.434619 * safezoneW + safezoneX;
			y = 0.25866 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_inventory'";
		};
		class Keys_button: phoneButton
		{
			idc = 1601;

			x = 0.469681 * safezoneW + safezoneX;
			y = 0.25954 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_keys'";
		};
		class Banking_Button: phoneButton
		{
			idc = 1602;

			x = 0.506703 * safezoneW + safezoneX;
			y = 0.26152 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_banking'";
		};
		class Uber_Button: phoneButton
		{
			idc = 1603;

			x = 0.540116 * safezoneW + safezoneX;
			y = 0.25954 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_uber'";
		};
		class Information_Button: phoneButton
		{
			idc = 1604;

			x = 0.433484 * safezoneW + safezoneX;
			y = 0.33324 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_information'";
		};
	
		class Licenses_Button: phoneButton
		{
			idc = 1610;

			x = 0.469681 * safezoneW + safezoneX;
			y = 0.33324 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 5000; createDialog 'Harris_phone_Licenses'";
		};
		class Map_Button: phoneButton
		{
			idc = 1611;

			x = 0.506703 * safezoneW + safezoneX;
			y = 0.33324 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 5000; createDialog 'Harris_phone_map'";
		};
		class Contacts_Button: phoneButton
		{
			idc = 1605;

			x = 0.443178 * safezoneW + safezoneX;
			y = 0.68238 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_contacts'";
		};
		class Call_Button: phoneButton
		{
			idc = 1606;

			x = 0.473394 * safezoneW + safezoneX;
			y = 0.68238 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_dial'; [] call Harris_clearDial;";
		};
		class Messages_Button: phoneButton
		{
			idc = 1607;

			x = 0.503609 * safezoneW + safezoneX;
			y = 0.6815 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_messageList'";
		};
		class Settings_Button: phoneButton
		{
			idc = 1608;

			x = 0.534856 * safezoneW + safezoneX;
			y = 0.68238 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 7565; createDialog 'Harris_phone_settings'";
		};
	};
};