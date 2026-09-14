class CfgPatches
{
    class insignia_addon
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
        version = "3.0.1";
        author = "Saltyshowmn & Jabo";
        authorUrl = "";
    };

    class crosswind_flags_addon
    {
        units[] = {
            "CROSSWIND_FLAG",
            "WESTWIND_FLAG",
            "CRUCIBLE_FLAG",
            "TFR_FLAG",
            "STAG_FLAG",
            "JEG73_FLAG",
            "JTF_FLAG"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
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
    class FlagPole_F;

    class CROSSWIND_FLAG: FlagPole_F
    {
        author = "Saltyshowmn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Crosswind)";
        editorCategory = "EdCat_Signs";
        editorSubcategory = "EdSubcat_Flags";

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture '\insignia_addon\icon\crosswindflag.paa'";
        };
    };

    class WESTWIND_FLAG: FlagPole_F
    {
        author = "Saltyshowmn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (WESTWIND)";
        editorCategory = "EdCat_Signs";
        editorSubcategory = "EdSubcat_Flags";

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture '\insignia_addon\icon\westwindflag.paa'";
        };
    };

    class CRUCIBLE_FLAG: FlagPole_F
    {
        author = "Saltyshowmn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (The Crucible)";
        editorCategory = "EdCat_Signs";
        editorSubcategory = "EdSubcat_Flags";

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture '\insignia_addon\icon\crucibleflag.paa'";
        };
    };

    class TFR_FLAG: FlagPole_F
    {
        author = "Saltyshowmn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Task Force Razor)";
        editorCategory = "EdCat_Signs";
        editorSubcategory = "EdSubcat_Flags";

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture '\insignia_addon\icon\razorflag.paa'";
        };
    };

    class STAG_FLAG: FlagPole_F
    {
        author = "Saltyshowmn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (14th STAG)";
        editorCategory = "EdCat_Signs";
        editorSubcategory = "EdSubcat_Flags";

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture '\insignia_addon\icon\stagflag.paa'";
        };
    };

    class JEG73_FLAG: FlagPole_F
    {
        author = "Saltyshowmn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (73rd JEG)";
        editorCategory = "EdCat_Signs";
        editorSubcategory = "EdSubcat_Flags";

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture '\insignia_addon\icon\73rd_jeg_flag.paa'";
        };
    };

    class JTF_FLAG: FlagPole_F
    {
        author = "Saltyshowmn";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (JTF)";
        editorCategory = "EdCat_Signs";
        editorSubcategory = "EdSubcat_Flags";

        class EventHandlers
        {
            init = "(_this select 0) setFlagTexture '\insignia_addon\icon\jtf_flag.paa'";
        };
    };
};

class CfgMarkerClasses
{
    class Saltys_AIO_Markers
    {
        displayName = "Salty's AIO Markers";
    };
};

class CfgMarkers
{
    class flag_Altis;

    class Saltys_Crosswind_Marker: flag_Altis
    {
        scope = 2;
        name = "Crosswind";
        icon = "\insignia_addon\icon\crosswind_marker_ca.paa";
        texture = "\insignia_addon\icon\crosswind_marker_ca.paa";
        markerClass = "Saltys_AIO_Markers";
    };

    class Saltys_Westwind_Marker: flag_Altis
    {
        scope = 2;
        name = "Westwind";
        icon = "\insignia_addon\icon\westwind_marker_ca.paa";
        texture = "\insignia_addon\icon\westwind_marker_ca.paa";
        markerClass = "Saltys_AIO_Markers";
    };

    class Saltys_Crucible_Marker: flag_Altis
    {
        scope = 2;
        name = "The Crucible";
        icon = "\insignia_addon\icon\crucible_marker_ca.paa";
        texture = "\insignia_addon\icon\crucible_marker_ca.paa";
        markerClass = "Saltys_AIO_Markers";
    };

    class Saltys_Razor_Marker: flag_Altis
    {
        scope = 2;
        name = "Task Force Razor";
        icon = "\insignia_addon\icon\razor_marker_ca.paa";
        texture = "\insignia_addon\icon\razor_marker_ca.paa";
        markerClass = "Saltys_AIO_Markers";
    };

    class Saltys_STAG_Marker: flag_Altis
    {
        scope = 2;
        name = "S.T.A.G.";
        icon = "\insignia_addon\icon\stag_marker_ca.paa";
        texture = "\insignia_addon\icon\stag_marker_ca.paa";
        markerClass = "Saltys_AIO_Markers";
    };

    class Saltys_73rd_JEG_Marker: flag_Altis
    {
        scope = 2;
        name = "73rd JEG";
        icon = "\insignia_addon\icon\73rd_jeg_marker_ca.paa";
        texture = "\insignia_addon\icon\73rd_jeg_marker_ca.paa";
        markerClass = "Saltys_AIO_Markers";
    };

    class Saltys_JTF_Marker: flag_Altis
    {
        scope = 2;
        name = "JTF";
        icon = "\insignia_addon\icon\jtf_marker_ca.paa";
        texture = "\insignia_addon\icon\jtf_marker_ca.paa";
        markerClass = "Saltys_AIO_Markers";
    };
};
