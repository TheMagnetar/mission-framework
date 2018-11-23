#include "script_component.hpp"

params ["_unit", "_uid", "_name"];

[_unit, _uid, _name, true] call EFUNC(persistence,clientSaveStatus);

LOG_2("Gear of player %1 with UID %2 saved.",_name, _uid);
LOG_2("Variable with UID %1 and profile name %2.",(_jipInformation_List select 0) select 0,(_jipInformation_List select 0) select 19);
LOG_1("Number of entries %1",count _jipInformation_List);

false
