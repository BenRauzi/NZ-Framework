/*
	Author: Ben Harris
	Description: Changes Interaction Colour
*/
Harris_colourRadialInner = {
	disableSerialization;
	params["_button"];


	if (!isNil"Harris_currentHighlight") then {
		Harris_currentHighlight ctrlSetTextColor [0, 0, 0, 0.66];
		{
			ctrlShow [_x, false];
		} forEach toHide;
	};

	_innerRadial = [1110,2110,3110,4110,5110,6110,7110,8110];
	Harris_currentHighlight = ((findDisplay 1723) displayCtrl (_innerRadial select _button));
	Harris_currentHighlight ctrlSetTextColor [0.95,0.71,0,0.66];

	toHide = [];
	conditions = [];
	if ((_button + 1) in Harris_currentMenus) then {

		
		outerActions = [];
		_outerRadial = outerImage select _button;
		_text = [outerText1 select _button, outerText2 select _button, outerText3 select _button, outerText4 select _button];
		_icons = [outerIcon1 select _button, outerIcon2 select _button, outerIcon3 select _button, outerIcon4 select _button];
		_buttons = [outerButton1 select _button, outerButton2 select _button, outerButton3 select _button, outerButton4 select _button];

		classes = nil;
		{
			if (_x select 0 == (_button + 1)) then {
				classes = _x select 1;
			};

			_count = 0;
			for "_i" from 3 to (count classes - 1) do {
				_class = classes select _i;
				_conditions = call compile (getText (_class >> "condition"));
				conditions pushBack _conditions;
				if !(false in _conditions) then {
					ctrlShow [_outerRadial, true];
					toHide pushBack _outerRadial;

					_icon = (_icons select _count);
					toHide pushBack _icon;
					ctrlSetText [_icon, format ["\Harris_Client\radial\icons\%1", getText (_class >> "icon")]];
					ctrlShow [_icon, true];

					_text2 = (_text select _count);
					toHide pushBack _text2;
					ctrlSetText [_text2, getText (_class >> "text")];
					ctrlShow [_text2, true];

					_buttonToShow = (_buttons select _count);
					toHide pushBack _buttonToShow;
					ctrlShow [_buttonToShow, true];
					((findDisplay 1723) displayCtrl _buttonToShow) ctrlSetEventHandler ["MouseEnter", format ["[%1, true] call Harris_colourRadialOuter", [_icon, _text2]]];
					((findDisplay 1723) displayCtrl _buttonToShow) ctrlSetEventHandler ["MouseExit", format ["[%1, false] call Harris_colourRadialOuter", [_icon, _text2]]];

					_action = ((classes select _i) >> "action");
					outerActions pushBack _action;

					_count = _count + 1;
				};
			};

		} forEach Harris_menus;
	};
};