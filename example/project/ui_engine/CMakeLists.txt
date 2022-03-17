
# 使用 include 中 声明的 函数 与 宏
include_directories("include")

# 递归添加 src 中 所有源文件
aux_source_directory(src ui_engine)
# 递归添加 链接库
add_library(ui_engine ${ui_engine})