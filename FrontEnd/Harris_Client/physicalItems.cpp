// Physical Items
class CfgWeapons
{
	class ToolKit;

	// Coal
	class Harris_coalOre: ToolKit
	{
		displayName = "Coal Ore";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_coalOre.p3d";
		picture = "\Harris_Client\Data\icon_coalOre.paa";
		descriptionShort = "The extraction and use of coal causes many premature deaths and much illness.";
	};
	class Harris_coal: ToolKit
	{
		displayName = "Piece of Coal";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_coal.p3d";
		picture = "\Harris_Client\Data\icon_coal.paa";
		descriptionShort = "A combustible black or brownish-black sedimentary rock.";
	};

	// Iron
	class Harris_ironOre: ToolKit
	{
		displayName = "Iron Ore";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_ironOre.p3d";
		picture = "\Harris_Client\Data\icon_ironOre.paa";
		descriptionShort = "The ores are usually rich in iron oxides.";
	};
	class Harris_ironIngot: ToolKit
	{
		displayName = "Iron Ingot";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_ironIngot.p3d";
		picture = "\Harris_Client\Data\icon_ironIngot.paa";
		descriptionShort = "Casted out of pure molten iron.";
	};

	// Gold
	class Harris_goldOre: ToolKit
	{
		displayName = "Gold Ore";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_goldOre.p3d";
		picture = "\Harris_Client\Data\icon_goldOre.paa";
		descriptionShort = "A rock that contains gold which can be extracted.";
	};
	class Harris_goldIngot: ToolKit
	{
		displayName = "Gold Ingot";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_goldIngot.p3d";
		picture = "\Harris_Client\Data\icon_goldIngot.paa";
		descriptionShort = "Casted out of pure molten gold.";
	};

	// Diamond
	class Harris_diamondOre: ToolKit
	{
		displayName = "Uncut Diamond";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_diamondOre.p3d";
		picture = "\Harris_Client\Data\icon_diamondOre.paa";
		descriptionShort = "A stone that has not been shaped in any particular form or undergone any polishing.";
	};
	class Harris_diamond: ToolKit
	{
		displayName = "Cut Diamond";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_diamond.p3d";
		picture = "\Harris_Client\Data\icon_diamond.paa";
		descriptionShort = "The cut of a diamond greatly affects a diamond's brilliance.";
	};

	// Steel
	class Harris_steelIngot: ToolKit
	{
		displayName = "Steel Ingot";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 15;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_steelIngot.p3d";
		picture = "\Harris_Client\Data\icon_steelIngot.paa";
		descriptionShort = "An alloy of iron and carbon, and sometimes other elements.";
	};

	// Wood
	class Harris_woodLog: ToolKit
	{
		displayName = "Wooden Log";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 70;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_woodLog.p3d";
		picture = "\Harris_Client\Data\icon_woodLog.paa";
		descriptionShort = "A subpart of a felled tree trunk.";
	};

	// Workbench
	class Harris_Workbench: ToolKit
	{
		displayName = "Workbench";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 100;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_workbench.p3d";
		picture = "\Harris_Client\Data\icon_workbench.paa";
		descriptionShort = "A sturdy table at which manual work is done.";
	};

	// Pot
	class Harris_Pot: ToolKit
	{
		displayName = "Plant Pot";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 100;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_pot.p3d";
		picture = "\Harris_Client\Data\icon_pot.paa";
		descriptionShort = "A Pot used to grow some legal plants, and some illegal ones.";
	};

	// C4
	class Harris_RDX: ToolKit
	{
		displayName = "RDX Compound";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 4;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_smallBox.p3d";
		picture = "\Harris_Client\Data\icon_RDX.paa";
		descriptionShort = "A modern compound used for controlled detonations.";
	};
	class Harris_c4: ToolKit
	{
		displayName = "C4 Explosive";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 100;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_c4.p3d";
		picture = "\Harris_Client\Data\icon_c4.paa";
		descriptionShort = "A common variety of the plastic explosive family known as Composition C.";
	};

	// Blue Prints
	class Harris_blueprintnotes: ToolKit
	{
		displayName = "Crafting Notes";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 100;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_blueprint.p3d";
		picture = "\Harris_Client\Data\icon_blueprint.paa";
		descriptionShort = "A reproduction of a technical drawing using a contact print process on light-sensitive sheets.";
	};

