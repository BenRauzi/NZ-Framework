class Harris_phone_inventory
{
	idd = 5001;
	movingEnabled = false;
	onLoad = "[] spawn Harris_updateVInventory;";
	class controls 
	{
		class Back_button: phoneButton
		{
			idc = 1613;
			x = 0.436042 * safezoneW + safezoneX;
			y = 0.189222 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.03 * safezoneH;
			action = "closeDialog 0; createDialog 'Harris_Phone_mainScreen'";
		};
		class Background_Image: RscPicture
		{
			idc = 7565;

			text = "Harris_Client\Phone\phone_inventory.paa";
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
		class Items_List: RscListbox
		{
			idc = 2005;
			x = 0.437604 * safezoneW + safezoneX;
			y = 0.291926 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.4 * safezoneH;
		};
		class Use_Button: phoneButton
		{
			idc = 6232;
			x = 0.444896 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.03 * safezoneH;
			onButtonClick = "[] call Harris_useItemPhone; [] spawn Harris_updateVInventory;";
		};
		class Drop_Button: phoneButton
		{
			idc = 6233;
			x = 0.505208 * safezoneW + safezoneX;
			y = 0.698148 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.03 * safezoneH;
			onButtonClick = "[] call Harris_removeItemPhone; [] spawn Harris_updateVInventory;";
		};
	};
};