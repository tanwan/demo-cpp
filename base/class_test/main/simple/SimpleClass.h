#ifndef DEMO_CPP_SIMPLECLASS_H
#define DEMO_CPP_SIMPLECLASS_H
#include "SuperClass.h"
#include <iostream>
using namespace std;

class SimpleClass : public SuperClass {
public:
  SimpleClass(int intField, const string &stringField);
  SimpleClass(const SimpleClass &obj);
  ~SimpleClass();

  // 重载运算符
  SimpleClass operator+(const SimpleClass &other);
  // 重载<<,需要定义为友元函数(可以访问私有变量)
  friend ostream &operator<<(ostream &os,  SimpleClass &simpleClass);

  int getIntField() const;

  void setIntField(int intField);

  const string &getStringField() const;

  void setStringField(const string &stringField);

  string nonVirtualMethod();

  string virtualMethod();
private:
  int intField;
  string stringField;
};

#endif // DEMO_CPP_SIMPLECLASS_H
