class Harris_phone_banking
{
	idd = 5015;
	movingEnabled = false;
	onLoad = "[] spawn Harris_updateBanking";
	class controls 
	{		
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_banking.paa";
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
			action = "closeDialog 0; createDialog 'Harris_Phone_mainScreen'";
		};
		class Balance_Text: RscPhoneText
		{
			idc = 1400;
			text = "Balance"; //--- ToDo: Localize;
			x = 0.509791 * safezoneW + safezoneX;
			y = 0.331296 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class AvailableFunds_Text: RscPhoneText
		{
			idc = 1401;
			text = "Balance"; //--- ToDo: Localize;
			x = 0.507292 * safezoneW + safezoneX;
			y = 0.353704 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class CurrentCash_Text: RscPhoneText
		{
			idc = 1402;
			text = "Current Cash"; //--- ToDo: Localize;
			x = 0.495312 * safezoneW + safezoneX;
			y = 0.416667 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {0,0,0,1};
		};
		class AmountToTransfer: RscPhoneEdit
		{
			idc = 2702;
			text = "Balance"; //--- ToDo: Localize;
			x = 0.520104 * safezoneW + safezoneX;
			y = 0.499074 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			onKeyDown = "[_this select 1] call Harris_bankEdited";
		};
		class TransferTarget_Combo: RscCombo
		{
			idc = 2703;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Transfer_Button: phoneButton
		{
			idc = 1600;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			action = "[] call life_fnc_bankTransfer; [] spawn Harris_updateBanking";
		};
	};
};