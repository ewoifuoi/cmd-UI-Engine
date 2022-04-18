
# 使用该 引擎 无需 修改此 CMakelists 文件

# 如非必要 请不要修改 ui_engine 文件夹中的文件

# 请将所有 源文件 放置在 src 文件夹中
# 请将所有 头文件 放置在 include 文件夹中

# 编译生成文件将被自动生成到 build 文件夹下
# 需要保证 main.cpp 文件存在, 以生成可执行程序

# 所需最小 CMake 版本
cmake_minimum_required(VERSION 3.0.0)
# 项目名
project(example VERSION 0.1.0)
# 递归添加 project 目录下的所有源文件
include_directories("include")
aux_source_directory(. project)
aux_source_directory(src SRC)

# 使用 ui-engine 引擎
add_subdirectory(ui_engine)
# 使用 ui-engine 引擎 中的 函数 与 宏
include_directories("ui_engine/include")
include_directories("ui_engine/include/Assemble")
# 编译并生成可执行文件 example
add_executable(example ${project} ${SRC})
# 将 ui-engine 编译后的链接库 链接到 主程序 中来
target_link_libraries(example ui_engine)
