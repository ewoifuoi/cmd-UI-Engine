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
    cur_loc = x + tex.size() - 5;
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
        
        // cin >> input;
        // input = Read(); //  用全键盘监听的方式 实现 非阻塞 读入
        // if(ENTER) {// 回车时延优化
        //     memset(Key, 0, sizeof(Key));
        //     in_put = '\\';
        //     // return 0;
        // }
        if(int(in_put) == 8) {
            // Error("!");
            memset(Key, 0, sizeof(Key));
            if(input.size() != 0)input.pop_back();
            in_put = '\\';
            goto_xy(loc.first + text.size() - 8, loc.second);
            set_console_color(in_color);
            for(int i = 0; i <= input.size(); i++) cout << " ";
            // cout << "        ";
            goto_xy(loc.first + text.size() - 8, loc.second);
            cout << input;
            set_console_color(white);
        }
        else if(in_put != '\\') {
            stringstream temp;

            temp << in_put;
            
            goto_xy(loc.first + text.size() - 8, loc.second);
            set_console_color(in_color);
            
            // memset(Key, 0, sizeof(Key));
            in_put = '\\';
            input += temp.str();
            cout << input;
            set_console_color(white);

        }
        else {
            // memset(Key, 0, sizeof(Key));
            in_put = '\\';
        }
        
        if(input == "") {
            error = 1;
        }
        set_console_color(white);
        return 0;
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

