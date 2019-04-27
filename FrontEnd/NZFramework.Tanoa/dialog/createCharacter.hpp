class createCharacter
{
	idd = 1000;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 1001;
			x = safeZoneX + safeZoneW * 0.04375;
			y = safeZoneY + safeZoneH * 0.15111112;
			w = safeZoneW * 0.1875;
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
			idc = 1002;
			x = safeZoneX + safeZoneW * 0.04375;
			y = safeZoneY + safeZoneH * 0.15111112;
			w = safeZoneW * 0.1875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Create Character";
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {1,1,1,1};
			font = "PuristaBold";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class Title_Base
		{
			type = 0;
			style = 2;
			colorBackground[] = {0.4,0.4,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class ListBox_Base
		{
			type = 4;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {0,0,0,0.75};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,1,1,1};
			colorSelectBackground[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
			
		};
		class Face_Title : Title_Base
		{
			idc = 1003;
			x = safeZoneX + safeZoneW * 0.04375;
			y = safeZoneY + safeZoneH * 0.2;
			w = safeZoneW * 0.1875;
			h = safeZoneH * 0.03666667;
			text = "Face";
		};
		class Face_CB : ListBox_Base
		{
			idc = 1004;
			x = safeZoneX + safeZoneW * 0.069375;
			y = safeZoneY + safeZoneH * 0.235;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02333334;
			onLBSelChanged = "['face',lbData[1004,(lbCurSel 1004)]] call NZF_updateCharacter;";
		};
		class Uniform_Title : Title_Base
		{
			idc = 1005;
			x = safeZoneX + safeZoneW * 0.04375;
			y = safeZoneY + safeZoneH * 0.27;
			w = safeZoneW * 0.1875;
			h = safeZoneH * 0.03666667;
			text = "Uniform";
		};
		class Uniform_CB : ListBox_Base
		{
			idc = 1006;
			x = safeZoneX + safeZoneW * 0.069375;
			y = safeZoneY + safeZoneH * 0.305;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02333334;
			onLBSelChanged = "['uniform',lbData[1006,(lbCurSel 1006)]] call NZF_updateCharacter;";
		};
		class Vest_Title : Title_Base
		{
			idc = 1007;
			x = safeZoneX + safeZoneW * 0.04375;
			y = safeZoneY + safeZoneH * 0.34;
			w = safeZoneW * 0.1875;
			h = safeZoneH * 0.03666667;
			text = "Vest";
		};
		class Vest_CB : ListBox_Base
		{
			idc = 1008;
			x = safeZoneX + safeZoneW * 0.069375;
			y = safeZoneY + safeZoneH * 0.375;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02333334;
			onLBSelChanged = "['vest',lbData[1008,(lbCurSel 1008)]] call NZF_updateCharacter;";
		};
		class Backpack_Title : Title_Base
		{
			idc = 1009;
			x = safeZoneX + safeZoneW * 0.04375;
			y = safeZoneY + safeZoneH * 0.41;
			w = safeZoneW * 0.1875;
			h = safeZoneH * 0.03666667;
			text = "Backpack";
		};
		class Backpack_CB : ListBox_Base
		{
			idc = 1010;
			x = safeZoneX + safeZoneW * 0.069375;
			y = safeZoneY + safeZoneH * 0.445;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02333334;
			onLBSelChanged = "['backpack',lbData[1010,(lbCurSel 1010)]] call NZF_updateCharacter;";
		};
		class Glasses_Title : Title_Base
		{
			idc = 1011;
			x = safeZoneX + safeZoneW * 0.04375;
			y = safeZoneY + safeZoneH * 0.48;
			w = safeZoneW * 0.1875;
			h = safeZoneH * 0.03666667;
			text = "Glasses";
		};
		class Glasses_CB : ListBox_Base
		{
			idc = 1012;
			x = safeZoneX + safeZoneW * 0.069375;
			y = safeZoneY + safeZoneH * 0.52;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02333334;
			onLBSelChanged = "['glasses',lbData[1012,(lbCurSel 1012)]] call NZF_updateCharacter;";
		};
		class Headgear_Title : Title_Base
		{
			idc = 1013;
			x = safeZoneX + safeZoneW * 0.04375;
			y = safeZoneY + safeZoneH * 0.555;
			w = safeZoneW * 0.1875;
			h = safeZoneH * 0.03666667;
			text = "Headgear";
		};
		class Headgear_CB : ListBox_Base
		{
			idc = 1014;
			x = safeZoneX + safeZoneW * 0.069375;
			y = safeZoneY + safeZoneH * 0.59;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.02333334;
			onLBSelChanged = "['headgear',lbData[1014,(lbCurSel 1014)]] call NZF_updateCharacter;";
		};
		class Confirm_Btn
		{
			type = 1;
			idc = 1015;
			x = safeZoneX + safeZoneW * 0.069375;
			y = safeZoneY + safeZoneH * 0.64;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.04555556;
			style = 0+2;
			text = "Confirm Character";
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
			action = "[] spawn {_result = ['Please cofirm that you would like to create your character, be aware that this is the only time you will be able to define these settings.','Create Character', 'Confirm','Cancel', nil, false, true] call BIS_fnc_guiMessage; if (_result) then {[lbData[1004,(lbCurSel 1004)],lbData[1006,(lbCurSel 1006)],lbData[1008,(lbCurSel 1008)],lbData[1010,(lbCurSel 1010)],lbData[1012,(lbCurSel 1012)],lbData[1014,(lbCurSel 1014)]] spawn NZF_createCharacter;};};";
		};
	};
};