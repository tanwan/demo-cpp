#include <gtest/gtest.h>

using namespace std;

// 测试指针
TEST(PointerReferenceTest, TestPointer) {
  int var = 23;
  int var2 = 123;
  // 可以是空指针
  int *p = NULL;
  // &用来获取变量的指针,可以在声明之后再进行初始化
  p = &var;

  // 代表的一个内存地址
  cout << p << endl;
  // 使用*可以获取到指针的地址的值
  EXPECT_EQ(23, *p);

  // 为指针进行赋值会影响原来的对象
  *p = var2;
  EXPECT_EQ(123, var);

  // 可以修改指针指向的对象
  p = &var2;
  EXPECT_NE(&var, p);

  // 修改后的p指向的是var2, 因此对p进行修改的话,影响的是var2,并不会影响到var
  *p = 1123;
  EXPECT_EQ(1123, var2);
  EXPECT_EQ(123, var);
}

// 测试引用
// 引用的本质就是指针的语法糖
// 引用会触发运行符重载, 指针则不会
TEST(PointerReferenceTest, TestReference) {
  int var = 23;
  int var2 = 123;

  // 不存在空引用,必须在声明时进行初始化,初始化后,引用指向的对象就不能再进行修改
  int &r = var;
  EXPECT_EQ(23, r);

  // 引用指向的对象在初始化后就不会再修改,因此这边是将r指定的对象修改为var2的值
  r = var2;
  EXPECT_EQ(123, var);

  // 修改r,只会影响到var,不会影响var2
  r = 1123;
  EXPECT_EQ(1123, var);
  EXPECT_EQ(123, var2);
}
