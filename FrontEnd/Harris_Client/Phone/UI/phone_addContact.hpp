
class Harris_phone_addContact
{
	idd = 5012;
	movingEnabled = false;
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_addContact.paa";
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
			action = "closeDialog 0; createDialog 'Harris_phone_contacts'";
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
		class addContact_Button: phoneButton
		{
			idc = 1600;

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.033 * safezoneH;
			action = "[] call Harris_addContact";
		};
		class Name_Text: RscPhoneEdit
		{
			idc = 1400;
			text = "Name";
			style = ST_CENTER;

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.025 * safezoneH;
		};
		class Number_Text: RscPhoneEdit
		{
			idc = 1401;
			text = "Number";
			style = ST_CENTER;

			x = 0.432969 * safezoneW + safezoneX;
			y = 0.459 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.025 * safezoneH;
			onKeyDown = "[_this select 1] call Harris_contactEdited;";
		};
	};
};
