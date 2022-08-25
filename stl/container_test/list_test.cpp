#include <list>
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

// list: 双向链表, 不支持随机访问

// 测试基本操作
TEST(ListTest, TestBase) {
  list<int> lst;
  lst.push_back(1);
  lst.push_back(2);
  lst.push_back(3);

  // 遍历
  for (int i : lst) {
    cout << i << endl;
  }
}