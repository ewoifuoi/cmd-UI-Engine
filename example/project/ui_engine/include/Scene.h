#pragma once

#ifndef SCENE
#include<ui_engine.h>
#define SCENE(TEXT) \
while(1) {\
    temp.clear();\
    system("CLS");\
	pointer = 0;\
    make_boundary(59,22,LINE);\
    auto btn_back = new Button("返回", 50, 20, BACK);\
    temp.push_back(btn_back);btn_back->show();\
    TEXT\
    if(back) {\
        back = 0;\
        break;\
    }\
}\

#define SCENE_WITHOUT_BACK(TEXT) \
while(1) {\
    temp.clear();\
    system("CLS");\
	pointer = 0;\
    make_boundary(59,22,LINE);\
    TEXT\
    if(back) {\
        back = 0;\
        break;\
    }\
}\


#endif