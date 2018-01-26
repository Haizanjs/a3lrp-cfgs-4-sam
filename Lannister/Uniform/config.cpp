class CfgPatches
{
	class A3LRP_Donation_Uniform
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
		version="2018-01-24";
	};
};


class UniformSlotInfo
{
    slotType = 0;
    linkProxy = "-";
};
 
class CfgVehicles
{
	class Bag_Base;
	class B_Soldier_base_F;
	class B_Competitor_F;
	class C_man_1;
	
	//--- Donation Uniform Base
	class A3LRP_Lannister_Uniform_Base: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\Lannister\Uniform\data\base.paa"};
	};
	//--- Donation Uniform Base
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class ItemInfo;
	class V_PlateCarrier1_rgr;
	class V_TacVest_khk;
	class V_PlateCarrierIA1_dgtl;
	class H_HelmetB;
	class HeadgearItem;
	class TRYK_V_Bulletproof_BL;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_Camo_Base: ItemCore
	{
	};
	class InventoryItem_Base_F;
	class VestItem: InventoryItem_Base_F
	{
	};
	
	//--- Donation Uniform Base
	class A3LRP_Lannister_Uniform_Base_Uni: Uniform_Base
	{
		scope=2;
		displayName="House Lannister Uniform (Kryptec)";
		picture="\Lannister\Uniform\data\ico\ico.paa";
		model="\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass="A3LRP_Lannister_Uniform_Base";
			containerClass="Supply50";
			mass=50;
		};
	};
	//--- Donation Uniform Base
	
};
