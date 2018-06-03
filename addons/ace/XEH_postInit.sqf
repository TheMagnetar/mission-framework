#include "script_component.hpp"

[] call FUNC(preventInstaDeath);

/* From Gruppe-W mission framework. Author BlauBär */
["heal", {
    params ["_name"];
    _name = toLower _name;
    {
        if (((toLower name _x) find _name) != -1) exitWith {
            ["ace_medical_treatmentAdvanced_fullHealLocal", [_x, _x], _x] call CBA_fnc_targetEvent;
        };
    } forEach allPlayers;
}, "adminLogged"] call CBA_fnc_registerChatCommand;

