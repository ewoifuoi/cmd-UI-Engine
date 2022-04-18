
#pragma once

#ifndef INPUT

#define INPUT
#include<ui_engine.h>
using namespace std;

class Input{// 输入框 (组件)
private:
    string text;
    string input;
    pair<int, int> loc;
    int color = white;
    int in_color = white;
    int clicked_color = purple_l;
    int start;
    int error = 0;
    int cur_loc;
    int freshed = 0;
    
public:
    Button *btn = NULL;       //  Input 组件 所拥有的按钮对象  (公有 使用Input 时 需要将其 btn 对象 添加到 按钮监听中)
    Input(string tex, int x, int y);
    Input(string tex, int x, int y, int color, int in_Color); // Input 组件构造函数  (提示文本  x  y  提示文本颜色    输入文本颜色)
    void setColor(int x);                           // 设置 提示文本颜色
    void setColor(int c, int cc, int ic);           // 设置 提示文本颜色    被选中(输入时) 提示文本颜色    输入文本颜色
    int GET();                                      // Input 组件 在循环中调用的参数, 以按钮的形式, 当按钮被选中时, 键盘监听 定向到 输入
    string getInput();                              // 查询输入内容
    void show();                                    // 简单输出提示信息
    int if_error();                

};




#endif