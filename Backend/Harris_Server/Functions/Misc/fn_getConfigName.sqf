/*
    Author: Nicholas Jo'Foski
    Description: Gets the config name of the given classname
*/

NZF_getConfigName = {
	params ["_cName"]; 
    switch true do
    {
        case(isClass(configFile >> "CfgMagazines" >> _cName)): {"CfgMagazines"};
        case(isClass(configFile >> "CfgWeapons" >> _cName)): {"CfgWeapons"};
        case(isClass(configFile >> "CfgVehicles" >> _cName)): {"CfgVehicles"};
        case(isClass(configFile >> "CfgGlasses" >> _cName)): {"CfgGlasses"};
    };
};