#ifndef DEMO_CPP_SUPERCLASS_H
#define DEMO_CPP_SUPERCLASS_H
#include <iostream>
using namespace std;

class SuperClass {
public:
  // 构造函数/拷贝构造函数/析构函数,如果没有显示指定的话,编译器会默认定义一个
  // 构造函数
  SuperClass(int superIntField, const string &superStringField);
  // 拷贝构造函数
  SuperClass(const SuperClass &obj);
  // 析构函数,只能有一个无参的析构函数, 在派生类的调用顺序跟构造函数相反
  ~SuperClass();

  int getSuperIntField() const;

  const string &getSuperStringField() const;

  // 没有使用virtual, 当子类赋值给父类的话,调用的则是父类的方法
  string nonVirtualMethod();
  // 使用了virtual,则为虚函数, 当子类赋值给父类的话,调用的则是子类的方法
  virtual string virtualMethod();

private:
  int superIntField;
  string superStringField;
};

#endif // DEMO_CPP_SUPERCLASS_H
