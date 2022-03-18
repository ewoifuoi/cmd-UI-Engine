
/*

         这是 按钮 事件监听 宏

         内容 : 
            1. 将按钮对象添加进容器中
            2. 用于响应上下左右键触发事件, 并且让光标变量加减 1
            3. 清空按键事件数组 Key, (捕获后的处理)
            4. 将容器内的按钮逐个渲染
            5. 响应 回车 事件, 进行界面跳转 事件触发



*/
#pragma once
#ifndef LISTEN_BUTTON

#define LISTEN_BUTTON(...) vector<Button* > list = {__VA_ARGS__};\
for(int i = 0; i < temp.size(); i++) {\
    list.push_back(temp[i]);\
}\
temp.clear();\
if(!list.empty()) {\
    int list_cnt = list.size();\
    if(UP || LEFT) {list[pointer]->release();pointer += list_cnt; pointer--; pointer %= list_cnt;}\
    if(DOWN || RIGHT) {list[pointer]->release();pointer += list_cnt; pointer++; pointer %= list_cnt;}\
    memset(Key, 0, sizeof(Key));\
    list[pointer]->click();\
    for(int i = 0; i < list_cnt; i++) {\
        list[i]->show();\
    }\
    if(ENTER) {\
        if(list[pointer]->Func != NULL) {list[pointer]->Func();}\
        goto reload;\
    }\
}\




#endif
