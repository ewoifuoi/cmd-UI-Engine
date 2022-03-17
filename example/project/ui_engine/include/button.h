#pragma once

#ifndef BUTTON
#define BUTTON


class Button {// 按钮组件
private:
    string text;// 文本信息
    pair<int, int> loc;// 位置
    int color = white;// 默认配色
    int on_color = yellow_l + blue * 16;// 被选中后颜色
    int if_on = 0;
    int id;


public:
    Button::Button(string Tex, int x, int y);
    void setColor(int front, int back);
    int onclick();
    void click();

};


#endif