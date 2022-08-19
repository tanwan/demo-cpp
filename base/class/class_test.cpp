#include "main/SimpleClass.h"
#include <gtest/gtest.h>

// 测试基本
TEST(ClassTest, TestBase) {
  SimpleClass simpleClass(3, "string");

  EXPECT_EQ(3, simpleClass.getIntField());
  EXPECT_EQ("string", simpleClass.getStringField());
}

// 测试纯虚函数
TEST(ClassTest, PureVirtual) {
  SimpleClass simpleClass(3, "string");

  EXPECT_EQ(3, simpleClass.virtualMethod());
}