/*
 * Author: TheMagnetar
 * Adds the credits entry to the briefing.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_briefing_fnc_credits
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_unit"];

private _missionName = getText (missionConfigFile >> "onLoadName");
private _missionVersion = getText (missionConfigFile >> "CfgMission" >> "missionVersion");
private _authors = getText (missionConfigFile >> "author");
private _community = getText (missionConfigFile >> "CfgMission" >> "community");
private _collaborators = getText (missionConfigFile >> "CfgMission" >> "missionCollaborators");
private _templateVersion = getText (missionConfigFile >> "CfgUmfConfig" >> "templateVersion");
private _templateAuthors = getText (missionConfigFile >> "CfgUmfConfig" >> "authors");

private _creditsText = format ["
<font color='#FF0000' size='18'>%1 %2</font>
<br/><br/>
Mission created by <font color='#00FFFF'>%3</font> for the community <font color='#00FFFF'>%4</font>.
<br/>
With the collaboration of %5.
<br/><br/>
UST101 Mission Framework %6 By %7", _missionName, _missionVersion, _authors, _community, _collaborators, _templateVersion, _templateAuthors];

_unit createDiaryRecord ["diary", ["Credits", _creditsText]];
