#include "SimpleClass.h"

// 构造函数
SimpleClass::SimpleClass(int intField, const string &stringField) : intField(intField), string_field(stringField) {
    cout << "SimpleClass Construction" << endl;
}

int SimpleClass::getIntField() const {
    return intField;
}

void SimpleClass::setIntField(int intField) {
    SimpleClass::intField = intField;
}

const string &SimpleClass::getStringField() const {
    return string_field;
}

void SimpleClass::setStringField(const string &stringField) {
    string_field = stringField;
}
