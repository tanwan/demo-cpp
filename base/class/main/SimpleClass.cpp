#include "SimpleClass.h"
#include <iostream>

// 构造函数
SimpleClass::SimpleClass(int intField, const string &stringField)
    : SuperClass(20 + intField, "super:" + stringField), intField(intField),
      stringField(stringField) {
  cout << "SimpleClass Construction" << endl;
}

int SimpleClass::virtualMethod() {
  cout << "SimpleClass virtualMethod" << endl;
  return this->intField;
}

int SimpleClass::getIntField() const { return intField; }

void SimpleClass::setIntField(int intField) {
  SimpleClass::intField = intField;
}

const string &SimpleClass::getStringField() const { return stringField; }

void SimpleClass::setStringField(const string &stringField) {
  SimpleClass::stringField = stringField;
}
