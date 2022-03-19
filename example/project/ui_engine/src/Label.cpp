
#include<ui_engine.h>

using namespace std;

Label::Label(string Tex, int x, int y) {
    text = Tex; loc.first = x; loc.second = y; color = white;
    this->show();
}

Label::Label(string Tex, int x, int y, int Color) {
    text = Tex; loc.first = x; loc.second = y; color = Color;
    this->show();
}
void Label::randColorShow(int p) {// 随机颜色 (霓虹灯效果)
    if(loop_cnt % p == 0) {
        color = rand() % 14 + 1;
        powerprint(text, loc.first, loc.second, color, -1);
    }
}
void Label::show() {// 简单输出
    powerprint(text, loc.first, loc.second, color, -1);
}
void Label::removeTo(int x, int y) {// 改变位置并输出
    for(int i = 0; i < text.size(); i++) powerprint(" ", loc.first + i, loc.second, white, -1);
    loc.first = x;
    loc.second = y;
    powerprint(text, loc.first, loc.second, color, -1);
}