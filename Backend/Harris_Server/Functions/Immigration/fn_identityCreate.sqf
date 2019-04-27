/*
	Author: Ben Harris
	Description: Creates the identity with the information given
*/

NZF_identityCreate = {
	params["_first", "_last", "_middle", "_sex", "_DoB", "_Eyecolour", "_previousResidency"];

	_identityInfo = profileNamespace getVariable ["identityInfo", []];
	_identityCount = count(_identityInfo);

	_identityCount = _identityCount + 1;

	_identityInfo pushBack [[_first, _last, _middle, _sex, _DoB, _Eyecolour, _previousResidency], _identityCount];
	profileNamespace setVariable ["identityInfo", _identityInfo];
	saveProfileNamespace;

	closeDialog 0;
	[] spawn NZF_openCharacterCreation;
};