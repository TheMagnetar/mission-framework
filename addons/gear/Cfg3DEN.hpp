#include "\a3\3DEN\UI\macros.inc"

class ctrlCombo;
class ctrlStatic;
class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class mf_attributes {
                class Attributes {
                    class GVAR(enabled) {
                        property = QGVAR(enabled);
                        displayName = "Gear scripts enabled?";
                        tooltip = "Toggle assignGear.";
                        condition = "objectBrain";
                        control = "Checkbox";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(enabled), _value, true)]);
                        defaultValue = "false";
                        wikiType = "[[Bool]]";
                    };
                    class GVAR(faction) {
                        property = QGVAR(faction);
                        displayName = "Faction";
                        tooltip = "Select a faction.";
                        condition = "objectBrain";
                        control = QGVAR(factionControl);
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(faction), _value, true)]);
                        defaultValue = "toLower (faction _this)";
                        wikiType = "[[String]]";
                    };
                    class GVAR(group) {
                        property = QGVAR(group);
                        displayName = "Group";
                        tooltip = "Define the group.";
                        condition = "objectBrain";
                        control = "Edit";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(group), _value, true)]);
                        defaultValue = "''";
                        wikiType = "[[String]]";
                    };
                    class GVAR(role) {
                        property = QGVAR(role);
                        displayName = "Role";
                        tooltip = "Select a role.";
                        condition = "objectBrain";
                        control = QGVAR(roleControl);
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(role), _value, true)]);
                        defaultValue = "'rfl'";
                        value = "''";
                        wikiType = "[[String]]";
                    };
                    class GVAR(assignGear) {
                        property = QGVAR(assignGear);
                        condition = "objectBrain";
                        control = QEGVAR(main,hidden);
                        expression = " \
                            if (is3DEN) then { \
                                [_this, _value # 0, _value # 1] spawn mf_gear_fnc_assignGear; \
                            }; \
                        ";
                        defaultValue = "['rfl','']";
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

        class GVAR(factionControl): Combo {
            onLoad = "";
            attributeLoad = "\
                _ctrlRole = _this controlsGroupCtrl 100 ;\
                [_ctrlRole, _value] call mf_gear_fnc_loadFactions3den;\
            ";
            attributeSave = "\
                private _ctrlFaction = _this controlsGroupCtrl 100;\
                private _output = _ctrlFaction lbData (lbCurSel _ctrlFaction);\
                private _objects = get3DENSelected 'object'; \
                { \
                    private _array = [(_x get3DENAttribute 'mf_gear_role') select 0, _output]; \
                    _x set3DENAttribute ['mf_gear_assignGear',_array]; \
                } forEach _objects; \
                _output; \
            ";
            class Controls : Controls {
                class Title : Title {};
                class ValueFaction: Value {
                    idc = 100;
                    // TYPE
                    onLBSelChanged = "\
                        _ctrlRole = uiNamespace getVariable ['mf_gear_roleControl', controlNull];\
                        [_ctrlRole] call mf_gear_fnc_loadRoles3den;\
                    ";
                    x = ATTRIBUTE_TITLE_W * GRID_W;
                    w = ATTRIBUTE_CONTENT_W * GRID_W;
                    h = SIZE_M * GRID_H;
                };
            };
        };
        class GVAR(roleControl): Combo {
            onLoad = "uiNamespace setVariable ['mf_gear_roleControl',(_this select 0) controlsGroupCtrl 100];";
            attributeLoad = "\
                _ctrlRole = _this controlsGroupCtrl 100 ;\
                [_ctrlRole, _value] call mf_gear_fnc_loadRoles3den;\
            ";
            attributeSave = "\
                private _ctrlRole = _this controlsGroupCtrl 100;\
                private _output = _ctrlRole lbData (lbCurSel _ctrlRole);\
                private _objects = get3DENSelected 'object'; \
                { \
                    _array = [_output, \
                    (_x get3DENAttribute 'mf_gear_faction') select 0]; \
                    _x set3DENAttribute ['mf_gear_assignGear',_array]; \
                } forEach _objects; \
                _output; \
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
    class EventHandlers {
        class ADDON {
            onMissionLoad = " \
                { \
                    (_x get3DENAttribute 'mf_gear_assignGear') params ['_value']; \
                    [_x, _value # 0, _value # 1] spawn { sleep 0.5; _this call mf_gear_fnc_assignGear}; \
                } forEach allUnits; \
            ";
            onMissionPreviewEnd = " \
                { \
                    (_x get3DENAttribute 'mf_gear_assignGear') params ['_value']; \
                    [_x, _value # 0, _value # 1] spawn { sleep 0.5; _this call mf_gear_fnc_assignGear}; \
                } forEach allUnits; \
            ";
        };
    };
};
