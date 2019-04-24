
class Harris_phone_messageList
{
	idd = 5007;
	movingEnabled = false;
	onLoad = "[false,1] spawn Harris_listMessages";
	class controls 
	{
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_message_list.paa";
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
			action = "closeDialog 0; [] call Harris_openPhone";
		};
		class Message_1: RscPicture
		{
			idc = 2001;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.05362 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Message_2: RscPicture
		{
			idc = 2002;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.125926 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Message_3: RscPicture
		{
			idc = 2003;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.198232 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Message_4: RscPicture
		{
			idc = 2004;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.270538 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Message_5: RscPicture
		{
			idc = 2005;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.41515 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Message_6: RscPicture
		{
			idc = 2006;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.342844 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Number_1: RscPhoneText
		{
			idc = 7778;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.300259 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Number_2: RscPhoneText
		{
			idc = 7779;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.372565 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Number_3: RscPhoneText
		{
			idc = 7780;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.444871 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Number_4: RscPhoneText
		{
			idc = 7781;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.517177 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Number_5: RscPhoneText
		{
			idc = 7782;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.589483 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Number_6: RscPhoneText
		{
			idc = 7783;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.661789 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Preview_1: RscPhoneText
		{
			idc = 7001;
			text = "Hey Ben What's up?"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.323148 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Preview_2: RscPhoneText
		{
			idc = 7002;
			text = "Hey Ben What's up?"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.395454 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Preview_3: RscPhoneText
		{
			idc = 7003;
			text = "Hey Ben What's up?"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.46776 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Preview_4: RscPhoneText
		{
			idc = 7004;
			text = "Hey Ben What's up?"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.540066 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Preview_5: RscPhoneText
		{
			idc = 7005;
			text = "Hey Ben What's up?"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.612372 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Preview_6: RscPhoneText
		{
			idc = 7006;
			text = "Hey Ben What's up?"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.684678 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Delete_1: phoneButton
		{
			idc = 8001;
			text = "X"; //--- ToDo: Localize;
			x = 0.54 * safezoneW + safezoneX;
			y = 0.323148 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
			action = "[0] call Harris_deleteMessage;";
		};
		class Delete_2: phoneButton
		{
			idc = 8002;
			text = "X"; //--- ToDo: Localize;
			x = 0.54 * safezoneW + safezoneX;
			y = 0.395454 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
			action = "[1] call Harris_deleteMessage;";
		};
		class Delete_3: phoneButton
		{
			idc = 8003;
			text = "X"; //--- ToDo: Localize;
			x = 0.54 * safezoneW + safezoneX;
			y = 0.46876 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
			action = "[2] call Harris_deleteMessage;";
		};
		class Delete_4: phoneButton
		{
			idc = 8004;
			text = "X"; //--- ToDo: Localize;
			x = 0.54 * safezoneW + safezoneX;
			y = 0.540066 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
			action = "[3] call Harris_deleteMessage;";
		};
		class Delete_5: phoneButton
		{
			idc = 8005;
			text = "X"; //--- ToDo: Localize;
			x = 0.54 * safezoneW + safezoneX;
			y = 0.612372 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
			action = "[4] call Harris_deleteMessage;";
		};
		class Delete_6: phoneButton
		{
			idc = 8006;
			text = "X"; //--- ToDo: Localize;
			x = 0.54 * safezoneW + safezoneX;
			y = 0.684678 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
			action = "[5] call Harris_deleteMessage;";
		};
		class contactButton_1_1: phoneButton
		{
			idc = 1602;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.287296 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[0] call Harris_viewMessage";
		};
		class contactButton_2_1: phoneButton
		{
			idc = 1603;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.359602 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[1] call Harris_viewMessage";
		};
		class contactButton_3_1: phoneButton
		{
			idc = 1604;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.431908 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[2] call Harris_viewMessage";
		};
		class contactButton_4_1: phoneButton
		{
			idc = 1605;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.504214 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[3] call Harris_viewMessage";
		};
		class contactButton_5_1: phoneButton
		{
			idc = 1606;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.57652 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[4] call Harris_viewMessage";
		};
		class contactButton_6_1: phoneButton
		{
			idc = 1607;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.648826 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[5] call Harris_viewMessage";
		};
		class contactButton_1_2: phoneButton
		{
			idc = 2603;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.325 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[0] call Harris_viewMessage";
		};
		class contactButton_2_2: phoneButton
		{
			idc = 2604;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.397306 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[1] call Harris_viewMessage";
		};
		class contactButton_3_2: phoneButton
		{
			idc = 2605;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.469612 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[2] call Harris_viewMessage";
		};
		class contactButton_4_2: phoneButton
		{
			idc = 2606;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.54191 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[3] call Harris_viewMessage";
		};
		class contactButton_5_2: phoneButton
		{
			idc = 2607;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.614216 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[4] call Harris_viewMessage";
		};
		class contactButton_6_2: phoneButton
		{
			idc = 2608;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.686522 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "[5] call Harris_viewMessage";
		};
		class NxtPg_Button: phoneButton
		{
			idc = 1610;
			x = 0.545 * safezoneW + safezoneX;
			y = 0.73 * safezoneH + safezoneY;
			w = 0.01 * safezoneW;
			h = 0.02 * safezoneH;
			text = ">";
			action = "[1] call Harris_switchMessagesPage";
		};
		class PrevPg_Button: phoneButton
		{
			idc = 1609;
			x = 0.535 * safezoneW + safezoneX;
			y = 0.73 * safezoneH + safezoneY;
			w = 0.01 * safezoneW;
			h = 0.02 * safezoneH;
			text = "<";
			action = "[2] call Harris_switchMessagesPage";
		};
		class newMessage_Text: RscPhoneText
		{
			idc = 1621;
			x = 0.545 * safezoneW + safezoneX;
			y = 0.215 * safezoneH + safezoneY;
			w = 0.04 * safezoneW;
			h = 0.08 * safezoneH;
			text = "+";
			sizeEx = 0.07;
			colorText[] = {0,0,0,1};

		};
		class newMessage_Button: phoneButton
		{
			idc = 1622;
			x = 0.545 * safezoneW + safezoneX;
			y = 0.23 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5007; createDialog 'Harris_phone_sendMessage'";
		};
	};
};
