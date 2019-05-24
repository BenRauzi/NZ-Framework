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
			condition = "[(animationState Harris_currentCursorObject != 'hubspectator_stand'), isPlayer Harris_currentCursorObject, player distance Harris_currentCursorObject < 3.5, (player getVariable 'currentJob') select 0 == 'Cop']";
			action = "[] remoteExecCall ['NZF_shackle', Harris_currentCursorObject]; player playMove 'AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon';";
			icon = "015_handcuffs.paa";
			text = "Shackle";
		};
		class unShackle 
		{
			condition = "[(animationState Harris_currentCursorObject == 'hubspectator_stand'), isPlayer Harris_currentCursorObject, player distance Harris_currentCursorObject < 3.5, (player getVariable 'currentJob') select 0 == 'Cop']";
			action = "[] remoteExecCall ['NZF_shackle', Harris_currentCursorObject]; player playMove 'AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon';";
			icon = "015_handcuffs.paa";
			text = "UnShackle";
		};
		class Unescort 
		{
			condition = "[count (attachedObjects player) > 0, !isNil 'NZF_currentEscort', (player getVariable 'currentJob') select 0 == 'Cop']";
			action = "[] call NZF_unescorted; NZF_currentEscort = nil;";
			icon = "006_DragChild.paa";
			text = "Unescort";
		};
		class Escort 
		{
			condition = "[!(Harris_currentCursorObject getVariable['Escorting',false]), isPlayer Harris_currentCursorObject, (Harris_currentCursorObject getVariable ['restrained', false]), (player getVariable 'currentJob') select 0 == 'Cop']";
			action = "[Harris_currentCursorObject] call NZF_escort; escorting = Harris_currentCursorObject;";
			icon = "006_DragChild.paa";
			text = "Escort";
		};

		class PutInCar
		{
			condition = "[isPlayer Harris_currentCursorObject, (Harris_currentCursorObject distance nearestObject [Harris_currentCursorObject, 'Car'] < 5 || Harris_currentCursorObject distance nearestObject [Harris_currentCursorObject, 'Air'] < 5), vehicle Harris_currentCursorObject == Harris_currentCursorObject, (player getVariable 'currentJob') select 0 == 'Cop']";
			action = "[Harris_currentCursorObject] call NZF_putInCar;";
			icon = "033-download.paa";
			text = "Put In Vehicle";
		};
		class PutInCarEscorting
		{
			condition = "[(Harris_currentCursorObject isKindOf 'Land' || Harris_currentCursorObject isKindOf 'Air' || Harris_currentCursorObject isKindOf 'Ship'), (player distance Harris_currentCursorObject) < 10, count (attachedObjects player) > 0, !isNil 'NZF_currentEscort', (player getVariable 'currentJob') select 0 == 'Cop']";
			action = "[Harris_currentCursorObject, true] call NZF_putInCar;";
			icon = "033-download.paa";
			text = "Put In Vehicle";
		};
	};

	class PoliceVehicle
	{
		action = "";
		icon = "027-hat-of-a-policeman.paa";
		text = "Police";
		class Pullout
		{
			condition = "[(Harris_currentCursorObject isKindOf 'Land' || Harris_currentCursorObject isKindOf 'Air' || Harris_currentCursorObject isKindOf 'Ship'), (player getVariable 'currentJob') select 0 == 'Cop', count crew cursorObject > 0,!(cursorObject isKindOf 'Man')]";
			action = "[Harris_currentCursorObject] spawn NZF_pulloutAction;";
			icon = "006_DragChild.paa";
			text = "Pullout";
		};
	};

	class Licenses
	{
		action = "";
		icon = "021-tax.paa";
		text = "Legal";
			
		class Ticket
		{
			condition = "[isPlayer Harris_currentCursorObject, (player getVariable 'currentJob') select 0 == 'Cop']";
			action = "[Harris_currentCursorObject] call NZF_openGiveTicket";
			icon = "017-receipt.paa";
			text = "Ticket";
		};		
	};

	class setName
	{
		condition = "[isPlayer Harris_currentCursorObject, player distance Harris_currentCursorObject < 5]";
		action = "[Harris_currentCursorObject] call NZF_openSetName";
		icon = "002_Tag.paa";
		text = "Set Name";
	};
};