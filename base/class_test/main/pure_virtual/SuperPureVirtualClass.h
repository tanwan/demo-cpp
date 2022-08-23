#ifndef DEMO_CPP_SUPERPUREVIRTUALCLASS_H
#define DEMO_CPP_SUPERPUREVIRTUALCLASS_H
#include <iostream>
using namespace std;

class SuperPureVirtualClass {
public:
  // 虚析构函数,用来解决父类的指针指向子类,然后delete父类指针的问题
  virtual ~SuperPureVirtualClass() {
    cout << "SuperPureVirtualClass Destructor" << endl;
  }
  // 纯虚函数, 派生类都需要实现此函数
  virtual string pureVirtualMethod() = 0;
};

#endif // DEMO_CPP_SUPERPUREVIRTUALCLASS_H
