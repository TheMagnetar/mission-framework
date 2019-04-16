#include "script_component.hpp"

[{CBA_missionTime > 0}, {
    if (GVAR(createModule) && {isServer}) then {
        [] call FUNC(createModule);
    };
},[]] call CBA_fnc_waitUntilAndExecute;

[QGVAR(assignZeus), DFUNC(createModule)] call CBA_fnc_addEventHandler;

["zeus", {
    params ["_name"];

    private _players = allPlayers;
    private _pos = _players findIf {_x == _name};
    if (_pos != -1) then {
        private _player = _players select _pos;
        systemChat format ["Zeus given to %1", name _player];
        [QGVAR(assignZeus), [_player]] call CBA_fnc_serverEvent;
    };
}, "adminLogged"] call CBA_fnc_registerChatCommand;
