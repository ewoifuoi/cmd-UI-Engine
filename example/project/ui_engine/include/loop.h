/*

         这是 事件主循环 宏

         内容 : 
            1. 键盘定义
            2. 循环计数变量  loop_cnt (用于不同帧率动画显示控制)
            3. 键盘监听线程的创立
        

        请将其放置其前 先调用界面初始化宏

        请在其中 放置 需要循环刷新的组件



*/


#pragma once
#ifndef LOOP


extern int Key[21];

#define ENTER   Key[0]
#define UP      Key[1]
#define DOWN    Key[2]
#define LEFT    Key[3]
#define RIGHT   Key[4]

// 启用键盘监听进程, 在监听循环中通过 Key数组判断对应按键是否被触发
#define LOOP(TEXT) HANDLE handle2 = CreateThread(NULL, 0, ThreadListen, NULL,0,  NULL);\
    loop_cnt = 0;\
    while(1){\
        if(back) {\
            back = 0;\
            goto end;\
        }\
        loop_cnt++;\
        loop_cnt %= 10000019;\
        TEXT\
    }\
    end:\
    CloseHandle(handle2);\


#endif




