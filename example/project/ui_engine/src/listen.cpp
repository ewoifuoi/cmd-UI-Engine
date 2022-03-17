
#include <ui_engine.h>

using namespace std;

int Key[21];

void kb_get() {
    if(_kbhit()) {
        char in_put = getch();
        if(int(in_put) == 13) {
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
    return ;
}

DWORD WINAPI ThreadFun(LPVOID pM) {
    // printf("\n\n\n\t -- > 启动键盘监听线程 < --  \n\n\nID号为： : %d\n");
    while(1) {
        kb_get();
        // if(Key[1]) {
        //     cout << "您正在按 ↑ 键" << endl;
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
        memset(Key, 0, sizeof(Key));
    }
    
    return 0;
}