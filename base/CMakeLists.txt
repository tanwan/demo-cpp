project(base)

FILE (GLOB_RECURSE ALL_SOURCES "./*.h" "./*.cpp")
# 指定文件生成可执行文件
add_executable(base-test ${ALL_SOURCES})

# 链接导入的库
target_link_libraries(base-test gtest_main)