#pragma once

#ifndef UI_ENGINE
#define UI_ENGINE

//系统库
#include<bits/stdc++.h>
#include<Windows.h>
#include<conio.h>

// 内部库
#include<loop.h>
#include<render.h>
#include<assemble.h>
#include<listen.h>

#define BACK 1


using namespace std;

// 全局变量声明
extern int Signal_change;
extern int loop_cnt;                // 场景主循环计数器
extern int back;                    // 是否触发场景返回
extern int thread_shutDown;         // (已废弃)
extern int signal_will_stop;        // 线程终止预告  (返回按钮回调优化)


// 基础 API
// 测试函数
void print(string s);
// 通用绘制函数                                               
void powerprint(string word, short x, short y, int color, int val);
// 绘制边界 
void make_boundary(int x, int y, int type);                         


// 内部 API
// 键盘捕获
void kb_get();
// 创建监听线程                                                      
DWORD WINAPI ThreadListen(LPVOID pM);
// 光标移动                               
void goto_xy(short x, short y); 
// 显示光标`                                    
void show_cursor();
// 隐藏光标                                                 
void HideCursor();
// 改变终端颜色                                                  
void set_console_color(unsigned short color_index);
// 界面回调函数                 
void Back();                                                        

#endif