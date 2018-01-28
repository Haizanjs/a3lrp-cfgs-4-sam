class CfgPatches
{
	class A3LRP_Donation_Vests
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
		picture="\Lannister\Vests\data\ico\ico.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		author="A3LRP Development Team";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=1;
			class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 24;
                    passThrough = 0.001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 24;
                    passThrough = 0.001;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 24;
                    passThrough = 0.001;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 24;
                    passThrough = 0.001;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 24;
                    passThrough = 0.001;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 24;
                    passThrough = 0.001;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 24;
                    passThrough = 0.001;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 24;
                    passThrough = 0.001;
                };
            };
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	//--- Base Class -- End
	
	
	//--- Vests Donation - Start
	#include "\Lannister\Vests\Donation_Vests.hpp"
	//--- Vests Donation - End
	
};
