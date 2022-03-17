include_directories("include")

aux_source_directory(src ui_engine)
add_library(ui_engine ${ui_engine})