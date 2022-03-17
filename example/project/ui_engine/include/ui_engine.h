#pragma once

#ifndef UI_ENGINE
#define UI_ENGINE

//系统库
#include<bits/stdc++.h>
#include<Windows.h>
#include<conio.h>

// 内部库
#include<loop.h>
#include<interaction.h>


using namespace std;


// 基础 API
void print(string s);
void powerprint(string word, short x, short y, int color, int val);


// 内部 API
void kb_get();// 键盘捕获
DWORD WINAPI ThreadListen(LPVOID pM);// 创建监听线程
void goto_xy(short x, short y);// 光标移动
void show_cursor();// 显示光标`
void HideCursor();// 隐藏光标
void set_console_color(unsigned short color_index);// 改变终端颜色

#endif