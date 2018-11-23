#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Retrieves player variables that are important for persistence.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: objNull)
 * 1: Variables to store <ARRAY> (default: ["umf", "ace"])
 * 2: Variables to exclude <ARRAY> (default: [QGVAR(teleportEnabled)])
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_acre_fnc_getPlayerVariables
 *
 * Public: No
 */

params ["_unit", ["_jip", false]];

private _informationList = if (_jip) then {
     missionNamespace getVariable [QGVAR(persistence), []];
} else {
    private _profileInformation = profileNamespace getVariable [QGVAR(persistence), objNull];
    _profileInformation getVariable [GVAR(campaignName), []];
};

if (_informationList isEqualTo []) exitWith {
    WARNING("Persistence information variable %1 is not defined",QQGVAR(persistence));
};

private _playerInformation = [_informationList, "player"] call CBA_fnc_hashGet;

private _found = false;
{
    if ((_x select 0 == getPlayerUID _unit) && {_x select 1 == profileName}) exitWith {
        [_unit, _x select 3] call FUNC(applyPlayerVariables);
        if (_unit getVariable [QEGVAR(respawn,playerAlive), true]) then {
            private _loadout = _x select 3;

            if (EGVAR(core,acreLoaded)) then {
                _loadout =+ [_loadout] call EFUNC(acre,replaceUniqueRadios);
            };

            _unit setUnitLoadout [_loadout, false];
        } else {
            _unit setDamage 1;

            [{
                "normal" cutText ["You were dead when you disconnected. Therefore, you are dead when reconnecting!", "PLAIN"];
            }, [_unit], 5] call CBA_fnc_waitAndExecute;
        };
        _found =  true;
    };
} forEach _playerInformation;

if (!_found) then {
    WARNING("Could not find your previous gear!!");
} else {
    LOG_2("Gear of player %1 with UID %2 retrieved.",profileName,getPlayerUID _unit);
};
