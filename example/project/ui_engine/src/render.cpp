#include<ui_engine.h>

using namespace std;




string char_list[20001] = {"□","■", "┏", "┓", "┗", "┛", "┃", "━"};
int back = 0;



void powerprint(string word, short x, short y, int color, int val) {
    goto_xy(x, y);
    set_console_color(color);
    if(val == -1) cout << word;
    else printf("%d", val);
    set_console_color(7);
    return ;
}

void make_boundary(int a, int b, int x, int y, int type){// 绘制一个从 (0, 0) 到 (x - 1, y - 1) 的一个边框

    string c[10][8]={{"□", "□", "□", "□", "□", "□"}, {"╔", "╚", "╝", "╗", "═", "║"}};

    powerprint(c[type][0], a, b, white, -1);
    for(int i = a + 1; i < x; i++) {
        powerprint(c[type][4], i, b, white, -1);
    }
    for(int i = b + 1; i < y; i++) {
        powerprint(c[type][5], a, i, white, -1);
    }
    powerprint(c[type][1], a, y, white, -1);
    for(int i = a + 1; i < x; i++) {
        powerprint(c[type][4], i, y, white, -1);
    }
    powerprint(c[type][2], x, y, white, -1);
    for(int i = b + 1; i < y; i++) {
        powerprint(c[type][5], x, i, white, -1);
    }
    powerprint(c[type][3], x, b, white, -1);

    
    return;

}

void Back() {
    if(back == 0) {
        back = 1;
        thread_shutDown = 1;
    }
    return;
}