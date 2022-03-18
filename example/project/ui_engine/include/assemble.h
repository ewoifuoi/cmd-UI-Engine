#pragma once

#ifndef ASS
#define ASS


class Assemble{  // (已废弃)
protected:
    string text;
    pair<int, int> loc;
    int color;

public:
    void show();
};

class Label {               // 标签组件                     (虽然可能没啥用 2333)
private:
    string text;
    pair<int, int> loc;
    int color;
    
public:
    Label(string Tex, int x, int y);
    void randColorShow(int p);                              // 随机颜色 (霓虹灯效果) 参数为间隔周期
    void show();                                            // 简单输出
    void removeTo(int x, int y);                            // 改变位置并输出
};

class Button {              // 按钮组件
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
    Button(string Tex, int x, int y, void(*func)());        // 自带 lambda 表达式 的按钮
    Button(string Tex, int x, int y, int xxl);              // 返回按钮的回调优化, (使用方法 : xxl 中 填 BACK)
    void setColor(int front, int back);                     // 改变 未被选中颜色, 与 被选中颜色
    int onClick();                                          // 返回是否被选中 (被选中 返回 1)
    void click();                                           // 选中 按钮
    void release();                                         // 取消选中 (被选中的前一个)
    void show();                                            // 将按钮文本与颜色输出
    void(*Func)() = NULL;                                   // 按钮 被触发后执行的函数

};

#endif