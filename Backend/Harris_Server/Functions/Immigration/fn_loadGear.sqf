/*
	Author: Ben Harris
	Description: Loads the default identity's gear
*/

NZF_loadGear = {
    _info = (player getVariable "currentIdentity") select 2;

    [player,_info select 0] remoteExec ["NZF_setFaceGlobal",0,true];

    player forceAddUniform (_info select 1);
    player addVest (_info select 2);
    removeBackpack player;
    player addBackpack (_info select 3);
    player addGoggles (_info select 4);
    player addHeadgear (_info select 5);
};