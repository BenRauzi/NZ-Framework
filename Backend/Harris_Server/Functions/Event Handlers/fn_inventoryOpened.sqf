/*
    Author: Nicholas Jo'Foski
    Description: Iventory Opened Event Handler
*/

NZF_inventoryOpened = {
    disableSerialization;
    private["_container","_unit"];
    _unit = _this select 0;
    _container = _this select 1;

    _vehicle = vehicle player;
    _handle = false;

    // Prevent restrained and surrendering players to be able to open their inventory
    if ((player getVariable "NZF_Restrained") select 0) || ((player getVariable "NZF_Surrender") select 0)) exitWith {
        _handle = true;
        _handle;
    };
};