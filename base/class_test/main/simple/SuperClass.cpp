#include "SuperClass.h"

// 构造函数
SuperClass::SuperClass(int superIntField, const string &superStringField)
    : superIntField(superIntField), superStringField(superStringField) {
  cout << "SuperClass Constructor" << endl;
}

SuperClass::SuperClass(const SuperClass &obj) {
  this->superIntField = obj.superIntField;
  this->superStringField = obj.superStringField;
  cout << "SuperClass Copy Constructor" << endl;
}

// 析构函数
SuperClass::~SuperClass() { cout << "SuperClass Destructor" << endl; }

int SuperClass::getSuperIntField() const { return superIntField; }

const string &SuperClass::getSuperStringField() const {
  return superStringField;
}

string SuperClass::nonVirtualMethod() {
  string str = "SuperClass nonVirtualMethod";
  cout << str << endl;
  return str;
}

string SuperClass::virtualMethod() {
  string str = "SuperClass virtualMethod";
  cout << str << endl;
  return str;
}