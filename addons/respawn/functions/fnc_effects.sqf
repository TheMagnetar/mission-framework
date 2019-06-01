#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Creates a camera that rotates around the given unit. Useful when the player is killed.
 *
 * Arguments:
 * 0: Unit targeted by the camera <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call mf_respawn_effects
 *
 * Public: No
 */

params ["_target"];

// Create the effects
private _ppColor = ppEffectCreate ["colorCorrections", 1999];
_ppColor ppEffectEnable true;
_ppColor ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [0.8, 0.8, 0.8, 0.65], [1, 1, 1, 1.0]];
_ppColor ppEffectCommit 0;

private _ppGrain = ppEffectCreate ["filmGrain", 2012];
_ppGrain ppEffectEnable true;
_ppGrain ppEffectAdjust [0.1, 1, 1, 0, 1];
_ppGrain ppEffectCommit 0;

playSound "Simulation_Fatal";

sleep 0.2;

("BIS_layerEstShot" call BIS_fnc_rscLayer) cutRsc ["RscEstablishingShot", "PLAIN"];

("BIS_layerStatic" call BIS_fnc_rscLayer) cutRsc ["RscStatic", "PLAIN"];
("BIS_layerInterlacing" call BIS_fnc_rscLayer) cutRsc ["RscInterlacing", "PLAIN"];
("BIS_fnc_blackOut" call BIS_fnc_rscLayer) cutText ["","PLAIN",10e10];

GVAR(camera) = true;

// Camera set-up
private _radius = 4;
private _angle = 180;
private _altitude = 5;
private _dir = 0;
private _speed = 0.2;

private _coords = [_target, _radius, _angle] call BIS_fnc_relPos;
_coords set [2, _altitude];
private _camera = "camera" camCreate _coords;
_camera cameraEffect ["internal", "back"];
_camera camPrepareFOV 0.700;
_camera camPrepareTarget _target;
_camera camCommitPrepared 0;

while {GVAR(camera)} do {
    _coords = [_target, _radius, _angle] call BIS_fnc_relPos;
    _coords set [2, _altitude];

    _camera camPreparePos _coords;
    _camera camCommitPrepared _speed;

    waitUntil {camCommitted _camera || !(GVAR(camera))};

    _camera camPreparePos _coords;
    _camera camCommitPrepared 0;

    _angle = if (_dir == 0) then {_angle - 1} else {_angle + 1};
};

// Remove colors effects and camera
ppEffectDestroy _ppColor;
ppEffectDestroy _ppGrain;
_camera cameraEffect ["terminate", "back"];
camDestroy _camera;

// Reset layers
"BIS_layerStatic" cutText ["", "PLAIN"];
"BIS_layerEstShot" cutText ["", "PLAIN"];
"BIS_layerInterlacing" cutText ["", "PLAIN"];

// Fade into first person
call BIS_fnc_VRFadeIn;
playSound (selectRandom ["Transition1", "Transition2", "Transition3"]);
