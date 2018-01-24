class CfgPatches
{
	class A3LRP_Donation_Vests
	{
		units[]={};
		weapons[]={"A3LRP_Donation_Vest_Test"};
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
	class Vest_Camo_Base: ItemCore {};
	class InventoryItem_Base_F;
	class VestItem: InventoryItem_Base_F {};
	
	
	
	//--- Base Class -- Start
	class A3LRP_Donation_Vest_Base: V_PlateCarrier1_rgr
	{
		picture="\A3LRP_Donation\Vests\data\ico\ico.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		author="A3LRP Development Team";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply100";
			mass=40;
			armor=100;
			passThrough=0.5;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	//--- Base Class -- End
	
	
	//--- Test Classes - Start
	#include "\A3LRP_Donation\Vests\test.hpp"
	//--- Test Classes - End
	
};
