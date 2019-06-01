#include "\a3\3DEN\UI\macros.inc"

class ctrlCombo;
class ctrlStatic;
class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class mf_attributes {
                class Attributes {
                    class GVAR(persist) {
                        property = QGVAR(persist);
                        displayName = "Persistence enabled?";
                        tooltip = "Enable mission persistence.";
                        condition = "objectBrain";
                        control = "Checkbox";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(persist), _value, true)]);
                        defaultValue = "false";
                        wikiType = "[[Bool]]";
                    };
                };
            };
        };
    };
};
