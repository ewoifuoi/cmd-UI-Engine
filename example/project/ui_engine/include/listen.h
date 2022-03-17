

extern int Key[21];

#define UP      Key[1]
#define DOWN    Key[2]
#define LEFT    Key[3]
#define RIGHT   Key[4]

// 启用键盘监听进程, 在监听循环中通过 Key数组判断对应按键是否被触发
#define LISTEN(TEXT) \
    HANDLE handle = CreateThread(NULL, 0, ThreadFun, NULL,0,  NULL);\
    while(1){\
        TEXT\
        memset(Key, 0, sizeof(Key));\
    }\
    WaitForSingleObject(handle, INFINITE);  
