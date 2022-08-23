#include "SimpleClass.h"

// 构造函数
SimpleClass::SimpleClass(int intField, const string &stringField)
    : SuperClass(20 + intField, "super:" + stringField), intField(intField),
      stringField(stringField) {
  cout << "SimpleClass Constructor" << endl;
}

// 也需要调用父类的拷贝构造函数
SimpleClass::SimpleClass(const SimpleClass &obj) : SuperClass(obj) {
  this->intField = obj.getIntField();
  this->stringField = obj.getStringField();
  cout << "SimpleClass Copy Constructor" << endl;
}

SimpleClass::~SimpleClass() { cout << "SimpleClass Destructor" << endl; }

SimpleClass SimpleClass::operator+(const SimpleClass &other) {
  return SimpleClass(this->intField + other.getIntField(),
                     this->stringField + other.getStringField());
}

// 这边是友元函数了,因此不能再声明为SimpleClass::operator<<
ostream &operator<<(ostream &os, SimpleClass &simpleClass) {
  os << "intField:" << simpleClass.intField << ","
     << "stringField:" << simpleClass.stringField;
  return os;
}

int SimpleClass::getIntField() const { return intField; }

void SimpleClass::setIntField(int intField) {
  SimpleClass::intField = intField;
}

const string &SimpleClass::getStringField() const { return stringField; }

void SimpleClass::setStringField(const string &stringField) {
  SimpleClass::stringField = stringField;
}

string SimpleClass::nonVirtualMethod() {
  string str = "SimpleClass nonVirtualMethod";
  cout << str << endl;
  return str;
}

string SimpleClass::virtualMethod() {
  string str = "SimpleClass virtualMethod";
  cout << str << endl;
  return str;
}