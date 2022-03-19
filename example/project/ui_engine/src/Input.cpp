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
    color = Color;
    in_color = in_Color;
    int s = tex.size();
    start = x + s - 8;
    this->show();
    if(this->GET() == -1) {
        error = 1;
    }
}


void Input::show() {
    powerprint(text, loc.first, loc.second, color, -1);
}

int Input::GET() {
    goto_xy(start, loc.second);
    set_console_color(in_color);
    show_cursor();
    int f;
    char c = getchar();
    string s = " ";
    if(c == '\n') f = 1;
    else {
        s[0] = c;
        cin >> input;
        input = s + input;
    }
    
    HideCursor();
    set_console_color(white);
    if(f) return -1;
    return 0;
}

string Input::getInput() {
    return input;
}

int Input::if_error() {
    return error;
}

