/*
	Author: Ben Harris
	Description: Main Initialisation File for the Server
*/

Harris_serverInit = {
	["NZFramework", "SQL_CUSTOM", "NZFramework.ini"] call MySQL_fnc_ExtDBinit;
	missionNamespace setVariable ["spawnInPlane", [], true];

	addMissionEventHandler ["HandleDisconnect",{ [_this select 0] remoteExecCall ["Harris_saveStats", 2];}];
};