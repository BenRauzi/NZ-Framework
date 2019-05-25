/*
    Author: Nicholas Jo'Foski
    Description: Adds an item to the players inventory
*/

NZF_addItem = {
    params["_item"];
    if (isNil "_item") exitWith {};
    if (player canAdd _item) then {
        player addItem _item;
    } else {
        [_item] call NZF_spawnItem;
    };
};