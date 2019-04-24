class Harris_phone_readMessage
{
	idd = 5014;
	movingEnabled = false;
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_message_read.paa";
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
			action = "closeDialog 0; createDialog 'Harris_phone_messageList'";
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
		class Number_Text: RscPhoneText
		{
			idc = 1400;
			x = 0.44328 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class Message_Text: RscPhoneText
		{
			idc = 1401;
			x = 0.44328 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.242 * safezoneH;
			colorText[] = {0,0,0,1};
			style = ST_MULTI + ST_NO_RECT;
		};
		class Reply_Button: phoneButton
		{
			idc = 1600;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog  5014; createDialog 'Harris_phone_sendMessageContact'";
		};
	};
};