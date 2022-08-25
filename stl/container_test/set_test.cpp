#include <gtest/gtest.h>
#include <iostream>
#include <set>

using namespace std;

// set: 由红黑树实现, 其内部元素依据其值自动排序
// 如果存储的是类,则需要重载<符号

// 测试基本操作
TEST(SetTest, TestBase) {
  set<int> s;
  s.insert(3);
  s.insert(3);
  s.insert(1);

  // 遍历
  for (int i : s) {
    cout << i << endl;
  }
}