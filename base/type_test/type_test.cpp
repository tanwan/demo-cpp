#include "main/SimpleEnum.h"
#include "main/SimpleStruct.h"
#include <gtest/gtest.h>

// 测试枚举
TEST(TypeTest, TestEnum) {
  SimpleEnum simpleEnum = SimpleEnum::SIMPLE_ENUM_1;

  EXPECT_EQ(SimpleEnum::SIMPLE_ENUM_1, simpleEnum);
}

// 测试数组
TEST(TypeTest, TestArray) {
  // 声明并赋值
  double one_d[] = {1.1, 1.2, 1.3};
  int tow_d[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
  // 声明
  int one_d_int[10];
  // 贼值
  for (int i = 0; i < 10; i++) {
    one_d_int[i] = i;
  }
}

// 测试struct
TEST(TypeTest, TestStruct) {
  // 使用Struct直接声明
  SimpleStruct simpleStruct;
  simpleStruct.intField = 3;
  simpleStruct.stringField = "str";

  EXPECT_EQ(3, simpleStruct.intField);
  EXPECT_EQ("str", simpleStruct.stringField);
}