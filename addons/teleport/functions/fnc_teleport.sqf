#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Teleports an object to a defined destination point
 *
 * Arguments:
 * 0: Object to teleport <OBJECT>
 * 1: Marker where the object will be teleported <STRING>
 * 2: Altitude (ASL) at the destination point <NUMBER> (default: 0)
 * 3: Direction at destination point <NUMBER> (default: 0)
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call umf_teleport_fnc_teleport
 *
 * Public: No
 */

params ["_object", "_marker", ["_altitude", 0], ["_direction", 0]];

_object setPosATL [getmarkerpos _marker select 0, getmarkerpos _marker select 1, _altitude];

_object setDir _direction;
