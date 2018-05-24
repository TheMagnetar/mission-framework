class CfgUmfConfig {
    templateVersion = "v0.1 (2016-05-24).";
    author = "TheMagnetar";
}

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
// BIS Debug Console: https://community.bistudio.com/wiki/Description.ext#enableDebugConsole             //
//=======================================================================================================//
enableDebugConsole = 1;  // Enabled for SP and MP administrators.

//=======================================================================================================//
// Configuration of several mission parameters.                                                          //
//=======================================================================================================//
showGPS     = 1;             // Shows (1) or hides (0) the GPS receiver on the map screen.
showCompass = 1;             // Shows (1) or hides (0) the compass on the map screen.
showMap     = 1;             // Shows (1) or hides (0) map after the mission starts.
showWatch   = 1;             // Shows (1) or hides (0) the watch on the map screen.
showUAVFeed = 0;             // Shows (1) or hides (0) the UAV feed.
forceRotorLibSimulation = 1; // Force enable or disable RotorLib: 0 = client options based,
                             // 1 = force enable, 2 = force disable.
//disableChannels[]={0,1,2,3,4,5,6}; // Disable channels. MOTD and admin say have exception and will show in global.
                                   // 0 = global, 1 = Side, 2 = Command, 3 = Group, 4 = Vehicle, 5 = Direct,
                                   // 6 = System.

// Mission defined loadouts and factions
class CfgLoadouts {
    #include "missionConfig/CfgLoadouts.hpp"
};

// ACRE Networks
class CfgAcreNetworks {
    #include "missionConfig/CfgAcreNetworks.hpp"
};
