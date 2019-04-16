#include "script_component.hpp"

if (!GVAR(loaded)) exitWith {};

["heal", {
    params ["_name"];

    private _players = allPlayers;
    private _pos = _players findIf {_x == _name};
    if (_pos != -1) then {
        private _player = _players select _pos;
        ["ace_medical_treatment_fnc_treatmentFullHealLocal", [_player, _player], _player] call CBA_fnc_targetEvent;
    };
}, "adminLogged"] call CBA_fnc_registerChatCommand;
