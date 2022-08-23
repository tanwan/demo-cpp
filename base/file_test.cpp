#include <filesystem>
#include <fstream>
#include <gtest/gtest.h>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

// 测试当前路径
TEST(FileTest, TestCurrentPath) {
  cout << "Current working directory: " << fs::current_path() << endl;
}

// 测试文件读
TEST(FileTest, TestRead) {
  // 以读模式打开文件,
  // 不使用构造函数的话,也可以使用fin.open("../files/file", ios::in);
  ifstream fin("../files/file", ios::in);
  if (fin.is_open()) {
    char buf[1024] = {0};
    // 按空格或换行读取
    while (fin >> buf) {
      cout << buf << endl;
    }

    cout << "-------------------------" << endl;
    fin.clear();
    fin.seekg(0, ios::beg);

    // 按行读取
    while (fin.getline(buf, sizeof(buf))) {
      cout << buf << endl;
    }
    fin.close();
  }
}

TEST(FileTest, TestWrite) {
  // ios::app追加, 多个模式使用|连接
  fs::create_directories("../files/tmp");
  ofstream fout("../files/tmp/write", ios::out);
  if (!fout) {
    cerr << "open error!" << endl;
  }
  fout << "hello world" << endl;
}