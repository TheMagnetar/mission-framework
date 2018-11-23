#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

#include "initSettings.sqf"

DGVAR(campaignName) = "";
DGVAR(lastCampaignMission) = false;
DGVAR(persistenceEnabled) = false;
EGVAR(playerStatusSaved) = [];

if (isServer) then {
    [] call FUNC(configurePersistence);
};

ADDON = true;
