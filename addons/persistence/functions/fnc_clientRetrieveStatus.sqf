#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Retrieves player variables that are important for persistence.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: objNull)
 * 1: Is JIP <BOOL> (default: false)
 * 2: Variables to exclude <ARRAY> (default: [QGVAR(teleportEnabled)])
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call mf_persistence_fnc_clientRetrieveStatus
 *
 * Public: No
 */

params ["_unit", ["_jip", false], ["_informationList", []]];

if (!_jip) then {
    private _profileInformation = profileNamespace getVariable [QGVAR(persistence), objNull];
    _informationList = _profileInformation getVariable [GVAR(campaignName), []];
};

if (_informationList isEqualTo []) exitWith {
    WARNING("Persistence information variable %1 is not defined",QQGVAR(persistence));
};

private _playerInformation = [_informationList, "player"] call CBA_fnc_hashGet;

private _found = false;
{
    _x params ["_uid", "_name", "_position", "_variables", "_loadout"];
    if ((_uid == getPlayerUID _unit) && {_name == profileName}) exitWith {
        [_unit, _variables] call FUNC(applyPlayerVariables);
        if (_unit getVariable [QEGVAR(respawn,playerAlive), true]) then {
            if (!_jip) then {
                _unit setPosASL _position;
            };

            if (EGVAR(acre,loaded)) then {
                _loadout = [_loadout] call EFUNC(acre,replaceUniqueRadios);
            };

            _unit setUnitLoadout [_loadout, false];
        } else {
            _unit setDamage 1;

            [{
                "normal" cutText [localize LSTRING(deadWhenReconnecting), "PLAIN"];
            }, [_unit], 5] call CBA_fnc_waitAndExecute;
        };
        _found = true;
    };
} forEach _playerInformation;

if (!_found) then {
    WARNING("Could not find your previous gear!!");
} else {
    LOG_2("Gear of player %1 with UID %2 retrieved.",profileName,getPlayerUID _unit);
};
