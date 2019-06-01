/*
 * This scripts is called automatically by the framework if all the players are dead and without
 * chances of respawning and through the '#endMission' chat command. This file can be freely
 * modified with custom conditions in order to select one of the endings once the mission finishes.
 * A default end once all players are dead is included but it is not mandatory.
 */

// If all players are dead and none of the objectives were completed, the mission was a total disaster.
if (allPlayers findIf {_x getVariable ["mf_respawn_playerAlive", true]} == -1) then {
    ["Disaster", false] spawn BIS_fnc_endMission;
};