	// Weed
	class Harris_weedSeeds: ToolKit
	{
		displayName = "Weed Seeds";
		count = 1;
		class ItemInfo
		{
			mass = 2;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_weedSeeds.p3d";
		picture = "\Harris_Client\Data\icon_weedSeeds.paa";
		descriptionShort = "Plant seeds used to grow Marijuana.";
	};
	class Harris_weedBag: ToolKit
	{
		displayName = "Bag of Weed";
		count = 1;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 4;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_weedBag.p3d";
		picture = "\Harris_Client\Data\icon_weedBag.paa";
		descriptionShort = "Baggie full of Marijuana.";
	};

	// Toolbox
	class Harris_Toolbox: ToolKit
	{
		displayName = "Toolbox";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 20;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_toolbox.p3d";
		picture = "\Harris_Client\Data\icon_toolbox.paa";
		descriptionShort = "Box full of helpful tools which can be used to repair vehicles.";
	};

	// Medkit
	class Harris_medKit: ToolKit
	{
		displayName = "CPR Medkit";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 20;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_medkit.p3d";
		picture = "\Harris_Client\Data\icon_medkit.paa";
		descriptionShort = "A small case containing medical supplies.";
	};

	// Handcuffs
	class Harris_handcuff: ToolKit
	{
		displayName = "Handcuffs";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 6;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_handcuffs.p3d";
		picture = "\Harris_Client\Data\icon_handcuffs.paa";
		descriptionShort = "A pair of handcuffs used to restrain people's hands.";
	};
	class Harris_cuffkeys: ToolKit
	{
		displayName = "Cuff Keys";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 2;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_cuffKeys.p3d";
		picture = "\Harris_Client\Data\icon_cuffKeys.paa";
		descriptionShort = "A pair of keys used to unlock handcuffs and leg shackles.";
	};

	// Burlap
	class Harris_burlap: ToolKit
	{
		displayName = "Burlap";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 2;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_smallBox.p3d";
		picture = "\Harris_Client\Data\icon_burlap.paa";
		descriptionShort = "A woven fabric usually made from skin of the jute plant or sisal fibres.";
	};

	// Rope
	class Harris_rope: ToolKit
	{
		displayName = "Rope";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 2;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_smallBox.p3d";
		picture = "\Harris_Client\Data\icon_rope.paa";
		descriptionShort = "Sturdy rope used to tie things.";
	};

	// Keycard
	class Harris_keyCard: ToolKit
	{
		displayName = "Police Keycard";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 4;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_keyCard.p3d";
		picture = "\Harris_Client\Data\icon_keyCard.paa";
		descriptionShort = "This is used to gain police access to secure facilities.";
	};

	// Oil
	class Harris_oilBarrel: ToolKit
	{
		displayName = "Oil Barrel";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 100;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_oilBarrel.p3d";
		picture = "\Harris_Client\Data\icon_oilBarrel.paa";
		descriptionShort = "42 US gallons, which is about 159 litres or 35 imperial gallons of pure oil.";
	};
	class Harris_petroleumBarrel: ToolKit
	{
		displayName = "Petroleum Barrel";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 100;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_petroleumBarrel.p3d";
		picture = "\Harris_Client\Data\icon_petroleumBarrel.paa";
		descriptionShort = "42 US gallons, which is about 159 litres or 35 imperial gallons of pure petroleum.";
	};
	class Harris_oilPump: ToolKit
	{
		displayName = "Oil Pump Kit";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {901};
			mass = 300;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_aBox.p3d";
		picture = "\Harris_Client\Data\icon_oilPump.paa";
		descriptionShort = "Used to construct an oil pump used for pumping oil from the ground.";
	};

	// Dirty Cash
	class Harris_dirtyCash: ToolKit
	{
		displayName = "Dirty Cash";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] `= {701,801,901};
			mass = 4;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_dirtyCash.p3d";
		picture = "\Harris_Client\Data\icon_dirtyCash.paa";
		descriptionShort = "Money that is illegally gained, illegally transferred or illegally utilized.";
	};
	class Harris_dyedDirtyCash: ToolKit
	{
		displayName = "Dyed Dirty Cash";
		count = 10;
		class ItemInfo
		{
			allowedSlots[] = {701,801,901};
			mass = 4;
			scope = 0;
			type = 620;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
		};
		model = "\Harris_Client\Models\model_dyedDirtyCash.p3d";
		picture = "\Harris_Client\Data\icon_dyedDirtyCash.paa";
		descriptionShort = "Illegally gained money that has been destroyed by a dye pack.";
	};
};