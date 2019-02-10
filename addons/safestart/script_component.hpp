#define COMPONENT safestart
#define COMPONENT_BEAUTIFIED Safe Start
#include "\u\umf\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_SAFESTART
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_SAFESTART
    #define DEBUG_SETTINGS DEBUG_SETTINGS_SAFESTART
#endif

#include "\u\umf\addons\main\script_macros.hpp"

#define TIMER_DIALOG_IDD 5555
#define TIMER_DIALOG_IDC 5555
