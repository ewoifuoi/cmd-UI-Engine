#include<ui_engine.h>

using namespace std;

void powerprint(string word, short x, short y, int color, int val) {
    goto_xy(x, y);
    set_console_color(color);
    if(val == -1) cout << word;
    else printf("%d", val);
    set_console_color(7);
    return ;
}