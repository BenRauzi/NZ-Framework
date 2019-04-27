/*
    Author: Nicholas Jo'Foski
    Description: Creates and saves the players character, as well as starts the intro
*/

NZF_createCharacter = { 
    params ["_face","_uniform","_vest","_backpack","_glasses","_headgear"];
    closeDialog 0; 
    disableUserInput true;
    _target = player;

    // Load Character
    _target setFace _face;
    _target forceAddUniform _uniform;
    _target addVest _vest;
    removeBackpack _target;
    _target addBackpack _backpack;
    _target addGoggles _glasses;
    _target addHeadgear _headgear;
    _target allowDamage false;

    // Save Crap to DB (Ben)
    /* blah blah blah...*/

    // Intro Scene
    cutText ["","Black Out", 2];
    5 fadeSound 0;
    0 fadeMusic 0;
    sleep 5;
    deleteVehicle cObj;
    deleteVehicle cNPC;
    cCam cameraEffect ["terminate","back"];
    camDestroy cCam;
    [false] call NZF_moveInPlane;
    5 fadeSound 0.3;
    1 fadeMusic 1;
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
    sleep 10;
    disableUserInput false;
};