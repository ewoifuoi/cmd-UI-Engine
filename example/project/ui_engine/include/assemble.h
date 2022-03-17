#pragma once

#ifndef ASS
#define ASS

class Label{
private:
    string text;
    pair<int,int> loc;
    int color;

public:
    Label(string Tex, int x, int y);
    void randColorShow();// 随机颜色 (霓虹灯效果)
    void show();// 简单输出
    void removeTo(int x, int y);// 改变位置并输出
};

#endif