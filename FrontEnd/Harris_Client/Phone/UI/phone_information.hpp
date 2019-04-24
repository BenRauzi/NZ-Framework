
class Harris_phone_information
{
	idd = 5032;
	movingEnabled = false;
	onLoad = "[] spawn Harris_informationOpened";
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_information.paa";
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
			action = "closeDialog 0; createDialog 'Harris_Phone_mainScreen'";

			x = 0.436062 * safezoneW + safezoneX;
			y = 0.18914 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.0300001 * safezoneH;
		};
		class Cops_Text: RscPhoneText
		{
			idc = 1600;
			text = "Online Police:"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.055 * safezoneH;
			Style = ST_LEFT;
			colorText[] = {0,0,0,1};
		};
		class Medics_Text: RscPhoneText
		{
			idc = 1601;
			text = "Online Paramedics:"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.055 * safezoneH;
			Style = ST_LEFT;
			colorText[] = {0,0,0,1};
		};
		class Players_Text: RscPhoneText
		{
			idc = 1602;
			text = "Online Players:"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.422074 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.055 * safezoneH;
			Style = ST_LEFT;
			colorText[] = {0,0,0,1};
		};
	};
};