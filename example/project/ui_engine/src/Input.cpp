#include<ui_engine.h>

using namespace std;

Input::Input(string tex, int x, int y) {
    text = tex;
    int s = text.size();
    start = x + s + 1;
    loc.first = x; loc.second = y;
    color = white;
    in_color = white;
    this->show();
    this->GET();
}

Input::Input(string tex, int x, int y, int Color, int in_Color) {
    text = tex;
    loc.first = x; loc.second = y;
    cur_loc = x + tex.size();
    color = Color;
    in_color = in_Color;
    int s = tex.size();
    start = x + s - 8;
    this->show();
    // this->GET();

    btn = new Button(x, y);

}

void Input::setColor(int c, int cc, int ic) {
    color = c;
    in_color = ic;
    clicked_color = cc;
    return ;
}


void Input::show() {
    powerprint(text, loc.first, loc.second, color, -1);
    return ;
}

int Input::GET() {
    if(btn->onClick()) {
        
        goto_xy(cur_loc, loc.second);
        if(!freshed) {
            powerprint(text, loc.first, loc.second, clicked_color, -1);
            freshed = 1;
        }
        set_console_color(in_color);
        // cin >> input;
        input = Read(); //  用全键盘监听的方式 实现 非阻塞 读入
        if(input == "") {
            error = 1;
        }
        set_console_color(white);
    }
    else {
        if(!freshed) {
            this->show();
            freshed = 1;
        }
        freshed = 0;
        HideCursor();
    }
    return 0;
}



string Input::getInput() {
    return input;
}

int Input::if_error() {
    error = 0;
    return error;
}

