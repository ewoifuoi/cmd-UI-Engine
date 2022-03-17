cmake_minimum_required(VERSION 3.0.0)
project(example VERSION 0.1.0)

aux_source_directory(. project)

add_subdirectory(ui_engine)

include_directories("ui_engine/include")
add_executable(example ${project})

target_include_directories(example PRIVATE ui_engine/include)
target_link_libraries(example ui_engine)
