
#pragma once

#ifndef BUTTON
#define BUTTON

class Button {// 按钮 (组件)
private:
    string text;                                            //文本
    pair<int, int> loc;                                     // 坐标
    int color;
    int on_color;                                           // 被选中后颜色
    int if_on = 0;                                          // 是否被选中
    int id;                                                 // 编号
    int if_back=0;                                            // 是否 是 返回 按钮
    
public:
    Button(string Tex, int x, int y);                       // 无 lambda 表达式 的 按钮
    Button(string Tex, int x, int y, function<void ()> func);        // 自带 lambda 表达式 的按钮
    Button(string Tex, int x, int y, int xxl);              // 返回按钮的回调优化, (使用方法 : xxl 中 填 BACK)
    Button(string Tex, int x, int y, int c, int oc);
    Button(string Tex, int x, int y, int c, int oc, function<void ()> func);
    Button(int x, int y);
    void setColor(int front, int back);                     // 改变 未被选中颜色, 与 被选中颜色
    int onClick();                                          // 返回是否被选中 (被选中 返回 1)
    void click();                                           // 选中 按钮
    void release();                                         // 取消选中 (被选中的前一个)
    void show();                                            // 将按钮文本与颜色输出
    function<void()> Func = NULL;                                   // 按钮 被触发后执行的函数

};




#endif