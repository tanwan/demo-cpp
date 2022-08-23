#include "main/SimpleException.h"
#include "main/namespace.h"
#include <exception>
#include <gtest/gtest.h>
#include <iostream>
using namespace std;

void throwException(int i) {
  switch (i) {
  case 0:
    throw "throw exception";
  case 1:
    throw SimpleException();
  case 2:
    throw exception();
  }
}

// 测试异常
TEST(BaseTest, TestException) {
  for (int i = 0; i < 3; i++) {
    try {
      throwException(i);
    } catch (const char *msg) {
      // 使用char*捕获抛出的字符串异常
      cerr << msg << endl;
    } catch (SimpleException e) {
      cerr << e.what() << endl;
    } catch (...) {
      // 使用...捕获所有的异常
      cerr << "catch all exception" << endl;
    }
  }
}

// 测试名称空间
TEST(BaseTest, TestNamespace) {
  ns1::method();
  ns1::ns11::method();
  ns1::ns11::ns111::method();
  ns2::method();
}