class CfgPatches
{
    class insignia_addon
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
        version = "3.0.1";
        author[] = {"Saltyshowmn & Jabo"};
        authorUrl = "";
    };
    class crosswind_flags_addon
    {
        units[] = {
            "CROSSWIND_FLAG", // Defined under CfgVehicles, has to use these names here.
            "WESTWIND_FLAG",
            "CRUCIBLE_FLAG",
            "TFR_FLAG",
            "STAG_FLAG"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Structures_F_Mil_Flagpoles"};
    };
};

class CfgUnitInsignia
{
    class JTFlogo
    {
        displayName = "JTF Patch";
        author = "Saltyshowmn";
        texture = "\insignia_addon\icon\JTF_Patch.paa";
        textureVehicle = "";
    };

    class TFR_logo
    {
        displayName = "Task Force Razor";
        author = "Saltyshowmn";
        texture = "\insignia_addon\icon\Task_Force_Razor.paa";
        textureVehicle = "";
    };

    class Crucible_logo
    {
        displayName = "The Crucible";
        author = "Saltyshowmn";
        texture = "\insignia_addon\icon\Crucible_Patch.paa";
        textureVehicle = "";
    };

    class Ironclads_73rd
    {
        displayName = "73rd Ironclads";
        author = "Saltyshowmn";
        texture = "\insignia_addon\icon\73rd_Ironclads.paa";
        textureVehicle = "";
    };


    class STAG_logo
    {
        displayName = "S.T.A.G.";
        author = "Saltyshowmn";
        texture = "\insignia_addon\icon\STAG.paa";
        textureVehicle = "";
    };

    class Westwind_logo
    {
        displayName = "Westwind";
        author = "Saltyshowmn";
        texture = "\insignia_addon\icon\Westwind.paa";
        textureVehicle = "";
    };

    class Crosswind_logo
    {
        displayName = "Crosswind";
        author = "Saltyshowmn";
        texture = "\insignia_addon\icon\Crosswind.paa";
        textureVehicle = "";
    };

};
class CfgVehicles
{
    class FlagPole_F; // Base game flagpole

    // First custom flag
    class CROSSWIND_FLAG: FlagPole_F
    {
        author = "Jabo";
        scope = 2; // 2 makes it available in the Eden Editor
        scopeCurator = 2; // 2 makes it available in Zeus
        displayName = "CROSSWIND Flag";
        hiddenSelectionsTextures[] = 
        {
            "\insignia_addon\icon\crosswindflag.paa" // Path to your .paa texture
        };
    };

    // Second custom flag
    class WESTWIND_FLAG: FlagPole_F
    {
        author = "Jabo";
        scope = 2; // 2 makes it available in the Eden Editor
        scopeCurator = 2; // 2 makes it available in Zeus
        displayName = "WESTWIND Flag";
        hiddenSelectionsTextures[] = 
        {
            "\insignia_addon\icon\westwindflag.paa" // Path to your .paa texture
        };
    };
    class CRUCIBLE_FLAG: FlagPole_F
    {
        author = "Jabo";
        scope = 2; // 2 makes it available in the Eden Editor
        scopeCurator = 2; // 2 makes it available in Zeus
        displayName = "The Crucible Flag";
        hiddenSelectionsTextures[] = 
        {
            "\insignia_addon\icon\crucibleflag.paa" // Path to your .paa texture
        };
    };
    class TFR_FLAG: FlagPole_F
    {
        author = "Jabo";
        scope = 2; // 2 makes it available in the Eden Editor
        scopeCurator = 2; // 2 makes it available in Zeus
        displayName = "TFR Flag";
        hiddenSelectionsTextures[] = 
        {
            "\insignia_addon\icon\razorflag.paa" // Path to your .paa texture
        };
    };
    class STAG_FLAG: FlagPole_F
    {
        author = "Jabo";
        scope = 2; // 2 makes it available in the Eden Editor
        scopeCurator = 2; // 2 makes it available in Zeus
        displayName = "14th STAG Flag";
        hiddenSelectionsTextures[] = 
        {
            "\insignia_addon\icon\stagflag.paa" // Path to your .paa texture
        };
    };
};