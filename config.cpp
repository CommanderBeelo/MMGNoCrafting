class CfgPatches
{
	class MMGNoCrafting
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.25;
		requiredAddons[]=
		{
			"DZ_Data",
			"mmg_storage"
		};
	};
};
class CfgMods
{
	class MMGNoCrafting
	{
		dir="MMGNoCrafting";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MMG No Crafting";
		credits="Mighty";
		author="Commander Beelo";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MMGNoCrafting/scripts/4_world"
				};
			};
		};
	};
};
