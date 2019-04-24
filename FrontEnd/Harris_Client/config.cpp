class CfgPatches
{
	class Harris_Client
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
	#include "requiredAddonsFix.cpp"
};

#include "physicalItems.cpp"

//Fonts
class CfgFontFamilies
{
	class Metropolis
	{
		fonts[] = {"Harris_Client\fonts\MetropolisReg\Metropolis04","Harris_Client\fonts\MetropolisReg\Metropolis05","Harris_Client\fonts\MetropolisReg\Metropolis06","Harris_Client\fonts\MetropolisReg\Metropolis07","Harris_Client\fonts\MetropolisReg\Metropolis08","Harris_Client\fonts\MetropolisReg\Metropolis09","Harris_Client\fonts\MetropolisReg\Metropolis10","Harris_Client\fonts\MetropolisReg\Metropolis11","Harris_Client\fonts\MetropolisReg\Metropolis12","Harris_Client\fonts\MetropolisReg\Metropolis13","Harris_Client\fonts\MetropolisReg\Metropolis14","Harris_Client\fonts\MetropolisReg\Metropolis15","Harris_Client\fonts\MetropolisReg\Metropolis16","Harris_Client\fonts\MetropolisReg\Metropolis17","Harris_Client\fonts\MetropolisReg\Metropolis18","Harris_Client\fonts\MetropolisReg\Metropolis19","Harris_Client\fonts\MetropolisReg\Metropolis20","Harris_Client\fonts\MetropolisReg\Metropolis21","Harris_Client\fonts\MetropolisReg\Metropolis22","Harris_Client\fonts\MetropolisReg\Metropolis23","Harris_Client\fonts\MetropolisReg\Metropolis24","Harris_Client\fonts\MetropolisReg\Metropolis25","Harris_Client\fonts\MetropolisReg\Metropolis26","Harris_Client\fonts\MetropolisReg\Metropolis27","Harris_Client\fonts\MetropolisReg\Metropolis28","Harris_Client\fonts\MetropolisReg\Metropolis29","Harris_Client\fonts\MetropolisReg\Metropolis30","Harris_Client\fonts\MetropolisReg\Metropolis31","Harris_Client\fonts\MetropolisReg\Metropolis32","Harris_Client\fonts\MetropolisReg\Metropolis33","Harris_Client\fonts\MetropolisReg\Metropolis34","Harris_Client\fonts\MetropolisReg\Metropolis35","Harris_Client\fonts\MetropolisReg\Metropolis36","Harris_Client\fonts\MetropolisReg\Metropolis37","Harris_Client\fonts\MetropolisReg\Metropolis38","Harris_Client\fonts\MetropolisReg\Metropolis39","Harris_Client\fonts\MetropolisReg\Metropolis40","Harris_Client\fonts\MetropolisReg\Metropolis41","Harris_Client\fonts\MetropolisReg\Metropolis42","Harris_Client\fonts\MetropolisReg\Metropolis43","Harris_Client\fonts\MetropolisReg\Metropolis44","Harris_Client\fonts\MetropolisReg\Metropolis45"};
		spaceWidth = 0.7;
		spacing = 0.13;
	};
	class Lemon
	{
		fonts[] = {"Harris_Client\fonts\Lemon\Milk04","Harris_Client\fonts\Lemon\Milk05","Harris_Client\fonts\Lemon\Milk06","Harris_Client\fonts\Lemon\Milk07","Harris_Client\fonts\Lemon\Milk08","Harris_Client\fonts\Lemon\Milk09","Harris_Client\fonts\Lemon\Milk10","Harris_Client\fonts\Lemon\Milk11","Harris_Client\fonts\Lemon\Milk12","Harris_Client\fonts\Lemon\Milk13","Harris_Client\fonts\Lemon\Milk14","Harris_Client\fonts\Lemon\Milk15","Harris_Client\fonts\Lemon\Milk16","Harris_Client\fonts\Lemon\Milk17","Harris_Client\fonts\Lemon\Milk18","Harris_Client\fonts\Lemon\Milk19","Harris_Client\fonts\Lemon\Milk20","Harris_Client\fonts\Lemon\Milk21","Harris_Client\fonts\Lemon\Milk22","Harris_Client\fonts\Lemon\Milk23","Harris_Client\fonts\Lemon\Milk24","Harris_Client\fonts\Lemon\Milk25","Harris_Client\fonts\Lemon\Milk26","Harris_Client\fonts\Lemon\Milk27","Harris_Client\fonts\Lemon\Milk28","Harris_Client\fonts\Lemon\Milk29","Harris_Client\fonts\Lemon\Milk30","Harris_Client\fonts\Lemon\Milk31","Harris_Client\fonts\Lemon\Milk32","Harris_Client\fonts\Lemon\Milk33","Harris_Client\fonts\Lemon\Milk34","Harris_Client\fonts\Lemon\Milk35","Harris_Client\fonts\Lemon\Milk36","Harris_Client\fonts\Lemon\Milk37","Harris_Client\fonts\Lemon\Milk38","Harris_Client\fonts\Lemon\Milk39","Harris_Client\fonts\Lemon\Milk40","Harris_Client\fonts\Lemon\Milk41","Harris_Client\fonts\Lemon\Milk42","Harris_Client\fonts\Lemon\Milk43","Harris_Client\fonts\Lemon\Milk44","Harris_Client\fonts\Lemon\Milk45"};
		spaceWidth = 0.7;
		spacing = 0.13;
	};
	class Georgia
	{
		fonts[] = {"Harris_Client\fonts\Georgia\Georgia04","Harris_Client\fonts\Georgia\Georgia05","Harris_Client\fonts\Georgia\Georgia06","Harris_Client\fonts\Georgia\Georgia07","Harris_Client\fonts\Georgia\Georgia08","Harris_Client\fonts\Georgia\Georgia09","Harris_Client\fonts\Georgia\Georgia10","Harris_Client\fonts\Georgia\Georgia11","Harris_Client\fonts\Georgia\Georgia12","Harris_Client\fonts\Georgia\Georgia13","Harris_Client\fonts\Georgia\Georgia14","Harris_Client\fonts\Georgia\Georgia15","Harris_Client\fonts\Georgia\Georgia16","Harris_Client\fonts\Georgia\Georgia17","Harris_Client\fonts\Georgia\Georgia18","Harris_Client\fonts\Georgia\Georgia19","Harris_Client\fonts\Georgia\Georgia20","Harris_Client\fonts\Georgia\Georgia21","Harris_Client\fonts\Georgia\Georgia22","Harris_Client\fonts\Georgia\Georgia23","Harris_Client\fonts\Georgia\Georgia24","Harris_Client\fonts\Georgia\Georgia25","Harris_Client\fonts\Georgia\Georgia26","Harris_Client\fonts\Georgia\Georgia27","Harris_Client\fonts\Georgia\Georgia28","Harris_Client\fonts\Georgia\Georgia29","Harris_Client\fonts\Georgia\Georgia30","Harris_Client\fonts\Georgia\Georgia31","Harris_Client\fonts\Georgia\Georgia32","Harris_Client\fonts\Georgia\Georgia33","Harris_Client\fonts\Georgia\Georgia34","Harris_Client\fonts\Georgia\Georgia35","Harris_Client\fonts\Georgia\Georgia36","Harris_Client\fonts\Georgia\Georgia37","Harris_Client\fonts\Georgia\Georgia38","Harris_Client\fonts\Georgia\Georgia39","Harris_Client\fonts\Georgia\Georgia40","Harris_Client\fonts\Georgia\Georgia41","Harris_Client\fonts\Georgia\Georgia42","Harris_Client\fonts\Georgia\Georgia43","Harris_Client\fonts\Georgia\Georgia44","Harris_Client\fonts\Georgia\Georgia45"};
		spaceWidth = 0.7;
		spacing = 0.13;
	};
	class Garamond
	{
		fonts[] = {"Harris_Client\fonts\Garamond\EBGaramond10","Harris_Client\fonts\Garamond\EBGaramond10","Harris_Client\fonts\Garamond\EBGaramond10","Harris_Client\fonts\Garamond\EBGaramond10","Harris_Client\fonts\Garamond\EBGaramond10","Harris_Client\fonts\Garamond\EBGaramond11","Harris_Client\fonts\Garamond\EBGaramond12","Harris_Client\fonts\Garamond\EBGaramond13","Harris_Client\fonts\Garamond\EBGaramond14","Harris_Client\fonts\Garamond\EBGaramond15","Harris_Client\fonts\Garamond\EBGaramond16","Harris_Client\fonts\Garamond\EBGaramond17","Harris_Client\fonts\Garamond\EBGaramond18","Harris_Client\fonts\Garamond\EBGaramond19","Harris_Client\fonts\Garamond\EBGaramond20","Harris_Client\fonts\Garamond\EBGaramond21","Harris_Client\fonts\Garamond\EBGaramond22","Harris_Client\fonts\Garamond\EBGaramond23","Harris_Client\fonts\Garamond\EBGaramond24","Harris_Client\fonts\Garamond\EBGaramond25","Harris_Client\fonts\Garamond\EBGaramond26","Harris_Client\fonts\Garamond\EBGaramond27","Harris_Client\fonts\Garamond\EBGaramond28","Harris_Client\fonts\Garamond\EBGaramond29","Harris_Client\fonts\Garamond\EBGaramond30","Harris_Client\fonts\Garamond\EBGaramond31","Harris_Client\fonts\Garamond\EBGaramond34","Harris_Client\fonts\Garamond\EBGaramond35","Harris_Client\fonts\Garamond\EBGaramond37","Harris_Client\fonts\Garamond\EBGaramond46"};
		spaceWidth = 0.7;
		spacing = 0.13;
	};
	class Palace
	{
		fonts[] = {"Harris_Client\fonts\PalaceScript\PalaceScriptMT10","Harris_Client\fonts\PalaceScript\PalaceScriptMT10","Harris_Client\fonts\PalaceScript\PalaceScriptMT10","Harris_Client\fonts\PalaceScript\PalaceScriptMT10","Harris_Client\fonts\PalaceScript\PalaceScriptMT10","Harris_Client\fonts\PalaceScript\PalaceScriptMT11","Harris_Client\fonts\PalaceScript\PalaceScriptMT12","Harris_Client\fonts\PalaceScript\PalaceScriptMT13","Harris_Client\fonts\PalaceScript\PalaceScriptMT14","Harris_Client\fonts\PalaceScript\PalaceScriptMT15","Harris_Client\fonts\PalaceScript\PalaceScriptMT16","Harris_Client\fonts\PalaceScript\PalaceScriptMT17","Harris_Client\fonts\PalaceScript\PalaceScriptMT18","Harris_Client\fonts\PalaceScript\PalaceScriptMT19","Harris_Client\fonts\PalaceScript\PalaceScriptMT20","Harris_Client\fonts\PalaceScript\PalaceScriptMT21","Harris_Client\fonts\PalaceScript\PalaceScriptMT22","Harris_Client\fonts\PalaceScript\PalaceScriptMT23","Harris_Client\fonts\PalaceScript\PalaceScriptMT24","Harris_Client\fonts\PalaceScript\PalaceScriptMT25","Harris_Client\fonts\PalaceScript\PalaceScriptMT26","Harris_Client\fonts\PalaceScript\PalaceScriptMT27","Harris_Client\fonts\PalaceScript\PalaceScriptMT28","Harris_Client\fonts\PalaceScript\PalaceScriptMT29","Harris_Client\fonts\PalaceScript\PalaceScriptMT30","Harris_Client\fonts\PalaceScript\PalaceScriptMT31","Harris_Client\fonts\PalaceScript\PalaceScriptMT34","Harris_Client\fonts\PalaceScript\PalaceScriptMT35","Harris_Client\fonts\PalaceScript\PalaceScriptMT37","Harris_Client\fonts\PalaceScript\PalaceScriptMT46"};
		spaceWidth = 0.1;
		spacing = 0.1;
	};
	class ProximaNovaRg
	{
		fonts[] = {"Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg10","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg10","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg10","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg10","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg10","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg11","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg12","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg13","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg14","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg15","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg16","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg17","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg18","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg19","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg20","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg21","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg22","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg23","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg24","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg25","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg26","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg27","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg28","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg29","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg30","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg31","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg34","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg35","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg37","Harris_Client\fonts\ProximaNovaRg\ProximaNovaRg46"};
		spaceWidth = 0.2;
		spacing = 0.1;
	};
};


