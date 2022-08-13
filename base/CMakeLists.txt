project(base)

# 指定文件生成可执行文件
add_executable(base-test class/class_test.cpp)
target_sources(base-test PRIVATE class/SimpleClass.cpp)
# 链接导入的库
target_link_libraries(base-test gtest_main)