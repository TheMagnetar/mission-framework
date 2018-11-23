#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Finishes .
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 * 1: Item <STRING>
 *
 * Return Value:
 * Adding successfull <BOOL>
 *
 * Example:
 * [player, "ACRE_PRC77"] call umf_core_fnc_addItem
 *
 * Public: Yes
 */

if (!isServer) exitWith {};

if (GVAR(persistenceEnabled)) then {

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
