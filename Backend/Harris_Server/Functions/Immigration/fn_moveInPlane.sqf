/*
    Author: Nicholas Jo'Foski
    Description: Moves the new character (identities) into a plane
*/

NZF_moveInPlane = {
    params["_bool"];
    if (count (missionNamespace getVariable ["spawnInPlane", []]) <= 0 && !_bool) exitWith {
        [] spawn NZF_spawnInPlane;
    };
    something = false;
    {
        if (count fullCrew _x <= 3) exitWith {
            player hideObjectGlobal true;
            {
                if (isPlayer _x) then {
                    [player] remoteExec ["NZF_hideLocally", _x];
                };
            } forEach crew _x;
            player moveInCargo _x;
            player switchCamera "Internal";
        };
        something = true;
    } forEach (missionNamespace getVariable ["spawnInPlane", []]);
    if (something && !_bool) then {
        [] spawn NZF_spawnInPlane;
    };
};