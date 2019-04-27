/*
    Author: Nicholas Jo'Foski
    Description: Plays the cutscene for the player once they land
*/

NZF_planeLanded = {
    sleep 5;
    10 fadeSound 0;
    10 fadeMusic 0;
    sleep 5;
    cutText ["","Black Out", 2];
    sleep 3;
    player setPos (getMarkerPos "newCharacterSpawn");
    player setDir (markerDir "newCharacterSpawn");
    player switchCamera "Internal";
    titleText ["<t font='EtelkaMonospaceProBold' size='1.5'>1 Hour Later</t>", "PLAIN", 0.3,true,true];
    sleep 6;
    5 fadeSound 1;
    cutText ["","Black In", 2];
    player allowDamage true;
};