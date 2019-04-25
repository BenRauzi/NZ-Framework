
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


class radialMenu
{
	idd = 1723;
	class controls
	{	
		// Defines
			class Harris_radial_button: Harris_RscButton {
				idc = -1;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				colorBackgroundActive[] = {0,0,0,0};
				colorBackgroundDisabled[] = {0,0,0,0};
				colorDisabled[] = {0,0,0,0};
				colorFocused[] = {0,0,0,0};
	  			colorShadow[] = {0,0,0,0};
	   			colorBorder[] = {0,0,0,0};
			};

			class Harris_radial: Harris_RscPicture {
				idc = -1;
				x = 0 * safezoneW + safezoneX;
				y = -0.05 * safezoneH + safezoneY;
				w = 1 * safezoneW;
				h = 1 * safezoneH;
				colorText[] = {0, 0, 0, 0.66};
				colorBackground[] = {0, 0, 0, 0.66};
			};
		// Centre
			class radial_centre: Harris_radial
			{
				idc = 1999;
				text = "\Harris_Client\radial\radial_centre.paa";
			};

		// Inner 1 (Top Centre)
			class radial_centretop_i: Harris_radial
			{
				idc = 1110;
				text = "\Harris_Client\radial\radial_centretop_i.paa";
			};
			class Icon_1_i: RscPicture
			{
				idc = 1111;
				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.484531 * safezoneW + safezoneX;
				y = 0.352 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};

			class Text_1_i: Harris_RscText
			{
				idc = 1112;
				text = "Handcuff";
				style = ST_CENTER;
				x = 0.477531 * safezoneW + safezoneX;
				y = 0.36 * safezoneH + safezoneY;
				w = 0.04 * safezoneW;
				h = 0.05 * safezoneH;
			};

