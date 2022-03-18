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


using namespace std;

extern int Signal_change;
extern int loop_cnt;
extern int back;
extern int thread_shutDown;


// 基础 API
void print(string s);// 测试函数
void powerprint(string word, short x, short y, int color, int val);// 通用绘制函数
void make_boundary(int x, int y, int type);// 绘制边界


// 内部 API
void kb_get();// 键盘捕获
DWORD WINAPI ThreadListen(LPVOID pM);// 创建监听线程
void goto_xy(short x, short y);// 光标移动
void show_cursor();// 显示光标`
void HideCursor();// 隐藏光标
void set_console_color(unsigned short color_index);// 改变终端颜色
void Back(); // 界面回调函数

#endif