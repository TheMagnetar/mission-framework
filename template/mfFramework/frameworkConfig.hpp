class CfgUmfConfig {
    templateVersion = "v0.3";
    authors = "TheMagnetar";
};

//=======================================================================================================//
// Respawn Settings: https://community.bistudio.com/wiki/Arma_3_Respawn                                  //
//=======================================================================================================//
respawn        = "BASE";  // Respawn type BASE. Recommended. Allows JIP and the number of respawns
                          // can be limited in "bmt_config_numAllowedRespawns" side wise or player wise.
RespawnDialog  = 0;       // Show (1) or hide (0) the scoreboard and respawn countdown timer for a
                          // player if he is killed with "respawnType = 3" (BASE).
respawnOnStart = -1;      // 1: Respawn on start. Run respawn script on start. Available only for
                          //    INSTANT and BASE respawn types.
                          // 0: Don't respawn on start. Run respawn script on start. Available only for
                          //    INSTANT and BASE respawn types.
                          // -1: Don't respawn on start. Don't run respawn script on start.
joinUnassigned = 1;       // Auto assign player (0) a free playable slot. Let player decide (1).
disabledAI     = 1;       // Hide playable units without an assigned player.
aiKills        = 0;       // Show (1) or hide (0) AI score.

//respawnTemplates[]          = {};
//respawnTemplatesWest[]      = {};
//respawnTemplatesEast[]      = {};
//respawnTemplatesCiv[]       = {};
//respawnTemplatesVirtual[]   = {}; // Virtual Players.

class CfgRespawnTemplates {

};

//=======================================================================================================//
// CBA Target Debug Console: https://github.com/CBATeam/CBA_A3/wiki/Target-Debugging                     //
// Debug console is handled by the addon itself.                                                         //
// https://community.bistudio.com/wiki/Mission_Editor:_Debug_Console_(Arma_3)#Mod_support                //
//=======================================================================================================//
enableTargetDebug = 1;  // Enabled for SP and MP administrators.

//=======================================================================================================//
// Configuration of several mission parameters.                                                          //
//=======================================================================================================//
showGPS                 = 1; // Shows (1) or hides (0) the GPS receiver on the map screen.
showCompass             = 1; // Shows (1) or hides (0) the compass on the map screen.
showMap                 = 1; // Shows (1) or hides (0) map after the mission starts.
showWatch               = 1; // Shows (1) or hides (0) the watch on the map screen.
showUAVFeed             = 0; // Shows (1) or hides (0) the UAV feed.
forceRotorLibSimulation = 1; // Force enable or disable RotorLib: 0 = client options based,
                             // 1 = force enable, 2 = force disable.

saving = 0;             // Disable saving
disableChannels[] = {
    {0, false, false},  // Global (always enabled for admin by definition)
    {1, false, false},  // Side
    {2, false, false},  // Command
    {3, false, false},  // Group (always enabled by definition)
    {4, false, false},  // Vehicle
    {5, false, false},  // Direct
    {6, false, false}   // System
};

#include "script_component.hpp"

// Mission defined loadouts and factions
class CfgLoadouts {
    #include "..\missionConfig\CfgLoadouts.hpp"
};

// ACRE Networks
class CfgAcreNetworks {
    #include "..\missionConfig\CfgAcreNetworks.hpp"
};

// MAI group compositions
class CfgGroupCompositions {
    #include "..\missionConfig\mai\CfgGroupCompositions.hpp"
};
