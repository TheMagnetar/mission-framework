#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Handles on player respawn event.
 *
 * Arguments:
 * 0: Unit respawning <OBJECT> (default: objNull)
 * 1: Old unit that was killed <OBJECT> (not used)
 * 2: Respawn type <NUMBER> (not used)
 * 3: Number of seconds until respawn <NUMBER> (not used)
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] spawn umf_respawn_onPlayerRespawn
 *
 * Public: No
 */

// Parameters passed when onPlayerRespawn.
params [["_unit", objNull]];

// Hide custom respawn counter and terminate camera.
[false] call FUNC(respawnCounter);
GVAR(camera) = false;

[_unit] call FUNC(exitSpectator);
private _couldRespawn = [_unit] call FUNC(moveToMarker);

if (!_couldRespawn) exitWith {};

// Assign equipment before death or default one depending on the role
if (GVAR(saveGear)) then {
    private _savedLoadout = _unit getVariable [QGVAR(savedLoadout), []];
    if (EGVAR(acre,loaded)) then {
        _savedLoadout =+ [_savedLoadout] call EFUNC(acre,replaceUniqueRadios);
    };
    _unit setUnitLoadout _savedLoadout;
    if (EGVAR(ace,loaded)) then {
        _unit setVariable ["ACE_hasEarPlugsin", _unit getVariable [QGVAR(hasEarPlugs), false]];
        _unit setVariable [QGVAR(hasEarPlugs), nil];
    };

    // Configure active channels.
    if (EGVAR(acre,loaded) && {EGVAR(acre,configureChannels)}) then {
        [DEFUNC(acre,configureChannels), [_unit], 0.5] call CBA_fnc_waitAndExecute;
    };
} else {
    private _role = _unit getVariable [QEGVAR(gear,role), ""];
    private _faction = _unit getVariable [QEGVAR(gear,faction), ""];
    [_unit, _role, _faction] call EFUNC(gear,assignGear);

    // Remove and distribute ACRE 2 radios.
    if (EGVAR(acre,loaded)) then {
        // Distribute radios
        if (EGVAR(acre,distributeRadios)) then {
            // Remove radios
            [_unit] call EFUNC(acre,removeRadios);

            [DEFUNC(acre,addRadios), [_unit]] call CBA_fnc_execNextFrame;
        };

        // Configure active channels.
        if (EGVAR(acre,configureChannels)) then {
            [DEFUNC(acre,configureChannels), [_unit], 0.5] call CBA_fnc_waitAndExecute;
        };
    };
};
