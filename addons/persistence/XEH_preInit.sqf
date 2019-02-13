#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

#include "initSettings.sqf"

DGVAR(persistence) = [];
DGVAR(campaignName) = "";
DGVAR(lastCampaignMission) = false;
DGVAR(persistenceEnabled) = false;
DGVAR(playerStatusSaved) = [];

if (isServer) then {
    [] call FUNC(configurePersistence);
};

ADDON = true;
