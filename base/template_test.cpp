#include "main/template.h"
#include <gtest/gtest.h>

using namespace std;

// 测试函数模板
TEST(TemplateTest, TestMethod) {
  // 在方法后面指定类型
  EXPECT_EQ(3, add<int>(1, 2));
  EXPECT_EQ(3, add<long long>(1LL, 2LL));
}

// 测试类模板
TEST(TemplateTest, TestClass) {
  Pair<string, int> pair("key", 3);
  EXPECT_EQ("key", pair.getKey());
  EXPECT_EQ(3, pair.getValue());
}