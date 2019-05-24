/*
	Author: Ben Harris
	Description: Releases the prisoner from jail
*/
NZF_jailRelease = {
	player setUnitLoadout normalGear;

	normalGear = nil;

	player setPos (getMarkerPos "jail_release");
};