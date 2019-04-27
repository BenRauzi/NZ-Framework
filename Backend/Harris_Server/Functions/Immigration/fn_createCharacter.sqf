/*
    Author: Nicholas Jo'Foski
    Filename: fn_createCharacter.sqf
    Description: Creates the players character, and saves it to the db!
*/

NZF_createCharacter = { 
    params ["_face","_uniform","_vest","_backpack","_glasses","_headgear"];
    _target = player;
    // Intro Scene
    cutText ["","Black Out", 2];
    5 fadeSound 0;
    0 fadeMusic 1;
    sleep 5;
    disableUserInput true;
    [false] call NZF_moveInPlane;
    player say2D "introMusic"; //playMusic "LeadTrack02_F_Bootcamp"; 
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
    disableUserInput false;
};