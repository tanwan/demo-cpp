#include <deque>
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

// deque: 双端队列

// 测试基本操作
TEST(DequeTest, TestBase) {
  deque<int> que;
  que.push_back(1);
  que.push_back(2);
  que.push_back(3);

  // 遍历
  for (int i = 0; i < que.size(); i++) {
    cout << que[i] << endl;
  }
  for (int i : que) {
    cout << i << endl;
  }
}