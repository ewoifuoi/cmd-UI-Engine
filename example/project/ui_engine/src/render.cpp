#include<ui_engine.h>

using namespace std;


string char_list[20001] = {"□","■"};


void powerprint(string word, short x, short y, int color, int val) {
    goto_xy(x, y);
    set_console_color(color);
    if(val == -1) cout << word;
    else printf("%d", val);
    set_console_color(7);
    return ;
}

void make_boundary(int x, int y, int type){// 绘制一个从 (0, 0) 到 (x - 1, y - 1) 的一个边框
    for(int i = 1; i <= x; i+=2) {
        powerprint(char_list[type], i, 1, white, -1);
    }
    for(int i = 1; i <= y; i++) {
        powerprint(char_list[type], 1, i, white, -1);
    }
    for(int i = 1; i <= x; i+=2) {
        powerprint(char_list[type], i, y, white, -1);
    }
    for(int i = 1; i <= y; i++) {
        powerprint(char_list[type], x, i, white, -1);
    }
    return;

}