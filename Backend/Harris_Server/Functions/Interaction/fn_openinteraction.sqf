/*
	Author: Ben Harris
	Description: Opens the interaction menu

	outerImage = [1210,2210,3210,4210,5210,6210,7210,8210];
	outerIcon1 = [1211,2211,3211,4211,5211,6211,7211,8211];
	outerIcon2 = [1212,2212,3212,4212,5212,6212,7212,8212];
	outerIcon3 = [1213,2213,3213,4213,5213,6213,7213,8213];
	outerIcon4 = [1214,2214,3214,4214,5214,6214,7214,8214];

	outerText1 = [1215,2215,3215,4215,5215,6215,7215,8215];
	outerText2 = [1216,2216,3216,4216,5216,6216,7216,8216];
	outerText3 = [1217,2217,3217,4217,5217,6217,7217,8217];
	outerText4 = [1218,2218,3218,4218,5218,6218,7218,8218];

	outerButton1 = [1219,2219,3219,4219,5219,6219,7219,8219];
	outerButton2 = [1220,2220,3220,4220,5220,6220,7220,8220];
	outerButton3 = [1221,2221,3221,4221,5221,6221,7221,8221];
	outerButton4 = [1222,2222,3222,4222,5222,6222,7222,8222];
*/

Harris_openInteraction = {
	if !(player getVariable "Harris_InteractionEnabled") exitWith {}; // Added by Nicholas Jo'Foski to stop players restrained sending messages
	_innerIcons = [1111,2111,3111,4111,5111,6111,7111,8111];
	_innerText = [1112,2112,3112,4112,5112,6112,7112,8112];
	_innerButtons = [1113,2113,3113,4113,5113,6113,7113,8113];

	Harris_currentCursorObject = cursorObject;

	createDialog 'radialMenu';

	for "_i" from 0 to 7 do {
		_button = _innerButtons select _i;
		((findDisplay 1723) displayCtrl _button) ctrlSetEventHandler ["MouseEnter", format ["[%1] call Harris_colourRadialInner", _i]];
	};

	{
		{
			ctrlShow [_x, false];
		} forEach _x;
	} forEach [_innerButtons, _innerText,_innerIcons,outerImage,outerText1,outerText2,outerText3,outerText4,outerIcon1,outerIcon2,outerIcon3,outerIcon4,outerButton1,outerButton2,outerButton3,outerButton4];

	Harris_currentActions = [];
	Harris_currentMenus = [];
	Harris_menus = [];

	_count = 0;
	_processing = [];
	{
		countT = 0;
		// (getText (_x >> "text"));
		//systemChat str (getText (_x >> "text"));
		_conditions = (getText (_x >> "condition"));

		if !(_count > 7) then {

			if (isNil "_conditions" || _conditions == "") then {
				for "_i" from 3 to (count _x - 1) do {
					if (countT == 0) then {
						_condition = call compile (getText (_x select _i >> "condition"));
						//diag_log _condition;
						if !(false in _condition) then {
							countT = countT + 1;
						};
					};
				};
				_conditions	= [];
			} else {
				_conditions = call compile _conditions;
			};
		
			//diag_log str _conditions;
		//	systemChat str _conditions;
			if (countT > 0 || (!(false in _conditions) && !(_conditions isEqualTo []))) then {
				Harris_currentActions pushBack (getText (_x >> "action"));

				ctrlSetText [(_innerIcons select _count), format ["\Harris_Client\radial\icons\%1", getText (_x >> "icon")]];
				ctrlShow [(_innerIcons select _count), true];

				ctrlSetText [(_innerText select _count), getText (_x >> "text")];
				ctrlShow [(_innerText select _count), true];

				ctrlShow [(_innerButtons select _count), true];

				if (count ("true" configClasses (missionConfigFile >> "CfgInteractions") select _forEachIndex) > 3) then {
					Harris_currentMenus pushBack (_count + 1);
					Harris_menus pushBack [_count + 1, _x];
				};

				_count = _count + 1;
			};
		_processing pushBack (getText (_x >> "text"));
		};

	} forEach ("true" configClasses (missionConfigFile >> "CfgInteractions"));

	diag_log (str _processing);

	if (count Harris_currentActions < 2 && count Harris_currentMenus < 1) then {
		((findDisplay 1723) displayCtrl 1113) ctrlSetEventHandler ["MouseExit", "[((findDisplay 1723) displayCtrl 1110) ctrlSetTextColor [0, 0, 0, 0.66]]"];
	};
};
