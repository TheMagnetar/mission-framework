#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

#include "initSettings.sqf"

DGVAR(jipAllowed) = true;
DGVAR(allowedPlayers) = [];
DGVAR(configReady) = false;
DGVAR(saveAdvancedFatiguePFH) = -1;

ADDON = true;