class Harris_RscButton
{
	deletable = 0;
	fade = 0;
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundDisabled[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundActive[] = 
	{
		0,
		0,
		0,
		1
	};
	colorFocused[] = 
	{
		0,
		0,
		0,
		1
	};
	colorShadow[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBorder[] = 
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	access = 0;
	type = 1;
	text = "";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class Harris_RscText
{
	deletable = 0;
	fade = 0;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	access = 0;
	type = 0;
	idc = -1;
	text = "";
	fixedWidth = 0;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	font = "EtelkaNarrowMediumPro";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
};

class Harris_RscPicture
{
	deletable = 0;
	fade = 0;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

//Notification System 
#include "defines.hpp"
class rscTitles
{
	class Harris_Progress
	{
		name = "Harris_Progress";
		idd = 23515;
		fadein=0;
		duration = 99999999999;
		fadeout=0;
		movingEnable = 0;
		onLoad="uiNamespace setVariable ['Harris_Progress',_this select 0]";
		objects[]={};

		class controlsBackground 
		{
			class Progress_B: RscProgress
			{
				idc = 1400;
				x = 0.0101562 * safezoneW + safezoneX;
				y = 0.152 * safezoneH + safezoneY;
				w = 0.2 * safezoneW;
				h = 0.035 * safezoneH;

			};
			class Text_Progress: RscText
			{
				idc = 1000;
				font = "Metropolis";
				text = "Text"; //--- ToDo: Localize;
				x = 0.0101562 * safezoneW + safezoneX;
				y = 0.152 * safezoneH + safezoneY;
				w = 0.2 * safezoneW;
				h = 0.035 * safezoneH;
				sizeEx = 0.035;
			};
			class Frame: RscFrame
			{
				idc = 1023;
				x = 0.0101562 * safezoneW + safezoneX;
				y = 0.152 * safezoneH + safezoneY;
				w = 0.2 * safezoneW;
				h = 0.035 * safezoneH;
			};
		};
	};
	class Harris_Notifications1
	{
		name = "Harris_Notifications1";
		idd = 4503;
		movingEnable = true;
		enableSimulation = true;
		duration = 5;
	    onLoad = "uiNamespace setVariable ['Harris_Notifications1',_this select 0]";
		class controls
		{
			class Image_1: RscPicture
			{
				idc = 1500;
				text = "Harris_Client\Notifications\NotifsRed.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.082 * safezoneH + safezoneY;
				w = 0.17 * safezoneW;
				h = 0.06 * safezoneH;
			};
			class Icon_1: RscPicture
			{
				idc = 1200;
				text = "Harris_Client\Notifications\bell.paa";
				x = 0.833333 * safezoneW + safezoneX;
				y = 0.102185 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.025 * safezoneH;
			};
			class Title_1: Harris_RscText
			{
				idc = 1001;
				text = "Title"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.089 * safezoneH + safezoneY;
				w = 0.2 * safezoneW;
				h = 0.02 * safezoneH;
				sizeEx = 0.035;
			};
			class Text_1: RscStructuredText
			{
				idc = 1002;
				text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.105 * safezoneH + safezoneY;
				w = 0.15 * safezoneW;
				h = 0.03 * safezoneH;
				sizeEx = 0.033;
			};

		};
	};
	class a3lhud
	{
		idd = 12198;
		movingEnable = "true";
		enableSimulation = "true";
		duration = 500000;
		onLoad = "uiNamespace setVariable [""a3lhud"", _this select 0];";
		objects[] = {};
		class controls 
		{
			class betahudpic: RscPicture
			{
				idc = 51251;
				text = "Harris_Client\Misc\logo.paa";
				x = "0.005 * safezoneW + safezoneX";
				y = "0.00500001 * safezoneH + safezoneY";
				w = "0.16 * safezoneW";
				h = "0.04 * safezoneH";
			};
			class hudstatus: RscStructuredText
			{
				idc = 41652;
				text = "%HUD NOT LOADED%";
				x = "0.371094 * safezoneW + safezoneX";
				y = "0.973 * safezoneH + safezoneY";
				w = "0.629062 * safezoneW";
				h = "0.033 * safezoneH";
				sizeEx = "1.2 * GUI_GRID_H";
				style = 1;
				font = "EtelkaNarrowMediumPro";
			};
			class serveruptime: RscStructuredText
			{
				idc = 16425;
				text = "";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.113437 * safezoneW";
				h = "0.044 * safezoneH";
				sizeEx = "1.2 * GUI_GRID_H";
				style = 1;
				font = "EtelkaNarrowMediumPro";
			};
			class hudpersonname: RscStructuredText
			{
				idc = 62362;
				text = "%HUD NOT LOADED%";
				x = "0.752656 * safezoneW + safezoneX";
				y = "0.9444 * safezoneH + safezoneY";
				w = "0.2475 * safezoneW";
				h = "0.033 * safezoneH";
				sizeEx = "0.9 * GUI_GRID_H";
				style = 1;
				font = "EtelkaNarrowMediumPro";
			};
			class weaponpicture: RscPicture
			{
				idc = 16418;
				text = "";
				x = "0.768125 * safezoneW + safezoneX";
				y = "0.03 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.088 * safezoneH";
			};
			class weaponstatus: RscStructuredText
			{
				idc = 16419;
				text = "";
				x = "0.7475 * safezoneW + safezoneX";
				y = "0.01 * safezoneH + safezoneY";
				w = "0.0979687 * safezoneW";
				h = "0.022 * safezoneH";
				style = 2;
				font = "EtelkaNarrowMediumPro";
			};
			class weaponname: RscStructuredText
			{
				idc = 16420;
				text = "";
				x = "0.824844 * safezoneW + safezoneX";
				y = "0.01 * safezoneH + safezoneY";
				w = "0.170156 * safezoneW";
				h = "0.022 * safezoneH";
				style = 1;
				font = "EtelkaNarrowMediumPro";
			};
			class ammostatus: RscStructuredText
			{
				idc = 16421;
				text = "";
				x = "0.824844 * safezoneW + safezoneX";
				y = "0.05 * safezoneH + safezoneY";
				w = "0.170156 * safezoneW";
				h = "0.022 * safezoneH";
				style = 1;
				font = "EtelkaNarrowMediumPro";
			};
			class magazinestatus: RscStructuredText
			{
				idc = 16422;
				text = "";
				x = "0.824844 * safezoneW + safezoneX";
				y = "0.08 * safezoneH + safezoneY";
				w = "0.170156 * safezoneW";
				h = "0.022 * safezoneH";
				style = 1;
				font = "EtelkaNarrowMediumPro";
			};
			class zeroing: RscStructuredText
			{
				idc = 16423;
				text = "";
				x = "0.902187 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0928125 * safezoneW";
				h = "0.022 * safezoneH";
				style = 1;
				font = "EtelkaNarrowMediumPro";
			};
			class throwablestatus: RscStructuredText
			{
				idc = 16424;
				text = "";
				x = "0.783594 * safezoneW + safezoneX";
				y = "0.17 * safezoneH + safezoneY";
				w = "0.185625 * safezoneW";
				h = "0.022 * safezoneH";
				style = 2;
				font = "EtelkaNarrowMediumPro";
			};
		};
	};

	class Harris_Notifications2
	{
		name = "Harris_Notifications2";
		idd = 4504;
		movingEnable = true;
		enableSimulation = true;
		duration = 5;
	    onLoad = "uiNamespace setVariable ['Harris_Notifications2',_this select 0]";

		class controls
		{
			class Image_2: RscPicture
			{
				idc = 2500;
				text = "Harris_Client\Notifications\NotifsRed.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.148 * safezoneH + safezoneY;
				w = 0.17 * safezoneW;
				h = 0.06 * safezoneH;
			};
			class Icon_2: RscPicture
			{
				idc = 2200;
				text = "Harris_Client\Notifications\bell.paa";
				x = 0.833333 * safezoneW + safezoneX;
				y = 0.168185 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.025 * safezoneH;
			};
			class Title_2: Harris_RscText
			{
				idc = 2001;
				text = "Title"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.155* safezoneH + safezoneY;
				w = 0.2 * safezoneW;
				h = 0.02 * safezoneH;
				sizeEx = 0.035;
			};
			class Text_2: RscStructuredText
			{
				idc = 2002;
				text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.171 * safezoneH + safezoneY;
				w = 0.15 * safezoneW;
				h = 0.03 * safezoneH;
				sizeEx = 0.033;
			};
		};
	};

	class Harris_Notifications3
	{
		name = "Harris_Notifications3";
		idd = 4505;
		movingEnable = true;
		enableSimulation = true;
		duration = 5;
	    onLoad = "uiNamespace setVariable ['Harris_Notifications3',_this select 0]";

		class controls
		{
			class Image_3: RscPicture
			{
				idc = 3500;
				text = "Harris_Client\Notifications\NotifsRed.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.214 * safezoneH + safezoneY;
				w = 0.17 * safezoneW;
				h = 0.06 * safezoneH;
			};
			class Icon_3: RscPicture
			{
				idc = 3200;
				text = "Harris_Client\Notifications\bell.paa";
				x = 0.833333 * safezoneW + safezoneX;
				y = 0.234185 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.025 * safezoneH;
			};
			class Title_3: Harris_RscText
			{
				idc = 3001;
				text = "Title"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.221 * safezoneH + safezoneY;
				w = 0.2 * safezoneW;
				h = 0.02 * safezoneH;
				sizeEx = 0.035;
			};
			class Text_3: RscStructuredText
			{
				idc = 3002;
				text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.237 * safezoneH + safezoneY;
				w = 0.15 * safezoneW;
				h = 0.03 * safezoneH;
				sizeEx = 0.033;
			};

		};
	};

	class Harris_Notifications4
	{
		name = "Harris_Notifications4";
		idd = 4506;
		movingEnable = true;
		enableSimulation = true;
		duration = 5;
	    onLoad = "uiNamespace setVariable ['Harris_Notifications4',_this select 0]";

		class controls
		{
			class Iamge_4: RscPicture
			{
				idc = 4500;
				text = "Harris_Client\Notifications\NotifsRed.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.28 * safezoneH + safezoneY;
				w = 0.17 * safezoneW;
				h = 0.06 * safezoneH;
			};
			class Icon_4: RscPicture
			{
				idc = 4200;
				text = "Harris_Client\Notifications\bell.paa";
				x = 0.833333 * safezoneW + safezoneX;
				y = 0.300185 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.025 * safezoneH;
			};

			class Title_4: Harris_RscText
			{
				idc = 4001;
				text = "Title"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.287 * safezoneH + safezoneY;
				w = 0.2 * safezoneW;
				h = 0.02 * safezoneH;
				sizeEx = 0.035;
			};
			class Text_4: RscStructuredText
			{
				idc = 4002;
				text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.303 * safezoneH + safezoneY;
				w = 0.15 * safezoneW;
				h = 0.03 * safezoneH;
				sizeEx = 0.033;
			};
		};
	};

	class Harris_Notifications5
	{
		name = "Harris_Notifications5";
		idd = 4507;
		movingEnable = true;
		enableSimulation = true;
		duration = 5;
	    onLoad = "uiNamespace setVariable ['Harris_Notifications5',_this select 0]";

		class controls
		{
			class Image_5: RscPicture
			{
				idc = 5500;
				text = "Harris_Client\Notifications\NotifsRed.paa";
				x = 0.83 * safezoneW + safezoneX;
				y = 0.346 * safezoneH + safezoneY;
				w = 0.17 * safezoneW;
				h = 0.06 * safezoneH;
			};
			class Icon_5: RscPicture
			{
				idc = 5200;
				text = "Harris_Client\Notifications\bell.paa";
				x = 0.833333 * safezoneW + safezoneX;
				y = 0.366185 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.025 * safezoneH;
			};

			class Title_5: Harris_RscText
			{
				idc = 5001;
				text = "Title"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.353 * safezoneH + safezoneY;
				w = 0.2 * safezoneW;
				h = 0.02 * safezoneH;
				sizeEx = 0.035;
			};
			class Text_5: RscStructuredText
			{
				idc = 5002;
				text = "<t size='0.75' align='left' font='PuristaMedium' color='#FFFFFF'>You must have $1000 in your bank in order to make this purchase</t>"; //--- ToDo: Localize;
				font = "Metropolis";
				x = 0.851 * safezoneW + safezoneX;
				y = 0.369 * safezoneH + safezoneY;
				w = 0.15 * safezoneW;
				h = 0.03 * safezoneH;
				sizeEx = 0.033;
			};
		};
	};
	class Harris_TwitterFeed
	{
		name = "Harris_TwitterFeed";
		idd = 5001;
		movingEnable = true;
		enableSimulation = true;
		duration = 99999;
	    onLoad = "uiNamespace setVariable ['Harris_TwitterFeed',_this select 0]";
		class controls
		{
				
			class Title: Harris_RscText
			{
				idc = 1000;
				text = "LIMMITT Twitter Feed"; //--- ToDo: Localize;
				x = 0.0 * safezoneW + safezoneX;
				y = 0.595 * safezoneH + safezoneY;
				w = 0.25 * safezoneW;
				h = 0.07 * safezoneH;
				sizeEx = 0.055;
			};
			class Text1: RscStructuredText
			{
				idc = 1100;
				text = "<t size='1' color='#22ffd9' align='left' font='PuristaBold'>Name: </t><t size='1' align='left' font='PuristaBold' color='#bab6b7'>Ben Harris</t>"; //--- ToDo: Localize; //<t size='0.8' font='PuristaBold'>%1</t><br/><t size='0.8' font='PuristaLight' color='#c4c4c4'>%2</t>
				x = 0 * safezoneW + safezoneX;
				y = 0.654 * safezoneH + safezoneY;
				w = 0.3 * safezoneW;
				h = 0.5 * safezoneH;
			};
		};
	};
};

class Harris_twitterType 
{
	idd = 5002;
	movingEnable = false;
	class controls
	{
		class Title: Harris_RscText
		{
			idc = 1000;
			text = "LIMMITT Twitter Feed"; //--- ToDo: Localize;
			x = 0.0 * safezoneW + safezoneX;
			y = 0.595 * safezoneH + safezoneY;
			w = 0.25 * safezoneW;
			h = 0.07 * safezoneH;
			sizeEx = 0.055;
		};
		class twitter_type: RscEdit
		{
			idc = 1400;
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.025 * safezoneH;
		};
	};
};


class cfgSounds
{
	sounds[] = {};
	class cuttingWire
	{
		name = "cuttingWire";
		sound[] = {"Harris_Client\sounds\new\cuttingWire.ogg", 1, 1};
		titles[] = {};
	};
	class buyCar
	{
		name = "buyCar";
		sound[] = {"Harris_Client\sounds\buyCar.ogg", 1, 1};
		titles[] = {};
	};
	class iphone_ringtone
	{
		name="Original iPhone Ringtone";
		sound[]={"\Harris_Client\Sounds\originaliphone.ogg",1,1};
		titles[]={};
	};
	class chimba_ringtone
	{
		name="Chimba Ringtone";
		sound[]= { "\Harris_Client\Sounds\chimba.ogg", 1, 1 };
		titles[]={};
	};
	class hoc_ringtone
	{
		name="House of Cards Ringtone";
		sound[]= { "\Harris_Client\Sounds\houseofcards.ogg", 1, 1 };
		titles[]={};
	};
	class marimba2_ringtone
	{
		name="Relaxing Marimba Ringtone";
		sound[]= { "\Harris_Client\Sounds\relaxingmarimba.ogg", 1, 1 };
		titles[]={};
	};
	class unavailable_tone
	{
		name="Unavailable Person";
		sound[]= { "\Harris_Client\Sounds\unavailableperson.ogg", 1, 1 };
		titles[]={};
	};
	class notinservice_tone
	{
		name="Number not in service";
		sound[]= { "\Harris_Client\Sounds\notinservice.ogg", 1, 1 };
		titles[]={};
	};
	class dialing_tone
	{
		name="Dialing Tone";
		sound[]= { "\Harris_Client\Sounds\dialing.ogg", 1, 1 };
		titles[]={};
	};
	class message1_tone
	{
		name="New Message Tone 1";
		sound[]= { "\Harris_Client\Sounds\newmessage1.ogg", 1, 1 };
		titles[]={};
	};
	class endbeep
	{
		name = "endbeep";
		sound[] = {"Harris_Client\sounds\endbeep.ogg", 1, 1};
		titles[] = {};
	};
	class radioactive
	{
		name = "radioactive";
		sound[] = {"Harris_Client\sounds\new\radioactive.ogg", 1, 1};
		titles[] = {};
	};
	class intro
	{
		name = "intro";
		sound[] = {"Harris_Client\sounds\intro.ogg", 1, 1};
		titles[] = {};
	};
	class lock
	{
		name = "lock";
		sound[] = {"Harris_Client\sounds\new\lock.ogg", 1, 1};
		titles[] = {};
	};
	class cough
	{
		name = "cough";
		sound[] = {"Harris_Client\sounds\new\cough.ogg", 1, 1};
		titles[] = {};
	};
	class weed
	{
		name = "weed";
		sound[] = {"Harris_Client\sounds\new\weed.ogg", 1, 1};
		titles[] = {};
	};
	class mine
	{
		name = "mine";
		sound[] = {"Harris_Client\sounds\new\mine.ogg", 1, 1};
		titles[] = {};
	};
	class openbottle
	{
		name = "openbottle";
		sound[] = {"Harris_Client\sounds\new\openbottle.ogg", 1, 1};
		titles[] = {};
	};
	class wedding
	{
		name = "wedding";
		sound[] = {"Harris_Client\sounds\new\wedding.ogg", 1, 1};
		titles[] = {};
	};
	class SirenLong
	{
		name = "SirenLong";
		sound[] = {"Harris_Client\sounds\Siren_Long.ogg", 1, 1};
		titles[] = {};
	};

	class punch1
	{
		name = "punch1";
		sound[] = {"Harris_Client\sounds\punch1.ogg", 1, 1};
		titles[] = {};
	};

	class punch2
	{
		name = "punch2";
		sound[] = {"Harris_Client\sounds\punch2.ogg", 1, 1};
		titles[] = {};
	};

	class punch3
	{
		name = "punch3";
		sound[] = {"Harris_Client\sounds\punch3.ogg", 1, 1};
		titles[] = {};
	};

	class punch4
	{
		name = "punch4";
		sound[] = {"Harris_Client\sounds\punch4.ogg", 1, 1};
		titles[] = {};
	};
};

class cfgFunctions
{
	class LIMMITT_Functions
	{
		tag = "LIMMITT";
		class LIMMITT_Network
		{
			file = "Harris_Client\Misc";
			class openBook {preInit = 1;};
		};
	};
};

class Harris_Crafting
{
	idd = 8376;
	movingEnabled = false;

	class controls
	{
		class craftingMenu_P: RscPicture
		{
			idc = 1200;
			text = "Harris_Client\Crafting\craftingmenu.paa";
			x = 0.331614 * safezoneW + safezoneX;
			y = 0.181333 * safezoneH + safezoneY;
			w = 0.335156 * safezoneW;
			h = 0.627 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Craft_B: RscButton
		{
			font = "Metropolis";
			idc = 1600;

			x = 0.34625 * safezoneW + safezoneX;
			y = 0.74663 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[] spawn Harris_craftItem";
		};
		class Craft_lb: RscListbox
		{
			onLbSelChanged = "[] call Harris_onCraftLbChanged";
			font = "Metropolis";
			idc = 1500;

			x = 0.348958 * safezoneW + safezoneX;
			y = 0.272222 * safezoneH + safezoneY;
			w = 0.143 * safezoneW;
			h = 0.455 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {1,1,1,1};
   			sizeEx = 0.03;
		};
		class Materials_Lb: RscListbox
		{
			font = "Metropolis";
			idc = 1501;

			x = 0.505208 * safezoneW + safezoneX;
			y = 0.273148 * safezoneH + safezoneY;
			w = 0.143 * safezoneW;
			h = 0.455 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {1,1,1,1};
   			sizeEx = 0.03;
		};
		class dropDown_lb: RscCombo
		{
			idc = 2100;
			onLbSelChanged = "[] call Harris_onCraftSelectionLbChanged";
			x = 0.349479 * safezoneW + safezoneX;
			y = 0.212037 * safezoneH + safezoneY;
			w = 0.299 * safezoneW;
			h = 0.02 * safezoneH;
			sizeEx = 0.03;
		};
	};
};

class Harris_Refine
{
	idd = 8377;
	movingEnabled = false;

	class controls
	{
		class craftingMenu_P: RscPicture
		{
			idc = 1200;
			text = "Harris_Client\Crafting\refinemenu.paa";
			x = 0.331614 * safezoneW + safezoneX;
			y = 0.181333 * safezoneH + safezoneY;
			w = 0.335156 * safezoneW;
			h = 0.627 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class Craft_B: RscButton
		{
			font = "Metropolis";
			idc = 1600;

			x = 0.34625 * safezoneW + safezoneX;
			y = 0.74663 * safezoneH + safezoneY;
			w = 0.3 * safezoneW;
			h = 0.035 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			action = "[] spawn Harris_craftItem";
		};
		class Craft_lb: RscListbox
		{
			onLbSelChanged = "[] call Harris_onCraftLbChanged";
			font = "Metropolis";
			idc = 1500;

			x = 0.348958 * safezoneW + safezoneX;
			y = 0.272222 * safezoneH + safezoneY;
			w = 0.143 * safezoneW;
			h = 0.455 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {1,1,1,1};
   			sizeEx = 0.03;
		};
		class Materials_Lb: RscListbox
		{
			font = "Metropolis";
			idc = 1501;

			x = 0.505208 * safezoneW + safezoneX;
			y = 0.273148 * safezoneH + safezoneY;
			w = 0.143 * safezoneW;
			h = 0.455 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
   			colorText[] = {1,1,1,1};
   			sizeEx = 0.03;
		};
		class dropDown_lb: RscCombo
		{
			idc = 2100;
			onLbSelChanged = "[] call Harris_onCraftSelectionLbChanged";
			x = 0.349479 * safezoneW + safezoneX;
			y = 0.212037 * safezoneH + safezoneY;
			w = 0.299 * safezoneW;
			h = 0.02 * safezoneH;
			sizeEx = 0.03;
		};
	};
};

class Harris_setName
{
	idd = 1233;
	movingEnabled = false;

	class controls
	{
		class ToSet: RscEdit
		{
			idc = 1400;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.035 * safezoneH;
		};
		class Set: RscButton
		{
			idc = 1600;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.035 * safezoneH;
			text = "Set Name";
			action = "[] call Harris_setName; closeDialog 0";
		};
		class Current_Name: RscText
		{
			idc = 1000;
			text = "Current Name:"; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.03 * safezoneH;
		};
	};
};



class Harris_getCitation
{
	idd = 5064;
	movingEnabled = false;

	class controls
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "Harris_client\Police\receiveCitation";
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.35 * safezoneW;
			h = 0.6 * safezoneH;
		};
		class First_T: RscText
		{
			idc = 1000;
			font = "PuristaLight";
			text = "Ben"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Last_T: RscText
		{
			idc = 1001;
			font = "PuristaLight";
			text = "Harris"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Middle_T: RscText
		{
			idc = 1002;
			font = "PuristaLight";
			text = "I."; //--- ToDo: Localize;
			x = 0.53125 * safezoneW + safezoneX;
			y = 0.267593 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class DOB_T: RscText
		{
			idc = 1003;
			font = "PuristaLight";
			text = "26/04/1999"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class License_T: RscText
		{
			idc = 1004;
			font = "PuristaLight";
			text = "Yes"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class country_T: RscText
		{
			idc = 1005;
			font = "PuristaLight";
			text = "Lakeside Isles"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class violation_E: RscText
		{
			idc = 1400;
			font = "PuristaLight";
			x = 0.383854 * safezoneW + safezoneX;
			y = 0.430556 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class courtAppearance_LB: RscText
		{
			idc = 2100;
			font = "PuristaLight";
			x = 0.384478 * safezoneW + safezoneX;
			y = 0.479852 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class citationCost: RscText
		{
			idc = 1401;
			font = "PuristaLight";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class submittingOfficer_T: RscText
		{
			idc = 1006;
			font = "PuristaLight";
			text = "Ben Harris"; //--- ToDo: Localize;
			x = 0.383334 * safezoneW + safezoneX;
			y = 0.548148 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class badge_T: RscText
		{
			idc = 1402;
			font = "PuristaLight";
			x = 0.513542 * safezoneW + safezoneX;
			y = 0.548148 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Signature_T: RscEdit
		{
			idc = 1403;
			font = "Palace";
			style = ST_NO_RECT;
			x = 0.390104 * safezoneW + safezoneX;
			y = 0.697223 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.035 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Accept_B: RscButton
		{
			idc = 1600;
			x = 0.517552 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.075 * safezoneW;
			h = 0.03 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
			action = "[] call Harris_payTicket;";
		};
		class refuse_B: RscButton
		{
			idc = 1600;
			action = "[] call Harris_refuseTicket; closeDialog 0";

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.075 * safezoneW;
			h = 0.0300001 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
	};
};


class Harris_giveCitation
{
	idd = 5063;
	movingEnabled = false;

	class controls
	{
		class Background_P: RscPicture
		{
			idc = 1200;
			text = "Harris_Client\Police\giveCitation";
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.35 * safezoneW;
			h = 0.6 * safezoneH;
		};
		class First_T: RscText
		{
			idc = 1000;
			font = "PuristaLight";
			text = "Ben"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Last_T: RscText
		{
			idc = 1001;
			font = "PuristaLight";
			text = "Harris"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Middle_T: RscText
		{
			idc = 1002;
			font = "PuristaLight";
			text = "I."; //--- ToDo: Localize;
			x = 0.53125 * safezoneW + safezoneX;
			y = 0.267593 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class DOB_T: RscText
		{
			idc = 1003;
			font = "PuristaLight";
			text = "26/04/1999"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class License_T: RscText
		{
			idc = 1004;
			font = "PuristaLight";
			text = "Yes"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class country_T: RscText
		{
			idc = 1005;
			font = "PuristaLight";
			text = "Lakeside Isles"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class violation_E: RscEdit
		{
			idc = 1400;
			style = ST_NO_RECT;
			font = "PuristaLight";
			x = 0.383854 * safezoneW + safezoneX;
			y = 0.430556 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class courtAppearance_LB: RscCombo
		{
			idc = 2100;
			font = "PuristaLight";
			x = 0.384478 * safezoneW + safezoneX;
			y = 0.479852 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class citationCost: RscEdit
		{
			idc = 1401;
			style = ST_NO_RECT;
			font = "PuristaLight";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class submittingOfficer_T: RscText
		{
			idc = 1006;
			font = "PuristaLight";
			text = "Ben Harris"; //--- ToDo: Localize;
			x = 0.383334 * safezoneW + safezoneX;
			y = 0.548148 * safezoneH + safezoneY;
			w = 0.1 * safezoneW;
			h = 0.025 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class badge_T: RscEdit
		{
			idc = 1402;
			style = ST_NO_RECT;
			font = "PuristaLight";
			x = 0.513542 * safezoneW + safezoneX;
			y = 0.548148 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.027 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			colorShadow[] = {0,0,0,0};
		};
		class Issue_B: RscButton
		{
			idc = 1600;
			x = 0.517552 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.075 * safezoneW;
			h = 0.03 * safezoneH;
			action = "[] call Harris_sendTicket; closeDialog 0;";
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
  			colorShadow[] = {0,0,0,0};
   			colorBorder[] = {0,0,0,0};
		};
	};
};

class Harris_whiteList
{
	name = "Harris_whiteList";
	idd = 123312;
	fadein=0;
	fadeout=0;
	movingEnable = 0;
	objects[]={};

	class controlsBackground 
	{
		class Whitelist_Combo: RscCombo
		{
			idc = 2100;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.03 * safezoneH;
		};
		class Whitelist_B: RscButton
		{
			idc = 1600;
			text = "Whitelist"; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.07 * safezoneW;
			h = 0.03 * safezoneH;
			action = "[] call Harris_fnc_whitelist; closeDialog 0";
		};
	};
};


class sell_shop
{
	idd = 123123;
	movingEnabled = false;
	enableSimulation = true;
	class controlsBackground
	{
		

		class RscTitleBackground : RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1; y = 0.2;
			w = 0.32; h = (1 / 25);
		};
		
		class Mainbackground : RscText
		{
			colorBackground[] = {0,0,0,0.7};
			idc = -1;
			x = 0.1; y = 0.2 + (11 / 250);
			w = 0.32; h = 0.6 - (22 / 250);
		};
		
		class itemInfo : RscStructuredText
		{
			idc = 38404;
			text = "";
			sizeEx = 0.035;
			x = 0.11; y = 0.68;
			w = 0.2; h = 0.2;
		};
		
		class FilterList : RscCombo
		{
			idc = 38402;
			onLBSelChanged = "";
			x = 0.11; y = 0.64;
			w = 0.3; h = 0.035;
		};
		class Title : Harris_RscText
		{
			colorBackground[] = {0,0,0,0};
			idc = 38401;
			text = "";
			x = 0.1; y = 0.1425;
			w = 0.32; h = 0.1;
		};
	};
	
	class controls
	{
		class itemList : RscListBox
		{
			idc = 38403;
			onLBSelChanged = "[] call Harris_onLbSelChanged";
			sizeEx = 0.035;
			x = 0.11; y = 0.25;
			w = 0.3; h = 0.38;
		};
		
		class ButtonSell : RscButtonMenu
		{
			idc = 38405;
			text = "Sell";
			onButtonClick = "[] call Harris_sellItem;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonClose : RscButtonMenu 
		{
			idc = -1;
			text = "Cancel";
			onButtonClick = "closeDialog 0;";
			x = 0.1;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};

#include "Phone\UI\Harris_Phone.hpp"