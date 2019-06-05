/*
    Author: Nicholas Jo'Foski
    Description: Iventory Opened Event Handler
*/

NZF_inventoryOpened = {
    params ["_unit", "_container"];
    disableSerialization;

    _vehicle = vehicle player;
    _handle = false;

    // Prevent restrained and surrendering players to be able to open their inventory
    if (((player getVariable "NZF_Restrained") select 0) || ((player getVariable "NZF_Surrender") select 0)) exitWith {
        _handle = true;
        _handle;
    };
};