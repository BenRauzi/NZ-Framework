class cfgInteractions
{
	class SyncData
	{
		condition = "[alive player]";
		action = "[] call Harris_saveStatsLocal";
		icon = "032-cloud-sync.paa";
		text = "Sync Data";
	};

	class PoliceAction
	{
		action = "";
		icon = "icon_handcuffs.paa";
		text = "Police Handle";
		
		/*class Restrain 
		{
			condition = "[!(Harris_currentCursorObject getVariable ['Foski_Restrained', false]), isPlayer Harris_currentCursorObject, player distance Harris_currentCursorObject < 3.5]";
			action = "[Harris_currentCursorObject] call Foski_restrainPlayer; player playMove 'AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon';";
			icon = "icon_handcuffs.paa";
			text = "Restrain";
		};
		class Unrestrain 
		{
			condition = "[(Harris_currentCursorObject getVariable ['Foski_Restrained', false]), isPlayer Harris_currentCursorObject, player distance Harris_currentCursorObject < 3.5]";
			action = "[Harris_currentCursorObject] call Foski_unrestrainPlayer; Harris_currentCursorObject setVariable ['Harris_roped', nil,true]; player playMove 'AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon';";
			icon = "icon_handcuffs.paa";
			text = "Unrestrain";
		};
		*/
		class shackle 
		{
			condition = "[(animationState Harris_currentCursorObject != 'hubspectator_stand'), isPlayer Harris_currentCursorObject, player distance Harris_currentCursorObject < 3.5]";
			action = "[] remoteExecCall ['NZF_shackle', Harris_currentCursorObject]; player playMove 'AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon';";
			icon = "015_handcuffs.paa";
			text = "Shackle";
		};
		class unShackle 
		{
			condition = "[(animationState Harris_currentCursorObject == 'hubspectator_stand'), isPlayer Harris_currentCursorObject, player distance Harris_currentCursorObject < 3.5]";
			action = "[] remoteExecCall ['NZF_shackle', Harris_currentCursorObject]; player playMove 'AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon';";
			icon = "015_handcuffs.paa";
			text = "UnShackle";
		};
		class Unescort 
		{
			condition = "[count (attachedObjects player) > 0, !isNil 'escorting']";
			action = "[] call NZF_unescorted; escorting = nil;";
			icon = "006_DragChild.paa";
			text = "Unescort";
		};
		class Escort 
		{
			condition = "[!(Harris_currentCursorObject getVariable['Escorting',false]), isPlayer Harris_currentCursorObject, (Harris_currentCursorObject getVariable ['restrained', false])]";
			action = "[Harris_currentCursorObject] call NZF_escort; escorting = Harris_currentCursorObject;";
			icon = "006_DragChild.paa";
			text = "Escort";
		};

		class PutInCar
		{
			condition = "[isPlayer Harris_currentCursorObject, (Harris_currentCursorObject distance nearestObject [Harris_currentCursorObject, 'Car'] < 5 || Harris_currentCursorObject distance nearestObject [Harris_currentCursorObject, 'Air'] < 5), vehicle Harris_currentCursorObject == Harris_currentCursorObject]";
			action = "[Harris_currentCursorObject] call NZF_putInCar;";
			icon = "033-download.paa";
			text = "Put In Vehicle";
		};
	};
};