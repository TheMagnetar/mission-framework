#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Does some tasks on the client before finishing the mission .
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 * 1: Item <STRING>
 *
 * Return Value:
 * Adding successfull <BOOL>
 *
 * Example:
 * [player, "ACRE_PRC77"] call umf_core_fnc_addItem
 *
 * Public: Yes
 */

private _profileInformation = profileNamespace getVariable [QGVAR(persistence), objNull];
private _informationList = _profileInformation getVariable [GVAR(campaignName), []];

private _information = [_informationList, "objects"] call CBA_fnc_hashGet;
_information append ([_informationList, "vehicles"] call CBA_fnc_hashGet);

{
    params ["_class", "_pos", "_items", "_vehicleInfo"];
    private _vehicle = _class createVehicle [0, 0, 0];
    _vehicle setPosASL _pos;

    {
        if (_x isEqualType "") then {
            if ([_x] call acre_api_fnc_isRadio) then {
                _x = [_x] call acre_api_fnc_getBaseRadio;
            };
            _vehicle addItemCargoGlobal _x;
        } else {
            _x params ["_container", "_itemsContainer"];
            _vehicle addItemCargoGlobal _container;
            private _containerObject = (everyContainer _vehicle) apply {_x select 1};
            _containerObject = _containerObject select (count _containerObject - 1);
            {
                if ([_x] call acre_api_fnc_isRadio) then {
                    _x = [_x] call acre_api_fnc_getBaseRadio;
                };

                _containerObject addItemCargoGlobal _x;
            } forEach _itemsContainer;
        };
    } forEach _items;

    _vehicleInfo params ["_crew", "_damage"];
    if !(_damage isEqualTo []) then {
        private _players = [] call CBA_fnc_players;
        private _playerUIDs = _players apply {getPlayerUID _x};
        {
            _x params ["_name", "_role", "_cargoIndex", "_turretPath"];

            private _index = _playerUIDs find _name;
            if (index != -1) then {
                private _unit = _players select _index;
                switch (_role) do {
                    case "driver": {_unit assignAsDriver _vehicle; _unit moveInDriver _vehicle;};
                    case "commander": {_unit assignAsCommander _vehicle, _unit moveInCommander _vehicle;};
                    case "gunner": {_unit assignAsGunner _vehicle; _unit moveInGunner _vehicle;};
                    case "cargo": {_unit assignAsCargoIndex [_vehicle, _cargoIndex]; _unit moveInCargo [_vehicle, _cargoIndex];};
                    case "turret": {_unit assignAsTurret [_vehicle, _turretPath]; _unit moveInTurret [_vehicle, _turretPath];};
                };
            };
        } forEach _crew;

        _damage params ["_hitPointNames", "", "_hitPointDamages"];
        {
            _vehicle setHitPointDamage [_x, _hitPointDamages select _forEachIndex];
        } forEach _hitPointNames;
    };

} forEach _information;
