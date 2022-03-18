
// 此文件 内为 键盘事件 监听函数

#include <ui_engine.h>

using namespace std;

int Key[21];
int Signal_change = 0;
int loop_cnt=0;
int thread_shutDown = 0;
int signal_will_stop = 0;

void kb_get() {
    if(_kbhit()) {
        Signal_change = 1;
        char in_put = getch();
        if(int(in_put) == 13) {// 回车
            memset(Key, 0 ,sizeof(Key));
            Key[0] = 1;
            return ;
        }
        if(int(in_put) == 27) {
            memset(Key, 0 ,sizeof(Key));
            Key[10] = 1;
            return ;
        }
        if(int(in_put) == 72) {//上
        	memset(Key, 0 ,sizeof(Key));
            Key[1] = 1;
            return ;
        }
        if(int(in_put) == 80) {//下
        	memset(Key, 0 ,sizeof(Key));
            Key[2] = 1;
            return ;
        }if(int(in_put) == 75) {//左
        	memset(Key, 0 ,sizeof(Key));
            Key[3] = 1;
            return ;
        }
        if(int(in_put) == 77) {//右
        	memset(Key, 0 ,sizeof(Key));
            Key[4] = 1;
            return ;
        }
        
    }
    else {
        Signal_change = 0;
    }
    return ;
}

DWORD WINAPI ThreadListen(LPVOID pM) {
    // printf("\n\n\n\t -- > 启动键盘监听线程 < --  \n\n\nID号为： : %d\n");
    while(1) {
        if(back) {
            return 0;
        }
        kb_get();
        if(signal_will_stop) {
            if(ENTER == 1) {signal_will_stop = 0;return 0;}
        }
        if(thread_shutDown) {
            thread_shutDown = 0;
            return 0;
        }
        // if(Key[1]) {
        //     powerprint("您正在按 ↑ 键",25, 3, aqua_l, -1);
        // }
        // if(Key[2]) {
        //     cout << "您正在按 ↓ 键" << endl;
        // }
        // if(Key[3]) {
        //     cout << "您正在按 ← 键" << endl;
        // }
        // if(Key[4]) {
        //     cout << "您正在按 → 键" << endl;
        // }
    }
    
    return 0;
}

