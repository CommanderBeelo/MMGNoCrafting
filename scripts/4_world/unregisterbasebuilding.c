modded class PluginRecipesManager 
{
     override void RegisterRecipies()
    {
        super.RegisterRecipies();
        UnregisterRecipe("craft_mmg_crate03_unfinished_wood");
        UnregisterRecipe("craft_mmg_crate03_wood");
        UnregisterRecipe("craft_mmg_crate03_grey");
        UnregitserRecipe("craft_mmg_gun_wall_kit_wooden");
        UnregisterRecipe("craft_mmg_gun_wall_kit_metal");
        UnregisterRecipe("craft_mmg_gun_rack_planks");
        UnregisterRecipe("craft_mmg_craftable_gun_rack");
        UnregisterRecipe("craft_mmg_craftable_tent_kit");
        UnregisterRecipe("craft_mmg_old_table");
        UnregisterRecipe("craft_mmg_wall_shelf);");
    }            
}