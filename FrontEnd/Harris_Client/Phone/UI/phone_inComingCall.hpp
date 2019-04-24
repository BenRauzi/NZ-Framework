class Harris_phone_incomingCall
{
	idd = 5010;
	movingEnabled = false;
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_call_incoming.paa";
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
			action = "closeDialog 5010; createDialog 'Harris_Phone_mainScreen'";
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
		class CallerID_Text: RscPhoneText
		{
			idc = 1400;

			text = "Anonymous Caller"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.0300001 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class Accept_Button: phoneButton
		{
			idc = 1600;

			x = 0.443281 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 5010; [] spawn Harris_acceptCall";
		};
		class Decline_Button: phoneButton
		{
			idc = 1601;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 5010; [] call Harris_declineCall";
		};
		
	};
};