			class Button_1_i: Harris_radial_button
			{
				idc = 1113;
				x = 0.463906 * safezoneW + safezoneX;
				y = 0.346 * safezoneH + safezoneY;
				w = 0.06 * safezoneW;
				h = 0.09 * safezoneH;
				action = "[0] call Harris_interactionExecute;";
			};
		// Outer 1 (Top Centre)
			class radial_outer_1: Harris_radial
			{
				idc = 1210;
				text = "\Harris_Client\radial\radial_centretop_o.paa";
				x = 0.0005 * safezoneW + safezoneX;
			};

			
			class Icon_1_o_1: RscPicture
			{
				idc = 1211;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.422656 * safezoneW + safezoneX;
				y = 0.297 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_1_o_2: RscPicture
			{
				idc = 1212;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.467 * safezoneW + safezoneX;
				y = 0.271 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_1_o_3: RscPicture
			{
				idc = 1213;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.515312 * safezoneW + safezoneX;
				y = 0.271 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_1_o_4: RscPicture
			{
				idc = 1214;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.551562 * safezoneW + safezoneX;
				y = 0.297 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};

			class Text_1_o_1: Harris_RscText
			{
				idc = 1215;

				text = "Handcuff";
				style = ST_CENTER;
				x =   0.406562  * safezoneW + safezoneX;
				y = 0.305 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			
			class Text_1_o_2: Harris_RscText
			{
				idc = 1216;

				text = "Handcuff";
				style = ST_CENTER;
				x = 0.450906 * safezoneW + safezoneX;
				y = 0.279 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_1_o_3: Harris_RscText
			{
				idc = 1217;

				text = "Handcuff";
				style = ST_CENTER;
				x = 0.499218  * safezoneW + safezoneX;
				y = 0.279 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_1_o_4: Harris_RscText
			{
				idc = 1218;

				text = "Handcuff";
				style = ST_CENTER;
				x =  0.535468 * safezoneW + safezoneX;
				y = 0.305 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};


			class Button_1_o_1: Harris_radial_button
			{
				idc = 1219;

				x = 0.4175 * safezoneW + safezoneX;
				y = 0.302 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.055 * safezoneH;
				action = "[1,1] call Harris_interactionExecute;";
			};
			
			class Button_1_o_2: Harris_radial_button
			{
				idc = 1220;

				x = 0.45875 * safezoneW + safezoneX;
				y = 0.28 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.055 * safezoneH;
				action = "[2,1] call Harris_interactionExecute;";
			};
			class Button_1_o_3: Harris_radial_button
			{
				idc = 1221;

				x = 0.507291 * safezoneW + safezoneX;
				y = 0.27963 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.055 * safezoneH;
				action = "[3,1] call Harris_interactionExecute;";
			};
			class Button_1_o_4: Harris_radial_button
			{
				idc = 1222;

				x = 0.545312 * safezoneW + safezoneX;
				y = 0.301851 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.055 * safezoneH;
				action = "[4,1] call Harris_interactionExecute;";
			};

		// Inner 2 (Top Right)

			class radial_topright_i: Harris_radial
			{
				idc = 2110;
				text = "\Harris_Client\radial\radial_topright_i.paa";
			};


			class Icon_2_i: RscPicture
			{
				idc = 2111;
				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.530937 * safezoneW + safezoneX;
				y = 0.385 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};

			class Text_2_i: Harris_RscText
			{
				idc = 2112;
				text = "Handcuff";

				style = ST_CENTER;
				x = 0.522937 * safezoneW + safezoneX;
				y = 0.393 * safezoneH + safezoneY;
				w = 0.04 * safezoneW;
				h = 0.05 * safezoneH;


			};

			class Button_2_i: Harris_radial_button
			{
				idc = 2113;
				x = 0.520625 * safezoneW + safezoneX;
				y = 0.368 * safezoneH + safezoneY;
				w = 0.06 * safezoneW;
				h = 0.1 * safezoneH;
				action = "[1] call Harris_interactionExecute;";
			};
		// Outer 2 (Top Right)
			class radial_outer_2: Harris_radial
			{
				idc = 2210;

				text = "\Harris_Client\radial\radial_topright_o.paa";
			};
			class Icon_2_o_1: RscPicture
			{
				idc = 2211;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.51 * safezoneW + safezoneX;
				y = 0.274 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_2_o_2: RscPicture
			{
				idc = 2212;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.554687 * safezoneW + safezoneX;
				y = 0.29974 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_2_o_3: RscPicture
			{
				idc = 2213;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.5825 * safezoneW + safezoneX;
				y = 0.355593 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_2_o_4: RscPicture
			{
				idc = 2214;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.59849 * safezoneW + safezoneX;
				y = 0.423444 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Text_2_o_1: Harris_RscText
			{
				idc = 2215;

				text = "Handcuff";
				style = ST_CENTER;
				x =  0.493906  * safezoneW + safezoneX;
				y = 0.285 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_2_o_2: Harris_RscText
			{
				idc = 2216;

				text = "Handcuff";
				style = ST_CENTER;
				x = 0.538593 * safezoneW + safezoneX;
				y = 0.30674 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_2_o_3: Harris_RscText
			{
				idc = 2217;

				text = "Handcuff";
				style = ST_CENTER;
				x = 0.566406  * safezoneW + safezoneX;
				y = 0.363593 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_2_o_4: Harris_RscText
			{
				idc = 2218;
				text = "Handcuff";
				style = ST_CENTER;
				x =  0.582396  * safezoneW + safezoneX;
				y = 0.431444 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Button_2_o_1: Harris_radial_button
			{
				idc = 2219;

				x = 0.5 * safezoneW + safezoneX;
				y = 0.269 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[1,1] call Harris_interactionExecute;";
			};
			class Button_2_o_2: Harris_radial_button
			{
				idc = 2220;

				x = 0.546406 * safezoneW + safezoneX;
				y = 0.298296 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[2,1] call Harris_interactionExecute;";
			};
			class Button_2_o_3: Harris_radial_button
			{
				idc = 2221;

				x = 0.577344 * safezoneW + safezoneX;
				y = 0.36337 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[3,1] call Harris_interactionExecute;";
			};
			class Button_2_o_4: Harris_radial_button
			{
				idc = 2222;

				x = 0.592812 * safezoneW + safezoneX;
				y = 0.434 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[4,1] call Harris_interactionExecute;";
			};

		// Inner 3 (Centre Right)

			class radial_centreright_i: Harris_radial
			{
				idc = 3110;
				text = "\Harris_Client\radial\radial_centreright_i.paa";
			};

			class Icon_3_i: RscPicture
			{
				idc = 3111;
				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.554 * safezoneW + safezoneX;
				y = 0.473 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};

			class Text_3_i: Harris_RscText
			{
				idc = 3112;
				text = "Handcuff";
				style = ST_CENTER;
				x =  0.537906  * safezoneW + safezoneX;
				y = 0.481 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};

			class Button_3_i: Harris_radial_button
			{
				idc = 3113;
				x = 0.536094 * safezoneW + safezoneX;
				y = 0.467 * safezoneH + safezoneY;
				w = 0.06 * safezoneW;
				h = 0.09 * safezoneH;
				action = "[2] call Harris_interactionExecute;";
			};
		// Outer 3 (Centre Right)
			class radial_outer_3: Harris_radial
			{
				idc = 3210;

				text = "\Harris_Client\radial\radial_centreright_o.paa";
			};
			class Icon_3_o_1: RscPicture
			{
				idc = 3211;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.591824 * safezoneW + safezoneX;
				y = 0.377704 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_3_o_2: RscPicture
			{
				idc = 3212;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.603728 * safezoneW + safezoneX;
				y = 0.445 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_3_o_3: RscPicture
			{
				idc = 3213;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.600521 * safezoneW + safezoneX;
				y = 0.50889 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_3_o_4: RscPicture
			{
				idc = 3214;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.58802 * safezoneW + safezoneX;
				y = 0.571851 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Text_3_o_1: Harris_RscText
			{
				idc = 3215;
				style = ST_CENTER;

				text = "Handcuff";
				x = 0.575730 * safezoneW + safezoneX;
				y = 0.385704 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_3_o_2: Harris_RscText
			{
				idc = 3216;
				style = ST_CENTER;

				text = "Handcuff";
				x =  0.587634 * safezoneW + safezoneX;
				y = 0.452075 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_3_o_3: Harris_RscText
			{
				idc = 3217;
				style = ST_CENTER;
				text = "Handcuff";
				x =  0.584427 * safezoneW + safezoneX;
				y = 0.51689 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_3_o_4: Harris_RscText
			{
				idc = 3218;
				style = ST_CENTER;

				text = "Handcuff";
				x = 0.571926 * safezoneW + safezoneX;
				y = 0.579851 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Button_3_o_1: Harris_radial_button
			{
				idc = 3219;

				x = 0.587656 * safezoneW + safezoneX;
				y = 0.379 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[1,1] call Harris_interactionExecute;";

			};
			class Button_3_o_2: Harris_radial_button
			{
				idc = 3220;

				x = 0.597969 * safezoneW + safezoneX;
				y = 0.445 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[2,1] call Harris_interactionExecute;";
			};
			class Button_3_o_3: Harris_radial_button
			{
				idc = 3221;

				x = 0.592812 * safezoneW + safezoneX;
				y = 0.511 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[3,1] call Harris_interactionExecute;";
			};
			class Button_3_o_4: Harris_radial_button
			{
				idc = 3222;

				x = 0.5825 * safezoneW + safezoneX;
				y = 0.577 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[4,1] call Harris_interactionExecute;";
			};

		// Inner 4 (Bottom Right)

				class radial_bottomright_i: Harris_radial
				{
					idc = 4110;
					text = "\Harris_Client\radial\radial_bottomright_i.paa";
				};


				class Icon_4_i: RscPicture
				{
					idc = 4111;
					text = "\Harris_Client\radial\icons\002_Tag.paa";
					x = 0.537 * safezoneW + safezoneX;
					y = 0.55 * safezoneH + safezoneY;
					w = 0.02475 * safezoneW;
					h = 0.0418 * safezoneH;
				};

				class Text_4_i: Harris_RscText
				{
					idc = 4112;
					text = "Handcuff";
					x = 0.52  * safezoneW + safezoneX;
					y = 0.558 * safezoneH + safezoneY;
					w = 0.05 * safezoneW;
					h = 0.05 * safezoneH;
					style = ST_CENTER;
				};

				class Button_4_i: Harris_radial_button
				{
					idc = 4113;
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.544 * safezoneH + safezoneY;
					w = 0.05 * safezoneW;
					h = 0.09 * safezoneH;
					action = "[3] call Harris_interactionExecute;";
				};
		// Outer 4 (Bottom Right)
			class radial_outer_4: Harris_radial
			{
				idc = 4210;

				text = "\Harris_Client\radial\radial_bottomright_o.paa";
			};
			class Icon_4_o_1: RscPicture
			{
				idc = 4211;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.598906 * safezoneW + safezoneX;
				y = 0.52337 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_4_o_2: RscPicture
			{
				idc = 4212;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.58 * safezoneW + safezoneX;
				y = 0.587593 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_4_o_3: RscPicture
			{
				idc = 4213;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.543436 * safezoneW + safezoneX;
				y = 0.646852 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_4_o_4: RscPicture
			{
				idc = 4214;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.505832 * safezoneW + safezoneX;
				y = 0.673667 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Text_4_o_1: Harris_RscText
			{
				idc = 4215;

				text = "Handcuff";
				stlye = ST_CENTER;
				x =  0.596 * safezoneW + safezoneX;
				y = 0.53137 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_4_o_2: Harris_RscText
			{
				idc = 4216;

				text = "Handcuff";
				stlye = ST_CENTER;
				x = 0.577094 * safezoneW + safezoneX;
				y = 0.595593 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_4_o_3: Harris_RscText
			{
				idc = 4217;

				text = "Handcuff";
				stlye = ST_CENTER;
				x =  0.54053 * safezoneW + safezoneX;
				y = 0.654852 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_4_o_4: Harris_RscText
			{
				idc = 4218;

				text = "Handcuff";
				stlye = ST_CENTER;
				x = 0.502926 * safezoneW + safezoneX;
				y = 0.681667 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Button_4_o_1: Harris_radial_button
			{
				idc = 4219;

				x = 0.592812 * safezoneW + safezoneX;
				y = 0.522 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[1,1] call Harris_interactionExecute;";
			};
			class Button_4_o_2: Harris_radial_button
			{
				idc = 4220;

				x = 0.577344 * safezoneW + safezoneX;
				y = 0.588 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[2,1] call Harris_interactionExecute;";
			};
			class Button_4_o_3: Harris_radial_button
			{
				idc = 4221;

				x = 0.54125 * safezoneW + safezoneX;
				y = 0.654 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[3,1] call Harris_interactionExecute;";
			};
			class Button_4_o_4: Harris_radial_button
			{
				idc = 4222;

				x = 0.505156 * safezoneW + safezoneX;
				y = 0.676 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[4,1] call Harris_interactionExecute;";
			};

		// Inner 5 (Bottom Centre)

			class radial_centrebottom_i: Harris_radial
			{
				idc = 5110;
				text = "\Harris_Client\radial\radial_centrebottom_i.paa";
			};

			class Icon_5_i: RscPicture
			{
				idc = 5111;
				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.484531 * safezoneW + safezoneX;
				y = 0.591 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};

			class Text_5_i: Harris_RscText
			{
				idc = 5112;
				text = "Handcuff";
				x = 0.473437 * safezoneW + safezoneX;
				y = 0.6 * safezoneH + safezoneY;
				w = 0.04 * safezoneW;
				h = 0.05 * safezoneH;
				style = ST_CENTER;
			};

			class Button_5_i: Harris_radial_button
			{
				idc = 5113;
				x = 0.469062 * safezoneW + safezoneX;
				y = 0.577 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.09 * safezoneH;
				action = "[4] call Harris_interactionExecute;";
			};
		// Outer 5 (Bottom Centre)
			class radial_centrebottom_o: Harris_radial
			{
				idc = 5210;

				text = "\Harris_Client\radial\radial_centrebottom_o.paa";
			};
			class Icon_5_o_1: RscPicture
			{
				idc = 5211;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.546406 * safezoneW + safezoneX;
				y = 0.649 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_5_o_2: RscPicture
			{
				idc = 5212;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.51 * safezoneW + safezoneX;
				y = 0.676556 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_5_o_3: RscPicture
			{
				idc = 5213;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.465 * safezoneW + safezoneX;
				y = 0.676555 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_5_o_4: RscPicture
			{
				idc = 5214;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.422187 * safezoneW + safezoneX;
				y = 0.649148 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Text_5_o_1: Harris_RscText
			{
				idc = 5215;

				text = "Handcuff";
				stlye = ST_CENTER;
				x = 0.5435 * safezoneW + safezoneX;
				y = 0.657 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_5_o_2: Harris_RscText
			{
				idc = 5216;

				text = "Handcuff";
				stlye = ST_CENTER;
				x = 0.507094 * safezoneW + safezoneX;
				y = 0.684556 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_5_o_3: Harris_RscText
			{
				idc = 5217;

				text = "Handcuff";
				stlye = ST_CENTER;
				x = 0.462094 * safezoneW + safezoneX;
				y = 0.684555 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_5_o_4: Harris_RscText
			{
				idc = 5218;

				text = "Handcuff";
				stlye = ST_CENTER;
				x =  0.419281 * safezoneW + safezoneX;
				y = 0.655148 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Button_5_o_1: Harris_radial_button
			{
				idc = 5219;

				x = 0.545313 * safezoneW + safezoneX;
				y = 0.649074 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[1,1] call Harris_interactionExecute;";
			};
			class Button_5_o_2: Harris_radial_button
			{
				idc = 5220;

				x = 0.509791 * safezoneW + safezoneX;
				y = 0.677852 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[2,1] call Harris_interactionExecute;";
			};
			class Button_5_o_3: Harris_radial_button
			{
				idc = 5221;

				x = 0.454167 * safezoneW + safezoneX;
				y = 0.677852 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[3,1] call Harris_interactionExecute;";
			};
			class Button_5_o_4: Harris_radial_button
			{
				idc = 5222;

				x = 0.4175 * safezoneW + safezoneX;
				y = 0.654 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[4,1] call Harris_interactionExecute;";
			};

		// Inner 6 (Bottom Left)


			class radial_bottomleft_i: Harris_radial
			{
				idc = 6110;
				text = "\Harris_Client\radial\radial_bottomleft_i.paa";
			};

			class Icon_6_i: RscPicture
			{
				idc = 6111;
				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.438125 * safezoneW + safezoneX;
				y = 0.55 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};

			class Text_6_i: Harris_RscText
			{
				idc = 6112;
				text = "Handcuff";
				x =  0.421219 * safezoneW + safezoneX;
				y = 0.558 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
				style = ST_CENTER;
			};

			class Button_6_i: Harris_radial_button
			{
				idc = 6113;
				x = 0.430125 * safezoneW + safezoneX;
				y = 0.558 * safezoneH + safezoneY;
				w = 0.06 * safezoneW;
				h = 0.09 * safezoneH;
				action = "[5] call Harris_interactionExecute;";
			};
		// Outer 6 (Bottom Left)
			class radial_bottomleft_o: Harris_radial
			{
				idc = 6210;

				text = "\Harris_Client\radial\radial_bottomleft_o.paa";
			};
			class Icon_6_o_1: RscPicture
			{
				idc = 6211;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.371354 * safezoneW + safezoneX;
				y = 0.522777 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_6_o_2: RscPicture
			{
				idc = 6212;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.386093 * safezoneW + safezoneX;
				y = 0.584037 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_6_o_3: RscPicture
			{
				idc = 6213;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.419166 * safezoneW + safezoneX;
				y = 0.637074 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_6_o_4: RscPicture
			{
				idc = 6214;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.45625 * safezoneW + safezoneX;
				y = 0.675555 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
		
			class Text_6_o_1: Harris_RscText
			{
				idc = 6215;

				text = "Handcuff";
				x =  0.368448 * safezoneW + safezoneX;
				y = 0.528519 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_6_o_2: Harris_RscText
			{
				idc = 6216;

				text = "Handcuff";
				x =  0.38318 * safezoneW + safezoneX;
				y = 0.591482 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_6_o_3: Harris_RscText
			{
				idc = 6217;

				text = "Handcuff";
				x = 0.41626 * safezoneW + safezoneX;
				y = 0.643334 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_6_o_4: Harris_RscText
			{
				idc = 6218;

				text = "Handcuff";
				x = 0.453344 * safezoneW + safezoneX;
				y = 0.681296 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};

			class Button_6_o_1: Harris_radial_button
			{
				idc = 6219;

				x = 0.365938 * safezoneW + safezoneX;
				y = 0.522 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[1,1] call Harris_interactionExecute;";
			};
			class Button_6_o_2: Harris_radial_button
			{
				idc = 6220;

				x = 0.383489 * safezoneW + safezoneX;
				y = 0.588 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[2,1] call Harris_interactionExecute;";
			};
			class Button_6_o_3: Harris_radial_button
			{
				idc = 6221;

				x = 0.412344 * safezoneW + safezoneX;
				y = 0.643 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[3,1] call Harris_interactionExecute;";
			};
			class Button_6_o_4: Harris_radial_button
			{
				idc = 6222;

				x = 0.453125 * safezoneW + safezoneX;
				y = 0.676852 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				action = "[4,1] call Harris_interactionExecute;";
			};

		// Inner 7 (Centre Left)
			class radial_centreleft_i: Harris_radial
			{
				idc = 7110;
				text = "\Harris_Client\radial\radial_centreleft_i.paa";
			};

			class Icon_7_i: RscPicture
			{
				idc = 7111;
				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.418344 * safezoneW + safezoneX;
				y = 0.473 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};

			class Text_7_i: Harris_RscText
			{
				idc = 7112;
				text = "Handcuff";
				style = ST_CENTER;
				x = 0.402250 * safezoneW + safezoneX;
				y = 0.481 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};

			class Button_7_i: Harris_radial_button
			{
				idc = 7113;
				x = 0.396875 * safezoneW + safezoneX;
				y = 0.456 * safezoneH + safezoneY;
				w = 0.06 * safezoneW;
				h = 0.09 * safezoneH;
				action = "[6] call Harris_interactionExecute;";
			};
		// Outer 7 (Centre Left)
			class radial_centreleft_o: Harris_radial
			{
				idc = 7210;

				text = "\Harris_Client\radial\radial_centreleft_o.paa";
			};
			class Icon_7_o_1: RscPicture
			{
				idc = 7211;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.384531 * safezoneW + safezoneX;
				y = 0.368444 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_7_o_2: RscPicture
			{
				idc = 7212;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.370313 * safezoneW + safezoneX;
				y = 0.426481 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_7_o_3: RscPicture
			{
				idc = 7213;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.368541 * safezoneW + safezoneX;
				y = 0.487815 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_7_o_4: RscPicture
			{
				idc = 7214;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.378853 * safezoneW + safezoneX;
				y = 0.554629 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Text_7_o_1: Harris_RscText
			{
				idc = 7215;

				text = "Handcuff";
				x =  0.381625 * safezoneW + safezoneX;
				y = 0.375742 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_7_o_2: Harris_RscText
			{
				idc = 7216;

				text = "Handcuff";
				x =  0.367407 * safezoneW + safezoneX;
				y = 0.437779 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_7_o_3: Harris_RscText
			{
				idc = 7217;

				text = "Handcuff";
				x = 0.365635 * safezoneW + safezoneX;
				y = 0.497037 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_7_o_4: Harris_RscText
			{
				idc = 7218;

				text = "Handcuff";
				x =  0.375947 * safezoneW + safezoneX;
				y = 0.562778 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Button_7_o_1: Harris_radial_button
			{
				idc = 7219;
				x = 0.37625 * safezoneW + safezoneX;
				y = 0.379 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.055 * safezoneH;
				action = "[1,1] call Harris_interactionExecute;";
			};
			class Button_7_o_2: Harris_radial_button
			{
				idc = 7220;
				x = 0.365937 * safezoneW + safezoneX;
				y = 0.434 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.055 * safezoneH;
				action = "[2,1] call Harris_interactionExecute;";
			};
			class Button_7_o_3: Harris_radial_button
			{
				idc = 7221;
				x = 0.365937 * safezoneW + safezoneX;
				y = 0.5 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.055 * safezoneH;
				action = "[3,1] call Harris_interactionExecute;";
			};
			class Button_7_o_4: Harris_radial_button
			{
				idc = 7222;
				x = 0.37625 * safezoneW + safezoneX;
				y = 0.566 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.055 * safezoneH;
				action = "[4,1] call Harris_interactionExecute;";
			};

		// Inner 8 (Top Left)

			class radial_topleft_i: Harris_radial
			{
				idc = 8110;
				text = "\Harris_Client\radial\radial_topleft_i.paa";
			};

			class Icon_8_i: RscPicture
			{
				idc = 8111;
				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.438125 * safezoneW + safezoneX;
				y = 0.385 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};

			class Text_8_i: Harris_RscText
			{
				idc = 8112;
				text = "Handcuff";
				style = ST_CENTER;
				x =  0.422031 * safezoneW + safezoneX;
				y = 0.393 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			

			class Button_8_i: Harris_radial_button
			{
				idc = 8113;
				x = 0.412344 * safezoneW + safezoneX;
				y = 0.368 * safezoneH + safezoneY;
				w = 0.06 * safezoneW;
				h = 0.09 * safezoneH;
				action = "[7] call Harris_interactionExecute;";
			};
		// Outer 8 (Top Left)
			class radial_topleft_o: Harris_radial
			{
				idc = 8210;

				text = "\Harris_Client\radial\radial_topleft_o.paa";
			};
			class Icon_8_o_1: RscPicture
			{
				idc = 8211;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.467187 * safezoneW + safezoneX;
				y = 0.266296 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_8_o_2: RscPicture
			{
				idc = 8212;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.424479 * safezoneW + safezoneX;
				y = 0.291297 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_8_o_3: RscPicture
			{
				idc = 8213;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.390104 * safezoneW + safezoneX;
				y = 0.345926 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Icon_8_o_4: RscPicture
			{
				idc = 8214;

				text = "\Harris_Client\radial\icons\002_Tag.paa";
				x = 0.371874 * safezoneW + safezoneX;
				y = 0.418147 * safezoneH + safezoneY;
				w = 0.02475 * safezoneW;
				h = 0.0418 * safezoneH;
			};
			class Text_8_o_1: Harris_RscText
			{
				idc = 8215;
				style = 1;

				text = "Handcuff";
				x =  0.434281 * safezoneW + safezoneX;
				y = 0.273889 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_8_o_2: Harris_RscText
			{
				idc = 8216;
				style = 1;

				text = "Handcuff";
				x =  0.391573 * safezoneW + safezoneX;
				y = 0.299814 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_8_o_3: Harris_RscText
			{
				idc = 8217;
				style = ST_CENTER;

				text = "Handcuff";
				x =  0.373 * safezoneW + safezoneX;
				y = 0.354445 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Text_8_o_4: Harris_RscText
			{
				idc = 8218;
				style = 1;

				text = "Handcuff";
				x = 0.338968 * safezoneW + safezoneX;
				y = 0.424814 * safezoneH + safezoneY;
				w = 0.05 * safezoneW;
				h = 0.05 * safezoneH;
			};
			class Button_8_o_1: Harris_radial_button
			{
				idc = 8219;

				x = 0.45875 * safezoneW + safezoneX;
				y = 0.269 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[1,1] call Harris_interactionExecute;";
			};
			class Button_8_o_2: Harris_radial_button
			{
				idc = 8220;

				x = 0.418229 * safezoneW + safezoneX;
				y = 0.290741 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[2,1] call Harris_interactionExecute;";
			};
			class Button_8_o_3: Harris_radial_button
			{
				idc = 8221;

				x = 0.382813 * safezoneW + safezoneX;
				y = 0.350926 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[3,1] call Harris_interactionExecute;";
			};
			class Button_8_o_4: Harris_radial_button
			{
				idc = 8222;

				x = 0.365104 * safezoneW + safezoneX;
				y = 0.419445 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.066 * safezoneH;
				colorBackground[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "[4,1] call Harris_interactionExecute;";
			};

	};
};
