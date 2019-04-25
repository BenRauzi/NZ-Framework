/*
	Author: Ben Harris
	Description: Main Initialisation File for the Client
*/

Harris_clientInit = {
	cutText ["Fetching Player Information","BLACK OUT"]; 
	[player] remoteExecCall	["Harris_initStats", 2];
	waitUntil{!isNil {player getVariable "loadedIn"}}
	cutText ["Player Information Received... Please Wait","BLACK",1]; 
	cutText ["","BLACK IN",1]; 
};