/*
    Author: Nicholas Jo'Foski
    Description: Sets a players face globally
*/

NZF_setFaceGlobal = {
    params["_target", "_face"];
    if (!isNull _target) then {
        _target setFace _face;
    };
};