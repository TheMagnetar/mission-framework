#include "\a3\3DEN\UI\macros.inc"

class ctrlCombo;
class ctrlStatic;
class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class mf_attributes {
                class Attributes {
                    class GVAR(assignedNetworks) {
                        property = QGVAR(assignedNetworks);
                        displayName = "Radio Networks";
                        tooltip = "Select a radio network for the unit";
                        condition = "objectBrain";
                        control = QGVAR(assignedNetworksControl);
                        value = "''";
                        defaultValue = "'default'";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(assignedNetworks), _value, true)]);
                    };
                    class GVAR(riflemanChannel) {
                        property = QGVAR(riflemanChannel);
                        displayName = "Rifleman channel";
                        tooltip = "The channel identifier a PRC343 will default to";
                        condition = "objectBrain";
                        control = "Edit";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(riflemanChannel), _value, true)]);
                        defaultValue = "''";
                        wikiType = "[[String]]";
                    };
                    class GVAR(shortRangeChannel) {
                        property = QGVAR(shortRangeChannel);
                        displayName = "Short range channel";
                        tooltip = "The channel identifier a PRC152, PRC148 or SEM52SL will default to.";
                        condition = "objectBrain";
                        control = "Edit";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(shortRangeChannel), _value, true)]);
                        defaultValue = "''";
                        wikiType = "[[String]]";
                    };
                    class GVAR(longRangeChannel) {
                        property = QGVAR(longRangeChannel);
                        displayName = "Long range channel";
                        tooltip = "The channel identifier a PRC117F or PRC77 will default to.";
                        condition = "objectBrain";
                        control = "Edit";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(longRangeChannel), _value, true)]);
                        defaultValue = "''";
                        wikiType = "[[String]]";
                    };
                    class GVAR(assignedVehicleNetworks) {
                        property = QGVAR(assignedVehicleNetworks);
                        displayName = "Radio Networks";
                        tooltip = "Select a radio network for the vehile";
                        condition = "objectVehicle";
                        control = QGVAR(assignedNetworksControl);
                        value = "''";
                        defaultValue = "'default'";
                        expression = QUOTE(if !(_value isEqualTo 'default') then {[ARR_2(_this, _value)] call acre_api_fnc_setVehicleRacksPreset;};);
                    };
                };
            };
        };
    };
    class Attributes {
        class Title;
        class Combo;
        class Value;
        class Controls;
        class GVAR(assignedNetworksControl): Combo {
            attributeLoad = "\
                _ctrlRole = _this controlsGroupCtrl 100 ;\
                [_ctrlRole, _value] call mf_acre_fnc_loadNetworks3den;\
            ";
            class Controls {
                class Title: ctrlStatic {
                    style = 0x01;
                    x = 0;
                    w = ATTRIBUTE_TITLE_W * GRID_W;
                    h = SIZE_M * GRID_H;
                    colorBackground[] = {0,0,0,0};
                };
                class ValueRole: ctrlCombo {
                    idc = 100;
                    x = ATTRIBUTE_TITLE_W * GRID_W;
                    w = ATTRIBUTE_CONTENT_W * GRID_W;
                    h = SIZE_M * GRID_H;
                };
            };
        };
    };
};
