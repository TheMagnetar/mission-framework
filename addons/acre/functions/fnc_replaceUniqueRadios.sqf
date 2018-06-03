/*
 * Author: Jonpas (Thesseus Aegis). Adapted by TheMagnetar.
 * Replaces all unique items in a unit loadout with a base radio.
 *
 * Arguments:
 * 0: Loadout formatted according to getUnitLoadout command <ARRAY> (default: [])
 *
 * Return Value:
 * Loadout without unique radio IDs <ARRAY>
 *
 * Example:
 * [player getUnitLoadout] call umf_acre_fnc_replaceUniqueRadios
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_loadout"];

// Thesseus Aegis. Credits to jonpas
if ((_loadout # 9) # 2 == "ItemRadioAcreFlagged") then {
    (_loadout # 9) set [2, ""];
};

private _replaceRadioAcre = {
    params ["_item"];

    // Replace only if string (array can be eg. weapon inside container) and an ACRE radio
    if (!(_item isEqualType []) && {[_item] call acre_api_fnc_isRadio}) then {
        _this set [0, [_item] call acre_api_fnc_getBaseRadio];
    };
};

    if !((_loadout # 3) isEqualTo []) then {
        {_x call _replaceRadioAcre} forEach ((_loadout # 3) # 1); // Uniform items
    };
    if !((_loadout # 4) isEqualTo []) then {
        {_x call _replaceRadioAcre} forEach ((_loadout # 4) # 1); // Vest items
    };
    if !((_loadout # 5) isEqualTo []) then {
        {_x call _replaceRadioAcre} forEach ((_loadout # 5) # 1); // Backpack items
    };

_loadout
