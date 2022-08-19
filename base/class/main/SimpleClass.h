#ifndef DEMO_CPP_SIMPLECLASS_H
#define DEMO_CPP_SIMPLECLASS_H
#include "SuperClass.h"
#include <iostream>
using namespace std;

class SimpleClass : public SuperClass {
public:
  SimpleClass(int intField, const string &stringField);
  // 如果函数定义和实现是分开的,那边纯虚函数也需要定义在派生类的定义中
  int virtualMethod();

  int getIntField() const;

  void setIntField(int intField);

  const string &getStringField() const;

  void setStringField(const string &stringField);

private:
  int intField;
  string stringField;
};

#endif // DEMO_CPP_SIMPLECLASS_H
