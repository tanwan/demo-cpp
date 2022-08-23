#include "main/pure_virtual/SimplePureVirtualClass.h"
#include "main/simple/SimpleClass.h"
#include <gtest/gtest.h>

// 测试基本
TEST(ClassTest, TestBase) {
  SimpleClass simpleClass(3, "string");

  EXPECT_EQ(3, simpleClass.getIntField());
  EXPECT_EQ("string", simpleClass.getStringField());
}

// 测试拷贝构造函数
TEST(ClassTest, CopyConstructor) {
  // 父类的构造函数 -> 子类的构造函数
  SimpleClass simpleClass(1, "string");
  cout << simpleClass << endl;
  // 将simpleClass赋值给simpleClass2,这边就会调用拷贝构造函数
  SimpleClass simpleClass2 = simpleClass;
  // simpleClass跟simpleClass2不是同一个对象
  EXPECT_NE(&simpleClass, &simpleClass2);
  EXPECT_EQ(simpleClass.getIntField(), simpleClass2.getIntField());

  // 将子类赋值给父类, 同样也会调用拷贝构造函数
  SuperClass superClass = simpleClass;
  EXPECT_NE(&simpleClass, &superClass);
  EXPECT_EQ(simpleClass.getSuperIntField(), superClass.getSuperIntField());
  cout << "-------------------------" << endl;

  // 使用指针不会触发拷贝构造函数
  SimpleClass *pSimpleClass = &simpleClass;
  EXPECT_EQ(&simpleClass, pSimpleClass);
  SuperClass *pSuperClass = &simpleClass;
  EXPECT_EQ(&simpleClass, pSuperClass);

  // 使用引用也会不触发拷贝构造函数
  SimpleClass &rSimpleClass = simpleClass;
  EXPECT_EQ(&simpleClass, &rSimpleClass);
  SuperClass &rSuperClass = simpleClass;
  EXPECT_EQ(&simpleClass, &rSuperClass);
}

// 测试析构函数
TEST(ClassTest, Destruction) {
  // 父类的构造函数 -> 子类的构造函数
  SimpleClass *pSimpleClass = new SimpleClass(3, "string");

  EXPECT_EQ(3, pSimpleClass->getIntField());

  // 子类的析构函数 -> 父类的析构函数
  delete pSimpleClass;

  cout << "-------------------------" << endl;
  SuperClass *pSuperClass = new SimpleClass(3, "string");
  // 只会调用父类的析构函数
  delete pSuperClass;

  cout << "-------------------------" << endl;
  SuperPureVirtualClass *pSuperPureVirtualClass = new SimplePureVirtualClass();
  delete pSuperPureVirtualClass;
}

// 测试运算符重载
TEST(ClassTest, OperatorOverloading) {
  SimpleClass simpleClass1(1, "string1");
  SimpleClass simpleClass2(2, "string2");
  SimpleClass simpleClass3 = simpleClass1 + simpleClass2;
  EXPECT_EQ(3, simpleClass3.getIntField());
  cout << simpleClass3 << endl;
}

// 测试虚函数
TEST(ClassTest, Virtual) {
  SimpleClass simpleClass = SimpleClass(1, "string1");
  SuperClass &rSuperClass = simpleClass;
  EXPECT_EQ("SimpleClass nonVirtualMethod", simpleClass.nonVirtualMethod());
  EXPECT_EQ("SimpleClass virtualMethod", simpleClass.virtualMethod());

  // 非虚函数, 当父类赋值给子类的话, 则会直接调用父类的函数
  EXPECT_EQ("SuperClass nonVirtualMethod", rSuperClass.nonVirtualMethod());
  // 虚函数, 还是会调用子类的函数
  EXPECT_EQ("SimpleClass virtualMethod", rSuperClass.virtualMethod());
}

// 测试纯虚函数
TEST(ClassTest, PureVirtual) {
  SimplePureVirtualClass simplePureVirtualClass;
  // 纯虚函数
  EXPECT_EQ("SimplePureVirtualClass pureVirtualMethod",
            simplePureVirtualClass.pureVirtualMethod());
  SuperPureVirtualClass &rSuperPureVirtualClass = simplePureVirtualClass;
  EXPECT_EQ("SimplePureVirtualClass pureVirtualMethod",
            rSuperPureVirtualClass.pureVirtualMethod());
}
