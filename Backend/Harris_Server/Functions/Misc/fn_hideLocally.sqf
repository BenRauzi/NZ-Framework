/*
    Author: Nicholas Jo'Foski
    Description: Hides target locally
*/

NZF_hideLocally = {
    params ["_player"];
    _player hideObject true;
    sleep 40.5;
    _player hideObject false;
};