/*
 * Author: TheMagnetar
 * Teleports a JIP unit to the highest ranking in the squad, faction or side. If the highest ranking unit is
 * inside a vehicle, and there is a free position, the unit will be teleported inside the vehicle.
 *
 * Arguments:
 * 0: Display EventHandler <ARRAY>
 * 1: Unit to teleport <OBJECT>
 *
 * Return Value:
 * Teleport successful <BOOL>
 *
 * Example:
 * [87, player] call umf_briefing_fnc_credits
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_displayEvent", "_unit"];

private _canTeleport = _unit getVariable [QGVAR(teleportEnabled), false];
private _couldTeleport = false;

if (_canTeleport && {_displayEvent select 1 == 87}) then {
    // Try first, teleporting to the other members of the squad.
    private _playerList = units (group _unit);
    _playerList deleteAt (_playerList find _unit);

    private _unitList = _playerList select {isPlayer _x};
    _couldTeleport = [_unit, _unitList] call EFUNC(teleport,teleportToFriendly);

    private _unitList = [];
    if (!_couldTeleport) then {
        // If not, try with any unit of the same faction.
        // Identify which faction the unit belongs to.
        private _unitFaction = _unit getVariable [QEGVAR(gear,faction), toLower (faction _unit)];

        _playerList = [] call CBA_fnc_players;
        _playerList deleteAt (_unitList find _unit);

        {
            private _remoteFaction = _x getVariable [QEGVAR(gear,faction), toLower (faction _x)];

            if (_remoteFaction isEqualTo _unitFaction) then { _unitList pushBack _x; };
        } forEach _playerList;

        _couldTeleport = [_unit, _unitList] call EFUNC(teleport,teleportToFriendly);
    };

    // If not, try with any unit of the same side.
    if (!_couldTeleport) then {
        private _unitSide = side _unit;
        _unitList = _playerList select {side _x == _unitSide};

        _couldTeleport = [_unit, _unitList] call EFUNC(teleport,teleportToFriendly);
    };

    // Delete the KeyDown displayEventHandler if the teleport was successfull.
    if (_couldTeleport) then {
        _unit setVariable [QGVAR(teleportEnabled), false];
    } else {
        "normal" cutText ["It was not possible to teleport. Everybody is dead and/or all vehicles are occupied! Try again later.", "PLAIN"];
    };
};

_couldTeleport

//============================================= END OF FILE =============================================//
