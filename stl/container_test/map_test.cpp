#include <gtest/gtest.h>
#include <iostream>
#include <map>

using namespace std;

// map: 由红黑树实现

// 测试基本操作
TEST(MapTest, TestBase) {
  map<string, int> m;
  m.insert({"k1", 1});
  m.insert({"k2", 2});
  m.insert(pair<string, int>("k3", 3));

  EXPECT_EQ(3, m["k3"]);

  // 遍历
  for (const auto &[k, v] : m) {
    std::cout << k << ":" << v << std::endl;
  }
}