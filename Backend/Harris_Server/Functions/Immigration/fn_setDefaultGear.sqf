/*
	Author: Ben Harris
	Description: Sets the default gear of the player
*/

NZF_setDefaultGear = {
    params["_face", "_uniform", "_vest", "_backpack", "_glasses", "_headgear"];
    (player getVariable "currentIdentity") set [2,[_face, _uniform, _vest, _backpack, _glasses, _headgear]];

    {
    	if (_x select 1 == (player getVariable "currentIdentity") select 1) exitWith {
    		profileNamespace getVariable "identityInfo" set [_forEachIndex, (player getVariable "currentIdentity")];
    	};
	} forEach (profileNamespace getVariable ["identityInfo", []]);

    saveProfileNamespace;
};