cmake_minimum_required(VERSION 3.23)
project(demo_cpp)
set(CMAKE_CXX_STANDARD 23)

# 下载googletest
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

# 添加子项目
add_subdirectory(base)
add_subdirectory(stl)

# 复制files
file(GLOB baseNeedCopyFiles "${CMAKE_CURRENT_SOURCE_DIR}/files/*")
file(COPY ${baseNeedCopyFiles} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/files)