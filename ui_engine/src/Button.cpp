
#include<ui_engine.h>

using namespace std;


Button::Button(string Tex, int x, int y) {
    text = Tex;
    loc.first = x; loc.second = y;
    color = white;
    on_color = yellow_l + blue * 16;
    Func = NULL;
    this->show();
}

Button::Button(int x, int y) {

    loc.first = x; loc.second = y;

}

Button::Button(string Tex, int x, int y, int c, int oc) {
    text = Tex;
    loc.first = x; loc.second = y;
    color = c;
    on_color = oc;
    this->show();
}

Button::Button(string Tex, int x, int y, int c, int oc, function<void()> func) {
    text = Tex;
    loc.first = x; loc.second = y;
    color = c;
    on_color = oc;
    Func = func;
    this->show();
}

Button::Button(string Tex, int x, int y, function<void()> func) {
    text = Tex;
    loc.first = x; loc.second = y;
    color = white;
    on_color = yellow_l + blue * 16;
    Func = func;
    this->show();
}

Button::Button(string Tex, int x, int y, int xxl) {
    if(xxl == BACK) {
        Func = [](){Back(1);};
        if_back = 1;
    }
    text = Tex;
    loc.first = x; loc.second = y;
    color = white;
    on_color = yellow_l + blue * 16;
    this->show();
}

void Button::show() {
    if(if_on) {
        powerprint(text, loc.first, loc.second, on_color, -1);
    }
    else {
        powerprint(text, loc.first, loc.second, color, -1);
    }
    
}

void Button::click() {
    if_on = 1;
    if(if_back) {signal_will_stop = 1;}// 返回按钮回调优化 (当光标选中"返回"按钮时激活, 用于被触发时在快速停止监听线程)
}

void Button::release() {
    if_on = 0;
    if(if_back) {signal_will_stop = 0;}// 预告信号 重置
}

int Button::onClick() {
    return if_on;
}