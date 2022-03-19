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
    this->GET();

}


void Input::show() {
    powerprint(text, loc.first, loc.second, color, -1);
}

int Input::GET() {
    goto_xy(start, loc.second);
    set_console_color(in_color);
    show_cursor();
    cin >> input;
    HideCursor();
    set_console_color(white);
    return 0;
}

string Input::getInput() {
    return input;
}

int Input::if_error() {
    return error;
}

