/*
	Author: Ben Harris
	Description: HandleDamage EVH
*/

NZF_handleDamage = {
	_damage = _this select 2;
	_person = _this select 6;
	_returnDamage = _damage;

	if (_damage > player_damage) then {
		[_damage] spawn NZF_setBlood;
	};

	_returnDamage;
};