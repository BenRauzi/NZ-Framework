/*
    Author: Nicholas Jo'Foski
    Description: Updates the NPC's appearence based off of the parameters
*/

NZF_updateCharacter = { 
    params ["_type","_option"];
    _target = cNPC;
    switch (_type) do { 
        case "face" : {
            _target setFace _option;
        }; 
        case "uniform" : {
            _target forceAddUniform _option;
        };
        case "vest" : {
            if (_option != "None") then {
                _target addVest _option;
            } else {
                removeVest _target;
            };
        };
        case "backpack" : {
            if (_option != "None") then {
                removeBackpack _target;
                _target addBackpack _option;
            } else {
                removeBackpack _target;
            };
        };
        case "glasses" : {
            if (_option != "None") then {
                _target addGoggles _option;
            } else {
                removeGoggles _target;
            };
        };
        case "headgear" : {
            if (_option != "None") then {
                _target addHeadgear _option;  
            } else {
                removeHeadgear _target;
            };
        };
        default {}; 
    };
};