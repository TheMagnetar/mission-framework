#define COMPONENT persistence
#define COMPONENT_BEAUTIFIED Persistence
#include "\m\mf\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_PERSISTENCE
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_RESPAWN
    #define DEBUG_SETTINGS DEBUG_SETTINGS_PERSISTENCE
#endif

#include "\m\mf\addons\main\script_macros.hpp"
