//=======================================================================================================//
// File: bmt_intro.sqf                                                                                   //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/04/03                                                                             //
// Description: This document is used in order to display an introduction screen in which the mission    //
//              name, date and location are shown.                                                       //
//                                                                                                       //
//              Note: the _uavMarkerType variable is the sixth parameter of the function                 //
//              BIS_fnc_establishingShot (https://community.bistudio.com/wiki/BIS_fnc_establishingShot). //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//

if (!hasInterface || !alive player) exitWith {};

// Type of introduction: "blackScreen", "uavFeed" and "playerCamera"
private _introType = "playerCamera";

private _quotes = [
    "Whoever said the pen is mightier than the sword obviously never encountered automatic weapons.\nDouglas MacArthur.",
    "Soldiers Live. And wonder why.\nGlen Cook.",
    "People sleep peaceably in their beds at night only because rough men stand ready to do violence on their behalf.\nGeorge Orwell.",
    "Theirs not to reason why, Theirs but to do and die.\nAlfred Tennyson",
    "I'm fed up to the ears with old men dreaming up wars for young men to die in.\nGeorge S. McGovern",
    "War does not determine who is right - only who is left.\nBertrand Russell",
    "The two most powerful warriors are patience and time.\nLeo Tolstoy"
];

private _missionName = getText (missionConfigFile >> "onLoadName");
private _introText = selectRandom _quotes;
private _vehicleName = format ["%1: %2", groupID (group player), name player];
private _dateAndTime = "default";  // Date and time will be taken from mission configuration. This is only useful
                                   // for Vietnam or WWII missions.
private _animationList = [];

private _unitFaction = "";

// Identify which faction the unit belongs to.
if (side player isEqualTo sideLogic) then {
    _unitFaction = "logic";
} else {
    _unitFaction = player getVariable ["umf_gear_faction", toLower (faction player)];

    // Use leader faction if unit's faction is different.
    private _factionLeader = (leader group player) getVariable ["umf_gear_faction", toLower (faction (leader group player))];

    if !(_unitFaction isEqualTo _factionLeader) then {
        _unitFaction = _factionLeader;
    };
};

// All factions are initially recognised
private _recognised = true;
private _missionLocation = "Location";
private _uavMarker = "marker"; private _uavMarkerType = [];

switch (_unitFaction) do {
    //====================================================================================================//
    // Vanila factions.                                                                                   //
    //====================================================================================================//

    // Introduction for BLUFOR faction.
    case "blu_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for CTRG faction (APEX).
    case "blu_ctrg_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for GENDARMERIE faction (APEX).
    case "blu_gen_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for BLUFOR Pacific faction (APEX).
    case "blu_t_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for FIA faction.
    case "blu_g_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for FIA faction.
    case "ind_g_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };
    // Introduction for FIA faction.
    case "opf_g_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for the Independent faction.
    case "ind_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for the Syndikat faction.
    case "ind_c_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for the Civillian faction.
    case "civ_f": {
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for OPFOR faction.
    case "opf_f":{
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Introduction for OPFOR Pacific faction (APEX).
    case "opf_t_f":{
        _missionLocation = "Location";
        _uavMarker = "marker"; _uavMarkerType = [];
    };

    //====================================================================================================//
    // RHS factions.                                                                                      //
    //====================================================================================================//

    // RHS: USAF "United States Army" (OCP) faction.
    case "rhs_faction_usarmy_d": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    // RHS: USAF "United States Army" (UCP) faction.
    case "rhs_faction_usarmy_wd": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    // RHS: USAF "United States Marine Corps" (D) faction.
    case "rhs_faction_usmc_d": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    // RHS: USAF "United States Marine Corps" (WD) faction.
    case "rhs_faction_usmc_wd": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    // RHS: USAF "United States Navy" faction.
    case "rhs_faction_usn": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    // RHS: Insurgents faction.
    case "rhs_faction_insurgents": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    // RHS: AFRF "Russian Airborne Troops" faction.
    case "rhs_faction_vdv": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    // RHS: AFRF "Soviet Air Defense Forces" faction.
    case "rhs_faction_vpvo": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    //====================================================================================================//
    // Bundeswehr.                                                                                        //
    //====================================================================================================//

    // German army "Bundeswehr" faction.
    case "bwa3_faction": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    //====================================================================================================//
    // Fuerzas Armadas (ffaa).                                                                            //
    //====================================================================================================//

    // German army "Bundeswehr" faction.
    case "ffaa": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    //====================================================================================================//
    // Faces of War.                                                                                      //
    //====================================================================================================//

    // Briefing for United States Marine Corps faction.
    case "fow_usmc": {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    case "logic": {
        _missionLocation = "Afghanistan"; _uavMarker = "marker"; _uavMarkerType = [];
    };

    // Unrecognised faction.
    default {
        _missionLocation = "Location"; _uavMarker = "marker"; _uavMarkerType = [];
        _recognised = false;
    };
};

// Only execute if the player is alive.
if (alive player) then {
    switch (_introType) do {
        case "blackScreen": {
            [_missionName, _missionLocation, _introText, _dateAndTime] spawn umf_intro_fnc_blackScreen_typeText;
        };

        case "uavFeed": {
            [_uavMarker, _missionName + " - " + _missionLocation, [400,200,0,1], _uavMarkerType] spawn umf_intro_fnc_uav;
        };

        case "playerCamera": {
            [_missionName, _missionLocation, _vehicleName, false, _animationList, _dateAndTime] spawn umf_intro_fnc_playerCamera;
        };

        default {
            systemChat format ["ERROR (defaultIntro.sqf): Undefined intro type %1. It must be: blackScreen, uavFeed or playerCamera", _introType];
        };
    };
};

// Check wether a faction is recognised or not.
if !(_recognised) then {
    systemChat format ["ERROR (defaultIntro.sqf): Faction %1 is not defined. Using fallback faction.", _unitFaction];
};



//============================================= END OF FILE =============================================//
