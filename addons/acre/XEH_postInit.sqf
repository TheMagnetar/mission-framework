#include "script_component.hpp"

if (!GVAR(acreLoaded)) exitWith {};

if (GVAR(configureChannels)) then {
    [] call FUNC(configurePresets);
};

if (!hasInterface) exitWith {};

GVAR(definedLanguages) = getMissionConfigValue [QGVAR(definedLanguages), []];

if (GVAR(configureBabel)) then {
    {
        _x call acre_api_fnc_babelAddLanguageType;
    } foreach GVAR(definedLanguages);
};

if (!alive player) exitWith {
    // Player is dead. Make sure it enters the spectator mode.
    [true] call acre_api_fnc_setSpectator;
};

private _isSideLogic = (side player) isEqualTo sideLogic;

if (!_isSideLogic) then {
    // Wait until ACRE 2 is initialised.
    [{
        CBA_missionTime > 0 && {[] call acre_api_fnc_isInitialized} && {EGVAR(gear,gearAssigned)}
    }, {
        params ["_unit"];

        // Do not redistribute radios if the previous status has been retrieved.
        if (!(_unit getVariable [QEGVAR(jip,statusRetrieved), false]) && {GVAR(distributeRadios)}) then {
            // Remove all radios.
            [_unit] call FUNC(removeRadios);

            // Add radios depending on the role.
            [DFUNC(addRadios), [_unit]] call CBA_fnc_execNextFrame;
        };
        // Configure active channels.
        if (GVAR(configureChannels)) then {
            [DFUNC(configureChannels), [_unit], 0.5] call CBA_fnc_waitAndExecute;
        };
    }, player] call CBA_fnc_waitUntilAndExecute;
};

// Configure languages
if (GVAR(configureBabel)) then {
    ["unit", {
        params ["_unit"];
        // Define languages per faction.
        [_unit] call FUNC(configureLanguages);
    }, true] call CBA_fnc_addPlayerEventHandler;
};

// Make sure that the player is not in spectator mode.
[false] call acre_api_fnc_setSpectator;

GVAR(radiosConfigured) = true;
LOG("Radios configured");
