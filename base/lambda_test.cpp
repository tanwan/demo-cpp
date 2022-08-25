#include <gtest/gtest.h>
#include <iostream>

using namespace std;

// [captures] ( params ) specifiers -> ret { body }
// captures: 捕获列表, []:不捕获, [x]:按值捕获x, [&x]:按引用捕获x,
// [=]:按值捕获所有变量, [&]:按引用捕获所有变量, [this]: 捕获当前类的所有变量
// params: lambda的参数, 无参时可省略
// specifiers:mutable(可以修改捕获的变量,但是不影响原来的变量)|exception,可以省略
// ret: 返回值类型
// body: 函数体

// 测试基本的lambda表示式
TEST(LambdaTest, TestBase) {

  int i = 0, j = 0;
  // 按值捕获无法修改值, 按引用捕获修改的值会影响原来的变量
  auto lambda1 = [ i, &j ](int k) -> auto {
    j++;
    return i + j + k;
  };

  EXPECT_EQ(3, lambda1(2));
  EXPECT_EQ(1, j);

  // 使用=捕获所有变量
  j = 0;
  auto lambda2 = [=](int k) -> auto { return i + j + k; };
  EXPECT_EQ(2, lambda2(2));

  auto lambda3 = [&](int k) -> auto {
    i++;
    j++;
    return i + j + k;
  };
  EXPECT_EQ(4, lambda3(2));
  EXPECT_EQ(1, i);
  EXPECT_EQ(1, j);
}

// 测试mutable
TEST(LambdaTest, TestMutable) {
  int i = 0, j = 0;
  // 使用mutable, 可以修改捕获的变量的值,但是不会影响原来的变量
  auto lambda = [ i, j ](int k) mutable -> auto {
    i++;
    j++;
    return i + j + k;
  };
  EXPECT_EQ(3, lambda(1));
  EXPECT_EQ(0, i);
  EXPECT_EQ(0, j);
}