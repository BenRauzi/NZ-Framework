/*
	Author: Ben Harris
	Description: Saves the stats locally
	-- This required for onPauseScript in the description.ext
*/

Harris_saveStatsLocal = {
	[player, player getVariable "playerInfo"] remoteExecCall ["Harris_saveStats", 2];
};