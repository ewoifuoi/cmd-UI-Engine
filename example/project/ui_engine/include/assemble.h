#pragma once

#ifndef ASS
#define ASS


class Assemble{
protected:
    string text;
    pair<int, int> loc;
    int color;

public:
    void show();
};

class Label {
private:
    string text;
    pair<int, int> loc;
    int color;
    
public:
    Label(string Tex, int x, int y);
    void randColorShow(int p);// 随机颜色 (霓虹灯效果) 参数为间隔周期
    void show();// 简单输出
    void removeTo(int x, int y);// 改变位置并输出
};

class Button {// 按钮组件
private:
    string text;
    pair<int, int> loc;
    int color;
    int on_color = yellow_l + blue * 16;// 被选中后颜色
    int if_on = 0;
    int id;
public:
    Button(string Tex, int x, int y);
    void setColor(int front, int back);
    int onClick();
    void click();
    void release();
    void show();

};

#endif