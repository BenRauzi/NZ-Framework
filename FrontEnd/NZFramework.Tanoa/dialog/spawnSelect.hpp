class spawnSelect
{
	idd = 2000;
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 2001;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.15111112;
			w = safeZoneW * 0.4625;
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
			idc = 2002;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.15111112;
			w = safeZoneW * 0.4625;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Select Spawn";
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};
	class Controls
	{
		class SpawnPoints_Title
		{
			type = 0;
			idc = 2003;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.19111112;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Possible Spawn Points";
			colorBackground[] = {0.4,0.4,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class SpawnPoints_LB
		{
			type = 5;
			idc = 2004;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.42222223;
			style = 16;
			colorBackground[] = {0,0,0,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
		};
		class Spawn_BTN
		{
			type = 1;
			idc = 2005;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.66444445;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.04555556;
			style = 0+2;
			text = "Spawn";
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
		};
		class Map
		{
			type = 0;
			idc = 2006;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.2625;
			h = safeZoneH * 0.42222223;
			style = 0;
			text = "";
			colorBackground[] = {0.6392,0.6118,0.7882,1};
			colorText[] = {0.3608,0.3882,0.2118,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};
};