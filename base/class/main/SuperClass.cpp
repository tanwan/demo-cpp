#include "SuperClass.h"

// 构造函数
SuperClass::SuperClass(int superIntField, const string &superStringField)
    : superIntField(superIntField), superStringField(superStringField) {
  cout << "SuperClass Construction" << endl;
}

int SuperClass::getSuperIntField() const { return superIntField; }

const string &SuperClass::getSuperStringField() const {
  return superStringField;
}
