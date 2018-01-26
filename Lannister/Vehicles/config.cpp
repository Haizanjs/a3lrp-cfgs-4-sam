class CfgPatches
{
	class A3LRP_Donation_Vehicles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"LandRover","G65","GTR","Abruzzi_M5"};
		version="2018-01-24";
	};
};


class cfgVehicles 
{	
	class ALRP_Mustang;
	class MercG65;
	class NissanGTR;
	class BMW_M5;
	#include "\Lannister\Vehicles\MercG65\config.hpp"
	#include "\Lannister\Vehicles\FordMustang\config.hpp"
	#include "\Lannister\Vehicles\NissanGTR\config.hpp"
	#include "\Lannister\Vehicles\BMW_M5\config.hpp"
};