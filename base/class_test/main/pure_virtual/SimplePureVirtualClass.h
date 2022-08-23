#ifndef DEMO_CPP_SIMPLEPUREVIRTUALCLASS_H
#define DEMO_CPP_SIMPLEPUREVIRTUALCLASS_H
#include "SuperPureVirtualClass.h"
#include <iostream>
using namespace std;

class SimplePureVirtualClass : public SuperPureVirtualClass {
public:
  ~SimplePureVirtualClass();
  // 如果函数定义和实现是分开的,那边纯虚函数也需要定义在派生类的定义中
  string pureVirtualMethod();
};

#endif // DEMO_CPP_SIMPLEPUREVIRTUALCLASS_H
