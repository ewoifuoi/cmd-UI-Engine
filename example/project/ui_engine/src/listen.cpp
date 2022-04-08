
// 此文件 内为 键盘事件 监听函数

#include <ui_engine.h>

using namespace std;

int Key[200];
int Signal_change = 0;
int loop_cnt=0;
int thread_shutDown = 0;
int signal_will_stop = 0;
char in_put = '\\';

void kb_get() {
    if(_kbhit()) {
        Signal_change = 1;
        char temp = getch();
        in_put = '\\';
        if(int(temp) == 13) {// 回车
            memset(Key, 0 ,sizeof(Key));
            Key[13] = 1;
            return ;
        }
        if(int(temp) == 27) {
            memset(Key, 0 ,sizeof(Key));
            Key[27] = 1;
            return ;
        }
        if(int(temp) == 72) {//上
        	memset(Key, 0 ,sizeof(Key));
            Key[72] = 1;
            return ;
        }
        if(int(temp) == 80) {//下
        	memset(Key, 0 ,sizeof(Key));
            Key[80] = 1;
            return ;
        }if(int(temp) == 75) {//左
        	memset(Key, 0 ,sizeof(Key));
            Key[75] = 1;
            return ;
        }
        if(int(temp) == 77) {//右
        	memset(Key, 0 ,sizeof(Key));
            Key[77] = 1;
            return ;
        }
        if(!UP && !DOWN && !RIGHT && !LEFT && !ENTER) {
            in_put = temp;
            return;
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

