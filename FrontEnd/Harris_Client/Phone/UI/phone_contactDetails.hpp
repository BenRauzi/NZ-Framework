class Harris_phone_contactDetails
{
	idd = 5011;
	movingEnabled = false;
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_contactDetails.paa";
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
			action = "closeDialog 5011; createDialog 'Harris_phone_contacts'";
		};
		class personIcon_Image: RscPicture
		{
			idc = 1202;

			text = "Harris_Client\Phone\personIcon.paa";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class Call_button: phoneButton
		{
			idc = 1600;

			x = 0.443281 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 5011; [] call Harris_phoneCall";
		};
		class Message_Button: phoneButton
		{
			idc = 1601;

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog  5011; createDialog 'Harris_phone_sendMessageContact'";
		};
		class Name_Text: RscPhoneText
		{
			idc = 1400;
			text = "Nicholas Jo'Foski";
			style = ST_CENTER;

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class Number_Text: RscPhoneText
		{
			idc = 1401;
			text = "1709032423";
			style = ST_CENTER;

			x = 0.433381 * safezoneW + safezoneX;
			y = 0.4593 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {0,0,0,1};
		};
	};
};
