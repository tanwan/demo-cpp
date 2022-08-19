#include <gtest/gtest.h>

using namespace std;

// 测试时间
TEST(DataTimeTest, TestTime) {
  // 当前系统的当前日期/时间
  time_t now = time(0);

  // 转换字符串形式
  char *dt = ctime(&now);
  cout << "dt:" << dt << endl;

  // 转换为tm结构(tm_sec,tm_min,tm_hour,tm_yday(一年中的第n天),tm_mday(一个月的第n天),tm_wday(一周中的第n天),tm_mon(0-11),tm_year(以1900以基准),tm_isdst(夏令时))
  tm *gmtm = localtime(&now);
  cout << gmtm->tm_year + 1900 << "-" << gmtm->tm_mon + 1 << "-"
       << gmtm->tm_mday << " " << gmtm->tm_hour << ":" << gmtm->tm_min << ":"
       << gmtm->tm_sec << endl;
}