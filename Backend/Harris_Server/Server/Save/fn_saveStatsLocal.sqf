/*
	Author: Ben Harris
	Description: Saves the stats locally
	-- This required for onPauseScript in the description.ext
*/

Harris_saveStatsLocal = {
	[player] remoteExecCall ["Harris_saveStats", 2];
};