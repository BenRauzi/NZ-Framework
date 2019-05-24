Harris_setTwitterName = {
	params["_colour"];

	if !(isNil "_colour") then {
		profileNamespace setVariable ["colour", _colour];		
	} else {
		profileNamespace setVariable ["colour", "default"];		
	};

	saveProfileNamespace;
};