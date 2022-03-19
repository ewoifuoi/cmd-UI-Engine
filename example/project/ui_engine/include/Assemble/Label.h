
#pragma once 
#ifndef LABLE

#define LABLE

class Label {               // 标签组件                     (虽然可能没啥用 2333)
private:
    string text;
    pair<int, int> loc;
    int color;
    
public:
    Label(string Tex, int x, int y);
    Label(string Tex, int x, int y, int Color);
    void randColorShow(int p);                              // 随机颜色 (霓虹灯效果) 参数为间隔周期
    void show();                                            // 简单输出
    void removeTo(int x, int y);                            // 改变位置并输出
};


#endif