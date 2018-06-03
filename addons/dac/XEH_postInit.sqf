#include "script_component.hpp"

if (EGVAR(core,dacLoaded) && {isServer}) then {
    [] call FUNC(init);
};
