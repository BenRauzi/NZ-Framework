/*
	Author: Ben Harris
	Description: Main Initialisation File for the Server
*/

Harris_serverInit = {
	["NZFramework", "SQL_CUSTOM", "NZFramework.ini"] call MySQL_fnc_ExtDBinit;
	missionNamespace setVariable ["spawnInPlane", [], true];

	addMissionEventHandler ["HandleDisconnect",{ deleteVehicle (_this select 0); [_this select 0] remoteExecCall ["Harris_saveStats", 2];}];

	[] call Harris_configInit;

	// Setup Cash Registers (For Shops)
	_shops = [];
	_dshops = [];
	{
		_shops pushBack (_x select 1);
		_dshops pushBack (_x select 0);
	} forEach NZF_shopList;
	{
		if (!isNil {_x getVariable "NZF_Shop"} && ((_x getVariable "NZF_Shop") select 0) in _shops) then {
			// Set Variables etc.
			_x allowDamage false;
			_x setVariable ["Foski_disableActions",true,true];
			_x enableSimulation false;
			// Turn Register On
			if (isNil {_x getVariable "Foski_Power"}) then {
				[_x,"setPower"] spawn Foski_CR_fnc_manageRegister;
			};
			// Set Register Text
			_dname = _dshops select (_shops find ((_x getVariable "NZF_Shop") select 0));
			if (count _dname <= 18) then {
				_spaces = [];
				for '_i' from 1 to (18 - (count _dname)) do {
					_spaces pushBack " ";
				}; 
				[_x,"setText",(_dname + (_spaces joinString "") + "Total: $0.00")] spawn Foski_CR_fnc_manageRegister;
			} else {
				[_x,"setText","Store             Total: $0.00"] spawn Foski_CR_fnc_manageRegister;
			};
		};
	} forEach (allMissionObjects "Foski_CashRegister");
};