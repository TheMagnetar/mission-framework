/*
 * InitPlayerServer.sqf is called once at mission start or when a player connects during a mission.
 * All scripts here placed run only on the seerver. Scripts that should not be
 * run when the headless client connect should be placed after the filter.
 * variable
 */
 
params ["_player", "_didJip"];

// Filter: Do not execute if it is a headless client
if (isNull _player) exitWith{};
