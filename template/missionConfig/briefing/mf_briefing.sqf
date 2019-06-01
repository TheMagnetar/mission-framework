//=======================================================================================================//
// File: mf_briefing.sqf                                                                                 //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/02/22                                                                             //
// Description: This script is responsible for generating briefing entries depending on the player's     //
//              faction. This is useful for TvT missions or with missions where factions in the same     //
//              side have different objectives.                                                          //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//

// Do not execute the rest of the script if it is not a player.
if (!hasInterface) exitWith {};

// Identify which faction the unit belongs to.
private _unitFaction = "";

// Identify which faction the unit belongs to.
if (side player isEqualTo sideLogic) then {
    _unitFaction = "logic";
} else {
    _unitFaction = player getVariable ["mf_gear_faction", toLower (faction player)];

    // Use leader faction if unit's faction is different.
    private _factionLeader = (leader group player) getVariable ["mf_gear_faction", toLower (faction (leader group player))];

    if !(_unitFaction isEqualTo _factionLeader) then {
        _unitFaction = _factionLeader;
    };
};

private _recognised = true;

switch (_unitFaction) do {

    //====================================================================================================//
    // Vanila factions.                                                                                   //
    //====================================================================================================//

    // Briefing for BLUFOR faction.
    case "blu_f": {
        #include "mf_briefing_blu_f.sqf"
    };

    // Briefing for CTRG faction (APEX).
    case "blu_ctrg_f": {
        #include "mf_briefing_blu_ctrg_f.sqf"
    };

    // Briefing for GENDARMERIE faction (APEX).
    case "blu_gen_f": {
        #include "mf_briefing_blu_gen_f.sqf"
    };

    // Briefing for BLUFOR Pacific faction (APEX).
    case "blu_t_f": {
        #include "mf_briefing_blu_t_f.sqf"
    };

    // Briefing for FIA faction.
    case "blu_g_f": {
        #include "mf_briefing_fia_f.sqf"
    };

    // Briefing for FIA faction.
    case "ind_g_f": {
        #include "mf_briefing_fia_f.sqf"
    };

    // Briefing for FIA faction.
    case "opf_g_f": {
        #include "mf_briefing_fia_f.sqf"
    };

    // Briefing for OPFOR faction.
    case "opf_f": {
        #include "mf_briefing_opf_f.sqf"
    };

    // Briefing for OPFOR Pacific faction (APEX).
    case "opf_t_f": {
        #include "mf_briefing_opf_t_f.sqf"
    };

    // Briefing for Independent faction.
    case "ind_f": {
        #include "mf_briefing_ind_f.sqf"
    };

    // Briefing for Syndikat faction (APEX).
    case "ind_c_f": {
        #include "mf_briefing_ind_c_f.sqf"
    };

    // Briefing for Civilian faction.
    case "civ_f": {
        #include "mf_briefing_civ_f.sqf"
    };

    //====================================================================================================//
    // RHS factions.                                                                                      //
    //====================================================================================================//

    // Briefing for RHS: USAF "United States Army" (OCP) faction.
    case "rhs_faction_usarmy_d": {
        #include "mf_briefing_rhs_usarmy_d.sqf"
    };

    // Briefing for RHS: USAF "United States Army" (UCP) faction.
    case "rhs_faction_usarmy_wd": {
        #include "mf_briefing_rhs_usarmy_wd.sqf"
    };

    // Briefing for RHS: USAF "United States Marine Corps" (D) faction.
    case "rhs_faction_usmc_d": {
        #include "mf_briefing_rhs_usmc_d.sqf"
    };

    // Briefing for RHS: USAF "United States Marine Corps" (WD) faction.
    case "rhs_faction_usmc_wd": {
        #include "mf_briefing_rhs_usmc_wd.sqf"
    };

    // Briefing for RHS: USAF "United States Navy" faction.
    case "rhs_faction_usn": {
        #include "mf_briefing_rhs_usn.sqf"
    };

    // Briefing for RHS: Insurgents faction.
    case "rhs_faction_insurgents": {
        #include "mf_briefing_rhs_insurgents.sqf"
    };

    // Briefing for RHS: AFRF "Russian Airborne Troops" faction.
    case "rhs_faction_vdv": {
        #include "mf_briefing_rhs_vdv.sqf"
    };

    // Briefing for RHS: AFRF "Soviet Air Defense Forces" faction.
    case "rhs_faction_vpvo": {
        #include "mf_briefing_rhs_vpvo.sqf"
    };

    //====================================================================================================//
    // Bundeswehr.                                                                                        //
    //====================================================================================================//

    // Briefing for German army "Bundeswehr" faction.
    case "bwa3_faction": {
        #include "mf_briefing_bwa3_faction.sqf"
    };

    //====================================================================================================//
    // Fuerzas Armadas (ffaa).                                                                            //
    //====================================================================================================//

    // Briefing for German army "Bundeswehr" faction.
    case "ffaa": {
        #include "mf_briefing_ffaa.sqf"
    };

    //====================================================================================================//
    // Faces of War.                                                                                      //
    //====================================================================================================//

    // Briefing for United States Marine Corps faction.
    case "fow_usmc": {
        #include "mf_briefing_fow_usmc.sqf"
    };

    case "logic": {
        #include "mf_briefing_logic.sqf"
    };

    default {
        _recognised = false;
        #include "mf_briefing_fallback_faction.sqf"
    };
};

if (!_recognised) then {
    player globalchat format ["ERROR (mf_briefing.sqf): Faction %1 is not defined. Using fallback faction.", _unitFaction];
};

//============================================= END OF FILE =============================================//
