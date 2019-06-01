#define COMPONENT respawn
#define COMPONENT_BEAUTIFIED Respawn
#include "\m\mf\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_RESPAWN
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_RESPAWN
    #define DEBUG_SETTINGS DEBUG_SETTINGS_RESPAWN
#endif

#include "\m\mf\addons\main\script_macros.hpp"

#define TIMER_DIALOG_IDD 4444
#define TIMER_DIALOG_IDC 4444

#define COULD_NOT_RESPAWN   0
#define RESPAWN_AREA_MARKER 1
#define RESPAWN_MARKER      2
