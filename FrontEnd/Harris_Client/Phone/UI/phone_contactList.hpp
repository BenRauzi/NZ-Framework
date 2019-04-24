
class Harris_phone_contacts
{
	idd = 5004;
	movingEnabled = false;
	onLoad = "[2,1] spawn Harris_listContacts";
	class controls 
	{
		class Back_button: phoneButton
		{
			idc = 1613;
			x = 0.436042 * safezoneW + safezoneX;
			y = 0.189222 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 0; [] call Harris_openPhone";
		};
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_contact.paa";
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
		class Contact_1: RscPicture
		{
			idc = 2001;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.05362 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Contact_2: RscPicture
		{
			idc = 2002;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.125926 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Contact_3: RscPicture
		{
			idc = 2003;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.198232 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Contact_4: RscPicture
		{
			idc = 2004;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.270538 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Contact_5: RscPicture
		{
			idc = 2005;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.41515 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Contact_6: RscPicture
		{
			idc = 2006;

			text = "Harris_Client\Phone\contacts.paa";
			x = 0.386459 * safezoneW + safezoneX;
			y = 0.342844 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.825 * safezoneH;
		};
		class Name_1: RscPhoneText
		{
			idc = 7778;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.300259 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Name_2: RscPhoneText
		{
			idc = 7779;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.372565 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Name_3: RscPhoneText
		{
			idc = 7780;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.444871 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Name_4: RscPhoneText
		{
			idc = 7781;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.517177 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Name_5: RscPhoneText
		{
			idc = 7782;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.589483 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Name_6: RscPhoneText
		{
			idc = 7783;
			text = "Nicholas Jo'Foksi"; //--- ToDo: Localize;
			x = 0.469583 * safezoneW + safezoneX;
			y = 0.661789 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.035;
		};
		class Number_1: RscPhoneText
		{
			idc = 7001;
			text = "170923023"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.323148 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Number_2: RscPhoneText
		{
			idc = 7002;
			text = "170923023"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.395454 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Number_3: RscPhoneText
		{
			idc = 7003;
			text = "170923023"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.46776 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Number_4: RscPhoneText
		{
			idc = 7004;
			text = "170923023"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.540066 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Number_5: RscPhoneText
		{
			idc = 7005;
			text = "170923023"; //--- ToDo: Localize;
			x = 0.470312 * safezoneW + safezoneX;
			y = 0.612372 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.03 * safezoneH;
			sizeEx = 0.03;
		};
		class Number_6: RscPhoneText
		{
			idc = 7006;
			text = "170923023"; //--- ToDo: Localize;
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
			action = "[0] call Harris_deleteContact";
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
			action = "[1] call Harris_deleteContact";
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
			action = "[2] call Harris_deleteContact";
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
			action = "[3] call Harris_deleteContact";
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
			action = "[4] call Harris_deleteContact";
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
			action = "[5] call Harris_deleteContact";
		};
		class contactButton_1_1: phoneButton
		{
			idc = 1602;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.287296 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [0] call Harris_viewContact";
		};
		class contactButton_2_1: phoneButton
		{
			idc = 1603;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.359602 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [1] call Harris_viewContact";
		};
		class contactButton_3_1: phoneButton
		{
			idc = 1604;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.431908 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [2] call Harris_viewContact";
		};
		class contactButton_4_1: phoneButton
		{
			idc = 1605;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.504214 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [3] call Harris_viewContact";
		};
		class contactButton_5_1: phoneButton
		{
			idc = 1606;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.57652 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [4] call Harris_viewContact";
		};
		class contactButton_6_1: phoneButton
		{
			idc = 1607;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.648826 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [5] call Harris_viewContact";
		};
		class contactButton_1_2: phoneButton
		{
			idc = 2603;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.325 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [0] call Harris_viewContact";
		};
		class contactButton_2_2: phoneButton
		{
			idc = 2604;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.397306 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [1] call Harris_viewContact";
		};
		class contactButton_3_2: phoneButton
		{
			idc = 2605;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.469612 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [2] call Harris_viewContact";
		};
		class contactButton_4_2: phoneButton
		{
			idc = 2606;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.54191 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [3] call Harris_viewContact";
		};
		class contactButton_5_2: phoneButton
		{
			idc = 2607;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.614216 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [4] call Harris_viewContact";
		};
		class contactButton_6_2: phoneButton
		{
			idc = 2608;
			x = 0.438541 * safezoneW + safezoneX;
			y = 0.686522 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; [5] call Harris_viewContact";
		};
		class NxtPg_Button: phoneButton
		{
			idc = 1610;
			x = 0.545 * safezoneW + safezoneX;
			y = 0.73 * safezoneH + safezoneY;
			w = 0.01 * safezoneW;
			h = 0.02 * safezoneH;
			text = ">";
			action = "[1] call Harris_switchContactPage";
		};
		class PrevPg_Button: phoneButton
		{
			idc = 1609;
			x = 0.535 * safezoneW + safezoneX;
			y = 0.73 * safezoneH + safezoneY;
			w = 0.01 * safezoneW;
			h = 0.02 * safezoneH;
			text = "<";
			action = "[2] call Harris_switchContactPage";
		};
		class addContact_Text: RscPhoneText
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
		class addContact_Button: phoneButton
		{
			idc = 1622;
			x = 0.545 * safezoneW + safezoneX;
			y = 0.23 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.04 * safezoneH;
			action = "closeDialog 5004; createDialog 'Harris_phone_addContact'";
		};
	};
};