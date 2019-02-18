#include "script_component.hpp"

/*
 * Improves sling-loading performance by changing locality of the sling-loaded object to the pilot's machine.
 * Authors: [ARK](http://www.ark-group.org), [Jonpas](http://github.com/jonpas)
 */

// Switch cargo locality to helicopter if possible
["Helicopter", "init", {
    params ["_heli"];

    _heli addEventHandler ["RopeAttach", {
        params ["_heli", "", "_cargo"];

        // Only transfer if cargo empty to avoid RPT warnings from 'setOwner'
        // Transfer actually works in all cases except if driver is present,
        // but "Script command setOwner cannot be used for object 'B_MRAP_01_F'.
        // Use setGroupOwner instead." is printed in RPT either way (BI T136908)
        if ((fullCrew _cargo) isEqualTo []) then {
            private _heliOwner = owner _heli;
            if (_heliOwner != owner _cargo) then {
                _cargo setOwner _heliOwner;
            };
        };
    }];
}, true, [], true] call CBA_fnc_addClassEventHandler;
