#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Finishes the mission globally.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call mf_missionFlow_fnc_endMissionServer
 *
 * Public: No
 */

if (!isServer) exitWith {};

if (EGVAR(persistence,persistenceEnabled)) then {

    if (GVAR(isLastMission)) then {
        [] call FUNC(deleteCampaign);
        [] execVM "missionConfig\endMission.sqf";
    } else {
        [] call EFUNC(persistence,saveOjectStatus);
        [] call EFUNC(persistence,copyMissionStatus);

        {
            EGVAR(persistence,playerStatusSaved) pushBack [getPlayerUID _x, false];
            [QEGVAR(persistence,clientSaveStatus), [],_forEachIndex] call CBA_fnc_targetEvent;
        } forEach ([] call CBA_fnc_players);

        [{EGVAR(persistence,playerStatusSaved) findIf {!(_x select 1)} == -1}, {
            [] execVM "missionConfig\endMission.sqf";
        }, [], 5] call CBA_fnc_waitUntilAndExecute;
    };
} else {
    [] execVM "missionConfig\endMission.sqf";
};
