/*
	Author: Ben Harris
	Description: Puts the player in a car
*/
NZF_getInCar = { 
	params["_vehcile"];

	player moveInCargo _vehcile;
};
