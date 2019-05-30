/*
	Author: Nicholas Jo'Foski
	Description: Unrestrains the player
*/

NZF_playerUnRestrained ={
	[_this select 0] spawn {
		_type = _this select 0;
		if (isNil {player getVariable "NZF_Restrained"}) then {
			player setVariable ["NZF_Restrained", [false,""], true];
		};
		if ((player getVariable "NZF_Restrained") select 0) then {
			// Play Sound
			_snd = nil;
			switch (_type) do { 
				case "cuff":
				{
					_snd = "cuttingWire";
				};
				case "rope":{
					_snd = "cough";
				};
				default {}; 
			};
			if !(isNil "_snd") then {
				player say3D _snd;
			};
			sleep 0.2;
			player playAction ("Foski_UnCuff_" + ((player getVariable "NZF_Restrained") select 1));
			player setVariable ["NZF_Restrained", [false,""], true];
			player forceWalk false;
		};
	};
};