#ifndef DEMO_CPP_SUPERCLASS_H
#define DEMO_CPP_SUPERCLASS_H
#include <iostream>
using namespace std;

class SuperClass {
public:
  SuperClass(int superIntField, const string &superStringField);
  // 纯虚函数, 派生类都需要实现此函数
  virtual int virtualMethod() = 0;

  int getSuperIntField() const;

  const string &getSuperStringField() const;

private:
  int superIntField;
  string superStringField;
};

#endif // DEMO_CPP_SUPERCLASS_H
