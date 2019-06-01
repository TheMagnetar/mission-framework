/*
 * InitPlayerLocal.sqf is called once at mission start or when a player connects during a mission.
 * All scripts here placed run only on the machine local to the player. Scripts that should not be
 * run on headless client or JIP units can make use of the hasInterface or _didJip variable
 */

params ["_player", "_didJip"];

// Execute briefing only on player machines.
if (hasInterface) then {
    #include "missionConfig\briefing\mf_briefing.sqf"
};
