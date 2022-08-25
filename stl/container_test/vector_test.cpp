#include <gtest/gtest.h>
#include <iostream>
#include <vector>

using namespace std;

// vector: 相当于是动态数组

// 测试基本操作
TEST(VectorTest, TestBase) {
  vector<int> vec;
  // 插入
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);

  // 遍历
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << endl;
  }
  for (int i : vec) {
    cout << i << endl;
  }
}