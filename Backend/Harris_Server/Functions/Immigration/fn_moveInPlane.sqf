/*
    Author: Nicholas Jo'Foski
    Filename: fn_moveInPlane.sqf
    Description: Moves the newly joined player into a plane!
*/

NZF_moveInPlane = {
    params["_bool"];
    if (count (missionNamespace getVariable ["spawnInPlane", []]) <= 0 && !_bool) exitWith {
        [] spawn NZF_spawnInPlane;
    };
    something = false;
    {
        if (count fullCrew _x <= 3) exitWith {
            player switchCamera "Internal";
            player moveInCargo _x;
        };
        something = true;
    } forEach (missionNamespace getVariable ["spawnInPlane", []]);
    if (something && !_bool) then {
        [] spawn NZF_spawnInPlane;
    };
};

/* Intro Scene
[] spawn {
    cutText ["", "BLACK FADED", 999];
    0 fadeSound 0;
    0 fadeMusic 1;
    playMusic "LeadTrack02_F_Bootcamp"; 
     
    sleep 0.5; 
    titleText ["<t font='EtelkaMonospaceProBold' size='1.5'>Potato Bro Studios<br/>Presents</t>", "PLAIN", 0.5,true,true];
    sleep 10; 
    titleText ["<t font='EtelkaMonospaceProBold' size='1.5'>A Kiwi Production</t>", "PLAIN", 0.5,true,true];
    sleep 10;
    titleText ["<t font='EtelkaMonospaceProBold' size='1.5'>ARMA 3</t>", "PLAIN", 0.5,true,true]; 
    sleep 10;
    titleText ["<t font='EtelkaMonospaceProBold' size='1.5'>NEW ZEALAND | RP</t>", "PLAIN", 0.5,true,true]; 
    sleep 10; 
    cutText ["","Black in", 20]; 
};
[false] call NZF_moveInPlane;
*/