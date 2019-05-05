class NZF_shopDialog
{
	idd = 3000;
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 3001;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.15111112;
			w = safeZoneW * 0.3125;
			h = safeZoneH * 0.57444445;
			style = 128;
			text = "";
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class Title_Text
		{
			type = 0;
			idc = 3002;
			x = safeZoneX + safeZoneW * 0.49375;
			y = safeZoneY + safeZoneH * 0.15111112;
			w = safeZoneW * 0.3125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Store Name";
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};
	class Controls
	{
		class sCategory_Title
		{
			type = 0;
			idc = 3003;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.19111112;
			w = safeZoneW * 0.2625;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Select Category";
			colorBackground[] = {0.4,0.4,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class sItem_Title
		{
			type = 0;
			idc = 3004;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.26444445;
			w = safeZoneW * 0.2625;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Select Item";
			colorBackground[] = {0.4,0.4,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class Category_CB
		{
			type = 4;
			idc = 3005;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.2625;
			h = safeZoneH * 0.03111112;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {0,0,0,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0,0,0,1};
			colorSelect2[] = {0,0,0,1};
			colorSelectBackground[] = {0.8,0.8,0.8,1};
			colorSelectBackground2[] = {1,1,1,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			onLBSelChanged = "[(((lbData[3005,(lbCurSel 3005)]) splitString ',') select 0)] spawn NZF_loadShopItems;";
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
		};
		class Items_LB
		{
			type = 5;
			idc = 3006;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.29777778;
			w = safeZoneW * 0.2625;
			h = safeZoneH * 0.3;
			style = 16;
			colorBackground[] = {0,0,0,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0,0,0,1};
			colorSelect2[] = {0,0,0,1};
			colorSelectBackground[] = {0.8,0.8,0.8,1};
			colorSelectBackground2[] = {1,1,1,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			onLBSelChanged = "[] spawn NZF_shopLBChange;";
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
		};
		class ItemPrice_Title
		{
			type = 0;
			idc = 3007;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.60666667;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Item Price: $100";
			colorBackground[] = {0.4,0.4,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};

		class LackPrice_Title
		{
			type = 0;
			idc = 3008;
			x = safeZoneX + safeZoneW * 0.64375;
			y = safeZoneY + safeZoneH * 0.60666667;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "You Lack: $100";
			colorBackground[] = {0.4,0.4,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class Purchase_BTN
		{
			type = 1;
			idc = 3009;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.66444445;
			w = safeZoneW * 0.2625;
			h = safeZoneH * 0.04555556;
			style = 0+2;
			text = "Purchase Item";
			borderSize = 0;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorBackgroundActive[] = {0.102,0.102,0.102,1};
			colorBackgroundDisabled[] = {0,0,0,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0.4,0.4,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "";
		};
	};
};