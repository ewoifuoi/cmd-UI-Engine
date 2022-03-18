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
        loop_cnt++;\
        loop_cnt %= 10000019;\
        TEXT\
    }\
    WaitForSingleObject(handle2, INFINITE);\



#endif
