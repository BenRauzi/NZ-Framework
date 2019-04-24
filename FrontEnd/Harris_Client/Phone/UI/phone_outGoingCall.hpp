class Harris_phone_outGoingCall
{
	idd = 5011;
	movingEnabled = false;
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_call_outgoing.paa";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
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
		class Back_button: phoneButton
		{
			idc = 1613;
			x = 0.436042 * safezoneW + safezoneX;
			y = 0.189222 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 0; createDialog 'Harris_Phone_mainScreen'";
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
		class CallerID_Text: RscPhoneText
		{
			idc = 1400;

			text = "Unknown Number"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.0300001 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class HangUp_Button: phoneButton
		{
			idc = 1600;

			x = 0.443281 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 5011; [] call Harris_cancelCall";
		};
	};
};